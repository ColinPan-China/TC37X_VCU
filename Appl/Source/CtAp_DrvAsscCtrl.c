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
 *             File:  CtAp_DrvAsscCtrl.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_DrvAsscCtrl
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_DrvAsscCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_DrvAsscCtrl.h"


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
 * Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo: Record with elements
 *   ChassisMgmt_MonStatIBSApsCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0
 *   ChassisMgmt_MonResIBSApsCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_1
 *   ChassisMgmt_ErrStatIBSApsCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_2
 *   ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_3
 * dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo: Record with elements
 *   ChassisMgmt_MonStatIBSVlcCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0
 *   ChassisMgmt_MonResIBSVlcCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_1
 *   ChassisMgmt_ErrStatIBSVlcCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_2
 *   ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo of type Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_3
 * dt_ComM_IBSACCCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0
 *   ComM_MonResIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1
 *   ComM_ErrStatIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2
 *   ComM_ErrResIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3
 * dt_ComM_IBSACCCRCInfo: Record with elements
 *   ComM_MonStatIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_0
 *   ComM_MonResIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_1
 *   ComM_ErrStatIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_2
 *   ComM_ErrResIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_3
 * dt_ComM_IBSACCE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0
 *   ComM_MonResIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1
 *   ComM_ErrStatIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2
 *   ComM_ErrResIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3
 * dt_ComM_IBSACCTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0
 *   ComM_MonResIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1
 *   ComM_ErrStatIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2
 *   ComM_ErrResIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3
 * dt_ComM_IBSTqCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0
 *   ComM_MonResIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1
 *   ComM_ErrStatIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2
 *   ComM_ErrResIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3
 * dt_ComM_IBSTqCRCInfo: Record with elements
 *   ComM_MonStatIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_0
 *   ComM_MonResIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_1
 *   ComM_ErrStatIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_2
 *   ComM_ErrResIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_3
 * dt_ComM_IBSTqE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0
 *   ComM_MonResIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1
 *   ComM_ErrStatIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2
 *   ComM_ErrResIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3
 * dt_ComM_IBSTqTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0
 *   ComM_MonResIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1
 *   ComM_ErrStatIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2
 *   ComM_ErrResIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DrvAsscCtrl_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(dt_ComM_IBSACCCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(dt_ComM_IBSACCE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(dt_ComM_IBSTqCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(dt_ComM_IBSTqE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus(const dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus(const dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DrvAsscCtrl_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DrvAsscCtrl_CODE) R_DrvAsscCtrl_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DrvAsscCtrl_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DrvAsscCtrl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DrvAsscCtrl_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DrvAsscCtrl_CODE) R_DrvAsscCtrl_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DrvAsscCtrl_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
