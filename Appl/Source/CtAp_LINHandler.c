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
 *             File:  CtAp_LINHandler.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_LINHandler
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_LINHandler>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_LINHandler.h"


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
 * ChargeCurrWU_Ena_LIN01: Boolean
 * ChargeCurrWU_Treshold_LIN01: Integer in interval [0...250]
 * DisChargeCurrWU_Ena_LIN01: Boolean
 * DisChargeCurrWU_Treshold_LIN01: Integer in interval [0...250]
 * FRC_ComFtonNet: Boolean
 * FRC_Vl_OV: Boolean
 * FRC_Vl_UV: Boolean
 * IBATT_QUIESCENT_LIN01: Integer in interval [0...255]
 * I_BATT_LIN01: Integer in interval [0...65535]
 * Resp_Error_LIN01: Boolean
 * Rte_DT_dt_ComM_FRCMsgErrDTC_0: Boolean
 * Rte_DT_dt_ComM_FRCMsgErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCMsgErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCMsgErrDTC_3: Boolean
 * Rte_DT_dt_ComM_FRCRespErrDTC_0: Boolean
 * Rte_DT_dt_ComM_FRCRespErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCRespErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCRespErrDTC_3: Boolean
 * Rte_DT_dt_ComM_FRCSplyUDcHiDTC_0: Boolean
 * Rte_DT_dt_ComM_FRCSplyUDcHiDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCSplyUDcHiDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCSplyUDcHiDTC_3: Boolean
 * Rte_DT_dt_ComM_FRCSplyUDcLoDTC_0: Boolean
 * Rte_DT_dt_ComM_FRCSplyUDcLoDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCSplyUDcLoDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_FRCSplyUDcLoDTC_3: Boolean
 * Rte_DT_dt_ComM_LinMsgErrInfo_0: Boolean
 * Rte_DT_dt_ComM_LinMsgErrInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_LinMsgErrInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_LinMsgErrInfo_3: Boolean
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3: Boolean
 * SOCWU_Ena_LIN01: Boolean
 * SOCWU_Treshold_LIN01: Integer in interval [0...80]
 * SOC_LIN01: Integer in interval [0...100]
 * SOF_V1_LIN01: Integer in interval [0...254]
 * SOF_V2_LIN01: Integer in interval [0...254]
 * SOH_LIN01: Integer in interval [0...100]
 * T_BATT_LIN01: Integer in interval [0...145]
 * U_BATT_LIN01: Integer in interval [0...15360]
 * VCU_BS_IndicatorLightSts_LIN: Boolean
 * VCU_BattNomC20_LIN: Integer in interval [0...255]
 * VCU_Batt_U0_Max_LIN: Integer in interval [0...127]
 * VCU_Batt_U0_Min_LIN: Integer in interval [0...127]
 * VCU_DCDCFail_LIN_LIN: Boolean
 * VCU_DCM_FL_DoorFLSts_LIN: Boolean
 * VCU_DCM_FR_DoorFRSts_LIN: Boolean
 * VCU_DCM_RL_DoorRLSts_LIN: Boolean
 * VCU_DCM_RR_DoorRRSts_LIN: Boolean
 * VCU_DriveMotOvrTemp_LIN_LIN: Boolean
 * VCU_HVBatOvrTemp_LIN_LIN: Boolean
 * VCU_HstTempDataRqTrg_LIN: Boolean
 * VCU_IBSClrDiagInf_LIN: Boolean
 * VCU_IBS_EBDFault_LIN: Boolean
 * VCU_IBS_RollerbenchMode_LIN: Boolean
 * VCU_IVI_BulbCheckStsLIN01: Boolean
 * VCU_IVI_VrState_LIN: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * I_RANGE_LIN01: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_1_1A (0U)
 *   Cx1_200_200A (1U)
 *   Cx2_1500_1500A (2U)
 *   Cx3_Invalid (3U)
 * VCU_ACU_DriverWarningLampSts_LIN: Enumeration of integer in interval [0...2] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * VCU_ACU_PassengerAirbagSts_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_RESERVED (0U)
 *   Cx1_Disabled (1U)
 *   Cx2_Enabled (2U)
 *   Cx3_RESERVED (3U)
 * VCU_ACU_PassengerWarningLampSts_LIN: Enumeration of integer in interval [0...2] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * VCU_ACU_WarningLampSts_LIN: Enumeration of integer in interval [0...2] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * VCU_BCM_FLSeatBeltRemindReq_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * VCU_BCM_FRSeatBeltRemindReq_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * VCU_BCM_RLSeatBeltRemindReq_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * VCU_BCM_RRSeatBeltRemindReq_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * VCU_BattType_LIN: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_Default_ (0U)
 *   Cx01_Flooded_ (1U)
 *   Cx02_AGM_ (2U)
 *   Cx03_Graphite_ (3U)
 * VCU_CGW_VehicleState_LIN: Enumeration of integer in interval [0...8] with enumerators
 *   Cx0_Fully_sleep (0U)
 *   Cx1_Invisible_awake_CANwakeup (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 *   Cx4_Invisible_awake_OnlyHVon (4U)
 *   Cx5_Standby_Normal (5U)
 *   Cx6_Standby_OnlyLVon (6U)
 *   Cx7_Drive_Normal (7U)
 *   Cx8_Drive_LVFault (8U)
 * VCU_HVBatCriFail_LIN_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_False (0U)
 *   Cx1_Yellow (1U)
 *   Cx2_Red (2U)
 *   Cx3_Reserve (3U)
 * VCU_IBS_BrakeFluidWarning_LIN: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_BRAKEFLUID_NORMAL_INIT_DEFAULT (0U)
 *   Cx1_BRAKEFLUID_EMPTY (1U)
 *   Cx2_RESERVED (2U)
 *   Cx3_RESERVED (3U)
 * VCU_IBS_SystemStatus_LIN: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Normal_ (0U)
 *   Cx1_Degrade_ (1U)
 *   Cx2_Partial_ (2U)
 *   Cx3_Inhibit_ (3U)
 *   Cx4_0x4_0x7_Reserved (4U)
 *
 * Record Types:
 * =============
 * dt_ComM_FRCMsgErrDTC: Record with elements
 *   ComM_MonStatFRCMsgErrDTC of type Rte_DT_dt_ComM_FRCMsgErrDTC_0
 *   ComM_MonResFRCMsgErrDTC of type Rte_DT_dt_ComM_FRCMsgErrDTC_1
 *   ComM_ErrStatFRCMsgErrDTC of type Rte_DT_dt_ComM_FRCMsgErrDTC_2
 *   ComM_ErrResFRCMsgErrDTC of type Rte_DT_dt_ComM_FRCMsgErrDTC_3
 * dt_ComM_FRCRespErrDTC: Record with elements
 *   ComM_MonStatLinFRCRespErrDTC of type Rte_DT_dt_ComM_FRCRespErrDTC_0
 *   ComM_MonResLinFRCRespErrDTC of type Rte_DT_dt_ComM_FRCRespErrDTC_1
 *   ComM_ErrStatFRCRespErrDTC of type Rte_DT_dt_ComM_FRCRespErrDTC_2
 *   ComM_ErrResFRCRespErrDTC of type Rte_DT_dt_ComM_FRCRespErrDTC_3
 * dt_ComM_FRCSplyUDcHiDTC: Record with elements
 *   ComM_MonStatFRCSplyUDcHiDTC of type Rte_DT_dt_ComM_FRCSplyUDcHiDTC_0
 *   ComM_MonResFRCSplyUDcHiDTC of type Rte_DT_dt_ComM_FRCSplyUDcHiDTC_1
 *   ComM_ErrStatFRCSplyUDcHiDTC of type Rte_DT_dt_ComM_FRCSplyUDcHiDTC_2
 *   ComM_ErrResFRCSplyUDcHiDTC of type Rte_DT_dt_ComM_FRCSplyUDcHiDTC_3
 * dt_ComM_FRCSplyUDcLoDTC: Record with elements
 *   ComM_MonStatFRCSplyUDcLoDTC of type Rte_DT_dt_ComM_FRCSplyUDcLoDTC_0
 *   ComM_MonResFRCSplyUDcLoDTC of type Rte_DT_dt_ComM_FRCSplyUDcLoDTC_1
 *   ComM_ErrStatFRCSplyUDcLoDTC of type Rte_DT_dt_ComM_FRCSplyUDcLoDTC_2
 *   ComM_ErrResFRCSplyUDcLoDTC of type Rte_DT_dt_ComM_FRCSplyUDcLoDTC_3
 * dt_ComM_LinMsgErrInfo: Record with elements
 *   ComM_MonStatLinMsgTimeoutDTCInfo of type Rte_DT_dt_ComM_LinMsgErrInfo_0
 *   ComM_MonResLinMsgTimeoutDTCInfo of type Rte_DT_dt_ComM_LinMsgErrInfo_1
 *   ComM_ErrStatLinMsgTimeoutDTCInfo of type Rte_DT_dt_ComM_LinMsgErrInfo_2
 *   ComM_ErrRestatLinMsgTimeoutDTCInfo of type Rte_DT_dt_ComM_LinMsgErrInfo_3
 * dt_ErrMgmt_DrvMotTempOvrLamp: Record with elements
 *   ErrMgmt_MonStatMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0
 *   ErrMgmt_MonResMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1
 *   ErrMgmt_ErrStatMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2
 *   ErrMgmt_ErrResMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3
 * dt_ErrMgmt_HvBattTempOvrLamp: Record with elements
 *   ErrMgmt_MonStatBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0
 *   ErrMgmt_MonResBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1
 *   ErrMgmt_ErrStatBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2
 *   ErrMgmt_ErrResBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3
 *
 *********************************************************************************************************************/


#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_LINHandler_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_FRC_ComFtonNet_FRC_ComFtonNet(FRC_ComFtonNet *data)
 *   Std_ReturnType Rte_Read_FRC_Vl_OV_FRC_Vl_OV(FRC_Vl_OV *data)
 *   Std_ReturnType Rte_Read_FRC_Vl_UV_FRC_Vl_UV(FRC_Vl_UV *data)
 *   Std_ReturnType Rte_Read_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01(IBATT_QUIESCENT_LIN01 *data)
 *   Std_ReturnType Rte_Read_I_BATT_LIN01_I_BATT_LIN01(I_BATT_LIN01 *data)
 *   Std_ReturnType Rte_Read_I_RANGE_LIN01_I_RANGE_LIN01(I_RANGE_LIN01 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(dt_ErrMgmt_DrvMotTempOvrLamp *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(dt_ErrMgmt_HvBattTempOvrLamp *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(boolean *data)
 *   Std_ReturnType Rte_Read_Resp_Error_LIN01_Resp_Error_LIN01(Resp_Error_LIN01 *data)
 *   Std_ReturnType Rte_Read_SOC_LIN01_SOC_LIN01(SOC_LIN01 *data)
 *   Std_ReturnType Rte_Read_SOF_V1_LIN01_SOF_V1_LIN01(SOF_V1_LIN01 *data)
 *   Std_ReturnType Rte_Read_SOF_V2_LIN01_SOF_V2_LIN01(SOF_V2_LIN01 *data)
 *   Std_ReturnType Rte_Read_SOH_LIN01_SOH_LIN01(SOH_LIN01 *data)
 *   Std_ReturnType Rte_Read_T_BATT_LIN01_T_BATT_LIN01(T_BATT_LIN01 *data)
 *   Std_ReturnType Rte_Read_U_BATT_LIN01_U_BATT_LIN01(U_BATT_LIN01 *data)
 *   boolean Rte_IsUpdated_FRC_ComFtonNet_FRC_ComFtonNet(void)
 *   boolean Rte_IsUpdated_Resp_Error_LIN01_Resp_Error_LIN01(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01(ChargeCurrWU_Ena_LIN01 data)
 *   Std_ReturnType Rte_Write_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01(ChargeCurrWU_Treshold_LIN01 data)
 *   Std_ReturnType Rte_Write_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01(DisChargeCurrWU_Ena_LIN01 data)
 *   Std_ReturnType Rte_Write_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01(DisChargeCurrWU_Treshold_LIN01 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus(const dt_ComM_FRCMsgErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus(const dt_ComM_FRCRespErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus(const dt_ComM_FRCSplyUDcHiDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus(const dt_ComM_FRCSplyUDcLoDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus(const dt_ComM_LinMsgErrInfo *data)
 *   Std_ReturnType Rte_Write_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01(SOCWU_Ena_LIN01 data)
 *   Std_ReturnType Rte_Write_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01(SOCWU_Treshold_LIN01 data)
 *   Std_ReturnType Rte_Write_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN(VCU_ACU_DriverWarningLampSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN(VCU_ACU_PassengerAirbagSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN(VCU_ACU_PassengerWarningLampSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN(VCU_ACU_WarningLampSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN(VCU_BCM_FLSeatBeltRemindReq_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN(VCU_BCM_FRSeatBeltRemindReq_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN(VCU_BCM_RLSeatBeltRemindReq_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN(VCU_BCM_RRSeatBeltRemindReq_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN(VCU_BS_IndicatorLightSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN(VCU_BattNomC20_LIN data)
 *   Std_ReturnType Rte_Write_VCU_BattType_LIN00_VCU_BattType_LIN(VCU_BattType_LIN data)
 *   Std_ReturnType Rte_Write_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN(VCU_Batt_U0_Max_LIN data)
 *   Std_ReturnType Rte_Write_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN(VCU_Batt_U0_Min_LIN data)
 *   Std_ReturnType Rte_Write_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN(VCU_CGW_VehicleState_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN(VCU_DCDCFail_LIN_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN(VCU_DCM_FL_DoorFLSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN(VCU_DCM_FR_DoorFRSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN(VCU_DCM_RL_DoorRLSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN(VCU_DCM_RR_DoorRRSts_LIN data)
 *   Std_ReturnType Rte_Write_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN(VCU_DriveMotOvrTemp_LIN_LIN data)
 *   Std_ReturnType Rte_Write_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN(VCU_HVBatCriFail_LIN_LIN data)
 *   Std_ReturnType Rte_Write_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN(VCU_HVBatOvrTemp_LIN_LIN data)
 *   Std_ReturnType Rte_Write_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN(VCU_HstTempDataRqTrg_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN(VCU_IBSClrDiagInf_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN(VCU_IBS_BrakeFluidWarning_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN(VCU_IBS_EBDFault_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN(VCU_IBS_RollerbenchMode_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN(VCU_IBS_SystemStatus_LIN data)
 *   Std_ReturnType Rte_Write_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01(VCU_IVI_BulbCheckStsLIN01 data)
 *   Std_ReturnType Rte_Write_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN(VCU_IVI_VrState_LIN data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LINHandler_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_LINHandler_CODE) R_LINHandler_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LINHandler_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_LINHandler_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LINHandler_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_LINHandler_CODE) R_LINHandler_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LINHandler_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
