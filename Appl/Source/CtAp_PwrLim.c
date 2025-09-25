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
 *             File:  CtAp_PwrLim.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_PwrLim
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_PwrLim>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_PwrLim.h"


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
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_0: Boolean
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_1: Integer in interval [0...255]
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_2: Integer in interval [0...255]
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_3: Boolean
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_0: Boolean
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_1: Integer in interval [0...255]
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_2: Integer in interval [0...255]
 * Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_EgyMgmt_EgyMgmtWarnOne: Record with elements
 *   EgyMgmt_MonStatEgyMgmtWarnOne of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_0
 *   EgyMgmt_MonResEgyMgmtWarnOne of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_1
 *   EgyMgmt_ErrStatEgyMgmtWarnOne of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_2
 *   EgyMgmt_ErrResEgyMgmtWarnOne of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_3
 * dt_EgyMgmt_EgyMgmtWarnTwo: Record with elements
 *   EgyMgmt_MonStatEgyMgmtWarnTwo of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_0
 *   EgyMgmt_MonResEgyMgmtWarnTwo of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_1
 *   EgyMgmt_ErrStatEgyMgmtWarnTwo of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_2
 *   EgyMgmt_ErrResEgyMgmtWarnTwo of type Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_3
 *
 *********************************************************************************************************************/


#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_PwrLim_Cyclic_100ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarnOne_Bus_tec_EgyMgmt_EgyMgmtWarnOne_Bus(const dt_EgyMgmt_EgyMgmtWarnOne *data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bus_tec_EgyMgmt_EgyMgmtWarnTwo_Bus(const dt_EgyMgmt_EgyMgmtWarnTwo *data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PwrLim_Cyclic_100ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_PwrLim_CODE) R_PwrLim_Cyclic_100ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PwrLim_Cyclic_100ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_PwrLim_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PwrLim_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_PwrLim_CODE) R_PwrLim_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PwrLim_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
