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
 *             File:  CtAp_CANHandler.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_CANHandler
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_CANHandler>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * BHM_AllowChargeVoltageMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CCS_OutputCurrent
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CCS_OutputVoltage
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CEM_BatteryChargeRequireTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CHM_ProtocolVersion
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * Rte_DT_SG_BMS_BatInfor_02_SigGroup_0
 *   uint64 represents integers with a minimum value of 0 and a maximum value 
 *      of 18446744073709551615. The order-relation on uint64 is: x < y if y - x is positive.
 *      uint64 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 *********************************************************************************************************************/

#include "Rte_CtAp_CANHandler.h"


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
 * ACU_CrashOutputStsValid: Boolean
 * ACU_DriverSeatBeltSts: Boolean
 * ACU_DriverSeatBeltStsValid: Boolean
 * ACU_LatA_1: Integer in interval [0...65535]
 * ACU_LgtA_1: Integer in interval [0...65535]
 * ACU_PassengerSeatBeltSts: Boolean
 * ACU_PassengerSeatBeltStsValid: Boolean
 * ACU_PassengerSts: Boolean
 * ACU_RLSeatBeltStatusValid: Boolean
 * ACU_RRSeatBeltStatusValid: Boolean
 * ACU_SecondLeftSeatBeltSts: Boolean
 * ACU_SecondLeftSts: Boolean
 * ACU_SecondRightSeatBeltSts: Boolean
 * ACU_SecondRightSts: Boolean
 * ACU_YawRate_1: Integer in interval [0...65535]
 * ADCU_AEBReq: Boolean
 * ADCU_AEB_AWB_Req: Boolean
 * ADCU_AEB_Decel_Cmd_1: Integer in interval [-32768...32767]
 * ADCU_AEB_Prefill_CMD: Boolean
 * ADCU_AEB_Stop_Req: Boolean
 * APTC_PowerConsumption_1: Integer in interval [0...255]
 * BCM_Authentication_YDF: Integer in interval [0...255]
 * BCM_AutoCloseWinFunSts: Boolean
 * BCM_ChrgFlapLockSts: Boolean
 * BCM_DomeLampBrightSts: Boolean
 * BCM_KeyNotInCarRemind: Boolean
 * BCM_PowerOffDisplayReq: Boolean
 * BHM_AllowChargeVoltageMax: Integer in interval [0...7500]
 * BMS_AllowCellTemperature_1: Integer in interval [0...255]
 * BMS_AllowChagCurrent_1: Integer in interval [0...65535]
 * BMS_AverageCellTemp_2: Integer in interval [0...255]
 * BMS_BalancingStatus: Boolean
 * BMS_BatChagSum_2: Integer in interval [0...65535]
 * BMS_BatProDatDay_1: Integer in interval [0...255]
 * BMS_BatProDatMonth_1: Integer in interval [0...255]
 * BMS_BatProDatYear_1: Integer in interval [0...255]
 * BMS_BatProRights_1: Boolean
 * BMS_BattCurr_1: Integer in interval [0...65535]
 * BMS_BattVolt_1: Integer in interval [0...65535]
 * BMS_CellNumbers: Integer in interval [0...255]
 * BMS_ComVersion: Integer in interval [0...65535]
 * BMS_DisChgCurr_4: Integer in interval [-32768...32767]
 * BMS_DisplaySOC_1: Integer in interval [0...65535]
 * BMS_ErrorHighSoc_1: Boolean
 * BMS_ErrorPreChaFailed: Boolean
 * BMS_ErrorRelay_1: Boolean
 * BMS_FeedbackCurr_3: Integer in interval [-32768...32767]
 * BMS_HVinterlockState: Boolean
 * BMS_Heatcurrent_1: Integer in interval [0...65535]
 * BMS_InsulationDetectionStatus: Boolean
 * BMS_KeepWarmRequest_1: Boolean
 * BMS_LinkVoltage_1: Integer in interval [0...65535]
 * BMS_MaxCellTempNO_3: Integer in interval [0...255]
 * BMS_MaxCellTemp_3: Integer in interval [0...255]
 * BMS_MaxCellVoltageModuleNO_3: Integer in interval [0...255]
 * BMS_MaxCellVoltageNO_3: Integer in interval [0...255]
 * BMS_MaxCellVoltage_3: Integer in interval [0...65535]
 * BMS_MaxChagVoltage_1: Integer in interval [0...65535]
 * BMS_MinCellTempModuleNO: Integer in interval [0...255]
 * BMS_MinCellTempNO_3: Integer in interval [0...255]
 * BMS_MinCellTemp_3: Integer in interval [0...255]
 * BMS_MinCellVoltage_1: Integer in interval [0...65535]
 * BMS_PTC_VoltageValue_3: Integer in interval [0...65535]
 * BMS_PackVoltage_1: Integer in interval [0...65535]
 * BMS_RTC_Request_1: Boolean
 * BMS_RatBatVoltage_1: Integer in interval [0...65535]
 * BMS_RatCapacity_1: Integer in interval [0...65535]
 * BMS_RatEnergy_1: Integer in interval [0...65535]
 * BMS_RemChagTime_1: Integer in interval [0...65535]
 * BMS_RemainCapacity_1: Integer in interval [0...65535]
 * BMS_SOH_2: Integer in interval [0...255]
 * BMS_SingChgkwh_1: Integer in interval [0...255]
 * BMS_SumChgkwh_1: Integer in interval [0...4294967295]
 * BMS_SysRegInsulationValue_2: Integer in interval [0...65535]
 * BMS_ThermalRunawayFault: Boolean
 * BMS_ThrmlRunawayFault: Boolean
 * CCS_OutputCurrent: Integer in interval [0...4000]
 * CCS_OutputVoltage: Integer in interval [0...7500]
 * CGW_ADCUSts: Boolean
 * CGW_BCMSts: Boolean
 * CGW_BMSSts: Boolean
 * CGW_CBMSts: Boolean
 * CGW_CGWSts: Boolean
 * CGW_DCM_FLSts: Boolean
 * CGW_DCM_FRSts: Boolean
 * CGW_DCM_RLSts: Boolean
 * CGW_DCM_RRSts: Boolean
 * CGW_HLLSts: Boolean
 * CGW_HLRSts: Boolean
 * CGW_HOD_HeatingSts: Boolean
 * CGW_IVISts: Boolean
 * CGW_MFP_FCSts: Boolean
 * CGW_MFP_RCSts: Boolean
 * CGW_PRNDSts: Boolean
 * CGW_SCU_LSts: Boolean
 * CGW_SCU_RSts: Boolean
 * CGW_SGWSts: Boolean
 * CGW_SWPSts: Boolean
 * CGW_SwichesSts: Boolean
 * CGW_VCUSts: Boolean
 * CGW_VERSION2_3: Integer in interval [0...255]
 * CGW_VIN0_3: Integer in interval [0...255]
 * CGW_VIN10_3: Integer in interval [0...255]
 * CGW_VIN11_3: Integer in interval [0...255]
 * CGW_VIN12_3: Integer in interval [0...255]
 * CGW_VIN13_3: Integer in interval [0...255]
 * CGW_VIN14_3: Integer in interval [0...255]
 * CGW_VIN15_3: Integer in interval [0...255]
 * CGW_VIN16_3: Integer in interval [0...255]
 * CGW_VIN1_3: Integer in interval [0...255]
 * CGW_VIN2_3: Integer in interval [0...255]
 * CGW_VIN3_3: Integer in interval [0...255]
 * CGW_VIN4_3: Integer in interval [0...255]
 * CGW_VIN5_3: Integer in interval [0...255]
 * CGW_VIN6_3: Integer in interval [0...255]
 * CGW_VIN7_3: Integer in interval [0...255]
 * CGW_VIN8_3: Integer in interval [0...255]
 * CGW_VIN9_3: Integer in interval [0...255]
 * CHM_ProtocolVersion: Integer in interval [0...16777215]
 * Checksum_0B0_2: Integer in interval [0...255]
 * Checksum_0B1_2: Integer in interval [0...255]
 * Checksum_0B2_3: Integer in interval [0...255]
 * Checksum_0B3_3: Integer in interval [0...255]
 * Checksum_0B4_1: Integer in interval [0...255]
 * Checksum_0B7_2: Integer in interval [0...255]
 * Checksum_0B8_4: Integer in interval [0...255]
 * Checksum_0B9_2: Integer in interval [0...255]
 * Checksum_0BA_2: Integer in interval [0...255]
 * Checksum_0BB_3: Integer in interval [0...255]
 * Checksum_0BC_2: Integer in interval [0...255]
 * Checksum_0C1_2: Integer in interval [0...255]
 * Checksum_0D1_2: Integer in interval [0...255]
 * Checksum_0D2_2: Integer in interval [0...255]
 * Checksum_0D3_1: Integer in interval [0...255]
 * Checksum_0E0_2: Integer in interval [0...255]
 * Checksum_0E2_3: Integer in interval [0...255]
 * Checksum_0E4_3: Integer in interval [0...255]
 * Checksum_0E6_1: Integer in interval [0...255]
 * Checksum_0F0: Integer in interval [0...255]
 * Checksum_0F5_1: Integer in interval [0...255]
 * Checksum_0F6_1: Integer in interval [0...255]
 * Checksum_0F9: Integer in interval [0...255]
 * Checksum_102: Integer in interval [0...255]
 * Checksum_104: Integer in interval [0...255]
 * Checksum_105: Integer in interval [0...255]
 * Checksum_249: Integer in interval [0...255]
 * Checksum_255: Integer in interval [0...255]
 * Checksum_280: Integer in interval [0...255]
 * Checksum_28A_2: Integer in interval [0...255]
 * Checksum_323: Integer in interval [0...255]
 * Checksum_325: Integer in interval [0...255]
 * Checksum_33A_2: Integer in interval [0...255]
 * Checksum_91: Integer in interval [0...255]
 * Checksum_94: Integer in interval [0...255]
 * DCM_FL_DoorFLSts: Boolean
 * DCM_FL_MirrorAutoFoldUnfoldSts: Boolean
 * DCM_FL_MirrorAutoTurnDownSts: Boolean
 * DCM_FL_MirrorFold_UnfoldSts: Boolean
 * DCM_FL_RearmirrorHeatingSts: Boolean
 * DCM_FR_AmbientTemperatureValid: Boolean
 * DCM_FR_AmbientTemperature_1: Integer in interval [0...255]
 * DCM_FR_DoorFRSts: Boolean
 * DCM_RL_DoorRLSts: Boolean
 * DCM_RR_DoorRRSts: Boolean
 * EPS_ModeChangeEnable: Boolean
 * EPS_SteeringGearAngle: Integer in interval [0...65535]
 * EPS_SteeringGearAngleSpd: Integer in interval [0...65535]
 * EPS_SteeringGearAngleSpdValid: Boolean
 * EPS_SteeringGearAngleValid: Boolean
 * EPS_TorsionBarTorque: Integer in interval [0...255]
 * EPS_TorsionBarTorqueValid: Boolean
 * EVCOM_CompActlCnsmpCur: Integer in interval [0...255]
 * EVCOM_CompActlPwrCnsmp_1: Integer in interval [0...255]
 * IBS_ABPActive: Boolean
 * IBS_ABPAvailable: Boolean
 * IBS_ABSActive: Boolean
 * IBS_ABSFault: Boolean
 * IBS_AEBActive: Boolean
 * IBS_AEBAvailable: Boolean
 * IBS_AVHAvailable: Boolean
 * IBS_AWBActive: Boolean
 * IBS_AWBAvailable: Boolean
 * IBS_BrakePushrodStroke_2: Integer in interval [-32768...32767]
 * IBS_BrakepedalStatusValid: Boolean
 * IBS_CDPActive: Boolean
 * IBS_CDPAvailable: Boolean
 * IBS_CddActive: Boolean
 * IBS_CddAvailable: Boolean
 * IBS_CddError: Boolean
 * IBS_DTCActive: Boolean
 * IBS_DTCfault: Boolean
 * IBS_EBDActive: Boolean
 * IBS_EBDFault: Boolean
 * IBS_ESCOffSts: Boolean
 * IBS_FLWheelPulseCounter_1: Integer in interval [0...255]
 * IBS_FLWheelSpeed_1: Integer in interval [0...65535]
 * IBS_FLWheelSpeed_Fault: Boolean
 * IBS_FRWheelPulseCounter_1: Integer in interval [0...255]
 * IBS_FRWheelSpeed_1: Integer in interval [0...65535]
 * IBS_FRWheelSpeed_Fault: Boolean
 * IBS_FactoryMode: Boolean
 * IBS_HBAActive: Boolean
 * IBS_HDCAvailable: Boolean
 * IBS_HHCActive: Boolean
 * IBS_HHCAvailable: Boolean
 * IBS_MaintenaceMode: Boolean
 * IBS_MasterCylinderPressure_2: Integer in interval [0...65535]
 * IBS_PlungerPressure_3: Integer in interval [-32768...32767]
 * IBS_RBSStatus: Boolean
 * IBS_RLWheelPulseCounter_1: Integer in interval [0...255]
 * IBS_RLWheelSpeed_2: Integer in interval [0...65535]
 * IBS_RLWheelSpeed_Fault: Boolean
 * IBS_RRWheelPulseCounter_1: Integer in interval [0...255]
 * IBS_RRWheelSpeed_2: Integer in interval [0...65535]
 * IBS_RRWheelSpeed_Fault: Boolean
 * IBS_RWUActive: Boolean
 * IBS_RWUAvailable: Boolean
 * IBS_RollerbenchMode: Boolean
 * IBS_TCSActive: Boolean
 * IBS_TCSFault: Boolean
 * IBS_TPMS_ResetSts: Boolean
 * IBS_TireMonSysSts: Boolean
 * IBS_TireWarnFrntLe: Boolean
 * IBS_TireWarnFrntRi: Boolean
 * IBS_TireWarnReLe: Boolean
 * IBS_TireWarnReRi: Boolean
 * IBS_VCU_DecelerationReqActive: Boolean
 * IBS_VDCActive: Boolean
 * IBS_VDCFault: Boolean
 * IBS_VehicleSpeed_2: Integer in interval [0...65535]
 * IBS_VehicleStandstill_Valid: Boolean
 * IBS_VehiclespeedValid: Boolean
 * IBS_VlcActive: Boolean
 * IBS_VlcAvalible: Boolean
 * IBS_VlcError: Boolean
 * IBS_WLTorqueAPSReq_2: Integer in interval [0...65535]
 * IBS_WLTorqueIncrReqSts: Boolean
 * IBS_WLTorqueIncrReq_2: Integer in interval [0...65535]
 * IBS_WLTorqueRBSReq_2: Integer in interval [0...65535]
 * IBS_WLTorqueRedReqSts: Boolean
 * IBS_WLTorqueRedReq_2: Integer in interval [0...65535]
 * IBS_WLTorqueVLCReq_4: Integer in interval [-32768...32767]
 * IVI_BulbCheckSts: Boolean
 * IVI_OdometerInfor_3: Integer in interval [0...4294967295]
 * IVI_SFIabnormalSts: Boolean
 * IVI_VrState: Boolean
 * MCU_ActTrqValid: Boolean
 * MCU_ActualSpeedValid: Boolean
 * MCU_ActualSpeed_4: Integer in interval [0...65535]
 * MCU_ActualTorque_4: Integer in interval [0...65535]
 * MCU_BDmpCActv: Boolean
 * MCU_IGBTTempMax: Integer in interval [0...255]
 * MCU_IsCurr_4: Integer in interval [0...65535]
 * MCU_TrqAbsMax_1: Integer in interval [0...65535]
 * MCU_TrqAbsMin_1: Integer in interval [0...65535]
 * MessageCounter_0F9: Integer in interval [0...255]
 * POD_DCDC_HVInputCurrent_1: Integer in interval [0...255]
 * POD_DCDC_HVInputVoltage_1: Integer in interval [0...65535]
 * POD_DCDC_Side2Overtempfault_1: Boolean
 * POD_DCFCVoltage_1: Integer in interval [0...65535]
 * POD_DCInletTempA_1: Integer in interval [0...255]
 * POD_DCInletTempB_1: Integer in interval [0...255]
 * POD_OBC_CCCurrentLimit_3: Integer in interval [0...255]
 * POD_OBC_CPCurrentLimit_3: Integer in interval [0...255]
 * POD_OBC_CPDuty_3: Integer in interval [0...255]
 * POD_OBC_ChrgOutpPwrAvl: Integer in interval [0...255]
 * POD_OBC_InputACCurrent_R_3: Integer in interval [0...65535]
 * POD_OBC_InputACCurrent_S_2: Integer in interval [0...65535]
 * POD_OBC_InputACCurrent_T_2: Integer in interval [0...65535]
 * POD_OBC_InputACVoltage_R_3: Integer in interval [0...65535]
 * POD_OBC_InputACVoltage_S_2: Integer in interval [0...65535]
 * POD_OBC_InputACVoltage_T_2: Integer in interval [0...65535]
 * POD_OBC_OBCMaxPermOutpCrrt_3: Integer in interval [0...65535]
 * POD_OBC_OutputDCChargeCurrent_1: Integer in interval [0...65535]
 * POD_OBC_OutputDCChargeVoltage_1: Integer in interval [0...65535]
 * POD_OBC_PrimarySideTemp_2: Integer in interval [0...255]
 * POD_OBC_SecondarySideTemp_2: Integer in interval [0...255]
 * POD_OBC_Side1Overtempfault_3: Boolean
 * POD_OBC_Side2Overtempfault_3: Boolean
 * PRND_Pbutton_FaultSts: Boolean
 * PRND_RNDbutton_FaultSts: Boolean
 * Rte_DT_SG_BMS_BatInfor_02_SigGroup_0: Integer in interval [0...18446744073709551615]
 * Rte_DT_SG_VCU_HMIsignals_03_SigGroup_2: Integer in interval [0...255]
 *   Unit: [A], Factor: 0.00390625, Offset: 0
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IVI01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IVI01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3: Boolean
 * Rte_DT_dt_ErrMgmt_InslaFlt_0: Boolean
 * Rte_DT_dt_ErrMgmt_InslaFlt_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_InslaFlt_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_InslaFlt_3: Boolean
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
 * SGW_TimeInfoDay_1: Integer in interval [0...255]
 * SGW_TimeInfoHour_1: Integer in interval [0...255]
 * SGW_TimeInfoMinute_1: Integer in interval [0...255]
 * SGW_TimeInfoMonth_1: Integer in interval [0...255]
 * SGW_TimeInfoSecond_1: Integer in interval [0...255]
 * SGW_TimeInfoYear_1: Integer in interval [0...255]
 * SGW_TimeValid: Boolean
 * SGW_TripCounter_3: Integer in interval [0...4294967295]
 * TCU_HVCHHVDCCurrent_1: Integer in interval [0...255]
 * TCU_HVCHHighVoltage_1: Integer in interval [0...65535]
 * TCU_TMSTotalPwrCnsmp: Integer in interval [0...255]
 * TCU_TMSTotoalPwrReq_1: Integer in interval [0...255]
 * VCU_ADASOverride: Boolean
 * VCU_APSTorqueRequestActive: Boolean
 * VCU_APSTorqueRequestAvailable: Boolean
 * VCU_AccelerationPedalValid: Boolean
 * VCU_AccelerationPedal_2: Integer in interval [0...65535]
 * VCU_BS_Current_1: Integer in interval [0...65535]
 * VCU_BS_HCurrent_1: Integer in interval [-32768...32767]
 * VCU_BS_IndicatorSts: Boolean
 * VCU_BS_LV_Batt_3: Integer in interval [0...65535]
 * VCU_BS_QuiescentCurrent_1: Integer in interval [0...255]
 * VCU_ChargeEnergy_1: Integer in interval [0...65535]
 * VCU_ChargeTime_1: Integer in interval [0...65535]
 * VCU_CreepTorque_1: Integer in interval [0...65535]
 * VCU_DCDCFail_6: Boolean
 * VCU_DCDCPowerLimit_1: Integer in interval [0...255]
 * VCU_DCFCCurrent_1: Integer in interval [0...65535]
 * VCU_DecelerationReq_1: Integer in interval [0...255]
 * VCU_DecelerationReqactive: Boolean
 * VCU_DisChgPowerLimit_1: Integer in interval [0...255]
 * VCU_DischargeEndSoc_2: Integer in interval [0...255]
 * VCU_DisplayMileage_1: Integer in interval [0...65535]
 * VCU_Display_Cur_2: Integer in interval [0...65535]
 * VCU_Display_Power_2: Integer in interval [0...65535]
 * VCU_Display_voltage_5: Integer in interval [0...65535]
 * VCU_DriveMotOvrTemp: Boolean
 * VCU_DriverTorqueRequest_1: Integer in interval [0...65535]
 * VCU_Enable_DC_Relay_3: Boolean
 * VCU_EnergyManagementWarn_1: Integer in interval [0...255]
 * VCU_EnergyV2L_1: Integer in interval [0...65535]
 * VCU_ForwardVmaxlimitStatus_4: Boolean
 * VCU_HVBatOvrTemp_5: Boolean
 * VCU_HVConnectFault_1: Boolean
 * VCU_HVILError: Boolean
 * VCU_HVInsulResFault: Boolean
 * VCU_InvldGearSel: Integer in interval [0...255]
 * VCU_IsoMeasurementSwitch_3: Boolean
 * VCU_KL15eOn: Boolean
 * VCU_Kickdown: Boolean
 * VCU_LimpHome: Boolean
 * VCU_MCUActHeatPwr_2: Integer in interval [0...255]
 * VCU_MCUDesiredTorque_5: Integer in interval [0...65535]
 * VCU_MCUPower_1: Integer in interval [0...65535]
 * VCU_ManuallyUnlockComment_3: Boolean
 * VCU_MaxSpdLimit_2: Integer in interval [0...65535]
 * VCU_MaxTorqueGradient_3: Integer in interval [0...65535]
 * VCU_MaxTorqueLimit_3: Integer in interval [0...65535]
 * VCU_MaximumOutputCurrent_1: Integer in interval [0...65535]
 * VCU_MaximumOutputVoltage_1: Integer in interval [0...65535]
 * VCU_MemoryChargeFault_1: Boolean
 * VCU_MileagelowRemind: Boolean
 * VCU_MinTorqueLimit_3: Integer in interval [0...65535]
 * VCU_MinimumOutputCurrent_1: Integer in interval [0...65535]
 * VCU_MinimumOutputVoltage_1: Integer in interval [0...65535]
 * VCU_MotorActualTorqueValid: Boolean
 * VCU_MotorActualTorque_1: Integer in interval [0...65535]
 * VCU_MotorSpdReq_2: Integer in interval [0...65535]
 * VCU_OBC_ChargeCurrentCommand_3: Integer in interval [0...65535]
 * VCU_OBC_Control_of_S2_SW_3: Boolean
 * VCU_OBC_Control_of_em_lock_3: Boolean
 * VCU_PermitPackPTC_1: Boolean
 * VCU_ReachLimitStd: Boolean
 * VCU_RegenBrakeLightReqVld: Boolean
 * VCU_RegenBrakeLightRequest: Boolean
 * VCU_RegenTorqueCapValid: Boolean
 * VCU_RegenTorqueCap_1: Integer in interval [0...65535]
 * VCU_SpdLimitActTorque_1: Integer in interval [0...65535]
 * VCU_SynRequest_1: Integer in interval [0...4294967295]
 * VCU_SystemReady: Boolean
 * VCU_TCSActive: Boolean
 * VCU_TCUPowerAllowed_1: Integer in interval [0...65535]
 * VCU_TorqueRequestActive: Boolean
 * VCU_TorqueRequestAvailable: Boolean
 * VCU_TrqThresholdDampgCtl_5: Integer in interval [0...255]
 * VCU_VLCTorqueRequestActive: Boolean
 * VCU_VLCTorqueRequestAvailable: Boolean
 * VCU_VehicleSpeed: Integer in interval [0...65535]
 * VCU_VehicleSpeedValid: Boolean
 * VCU_VehicleSpeed_2: Integer in interval [0...65535]
 * VCU_VirtualACPedalValid: Boolean
 * VCU_VirtualACPedal_1: Integer in interval [0...65535]
 * VCU_VoltageDemandLV_1: Integer in interval [0...65535]
 * VCU_WakeUpStatus_1: Integer in interval [0...255]
 * VCU_WheelTrqACTValid: Boolean
 * VCU_WheelTrqACT_1: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * checksum_275: Integer in interval [0...255]
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint64: Integer in interval [0...18446744073709551615] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ACU_CrashOutputSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_No_Crash (0U)
 *   Cx01_Rollover (1U)
 *   Cx02_BPT_Crash (2U)
 *   Cx03_Rollover_BPT (3U)
 *   Cx04_Front_Crash (4U)
 *   Cx05_Rollover_Front (5U)
 *   Cx06_BPT_Front (6U)
 *   Cx07_Rollover_BPT_Front (7U)
 *   Cx08_Side_Crash (8U)
 *   Cx09_Rollover_Side (9U)
 *   Cx0A_BPT_Side (10U)
 *   Cx0B_Rollover_BPT_Side (11U)
 *   Cx0C_Front_Side (12U)
 *   Cx0D_Rollover_Front_Side (13U)
 *   Cx0E_BPT_Front_Side (14U)
 *   Cx0F_Rollover_BPT_Front_Side (15U)
 *   Cx10_Rear_Crash (16U)
 *   Cx11_Rollover_Rear (17U)
 *   Cx12_BPT_Rear (18U)
 *   Cx13_Rollover_BPT_Rear (19U)
 *   Cx14_Front_Rear (20U)
 *   Cx15_Rollover_Front_Rear (21U)
 *   Cx16_BPT_Front_Rear (22U)
 *   Cx17_Rollover_BPT_Front_Rear (23U)
 *   Cx18_Side_Rear (24U)
 *   Cx19_Rollover_Side_Rear (25U)
 *   Cx1A_BPT_Side_Rear (26U)
 *   Cx1B_Rollover_BPT_Side_Rear (27U)
 *   Cx1C_Front_Side_Rear (28U)
 *   Cx1D_Rollover_Front_Side_Rear (29U)
 *   Cx1E_BPT_Front_Side_Rear (30U)
 *   Cx1F_Rollover_BPT_Front_Side_Rear (31U)
 * ACU_DriverWarningLampSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * ACU_LatAStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invalid (0U)
 *   Cx1_Valid (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * ACU_LgtAStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invalid (0U)
 *   Cx1_Valid (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * ACU_PassengerAirbagSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_RESERVED (0U)
 *   Cx1_Disabled (1U)
 *   Cx2_Enabled (2U)
 *   Cx3_RESERVED (3U)
 * ACU_PassengerWarningLampSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * ACU_WarningLampSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_FLASH (2U)
 * ACU_YawRateStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invalid (0U)
 *   Cx1_Valid (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * ADCU_ACCDA_HandsOFF_Warning: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Warning (0U)
 *   Cx1_Hands_Off_1st_Warning (1U)
 *   Cx2_Hands_Off_2nd_Warning (2U)
 *   Cx3_Function_Automatic_exit_Warning (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * ADCU_ACCDA_SYS_Failure: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Error (0U)
 *   Cx1_Error (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * ADCU_ACC_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Active_State (1U)
 *   Cx2_Override_State (2U)
 *   Cx3_Shut_off_State (3U)
 *   Cx4_Standby_State (4U)
 *   Cx5_Fail_State (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * ADCU_AEBWarningSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_WARNING (0U)
 *   Cx1_PreWarning_to_car (1U)
 *   Cx2_Latent_distance_Warning (2U)
 *   Cx3_Braking_to_car (3U)
 *   Cx4_PreWarning_to_PED (4U)
 *   Cx5_Braking_to_PED (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * ADCU_AEB_AWB_Level: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_level (0U)
 *   Cx1_Level_1 (1U)
 *   Cx2_Level_2 (2U)
 *   Cx3_Level_3 (3U)
 *   Cx4_Level_4 (4U)
 *   Cx5_Reserved (5U)
 * ADCU_AEB_State: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Active (2U)
 *   Cx3_Failure (3U)
 * ADCU_APSComfBrkReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_ComfBrakeReq_NoReq (0U)
 *   Cx1_ComfBrakeReq_Type1 (1U)
 *   Cx2_ComfBrakeReq_Type2 (2U)
 * ADCU_APSCrlModeReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_None (0U)
 *   Cx1_APS (1U)
 *   Cx2_RC (2U)
 *   Cx3_Reserved (3U)
 * ADCU_APSCrlReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Req_None (0U)
 *   Cx1_Req_Drive (1U)
 *   Cx2_Req_LSM (2U)
 * ADCU_APSCrlTypReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Comfort (1U)
 *   Cx2_Emergency (2U)
 *   Cx3_Reserved (3U)
 * ADCU_APSDistanceStop: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFF_Invalid (4095U)
 * ADCU_APSMaxSpeedReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx1F_Invalid (31U)
 * ADCU_APS_Stop_Req: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_Stop_control_is_required (1U)
 *   Cx2_No_need_to_stop (2U)
 * ADCU_DA_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Standby_Inhibit (1U)
 *   Cx2_Standby_Available (2U)
 *   Cx3_Active (3U)
 *   Cx4_Override_longitudinal (4U)
 *   Cx5_Override_lateral (5U)
 *   Cx6_Failure (6U)
 *   Cx7_Reserved (7U)
 * ADCU_FCW_State: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Active (2U)
 *   Cx3_Failure (3U)
 * ADCU_Parking_CtrlSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_Failure (2U)
 *   Cx3_Reserved (3U)
 * ADCU_Parking_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Background_searching (2U)
 *   Cx3_Searching (3U)
 *   Cx4_Guidance_active (4U)
 *   Cx5_Recovery_interrupt (5U)
 *   Cx6_Completed (6U)
 *   Cx7_Failure (7U)
 *   Cx8_Terminated (8U)
 *   Cx9_Reserved (9U)
 *   CxA_Reserved (10U)
 *   CxB_Reserved (11U)
 *   CxC_Reserved (12U)
 *   CxD_Reserved (13U)
 *   CxE_Reserved (14U)
 *   CxF_Reserved (15U)
 * ADCU_RemoteParkingMode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Prepare (1U)
 *   Cx2_Standby (2U)
 *   Cx3_Moving (3U)
 *   Cx4_Recovery_interrupt (4U)
 *   Cx5_Voluntarily_Exit (5U)
 *   Cx6_Passive_Exit (6U)
 *   Cx7_Failure (7U)
 *   Cx8_Reserved (8U)
 *   Cx9_Reserved (9U)
 *   CxA_Reserved (10U)
 *   CxB_Reserved (11U)
 *   CxC_Reserved (12U)
 *   CxD_Reserved (13U)
 *   CxE_Reserved (14U)
 *   CxF_Reserved (15U)
 * ADCU_TargetGear: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_P (1U)
 *   Cx2_N (2U)
 *   Cx3_R (3U)
 *   Cx4_D (4U)
 * BCM_DomeLampAutoSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Non_auto_set (0U)
 *   Cx1_Door_open_auto_set (1U)
 *   Cx2_Door_close_auto_set (2U)
 * BCM_FLSeatBeltRemindReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * BCM_FRSeatBeltRemindReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * BCM_FrontWiperModeSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_AUTO (1U)
 *   Cx2_Low_speed (2U)
 *   Cx3_High_speed (3U)
 *   Cx4_Intermittent (4U)
 *   Cx5_Reserved (5U)
 * BCM_GearTimesSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_0 (0U)
 *   Cx1_1 (1U)
 *   Cx2_2 (2U)
 *   Cx3_3 (3U)
 *   Cx4_4 (4U)
 *   Cx5_5 (5U)
 * BCM_PepsPowerMode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Default (0U)
 *   Cx1_OFF (1U)
 *   Cx2_Local_ON (2U)
 *   Cx3_Reserve (3U)
 *   Cx4_Reserve (4U)
 *   Cx5_Reserve (5U)
 *   Cx6_Reserve (6U)
 *   Cx7_Invalid (7U)
 * BCM_PuddleLiReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_Off (1U)
 *   Cx2_On (2U)
 * BCM_RLSeatBeltRemindReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * BCM_RRSeatBeltRemindReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_First_level_reminder (1U)
 *   Cx2_Second_level_reminder (2U)
 *   Cx3_Reserved (3U)
 * BCM_WelLightshowOnOffSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 * BCM_WiperServiceSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 * BCM_WiperWorkingSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_Low_speed (1U)
 *   Cx2_High_speed (2U)
 * BMS_AbortAchiveSingleVolt_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_reached (0U)
 *   Cx1_Reached (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortAchiveTotalVolt_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_reached (0U)
 *   Cx1_Reached (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortAchivesetValue_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_reached (0U)
 *   Cx1_Reached (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortErrorCurrent_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Over_current (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortErrorVoltage_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Abnormal (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortFaultBMSTemp_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Over_temp (1U)
 *   Cx2_Untrustable (2U)
 * BMS_AbortFaultBatteryTemp_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Over_temp (1U)
 *   Cx2_Untrustable (2U)
 * BMS_BatType_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx01_lead_acid_battery (1U)
 *   Cx02_Ni_MH_battery (2U)
 *   Cx03_Lithium_iron_phosphate_battery (3U)
 *   Cx04_Lithium_manganate_battery (4U)
 *   Cx05_Lithium_cobalt_oxide_battery (5U)
 *   Cx06_Ternary_material_battery (6U)
 *   Cx07_Polymer_lithium_ion_battery (7U)
 *   Cx08_Lithium_titanate_battery (8U)
 *   Cx09_Reserved (9U)
 *   Cx0A_Reserved (10U)
 *   Cx0B_Reserved (11U)
 *   Cx0C_Reserved (12U)
 *   Cx0D_Reserved (13U)
 *   Cx0E_Reserved (14U)
 *   Cx0F_Reserved (15U)
 *   Cx10_Reserved (16U)
 *   Cx11_Reserved (17U)
 *   Cx12_Reserved (18U)
 *   Cx13_Reserved (19U)
 *   Cx14_Reserved (20U)
 *   Cx15_Reserved (21U)
 *   Cx16_Reserved (22U)
 *   Cx17_Reserved (23U)
 *   Cx18_Reserved (24U)
 *   Cx19_Reserved (25U)
 *   Cx1A_Reserved (26U)
 *   Cx1B_Reserved (27U)
 *   Cx1C_Reserved (28U)
 *   Cx1D_Reserved (29U)
 *   Cx1E_Reserved (30U)
 *   Cx1F_Reserved (31U)
 *   Cx20_Reserved (32U)
 *   Cx21_Reserved (33U)
 *   Cx22_Reserved (34U)
 *   Cx23_Reserved (35U)
 *   Cx24_Reserved (36U)
 *   Cx25_Reserved (37U)
 *   Cx26_Reserved (38U)
 *   Cx27_Reserved (39U)
 *   Cx28_Reserved (40U)
 *   Cx29_Reserved (41U)
 *   Cx2A_Reserved (42U)
 *   Cx2B_Reserved (43U)
 *   Cx2C_Reserved (44U)
 *   Cx2D_Reserved (45U)
 *   Cx2E_Reserved (46U)
 *   Cx2F_Reserved (47U)
 *   Cx30_Reserved (48U)
 *   Cx31_Reserved (49U)
 *   Cx32_Reserved (50U)
 *   Cx33_Reserved (51U)
 *   Cx34_Reserved (52U)
 *   Cx35_Reserved (53U)
 *   Cx36_Reserved (54U)
 *   Cx37_Reserved (55U)
 *   Cx38_Reserved (56U)
 *   Cx39_Reserved (57U)
 *   Cx3A_Reserved (58U)
 *   Cx3B_Reserved (59U)
 *   Cx3C_Reserved (60U)
 *   Cx3D_Reserved (61U)
 *   Cx3E_Reserved (62U)
 *   Cx3F_Reserved (63U)
 *   Cx40_Reserved (64U)
 *   Cx41_Reserved (65U)
 *   Cx42_Reserved (66U)
 *   Cx43_Reserved (67U)
 *   Cx44_Reserved (68U)
 *   Cx45_Reserved (69U)
 *   Cx46_Reserved (70U)
 *   Cx47_Reserved (71U)
 *   Cx48_Reserved (72U)
 *   Cx49_Reserved (73U)
 *   Cx4A_Reserved (74U)
 *   Cx4B_Reserved (75U)
 *   Cx4C_Reserved (76U)
 *   Cx4D_Reserved (77U)
 *   Cx4E_Reserved (78U)
 *   Cx4F_Reserved (79U)
 *   Cx50_Reserved (80U)
 *   Cx51_Reserved (81U)
 *   Cx52_Reserved (82U)
 *   Cx53_Reserved (83U)
 *   Cx54_Reserved (84U)
 *   Cx55_Reserved (85U)
 *   Cx56_Reserved (86U)
 *   Cx57_Reserved (87U)
 *   Cx58_Reserved (88U)
 *   Cx59_Reserved (89U)
 *   Cx5A_Reserved (90U)
 *   Cx5B_Reserved (91U)
 *   Cx5C_Reserved (92U)
 *   Cx5D_Reserved (93U)
 *   Cx5E_Reserved (94U)
 *   Cx5F_Reserved (95U)
 *   Cx60_Reserved (96U)
 *   Cx61_Reserved (97U)
 *   Cx62_Reserved (98U)
 *   Cx63_Reserved (99U)
 *   Cx64_Reserved (100U)
 *   Cx65_Reserved (101U)
 *   Cx66_Reserved (102U)
 *   Cx67_Reserved (103U)
 *   Cx68_Reserved (104U)
 *   Cx69_Reserved (105U)
 *   Cx6A_Reserved (106U)
 *   Cx6B_Reserved (107U)
 *   Cx6C_Reserved (108U)
 *   Cx6D_Reserved (109U)
 *   Cx6E_Reserved (110U)
 *   Cx6F_Reserved (111U)
 *   Cx70_Reserved (112U)
 *   Cx71_Reserved (113U)
 *   Cx72_Reserved (114U)
 *   Cx73_Reserved (115U)
 *   Cx74_Reserved (116U)
 *   Cx75_Reserved (117U)
 *   Cx76_Reserved (118U)
 *   Cx77_Reserved (119U)
 *   Cx78_Reserved (120U)
 *   Cx79_Reserved (121U)
 *   Cx7A_Reserved (122U)
 *   Cx7B_Reserved (123U)
 *   Cx7C_Reserved (124U)
 *   Cx7D_Reserved (125U)
 *   Cx7E_Reserved (126U)
 *   Cx7F_Reserved (127U)
 *   Cx80_Reserved (128U)
 *   Cx81_Reserved (129U)
 *   Cx82_Reserved (130U)
 *   Cx83_Reserved (131U)
 *   Cx84_Reserved (132U)
 *   Cx85_Reserved (133U)
 *   Cx86_Reserved (134U)
 *   Cx87_Reserved (135U)
 *   Cx88_Reserved (136U)
 *   Cx89_Reserved (137U)
 *   Cx8A_Reserved (138U)
 *   Cx8B_Reserved (139U)
 *   Cx8C_Reserved (140U)
 *   Cx8D_Reserved (141U)
 *   Cx8E_Reserved (142U)
 *   Cx8F_Reserved (143U)
 *   Cx90_Reserved (144U)
 *   Cx91_Reserved (145U)
 *   Cx92_Reserved (146U)
 *   Cx93_Reserved (147U)
 *   Cx94_Reserved (148U)
 *   Cx95_Reserved (149U)
 *   Cx96_Reserved (150U)
 *   Cx97_Reserved (151U)
 *   Cx98_Reserved (152U)
 *   Cx99_Reserved (153U)
 *   Cx9A_Reserved (154U)
 *   Cx9B_Reserved (155U)
 *   Cx9C_Reserved (156U)
 *   Cx9D_Reserved (157U)
 *   Cx9E_Reserved (158U)
 *   Cx9F_Reserved (159U)
 *   CxA0_Reserved (160U)
 *   CxA1_Reserved (161U)
 *   CxA2_Reserved (162U)
 *   CxA3_Reserved (163U)
 *   CxA4_Reserved (164U)
 *   CxA5_Reserved (165U)
 *   CxA6_Reserved (166U)
 *   CxA7_Reserved (167U)
 *   CxA8_Reserved (168U)
 *   CxA9_Reserved (169U)
 *   CxAA_Reserved (170U)
 *   CxAB_Reserved (171U)
 *   CxAC_Reserved (172U)
 *   CxAD_Reserved (173U)
 *   CxAE_Reserved (174U)
 *   CxAF_Reserved (175U)
 *   CxB0_Reserved (176U)
 *   CxB1_Reserved (177U)
 *   CxB2_Reserved (178U)
 *   CxB3_Reserved (179U)
 *   CxB4_Reserved (180U)
 *   CxB5_Reserved (181U)
 *   CxB6_Reserved (182U)
 *   CxB7_Reserved (183U)
 *   CxB8_Reserved (184U)
 *   CxB9_Reserved (185U)
 *   CxBA_Reserved (186U)
 *   CxBB_Reserved (187U)
 *   CxBC_Reserved (188U)
 *   CxBD_Reserved (189U)
 *   CxBE_Reserved (190U)
 *   CxBF_Reserved (191U)
 *   CxC0_Reserved (192U)
 *   CxC1_Reserved (193U)
 *   CxC2_Reserved (194U)
 *   CxC3_Reserved (195U)
 *   CxC4_Reserved (196U)
 *   CxC5_Reserved (197U)
 *   CxC6_Reserved (198U)
 *   CxC7_Reserved (199U)
 *   CxC8_Reserved (200U)
 *   CxC9_Reserved (201U)
 *   CxCA_Reserved (202U)
 *   CxCB_Reserved (203U)
 *   CxCC_Reserved (204U)
 *   CxCD_Reserved (205U)
 *   CxCE_Reserved (206U)
 *   CxCF_Reserved (207U)
 *   CxD0_Reserved (208U)
 *   CxD1_Reserved (209U)
 *   CxD2_Reserved (210U)
 *   CxD3_Reserved (211U)
 *   CxD4_Reserved (212U)
 *   CxD5_Reserved (213U)
 *   CxD6_Reserved (214U)
 *   CxD7_Reserved (215U)
 *   CxD8_Reserved (216U)
 *   CxD9_Reserved (217U)
 *   CxDA_Reserved (218U)
 *   CxDB_Reserved (219U)
 *   CxDC_Reserved (220U)
 *   CxDD_Reserved (221U)
 *   CxDE_Reserved (222U)
 *   CxDF_Reserved (223U)
 *   CxE0_Reserved (224U)
 *   CxE1_Reserved (225U)
 *   CxE2_Reserved (226U)
 *   CxE3_Reserved (227U)
 *   CxE4_Reserved (228U)
 *   CxE5_Reserved (229U)
 *   CxE6_Reserved (230U)
 *   CxE7_Reserved (231U)
 *   CxE8_Reserved (232U)
 *   CxE9_Reserved (233U)
 *   CxEA_Reserved (234U)
 *   CxEB_Reserved (235U)
 *   CxEC_Reserved (236U)
 *   CxED_Reserved (237U)
 *   CxEE_Reserved (238U)
 *   CxEF_Reserved (239U)
 *   CxF0_Reserved (240U)
 *   CxF1_Reserved (241U)
 *   CxF2_Reserved (242U)
 *   CxF3_Reserved (243U)
 *   CxF4_Reserved (244U)
 *   CxF5_Reserved (245U)
 *   CxF6_Reserved (246U)
 *   CxF7_Reserved (247U)
 *   CxF8_Reserved (248U)
 *   CxF9_Reserved (249U)
 *   CxFA_Reserved (250U)
 *   CxFB_Reserved (251U)
 *   CxFC_Reserved (252U)
 *   CxFD_Reserved (253U)
 *   CxFE_Reserved (254U)
 *   CxFF_Reserved (255U)
 * BMS_ChagComplete_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal_Completion (0U)
 *   Cx1_Abnormal_completion (1U)
 *   Cx2_Untrustable (2U)
 *   Cx3_During_Charging (3U)
 * BMS_ChargeRequest_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invalid (0U)
 *   Cx1_Heat_Request_only (1U)
 *   Cx2_Heat_And_Charge_Request (2U)
 *   Cx3_Charge_Only (3U)
 *   Cx4_Cool_And_Charge_Request (4U)
 * BMS_ChargeStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_charging (0U)
 *   Cx1_Heat_only (1U)
 *   Cx2_Charge_and_heat_DC_ (2U)
 *   Cx3_Charge_and_heat_AC_ (3U)
 *   Cx4_Charge_only_DC_ (4U)
 *   Cx5_Charge_only_AC_ (5U)
 *   Cx6_Charge_hold (6U)
 *   Cx7_Charge_stop (7U)
 * BMS_DCChgMode_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Ready (0U)
 *   Cx1_Constant_voltage (1U)
 *   Cx2_Constant_current (2U)
 * BMS_ErrorCellHighTemp_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorCellLowTemp_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorCellOverVolt_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorCellUnderVolt_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorChaCurrentOver_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorIsolationSingleLow: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_ErrorLevel: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_level1 (1U)
 *   Cx2_level2 (2U)
 *   Cx3_level3 (3U)
 *   Cx4_level4 (4U)
 * BMS_ErrorLowSoc_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * BMS_KeepWarmStatus_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 * BMS_NegRelayStatus_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_Closed (1U)
 *   Cx2_Opened (2U)
 *   Cx3_Signal_Invalid (3U)
 * BMS_PTCRelayStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_Closed (1U)
 *   Cx2_Opened (2U)
 *   Cx3_Signal_Invalid (3U)
 * BMS_PosRelayStatus_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_Closed (1U)
 *   Cx2_Opened (2U)
 *   Cx3_Signal_Invalid (3U)
 * BMS_PreCharge: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_precharge (0U)
 *   Cx1_Precharging (1U)
 *   Cx2_Precharge_finished (2U)
 *   Cx3_Precharge_failed (3U)
 * BMS_PreRelayStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserved (0U)
 *   Cx1_Closed (1U)
 *   Cx2_Opened (2U)
 *   Cx3_Signal_Invalid (3U)
 * BMS_RunHeatStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Running_heat (0U)
 *   Cx1_Target_heat (1U)
 *   Cx2_App_heat (2U)
 *   Cx3_Running_cool (3U)
 *   Cx4_not_heat_not_cool (4U)
 * BMS_WorkMode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Initialize (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Running (2U)
 *   Cx3_DC_charge (3U)
 *   Cx4_AC_charge (4U)
 *   Cx5_Discharge (5U)
 *   Cx6_Error (6U)
 *   Cx7_Invalid (7U)
 * CEM_BatteryChargeRequireTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * CGW_VERSION1_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_concept (0U)
 *   Cx01_Sample_A (1U)
 *   Cx02_Sample_B (2U)
 *   Cx03_Sample_C (3U)
 *   Cx04_Sample_D (4U)
 *   Cx05_Sample_SW (5U)
 * CGW_VehicleState: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Fully_sleep (0U)
 *   Cx1_Invisible_awake_CANwakeup (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 *   Cx4_Invisible_awake_OnlyHVon (4U)
 *   Cx5_Standby_Normal (5U)
 *   Cx6_Standby_OnlyLVon (6U)
 *   Cx7_Drive_Normal (7U)
 *   Cx8_Drive_LVFault (8U)
 * DCM_FL_FRWndSwA: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off_switch (0U)
 *   Cx1_manually_press_the_window_lift_switch (1U)
 *   Cx2_automatically_press_the_window_lift_switch (2U)
 *   Cx3_manually_press_the_window_drop_switch (3U)
 *   Cx4_automatically_press_the_window_drop_switch (4U)
 *   Cx5_Invalid (5U)
 * DCM_FL_LeftMirrorHorizontalPos: Enumeration of integer in interval [0...255] with enumerators
 *   CxFF_Invalid (255U)
 * DCM_FL_LeftMirrorVerticalPos: Enumeration of integer in interval [0...255] with enumerators
 *   CxFF_Invalid (255U)
 * DCM_FL_RLWndSwA: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off_switch (0U)
 *   Cx1_manually_press_the_window_lift_switch (1U)
 *   Cx2_automatically_press_the_window_lift_switch (2U)
 *   Cx3_manually_press_the_window_drop_switch (3U)
 *   Cx4_automatically_press_the_window_drop_switch (4U)
 *   Cx5_Invalid (5U)
 * DCM_FL_RRWndSwA: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off_switch (0U)
 *   Cx1_manually_press_the_window_lift_switch (1U)
 *   Cx2_automatically_press_the_window_lift_switch (2U)
 *   Cx3_manually_press_the_window_drop_switch (3U)
 *   Cx4_automatically_press_the_window_drop_switch (4U)
 *   Cx5_Invalid (5U)
 * EPS_ModeFb: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Reserved (1U)
 *   Cx2_Sport (2U)
 *   Cx3_Comfort (3U)
 * EPS_WarningLamp: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Failure (0U)
 *   Cx1_Light_level_failure_indication_yellow_ (1U)
 *   Cx2_Heavy_level_failure_indication_red_ (2U)
 *   Cx3_Invalid (3U)
 * IBS_APSComfortAvl: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NotAvailable (0U)
 *   Cx1_Brake_failure (1U)
 *   Cx2_Excessive_slope (2U)
 *   Cx3_Available (3U)
 * IBS_APSCrlReqEcho: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Drive (1U)
 *   Cx2_LSM (2U)
 *   Cx3_reserved (3U)
 * IBS_APSEmergenyAvl: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NotAvailable (0U)
 *   Cx1_Brake_failure (1U)
 *   Cx2_Excessive_slope (2U)
 *   Cx3_Available (3U)
 * IBS_APSModeEcho: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_None (0U)
 *   Cx1_APS (1U)
 *   Cx2_RC (2U)
 *   Cx3_Reserved (3U)
 * IBS_APSTrqReqActive: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_INACTIVE (0U)
 *   Cx1_ACTIVE (1U)
 * IBS_APS_Avl: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_AxCapbl_Full (0U)
 *   Cx1_reversed (1U)
 *   Cx2_AxCapbl_VehBlocked (2U)
 *   Cx3_reversed (3U)
 * IBS_AVHSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_STANDBY (1U)
 *   Cx2_ACTIVE (2U)
 * IBS_BrakeFluidWarning: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_BRAKEFLUID_NORMAL_INIT_DEFAULT (0U)
 *   Cx1_BRAKEFLUID_EMPTY (1U)
 *   Cx2_RESERVED (2U)
 *   Cx3_RESERVED (3U)
 * IBS_BrakeLightRequest: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_brakelightOFF (0U)
 *   Cx1_brakelightON (1U)
 *   Cx2_notused (2U)
 *   Cx3_signalnotavailable (3U)
 * IBS_BrakeTypEcho: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Comfort (1U)
 *   Cx2_Emergency (2U)
 *   Cx3_Reserved (3U)
 * IBS_BrakepedalStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NOT_PRESSED_INIT_DEFAULT (0U)
 *   Cx1_PRESSED (1U)
 *   Cx2_RESERVED (2U)
 *   Cx3_ERROR (3U)
 * IBS_EPBControllerSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_MasterMode (0U)
 *   Cx1_SlaveMode (1U)
 * IBS_EPBFailureLamp: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_LampOFF (0U)
 *   Cx1_LampON (1U)
 * IBS_EPBFailureStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_error (0U)
 *   Cx1_error (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 * IBS_EPBFunctionLamp: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_LampOFF (0U)
 *   Cx1_LampON (1U)
 *   Cx2_flash (2U)
 *   Cx3_Invalid (3U)
 * IBS_EPBTextdisplay: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_Park_Brake_Applied (1U)
 *   Cx2_Park_Brake_Released (2U)
 *   Cx3_Parking_brake_malfunction_Visit_service_center_to_fix_the_issue (3U)
 *   Cx4_Reserve (4U)
 * IBS_EPBworkingSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_UNKNOWN (0U)
 *   Cx1_APPLIED (1U)
 *   Cx2_RELEASED (2U)
 *   Cx3_APPLY_IN_PROGRESS (3U)
 *   Cx4_RELEASE_IN_PROGRESS (4U)
 *   Cx5_COMPLETELY_RELEASED (5U)
 *   Cx6_DYNAMIC_APPLY (6U)
 *   Cx7_RESERVED (7U)
 * IBS_ESClampdisplay: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_ESC_lamp_ON (0U)
 *   Cx1_ESC_lamp_OFF (1U)
 *   Cx2_ESC_lamp_FLASH (2U)
 * IBS_FLMovingDirection: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Standstill (0U)
 *   Cx1_Forward (1U)
 *   Cx2_Backward (2U)
 * IBS_FRMovingDirection: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Standstill (0U)
 *   Cx1_Forward (1U)
 *   Cx2_Backward (2U)
 * IBS_HDCSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_STANDBY (1U)
 *   Cx2_ACTIVE (2U)
 * IBS_HazWarnReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_ON (1U)
 *   Cx2_Signalnotavailable (2U)
 * IBS_RLMovingDirection: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Standstill (0U)
 *   Cx1_Forward (1U)
 *   Cx2_Backward (2U)
 * IBS_RRMovingDirection: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Standstill (0U)
 *   Cx1_Forward (1U)
 *   Cx2_Backward (2U)
 * IBS_SUBEPBControllerSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_MasterMode (0U)
 *   Cx1_SlaveMode (1U)
 * IBS_SUBEPBFailureStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_error (0U)
 *   Cx1_error (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 * IBS_SUBEPBworkingSts: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_UNKNOWN (0U)
 *   Cx1_APPLIED (1U)
 *   Cx2_RELEASED (2U)
 *   Cx3_APPLY_IN_PROGRESS (3U)
 *   Cx4_RELEASE_IN_PROGRESS (4U)
 *   Cx5_COMPLETELY_RELEASED (5U)
 *   Cx6_DYNAMIC_APPLY (6U)
 *   Cx7_RESERVED (7U)
 * IBS_SystemStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Degrade (1U)
 *   Cx2_Partial (2U)
 *   Cx3_Inhibit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * IBS_TargetGearReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_P (1U)
 *   Cx2_N (2U)
 *   Cx3_R (3U)
 *   Cx4_D (4U)
 * IBS_VCU_DecelerationRequest_Available: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Available (0U)
 *   Cx1_Not_Available (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * IBS_VehicleStandstill: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NOT_STANDSTILL (0U)
 *   Cx1_STANDSTILL (1U)
 *   Cx2_RESERVED (2U)
 * IBS_WLTorqueAPSReqValid: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NotIntialized (0U)
 *   Cx1_Normal (1U)
 *   Cx2_Faulty (2U)
 * IBS_WLTorqueRBSReqValid: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NotIntialized (0U)
 *   Cx1_Normal (1U)
 *   Cx2_Faulty (2U)
 * IBS_WLTorqueVLCReqValid_4: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NotIntialized (0U)
 *   Cx1_Normal (1U)
 *   Cx2_Faulty (2U)
 * IVI_AppointChargeCmd_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_Charge_ON (1U)
 *   Cx2_Charge_OFF (2U)
 * IVI_BrakeCompensateCmd: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_Request (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_Reserved (3U)
 * IVI_CRLevelSet: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_OFF (1U)
 *   Cx2_Primary_energy_recovery_weak_ (2U)
 *   Cx3_Secondary_energy_recovery_medium_ (3U)
 *   Cx4_Tertiary_energy_recovery_strong_ (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * IVI_DriveModeSet_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_ECO (1U)
 *   Cx2_NORMAL (2U)
 *   Cx3_SPORT (3U)
 *   Cx4_OnePedal (4U)
 * IVI_DschrgOnOffSet_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_Reserved (3U)
 * IVI_ForwardVmaxAllowed_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_No_request (0U)
 *   Cx01_1_170 (1U)
 *   Cx02_1_170 (2U)
 *   Cx03_1_170 (3U)
 *   Cx04_1_170 (4U)
 *   Cx05_1_170 (5U)
 *   Cx06_1_170 (6U)
 *   Cx07_1_170 (7U)
 *   Cx08_1_170 (8U)
 *   Cx09_1_170 (9U)
 *   Cx0A_1_170 (10U)
 *   Cx0B_1_170 (11U)
 *   Cx0C_1_170 (12U)
 *   Cx0D_1_170 (13U)
 *   Cx0E_1_170 (14U)
 *   Cx0F_1_170 (15U)
 *   Cx10_1_170 (16U)
 *   Cx11_1_170 (17U)
 *   Cx12_1_170 (18U)
 *   Cx13_1_170 (19U)
 *   Cx14_1_170 (20U)
 *   Cx15_1_170 (21U)
 *   Cx16_1_170 (22U)
 *   Cx17_1_170 (23U)
 *   Cx18_1_170 (24U)
 *   Cx19_1_170 (25U)
 *   Cx1A_1_170 (26U)
 *   Cx1B_1_170 (27U)
 *   Cx1C_1_170 (28U)
 *   Cx1D_1_170 (29U)
 *   Cx1E_1_170 (30U)
 *   Cx1F_1_170 (31U)
 *   Cx20_1_170 (32U)
 *   Cx21_1_170 (33U)
 *   Cx22_1_170 (34U)
 *   Cx23_1_170 (35U)
 *   Cx24_1_170 (36U)
 *   Cx25_1_170 (37U)
 *   Cx26_1_170 (38U)
 *   Cx27_1_170 (39U)
 *   Cx28_1_170 (40U)
 *   Cx29_1_170 (41U)
 *   Cx2A_1_170 (42U)
 *   Cx2B_1_170 (43U)
 *   Cx2C_1_170 (44U)
 *   Cx2D_1_170 (45U)
 *   Cx2E_1_170 (46U)
 *   Cx2F_1_170 (47U)
 *   Cx30_1_170 (48U)
 *   Cx31_1_170 (49U)
 *   Cx32_1_170 (50U)
 *   Cx33_1_170 (51U)
 *   Cx34_1_170 (52U)
 *   Cx35_1_170 (53U)
 *   Cx36_1_170 (54U)
 *   Cx37_1_170 (55U)
 *   Cx38_1_170 (56U)
 *   Cx39_1_170 (57U)
 *   Cx3A_1_170 (58U)
 *   Cx3B_1_170 (59U)
 *   Cx3C_1_170 (60U)
 *   Cx3D_1_170 (61U)
 *   Cx3E_1_170 (62U)
 *   Cx3F_1_170 (63U)
 *   Cx40_1_170 (64U)
 *   Cx41_1_170 (65U)
 *   Cx42_1_170 (66U)
 *   Cx43_1_170 (67U)
 *   Cx44_1_170 (68U)
 *   Cx45_1_170 (69U)
 *   Cx46_1_170 (70U)
 *   Cx47_1_170 (71U)
 *   Cx48_1_170 (72U)
 *   Cx49_1_170 (73U)
 *   Cx4A_1_170 (74U)
 *   Cx4B_1_170 (75U)
 *   Cx4C_1_170 (76U)
 *   Cx4D_1_170 (77U)
 *   Cx4E_1_170 (78U)
 *   Cx4F_1_170 (79U)
 *   Cx50_1_170 (80U)
 *   Cx51_1_170 (81U)
 *   Cx52_1_170 (82U)
 *   Cx53_1_170 (83U)
 *   Cx54_1_170 (84U)
 *   Cx55_1_170 (85U)
 *   Cx56_1_170 (86U)
 *   Cx57_1_170 (87U)
 *   Cx58_1_170 (88U)
 *   Cx59_1_170 (89U)
 *   Cx5A_1_170 (90U)
 *   Cx5B_1_170 (91U)
 *   Cx5C_1_170 (92U)
 *   Cx5D_1_170 (93U)
 *   Cx5E_1_170 (94U)
 *   Cx5F_1_170 (95U)
 *   Cx60_1_170 (96U)
 *   Cx61_1_170 (97U)
 *   Cx62_1_170 (98U)
 *   Cx63_1_170 (99U)
 *   Cx64_1_170 (100U)
 *   Cx65_1_170 (101U)
 *   Cx66_1_170 (102U)
 *   Cx67_1_170 (103U)
 *   Cx68_1_170 (104U)
 *   Cx69_1_170 (105U)
 *   Cx6A_1_170 (106U)
 *   Cx6B_1_170 (107U)
 *   Cx6C_1_170 (108U)
 *   Cx6D_1_170 (109U)
 *   Cx6E_1_170 (110U)
 *   Cx6F_1_170 (111U)
 *   Cx70_1_170 (112U)
 *   Cx71_1_170 (113U)
 *   Cx72_1_170 (114U)
 *   Cx73_1_170 (115U)
 *   Cx74_1_170 (116U)
 *   Cx75_1_170 (117U)
 *   Cx76_1_170 (118U)
 *   Cx77_1_170 (119U)
 *   Cx78_1_170 (120U)
 *   Cx79_1_170 (121U)
 *   Cx7A_1_170 (122U)
 *   Cx7B_1_170 (123U)
 *   Cx7C_1_170 (124U)
 *   Cx7D_1_170 (125U)
 *   Cx7E_1_170 (126U)
 *   Cx7F_1_170 (127U)
 *   Cx80_1_170 (128U)
 *   Cx81_1_170 (129U)
 *   Cx82_1_170 (130U)
 *   Cx83_1_170 (131U)
 *   Cx84_1_170 (132U)
 *   Cx85_1_170 (133U)
 *   Cx86_1_170 (134U)
 *   Cx87_1_170 (135U)
 *   Cx88_1_170 (136U)
 *   Cx89_1_170 (137U)
 *   Cx8A_1_170 (138U)
 *   Cx8B_1_170 (139U)
 *   Cx8C_1_170 (140U)
 *   Cx8D_1_170 (141U)
 *   Cx8E_1_170 (142U)
 *   Cx8F_1_170 (143U)
 *   Cx90_1_170 (144U)
 *   Cx91_1_170 (145U)
 *   Cx92_1_170 (146U)
 *   Cx93_1_170 (147U)
 *   Cx94_1_170 (148U)
 *   Cx95_1_170 (149U)
 *   Cx96_1_170 (150U)
 *   Cx97_1_170 (151U)
 *   Cx98_1_170 (152U)
 *   Cx99_1_170 (153U)
 *   Cx9A_1_170 (154U)
 *   Cx9B_1_170 (155U)
 *   Cx9C_1_170 (156U)
 *   Cx9D_1_170 (157U)
 *   Cx9E_1_170 (158U)
 *   Cx9F_1_170 (159U)
 *   CxA0_1_170 (160U)
 *   CxA1_1_170 (161U)
 *   CxA2_1_170 (162U)
 *   CxA3_1_170 (163U)
 *   CxA4_1_170 (164U)
 *   CxA5_1_170 (165U)
 *   CxA6_1_170 (166U)
 *   CxA7_1_170 (167U)
 *   CxA8_1_170 (168U)
 *   CxA9_1_170 (169U)
 *   CxAA_1_170 (170U)
 * IVI_ForwardVmaxlimitSw_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_Reserved (3U)
 * IVI_GearRequest: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_request (0U)
 *   Cx1_P (1U)
 *   Cx2_N (2U)
 *   Cx3_R (3U)
 *   Cx4_D (4U)
 *   Cx5_Invaild (5U)
 * IVI_LV_LimitPop: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_Cancel (1U)
 *   Cx2_Open (2U)
 * IVI_LockACPlug_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_request (0U)
 *   Cx1_UnLock (1U)
 *   Cx2_Lock (2U)
 * IVI_MaxChrgSocSet_1: Enumeration of integer in interval [0...255] with enumerators
 *   CxFE_No_Request (254U)
 *   CxFF_Invalid (255U)
 * IVI_SFIDippedBeamSet: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_Request (0U)
 *   Cx1_On (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * IVI_V2LidisSet_1: Enumeration of integer in interval [0...255] with enumerators
 *   CxFE_No_Request (254U)
 *   CxFF_Invalid (255U)
 * MCU_FaultLevel: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_LV1_Minor_fault (1U)
 *   Cx2_LV2_Limited_power_by_a_small_margin (2U)
 *   Cx3_LV3_Greatly_limited_power (3U)
 *   Cx4_LV4_Stop_the_output_Fault_enable_recovery_ (4U)
 *   Cx5_LV5_Stop_the_output_Fault_disable_recovery_ (5U)
 * MCU_TempStatus_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Normal_Temperature (0U)
 *   Cx1_Heating_alarm_1 (1U)
 *   Cx2_Heating_alarm_2 (2U)
 *   Cx3_Over_Heating (3U)
 * MCU_UdcCurr: Enumeration of integer in interval [0...65535] with enumerators
 *   Cx3FE_Abnormal (1022U)
 *   Cx3FF_Invalid (1023U)
 * MCU_VCUWorkMode_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Initialization_ (0U)
 *   Cx1_Standby_ (1U)
 *   Cx2_Ready_ (2U)
 *   Cx3_Torque_Control_ (3U)
 *   Cx4_Fault (4U)
 *   Cx5_ActiveDischarge_ (5U)
 *   Cx6_Afterrun_ (6U)
 *   Cx7_Motor_Active_Hearting_ (7U)
 *   Cx8_Speed_Control (8U)
 * MessageCounter_090: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_098: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B0: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B1: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B2_3: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B3: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B4: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B7_3: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B8_4: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0B9_2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0BA_2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0BB_3: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0BC: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0C1_2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0D1_2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0D2_2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0D3_1: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0E0: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0E2: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0E4_4: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0E6: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0F0: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0F5_1: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_0F6_1: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_108: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_109: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_249: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_255: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_275: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_280: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_28A: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_323: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_325: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_33A: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * MessageCounter_95: Enumeration of integer in interval [0...255] with enumerators
 *   CxF_Invalid (15U)
 * POD_DCDC_FaultLevel_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Fault (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 * POD_DCDC_WorkMode_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Buck (2U)
 *   Cx3_Fault (3U)
 *   Cx4_sleep (4U)
 * POD_DCPortInletTempAValid_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Damage (0U)
 *   Cx1_Short_Circuit (1U)
 *   Cx2_normal (2U)
 * POD_DCPortInletTempBValid_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Damage (0U)
 *   Cx1_Short_Circuit (1U)
 *   Cx2_normal (2U)
 * POD_DCPosRelayState_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Close (0U)
 *   Cx1_Open (1U)
 *   Cx2_Error (2U)
 * POD_OBC_CCStatus_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Unconnected (0U)
 *   Cx1_Half_connected (1U)
 *   Cx2_1500_Ohm (2U)
 *   Cx3_680_Ohm (3U)
 *   Cx4_220_Ohm (4U)
 *   Cx5_100_Ohm (5U)
 *   Cx6_2000_Ohm (6U)
 *   Cx7_2700_Ohm (7U)
 *   Cx8_1000_Ohm (8U)
 *   Cx9_470_Ohm (9U)
 *   CxA_invalid (10U)
 * POD_OBC_CPStatus_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Unconnected (0U)
 *   Cx1_9V (1U)
 *   Cx2_9V_PWM (2U)
 *   Cx3_6V (3U)
 *   Cx4_6V_PWM (4U)
 *   Cx5_Fault (5U)
 *   Cx6_Reserve (6U)
 *   Cx7_Reserve (7U)
 * POD_OBC_ChargCapacibility_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_single_phase (0U)
 *   Cx1_Three_phase (1U)
 *   Cx2_Error (2U)
 * POD_OBC_EMLockState_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Close (0U)
 *   Cx1_Open (1U)
 *   Cx2_Error (2U)
 * POD_OBC_FaultLevel_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Fault (0U)
 *   Cx1_Level1 (1U)
 *   Cx2_Level2 (2U)
 *   Cx3_Level3 (3U)
 * POD_OBC_S2State_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Close (0U)
 *   Cx1_Open (1U)
 *   Cx2_Error (2U)
 * POD_OBC_WorkMode_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Charging_Mode (3U)
 *   Cx4_Pre_heating_Mode (4U)
 *   Cx5_V2L_Mode (5U)
 *   Cx6_Sleep (6U)
 *   Cx7_Fault (7U)
 * PRND_Pbutton: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_Pressed (0U)
 *   Cx1_Pressed (1U)
 *   Cx2_Held (2U)
 *   Cx3_reserved (3U)
 * PRND_RNDbutton: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_TARGET (0U)
 *   Cx1_R (1U)
 *   Cx2_N (2U)
 *   Cx3_D (3U)
 *   Cx4_RESERVE (4U)
 *   Cx5_RESERVE (5U)
 *   Cx6_RESERVE (6U)
 *   Cx7_RESERVE (7U)
 * SGW_AppointChargeCmd_4: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Charge_ON (1U)
 *   Cx2_Charge_OFF (2U)
 * SGW_BLESystemReadyReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_Request_Ready_Remote (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 * SGW_ChargeFormSet_4: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_ChargeImmediately (1U)
 *   Cx2_Appointment_charging (2U)
 * SGW_DschrgOnOffSet: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_COMMAND (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_INVALID (3U)
 * SGW_LockACPlug: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Lock (1U)
 *   Cx2_Unlock (2U)
 * SGW_RemoteHVCtrlReq_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_REQUEST (0U)
 *   Cx1_HV_ON (1U)
 *   Cx2_HV_OFF (2U)
 * SGW_TimingChargeSwitchStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_ON (1U)
 *   Cx2_OFF (2U)
 * TCU_HVPwrState_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Default (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_Reserved (3U)
 * TCU_TMSFaultLevel_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Fault (0U)
 *   Cx1_Fault_Level_1 (1U)
 *   Cx2_Fault_Level_2 (2U)
 *   Cx3_Fault_Level_3 (3U)
 *   Cx4_Fault_Level_4 (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * VCU_ActDriveMode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_INVALID (0U)
 *   Cx1_ECO (1U)
 *   Cx2_NORMAL (2U)
 *   Cx3_SPORT (3U)
 *   Cx4_OnePedal (4U)
 * VCU_ActualGear: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserve (0U)
 *   Cx1_P (1U)
 *   Cx2_N (2U)
 *   Cx3_R (3U)
 *   Cx4_D (4U)
 * VCU_BMSTargetThermLevel: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Level_1_low_ (0U)
 *   Cx1_Level_2_medium_ (1U)
 *   Cx2_Level_3_high_ (2U)
 *   Cx3_Reserved (3U)
 * VCU_BMS_Control_of_PosRelay: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invaild (0U)
 *   Cx1_Open (1U)
 *   Cx2_Close (2U)
 * VCU_BS_IBSBatSOC_3: Enumeration of integer in interval [0...255] with enumerators
 *   CxFF_Invalid (255U)
 * VCU_BrakeCompensateStatus_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Invalid (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 *   Cx3_Reserved (3U)
 * VCU_BrakeCompensateWarn: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_display (0U)
 *   Cx1_Vehicle_failure_brake_compensation_failed_to_open_ (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * VCU_BrakepedalStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_pressed (0U)
 *   Cx1_pressed (1U)
 *   Cx2_Invalid (2U)
 * VCU_ChargeEndReason_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Display (0U)
 *   Cx1_Reach_the_charge_cut_off_SOC (1U)
 *   Cx2_reserved (2U)
 *   Cx3_reserved (3U)
 * VCU_ChargeProcessComment_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_comment (0U)
 *   Cx1_Charge_Fault_and_slow (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 * VCU_Chargestatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Off_Plug (1U)
 *   Cx2_AC_Plug_Detected (2U)
 *   Cx3_DC_Plug_Detected (3U)
 *   Cx4_V2L_Plug_Detected (4U)
 *   Cx5_AC_Charging (5U)
 *   Cx6_DC_Charging (6U)
 *   Cx7_V2L_Discharging (7U)
 *   Cx8_Charging_Completed (8U)
 *   Cx9_Charging_Fault (9U)
 *   CxA_AC_Preheating (10U)
 *   CxB_DC_Preheating (11U)
 *   CxC_V2L_completed (12U)
 *   CxD_KeepWarming (13U)
 *   CxE_V2L_Fault (14U)
 * VCU_CriSysFailure: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Warning (0U)
 *   Cx1_Leve1_lighting_prompt_only_ (1U)
 *   Cx2_Leve2_power_loss_ (2U)
 *   Cx3_Leve3_emergency_power_off_ (3U)
 * VCU_DischargeEndReason_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Display (0U)
 *   Cx1_Reach_the_discharge_cut_off_SOC (1U)
 *   Cx2_reserved (2U)
 *   Cx3_reserved (3U)
 * VCU_DrvModSwitchWarn: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_RESERVE (0U)
 *   Cx1_unrecommed_Sport_Low_SOC (1U)
 *   Cx2_Vehicle_not_in_P_gear_single_pedal_unavailable (2U)
 *   Cx3_Vehicle_failure_single_pedal_unavailable_ (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * VCU_EPBReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Not_Request (0U)
 *   Cx1_Apply_Request (1U)
 *   Cx2_Release_Request (2U)
 *   Cx3_Reserved (3U)
 * VCU_EnableOBC_3: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserve (0U)
 *   Cx1_Reserve (1U)
 *   Cx2_Enable (2U)
 *   Cx3_Disable (3U)
 * VCU_ForwardVmaxAllowed: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_No_request (0U)
 *   Cx01_1_170 (1U)
 *   Cx02_1_170 (2U)
 *   Cx03_1_170 (3U)
 *   Cx04_1_170 (4U)
 *   Cx05_1_170 (5U)
 *   Cx06_1_170 (6U)
 *   Cx07_1_170 (7U)
 *   Cx08_1_170 (8U)
 *   Cx09_1_170 (9U)
 *   Cx0A_1_170 (10U)
 *   Cx0B_1_170 (11U)
 *   Cx0C_1_170 (12U)
 *   Cx0D_1_170 (13U)
 *   Cx0E_1_170 (14U)
 *   Cx0F_1_170 (15U)
 *   Cx10_1_170 (16U)
 *   Cx11_1_170 (17U)
 *   Cx12_1_170 (18U)
 *   Cx13_1_170 (19U)
 *   Cx14_1_170 (20U)
 *   Cx15_1_170 (21U)
 *   Cx16_1_170 (22U)
 *   Cx17_1_170 (23U)
 *   Cx18_1_170 (24U)
 *   Cx19_1_170 (25U)
 *   Cx1A_1_170 (26U)
 *   Cx1B_1_170 (27U)
 *   Cx1C_1_170 (28U)
 *   Cx1D_1_170 (29U)
 *   Cx1E_1_170 (30U)
 *   Cx1F_1_170 (31U)
 *   Cx20_1_170 (32U)
 *   Cx21_1_170 (33U)
 *   Cx22_1_170 (34U)
 *   Cx23_1_170 (35U)
 *   Cx24_1_170 (36U)
 *   Cx25_1_170 (37U)
 *   Cx26_1_170 (38U)
 *   Cx27_1_170 (39U)
 *   Cx28_1_170 (40U)
 *   Cx29_1_170 (41U)
 *   Cx2A_1_170 (42U)
 *   Cx2B_1_170 (43U)
 *   Cx2C_1_170 (44U)
 *   Cx2D_1_170 (45U)
 *   Cx2E_1_170 (46U)
 *   Cx2F_1_170 (47U)
 *   Cx30_1_170 (48U)
 *   Cx31_1_170 (49U)
 *   Cx32_1_170 (50U)
 *   Cx33_1_170 (51U)
 *   Cx34_1_170 (52U)
 *   Cx35_1_170 (53U)
 *   Cx36_1_170 (54U)
 *   Cx37_1_170 (55U)
 *   Cx38_1_170 (56U)
 *   Cx39_1_170 (57U)
 *   Cx3A_1_170 (58U)
 *   Cx3B_1_170 (59U)
 *   Cx3C_1_170 (60U)
 *   Cx3D_1_170 (61U)
 *   Cx3E_1_170 (62U)
 *   Cx3F_1_170 (63U)
 *   Cx40_1_170 (64U)
 *   Cx41_1_170 (65U)
 *   Cx42_1_170 (66U)
 *   Cx43_1_170 (67U)
 *   Cx44_1_170 (68U)
 *   Cx45_1_170 (69U)
 *   Cx46_1_170 (70U)
 *   Cx47_1_170 (71U)
 *   Cx48_1_170 (72U)
 *   Cx49_1_170 (73U)
 *   Cx4A_1_170 (74U)
 *   Cx4B_1_170 (75U)
 *   Cx4C_1_170 (76U)
 *   Cx4D_1_170 (77U)
 *   Cx4E_1_170 (78U)
 *   Cx4F_1_170 (79U)
 *   Cx50_1_170 (80U)
 *   Cx51_1_170 (81U)
 *   Cx52_1_170 (82U)
 *   Cx53_1_170 (83U)
 *   Cx54_1_170 (84U)
 *   Cx55_1_170 (85U)
 *   Cx56_1_170 (86U)
 *   Cx57_1_170 (87U)
 *   Cx58_1_170 (88U)
 *   Cx59_1_170 (89U)
 *   Cx5A_1_170 (90U)
 *   Cx5B_1_170 (91U)
 *   Cx5C_1_170 (92U)
 *   Cx5D_1_170 (93U)
 *   Cx5E_1_170 (94U)
 *   Cx5F_1_170 (95U)
 *   Cx60_1_170 (96U)
 *   Cx61_1_170 (97U)
 *   Cx62_1_170 (98U)
 *   Cx63_1_170 (99U)
 *   Cx64_1_170 (100U)
 *   Cx65_1_170 (101U)
 *   Cx66_1_170 (102U)
 *   Cx67_1_170 (103U)
 *   Cx68_1_170 (104U)
 *   Cx69_1_170 (105U)
 *   Cx6A_1_170 (106U)
 *   Cx6B_1_170 (107U)
 *   Cx6C_1_170 (108U)
 *   Cx6D_1_170 (109U)
 *   Cx6E_1_170 (110U)
 *   Cx6F_1_170 (111U)
 *   Cx70_1_170 (112U)
 *   Cx71_1_170 (113U)
 *   Cx72_1_170 (114U)
 *   Cx73_1_170 (115U)
 *   Cx74_1_170 (116U)
 *   Cx75_1_170 (117U)
 *   Cx76_1_170 (118U)
 *   Cx77_1_170 (119U)
 *   Cx78_1_170 (120U)
 *   Cx79_1_170 (121U)
 *   Cx7A_1_170 (122U)
 *   Cx7B_1_170 (123U)
 *   Cx7C_1_170 (124U)
 *   Cx7D_1_170 (125U)
 *   Cx7E_1_170 (126U)
 *   Cx7F_1_170 (127U)
 *   Cx80_1_170 (128U)
 *   Cx81_1_170 (129U)
 *   Cx82_1_170 (130U)
 *   Cx83_1_170 (131U)
 *   Cx84_1_170 (132U)
 *   Cx85_1_170 (133U)
 *   Cx86_1_170 (134U)
 *   Cx87_1_170 (135U)
 *   Cx88_1_170 (136U)
 *   Cx89_1_170 (137U)
 *   Cx8A_1_170 (138U)
 *   Cx8B_1_170 (139U)
 *   Cx8C_1_170 (140U)
 *   Cx8D_1_170 (141U)
 *   Cx8E_1_170 (142U)
 *   Cx8F_1_170 (143U)
 *   Cx90_1_170 (144U)
 *   Cx91_1_170 (145U)
 *   Cx92_1_170 (146U)
 *   Cx93_1_170 (147U)
 *   Cx94_1_170 (148U)
 *   Cx95_1_170 (149U)
 *   Cx96_1_170 (150U)
 *   Cx97_1_170 (151U)
 *   Cx98_1_170 (152U)
 *   Cx99_1_170 (153U)
 *   Cx9A_1_170 (154U)
 *   Cx9B_1_170 (155U)
 *   Cx9C_1_170 (156U)
 *   Cx9D_1_170 (157U)
 *   Cx9E_1_170 (158U)
 *   Cx9F_1_170 (159U)
 *   CxA0_1_170 (160U)
 *   CxA1_1_170 (161U)
 *   CxA2_1_170 (162U)
 *   CxA3_1_170 (163U)
 *   CxA4_1_170 (164U)
 *   CxA5_1_170 (165U)
 *   CxA6_1_170 (166U)
 *   CxA7_1_170 (167U)
 *   CxA8_1_170 (168U)
 *   CxA9_1_170 (169U)
 *   CxAA_1_170 (170U)
 *   CxAB_Reserved (171U)
 *   CxAC_Reserved (172U)
 *   CxAD_Reserved (173U)
 *   CxAE_Reserved (174U)
 *   CxAF_Reserved (175U)
 *   CxB0_Reserved (176U)
 *   CxB1_Reserved (177U)
 *   CxB2_Reserved (178U)
 *   CxB3_Reserved (179U)
 *   CxB4_Reserved (180U)
 *   CxB5_Reserved (181U)
 *   CxB6_Reserved (182U)
 *   CxB7_Reserved (183U)
 *   CxB8_Reserved (184U)
 *   CxB9_Reserved (185U)
 *   CxBA_Reserved (186U)
 *   CxBB_Reserved (187U)
 *   CxBC_Reserved (188U)
 *   CxBD_Reserved (189U)
 *   CxBE_Reserved (190U)
 *   CxBF_Reserved (191U)
 *   CxC0_Reserved (192U)
 *   CxC1_Reserved (193U)
 *   CxC2_Reserved (194U)
 *   CxC3_Reserved (195U)
 *   CxC4_Reserved (196U)
 *   CxC5_Reserved (197U)
 *   CxC6_Reserved (198U)
 *   CxC7_Reserved (199U)
 *   CxC8_Reserved (200U)
 *   CxC9_Reserved (201U)
 *   CxCA_Reserved (202U)
 *   CxCB_Reserved (203U)
 *   CxCC_Reserved (204U)
 *   CxCD_Reserved (205U)
 *   CxCE_Reserved (206U)
 *   CxCF_Reserved (207U)
 *   CxD0_Reserved (208U)
 *   CxD1_Reserved (209U)
 *   CxD2_Reserved (210U)
 *   CxD3_Reserved (211U)
 *   CxD4_Reserved (212U)
 *   CxD5_Reserved (213U)
 *   CxD6_Reserved (214U)
 *   CxD7_Reserved (215U)
 *   CxD8_Reserved (216U)
 *   CxD9_Reserved (217U)
 *   CxDA_Reserved (218U)
 *   CxDB_Reserved (219U)
 *   CxDC_Reserved (220U)
 *   CxDD_Reserved (221U)
 *   CxDE_Reserved (222U)
 *   CxDF_Reserved (223U)
 *   CxE0_Reserved (224U)
 *   CxE1_Reserved (225U)
 *   CxE2_Reserved (226U)
 *   CxE3_Reserved (227U)
 *   CxE4_Reserved (228U)
 *   CxE5_Reserved (229U)
 *   CxE6_Reserved (230U)
 *   CxE7_Reserved (231U)
 *   CxE8_Reserved (232U)
 *   CxE9_Reserved (233U)
 *   CxEA_Reserved (234U)
 *   CxEB_Reserved (235U)
 *   CxEC_Reserved (236U)
 *   CxED_Reserved (237U)
 *   CxEE_Reserved (238U)
 *   CxEF_Reserved (239U)
 *   CxF0_Reserved (240U)
 *   CxF1_Reserved (241U)
 *   CxF2_Reserved (242U)
 *   CxF3_Reserved (243U)
 *   CxF4_Reserved (244U)
 *   CxF5_Reserved (245U)
 *   CxF6_Reserved (246U)
 *   CxF7_Reserved (247U)
 *   CxF8_Reserved (248U)
 *   CxF9_Reserved (249U)
 *   CxFA_Reserved (250U)
 *   CxFB_Reserved (251U)
 *   CxFC_Reserved (252U)
 *   CxFD_Reserved (253U)
 *   CxFE_Reserved (254U)
 *   CxFF_Reserved (255U)
 * VCU_HVBatCriFail: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_False (0U)
 *   Cx1_Yellow (1U)
 *   Cx2_Red (2U)
 *   Cx3_Reserve (3U)
 * VCU_HVStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Standby (1U)
 *   Cx2_HV_Ready (2U)
 *   Cx3_Drive_ready (3U)
 *   Cx4_Preheating (4U)
 *   Cx5_Sleep (5U)
 * VCU_LimitLevel: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_level_0_No_limit (0U)
 *   Cx1_level_1 (1U)
 *   Cx2_level_2 (2U)
 *   Cx3_level_3 (3U)
 * VCU_MCUSurgeDamperState: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_DstC_off (0U)
 *   Cx1_DstC_ext (1U)
 *   Cx2_DstC_int_ext (2U)
 * VCU_MCU_FaultLampReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_No_Request (0U)
 *   Cx1_Yellow_LED_request (1U)
 *   Cx2_Red_LED_request (2U)
 *   Cx3_Reserve (3U)
 * VCU_OPStandstillReq: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_NO_DEMAND (0U)
 *   Cx1_DEMAND (1U)
 *   Cx2_Reserve (2U)
 *   Cx3_Reserve (3U)
 * VCU_PWTErrorLevel: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Fault_Level0 (0U)
 *   Cx1_Fault_Level1 (1U)
 *   Cx2_Fault_Level2 (2U)
 *   Cx3_Fault_Level3 (3U)
 *   Cx4_Fault_Level4 (4U)
 *   Cx5_Fault_Level5 (5U)
 *   Cx6_Fault_Level6 (6U)
 *   Cx7_Fault_Level7 (7U)
 *   Cx8_Fault_Level8 (8U)
 *   Cx9_Fault_Level9 (9U)
 *   CxA_Fault_Level10 (10U)
 *   CxB_Fault_Level11 (11U)
 *   CxC_Fault_Level12 (12U)
 *   CxD_Fault_Level13 (13U)
 *   CxE_Fault_Level14 (14U)
 *   CxF_Fault_Level15 (15U)
 * VCU_PlugStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_No_Plug_connected (1U)
 *   Cx2_AC_Plug_connected_Unlock (2U)
 *   Cx3_AC_Plug_connected_Locked (3U)
 *   Cx4_DC_Plug_connected (4U)
 *   Cx5_V2L_Plug_connected (5U)
 *   Cx6_AC_Plug_DC_Plug_Connected (6U)
 *   Cx7_Fault (7U)
 * VCU_RegStatus: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserve (0U)
 *   Cx1_OFF (1U)
 *   Cx2_Primary_energy_recovery_weak_ (2U)
 *   Cx3_Secondary_energy_recovery_medium_ (3U)
 *   Cx4_Tertiary_energy_recovery_strong_ (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 * VCU_RemainChrgTime_1: Enumeration of integer in interval [0...65535] with enumerators
 *   Cx3FE_Init (1022U)
 *   Cx3FF_Error (1023U)
 * VCU_RequestedModeBMS: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_InActive (0U)
 *   Cx1_HVActive (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_EmergencyOff (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Invalid (7U)
 * VCU_RequestedModeDCDC_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF (0U)
 *   Cx1_Buck (1U)
 *   Cx2_Disable (2U)
 * VCU_RequestedModeMCU: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Ready (0U)
 *   Cx1_TrqCtrl (1U)
 *   Cx2_Active_Hearting (2U)
 *   Cx3_Discharge (3U)
 *   Cx4_SpeedCtrl (4U)
 * VCU_RequestedModeTCU_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_Standby (1U)
 *   Cx2_Disable (2U)
 *   Cx3_Enable (3U)
 * VCU_TargetGear: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Reserve (0U)
 *   Cx1_P (1U)
 *   Cx2_N (2U)
 *   Cx3_R (3U)
 *   Cx4_D (4U)
 * VCU_maxChargeSOC: Enumeration of integer in interval [0...255] with enumerators
 *   CxFE_No_Request (254U)
 *   CxFF_Invalid (255U)
 *
 * Record Types:
 * =============
 * SG_ACU_01_SigGroup: Record with elements
 *   ACU_YawRate of type ACU_YawRate_1
 *   ACU_YawRateStatus of type ACU_YawRateStatus
 *   Checksum_0F5 of type Checksum_0F5_1
 *   MessageCounter_0F5 of type MessageCounter_0F5_1
 * SG_ACU_02_SigGroup: Record with elements
 *   ACU_LatA of type ACU_LatA_1
 *   ACU_LatAStatus of type ACU_LatAStatus
 *   ACU_LgtA of type ACU_LgtA_1
 *   ACU_LgtAStatus of type ACU_LgtAStatus
 *   Checksum_0F6 of type Checksum_0F6_1
 *   MessageCounter_0F6 of type MessageCounter_0F6_1
 * SG_ACU_Info_SigGroup: Record with elements
 *   ACU_CrashOutputSts of type ACU_CrashOutputSts
 *   ACU_CrashOutputStsValid of type ACU_CrashOutputStsValid
 *   ACU_DriverWarningLampSts of type ACU_DriverWarningLampSts
 *   ACU_PassengerAirbagSts of type ACU_PassengerAirbagSts
 *   ACU_PassengerWarningLampSts of type ACU_PassengerWarningLampSts
 *   MessageCounter_097 of type MessageCounter_109
 *   Checksum_097 of type Checksum_105
 *   ACU_DriverSeatBeltSts of type ACU_DriverSeatBeltSts
 *   ACU_DriverSeatBeltStsValid of type ACU_DriverSeatBeltStsValid
 *   ACU_PassengerSeatBeltSts of type ACU_PassengerSeatBeltSts
 *   ACU_PassengerSeatBeltStsValid of type ACU_PassengerSeatBeltStsValid
 *   ACU_PassengerSts of type ACU_PassengerSts
 *   ACU_RLSeatBeltStatusValid of type ACU_RLSeatBeltStatusValid
 *   ACU_RRSeatBeltStatusValid of type ACU_RRSeatBeltStatusValid
 *   ACU_SecondLeftSeatBeltSts of type ACU_SecondLeftSeatBeltSts
 *   ACU_SecondLeftSts of type ACU_SecondLeftSts
 *   ACU_SecondRightSeatBeltSts of type ACU_SecondRightSeatBeltSts
 *   ACU_SecondRightSts of type ACU_SecondRightSts
 *   ACU_WarningLampSts of type ACU_WarningLampSts
 * SG_ADCU_ACC_02_SigGroup: Record with elements
 *   ADCU_ACC_Mode of type ADCU_ACC_Mode
 *   Checksum_0E0 of type Checksum_0E0_2
 *   MessageCounter_0E0 of type MessageCounter_0E0
 *   ADCU_ACCDA_HandsOFF_Warning of type ADCU_ACCDA_HandsOFF_Warning
 *   ADCU_ACCDA_SYS_Failure of type ADCU_ACCDA_SYS_Failure
 * SG_ADCU_AEB_01_SigGroup: Record with elements
 *   ADCU_AEB_State of type ADCU_AEB_State
 *   Checksum_0E2 of type Checksum_0E2_3
 *   MessageCounter_0E2 of type MessageCounter_0E2
 *   ADCU_AEB_AWB_Level of type ADCU_AEB_AWB_Level
 *   ADCU_AEB_AWB_Req of type ADCU_AEB_AWB_Req
 *   ADCU_AEB_Decel_Cmd of type ADCU_AEB_Decel_Cmd_1
 *   ADCU_AEB_Prefill_CMD of type ADCU_AEB_Prefill_CMD
 *   ADCU_AEB_Stop_Req of type ADCU_AEB_Stop_Req
 *   ADCU_AEBReq of type ADCU_AEBReq
 *   ADCU_AEBWarningSts of type ADCU_AEBWarningSts
 *   ADCU_FCW_State of type ADCU_FCW_State
 * SG_ADCU_APS_01_SigGroup: Record with elements
 *   Checksum_0E4 of type Checksum_0E4_3
 *   MessageCounter_0E4 of type MessageCounter_0E4_4
 *   ADCU_Parking_Mode of type ADCU_Parking_Mode
 *   ADCU_APS_Stop_Req of type ADCU_APS_Stop_Req
 *   ADCU_APSComfBrkReq of type ADCU_APSComfBrkReq
 *   ADCU_APSCrlModeReq of type ADCU_APSCrlModeReq
 *   ADCU_APSCrlReq of type ADCU_APSCrlReq
 *   ADCU_APSCrlTypReq of type ADCU_APSCrlTypReq
 *   ADCU_APSDistanceStop of type ADCU_APSDistanceStop
 *   ADCU_APSMaxSpeedReq of type ADCU_APSMaxSpeedReq
 *   ADCU_Parking_CtrlSts of type ADCU_Parking_CtrlSts
 *   ADCU_TargetGear of type ADCU_TargetGear
 * SG_ADCU_APS_02_SigGroup: Record with elements
 *   ADCU_RemoteParkingMode of type ADCU_RemoteParkingMode
 * SG_ADCU_DA_SigGroup: Record with elements
 *   ADCU_DA_Mode of type ADCU_DA_Mode
 *   Checksum_0E6 of type Checksum_0E6_1
 *   MessageCounter_0E6 of type MessageCounter_0E6
 * SG_APTC_TCU_SigGroup: Record with elements
 *   APTC_PowerConsumption of type APTC_PowerConsumption_1
 * SG_BCM_05_SigGroup: Record with elements
 *   BCM_FLSeatBeltRemindReq of type BCM_FLSeatBeltRemindReq
 *   BCM_FRSeatBeltRemindReq of type BCM_FRSeatBeltRemindReq
 *   BCM_RLSeatBeltRemindReq of type BCM_RLSeatBeltRemindReq
 *   BCM_RRSeatBeltRemindReq of type BCM_RRSeatBeltRemindReq
 *   Checksum_33A of type Checksum_33A_2
 *   MessageCounter_33A of type MessageCounter_33A
 *   BCM_AutoCloseWinFunSts of type BCM_AutoCloseWinFunSts
 *   BCM_ChrgFlapLockSts of type BCM_ChrgFlapLockSts
 *   BCM_DomeLampAutoSts of type BCM_DomeLampAutoSts
 *   BCM_DomeLampBrightSts of type BCM_DomeLampBrightSts
 *   BCM_FrontWiperModeSts of type BCM_FrontWiperModeSts
 *   BCM_GearTimesSts of type BCM_GearTimesSts
 *   BCM_KeyNotInCarRemind of type BCM_KeyNotInCarRemind
 *   BCM_PuddleLiReq of type BCM_PuddleLiReq
 *   BCM_WelLightshowOnOffSts of type BCM_WelLightshowOnOffSts
 *   BCM_WiperServiceSts of type BCM_WiperServiceSts
 *   BCM_WiperWorkingSts of type BCM_WiperWorkingSts
 * SG_BCM_06_SigGroup: Record with elements
 *   BCM_PepsPowerMode of type BCM_PepsPowerMode
 *   checksum_271 of type checksum_275
 *   MessageCounter_271 of type MessageCounter_275
 *   BCM_PowerOffDisplayReq of type BCM_PowerOffDisplayReq
 * SG_BMS_BatInfor_01_SigGroup: Record with elements
 *   BMS_BatType of type BMS_BatType_1
 *   BMS_CellNumbers of type BMS_CellNumbers
 *   BMS_RatBatVoltage of type BMS_RatBatVoltage_1
 *   BMS_RatCapacity of type BMS_RatCapacity_1
 *   BMS_RatEnergy of type BMS_RatEnergy_1
 * SG_BMS_BatInfor_02_SigGroup: Record with elements
 *   BMS_BatSupName of type Rte_DT_SG_BMS_BatInfor_02_SigGroup_0
 * SG_BMS_BatInfor_03_SigGroup: Record with elements
 *   BMS_RemainCapacity of type BMS_RemainCapacity_1
 * SG_BMS_CellTemp_SigGroup: Record with elements
 *   BMS_AverageCellTemp of type BMS_AverageCellTemp_2
 *   BMS_MaxCellTemp of type BMS_MaxCellTemp_3
 *   BMS_MaxCellTempNO of type BMS_MaxCellTempNO_3
 *   BMS_MinCellTemp of type BMS_MinCellTemp_3
 *   BMS_MinCellTempNO of type BMS_MinCellTempNO_3
 *   BMS_MinCellTempModuleNO of type BMS_MinCellTempModuleNO
 * SG_BMS_CellVoltage_SigGroup: Record with elements
 *   BMS_MaxCellVoltage of type BMS_MaxCellVoltage_3
 *   BMS_MaxCellVoltageModuleNO of type BMS_MaxCellVoltageModuleNO_3
 *   BMS_MaxCellVoltageNO of type BMS_MaxCellVoltageNO_3
 *   BMS_MinCellVoltage of type BMS_MinCellVoltage_1
 * SG_BMS_Charge_01_SigGroup: Record with elements
 *   BMS_AllowChagCurrent of type BMS_AllowChagCurrent_1
 *   BMS_MaxChagVoltage of type BMS_MaxChagVoltage_1
 *   BMS_RemChagTime of type BMS_RemChagTime_1
 * SG_BMS_Charge_02_SigGroup: Record with elements
 *   BMS_AbortAchivesetValue of type BMS_AbortAchivesetValue_2
 *   BMS_AbortAchiveSingleVolt of type BMS_AbortAchiveSingleVolt_2
 *   BMS_AbortAchiveTotalVolt of type BMS_AbortAchiveTotalVolt_2
 *   BMS_AbortErrorCurrent of type BMS_AbortErrorCurrent_2
 *   BMS_AbortErrorVoltage of type BMS_AbortErrorVoltage_2
 *   BMS_AbortFaultBatteryTemp of type BMS_AbortFaultBatteryTemp_2
 *   BMS_AbortFaultBMSTemp of type BMS_AbortFaultBMSTemp_2
 *   BMS_ChagComplete of type BMS_ChagComplete_2
 *   BMS_ChargeRequest of type BMS_ChargeRequest_2
 *   BMS_DCChgMode of type BMS_DCChgMode_2
 * SG_BMS_Charge_03_SigGroup: Record with elements
 *   BMS_BatChagSum of type BMS_BatChagSum_2
 *   BMS_SingChgkwh of type BMS_SingChgkwh_1
 *   BMS_SumChgkwh of type BMS_SumChgkwh_1
 * SG_BMS_DIRelayState_SigGroup: Record with elements
 *   BMS_NegRelayStatus of type BMS_NegRelayStatus_3
 *   BMS_PosRelayStatus of type BMS_PosRelayStatus_3
 *   BMS_PreRelayStatus of type BMS_PreRelayStatus
 *   BMS_PTC_VoltageValue of type BMS_PTC_VoltageValue_3
 *   BMS_PTCRelayStatus of type BMS_PTCRelayStatus
 * SG_BMS_ErrorInfo_SigGroup: Record with elements
 *   BMS_ErrorCellHighTemp of type BMS_ErrorCellHighTemp_1
 *   BMS_ErrorCellLowTemp of type BMS_ErrorCellLowTemp_1
 *   BMS_ErrorCellOverVolt of type BMS_ErrorCellOverVolt_1
 *   BMS_ErrorCellUnderVolt of type BMS_ErrorCellUnderVolt_1
 *   BMS_ErrorChaCurrentOver of type BMS_ErrorChaCurrentOver_1
 *   BMS_ErrorHighSoc of type BMS_ErrorHighSoc_1
 *   BMS_ErrorLowSoc of type BMS_ErrorLowSoc_1
 *   BMS_ErrorPreChaFailed of type BMS_ErrorPreChaFailed
 *   BMS_ErrorRelay of type BMS_ErrorRelay_1
 *   BMS_ThermalRunawayFault of type BMS_ThermalRunawayFault
 * SG_BMS_PRO_SigGroup: Record with elements
 *   BMS_BatProDatDay of type BMS_BatProDatDay_1
 *   BMS_BatProDatMonth of type BMS_BatProDatMonth_1
 *   BMS_BatProDatYear of type BMS_BatProDatYear_1
 * SG_BMS_TCU_SigGroup: Record with elements
 *   BMS_AllowCellTemperature of type BMS_AllowCellTemperature_1
 *   BMS_KeepWarmRequest of type BMS_KeepWarmRequest_1
 *   BMS_KeepWarmStatus of type BMS_KeepWarmStatus_1
 *   BMS_RTC_Request of type BMS_RTC_Request_1
 * SG_BMS_VersionInfor_SigGroup: Record with elements
 *   BMS_BatProRights of type BMS_BatProRights_1
 *   BMS_ComVersion of type BMS_ComVersion
 * SG_BMS_status_01_SigGroup: Record with elements
 *   BMS_ChargeStatus of type BMS_ChargeStatus
 *   BMS_ErrorIsolationSingleLow of type BMS_ErrorIsolationSingleLow
 *   BMS_ErrorLevel of type BMS_ErrorLevel
 *   BMS_HVinterlockState of type BMS_HVinterlockState
 *   BMS_InsulationDetectionStatus of type BMS_InsulationDetectionStatus
 *   BMS_PreCharge of type BMS_PreCharge
 *   BMS_SOH of type BMS_SOH_2
 *   BMS_SysRegInsulationValue of type BMS_SysRegInsulationValue_2
 *   BMS_ThrmlRunawayFault of type BMS_ThrmlRunawayFault
 *   BMS_WorkMode of type BMS_WorkMode
 *   Checksum_0C1 of type Checksum_0C1_2
 *   MessageCounter_0C1 of type MessageCounter_0C1_2
 *   BMS_BalancingStatus of type BMS_BalancingStatus
 *   BMS_RunHeatStatus of type BMS_RunHeatStatus
 * SG_BMS_status_02_SigGroup: Record with elements
 *   BMS_BattCurr of type BMS_BattCurr_1
 *   BMS_BattVolt of type BMS_BattVolt_1
 *   BMS_Heatcurrent of type BMS_Heatcurrent_1
 * SG_BMS_status_03_SigGroup: Record with elements
 *   BMS_DisplaySOC of type BMS_DisplaySOC_1
 *   BMS_LinkVoltage of type BMS_LinkVoltage_1
 *   BMS_PackVoltage of type BMS_PackVoltage_1
 * SG_BMS_status_04_SigGroup: Record with elements
 *   BMS_DisChgCurr of type BMS_DisChgCurr_4
 *   BMS_FeedbackCurr of type BMS_FeedbackCurr_3
 * SG_CGW_01_SigGroup: Record with elements
 *   CGW_VehicleState of type CGW_VehicleState
 *   Checksum_278 of type Checksum_280
 *   MessageCounter_278 of type MessageCounter_280
 * SG_CGW_02_SigGroup: Record with elements
 *   CGW_ADCUSts of type CGW_ADCUSts
 *   CGW_BCMSts of type CGW_BCMSts
 *   CGW_BMSSts of type CGW_BMSSts
 *   CGW_CBMSts of type CGW_CBMSts
 *   CGW_CGWSts of type CGW_CGWSts
 *   CGW_DCM_FLSts of type CGW_DCM_FLSts
 *   CGW_DCM_FRSts of type CGW_DCM_FRSts
 *   CGW_DCM_RLSts of type CGW_DCM_RLSts
 *   CGW_DCM_RRSts of type CGW_DCM_RRSts
 *   CGW_HLLSts of type CGW_HLLSts
 *   CGW_HLRSts of type CGW_HLRSts
 *   CGW_HOD_HeatingSts of type CGW_HOD_HeatingSts
 *   CGW_IVISts of type CGW_IVISts
 *   CGW_MFP_FCSts of type CGW_MFP_FCSts
 *   CGW_MFP_RCSts of type CGW_MFP_RCSts
 *   CGW_PRNDSts of type CGW_PRNDSts
 *   CGW_SCU_LSts of type CGW_SCU_LSts
 *   CGW_SCU_RSts of type CGW_SCU_RSts
 *   CGW_SGWSts of type CGW_SGWSts
 *   CGW_SwichesSts of type CGW_SwichesSts
 *   CGW_SWPSts of type CGW_SWPSts
 *   CGW_VCUSts of type CGW_VCUSts
 * SG_CGW_VIN1_SigGroup: Record with elements
 *   CGW_VIN0 of type CGW_VIN0_3
 *   CGW_VIN1 of type CGW_VIN1_3
 *   CGW_VIN2 of type CGW_VIN2_3
 *   CGW_VIN3 of type CGW_VIN3_3
 *   CGW_VIN4 of type CGW_VIN4_3
 *   CGW_VIN5 of type CGW_VIN5_3
 *   CGW_VIN6 of type CGW_VIN6_3
 *   CGW_VIN7 of type CGW_VIN7_3
 * SG_CGW_VIN2_SigGroup: Record with elements
 *   CGW_VIN8 of type CGW_VIN8_3
 *   CGW_VIN9 of type CGW_VIN9_3
 *   CGW_VIN10 of type CGW_VIN10_3
 *   CGW_VIN11 of type CGW_VIN11_3
 *   CGW_VIN12 of type CGW_VIN12_3
 *   CGW_VIN13 of type CGW_VIN13_3
 *   CGW_VIN14 of type CGW_VIN14_3
 *   CGW_VIN15 of type CGW_VIN15_3
 * SG_CGW_VIN3VER_SigGroup: Record with elements
 *   CGW_VERSION1 of type CGW_VERSION1_3
 *   CGW_VERSION2 of type CGW_VERSION2_3
 *   CGW_VIN16 of type CGW_VIN16_3
 * SG_DCM_FL_02_SigGroup: Record with elements
 *   Checksum_28A of type Checksum_28A_2
 *   DCM_FL_DoorFLSts of type DCM_FL_DoorFLSts
 *   MessageCounter_28A of type MessageCounter_28A
 *   DCM_FL_FRWndSwA of type DCM_FL_FRWndSwA
 *   DCM_FL_LeftMirrorHorizontalPos of type DCM_FL_LeftMirrorHorizontalPos
 *   DCM_FL_LeftMirrorVerticalPos of type DCM_FL_LeftMirrorVerticalPos
 *   DCM_FL_MirrorAutoFoldUnfoldSts of type DCM_FL_MirrorAutoFoldUnfoldSts
 *   DCM_FL_MirrorAutoTurnDownSts of type DCM_FL_MirrorAutoTurnDownSts
 *   DCM_FL_MirrorFold_UnfoldSts of type DCM_FL_MirrorFold_UnfoldSts
 *   DCM_FL_RearmirrorHeatingSts of type DCM_FL_RearmirrorHeatingSts
 *   DCM_FL_RLWndSwA of type DCM_FL_RLWndSwA
 *   DCM_FL_RRWndSwA of type DCM_FL_RRWndSwA
 * SG_DCM_FR_02_SigGroup: Record with elements
 *   DCM_FR_AmbientTemperature of type DCM_FR_AmbientTemperature_1
 *   DCM_FR_AmbientTemperatureValid of type DCM_FR_AmbientTemperatureValid
 * SG_DCM_FR_SigGroup: Record with elements
 *   DCM_FR_DoorFRSts of type DCM_FR_DoorFRSts
 * SG_DCM_RL_SigGroup: Record with elements
 *   DCM_RL_DoorRLSts of type DCM_RL_DoorRLSts
 * SG_DCM_RR_SigGroup: Record with elements
 *   DCM_RR_DoorRRSts of type DCM_RR_DoorRRSts
 * SG_EPS_CONV_SigGroup: Record with elements
 *   Checksum_0F0 of type Checksum_0F0
 *   EPS_ModeChangeEnable of type EPS_ModeChangeEnable
 *   EPS_ModeFb of type EPS_ModeFb
 *   EPS_SteeringGearAngle of type EPS_SteeringGearAngle
 *   EPS_SteeringGearAngleSpd of type EPS_SteeringGearAngleSpd
 *   EPS_SteeringGearAngleSpdValid of type EPS_SteeringGearAngleSpdValid
 *   EPS_SteeringGearAngleValid of type EPS_SteeringGearAngleValid
 *   EPS_TorsionBarTorque of type EPS_TorsionBarTorque
 *   EPS_TorsionBarTorqueValid of type EPS_TorsionBarTorqueValid
 *   EPS_WarningLamp of type EPS_WarningLamp
 *   MessageCounter_0F0 of type MessageCounter_0F0
 * SG_EVCOM_State_01_SigGroup: Record with elements
 *   EVCOM_CompActlCnsmpCur of type EVCOM_CompActlCnsmpCur
 *   EVCOM_CompActlPwrCnsmp of type EVCOM_CompActlPwrCnsmp_1
 * SG_IBS_ACC_SigGroup: Record with elements
 *   Checksum_0B8 of type Checksum_0B8_4
 *   IBS_CddActive of type IBS_CddActive
 *   IBS_VehicleStandstill of type IBS_VehicleStandstill
 *   IBS_VehicleStandstill_Valid of type IBS_VehicleStandstill_Valid
 *   IBS_VlcActive of type IBS_VlcActive
 *   IBS_WLTorqueVLCReq of type IBS_WLTorqueVLCReq_4
 *   IBS_WLTorqueVLCReqValid of type IBS_WLTorqueVLCReqValid_4
 *   MessageCounter_0B8 of type MessageCounter_0B8_4
 *   IBS_CddAvailable of type IBS_CddAvailable
 *   IBS_CddError of type IBS_CddError
 *   IBS_VlcAvalible of type IBS_VlcAvalible
 *   IBS_VlcError of type IBS_VlcError
 * SG_IBS_APS_SigGroup: Record with elements
 *   IBS_APSTrqReqActive of type IBS_APSTrqReqActive
 *   Checksum_0B7 of type Checksum_0B7_2
 *   MessageCounter_0B7 of type MessageCounter_0B7_3
 *   IBS_APS_Avl of type IBS_APS_Avl
 *   IBS_APSComfortAvl of type IBS_APSComfortAvl
 *   IBS_APSCrlReqEcho of type IBS_APSCrlReqEcho
 *   IBS_APSEmergenyAvl of type IBS_APSEmergenyAvl
 *   IBS_APSModeEcho of type IBS_APSModeEcho
 *   IBS_BrakeTypEcho of type IBS_BrakeTypEcho
 * SG_IBS_Status_01_SigGroup: Record with elements
 *   Checksum_0B2 of type Checksum_0B2_3
 *   IBS_PlungerPressure of type IBS_PlungerPressure_3
 *   MessageCounter_0B2 of type MessageCounter_0B2_3
 *   IBS_BrakePedalStatus of type IBS_BrakepedalStatus
 *   IBS_BrakePedalStatusValid of type IBS_BrakepedalStatusValid
 *   IBS_BrakePushrodStroke of type IBS_BrakePushrodStroke_2
 *   IBS_MasterCylinderPressure of type IBS_MasterCylinderPressure_2
 * SG_IBS_Status_02_SigGroup: Record with elements
 *   Checksum_0B3 of type Checksum_0B3_3
 *   IBS_AEBActive of type IBS_AEBActive
 *   IBS_EPBFailureLamp of type IBS_EPBFailureLamp
 *   IBS_EPBFunctionLamp of type IBS_EPBFunctionLamp
 *   IBS_EPBworkingSts of type IBS_EPBworkingSts
 *   IBS_TCSActive of type IBS_TCSActive
 *   IBS_VDCActive of type IBS_VDCActive
 *   MessageCounter_0B3 of type MessageCounter_0B3
 *   IBS_EPBControllerSts of type IBS_EPBControllerSts
 *   IBS_AEBAvailable of type IBS_AEBAvailable
 *   IBS_AVHAvailable of type IBS_AVHAvailable
 *   IBS_AWBActive of type IBS_AWBActive
 *   IBS_AWBAvailable of type IBS_AWBAvailable
 *   IBS_BrakeLightRequest of type IBS_BrakeLightRequest
 *   IBS_HazWarnReq of type IBS_HazWarnReq
 *   IBS_HDCAvailable of type IBS_HDCAvailable
 *   IBS_HHCActive of type IBS_HHCActive
 *   IBS_HHCAvailable of type IBS_HHCAvailable
 * SG_IBS_Status_03_SigGroup: Record with elements
 *   Checksum_0B4 of type Checksum_0B4_1
 *   IBS_ABPActive of type IBS_ABPActive
 *   IBS_ABSActive of type IBS_ABSActive
 *   IBS_EBDActive of type IBS_EBDActive
 *   IBS_EBDFault of type IBS_EBDFault
 *   IBS_SystemStatus of type IBS_SystemStatus
 *   IBS_TCSFault of type IBS_TCSFault
 *   IBS_VCU_DecelerationRequest_Available of type IBS_VCU_DecelerationRequest_Available
 *   IBS_VehicleSpeed of type IBS_VehicleSpeed_2
 *   MessageCounter_0B4 of type MessageCounter_0B4
 *   IBS_DTCFault of type IBS_DTCfault
 *   IBS_VehicleSpeedValid of type IBS_VehiclespeedValid
 *   IBS_ABPAvailable of type IBS_ABPAvailable
 *   IBS_ABSFault of type IBS_ABSFault
 *   IBS_EPBTextdisplay of type IBS_EPBTextdisplay
 *   IBS_VDCFault of type IBS_VDCFault
 * SG_IBS_Status_04_SigGroup: Record with elements
 *   Checksum_0BA of type Checksum_0BA_2
 *   IBS_CDPActive of type IBS_CDPActive
 *   IBS_DTCActive of type IBS_DTCActive
 *   MessageCounter_0BA of type MessageCounter_0BA_2
 *   IBS_CDPAvailable of type IBS_CDPAvailable
 * SG_IBS_Status_05_SigGroup: Record with elements
 *   Checksum_0BB of type Checksum_0BB_3
 *   IBS_SUBEPBworkingSts of type IBS_SUBEPBworkingSts
 *   MessageCounter_0BB of type MessageCounter_0BB_3
 *   IBS_SUBEPBControllerSts of type IBS_SUBEPBControllerSts
 *   IBS_SUBEPBFailureStatus of type IBS_SUBEPBFailureStatus
 * SG_IBS_Status_06_SigGroup: Record with elements
 *   Checksum_0BC of type Checksum_0BC_2
 *   IBS_AVHSts of type IBS_AVHSts
 *   IBS_BrakeFluidWarning of type IBS_BrakeFluidWarning
 *   IBS_ESCOffSts of type IBS_ESCOffSts
 *   IBS_HDCSts of type IBS_HDCSts
 *   IBS_RollerbenchMode of type IBS_RollerbenchMode
 *   IBS_RWUActive of type IBS_RWUActive
 *   MessageCounter_0BC of type MessageCounter_0BC
 *   IBS_EPBFailureStatus of type IBS_EPBFailureStatus
 *   IBS_ESClampdisplay of type IBS_ESClampdisplay
 *   IBS_FactoryMode of type IBS_FactoryMode
 *   IBS_HBAActive of type IBS_HBAActive
 *   IBS_MaintenaceMode of type IBS_MaintenaceMode
 *   IBS_RWUAvailable of type IBS_RWUAvailable
 *   IBS_TireMonSysSts of type IBS_TireMonSysSts
 *   IBS_TireWarnFrntLe of type IBS_TireWarnFrntLe
 *   IBS_TireWarnFrntRi of type IBS_TireWarnFrntRi
 *   IBS_TireWarnReLe of type IBS_TireWarnReLe
 *   IBS_TireWarnReRi of type IBS_TireWarnReRi
 *   IBS_TPMS_ResetSts of type IBS_TPMS_ResetSts
 * SG_IBS_Torque_SigGroup: Record with elements
 *   Checksum_0B9 of type Checksum_0B9_2
 *   IBS_RBSStatus of type IBS_RBSStatus
 *   IBS_TargetGearReq of type IBS_TargetGearReq
 *   IBS_WLTorqueAPSReq of type IBS_WLTorqueAPSReq_2
 *   IBS_WLTorqueAPSReqValid of type IBS_WLTorqueAPSReqValid
 *   IBS_WLTorqueRBSReq of type IBS_WLTorqueRBSReq_2
 *   IBS_WLTorqueRBSReqValid of type IBS_WLTorqueRBSReqValid
 *   MessageCounter_0B9 of type MessageCounter_0B9_2
 *   IBS_VCU_DecelerationReqActive of type IBS_VCU_DecelerationReqActive
 * SG_IBS_VCU_MotorControl_SigGroup: Record with elements
 *   IBS_WLTorqueIncrReq of type IBS_WLTorqueIncrReq_2
 *   IBS_WLTorqueIncrReqSts of type IBS_WLTorqueIncrReqSts
 *   IBS_WLTorqueRedReq of type IBS_WLTorqueRedReq_2
 *   IBS_WLTorqueRedReqSts of type IBS_WLTorqueRedReqSts
 *   Checksum_090 of type Checksum_91
 *   MessageCounter_090 of type MessageCounter_090
 * SG_IBS_WheelSpeed_01_SigGroup: Record with elements
 *   Checksum_0B0 of type Checksum_0B0_2
 *   IBS_FLMovingDirection of type IBS_FLMovingDirection
 *   IBS_FRMovingDirection of type IBS_FRMovingDirection
 *   MessageCounter_0B0 of type MessageCounter_0B0
 *   IBS_FLWheelPulseCounter of type IBS_FLWheelPulseCounter_1
 *   IBS_FLWheelSpeed of type IBS_FLWheelSpeed_1
 *   IBS_FLWheelSpeed_Fault of type IBS_FLWheelSpeed_Fault
 *   IBS_FRWheelPulseCounter of type IBS_FRWheelPulseCounter_1
 *   IBS_FRWheelSpeed of type IBS_FRWheelSpeed_1
 *   IBS_FRWheelSpeed_Fault of type IBS_FRWheelSpeed_Fault
 * SG_IBS_WheelSpeed_02_SigGroup: Record with elements
 *   Checksum_0B1 of type Checksum_0B1_2
 *   IBS_RLMovingDirection of type IBS_RLMovingDirection
 *   IBS_RLWheelSpeed of type IBS_RLWheelSpeed_2
 *   IBS_RLWheelSpeed_Fault of type IBS_RLWheelSpeed_Fault
 *   IBS_RRMovingDirection of type IBS_RRMovingDirection
 *   IBS_RRWheelSpeed of type IBS_RRWheelSpeed_2
 *   IBS_RRWheelSpeed_Fault of type IBS_RRWheelSpeed_Fault
 *   MessageCounter_0B1 of type MessageCounter_0B1
 *   IBS_RLWheelPulseCounter of type IBS_RLWheelPulseCounter_1
 *   IBS_RRWheelPulseCounter of type IBS_RRWheelPulseCounter_1
 * SG_IVI_01_SigGroup: Record with elements
 *   IVI_GearRequest of type IVI_GearRequest
 * SG_IVI_03_SigGroup: Record with elements
 *   Checksum_0F9 of type Checksum_0F9
 *   IVI_BulbCheckSts of type IVI_BulbCheckSts
 *   IVI_SFIabnormalSts of type IVI_SFIabnormalSts
 *   IVI_SFIDippedBeamSet of type IVI_SFIDippedBeamSet
 *   MessageCounter_0F9 of type MessageCounter_0F9
 * SG_IVI_OdometerInfor_SigGroup: Record with elements
 *   IVI_OdometerInfor of type IVI_OdometerInfor_3
 * SG_MCU_01_SigGroup: Record with elements
 *   MCU_ActTrqValid of type MCU_ActTrqValid
 *   MCU_ActualSpeed of type MCU_ActualSpeed_4
 *   MCU_ActualSpeedValid of type MCU_ActualSpeedValid
 *   MCU_ActualTorque of type MCU_ActualTorque_4
 *   MCU_IsCurr of type MCU_IsCurr_4
 *   MCU_UdcCurr of type MCU_UdcCurr
 *   Checksum_098 of type Checksum_102
 *   MessageCounter_098 of type MessageCounter_098
 * SG_MCU_02_SigGroup: Record with elements
 *   MCU_BDmpCActv of type MCU_BDmpCActv
 *   MCU_VCUWorkMode of type MCU_VCUWorkMode_3
 * SG_MCU_DeratingStatus_SigGroup: Record with elements
 *   MCU_TrqAbsMax of type MCU_TrqAbsMax_1
 *   MCU_TrqAbsMin of type MCU_TrqAbsMin_1
 * SG_MCU_FailureCode_SigGroup: Record with elements
 *   Checksum_253 of type Checksum_255
 *   MCU_FaultLevel of type MCU_FaultLevel
 *   MessageCounter_253 of type MessageCounter_255
 * SG_MCU_Temperature_01_SigGroup: Record with elements
 *   MCU_IGBTTempMax of type MCU_IGBTTempMax
 * SG_MCU_Temperature_02_SigGroup: Record with elements
 *   MCU_TempStatus of type MCU_TempStatus_3
 * SG_POD_DCDC_01_SigGroup: Record with elements
 *   POD_DCDC_HVInputCurrent of type POD_DCDC_HVInputCurrent_1
 *   POD_DCDC_HVInputVoltage of type POD_DCDC_HVInputVoltage_1
 *   POD_DCDC_WorkMode of type POD_DCDC_WorkMode_1
 * SG_POD_DCDC_02_SigGroup: Record with elements
 *   POD_DCDC_FaultLevel of type POD_DCDC_FaultLevel_1
 *   POD_DCDC_Side2Overtempfault of type POD_DCDC_Side2Overtempfault_1
 * SG_POD_OBC_CHRGSTATION_SigGroup: Record with elements
 *   POD_OBC_CCCurrentLimit of type POD_OBC_CCCurrentLimit_3
 *   POD_OBC_CCStatus of type POD_OBC_CCStatus_3
 *   POD_OBC_ChargCapacibility of type POD_OBC_ChargCapacibility_3
 *   POD_OBC_CPCurrentLimit of type POD_OBC_CPCurrentLimit_3
 *   POD_OBC_CPDuty of type POD_OBC_CPDuty_3
 *   POD_OBC_CPStatus of type POD_OBC_CPStatus_3
 *   POD_OBC_EMLockState of type POD_OBC_EMLockState_3
 *   POD_OBC_OBCMaxPermOutpCrrt of type POD_OBC_OBCMaxPermOutpCrrt_3
 *   POD_OBC_S2State of type POD_OBC_S2State_3
 *   POD_OBC_WorkMode of type POD_OBC_WorkMode_3
 * SG_POD_OBC_STATUS_02_SigGroup: Record with elements
 *   POD_OBC_ChrgOutpPwrAvl of type POD_OBC_ChrgOutpPwrAvl
 *   POD_OBC_OutputDCChargeCurrent of type POD_OBC_OutputDCChargeCurrent_1
 *   POD_OBC_OutputDCChargeVoltage of type POD_OBC_OutputDCChargeVoltage_1
 * SG_POD_OBC_STATUS_03_SigGroup: Record with elements
 *   POD_OBC_FaultLevel of type POD_OBC_FaultLevel_3
 *   POD_OBC_Side1Overtempfault of type POD_OBC_Side1Overtempfault_3
 *   POD_OBC_Side2Overtempfault of type POD_OBC_Side2Overtempfault_3
 *   POD_OBC_PrimarySideTemp of type POD_OBC_PrimarySideTemp_2
 *   POD_OBC_SecondarySideTemp of type POD_OBC_SecondarySideTemp_2
 * SG_POD_OBC_STATUS_04_SigGroup: Record with elements
 *   POD_OBC_InputACCurrent_R of type POD_OBC_InputACCurrent_R_3
 *   POD_OBC_InputACCurrent_S of type POD_OBC_InputACCurrent_S_2
 *   POD_OBC_InputACCurrent_T of type POD_OBC_InputACCurrent_T_2
 *   POD_OBC_InputACVoltage_R of type POD_OBC_InputACVoltage_R_3
 *   POD_OBC_InputACVoltage_S of type POD_OBC_InputACVoltage_S_2
 *   POD_OBC_InputACVoltage_T of type POD_OBC_InputACVoltage_T_2
 * SG_POD_Status_01_SigGroup: Record with elements
 *   POD_DCFCVoltage of type POD_DCFCVoltage_1
 *   POD_DCInletTempA of type POD_DCInletTempA_1
 *   POD_DCInletTempB of type POD_DCInletTempB_1
 * SG_POD_Status_02_SigGroup: Record with elements
 *   POD_DCPortInletTempAValid of type POD_DCPortInletTempAValid_1
 *   POD_DCPortInletTempBValid of type POD_DCPortInletTempBValid_1
 *   POD_DCPosRelayState of type POD_DCPosRelayState_1
 * SG_PRND_SigGroup: Record with elements
 *   Checksum_248 of type Checksum_249
 *   MessageCounter_248 of type MessageCounter_249
 *   PRND_Pbutton of type PRND_Pbutton
 *   PRND_Pbutton_FaultSts of type PRND_Pbutton_FaultSts
 *   PRND_RNDbutton of type PRND_RNDbutton
 *   PRND_RNDbutton_FaultSts of type PRND_RNDbutton_FaultSts
 * SG_SGW_01_SigGroup: Record with elements
 *   SGW_AppointChargeCmd of type SGW_AppointChargeCmd_4
 *   SGW_ChargeFormSet of type SGW_ChargeFormSet_4
 *   SGW_LockACPlug of type SGW_LockACPlug
 *   SGW_TimingChargeSwitchStatus of type SGW_TimingChargeSwitchStatus
 *   SGW_DschrgOnOffSet of type SGW_DschrgOnOffSet
 * SG_SGW_04_SigGroup: Record with elements
 *   SGW_RemoteHVCtrlReq of type SGW_RemoteHVCtrlReq_1
 * SG_SGW_16_SigGroup: Record with elements
 *   IVI_VrState of type IVI_VrState
 * SG_SGW_17_SigGroup: Record with elements
 *   SGW_BLESystemReadyReq of type SGW_BLESystemReadyReq
 * SG_SGW_FVSynchronization_01_SigGrou: Record with elements
 *   SGW_TripCounter of type SGW_TripCounter_3
 * SG_SGW_IBS_01_SigGroup: Record with elements
 *   IVI_BrakeCompensateCmd of type IVI_BrakeCompensateCmd
 *   IVI_CRLevelSet of type IVI_CRLevelSet
 * SG_SGW_PT_01_SigGroup: Record with elements
 *   IVI_AppointChargeCmd of type IVI_AppointChargeCmd_1
 *   IVI_ForwardVmaxlimitSw of type IVI_ForwardVmaxlimitSw_1
 *   IVI_LockACPlug of type IVI_LockACPlug_1
 *   IVI_LV_LimitPop of type IVI_LV_LimitPop
 * SG_SGW_Time_SigGroup: Record with elements
 *   SGW_TimeInfoDay of type SGW_TimeInfoDay_1
 *   SGW_TimeInfoHour of type SGW_TimeInfoHour_1
 *   SGW_TimeInfoMinute of type SGW_TimeInfoMinute_1
 *   SGW_TimeInfoMonth of type SGW_TimeInfoMonth_1
 *   SGW_TimeInfoSecond of type SGW_TimeInfoSecond_1
 *   SGW_TimeInfoYear of type SGW_TimeInfoYear_1
 *   SGW_TimeValid of type SGW_TimeValid
 * SG_SGW_VCU_01_SigGroup: Record with elements
 *   IVI_DriveModeSet of type IVI_DriveModeSet_1
 *   IVI_DschrgOnOffSet of type IVI_DschrgOnOffSet_1
 *   IVI_ForwardVmaxAllowed of type IVI_ForwardVmaxAllowed_1
 *   IVI_MaxChrgSocSet of type IVI_MaxChrgSocSet_1
 *   IVI_V2LidisSet of type IVI_V2LidisSet_1
 * SG_TCU_01_SigGroup: Record with elements
 *   TCU_HVPwrState of type TCU_HVPwrState_1
 *   TCU_TMSFaultLevel of type TCU_TMSFaultLevel_1
 *   TCU_TMSTotalPwrCnsmp of type TCU_TMSTotalPwrCnsmp
 *   TCU_TMSTotoalPwrReq of type TCU_TMSTotoalPwrReq_1
 * SG_TCU_02_SigGroup: Record with elements
 *   TCU_HVCHHighVoltage of type TCU_HVCHHighVoltage_1
 *   TCU_HVCHHVDCCurrent of type TCU_HVCHHVDCCurrent_1
 * SG_VCU_02_SigGroup: Record with elements
 *   VCU_BS_IBSBatSOC of type VCU_BS_IBSBatSOC_3
 *   VCU_BS_LV_Batt of type VCU_BS_LV_Batt_3
 *   VCU_BS_Current of type VCU_BS_Current_1
 *   VCU_BS_IndicatorSts of type VCU_BS_IndicatorSts
 *   VCU_WakeUpStatus of type VCU_WakeUpStatus_1
 * SG_VCU_03_SigGroup: Record with elements
 *   VCU_BrakeCompensateStatus of type VCU_BrakeCompensateStatus_1
 *   VCU_ChargeProcessComment of type VCU_ChargeProcessComment_1
 *   VCU_DCFCCurrent of type VCU_DCFCCurrent_1
 *   VCU_EnergyV2L of type VCU_EnergyV2L_1
 *   VCU_MemoryChargeFault of type VCU_MemoryChargeFault_1
 * SG_VCU_04_SigGroup: Record with elements
 *   VCU_ForwardVmaxlimitStatus of type VCU_ForwardVmaxlimitStatus_4
 *   VCU_ManuallyUnlockComment of type VCU_ManuallyUnlockComment_3
 * SG_VCU_05_SigGroup: Record with elements
 *   VCU_MaximumOutputCurrent of type VCU_MaximumOutputCurrent_1
 *   VCU_MaximumOutputVoltage of type VCU_MaximumOutputVoltage_1
 *   VCU_MinimumOutputCurrent of type VCU_MinimumOutputCurrent_1
 *   VCU_MinimumOutputVoltage of type VCU_MinimumOutputVoltage_1
 * SG_VCU_06_SigGroup: Record with elements
 *   VCU_ChargeEnergy of type VCU_ChargeEnergy_1
 *   VCU_ChargeTime of type VCU_ChargeTime_1
 *   VCU_DisChgPowerLimit of type VCU_DisChgPowerLimit_1
 *   VCU_DisplayMileage of type VCU_DisplayMileage_1
 *   VCU_MCUPower of type VCU_MCUPower_1
 *   VCU_PermitPackPTC of type VCU_PermitPackPTC_1
 * SG_VCU_AccPedal_SigGroup: Record with elements
 *   Checksum_0D2 of type Checksum_0D2_2
 *   MessageCounter_0D2 of type MessageCounter_0D2_2
 *   VCU_AccelerationPedal of type VCU_AccelerationPedal_2
 *   VCU_AccelerationPedalValid of type VCU_AccelerationPedalValid
 *   VCU_EPBReq of type VCU_EPBReq
 *   VCU_Kickdown of type VCU_Kickdown
 *   VCU_TargetGear of type VCU_TargetGear
 *   VCU_VehicleSpeed of type VCU_VehicleSpeed_2
 *   VCU_VehicleSpeedValid of type VCU_VehicleSpeedValid
 *   VCU_VLCTorqueRequestActive of type VCU_VLCTorqueRequestActive
 *   VCU_VLCTorqueRequestAvailable of type VCU_VLCTorqueRequestAvailable
 *   VCU_VirtualACPedal of type VCU_VirtualACPedal_1
 *   VCU_VirtualACPedalValid of type VCU_VirtualACPedalValid
 * SG_VCU_BMS_SigGroup: Record with elements
 *   Checksum_0D1 of type Checksum_0D1_2
 *   MessageCounter_0D1 of type MessageCounter_0D1_2
 *   VCU_ActDriveMode of type VCU_ActDriveMode
 *   VCU_BMSTargetThermLevel of type VCU_BMSTargetThermLevel
 *   VCU_DrvModSwitchWarn of type VCU_DrvModSwitchWarn
 *   VCU_HVStatus of type VCU_HVStatus
 *   VCU_LimitLevel of type VCU_LimitLevel
 *   VCU_RegenBrakeLightRequest of type VCU_RegenBrakeLightRequest
 *   VCU_RegenBrakeLightReqVld of type VCU_RegenBrakeLightReqVld
 *   VCU_RequestedModeBMS of type VCU_RequestedModeBMS
 *   VCU_BMS_Control_of_PosRelay of type VCU_BMS_Control_of_PosRelay
 *   VCU_ChargeStatus of type VCU_Chargestatus
 *   VCU_IsoMeasurementSwitch of type VCU_IsoMeasurementSwitch_3
 * SG_VCU_Chassis_01_SigGroup: Record with elements
 *   Checksum_0D3 of type Checksum_0D3_1
 *   MessageCounter_0D3 of type MessageCounter_0D3_1
 *   VCU_ADASOverride of type VCU_ADASOverride
 *   VCU_APSTorqueRequestActive of type VCU_APSTorqueRequestActive
 *   VCU_APSTorqueRequestAvailable of type VCU_APSTorqueRequestAvailable
 *   VCU_BrakeCompensateWarn of type VCU_BrakeCompensateWarn
 *   VCU_DecelerationReq of type VCU_DecelerationReq_1
 *   VCU_DecelerationReqactive of type VCU_DecelerationReqactive
 *   VCU_DriverTorqueRequest of type VCU_DriverTorqueRequest_1
 *   VCU_EnergyManagementWarn of type VCU_EnergyManagementWarn_1
 *   VCU_RegenTorqueCap of type VCU_RegenTorqueCap_1
 *   VCU_RegenTorqueCapValid of type VCU_RegenTorqueCapValid
 *   VCU_RegStatus of type VCU_RegStatus
 *   VCU_TorqueRequestActive of type VCU_TorqueRequestActive
 *   VCU_TorqueRequestAvailable of type VCU_TorqueRequestAvailable
 * SG_VCU_DCDC_SigGroup: Record with elements
 *   VCU_DCDCPowerLimit of type VCU_DCDCPowerLimit_1
 *   VCU_RequestedModeDCDC of type VCU_RequestedModeDCDC_1
 *   VCU_VoltageDemandLV of type VCU_VoltageDemandLV_1
 * SG_VCU_HMIsignals_01_SigGroup: Record with elements
 *   Checksum_317 of type Checksum_325
 *   MessageCounter_317 of type MessageCounter_325
 *   VCU_CriSysFailure of type VCU_CriSysFailure
 *   VCU_DCDCFail of type VCU_DCDCFail_6
 *   VCU_DriveMotOvrTemp of type VCU_DriveMotOvrTemp
 *   VCU_HVBatCriFail of type VCU_HVBatCriFail
 *   VCU_HVBatOvrTemp of type VCU_HVBatOvrTemp_5
 *   VCU_HVILError of type VCU_HVILError
 *   VCU_HVInsulResFault of type VCU_HVInsulResFault
 *   VCU_InvldGearSel of type VCU_InvldGearSel
 *   VCU_LimpHome of type VCU_LimpHome
 *   VCU_PlugStatus of type VCU_PlugStatus
 *   VCU_ReachLimitStd of type VCU_ReachLimitStd
 *   VCU_MileagelowRemind of type VCU_MileagelowRemind
 * SG_VCU_HMIsignals_02_SigGroup: Record with elements
 *   Checksum_318 of type Checksum_323
 *   MessageCounter_318 of type MessageCounter_323
 *   VCU_DischargeEndSoc of type VCU_DischargeEndSoc_2
 *   VCU_Display_Cur of type VCU_Display_Cur_2
 *   VCU_Display_Power of type VCU_Display_Power_2
 *   VCU_ForwardVmaxAllowed of type VCU_ForwardVmaxAllowed
 *   VCU_maxChargeSOC of type VCU_maxChargeSOC
 *   VCU_MCU_FaultLampReq of type VCU_MCU_FaultLampReq
 *   VCU_SystemReady of type VCU_SystemReady
 * SG_VCU_HMIsignals_03_SigGroup: Record with elements
 *   VCU_Display_voltage of type VCU_Display_voltage_5
 *   VCU_BS_HCurrent of type VCU_BS_HCurrent_1
 *   VCU_BS_QuiescentCurrent of type Rte_DT_SG_VCU_HMIsignals_03_SigGroup_2
 * SG_VCU_IBS_01_SigGroup: Record with elements
 *   Checksum_094 of type Checksum_94
 *   MessageCounter_094 of type MessageCounter_95
 *   VCU_MotorActualTorque of type VCU_MotorActualTorque_1
 *   VCU_MotorActualTorqueValid of type VCU_MotorActualTorqueValid
 *   VCU_OPStandstillReq of type VCU_OPStandstillReq
 *   VCU_WheelTrqACT of type VCU_WheelTrqACT_1
 *   VCU_WheelTrqACTValid of type VCU_WheelTrqACTValid
 * SG_VCU_MCU_02_SigGroup: Record with elements
 *   VCU_MaxSpdLimit of type VCU_MaxSpdLimit_2
 *   VCU_MCUActHeatPwr of type VCU_MCUActHeatPwr_2
 *   VCU_MotorSpdReq of type VCU_MotorSpdReq_2
 * SG_VCU_MCU_03_SigGroup: Record with elements
 *   Checksum_095 of type Checksum_104
 *   MessageCounter_095 of type MessageCounter_108
 *   VCU_ActualGear of type VCU_ActualGear
 *   VCU_BrakepedalStatus of type VCU_BrakepedalStatus
 *   VCU_KL15eOn of type VCU_KL15eOn
 *   VCU_MCUDesiredTorque of type VCU_MCUDesiredTorque_5
 *   VCU_MCUSurgeDamperState of type VCU_MCUSurgeDamperState
 *   VCU_PWTErrorLevel of type VCU_PWTErrorLevel
 *   VCU_RequestedModeMCU of type VCU_RequestedModeMCU
 *   VCU_TCSActive of type VCU_TCSActive
 *   VCU_TrqThresholdDampgCtl of type VCU_TrqThresholdDampgCtl_5
 * SG_VCU_MCU_05_SigGroup: Record with elements
 *   VCU_MaxTorqueGradient of type VCU_MaxTorqueGradient_3
 *   VCU_MaxTorqueLimit of type VCU_MaxTorqueLimit_3
 *   VCU_MinTorqueLimit of type VCU_MinTorqueLimit_3
 *   VCU_CreepTorque of type VCU_CreepTorque_1
 *   VCU_SpdLimitActTorque of type VCU_SpdLimitActTorque_1
 * SG_VCU_POD_SigGroup: Record with elements
 *   VCU_Enable_DC_Relay of type VCU_Enable_DC_Relay_3
 *   VCU_EnableOBC of type VCU_EnableOBC_3
 *   VCU_OBC_ChargeCurrentCommand of type VCU_OBC_ChargeCurrentCommand_3
 *   VCU_OBC_Control_of_em_lock of type VCU_OBC_Control_of_em_lock_3
 *   VCU_OBC_Control_of_S2_SW of type VCU_OBC_Control_of_S2_SW_3
 * SG_VCU_PlugInChrgInfo_SigGroup: Record with elements
 *   VCU_ChargeEndReason of type VCU_ChargeEndReason_1
 *   VCU_DischargeEndReason of type VCU_DischargeEndReason_1
 *   VCU_HVConnectFault of type VCU_HVConnectFault_1
 *   VCU_RemainChrgTime of type VCU_RemainChrgTime_1
 * SG_VCU_SynReq_01_SigGroup: Record with elements
 *   VCU_SynRequest of type VCU_SynRequest_1
 * SG_VCU_TCU_SigGroup: Record with elements
 *   VCU_RequestedModeTCU of type VCU_RequestedModeTCU_1
 *   VCU_TCUPowerAllowed of type VCU_TCUPowerAllowed_1
 * dt_ComM_ACU01CRCDTCInfo: Record with elements
 *   ComM_MonStatACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_0
 *   ComM_MonResACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_1
 *   ComM_ErrStatACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_2
 *   ComM_ErrResACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_3
 * dt_ComM_ACU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0
 *   ComM_MonResACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1
 *   ComM_ErrStatACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2
 *   ComM_ErrResACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3
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
 * dt_ComM_ACUInfoCRCDTCInfo: Record with elements
 *   ComM_MonStatACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0
 *   ComM_MonResACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1
 *   ComM_ErrStatACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2
 *   ComM_ErrResACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3
 * dt_ComM_ACUInfoTimeoutDTCInfo: Record with elements
 *   ComM_MonStatACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0
 *   ComM_MonResACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1
 *   ComM_ErrStatACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2
 *   ComM_ErrResACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3
 * dt_ComM_ACUInfoTimeoutInfo: Record with elements
 *   ComM_MonStatACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0
 *   ComM_MonResACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1
 *   ComM_ErrStatACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2
 *   ComM_ErrResACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3
 * dt_ComM_ADCUACC02CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0
 *   ComM_MonResADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1
 *   ComM_ErrStatADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2
 *   ComM_ErrResADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3
 * dt_ComM_ADCUACC02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0
 *   ComM_MonResADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1
 *   ComM_ErrStatADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2
 *   ComM_ErrResADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3
 * dt_ComM_ADCUACC02TimeoutInfo: Record with elements
 *   ComM_MonStatADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0
 *   ComM_MonResADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1
 *   ComM_ErrStatADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2
 *   ComM_ErrResADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3
 * dt_ComM_ADCUAEB01CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0
 *   ComM_MonResADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1
 *   ComM_ErrStatADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2
 *   ComM_ErrResADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3
 * dt_ComM_ADCUAEB01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0
 *   ComM_MonResADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1
 *   ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2
 *   ComM_ErrResADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3
 * dt_ComM_ADCUAPS01CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0
 *   ComM_MonResADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1
 *   ComM_ErrStatADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2
 *   ComM_ErrResADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3
 * dt_ComM_ADCUAPS01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0
 *   ComM_MonResADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1
 *   ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2
 *   ComM_ErrResADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3
 * dt_ComM_ADCUBodyReqCRCDTCInfo: Record with elements
 *   ComM_MonStatADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0
 *   ComM_MonResADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1
 *   ComM_ErrStatADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2
 *   ComM_ErrResADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3
 * dt_ComM_ADCUBodyReqTimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0
 *   ComM_MonResADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1
 *   ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2
 *   ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3
 * dt_ComM_ADCUDACRCDTCInfo: Record with elements
 *   ComM_MonStatADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0
 *   ComM_MonResADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1
 *   ComM_ErrStatADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2
 *   ComM_ErrResADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3
 * dt_ComM_ADCUDATimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0
 *   ComM_MonResADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1
 *   ComM_ErrStatADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2
 *   ComM_ErrResADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3
 * dt_ComM_APTCTCUTimeoutDTCInfo: Record with elements
 *   ComM_MonStatAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0
 *   ComM_MonResAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1
 *   ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2
 *   ComM_ErrResAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3
 * dt_ComM_APTCTCUTimeoutInfo: Record with elements
 *   ComM_MonStatAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0
 *   ComM_MonResAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1
 *   ComM_ErrStatAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2
 *   ComM_ErrResAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3
 * dt_ComM_BCM05CRCDTCInfo: Record with elements
 *   ComM_MonStatBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_0
 *   ComM_MonResBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_1
 *   ComM_ErrStatBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_2
 *   ComM_ErrResBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_3
 * dt_ComM_BCM05TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0
 *   ComM_MonResBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1
 *   ComM_ErrStatBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2
 *   ComM_ErrResBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3
 * dt_ComM_BCM06CRCDTCInfo: Record with elements
 *   ComM_MonStatBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_0
 *   ComM_MonResBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_1
 *   ComM_ErrStatBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_2
 *   ComM_ErrResBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_3
 * dt_ComM_BCM06TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0
 *   ComM_MonResBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1
 *   ComM_ErrStatBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2
 *   ComM_ErrResBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3
 * dt_ComM_BCM06TimeoutInfo: Record with elements
 *   ComM_MonStatBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_0
 *   ComM_MonResBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_1
 *   ComM_ErrStatBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_2
 *   ComM_ErrResBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_3
 * dt_ComM_BMSErrInfoTimeoutInfo: Record with elements
 *   ComM_MonStatBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0
 *   ComM_MonResBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1
 *   ComM_ErrStatBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2
 *   ComM_ErrResBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3
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
 * dt_ComM_BMSSts02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0
 *   ComM_MonResBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1
 *   ComM_ErrStatBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2
 *   ComM_ErrResBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3
 * dt_ComM_BMSSts02TimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0
 *   ComM_MonResBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1
 *   ComM_ErrStatBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2
 *   ComM_ErrResBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3
 * dt_ComM_CGW01CRCDTCInfo: Record with elements
 *   ComM_MonStatCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_0
 *   ComM_MonResCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_1
 *   ComM_ErrStatCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_2
 *   ComM_ErrResCGW01ACRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_3
 * dt_ComM_CGW01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0
 *   ComM_MonResCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1
 *   ComM_ErrStatCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2
 *   ComM_ErrResCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3
 * dt_ComM_CGW01TimeoutInfo: Record with elements
 *   ComM_MonStatCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_0
 *   ComM_MonResCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_1
 *   ComM_ErrStatCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_2
 *   ComM_ErrResCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_3
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
 * dt_ComM_DCMFL02CRCDTCInfo: Record with elements
 *   ComM_MonStatDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0
 *   ComM_MonResDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1
 *   ComM_ErrStatDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2
 *   ComM_ErrResDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3
 * dt_ComM_DCMFL02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0
 *   ComM_MonResDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1
 *   ComM_ErrStatDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2
 *   ComM_ErrResDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3
 * dt_ComM_DCMFL02TimeoutInfo: Record with elements
 *   ComM_MonStatDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0
 *   ComM_MonResDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1
 *   ComM_ErrStatDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2
 *   ComM_ErrResDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3
 * dt_ComM_DCMFRTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0
 *   ComM_MonResDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1
 *   ComM_ErrStatDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2
 *   ComM_ErrResDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3
 * dt_ComM_DCMFRTimeoutInfo: Record with elements
 *   ComM_MonStatDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_0
 *   ComM_MonResDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_1
 *   ComM_ErrStatDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_2
 *   ComM_ErrResDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_3
 * dt_ComM_DCMRLTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0
 *   ComM_MonResDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1
 *   ComM_ErrStatDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2
 *   ComM_ErrResDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3
 * dt_ComM_DCMRLTimeoutInfo: Record with elements
 *   ComM_MonStatDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_0
 *   ComM_MonResDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_1
 *   ComM_ErrStatDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_2
 *   ComM_ErrResDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_3
 * dt_ComM_DCMRRTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0
 *   ComM_MonResDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1
 *   ComM_ErrStatDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2
 *   ComM_ErrResDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3
 * dt_ComM_DCMRRTimeoutInfo: Record with elements
 *   ComM_MonStatDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_0
 *   ComM_MonResDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_1
 *   ComM_ErrStatDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_2
 *   ComM_ErrResDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_3
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
 * dt_ComM_EVCOMSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0
 *   ComM_MonResEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1
 *   ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2
 *   ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3
 * dt_ComM_EVCOMSts01TimeoutInfo: Record with elements
 *   ComM_MonStatEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0
 *   ComM_MonResEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1
 *   ComM_ErrStatEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2
 *   ComM_ErrResEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3
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
 * dt_ComM_IBSAPSCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0
 *   ComM_MonResIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1
 *   ComM_ErrStatIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2
 *   ComM_ErrResIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3
 * dt_ComM_IBSAPSTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0
 *   ComM_MonResIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1
 *   ComM_ErrStatIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2
 *   ComM_ErrResIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3
 * dt_ComM_IBSSts01CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0
 *   ComM_MonResIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1
 *   ComM_ErrStatIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2
 *   ComM_ErrResIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3
 * dt_ComM_IBSSts01CRCInfo: Record with elements
 *   ComM_MonStatIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_0
 *   ComM_MonResIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_1
 *   ComM_ErrStatIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_2
 *   ComM_ErrResIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_3
 * dt_ComM_IBSSts01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0
 *   ComM_MonResIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3
 * dt_ComM_IBSSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0
 *   ComM_MonResIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3
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
 * dt_ComM_IBSSts03CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0
 *   ComM_MonResIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1
 *   ComM_ErrStatIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2
 *   ComM_ErrResIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3
 * dt_ComM_IBSSts03CRCInfo: Record with elements
 *   ComM_MonStatIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_0
 *   ComM_MonResIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_1
 *   ComM_ErrStatIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_2
 *   ComM_ErrResIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_3
 * dt_ComM_IBSSts03E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0
 *   ComM_MonResIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3
 * dt_ComM_IBSSts03TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0
 *   ComM_MonResIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3
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
 * dt_ComM_IBSSts05CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0
 *   ComM_MonResIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1
 *   ComM_ErrStatIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2
 *   ComM_ErrResIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3
 * dt_ComM_IBSSts05CRCInfo: Record with elements
 *   ComM_MonStatIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_0
 *   ComM_MonResIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_1
 *   ComM_ErrStatIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_2
 *   ComM_ErrResIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_3
 * dt_ComM_IBSSts05E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0
 *   ComM_MonResIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3
 * dt_ComM_IBSSts05TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0
 *   ComM_MonResIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3
 * dt_ComM_IBSSts05TimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0
 *   ComM_MonResIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1
 *   ComM_ErrStatIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2
 *   ComM_ErrResIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3
 * dt_ComM_IBSSts06CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0
 *   ComM_MonResIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1
 *   ComM_ErrStatIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2
 *   ComM_ErrResIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3
 * dt_ComM_IBSSts06TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0
 *   ComM_MonResIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3
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
 * dt_ComM_IBSWhlSpd01CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0
 *   ComM_MonResIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1
 *   ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2
 *   ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3
 * dt_ComM_IBSWhlSpd01TimeoutInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0
 *   ComM_MonResIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1
 *   ComM_ErrStatIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2
 *   ComM_ErrResIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3
 * dt_ComM_IBSWhlSpd02CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0
 *   ComM_MonResIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1
 *   ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2
 *   ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3
 * dt_ComM_IBSWhlSpd02TimeoutInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0
 *   ComM_MonResIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1
 *   ComM_ErrStatIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2
 *   ComM_ErrResIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3
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
 * dt_ComM_MCU01CRCDTCInfo: Record with elements
 *   ComM_MonStatMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_0
 *   ComM_MonResMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_1
 *   ComM_ErrStatMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_2
 *   ComM_ErrResMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_3
 * dt_ComM_MCU01CRCInfo: Record with elements
 *   ComM_MonStatMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_0
 *   ComM_MonResMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_1
 *   ComM_ErrStatMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_2
 *   ComM_ErrResMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_3
 * dt_ComM_MCU01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0
 *   ComM_MonResMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1
 *   ComM_ErrStatMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2
 *   ComM_ErrResMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3
 * dt_ComM_MCU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0
 *   ComM_MonResMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1
 *   ComM_ErrStatMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2
 *   ComM_ErrResMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3
 * dt_ComM_MCU01TimeoutInfo: Record with elements
 *   ComM_MonStatMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_0
 *   ComM_MonResMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_1
 *   ComM_ErrStatMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_2
 *   ComM_ErrResMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_3
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
 * dt_ComM_PODDCDC01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0
 *   ComM_MonResPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1
 *   ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2
 *   ComM_ErrResPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3
 * dt_ComM_PODDCDC01TimeoutInfo: Record with elements
 *   ComM_MonStatPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0
 *   ComM_MonResPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1
 *   ComM_ErrStatPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2
 *   ComM_ErrResPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3
 * dt_ComM_PODOBCChrgStatTimeoutDTCInfo: Record with elements
 *   ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0
 *   ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1
 *   ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2
 *   ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3
 * dt_ComM_PODOBCChrgStatTimeoutInfo: Record with elements
 *   ComM_MonStatPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0
 *   ComM_MonResPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1
 *   ComM_ErrStatPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2
 *   ComM_ErrResPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3
 * dt_ComM_PODSts01TimeoutInfo: Record with elements
 *   ComM_MonStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_0
 *   ComM_MonResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_1
 *   ComM_ErrStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_2
 *   ComM_ErrResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_3
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
 * dt_ComM_SGW16TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0
 *   ComM_MonResSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1
 *   ComM_ErrStatSGW16CTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2
 *   ComM_ErrResSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3
 * dt_ComM_SGW16TimeoutInfo: Record with elements
 *   ComM_MonStatSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_0
 *   ComM_MonResSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_1
 *   ComM_ErrStatSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_2
 *   ComM_ErrResSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_3
 * dt_ComM_SGW17TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0
 *   ComM_MonResSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1
 *   ComM_ErrStatSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2
 *   ComM_ErrResSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3
 * dt_ComM_SGW17TimeoutInfo: Record with elements
 *   ComM_MonStatSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_0
 *   ComM_MonResSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_1
 *   ComM_ErrStatSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_2
 *   ComM_ErrResSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_3
 * dt_ComM_SGWPT01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0
 *   ComM_MonResSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1
 *   ComM_ErrStatSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2
 *   ComM_ErrResSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3
 * dt_ComM_SGWPT01TimeoutInfo: Record with elements
 *   ComM_MonStatSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0
 *   ComM_MonResSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1
 *   ComM_ErrStatSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2
 *   ComM_ErrResSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3
 * dt_ComM_SGWTimTimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0
 *   ComM_MonResSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1
 *   ComM_ErrStatSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2
 *   ComM_ErrResSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3
 * dt_ComM_SGWTimTimeoutInfo: Record with elements
 *   ComM_MonStatSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_0
 *   ComM_MonResSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_1
 *   ComM_ErrStatSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_2
 *   ComM_ErrResSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_3
 * dt_ComM_TCU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0
 *   ComM_MonResTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1
 *   ComM_ErrStatTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2
 *   ComM_ErrResTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3
 * dt_ComM_TCU01TimeoutInfo: Record with elements
 *   ComM_MonStatTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_0
 *   ComM_MonResTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_1
 *   ComM_ErrStatTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_2
 *   ComM_ErrResTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_3
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
 * dt_ErrMgmt_InslaFlt: Record with elements
 *   ErrMgmt_MonStatVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_0
 *   ErrMgmt_MonResVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_1
 *   ErrMgmt_ErrStatVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_2
 *   ErrMgmt_ErrResVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_3
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


#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_1000ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1s
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(SG_BMS_BatInfor_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(SG_BMS_BatInfor_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(SG_BMS_BatInfor_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(SG_BMS_Charge_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(SG_BMS_PRO_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(SG_BMS_VersionInfor_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(SG_IVI_OdometerInfor_SigGroup *data)
 *   boolean Rte_IsUpdated_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_1000ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_1000ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_1000ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_100ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(dt_ComM_CHCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(boolean *data)
 *   Std_ReturnType Rte_Read_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(SG_ADCU_APS_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(SG_ADCU_DA_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(SG_APTC_TCU_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(SG_BCM_06_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(SG_BMS_CellTemp_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(SG_BMS_CellVoltage_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(SG_BMS_Charge_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(SG_BMS_Charge_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(SG_BMS_DIRelayState_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(SG_BMS_status_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(SG_BMS_status_04_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(SG_CGW_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(SG_CGW_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(SG_DCM_FL_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(SG_DCM_FR_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(SG_EVCOM_State_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(SG_MCU_DeratingStatus_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(SG_MCU_FailureCode_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(SG_POD_DCDC_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(SG_POD_OBC_CHRGSTATION_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(SG_POD_OBC_STATUS_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(SG_POD_OBC_STATUS_04_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(SG_POD_Status_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(SG_POD_Status_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(SG_SGW_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(SG_SGW_16_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(SG_SGW_Time_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(SG_TCU_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(SG_TCU_02_SigGroup *data)
 *   boolean Rte_IsUpdated_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(void)
 *   boolean Rte_IsUpdated_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(const dt_ComM_ADCUBodyReqCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(const dt_ComM_ADCUBodyReqTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(const dt_ComM_ADCUDACRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(const dt_ComM_ADCUDATimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(const dt_ComM_APTCTCUTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(const dt_ComM_APTCTCUTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(const dt_ComM_BCM06CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(const dt_ComM_BCM06TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(const dt_ComM_BCM06TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min(uint16 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C(sint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C(sint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(const dt_ComM_CGW01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(const dt_ComM_CGW01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(const dt_ComM_CGW01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(const dt_ComM_DCMFL02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(const dt_ComM_DCMFL02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(const dt_ComM_DCMFL02TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C(sint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C(sint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(const dt_ComM_EVCOMSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(const dt_ComM_EVCOMSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(const dt_ComM_MCUFailrCodCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(const dt_ComM_MCUFailrCodCRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(const dt_ComM_MCUFailrCodE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(const dt_ComM_MCUFailrCodTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(const dt_ComM_PODDCDC01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(const dt_ComM_PODDCDC01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(const dt_ComM_PODOBCChrgStatTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(const dt_ComM_PODOBCChrgStatTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(const dt_ComM_PODSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(const dt_ComM_SGW16TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(const dt_ComM_SGW16TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(const dt_ComM_SGWTimTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(const dt_ComM_SGWTimTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(const dt_ComM_TCU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(const dt_ComM_TCU01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_100ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_100ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_100ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(dt_ComM_CHCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(SG_IBS_VCU_MotorControl_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(SG_MCU_01_SigGroup *data)
 *   boolean Rte_IsUpdated_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(const dt_ComM_IBSVCUMotCtrlCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(const dt_ComM_IBSVCUMotCtrlCRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(const dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(const dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(const dt_ComM_IBSVCUMotCtrlTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(const dt_ComM_MCU01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(const dt_ComM_MCU01CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(const dt_ComM_MCU01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(const dt_ComM_MCU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(const dt_ComM_MCU01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(sint16 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_200ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(dt_ComM_CHCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(BCM_Authentication_YDF *data)
 *   Std_ReturnType Rte_Read_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(SG_BCM_05_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(SG_BMS_ErrorInfo_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(SG_BMS_TCU_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(SG_CGW_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(SG_POD_DCDC_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(SG_POD_OBC_STATUS_03_SigGroup *data)
 *   boolean Rte_IsUpdated_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(void)
 *   boolean Rte_IsUpdated_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(const dt_ComM_BCM05CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(const dt_ComM_BCM05TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(const dt_ComM_BMSErrInfoTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_200ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_200ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_200ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_20ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(dt_ComM_CHCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(SG_ACU_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(SG_ACU_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(SG_ACU_Info_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(SG_ADCU_ACC_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(SG_ADCU_AEB_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(SG_ADCU_APS_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(SG_BMS_status_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(SG_BMS_status_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(SG_CGW_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(SG_DCM_FR_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(SG_DCM_RL_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(SG_DCM_RR_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(SG_EPS_CONV_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(SG_IBS_ACC_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(SG_IBS_APS_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(SG_IBS_Status_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(SG_IBS_Status_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(SG_IBS_Status_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(SG_IBS_Status_04_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(SG_IBS_Status_05_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(SG_IBS_Status_06_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(SG_IBS_Torque_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(SG_IBS_WheelSpeed_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(SG_IBS_WheelSpeed_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(SG_IVI_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup(SG_IVI_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(SG_MCU_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_PRND_SigGroup_SG_PRND_SigGroup(SG_PRND_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(SG_SGW_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(SG_SGW_04_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(SG_SGW_17_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(SG_SGW_IBS_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(SG_SGW_PT_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(SG_SGW_VCU_01_SigGroup *data)
 *   boolean Rte_IsUpdated_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_PRND_SigGroup_SG_PRND_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(const dt_ComM_ACU01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(const dt_ComM_ACU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(const dt_ComM_ACU02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(const dt_ComM_ACU02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus(const dt_ComM_ACU02TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(const dt_ComM_ACUInfoCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(const dt_ComM_ACUInfoTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(const dt_ComM_ACUInfoTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(const dt_ComM_ADCUACC02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(const dt_ComM_ADCUACC02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(const dt_ComM_ADCUACC02TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(const dt_ComM_ADCUAEB01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(const dt_ComM_ADCUAEB01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(const dt_ComM_ADCUAPS01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(const dt_ComM_ADCUAPS01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(const dt_ComM_BMSSts01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(const dt_ComM_BMSSts01CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(const dt_ComM_BMSSts01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(const dt_ComM_BMSSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(const dt_ComM_BMSSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(const dt_ComM_BMSSts02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(const dt_ComM_BMSSts02TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(const dt_ComM_DCMFRTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(const dt_ComM_DCMFRTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(const dt_ComM_DCMRLTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(const dt_ComM_DCMRLTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(const dt_ComM_DCMRRTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(const dt_ComM_DCMRRTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(const dt_ComM_IBSACCCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(const dt_ComM_IBSACCCRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(const dt_ComM_IBSACCE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(const dt_ComM_IBSACCTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(const dt_ComM_IBSAPSCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(const dt_ComM_IBSAPSTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(const dt_ComM_IBSSts01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(const dt_ComM_IBSSts01CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(const dt_ComM_IBSSts01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(const dt_ComM_IBSSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(const dt_ComM_IBSSts02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(const dt_ComM_IBSSts02CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(const dt_ComM_IBSSts02E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(const dt_ComM_IBSSts02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(const dt_ComM_IBSSts03CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(const dt_ComM_IBSSts03CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(const dt_ComM_IBSSts03E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(const dt_ComM_IBSSts03TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(const dt_ComM_IBSSts04CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(const dt_ComM_IBSSts04CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(const dt_ComM_IBSSts04E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(const dt_ComM_IBSSts04TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(const dt_ComM_IBSSts05CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus(const dt_ComM_IBSSts05CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus(const dt_ComM_IBSSts05E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(const dt_ComM_IBSSts05TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(const dt_ComM_IBSSts05TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(const dt_ComM_IBSSts06CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(const dt_ComM_IBSSts06TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(const dt_ComM_IBSTqCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(const dt_ComM_IBSTqCRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(const dt_ComM_IBSTqE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(const dt_ComM_IBSTqTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(const dt_ComM_IBSWhlSpd01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(const dt_ComM_IBSWhlSpd01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(const dt_ComM_IBSWhlSpd02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(const dt_ComM_IBSWhlSpd02TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(const dt_ComM_IVI01CRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(const dt_ComM_IVI01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(const dt_ComM_PRNDCRCDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(const dt_ComM_PRNDCRCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(const dt_ComM_PRNDE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(const dt_ComM_PRNDTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(const dt_ComM_PRNDTimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(const dt_ComM_SGW17TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(const dt_ComM_SGW17TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(const dt_ComM_SGWPT01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(const dt_ComM_SGWPT01TimeoutInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm(uint16 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_20ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_20ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_20ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_500ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(SG_CGW_VIN1_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(SG_CGW_VIN2_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(SG_CGW_VIN3VER_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(SG_MCU_Temperature_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(SG_MCU_Temperature_02_SigGroup *data)
 *   boolean Rte_IsUpdated_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_500ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_500ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_500ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerInput_Cyclic_50ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerInput_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerOutput_Cyclic_100ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup(const SG_VCU_03_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup(const SG_VCU_04_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup(const SG_VCU_05_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup(const SG_VCU_06_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup(const SG_VCU_DCDC_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup(const SG_VCU_TCU_SigGroup *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_100ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_100ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_100ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerOutput_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(dt_FctSftyMon_AccrPedlTqOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(dt_FctSftyMon_CrpCtrlTqOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(dt_FctSftyMon_DesVehDecelSpdOverFltInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup(const SG_VCU_IBS_01_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup(const SG_VCU_MCU_02_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup(const SG_VCU_MCU_03_SigGroup *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerOutput_Cyclic_200ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(dt_ErrMgmt_DrvMotTempOvrLamp *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(dt_ErrMgmt_HvBattTempOvrLamp *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(dt_ErrMgmt_InslaFlt *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(dt_ErrMgmt_VehHVIL *data)
 *   Std_ReturnType Rte_Read_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup(const SG_VCU_02_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup(const SG_VCU_HMIsignals_01_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup(const SG_VCU_HMIsignals_02_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup(const SG_VCU_HMIsignals_03_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup(const SG_VCU_PlugInChrgInfo_SigGroup *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_200ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_200ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_200ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerOutput_Cyclic_20ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed(VCU_VehicleSpeed data)
 *   Std_ReturnType Rte_Write_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid(VCU_VehicleSpeedValid data)
 *   Std_ReturnType Rte_Write_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup(const SG_VCU_AccPedal_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup(const SG_VCU_BMS_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup(const SG_VCU_Chassis_01_SigGroup *data)
 *   Std_ReturnType Rte_Write_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup(const SG_VCU_MCU_05_SigGroup *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_20ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_20ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_20ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandlerOutput_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup(const SG_VCU_POD_SigGroup *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandlerOutput_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_CANHandler_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandler_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_CANHandler_CODE) R_CANHandler_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_CANHandler_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
