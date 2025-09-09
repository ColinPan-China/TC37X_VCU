#include "RTL8211FI.h"
#include "EthIf.h"
#include "Mcal_Compiler.h"


uint16 phy_id1 = 0;
uint16 phy_id2 = 0;
uint16 reg_value = 0;
uint16 val = 0;
uint16 reset_status = 0;
uint8 Temp_Macaddress[6];
uint8 Ret_SetMode = 0;

void Timer_DelayMs(uint32 ms)
{
  ms++;
  if( ms != 0)
  {
    NOP();
  }
}

void local_GETH_PHY_Reset(uint8 phy_addr)
{
  uint16 reg_bmcr;

  /* Reset PHY*/
  Eth_30_Tc3xx_ReadMii(0, 1, MII_BMCR, &reg_bmcr);
  reg_bmcr |= BMCR_RESET;
  Eth_30_Tc3xx_WriteMii(0, 1, MII_BMCR, reg_bmcr);

  /* Wait for the reset to complete */
  do
  {
    Eth_30_Tc3xx_ReadMii(0, 1, MII_BMCR, &reg_bmcr);
  } while ((reg_bmcr & BMCR_RESET) != 0);
}

void Rtl8211_Init()
{
//  do
//  {
//    /* Check Device Identification. */
//    Eth_30_Tc3xx_ReadMii(0, 1, MII_PHYSID1, &phy_id1);
//    Eth_30_Tc3xx_ReadMii(0, 1, MII_PHYSID2, &phy_id2);
//  } while((phy_id1 != RTL8211F_PHY_ID1) && (phy_id2 != RTL8211F_PHY_ID2));

//  local_GETH_PHY_Reset(1);
  Timer_DelayMs(PHY_READ_DELAY);

  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0xa43);
  Eth_30_Tc3xx_ReadMii(0, 1, 0x19, &reg_value);
 
  reg_value |= 0x1;
  Eth_30_Tc3xx_WriteMii(0, 1, 0x19, reg_value);
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0x0);

  /* A PHY reset should be issued after setting this bits in PHYCR2 */
  local_GETH_PHY_Reset(1);
  Timer_DelayMs(PHY_READ_DELAY);

  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0xd08);
  Eth_30_Tc3xx_ReadMii(0, 1, 0x11, &reg_value);

  /* Adding TX-delay for RGMII mode*/
  {
    reg_value |= RTL8211F_TX_DELAY;
  }

  Eth_30_Tc3xx_WriteMii(0, 1, 0x11, reg_value);
  /* restore to default page 0 */
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0x0);

  /* Disable green Ethernet */
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0xa43);
  Eth_30_Tc3xx_WriteMii(0, 1, 27, 0x8011);
  Eth_30_Tc3xx_WriteMii(0, 1, 28, 0x573f);
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0x0);

  /* Set green LED for Link, yellow LED for Active */
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0xd04);
  Eth_30_Tc3xx_WriteMii(0, 1, 0x10, 0x617f);
  Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0x0);

  /* Read Device ID from Ethernet transceiver(PHY) */
//  Eth_30_Tc3xx_ReadMii( 0, 1, MII_PHYSID1, &phy_id1);
//  Eth_30_Tc3xx_ReadMii( 0, 1, MII_PHYSID2, &phy_id2);
  /* Configure Link Speed and Duplex mode in Ethernet transceiver (PHY) */
  reg_value = BMCR_SPEED100 | BMCR_FULLDPLX;
  reset_status = Eth_30_Tc3xx_WriteMii(0, 1, MII_BMCR, reg_value);

  do
  {
    Timer_DelayMs(PHY_READ_DELAY);
    /*Link Speed status */
    Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0xa43);
    Eth_30_Tc3xx_ReadMii(0, 1, RTL8211F_PHY_STATUS, &val);
    Eth_30_Tc3xx_WriteMii(0, 1, RTL8211F_PAGE_SELECT, 0);
  } while((val & RTL8211F_PHYSTAT_LINK) != 0x0004);

  /*Delay added since ETh_init takes time to stabilize */
  Timer_DelayMs(ETH_PHY_INIT_DURATION);

}


#define ETH_TX_FRAME_LENGTH (66U)

static Eth_BufIdxType TmpBuffIdx;
static uint8* TmpBuffPtr;
uint16 LenBytePtr = ETH_TX_FRAME_LENGTH;

static uint8 MacDestArpaddress[6] =
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}; /*Broadcast*/

void TxBufferFill(uint8 *pTxBuff, uint16 DataLen )
{
  uint8 i = 0;

  for(i = 0 ; i < DataLen ; i++)
  {
    *(pTxBuff + i) = i;
  }

  return;
}


