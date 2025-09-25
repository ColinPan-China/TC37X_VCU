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
 *             File:  CtAp_DCParMgmt.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_DCParMgmt
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_DCParMgmt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_DCParMgmt.h"


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
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_DCChrMgmt_DcPortTempErrLvl1: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0
 *   DCChrMgmt_MonResDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3
 *
 *********************************************************************************************************************/


#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DCParMgmt_Cyclic_50ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus(dt_DCChrMgmt_DcPortTempErrLvl1 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCParMgmt_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DCParMgmt_CODE) R_DCParMgmt_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCParMgmt_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DCParMgmt_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCParMgmt_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DCParMgmt_CODE) R_DCParMgmt_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCParMgmt_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
