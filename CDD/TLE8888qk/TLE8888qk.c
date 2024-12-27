#include "TLE8888qk.h"
#include "vstdlib.h"

#define CMD_READ			(0 << 0)
#define CMD_WRITE			(1 << 0)
/* C7:1 */
#define CMD_REG_ADDR(a)		(((a) & 0x7f) << 1)
/* CD7:0 */
#define CMD_REG_DATA(d)		(((d) & 0xff) << 8)

#define CMD_W(a, d)			((uint16)((CMD_WRITE | CMD_REG_ADDR(a) | CMD_REG_DATA(d))))
#define CMD_R(a)        ((uint16)((CMD_READ | CMD_REG_ADDR(a))))

#define REG_INVALID			0x00

/* Command registers */
#define CMD_CMD0(d)			CMD_W(0x01, d)
#define REG_CMD0_MRSE		BIT(0)
#define REG_CMD0_MRON		BIT(1)
/* Window watchdog open WWDOWT window time = 12.8 mS - fixed value for TLE8888QK */
#define CMD_WWDSERVICECMD	CMD_W(0x15, 0x03)
#define CMD_FWDRESPCMD(d)	CMD_W(0x16, d)
#define CMD_FWDRESPSYNCCMD(d)	CMD_W(0x17, d)

#define CMD_SR_CODE			0x1a
#define CMD_SR				CMD_W(CMD_SR_CODE, 0x03)
#define CMD_OE_SET			CMD_W(0x1c, 0x02)
#define CMD_OE_CLR			CMD_W(0x1c, 0x01)
#define CMD_CHIP_UNLOCK		CMD_W(0x1e, 0x01)
//#define CMD_CHIP_LOCK		CMD_W(0x1e, 0x02)

/* Diagnostic registers */
#define REG_DIAG(n)			(0x20 + ((n) & 0x01))
#define CMD_DIAG(n)			CMD_R(REG_DIAG(n))
#define CMD_VRSDIAG(n)		CMD_R(0x22 + ((n) & 0x01))
#define CMD_COMDIAG			CMD_R(0x24)
#define CMD_OUTDIAG(n)		CMD_R(0x25 + ((n) & 0x07))
#define CMD_PPOVDIAG		CMD_R(0x2a)
#define CMD_BRIDIAG(n)		CMD_R(0x2b + ((n) & 0x01))
#define CMD_IGNDIAG			CMD_R(0x2d)
#define CMD_WDDIAG			CMD_R(0x2e)

/* Status registers */
#define REG_OPSTAT(n)		(0x34 + ((n) & 0x01))
#define CMD_OPSTAT(n)		CMD_R(REG_OPSTAT(n))
#define REG_OPSTAT_MR		BIT(3)
#define REG_OPSTAT_WAKE		BIT(1)
#define REG_OPSTAT_KEY		BIT(0)
#define REG_WWDSTAT			0x36
#define CMD_WWDSTAT			CMD_R(REG_WWDSTAT)
#define REG_FWDSTAT(n)		(0x37 + ((n) & 0x01))
#define CMD_FWDSTAT(n)		CMD_R(REG_FWDSTAT(n))
#define REG_TECSTAT			0x39
#define CMD_TECSTAT			CMD_R(REG_TECSTAT)

/* Configuration registers */
#define CMD_OUTCONFIG(n, d)	CMD_W(0x40 + (n), d)
#define CMD_BRICONFIG(n, d)	CMD_W(0x46 + ((n) & 0x01), d)
#define CMD_BRICONFIG_READ(n)	CMD_R(0x46 + ((n) & 0x01))
#define CMD_IGNCONFIG(d)	CMD_W(0x48, d)
#define CMD_VRSCONFIG(n, d)	CMD_W(0x49 + ((n) & 0x03), d)
#define CMD_OPCONFIG0(d)	CMD_W(0x4e, d)
#define CMD_INCONFIG(n, d)	CMD_W(0x53 + ((n) & 0x03), d)
#define CMD_DDCONFIG(n, d)	CMD_W(0x57 + ((n) & 0x03), d)
#define CMD_OECONFIG(n, d)	CMD_W(0x5b + ((n) & 0x03), d)
#define CMD_OECONFIG_READ(n)	CMD_R(0x5b + ((n) & 0x03))

/* Control registers */
#define CMD_CONT(n, d)		CMD_W(0x7b + ((n) & 0x03), d)

#define getRegisterFromResponse(x) (((x) >> 1) & 0x7f)
#define getDataFromResponse(x) (((x) >> 8) & 0xff)

#define FWD_PERIOD_MS		      (20)
#define WWD_PERIOD_MS		      (110)
#define WWD_TASK_PERIOD_MS		(10)

typedef enum
{
  TLE8888QK_INIT_STATE = 0,
  TLE8888QK_SAFE_STATE,
  TLE8888QK_READY_STATE,
  TLE8888QK_WATCHDOGRESET_STATE,
}Tle8888qk_State_e;