uint8 Ret_ptb = 0;
uint8 Ret_Tx = 0;
void Tx_EthFrame (void)
{
  #if 0
  uint16 LenBytePtr = ETH_TX_FRAME_LENGTH;
    /* Request the data buffer for frame Transmission */
  Ret_ptb = EthIf_ProvideTxBuffer(0, 0, 0, &TmpBuffIdx, &TmpBuffPtr, &LenBytePtr);
  /* Application Layer fill the buffer with frame data*/
  
  if(Ret_ptb == 0)
  {
    TxBufferFill(TmpBuffPtr, LenBytePtr);
    /* Transmit already filled buffer using the BuffIdx*/
    Ret_Tx = EthIf_Transmit(0, TmpBuffIdx,ETH_FRAME_TYPE_1, 1, LenBytePtr, &MacDestArpaddress[0]);
  }
 
  #else
  /* Request the data buffer for frame Transmission */
  Ret_ptb = Eth_30_Tc3xx_ProvideTxBuffer(0, &TmpBuffIdx, &TmpBuffPtr, &LenBytePtr);
  if(Ret_ptb == 0)
  {
    LenBytePtr = ETH_TX_FRAME_LENGTH; 

    /* Application Layer fill the buffer with frame data*/
    TxBufferFill(TmpBuffPtr, LenBytePtr);

    /* Transmit already filled buffer using the BuffIdx*/
    Ret_Tx = Eth_30_Tc3xx_Transmit(0, TmpBuffIdx,ETH_FRAME_TYPE_1, 1, LenBytePtr, &MacDestArpaddress[0]);

  }
#endif
}
uint8 RdMac = 0;
void Rtl8211_Main()
{
  if(RdMac == 1)
  {
    Eth_30_Tc3xx_GetPhysAddr((uint8)0, &Temp_Macaddress[0]);
  }


  Tx_EthFrame();
//  EthRegCalculate();
}


  typedef struct
  {
    uint32 baseAddr;
    uint32 offsetVal;
    uint32 RegVal;
  }DebugRead;

DebugRead EthRegTbl[] =
{
  {  0xF001D000u,      0x0000u,  0  },
  {  0xF001D000u,      0x0004u,  0  },
  {  0xF001D000u,      0x0008u,  0  },
  {  0xF001D000u,      0x0070u,  0  },
  {  0xF001D000u,      0x0090u,  0  },
  {  0xF001D000u,      0x00A0u,  0  },
  {  0xF001D000u,      0x00A4u,  0  },
  {  0xF001D000u,      0x00A8u,  0  },
  {  0xF001D000u,      0x00B4u,  0  },
  {  0xF001D000u,      0x0700u,  0  },
  {  0xF001D000u,      0x070Cu,  0  },
  {  0xF001D000u,      0x0710u,  0  },
  {  0xF001D000u,      0x0800u,  0  },
  {  0xF001D000u,      0x0B00u,  0  },
  {  0xF001D000u,      0x0C00u,  0  },
  {  0xF001D000u,      0x0C30u,  0  },
  {  0xF001D000u,      0x0D00u,  0  },
  {  0xF001D000u,      0x0D30u,  0  },
  {  0xF001D000u,      0x0D3Cu,  0  },
  {  0xF001D000u,      0x1000u,  0  },
  {  0xF001D000u,      0x1004u,  0  },
  {  0xF001D000u,      0x1100u,  0  },
  {  0xF001D000u,      0x1104u,  0  },
  {  0xF001D000u,      0x1108u,  0  },
  {  0xF001D000u,      0x1134u,  0  },
  {  0xF001D000u,      0x2040u,  0  },
};


uint32 RegLocal[32];
#define ETHREG_SIZE ((sizeof(EthRegTbl))/(sizeof(EthRegTbl[0])))

uint8 einitflg = 0;
void EthRegCalculate()
{
  uint32 len   = ETHREG_SIZE;
  uint32 index = 0; 
  uint32 *pReg = 0;

  for( index = 0;index < len; index++ )
  {
    pReg = (uint32*)(EthRegTbl[index].baseAddr +EthRegTbl[index].offsetVal);
    RegLocal[index] = *pReg;
  }
}


static uint8 ETH_CNT = 0;
void Msn_RxIndication(uint8 a, uint16 b, boolean c, P2VAR(uint8, AUTOMATIC, ETHIF_APPL_VAR) d, P2VAR(uint8, AUTOMATIC, ETHIF_APPL_VAR) e, uint16 f)
{
  ETH_CNT++;
  if(ETH_CNT == 1)
  {
    NOP();
  }
}



void Msn_TxConfirmation(uint8 a, uint8 b)
{
  ETH_CNT++;
  if(ETH_CNT == 1)
  {
    NOP();
  }
}
