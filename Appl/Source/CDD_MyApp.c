#include "Rte.h"
#include "Rte_Cbk.h"
#include "Appl_Cbk.h"







FUNC(void, COM_APPL_CODE) Com_Msg200h_Timeout_Notification(void)
{
  Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3( 0x00U );	
}



FUNC(void, COM_APPL_CODE) Com_Msg201h_Timeout_Notification(void)
{
  Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2( 0x00U );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3( 0x00U );
}