/*Function watchdog QA list */
const uint8 tle8888_fwd_responses[16][4] = 
{
	/* Reverse order:
	 * RESP3,RESP2,RESP1,RESP0 */
	{0xFF, 0x0F, 0xF0, 0x00},
	{0xB0, 0x40, 0xBF, 0x4F},
	{0xE9, 0x19, 0xE6, 0x16},
	{0xA6, 0x56, 0xA9, 0x59},
	{0x75, 0x85, 0x7A, 0x8A},
	{0x3A, 0xCA, 0x35, 0xC5},
	{0x63, 0x93, 0x6C, 0x9C},
	{0x2C, 0xDC, 0x23, 0xD3},
	{0xD2, 0x22, 0xDD, 0x2D},
	{0x9D, 0x6D, 0x92, 0x62},
	{0xC4, 0x34, 0xCB, 0x3B},
	{0x8B, 0x7B, 0x84, 0x74},
	{0x58, 0xA8, 0x57, 0xA7},
	{0x17, 0xE7, 0x18, 0xE8},
	{0x4E, 0xBE, 0x41, 0xB1},
	{0x01, 0xF1, 0x0E, 0xFE}
};

/*Watchdog error count */
uint8   wwd_err_cnt = 0;
uint8   fwd_err_cnt = 0;
uint8   tot_err_cnt = 0;
uint8   initflg     = 0;

/*Watchdog timinmg count */
uint32	wwd_ts = 0;
uint32	fwd_ts = 0;

/*Out21-24 config reg val */
uint16 BRICONFIG0_Val  = 0;
uint16 OEConfig2_Val   = 0;
uint16 CMD_CONT_Val    = 0;
uint16 bridiag0_Val    = 0;
uint16 bridiag1_Val    = 0;

/*Out21-24 config reg response val */
uint16 bridge0_reg     = 0;
uint16 oeconfig2_reg  = 0;
uint16 cont2_reg      = 0;
uint16 bridiag0       = 0;
uint16 bridiag1       = 0;

Tle8888qk_State_e Tle8888qk_State = 0;

uint8 SpiRxBuf_Tle8888[2]={0};

uint8 TLE9201_Spi_Trans_Ok = 1;
void SpiSeq_TLE9201_Notify()
{
  TLE9201_Spi_Trans_Ok = 1;
}

void SpiSeq_TLE8888_Notify()
{
}

void  chip_reset();
void  TLE8888qk_Init();
void  TLE8888qk_Main();
void  TLE8888qk_SpiTransmit(uint16 tx, uint16 *rx_ptr);
void  TLE8888qk_WwdgFeed();
void  TLE8888qk_FwdgFeed(); 
uint8 TLE8888qk_WdgFeed();

void TLE8888qk_SpiTransmit(uint16 tx, uint16 *rx_ptr)
{
  if( rx_ptr != NULL_PTR )
  {
    Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE8888,(uint8*)&tx,rx_ptr,2);
  }
  else
  {
    Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE8888,(uint8*)&tx,SpiRxBuf_Tle8888,2);
  }

  Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_TLE8888);
}


uint8	 wd_diag[4096] = {0};
uint16 index1 = 0;
uint8 wd_get_status()
{
  uint8 ret = 0;
	uint16 reg;
  index1++;
  if(index1 > 4095)
  {
    index1 = 0;
  }

  /* Get wdog diag status */
	TLE8888qk_SpiTransmit(CMD_WDDIAG, NULL_PTR);
	TLE8888qk_SpiTransmit(CMD_WDDIAG, &reg);

	wd_diag[index1] = getDataFromResponse(reg);

	if (wd_diag[index1] & 0x70)
  {
		/* Reset caused by TEC
		 * Reset caused by FWD
		 * Reset caused by WWD */
//		 return -1;
      ret = 2;
		 return ret;
	}
	if (wd_diag[index1] & 0x0f)
   {
		/* Some error in WD handling */
    ret = 1;
		return ret;
	}

	return ret;
}

void TLE8888qk_FwdgFeed() 
{
	uint16 reg;

	TLE8888qk_SpiTransmit(CMD_FWDSTAT(1), NULL_PTR);
	/* here we get response of the 'FWDStat1' above */
	TLE8888qk_SpiTransmit(CMD_WDDIAG, &reg);

	uint8 data = getDataFromResponse(reg);
	uint8 fwdquest = data & 0xF;
	uint8 fwdrespc = (data >> 4) & 3;

	/* Table lines are filled in reverse order (like in DS) */
	uint8 response = tle8888_fwd_responses[fwdquest][3 - fwdrespc];

	if (fwdrespc != 0) 
  {
		TLE8888qk_SpiTransmit(CMD_FWDRESPCMD(response), NULL_PTR);
	} 
  else 
  {
		/* to restart heartbeat timer, sync command should be used for response 0 */
		TLE8888qk_SpiTransmit(CMD_FWDRESPSYNCCMD(response), NULL_PTR);
	}
}

void chip_reset()
{
	TLE8888qk_SpiTransmit(CMD_SR, NULL_PTR);
	/**
	 * Table 8. Reset Times. All reset times not more than 20uS
	 */
}

