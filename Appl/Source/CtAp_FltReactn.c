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
 *             File:  CtAp_FltReactn.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_FltReactn
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_FltReactn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_FltReactn.h"


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
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ErrMgmt_TorqCtrlErr_0: Boolean
 * Rte_DT_dt_ErrMgmt_TorqCtrlErr_1: Boolean
 * Rte_DT_dt_ErrMgmt_TorqCtrlErr_2: Boolean
 * Rte_DT_dt_ErrMgmt_TorqCtrlErr_3: Real in interval [-FLT_MAX...FLT_MAX] with single precision
 * Rte_DT_dt_ErrMgmt_TorqCtrlErr_4: Boolean
 * Rte_DT_dt_ErrMgmt_VehHVIL_0: Boolean
 * Rte_DT_dt_ErrMgmt_VehHVIL_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VehHVIL_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VehHVIL_3: Boolean
 * Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_0: Boolean
 * Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_3: Boolean
 * Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0: Boolean
 * Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_3: Boolean
 * Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0: Boolean
 * Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_BMSSts01CRCDTCInfo: Record with elements
 *   ComM_MonStatBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0
 *   ComM_MonResBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1
 *   ComM_ErrStatBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2
 *   ComM_ErrResBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3
 * dt_ComM_BMSSts01CRCInfo: Record with elements
 *   ComM_MonStatBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_0
 *   ComM_MonResBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_1
 *   ComM_ErrStatBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_2
 *   ComM_ErrResBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_3
 * dt_ComM_BMSSts01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0
 *   ComM_MonResBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1
 *   ComM_ErrStatBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2
 *   ComM_ErrResBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3
 * dt_ComM_BMSSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0
 *   ComM_MonResBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1
 *   ComM_ErrStatBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2
 *   ComM_ErrResBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3
 * dt_ComM_BMSSts01TimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0
 *   ComM_MonResBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1
 *   ComM_ErrStatBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2
 *   ComM_ErrResBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3
 * dt_ComM_MCUFailrCodCRCDTCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0
 *   ComM_MonResMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1
 *   ComM_ErrStatMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2
 *   ComM_ErrResMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3
 * dt_ComM_MCUFailrCodCRCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0
 *   ComM_MonResMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1
 *   ComM_ErrStatMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2
 *   ComM_ErrResMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3
 * dt_ComM_MCUFailrCodE2ETimeoutInfo: Record with elements
 *   ComM_MonStatMCUFailrCodE2ETimeouInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0
 *   ComM_MonResMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1
 *   ComM_ErrStatMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2
 *   ComM_ErrResMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3
 * dt_ComM_MCUFailrCodTimeoutDTCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0
 *   ComM_MonResMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1
 *   ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2
 *   ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3
 * dt_ErrMgmt_TorqCtrlErr: Record with elements
 *   ErrMgmt_DlyGrdtZeroTq_Flg of type Rte_DT_dt_ErrMgmt_TorqCtrlErr_0
 *   ErrMgmt_GrdtZeroTq_Flg of type Rte_DT_dt_ErrMgmt_TorqCtrlErr_1
 *   ErrMgmt_ImdtZeroTq_Flg of type Rte_DT_dt_ErrMgmt_TorqCtrlErr_2
 *   ErrMgmt_VehSpdLim_kph of type Rte_DT_dt_ErrMgmt_TorqCtrlErr_3
 *   ErrMgmt_VehSpdLimEna_Flg of type Rte_DT_dt_ErrMgmt_TorqCtrlErr_4
 * dt_ErrMgmt_VehHVIL: Record with elements
 *   ErrMgmt_MonStatVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_0
 *   ErrMgmt_MonResVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_1
 *   ErrMgmt_ErrStatVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_2
 *   ErrMgmt_ErrResVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_3
 * dt_FctSftyMon_AccrPedlTqOverFltInfo: Record with elements
 *   FctSftyMon_MonStatAccrPedlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_0
 *   FctSftyMon_MonResAccrPedlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_1
 *   FctSftyMon_ErrStatAccrPedlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_2
 *   FctSftyMon_ErrResAccrPedlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_3
 * dt_FctSftyMon_CrpCtrlTqOverFltInfo: Record with elements
 *   FctSftyMon_MonStatCrpCtrlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0
 *   FctSftyMon_MonResCrpCtrlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_1
 *   FctSftyMon_ErrStatCrpCtrlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_2
 *   FctSftyMon_ErrResCrpCtrlTqOverFltInfo of type Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_3
 * dt_FctSftyMon_DesVehDecelSpdOverFltInfo: Record with elements
 *   FctSftyMon_MonStatDesVehDecelSpdOverFltInfo of type Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0
 *   FctSftyMon_MonResDesVehDecelSpdOverFltInfo of type Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_1
 *   FctSftyMon_ErrStatDesVehDecelSpdOverFltInfo of type Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_2
 *   FctSftyMon_ErrResDesVehDecelSpdOverFltInfo of type Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_FltReactn_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_BSW_FuSaHWErrorStatus_HWErrorStatus(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(dt_ComM_BMSSts01CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(dt_ComM_BMSSts01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(dt_ComM_MCUFailrCodCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(dt_ComM_MCUFailrCodE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(dt_ErrMgmt_VehHVIL *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(dt_FctSftyMon_AccrPedlTqOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(dt_FctSftyMon_CrpCtrlTqOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(dt_FctSftyMon_DesVehDecelSpdOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(const dt_ErrMgmt_TorqCtrlErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_FltReactn_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_FltReactn_CODE) R_FltReactn_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_FltReactn_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_FltReactn_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_FltReactn_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_FltReactn_CODE) R_FltReactn_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_FltReactn_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
