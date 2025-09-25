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
 *             File:  CtAp_GearCal.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_GearCal
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_GearCal>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_GearCal.h"


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
 * Rte_DT_dt_ComM_IVI01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IVI01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
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
 * dt_ComM_IVI01CRCInfo: Record with elements
 *   ComM_MonStatIVI01CRCErrorInfo of type Rte_DT_dt_ComM_IVI01CRCInfo_0
 *   ComM_MonResIVI01CRCErrorInfo of type Rte_DT_dt_ComM_IVI01CRCInfo_1
 *   ComM_ErrStatIVI01CRCErrorInfo of type Rte_DT_dt_ComM_IVI01CRCInfo_2
 *   ComM_ErrResIVI01CRCErrorInfo of type Rte_DT_dt_ComM_IVI01CRCInfo_3
 * dt_ComM_IVI01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIVI01E2ETimeoutInfo of type Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0
 *   ComM_MonResIVI01E2ETimeoutInfo of type Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1
 *   ComM_ErrStatIVI01E2ETimeoutInfo of type Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2
 *   ComM_ErrResIVI01E2ETimeoutInfo of type Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3
 * dt_ComM_PRNDCRCDTCInfo: Record with elements
 *   ComM_MonStatPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_0
 *   ComM_MonResPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_1
 *   ComM_ErrStatPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_2
 *   ComM_ErrResPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_3
 * dt_ComM_PRNDCRCInfo: Record with elements
 *   ComM_MonStatPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_0
 *   ComM_MonResPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_1
 *   ComM_ErrStatPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_2
 *   ComM_ErrResPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_3
 * dt_ComM_PRNDE2ETimeoutInfo: Record with elements
 *   ComM_MonStatPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0
 *   ComM_MonResPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1
 *   ComM_ErrStatPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2
 *   ComM_ErrResPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3
 * dt_ComM_PRNDTimeoutDTCInfo: Record with elements
 *   ComM_MonStatPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0
 *   ComM_MonResPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1
 *   ComM_ErrStatPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2
 *   ComM_ErrResPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3
 * dt_ComM_PRNDTimeoutInfo: Record with elements
 *   ComM_MonStatPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_0
 *   ComM_MonResPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_1
 *   ComM_ErrStatPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_2
 *   ComM_ErrResPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_GearCal_START_SEC_CODE
#include "CtAp_GearCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_GearCal_Cyclic_20ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(dt_ComM_IBSTqE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(dt_ComM_IVI01CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(dt_ComM_IVI01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(dt_ComM_PRNDCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(dt_ComM_PRNDE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_GearCal_Cyclic_20ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_GearCal_CODE) R_GearCal_Cyclic_20ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_GearCal_Cyclic_20ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_GearCal_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_GearCal_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_GearCal_CODE) R_GearCal_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_GearCal_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_GearCal_STOP_SEC_CODE
#include "CtAp_GearCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