void TLE8888qk_Main()
{

  switch (Tle8888qk_State)
  {
    case TLE8888QK_INIT_STATE:
      TLE8888qk_Init();
      Tle8888qk_State = TLE8888QK_SAFE_STATE;
      break;

    case TLE8888QK_SAFE_STATE:
      TLE8888qk_WdgFeed();
      break;

    case TLE8888QK_READY_STATE:
      TLE8888qk_WdgFeed();
      break;

    case TLE8888QK_WATCHDOGRESET_STATE:
      TLE8888qk_WdgFeed();
      break;

    default:
    {
      /* Do nothing*/
    }
    break;
  }
}

void TLE8888qk_Init()
{
  chip_reset();
}

uint8 TLE8888qk_WdgFeed()
{
  uint8 update_status = 0;
  
  fwd_ts += WWD_TASK_PERIOD_MS;
  wwd_ts += WWD_TASK_PERIOD_MS;

  /* Window watchdog refresh */
  if (wwd_ts >= WWD_PERIOD_MS)
  {
    update_status = 1;
    wwd_ts = 0;
    TLE8888qk_WwdgFeed();
  }

  /* Function watchdog refresh */
  if (fwd_ts >= FWD_PERIOD_MS) 
  {
    update_status = 1;
    fwd_ts = 0;
    TLE8888qk_FwdgFeed();
  }

  if (update_status) 
  {
    uint16 wwd_reg, fwd_reg, tec_reg;

    TLE8888qk_SpiTransmit(CMD_WWDSTAT, NULL_PTR);
    TLE8888qk_SpiTransmit(CMD_FWDSTAT(0), &wwd_reg);
    TLE8888qk_SpiTransmit(CMD_TECSTAT, &fwd_reg);
    TLE8888qk_SpiTransmit(CMD_OE_SET, &tec_reg);

    wwd_err_cnt = getDataFromResponse(wwd_reg) & 0x7f;
    fwd_err_cnt = getDataFromResponse(fwd_reg) & 0x7f;
    tot_err_cnt = getDataFromResponse(tec_reg) & 0x7f;

    /* No watchdog error occurred */
    if((wwd_err_cnt == 0) && (fwd_err_cnt == 0) && (tot_err_cnt == 0))
    {
      if(initflg == 0)
      {
        initflg = 1;
        TLE8888qk_SpiTransmit(CMD_CHIP_UNLOCK, NULL_PTR);
        TLE8888qk_SpiTransmit(CMD_OE_SET, NULL_PTR);
      }
      else if(initflg == 1)
      {
        initflg = 2;
        TLE8888qk_SpiTransmit(CMD_BRICONFIG(0,0xFF),&bridge0_reg);
        TLE8888qk_SpiTransmit(CMD_BRICONFIG(0,0xFF),&bridge0_reg);
      }
      else if(initflg == 2)
      {
        initflg = 3;
		    TLE8888qk_SpiTransmit(CMD_OECONFIG(2,0xF0),&oeconfig2_reg);
		    TLE8888qk_SpiTransmit(CMD_OECONFIG(2,0xF0),&oeconfig2_reg); 
      }
      else if(initflg == 3)
      {
        initflg = 4;
        TLE8888qk_SpiTransmit(CMD_CONT(2,0xF0),&cont2_reg);
        TLE8888qk_SpiTransmit(CMD_CONT(2,0xF0),&cont2_reg);
      }
      else if(initflg == 4)
      {
        initflg = 5;
        TLE8888qk_SpiTransmit(CMD_BRIDIAG(0),&bridiag0);
        TLE8888qk_SpiTransmit(CMD_BRIDIAG(0),&bridiag0);
      }
      else if(initflg == 5)
      {
        initflg = 4;
        TLE8888qk_SpiTransmit(CMD_BRIDIAG(1),&bridiag1);
        TLE8888qk_SpiTransmit(CMD_BRIDIAG(1),&bridiag1);
      }
      else if(initflg == 6)
      {
        initflg = 7;
        TLE8888qk_SpiTransmit(CMD_BRICONFIG_READ(0),&bridge0_reg);
        TLE8888qk_SpiTransmit(CMD_BRICONFIG_READ(0),&bridge0_reg);
      }
        else if(initflg == 7)
      {
        initflg = 4;
        TLE8888qk_SpiTransmit(CMD_OECONFIG_READ(2),&oeconfig2_reg);
        TLE8888qk_SpiTransmit(CMD_OECONFIG_READ(2),&oeconfig2_reg);
      }


      BRICONFIG0_Val  = getDataFromResponse(bridge0_reg) & 0x7f;
      OEConfig2_Val   = getDataFromResponse(oeconfig2_reg) & 0x7f;
      CMD_CONT_Val    = getDataFromResponse(cont2_reg) & 0x7f;

      bridiag0_Val   = getDataFromResponse(bridiag0) & 0x7f;
      bridiag1_Val    = getDataFromResponse(bridiag1) & 0x7f;
    }
  }
}

void TLE8888qk_WwdgFeed() 
{
	TLE8888qk_SpiTransmit(CMD_WWDSERVICECMD, NULL_PTR);
}