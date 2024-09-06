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
 *             File:  Com_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  Com_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <Com_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Com_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * VcuRxMsg1_Sig0: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig1: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig2: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig3: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig0: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig1: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig2: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig3: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig0: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig1: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig2: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig3: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig0: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig1: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig2: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig3: Integer in interval [-32768...32767]
 *
 *********************************************************************************************************************/


#define Com_SWC_START_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Com_Runnable_2ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0(VcuRxMsg1_Sig0 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1(VcuRxMsg1_Sig1 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2(VcuRxMsg1_Sig2 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3(VcuRxMsg1_Sig3 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0(VcuRxMsg2_Sig0 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1(VcuRxMsg2_Sig1 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2(VcuRxMsg2_Sig2 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3(VcuRxMsg2_Sig3 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0(VcuTxMsg1_Sig0 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1(VcuTxMsg1_Sig1 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2(VcuTxMsg1_Sig2 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3(VcuTxMsg1_Sig3 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0(VcuTxMsg2_Sig0 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1(VcuTxMsg2_Sig1 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2(VcuTxMsg2_Sig2 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3(VcuTxMsg2_Sig3 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Com_Runnable_2ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg200h_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <VcuRxMsg1_Sig0> of PortPrototype <VcuRxMsg1_Sig0>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg200h_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg200h_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg200h_Rx_Notification
 *********************************************************************************************************************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3( data );
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg201h_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <VcuRxMsg2_Sig0> of PortPrototype <VcuRxMsg2_Sig0>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg201h_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg201h_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg201h_Rx_Notification
 *********************************************************************************************************************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3( data );
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Com_SWC_STOP_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
