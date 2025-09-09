/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  IoHwAb_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  IoHwAb_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <IoHwAb_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_IoHwAb_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "vstdlib.h"
#include "Spi.h"
#include "IfxSrc_reg.h"
#include "Irq.h"
#include "TLE8888qk.h"
#include "Adc_Sample.h"
#include "TJA1145.h"
#include "Dio.h"
#include "PwmIf.h"
#include "CanNm.h"
#include "RTL8211FI.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * IDT_Arry8Bytes: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define IoHwAb_SWC_START_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Init_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_SWC_CODE) IoHwAb_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Init
 *********************************************************************************************************************/
  Adc_SampleInit();

  /*SPI Irq Init*/
  IRQ_SFR_MODIFY32 (SRC_QSPI3TX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_TX_TOS | (uint32) IRQ_QSPI3_TX_PRIO));
  IRQ_SFR_MODIFY32 (SRC_QSPI3RX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_RX_TOS | (uint32) IRQ_QSPI3_RX_PRIO));

  SRC_QSPI3RX.B.SRE 	= 1;
  SRC_QSPI3TX.B.SRE 	= 1;

  Tja1145_Init();
  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_7_IN0, 1 );
  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_8_IN1, 1 );
  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_9_IN2, 1 );
  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_10_IN3, 1 );

  /*Enable PN message filter.*/
  CanNm_SetPnMessageFilterEnabled(0,1);
  CanNm_SetPnMessageFilterEnabled(1,1);
  
  PwnIf_Start();

//  Rtl8211_Init();
//  Tja1145_GoSleep();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_SWC_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_P_Arry8Bytes_DEP_Arry8Bytes(const uint8 *data)
 *     Argument data: uint8* is of type IDT_Arry8Bytes
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable_doc
 *********************************************************************************************************************/
uint8 sts_SV = 0;
uint8 SendArry[8] = { 1,2,3,4,5,6,7,8 };
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_SWC_CODE) IoHwAb_SWC_Runnable(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable
 *********************************************************************************************************************/
  Adc_SampleMain();
  TLE8888qk_Main();
  PwnIf_Main();
//  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_7_IN0, sts_SV );
  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_8_IN1, sts_SV );
//  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_9_IN2, sts_SV );
//  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_10_IN3, sts_SV );
  if( sts_SV == 0 )
  {
    sts_SV = 1;
  }
  else
  {
    sts_SV = 0;
  }
  Rte_Write_P_Arry8Bytes_DEP_Arry8Bytes(SendArry);
  Rtl8211_Main();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IoHwAb_SWC_STOP_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
