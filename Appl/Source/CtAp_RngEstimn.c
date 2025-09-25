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
 *             File:  CtAp_RngEstimn.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_RngEstimn
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_RngEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_RngEstimn.h"


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
 * Rte_DT_dt_Nv_RngEstimnInfo_0: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_RngEstimnInfo_1: Integer in interval [0...4294967295]
 * Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * dt_RngEstimn_BattCurrIntegral2kmArrayInfo: Array with 25 element(s) of type Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0
 *
 * Record Types:
 * =============
 * dt_Nv_RngEstimnInfo: Record with elements
 *   RngEstimn_BMSBattIDcIntgl_As of type Rte_DT_dt_Nv_RngEstimnInfo_0
 *   RngEstimn_AccuMilg_m of type Rte_DT_dt_Nv_RngEstimnInfo_1
 *
 *********************************************************************************************************************/


#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_RngEstimn_Cyclic_100ms
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
 *   Std_ReturnType Rte_Read_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0 *data)
 *     Argument data: Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0* is of type dt_RngEstimn_BattCurrIntegral2kmArrayInfo
 *   Std_ReturnType Rte_Read_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(dt_Nv_RngEstimnInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(uint16 data)
 *   Std_ReturnType Rte_Write_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km(uint16 data)
 *   Std_ReturnType Rte_Write_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(const Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0 *data)
 *     Argument data: Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0* is of type dt_RngEstimn_BattCurrIntegral2kmArrayInfo
 *   Std_ReturnType Rte_Write_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(const dt_Nv_RngEstimnInfo *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_RngEstimn_Cyclic_100ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_RngEstimn_CODE) R_RngEstimn_Cyclic_100ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_RngEstimn_Cyclic_100ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_RngEstimn_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_RngEstimn_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_RngEstimn_CODE) R_RngEstimn_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_RngEstimn_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
