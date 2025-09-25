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
 *             File:  CtAp_VehStabyCtrl.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_VehStabyCtrl
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_VehStabyCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_VehStabyCtrl.h"


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
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_IBSSts02CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0
 *   ComM_MonResIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1
 *   ComM_ErrStatIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2
 *   ComM_ErrResIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3
 * dt_ComM_IBSSts02CRCInfo: Record with elements
 *   ComM_MonStatIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_0
 *   ComM_MonResIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_1
 *   ComM_ErrStatIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_2
 *   ComM_ErrResIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_3
 * dt_ComM_IBSSts02E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0
 *   ComM_MonResIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3
 * dt_ComM_IBSSts02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0
 *   ComM_MonResIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3
 * dt_ComM_IBSSts04CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0
 *   ComM_MonResIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1
 *   ComM_ErrStatIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2
 *   ComM_ErrResIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3
 * dt_ComM_IBSSts04CRCInfo: Record with elements
 *   ComM_MonStatIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_0
 *   ComM_MonResIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_1
 *   ComM_ErrStatIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_2
 *   ComM_ErrResIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_3
 * dt_ComM_IBSSts04E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0
 *   ComM_MonResIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3
 * dt_ComM_IBSSts04TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0
 *   ComM_MonResIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0
 *   ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlCRCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0
 *   ComM_MonResIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3
 * dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0
 *   ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2
 *   ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3
 * dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0
 *   ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlTimeoutInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0
 *   ComM_MonResIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2
 *   ComM_ErrResIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_VehStabyCtrl_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(dt_ComM_IBSSts02CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(dt_ComM_IBSSts02E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(dt_ComM_IBSSts04CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(dt_ComM_IBSSts04E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(dt_ComM_IBSVCUMotCtrlCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehStabyCtrl_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_VehStabyCtrl_CODE) R_VehStabyCtrl_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehStabyCtrl_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_VehStabyCtrl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehStabyCtrl_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_VehStabyCtrl_CODE) R_VehStabyCtrl_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehStabyCtrl_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
