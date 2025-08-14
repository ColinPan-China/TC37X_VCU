#include "TLE8888qk.h"
#include "vstdlib.h"
#include "Dio.h"

typedef enum
{
  TLE8888QK_INIT_STATE = 0,
  TLE8888QK_SAFE_STATE,
  TLE8888QK_READY_STATE,
  TLE8888QK_WATCHDOGRESET_STATE,
}Tle8888qk_State_e;

typedef struct TLE8888qk_Config
{
  uint16  TxCmd;
  uint16  RxCmd;
  uint8   RegVal;
}TLE8888qk_CfgType;

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



TLE8888qk_CfgType TLE8888qk_CfgTable[] =
{
  { CMD_CHIP_UNLOCK,        0,  0 },
  { CMD_OE_SET,             0,  0 },
#if 1
  { CMD_DDCONFIG(2,0XF0),   0,  0 },//OUT21-24,direct pin control
  { CMD_INCONFIG(0,0X10),   0,  0 },//Input9  assign to OUT21
  { CMD_INCONFIG(1,0X11),   0,  0 },//Input10 assign to OUT22
  { CMD_INCONFIG(2,0X12),   0,  0 },//Input11 assign to OUT23
  { CMD_INCONFIG(3,0X13),   0,  0 },//Input12 assign to OUT24

  /*LOWOUT1-4,direct pin control*/
  { CMD_DDCONFIG(0,0X0F),   0,  0 },

#endif
  { CMD_BRICONFIG(0,0xFF),  0,  0 },
  { CMD_OECONFIG(2,0xF0),   0,  0 },

  /*Enable LOWOut14,Out16*/
  { CMD_OECONFIG(1,0xA0),   0,  0 },
  { CMD_CONT(1,0xA0),       0,  0 },

  /*Enable LOWOUT8*/
  { CMD_OECONFIG(0,0x80),   0,  0 },
  { CMD_CONT(0,0x80),       0,  0 },

//  { CMD_OECONFIG(3,0x0F),   0,  0 },IG1-IG4
//  { CMD_CONT(3,0x0F),       0,  0 },

  { CMD_CONT(2,0xF0),       0,  0 },
};

TLE8888qk_CfgType TLE8888qk_DiagTable[] =
{
  { CMD_BRIDIAG(0),        0,  0 },
  { CMD_BRIDIAG(1),        0,  0 },
  { CMD_BRICONFIG_READ(0), 0,  0 },
  { CMD_OECONFIG_READ(2),  0,  0 },
  { CMD_OPSTAT(0),         0,  0 },
  { CMD_OPSTAT(1),         0,  0 }, 
};

#define TLE8888QK_CFGCNT (sizeof(TLE8888qk_CfgTable)/sizeof(TLE8888qk_CfgType))
#define TLE8888QK_DIAGCNT (sizeof(TLE8888qk_DiagTable)/sizeof(TLE8888qk_CfgType))


uint8 CfgIndex  = 0;
uint8 DiagIndex  = 0;

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
void  TLE8888qk_Config(); 
void  TLE8888qk_Init();
void  TLE8888qk_Main();
void  TLE8888qk_SpiTransmit(uint16 tx, uint16 *rx_ptr);
void  TLE8888qk_WwdgFeed();
void  TLE8888qk_FwdgFeed(); 
uint8 TLE8888qk_WdgFeed();
void  PMIC_DiagStatus();

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
uint8 PMIC_GetWdgStatus()
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
  CfgIndex = 0;
  chip_reset();
}

uint8 TLE8888qk_WdgFeed()
{
  uint8 update_status = 0;
  uint8 ret           = 1;

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
      ret = 0;
      TLE8888qk_Config();
      if( CfgIndex < TLE8888QK_CFGCNT )
      {
        return 0;
      }
      PMIC_DiagStatus();
#if 0
      if(initflg == 0)
      {
        initflg = 1;
//        TLE8888qk_SpiTransmit(CMD_CHIP_UNLOCK, NULL_PTR);
//        TLE8888qk_SpiTransmit(CMD_OE_SET, NULL_PTR);
      }
      else if(initflg == 1)
      {
        initflg = 2;
//        TLE8888qk_SpiTransmit(CMD_BRICONFIG(0,0xFF),&bridge0_reg);
//        TLE8888qk_SpiTransmit(CMD_BRICONFIG(0,0xFF),&bridge0_reg);
      }
      else if(initflg == 2)
      {
        initflg = 3;
//		    TLE8888qk_SpiTransmit(CMD_OECONFIG(2,0xF0),&oeconfig2_reg);
//		    TLE8888qk_SpiTransmit(CMD_OECONFIG(2,0xF0),&oeconfig2_reg); 
      }
      else if(initflg == 3)
      {
        initflg = 4;
//        TLE8888qk_SpiTransmit(CMD_CONT(2,0xF0),&cont2_reg);
//        TLE8888qk_SpiTransmit(CMD_CONT(2,0xF0),&cont2_reg);
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
#endif
    }
  }

  return ret;
}

void TLE8888qk_WwdgFeed() 
{
	TLE8888qk_SpiTransmit(CMD_WWDSERVICECMD, NULL_PTR);
}

uint8 sts_bridge = 0;
void TLE8888qk_Config() 
{

  if( CfgIndex < TLE8888QK_CFGCNT )
  {
    TLE8888qk_SpiTransmit( TLE8888qk_CfgTable[CfgIndex].TxCmd,
                            &TLE8888qk_CfgTable[CfgIndex].RxCmd );
    TLE8888qk_SpiTransmit( TLE8888qk_CfgTable[CfgIndex].TxCmd,
                            &TLE8888qk_CfgTable[CfgIndex].RxCmd );

    TLE8888qk_CfgTable[CfgIndex].RegVal = getDataFromResponse(TLE8888qk_CfgTable[CfgIndex].RxCmd) & 0x7f;
    CfgIndex++;
  }

  /*Direct IO control*/
#if 0
  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P2_0_IN12, sts_bridge);
  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P2_1_IN11, sts_bridge);
  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P2_2_IN10, sts_bridge);
  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P2_3_IN9,  sts_bridge);
#endif
  if( sts_bridge == 0 )
  {
    sts_bridge = 1;
  }
  else
  {
    sts_bridge = 0;
  }
  /*Direct IO control*/

}

void PMIC_DiagStatus()
{
  if( DiagIndex < TLE8888QK_DIAGCNT )
  {
    TLE8888qk_SpiTransmit( TLE8888qk_DiagTable[DiagIndex].TxCmd,
                            &TLE8888qk_DiagTable[DiagIndex].RxCmd );
    TLE8888qk_SpiTransmit( TLE8888qk_DiagTable[DiagIndex].TxCmd,
                            &TLE8888qk_DiagTable[DiagIndex].RxCmd );

    TLE8888qk_DiagTable[DiagIndex].RegVal = getDataFromResponse(TLE8888qk_DiagTable[DiagIndex].RxCmd) & 0x7f;

  }

  DiagIndex++;
  if(DiagIndex >= TLE8888QK_DIAGCNT)
  {
    DiagIndex = 0;
  }
}