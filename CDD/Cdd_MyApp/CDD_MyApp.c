#include "Rte.h"
#include "Rte_Cbk.h"
#include "Appl_Cbk.h"
#include "Dcm.h"
#include "CDD_MyApp.h"




volatile const uint8 Calib_Sig0[32] = { 0, 1, 2, 3, 4, 5, 6, 7,
                                        8, 9, 10,11,12,13,14,15,
                                       16, 17,18,19,20,21,22,23,
                                       24,25,26,27,28,29,30,31};
volatile uint8 Calib_Sig1[32] = { 0, 1, 2, 3, 4, 5, 6, 7,
                                        8, 9, 10,11,12,13,14,15,
                                       16, 17,18,19,20,21,22,23,
                                       24,25,26,27,28,29,30,31};

volatile uint8 Calib_Sig2[32] = {0};

uint8 Msg200h_Timeout = 0;

FUNC(void, COM_APPL_CODE) Com_Msg200h_Timeout_Notification(void)
{
  Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0( Calib_Sig0[0] );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1( Calib_Sig0[0] );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2( Calib_Sig0[0] );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3( Calib_Sig0[0] );
  Msg200h_Timeout = 1;	
}

FUNC(void, COM_APPL_CODE) Com_Msg201h_Timeout_Notification(void)
{
  Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0( Calib_Sig1[0] );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1( Calib_Sig1[0] );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2( Calib_Sig1[0] );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3( Calib_Sig1[0] );
}

void SetMsg200hTimeout( uint8 val )
{
  Msg200h_Timeout = val;
}

uint8 GetMsg200hTimeout()
{
  return Msg200h_Timeout;
}

FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmService_HardReset(
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  Mcu_PerformReset();
  return 0;
}


//ISR( LinIsr_Asclin_0 ){  }

