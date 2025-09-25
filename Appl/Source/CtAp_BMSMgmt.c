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
 *             File:  CtAp_BMSMgmt.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_BMSMgmt
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_BMSMgmt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_BMSMgmt.h"


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
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_0: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_3: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_0: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_3: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTC_0: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyClsDTC_3: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_0: Boolean
 * Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_3: Boolean
 * Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_0: Boolean
 * Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_3: Boolean
 * Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_0: Boolean
 * Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_3: Boolean
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
 * dt_HvMgmt_BMSRlyClsDTC: Record with elements
 *   HvMgmt_MonStatBMSRlyClsDTC of type Rte_DT_dt_HvMgmt_BMSRlyClsDTC_0
 *   HvMgmt_MonResBMSRlyClsDTC of type Rte_DT_dt_HvMgmt_BMSRlyClsDTC_1
 *   HvMgmt_ErrStatBMSRlyClsDTC of type Rte_DT_dt_HvMgmt_BMSRlyClsDTC_2
 *   HvMgmt_ErrResBMSRlyClsDTC of type Rte_DT_dt_HvMgmt_BMSRlyClsDTC_3
 * dt_HvMgmt_BMSRlyClsDTCOne: Record with elements
 *   HvMgmt_MonStatBMSRlyClsDTCOne of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_0
 *   HvMgmt_MonResBMSRlyClsDTCOne of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_1
 *   HvMgmt_ErrStatBMSRlyClsDTCOne of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_2
 *   HvMgmt_ErrResBMSRlyClsDTCOne of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_3
 * dt_HvMgmt_BMSRlyClsDTCTwo: Record with elements
 *   HvMgmt_MonStatBMSRlyClsDTCTwo of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_0
 *   HvMgmt_MonResBMSRlyClsDTCTwo of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_1
 *   HvMgmt_ErrStatBMSRlyClsDTCTwo of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_2
 *   HvMgmt_ErrResBMSRlyClsDTCTwo of type Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_3
 * dt_HvMgmt_BMSRlyOpenDTC: Record with elements
 *   HvMgmt_MonStatBMSRlyOpenDTC of type Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_0
 *   HvMgmt_MonResBMSRlyOpenDTC of type Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_1
 *   HvMgmt_ErrStatBMSRlyOpenDTC of type Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_2
 *   HvMgmt_ErrResBMSRlyOpenDTC of type Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_3
 * dt_HvMgmt_PreheatPosRlyClsDTC: Record with elements
 *   HvMgmt_MonStatPreheatPosRlyClsDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_0
 *   HvMgmt_MonResPreheatPosRlyClsDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_1
 *   HvMgmt_ErrStatPreheatPosRlyClsDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_2
 *   HvMgmt_ErrResPreheatPosRlyClsDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_3
 * dt_HvMgmt_PreheatPosRlyOpenDTC: Record with elements
 *   HvMgmt_MonStatPreheatPosRlyOpenDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_0
 *   HvMgmt_MonResPreheatPosRlyOpenDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_1
 *   HvMgmt_ErrStatPreheatPosRlyOpenDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_2
 *   HvMgmt_ErrResPreheatPosRlyOpenDTC of type Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_BMSMgmt_Cyclic_20ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_UDS_PwrCutRequest_PwrCutRequest(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus(const dt_HvMgmt_BMSRlyClsDTCOne *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus(const dt_HvMgmt_BMSRlyClsDTCTwo *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus(const dt_HvMgmt_BMSRlyClsDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus(const dt_HvMgmt_BMSRlyOpenDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus(const dt_HvMgmt_PreheatPosRlyClsDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus(const dt_HvMgmt_PreheatPosRlyOpenDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_BMSMgmt_Cyclic_20ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_BMSMgmt_CODE) R_BMSMgmt_Cyclic_20ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_BMSMgmt_Cyclic_20ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_BMSMgmt_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_BMSMgmt_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_BMSMgmt_CODE) R_BMSMgmt_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_BMSMgmt_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
