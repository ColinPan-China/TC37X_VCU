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
 *             File:  CtAp_ChrgSeqCtrl.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ChrgSeqCtrl
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ChrgSeqCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ChrgSeqCtrl.h"


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
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_CHCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0
 *   ComM_MonResCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1
 *   ComM_ErrStatCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2
 *   ComM_ErrResCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3
 * dt_ComM_CHCANBusOffInfo: Record with elements
 *   ComM_MonStatCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_0
 *   ComM_MonResCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_1
 *   ComM_ErrStatCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_2
 *   ComM_ErrResCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_3
 * dt_ComM_DCCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0
 *   ComM_MonResDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1
 *   ComM_ErrStatDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2
 *   ComM_ErrResDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3
 * dt_ComM_DCCANBusOffInfo: Record with elements
 *   ComM_MonStatDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_0
 *   ComM_MonResDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_1
 *   ComM_ErrStatDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_2
 *   ComM_ErrResDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_3
 * dt_ComM_EPTCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0
 *   ComM_MonResEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1
 *   ComM_ErrStatEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2
 *   ComM_ErrResEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3
 * dt_ComM_EPTCANBusOffInfo: Record with elements
 *   ComM_MonStatEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_0
 *   ComM_MonResEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_1
 *   ComM_ErrStatEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_2
 *   ComM_ErrResEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_3
 * dt_DCChrMgmt_IRMeasDiErr: Record with elements
 *   DCChrMgmt_MonStatIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0
 *   DCChrMgmt_MonResIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1
 *   DCChrMgmt_ErrStatIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2
 *   DCChrMgmt_ErrResIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3
 * dt_DCChrMgmt_IRMeasDiErrDTC: Record with elements
 *   DCChrMgmt_MonStatIRMeasDiErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_0
 *   DCChrMgmt_MonResIRMeasDiErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_1
 *   DCChrMgmt_ErrStatIRMeasDiErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_2
 *   DCChrMgmt_ErrResIRMeasDiErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_3
 * dt_DCChrMgmt_IRMeasEnaErr: Record with elements
 *   DCChrMgmt_MonStatIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0
 *   DCChrMgmt_MonResIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1
 *   DCChrMgmt_ErrStatIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2
 *   DCChrMgmt_ErrResIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3
 * dt_DCChrMgmt_IRMeasEnaErrDTC: Record with elements
 *   DCChrMgmt_MonStatIRMeasEnaErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_0
 *   DCChrMgmt_MonResIRMeasEnaErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_1
 *   DCChrMgmt_ErrStatIRMeasEnaErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_2
 *   DCChrMgmt_ErrResIRMeasEnaErrDTC of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgSeqCtrl_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus(const dt_DCChrMgmt_IRMeasDiErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(const dt_DCChrMgmt_IRMeasDiErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus(const dt_DCChrMgmt_IRMeasEnaErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(const dt_DCChrMgmt_IRMeasEnaErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgSeqCtrl_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgSeqCtrl_CODE) R_ChrgSeqCtrl_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgSeqCtrl_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgSeqCtrl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgSeqCtrl_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgSeqCtrl_CODE) R_ChrgSeqCtrl_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgSeqCtrl_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
