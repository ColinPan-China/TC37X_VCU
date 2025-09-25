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
 *             File:  CtAp_SlopEst.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_SlopEst
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_SlopEst>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_SlopEst.h"


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
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_ACU02CRCDTCInfo: Record with elements
 *   ComM_MonStatACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_0
 *   ComM_MonResACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_1
 *   ComM_ErrStatACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_2
 *   ComM_ErrResACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_3
 * dt_ComM_ACU02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0
 *   ComM_MonResACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1
 *   ComM_ErrStatACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2
 *   ComM_ErrResACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3
 * dt_ComM_ACU02TimeoutInfo: Record with elements
 *   ComM_MonStatACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_0
 *   ComM_MonResACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_1
 *   ComM_ErrStatACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_2
 *   ComM_ErrResACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_SlopEst_Cyclic_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus(dt_ComM_ACU02TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_SlopEst_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_SlopEst_CODE) R_SlopEst_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_SlopEst_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_SlopEst_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_SlopEst_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_SlopEst_CODE) R_SlopEst_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_SlopEst_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
