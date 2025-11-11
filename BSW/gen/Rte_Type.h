/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Type.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"
# ifdef RTE_CORE
/**********************************************************************************************************************
 * Type definitions for mode management
 *********************************************************************************************************************/
typedef EventMaskType Rte_EventMaskType;
# endif /* defined(RTE_CORE) */

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_ACU_CrashOutputSts
typedef uint8 ACU_CrashOutputSts;

# define Rte_TypeDef_ACU_CrashOutputStsValid
typedef boolean ACU_CrashOutputStsValid;

# define Rte_TypeDef_ACU_DriverSeatBeltSts
typedef boolean ACU_DriverSeatBeltSts;

# define Rte_TypeDef_ACU_DriverSeatBeltStsValid
typedef boolean ACU_DriverSeatBeltStsValid;

# define Rte_TypeDef_ACU_DriverWarningLampSts
typedef uint8 ACU_DriverWarningLampSts;

# define Rte_TypeDef_ACU_LatAStatus
typedef uint8 ACU_LatAStatus;

# define Rte_TypeDef_ACU_LatA_1
typedef uint16 ACU_LatA_1;

# define Rte_TypeDef_ACU_LgtAStatus
typedef uint8 ACU_LgtAStatus;

# define Rte_TypeDef_ACU_LgtA_1
typedef uint16 ACU_LgtA_1;

# define Rte_TypeDef_ACU_PassengerAirbagSts
typedef uint8 ACU_PassengerAirbagSts;

# define Rte_TypeDef_ACU_PassengerSeatBeltSts
typedef boolean ACU_PassengerSeatBeltSts;

# define Rte_TypeDef_ACU_PassengerSeatBeltStsValid
typedef boolean ACU_PassengerSeatBeltStsValid;

# define Rte_TypeDef_ACU_PassengerSts
typedef boolean ACU_PassengerSts;

# define Rte_TypeDef_ACU_PassengerWarningLampSts
typedef uint8 ACU_PassengerWarningLampSts;

# define Rte_TypeDef_ACU_RLSeatBeltStatusValid
typedef boolean ACU_RLSeatBeltStatusValid;

# define Rte_TypeDef_ACU_RRSeatBeltStatusValid
typedef boolean ACU_RRSeatBeltStatusValid;

# define Rte_TypeDef_ACU_SecondLeftSeatBeltSts
typedef boolean ACU_SecondLeftSeatBeltSts;

# define Rte_TypeDef_ACU_SecondLeftSts
typedef boolean ACU_SecondLeftSts;

# define Rte_TypeDef_ACU_SecondRightSeatBeltSts
typedef boolean ACU_SecondRightSeatBeltSts;

# define Rte_TypeDef_ACU_SecondRightSts
typedef boolean ACU_SecondRightSts;

# define Rte_TypeDef_ACU_WarningLampSts
typedef uint8 ACU_WarningLampSts;

# define Rte_TypeDef_ACU_YawRateStatus
typedef uint8 ACU_YawRateStatus;

# define Rte_TypeDef_ACU_YawRate_1
typedef uint16 ACU_YawRate_1;

# define Rte_TypeDef_ADCU_ACCDA_HandsOFF_Warning
typedef uint8 ADCU_ACCDA_HandsOFF_Warning;

# define Rte_TypeDef_ADCU_ACCDA_SYS_Failure
typedef uint8 ADCU_ACCDA_SYS_Failure;

# define Rte_TypeDef_ADCU_ACC_Mode
typedef uint8 ADCU_ACC_Mode;

# define Rte_TypeDef_ADCU_AEBReq
typedef boolean ADCU_AEBReq;

# define Rte_TypeDef_ADCU_AEBWarningSts
typedef uint8 ADCU_AEBWarningSts;

# define Rte_TypeDef_ADCU_AEB_AWB_Level
typedef uint8 ADCU_AEB_AWB_Level;

# define Rte_TypeDef_ADCU_AEB_AWB_Req
typedef boolean ADCU_AEB_AWB_Req;

# define Rte_TypeDef_ADCU_AEB_Decel_Cmd_1
typedef sint16 ADCU_AEB_Decel_Cmd_1;

# define Rte_TypeDef_ADCU_AEB_Prefill_CMD
typedef boolean ADCU_AEB_Prefill_CMD;

# define Rte_TypeDef_ADCU_AEB_State
typedef uint8 ADCU_AEB_State;

# define Rte_TypeDef_ADCU_AEB_Stop_Req
typedef boolean ADCU_AEB_Stop_Req;

# define Rte_TypeDef_ADCU_APSComfBrkReq
typedef uint8 ADCU_APSComfBrkReq;

# define Rte_TypeDef_ADCU_APSCrlModeReq
typedef uint8 ADCU_APSCrlModeReq;

# define Rte_TypeDef_ADCU_APSCrlReq
typedef uint8 ADCU_APSCrlReq;

# define Rte_TypeDef_ADCU_APSCrlTypReq
typedef uint8 ADCU_APSCrlTypReq;

# define Rte_TypeDef_ADCU_APSDistanceStop
typedef uint16 ADCU_APSDistanceStop;

# define Rte_TypeDef_ADCU_APSMaxSpeedReq
typedef uint8 ADCU_APSMaxSpeedReq;

# define Rte_TypeDef_ADCU_APS_Stop_Req
typedef uint8 ADCU_APS_Stop_Req;

# define Rte_TypeDef_ADCU_DA_Mode
typedef uint8 ADCU_DA_Mode;

# define Rte_TypeDef_ADCU_FCW_State
typedef uint8 ADCU_FCW_State;

# define Rte_TypeDef_ADCU_Parking_CtrlSts
typedef uint8 ADCU_Parking_CtrlSts;

# define Rte_TypeDef_ADCU_Parking_Mode
typedef uint8 ADCU_Parking_Mode;

# define Rte_TypeDef_ADCU_RemoteParkingMode
typedef uint8 ADCU_RemoteParkingMode;

# define Rte_TypeDef_ADCU_TargetGear
typedef uint8 ADCU_TargetGear;

# define Rte_TypeDef_APTC_PowerConsumption_1
typedef uint8 APTC_PowerConsumption_1;

# define Rte_TypeDef_BCM_Authentication_YDF
typedef uint8 BCM_Authentication_YDF;

# define Rte_TypeDef_BCM_AutoCloseWinFunSts
typedef boolean BCM_AutoCloseWinFunSts;

# define Rte_TypeDef_BCM_ChrgFlapLockSts
typedef boolean BCM_ChrgFlapLockSts;

# define Rte_TypeDef_BCM_DomeLampAutoSts
typedef uint8 BCM_DomeLampAutoSts;

# define Rte_TypeDef_BCM_DomeLampBrightSts
typedef boolean BCM_DomeLampBrightSts;

# define Rte_TypeDef_BCM_FLSeatBeltRemindReq
typedef uint8 BCM_FLSeatBeltRemindReq;

# define Rte_TypeDef_BCM_FRSeatBeltRemindReq
typedef uint8 BCM_FRSeatBeltRemindReq;

# define Rte_TypeDef_BCM_FrontWiperModeSts
typedef uint8 BCM_FrontWiperModeSts;

# define Rte_TypeDef_BCM_GearTimesSts
typedef uint8 BCM_GearTimesSts;

# define Rte_TypeDef_BCM_KeyNotInCarRemind
typedef boolean BCM_KeyNotInCarRemind;

# define Rte_TypeDef_BCM_PepsPowerMode
typedef uint8 BCM_PepsPowerMode;

# define Rte_TypeDef_BCM_PowerOffDisplayReq
typedef boolean BCM_PowerOffDisplayReq;

# define Rte_TypeDef_BCM_PuddleLiReq
typedef uint8 BCM_PuddleLiReq;

# define Rte_TypeDef_BCM_RLSeatBeltRemindReq
typedef uint8 BCM_RLSeatBeltRemindReq;

# define Rte_TypeDef_BCM_RRSeatBeltRemindReq
typedef uint8 BCM_RRSeatBeltRemindReq;

# define Rte_TypeDef_BCM_WelLightshowOnOffSts
typedef uint8 BCM_WelLightshowOnOffSts;

# define Rte_TypeDef_BCM_WiperServiceSts
typedef uint8 BCM_WiperServiceSts;

# define Rte_TypeDef_BCM_WiperWorkingSts
typedef uint8 BCM_WiperWorkingSts;

# define Rte_TypeDef_BMS_AbortAchiveSingleVolt_2
typedef uint8 BMS_AbortAchiveSingleVolt_2;

# define Rte_TypeDef_BMS_AbortAchiveTotalVolt_2
typedef uint8 BMS_AbortAchiveTotalVolt_2;

# define Rte_TypeDef_BMS_AbortAchivesetValue_2
typedef uint8 BMS_AbortAchivesetValue_2;

# define Rte_TypeDef_BMS_AbortErrorCurrent_2
typedef uint8 BMS_AbortErrorCurrent_2;

# define Rte_TypeDef_BMS_AbortErrorVoltage_2
typedef uint8 BMS_AbortErrorVoltage_2;

# define Rte_TypeDef_BMS_AbortFaultBMSTemp_2
typedef uint8 BMS_AbortFaultBMSTemp_2;

# define Rte_TypeDef_BMS_AbortFaultBatteryTemp_2
typedef uint8 BMS_AbortFaultBatteryTemp_2;

# define Rte_TypeDef_BMS_AllowCellTemperature_1
typedef uint8 BMS_AllowCellTemperature_1;

# define Rte_TypeDef_BMS_AllowChagCurrent_1
typedef uint16 BMS_AllowChagCurrent_1;

# define Rte_TypeDef_BMS_AverageCellTemp_2
typedef uint8 BMS_AverageCellTemp_2;

# define Rte_TypeDef_BMS_BalancingStatus
typedef boolean BMS_BalancingStatus;

# define Rte_TypeDef_BMS_BatChagSum_2
typedef uint16 BMS_BatChagSum_2;

# define Rte_TypeDef_BMS_BatProDatDay_1
typedef uint8 BMS_BatProDatDay_1;

# define Rte_TypeDef_BMS_BatProDatMonth_1
typedef uint8 BMS_BatProDatMonth_1;

# define Rte_TypeDef_BMS_BatProDatYear_1
typedef uint8 BMS_BatProDatYear_1;

# define Rte_TypeDef_BMS_BatProRights_1
typedef boolean BMS_BatProRights_1;

# define Rte_TypeDef_BMS_BatType_1
typedef uint8 BMS_BatType_1;

# define Rte_TypeDef_BMS_BattCurr_1
typedef uint16 BMS_BattCurr_1;

# define Rte_TypeDef_BMS_BattVolt_1
typedef uint16 BMS_BattVolt_1;

# define Rte_TypeDef_BMS_CellNumbers
typedef uint8 BMS_CellNumbers;

# define Rte_TypeDef_BMS_ChagComplete_2
typedef uint8 BMS_ChagComplete_2;

# define Rte_TypeDef_BMS_ChargeRequest_2
typedef uint8 BMS_ChargeRequest_2;

# define Rte_TypeDef_BMS_ChargeStatus
typedef uint8 BMS_ChargeStatus;

# define Rte_TypeDef_BMS_ComVersion
typedef uint16 BMS_ComVersion;

# define Rte_TypeDef_BMS_DCChgMode_2
typedef uint8 BMS_DCChgMode_2;

# define Rte_TypeDef_BMS_DisChgCurr_4
typedef sint16 BMS_DisChgCurr_4;

# define Rte_TypeDef_BMS_DisplaySOC_1
typedef uint16 BMS_DisplaySOC_1;

# define Rte_TypeDef_BMS_ErrorCellHighTemp_1
typedef uint8 BMS_ErrorCellHighTemp_1;

# define Rte_TypeDef_BMS_ErrorCellLowTemp_1
typedef uint8 BMS_ErrorCellLowTemp_1;

# define Rte_TypeDef_BMS_ErrorCellOverVolt_1
typedef uint8 BMS_ErrorCellOverVolt_1;

# define Rte_TypeDef_BMS_ErrorCellUnderVolt_1
typedef uint8 BMS_ErrorCellUnderVolt_1;

# define Rte_TypeDef_BMS_ErrorChaCurrentOver_1
typedef uint8 BMS_ErrorChaCurrentOver_1;

# define Rte_TypeDef_BMS_ErrorHighSoc_1
typedef boolean BMS_ErrorHighSoc_1;

# define Rte_TypeDef_BMS_ErrorIsolationSingleLow
typedef uint8 BMS_ErrorIsolationSingleLow;

# define Rte_TypeDef_BMS_ErrorLevel
typedef uint8 BMS_ErrorLevel;

# define Rte_TypeDef_BMS_ErrorLowSoc_1
typedef uint8 BMS_ErrorLowSoc_1;

# define Rte_TypeDef_BMS_ErrorPreChaFailed
typedef boolean BMS_ErrorPreChaFailed;

# define Rte_TypeDef_BMS_ErrorRelay_1
typedef boolean BMS_ErrorRelay_1;

# define Rte_TypeDef_BMS_FeedbackCurr_3
typedef sint16 BMS_FeedbackCurr_3;

# define Rte_TypeDef_BMS_HVinterlockState
typedef boolean BMS_HVinterlockState;

# define Rte_TypeDef_BMS_Heatcurrent_1
typedef uint16 BMS_Heatcurrent_1;

# define Rte_TypeDef_BMS_InsulationDetectionStatus
typedef boolean BMS_InsulationDetectionStatus;

# define Rte_TypeDef_BMS_KeepWarmRequest_1
typedef boolean BMS_KeepWarmRequest_1;

# define Rte_TypeDef_BMS_KeepWarmStatus_1
typedef uint8 BMS_KeepWarmStatus_1;

# define Rte_TypeDef_BMS_LinkVoltage_1
typedef uint16 BMS_LinkVoltage_1;

# define Rte_TypeDef_BMS_MaxCellTempNO_3
typedef uint8 BMS_MaxCellTempNO_3;

# define Rte_TypeDef_BMS_MaxCellTemp_3
typedef uint8 BMS_MaxCellTemp_3;

# define Rte_TypeDef_BMS_MaxCellVoltageModuleNO_3
typedef uint8 BMS_MaxCellVoltageModuleNO_3;

# define Rte_TypeDef_BMS_MaxCellVoltageNO_3
typedef uint8 BMS_MaxCellVoltageNO_3;

# define Rte_TypeDef_BMS_MaxCellVoltage_3
typedef uint16 BMS_MaxCellVoltage_3;

# define Rte_TypeDef_BMS_MaxChagVoltage_1
typedef uint16 BMS_MaxChagVoltage_1;

# define Rte_TypeDef_BMS_MinCellTempModuleNO
typedef uint8 BMS_MinCellTempModuleNO;

# define Rte_TypeDef_BMS_MinCellTempNO_3
typedef uint8 BMS_MinCellTempNO_3;

# define Rte_TypeDef_BMS_MinCellTemp_3
typedef uint8 BMS_MinCellTemp_3;

# define Rte_TypeDef_BMS_MinCellVoltage_1
typedef uint16 BMS_MinCellVoltage_1;

# define Rte_TypeDef_BMS_NegRelayStatus_3
typedef uint8 BMS_NegRelayStatus_3;

# define Rte_TypeDef_BMS_PTCRelayStatus
typedef uint8 BMS_PTCRelayStatus;

# define Rte_TypeDef_BMS_PTC_VoltageValue_3
typedef uint16 BMS_PTC_VoltageValue_3;

# define Rte_TypeDef_BMS_PackVoltage_1
typedef uint16 BMS_PackVoltage_1;

# define Rte_TypeDef_BMS_PosRelayStatus_3
typedef uint8 BMS_PosRelayStatus_3;

# define Rte_TypeDef_BMS_PreCharge
typedef uint8 BMS_PreCharge;

# define Rte_TypeDef_BMS_PreRelayStatus
typedef uint8 BMS_PreRelayStatus;

# define Rte_TypeDef_BMS_RTC_Request_1
typedef boolean BMS_RTC_Request_1;

# define Rte_TypeDef_BMS_RatBatVoltage_1
typedef uint16 BMS_RatBatVoltage_1;

# define Rte_TypeDef_BMS_RatCapacity_1
typedef uint16 BMS_RatCapacity_1;

# define Rte_TypeDef_BMS_RatEnergy_1
typedef uint16 BMS_RatEnergy_1;

# define Rte_TypeDef_BMS_RemChagTime_1
typedef uint16 BMS_RemChagTime_1;

# define Rte_TypeDef_BMS_RemainCapacity_1
typedef uint16 BMS_RemainCapacity_1;

# define Rte_TypeDef_BMS_RunHeatStatus
typedef uint8 BMS_RunHeatStatus;

# define Rte_TypeDef_BMS_SOH_2
typedef uint8 BMS_SOH_2;

# define Rte_TypeDef_BMS_SingChgkwh_1
typedef uint8 BMS_SingChgkwh_1;

# define Rte_TypeDef_BMS_SumChgkwh_1
typedef uint32 BMS_SumChgkwh_1;

# define Rte_TypeDef_BMS_SysRegInsulationValue_2
typedef uint16 BMS_SysRegInsulationValue_2;

# define Rte_TypeDef_BMS_ThermalRunawayFault
typedef boolean BMS_ThermalRunawayFault;

# define Rte_TypeDef_BMS_ThrmlRunawayFault
typedef boolean BMS_ThrmlRunawayFault;

# define Rte_TypeDef_BMS_WorkMode
typedef uint8 BMS_WorkMode;

# define Rte_TypeDef_BST_AbortChargparameter
typedef uint8 BST_AbortChargparameter;

# define Rte_TypeDef_CGW_ADCUSts
typedef boolean CGW_ADCUSts;

# define Rte_TypeDef_CGW_BCMSts
typedef boolean CGW_BCMSts;

# define Rte_TypeDef_CGW_BMSSts
typedef boolean CGW_BMSSts;

# define Rte_TypeDef_CGW_CBMSts
typedef boolean CGW_CBMSts;

# define Rte_TypeDef_CGW_CGWSts
typedef boolean CGW_CGWSts;

# define Rte_TypeDef_CGW_DCM_FLSts
typedef boolean CGW_DCM_FLSts;

# define Rte_TypeDef_CGW_DCM_FRSts
typedef boolean CGW_DCM_FRSts;

# define Rte_TypeDef_CGW_DCM_RLSts
typedef boolean CGW_DCM_RLSts;

# define Rte_TypeDef_CGW_DCM_RRSts
typedef boolean CGW_DCM_RRSts;

# define Rte_TypeDef_CGW_HLLSts
typedef boolean CGW_HLLSts;

# define Rte_TypeDef_CGW_HLRSts
typedef boolean CGW_HLRSts;

# define Rte_TypeDef_CGW_HOD_HeatingSts
typedef boolean CGW_HOD_HeatingSts;

# define Rte_TypeDef_CGW_IVISts
typedef boolean CGW_IVISts;

# define Rte_TypeDef_CGW_MFP_FCSts
typedef boolean CGW_MFP_FCSts;

# define Rte_TypeDef_CGW_MFP_RCSts
typedef boolean CGW_MFP_RCSts;

# define Rte_TypeDef_CGW_PRNDSts
typedef boolean CGW_PRNDSts;

# define Rte_TypeDef_CGW_SCU_LSts
typedef boolean CGW_SCU_LSts;

# define Rte_TypeDef_CGW_SCU_RSts
typedef boolean CGW_SCU_RSts;

# define Rte_TypeDef_CGW_SGWSts
typedef boolean CGW_SGWSts;

# define Rte_TypeDef_CGW_SWPSts
typedef boolean CGW_SWPSts;

# define Rte_TypeDef_CGW_SwichesSts
typedef boolean CGW_SwichesSts;

# define Rte_TypeDef_CGW_VCUSts
typedef boolean CGW_VCUSts;

# define Rte_TypeDef_CGW_VERSION1_3
typedef uint8 CGW_VERSION1_3;

# define Rte_TypeDef_CGW_VERSION2_3
typedef uint8 CGW_VERSION2_3;

# define Rte_TypeDef_CGW_VIN0_3
typedef uint8 CGW_VIN0_3;

# define Rte_TypeDef_CGW_VIN10_3
typedef uint8 CGW_VIN10_3;

# define Rte_TypeDef_CGW_VIN11_3
typedef uint8 CGW_VIN11_3;

# define Rte_TypeDef_CGW_VIN12_3
typedef uint8 CGW_VIN12_3;

# define Rte_TypeDef_CGW_VIN13_3
typedef uint8 CGW_VIN13_3;

# define Rte_TypeDef_CGW_VIN14_3
typedef uint8 CGW_VIN14_3;

# define Rte_TypeDef_CGW_VIN15_3
typedef uint8 CGW_VIN15_3;

# define Rte_TypeDef_CGW_VIN16_3
typedef uint8 CGW_VIN16_3;

# define Rte_TypeDef_CGW_VIN1_3
typedef uint8 CGW_VIN1_3;

# define Rte_TypeDef_CGW_VIN2_3
typedef uint8 CGW_VIN2_3;

# define Rte_TypeDef_CGW_VIN3_3
typedef uint8 CGW_VIN3_3;

# define Rte_TypeDef_CGW_VIN4_3
typedef uint8 CGW_VIN4_3;

# define Rte_TypeDef_CGW_VIN5_3
typedef uint8 CGW_VIN5_3;

# define Rte_TypeDef_CGW_VIN6_3
typedef uint8 CGW_VIN6_3;

# define Rte_TypeDef_CGW_VIN7_3
typedef uint8 CGW_VIN7_3;

# define Rte_TypeDef_CGW_VIN8_3
typedef uint8 CGW_VIN8_3;

# define Rte_TypeDef_CGW_VIN9_3
typedef uint8 CGW_VIN9_3;

# define Rte_TypeDef_CGW_VehicleState
typedef uint8 CGW_VehicleState;

# define Rte_TypeDef_ChargeCurrWU_Ena_LIN01
typedef boolean ChargeCurrWU_Ena_LIN01;

# define Rte_TypeDef_ChargeCurrWU_Treshold_LIN01
typedef uint8 ChargeCurrWU_Treshold_LIN01;

# define Rte_TypeDef_Checksum_0B0_2
typedef uint8 Checksum_0B0_2;

# define Rte_TypeDef_Checksum_0B1_2
typedef uint8 Checksum_0B1_2;

# define Rte_TypeDef_Checksum_0B2_3
typedef uint8 Checksum_0B2_3;

# define Rte_TypeDef_Checksum_0B3_3
typedef uint8 Checksum_0B3_3;

# define Rte_TypeDef_Checksum_0B4_1
typedef uint8 Checksum_0B4_1;

# define Rte_TypeDef_Checksum_0B7_2
typedef uint8 Checksum_0B7_2;

# define Rte_TypeDef_Checksum_0B8_4
typedef uint8 Checksum_0B8_4;

# define Rte_TypeDef_Checksum_0B9_2
typedef uint8 Checksum_0B9_2;

# define Rte_TypeDef_Checksum_0BA_2
typedef uint8 Checksum_0BA_2;

# define Rte_TypeDef_Checksum_0BB_3
typedef uint8 Checksum_0BB_3;

# define Rte_TypeDef_Checksum_0BC_2
typedef uint8 Checksum_0BC_2;

# define Rte_TypeDef_Checksum_0C1_2
typedef uint8 Checksum_0C1_2;

# define Rte_TypeDef_Checksum_0D1_2
typedef uint8 Checksum_0D1_2;

# define Rte_TypeDef_Checksum_0D2_2
typedef uint8 Checksum_0D2_2;

# define Rte_TypeDef_Checksum_0D3_1
typedef uint8 Checksum_0D3_1;

# define Rte_TypeDef_Checksum_0E0_2
typedef uint8 Checksum_0E0_2;

# define Rte_TypeDef_Checksum_0E2_3
typedef uint8 Checksum_0E2_3;

# define Rte_TypeDef_Checksum_0E4_3
typedef uint8 Checksum_0E4_3;

# define Rte_TypeDef_Checksum_0E6_1
typedef uint8 Checksum_0E6_1;

# define Rte_TypeDef_Checksum_0F0
typedef uint8 Checksum_0F0;

# define Rte_TypeDef_Checksum_0F5_1
typedef uint8 Checksum_0F5_1;

# define Rte_TypeDef_Checksum_0F6_1
typedef uint8 Checksum_0F6_1;

# define Rte_TypeDef_Checksum_0F9
typedef uint8 Checksum_0F9;

# define Rte_TypeDef_Checksum_102
typedef uint8 Checksum_102;

# define Rte_TypeDef_Checksum_104
typedef uint8 Checksum_104;

# define Rte_TypeDef_Checksum_105
typedef uint8 Checksum_105;

# define Rte_TypeDef_Checksum_249
typedef uint8 Checksum_249;

# define Rte_TypeDef_Checksum_255
typedef uint8 Checksum_255;

# define Rte_TypeDef_Checksum_280
typedef uint8 Checksum_280;

# define Rte_TypeDef_Checksum_28A_2
typedef uint8 Checksum_28A_2;

# define Rte_TypeDef_Checksum_323
typedef uint8 Checksum_323;

# define Rte_TypeDef_Checksum_325
typedef uint8 Checksum_325;

# define Rte_TypeDef_Checksum_33A_2
typedef uint8 Checksum_33A_2;

# define Rte_TypeDef_Checksum_91
typedef uint8 Checksum_91;

# define Rte_TypeDef_Checksum_94
typedef uint8 Checksum_94;

# define Rte_TypeDef_DCM_FL_DoorFLSts
typedef boolean DCM_FL_DoorFLSts;

# define Rte_TypeDef_DCM_FL_FRWndSwA
typedef uint8 DCM_FL_FRWndSwA;

# define Rte_TypeDef_DCM_FL_LeftMirrorHorizontalPos
typedef uint8 DCM_FL_LeftMirrorHorizontalPos;

# define Rte_TypeDef_DCM_FL_LeftMirrorVerticalPos
typedef uint8 DCM_FL_LeftMirrorVerticalPos;

# define Rte_TypeDef_DCM_FL_MirrorAutoFoldUnfoldSts
typedef boolean DCM_FL_MirrorAutoFoldUnfoldSts;

# define Rte_TypeDef_DCM_FL_MirrorAutoTurnDownSts
typedef boolean DCM_FL_MirrorAutoTurnDownSts;

# define Rte_TypeDef_DCM_FL_MirrorFold_UnfoldSts
typedef boolean DCM_FL_MirrorFold_UnfoldSts;

# define Rte_TypeDef_DCM_FL_RLWndSwA
typedef uint8 DCM_FL_RLWndSwA;

# define Rte_TypeDef_DCM_FL_RRWndSwA
typedef uint8 DCM_FL_RRWndSwA;

# define Rte_TypeDef_DCM_FL_RearmirrorHeatingSts
typedef boolean DCM_FL_RearmirrorHeatingSts;

# define Rte_TypeDef_DCM_FR_AmbientTemperatureValid
typedef boolean DCM_FR_AmbientTemperatureValid;

# define Rte_TypeDef_DCM_FR_AmbientTemperature_1
typedef uint8 DCM_FR_AmbientTemperature_1;

# define Rte_TypeDef_DCM_FR_DoorFRSts
typedef boolean DCM_FR_DoorFRSts;

# define Rte_TypeDef_DCM_RL_DoorRLSts
typedef boolean DCM_RL_DoorRLSts;

# define Rte_TypeDef_DCM_RR_DoorRRSts
typedef boolean DCM_RR_DoorRRSts;

# define Rte_TypeDef_DisChargeCurrWU_Ena_LIN01
typedef boolean DisChargeCurrWU_Ena_LIN01;

# define Rte_TypeDef_DisChargeCurrWU_Treshold_LIN01
typedef uint8 DisChargeCurrWU_Treshold_LIN01;

# define Rte_TypeDef_EPS_ModeChangeEnable
typedef boolean EPS_ModeChangeEnable;

# define Rte_TypeDef_EPS_ModeFb
typedef uint8 EPS_ModeFb;

# define Rte_TypeDef_EPS_SteeringGearAngle
typedef uint16 EPS_SteeringGearAngle;

# define Rte_TypeDef_EPS_SteeringGearAngleSpd
typedef uint16 EPS_SteeringGearAngleSpd;

# define Rte_TypeDef_EPS_SteeringGearAngleSpdValid
typedef boolean EPS_SteeringGearAngleSpdValid;

# define Rte_TypeDef_EPS_SteeringGearAngleValid
typedef boolean EPS_SteeringGearAngleValid;

# define Rte_TypeDef_EPS_TorsionBarTorque
typedef uint8 EPS_TorsionBarTorque;

# define Rte_TypeDef_EPS_TorsionBarTorqueValid
typedef boolean EPS_TorsionBarTorqueValid;

# define Rte_TypeDef_EPS_WarningLamp
typedef uint8 EPS_WarningLamp;

# define Rte_TypeDef_EVCOM_CompActlCnsmpCur
typedef uint8 EVCOM_CompActlCnsmpCur;

# define Rte_TypeDef_EVCOM_CompActlPwrCnsmp_1
typedef uint8 EVCOM_CompActlPwrCnsmp_1;

# define Rte_TypeDef_FRC_ComFtonNet
typedef boolean FRC_ComFtonNet;

# define Rte_TypeDef_FRC_Vl_OV
typedef boolean FRC_Vl_OV;

# define Rte_TypeDef_FRC_Vl_UV
typedef boolean FRC_Vl_UV;

# define Rte_TypeDef_IBATT_QUIESCENT_LIN01
typedef uint8 IBATT_QUIESCENT_LIN01;

# define Rte_TypeDef_IBS_ABPActive
typedef boolean IBS_ABPActive;

# define Rte_TypeDef_IBS_ABPAvailable
typedef boolean IBS_ABPAvailable;

# define Rte_TypeDef_IBS_ABSActive
typedef boolean IBS_ABSActive;

# define Rte_TypeDef_IBS_ABSFault
typedef boolean IBS_ABSFault;

# define Rte_TypeDef_IBS_AEBActive
typedef boolean IBS_AEBActive;

# define Rte_TypeDef_IBS_AEBAvailable
typedef boolean IBS_AEBAvailable;

# define Rte_TypeDef_IBS_APSComfortAvl
typedef uint8 IBS_APSComfortAvl;

# define Rte_TypeDef_IBS_APSCrlReqEcho
typedef uint8 IBS_APSCrlReqEcho;

# define Rte_TypeDef_IBS_APSEmergenyAvl
typedef uint8 IBS_APSEmergenyAvl;

# define Rte_TypeDef_IBS_APSModeEcho
typedef uint8 IBS_APSModeEcho;

# define Rte_TypeDef_IBS_APSTrqReqActive
typedef uint8 IBS_APSTrqReqActive;

# define Rte_TypeDef_IBS_APS_Avl
typedef uint8 IBS_APS_Avl;

# define Rte_TypeDef_IBS_AVHAvailable
typedef boolean IBS_AVHAvailable;

# define Rte_TypeDef_IBS_AVHSts
typedef uint8 IBS_AVHSts;

# define Rte_TypeDef_IBS_AWBActive
typedef boolean IBS_AWBActive;

# define Rte_TypeDef_IBS_AWBAvailable
typedef boolean IBS_AWBAvailable;

# define Rte_TypeDef_IBS_BrakeFluidWarning
typedef uint8 IBS_BrakeFluidWarning;

# define Rte_TypeDef_IBS_BrakeLightRequest
typedef uint8 IBS_BrakeLightRequest;

# define Rte_TypeDef_IBS_BrakePushrodStroke_2
typedef sint16 IBS_BrakePushrodStroke_2;

# define Rte_TypeDef_IBS_BrakeTypEcho
typedef uint8 IBS_BrakeTypEcho;

# define Rte_TypeDef_IBS_BrakepedalStatus
typedef uint8 IBS_BrakepedalStatus;

# define Rte_TypeDef_IBS_BrakepedalStatusValid
typedef boolean IBS_BrakepedalStatusValid;

# define Rte_TypeDef_IBS_CDPActive
typedef boolean IBS_CDPActive;

# define Rte_TypeDef_IBS_CDPAvailable
typedef boolean IBS_CDPAvailable;

# define Rte_TypeDef_IBS_CddActive
typedef boolean IBS_CddActive;

# define Rte_TypeDef_IBS_CddAvailable
typedef boolean IBS_CddAvailable;

# define Rte_TypeDef_IBS_CddError
typedef boolean IBS_CddError;

# define Rte_TypeDef_IBS_DTCActive
typedef boolean IBS_DTCActive;

# define Rte_TypeDef_IBS_DTCfault
typedef boolean IBS_DTCfault;

# define Rte_TypeDef_IBS_EBDActive
typedef boolean IBS_EBDActive;

# define Rte_TypeDef_IBS_EBDFault
typedef boolean IBS_EBDFault;

# define Rte_TypeDef_IBS_EPBControllerSts
typedef uint8 IBS_EPBControllerSts;

# define Rte_TypeDef_IBS_EPBFailureLamp
typedef uint8 IBS_EPBFailureLamp;

# define Rte_TypeDef_IBS_EPBFailureStatus
typedef uint8 IBS_EPBFailureStatus;

# define Rte_TypeDef_IBS_EPBFunctionLamp
typedef uint8 IBS_EPBFunctionLamp;

# define Rte_TypeDef_IBS_EPBTextdisplay
typedef uint8 IBS_EPBTextdisplay;

# define Rte_TypeDef_IBS_EPBworkingSts
typedef uint8 IBS_EPBworkingSts;

# define Rte_TypeDef_IBS_ESCOffSts
typedef boolean IBS_ESCOffSts;

# define Rte_TypeDef_IBS_ESClampdisplay
typedef uint8 IBS_ESClampdisplay;

# define Rte_TypeDef_IBS_FLMovingDirection
typedef uint8 IBS_FLMovingDirection;

# define Rte_TypeDef_IBS_FLWheelPulseCounter_1
typedef uint8 IBS_FLWheelPulseCounter_1;

# define Rte_TypeDef_IBS_FLWheelSpeed_1
typedef uint16 IBS_FLWheelSpeed_1;

# define Rte_TypeDef_IBS_FLWheelSpeed_Fault
typedef boolean IBS_FLWheelSpeed_Fault;

# define Rte_TypeDef_IBS_FRMovingDirection
typedef uint8 IBS_FRMovingDirection;

# define Rte_TypeDef_IBS_FRWheelPulseCounter_1
typedef uint8 IBS_FRWheelPulseCounter_1;

# define Rte_TypeDef_IBS_FRWheelSpeed_1
typedef uint16 IBS_FRWheelSpeed_1;

# define Rte_TypeDef_IBS_FRWheelSpeed_Fault
typedef boolean IBS_FRWheelSpeed_Fault;

# define Rte_TypeDef_IBS_FactoryMode
typedef boolean IBS_FactoryMode;

# define Rte_TypeDef_IBS_HBAActive
typedef boolean IBS_HBAActive;

# define Rte_TypeDef_IBS_HDCAvailable
typedef boolean IBS_HDCAvailable;

# define Rte_TypeDef_IBS_HDCSts
typedef uint8 IBS_HDCSts;

# define Rte_TypeDef_IBS_HHCActive
typedef boolean IBS_HHCActive;

# define Rte_TypeDef_IBS_HHCAvailable
typedef boolean IBS_HHCAvailable;

# define Rte_TypeDef_IBS_HazWarnReq
typedef uint8 IBS_HazWarnReq;

# define Rte_TypeDef_IBS_MaintenaceMode
typedef boolean IBS_MaintenaceMode;

# define Rte_TypeDef_IBS_MasterCylinderPressure_2
typedef uint16 IBS_MasterCylinderPressure_2;

# define Rte_TypeDef_IBS_PlungerPressure_3
typedef sint16 IBS_PlungerPressure_3;

# define Rte_TypeDef_IBS_RBSStatus
typedef boolean IBS_RBSStatus;

# define Rte_TypeDef_IBS_RLMovingDirection
typedef uint8 IBS_RLMovingDirection;

# define Rte_TypeDef_IBS_RLWheelPulseCounter_1
typedef uint8 IBS_RLWheelPulseCounter_1;

# define Rte_TypeDef_IBS_RLWheelSpeed_2
typedef uint16 IBS_RLWheelSpeed_2;

# define Rte_TypeDef_IBS_RLWheelSpeed_Fault
typedef boolean IBS_RLWheelSpeed_Fault;

# define Rte_TypeDef_IBS_RRMovingDirection
typedef uint8 IBS_RRMovingDirection;

# define Rte_TypeDef_IBS_RRWheelPulseCounter_1
typedef uint8 IBS_RRWheelPulseCounter_1;

# define Rte_TypeDef_IBS_RRWheelSpeed_2
typedef uint16 IBS_RRWheelSpeed_2;

# define Rte_TypeDef_IBS_RRWheelSpeed_Fault
typedef boolean IBS_RRWheelSpeed_Fault;

# define Rte_TypeDef_IBS_RWUActive
typedef boolean IBS_RWUActive;

# define Rte_TypeDef_IBS_RWUAvailable
typedef boolean IBS_RWUAvailable;

# define Rte_TypeDef_IBS_RollerbenchMode
typedef boolean IBS_RollerbenchMode;

# define Rte_TypeDef_IBS_SUBEPBControllerSts
typedef uint8 IBS_SUBEPBControllerSts;

# define Rte_TypeDef_IBS_SUBEPBFailureStatus
typedef uint8 IBS_SUBEPBFailureStatus;

# define Rte_TypeDef_IBS_SUBEPBworkingSts
typedef uint8 IBS_SUBEPBworkingSts;

# define Rte_TypeDef_IBS_SystemStatus
typedef uint8 IBS_SystemStatus;

# define Rte_TypeDef_IBS_TCSActive
typedef boolean IBS_TCSActive;

# define Rte_TypeDef_IBS_TCSFault
typedef boolean IBS_TCSFault;

# define Rte_TypeDef_IBS_TPMS_ResetSts
typedef boolean IBS_TPMS_ResetSts;

# define Rte_TypeDef_IBS_TargetGearReq
typedef uint8 IBS_TargetGearReq;

# define Rte_TypeDef_IBS_TireMonSysSts
typedef boolean IBS_TireMonSysSts;

# define Rte_TypeDef_IBS_TireWarnFrntLe
typedef boolean IBS_TireWarnFrntLe;

# define Rte_TypeDef_IBS_TireWarnFrntRi
typedef boolean IBS_TireWarnFrntRi;

# define Rte_TypeDef_IBS_TireWarnReLe
typedef boolean IBS_TireWarnReLe;

# define Rte_TypeDef_IBS_TireWarnReRi
typedef boolean IBS_TireWarnReRi;

# define Rte_TypeDef_IBS_VCU_DecelerationReqActive
typedef boolean IBS_VCU_DecelerationReqActive;

# define Rte_TypeDef_IBS_VCU_DecelerationRequest_Available
typedef uint8 IBS_VCU_DecelerationRequest_Available;

# define Rte_TypeDef_IBS_VDCActive
typedef boolean IBS_VDCActive;

# define Rte_TypeDef_IBS_VDCFault
typedef boolean IBS_VDCFault;

# define Rte_TypeDef_IBS_VehicleSpeed_2
typedef uint16 IBS_VehicleSpeed_2;

# define Rte_TypeDef_IBS_VehicleStandstill
typedef uint8 IBS_VehicleStandstill;

# define Rte_TypeDef_IBS_VehicleStandstill_Valid
typedef boolean IBS_VehicleStandstill_Valid;

# define Rte_TypeDef_IBS_VehiclespeedValid
typedef boolean IBS_VehiclespeedValid;

# define Rte_TypeDef_IBS_VlcActive
typedef boolean IBS_VlcActive;

# define Rte_TypeDef_IBS_VlcAvalible
typedef boolean IBS_VlcAvalible;

# define Rte_TypeDef_IBS_VlcError
typedef boolean IBS_VlcError;

# define Rte_TypeDef_IBS_WLTorqueAPSReqValid
typedef uint8 IBS_WLTorqueAPSReqValid;

# define Rte_TypeDef_IBS_WLTorqueAPSReq_2
typedef uint16 IBS_WLTorqueAPSReq_2;

# define Rte_TypeDef_IBS_WLTorqueIncrReqSts
typedef boolean IBS_WLTorqueIncrReqSts;

# define Rte_TypeDef_IBS_WLTorqueIncrReq_2
typedef uint16 IBS_WLTorqueIncrReq_2;

# define Rte_TypeDef_IBS_WLTorqueRBSReqValid
typedef uint8 IBS_WLTorqueRBSReqValid;

# define Rte_TypeDef_IBS_WLTorqueRBSReq_2
typedef uint16 IBS_WLTorqueRBSReq_2;

# define Rte_TypeDef_IBS_WLTorqueRedReqSts
typedef boolean IBS_WLTorqueRedReqSts;

# define Rte_TypeDef_IBS_WLTorqueRedReq_2
typedef uint16 IBS_WLTorqueRedReq_2;

# define Rte_TypeDef_IBS_WLTorqueVLCReqValid_4
typedef uint8 IBS_WLTorqueVLCReqValid_4;

# define Rte_TypeDef_IBS_WLTorqueVLCReq_4
typedef sint16 IBS_WLTorqueVLCReq_4;

# define Rte_TypeDef_IVI_AppointChargeCmd_1
typedef uint8 IVI_AppointChargeCmd_1;

# define Rte_TypeDef_IVI_BrakeCompensateCmd
typedef uint8 IVI_BrakeCompensateCmd;

# define Rte_TypeDef_IVI_BulbCheckSts
typedef boolean IVI_BulbCheckSts;

# define Rte_TypeDef_IVI_CRLevelSet
typedef uint8 IVI_CRLevelSet;

# define Rte_TypeDef_IVI_DriveModeSet_1
typedef uint8 IVI_DriveModeSet_1;

# define Rte_TypeDef_IVI_DschrgOnOffSet_1
typedef uint8 IVI_DschrgOnOffSet_1;

# define Rte_TypeDef_IVI_ForwardVmaxAllowed_1
typedef uint8 IVI_ForwardVmaxAllowed_1;

# define Rte_TypeDef_IVI_ForwardVmaxlimitSw_1
typedef uint8 IVI_ForwardVmaxlimitSw_1;

# define Rte_TypeDef_IVI_GearRequest
typedef uint8 IVI_GearRequest;

# define Rte_TypeDef_IVI_LV_LimitPop
typedef uint8 IVI_LV_LimitPop;

# define Rte_TypeDef_IVI_LockACPlug_1
typedef uint8 IVI_LockACPlug_1;

# define Rte_TypeDef_IVI_MaxChrgSocSet_1
typedef uint8 IVI_MaxChrgSocSet_1;

# define Rte_TypeDef_IVI_OdometerInfor_3
typedef uint32 IVI_OdometerInfor_3;

# define Rte_TypeDef_IVI_SFIDippedBeamSet
typedef uint8 IVI_SFIDippedBeamSet;

# define Rte_TypeDef_IVI_SFIabnormalSts
typedef boolean IVI_SFIabnormalSts;

# define Rte_TypeDef_IVI_V2LidisSet_1
typedef uint8 IVI_V2LidisSet_1;

# define Rte_TypeDef_IVI_VrState
typedef boolean IVI_VrState;

# define Rte_TypeDef_I_BATT_LIN01
typedef uint16 I_BATT_LIN01;

# define Rte_TypeDef_I_RANGE_LIN01
typedef uint8 I_RANGE_LIN01;

# define Rte_TypeDef_MCU_ActTrqValid
typedef boolean MCU_ActTrqValid;

# define Rte_TypeDef_MCU_ActualSpeedValid
typedef boolean MCU_ActualSpeedValid;

# define Rte_TypeDef_MCU_ActualSpeed_4
typedef uint16 MCU_ActualSpeed_4;

# define Rte_TypeDef_MCU_ActualTorque_4
typedef uint16 MCU_ActualTorque_4;

# define Rte_TypeDef_MCU_BDmpCActv
typedef boolean MCU_BDmpCActv;

# define Rte_TypeDef_MCU_FaultLevel
typedef uint8 MCU_FaultLevel;

# define Rte_TypeDef_MCU_IGBTTempMax
typedef uint8 MCU_IGBTTempMax;

# define Rte_TypeDef_MCU_IsCurr_4
typedef uint16 MCU_IsCurr_4;

# define Rte_TypeDef_MCU_TempStatus_3
typedef uint8 MCU_TempStatus_3;

# define Rte_TypeDef_MCU_TrqAbsMax_1
typedef uint16 MCU_TrqAbsMax_1;

# define Rte_TypeDef_MCU_TrqAbsMin_1
typedef uint16 MCU_TrqAbsMin_1;

# define Rte_TypeDef_MCU_UdcCurr
typedef uint16 MCU_UdcCurr;

# define Rte_TypeDef_MCU_VCUWorkMode_3
typedef uint8 MCU_VCUWorkMode_3;

# define Rte_TypeDef_MessageCounter_090
typedef uint8 MessageCounter_090;

# define Rte_TypeDef_MessageCounter_098
typedef uint8 MessageCounter_098;

# define Rte_TypeDef_MessageCounter_0B0
typedef uint8 MessageCounter_0B0;

# define Rte_TypeDef_MessageCounter_0B1
typedef uint8 MessageCounter_0B1;

# define Rte_TypeDef_MessageCounter_0B2_3
typedef uint8 MessageCounter_0B2_3;

# define Rte_TypeDef_MessageCounter_0B3
typedef uint8 MessageCounter_0B3;

# define Rte_TypeDef_MessageCounter_0B4
typedef uint8 MessageCounter_0B4;

# define Rte_TypeDef_MessageCounter_0B7_3
typedef uint8 MessageCounter_0B7_3;

# define Rte_TypeDef_MessageCounter_0B8_4
typedef uint8 MessageCounter_0B8_4;

# define Rte_TypeDef_MessageCounter_0B9_2
typedef uint8 MessageCounter_0B9_2;

# define Rte_TypeDef_MessageCounter_0BA_2
typedef uint8 MessageCounter_0BA_2;

# define Rte_TypeDef_MessageCounter_0BB_3
typedef uint8 MessageCounter_0BB_3;

# define Rte_TypeDef_MessageCounter_0BC
typedef uint8 MessageCounter_0BC;

# define Rte_TypeDef_MessageCounter_0C1_2
typedef uint8 MessageCounter_0C1_2;

# define Rte_TypeDef_MessageCounter_0D1_2
typedef uint8 MessageCounter_0D1_2;

# define Rte_TypeDef_MessageCounter_0D2_2
typedef uint8 MessageCounter_0D2_2;

# define Rte_TypeDef_MessageCounter_0D3_1
typedef uint8 MessageCounter_0D3_1;

# define Rte_TypeDef_MessageCounter_0E0
typedef uint8 MessageCounter_0E0;

# define Rte_TypeDef_MessageCounter_0E2
typedef uint8 MessageCounter_0E2;

# define Rte_TypeDef_MessageCounter_0E4_4
typedef uint8 MessageCounter_0E4_4;

# define Rte_TypeDef_MessageCounter_0E6
typedef uint8 MessageCounter_0E6;

# define Rte_TypeDef_MessageCounter_0F0
typedef uint8 MessageCounter_0F0;

# define Rte_TypeDef_MessageCounter_0F5_1
typedef uint8 MessageCounter_0F5_1;

# define Rte_TypeDef_MessageCounter_0F6_1
typedef uint8 MessageCounter_0F6_1;

# define Rte_TypeDef_MessageCounter_0F9
typedef uint8 MessageCounter_0F9;

# define Rte_TypeDef_MessageCounter_108
typedef uint8 MessageCounter_108;

# define Rte_TypeDef_MessageCounter_109
typedef uint8 MessageCounter_109;

# define Rte_TypeDef_MessageCounter_249
typedef uint8 MessageCounter_249;

# define Rte_TypeDef_MessageCounter_255
typedef uint8 MessageCounter_255;

# define Rte_TypeDef_MessageCounter_275
typedef uint8 MessageCounter_275;

# define Rte_TypeDef_MessageCounter_280
typedef uint8 MessageCounter_280;

# define Rte_TypeDef_MessageCounter_28A
typedef uint8 MessageCounter_28A;

# define Rte_TypeDef_MessageCounter_323
typedef uint8 MessageCounter_323;

# define Rte_TypeDef_MessageCounter_325
typedef uint8 MessageCounter_325;

# define Rte_TypeDef_MessageCounter_33A
typedef uint8 MessageCounter_33A;

# define Rte_TypeDef_MessageCounter_95
typedef uint8 MessageCounter_95;

# define Rte_TypeDef_POD_DCDC_FaultLevel_1
typedef uint8 POD_DCDC_FaultLevel_1;

# define Rte_TypeDef_POD_DCDC_HVInputCurrent_1
typedef uint8 POD_DCDC_HVInputCurrent_1;

# define Rte_TypeDef_POD_DCDC_HVInputVoltage_1
typedef uint16 POD_DCDC_HVInputVoltage_1;

# define Rte_TypeDef_POD_DCDC_Side2Overtempfault_1
typedef boolean POD_DCDC_Side2Overtempfault_1;

# define Rte_TypeDef_POD_DCDC_WorkMode_1
typedef uint8 POD_DCDC_WorkMode_1;

# define Rte_TypeDef_POD_DCFCVoltage_1
typedef uint16 POD_DCFCVoltage_1;

# define Rte_TypeDef_POD_DCInletTempA_1
typedef uint8 POD_DCInletTempA_1;

# define Rte_TypeDef_POD_DCInletTempB_1
typedef uint8 POD_DCInletTempB_1;

# define Rte_TypeDef_POD_DCPortInletTempAValid_1
typedef uint8 POD_DCPortInletTempAValid_1;

# define Rte_TypeDef_POD_DCPortInletTempBValid_1
typedef uint8 POD_DCPortInletTempBValid_1;

# define Rte_TypeDef_POD_DCPosRelayState_1
typedef uint8 POD_DCPosRelayState_1;

# define Rte_TypeDef_POD_OBC_CCCurrentLimit_3
typedef uint8 POD_OBC_CCCurrentLimit_3;

# define Rte_TypeDef_POD_OBC_CCStatus_3
typedef uint8 POD_OBC_CCStatus_3;

# define Rte_TypeDef_POD_OBC_CPCurrentLimit_3
typedef uint8 POD_OBC_CPCurrentLimit_3;

# define Rte_TypeDef_POD_OBC_CPDuty_3
typedef uint8 POD_OBC_CPDuty_3;

# define Rte_TypeDef_POD_OBC_CPStatus_3
typedef uint8 POD_OBC_CPStatus_3;

# define Rte_TypeDef_POD_OBC_ChargCapacibility_3
typedef uint8 POD_OBC_ChargCapacibility_3;

# define Rte_TypeDef_POD_OBC_ChrgOutpPwrAvl
typedef uint8 POD_OBC_ChrgOutpPwrAvl;

# define Rte_TypeDef_POD_OBC_EMLockState_3
typedef uint8 POD_OBC_EMLockState_3;

# define Rte_TypeDef_POD_OBC_FaultLevel_3
typedef uint8 POD_OBC_FaultLevel_3;

# define Rte_TypeDef_POD_OBC_InputACCurrent_R_3
typedef uint16 POD_OBC_InputACCurrent_R_3;

# define Rte_TypeDef_POD_OBC_InputACCurrent_S_2
typedef uint16 POD_OBC_InputACCurrent_S_2;

# define Rte_TypeDef_POD_OBC_InputACCurrent_T_2
typedef uint16 POD_OBC_InputACCurrent_T_2;

# define Rte_TypeDef_POD_OBC_InputACVoltage_R_3
typedef uint16 POD_OBC_InputACVoltage_R_3;

# define Rte_TypeDef_POD_OBC_InputACVoltage_S_2
typedef uint16 POD_OBC_InputACVoltage_S_2;

# define Rte_TypeDef_POD_OBC_InputACVoltage_T_2
typedef uint16 POD_OBC_InputACVoltage_T_2;

# define Rte_TypeDef_POD_OBC_OBCMaxPermOutpCrrt_3
typedef uint16 POD_OBC_OBCMaxPermOutpCrrt_3;

# define Rte_TypeDef_POD_OBC_OutputDCChargeCurrent_1
typedef uint16 POD_OBC_OutputDCChargeCurrent_1;

# define Rte_TypeDef_POD_OBC_OutputDCChargeVoltage_1
typedef uint16 POD_OBC_OutputDCChargeVoltage_1;

# define Rte_TypeDef_POD_OBC_PrimarySideTemp_2
typedef uint8 POD_OBC_PrimarySideTemp_2;

# define Rte_TypeDef_POD_OBC_S2State_3
typedef uint8 POD_OBC_S2State_3;

# define Rte_TypeDef_POD_OBC_SecondarySideTemp_2
typedef uint8 POD_OBC_SecondarySideTemp_2;

# define Rte_TypeDef_POD_OBC_Side1Overtempfault_3
typedef boolean POD_OBC_Side1Overtempfault_3;

# define Rte_TypeDef_POD_OBC_Side2Overtempfault_3
typedef boolean POD_OBC_Side2Overtempfault_3;

# define Rte_TypeDef_POD_OBC_WorkMode_3
typedef uint8 POD_OBC_WorkMode_3;

# define Rte_TypeDef_PRND_Pbutton
typedef uint8 PRND_Pbutton;

# define Rte_TypeDef_PRND_Pbutton_FaultSts
typedef boolean PRND_Pbutton_FaultSts;

# define Rte_TypeDef_PRND_RNDbutton
typedef uint8 PRND_RNDbutton;

# define Rte_TypeDef_PRND_RNDbutton_FaultSts
typedef boolean PRND_RNDbutton_FaultSts;

# define Rte_TypeDef_Resp_Error_LIN01
typedef boolean Resp_Error_LIN01;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0
typedef boolean Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_3
typedef boolean Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0
typedef boolean Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_1
typedef uint8 Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_2
typedef uint8 Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_3
typedef boolean Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0
typedef boolean Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1
typedef uint8 Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2
typedef uint8 Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3
typedef boolean Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcDTC_0
typedef boolean Rte_DT_dt_ChrMgmt_CC2UDcDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcDTC_1
typedef uint8 Rte_DT_dt_ChrMgmt_CC2UDcDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcDTC_2
typedef uint8 Rte_DT_dt_ChrMgmt_CC2UDcDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcDTC_3
typedef boolean Rte_DT_dt_ChrMgmt_CC2UDcDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcErr_0
typedef boolean Rte_DT_dt_ChrMgmt_CC2UDcErr_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcErr_1
typedef uint8 Rte_DT_dt_ChrMgmt_CC2UDcErr_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcErr_2
typedef uint8 Rte_DT_dt_ChrMgmt_CC2UDcErr_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_CC2UDcErr_3
typedef boolean Rte_DT_dt_ChrMgmt_CC2UDcErr_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_0
typedef boolean Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_1
typedef uint8 Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_2
typedef uint8 Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_3
typedef boolean Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_0
typedef boolean Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_1
typedef uint8 Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_2
typedef uint8 Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_3
typedef boolean Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0
typedef boolean Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_1
typedef uint8 Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_2
typedef uint8 Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_3
typedef boolean Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0
typedef boolean Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1
typedef uint8 Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2
typedef uint8 Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3
typedef boolean Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_0
typedef boolean Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_1
typedef uint8 Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_2
typedef uint8 Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_3
typedef boolean Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0
typedef boolean Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1
typedef uint8 Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2
typedef uint8 Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2;

# define Rte_TypeDef_Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3
typedef boolean Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACU01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACU01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACU01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACU01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACU02CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACU02CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACU02CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACU02CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_ACU02TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_ACU02TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_ACU02TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACU02TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_ACU02TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BCM05CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BCM05CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BCM05CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BCM05CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BCM06CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BCM06CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BCM06CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BCM06CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_BCM06TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_BCM06TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_BCM06TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BCM06TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_BCM06TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts01CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts01CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts01CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01CRCInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts01CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_CGW01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_CGW01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_CGW01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_CGW01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_CGW01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_CGW01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_CGW01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_CGW01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_CGW01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0
typedef boolean Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3
typedef boolean Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffInfo_0
typedef boolean Rte_DT_dt_ComM_CHCANBusOffInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffInfo_1
typedef uint8 Rte_DT_dt_ComM_CHCANBusOffInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffInfo_2
typedef uint8 Rte_DT_dt_ComM_CHCANBusOffInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_CHCANBusOffInfo_3
typedef boolean Rte_DT_dt_ComM_CHCANBusOffInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffInfo_0
typedef boolean Rte_DT_dt_ComM_DCCANBusOffInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffInfo_1
typedef uint8 Rte_DT_dt_ComM_DCCANBusOffInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffInfo_2
typedef uint8 Rte_DT_dt_ComM_DCCANBusOffInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCCANBusOffInfo_3
typedef boolean Rte_DT_dt_ComM_DCCANBusOffInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_DCMFRTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMFRTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMFRTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMFRTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_DCMFRTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_DCMRLTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMRLTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMRLTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRLTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_DCMRLTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_DCMRRTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_DCMRRTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_DCMRRTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_DCMRRTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_DCMRRTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0
typedef boolean Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3
typedef boolean Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffInfo_0
typedef boolean Rte_DT_dt_ComM_EPTCANBusOffInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffInfo_1
typedef uint8 Rte_DT_dt_ComM_EPTCANBusOffInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffInfo_2
typedef uint8 Rte_DT_dt_ComM_EPTCANBusOffInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_EPTCANBusOffInfo_3
typedef boolean Rte_DT_dt_ComM_EPTCANBusOffInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCMsgErrDTC_0
typedef boolean Rte_DT_dt_ComM_FRCMsgErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCMsgErrDTC_1
typedef uint8 Rte_DT_dt_ComM_FRCMsgErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCMsgErrDTC_2
typedef uint8 Rte_DT_dt_ComM_FRCMsgErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCMsgErrDTC_3
typedef boolean Rte_DT_dt_ComM_FRCMsgErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCRespErrDTC_0
typedef boolean Rte_DT_dt_ComM_FRCRespErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCRespErrDTC_1
typedef uint8 Rte_DT_dt_ComM_FRCRespErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCRespErrDTC_2
typedef uint8 Rte_DT_dt_ComM_FRCRespErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCRespErrDTC_3
typedef boolean Rte_DT_dt_ComM_FRCRespErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcHiDTC_0
typedef boolean Rte_DT_dt_ComM_FRCSplyUDcHiDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcHiDTC_1
typedef uint8 Rte_DT_dt_ComM_FRCSplyUDcHiDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcHiDTC_2
typedef uint8 Rte_DT_dt_ComM_FRCSplyUDcHiDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcHiDTC_3
typedef boolean Rte_DT_dt_ComM_FRCSplyUDcHiDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcLoDTC_0
typedef boolean Rte_DT_dt_ComM_FRCSplyUDcLoDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcLoDTC_1
typedef uint8 Rte_DT_dt_ComM_FRCSplyUDcLoDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcLoDTC_2
typedef uint8 Rte_DT_dt_ComM_FRCSplyUDcLoDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_FRCSplyUDcLoDTC_3
typedef boolean Rte_DT_dt_ComM_FRCSplyUDcLoDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSACCCRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSACCCRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSACCCRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCCRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSACCCRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts01CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts01CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts01CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts01CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts02CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts02CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts02CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts02CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts03CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts03CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts03CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts03CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts04CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts04CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts04CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts04CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts05CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts05CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts05CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts05CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSTqCRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSTqCRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSTqCRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqCRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSTqCRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCInfo_0
typedef boolean Rte_DT_dt_ComM_IVI01CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_IVI01CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_IVI01CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCInfo_3
typedef boolean Rte_DT_dt_ComM_IVI01CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_LinMsgErrInfo_0
typedef boolean Rte_DT_dt_ComM_LinMsgErrInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_LinMsgErrInfo_1
typedef uint8 Rte_DT_dt_ComM_LinMsgErrInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_LinMsgErrInfo_2
typedef uint8 Rte_DT_dt_ComM_LinMsgErrInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_LinMsgErrInfo_3
typedef boolean Rte_DT_dt_ComM_LinMsgErrInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_MCU01CRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCU01CRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCU01CRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_MCU01CRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCInfo_0
typedef boolean Rte_DT_dt_ComM_MCU01CRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCU01CRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCU01CRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01CRCInfo_3
typedef boolean Rte_DT_dt_ComM_MCU01CRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_MCU01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_MCU01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_MCU01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCU01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_MCU01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0
typedef boolean Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3
typedef boolean Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODSts01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_PODSts01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODSts01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_PODSts01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODSts01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_PODSts01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PODSts01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_PODSts01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_PRNDCRCDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_PRNDCRCDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_PRNDCRCDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_PRNDCRCDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCInfo_0
typedef boolean Rte_DT_dt_ComM_PRNDCRCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCInfo_1
typedef uint8 Rte_DT_dt_ComM_PRNDCRCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCInfo_2
typedef uint8 Rte_DT_dt_ComM_PRNDCRCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDCRCInfo_3
typedef boolean Rte_DT_dt_ComM_PRNDCRCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_PRNDTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_PRNDTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_PRNDTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_PRNDTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_PRNDTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_SGW16TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_SGW16TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_SGW16TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW16TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_SGW16TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_SGW17TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_SGW17TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_SGW17TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGW17TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_SGW17TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_SGWTimTimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_SGWTimTimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_SGWTimTimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_SGWTimTimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_SGWTimTimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_TCU01TimeoutInfo_0;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_TCU01TimeoutInfo_1;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_TCU01TimeoutInfo_2;

# define Rte_TypeDef_Rte_DT_dt_ComM_TCU01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_TCU01TimeoutInfo_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2
typedef uint8 Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3
typedef boolean Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2
typedef uint8 Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3
typedef boolean Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_0
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_1
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_2
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_3
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2
typedef uint8 Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2;

# define Rte_TypeDef_Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3
typedef boolean Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_0
typedef boolean Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_0;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_1
typedef uint8 Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_1;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_2
typedef uint8 Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_2;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_3
typedef boolean Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_3;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_0
typedef boolean Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_0;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_1
typedef uint8 Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_1;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_2
typedef uint8 Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_2;

# define Rte_TypeDef_Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_3
typedef boolean Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0
typedef boolean Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1
typedef uint8 Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2
typedef uint8 Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3
typedef boolean Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0
typedef boolean Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1
typedef uint8 Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2
typedef uint8 Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3
typedef boolean Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_InslaFlt_0
typedef boolean Rte_DT_dt_ErrMgmt_InslaFlt_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_InslaFlt_1
typedef uint8 Rte_DT_dt_ErrMgmt_InslaFlt_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_InslaFlt_2
typedef uint8 Rte_DT_dt_ErrMgmt_InslaFlt_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_InslaFlt_3
typedef boolean Rte_DT_dt_ErrMgmt_InslaFlt_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_TorqCtrlErr_0
typedef boolean Rte_DT_dt_ErrMgmt_TorqCtrlErr_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_TorqCtrlErr_1
typedef boolean Rte_DT_dt_ErrMgmt_TorqCtrlErr_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_TorqCtrlErr_2
typedef boolean Rte_DT_dt_ErrMgmt_TorqCtrlErr_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_TorqCtrlErr_3
typedef float32 Rte_DT_dt_ErrMgmt_TorqCtrlErr_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_TorqCtrlErr_4
typedef boolean Rte_DT_dt_ErrMgmt_TorqCtrlErr_4;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VCUHVILDTC_0
typedef boolean Rte_DT_dt_ErrMgmt_VCUHVILDTC_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VCUHVILDTC_1
typedef uint8 Rte_DT_dt_ErrMgmt_VCUHVILDTC_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VCUHVILDTC_2
typedef uint8 Rte_DT_dt_ErrMgmt_VCUHVILDTC_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VCUHVILDTC_3
typedef boolean Rte_DT_dt_ErrMgmt_VCUHVILDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VehHVIL_0
typedef boolean Rte_DT_dt_ErrMgmt_VehHVIL_0;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VehHVIL_1
typedef uint8 Rte_DT_dt_ErrMgmt_VehHVIL_1;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VehHVIL_2
typedef uint8 Rte_DT_dt_ErrMgmt_VehHVIL_2;

# define Rte_TypeDef_Rte_DT_dt_ErrMgmt_VehHVIL_3
typedef boolean Rte_DT_dt_ErrMgmt_VehHVIL_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_ActGearCfmFail_0
typedef boolean Rte_DT_dt_FctSftyMon_ActGearCfmFail_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_ActGearCfmFail_1
typedef uint8 Rte_DT_dt_FctSftyMon_ActGearCfmFail_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_ActGearCfmFail_2
typedef uint8 Rte_DT_dt_FctSftyMon_ActGearCfmFail_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_ActGearCfmFail_3
typedef boolean Rte_DT_dt_FctSftyMon_ActGearCfmFail_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_3;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0
typedef boolean Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_1
typedef uint8 Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_1;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_2
typedef uint8 Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_2;

# define Rte_TypeDef_Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_3
typedef boolean Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_0
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_1
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_2
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_3
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_0
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_1
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_2
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_3
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTC_0
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyClsDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyClsDTC_3
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyClsDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_0
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_3
typedef boolean Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCStopFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_DCDCStopFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCStopFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_DCDCStopFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCStopFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_DCDCStopFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCDCStopFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_DCDCStopFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_0
typedef boolean Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_3
typedef boolean Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUClsFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_MCUClsFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUClsFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_MCUClsFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUClsFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_MCUClsFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUClsFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_MCUClsFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUEnaFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_MCUEnaFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUEnaFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_MCUEnaFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUEnaFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_MCUEnaFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCUEnaFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_MCUEnaFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_0
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_1
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_2
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_3
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_0
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_1
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_2
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_3
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_MCURdyFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_MCURdyFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_MCURdyFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_0
typedef boolean Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_3
typedef boolean Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_0
typedef boolean Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_3
typedef boolean Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUEnaFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_TCUEnaFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUEnaFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_TCUEnaFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUEnaFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_TCUEnaFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUEnaFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_TCUEnaFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUStopFltDTC_0
typedef boolean Rte_DT_dt_HvMgmt_TCUStopFltDTC_0;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUStopFltDTC_1
typedef uint8 Rte_DT_dt_HvMgmt_TCUStopFltDTC_1;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUStopFltDTC_2
typedef uint8 Rte_DT_dt_HvMgmt_TCUStopFltDTC_2;

# define Rte_TypeDef_Rte_DT_dt_HvMgmt_TCUStopFltDTC_3
typedef boolean Rte_DT_dt_HvMgmt_TCUStopFltDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattTempHiDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempHiDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattTempHiDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattTempHiDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattTempHiDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempLoDTC_0
typedef uint8 Rte_DT_dt_LvMgmt_BSBattTempLoDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempLoDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattTempLoDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempLoDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattTempLoDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattTempLoDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattTempLoDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSRespErrDTC_0
typedef boolean Rte_DT_dt_LvMgmt_BSRespErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSRespErrDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_BSRespErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSRespErrDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_BSRespErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_BSRespErrDTC_3
typedef boolean Rte_DT_dt_LvMgmt_BSRespErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_ECUsDiagDTC_0
typedef boolean Rte_DT_dt_LvMgmt_ECUsDiagDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_ECUsDiagDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_ECUsDiagDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_ECUsDiagDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_ECUsDiagDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_ECUsDiagDTC_3
typedef boolean Rte_DT_dt_LvMgmt_ECUsDiagDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOffDTC_0
typedef boolean Rte_DT_dt_LvMgmt_KL15eOffDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOffDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_KL15eOffDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOffDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_KL15eOffDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOffDTC_3
typedef boolean Rte_DT_dt_LvMgmt_KL15eOffDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOnDTC_0
typedef boolean Rte_DT_dt_LvMgmt_KL15eOnDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOnDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_KL15eOnDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOnDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_KL15eOnDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_KL15eOnDTC_3
typedef boolean Rte_DT_dt_LvMgmt_KL15eOnDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_0
typedef boolean Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_3
typedef boolean Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_3;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_0
typedef boolean Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_0;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_1;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_2;

# define Rte_TypeDef_Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_3
typedef boolean Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_3;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_0
typedef boolean Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_0;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_1
typedef uint8 Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_1;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_2
typedef uint8 Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_2;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_3
typedef boolean Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_3;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_0
typedef boolean Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_0;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_1
typedef uint8 Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_1;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_2
typedef uint8 Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_2;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_3
typedef boolean Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_3;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_SptModWarnLoSOC_0
typedef boolean Rte_DT_dt_ModMgmt_SptModWarnLoSOC_0;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_SptModWarnLoSOC_1
typedef uint8 Rte_DT_dt_ModMgmt_SptModWarnLoSOC_1;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_SptModWarnLoSOC_2
typedef uint8 Rte_DT_dt_ModMgmt_SptModWarnLoSOC_2;

# define Rte_TypeDef_Rte_DT_dt_ModMgmt_SptModWarnLoSOC_3
typedef boolean Rte_DT_dt_ModMgmt_SptModWarnLoSOC_3;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChassisMgmtInfo_0
typedef uint8 Rte_DT_dt_Nv_ChassisMgmtInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChassisMgmtInfo_1
typedef uint8 Rte_DT_dt_Nv_ChassisMgmtInfo_1;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_0
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_1
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_1;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_2
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_2;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_3
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_3;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_4
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_4;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgEgyCalInfo_5
typedef uint32 Rte_DT_dt_Nv_ChrgEgyCalInfo_5;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgStatInfo_0
typedef uint8 Rte_DT_dt_Nv_ChrgStatInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgStatInfo_1
typedef uint8 Rte_DT_dt_Nv_ChrgStatInfo_1;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgStatInfo_2
typedef uint8 Rte_DT_dt_Nv_ChrgStatInfo_2;

# define Rte_TypeDef_Rte_DT_dt_Nv_ChrgStatInfo_3
typedef uint8 Rte_DT_dt_Nv_ChrgStatInfo_3;

# define Rte_TypeDef_Rte_DT_dt_Nv_GearMgmtInfo_0
typedef uint8 Rte_DT_dt_Nv_GearMgmtInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_GearMgmtInfo_1
typedef uint8 Rte_DT_dt_Nv_GearMgmtInfo_1;

# define Rte_TypeDef_Rte_DT_dt_Nv_ModMgmtInfo_0
typedef uint8 Rte_DT_dt_Nv_ModMgmtInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_ModMgmtInfo_1
typedef uint8 Rte_DT_dt_Nv_ModMgmtInfo_1;

# define Rte_TypeDef_Rte_DT_dt_Nv_RngEstimnInfo_0
typedef uint32 Rte_DT_dt_Nv_RngEstimnInfo_0;

# define Rte_TypeDef_Rte_DT_dt_Nv_RngEstimnInfo_1
typedef uint32 Rte_DT_dt_Nv_RngEstimnInfo_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErr_0
typedef boolean Rte_DT_dt_OBCMgmt_CPStsJmpErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_CPStsJmpErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_CPStsJmpErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_CPStsJmpErr_3
typedef boolean Rte_DT_dt_OBCMgmt_CPStsJmpErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErr_0
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockClsErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockClsErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockClsErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockClsErr_3
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockClsErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_0
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_3
typedef boolean Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCDiErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDiErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDiErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCDiErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErr_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCDiErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDiErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCDiErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCDiErr_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCDiErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0
typedef boolean Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3
typedef boolean Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErr_0
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtClsErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtClsErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtClsErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtClsErr_3
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtClsErr_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_0
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_1
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_2
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_3
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_3;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErr_0
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtOpenErr_0;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErr_1
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtOpenErr_1;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErr_2
typedef uint8 Rte_DT_dt_OBCMgmt_S2SwtOpenErr_2;

# define Rte_TypeDef_Rte_DT_dt_OBCMgmt_S2SwtOpenErr_3
typedef boolean Rte_DT_dt_OBCMgmt_S2SwtOpenErr_3;

# define Rte_TypeDef_Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0
typedef uint16 Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0;

# define Rte_TypeDef_SGW_AppointChargeCmd_4
typedef uint8 SGW_AppointChargeCmd_4;

# define Rte_TypeDef_SGW_BLESystemReadyReq
typedef uint8 SGW_BLESystemReadyReq;

# define Rte_TypeDef_SGW_ChargeFormSet_4
typedef uint8 SGW_ChargeFormSet_4;

# define Rte_TypeDef_SGW_DschrgOnOffSet
typedef uint8 SGW_DschrgOnOffSet;

# define Rte_TypeDef_SGW_LockACPlug
typedef uint8 SGW_LockACPlug;

# define Rte_TypeDef_SGW_RemoteHVCtrlReq_1
typedef uint8 SGW_RemoteHVCtrlReq_1;

# define Rte_TypeDef_SGW_TimeInfoDay_1
typedef uint8 SGW_TimeInfoDay_1;

# define Rte_TypeDef_SGW_TimeInfoHour_1
typedef uint8 SGW_TimeInfoHour_1;

# define Rte_TypeDef_SGW_TimeInfoMinute_1
typedef uint8 SGW_TimeInfoMinute_1;

# define Rte_TypeDef_SGW_TimeInfoMonth_1
typedef uint8 SGW_TimeInfoMonth_1;

# define Rte_TypeDef_SGW_TimeInfoSecond_1
typedef uint8 SGW_TimeInfoSecond_1;

# define Rte_TypeDef_SGW_TimeInfoYear_1
typedef uint8 SGW_TimeInfoYear_1;

# define Rte_TypeDef_SGW_TimeValid
typedef boolean SGW_TimeValid;

# define Rte_TypeDef_SGW_TimingChargeSwitchStatus
typedef uint8 SGW_TimingChargeSwitchStatus;

# define Rte_TypeDef_SGW_TripCounter_3
typedef uint32 SGW_TripCounter_3;

# define Rte_TypeDef_SOCWU_Ena_LIN01
typedef boolean SOCWU_Ena_LIN01;

# define Rte_TypeDef_SOCWU_Treshold_LIN01
typedef uint8 SOCWU_Treshold_LIN01;

# define Rte_TypeDef_SOC_LIN01
typedef uint8 SOC_LIN01;

# define Rte_TypeDef_SOF_V1_LIN01
typedef uint8 SOF_V1_LIN01;

# define Rte_TypeDef_SOF_V2_LIN01
typedef uint8 SOF_V2_LIN01;

# define Rte_TypeDef_SOH_LIN01
typedef uint8 SOH_LIN01;

# define Rte_TypeDef_TCU_HVCHHVDCCurrent_1
typedef uint8 TCU_HVCHHVDCCurrent_1;

# define Rte_TypeDef_TCU_HVCHHighVoltage_1
typedef uint16 TCU_HVCHHighVoltage_1;

# define Rte_TypeDef_TCU_HVPwrState_1
typedef uint8 TCU_HVPwrState_1;

# define Rte_TypeDef_TCU_TMSFaultLevel_1
typedef uint8 TCU_TMSFaultLevel_1;

# define Rte_TypeDef_TCU_TMSTotalPwrCnsmp
typedef uint8 TCU_TMSTotalPwrCnsmp;

# define Rte_TypeDef_TCU_TMSTotoalPwrReq_1
typedef uint8 TCU_TMSTotoalPwrReq_1;

# define Rte_TypeDef_T_BATT_LIN01
typedef uint8 T_BATT_LIN01;

# define Rte_TypeDef_U_BATT_LIN01
typedef uint16 U_BATT_LIN01;

# define Rte_TypeDef_VCU_ACU_DriverWarningLampSts_LIN
typedef uint8 VCU_ACU_DriverWarningLampSts_LIN;

# define Rte_TypeDef_VCU_ACU_PassengerAirbagSts_LIN
typedef uint8 VCU_ACU_PassengerAirbagSts_LIN;

# define Rte_TypeDef_VCU_ACU_PassengerWarningLampSts_LIN
typedef uint8 VCU_ACU_PassengerWarningLampSts_LIN;

# define Rte_TypeDef_VCU_ACU_WarningLampSts_LIN
typedef uint8 VCU_ACU_WarningLampSts_LIN;

# define Rte_TypeDef_VCU_ADASOverride
typedef boolean VCU_ADASOverride;

# define Rte_TypeDef_VCU_APSTorqueRequestActive
typedef boolean VCU_APSTorqueRequestActive;

# define Rte_TypeDef_VCU_APSTorqueRequestAvailable
typedef boolean VCU_APSTorqueRequestAvailable;

# define Rte_TypeDef_VCU_AccelerationPedalValid
typedef boolean VCU_AccelerationPedalValid;

# define Rte_TypeDef_VCU_AccelerationPedal_2
typedef uint16 VCU_AccelerationPedal_2;

# define Rte_TypeDef_VCU_ActDriveMode
typedef uint8 VCU_ActDriveMode;

# define Rte_TypeDef_VCU_ActualGear
typedef uint8 VCU_ActualGear;

# define Rte_TypeDef_VCU_BCM_FLSeatBeltRemindReq_LIN
typedef uint8 VCU_BCM_FLSeatBeltRemindReq_LIN;

# define Rte_TypeDef_VCU_BCM_FRSeatBeltRemindReq_LIN
typedef uint8 VCU_BCM_FRSeatBeltRemindReq_LIN;

# define Rte_TypeDef_VCU_BCM_RLSeatBeltRemindReq_LIN
typedef uint8 VCU_BCM_RLSeatBeltRemindReq_LIN;

# define Rte_TypeDef_VCU_BCM_RRSeatBeltRemindReq_LIN
typedef uint8 VCU_BCM_RRSeatBeltRemindReq_LIN;

# define Rte_TypeDef_VCU_BMSTargetThermLevel
typedef uint8 VCU_BMSTargetThermLevel;

# define Rte_TypeDef_VCU_BMS_Control_of_PosRelay
typedef uint8 VCU_BMS_Control_of_PosRelay;

# define Rte_TypeDef_VCU_BS_Current_1
typedef uint16 VCU_BS_Current_1;

# define Rte_TypeDef_VCU_BS_HCurrent_1
typedef sint16 VCU_BS_HCurrent_1;

# define Rte_TypeDef_VCU_BS_IBSBatSOC_3
typedef uint8 VCU_BS_IBSBatSOC_3;

# define Rte_TypeDef_VCU_BS_IndicatorLightSts_LIN
typedef boolean VCU_BS_IndicatorLightSts_LIN;

# define Rte_TypeDef_VCU_BS_IndicatorSts
typedef boolean VCU_BS_IndicatorSts;

# define Rte_TypeDef_VCU_BS_LV_Batt_3
typedef uint16 VCU_BS_LV_Batt_3;

# define Rte_TypeDef_VCU_BS_QuiescentCurrent_1
typedef uint8 VCU_BS_QuiescentCurrent_1;

# define Rte_TypeDef_VCU_BattNomC20_LIN
typedef uint8 VCU_BattNomC20_LIN;

# define Rte_TypeDef_VCU_BattType_LIN
typedef uint8 VCU_BattType_LIN;

# define Rte_TypeDef_VCU_Batt_U0_Max_LIN
typedef uint8 VCU_Batt_U0_Max_LIN;

# define Rte_TypeDef_VCU_Batt_U0_Min_LIN
typedef uint8 VCU_Batt_U0_Min_LIN;

# define Rte_TypeDef_VCU_BrakeCompensateStatus_1
typedef uint8 VCU_BrakeCompensateStatus_1;

# define Rte_TypeDef_VCU_BrakeCompensateWarn
typedef uint8 VCU_BrakeCompensateWarn;

# define Rte_TypeDef_VCU_BrakepedalStatus
typedef uint8 VCU_BrakepedalStatus;

# define Rte_TypeDef_VCU_CGW_VehicleState_LIN
typedef uint8 VCU_CGW_VehicleState_LIN;

# define Rte_TypeDef_VCU_ChargeEndReason_1
typedef uint8 VCU_ChargeEndReason_1;

# define Rte_TypeDef_VCU_ChargeEnergy_1
typedef uint16 VCU_ChargeEnergy_1;

# define Rte_TypeDef_VCU_ChargeProcessComment_1
typedef uint8 VCU_ChargeProcessComment_1;

# define Rte_TypeDef_VCU_ChargeTime_1
typedef uint16 VCU_ChargeTime_1;

# define Rte_TypeDef_VCU_Chargestatus
typedef uint8 VCU_Chargestatus;

# define Rte_TypeDef_VCU_CreepTorque_1
typedef uint16 VCU_CreepTorque_1;

# define Rte_TypeDef_VCU_CriSysFailure
typedef uint8 VCU_CriSysFailure;

# define Rte_TypeDef_VCU_DCDCFail_6
typedef boolean VCU_DCDCFail_6;

# define Rte_TypeDef_VCU_DCDCFail_LIN_LIN
typedef boolean VCU_DCDCFail_LIN_LIN;

# define Rte_TypeDef_VCU_DCDCPowerLimit_1
typedef uint8 VCU_DCDCPowerLimit_1;

# define Rte_TypeDef_VCU_DCFCCurrent_1
typedef uint16 VCU_DCFCCurrent_1;

# define Rte_TypeDef_VCU_DCM_FL_DoorFLSts_LIN
typedef boolean VCU_DCM_FL_DoorFLSts_LIN;

# define Rte_TypeDef_VCU_DCM_FR_DoorFRSts_LIN
typedef boolean VCU_DCM_FR_DoorFRSts_LIN;

# define Rte_TypeDef_VCU_DCM_RL_DoorRLSts_LIN
typedef boolean VCU_DCM_RL_DoorRLSts_LIN;

# define Rte_TypeDef_VCU_DCM_RR_DoorRRSts_LIN
typedef boolean VCU_DCM_RR_DoorRRSts_LIN;

# define Rte_TypeDef_VCU_DecelerationReq_1
typedef uint8 VCU_DecelerationReq_1;

# define Rte_TypeDef_VCU_DecelerationReqactive
typedef boolean VCU_DecelerationReqactive;

# define Rte_TypeDef_VCU_DisChgPowerLimit_1
typedef uint8 VCU_DisChgPowerLimit_1;

# define Rte_TypeDef_VCU_DischargeEndReason_1
typedef uint8 VCU_DischargeEndReason_1;

# define Rte_TypeDef_VCU_DischargeEndSoc_2
typedef uint8 VCU_DischargeEndSoc_2;

# define Rte_TypeDef_VCU_DisplayMileage_1
typedef uint16 VCU_DisplayMileage_1;

# define Rte_TypeDef_VCU_Display_Cur_2
typedef uint16 VCU_Display_Cur_2;

# define Rte_TypeDef_VCU_Display_Power_2
typedef uint16 VCU_Display_Power_2;

# define Rte_TypeDef_VCU_Display_voltage_5
typedef uint16 VCU_Display_voltage_5;

# define Rte_TypeDef_VCU_DriveMotOvrTemp
typedef boolean VCU_DriveMotOvrTemp;

# define Rte_TypeDef_VCU_DriveMotOvrTemp_LIN_LIN
typedef boolean VCU_DriveMotOvrTemp_LIN_LIN;

# define Rte_TypeDef_VCU_DriverTorqueRequest_1
typedef uint16 VCU_DriverTorqueRequest_1;

# define Rte_TypeDef_VCU_DrvModSwitchWarn
typedef uint8 VCU_DrvModSwitchWarn;

# define Rte_TypeDef_VCU_EPBReq
typedef uint8 VCU_EPBReq;

# define Rte_TypeDef_VCU_EnableOBC_3
typedef uint8 VCU_EnableOBC_3;

# define Rte_TypeDef_VCU_Enable_DC_Relay_3
typedef boolean VCU_Enable_DC_Relay_3;

# define Rte_TypeDef_VCU_EnergyManagementWarn_1
typedef uint8 VCU_EnergyManagementWarn_1;

# define Rte_TypeDef_VCU_EnergyV2L_1
typedef uint16 VCU_EnergyV2L_1;

# define Rte_TypeDef_VCU_ForwardVmaxAllowed
typedef uint8 VCU_ForwardVmaxAllowed;

# define Rte_TypeDef_VCU_ForwardVmaxlimitStatus_4
typedef boolean VCU_ForwardVmaxlimitStatus_4;

# define Rte_TypeDef_VCU_HVBatCriFail
typedef uint8 VCU_HVBatCriFail;

# define Rte_TypeDef_VCU_HVBatCriFail_LIN_LIN
typedef uint8 VCU_HVBatCriFail_LIN_LIN;

# define Rte_TypeDef_VCU_HVBatOvrTemp_5
typedef boolean VCU_HVBatOvrTemp_5;

# define Rte_TypeDef_VCU_HVBatOvrTemp_LIN_LIN
typedef boolean VCU_HVBatOvrTemp_LIN_LIN;

# define Rte_TypeDef_VCU_HVConnectFault_1
typedef boolean VCU_HVConnectFault_1;

# define Rte_TypeDef_VCU_HVILError
typedef boolean VCU_HVILError;

# define Rte_TypeDef_VCU_HVInsulResFault
typedef boolean VCU_HVInsulResFault;

# define Rte_TypeDef_VCU_HVStatus
typedef uint8 VCU_HVStatus;

# define Rte_TypeDef_VCU_HstTempDataRqTrg_LIN
typedef boolean VCU_HstTempDataRqTrg_LIN;

# define Rte_TypeDef_VCU_IBSClrDiagInf_LIN
typedef boolean VCU_IBSClrDiagInf_LIN;

# define Rte_TypeDef_VCU_IBS_BrakeFluidWarning_LIN
typedef uint8 VCU_IBS_BrakeFluidWarning_LIN;

# define Rte_TypeDef_VCU_IBS_EBDFault_LIN
typedef boolean VCU_IBS_EBDFault_LIN;

# define Rte_TypeDef_VCU_IBS_RollerbenchMode_LIN
typedef boolean VCU_IBS_RollerbenchMode_LIN;

# define Rte_TypeDef_VCU_IBS_SystemStatus_LIN
typedef uint8 VCU_IBS_SystemStatus_LIN;

# define Rte_TypeDef_VCU_IVI_BulbCheckStsLIN01
typedef boolean VCU_IVI_BulbCheckStsLIN01;

# define Rte_TypeDef_VCU_IVI_VrState_LIN
typedef boolean VCU_IVI_VrState_LIN;

# define Rte_TypeDef_VCU_InvldGearSel
typedef uint8 VCU_InvldGearSel;

# define Rte_TypeDef_VCU_IsoMeasurementSwitch_3
typedef boolean VCU_IsoMeasurementSwitch_3;

# define Rte_TypeDef_VCU_KL15eOn
typedef boolean VCU_KL15eOn;

# define Rte_TypeDef_VCU_Kickdown
typedef boolean VCU_Kickdown;

# define Rte_TypeDef_VCU_LimitLevel
typedef uint8 VCU_LimitLevel;

# define Rte_TypeDef_VCU_LimpHome
typedef boolean VCU_LimpHome;

# define Rte_TypeDef_VCU_MCUActHeatPwr_2
typedef uint8 VCU_MCUActHeatPwr_2;

# define Rte_TypeDef_VCU_MCUDesiredTorque_5
typedef uint16 VCU_MCUDesiredTorque_5;

# define Rte_TypeDef_VCU_MCUPower_1
typedef uint16 VCU_MCUPower_1;

# define Rte_TypeDef_VCU_MCUSurgeDamperState
typedef uint8 VCU_MCUSurgeDamperState;

# define Rte_TypeDef_VCU_MCU_FaultLampReq
typedef uint8 VCU_MCU_FaultLampReq;

# define Rte_TypeDef_VCU_ManuallyUnlockComment_3
typedef boolean VCU_ManuallyUnlockComment_3;

# define Rte_TypeDef_VCU_MaxSpdLimit_2
typedef uint16 VCU_MaxSpdLimit_2;

# define Rte_TypeDef_VCU_MaxTorqueGradient_3
typedef uint16 VCU_MaxTorqueGradient_3;

# define Rte_TypeDef_VCU_MaxTorqueLimit_3
typedef uint16 VCU_MaxTorqueLimit_3;

# define Rte_TypeDef_VCU_MaximumOutputCurrent_1
typedef uint16 VCU_MaximumOutputCurrent_1;

# define Rte_TypeDef_VCU_MaximumOutputVoltage_1
typedef uint16 VCU_MaximumOutputVoltage_1;

# define Rte_TypeDef_VCU_MemoryChargeFault_1
typedef boolean VCU_MemoryChargeFault_1;

# define Rte_TypeDef_VCU_MileagelowRemind
typedef boolean VCU_MileagelowRemind;

# define Rte_TypeDef_VCU_MinTorqueLimit_3
typedef uint16 VCU_MinTorqueLimit_3;

# define Rte_TypeDef_VCU_MinimumOutputCurrent_1
typedef uint16 VCU_MinimumOutputCurrent_1;

# define Rte_TypeDef_VCU_MinimumOutputVoltage_1
typedef uint16 VCU_MinimumOutputVoltage_1;

# define Rte_TypeDef_VCU_MotorActualTorqueValid
typedef boolean VCU_MotorActualTorqueValid;

# define Rte_TypeDef_VCU_MotorActualTorque_1
typedef uint16 VCU_MotorActualTorque_1;

# define Rte_TypeDef_VCU_MotorSpdReq_2
typedef uint16 VCU_MotorSpdReq_2;

# define Rte_TypeDef_VCU_OBC_ChargeCurrentCommand_3
typedef uint16 VCU_OBC_ChargeCurrentCommand_3;

# define Rte_TypeDef_VCU_OBC_Control_of_S2_SW_3
typedef boolean VCU_OBC_Control_of_S2_SW_3;

# define Rte_TypeDef_VCU_OBC_Control_of_em_lock_3
typedef boolean VCU_OBC_Control_of_em_lock_3;

# define Rte_TypeDef_VCU_OPStandstillReq
typedef uint8 VCU_OPStandstillReq;

# define Rte_TypeDef_VCU_PWTErrorLevel
typedef uint8 VCU_PWTErrorLevel;

# define Rte_TypeDef_VCU_PermitPackPTC_1
typedef boolean VCU_PermitPackPTC_1;

# define Rte_TypeDef_VCU_PlugStatus
typedef uint8 VCU_PlugStatus;

# define Rte_TypeDef_VCU_ReachLimitStd
typedef boolean VCU_ReachLimitStd;

# define Rte_TypeDef_VCU_RegStatus
typedef uint8 VCU_RegStatus;

# define Rte_TypeDef_VCU_RegenBrakeLightReqVld
typedef boolean VCU_RegenBrakeLightReqVld;

# define Rte_TypeDef_VCU_RegenBrakeLightRequest
typedef boolean VCU_RegenBrakeLightRequest;

# define Rte_TypeDef_VCU_RegenTorqueCapValid
typedef boolean VCU_RegenTorqueCapValid;

# define Rte_TypeDef_VCU_RegenTorqueCap_1
typedef uint16 VCU_RegenTorqueCap_1;

# define Rte_TypeDef_VCU_RemainChrgTime_1
typedef uint16 VCU_RemainChrgTime_1;

# define Rte_TypeDef_VCU_RequestedModeBMS
typedef uint8 VCU_RequestedModeBMS;

# define Rte_TypeDef_VCU_RequestedModeDCDC_1
typedef uint8 VCU_RequestedModeDCDC_1;

# define Rte_TypeDef_VCU_RequestedModeMCU
typedef uint8 VCU_RequestedModeMCU;

# define Rte_TypeDef_VCU_RequestedModeTCU_1
typedef uint8 VCU_RequestedModeTCU_1;

# define Rte_TypeDef_VCU_SpdLimitActTorque_1
typedef uint16 VCU_SpdLimitActTorque_1;

# define Rte_TypeDef_VCU_SynRequest_1
typedef uint32 VCU_SynRequest_1;

# define Rte_TypeDef_VCU_SystemReady
typedef boolean VCU_SystemReady;

# define Rte_TypeDef_VCU_TCSActive
typedef boolean VCU_TCSActive;

# define Rte_TypeDef_VCU_TCUPowerAllowed_1
typedef uint16 VCU_TCUPowerAllowed_1;

# define Rte_TypeDef_VCU_TargetGear
typedef uint8 VCU_TargetGear;

# define Rte_TypeDef_VCU_TorqueRequestActive
typedef boolean VCU_TorqueRequestActive;

# define Rte_TypeDef_VCU_TorqueRequestAvailable
typedef boolean VCU_TorqueRequestAvailable;

# define Rte_TypeDef_VCU_TrqThresholdDampgCtl_5
typedef uint8 VCU_TrqThresholdDampgCtl_5;

# define Rte_TypeDef_VCU_VLCTorqueRequestActive
typedef boolean VCU_VLCTorqueRequestActive;

# define Rte_TypeDef_VCU_VLCTorqueRequestAvailable
typedef boolean VCU_VLCTorqueRequestAvailable;

# define Rte_TypeDef_VCU_VehicleSpeed
typedef uint16 VCU_VehicleSpeed;

# define Rte_TypeDef_VCU_VehicleSpeedValid
typedef boolean VCU_VehicleSpeedValid;

# define Rte_TypeDef_VCU_VehicleSpeed_2
typedef uint16 VCU_VehicleSpeed_2;

# define Rte_TypeDef_VCU_VirtualACPedalValid
typedef boolean VCU_VirtualACPedalValid;

# define Rte_TypeDef_VCU_VirtualACPedal_1
typedef uint16 VCU_VirtualACPedal_1;

# define Rte_TypeDef_VCU_VoltageDemandLV_1
typedef uint16 VCU_VoltageDemandLV_1;

# define Rte_TypeDef_VCU_WakeUpStatus_1
typedef uint8 VCU_WakeUpStatus_1;

# define Rte_TypeDef_VCU_WheelTrqACTValid
typedef boolean VCU_WheelTrqACTValid;

# define Rte_TypeDef_VCU_WheelTrqACT_1
typedef uint16 VCU_WheelTrqACT_1;

# define Rte_TypeDef_VCU_maxChargeSOC
typedef uint8 VCU_maxChargeSOC;

# define Rte_TypeDef_checksum_275
typedef uint8 checksum_275;

# define Rte_TypeDef_BRM_VehicleIdByte1_8
typedef uint8 BRM_VehicleIdByte1_8[8];

# define Rte_TypeDef_BRM_VehicleIdByte9_16
typedef uint8 BRM_VehicleIdByte9_16[8];

# define Rte_TypeDef_DataArrayType_uint8_1
typedef uint8 DataArrayType_uint8_1[1];

# define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

# define Rte_TypeDef_DataArrayType_uint8_3
typedef uint8 DataArrayType_uint8_3[3];

# define Rte_TypeDef_Dcm_Data16ByteType
typedef uint8 Dcm_Data16ByteType[16];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data27ByteType
typedef uint8 Dcm_Data27ByteType[27];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

# define Rte_TypeDef_Dcm_Data5ByteType
typedef uint8 Dcm_Data5ByteType[5];

# define Rte_TypeDef_Dcm_Data6ByteType
typedef uint8 Dcm_Data6ByteType[6];

# define Rte_TypeDef_Dcm_Data9ByteType
typedef uint8 Dcm_Data9ByteType[9];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[8];

# define Rte_TypeDef_dt_RngEstimn_BattCurrIntegral2kmArrayInfo
typedef Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0 dt_RngEstimn_BattCurrIntegral2kmArrayInfo[25];

# define Rte_TypeDef_SG_ACU_01_SigGroup
typedef struct
{
  ACU_YawRate_1 ACU_YawRate;
  ACU_YawRateStatus ACU_YawRateStatus;
  Checksum_0F5_1 Checksum_0F5;
  MessageCounter_0F5_1 MessageCounter_0F5;
} SG_ACU_01_SigGroup;

# define Rte_TypeDef_SG_ACU_02_SigGroup
typedef struct
{
  ACU_LatA_1 ACU_LatA;
  ACU_LatAStatus ACU_LatAStatus;
  ACU_LgtA_1 ACU_LgtA;
  ACU_LgtAStatus ACU_LgtAStatus;
  Checksum_0F6_1 Checksum_0F6;
  MessageCounter_0F6_1 MessageCounter_0F6;
} SG_ACU_02_SigGroup;

# define Rte_TypeDef_SG_ACU_Info_SigGroup
typedef struct
{
  ACU_CrashOutputSts ACU_CrashOutputSts;
  ACU_CrashOutputStsValid ACU_CrashOutputStsValid;
  ACU_DriverWarningLampSts ACU_DriverWarningLampSts;
  ACU_PassengerAirbagSts ACU_PassengerAirbagSts;
  ACU_PassengerWarningLampSts ACU_PassengerWarningLampSts;
  MessageCounter_109 MessageCounter_097;
  Checksum_105 Checksum_097;
  ACU_DriverSeatBeltSts ACU_DriverSeatBeltSts;
  ACU_DriverSeatBeltStsValid ACU_DriverSeatBeltStsValid;
  ACU_PassengerSeatBeltSts ACU_PassengerSeatBeltSts;
  ACU_PassengerSeatBeltStsValid ACU_PassengerSeatBeltStsValid;
  ACU_PassengerSts ACU_PassengerSts;
  ACU_RLSeatBeltStatusValid ACU_RLSeatBeltStatusValid;
  ACU_RRSeatBeltStatusValid ACU_RRSeatBeltStatusValid;
  ACU_SecondLeftSeatBeltSts ACU_SecondLeftSeatBeltSts;
  ACU_SecondLeftSts ACU_SecondLeftSts;
  ACU_SecondRightSeatBeltSts ACU_SecondRightSeatBeltSts;
  ACU_SecondRightSts ACU_SecondRightSts;
  ACU_WarningLampSts ACU_WarningLampSts;
} SG_ACU_Info_SigGroup;

# define Rte_TypeDef_SG_ADCU_ACC_02_SigGroup
typedef struct
{
  ADCU_ACC_Mode ADCU_ACC_Mode;
  Checksum_0E0_2 Checksum_0E0;
  MessageCounter_0E0 MessageCounter_0E0;
  ADCU_ACCDA_HandsOFF_Warning ADCU_ACCDA_HandsOFF_Warning;
  ADCU_ACCDA_SYS_Failure ADCU_ACCDA_SYS_Failure;
} SG_ADCU_ACC_02_SigGroup;

# define Rte_TypeDef_SG_ADCU_AEB_01_SigGroup
typedef struct
{
  ADCU_AEB_State ADCU_AEB_State;
  Checksum_0E2_3 Checksum_0E2;
  MessageCounter_0E2 MessageCounter_0E2;
  ADCU_AEB_AWB_Level ADCU_AEB_AWB_Level;
  ADCU_AEB_AWB_Req ADCU_AEB_AWB_Req;
  ADCU_AEB_Decel_Cmd_1 ADCU_AEB_Decel_Cmd;
  ADCU_AEB_Prefill_CMD ADCU_AEB_Prefill_CMD;
  ADCU_AEB_Stop_Req ADCU_AEB_Stop_Req;
  ADCU_AEBReq ADCU_AEBReq;
  ADCU_AEBWarningSts ADCU_AEBWarningSts;
  ADCU_FCW_State ADCU_FCW_State;
} SG_ADCU_AEB_01_SigGroup;

# define Rte_TypeDef_SG_ADCU_APS_01_SigGroup
typedef struct
{
  Checksum_0E4_3 Checksum_0E4;
  MessageCounter_0E4_4 MessageCounter_0E4;
  ADCU_Parking_Mode ADCU_Parking_Mode;
  ADCU_APS_Stop_Req ADCU_APS_Stop_Req;
  ADCU_APSComfBrkReq ADCU_APSComfBrkReq;
  ADCU_APSCrlModeReq ADCU_APSCrlModeReq;
  ADCU_APSCrlReq ADCU_APSCrlReq;
  ADCU_APSCrlTypReq ADCU_APSCrlTypReq;
  ADCU_APSDistanceStop ADCU_APSDistanceStop;
  ADCU_APSMaxSpeedReq ADCU_APSMaxSpeedReq;
  ADCU_Parking_CtrlSts ADCU_Parking_CtrlSts;
  ADCU_TargetGear ADCU_TargetGear;
} SG_ADCU_APS_01_SigGroup;

# define Rte_TypeDef_SG_ADCU_APS_02_SigGroup
typedef struct
{
  ADCU_RemoteParkingMode ADCU_RemoteParkingMode;
} SG_ADCU_APS_02_SigGroup;

# define Rte_TypeDef_SG_ADCU_DA_SigGroup
typedef struct
{
  ADCU_DA_Mode ADCU_DA_Mode;
  Checksum_0E6_1 Checksum_0E6;
  MessageCounter_0E6 MessageCounter_0E6;
} SG_ADCU_DA_SigGroup;

# define Rte_TypeDef_SG_APTC_TCU_SigGroup
typedef struct
{
  APTC_PowerConsumption_1 APTC_PowerConsumption;
} SG_APTC_TCU_SigGroup;

# define Rte_TypeDef_SG_BCM_05_SigGroup
typedef struct
{
  BCM_FLSeatBeltRemindReq BCM_FLSeatBeltRemindReq;
  BCM_FRSeatBeltRemindReq BCM_FRSeatBeltRemindReq;
  BCM_RLSeatBeltRemindReq BCM_RLSeatBeltRemindReq;
  BCM_RRSeatBeltRemindReq BCM_RRSeatBeltRemindReq;
  Checksum_33A_2 Checksum_33A;
  MessageCounter_33A MessageCounter_33A;
  BCM_AutoCloseWinFunSts BCM_AutoCloseWinFunSts;
  BCM_ChrgFlapLockSts BCM_ChrgFlapLockSts;
  BCM_DomeLampAutoSts BCM_DomeLampAutoSts;
  BCM_DomeLampBrightSts BCM_DomeLampBrightSts;
  BCM_FrontWiperModeSts BCM_FrontWiperModeSts;
  BCM_GearTimesSts BCM_GearTimesSts;
  BCM_KeyNotInCarRemind BCM_KeyNotInCarRemind;
  BCM_PuddleLiReq BCM_PuddleLiReq;
  BCM_WelLightshowOnOffSts BCM_WelLightshowOnOffSts;
  BCM_WiperServiceSts BCM_WiperServiceSts;
  BCM_WiperWorkingSts BCM_WiperWorkingSts;
} SG_BCM_05_SigGroup;

# define Rte_TypeDef_SG_BCM_06_SigGroup
typedef struct
{
  BCM_PepsPowerMode BCM_PepsPowerMode;
  checksum_275 checksum_271;
  MessageCounter_275 MessageCounter_271;
  BCM_PowerOffDisplayReq BCM_PowerOffDisplayReq;
} SG_BCM_06_SigGroup;

# define Rte_TypeDef_SG_BMS_BatInfor_01_SigGroup
typedef struct
{
  BMS_BatType_1 BMS_BatType;
  BMS_CellNumbers BMS_CellNumbers;
  BMS_RatBatVoltage_1 BMS_RatBatVoltage;
  BMS_RatCapacity_1 BMS_RatCapacity;
  BMS_RatEnergy_1 BMS_RatEnergy;
} SG_BMS_BatInfor_01_SigGroup;

# define Rte_TypeDef_SG_BMS_BatInfor_03_SigGroup
typedef struct
{
  BMS_RemainCapacity_1 BMS_RemainCapacity;
} SG_BMS_BatInfor_03_SigGroup;

# define Rte_TypeDef_SG_BMS_CellTemp_SigGroup
typedef struct
{
  BMS_AverageCellTemp_2 BMS_AverageCellTemp;
  BMS_MaxCellTemp_3 BMS_MaxCellTemp;
  BMS_MaxCellTempNO_3 BMS_MaxCellTempNO;
  BMS_MinCellTemp_3 BMS_MinCellTemp;
  BMS_MinCellTempNO_3 BMS_MinCellTempNO;
  BMS_MinCellTempModuleNO BMS_MinCellTempModuleNO;
} SG_BMS_CellTemp_SigGroup;

# define Rte_TypeDef_SG_BMS_CellVoltage_SigGroup
typedef struct
{
  BMS_MaxCellVoltage_3 BMS_MaxCellVoltage;
  BMS_MaxCellVoltageModuleNO_3 BMS_MaxCellVoltageModuleNO;
  BMS_MaxCellVoltageNO_3 BMS_MaxCellVoltageNO;
  BMS_MinCellVoltage_1 BMS_MinCellVoltage;
} SG_BMS_CellVoltage_SigGroup;

# define Rte_TypeDef_SG_BMS_Charge_01_SigGroup
typedef struct
{
  BMS_AllowChagCurrent_1 BMS_AllowChagCurrent;
  BMS_MaxChagVoltage_1 BMS_MaxChagVoltage;
  BMS_RemChagTime_1 BMS_RemChagTime;
} SG_BMS_Charge_01_SigGroup;

# define Rte_TypeDef_SG_BMS_Charge_02_SigGroup
typedef struct
{
  BMS_AbortAchivesetValue_2 BMS_AbortAchivesetValue;
  BMS_AbortAchiveSingleVolt_2 BMS_AbortAchiveSingleVolt;
  BMS_AbortAchiveTotalVolt_2 BMS_AbortAchiveTotalVolt;
  BMS_AbortErrorCurrent_2 BMS_AbortErrorCurrent;
  BMS_AbortErrorVoltage_2 BMS_AbortErrorVoltage;
  BMS_AbortFaultBatteryTemp_2 BMS_AbortFaultBatteryTemp;
  BMS_AbortFaultBMSTemp_2 BMS_AbortFaultBMSTemp;
  BMS_ChagComplete_2 BMS_ChagComplete;
  BMS_ChargeRequest_2 BMS_ChargeRequest;
  BMS_DCChgMode_2 BMS_DCChgMode;
} SG_BMS_Charge_02_SigGroup;

# define Rte_TypeDef_SG_BMS_Charge_03_SigGroup
typedef struct
{
  BMS_BatChagSum_2 BMS_BatChagSum;
  BMS_SingChgkwh_1 BMS_SingChgkwh;
  BMS_SumChgkwh_1 BMS_SumChgkwh;
} SG_BMS_Charge_03_SigGroup;

# define Rte_TypeDef_SG_BMS_DIRelayState_SigGroup
typedef struct
{
  BMS_NegRelayStatus_3 BMS_NegRelayStatus;
  BMS_PosRelayStatus_3 BMS_PosRelayStatus;
  BMS_PreRelayStatus BMS_PreRelayStatus;
  BMS_PTC_VoltageValue_3 BMS_PTC_VoltageValue;
  BMS_PTCRelayStatus BMS_PTCRelayStatus;
} SG_BMS_DIRelayState_SigGroup;

# define Rte_TypeDef_SG_BMS_ErrorInfo_SigGroup
typedef struct
{
  BMS_ErrorCellHighTemp_1 BMS_ErrorCellHighTemp;
  BMS_ErrorCellLowTemp_1 BMS_ErrorCellLowTemp;
  BMS_ErrorCellOverVolt_1 BMS_ErrorCellOverVolt;
  BMS_ErrorCellUnderVolt_1 BMS_ErrorCellUnderVolt;
  BMS_ErrorChaCurrentOver_1 BMS_ErrorChaCurrentOver;
  BMS_ErrorHighSoc_1 BMS_ErrorHighSoc;
  BMS_ErrorLowSoc_1 BMS_ErrorLowSoc;
  BMS_ErrorPreChaFailed BMS_ErrorPreChaFailed;
  BMS_ErrorRelay_1 BMS_ErrorRelay;
  BMS_ThermalRunawayFault BMS_ThermalRunawayFault;
} SG_BMS_ErrorInfo_SigGroup;

# define Rte_TypeDef_SG_BMS_PRO_SigGroup
typedef struct
{
  BMS_BatProDatDay_1 BMS_BatProDatDay;
  BMS_BatProDatMonth_1 BMS_BatProDatMonth;
  BMS_BatProDatYear_1 BMS_BatProDatYear;
} SG_BMS_PRO_SigGroup;

# define Rte_TypeDef_SG_BMS_TCU_SigGroup
typedef struct
{
  BMS_AllowCellTemperature_1 BMS_AllowCellTemperature;
  BMS_KeepWarmRequest_1 BMS_KeepWarmRequest;
  BMS_KeepWarmStatus_1 BMS_KeepWarmStatus;
  BMS_RTC_Request_1 BMS_RTC_Request;
} SG_BMS_TCU_SigGroup;

# define Rte_TypeDef_SG_BMS_VersionInfor_SigGroup
typedef struct
{
  BMS_BatProRights_1 BMS_BatProRights;
  BMS_ComVersion BMS_ComVersion;
} SG_BMS_VersionInfor_SigGroup;

# define Rte_TypeDef_SG_BMS_status_01_SigGroup
typedef struct
{
  BMS_ChargeStatus BMS_ChargeStatus;
  BMS_ErrorIsolationSingleLow BMS_ErrorIsolationSingleLow;
  BMS_ErrorLevel BMS_ErrorLevel;
  BMS_HVinterlockState BMS_HVinterlockState;
  BMS_InsulationDetectionStatus BMS_InsulationDetectionStatus;
  BMS_PreCharge BMS_PreCharge;
  BMS_SOH_2 BMS_SOH;
  BMS_SysRegInsulationValue_2 BMS_SysRegInsulationValue;
  BMS_ThrmlRunawayFault BMS_ThrmlRunawayFault;
  BMS_WorkMode BMS_WorkMode;
  Checksum_0C1_2 Checksum_0C1;
  MessageCounter_0C1_2 MessageCounter_0C1;
  BMS_BalancingStatus BMS_BalancingStatus;
  BMS_RunHeatStatus BMS_RunHeatStatus;
} SG_BMS_status_01_SigGroup;

# define Rte_TypeDef_SG_BMS_status_02_SigGroup
typedef struct
{
  BMS_BattCurr_1 BMS_BattCurr;
  BMS_BattVolt_1 BMS_BattVolt;
  BMS_Heatcurrent_1 BMS_Heatcurrent;
} SG_BMS_status_02_SigGroup;

# define Rte_TypeDef_SG_BMS_status_03_SigGroup
typedef struct
{
  BMS_DisplaySOC_1 BMS_DisplaySOC;
  BMS_LinkVoltage_1 BMS_LinkVoltage;
  BMS_PackVoltage_1 BMS_PackVoltage;
} SG_BMS_status_03_SigGroup;

# define Rte_TypeDef_SG_BMS_status_04_SigGroup
typedef struct
{
  BMS_DisChgCurr_4 BMS_DisChgCurr;
  BMS_FeedbackCurr_3 BMS_FeedbackCurr;
} SG_BMS_status_04_SigGroup;

# define Rte_TypeDef_SG_CGW_01_SigGroup
typedef struct
{
  CGW_VehicleState CGW_VehicleState;
  Checksum_280 Checksum_278;
  MessageCounter_280 MessageCounter_278;
} SG_CGW_01_SigGroup;

# define Rte_TypeDef_SG_CGW_02_SigGroup
typedef struct
{
  CGW_ADCUSts CGW_ADCUSts;
  CGW_BCMSts CGW_BCMSts;
  CGW_BMSSts CGW_BMSSts;
  CGW_CBMSts CGW_CBMSts;
  CGW_CGWSts CGW_CGWSts;
  CGW_DCM_FLSts CGW_DCM_FLSts;
  CGW_DCM_FRSts CGW_DCM_FRSts;
  CGW_DCM_RLSts CGW_DCM_RLSts;
  CGW_DCM_RRSts CGW_DCM_RRSts;
  CGW_HLLSts CGW_HLLSts;
  CGW_HLRSts CGW_HLRSts;
  CGW_HOD_HeatingSts CGW_HOD_HeatingSts;
  CGW_IVISts CGW_IVISts;
  CGW_MFP_FCSts CGW_MFP_FCSts;
  CGW_MFP_RCSts CGW_MFP_RCSts;
  CGW_PRNDSts CGW_PRNDSts;
  CGW_SCU_LSts CGW_SCU_LSts;
  CGW_SCU_RSts CGW_SCU_RSts;
  CGW_SGWSts CGW_SGWSts;
  CGW_SwichesSts CGW_SwichesSts;
  CGW_SWPSts CGW_SWPSts;
  CGW_VCUSts CGW_VCUSts;
} SG_CGW_02_SigGroup;

# define Rte_TypeDef_SG_CGW_VIN1_SigGroup
typedef struct
{
  CGW_VIN0_3 CGW_VIN0;
  CGW_VIN1_3 CGW_VIN1;
  CGW_VIN2_3 CGW_VIN2;
  CGW_VIN3_3 CGW_VIN3;
  CGW_VIN4_3 CGW_VIN4;
  CGW_VIN5_3 CGW_VIN5;
  CGW_VIN6_3 CGW_VIN6;
  CGW_VIN7_3 CGW_VIN7;
} SG_CGW_VIN1_SigGroup;

# define Rte_TypeDef_SG_CGW_VIN2_SigGroup
typedef struct
{
  CGW_VIN8_3 CGW_VIN8;
  CGW_VIN9_3 CGW_VIN9;
  CGW_VIN10_3 CGW_VIN10;
  CGW_VIN11_3 CGW_VIN11;
  CGW_VIN12_3 CGW_VIN12;
  CGW_VIN13_3 CGW_VIN13;
  CGW_VIN14_3 CGW_VIN14;
  CGW_VIN15_3 CGW_VIN15;
} SG_CGW_VIN2_SigGroup;

# define Rte_TypeDef_SG_CGW_VIN3VER_SigGroup
typedef struct
{
  CGW_VERSION1_3 CGW_VERSION1;
  CGW_VERSION2_3 CGW_VERSION2;
  CGW_VIN16_3 CGW_VIN16;
} SG_CGW_VIN3VER_SigGroup;

# define Rte_TypeDef_SG_DCM_FL_02_SigGroup
typedef struct
{
  Checksum_28A_2 Checksum_28A;
  DCM_FL_DoorFLSts DCM_FL_DoorFLSts;
  MessageCounter_28A MessageCounter_28A;
  DCM_FL_FRWndSwA DCM_FL_FRWndSwA;
  DCM_FL_LeftMirrorHorizontalPos DCM_FL_LeftMirrorHorizontalPos;
  DCM_FL_LeftMirrorVerticalPos DCM_FL_LeftMirrorVerticalPos;
  DCM_FL_MirrorAutoFoldUnfoldSts DCM_FL_MirrorAutoFoldUnfoldSts;
  DCM_FL_MirrorAutoTurnDownSts DCM_FL_MirrorAutoTurnDownSts;
  DCM_FL_MirrorFold_UnfoldSts DCM_FL_MirrorFold_UnfoldSts;
  DCM_FL_RearmirrorHeatingSts DCM_FL_RearmirrorHeatingSts;
  DCM_FL_RLWndSwA DCM_FL_RLWndSwA;
  DCM_FL_RRWndSwA DCM_FL_RRWndSwA;
} SG_DCM_FL_02_SigGroup;

# define Rte_TypeDef_SG_DCM_FR_02_SigGroup
typedef struct
{
  DCM_FR_AmbientTemperature_1 DCM_FR_AmbientTemperature;
  DCM_FR_AmbientTemperatureValid DCM_FR_AmbientTemperatureValid;
} SG_DCM_FR_02_SigGroup;

# define Rte_TypeDef_SG_DCM_FR_SigGroup
typedef struct
{
  DCM_FR_DoorFRSts DCM_FR_DoorFRSts;
} SG_DCM_FR_SigGroup;

# define Rte_TypeDef_SG_DCM_RL_SigGroup
typedef struct
{
  DCM_RL_DoorRLSts DCM_RL_DoorRLSts;
} SG_DCM_RL_SigGroup;

# define Rte_TypeDef_SG_DCM_RR_SigGroup
typedef struct
{
  DCM_RR_DoorRRSts DCM_RR_DoorRRSts;
} SG_DCM_RR_SigGroup;

# define Rte_TypeDef_SG_EPS_CONV_SigGroup
typedef struct
{
  Checksum_0F0 Checksum_0F0;
  EPS_ModeChangeEnable EPS_ModeChangeEnable;
  EPS_ModeFb EPS_ModeFb;
  EPS_SteeringGearAngle EPS_SteeringGearAngle;
  EPS_SteeringGearAngleSpd EPS_SteeringGearAngleSpd;
  EPS_SteeringGearAngleSpdValid EPS_SteeringGearAngleSpdValid;
  EPS_SteeringGearAngleValid EPS_SteeringGearAngleValid;
  EPS_TorsionBarTorque EPS_TorsionBarTorque;
  EPS_TorsionBarTorqueValid EPS_TorsionBarTorqueValid;
  EPS_WarningLamp EPS_WarningLamp;
  MessageCounter_0F0 MessageCounter_0F0;
} SG_EPS_CONV_SigGroup;

# define Rte_TypeDef_SG_EVCOM_State_01_SigGroup
typedef struct
{
  EVCOM_CompActlCnsmpCur EVCOM_CompActlCnsmpCur;
  EVCOM_CompActlPwrCnsmp_1 EVCOM_CompActlPwrCnsmp;
} SG_EVCOM_State_01_SigGroup;

# define Rte_TypeDef_SG_IBS_ACC_SigGroup
typedef struct
{
  Checksum_0B8_4 Checksum_0B8;
  IBS_CddActive IBS_CddActive;
  IBS_VehicleStandstill IBS_VehicleStandstill;
  IBS_VehicleStandstill_Valid IBS_VehicleStandstill_Valid;
  IBS_VlcActive IBS_VlcActive;
  IBS_WLTorqueVLCReq_4 IBS_WLTorqueVLCReq;
  IBS_WLTorqueVLCReqValid_4 IBS_WLTorqueVLCReqValid;
  MessageCounter_0B8_4 MessageCounter_0B8;
  IBS_CddAvailable IBS_CddAvailable;
  IBS_CddError IBS_CddError;
  IBS_VlcAvalible IBS_VlcAvalible;
  IBS_VlcError IBS_VlcError;
} SG_IBS_ACC_SigGroup;

# define Rte_TypeDef_SG_IBS_APS_SigGroup
typedef struct
{
  IBS_APSTrqReqActive IBS_APSTrqReqActive;
  Checksum_0B7_2 Checksum_0B7;
  MessageCounter_0B7_3 MessageCounter_0B7;
  IBS_APS_Avl IBS_APS_Avl;
  IBS_APSComfortAvl IBS_APSComfortAvl;
  IBS_APSCrlReqEcho IBS_APSCrlReqEcho;
  IBS_APSEmergenyAvl IBS_APSEmergenyAvl;
  IBS_APSModeEcho IBS_APSModeEcho;
  IBS_BrakeTypEcho IBS_BrakeTypEcho;
} SG_IBS_APS_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_01_SigGroup
typedef struct
{
  Checksum_0B2_3 Checksum_0B2;
  IBS_PlungerPressure_3 IBS_PlungerPressure;
  MessageCounter_0B2_3 MessageCounter_0B2;
  IBS_BrakepedalStatus IBS_BrakePedalStatus;
  IBS_BrakepedalStatusValid IBS_BrakePedalStatusValid;
  IBS_BrakePushrodStroke_2 IBS_BrakePushrodStroke;
  IBS_MasterCylinderPressure_2 IBS_MasterCylinderPressure;
} SG_IBS_Status_01_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_02_SigGroup
typedef struct
{
  Checksum_0B3_3 Checksum_0B3;
  IBS_AEBActive IBS_AEBActive;
  IBS_EPBFailureLamp IBS_EPBFailureLamp;
  IBS_EPBFunctionLamp IBS_EPBFunctionLamp;
  IBS_EPBworkingSts IBS_EPBworkingSts;
  IBS_TCSActive IBS_TCSActive;
  IBS_VDCActive IBS_VDCActive;
  MessageCounter_0B3 MessageCounter_0B3;
  IBS_EPBControllerSts IBS_EPBControllerSts;
  IBS_AEBAvailable IBS_AEBAvailable;
  IBS_AVHAvailable IBS_AVHAvailable;
  IBS_AWBActive IBS_AWBActive;
  IBS_AWBAvailable IBS_AWBAvailable;
  IBS_BrakeLightRequest IBS_BrakeLightRequest;
  IBS_HazWarnReq IBS_HazWarnReq;
  IBS_HDCAvailable IBS_HDCAvailable;
  IBS_HHCActive IBS_HHCActive;
  IBS_HHCAvailable IBS_HHCAvailable;
} SG_IBS_Status_02_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_03_SigGroup
typedef struct
{
  Checksum_0B4_1 Checksum_0B4;
  IBS_ABPActive IBS_ABPActive;
  IBS_ABSActive IBS_ABSActive;
  IBS_EBDActive IBS_EBDActive;
  IBS_EBDFault IBS_EBDFault;
  IBS_SystemStatus IBS_SystemStatus;
  IBS_TCSFault IBS_TCSFault;
  IBS_VCU_DecelerationRequest_Available IBS_VCU_DecelerationRequest_Available;
  IBS_VehicleSpeed_2 IBS_VehicleSpeed;
  MessageCounter_0B4 MessageCounter_0B4;
  IBS_DTCfault IBS_DTCFault;
  IBS_VehiclespeedValid IBS_VehicleSpeedValid;
  IBS_ABPAvailable IBS_ABPAvailable;
  IBS_ABSFault IBS_ABSFault;
  IBS_EPBTextdisplay IBS_EPBTextdisplay;
  IBS_VDCFault IBS_VDCFault;
} SG_IBS_Status_03_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_04_SigGroup
typedef struct
{
  Checksum_0BA_2 Checksum_0BA;
  IBS_CDPActive IBS_CDPActive;
  IBS_DTCActive IBS_DTCActive;
  MessageCounter_0BA_2 MessageCounter_0BA;
  IBS_CDPAvailable IBS_CDPAvailable;
} SG_IBS_Status_04_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_05_SigGroup
typedef struct
{
  Checksum_0BB_3 Checksum_0BB;
  IBS_SUBEPBworkingSts IBS_SUBEPBworkingSts;
  MessageCounter_0BB_3 MessageCounter_0BB;
  IBS_SUBEPBControllerSts IBS_SUBEPBControllerSts;
  IBS_SUBEPBFailureStatus IBS_SUBEPBFailureStatus;
} SG_IBS_Status_05_SigGroup;

# define Rte_TypeDef_SG_IBS_Status_06_SigGroup
typedef struct
{
  Checksum_0BC_2 Checksum_0BC;
  IBS_AVHSts IBS_AVHSts;
  IBS_BrakeFluidWarning IBS_BrakeFluidWarning;
  IBS_ESCOffSts IBS_ESCOffSts;
  IBS_HDCSts IBS_HDCSts;
  IBS_RollerbenchMode IBS_RollerbenchMode;
  IBS_RWUActive IBS_RWUActive;
  MessageCounter_0BC MessageCounter_0BC;
  IBS_EPBFailureStatus IBS_EPBFailureStatus;
  IBS_ESClampdisplay IBS_ESClampdisplay;
  IBS_FactoryMode IBS_FactoryMode;
  IBS_HBAActive IBS_HBAActive;
  IBS_MaintenaceMode IBS_MaintenaceMode;
  IBS_RWUAvailable IBS_RWUAvailable;
  IBS_TireMonSysSts IBS_TireMonSysSts;
  IBS_TireWarnFrntLe IBS_TireWarnFrntLe;
  IBS_TireWarnFrntRi IBS_TireWarnFrntRi;
  IBS_TireWarnReLe IBS_TireWarnReLe;
  IBS_TireWarnReRi IBS_TireWarnReRi;
  IBS_TPMS_ResetSts IBS_TPMS_ResetSts;
} SG_IBS_Status_06_SigGroup;

# define Rte_TypeDef_SG_IBS_Torque_SigGroup
typedef struct
{
  Checksum_0B9_2 Checksum_0B9;
  IBS_RBSStatus IBS_RBSStatus;
  IBS_TargetGearReq IBS_TargetGearReq;
  IBS_WLTorqueAPSReq_2 IBS_WLTorqueAPSReq;
  IBS_WLTorqueAPSReqValid IBS_WLTorqueAPSReqValid;
  IBS_WLTorqueRBSReq_2 IBS_WLTorqueRBSReq;
  IBS_WLTorqueRBSReqValid IBS_WLTorqueRBSReqValid;
  MessageCounter_0B9_2 MessageCounter_0B9;
  IBS_VCU_DecelerationReqActive IBS_VCU_DecelerationReqActive;
} SG_IBS_Torque_SigGroup;

# define Rte_TypeDef_SG_IBS_VCU_MotorControl_SigGroup
typedef struct
{
  IBS_WLTorqueIncrReq_2 IBS_WLTorqueIncrReq;
  IBS_WLTorqueIncrReqSts IBS_WLTorqueIncrReqSts;
  IBS_WLTorqueRedReq_2 IBS_WLTorqueRedReq;
  IBS_WLTorqueRedReqSts IBS_WLTorqueRedReqSts;
  Checksum_91 Checksum_090;
  MessageCounter_090 MessageCounter_090;
} SG_IBS_VCU_MotorControl_SigGroup;

# define Rte_TypeDef_SG_IBS_WheelSpeed_01_SigGroup
typedef struct
{
  Checksum_0B0_2 Checksum_0B0;
  IBS_FLMovingDirection IBS_FLMovingDirection;
  IBS_FRMovingDirection IBS_FRMovingDirection;
  MessageCounter_0B0 MessageCounter_0B0;
  IBS_FLWheelPulseCounter_1 IBS_FLWheelPulseCounter;
  IBS_FLWheelSpeed_1 IBS_FLWheelSpeed;
  IBS_FLWheelSpeed_Fault IBS_FLWheelSpeed_Fault;
  IBS_FRWheelPulseCounter_1 IBS_FRWheelPulseCounter;
  IBS_FRWheelSpeed_1 IBS_FRWheelSpeed;
  IBS_FRWheelSpeed_Fault IBS_FRWheelSpeed_Fault;
} SG_IBS_WheelSpeed_01_SigGroup;

# define Rte_TypeDef_SG_IBS_WheelSpeed_02_SigGroup
typedef struct
{
  Checksum_0B1_2 Checksum_0B1;
  IBS_RLMovingDirection IBS_RLMovingDirection;
  IBS_RLWheelSpeed_2 IBS_RLWheelSpeed;
  IBS_RLWheelSpeed_Fault IBS_RLWheelSpeed_Fault;
  IBS_RRMovingDirection IBS_RRMovingDirection;
  IBS_RRWheelSpeed_2 IBS_RRWheelSpeed;
  IBS_RRWheelSpeed_Fault IBS_RRWheelSpeed_Fault;
  MessageCounter_0B1 MessageCounter_0B1;
  IBS_RLWheelPulseCounter_1 IBS_RLWheelPulseCounter;
  IBS_RRWheelPulseCounter_1 IBS_RRWheelPulseCounter;
} SG_IBS_WheelSpeed_02_SigGroup;

# define Rte_TypeDef_SG_IVI_01_SigGroup
typedef struct
{
  IVI_GearRequest IVI_GearRequest;
} SG_IVI_01_SigGroup;

# define Rte_TypeDef_SG_IVI_03_SigGroup
typedef struct
{
  Checksum_0F9 Checksum_0F9;
  IVI_BulbCheckSts IVI_BulbCheckSts;
  IVI_SFIabnormalSts IVI_SFIabnormalSts;
  IVI_SFIDippedBeamSet IVI_SFIDippedBeamSet;
  MessageCounter_0F9 MessageCounter_0F9;
} SG_IVI_03_SigGroup;

# define Rte_TypeDef_SG_IVI_OdometerInfor_SigGroup
typedef struct
{
  IVI_OdometerInfor_3 IVI_OdometerInfor;
} SG_IVI_OdometerInfor_SigGroup;

# define Rte_TypeDef_SG_MCU_01_SigGroup
typedef struct
{
  MCU_ActTrqValid MCU_ActTrqValid;
  MCU_ActualSpeed_4 MCU_ActualSpeed;
  MCU_ActualSpeedValid MCU_ActualSpeedValid;
  MCU_ActualTorque_4 MCU_ActualTorque;
  MCU_IsCurr_4 MCU_IsCurr;
  MCU_UdcCurr MCU_UdcCurr;
  Checksum_102 Checksum_098;
  MessageCounter_098 MessageCounter_098;
} SG_MCU_01_SigGroup;

# define Rte_TypeDef_SG_MCU_02_SigGroup
typedef struct
{
  MCU_BDmpCActv MCU_BDmpCActv;
  MCU_VCUWorkMode_3 MCU_VCUWorkMode;
} SG_MCU_02_SigGroup;

# define Rte_TypeDef_SG_MCU_DeratingStatus_SigGroup
typedef struct
{
  MCU_TrqAbsMax_1 MCU_TrqAbsMax;
  MCU_TrqAbsMin_1 MCU_TrqAbsMin;
} SG_MCU_DeratingStatus_SigGroup;

# define Rte_TypeDef_SG_MCU_FailureCode_SigGroup
typedef struct
{
  Checksum_255 Checksum_253;
  MCU_FaultLevel MCU_FaultLevel;
  MessageCounter_255 MessageCounter_253;
} SG_MCU_FailureCode_SigGroup;

# define Rte_TypeDef_SG_MCU_Temperature_01_SigGroup
typedef struct
{
  MCU_IGBTTempMax MCU_IGBTTempMax;
} SG_MCU_Temperature_01_SigGroup;

# define Rte_TypeDef_SG_MCU_Temperature_02_SigGroup
typedef struct
{
  MCU_TempStatus_3 MCU_TempStatus;
} SG_MCU_Temperature_02_SigGroup;

# define Rte_TypeDef_SG_POD_DCDC_01_SigGroup
typedef struct
{
  POD_DCDC_HVInputCurrent_1 POD_DCDC_HVInputCurrent;
  POD_DCDC_HVInputVoltage_1 POD_DCDC_HVInputVoltage;
  POD_DCDC_WorkMode_1 POD_DCDC_WorkMode;
} SG_POD_DCDC_01_SigGroup;

# define Rte_TypeDef_SG_POD_DCDC_02_SigGroup
typedef struct
{
  POD_DCDC_FaultLevel_1 POD_DCDC_FaultLevel;
  POD_DCDC_Side2Overtempfault_1 POD_DCDC_Side2Overtempfault;
} SG_POD_DCDC_02_SigGroup;

# define Rte_TypeDef_SG_POD_OBC_CHRGSTATION_SigGroup
typedef struct
{
  POD_OBC_CCCurrentLimit_3 POD_OBC_CCCurrentLimit;
  POD_OBC_CCStatus_3 POD_OBC_CCStatus;
  POD_OBC_ChargCapacibility_3 POD_OBC_ChargCapacibility;
  POD_OBC_CPCurrentLimit_3 POD_OBC_CPCurrentLimit;
  POD_OBC_CPDuty_3 POD_OBC_CPDuty;
  POD_OBC_CPStatus_3 POD_OBC_CPStatus;
  POD_OBC_EMLockState_3 POD_OBC_EMLockState;
  POD_OBC_OBCMaxPermOutpCrrt_3 POD_OBC_OBCMaxPermOutpCrrt;
  POD_OBC_S2State_3 POD_OBC_S2State;
  POD_OBC_WorkMode_3 POD_OBC_WorkMode;
} SG_POD_OBC_CHRGSTATION_SigGroup;

# define Rte_TypeDef_SG_POD_OBC_STATUS_02_SigGroup
typedef struct
{
  POD_OBC_ChrgOutpPwrAvl POD_OBC_ChrgOutpPwrAvl;
  POD_OBC_OutputDCChargeCurrent_1 POD_OBC_OutputDCChargeCurrent;
  POD_OBC_OutputDCChargeVoltage_1 POD_OBC_OutputDCChargeVoltage;
} SG_POD_OBC_STATUS_02_SigGroup;

# define Rte_TypeDef_SG_POD_OBC_STATUS_03_SigGroup
typedef struct
{
  POD_OBC_FaultLevel_3 POD_OBC_FaultLevel;
  POD_OBC_Side1Overtempfault_3 POD_OBC_Side1Overtempfault;
  POD_OBC_Side2Overtempfault_3 POD_OBC_Side2Overtempfault;
  POD_OBC_PrimarySideTemp_2 POD_OBC_PrimarySideTemp;
  POD_OBC_SecondarySideTemp_2 POD_OBC_SecondarySideTemp;
} SG_POD_OBC_STATUS_03_SigGroup;

# define Rte_TypeDef_SG_POD_OBC_STATUS_04_SigGroup
typedef struct
{
  POD_OBC_InputACCurrent_R_3 POD_OBC_InputACCurrent_R;
  POD_OBC_InputACCurrent_S_2 POD_OBC_InputACCurrent_S;
  POD_OBC_InputACCurrent_T_2 POD_OBC_InputACCurrent_T;
  POD_OBC_InputACVoltage_R_3 POD_OBC_InputACVoltage_R;
  POD_OBC_InputACVoltage_S_2 POD_OBC_InputACVoltage_S;
  POD_OBC_InputACVoltage_T_2 POD_OBC_InputACVoltage_T;
} SG_POD_OBC_STATUS_04_SigGroup;

# define Rte_TypeDef_SG_POD_Status_01_SigGroup
typedef struct
{
  POD_DCFCVoltage_1 POD_DCFCVoltage;
  POD_DCInletTempA_1 POD_DCInletTempA;
  POD_DCInletTempB_1 POD_DCInletTempB;
} SG_POD_Status_01_SigGroup;

# define Rte_TypeDef_SG_POD_Status_02_SigGroup
typedef struct
{
  POD_DCPortInletTempAValid_1 POD_DCPortInletTempAValid;
  POD_DCPortInletTempBValid_1 POD_DCPortInletTempBValid;
  POD_DCPosRelayState_1 POD_DCPosRelayState;
} SG_POD_Status_02_SigGroup;

# define Rte_TypeDef_SG_PRND_SigGroup
typedef struct
{
  Checksum_249 Checksum_248;
  MessageCounter_249 MessageCounter_248;
  PRND_Pbutton PRND_Pbutton;
  PRND_Pbutton_FaultSts PRND_Pbutton_FaultSts;
  PRND_RNDbutton PRND_RNDbutton;
  PRND_RNDbutton_FaultSts PRND_RNDbutton_FaultSts;
} SG_PRND_SigGroup;

# define Rte_TypeDef_SG_SGW_01_SigGroup
typedef struct
{
  SGW_AppointChargeCmd_4 SGW_AppointChargeCmd;
  SGW_ChargeFormSet_4 SGW_ChargeFormSet;
  SGW_LockACPlug SGW_LockACPlug;
  SGW_TimingChargeSwitchStatus SGW_TimingChargeSwitchStatus;
  SGW_DschrgOnOffSet SGW_DschrgOnOffSet;
} SG_SGW_01_SigGroup;

# define Rte_TypeDef_SG_SGW_04_SigGroup
typedef struct
{
  SGW_RemoteHVCtrlReq_1 SGW_RemoteHVCtrlReq;
} SG_SGW_04_SigGroup;

# define Rte_TypeDef_SG_SGW_16_SigGroup
typedef struct
{
  IVI_VrState IVI_VrState;
} SG_SGW_16_SigGroup;

# define Rte_TypeDef_SG_SGW_17_SigGroup
typedef struct
{
  SGW_BLESystemReadyReq SGW_BLESystemReadyReq;
} SG_SGW_17_SigGroup;

# define Rte_TypeDef_SG_SGW_FVSynchronization_01_SigGrou
typedef struct
{
  SGW_TripCounter_3 SGW_TripCounter;
} SG_SGW_FVSynchronization_01_SigGrou;

# define Rte_TypeDef_SG_SGW_IBS_01_SigGroup
typedef struct
{
  IVI_BrakeCompensateCmd IVI_BrakeCompensateCmd;
  IVI_CRLevelSet IVI_CRLevelSet;
} SG_SGW_IBS_01_SigGroup;

# define Rte_TypeDef_SG_SGW_PT_01_SigGroup
typedef struct
{
  IVI_AppointChargeCmd_1 IVI_AppointChargeCmd;
  IVI_ForwardVmaxlimitSw_1 IVI_ForwardVmaxlimitSw;
  IVI_LockACPlug_1 IVI_LockACPlug;
  IVI_LV_LimitPop IVI_LV_LimitPop;
} SG_SGW_PT_01_SigGroup;

# define Rte_TypeDef_SG_SGW_Time_SigGroup
typedef struct
{
  SGW_TimeInfoDay_1 SGW_TimeInfoDay;
  SGW_TimeInfoHour_1 SGW_TimeInfoHour;
  SGW_TimeInfoMinute_1 SGW_TimeInfoMinute;
  SGW_TimeInfoMonth_1 SGW_TimeInfoMonth;
  SGW_TimeInfoSecond_1 SGW_TimeInfoSecond;
  SGW_TimeInfoYear_1 SGW_TimeInfoYear;
  SGW_TimeValid SGW_TimeValid;
} SG_SGW_Time_SigGroup;

# define Rte_TypeDef_SG_SGW_VCU_01_SigGroup
typedef struct
{
  IVI_DriveModeSet_1 IVI_DriveModeSet;
  IVI_DschrgOnOffSet_1 IVI_DschrgOnOffSet;
  IVI_ForwardVmaxAllowed_1 IVI_ForwardVmaxAllowed;
  IVI_MaxChrgSocSet_1 IVI_MaxChrgSocSet;
  IVI_V2LidisSet_1 IVI_V2LidisSet;
} SG_SGW_VCU_01_SigGroup;

# define Rte_TypeDef_SG_TCU_01_SigGroup
typedef struct
{
  TCU_HVPwrState_1 TCU_HVPwrState;
  TCU_TMSFaultLevel_1 TCU_TMSFaultLevel;
  TCU_TMSTotalPwrCnsmp TCU_TMSTotalPwrCnsmp;
  TCU_TMSTotoalPwrReq_1 TCU_TMSTotoalPwrReq;
} SG_TCU_01_SigGroup;

# define Rte_TypeDef_SG_TCU_02_SigGroup
typedef struct
{
  TCU_HVCHHighVoltage_1 TCU_HVCHHighVoltage;
  TCU_HVCHHVDCCurrent_1 TCU_HVCHHVDCCurrent;
} SG_TCU_02_SigGroup;

# define Rte_TypeDef_SG_VCU_02_SigGroup
typedef struct
{
  VCU_BS_IBSBatSOC_3 VCU_BS_IBSBatSOC;
  VCU_BS_LV_Batt_3 VCU_BS_LV_Batt;
  VCU_BS_Current_1 VCU_BS_Current;
  VCU_BS_IndicatorSts VCU_BS_IndicatorSts;
  VCU_WakeUpStatus_1 VCU_WakeUpStatus;
} SG_VCU_02_SigGroup;

# define Rte_TypeDef_SG_VCU_03_SigGroup
typedef struct
{
  VCU_BrakeCompensateStatus_1 VCU_BrakeCompensateStatus;
  VCU_ChargeProcessComment_1 VCU_ChargeProcessComment;
  VCU_DCFCCurrent_1 VCU_DCFCCurrent;
  VCU_EnergyV2L_1 VCU_EnergyV2L;
  VCU_MemoryChargeFault_1 VCU_MemoryChargeFault;
} SG_VCU_03_SigGroup;

# define Rte_TypeDef_SG_VCU_04_SigGroup
typedef struct
{
  VCU_ForwardVmaxlimitStatus_4 VCU_ForwardVmaxlimitStatus;
  VCU_ManuallyUnlockComment_3 VCU_ManuallyUnlockComment;
} SG_VCU_04_SigGroup;

# define Rte_TypeDef_SG_VCU_05_SigGroup
typedef struct
{
  VCU_MaximumOutputCurrent_1 VCU_MaximumOutputCurrent;
  VCU_MaximumOutputVoltage_1 VCU_MaximumOutputVoltage;
  VCU_MinimumOutputCurrent_1 VCU_MinimumOutputCurrent;
  VCU_MinimumOutputVoltage_1 VCU_MinimumOutputVoltage;
} SG_VCU_05_SigGroup;

# define Rte_TypeDef_SG_VCU_06_SigGroup
typedef struct
{
  VCU_ChargeEnergy_1 VCU_ChargeEnergy;
  VCU_ChargeTime_1 VCU_ChargeTime;
  VCU_DisChgPowerLimit_1 VCU_DisChgPowerLimit;
  VCU_DisplayMileage_1 VCU_DisplayMileage;
  VCU_MCUPower_1 VCU_MCUPower;
  VCU_PermitPackPTC_1 VCU_PermitPackPTC;
} SG_VCU_06_SigGroup;

# define Rte_TypeDef_SG_VCU_AccPedal_SigGroup
typedef struct
{
  Checksum_0D2_2 Checksum_0D2;
  MessageCounter_0D2_2 MessageCounter_0D2;
  VCU_AccelerationPedal_2 VCU_AccelerationPedal;
  VCU_AccelerationPedalValid VCU_AccelerationPedalValid;
  VCU_EPBReq VCU_EPBReq;
  VCU_Kickdown VCU_Kickdown;
  VCU_TargetGear VCU_TargetGear;
  VCU_VehicleSpeed_2 VCU_VehicleSpeed;
  VCU_VehicleSpeedValid VCU_VehicleSpeedValid;
  VCU_VLCTorqueRequestActive VCU_VLCTorqueRequestActive;
  VCU_VLCTorqueRequestAvailable VCU_VLCTorqueRequestAvailable;
  VCU_VirtualACPedal_1 VCU_VirtualACPedal;
  VCU_VirtualACPedalValid VCU_VirtualACPedalValid;
} SG_VCU_AccPedal_SigGroup;

# define Rte_TypeDef_SG_VCU_BMS_SigGroup
typedef struct
{
  Checksum_0D1_2 Checksum_0D1;
  MessageCounter_0D1_2 MessageCounter_0D1;
  VCU_ActDriveMode VCU_ActDriveMode;
  VCU_BMSTargetThermLevel VCU_BMSTargetThermLevel;
  VCU_DrvModSwitchWarn VCU_DrvModSwitchWarn;
  VCU_HVStatus VCU_HVStatus;
  VCU_LimitLevel VCU_LimitLevel;
  VCU_RegenBrakeLightRequest VCU_RegenBrakeLightRequest;
  VCU_RegenBrakeLightReqVld VCU_RegenBrakeLightReqVld;
  VCU_RequestedModeBMS VCU_RequestedModeBMS;
  VCU_BMS_Control_of_PosRelay VCU_BMS_Control_of_PosRelay;
  VCU_Chargestatus VCU_ChargeStatus;
  VCU_IsoMeasurementSwitch_3 VCU_IsoMeasurementSwitch;
} SG_VCU_BMS_SigGroup;

# define Rte_TypeDef_SG_VCU_Chassis_01_SigGroup
typedef struct
{
  Checksum_0D3_1 Checksum_0D3;
  MessageCounter_0D3_1 MessageCounter_0D3;
  VCU_ADASOverride VCU_ADASOverride;
  VCU_APSTorqueRequestActive VCU_APSTorqueRequestActive;
  VCU_APSTorqueRequestAvailable VCU_APSTorqueRequestAvailable;
  VCU_BrakeCompensateWarn VCU_BrakeCompensateWarn;
  VCU_DecelerationReq_1 VCU_DecelerationReq;
  VCU_DecelerationReqactive VCU_DecelerationReqactive;
  VCU_DriverTorqueRequest_1 VCU_DriverTorqueRequest;
  VCU_EnergyManagementWarn_1 VCU_EnergyManagementWarn;
  VCU_RegenTorqueCap_1 VCU_RegenTorqueCap;
  VCU_RegenTorqueCapValid VCU_RegenTorqueCapValid;
  VCU_RegStatus VCU_RegStatus;
  VCU_TorqueRequestActive VCU_TorqueRequestActive;
  VCU_TorqueRequestAvailable VCU_TorqueRequestAvailable;
} SG_VCU_Chassis_01_SigGroup;

# define Rte_TypeDef_SG_VCU_DCDC_SigGroup
typedef struct
{
  VCU_DCDCPowerLimit_1 VCU_DCDCPowerLimit;
  VCU_RequestedModeDCDC_1 VCU_RequestedModeDCDC;
  VCU_VoltageDemandLV_1 VCU_VoltageDemandLV;
} SG_VCU_DCDC_SigGroup;

# define Rte_TypeDef_SG_VCU_HMIsignals_01_SigGroup
typedef struct
{
  Checksum_325 Checksum_317;
  MessageCounter_325 MessageCounter_317;
  VCU_CriSysFailure VCU_CriSysFailure;
  VCU_DCDCFail_6 VCU_DCDCFail;
  VCU_DriveMotOvrTemp VCU_DriveMotOvrTemp;
  VCU_HVBatCriFail VCU_HVBatCriFail;
  VCU_HVBatOvrTemp_5 VCU_HVBatOvrTemp;
  VCU_HVILError VCU_HVILError;
  VCU_HVInsulResFault VCU_HVInsulResFault;
  VCU_InvldGearSel VCU_InvldGearSel;
  VCU_LimpHome VCU_LimpHome;
  VCU_PlugStatus VCU_PlugStatus;
  VCU_ReachLimitStd VCU_ReachLimitStd;
  VCU_MileagelowRemind VCU_MileagelowRemind;
} SG_VCU_HMIsignals_01_SigGroup;

# define Rte_TypeDef_SG_VCU_HMIsignals_02_SigGroup
typedef struct
{
  Checksum_323 Checksum_318;
  MessageCounter_323 MessageCounter_318;
  VCU_DischargeEndSoc_2 VCU_DischargeEndSoc;
  VCU_Display_Cur_2 VCU_Display_Cur;
  VCU_Display_Power_2 VCU_Display_Power;
  VCU_ForwardVmaxAllowed VCU_ForwardVmaxAllowed;
  VCU_maxChargeSOC VCU_maxChargeSOC;
  VCU_MCU_FaultLampReq VCU_MCU_FaultLampReq;
  VCU_SystemReady VCU_SystemReady;
} SG_VCU_HMIsignals_02_SigGroup;

# define Rte_TypeDef_SG_VCU_IBS_01_SigGroup
typedef struct
{
  Checksum_94 Checksum_094;
  MessageCounter_95 MessageCounter_094;
  VCU_MotorActualTorque_1 VCU_MotorActualTorque;
  VCU_MotorActualTorqueValid VCU_MotorActualTorqueValid;
  VCU_OPStandstillReq VCU_OPStandstillReq;
  VCU_WheelTrqACT_1 VCU_WheelTrqACT;
  VCU_WheelTrqACTValid VCU_WheelTrqACTValid;
} SG_VCU_IBS_01_SigGroup;

# define Rte_TypeDef_SG_VCU_MCU_02_SigGroup
typedef struct
{
  VCU_MaxSpdLimit_2 VCU_MaxSpdLimit;
  VCU_MCUActHeatPwr_2 VCU_MCUActHeatPwr;
  VCU_MotorSpdReq_2 VCU_MotorSpdReq;
} SG_VCU_MCU_02_SigGroup;

# define Rte_TypeDef_SG_VCU_MCU_03_SigGroup
typedef struct
{
  Checksum_104 Checksum_095;
  MessageCounter_108 MessageCounter_095;
  VCU_ActualGear VCU_ActualGear;
  VCU_BrakepedalStatus VCU_BrakepedalStatus;
  VCU_KL15eOn VCU_KL15eOn;
  VCU_MCUDesiredTorque_5 VCU_MCUDesiredTorque;
  VCU_MCUSurgeDamperState VCU_MCUSurgeDamperState;
  VCU_PWTErrorLevel VCU_PWTErrorLevel;
  VCU_RequestedModeMCU VCU_RequestedModeMCU;
  VCU_TCSActive VCU_TCSActive;
  VCU_TrqThresholdDampgCtl_5 VCU_TrqThresholdDampgCtl;
} SG_VCU_MCU_03_SigGroup;

# define Rte_TypeDef_SG_VCU_MCU_05_SigGroup
typedef struct
{
  VCU_MaxTorqueGradient_3 VCU_MaxTorqueGradient;
  VCU_MaxTorqueLimit_3 VCU_MaxTorqueLimit;
  VCU_MinTorqueLimit_3 VCU_MinTorqueLimit;
  VCU_CreepTorque_1 VCU_CreepTorque;
  VCU_SpdLimitActTorque_1 VCU_SpdLimitActTorque;
} SG_VCU_MCU_05_SigGroup;

# define Rte_TypeDef_SG_VCU_POD_SigGroup
typedef struct
{
  VCU_Enable_DC_Relay_3 VCU_Enable_DC_Relay;
  VCU_EnableOBC_3 VCU_EnableOBC;
  VCU_OBC_ChargeCurrentCommand_3 VCU_OBC_ChargeCurrentCommand;
  VCU_OBC_Control_of_em_lock_3 VCU_OBC_Control_of_em_lock;
  VCU_OBC_Control_of_S2_SW_3 VCU_OBC_Control_of_S2_SW;
} SG_VCU_POD_SigGroup;

# define Rte_TypeDef_SG_VCU_PlugInChrgInfo_SigGroup
typedef struct
{
  VCU_ChargeEndReason_1 VCU_ChargeEndReason;
  VCU_DischargeEndReason_1 VCU_DischargeEndReason;
  VCU_HVConnectFault_1 VCU_HVConnectFault;
  VCU_RemainChrgTime_1 VCU_RemainChrgTime;
} SG_VCU_PlugInChrgInfo_SigGroup;

# define Rte_TypeDef_SG_VCU_SynReq_01_SigGroup
typedef struct
{
  VCU_SynRequest_1 VCU_SynRequest;
} SG_VCU_SynReq_01_SigGroup;

# define Rte_TypeDef_SG_VCU_TCU_SigGroup
typedef struct
{
  VCU_RequestedModeTCU_1 VCU_RequestedModeTCU;
  VCU_TCUPowerAllowed_1 VCU_TCUPowerAllowed;
} SG_VCU_TCU_SigGroup;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0 ChassisMgmt_MonStatAccrPedlSplyVolt1HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_1 ChassisMgmt_MonResAccrPedlSplyVolt1HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_2 ChassisMgmt_ErrStatAccrPedlSplyVolt1HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_3 ChassisMgmt_ErrResAccrPedlSplyVolt1HiInfo;
} dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0 ChassisMgmt_MonStatAccrPedlSplyVolt1LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_1 ChassisMgmt_MonResAccrPedlSplyVolt1LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_2 ChassisMgmt_ErrStatAccrPedlSplyVolt1LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_3 ChassisMgmt_ErrResAccrPedlSplyVolt1LoInfo;
} dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0 ChassisMgmt_MonStatAccrPedlSplyVolt2HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_1 ChassisMgmt_MonResAccrPedlSplyVolt2HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_2 ChassisMgmt_ErrStatAccrPedlSplyVolt2HiInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_3 ChassisMgmt_ErrResAccrPedlSplyVolt2HiInfo;
} dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0 ChassisMgmt_MonStatAccrPedlSplyVolt2LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_1 ChassisMgmt_MonResAccrPedlSplyVolt2LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_2 ChassisMgmt_ErrStatAccrPedlSplyVolt2LoInfo;
  Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_3 ChassisMgmt_ErrResAccrPedlSplyVolt2LoInfo;
} dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURaw1Hi
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_0 ChassisMgmt_MonStatAccrPedlURaw1Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_1 ChassisMgmt_MonResAccrPedlURaw1Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_2 ChassisMgmt_ErrStatAccrPedlURaw1Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_3 ChassisMgmt_ErrResAccrPedlURaw1Hi;
} dt_ChassisMgmt_AccrPedlURaw1Hi;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURaw1Lo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_0 ChassisMgmt_MonStatAccrPedlURaw1Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_1 ChassisMgmt_MonResAccrPedlURaw1Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_2 ChassisMgmt_ErrStatAccrPedlURaw1Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_3 ChassisMgmt_ErrResAccrPedlURaw1Lo;
} dt_ChassisMgmt_AccrPedlURaw1Lo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURaw2Hi
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_0 ChassisMgmt_MonStatAccrPedlURaw2Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_1 ChassisMgmt_MonResAccrPedlURaw2Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_2 ChassisMgmt_ErrStatAccrPedlURaw2Hi;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_3 ChassisMgmt_ErrResAccrPedlURaw2Hi;
} dt_ChassisMgmt_AccrPedlURaw2Hi;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURaw2Lo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_0 ChassisMgmt_MonStatAccrPedlURaw2Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_1 ChassisMgmt_MonResAccrPedlURaw2Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_2 ChassisMgmt_ErrStatAccrPedlURaw2Lo;
  Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_3 ChassisMgmt_ErrResAccrPedlURaw2Lo;
} dt_ChassisMgmt_AccrPedlURaw2Lo;

# define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURawDif
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_0 ChassisMgmt_MonStatAccrPedlURawDif;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_1 ChassisMgmt_MonResAccrPedlURawDif;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_2 ChassisMgmt_ErrStatAccrPedlURawDif;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_3 ChassisMgmt_ErrResAccrPedlURawDif;
} dt_ChassisMgmt_AccrPedlURawDif;

# define Rte_TypeDef_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0 ChassisMgmt_MonStatIBSApsCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_1 ChassisMgmt_MonResIBSApsCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_2 ChassisMgmt_ErrStatIBSApsCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_3 ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo;
} dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_0 ChassisMgmt_MonStatIBSRbsDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_1 ChassisMgmt_MonResIBSRbsDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_2 ChassisMgmt_ErrStatIBSRbsDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_3 ChassisMgmt_ErrResIBSRbsDesTqOverFltDTCInfo;
} dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo;

# define Rte_TypeDef_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0 ChassisMgmt_MonStatIBSVlcCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_1 ChassisMgmt_MonResIBSVlcCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_2 ChassisMgmt_ErrStatIBSVlcCtrlDesTqOverFltDTCInfo;
  Rte_DT_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_3 ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo;
} dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo;

# define Rte_TypeDef_dt_ChrMgmt_AcPreheatUDcCtrlErr
typedef struct
{
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0 ChrMgmt_MonStatAcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1 ChrMgmt_MonResAcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2 ChrMgmt_ErrStatAcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3 ChrMgmt_ErrResAcPreheatUDcCtrlErr;
} dt_ChrMgmt_AcPreheatUDcCtrlErr;

# define Rte_TypeDef_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC
typedef struct
{
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0 ChrMgmt_MonStatAcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_1 ChrMgmt_MonResAcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_2 ChrMgmt_ErrStatAcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_3 ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC;
} dt_ChrMgmt_AcPreheatUDcCtrlErrDTC;

# define Rte_TypeDef_dt_ChrMgmt_CC2UDcDTC
typedef struct
{
  Rte_DT_dt_ChrMgmt_CC2UDcDTC_0 ChrMgmt_MonStatCC2UDcErrDTC;
  Rte_DT_dt_ChrMgmt_CC2UDcDTC_1 ChrMgmt_MonResCC2UDcErrDTC;
  Rte_DT_dt_ChrMgmt_CC2UDcDTC_2 ChrMgmt_ErrStatCC2UDcErrDTC;
  Rte_DT_dt_ChrMgmt_CC2UDcDTC_3 ChrMgmt_ErrResCC2UDcErrDTC;
} dt_ChrMgmt_CC2UDcDTC;

# define Rte_TypeDef_dt_ChrMgmt_CC2UDcErr
typedef struct
{
  Rte_DT_dt_ChrMgmt_CC2UDcErr_0 ChrMgmt_MonStatCC2UDcErr;
  Rte_DT_dt_ChrMgmt_CC2UDcErr_1 ChrMgmt_MonResCC2UDcErr;
  Rte_DT_dt_ChrMgmt_CC2UDcErr_2 ChrMgmt_ErrStatCC2UDcErr;
  Rte_DT_dt_ChrMgmt_CC2UDcErr_3 ChrMgmt_ErrResCC2UDcErr;
} dt_ChrMgmt_CC2UDcErr;

# define Rte_TypeDef_dt_ChrMgmt_ChrgStsJmpErr
typedef struct
{
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_0 ChrMgmt_MonStatChrgStsJmpErr;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_1 ChrMgmt_MonResChrgStsJmpErr;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_2 ChrMgmt_ErrStatChrgStsJmpErr;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_3 ChrMgmt_ErrResChrgStsJmpErr;
} dt_ChrMgmt_ChrgStsJmpErr;

# define Rte_TypeDef_dt_ChrMgmt_ChrgStsJmpErrDTC
typedef struct
{
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_0 ChrMgmt_MonStatChrgStsJmpErrDTC;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_1 ChrMgmt_MonResChrgStsJmpErrDTC;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_2 ChrMgmt_ErrStatChrgStsJmpErrDTC;
  Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_3 ChrMgmt_ErrResChrgStsJmpErrDTC;
} dt_ChrMgmt_ChrgStsJmpErrDTC;

# define Rte_TypeDef_dt_ChrMgmt_DcPreheatUDcCtrlErr
typedef struct
{
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0 ChrMgmt_MonStatDcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1 ChrMgmt_MonResDcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2 ChrMgmt_ErrStatDcPreheatUDcCtrlErr;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3 ChrMgmt_ErrResDcPreheatUDcCtrlErr;
} dt_ChrMgmt_DcPreheatUDcCtrlErr;

# define Rte_TypeDef_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC
typedef struct
{
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0 ChrMgmt_MonStatDcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_1 ChrMgmt_MonResDcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_2 ChrMgmt_ErrStatDcPreheatUDcCtrlErrDTC;
  Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_3 ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC;
} dt_ChrMgmt_DcPreheatUDcCtrlErrDTC;

# define Rte_TypeDef_dt_ChrMgmt_PreheatIRChkErr
typedef struct
{
  Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0 ChrMgmt_MonStatPreheatIRChkErr;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1 ChrMgmt_MonResPreheatIRChkErr;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2 ChrMgmt_ErrStatPreheatIRChkErr;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3 ChrMgmt_ErrResPreheatIRChkErr;
} dt_ChrMgmt_PreheatIRChkErr;

# define Rte_TypeDef_dt_ChrMgmt_PreheatIRChkErrDTC
typedef struct
{
  Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_0 ChrMgmt_MonStatPreheatIRChkErrDTC;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_1 ChrMgmt_MonResPreheatIRChkErrDTC;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_2 ChrMgmt_ErrStatPreheatIRChkErrDTC;
  Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_3 ChrMgmt_ErrResPreheatIRChkErrDTC;
} dt_ChrMgmt_PreheatIRChkErrDTC;

# define Rte_TypeDef_dt_ComM_ACU01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACU01CRCDTCInfo_0 ComM_MonStatACU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU01CRCDTCInfo_1 ComM_MonResACU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU01CRCDTCInfo_2 ComM_ErrStatACU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU01CRCDTCInfo_3 ComM_ErrResACU01CRCDTCErrorInfo;
} dt_ComM_ACU01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ACU01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0 ComM_MonStatACU01TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1 ComM_MonResACU01TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2 ComM_ErrStatACU01TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3 ComM_ErrResACU01TimeoutDTCInfo;
} dt_ComM_ACU01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ACU02CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACU02CRCDTCInfo_0 ComM_MonStatACU02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU02CRCDTCInfo_1 ComM_MonResACU02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU02CRCDTCInfo_2 ComM_ErrStatACU02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACU02CRCDTCInfo_3 ComM_ErrResACU02CRCDTCErrorInfo;
} dt_ComM_ACU02CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ACU02TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0 ComM_MonStatACU02TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1 ComM_MonResACU02TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2 ComM_ErrStatACU02TimeoutDTCInfo;
  Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3 ComM_ErrResACU02TimeoutDTCInfo;
} dt_ComM_ACU02TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ACU02TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_ACU02TimeoutInfo_0 ComM_MonStatACU02TimeoutInfo;
  Rte_DT_dt_ComM_ACU02TimeoutInfo_1 ComM_MonResACU02TimeoutInfo;
  Rte_DT_dt_ComM_ACU02TimeoutInfo_2 ComM_ErrStatACU02TimeoutInfo;
  Rte_DT_dt_ComM_ACU02TimeoutInfo_3 ComM_ErrResACU02TimeoutInfo;
} dt_ComM_ACU02TimeoutInfo;

# define Rte_TypeDef_dt_ComM_ACUInfoCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0 ComM_MonStatACUInfoCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1 ComM_MonResACUInfoCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2 ComM_ErrStatACUInfoCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3 ComM_ErrResACUInfoCRCDTCErrorInfo;
} dt_ComM_ACUInfoCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ACUInfoTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0 ComM_MonStatACUInfoTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1 ComM_MonResACUInfoTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2 ComM_ErrStatACUInfoTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3 ComM_ErrResACUInfoTimeoutDTCErrorInfo;
} dt_ComM_ACUInfoTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ACUInfoTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0 ComM_MonStatACUInfoTimeoutInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1 ComM_MonResACUInfoTimeoutInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2 ComM_ErrStatACUInfoTimeoutInfo;
  Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3 ComM_ErrResACUInfoTimeoutInfo;
} dt_ComM_ACUInfoTimeoutInfo;

# define Rte_TypeDef_dt_ComM_ADCUACC02CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0 ComM_MonStatADCUACC02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1 ComM_MonResADCUACC02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2 ComM_ErrStatADCUACC02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3 ComM_ErrResADCUACC02CRCDTCErrorInfo;
} dt_ComM_ADCUACC02CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUACC02TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0 ComM_MonStatADCUACC02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1 ComM_MonResADCUACC02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2 ComM_ErrStatADCUACC02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3 ComM_ErrResADCUACC02TimeoutDTCErrorInfo;
} dt_ComM_ADCUACC02TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUACC02TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0 ComM_MonStatADCUACC02TimeoutInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1 ComM_MonResADCUACC02TimeoutInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2 ComM_ErrStatADCUACC02TimeoutInfo;
  Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3 ComM_ErrResADCUACC02TimeoutInfo;
} dt_ComM_ADCUACC02TimeoutInfo;

# define Rte_TypeDef_dt_ComM_ADCUAEB01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0 ComM_MonStatADCUAEB01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1 ComM_MonResADCUAEB01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2 ComM_ErrStatADCUAEB01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3 ComM_ErrResADCUAEB01CRCDTCErrorInfo;
} dt_ComM_ADCUAEB01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUAEB01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0 ComM_MonStatADCUAEB01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1 ComM_MonResADCUAEB01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2 ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3 ComM_ErrResADCUAEB01TimeoutDTCErrorInfo;
} dt_ComM_ADCUAEB01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUAPS01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0 ComM_MonStatADCUAPS01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1 ComM_MonResADCUAPS01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2 ComM_ErrStatADCUAPS01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3 ComM_ErrResADCUAPS01CRCDTCErrorInfo;
} dt_ComM_ADCUAPS01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUAPS01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0 ComM_MonStatADCUAPS01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1 ComM_MonResADCUAPS01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2 ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3 ComM_ErrResADCUAPS01TimeoutDTCErrorInfo;
} dt_ComM_ADCUAPS01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUBodyReqCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0 ComM_MonStatADCUBodyReqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1 ComM_MonResADCUBodyReqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2 ComM_ErrStatADCUBodyReqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3 ComM_ErrResADCUBodyReqCRCDTCErrorInfo;
} dt_ComM_ADCUBodyReqCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUBodyReqTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0 ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1 ComM_MonResADCUBodyReqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2 ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3 ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo;
} dt_ComM_ADCUBodyReqTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUDACRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0 ComM_MonStatADCUDACRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1 ComM_MonResADCUDACRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2 ComM_ErrStatADCUDACRCDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3 ComM_ErrResADCUDACRCDTCErrorInfo;
} dt_ComM_ADCUDACRCDTCInfo;

# define Rte_TypeDef_dt_ComM_ADCUDATimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0 ComM_MonStatADCUDATimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1 ComM_MonResADCUDATimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2 ComM_ErrStatADCUDATimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3 ComM_ErrResADCUDATimeoutDTCErrorInfo;
} dt_ComM_ADCUDATimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_APTCTCUTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0 ComM_MonStatAPTCTCUTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1 ComM_MonResAPTCTCUTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2 ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3 ComM_ErrResAPTCTCUTimeoutDTCErrorInfo;
} dt_ComM_APTCTCUTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_APTCTCUTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0 ComM_MonStatAPTCTCUTimeoutInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1 ComM_MonResAPTCTCUTimeoutInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2 ComM_ErrStatAPTCTCUTimeoutInfo;
  Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3 ComM_ErrResAPTCTCUTimeoutInfo;
} dt_ComM_APTCTCUTimeoutInfo;

# define Rte_TypeDef_dt_ComM_BCM05CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BCM05CRCDTCInfo_0 ComM_MonStatBCM05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05CRCDTCInfo_1 ComM_MonResBCM05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05CRCDTCInfo_2 ComM_ErrStatBCM05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05CRCDTCInfo_3 ComM_ErrResBCM05CRCDTCErrorInfo;
} dt_ComM_BCM05CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_BCM05TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0 ComM_MonStatBCM05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1 ComM_MonResBCM05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2 ComM_ErrStatBCM05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3 ComM_ErrResBCM05TimeoutDTCErrorInfo;
} dt_ComM_BCM05TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_BCM06CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BCM06CRCDTCInfo_0 ComM_MonStatBCM06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06CRCDTCInfo_1 ComM_MonResBCM06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06CRCDTCInfo_2 ComM_ErrStatBCM06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06CRCDTCInfo_3 ComM_ErrResBCM06CRCDTCErrorInfo;
} dt_ComM_BCM06CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_BCM06TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0 ComM_MonStatBCM06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1 ComM_MonResBCM06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2 ComM_ErrStatBCM06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3 ComM_ErrResBCM06TimeoutDTCErrorInfo;
} dt_ComM_BCM06TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_BCM06TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_BCM06TimeoutInfo_0 ComM_MonStatBCM06TimeoutInfo;
  Rte_DT_dt_ComM_BCM06TimeoutInfo_1 ComM_MonResBCM06TimeoutInfo;
  Rte_DT_dt_ComM_BCM06TimeoutInfo_2 ComM_ErrStatBCM06TimeoutInfo;
  Rte_DT_dt_ComM_BCM06TimeoutInfo_3 ComM_ErrResBCM06TimeoutInfo;
} dt_ComM_BCM06TimeoutInfo;

# define Rte_TypeDef_dt_ComM_BMSErrInfoTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0 ComM_MonStatBMSErrInfoTimeoutInfo;
  Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1 ComM_MonResBMSErrInfoTimeoutInfo;
  Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2 ComM_ErrStatBMSErrInfoTimeoutInfo;
  Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3 ComM_ErrResBMSErrInfoTimeoutInfo;
} dt_ComM_BMSErrInfoTimeoutInfo;

# define Rte_TypeDef_dt_ComM_BMSSts01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0 ComM_MonStatBMSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1 ComM_MonResBMSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2 ComM_ErrStatBMSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3 ComM_ErrResBMSSts01CRCDTCErrorInfo;
} dt_ComM_BMSSts01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_BMSSts01CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts01CRCInfo_0 ComM_MonStatBMSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCInfo_1 ComM_MonResBMSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCInfo_2 ComM_ErrStatBMSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01CRCInfo_3 ComM_ErrResBMSSts01CRCErrorInfo;
} dt_ComM_BMSSts01CRCInfo;

# define Rte_TypeDef_dt_ComM_BMSSts01E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0 ComM_MonStatBMSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1 ComM_MonResBMSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2 ComM_ErrStatBMSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3 ComM_ErrResBMSSts01E2ETimeoutInfo;
} dt_ComM_BMSSts01E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_BMSSts01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0 ComM_MonStatBMSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1 ComM_MonResBMSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2 ComM_ErrStatBMSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3 ComM_ErrResBMSSts01TimeoutDTCErrorInfo;
} dt_ComM_BMSSts01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_BMSSts01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0 ComM_MonStatBMSSts01TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1 ComM_MonResBMSSts01TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2 ComM_ErrStatBMSSts01TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3 ComM_ErrResBMSSts01TimeoutInfo;
} dt_ComM_BMSSts01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_BMSSts02TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0 ComM_MonStatBMSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1 ComM_MonResBMSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2 ComM_ErrStatBMSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3 ComM_ErrResBMSSts02TimeoutDTCErrorInfo;
} dt_ComM_BMSSts02TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_BMSSts02TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0 ComM_MonStatBMSSts02TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1 ComM_MonResBMSSts02TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2 ComM_ErrStatBMSSts02TimeoutInfo;
  Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3 ComM_ErrResBMSSts02TimeoutInfo;
} dt_ComM_BMSSts02TimeoutInfo;

# define Rte_TypeDef_dt_ComM_CGW01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_CGW01CRCDTCInfo_0 ComM_MonStatCGW01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01CRCDTCInfo_1 ComM_MonResCGW01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01CRCDTCInfo_2 ComM_ErrStatCGW01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01CRCDTCInfo_3 ComM_ErrResCGW01ACRCDTCErrorInfo;
} dt_ComM_CGW01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_CGW01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0 ComM_MonStatCGW01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1 ComM_MonResCGW01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2 ComM_ErrStatCGW01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3 ComM_ErrResCGW01TimeoutDTCErrorInfo;
} dt_ComM_CGW01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_CGW01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_CGW01TimeoutInfo_0 ComM_MonStatCGW01TimeoutInfo;
  Rte_DT_dt_ComM_CGW01TimeoutInfo_1 ComM_MonResCGW01TimeoutInfo;
  Rte_DT_dt_ComM_CGW01TimeoutInfo_2 ComM_ErrStatCGW01TimeoutInfo;
  Rte_DT_dt_ComM_CGW01TimeoutInfo_3 ComM_ErrResCGW01TimeoutInfo;
} dt_ComM_CGW01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_CHCANBusOffDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0 ComM_MonStatCHCANBusOffDTCInfo;
  Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1 ComM_MonResCHCANBusOffDTCInfo;
  Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2 ComM_ErrStatCHCANBusOffDTCInfo;
  Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3 ComM_ErrResCHCANBusOffDTCInfo;
} dt_ComM_CHCANBusOffDTCInfo;

# define Rte_TypeDef_dt_ComM_CHCANBusOffInfo
typedef struct
{
  Rte_DT_dt_ComM_CHCANBusOffInfo_0 ComM_MonStatCHCANBusOffInfo;
  Rte_DT_dt_ComM_CHCANBusOffInfo_1 ComM_MonResCHCANBusOffInfo;
  Rte_DT_dt_ComM_CHCANBusOffInfo_2 ComM_ErrStatCHCANBusOffInfo;
  Rte_DT_dt_ComM_CHCANBusOffInfo_3 ComM_ErrResCHCANBusOffInfo;
} dt_ComM_CHCANBusOffInfo;

# define Rte_TypeDef_dt_ComM_DCCANBusOffDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0 ComM_MonStatDCCANDTCBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1 ComM_MonResDCCANDTCBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2 ComM_ErrStatDCCANDTCBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3 ComM_ErrResDCCANDTCBusOffInfo;
} dt_ComM_DCCANBusOffDTCInfo;

# define Rte_TypeDef_dt_ComM_DCCANBusOffInfo
typedef struct
{
  Rte_DT_dt_ComM_DCCANBusOffInfo_0 ComM_MonStatDCCANBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffInfo_1 ComM_MonResDCCANBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffInfo_2 ComM_ErrStatDCCANBusOffInfo;
  Rte_DT_dt_ComM_DCCANBusOffInfo_3 ComM_ErrResDCCANBusOffInfo;
} dt_ComM_DCCANBusOffInfo;

# define Rte_TypeDef_dt_ComM_DCMFL02CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0 ComM_MonStatDCMFL02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1 ComM_MonResDCMFL02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2 ComM_ErrStatDCMFL02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3 ComM_ErrResDCMFL02CRCDTCErrorInfo;
} dt_ComM_DCMFL02CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_DCMFL02TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0 ComM_MonStatDCMFL02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1 ComM_MonResDCMFL02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2 ComM_ErrStatDCMFL02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3 ComM_ErrResDCMFL02TimeoutDTCErrorInfo;
} dt_ComM_DCMFL02TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_DCMFL02TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0 ComM_MonStatDCMFL02TimeoutInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1 ComM_MonResDCMFL02TimeoutInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2 ComM_ErrStatDCMFL02TimeoutInfo;
  Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3 ComM_ErrResDCMFL02TimeoutInfo;
} dt_ComM_DCMFL02TimeoutInfo;

# define Rte_TypeDef_dt_ComM_DCMFRTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0 ComM_MonStatDCMFRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1 ComM_MonResDCMFRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2 ComM_ErrStatDCMFRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3 ComM_ErrResDCMFRTimeoutDTCErrorInfo;
} dt_ComM_DCMFRTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_DCMFRTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMFRTimeoutInfo_0 ComM_MonStatDCMFRTimeoutInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutInfo_1 ComM_MonResDCMFRTimeoutInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutInfo_2 ComM_ErrStatDCMFRTimeoutInfo;
  Rte_DT_dt_ComM_DCMFRTimeoutInfo_3 ComM_ErrResDCMFRTimeoutInfo;
} dt_ComM_DCMFRTimeoutInfo;

# define Rte_TypeDef_dt_ComM_DCMRLTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0 ComM_MonStatDCMRLTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1 ComM_MonResDCMRLTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2 ComM_ErrStatDCMRLTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3 ComM_ErrResDCMRLTimeoutDTCErrorInfo;
} dt_ComM_DCMRLTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_DCMRLTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMRLTimeoutInfo_0 ComM_MonStatDCMRLTimeoutInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutInfo_1 ComM_MonResDCMRLTimeoutInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutInfo_2 ComM_ErrStatDCMRLTimeoutInfo;
  Rte_DT_dt_ComM_DCMRLTimeoutInfo_3 ComM_ErrResDCMRLTimeoutInfo;
} dt_ComM_DCMRLTimeoutInfo;

# define Rte_TypeDef_dt_ComM_DCMRRTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0 ComM_MonStatDCMRRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1 ComM_MonResDCMRRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2 ComM_ErrStatDCMRRTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3 ComM_ErrResDCMRRTimeoutDTCErrorInfo;
} dt_ComM_DCMRRTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_DCMRRTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_DCMRRTimeoutInfo_0 ComM_MonStatDCMRRTimeoutInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutInfo_1 ComM_MonResDCMRRTimeoutInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutInfo_2 ComM_ErrStatDCMRRTimeoutInfo;
  Rte_DT_dt_ComM_DCMRRTimeoutInfo_3 ComM_ErrResDCMRRTimeoutInfo;
} dt_ComM_DCMRRTimeoutInfo;

# define Rte_TypeDef_dt_ComM_EPTCANBusOffDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0 ComM_MonStatEPTCANBusOffDTCInfo;
  Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1 ComM_MonResEPTCANBusOffDTCInfo;
  Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2 ComM_ErrStatEPTCANBusOffDTCInfo;
  Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3 ComM_ErrResEPTCANBusOffDTCInfo;
} dt_ComM_EPTCANBusOffDTCInfo;

# define Rte_TypeDef_dt_ComM_EPTCANBusOffInfo
typedef struct
{
  Rte_DT_dt_ComM_EPTCANBusOffInfo_0 ComM_MonStatEPTCANBusOffInfo;
  Rte_DT_dt_ComM_EPTCANBusOffInfo_1 ComM_MonResEPTCANBusOffInfo;
  Rte_DT_dt_ComM_EPTCANBusOffInfo_2 ComM_ErrStatEPTCANBusOffInfo;
  Rte_DT_dt_ComM_EPTCANBusOffInfo_3 ComM_ErrResEPTCANBusOffInfo;
} dt_ComM_EPTCANBusOffInfo;

# define Rte_TypeDef_dt_ComM_EVCOMSts01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0 ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1 ComM_MonResEVCOMSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2 ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3 ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo;
} dt_ComM_EVCOMSts01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_EVCOMSts01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0 ComM_MonStatEVCOMSts01TimeoutInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1 ComM_MonResEVCOMSts01TimeoutInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2 ComM_ErrStatEVCOMSts01TimeoutInfo;
  Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3 ComM_ErrResEVCOMSts01TimeoutInfo;
} dt_ComM_EVCOMSts01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_FRCMsgErrDTC
typedef struct
{
  Rte_DT_dt_ComM_FRCMsgErrDTC_0 ComM_MonStatFRCMsgErrDTC;
  Rte_DT_dt_ComM_FRCMsgErrDTC_1 ComM_MonResFRCMsgErrDTC;
  Rte_DT_dt_ComM_FRCMsgErrDTC_2 ComM_ErrStatFRCMsgErrDTC;
  Rte_DT_dt_ComM_FRCMsgErrDTC_3 ComM_ErrResFRCMsgErrDTC;
} dt_ComM_FRCMsgErrDTC;

# define Rte_TypeDef_dt_ComM_FRCRespErrDTC
typedef struct
{
  Rte_DT_dt_ComM_FRCRespErrDTC_0 ComM_MonStatLinFRCRespErrDTC;
  Rte_DT_dt_ComM_FRCRespErrDTC_1 ComM_MonResLinFRCRespErrDTC;
  Rte_DT_dt_ComM_FRCRespErrDTC_2 ComM_ErrStatFRCRespErrDTC;
  Rte_DT_dt_ComM_FRCRespErrDTC_3 ComM_ErrResFRCRespErrDTC;
} dt_ComM_FRCRespErrDTC;

# define Rte_TypeDef_dt_ComM_FRCSplyUDcHiDTC
typedef struct
{
  Rte_DT_dt_ComM_FRCSplyUDcHiDTC_0 ComM_MonStatFRCSplyUDcHiDTC;
  Rte_DT_dt_ComM_FRCSplyUDcHiDTC_1 ComM_MonResFRCSplyUDcHiDTC;
  Rte_DT_dt_ComM_FRCSplyUDcHiDTC_2 ComM_ErrStatFRCSplyUDcHiDTC;
  Rte_DT_dt_ComM_FRCSplyUDcHiDTC_3 ComM_ErrResFRCSplyUDcHiDTC;
} dt_ComM_FRCSplyUDcHiDTC;

# define Rte_TypeDef_dt_ComM_FRCSplyUDcLoDTC
typedef struct
{
  Rte_DT_dt_ComM_FRCSplyUDcLoDTC_0 ComM_MonStatFRCSplyUDcLoDTC;
  Rte_DT_dt_ComM_FRCSplyUDcLoDTC_1 ComM_MonResFRCSplyUDcLoDTC;
  Rte_DT_dt_ComM_FRCSplyUDcLoDTC_2 ComM_ErrStatFRCSplyUDcLoDTC;
  Rte_DT_dt_ComM_FRCSplyUDcLoDTC_3 ComM_ErrResFRCSplyUDcLoDTC;
} dt_ComM_FRCSplyUDcLoDTC;

# define Rte_TypeDef_dt_ComM_IBSACCCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0 ComM_MonStatIBSACCCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1 ComM_MonResIBSACCCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2 ComM_ErrStatIBSACCCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3 ComM_ErrResIBSACCCRCDTCErrorInfo;
} dt_ComM_IBSACCCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSACCCRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSACCCRCInfo_0 ComM_MonStatIBSACCCRCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCInfo_1 ComM_MonResIBSACCCRCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCInfo_2 ComM_ErrStatIBSACCCRCErrorInfo;
  Rte_DT_dt_ComM_IBSACCCRCInfo_3 ComM_ErrResIBSACCCRCErrorInfo;
} dt_ComM_IBSACCCRCInfo;

# define Rte_TypeDef_dt_ComM_IBSACCE2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0 ComM_MonStatIBSACCE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1 ComM_MonResIBSACCE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2 ComM_ErrStatIBSACCE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3 ComM_ErrResIBSACCE2ETimeoutInfo;
} dt_ComM_IBSACCE2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSACCTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0 ComM_MonStatIBSACCTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1 ComM_MonResIBSACCTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2 ComM_ErrStatIBSACCTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3 ComM_ErrResIBSACCTimeoutDTCErrorInfo;
} dt_ComM_IBSACCTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSAPSCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0 ComM_MonStatIBSAPSCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1 ComM_MonResIBSAPSCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2 ComM_ErrStatIBSAPSCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3 ComM_ErrResIBSAPSCRCDTCErrorInfo;
} dt_ComM_IBSAPSCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSAPSTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0 ComM_MonStatIBSAPSTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1 ComM_MonResIBSAPSTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2 ComM_ErrStatIBSAPSTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3 ComM_ErrResIBSAPSTimeoutDTCErrorInfo;
} dt_ComM_IBSAPSTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0 ComM_MonStatIBSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1 ComM_MonResIBSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2 ComM_ErrStatIBSSts01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3 ComM_ErrResIBSSts01CRCDTCErrorInfo;
} dt_ComM_IBSSts01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts01CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts01CRCInfo_0 ComM_MonStatIBSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCInfo_1 ComM_MonResIBSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCInfo_2 ComM_ErrStatIBSSts01CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01CRCInfo_3 ComM_ErrResIBSSts01CRCErrorInfo;
} dt_ComM_IBSSts01CRCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts01E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0 ComM_MonStatIBSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1 ComM_MonResIBSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2 ComM_ErrStatIBSSts01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3 ComM_ErrResIBSSts01E2ETimeoutInfo;
} dt_ComM_IBSSts01E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0 ComM_MonStatIBSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1 ComM_MonResIBSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2 ComM_ErrStatIBSSts01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3 ComM_ErrResIBSSts01TimeoutDTCErrorInfo;
} dt_ComM_IBSSts01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts02CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0 ComM_MonStatIBSSts02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1 ComM_MonResIBSSts02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2 ComM_ErrStatIBSSts02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3 ComM_ErrResIBSSts02CRCDTCErrorInfo;
} dt_ComM_IBSSts02CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts02CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts02CRCInfo_0 ComM_MonStatIBSSts02CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCInfo_1 ComM_MonResIBSSts02CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCInfo_2 ComM_ErrStatIBSSts02CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02CRCInfo_3 ComM_ErrResIBSSts02CRCErrorInfo;
} dt_ComM_IBSSts02CRCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts02E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0 ComM_MonStatIBSSts02E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1 ComM_MonResIBSSts02E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2 ComM_ErrStatIBSSts02E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3 ComM_ErrResIBSSts02E2ETimeoutInfo;
} dt_ComM_IBSSts02E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts02TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0 ComM_MonStatIBSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1 ComM_MonResIBSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2 ComM_ErrStatIBSSts02TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3 ComM_ErrResIBSSts02TimeoutDTCErrorInfo;
} dt_ComM_IBSSts02TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts03CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0 ComM_MonStatIBSSts03CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1 ComM_MonResIBSSts03CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2 ComM_ErrStatIBSSts03CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3 ComM_ErrResIBSSts03CRCDTCErrorInfo;
} dt_ComM_IBSSts03CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts03CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts03CRCInfo_0 ComM_MonStatIBSSts03CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCInfo_1 ComM_MonResIBSSts03CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCInfo_2 ComM_ErrStatIBSSts03CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03CRCInfo_3 ComM_ErrResIBSSts03CRCErrorInfo;
} dt_ComM_IBSSts03CRCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts03E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0 ComM_MonStatIBSSts03E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1 ComM_MonResIBSSts03E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2 ComM_ErrStatIBSSts03E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3 ComM_ErrResIBSSts03E2ETimeoutInfo;
} dt_ComM_IBSSts03E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts03TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0 ComM_MonStatIBSSts03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1 ComM_MonResIBSSts03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2 ComM_ErrStatIBSSts03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3 ComM_ErrResIBSSts03TimeoutDTCErrorInfo;
} dt_ComM_IBSSts03TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts04CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0 ComM_MonStatIBSSts04CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1 ComM_MonResIBSSts04CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2 ComM_ErrStatIBSSts04CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3 ComM_ErrResIBSSts04CRCDTCErrorInfo;
} dt_ComM_IBSSts04CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts04CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts04CRCInfo_0 ComM_MonStatIBSSts04CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCInfo_1 ComM_MonResIBSSts04CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCInfo_2 ComM_ErrStatIBSSts04CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04CRCInfo_3 ComM_ErrResIBSSts04CRCErrorInfo;
} dt_ComM_IBSSts04CRCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts04E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0 ComM_MonStatIBSSts04E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1 ComM_MonResIBSSts04E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2 ComM_ErrStatIBSSts04E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3 ComM_ErrResIBSSts04E2ETimeoutInfo;
} dt_ComM_IBSSts04E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts04TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0 ComM_MonStatIBSSts04TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1 ComM_MonResIBSSts04TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2 ComM_ErrStatIBSSts04TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3 ComM_ErrResIBSSts04TimeoutDTCErrorInfo;
} dt_ComM_IBSSts04TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts05CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0 ComM_MonStatIBSSts05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1 ComM_MonResIBSSts05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2 ComM_ErrStatIBSSts05CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3 ComM_ErrResIBSSts05CRCDTCErrorInfo;
} dt_ComM_IBSSts05CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts05CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts05CRCInfo_0 ComM_MonStatIBSSts05CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCInfo_1 ComM_MonResIBSSts05CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCInfo_2 ComM_ErrStatIBSSts05CRCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05CRCInfo_3 ComM_ErrResIBSSts05CRCErrorInfo;
} dt_ComM_IBSSts05CRCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts05E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0 ComM_MonStatIBSSts05E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1 ComM_MonResIBSSts05E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2 ComM_ErrStatIBSSts05E2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3 ComM_ErrResIBSSts05E2ETimeoutInfo;
} dt_ComM_IBSSts05E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts05TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0 ComM_MonStatIBSSts05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1 ComM_MonResIBSSts05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2 ComM_ErrStatIBSSts05TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3 ComM_ErrResIBSSts05TimeoutDTCErrorInfo;
} dt_ComM_IBSSts05TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts05TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0 ComM_MonStatIBSSts05TimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1 ComM_MonResIBSSts05TimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2 ComM_ErrStatIBSSts05TimeoutInfo;
  Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3 ComM_ErrResIBSSts05TimeoutInfo;
} dt_ComM_IBSSts05TimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSSts06CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0 ComM_MonStatIBSSts06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1 ComM_MonResIBSSts06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2 ComM_ErrStatIBSSts06CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3 ComM_ErrResIBSSts06CRCDTCErrorInfo;
} dt_ComM_IBSSts06CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSSts06TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0 ComM_MonStatIBSSts06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1 ComM_MonResIBSSts06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2 ComM_ErrStatIBSSts06TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3 ComM_ErrResIBSSts06TimeoutDTCErrorInfo;
} dt_ComM_IBSSts06TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSTqCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0 ComM_MonStatIBSTqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1 ComM_MonResIBSTqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2 ComM_ErrStatIBSTqCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3 ComM_ErrResIBSTqCRCDTCErrorInfo;
} dt_ComM_IBSTqCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSTqCRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSTqCRCInfo_0 ComM_MonStatIBSTqCRCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCInfo_1 ComM_MonResIBSTqCRCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCInfo_2 ComM_ErrStatIBSTqCRCErrorInfo;
  Rte_DT_dt_ComM_IBSTqCRCInfo_3 ComM_ErrResIBSTqCRCErrorInfo;
} dt_ComM_IBSTqCRCInfo;

# define Rte_TypeDef_dt_ComM_IBSTqE2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0 ComM_MonStatIBSTqE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1 ComM_MonResIBSTqE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2 ComM_ErrStatIBSTqE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3 ComM_ErrResIBSTqE2ETimeoutInfo;
} dt_ComM_IBSTqE2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSTqTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0 ComM_MonStatIBSTqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1 ComM_MonResIBSTqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2 ComM_ErrStatIBSTqTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3 ComM_ErrResIBSTqTimeoutDTCErrorInfo;
} dt_ComM_IBSTqTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSVCUMotCtrlCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0 ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1 ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2 ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3 ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo;
} dt_ComM_IBSVCUMotCtrlCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSVCUMotCtrlCRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0 ComM_MonStatIBSVCUMotCtrlCRCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1 ComM_MonResIBSVCUMotCtrlCRCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2 ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3 ComM_ErrResIBSVCUMotCtrlCRCErrorInfo;
} dt_ComM_IBSVCUMotCtrlCRCInfo;

# define Rte_TypeDef_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0 ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1 ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2 ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3 ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo;
} dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0 ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1 ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2 ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3 ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo;
} dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSVCUMotCtrlTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0 ComM_MonStatIBSVCUMotCtrlTimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1 ComM_MonResIBSVCUMotCtrlTimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2 ComM_ErrStatIBSVCUMotCtrlTimeoutInfo;
  Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3 ComM_ErrResIBSVCUMotCtrlTimeoutInfo;
} dt_ComM_IBSVCUMotCtrlTimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSWhlSpd01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0 ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1 ComM_MonResIBSWhlSpd01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2 ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3 ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo;
} dt_ComM_IBSWhlSpd01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSWhlSpd01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0 ComM_MonStatIBSWhlSpd01TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1 ComM_MonResIBSWhlSpd01TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2 ComM_ErrStatIBSWhlSpd01TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3 ComM_ErrResIBSWhlSpd01TimeoutInfo;
} dt_ComM_IBSWhlSpd01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_IBSWhlSpd02CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0 ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1 ComM_MonResIBSWhlSpd02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2 ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3 ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo;
} dt_ComM_IBSWhlSpd02CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_IBSWhlSpd02TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0 ComM_MonStatIBSWhlSpd02TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1 ComM_MonResIBSWhlSpd02TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2 ComM_ErrStatIBSWhlSpd02TimeoutInfo;
  Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3 ComM_ErrResIBSWhlSpd02TimeoutInfo;
} dt_ComM_IBSWhlSpd02TimeoutInfo;

# define Rte_TypeDef_dt_ComM_IVI01CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_IVI01CRCInfo_0 ComM_MonStatIVI01CRCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCInfo_1 ComM_MonResIVI01CRCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCInfo_2 ComM_ErrStatIVI01CRCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCInfo_3 ComM_ErrResIVI01CRCErrorInfo;
} dt_ComM_IVI01CRCInfo;

# define Rte_TypeDef_dt_ComM_IVI01E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_0 ComM_MonStatIVI01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_1 ComM_MonResIVI01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_2 ComM_ErrStatIVI01E2ETimeoutInfo;
  Rte_DT_dt_ComM_IVI01E2ETimeoutInfo_3 ComM_ErrResIVI01E2ETimeoutInfo;
} dt_ComM_IVI01E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_LinMsgErrInfo
typedef struct
{
  Rte_DT_dt_ComM_LinMsgErrInfo_0 ComM_MonStatLinMsgTimeoutDTCInfo;
  Rte_DT_dt_ComM_LinMsgErrInfo_1 ComM_MonResLinMsgTimeoutDTCInfo;
  Rte_DT_dt_ComM_LinMsgErrInfo_2 ComM_ErrStatLinMsgTimeoutDTCInfo;
  Rte_DT_dt_ComM_LinMsgErrInfo_3 ComM_ErrRestatLinMsgTimeoutDTCInfo;
} dt_ComM_LinMsgErrInfo;

# define Rte_TypeDef_dt_ComM_MCU01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCU01CRCDTCInfo_0 ComM_MonStatMCU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCDTCInfo_1 ComM_MonResMCU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCDTCInfo_2 ComM_ErrStatMCU01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCDTCInfo_3 ComM_ErrResMCU01CRCDTCErrorInfo;
} dt_ComM_MCU01CRCDTCInfo;

# define Rte_TypeDef_dt_ComM_MCU01CRCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCU01CRCInfo_0 ComM_MonStatMCU01CRCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCInfo_1 ComM_MonResMCU01CRCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCInfo_2 ComM_ErrStatMCU01CRCErrorInfo;
  Rte_DT_dt_ComM_MCU01CRCInfo_3 ComM_ErrResMCU01CRCErrorInfo;
} dt_ComM_MCU01CRCInfo;

# define Rte_TypeDef_dt_ComM_MCU01E2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0 ComM_MonStatMCU01E2ETimeoutInfo;
  Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1 ComM_MonResMCU01E2ETimeoutInfo;
  Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2 ComM_ErrStatMCU01E2ETimeoutInfo;
  Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3 ComM_ErrResMCU01E2ETimeoutInfo;
} dt_ComM_MCU01E2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_MCU01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0 ComM_MonStatMCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1 ComM_MonResMCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2 ComM_ErrStatMCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3 ComM_ErrResMCU01TimeoutDTCErrorInfo;
} dt_ComM_MCU01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_MCU01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_MCU01TimeoutInfo_0 ComM_MonStatMCU01TimeoutInfo;
  Rte_DT_dt_ComM_MCU01TimeoutInfo_1 ComM_MonResMCU01TimeoutInfo;
  Rte_DT_dt_ComM_MCU01TimeoutInfo_2 ComM_ErrStatMCU01TimeoutInfo;
  Rte_DT_dt_ComM_MCU01TimeoutInfo_3 ComM_ErrResMCU01TimeoutInfo;
} dt_ComM_MCU01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_MCUFailrCodCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0 ComM_MonStatMCUFailrCodCRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1 ComM_MonResMCUFailrCodCRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2 ComM_ErrStatMCUFailrCodCRCDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3 ComM_ErrResMCUFailrCodCRCDTCErrorInfo;
} dt_ComM_MCUFailrCodCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_MCUFailrCodCRCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0 ComM_MonStatMCUFailrCodCRCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1 ComM_MonResMCUFailrCodCRCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2 ComM_ErrStatMCUFailrCodCRCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3 ComM_ErrResMCUFailrCodCRCErrorInfo;
} dt_ComM_MCUFailrCodCRCInfo;

# define Rte_TypeDef_dt_ComM_MCUFailrCodE2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0 ComM_MonStatMCUFailrCodE2ETimeouInfo;
  Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1 ComM_MonResMCUFailrCodE2ETimeoutInfo;
  Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2 ComM_ErrStatMCUFailrCodE2ETimeoutInfo;
  Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3 ComM_ErrResMCUFailrCodE2ETimeoutInfo;
} dt_ComM_MCUFailrCodE2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_MCUFailrCodTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0 ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1 ComM_MonResMCUFailrCodTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2 ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3 ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo;
} dt_ComM_MCUFailrCodTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_PODDCDC01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0 ComM_MonStatPODDCDC01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1 ComM_MonResPODDCDC01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2 ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3 ComM_ErrResPODDCDC01TimeoutDTCErrorInfo;
} dt_ComM_PODDCDC01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_PODDCDC01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0 ComM_MonStatPODDCDC01TimeoutInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1 ComM_MonResPODDCDC01TimeoutInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2 ComM_ErrStatPODDCDC01TimeoutInfo;
  Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3 ComM_ErrResPODDCDC01TimeoutInfo;
} dt_ComM_PODDCDC01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_PODOBCChrgStatTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0 ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1 ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2 ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3 ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo;
} dt_ComM_PODOBCChrgStatTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_PODOBCChrgStatTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0 ComM_MonStatPODOBCChrgStatTimeoutInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1 ComM_MonResPODOBCChrgStatTimeoutInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2 ComM_ErrStatPODOBCChrgStatTimeoutInfo;
  Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3 ComM_ErrResPODOBCChrgStatTimeoutInfo;
} dt_ComM_PODOBCChrgStatTimeoutInfo;

# define Rte_TypeDef_dt_ComM_PODSts01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_PODSts01TimeoutInfo_0 ComM_MonStatPODSts01TimeoutInfo;
  Rte_DT_dt_ComM_PODSts01TimeoutInfo_1 ComM_MonResPODSts01TimeoutInfo;
  Rte_DT_dt_ComM_PODSts01TimeoutInfo_2 ComM_ErrStatPODSts01TimeoutInfo;
  Rte_DT_dt_ComM_PODSts01TimeoutInfo_3 ComM_ErrResPODSts01TimeoutInfo;
} dt_ComM_PODSts01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_PRNDCRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_PRNDCRCDTCInfo_0 ComM_MonStatPRNDCRCDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCDTCInfo_1 ComM_MonResPRNDCRCDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCDTCInfo_2 ComM_ErrStatPRNDCRCDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCDTCInfo_3 ComM_ErrResPRNDCRCDTCErrorInfo;
} dt_ComM_PRNDCRCDTCInfo;

# define Rte_TypeDef_dt_ComM_PRNDCRCInfo
typedef struct
{
  Rte_DT_dt_ComM_PRNDCRCInfo_0 ComM_MonStatPRNDCRCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCInfo_1 ComM_MonResPRNDCRCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCInfo_2 ComM_ErrStatPRNDCRCErrorInfo;
  Rte_DT_dt_ComM_PRNDCRCInfo_3 ComM_ErrResPRNDCRCErrorInfo;
} dt_ComM_PRNDCRCInfo;

# define Rte_TypeDef_dt_ComM_PRNDE2ETimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0 ComM_MonStatPRNDE2ETimeoutInfo;
  Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1 ComM_MonResPRNDE2ETimeoutInfo;
  Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2 ComM_ErrStatPRNDE2ETimeoutInfo;
  Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3 ComM_ErrResPRNDE2ETimeoutInfo;
} dt_ComM_PRNDE2ETimeoutInfo;

# define Rte_TypeDef_dt_ComM_PRNDTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0 ComM_MonStatPRNDTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1 ComM_MonResPRNDTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2 ComM_ErrStatPRNDTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3 ComM_ErrResPRNDTimeoutDTCErrorInfo;
} dt_ComM_PRNDTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_PRNDTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_PRNDTimeoutInfo_0 ComM_MonStatPRNDTimeoutInfo;
  Rte_DT_dt_ComM_PRNDTimeoutInfo_1 ComM_MonResPRNDTimeoutInfo;
  Rte_DT_dt_ComM_PRNDTimeoutInfo_2 ComM_ErrStatPRNDTimeoutInfo;
  Rte_DT_dt_ComM_PRNDTimeoutInfo_3 ComM_ErrResPRNDTimeoutInfo;
} dt_ComM_PRNDTimeoutInfo;

# define Rte_TypeDef_dt_ComM_SGW16TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0 ComM_MonStatSGW16TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1 ComM_MonResSGW16TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2 ComM_ErrStatSGW16CTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3 ComM_ErrResSGW16TimeoutDTCErrorInfo;
} dt_ComM_SGW16TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_SGW16TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_SGW16TimeoutInfo_0 ComM_MonStatSGW16TimeoutInfo;
  Rte_DT_dt_ComM_SGW16TimeoutInfo_1 ComM_MonResSGW16TimeoutInfo;
  Rte_DT_dt_ComM_SGW16TimeoutInfo_2 ComM_ErrStatSGW16TimeoutInfo;
  Rte_DT_dt_ComM_SGW16TimeoutInfo_3 ComM_ErrResSGW16TimeoutInfo;
} dt_ComM_SGW16TimeoutInfo;

# define Rte_TypeDef_dt_ComM_SGW17TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0 ComM_MonStatSGW17TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1 ComM_MonResSGW17TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2 ComM_ErrStatSGW17TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3 ComM_ErrResSGW17TimeoutDTCErrorInfo;
} dt_ComM_SGW17TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_SGW17TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_SGW17TimeoutInfo_0 ComM_MonStatSGW17TimeoutInfo;
  Rte_DT_dt_ComM_SGW17TimeoutInfo_1 ComM_MonResSGW17TimeoutInfo;
  Rte_DT_dt_ComM_SGW17TimeoutInfo_2 ComM_ErrStatSGW17TimeoutInfo;
  Rte_DT_dt_ComM_SGW17TimeoutInfo_3 ComM_ErrResSGW17TimeoutInfo;
} dt_ComM_SGW17TimeoutInfo;

# define Rte_TypeDef_dt_ComM_SGWPT01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0 ComM_MonStatSGWPT01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1 ComM_MonResSGWPT01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2 ComM_ErrStatSGWPT01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3 ComM_ErrResSGWPT01TimeoutDTCErrorInfo;
} dt_ComM_SGWPT01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_SGWPT01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0 ComM_MonStatSGWPT01TimeoutInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1 ComM_MonResSGWPT01TimeoutInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2 ComM_ErrStatSGWPT01TimeoutInfo;
  Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3 ComM_ErrResSGWPT01TimeoutInfo;
} dt_ComM_SGWPT01TimeoutInfo;

# define Rte_TypeDef_dt_ComM_SGWTimTimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0 ComM_MonStatSGWTimTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1 ComM_MonResSGWTimTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2 ComM_ErrStatSGWTimTimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3 ComM_ErrResSGWTimTimeoutDTCErrorInfo;
} dt_ComM_SGWTimTimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_SGWTimTimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_SGWTimTimeoutInfo_0 ComM_MonStatSGWTimTimeoutInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutInfo_1 ComM_MonResSGWTimTimeoutInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutInfo_2 ComM_ErrStatSGWTimTimeoutInfo;
  Rte_DT_dt_ComM_SGWTimTimeoutInfo_3 ComM_ErrResSGWTimTimeoutInfo;
} dt_ComM_SGWTimTimeoutInfo;

# define Rte_TypeDef_dt_ComM_TCU01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0 ComM_MonStatTCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1 ComM_MonResTCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2 ComM_ErrStatTCU01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3 ComM_ErrResTCU01TimeoutDTCErrorInfo;
} dt_ComM_TCU01TimeoutDTCInfo;

# define Rte_TypeDef_dt_ComM_TCU01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_TCU01TimeoutInfo_0 ComM_MonStatTCU01TimeoutInfo;
  Rte_DT_dt_ComM_TCU01TimeoutInfo_1 ComM_MonResTCU01TimeoutInfo;
  Rte_DT_dt_ComM_TCU01TimeoutInfo_2 ComM_ErrStatTCU01TimeoutInfo;
  Rte_DT_dt_ComM_TCU01TimeoutInfo_3 ComM_ErrResTCU01TimeoutInfo;
} dt_ComM_TCU01TimeoutInfo;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCCSTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0 DCChrMgmt_MonStatBEMRxCCSTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1 DCChrMgmt_MonResBEMRxCCSTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2 DCChrMgmt_ErrStatBEMRxCCSTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3 DCChrMgmt_ErrResBEMRxCCSTmt;
} dt_DCChrMgmt_BEMRxCCSTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCCSTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_0 DCChrMgmt_MonStatBEMRxCCSTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_1 DCChrMgmt_MonResBEMRxCCSTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_2 DCChrMgmt_ErrStatBEMRxCCSTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_3 DCChrMgmt_ErrResBEMRxCCSTmtDTC;
} dt_DCChrMgmt_BEMRxCCSTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCMLTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0 DCChrMgmt_MonStatBEMRxCMLTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1 DCChrMgmt_MonResBEMRxCMLTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2 DCChrMgmt_ErrStatBEMRxCMLTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3 DCChrMgmt_ErrResBEMRxCMLTmt;
} dt_DCChrMgmt_BEMRxCMLTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCMLTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_0 DCChrMgmt_MonStatBEMRxCMLTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_1 DCChrMgmt_MonResBEMRxCMLTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_2 DCChrMgmt_ErrStatBEMRxCMLTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_3 DCChrMgmt_ErrResBEMRxCMLTmtDTC;
} dt_DCChrMgmt_BEMRxCMLTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCRMPrepdTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0 DCChrMgmt_MonStatBEMRxCRMPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1 DCChrMgmt_MonResBEMRxCRMPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2 DCChrMgmt_ErrStatBEMRxCRMPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3 DCChrMgmt_ErrResBEMRxCRMPrepdTmt;
} dt_DCChrMgmt_BEMRxCRMPrepdTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0 DCChrMgmt_MonStatBEMRxCRMPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_1 DCChrMgmt_MonResBEMRxCRMPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_2 DCChrMgmt_ErrStatBEMRxCRMPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_3 DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC;
} dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCRMTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0 DCChrMgmt_MonStatBEMRxCRMTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1 DCChrMgmt_MonResBEMRxCRMTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2 DCChrMgmt_ErrStatBEMRxCRMTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3 DCChrMgmt_ErrResBEMRxCRMTmt;
} dt_DCChrMgmt_BEMRxCRMTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCRMTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_0 DCChrMgmt_MonStatBEMRxCRMTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_1 DCChrMgmt_MonResBEMRxCRMTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_2 DCChrMgmt_ErrStatBEMRxCRMTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_3 DCChrMgmt_ErrResBEMRxCRMTmtDTC;
} dt_DCChrMgmt_BEMRxCRMTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCROPrepdTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0 DCChrMgmt_MonStatBEMRxCROPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1 DCChrMgmt_MonResBEMRxCROPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2 DCChrMgmt_ErrStatBEMRxCROPrepdTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3 DCChrMgmt_ErrResBEMRxCROPrepdTmt;
} dt_DCChrMgmt_BEMRxCROPrepdTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0 DCChrMgmt_MonStatBEMRxCROPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_1 DCChrMgmt_MonResBEMRxCROPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_2 DCChrMgmt_ErrStatBEMRxCROPrepdTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_3 DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC;
} dt_DCChrMgmt_BEMRxCROPrepdTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCROTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0 DCChrMgmt_MonStatBEMRxCROTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1 DCChrMgmt_MonResBEMRxCROTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2 DCChrMgmt_ErrStatBEMRxCROTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3 DCChrMgmt_ErrResBEMRxCROTmt;
} dt_DCChrMgmt_BEMRxCROTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCROTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_0 DCChrMgmt_MonStatBEMRxCROTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_1 DCChrMgmt_MonResBEMRxCROTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_2 DCChrMgmt_ErrStatBEMRxCROTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_3 DCChrMgmt_ErrResBEMRxCROTmtDTC;
} dt_DCChrMgmt_BEMRxCROTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCSDTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0 DCChrMgmt_MonStatBEMRxCSDTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1 DCChrMgmt_MonResBEMRxCSDTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2 DCChrMgmt_ErrStatBEMRxCSDTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3 DCChrMgmt_ErrResBEMRxCSDTmt;
} dt_DCChrMgmt_BEMRxCSDTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCSDTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_0 DCChrMgmt_MonStatBEMRxCSDTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_1 DCChrMgmt_MonResBEMRxCSDTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_2 DCChrMgmt_ErrStatBEMRxCSDTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_3 DCChrMgmt_ErrResBEMRxCSDTmtDTC;
} dt_DCChrMgmt_BEMRxCSDTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCSTTmt
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0 DCChrMgmt_MonStatBEMRxCSTTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1 DCChrMgmt_MonResBEMRxCSTTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2 DCChrMgmt_ErrStatBEMRxCSTTmt;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3 DCChrMgmt_ErrResBEMRxCSTTmt;
} dt_DCChrMgmt_BEMRxCSTTmt;

# define Rte_TypeDef_dt_DCChrMgmt_BEMRxCSTTmtDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_0 DCChrMgmt_MonStatBEMRxCSTTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_1 DCChrMgmt_MonResBEMRxCSTTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_2 DCChrMgmt_ErrStatBEMRxCSTTmtDTC;
  Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_3 DCChrMgmt_ErrResBEMRxCSTTmtDTC;
} dt_DCChrMgmt_BEMRxCSTTmtDTC;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempErrLvl1
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0 DCChrMgmt_MonStatDcPortTempErrLvl1;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1 DCChrMgmt_MonResDcPortTempErrLvl1;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2 DCChrMgmt_ErrStatDcPortTempErrLvl1;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3 DCChrMgmt_ErrResDcPortTempErrLvl1;
} dt_DCChrMgmt_DcPortTempErrLvl1;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempErrLvl1DTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0 DCChrMgmt_MonStatDcPortTempErrLvl1DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_1 DCChrMgmt_MonResDcPortTempErrLvl1DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_2 DCChrMgmt_ErrStatDcPortTempErrLvl1DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_3 DCChrMgmt_ErrResDcPortTempErrLvl1DTC;
} dt_DCChrMgmt_DcPortTempErrLvl1DTC;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempErrLvl2
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0 DCChrMgmt_MonStatDcPortTempErrLvl2;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1 DCChrMgmt_MonResDcPortTempErrLvl2;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2 DCChrMgmt_ErrStatDcPortTempErrLvl2;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3 DCChrMgmt_ErrResDcPortTempErrLvl2;
} dt_DCChrMgmt_DcPortTempErrLvl2;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempErrLvl2DTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0 DCChrMgmt_MonStatDcPortTempErrLvl2DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_1 DCChrMgmt_MonResDcPortTempErrLvl2DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_2 DCChrMgmt_ErrStatDcPortTempErrLvl2DTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_3 DCChrMgmt_ErrResDcPortTempErrLvl2DTC;
} dt_DCChrMgmt_DcPortTempErrLvl2DTC;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempSnsrErr
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0 DCChrMgmt_MonStatDcPortTempSnsrErr;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1 DCChrMgmt_MonResDcPortTempSnsrErr;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2 DCChrMgmt_ErrStatDcPortTempSnsrErr;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3 DCChrMgmt_ErrResDcPortTempSnsrErr;
} dt_DCChrMgmt_DcPortTempSnsrErr;

# define Rte_TypeDef_dt_DCChrMgmt_DcPortTempSnsrErrDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0 DCChrMgmt_MonStatDcPortTempSnsrErrDTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_1 DCChrMgmt_MonResDcPortTempSnsrErrDTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_2 DCChrMgmt_ErrStatDcPortTempSnsrErrDTC;
  Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_3 DCChrMgmt_ErrResDcPortTempSnsrErrDTC;
} dt_DCChrMgmt_DcPortTempSnsrErrDTC;

# define Rte_TypeDef_dt_DCChrMgmt_IRMeasDiErr
typedef struct
{
  Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0 DCChrMgmt_MonStatIRMeasDiErr;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1 DCChrMgmt_MonResIRMeasDiErr;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2 DCChrMgmt_ErrStatIRMeasDiErr;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3 DCChrMgmt_ErrResIRMeasDiErr;
} dt_DCChrMgmt_IRMeasDiErr;

# define Rte_TypeDef_dt_DCChrMgmt_IRMeasDiErrDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_0 DCChrMgmt_MonStatIRMeasDiErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_1 DCChrMgmt_MonResIRMeasDiErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_2 DCChrMgmt_ErrStatIRMeasDiErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasDiErrDTC_3 DCChrMgmt_ErrResIRMeasDiErrDTC;
} dt_DCChrMgmt_IRMeasDiErrDTC;

# define Rte_TypeDef_dt_DCChrMgmt_IRMeasEnaErr
typedef struct
{
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0 DCChrMgmt_MonStatIRMeasEnaErr;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1 DCChrMgmt_MonResIRMeasEnaErr;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2 DCChrMgmt_ErrStatIRMeasEnaErr;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3 DCChrMgmt_ErrResIRMeasEnaErr;
} dt_DCChrMgmt_IRMeasEnaErr;

# define Rte_TypeDef_dt_DCChrMgmt_IRMeasEnaErrDTC
typedef struct
{
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_0 DCChrMgmt_MonStatIRMeasEnaErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_1 DCChrMgmt_MonResIRMeasEnaErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_2 DCChrMgmt_ErrStatIRMeasEnaErrDTC;
  Rte_DT_dt_DCChrMgmt_IRMeasEnaErrDTC_3 DCChrMgmt_ErrResIRMeasEnaErrDTC;
} dt_DCChrMgmt_IRMeasEnaErrDTC;

# define Rte_TypeDef_dt_EgyMgmt_EgyMgmtWarnOne
typedef struct
{
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_0 EgyMgmt_MonStatEgyMgmtWarnOne;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_1 EgyMgmt_MonResEgyMgmtWarnOne;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_2 EgyMgmt_ErrStatEgyMgmtWarnOne;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnOne_3 EgyMgmt_ErrResEgyMgmtWarnOne;
} dt_EgyMgmt_EgyMgmtWarnOne;

# define Rte_TypeDef_dt_EgyMgmt_EgyMgmtWarnTwo
typedef struct
{
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_0 EgyMgmt_MonStatEgyMgmtWarnTwo;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_1 EgyMgmt_MonResEgyMgmtWarnTwo;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_2 EgyMgmt_ErrStatEgyMgmtWarnTwo;
  Rte_DT_dt_EgyMgmt_EgyMgmtWarnTwo_3 EgyMgmt_ErrResEgyMgmtWarnTwo;
} dt_EgyMgmt_EgyMgmtWarnTwo;

# define Rte_TypeDef_dt_ErrMgmt_DrvMotTempOvrLamp
typedef struct
{
  Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0 ErrMgmt_MonStatMCUTempOvr;
  Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1 ErrMgmt_MonResMCUTempOvr;
  Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2 ErrMgmt_ErrStatMCUTempOvr;
  Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3 ErrMgmt_ErrResMCUTempOvr;
} dt_ErrMgmt_DrvMotTempOvrLamp;

# define Rte_TypeDef_dt_ErrMgmt_HvBattTempOvrLamp
typedef struct
{
  Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0 ErrMgmt_MonStatBMSTempOvr;
  Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1 ErrMgmt_MonResBMSTempOvr;
  Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2 ErrMgmt_ErrStatBMSTempOvr;
  Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3 ErrMgmt_ErrResBMSTempOvr;
} dt_ErrMgmt_HvBattTempOvrLamp;

# define Rte_TypeDef_dt_ErrMgmt_InslaFlt
typedef struct
{
  Rte_DT_dt_ErrMgmt_InslaFlt_0 ErrMgmt_MonStatVehHVInsla;
  Rte_DT_dt_ErrMgmt_InslaFlt_1 ErrMgmt_MonResVehHVInsla;
  Rte_DT_dt_ErrMgmt_InslaFlt_2 ErrMgmt_ErrStatVehHVInsla;
  Rte_DT_dt_ErrMgmt_InslaFlt_3 ErrMgmt_ErrResVehHVInsla;
} dt_ErrMgmt_InslaFlt;

# define Rte_TypeDef_dt_ErrMgmt_TorqCtrlErr
typedef struct
{
  Rte_DT_dt_ErrMgmt_TorqCtrlErr_0 ErrMgmt_DlyGrdtZeroTq_Flg;
  Rte_DT_dt_ErrMgmt_TorqCtrlErr_1 ErrMgmt_GrdtZeroTq_Flg;
  Rte_DT_dt_ErrMgmt_TorqCtrlErr_2 ErrMgmt_ImdtZeroTq_Flg;
  Rte_DT_dt_ErrMgmt_TorqCtrlErr_3 ErrMgmt_VehSpdLim_kph;
  Rte_DT_dt_ErrMgmt_TorqCtrlErr_4 ErrMgmt_VehSpdLimEna_Flg;
} dt_ErrMgmt_TorqCtrlErr;

# define Rte_TypeDef_dt_ErrMgmt_VCUHVILDTC
typedef struct
{
  Rte_DT_dt_ErrMgmt_VCUHVILDTC_0 ErrMgmt_MonStatVCUHVIL;
  Rte_DT_dt_ErrMgmt_VCUHVILDTC_1 ErrMgmt_MonResVCUHVIL;
  Rte_DT_dt_ErrMgmt_VCUHVILDTC_2 ErrMgmt_ErrStatVCUHVIL;
  Rte_DT_dt_ErrMgmt_VCUHVILDTC_3 ErrMgmt_ErrResVCUHVIL;
} dt_ErrMgmt_VCUHVILDTC;

# define Rte_TypeDef_dt_ErrMgmt_VehHVIL
typedef struct
{
  Rte_DT_dt_ErrMgmt_VehHVIL_0 ErrMgmt_MonStatVehHVIL;
  Rte_DT_dt_ErrMgmt_VehHVIL_1 ErrMgmt_MonResVehHVIL;
  Rte_DT_dt_ErrMgmt_VehHVIL_2 ErrMgmt_ErrStatVehHVIL;
  Rte_DT_dt_ErrMgmt_VehHVIL_3 ErrMgmt_ErrResVehHVIL;
} dt_ErrMgmt_VehHVIL;

# define Rte_TypeDef_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_0 FctSftyMon_MonStatAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_1 FctSftyMon_MonResAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_2 FctSftyMon_ErrStatAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_3 FctSftyMon_ErrResAccrPedlTqOverFltInfo;
} dt_FctSftyMon_AccrPedlTqOverFltDTCInfo;

# define Rte_TypeDef_dt_FctSftyMon_AccrPedlTqOverFltInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_0 FctSftyMon_MonStatAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_1 FctSftyMon_MonResAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_2 FctSftyMon_ErrStatAccrPedlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_AccrPedlTqOverFltInfo_3 FctSftyMon_ErrResAccrPedlTqOverFltInfo;
} dt_FctSftyMon_AccrPedlTqOverFltInfo;

# define Rte_TypeDef_dt_FctSftyMon_ActGearCfmFail
typedef struct
{
  Rte_DT_dt_FctSftyMon_ActGearCfmFail_0 FctSftyMon_MonStatActGearCfmFail;
  Rte_DT_dt_FctSftyMon_ActGearCfmFail_1 FctSftyMon_MonResActGearCfmFail;
  Rte_DT_dt_FctSftyMon_ActGearCfmFail_2 FctSftyMon_ErrStatActGearCfmFail;
  Rte_DT_dt_FctSftyMon_ActGearCfmFail_3 FctSftyMon_ErrResActGearCfmFail;
} dt_FctSftyMon_ActGearCfmFail;

# define Rte_TypeDef_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_0 FctSftyMon_MonStatCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_1 FctSftyMon_MonResCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_2 FctSftyMon_ErrStatCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_3 FctSftyMon_ErrResCrpCtrlTqOverFltInfo;
} dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo;

# define Rte_TypeDef_dt_FctSftyMon_CrpCtrlTqOverFltInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0 FctSftyMon_MonStatCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_1 FctSftyMon_MonResCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_2 FctSftyMon_ErrStatCrpCtrlTqOverFltInfo;
  Rte_DT_dt_FctSftyMon_CrpCtrlTqOverFltInfo_3 FctSftyMon_ErrResCrpCtrlTqOverFltInfo;
} dt_FctSftyMon_CrpCtrlTqOverFltInfo;

# define Rte_TypeDef_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_0 FctSftyMon_MonStatDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_1 FctSftyMon_MonResDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_2 FctSftyMon_ErrStatDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_3 FctSftyMon_ErrResDesVehDecelSpdOverFltInfo;
} dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo;

# define Rte_TypeDef_dt_FctSftyMon_DesVehDecelSpdOverFltInfo
typedef struct
{
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0 FctSftyMon_MonStatDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_1 FctSftyMon_MonResDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_2 FctSftyMon_ErrStatDesVehDecelSpdOverFltInfo;
  Rte_DT_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_3 FctSftyMon_ErrResDesVehDecelSpdOverFltInfo;
} dt_FctSftyMon_DesVehDecelSpdOverFltInfo;

# define Rte_TypeDef_dt_HvMgmt_BMSRlyClsDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_BMSRlyClsDTC_0 HvMgmt_MonStatBMSRlyClsDTC;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTC_1 HvMgmt_MonResBMSRlyClsDTC;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTC_2 HvMgmt_ErrStatBMSRlyClsDTC;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTC_3 HvMgmt_ErrResBMSRlyClsDTC;
} dt_HvMgmt_BMSRlyClsDTC;

# define Rte_TypeDef_dt_HvMgmt_BMSRlyClsDTCOne
typedef struct
{
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_0 HvMgmt_MonStatBMSRlyClsDTCOne;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_1 HvMgmt_MonResBMSRlyClsDTCOne;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_2 HvMgmt_ErrStatBMSRlyClsDTCOne;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCOne_3 HvMgmt_ErrResBMSRlyClsDTCOne;
} dt_HvMgmt_BMSRlyClsDTCOne;

# define Rte_TypeDef_dt_HvMgmt_BMSRlyClsDTCTwo
typedef struct
{
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_0 HvMgmt_MonStatBMSRlyClsDTCTwo;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_1 HvMgmt_MonResBMSRlyClsDTCTwo;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_2 HvMgmt_ErrStatBMSRlyClsDTCTwo;
  Rte_DT_dt_HvMgmt_BMSRlyClsDTCTwo_3 HvMgmt_ErrResBMSRlyClsDTCTwo;
} dt_HvMgmt_BMSRlyClsDTCTwo;

# define Rte_TypeDef_dt_HvMgmt_BMSRlyOpenDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_0 HvMgmt_MonStatBMSRlyOpenDTC;
  Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_1 HvMgmt_MonResBMSRlyOpenDTC;
  Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_2 HvMgmt_ErrStatBMSRlyOpenDTC;
  Rte_DT_dt_HvMgmt_BMSRlyOpenDTC_3 HvMgmt_ErrResBMSRlyOpenDTC;
} dt_HvMgmt_BMSRlyOpenDTC;

# define Rte_TypeDef_dt_HvMgmt_DCDCEnaFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_0 HvMgmt_MonStatDCDCEnaFltDTC;
  Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_1 HvMgmt_MonResDCDCEnaFltDTC;
  Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_2 HvMgmt_ErrStatDCDCEnaFltDTC;
  Rte_DT_dt_HvMgmt_DCDCEnaFltDTC_3 HvMgmt_ErrResDCDCEnaFltDTC;
} dt_HvMgmt_DCDCEnaFltDTC;

# define Rte_TypeDef_dt_HvMgmt_DCDCStopFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_DCDCStopFltDTC_0 HvMgmt_MonStatDCDCStopFltDTC;
  Rte_DT_dt_HvMgmt_DCDCStopFltDTC_1 HvMgmt_MonResDCDCStopFltDTC;
  Rte_DT_dt_HvMgmt_DCDCStopFltDTC_2 HvMgmt_ErrStatDCDCStopFltDTC;
  Rte_DT_dt_HvMgmt_DCDCStopFltDTC_3 HvMgmt_ErrResDCDCStopFltDTC;
} dt_HvMgmt_DCDCStopFltDTC;

# define Rte_TypeDef_dt_HvMgmt_DCFCRlyClsDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_0 HvMgmt_MonStatDCFCRlyClsDTC;
  Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_1 HvMgmt_MonResDCFCRlyClsDTC;
  Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_2 HvMgmt_ErrStatDCFCRlyClsDTC;
  Rte_DT_dt_HvMgmt_DCFCRlyClsDTC_3 HvMgmt_ErrResDCFCRlyClsDTC;
} dt_HvMgmt_DCFCRlyClsDTC;

# define Rte_TypeDef_dt_HvMgmt_MCUClsFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_MCUClsFltDTC_0 HvMgmt_MonStatMCUClsFltDTC;
  Rte_DT_dt_HvMgmt_MCUClsFltDTC_1 HvMgmt_MonResMCUClsFltDTC;
  Rte_DT_dt_HvMgmt_MCUClsFltDTC_2 HvMgmt_ErrStatMCUClsFltDTC;
  Rte_DT_dt_HvMgmt_MCUClsFltDTC_3 HvMgmt_ErrResMCUClsFltDTC;
} dt_HvMgmt_MCUClsFltDTC;

# define Rte_TypeDef_dt_HvMgmt_MCUEnaFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_MCUEnaFltDTC_0 HvMgmt_MonStatMCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_MCUEnaFltDTC_1 HvMgmt_MonResMCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_MCUEnaFltDTC_2 HvMgmt_ErrStatMCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_MCUEnaFltDTC_3 HvMgmt_ErrResMCUEnaFltDTC;
} dt_HvMgmt_MCUEnaFltDTC;

# define Rte_TypeDef_dt_HvMgmt_MCURdyFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_MCURdyFltDTC_0 HvMgmt_MonStatMCURdyFltDTC;
  Rte_DT_dt_HvMgmt_MCURdyFltDTC_1 HvMgmt_MonResMCURdyFltDTC;
  Rte_DT_dt_HvMgmt_MCURdyFltDTC_2 HvMgmt_ErrStatMCURdyFltDTC;
  Rte_DT_dt_HvMgmt_MCURdyFltDTC_3 HvMgmt_ErrResMCURdyFltDTC;
} dt_HvMgmt_MCURdyFltDTC;

# define Rte_TypeDef_dt_HvMgmt_MCURdyFltDTCOne
typedef struct
{
  Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_0 HvMgmt_MonStatMCURdyFltDTCOne;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_1 HvMgmt_MonResMCURdyFltDTCOne;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_2 HvMgmt_ErrStatMCURdyFltDTCOne;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCOne_3 HvMgmt_ErrResMCURdyFltDTCOne;
} dt_HvMgmt_MCURdyFltDTCOne;

# define Rte_TypeDef_dt_HvMgmt_MCURdyFltDTCTwo
typedef struct
{
  Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_0 HvMgmt_MonStatMCURdyFltDTCTwo;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_1 HvMgmt_MonResMCURdyFltDTCTwo;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_2 HvMgmt_ErrStatMCURdyFltDTCTwo;
  Rte_DT_dt_HvMgmt_MCURdyFltDTCTwo_3 HvMgmt_ErrResMCURdyFltDTCTwo;
} dt_HvMgmt_MCURdyFltDTCTwo;

# define Rte_TypeDef_dt_HvMgmt_PreheatPosRlyClsDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_0 HvMgmt_MonStatPreheatPosRlyClsDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_1 HvMgmt_MonResPreheatPosRlyClsDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_2 HvMgmt_ErrStatPreheatPosRlyClsDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyClsDTC_3 HvMgmt_ErrResPreheatPosRlyClsDTC;
} dt_HvMgmt_PreheatPosRlyClsDTC;

# define Rte_TypeDef_dt_HvMgmt_PreheatPosRlyOpenDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_0 HvMgmt_MonStatPreheatPosRlyOpenDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_1 HvMgmt_MonResPreheatPosRlyOpenDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_2 HvMgmt_ErrStatPreheatPosRlyOpenDTC;
  Rte_DT_dt_HvMgmt_PreheatPosRlyOpenDTC_3 HvMgmt_ErrResPreheatPosRlyOpenDTC;
} dt_HvMgmt_PreheatPosRlyOpenDTC;

# define Rte_TypeDef_dt_HvMgmt_TCUEnaFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_TCUEnaFltDTC_0 HvMgmt_MonStatTCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_TCUEnaFltDTC_1 HvMgmt_MonResTCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_TCUEnaFltDTC_2 HvMgmt_ErrStatTCUEnaFltDTC;
  Rte_DT_dt_HvMgmt_TCUEnaFltDTC_3 HvMgmt_ErrResTCUEnaFltDTC;
} dt_HvMgmt_TCUEnaFltDTC;

# define Rte_TypeDef_dt_HvMgmt_TCUStopFltDTC
typedef struct
{
  Rte_DT_dt_HvMgmt_TCUStopFltDTC_0 HvMgmt_MonStatTCUStopFltDTC;
  Rte_DT_dt_HvMgmt_TCUStopFltDTC_1 HvMgmt_MonResTCUStopFltDTC;
  Rte_DT_dt_HvMgmt_TCUStopFltDTC_2 HvMgmt_ErrStatTCUStopFltDTC;
  Rte_DT_dt_HvMgmt_TCUStopFltDTC_3 HvMgmt_ErrResTCUStopFltDTC;
} dt_HvMgmt_TCUStopFltDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattChrgIDcHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_0 LvMgmt_MonStatBSBattChrgIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_1 LvMgmt_MonResBSBattChrgIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_2 LvMgmt_ErrStatBSBattChrgIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_3 LvMgmt_ErrResBSBattChrgIDcHiDTC;
} dt_LvMgmt_BSBattChrgIDcHiDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattIDcHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_0 LvMgmt_MonStatBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_1 LvMgmt_MonResBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_2 LvMgmt_ErrStatBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_3 LvMgmt_ErrResBSBattIDcHiDTC;
} dt_LvMgmt_BSBattIDcHiDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattSOCLoDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_0 LvMgmt_MonStatBSBattSOCLoDTC;
  Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_1 LvMgmt_MonResBSBattSOCLoDTC;
  Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_2 LvMgmt_ErrStatBSBattSOCLoDTC;
  Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_3 LvMgmt_ErrResBSBattSOCLoDTC;
} dt_LvMgmt_BSBattSOCLoDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattTempHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattTempHiDTC_0 LvMgmt_MonStatBSBattTempHiDTC;
  Rte_DT_dt_LvMgmt_BSBattTempHiDTC_1 LvMgmt_MonResBSBattTempHiDTC;
  Rte_DT_dt_LvMgmt_BSBattTempHiDTC_2 LvMgmt_ErrStatBSBattTempHiDTC;
  Rte_DT_dt_LvMgmt_BSBattTempHiDTC_3 LvMgmt_ErrResBSBattTempHiDTC;
} dt_LvMgmt_BSBattTempHiDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattTempLoDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattTempLoDTC_0 LvMgmt_MonStatBSBattTempLoDTC;
  Rte_DT_dt_LvMgmt_BSBattTempLoDTC_1 LvMgmt_MonResBSBattTempLoDTC;
  Rte_DT_dt_LvMgmt_BSBattTempLoDTC_2 LvMgmt_ErrStatBSBattTempLoDTC;
  Rte_DT_dt_LvMgmt_BSBattTempLoDTC_3 LvMgmt_ErrResBSBattTempLoDTC;
} dt_LvMgmt_BSBattTempLoDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattUDcHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_0 LvMgmt_MonStatBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_1 LvMgmt_MonResBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_2 LvMgmt_ErrStatBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_3 LvMgmt_ErrResBSBattUDcHiDTC;
} dt_LvMgmt_BSBattUDcHiDTC;

# define Rte_TypeDef_dt_LvMgmt_BSBattUDcLoDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_0 LvMgmt_MonStatBSBattUDcLoDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_1 LvMgmt_MonResBSBattUDcLoDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_2 LvMgmt_ErrStatBSBattUDcLoDTC;
  Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_3 LvMgmt_ErrResBSBattUDcLoDTC;
} dt_LvMgmt_BSBattUDcLoDTC;

# define Rte_TypeDef_dt_LvMgmt_BSRespErrDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_BSRespErrDTC_0 LvMgmt_MonStatBSRespErrDTC;
  Rte_DT_dt_LvMgmt_BSRespErrDTC_1 LvMgmt_MonResBSRespErrDTC;
  Rte_DT_dt_LvMgmt_BSRespErrDTC_2 LvMgmt_ErrStatBSRespErrDTC;
  Rte_DT_dt_LvMgmt_BSRespErrDTC_3 LvMgmt_ErrResBSRespErrDTC;
} dt_LvMgmt_BSRespErrDTC;

# define Rte_TypeDef_dt_LvMgmt_ECUsDiagDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_ECUsDiagDTC_0 LvMgmt_MonStatECUsDiagDTC;
  Rte_DT_dt_LvMgmt_ECUsDiagDTC_1 LvMgmt_MonResECUsDiagDTC;
  Rte_DT_dt_LvMgmt_ECUsDiagDTC_2 LvMgmt_ErrStatECUsDiagDTC;
  Rte_DT_dt_LvMgmt_ECUsDiagDTC_3 LvMgmt_ErrResECUsDiagDTC;
} dt_LvMgmt_ECUsDiagDTC;

# define Rte_TypeDef_dt_LvMgmt_KL15eOffDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_KL15eOffDTC_0 LvMgmt_MonStatKL15eOffDTC;
  Rte_DT_dt_LvMgmt_KL15eOffDTC_1 LvMgmt_MonResKL15eOffDTC;
  Rte_DT_dt_LvMgmt_KL15eOffDTC_2 LvMgmt_ErrStatKL15eOffDTC;
  Rte_DT_dt_LvMgmt_KL15eOffDTC_3 LvMgmt_ErrResKL15eOffDTC;
} dt_LvMgmt_KL15eOffDTC;

# define Rte_TypeDef_dt_LvMgmt_KL15eOnDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_KL15eOnDTC_0 LvMgmt_MonStatKL15eOnDTC;
  Rte_DT_dt_LvMgmt_KL15eOnDTC_1 LvMgmt_MonResKL15eOnDTC;
  Rte_DT_dt_LvMgmt_KL15eOnDTC_2 LvMgmt_ErrStatKL15eOnDTC;
  Rte_DT_dt_LvMgmt_KL15eOnDTC_3 LvMgmt_ErrResKL15eOnDTC;
} dt_LvMgmt_KL15eOnDTC;

# define Rte_TypeDef_dt_LvMgmt_LvSysLoUdcDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_0 LvMgmt_MonStatLvSysLoUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_1 LvMgmt_MonResLvSysLoUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_2 LvMgmt_ErrStatLvSysLoUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_3 LvMgmt_ErrResLvSysLoUDcDTC;
} dt_LvMgmt_LvSysLoUdcDTC;

# define Rte_TypeDef_dt_LvMgmt_LvSysOvrUdcDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_0 LvMgmt_MonStatLvSysOvrUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_1 LvMgmt_MonResLvSysOvrUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_2 LvMgmt_ErrStatLvSysOvrUDcDTC;
  Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_3 LvMgmt_ErrResLvSysOvrUDcDTC;
} dt_LvMgmt_LvSysOvrUdcDTC;

# define Rte_TypeDef_dt_ModMgmt_OnePedlWarnHiSpd
typedef struct
{
  Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_0 ModMgmt_MonStatOnePedlWarnHiSpd;
  Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_1 ModMgmt_MonResOnePedlWarnHiSpd;
  Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_2 ModMgmt_ErrStatOnePedlWarnHiSpd;
  Rte_DT_dt_ModMgmt_OnePedlWarnHiSpd_3 ModMgmt_ErrResOnePedlWarnHiSpd;
} dt_ModMgmt_OnePedlWarnHiSpd;

# define Rte_TypeDef_dt_ModMgmt_OnePedlWarnVehFaild
typedef struct
{
  Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_0 ModMgmt_MonStatOnePedlWarnVehFaild;
  Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_1 ModMgmt_MonResOnePedlWarnVehFaild;
  Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_2 ModMgmt_ErrStatOnePedlWarnVehFaild;
  Rte_DT_dt_ModMgmt_OnePedlWarnVehFaild_3 ModMgmt_ErrResOnePedlWarnVehFaild;
} dt_ModMgmt_OnePedlWarnVehFaild;

# define Rte_TypeDef_dt_ModMgmt_SptModWarnLoSOC
typedef struct
{
  Rte_DT_dt_ModMgmt_SptModWarnLoSOC_0 ModMgmt_MonStatSptModWarnLoSOC;
  Rte_DT_dt_ModMgmt_SptModWarnLoSOC_1 ModMgmt_MonResSptModWarnLoSOC;
  Rte_DT_dt_ModMgmt_SptModWarnLoSOC_2 ModMgmt_ErrStatSptModWarnLoSOC;
  Rte_DT_dt_ModMgmt_SptModWarnLoSOC_3 ModMgmt_ErrResSptModWarnLoSOC;
} dt_ModMgmt_SptModWarnLoSOC;

# define Rte_TypeDef_dt_Nv_ChassisMgmtInfo
typedef struct
{
  Rte_DT_dt_Nv_ChassisMgmtInfo_0 ChassisMgmt_BrkCmpStsInfo;
  Rte_DT_dt_Nv_ChassisMgmtInfo_1 ChassisMgmt_FillAdressInfo;
} dt_Nv_ChassisMgmtInfo;

# define Rte_TypeDef_dt_Nv_ChrgEgyCalInfo
typedef struct
{
  Rte_DT_dt_Nv_ChrgEgyCalInfo_0 ChrMgmt_OBCSideTotDchaEgy_Wh;
  Rte_DT_dt_Nv_ChrgEgyCalInfo_1 ChrMgmt_PODSideTotChrgEgy_Wh;
  Rte_DT_dt_Nv_ChrgEgyCalInfo_2 ChrMgmt_BattSideTotChrgEgy_Wh;
  Rte_DT_dt_Nv_ChrgEgyCalInfo_3 ChrMgmt_DCChrgrSideTotChrgEgy_Wh;
  Rte_DT_dt_Nv_ChrgEgyCalInfo_4 ChrMgmt_OBCSideTotChrgEgy_Wh;
  Rte_DT_dt_Nv_ChrgEgyCalInfo_5 ChrMgmt_BattChrgCnt_Tms;
} dt_Nv_ChrgEgyCalInfo;

# define Rte_TypeDef_dt_Nv_ChrgStatInfo
typedef struct
{
  Rte_DT_dt_Nv_ChrgStatInfo_0 ChrMgmt_ChrgTarSOC_pct;
  Rte_DT_dt_Nv_ChrgStatInfo_1 ChrMgmt_ChrgMemFlt_Flg;
  Rte_DT_dt_Nv_ChrgStatInfo_2 ChrMgmt_DchaAbortSOC_pct;
  Rte_DT_dt_Nv_ChrgStatInfo_3 ChrMgmt_FillAddress;
} dt_Nv_ChrgStatInfo;

# define Rte_TypeDef_dt_Nv_GearMgmtInfo
typedef struct
{
  Rte_DT_dt_Nv_GearMgmtInfo_0 GearMgmt_GearMemInfo_Enum;
  Rte_DT_dt_Nv_GearMgmtInfo_1 GearMgmt_FillAddress;
} dt_Nv_GearMgmtInfo;

# define Rte_TypeDef_dt_Nv_ModMgmtInfo
typedef struct
{
  Rte_DT_dt_Nv_ModMgmtInfo_0 ModMgmt_DrvModMemInfo_Enum;
  Rte_DT_dt_Nv_ModMgmtInfo_1 ModMgmt_ActRgnStsMemInfo_Enum;
} dt_Nv_ModMgmtInfo;

# define Rte_TypeDef_dt_Nv_RngEstimnInfo
typedef struct
{
  Rte_DT_dt_Nv_RngEstimnInfo_0 RngEstimn_BMSBattIDcIntgl_As;
  Rte_DT_dt_Nv_RngEstimnInfo_1 RngEstimn_AccuMilg_m;
} dt_Nv_RngEstimnInfo;

# define Rte_TypeDef_dt_OBCMgmt_CPStsJmpErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_CPStsJmpErr_0 OBCMgmt_MonStatCPStsJmpErr;
  Rte_DT_dt_OBCMgmt_CPStsJmpErr_1 OBCMgmt_MonResCPStsJmpErr;
  Rte_DT_dt_OBCMgmt_CPStsJmpErr_2 OBCMgmt_ErrStatCPStsJmpErr;
  Rte_DT_dt_OBCMgmt_CPStsJmpErr_3 OBCMgmt_ErrResCPStsJmpErr;
} dt_OBCMgmt_CPStsJmpErr;

# define Rte_TypeDef_dt_OBCMgmt_CPStsJmpErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_0 OBCMgmt_MonStatCPStsJmpErrDTC;
  Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_1 OBCMgmt_MonResCPStsJmpErrDTC;
  Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_2 OBCMgmt_ErrStatCPStsJmpErrDTC;
  Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_3 OBCMgmt_ErrResCPStsJmpErrDTC;
} dt_OBCMgmt_CPStsJmpErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_ElectcLockClsErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_ElectcLockClsErr_0 OBCMgmt_MonStatElectcLockClsErr;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErr_1 OBCMgmt_MonResElectcLockClsErr;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErr_2 OBCMgmt_ErrStatElectcLockClsErr;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErr_3 OBCMgmt_ErrResElectcLockClsErr;
} dt_OBCMgmt_ElectcLockClsErr;

# define Rte_TypeDef_dt_OBCMgmt_ElectcLockClsErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_0 OBCMgmt_MonStatElectcLockClsErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_1 OBCMgmt_MonResElectcLockClsErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_2 OBCMgmt_ErrStatElectcLockClsErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockClsErrDTC_3 OBCMgmt_ErrResElectcLockClsErrDTC;
} dt_OBCMgmt_ElectcLockClsErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_ElectcLockOpenErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_0 OBCMgmt_MonStatElectcLockOpenErr;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_1 OBCMgmt_MonResElectcLockOpenErr;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_2 OBCMgmt_ErrStatElectcLockOpenErr;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErr_3 OBCMgmt_ErrResElectcLockOpenErr;
} dt_OBCMgmt_ElectcLockOpenErr;

# define Rte_TypeDef_dt_OBCMgmt_ElectcLockOpenErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_0 OBCMgmt_MonStatElectcLockOpenErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_1 OBCMgmt_MonResElectcLockOpenErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_2 OBCMgmt_ErrStatElectcLockOpenErrDTC;
  Rte_DT_dt_OBCMgmt_ElectcLockOpenErrDTC_3 OBCMgmt_ErrResElectcLockOpenErrDTC;
} dt_OBCMgmt_ElectcLockOpenErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_OBCChrgStsErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0 OBCMgmt_MonStatOBCChrgStsErr;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1 OBCMgmt_MonResOBCChrgStsErr;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2 OBCMgmt_ErrStatOBCChrgStsErr;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3 OBCMgmt_ErrResOBCChrgStsErr;
} dt_OBCMgmt_OBCChrgStsErr;

# define Rte_TypeDef_dt_OBCMgmt_OBCChrgStsErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_0 OBCMgmt_MonStatOBCChrgStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_1 OBCMgmt_MonResOBCChrgStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_2 OBCMgmt_ErrStatOBCChrgStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_3 OBCMgmt_ErrResOBCChrgStsErrDTC;
} dt_OBCMgmt_OBCChrgStsErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_OBCDchaStsErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0 OBCMgmt_MonStatOBCDchaStsErr;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1 OBCMgmt_MonResOBCDchaStsErr;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2 OBCMgmt_ErrStatOBCDchaStsErr;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3 OBCMgmt_ErrResOBCDchaStsErr;
} dt_OBCMgmt_OBCDchaStsErr;

# define Rte_TypeDef_dt_OBCMgmt_OBCDchaStsErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_0 OBCMgmt_MonStatOBCDchaStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_1 OBCMgmt_MonResOBCDchaStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_2 OBCMgmt_ErrStatOBCDchaStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_3 OBCMgmt_ErrResOBCDchaStsErrDTC;
} dt_OBCMgmt_OBCDchaStsErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_OBCDiErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCDiErr_0 OBCMgmt_MonStatOBCDiErr;
  Rte_DT_dt_OBCMgmt_OBCDiErr_1 OBCMgmt_MonResOBCDiErr;
  Rte_DT_dt_OBCMgmt_OBCDiErr_2 OBCMgmt_ErrStatOBCDiErr;
  Rte_DT_dt_OBCMgmt_OBCDiErr_3 OBCMgmt_ErrResOBCDiErr;
} dt_OBCMgmt_OBCDiErr;

# define Rte_TypeDef_dt_OBCMgmt_OBCDiErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCDiErrDTC_0 OBCMgmt_MonStatOBCDiErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDiErrDTC_1 OBCMgmt_MonResOBCDiErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDiErrDTC_2 OBCMgmt_ErrStatOBCDiErrDTC;
  Rte_DT_dt_OBCMgmt_OBCDiErrDTC_3 OBCMgmt_ErrResOBCDiErrDTC;
} dt_OBCMgmt_OBCDiErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_OBCInpUDcLoErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0 OBCMgmt_MonStatOBCInpUDcLoErr;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1 OBCMgmt_MonResOBCInpUDcLoErr;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2 OBCMgmt_ErrStatOBCInpUDcLoErr;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3 OBCMgmt_ErrResOBCInpUDcLoErr;
} dt_OBCMgmt_OBCInpUDcLoErr;

# define Rte_TypeDef_dt_OBCMgmt_OBCInpUDcLoErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_0 OBCMgmt_MonStatOBCInpUDcLoErrDTC;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_1 OBCMgmt_MonResOBCInpUDcLoErrDTC;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_2 OBCMgmt_ErrStatOBCInpUDcLoErrDTC;
  Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_3 OBCMgmt_ErrResOBCInpUDcLoErrDTC;
} dt_OBCMgmt_OBCInpUDcLoErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_OBCPreheatStsErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0 OBCMgmt_MonStatOBCPreheatStsErr;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1 OBCMgmt_MonResOBCPreheatStsErr;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2 OBCMgmt_ErrStatOBCPreheatStsErr;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3 OBCMgmt_ErrResOBCPreheatStsErr;
} dt_OBCMgmt_OBCPreheatStsErr;

# define Rte_TypeDef_dt_OBCMgmt_OBCPreheatStsErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_0 OBCMgmt_MonStatOBCPreheatStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_1 OBCMgmt_MonResOBCPreheatStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_2 OBCMgmt_ErrStatOBCPreheatStsErrDTC;
  Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_3 OBCMgmt_ErrResOBCPreheatStsErrDTC;
} dt_OBCMgmt_OBCPreheatStsErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_S2SwtClsErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_S2SwtClsErr_0 OBCMgmt_MonStatS2SwtClsErr;
  Rte_DT_dt_OBCMgmt_S2SwtClsErr_1 OBCMgmt_MonResS2SwtClsErr;
  Rte_DT_dt_OBCMgmt_S2SwtClsErr_2 OBCMgmt_ErrStatS2SwtClsErr;
  Rte_DT_dt_OBCMgmt_S2SwtClsErr_3 OBCMgmt_ErrResS2SwtClsErr;
} dt_OBCMgmt_S2SwtClsErr;

# define Rte_TypeDef_dt_OBCMgmt_S2SwtClsErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_0 OBCMgmt_MonStatS2SwtClsErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_1 OBCMgmt_MonResS2SwtClsErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_2 OBCMgmt_ErrStatS2SwtClsErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_3 OBCMgmt_ErrResS2SwtClsErrDTC;
} dt_OBCMgmt_S2SwtClsErrDTC;

# define Rte_TypeDef_dt_OBCMgmt_S2SwtOpenErr
typedef struct
{
  Rte_DT_dt_OBCMgmt_S2SwtOpenErr_0 OBCMgmt_MonStatS2SwtOpenErr;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErr_1 OBCMgmt_MonResS2SwtOpenErr;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErr_2 OBCMgmt_ErrStatS2SwtOpenErr;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErr_3 OBCMgmt_ErrResS2SwtOpenErr;
} dt_OBCMgmt_S2SwtOpenErr;

# define Rte_TypeDef_dt_OBCMgmt_S2SwtOpenErrDTC
typedef struct
{
  Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_0 OBCMgmt_MonStatS2SwtOpenErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_1 OBCMgmt_MonResS2SwtOpenErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_2 OBCMgmt_ErrStatS2SwtOpenErrDTC;
  Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_3 OBCMgmt_ErrResS2SwtOpenErrDTC;
} dt_OBCMgmt_S2SwtOpenErrDTC;

# define Rte_TypeDef_BCL_ChargeMode
typedef uint8 BCL_ChargeMode;

# define Rte_TypeDef_BCL_CurrentRequire
typedef float32 BCL_CurrentRequire;

# define Rte_TypeDef_BCL_VolltageRequire
typedef uint16 BCL_VolltageRequire;

# define Rte_TypeDef_BCP_AllowChargeVoltageMax
typedef uint16 BCP_AllowChargeVoltageMax;

# define Rte_TypeDef_BCP_AllowTempMax
typedef uint8 BCP_AllowTempMax;

# define Rte_TypeDef_BCP_BatteryChargeVoltageMax
typedef uint16 BCP_BatteryChargeVoltageMax;

# define Rte_TypeDef_BCP_BatteryNominalEnergy
typedef uint16 BCP_BatteryNominalEnergy;

# define Rte_TypeDef_BCP_BatteryTotalVoltage
typedef uint16 BCP_BatteryTotalVoltage;

# define Rte_TypeDef_BCP_ChargeCurrentMax
typedef uint16 BCP_ChargeCurrentMax;

# define Rte_TypeDef_BCP_SOC
typedef uint16 BCP_SOC;

# define Rte_TypeDef_BCS_BatteryVoltMax
typedef uint16 BCS_BatteryVoltMax;

# define Rte_TypeDef_BCS_BatteryVoltMaxGroup
typedef uint8 BCS_BatteryVoltMaxGroup;

# define Rte_TypeDef_BCS_ChargeCurrentMeasure
typedef uint16 BCS_ChargeCurrentMeasure;

# define Rte_TypeDef_BCS_ChargeVoltageMeasure
typedef uint16 BCS_ChargeVoltageMeasure;

# define Rte_TypeDef_BCS_EstimatedTimeRemaining
typedef uint16 BCS_EstimatedTimeRemaining;

# define Rte_TypeDef_BCS_SOC
typedef uint8 BCS_SOC;

# define Rte_TypeDef_BEM_ChargeAbortTimeout
typedef uint8 BEM_ChargeAbortTimeout;

# define Rte_TypeDef_BEM_ChargeFinishTimeout
typedef uint8 BEM_ChargeFinishTimeout;

# define Rte_TypeDef_BEM_ChargeStateTimeout
typedef uint8 BEM_ChargeStateTimeout;

# define Rte_TypeDef_BEM_ChargeStatisticsTimeout
typedef uint8 BEM_ChargeStatisticsTimeout;

# define Rte_TypeDef_BEM_ChargerIdTimeout0
typedef uint8 BEM_ChargerIdTimeout0;

# define Rte_TypeDef_BEM_ChargerIdTimeout1
typedef uint8 BEM_ChargerIdTimeout1;

# define Rte_TypeDef_BEM_TimesyncOrPowerTimeout
typedef uint8 BEM_TimesyncOrPowerTimeout;

# define Rte_TypeDef_BHM_AllowChargeVoltageMax
typedef uint16 BHM_AllowChargeVoltageMax;

# define Rte_TypeDef_BRM_BatteryChargeTimes
typedef uint32 BRM_BatteryChargeTimes;

# define Rte_TypeDef_BRM_BatteryProductDay
typedef uint8 BRM_BatteryProductDay;

# define Rte_TypeDef_BRM_BatteryProductMonth
typedef uint8 BRM_BatteryProductMonth;

# define Rte_TypeDef_BRM_BatteryProductYear
typedef uint8 BRM_BatteryProductYear;

# define Rte_TypeDef_BRM_BatteryProperty
typedef uint8 BRM_BatteryProperty;

# define Rte_TypeDef_BRM_BatterySN
typedef uint32 BRM_BatterySN;

# define Rte_TypeDef_BRM_BatterySystemRatedCapacity
typedef uint16 BRM_BatterySystemRatedCapacity;

# define Rte_TypeDef_BRM_BatterySystemRatedVoltage
typedef uint16 BRM_BatterySystemRatedVoltage;

# define Rte_TypeDef_BRM_BatteryType
typedef uint8 BRM_BatteryType;

# define Rte_TypeDef_BRM_Manufacturer
typedef uint32 BRM_Manufacturer;

# define Rte_TypeDef_BRM_ProtocolVersion
typedef uint32 BRM_ProtocolVersion;

# define Rte_TypeDef_BRM_VehicleIdByte17
typedef uint8 BRM_VehicleIdByte17;

# define Rte_TypeDef_BRO_BMSChargeReady
typedef uint8 BRO_BMSChargeReady;

# define Rte_TypeDef_BSD_AbortSOC
typedef uint8 BSD_AbortSOC;

# define Rte_TypeDef_BSD_BatteryTempMax
typedef uint8 BSD_BatteryTempMax;

# define Rte_TypeDef_BSD_BatteryTempMin
typedef uint8 BSD_BatteryTempMin;

# define Rte_TypeDef_BSD_BatteryVoltageMax
typedef uint16 BSD_BatteryVoltageMax;

# define Rte_TypeDef_BSD_BatteryVoltageMin
typedef uint16 BSD_BatteryVoltageMin;

# define Rte_TypeDef_BSM_BatteryCurrentState
typedef uint8 BSM_BatteryCurrentState;

# define Rte_TypeDef_BSM_BatteryOutpuConnectorState
typedef uint8 BSM_BatteryOutpuConnectorState;

# define Rte_TypeDef_BSM_BatteryTempMax
typedef uint8 BSM_BatteryTempMax;

# define Rte_TypeDef_BSM_BatteryTempMaxNo
typedef uint8 BSM_BatteryTempMaxNo;

# define Rte_TypeDef_BSM_BatteryTempMin
typedef uint8 BSM_BatteryTempMin;

# define Rte_TypeDef_BSM_BatteryTempMinNo
typedef uint8 BSM_BatteryTempMinNo;

# define Rte_TypeDef_BSM_BatteryTempState
typedef uint8 BSM_BatteryTempState;

# define Rte_TypeDef_BSM_BatteryVoltageMaxNo
typedef uint8 BSM_BatteryVoltageMaxNo;

# define Rte_TypeDef_BSM_BatteryVoltageState
typedef uint8 BSM_BatteryVoltageState;

# define Rte_TypeDef_BSM_ChargeEnable
typedef uint8 BSM_ChargeEnable;

# define Rte_TypeDef_BSM_InsulationState
typedef uint8 BSM_InsulationState;

# define Rte_TypeDef_BSM_SOC
typedef uint8 BSM_SOC;

# define Rte_TypeDef_BST_AbortAchiveSOC
typedef uint8 BST_AbortAchiveSOC;

# define Rte_TypeDef_BST_AbortAchiveSingleVolt
typedef uint8 BST_AbortAchiveSingleVolt;

# define Rte_TypeDef_BST_AbortAchiveTotalVolt
typedef uint8 BST_AbortAchiveTotalVolt;

# define Rte_TypeDef_BST_AbortErrorCurrent
typedef uint8 BST_AbortErrorCurrent;

# define Rte_TypeDef_BST_AbortErrorVoltage
typedef uint8 BST_AbortErrorVoltage;

# define Rte_TypeDef_BST_AbortFaultBMSTemp
typedef uint8 BST_AbortFaultBMSTemp;

# define Rte_TypeDef_BST_AbortFaultBatteryTemp
typedef uint8 BST_AbortFaultBatteryTemp;

# define Rte_TypeDef_BST_AbortFaultConnector
typedef uint8 BST_AbortFaultConnector;

# define Rte_TypeDef_BST_AbortFaultConnectorTemp
typedef uint8 BST_AbortFaultConnectorTemp;

# define Rte_TypeDef_BST_AbortFaultInsulation
typedef uint8 BST_AbortFaultInsulation;

# define Rte_TypeDef_BST_AbortFaultOther
typedef uint8 BST_AbortFaultOther;

# define Rte_TypeDef_BST_AbortHVrelayfault
typedef uint8 BST_AbortHVrelayfault;

# define Rte_TypeDef_BST_Abortdet2Voltexception
typedef uint8 BST_Abortdet2Voltexception;

# define Rte_TypeDef_BST_Abortmanoperate
typedef uint8 BST_Abortmanoperate;

# define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

# define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

# define Rte_TypeDef_CCS_OutputCurrent
typedef uint16 CCS_OutputCurrent;

# define Rte_TypeDef_CCS_OutputVoltage
typedef uint16 CCS_OutputVoltage;

# define Rte_TypeDef_CEM_BatteryChargeRequireTimeout
typedef uint8 CEM_BatteryChargeRequireTimeout;

# define Rte_TypeDef_CHM_ProtocolVersion
typedef uint32 CHM_ProtocolVersion;

# define Rte_TypeDef_CRM_RecognitionResult
typedef uint8 CRM_RecognitionResult;

# define Rte_TypeDef_CRO_ChargerReady
typedef uint8 CRO_ChargerReady;

# define Rte_TypeDef_CSD_ChargerNo
typedef uint32 CSD_ChargerNo;

# define Rte_TypeDef_CST_AbortAchiveCondition
typedef uint8 CST_AbortAchiveCondition;

# define Rte_TypeDef_CTS_Year
typedef uint16 CTS_Year;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint16 ComM_UserHandleType;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dcm_StartDataIn_Check_Memory_In_checksumPrimitiveType
typedef uint32 Dcm_StartDataIn_Check_Memory_In_checksumPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataIn_Check_Memory_In_checksumType
typedef Dcm_StartDataIn_Check_Memory_In_checksumPrimitiveType Dcm_StartDataIn_Check_Memory_In_checksumType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierPrimitiveType
typedef uint8 Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierType
typedef Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierPrimitiveType Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_memoryAddressPrimitiveType
typedef uint32 Dcm_StartDataIn_Erase_Memory_In_memoryAddressPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_memoryAddressType
typedef Dcm_StartDataIn_Erase_Memory_In_memoryAddressPrimitiveType Dcm_StartDataIn_Erase_Memory_In_memoryAddressType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_memorySizePrimitiveType
typedef uint32 Dcm_StartDataIn_Erase_Memory_In_memorySizePrimitiveType;

# define Rte_TypeDef_Dcm_StartDataIn_Erase_Memory_In_memorySizeType
typedef Dcm_StartDataIn_Erase_Memory_In_memorySizePrimitiveType Dcm_StartDataIn_Erase_Memory_In_memorySizeType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckCodingState_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_CheckCodingState_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckCodingState_Out_routineResultType
typedef Dcm_StartDataOut_CheckCodingState_Out_routineResultPrimitiveType Dcm_StartDataOut_CheckCodingState_Out_routineResultType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultType
typedef Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultPrimitiveType Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListArrayType
typedef uint8 Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListArrayType;

# define Rte_TypeDef_Dcm_StartDataOut_Check_Memory_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_Check_Memory_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_Check_Memory_Out_routineResultType
typedef Dcm_StartDataOut_Check_Memory_Out_routineResultPrimitiveType Dcm_StartDataOut_Check_Memory_Out_routineResultType;

# define Rte_TypeDef_Dcm_StartDataOut_Erase_Memory_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_Erase_Memory_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_Erase_Memory_Out_routineResultType
typedef Dcm_StartDataOut_Erase_Memory_Out_routineResultPrimitiveType Dcm_StartDataOut_Erase_Memory_Out_routineResultType;

# define Rte_TypeDef_Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultType
typedef Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultPrimitiveType Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultType;

# define Rte_TypeDef_Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType
typedef uint8 Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType
typedef Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType;

# define Rte_TypeDef_Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType
typedef uint8 Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType;

# define Rte_TypeDef_Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType
typedef Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultPrimitiveType Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

# define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_IOHWAB_UINT16
typedef uint16 IOHWAB_UINT16;

# define Rte_TypeDef_IOHWAB_UINT8
typedef uint8 IOHWAB_UINT8;

# define Rte_TypeDef_Rte_DT_SG_BMS_BatInfor_02_SigGroup_0
typedef uint64 Rte_DT_SG_BMS_BatInfor_02_SigGroup_0;

# define Rte_TypeDef_Rte_DT_SG_VCU_HMIsignals_03_SigGroup_2
typedef VCU_BS_QuiescentCurrent_1 Rte_DT_SG_VCU_HMIsignals_03_SigGroup_2;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListType
typedef Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListArrayType Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListType[1];

# define Rte_TypeDef_SG_BMS_BatInfor_02_SigGroup
typedef struct
{
  Rte_DT_SG_BMS_BatInfor_02_SigGroup_0 BMS_BatSupName;
} SG_BMS_BatInfor_02_SigGroup;

# define Rte_TypeDef_SG_VCU_HMIsignals_03_SigGroup
typedef struct
{
  VCU_Display_voltage_5 VCU_Display_voltage;
  VCU_BS_HCurrent_1 VCU_BS_HCurrent;
  Rte_DT_SG_VCU_HMIsignals_03_SigGroup_2 VCU_BS_QuiescentCurrent;
} SG_VCU_HMIsignals_03_SigGroup;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_ACU_LatA
typedef uint16 ACU_LatA;

#  define Rte_TypeDef_ACU_LgtA
typedef uint16 ACU_LgtA;

#  define Rte_TypeDef_ACU_YawRate
typedef uint16 ACU_YawRate;

#  define Rte_TypeDef_ADCU_AEB_Decel_Cmd
typedef uint16 ADCU_AEB_Decel_Cmd;

#  define Rte_TypeDef_ADCU_AHB_MaBeam_Req
typedef boolean ADCU_AHB_MaBeam_Req;

#  define Rte_TypeDef_ADCU_AHB_State
typedef uint8 ADCU_AHB_State;

#  define Rte_TypeDef_ADCU_APSMode
typedef uint8 ADCU_APSMode;

#  define Rte_TypeDef_ADCU_APS_CtrlSts
typedef uint8 ADCU_APS_CtrlSts;

#  define Rte_TypeDef_ADCU_DmsDriver
typedef boolean ADCU_DmsDriver;

#  define Rte_TypeDef_ADCU_HazardLampReq
typedef boolean ADCU_HazardLampReq;

#  define Rte_TypeDef_ADCU_LeftTurnLampReq
typedef uint8 ADCU_LeftTurnLampReq;

#  define Rte_TypeDef_ADCU_LftlndSta
typedef uint8 ADCU_LftlndSta;

#  define Rte_TypeDef_ADCU_PAS_CtrlSts
typedef uint8 ADCU_PAS_CtrlSts;

#  define Rte_TypeDef_ADCU_RCTA_Sta
typedef uint8 ADCU_RCTA_Sta;

#  define Rte_TypeDef_ADCU_RightTurnLampReq
typedef uint8 ADCU_RightTurnLampReq;

#  define Rte_TypeDef_ADCU_RtlndSta
typedef uint8 ADCU_RtlndSta;

#  define Rte_TypeDef_ADCU_SEALftWarningLevel
typedef uint8 ADCU_SEALftWarningLevel;

#  define Rte_TypeDef_ADCU_SEARtWarningLevel
typedef uint8 ADCU_SEARtWarningLevel;

#  define Rte_TypeDef_ADCU_SEA_State
typedef uint8 ADCU_SEA_State;

#  define Rte_TypeDef_ADCU_VibrationReq
typedef boolean ADCU_VibrationReq;

#  define Rte_TypeDef_APTC_PowerConsumption
typedef uint8 APTC_PowerConsumption;

#  define Rte_TypeDef_AdcHwAb_ChannelValue12Bit
typedef uint16 AdcHwAb_ChannelValue12Bit;

#  define Rte_TypeDef_AdcHwAb_ChannelValue_mV
typedef uint32 AdcHwAb_ChannelValue_mV;

#  define Rte_TypeDef_BCM_AntiTheftSts_1
typedef uint8 BCM_AntiTheftSts_1;

#  define Rte_TypeDef_BCM_AntiTheftSts_2
typedef uint8 BCM_AntiTheftSts_2;

#  define Rte_TypeDef_BCM_AntiTheftSts_3
typedef uint8 BCM_AntiTheftSts_3;

#  define Rte_TypeDef_BCM_ExhibitionSts
typedef uint8 BCM_ExhibitionSts;

#  define Rte_TypeDef_BCM_FailCode
typedef uint8 BCM_FailCode;

#  define Rte_TypeDef_BCM_Immo_State
typedef boolean BCM_Immo_State;

#  define Rte_TypeDef_BCM_Immo_State_YDF
typedef boolean BCM_Immo_State_YDF;

#  define Rte_TypeDef_BCM_LVonReqKeyNotInCar
typedef boolean BCM_LVonReqKeyNotInCar;

#  define Rte_TypeDef_BCM_RemoteForbidden
typedef uint8 BCM_RemoteForbidden;

#  define Rte_TypeDef_BCM_RemoteMode
typedef uint8 BCM_RemoteMode;

#  define Rte_TypeDef_BCM_SecOCFV_272
typedef uint16 BCM_SecOCFV_272;

#  define Rte_TypeDef_BCM_SecOCFV_273
typedef uint16 BCM_SecOCFV_273;

#  define Rte_TypeDef_BCM_SecOCFV_334
typedef uint16 BCM_SecOCFV_334;

#  define Rte_TypeDef_BCM_SecOCFV_335
typedef uint16 BCM_SecOCFV_335;

#  define Rte_TypeDef_BCM_SecOCMAC_272
typedef uint32 BCM_SecOCMAC_272;

#  define Rte_TypeDef_BCM_SecOCMAC_273
typedef uint32 BCM_SecOCMAC_273;

#  define Rte_TypeDef_BCM_SecOCMAC_334
typedef uint32 BCM_SecOCMAC_334;

#  define Rte_TypeDef_BCM_SecOCMAC_335
typedef uint32 BCM_SecOCMAC_335;

#  define Rte_TypeDef_BMS_AbortAchiveSingleVolt_1
typedef uint8 BMS_AbortAchiveSingleVolt_1;

#  define Rte_TypeDef_BMS_AbortAchiveSingleVolt_4
typedef uint8 BMS_AbortAchiveSingleVolt_4;

#  define Rte_TypeDef_BMS_AbortAchiveTotalVolt_1
typedef uint8 BMS_AbortAchiveTotalVolt_1;

#  define Rte_TypeDef_BMS_AbortAchiveTotalVolt_4
typedef uint8 BMS_AbortAchiveTotalVolt_4;

#  define Rte_TypeDef_BMS_AbortAchivesetValue_1
typedef uint8 BMS_AbortAchivesetValue_1;

#  define Rte_TypeDef_BMS_AbortAchivesetValue_4
typedef uint8 BMS_AbortAchivesetValue_4;

#  define Rte_TypeDef_BMS_AbortErrorCurrent_1
typedef uint8 BMS_AbortErrorCurrent_1;

#  define Rte_TypeDef_BMS_AbortErrorCurrent_4
typedef uint8 BMS_AbortErrorCurrent_4;

#  define Rte_TypeDef_BMS_AbortErrorVoltage_1
typedef uint8 BMS_AbortErrorVoltage_1;

#  define Rte_TypeDef_BMS_AbortErrorVoltage_4
typedef uint8 BMS_AbortErrorVoltage_4;

#  define Rte_TypeDef_BMS_AbortFaultBMSTemp_1
typedef uint8 BMS_AbortFaultBMSTemp_1;

#  define Rte_TypeDef_BMS_AbortFaultBMSTemp_4
typedef uint8 BMS_AbortFaultBMSTemp_4;

#  define Rte_TypeDef_BMS_AbortFaultBatteryTemp_1
typedef uint8 BMS_AbortFaultBatteryTemp_1;

#  define Rte_TypeDef_BMS_AbortFaultBatteryTemp_4
typedef uint8 BMS_AbortFaultBatteryTemp_4;

#  define Rte_TypeDef_BMS_AllowCellTemperature_2
typedef uint8 BMS_AllowCellTemperature_2;

#  define Rte_TypeDef_BMS_AllowChagCurrent_2
typedef uint16 BMS_AllowChagCurrent_2;

#  define Rte_TypeDef_BMS_AverageCellTemp
typedef uint8 BMS_AverageCellTemp;

#  define Rte_TypeDef_BMS_AverageCellTemp_1
typedef uint8 BMS_AverageCellTemp_1;

#  define Rte_TypeDef_BMS_BatChagSum_1
typedef uint16 BMS_BatChagSum_1;

#  define Rte_TypeDef_BMS_BatCode1
typedef uint8 BMS_BatCode1;

#  define Rte_TypeDef_BMS_BatCode2
typedef uint8 BMS_BatCode2;

#  define Rte_TypeDef_BMS_BatCode3
typedef uint8 BMS_BatCode3;

#  define Rte_TypeDef_BMS_BatCode4
typedef uint8 BMS_BatCode4;

#  define Rte_TypeDef_BMS_BatCode5
typedef uint8 BMS_BatCode5;

#  define Rte_TypeDef_BMS_BatCode6
typedef uint8 BMS_BatCode6;

#  define Rte_TypeDef_BMS_BatCodeFrameLength
typedef uint8 BMS_BatCodeFrameLength;

#  define Rte_TypeDef_BMS_BatCodeFrameNO
typedef uint8 BMS_BatCodeFrameNO;

#  define Rte_TypeDef_BMS_BatProDatDay_2
typedef uint8 BMS_BatProDatDay_2;

#  define Rte_TypeDef_BMS_BatProDatMonth_2
typedef uint8 BMS_BatProDatMonth_2;

#  define Rte_TypeDef_BMS_BatProDatYear_2
typedef uint8 BMS_BatProDatYear_2;

#  define Rte_TypeDef_BMS_BatProRights_2
typedef boolean BMS_BatProRights_2;

#  define Rte_TypeDef_BMS_BatType_2
typedef uint8 BMS_BatType_2;

#  define Rte_TypeDef_BMS_BattCurr_2
typedef uint16 BMS_BattCurr_2;

#  define Rte_TypeDef_BMS_BattVolt_2
typedef uint16 BMS_BattVolt_2;

#  define Rte_TypeDef_BMS_CellNumbers_1
typedef uint8 BMS_CellNumbers_1;

#  define Rte_TypeDef_BMS_ChagComplete_1
typedef uint8 BMS_ChagComplete_1;

#  define Rte_TypeDef_BMS_ChagComplete_4
typedef uint8 BMS_ChagComplete_4;

#  define Rte_TypeDef_BMS_ChargeRequest_1
typedef uint8 BMS_ChargeRequest_1;

#  define Rte_TypeDef_BMS_ChargeRequest_4
typedef uint8 BMS_ChargeRequest_4;

#  define Rte_TypeDef_BMS_ChrgDcChrgnReq
typedef uint8 BMS_ChrgDcChrgnReq;

#  define Rte_TypeDef_BMS_ComVersion_1
typedef uint16 BMS_ComVersion_1;

#  define Rte_TypeDef_BMS_DCChgMode_1
typedef uint8 BMS_DCChgMode_1;

#  define Rte_TypeDef_BMS_DCChgMode_4
typedef uint8 BMS_DCChgMode_4;

#  define Rte_TypeDef_BMS_DTC_1
typedef uint8 BMS_DTC_1;

#  define Rte_TypeDef_BMS_DisChgCurr_1
typedef uint16 BMS_DisChgCurr_1;

#  define Rte_TypeDef_BMS_DisChgCurr_2
typedef uint16 BMS_DisChgCurr_2;

#  define Rte_TypeDef_BMS_DisChgCurr_3
typedef uint16 BMS_DisChgCurr_3;

#  define Rte_TypeDef_BMS_DisplaySOC_2
typedef uint16 BMS_DisplaySOC_2;

#  define Rte_TypeDef_BMS_ErrorBSUBalance
typedef boolean BMS_ErrorBSUBalance;

#  define Rte_TypeDef_BMS_ErrorBSUOffline
typedef boolean BMS_ErrorBSUOffline;

#  define Rte_TypeDef_BMS_ErrorBatVolt
typedef uint8 BMS_ErrorBatVolt;

#  define Rte_TypeDef_BMS_ErrorBattOverVolt
typedef uint8 BMS_ErrorBattOverVolt;

#  define Rte_TypeDef_BMS_ErrorBattUnderVolt
typedef uint8 BMS_ErrorBattUnderVolt;

#  define Rte_TypeDef_BMS_ErrorCellHighTemp_2
typedef uint8 BMS_ErrorCellHighTemp_2;

#  define Rte_TypeDef_BMS_ErrorCellLowTemp_2
typedef uint8 BMS_ErrorCellLowTemp_2;

#  define Rte_TypeDef_BMS_ErrorCellOverVolt_2
typedef uint8 BMS_ErrorCellOverVolt_2;

#  define Rte_TypeDef_BMS_ErrorCellTempDiff
typedef uint8 BMS_ErrorCellTempDiff;

#  define Rte_TypeDef_BMS_ErrorCellTempOffline
typedef boolean BMS_ErrorCellTempOffline;

#  define Rte_TypeDef_BMS_ErrorCellUnderVolt_2
typedef uint8 BMS_ErrorCellUnderVolt_2;

#  define Rte_TypeDef_BMS_ErrorCellVoltDiff
typedef uint8 BMS_ErrorCellVoltDiff;

#  define Rte_TypeDef_BMS_ErrorCellVoltOffline
typedef boolean BMS_ErrorCellVoltOffline;

#  define Rte_TypeDef_BMS_ErrorChaCurrentOver_2
typedef uint8 BMS_ErrorChaCurrentOver_2;

#  define Rte_TypeDef_BMS_ErrorDisChaCurrentOver
typedef uint8 BMS_ErrorDisChaCurrentOver;

#  define Rte_TypeDef_BMS_ErrorEmergencyOffCrash
typedef boolean BMS_ErrorEmergencyOffCrash;

#  define Rte_TypeDef_BMS_ErrorHVIL_2
typedef boolean BMS_ErrorHVIL_2;

#  define Rte_TypeDef_BMS_ErrorHallOffline
typedef boolean BMS_ErrorHallOffline;

#  define Rte_TypeDef_BMS_ErrorHighSoc_2
typedef boolean BMS_ErrorHighSoc_2;

#  define Rte_TypeDef_BMS_ErrorLeakCurrent
typedef uint8 BMS_ErrorLeakCurrent;

#  define Rte_TypeDef_BMS_ErrorLeakDet
typedef boolean BMS_ErrorLeakDet;

#  define Rte_TypeDef_BMS_ErrorLowSoc_2
typedef uint8 BMS_ErrorLowSoc_2;

#  define Rte_TypeDef_BMS_ErrorRelay_2
typedef boolean BMS_ErrorRelay_2;

#  define Rte_TypeDef_BMS_ErrorSmoke
typedef boolean BMS_ErrorSmoke;

#  define Rte_TypeDef_BMS_ErrorSoCJump_RM
typedef boolean BMS_ErrorSoCJump_RM;

#  define Rte_TypeDef_BMS_ErrorSystemsMatch
typedef boolean BMS_ErrorSystemsMatch;

#  define Rte_TypeDef_BMS_FeedbackCurr_1
typedef uint16 BMS_FeedbackCurr_1;

#  define Rte_TypeDef_BMS_FeedbackCurr_2
typedef uint16 BMS_FeedbackCurr_2;

#  define Rte_TypeDef_BMS_HardVsesion_1
typedef uint8 BMS_HardVsesion_1;

#  define Rte_TypeDef_BMS_Heatcurrent_2
typedef uint16 BMS_Heatcurrent_2;

#  define Rte_TypeDef_BMS_KeepWarmRequest_2
typedef boolean BMS_KeepWarmRequest_2;

#  define Rte_TypeDef_BMS_KeepWarmStatus_2
typedef uint8 BMS_KeepWarmStatus_2;

#  define Rte_TypeDef_BMS_Life_1
typedef uint8 BMS_Life_1;

#  define Rte_TypeDef_BMS_LinkVoltage_2
typedef uint16 BMS_LinkVoltage_2;

#  define Rte_TypeDef_BMS_MaxCellTempModuleNO_1
typedef uint8 BMS_MaxCellTempModuleNO_1;

#  define Rte_TypeDef_BMS_MaxCellTempNO_1
typedef uint8 BMS_MaxCellTempNO_1;

#  define Rte_TypeDef_BMS_MaxCellTempNO_2
typedef uint8 BMS_MaxCellTempNO_2;

#  define Rte_TypeDef_BMS_MaxCellTemp_1
typedef uint8 BMS_MaxCellTemp_1;

#  define Rte_TypeDef_BMS_MaxCellTemp_2
typedef uint8 BMS_MaxCellTemp_2;

#  define Rte_TypeDef_BMS_MaxCellVoltageModuleNO_1
typedef uint8 BMS_MaxCellVoltageModuleNO_1;

#  define Rte_TypeDef_BMS_MaxCellVoltageModuleNO_2
typedef uint8 BMS_MaxCellVoltageModuleNO_2;

#  define Rte_TypeDef_BMS_MaxCellVoltageNO_1
typedef uint8 BMS_MaxCellVoltageNO_1;

#  define Rte_TypeDef_BMS_MaxCellVoltageNO_2
typedef uint8 BMS_MaxCellVoltageNO_2;

#  define Rte_TypeDef_BMS_MaxCellVoltage_1
typedef uint16 BMS_MaxCellVoltage_1;

#  define Rte_TypeDef_BMS_MaxCellVoltage_2
typedef uint16 BMS_MaxCellVoltage_2;

#  define Rte_TypeDef_BMS_MaxChagVoltage_2
typedef uint16 BMS_MaxChagVoltage_2;

#  define Rte_TypeDef_BMS_MinCellTempModuleNO_1
typedef uint8 BMS_MinCellTempModuleNO_1;

#  define Rte_TypeDef_BMS_MinCellTempNO_1
typedef uint8 BMS_MinCellTempNO_1;

#  define Rte_TypeDef_BMS_MinCellTempNO_2
typedef uint8 BMS_MinCellTempNO_2;

#  define Rte_TypeDef_BMS_MinCellTemp_1
typedef uint8 BMS_MinCellTemp_1;

#  define Rte_TypeDef_BMS_MinCellTemp_2
typedef uint8 BMS_MinCellTemp_2;

#  define Rte_TypeDef_BMS_MinCellVoltageModlueNO_1
typedef uint8 BMS_MinCellVoltageModlueNO_1;

#  define Rte_TypeDef_BMS_MinCellVoltageNO_1
typedef uint8 BMS_MinCellVoltageNO_1;

#  define Rte_TypeDef_BMS_MinCellVoltage_2
typedef uint16 BMS_MinCellVoltage_2;

#  define Rte_TypeDef_BMS_NegRelayStatus_1
typedef uint8 BMS_NegRelayStatus_1;

#  define Rte_TypeDef_BMS_NegRelayStatus_2
typedef uint8 BMS_NegRelayStatus_2;

#  define Rte_TypeDef_BMS_PTC_VoltageValue_1
typedef uint16 BMS_PTC_VoltageValue_1;

#  define Rte_TypeDef_BMS_PTC_VoltageValue_2
typedef uint16 BMS_PTC_VoltageValue_2;

#  define Rte_TypeDef_BMS_PTC_WorkStatus_1
typedef uint8 BMS_PTC_WorkStatus_1;

#  define Rte_TypeDef_BMS_PTC_WorkTime_1
typedef uint8 BMS_PTC_WorkTime_1;

#  define Rte_TypeDef_BMS_PackVoltage_2
typedef uint16 BMS_PackVoltage_2;

#  define Rte_TypeDef_BMS_PosRelayStatus_1
typedef uint8 BMS_PosRelayStatus_1;

#  define Rte_TypeDef_BMS_PosRelayStatus_2
typedef uint8 BMS_PosRelayStatus_2;

#  define Rte_TypeDef_BMS_RTC_Request_2
typedef boolean BMS_RTC_Request_2;

#  define Rte_TypeDef_BMS_RatBatVoltage_2
typedef uint16 BMS_RatBatVoltage_2;

#  define Rte_TypeDef_BMS_RatCapacity_2
typedef uint16 BMS_RatCapacity_2;

#  define Rte_TypeDef_BMS_RatEnergy_2
typedef uint16 BMS_RatEnergy_2;

#  define Rte_TypeDef_BMS_RemChagTime_2
typedef uint16 BMS_RemChagTime_2;

#  define Rte_TypeDef_BMS_RemainCapacity_2
typedef uint16 BMS_RemainCapacity_2;

#  define Rte_TypeDef_BMS_SOC_1
typedef uint16 BMS_SOC_1;

#  define Rte_TypeDef_BMS_SOH
typedef uint8 BMS_SOH;

#  define Rte_TypeDef_BMS_SOH_1
typedef uint8 BMS_SOH_1;

#  define Rte_TypeDef_BMS_SingChgkwh
typedef uint8 BMS_SingChgkwh;

#  define Rte_TypeDef_BMS_SoftVsesion_1
typedef uint8 BMS_SoftVsesion_1;

#  define Rte_TypeDef_BMS_StateDI2_1
typedef uint8 BMS_StateDI2_1;

#  define Rte_TypeDef_BMS_StateDI3_1
typedef uint8 BMS_StateDI3_1;

#  define Rte_TypeDef_BMS_StateDI4_1
typedef uint8 BMS_StateDI4_1;

#  define Rte_TypeDef_BMS_StateDI5_1
typedef uint8 BMS_StateDI5_1;

#  define Rte_TypeDef_BMS_StateDI6_1
typedef uint8 BMS_StateDI6_1;

#  define Rte_TypeDef_BMS_StateDI7_1
typedef uint8 BMS_StateDI7_1;

#  define Rte_TypeDef_BMS_StateDI8_1
typedef uint8 BMS_StateDI8_1;

#  define Rte_TypeDef_BMS_StateRelay4_1
typedef uint8 BMS_StateRelay4_1;

#  define Rte_TypeDef_BMS_StateRelay5_1
typedef uint8 BMS_StateRelay5_1;

#  define Rte_TypeDef_BMS_StateRelay6_1
typedef uint8 BMS_StateRelay6_1;

#  define Rte_TypeDef_BMS_StateRelay7_1
typedef uint8 BMS_StateRelay7_1;

#  define Rte_TypeDef_BMS_StateRelay8_1
typedef uint8 BMS_StateRelay8_1;

#  define Rte_TypeDef_BMS_SumChgkwh
typedef uint32 BMS_SumChgkwh;

#  define Rte_TypeDef_BMS_SumDisChgkwh
typedef uint32 BMS_SumDisChgkwh;

#  define Rte_TypeDef_BMS_SysRegInsulationValue
typedef uint16 BMS_SysRegInsulationValue;

#  define Rte_TypeDef_BMS_SysRegInsulationValue_1
typedef uint16 BMS_SysRegInsulationValue_1;

#  define Rte_TypeDef_BMS_ThermometerProbes_1
typedef uint8 BMS_ThermometerProbes_1;

#  define Rte_TypeDef_BS_BatCrntRawVal
typedef uint16 BS_BatCrntRawVal;

#  define Rte_TypeDef_BS_BatCrntRawValMult
typedef uint8 BS_BatCrntRawValMult;

#  define Rte_TypeDef_BS_BatCrnt_CHG_Diag
typedef uint8 BS_BatCrnt_CHG_Diag;

#  define Rte_TypeDef_BS_BatCrnt_DSG_Diag
typedef uint8 BS_BatCrnt_DSG_Diag;

#  define Rte_TypeDef_BS_BatTemp_HI_Diag
typedef uint8 BS_BatTemp_HI_Diag;

#  define Rte_TypeDef_BS_BatTemp_LOW_Diag
typedef uint8 BS_BatTemp_LOW_Diag;

#  define Rte_TypeDef_BS_BatVltHIRes
typedef uint16 BS_BatVltHIRes;

#  define Rte_TypeDef_BS_BatVlt_HI_Diag
typedef uint8 BS_BatVlt_HI_Diag;

#  define Rte_TypeDef_BS_BatVlt_LOW_Diag
typedef uint8 BS_BatVlt_LOW_Diag;

#  define Rte_TypeDef_BS_BattIntRes
typedef uint16 BS_BattIntRes;

#  define Rte_TypeDef_BS_BattNomRtnC20
typedef uint8 BS_BattNomRtnC20;

#  define Rte_TypeDef_BS_BattSOFVolt
typedef uint8 BS_BattSOFVolt;

#  define Rte_TypeDef_BS_BattSOH
typedef uint8 BS_BattSOH;

#  define Rte_TypeDef_BS_BattSOH_LIN
typedef uint8 BS_BattSOH_LIN;

#  define Rte_TypeDef_BS_BattTypeRtnC20
typedef uint8 BS_BattTypeRtnC20;

#  define Rte_TypeDef_BS_Batt_U0_MaxRtn
typedef uint8 BS_Batt_U0_MaxRtn;

#  define Rte_TypeDef_BS_Batt_U0_MinRtn
typedef uint8 BS_Batt_U0_MinRtn;

#  define Rte_TypeDef_BS_ComFtonNet
typedef boolean BS_ComFtonNet;

#  define Rte_TypeDef_BS_IBSBatSOC_LIN
typedef uint8 BS_IBSBatSOC_LIN;

#  define Rte_TypeDef_BS_LowerSOC
typedef boolean BS_LowerSOC;

#  define Rte_TypeDef_BS_RawTemp1
typedef uint8 BS_RawTemp1;

#  define Rte_TypeDef_CBM_SystemReadyReq_2
typedef uint8 CBM_SystemReadyReq_2;

#  define Rte_TypeDef_CGW_VERSION1
typedef uint8 CGW_VERSION1;

#  define Rte_TypeDef_CGW_VERSION1_1
typedef uint8 CGW_VERSION1_1;

#  define Rte_TypeDef_CGW_VERSION1_2
typedef uint8 CGW_VERSION1_2;

#  define Rte_TypeDef_CGW_VERSION2
typedef uint8 CGW_VERSION2;

#  define Rte_TypeDef_CGW_VERSION2_1
typedef uint8 CGW_VERSION2_1;

#  define Rte_TypeDef_CGW_VERSION2_2
typedef uint8 CGW_VERSION2_2;

#  define Rte_TypeDef_CGW_VIN0
typedef uint8 CGW_VIN0;

#  define Rte_TypeDef_CGW_VIN0_1
typedef uint8 CGW_VIN0_1;

#  define Rte_TypeDef_CGW_VIN0_2
typedef uint8 CGW_VIN0_2;

#  define Rte_TypeDef_CGW_VIN1
typedef uint8 CGW_VIN1;

#  define Rte_TypeDef_CGW_VIN10
typedef uint8 CGW_VIN10;

#  define Rte_TypeDef_CGW_VIN10_1
typedef uint8 CGW_VIN10_1;

#  define Rte_TypeDef_CGW_VIN10_2
typedef uint8 CGW_VIN10_2;

#  define Rte_TypeDef_CGW_VIN11
typedef uint8 CGW_VIN11;

#  define Rte_TypeDef_CGW_VIN11_1
typedef uint8 CGW_VIN11_1;

#  define Rte_TypeDef_CGW_VIN11_2
typedef uint8 CGW_VIN11_2;

#  define Rte_TypeDef_CGW_VIN12
typedef uint8 CGW_VIN12;

#  define Rte_TypeDef_CGW_VIN12_1
typedef uint8 CGW_VIN12_1;

#  define Rte_TypeDef_CGW_VIN12_2
typedef uint8 CGW_VIN12_2;

#  define Rte_TypeDef_CGW_VIN13
typedef uint8 CGW_VIN13;

#  define Rte_TypeDef_CGW_VIN13_1
typedef uint8 CGW_VIN13_1;

#  define Rte_TypeDef_CGW_VIN13_2
typedef uint8 CGW_VIN13_2;

#  define Rte_TypeDef_CGW_VIN14
typedef uint8 CGW_VIN14;

#  define Rte_TypeDef_CGW_VIN14_1
typedef uint8 CGW_VIN14_1;

#  define Rte_TypeDef_CGW_VIN14_2
typedef uint8 CGW_VIN14_2;

#  define Rte_TypeDef_CGW_VIN15
typedef uint8 CGW_VIN15;

#  define Rte_TypeDef_CGW_VIN15_1
typedef uint8 CGW_VIN15_1;

#  define Rte_TypeDef_CGW_VIN15_2
typedef uint8 CGW_VIN15_2;

#  define Rte_TypeDef_CGW_VIN16
typedef uint8 CGW_VIN16;

#  define Rte_TypeDef_CGW_VIN16_1
typedef uint8 CGW_VIN16_1;

#  define Rte_TypeDef_CGW_VIN16_2
typedef uint8 CGW_VIN16_2;

#  define Rte_TypeDef_CGW_VIN1_1
typedef uint8 CGW_VIN1_1;

#  define Rte_TypeDef_CGW_VIN1_2
typedef uint8 CGW_VIN1_2;

#  define Rte_TypeDef_CGW_VIN2
typedef uint8 CGW_VIN2;

#  define Rte_TypeDef_CGW_VIN2_1
typedef uint8 CGW_VIN2_1;

#  define Rte_TypeDef_CGW_VIN2_2
typedef uint8 CGW_VIN2_2;

#  define Rte_TypeDef_CGW_VIN3
typedef uint8 CGW_VIN3;

#  define Rte_TypeDef_CGW_VIN3_1
typedef uint8 CGW_VIN3_1;

#  define Rte_TypeDef_CGW_VIN3_2
typedef uint8 CGW_VIN3_2;

#  define Rte_TypeDef_CGW_VIN4
typedef uint8 CGW_VIN4;

#  define Rte_TypeDef_CGW_VIN4_1
typedef uint8 CGW_VIN4_1;

#  define Rte_TypeDef_CGW_VIN4_2
typedef uint8 CGW_VIN4_2;

#  define Rte_TypeDef_CGW_VIN5
typedef uint8 CGW_VIN5;

#  define Rte_TypeDef_CGW_VIN5_1
typedef uint8 CGW_VIN5_1;

#  define Rte_TypeDef_CGW_VIN5_2
typedef uint8 CGW_VIN5_2;

#  define Rte_TypeDef_CGW_VIN6
typedef uint8 CGW_VIN6;

#  define Rte_TypeDef_CGW_VIN6_1
typedef uint8 CGW_VIN6_1;

#  define Rte_TypeDef_CGW_VIN6_2
typedef uint8 CGW_VIN6_2;

#  define Rte_TypeDef_CGW_VIN7
typedef uint8 CGW_VIN7;

#  define Rte_TypeDef_CGW_VIN7_1
typedef uint8 CGW_VIN7_1;

#  define Rte_TypeDef_CGW_VIN7_2
typedef uint8 CGW_VIN7_2;

#  define Rte_TypeDef_CGW_VIN8
typedef uint8 CGW_VIN8;

#  define Rte_TypeDef_CGW_VIN8_1
typedef uint8 CGW_VIN8_1;

#  define Rte_TypeDef_CGW_VIN8_2
typedef uint8 CGW_VIN8_2;

#  define Rte_TypeDef_CGW_VIN9
typedef uint8 CGW_VIN9;

#  define Rte_TypeDef_CGW_VIN9_1
typedef uint8 CGW_VIN9_1;

#  define Rte_TypeDef_CGW_VIN9_2
typedef uint8 CGW_VIN9_2;

#  define Rte_TypeDef_Checksum_090
typedef uint8 Checksum_090;

#  define Rte_TypeDef_Checksum_094
typedef uint8 Checksum_094;

#  define Rte_TypeDef_Checksum_095
typedef uint8 Checksum_095;

#  define Rte_TypeDef_Checksum_096
typedef uint8 Checksum_096;

#  define Rte_TypeDef_Checksum_097
typedef uint8 Checksum_097;

#  define Rte_TypeDef_Checksum_098
typedef uint8 Checksum_098;

#  define Rte_TypeDef_Checksum_0B0
typedef uint8 Checksum_0B0;

#  define Rte_TypeDef_Checksum_0B0_1
typedef uint8 Checksum_0B0_1;

#  define Rte_TypeDef_Checksum_0B1
typedef uint8 Checksum_0B1;

#  define Rte_TypeDef_Checksum_0B1_1
typedef uint8 Checksum_0B1_1;

#  define Rte_TypeDef_Checksum_0B2
typedef uint8 Checksum_0B2;

#  define Rte_TypeDef_Checksum_0B2_1
typedef uint8 Checksum_0B2_1;

#  define Rte_TypeDef_Checksum_0B2_2
typedef uint8 Checksum_0B2_2;

#  define Rte_TypeDef_Checksum_0B3
typedef uint8 Checksum_0B3;

#  define Rte_TypeDef_Checksum_0B3_1
typedef uint8 Checksum_0B3_1;

#  define Rte_TypeDef_Checksum_0B3_2
typedef uint8 Checksum_0B3_2;

#  define Rte_TypeDef_Checksum_0B4
typedef uint8 Checksum_0B4;

#  define Rte_TypeDef_Checksum_0B4_3
typedef uint8 Checksum_0B4_3;

#  define Rte_TypeDef_Checksum_0B4_4
typedef uint8 Checksum_0B4_4;

#  define Rte_TypeDef_Checksum_0B4_5
typedef uint8 Checksum_0B4_5;

#  define Rte_TypeDef_Checksum_0B7
typedef uint8 Checksum_0B7;

#  define Rte_TypeDef_Checksum_0B7_1
typedef uint8 Checksum_0B7_1;

#  define Rte_TypeDef_Checksum_0B8
typedef uint8 Checksum_0B8;

#  define Rte_TypeDef_Checksum_0B8_1
typedef uint8 Checksum_0B8_1;

#  define Rte_TypeDef_Checksum_0B8_2
typedef uint8 Checksum_0B8_2;

#  define Rte_TypeDef_Checksum_0B8_3
typedef uint8 Checksum_0B8_3;

#  define Rte_TypeDef_Checksum_0B9
typedef uint8 Checksum_0B9;

#  define Rte_TypeDef_Checksum_0B9_1
typedef uint8 Checksum_0B9_1;

#  define Rte_TypeDef_Checksum_0BA
typedef uint8 Checksum_0BA;

#  define Rte_TypeDef_Checksum_0BA_1
typedef uint8 Checksum_0BA_1;

#  define Rte_TypeDef_Checksum_0BB
typedef uint8 Checksum_0BB;

#  define Rte_TypeDef_Checksum_0BB_1
typedef uint8 Checksum_0BB_1;

#  define Rte_TypeDef_Checksum_0BB_2
typedef uint8 Checksum_0BB_2;

#  define Rte_TypeDef_Checksum_0BC
typedef uint8 Checksum_0BC;

#  define Rte_TypeDef_Checksum_0BC_1
typedef uint8 Checksum_0BC_1;

#  define Rte_TypeDef_Checksum_0C1
typedef uint8 Checksum_0C1;

#  define Rte_TypeDef_Checksum_0C1_1
typedef uint8 Checksum_0C1_1;

#  define Rte_TypeDef_Checksum_0D1
typedef uint8 Checksum_0D1;

#  define Rte_TypeDef_Checksum_0D1_1
typedef uint8 Checksum_0D1_1;

#  define Rte_TypeDef_Checksum_0D2
typedef uint8 Checksum_0D2;

#  define Rte_TypeDef_Checksum_0D2_1
typedef uint8 Checksum_0D2_1;

#  define Rte_TypeDef_Checksum_0D3
typedef uint8 Checksum_0D3;

#  define Rte_TypeDef_Checksum_0E0
typedef uint8 Checksum_0E0;

#  define Rte_TypeDef_Checksum_0E0_1
typedef uint8 Checksum_0E0_1;

#  define Rte_TypeDef_Checksum_0E2
typedef uint8 Checksum_0E2;

#  define Rte_TypeDef_Checksum_0E2_1
typedef uint8 Checksum_0E2_1;

#  define Rte_TypeDef_Checksum_0E2_2
typedef uint8 Checksum_0E2_2;

#  define Rte_TypeDef_Checksum_0E4
typedef uint8 Checksum_0E4;

#  define Rte_TypeDef_Checksum_0E4_1
typedef uint8 Checksum_0E4_1;

#  define Rte_TypeDef_Checksum_0E4_2
typedef uint8 Checksum_0E4_2;

#  define Rte_TypeDef_Checksum_0E6
typedef uint8 Checksum_0E6;

#  define Rte_TypeDef_Checksum_0F5
typedef uint8 Checksum_0F5;

#  define Rte_TypeDef_Checksum_0F6
typedef uint8 Checksum_0F6;

#  define Rte_TypeDef_Checksum_100
typedef uint8 Checksum_100;

#  define Rte_TypeDef_Checksum_101
typedef uint8 Checksum_101;

#  define Rte_TypeDef_Checksum_103
typedef uint8 Checksum_103;

#  define Rte_TypeDef_Checksum_20A
typedef uint8 Checksum_20A;

#  define Rte_TypeDef_Checksum_20A_1
typedef uint8 Checksum_20A_1;

#  define Rte_TypeDef_Checksum_231
typedef uint8 Checksum_231;

#  define Rte_TypeDef_Checksum_232
typedef uint8 Checksum_232;

#  define Rte_TypeDef_Checksum_233
typedef uint8 Checksum_233;

#  define Rte_TypeDef_Checksum_234
typedef uint8 Checksum_234;

#  define Rte_TypeDef_Checksum_248
typedef uint8 Checksum_248;

#  define Rte_TypeDef_Checksum_253
typedef uint8 Checksum_253;

#  define Rte_TypeDef_Checksum_254
typedef uint8 Checksum_254;

#  define Rte_TypeDef_Checksum_278
typedef uint8 Checksum_278;

#  define Rte_TypeDef_Checksum_279
typedef uint8 Checksum_279;

#  define Rte_TypeDef_Checksum_284
typedef uint8 Checksum_284;

#  define Rte_TypeDef_Checksum_285
typedef uint8 Checksum_285;

#  define Rte_TypeDef_Checksum_286
typedef uint8 Checksum_286;

#  define Rte_TypeDef_Checksum_287
typedef uint8 Checksum_287;

#  define Rte_TypeDef_Checksum_28A
typedef uint8 Checksum_28A;

#  define Rte_TypeDef_Checksum_28A_1
typedef uint8 Checksum_28A_1;

#  define Rte_TypeDef_Checksum_2B6
typedef uint8 Checksum_2B6;

#  define Rte_TypeDef_Checksum_317
typedef uint8 Checksum_317;

#  define Rte_TypeDef_Checksum_318
typedef uint8 Checksum_318;

#  define Rte_TypeDef_Checksum_319
typedef uint8 Checksum_319;

#  define Rte_TypeDef_Checksum_320
typedef uint8 Checksum_320;

#  define Rte_TypeDef_Checksum_321
typedef uint8 Checksum_321;

#  define Rte_TypeDef_Checksum_322
typedef uint8 Checksum_322;

#  define Rte_TypeDef_Checksum_324
typedef uint8 Checksum_324;

#  define Rte_TypeDef_Checksum_33A
typedef uint8 Checksum_33A;

#  define Rte_TypeDef_Checksum_33A_1
typedef uint8 Checksum_33A_1;

#  define Rte_TypeDef_Checksum_90
typedef uint8 Checksum_90;

#  define Rte_TypeDef_Checksum_95
typedef uint8 Checksum_95;

#  define Rte_TypeDef_Checksum_96
typedef uint8 Checksum_96;

#  define Rte_TypeDef_Checksum_97
typedef uint8 Checksum_97;

#  define Rte_TypeDef_Checksum_98
typedef uint8 Checksum_98;

#  define Rte_TypeDef_Checksum_99
typedef uint8 Checksum_99;

#  define Rte_TypeDef_DCM_FR_AmbientTemperature
typedef uint8 DCM_FR_AmbientTemperature;

#  define Rte_TypeDef_EVCOM_ActlOprtMode
typedef uint8 EVCOM_ActlOprtMode;

#  define Rte_TypeDef_EVCOM_CompActlCnsmpCur_1
typedef uint8 EVCOM_CompActlCnsmpCur_1;

#  define Rte_TypeDef_EVCOM_CompActlPwrCnsmp_2
typedef uint8 EVCOM_CompActlPwrCnsmp_2;

#  define Rte_TypeDef_IBS_ABPActive_1
typedef boolean IBS_ABPActive_1;

#  define Rte_TypeDef_IBS_ABPAvailable_1
typedef boolean IBS_ABPAvailable_1;

#  define Rte_TypeDef_IBS_ABSActive_1
typedef boolean IBS_ABSActive_1;

#  define Rte_TypeDef_IBS_ABSFault_1
typedef boolean IBS_ABSFault_1;

#  define Rte_TypeDef_IBS_BrakePushrodStroke
typedef uint16 IBS_BrakePushrodStroke;

#  define Rte_TypeDef_IBS_BrakePushrodStroke_1
typedef uint16 IBS_BrakePushrodStroke_1;

#  define Rte_TypeDef_IBS_CDPAavilable
typedef boolean IBS_CDPAavilable;

#  define Rte_TypeDef_IBS_DTCfault_1
typedef boolean IBS_DTCfault_1;

#  define Rte_TypeDef_IBS_EBDActive_1
typedef boolean IBS_EBDActive_1;

#  define Rte_TypeDef_IBS_EBDFault_1
typedef boolean IBS_EBDFault_1;

#  define Rte_TypeDef_IBS_EPBTextdisplay_3
typedef uint8 IBS_EPBTextdisplay_3;

#  define Rte_TypeDef_IBS_EPBTextdisplay_4
typedef uint8 IBS_EPBTextdisplay_4;

#  define Rte_TypeDef_IBS_FLWheelPulseCounter
typedef uint8 IBS_FLWheelPulseCounter;

#  define Rte_TypeDef_IBS_FLWheelSpeed
typedef uint16 IBS_FLWheelSpeed;

#  define Rte_TypeDef_IBS_FRWheelPulseCounter
typedef uint8 IBS_FRWheelPulseCounter;

#  define Rte_TypeDef_IBS_FRWheelSpeed
typedef uint16 IBS_FRWheelSpeed;

#  define Rte_TypeDef_IBS_FRWheelSpeedFault
typedef boolean IBS_FRWheelSpeedFault;

#  define Rte_TypeDef_IBS_MasterCylinderPressure
typedef uint16 IBS_MasterCylinderPressure;

#  define Rte_TypeDef_IBS_MasterCylinderPressure_1
typedef uint16 IBS_MasterCylinderPressure_1;

#  define Rte_TypeDef_IBS_PlungerPressure
typedef uint16 IBS_PlungerPressure;

#  define Rte_TypeDef_IBS_PlungerPressure_1
typedef uint16 IBS_PlungerPressure_1;

#  define Rte_TypeDef_IBS_PlungerPressure_2
typedef uint16 IBS_PlungerPressure_2;

#  define Rte_TypeDef_IBS_RLWheelPulseCounter
typedef uint8 IBS_RLWheelPulseCounter;

#  define Rte_TypeDef_IBS_RLWheelSpeed
typedef uint16 IBS_RLWheelSpeed;

#  define Rte_TypeDef_IBS_RLWheelSpeed_1
typedef uint16 IBS_RLWheelSpeed_1;

#  define Rte_TypeDef_IBS_RRWheelPulseCounter
typedef uint8 IBS_RRWheelPulseCounter;

#  define Rte_TypeDef_IBS_RRWheelSpeed
typedef uint16 IBS_RRWheelSpeed;

#  define Rte_TypeDef_IBS_RRWheelSpeed_1
typedef uint16 IBS_RRWheelSpeed_1;

#  define Rte_TypeDef_IBS_SystemStatus_1
typedef uint8 IBS_SystemStatus_1;

#  define Rte_TypeDef_IBS_TCSFault_1
typedef boolean IBS_TCSFault_1;

#  define Rte_TypeDef_IBS_VCU_DecelerationRequest_Available_1
typedef uint8 IBS_VCU_DecelerationRequest_Available_1;

#  define Rte_TypeDef_IBS_VDCFault_1
typedef boolean IBS_VDCFault_1;

#  define Rte_TypeDef_IBS_VehicleSpeed
typedef uint16 IBS_VehicleSpeed;

#  define Rte_TypeDef_IBS_VehicleSpeed_1
typedef uint16 IBS_VehicleSpeed_1;

#  define Rte_TypeDef_IBS_VehicleSpeed_3
typedef uint16 IBS_VehicleSpeed_3;

#  define Rte_TypeDef_IBS_VehicleSpeed_4
typedef uint16 IBS_VehicleSpeed_4;

#  define Rte_TypeDef_IBS_VehiclespeedValid_1
typedef boolean IBS_VehiclespeedValid_1;

#  define Rte_TypeDef_IBS_WLTorqueAPSReq
typedef uint16 IBS_WLTorqueAPSReq;

#  define Rte_TypeDef_IBS_WLTorqueAPSReq_1
typedef uint16 IBS_WLTorqueAPSReq_1;

#  define Rte_TypeDef_IBS_WLTorqueIncrReq
typedef uint16 IBS_WLTorqueIncrReq;

#  define Rte_TypeDef_IBS_WLTorqueIncrReq_1
typedef uint16 IBS_WLTorqueIncrReq_1;

#  define Rte_TypeDef_IBS_WLTorqueRBSReq
typedef uint16 IBS_WLTorqueRBSReq;

#  define Rte_TypeDef_IBS_WLTorqueRBSReq_1
typedef uint16 IBS_WLTorqueRBSReq_1;

#  define Rte_TypeDef_IBS_WLTorqueRedReq
typedef uint16 IBS_WLTorqueRedReq;

#  define Rte_TypeDef_IBS_WLTorqueRedReq_1
typedef uint16 IBS_WLTorqueRedReq_1;

#  define Rte_TypeDef_IBS_WLTorqueVLCReq
typedef uint16 IBS_WLTorqueVLCReq;

#  define Rte_TypeDef_IBS_WLTorqueVLCReqValid
typedef boolean IBS_WLTorqueVLCReqValid;

#  define Rte_TypeDef_IBS_WLTorqueVLCReqValid_1
typedef uint8 IBS_WLTorqueVLCReqValid_1;

#  define Rte_TypeDef_IBS_WLTorqueVLCReqValid_2
typedef uint8 IBS_WLTorqueVLCReqValid_2;

#  define Rte_TypeDef_IBS_WLTorqueVLCReqValid_3
typedef uint8 IBS_WLTorqueVLCReqValid_3;

#  define Rte_TypeDef_IBS_WLTorqueVLCReq_1
typedef uint16 IBS_WLTorqueVLCReq_1;

#  define Rte_TypeDef_IBS_WLTorqueVLCReq_2
typedef uint16 IBS_WLTorqueVLCReq_2;

#  define Rte_TypeDef_IBS_WLTorqueVLCReq_3
typedef uint16 IBS_WLTorqueVLCReq_3;

#  define Rte_TypeDef_IVI_AVHSet
typedef uint8 IVI_AVHSet;

#  define Rte_TypeDef_IVI_AppointChargeCmd_2
typedef uint8 IVI_AppointChargeCmd_2;

#  define Rte_TypeDef_IVI_DriveModeSet_2
typedef uint8 IVI_DriveModeSet_2;

#  define Rte_TypeDef_IVI_DschrgOnOffSet_2
typedef uint8 IVI_DschrgOnOffSet_2;

#  define Rte_TypeDef_IVI_ESCOffSet
typedef uint8 IVI_ESCOffSet;

#  define Rte_TypeDef_IVI_ForwardVmaxAllowed_2
typedef uint8 IVI_ForwardVmaxAllowed_2;

#  define Rte_TypeDef_IVI_ForwardVmaxlimitSw_2
typedef uint8 IVI_ForwardVmaxlimitSw_2;

#  define Rte_TypeDef_IVI_HDCOffSet
typedef uint8 IVI_HDCOffSet;

#  define Rte_TypeDef_IVI_LockACPlug_2
typedef uint8 IVI_LockACPlug_2;

#  define Rte_TypeDef_IVI_MaxChrgSocSet_2
typedef uint8 IVI_MaxChrgSocSet_2;

#  define Rte_TypeDef_IVI_OdometerInforValid
typedef boolean IVI_OdometerInforValid;

#  define Rte_TypeDef_IVI_OdometerInfor_1
typedef uint32 IVI_OdometerInfor_1;

#  define Rte_TypeDef_IVI_OdometerInfor_2
typedef uint32 IVI_OdometerInfor_2;

#  define Rte_TypeDef_IVI_ResetReq
typedef boolean IVI_ResetReq;

#  define Rte_TypeDef_IVI_SteeringModeSet
typedef uint8 IVI_SteeringModeSet;

#  define Rte_TypeDef_IVI_TPMS_Reset
typedef boolean IVI_TPMS_Reset;

#  define Rte_TypeDef_IVI_V2LidisSet_2
typedef uint8 IVI_V2LidisSet_2;

#  define Rte_TypeDef_IVI_VrOnOffSet
typedef boolean IVI_VrOnOffSet;

#  define Rte_TypeDef_IoHwAb_AdcChannelType
typedef uint8 IoHwAb_AdcChannelType;

#  define Rte_TypeDef_IoHwAb_AdcGroupType
typedef uint16 IoHwAb_AdcGroupType;

#  define Rte_TypeDef_IoHwAb_DioChannelType
typedef uint8 IoHwAb_DioChannelType;

#  define Rte_TypeDef_MCU_ActUnfilteredRotSpd_1
typedef uint16 MCU_ActUnfilteredRotSpd_1;

#  define Rte_TypeDef_MCU_ActualSpeed
typedef uint16 MCU_ActualSpeed;

#  define Rte_TypeDef_MCU_ActualSpeed_1
typedef uint16 MCU_ActualSpeed_1;

#  define Rte_TypeDef_MCU_ActualSpeed_2
typedef uint16 MCU_ActualSpeed_2;

#  define Rte_TypeDef_MCU_ActualSpeed_3
typedef uint16 MCU_ActualSpeed_3;

#  define Rte_TypeDef_MCU_ActualTorque
typedef uint16 MCU_ActualTorque;

#  define Rte_TypeDef_MCU_ActualTorque_1
typedef uint16 MCU_ActualTorque_1;

#  define Rte_TypeDef_MCU_ActualTorque_2
typedef uint16 MCU_ActualTorque_2;

#  define Rte_TypeDef_MCU_ActualTorque_3
typedef uint16 MCU_ActualTorque_3;

#  define Rte_TypeDef_MCU_CodeVer
typedef uint16 MCU_CodeVer;

#  define Rte_TypeDef_MCU_CpldVer
typedef uint16 MCU_CpldVer;

#  define Rte_TypeDef_MCU_DataVer
typedef uint16 MCU_DataVer;

#  define Rte_TypeDef_MCU_DmpCTrqCurr
typedef uint8 MCU_DmpCTrqCurr;

#  define Rte_TypeDef_MCU_DmpCTrqCurr_1
typedef uint8 MCU_DmpCTrqCurr_1;

#  define Rte_TypeDef_MCU_FaultLevel_1
typedef uint8 MCU_FaultLevel_1;

#  define Rte_TypeDef_MCU_FunctionStatus
typedef uint8 MCU_FunctionStatus;

#  define Rte_TypeDef_MCU_HvMcuVer
typedef uint16 MCU_HvMcuVer;

#  define Rte_TypeDef_MCU_HwVer
typedef uint16 MCU_HwVer;

#  define Rte_TypeDef_MCU_IGBTOverTempWarn
typedef boolean MCU_IGBTOverTempWarn;

#  define Rte_TypeDef_MCU_IGBTTempMax_1
typedef uint8 MCU_IGBTTempMax_1;

#  define Rte_TypeDef_MCU_IGBTTempRiseMax
typedef uint8 MCU_IGBTTempRiseMax;

#  define Rte_TypeDef_MCU_IGBTTempRiseU
typedef uint8 MCU_IGBTTempRiseU;

#  define Rte_TypeDef_MCU_IGBTTempRiseV
typedef uint8 MCU_IGBTTempRiseV;

#  define Rte_TypeDef_MCU_IGBTTempRiseW
typedef uint8 MCU_IGBTTempRiseW;

#  define Rte_TypeDef_MCU_IGBTTempU_1
typedef uint8 MCU_IGBTTempU_1;

#  define Rte_TypeDef_MCU_IGBTTempV_1
typedef uint8 MCU_IGBTTempV_1;

#  define Rte_TypeDef_MCU_IGBTTempW_1
typedef uint8 MCU_IGBTTempW_1;

#  define Rte_TypeDef_MCU_IsCurr
typedef uint16 MCU_IsCurr;

#  define Rte_TypeDef_MCU_IsCurr_1
typedef uint16 MCU_IsCurr_1;

#  define Rte_TypeDef_MCU_IsCurr_2
typedef uint16 MCU_IsCurr_2;

#  define Rte_TypeDef_MCU_IsCurr_3
typedef uint16 MCU_IsCurr_3;

#  define Rte_TypeDef_MCU_Isd_1
typedef uint16 MCU_Isd_1;

#  define Rte_TypeDef_MCU_Isq_1
typedef uint16 MCU_Isq_1;

#  define Rte_TypeDef_MCU_MotOverTempWarn
typedef boolean MCU_MotOverTempWarn;

#  define Rte_TypeDef_MCU_OfsAl_1
typedef uint16 MCU_OfsAl_1;

#  define Rte_TypeDef_MCU_SpdMaxLimit_1
typedef uint16 MCU_SpdMaxLimit_1;

#  define Rte_TypeDef_MCU_StDischg
typedef uint8 MCU_StDischg;

#  define Rte_TypeDef_MCU_StGateDrv
typedef uint8 MCU_StGateDrv;

#  define Rte_TypeDef_MCU_TempCurrCool_1
typedef uint8 MCU_TempCurrCool_1;

#  define Rte_TypeDef_MCU_TempCurrStr1_1
typedef uint8 MCU_TempCurrStr1_1;

#  define Rte_TypeDef_MCU_TempCurrStr2_1
typedef uint8 MCU_TempCurrStr2_1;

#  define Rte_TypeDef_MCU_TempCurrStrMax_1
typedef uint8 MCU_TempCurrStrMax_1;

#  define Rte_TypeDef_MCU_TempRiseCurrStr
typedef uint8 MCU_TempRiseCurrStr;

#  define Rte_TypeDef_MCU_TempStatus_1
typedef uint8 MCU_TempStatus_1;

#  define Rte_TypeDef_MCU_TempStatus_2
typedef uint8 MCU_TempStatus_2;

#  define Rte_TypeDef_MCU_TotalFaultNum
typedef uint8 MCU_TotalFaultNum;

#  define Rte_TypeDef_MCU_TrqAbsMax_2
typedef uint16 MCU_TrqAbsMax_2;

#  define Rte_TypeDef_MCU_TrqAbsMin_2
typedef uint16 MCU_TrqAbsMin_2;

#  define Rte_TypeDef_MCU_UT15State
typedef boolean MCU_UT15State;

#  define Rte_TypeDef_MCU_UT30Curr_1
typedef uint8 MCU_UT30Curr_1;

#  define Rte_TypeDef_MCU_VCUWorkMode_1
typedef uint8 MCU_VCUWorkMode_1;

#  define Rte_TypeDef_MCU_VCUWorkMode_2
typedef uint8 MCU_VCUWorkMode_2;

#  define Rte_TypeDef_MessageCounter_094
typedef uint8 MessageCounter_094;

#  define Rte_TypeDef_MessageCounter_095
typedef uint8 MessageCounter_095;

#  define Rte_TypeDef_MessageCounter_096
typedef uint8 MessageCounter_096;

#  define Rte_TypeDef_MessageCounter_097
typedef uint8 MessageCounter_097;

#  define Rte_TypeDef_MessageCounter_0B0_1
typedef uint8 MessageCounter_0B0_1;

#  define Rte_TypeDef_MessageCounter_0B1_1
typedef uint8 MessageCounter_0B1_1;

#  define Rte_TypeDef_MessageCounter_0B2
typedef uint8 MessageCounter_0B2;

#  define Rte_TypeDef_MessageCounter_0B2_1
typedef uint8 MessageCounter_0B2_1;

#  define Rte_TypeDef_MessageCounter_0B2_2
typedef uint8 MessageCounter_0B2_2;

#  define Rte_TypeDef_MessageCounter_0B3_1
typedef uint8 MessageCounter_0B3_1;

#  define Rte_TypeDef_MessageCounter_0B4_3
typedef uint8 MessageCounter_0B4_3;

#  define Rte_TypeDef_MessageCounter_0B4_4
typedef uint8 MessageCounter_0B4_4;

#  define Rte_TypeDef_MessageCounter_0B4_5
typedef uint8 MessageCounter_0B4_5;

#  define Rte_TypeDef_MessageCounter_0B7
typedef uint8 MessageCounter_0B7;

#  define Rte_TypeDef_MessageCounter_0B7_1
typedef uint8 MessageCounter_0B7_1;

#  define Rte_TypeDef_MessageCounter_0B7_2
typedef uint8 MessageCounter_0B7_2;

#  define Rte_TypeDef_MessageCounter_0B8
typedef uint8 MessageCounter_0B8;

#  define Rte_TypeDef_MessageCounter_0B8_1
typedef uint8 MessageCounter_0B8_1;

#  define Rte_TypeDef_MessageCounter_0B8_2
typedef uint8 MessageCounter_0B8_2;

#  define Rte_TypeDef_MessageCounter_0B8_3
typedef uint8 MessageCounter_0B8_3;

#  define Rte_TypeDef_MessageCounter_0B9
typedef uint8 MessageCounter_0B9;

#  define Rte_TypeDef_MessageCounter_0B9_1
typedef uint8 MessageCounter_0B9_1;

#  define Rte_TypeDef_MessageCounter_0BA
typedef uint8 MessageCounter_0BA;

#  define Rte_TypeDef_MessageCounter_0BA_1
typedef uint8 MessageCounter_0BA_1;

#  define Rte_TypeDef_MessageCounter_0BB
typedef uint8 MessageCounter_0BB;

#  define Rte_TypeDef_MessageCounter_0BB_1
typedef uint8 MessageCounter_0BB_1;

#  define Rte_TypeDef_MessageCounter_0BB_2
typedef uint8 MessageCounter_0BB_2;

#  define Rte_TypeDef_MessageCounter_0BC_1
typedef uint8 MessageCounter_0BC_1;

#  define Rte_TypeDef_MessageCounter_0C1
typedef uint8 MessageCounter_0C1;

#  define Rte_TypeDef_MessageCounter_0C1_1
typedef uint8 MessageCounter_0C1_1;

#  define Rte_TypeDef_MessageCounter_0D1
typedef uint8 MessageCounter_0D1;

#  define Rte_TypeDef_MessageCounter_0D1_1
typedef uint8 MessageCounter_0D1_1;

#  define Rte_TypeDef_MessageCounter_0D2
typedef uint8 MessageCounter_0D2;

#  define Rte_TypeDef_MessageCounter_0D2_1
typedef uint8 MessageCounter_0D2_1;

#  define Rte_TypeDef_MessageCounter_0D3
typedef uint8 MessageCounter_0D3;

#  define Rte_TypeDef_MessageCounter_0E0_1
typedef uint8 MessageCounter_0E0_1;

#  define Rte_TypeDef_MessageCounter_0E4
typedef uint8 MessageCounter_0E4;

#  define Rte_TypeDef_MessageCounter_0E4_1
typedef uint8 MessageCounter_0E4_1;

#  define Rte_TypeDef_MessageCounter_0E4_2
typedef uint8 MessageCounter_0E4_2;

#  define Rte_TypeDef_MessageCounter_0E4_3
typedef uint8 MessageCounter_0E4_3;

#  define Rte_TypeDef_MessageCounter_0F5
typedef uint8 MessageCounter_0F5;

#  define Rte_TypeDef_MessageCounter_0F6
typedef uint8 MessageCounter_0F6;

#  define Rte_TypeDef_MessageCounter_100
typedef uint8 MessageCounter_100;

#  define Rte_TypeDef_MessageCounter_101
typedef uint8 MessageCounter_101;

#  define Rte_TypeDef_MessageCounter_102
typedef uint8 MessageCounter_102;

#  define Rte_TypeDef_MessageCounter_103
typedef uint8 MessageCounter_103;

#  define Rte_TypeDef_MessageCounter_104
typedef uint8 MessageCounter_104;

#  define Rte_TypeDef_MessageCounter_105
typedef uint8 MessageCounter_105;

#  define Rte_TypeDef_MessageCounter_106
typedef uint8 MessageCounter_106;

#  define Rte_TypeDef_MessageCounter_107
typedef uint8 MessageCounter_107;

#  define Rte_TypeDef_MessageCounter_20A
typedef uint8 MessageCounter_20A;

#  define Rte_TypeDef_MessageCounter_20A_1
typedef uint8 MessageCounter_20A_1;

#  define Rte_TypeDef_MessageCounter_231
typedef uint8 MessageCounter_231;

#  define Rte_TypeDef_MessageCounter_232
typedef uint8 MessageCounter_232;

#  define Rte_TypeDef_MessageCounter_233
typedef uint8 MessageCounter_233;

#  define Rte_TypeDef_MessageCounter_234
typedef uint8 MessageCounter_234;

#  define Rte_TypeDef_MessageCounter_248
typedef uint8 MessageCounter_248;

#  define Rte_TypeDef_MessageCounter_253
typedef uint8 MessageCounter_253;

#  define Rte_TypeDef_MessageCounter_254
typedef uint8 MessageCounter_254;

#  define Rte_TypeDef_MessageCounter_271
typedef uint8 MessageCounter_271;

#  define Rte_TypeDef_MessageCounter_272
typedef uint8 MessageCounter_272;

#  define Rte_TypeDef_MessageCounter_273
typedef uint8 MessageCounter_273;

#  define Rte_TypeDef_MessageCounter_274
typedef uint8 MessageCounter_274;

#  define Rte_TypeDef_MessageCounter_278
typedef uint8 MessageCounter_278;

#  define Rte_TypeDef_MessageCounter_279
typedef uint8 MessageCounter_279;

#  define Rte_TypeDef_MessageCounter_284
typedef uint8 MessageCounter_284;

#  define Rte_TypeDef_MessageCounter_285
typedef uint8 MessageCounter_285;

#  define Rte_TypeDef_MessageCounter_286
typedef uint8 MessageCounter_286;

#  define Rte_TypeDef_MessageCounter_287
typedef uint8 MessageCounter_287;

#  define Rte_TypeDef_MessageCounter_28A_1
typedef uint8 MessageCounter_28A_1;

#  define Rte_TypeDef_MessageCounter_2B6
typedef uint8 MessageCounter_2B6;

#  define Rte_TypeDef_MessageCounter_317
typedef uint8 MessageCounter_317;

#  define Rte_TypeDef_MessageCounter_318
typedef uint8 MessageCounter_318;

#  define Rte_TypeDef_MessageCounter_319
typedef uint8 MessageCounter_319;

#  define Rte_TypeDef_MessageCounter_320
typedef uint8 MessageCounter_320;

#  define Rte_TypeDef_MessageCounter_321
typedef uint8 MessageCounter_321;

#  define Rte_TypeDef_MessageCounter_322
typedef uint8 MessageCounter_322;

#  define Rte_TypeDef_MessageCounter_324
typedef uint8 MessageCounter_324;

#  define Rte_TypeDef_MessageCounter_33A_1
typedef uint8 MessageCounter_33A_1;

#  define Rte_TypeDef_MessageCounter_90
typedef uint8 MessageCounter_90;

#  define Rte_TypeDef_MessageCounter_96
typedef uint8 MessageCounter_96;

#  define Rte_TypeDef_MessageCounter_97
typedef uint8 MessageCounter_97;

#  define Rte_TypeDef_MessageCounter_98
typedef uint8 MessageCounter_98;

#  define Rte_TypeDef_MessageCounter_99
typedef uint8 MessageCounter_99;

#  define Rte_TypeDef_OBC_OutputIsolatedFault
typedef boolean OBC_OutputIsolatedFault;

#  define Rte_TypeDef_POD_CANBusoff
typedef boolean POD_CANBusoff;

#  define Rte_TypeDef_POD_DCDC_CommunFault
typedef boolean POD_DCDC_CommunFault;

#  define Rte_TypeDef_POD_DCDC_FaultLevel_2
typedef uint8 POD_DCDC_FaultLevel_2;

#  define Rte_TypeDef_POD_DCDC_HVInputCurrent_2
typedef uint8 POD_DCDC_HVInputCurrent_2;

#  define Rte_TypeDef_POD_DCDC_HVInputVoltage_2
typedef uint16 POD_DCDC_HVInputVoltage_2;

#  define Rte_TypeDef_POD_DCDC_InputVoltHighFault
typedef boolean POD_DCDC_InputVoltHighFault;

#  define Rte_TypeDef_POD_DCDC_InputVoltLowFault
typedef boolean POD_DCDC_InputVoltLowFault;

#  define Rte_TypeDef_POD_DCDC_InternalFault
typedef boolean POD_DCDC_InternalFault;

#  define Rte_TypeDef_POD_DCDC_LVOutputCurrent_1
typedef uint16 POD_DCDC_LVOutputCurrent_1;

#  define Rte_TypeDef_POD_DCDC_LVOutputVoltage_1
typedef uint8 POD_DCDC_LVOutputVoltage_1;

#  define Rte_TypeDef_POD_DCDC_Maxoutputpower_1
typedef uint8 POD_DCDC_Maxoutputpower_1;

#  define Rte_TypeDef_POD_DCDC_OutCurSensorFault
typedef boolean POD_DCDC_OutCurSensorFault;

#  define Rte_TypeDef_POD_DCDC_OutputCurrentHighFault
typedef boolean POD_DCDC_OutputCurrentHighFault;

#  define Rte_TypeDef_POD_DCDC_OutputTempSensorFault
typedef boolean POD_DCDC_OutputTempSensorFault;

#  define Rte_TypeDef_POD_DCDC_OutputVoltHighFault
typedef boolean POD_DCDC_OutputVoltHighFault;

#  define Rte_TypeDef_POD_DCDC_OutputVoltLowFault
typedef boolean POD_DCDC_OutputVoltLowFault;

#  define Rte_TypeDef_POD_DCDC_Outputopencircuiterror
typedef boolean POD_DCDC_Outputopencircuiterror;

#  define Rte_TypeDef_POD_DCDC_SecondarySideTemp
typedef uint8 POD_DCDC_SecondarySideTemp;

#  define Rte_TypeDef_POD_DCDC_SecondarySideTemp_1
typedef uint8 POD_DCDC_SecondarySideTemp_1;

#  define Rte_TypeDef_POD_DCDC_Side2Overtempfault_2
typedef boolean POD_DCDC_Side2Overtempfault_2;

#  define Rte_TypeDef_POD_DCDC_WorkMode_2
typedef uint8 POD_DCDC_WorkMode_2;

#  define Rte_TypeDef_POD_DCFCVoltage_2
typedef uint16 POD_DCFCVoltage_2;

#  define Rte_TypeDef_POD_DCInletTempA_2
typedef uint8 POD_DCInletTempA_2;

#  define Rte_TypeDef_POD_DCInletTempB_2
typedef uint8 POD_DCInletTempB_2;

#  define Rte_TypeDef_POD_DCPortInletTempAValid_2
typedef uint8 POD_DCPortInletTempAValid_2;

#  define Rte_TypeDef_POD_DCPortInletTempBValid_2
typedef uint8 POD_DCPortInletTempBValid_2;

#  define Rte_TypeDef_POD_DCPosRelayState_2
typedef uint8 POD_DCPosRelayState_2;

#  define Rte_TypeDef_POD_KL30Error
typedef boolean POD_KL30Error;

#  define Rte_TypeDef_POD_OBC_ACFrequencyStatus_1
typedef uint8 POD_OBC_ACFrequencyStatus_1;

#  define Rte_TypeDef_POD_OBC_ACPortTempASensValid
typedef uint8 POD_OBC_ACPortTempASensValid;

#  define Rte_TypeDef_POD_OBC_ACPortTempA_1
typedef uint8 POD_OBC_ACPortTempA_1;

#  define Rte_TypeDef_POD_OBC_ACPortTempAerror
typedef boolean POD_OBC_ACPortTempAerror;

#  define Rte_TypeDef_POD_OBC_ACPortTempBSensValid
typedef uint8 POD_OBC_ACPortTempBSensValid;

#  define Rte_TypeDef_POD_OBC_ACPortTempB_1
typedef uint8 POD_OBC_ACPortTempB_1;

#  define Rte_TypeDef_POD_OBC_ACPortTempBerror
typedef boolean POD_OBC_ACPortTempBerror;

#  define Rte_TypeDef_POD_OBC_ACVoltHighFault
typedef boolean POD_OBC_ACVoltHighFault;

#  define Rte_TypeDef_POD_OBC_ACVoltLowFault
typedef boolean POD_OBC_ACVoltLowFault;

#  define Rte_TypeDef_POD_OBC_CCCurrentLimit_1
typedef uint8 POD_OBC_CCCurrentLimit_1;

#  define Rte_TypeDef_POD_OBC_CCCurrentLimit_2
typedef uint8 POD_OBC_CCCurrentLimit_2;

#  define Rte_TypeDef_POD_OBC_CCStatus_1
typedef uint8 POD_OBC_CCStatus_1;

#  define Rte_TypeDef_POD_OBC_CCStatus_2
typedef uint8 POD_OBC_CCStatus_2;

#  define Rte_TypeDef_POD_OBC_CPCurrentLimit_1
typedef uint8 POD_OBC_CPCurrentLimit_1;

#  define Rte_TypeDef_POD_OBC_CPCurrentLimit_2
typedef uint8 POD_OBC_CPCurrentLimit_2;

#  define Rte_TypeDef_POD_OBC_CPDuty_1
typedef uint8 POD_OBC_CPDuty_1;

#  define Rte_TypeDef_POD_OBC_CPDuty_2
typedef uint8 POD_OBC_CPDuty_2;

#  define Rte_TypeDef_POD_OBC_CPFrequency_1
typedef uint16 POD_OBC_CPFrequency_1;

#  define Rte_TypeDef_POD_OBC_CPStatus_1
typedef uint8 POD_OBC_CPStatus_1;

#  define Rte_TypeDef_POD_OBC_CPStatus_2
typedef uint8 POD_OBC_CPStatus_2;

#  define Rte_TypeDef_POD_OBC_ChargCapacibility_1
typedef uint8 POD_OBC_ChargCapacibility_1;

#  define Rte_TypeDef_POD_OBC_ChargCapacibility_2
typedef uint8 POD_OBC_ChargCapacibility_2;

#  define Rte_TypeDef_POD_OBC_ChrgOutpPwrAvl_1
typedef uint8 POD_OBC_ChrgOutpPwrAvl_1;

#  define Rte_TypeDef_POD_OBC_CommunFault
typedef boolean POD_OBC_CommunFault;

#  define Rte_TypeDef_POD_OBC_DCCurHighFault
typedef boolean POD_OBC_DCCurHighFault;

#  define Rte_TypeDef_POD_OBC_DCVoltHighFault
typedef boolean POD_OBC_DCVoltHighFault;

#  define Rte_TypeDef_POD_OBC_DCVoltLowFault
typedef boolean POD_OBC_DCVoltLowFault;

#  define Rte_TypeDef_POD_OBC_EMLockState_1
typedef uint8 POD_OBC_EMLockState_1;

#  define Rte_TypeDef_POD_OBC_EMLockState_2
typedef uint8 POD_OBC_EMLockState_2;

#  define Rte_TypeDef_POD_OBC_FaultLevel_1
typedef uint8 POD_OBC_FaultLevel_1;

#  define Rte_TypeDef_POD_OBC_FaultLevel_2
typedef uint8 POD_OBC_FaultLevel_2;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_R_1
typedef uint16 POD_OBC_InputACCurrent_R_1;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_R_2
typedef uint8 POD_OBC_InputACCurrent_R_2;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_S
typedef uint16 POD_OBC_InputACCurrent_S;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_S_1
typedef uint8 POD_OBC_InputACCurrent_S_1;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_T
typedef uint16 POD_OBC_InputACCurrent_T;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_T_1
typedef uint8 POD_OBC_InputACCurrent_T_1;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_R_1
typedef uint16 POD_OBC_InputACVoltage_R_1;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_R_2
typedef uint16 POD_OBC_InputACVoltage_R_2;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_S
typedef uint16 POD_OBC_InputACVoltage_S;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_S_1
typedef uint16 POD_OBC_InputACVoltage_S_1;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_T
typedef uint16 POD_OBC_InputACVoltage_T;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_T_1
typedef uint16 POD_OBC_InputACVoltage_T_1;

#  define Rte_TypeDef_POD_OBC_InputFrequencyStatus
typedef boolean POD_OBC_InputFrequencyStatus;

#  define Rte_TypeDef_POD_OBC_InputOverCurrentstatus_R
typedef boolean POD_OBC_InputOverCurrentstatus_R;

#  define Rte_TypeDef_POD_OBC_InputOverCurrentstatus_S
typedef boolean POD_OBC_InputOverCurrentstatus_S;

#  define Rte_TypeDef_POD_OBC_InputOverCurrentstatus_T
typedef boolean POD_OBC_InputOverCurrentstatus_T;

#  define Rte_TypeDef_POD_OBC_InputPhaseStatus
typedef boolean POD_OBC_InputPhaseStatus;

#  define Rte_TypeDef_POD_OBC_InputShortError
typedef boolean POD_OBC_InputShortError;

#  define Rte_TypeDef_POD_OBC_InternalFault
typedef boolean POD_OBC_InternalFault;

#  define Rte_TypeDef_POD_OBC_NlineStatus
typedef boolean POD_OBC_NlineStatus;

#  define Rte_TypeDef_POD_OBC_OBCMaxPermOutpCrrt_1
typedef uint16 POD_OBC_OBCMaxPermOutpCrrt_1;

#  define Rte_TypeDef_POD_OBC_OBCMaxPermOutpCrrt_2
typedef uint16 POD_OBC_OBCMaxPermOutpCrrt_2;

#  define Rte_TypeDef_POD_OBC_OutputDCChargeCurrent_2
typedef uint16 POD_OBC_OutputDCChargeCurrent_2;

#  define Rte_TypeDef_POD_OBC_OutputDCChargeVoltage_2
typedef uint16 POD_OBC_OutputDCChargeVoltage_2;

#  define Rte_TypeDef_POD_OBC_OutputShortError
typedef boolean POD_OBC_OutputShortError;

#  define Rte_TypeDef_POD_OBC_OutputoverloadFault
typedef boolean POD_OBC_OutputoverloadFault;

#  define Rte_TypeDef_POD_OBC_PFCOverVoltageError
typedef boolean POD_OBC_PFCOverVoltageError;

#  define Rte_TypeDef_POD_OBC_PFCUnderVoltageError
typedef boolean POD_OBC_PFCUnderVoltageError;

#  define Rte_TypeDef_POD_OBC_PrimarySideTemp_1
typedef uint8 POD_OBC_PrimarySideTemp_1;

#  define Rte_TypeDef_POD_OBC_S2State_1
typedef uint8 POD_OBC_S2State_1;

#  define Rte_TypeDef_POD_OBC_S2State_2
typedef uint8 POD_OBC_S2State_2;

#  define Rte_TypeDef_POD_OBC_SecondarySideTemp_1
typedef uint8 POD_OBC_SecondarySideTemp_1;

#  define Rte_TypeDef_POD_OBC_Side1Overtempfault_1
typedef boolean POD_OBC_Side1Overtempfault_1;

#  define Rte_TypeDef_POD_OBC_Side1Overtempfault_2
typedef boolean POD_OBC_Side1Overtempfault_2;

#  define Rte_TypeDef_POD_OBC_Side2Overtempfault_1
typedef boolean POD_OBC_Side2Overtempfault_1;

#  define Rte_TypeDef_POD_OBC_Side2Overtempfault_2
typedef boolean POD_OBC_Side2Overtempfault_2;

#  define Rte_TypeDef_POD_OBC_StartUpAllowed
typedef boolean POD_OBC_StartUpAllowed;

#  define Rte_TypeDef_POD_OBC_WorkMode_1
typedef uint8 POD_OBC_WorkMode_1;

#  define Rte_TypeDef_POD_OBC_WorkMode_2
typedef uint8 POD_OBC_WorkMode_2;

#  define Rte_TypeDef_POD_T15e_fault
typedef boolean POD_T15e_fault;

#  define Rte_TypeDef_POD_TempHighFault
typedef boolean POD_TempHighFault;

#  define Rte_TypeDef_POD_TempSensor1Fault
typedef boolean POD_TempSensor1Fault;

#  define Rte_TypeDef_POD_Temperature_1
typedef uint8 POD_Temperature_1;

#  define Rte_TypeDef_PWT_ErrorLevel_2
typedef uint8 PWT_ErrorLevel_2;

#  define Rte_TypeDef_Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_0
typedef boolean Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_0;

#  define Rte_TypeDef_Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_1
typedef boolean Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_1;

#  define Rte_TypeDef_Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_2
typedef uint8 Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_2;

#  define Rte_TypeDef_Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_3
typedef boolean Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_3;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_0;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_1;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_2
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_2;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_3;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_0
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_0;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_1
typedef uint8 Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_1;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_2
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_2;

#  define Rte_TypeDef_Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_3
typedef boolean Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_3;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_0;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_1;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_2;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_3;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_CBM03TimeoutInfo_0;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_CBM03TimeoutInfo_1;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_CBM03TimeoutInfo_2;

#  define Rte_TypeDef_Rte_DT_dt_ComM_CBM03TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_CBM03TimeoutInfo_3;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IVI01CRCDTCInfo_0;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IVI01CRCDTCInfo_1;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IVI01CRCDTCInfo_2;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01CRCDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IVI01CRCDTCInfo_3;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_0
typedef boolean Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_0;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_1
typedef uint8 Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_1;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_2
typedef uint8 Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_2;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_3
typedef boolean Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_3;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutInfo_0
typedef boolean Rte_DT_dt_ComM_IVI01TimeoutInfo_0;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutInfo_1
typedef uint8 Rte_DT_dt_ComM_IVI01TimeoutInfo_1;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutInfo_2
typedef uint8 Rte_DT_dt_ComM_IVI01TimeoutInfo_2;

#  define Rte_TypeDef_Rte_DT_dt_ComM_IVI01TimeoutInfo_3
typedef boolean Rte_DT_dt_ComM_IVI01TimeoutInfo_3;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_0;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_1
typedef uint8 Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_1;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_2;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_3;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_0
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_0;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_1
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_1;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_2
typedef uint8 Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_2;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_3
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_3;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_0
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_0;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_1
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_1;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_2
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_2;

#  define Rte_TypeDef_Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_3
typedef boolean Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_3;

#  define Rte_TypeDef_Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_Test2_0
typedef uint16 Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_Test2_0;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_0
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_0;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_1
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_1;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_2
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_2;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_3
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_3;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_4
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_4;

#  define Rte_TypeDef_Rte_DT_tec_CB_Diag_CBOpeningEvents_t_5
typedef uint16 Rte_DT_tec_CB_Diag_CBOpeningEvents_t_5;

#  define Rte_TypeDef_SGW_AppointChargeCmd_1
typedef uint8 SGW_AppointChargeCmd_1;

#  define Rte_TypeDef_SGW_AppointChargeCmd_2
typedef uint8 SGW_AppointChargeCmd_2;

#  define Rte_TypeDef_SGW_AppointChargeCmd_3
typedef uint8 SGW_AppointChargeCmd_3;

#  define Rte_TypeDef_SGW_ChargeFormSet_1
typedef uint8 SGW_ChargeFormSet_1;

#  define Rte_TypeDef_SGW_ChargeFormSet_2
typedef uint8 SGW_ChargeFormSet_2;

#  define Rte_TypeDef_SGW_ChargeFormSet_3
typedef uint8 SGW_ChargeFormSet_3;

#  define Rte_TypeDef_SGW_KeepWarmRequest
typedef uint8 SGW_KeepWarmRequest;

#  define Rte_TypeDef_SGW_MaxChrgSocSet_2
typedef uint8 SGW_MaxChrgSocSet_2;

#  define Rte_TypeDef_SGW_RemoteHVCtrlReq_2
typedef uint8 SGW_RemoteHVCtrlReq_2;

#  define Rte_TypeDef_SGW_ResetCounter
typedef uint16 SGW_ResetCounter;

#  define Rte_TypeDef_SGW_ResetCounter_1
typedef uint16 SGW_ResetCounter_1;

#  define Rte_TypeDef_SGW_SynMsgAuthenticator
typedef uint32 SGW_SynMsgAuthenticator;

#  define Rte_TypeDef_SGW_SynMsgAuthenticator_1
typedef uint32 SGW_SynMsgAuthenticator_1;

#  define Rte_TypeDef_SGW_TimeInfoDay
typedef uint8 SGW_TimeInfoDay;

#  define Rte_TypeDef_SGW_TimeInfoDay_2
typedef uint8 SGW_TimeInfoDay_2;

#  define Rte_TypeDef_SGW_TimeInfoHour
typedef uint8 SGW_TimeInfoHour;

#  define Rte_TypeDef_SGW_TimeInfoHour_2
typedef uint8 SGW_TimeInfoHour_2;

#  define Rte_TypeDef_SGW_TimeInfoMinute
typedef uint8 SGW_TimeInfoMinute;

#  define Rte_TypeDef_SGW_TimeInfoMinute_2
typedef uint8 SGW_TimeInfoMinute_2;

#  define Rte_TypeDef_SGW_TimeInfoMonth
typedef uint8 SGW_TimeInfoMonth;

#  define Rte_TypeDef_SGW_TimeInfoMonth_2
typedef uint8 SGW_TimeInfoMonth_2;

#  define Rte_TypeDef_SGW_TimeInfoSecond_2
typedef uint8 SGW_TimeInfoSecond_2;

#  define Rte_TypeDef_SGW_TimeInfoYear
typedef uint8 SGW_TimeInfoYear;

#  define Rte_TypeDef_SGW_TimeInfoYear_2
typedef uint8 SGW_TimeInfoYear_2;

#  define Rte_TypeDef_SGW_TimingChargeEndhour
typedef uint8 SGW_TimingChargeEndhour;

#  define Rte_TypeDef_SGW_TimingChargeEndminute
typedef uint8 SGW_TimingChargeEndminute;

#  define Rte_TypeDef_SGW_TimingChargeStarthour
typedef uint8 SGW_TimingChargeStarthour;

#  define Rte_TypeDef_SGW_TimingChargeStartminute
typedef uint8 SGW_TimingChargeStartminute;

#  define Rte_TypeDef_SGW_TimingChargefrquency
typedef uint8 SGW_TimingChargefrquency;

#  define Rte_TypeDef_SGW_TripCounter
typedef uint32 SGW_TripCounter;

#  define Rte_TypeDef_SGW_TripCounter_1
typedef uint32 SGW_TripCounter_1;

#  define Rte_TypeDef_SGW_TripCounter_2
typedef uint32 SGW_TripCounter_2;

#  define Rte_TypeDef_SGW_V2LidisSet_2
typedef uint8 SGW_V2LidisSet_2;

#  define Rte_TypeDef_TCU_APTCState
typedef uint8 TCU_APTCState;

#  define Rte_TypeDef_TCU_EVCompState
typedef uint8 TCU_EVCompState;

#  define Rte_TypeDef_TCU_HVCHHVDCCurrent_2
typedef uint8 TCU_HVCHHVDCCurrent_2;

#  define Rte_TypeDef_TCU_HVCHHighVoltage_2
typedef uint16 TCU_HVCHHighVoltage_2;

#  define Rte_TypeDef_TCU_HVCHState
typedef uint8 TCU_HVCHState;

#  define Rte_TypeDef_TCU_HVPwrState_2
typedef uint8 TCU_HVPwrState_2;

#  define Rte_TypeDef_TCU_HvOnReq
typedef boolean TCU_HvOnReq;

#  define Rte_TypeDef_TCU_TMSFaultLevel_2
typedef uint8 TCU_TMSFaultLevel_2;

#  define Rte_TypeDef_TCU_TMSTotalPwrCnsmp_1
typedef uint8 TCU_TMSTotalPwrCnsmp_1;

#  define Rte_TypeDef_TCU_TMSTotoalPwrReq_2
typedef uint8 TCU_TMSTotoalPwrReq_2;

#  define Rte_TypeDef_Test
typedef uint8 Test;

#  define Rte_TypeDef_UDS_EPT_BootCmd1_1
typedef uint8 UDS_EPT_BootCmd1_1;

#  define Rte_TypeDef_UDS_EPT_BootCmd2_1
typedef uint8 UDS_EPT_BootCmd2_1;

#  define Rte_TypeDef_UDS_EPT_BootCmd3_1
typedef uint8 UDS_EPT_BootCmd3_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte0_1
typedef uint8 Uds_EPT_bootResponse_Byte0_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte1_1
typedef uint8 Uds_EPT_bootResponse_Byte1_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte2_1
typedef uint8 Uds_EPT_bootResponse_Byte2_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte3_1
typedef uint8 Uds_EPT_bootResponse_Byte3_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte4_1
typedef uint8 Uds_EPT_bootResponse_Byte4_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte5_1
typedef uint8 Uds_EPT_bootResponse_Byte5_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte6_1
typedef uint8 Uds_EPT_bootResponse_Byte6_1;

#  define Rte_TypeDef_Uds_EPT_bootResponse_Byte7_1
typedef uint8 Uds_EPT_bootResponse_Byte7_1;

#  define Rte_TypeDef_VCU_ACU_DriverWarningLampSts
typedef uint8 VCU_ACU_DriverWarningLampSts;

#  define Rte_TypeDef_VCU_ACU_DriverWarningLampStsLIN
typedef uint8 VCU_ACU_DriverWarningLampStsLIN;

#  define Rte_TypeDef_VCU_ACU_PassengerAirbagSts
typedef uint8 VCU_ACU_PassengerAirbagSts;

#  define Rte_TypeDef_VCU_ACU_PassengerAirbagStsLIN
typedef uint8 VCU_ACU_PassengerAirbagStsLIN;

#  define Rte_TypeDef_VCU_ACU_PassengerWarningLampSts
typedef uint8 VCU_ACU_PassengerWarningLampSts;

#  define Rte_TypeDef_VCU_ACU_PassengerWarningLampStsLIN
typedef uint8 VCU_ACU_PassengerWarningLampStsLIN;

#  define Rte_TypeDef_VCU_AccelerationPedal
typedef uint16 VCU_AccelerationPedal;

#  define Rte_TypeDef_VCU_AccelerationPedal_1
typedef uint16 VCU_AccelerationPedal_1;

#  define Rte_TypeDef_VCU_ActiveEnergyProfile
typedef uint8 VCU_ActiveEnergyProfile;

#  define Rte_TypeDef_VCU_ActiveRgnBrkProfile
typedef uint8 VCU_ActiveRgnBrkProfile;

#  define Rte_TypeDef_VCU_ActualGear_2
typedef uint8 VCU_ActualGear_2;

#  define Rte_TypeDef_VCU_BCM_FLSeatBeltRemindReq
typedef uint8 VCU_BCM_FLSeatBeltRemindReq;

#  define Rte_TypeDef_VCU_BCM_FLSeatBeltRemindReqLIN
typedef uint8 VCU_BCM_FLSeatBeltRemindReqLIN;

#  define Rte_TypeDef_VCU_BCM_FRSeatBeltRemindReq
typedef uint8 VCU_BCM_FRSeatBeltRemindReq;

#  define Rte_TypeDef_VCU_BCM_FRSeatBeltRemindReqLIN
typedef uint8 VCU_BCM_FRSeatBeltRemindReqLIN;

#  define Rte_TypeDef_VCU_BCM_RLSeatBeltRemindReq
typedef uint8 VCU_BCM_RLSeatBeltRemindReq;

#  define Rte_TypeDef_VCU_BCM_RLSeatBeltRemindReqLIN
typedef uint8 VCU_BCM_RLSeatBeltRemindReqLIN;

#  define Rte_TypeDef_VCU_BCM_RRSeatBeltRemindReq
typedef uint8 VCU_BCM_RRSeatBeltRemindReq;

#  define Rte_TypeDef_VCU_BCM_RRSeatBeltRemindReqLIN
typedef uint8 VCU_BCM_RRSeatBeltRemindReqLIN;

#  define Rte_TypeDef_VCU_BMS_Control_of_NegRelay
typedef uint8 VCU_BMS_Control_of_NegRelay;

#  define Rte_TypeDef_VCU_BS_Current
typedef uint16 VCU_BS_Current;

#  define Rte_TypeDef_VCU_BS_HCurrent
typedef uint16 VCU_BS_HCurrent;

#  define Rte_TypeDef_VCU_BS_IBSBatSOC
typedef uint8 VCU_BS_IBSBatSOC;

#  define Rte_TypeDef_VCU_BS_IBSBatSOC_1
typedef uint8 VCU_BS_IBSBatSOC_1;

#  define Rte_TypeDef_VCU_BS_IBSBatSOC_2
typedef uint8 VCU_BS_IBSBatSOC_2;

#  define Rte_TypeDef_VCU_BS_IndicatorLightSts
typedef boolean VCU_BS_IndicatorLightSts;

#  define Rte_TypeDef_VCU_BS_IndicatorLightStsLIN
typedef boolean VCU_BS_IndicatorLightStsLIN;

#  define Rte_TypeDef_VCU_BS_LV_Batt
typedef uint16 VCU_BS_LV_Batt;

#  define Rte_TypeDef_VCU_BS_LV_Batt_1
typedef uint16 VCU_BS_LV_Batt_1;

#  define Rte_TypeDef_VCU_BS_LV_Batt_2
typedef uint16 VCU_BS_LV_Batt_2;

#  define Rte_TypeDef_VCU_BS_QuiescentCurrent
typedef uint8 VCU_BS_QuiescentCurrent;

#  define Rte_TypeDef_VCU_BattNomC20LIN
typedef uint8 VCU_BattNomC20LIN;

#  define Rte_TypeDef_VCU_BattTypeLIN
typedef uint8 VCU_BattTypeLIN;

#  define Rte_TypeDef_VCU_Batt_U0_MaxLIN
typedef uint8 VCU_Batt_U0_MaxLIN;

#  define Rte_TypeDef_VCU_Batt_U0_MinLIN
typedef uint8 VCU_Batt_U0_MinLIN;

#  define Rte_TypeDef_VCU_BrakeCompensateStatus_2
typedef uint8 VCU_BrakeCompensateStatus_2;

#  define Rte_TypeDef_VCU_BrakepedalStatus_2
typedef boolean VCU_BrakepedalStatus_2;

#  define Rte_TypeDef_VCU_CGW_VehicleState
typedef uint8 VCU_CGW_VehicleState;

#  define Rte_TypeDef_VCU_CGW_VehicleStateLIN
typedef uint8 VCU_CGW_VehicleStateLIN;

#  define Rte_TypeDef_VCU_ChargeCurrWU_Ena
typedef boolean VCU_ChargeCurrWU_Ena;

#  define Rte_TypeDef_VCU_ChargeCurrWU_EnaLIN
typedef boolean VCU_ChargeCurrWU_EnaLIN;

#  define Rte_TypeDef_VCU_ChargeCurrWU_Ena_LIN
typedef boolean VCU_ChargeCurrWU_Ena_LIN;

#  define Rte_TypeDef_VCU_ChargeCurrWU_Treshold
typedef uint8 VCU_ChargeCurrWU_Treshold;

#  define Rte_TypeDef_VCU_ChargeCurrWU_TresholdLIN
typedef uint8 VCU_ChargeCurrWU_TresholdLIN;

#  define Rte_TypeDef_VCU_ChargeCurrWU_Treshold_LIN
typedef uint8 VCU_ChargeCurrWU_Treshold_LIN;

#  define Rte_TypeDef_VCU_ChargeEndReason_2
typedef uint8 VCU_ChargeEndReason_2;

#  define Rte_TypeDef_VCU_ChargeEnergy_2
typedef uint16 VCU_ChargeEnergy_2;

#  define Rte_TypeDef_VCU_ChargeProcessComment_2
typedef uint8 VCU_ChargeProcessComment_2;

#  define Rte_TypeDef_VCU_ChargeTime_2
typedef uint16 VCU_ChargeTime_2;

#  define Rte_TypeDef_VCU_ComsumpPowerInstant
typedef uint16 VCU_ComsumpPowerInstant;

#  define Rte_TypeDef_VCU_ComsumpPowerInstant_2
typedef uint16 VCU_ComsumpPowerInstant_2;

#  define Rte_TypeDef_VCU_CreepTorque
typedef uint16 VCU_CreepTorque;

#  define Rte_TypeDef_VCU_DCDCFail
typedef boolean VCU_DCDCFail;

#  define Rte_TypeDef_VCU_DCDCFailLIN
typedef boolean VCU_DCDCFailLIN;

#  define Rte_TypeDef_VCU_DCDCFail_1
typedef boolean VCU_DCDCFail_1;

#  define Rte_TypeDef_VCU_DCDCFail_2
typedef boolean VCU_DCDCFail_2;

#  define Rte_TypeDef_VCU_DCDCFail_3
typedef boolean VCU_DCDCFail_3;

#  define Rte_TypeDef_VCU_DCDCFail_4
typedef boolean VCU_DCDCFail_4;

#  define Rte_TypeDef_VCU_DCDCFail_5
typedef boolean VCU_DCDCFail_5;

#  define Rte_TypeDef_VCU_DCDCPowerLimit_2
typedef uint8 VCU_DCDCPowerLimit_2;

#  define Rte_TypeDef_VCU_DCFCCurrent_2
typedef uint16 VCU_DCFCCurrent_2;

#  define Rte_TypeDef_VCU_DCM_FL_DoorFLSts
typedef boolean VCU_DCM_FL_DoorFLSts;

#  define Rte_TypeDef_VCU_DCM_FL_DoorFLStsLIN
typedef boolean VCU_DCM_FL_DoorFLStsLIN;

#  define Rte_TypeDef_VCU_DCM_FR_DoorFRSts
typedef boolean VCU_DCM_FR_DoorFRSts;

#  define Rte_TypeDef_VCU_DCM_FR_DoorFRStsLIN
typedef boolean VCU_DCM_FR_DoorFRStsLIN;

#  define Rte_TypeDef_VCU_DCM_RL_DoorRLSts
typedef boolean VCU_DCM_RL_DoorRLSts;

#  define Rte_TypeDef_VCU_DCM_RL_DoorRLStsLIN
typedef boolean VCU_DCM_RL_DoorRLStsLIN;

#  define Rte_TypeDef_VCU_DCM_RR_DoorRRSts
typedef boolean VCU_DCM_RR_DoorRRSts;

#  define Rte_TypeDef_VCU_DCM_RR_DoorRRStsLIN
typedef boolean VCU_DCM_RR_DoorRRStsLIN;

#  define Rte_TypeDef_VCU_DTC_Number
typedef uint8 VCU_DTC_Number;

#  define Rte_TypeDef_VCU_DTC_Number_1
typedef uint8 VCU_DTC_Number_1;

#  define Rte_TypeDef_VCU_DTC_Number_2
typedef uint8 VCU_DTC_Number_2;

#  define Rte_TypeDef_VCU_DecelerationReq
typedef uint8 VCU_DecelerationReq;

#  define Rte_TypeDef_VCU_DegradedPerformance
typedef boolean VCU_DegradedPerformance;

#  define Rte_TypeDef_VCU_DegradedRegenBraking
typedef boolean VCU_DegradedRegenBraking;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_Ena
typedef boolean VCU_DisChargeCurrWU_Ena;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_EnaLIN
typedef boolean VCU_DisChargeCurrWU_EnaLIN;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_Ena_LIN
typedef boolean VCU_DisChargeCurrWU_Ena_LIN;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_Treshold
typedef uint8 VCU_DisChargeCurrWU_Treshold;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_TresholdLIN
typedef uint8 VCU_DisChargeCurrWU_TresholdLIN;

#  define Rte_TypeDef_VCU_DisChargeCurrWU_Treshold_LIN
typedef uint8 VCU_DisChargeCurrWU_Treshold_LIN;

#  define Rte_TypeDef_VCU_DisChgPowerLimit
typedef uint8 VCU_DisChgPowerLimit;

#  define Rte_TypeDef_VCU_DisChgPowerLimit_2
typedef uint8 VCU_DisChgPowerLimit_2;

#  define Rte_TypeDef_VCU_DischargeEndReason_2
typedef uint8 VCU_DischargeEndReason_2;

#  define Rte_TypeDef_VCU_DischargeEndSoc
typedef uint8 VCU_DischargeEndSoc;

#  define Rte_TypeDef_VCU_DischargeEndSoc_1
typedef uint8 VCU_DischargeEndSoc_1;

#  define Rte_TypeDef_VCU_DisplayMileage_2
typedef uint16 VCU_DisplayMileage_2;

#  define Rte_TypeDef_VCU_DisplayPowerPercent
typedef uint16 VCU_DisplayPowerPercent;

#  define Rte_TypeDef_VCU_DisplayPowerPercent_2
typedef uint16 VCU_DisplayPowerPercent_2;

#  define Rte_TypeDef_VCU_Display_Cur
typedef uint16 VCU_Display_Cur;

#  define Rte_TypeDef_VCU_Display_Cur_1
typedef uint16 VCU_Display_Cur_1;

#  define Rte_TypeDef_VCU_Display_Power
typedef uint16 VCU_Display_Power;

#  define Rte_TypeDef_VCU_Display_Power_1
typedef uint16 VCU_Display_Power_1;

#  define Rte_TypeDef_VCU_Display_voltage_1
typedef uint16 VCU_Display_voltage_1;

#  define Rte_TypeDef_VCU_Display_voltage_2
typedef uint16 VCU_Display_voltage_2;

#  define Rte_TypeDef_VCU_Display_voltage_3
typedef uint16 VCU_Display_voltage_3;

#  define Rte_TypeDef_VCU_Display_voltage_4
typedef uint16 VCU_Display_voltage_4;

#  define Rte_TypeDef_VCU_DriveMotOverSpd
typedef boolean VCU_DriveMotOverSpd;

#  define Rte_TypeDef_VCU_DriveMotOvrTempLIN
typedef boolean VCU_DriveMotOvrTempLIN;

#  define Rte_TypeDef_VCU_DriveMotOvrTemp_1
typedef boolean VCU_DriveMotOvrTemp_1;

#  define Rte_TypeDef_VCU_DriverTorqueRequest
typedef uint16 VCU_DriverTorqueRequest;

#  define Rte_TypeDef_VCU_DrvDirCtrlFlt
typedef boolean VCU_DrvDirCtrlFlt;

#  define Rte_TypeDef_VCU_EnableOBC_1
typedef uint8 VCU_EnableOBC_1;

#  define Rte_TypeDef_VCU_EnableOBC_2
typedef uint8 VCU_EnableOBC_2;

#  define Rte_TypeDef_VCU_Enable_DC_Relay_1
typedef boolean VCU_Enable_DC_Relay_1;

#  define Rte_TypeDef_VCU_Enable_DC_Relay_2
typedef boolean VCU_Enable_DC_Relay_2;

#  define Rte_TypeDef_VCU_EnergyManagementWarn
typedef uint8 VCU_EnergyManagementWarn;

#  define Rte_TypeDef_VCU_EnergyReturnedRegen
typedef uint16 VCU_EnergyReturnedRegen;

#  define Rte_TypeDef_VCU_EnergyReturnedRegen_2
typedef uint16 VCU_EnergyReturnedRegen_2;

#  define Rte_TypeDef_VCU_EnergyV2L_2
typedef uint16 VCU_EnergyV2L_2;

#  define Rte_TypeDef_VCU_ForwardVmaxlimitStatus_1
typedef boolean VCU_ForwardVmaxlimitStatus_1;

#  define Rte_TypeDef_VCU_ForwardVmaxlimitStatus_2
typedef boolean VCU_ForwardVmaxlimitStatus_2;

#  define Rte_TypeDef_VCU_ForwardVmaxlimitStatus_3
typedef boolean VCU_ForwardVmaxlimitStatus_3;

#  define Rte_TypeDef_VCU_FrMotorSpd
typedef uint8 VCU_FrMotorSpd;

#  define Rte_TypeDef_VCU_HVBatCoolOvrTemp
typedef boolean VCU_HVBatCoolOvrTemp;

#  define Rte_TypeDef_VCU_HVBatCriFailLIN
typedef uint8 VCU_HVBatCriFailLIN;

#  define Rte_TypeDef_VCU_HVBatCriFail_1
typedef uint8 VCU_HVBatCriFail_1;

#  define Rte_TypeDef_VCU_HVBatLowSocWar
typedef uint8 VCU_HVBatLowSocWar;

#  define Rte_TypeDef_VCU_HVBatOvrTemp
typedef boolean VCU_HVBatOvrTemp;

#  define Rte_TypeDef_VCU_HVBatOvrTempLIN
typedef boolean VCU_HVBatOvrTempLIN;

#  define Rte_TypeDef_VCU_HVBatOvrTemp_1
typedef boolean VCU_HVBatOvrTemp_1;

#  define Rte_TypeDef_VCU_HVBatOvrTemp_2
typedef boolean VCU_HVBatOvrTemp_2;

#  define Rte_TypeDef_VCU_HVBatOvrTemp_3
typedef boolean VCU_HVBatOvrTemp_3;

#  define Rte_TypeDef_VCU_HVBatOvrTemp_4
typedef boolean VCU_HVBatOvrTemp_4;

#  define Rte_TypeDef_VCU_HVBatUndTemp
typedef boolean VCU_HVBatUndTemp;

#  define Rte_TypeDef_VCU_HVConnectFault_2
typedef boolean VCU_HVConnectFault_2;

#  define Rte_TypeDef_VCU_HstTempDataRqTrgLIN
typedef boolean VCU_HstTempDataRqTrgLIN;

#  define Rte_TypeDef_VCU_IBSClrDiagInfLIN
typedef boolean VCU_IBSClrDiagInfLIN;

#  define Rte_TypeDef_VCU_IBS_BrakeFluidWarning
typedef uint8 VCU_IBS_BrakeFluidWarning;

#  define Rte_TypeDef_VCU_IBS_BrakeFluidWarningLIN
typedef uint8 VCU_IBS_BrakeFluidWarningLIN;

#  define Rte_TypeDef_VCU_IBS_EBDFault
typedef boolean VCU_IBS_EBDFault;

#  define Rte_TypeDef_VCU_IBS_EBDFaultLIN
typedef boolean VCU_IBS_EBDFaultLIN;

#  define Rte_TypeDef_VCU_IBS_RollerbenchMode
typedef boolean VCU_IBS_RollerbenchMode;

#  define Rte_TypeDef_VCU_IBS_RollerbenchModeLIN
typedef boolean VCU_IBS_RollerbenchModeLIN;

#  define Rte_TypeDef_VCU_IBS_SystemStatus
typedef uint8 VCU_IBS_SystemStatus;

#  define Rte_TypeDef_VCU_IBS_SystemStatusLIN
typedef uint8 VCU_IBS_SystemStatusLIN;

#  define Rte_TypeDef_VCU_IVI_VrState
typedef uint8 VCU_IVI_VrState;

#  define Rte_TypeDef_VCU_IVI_VrStateLIN
typedef uint8 VCU_IVI_VrStateLIN;

#  define Rte_TypeDef_VCU_InterfaceReq
typedef boolean VCU_InterfaceReq;

#  define Rte_TypeDef_VCU_InvldGearSel_1
typedef uint8 VCU_InvldGearSel_1;

#  define Rte_TypeDef_VCU_IsoMeasurementSwitch_1
typedef boolean VCU_IsoMeasurementSwitch_1;

#  define Rte_TypeDef_VCU_IsoMeasurementSwitch_2
typedef uint8 VCU_IsoMeasurementSwitch_2;

#  define Rte_TypeDef_VCU_IsomeasurmentSwitch
typedef boolean VCU_IsomeasurmentSwitch;

#  define Rte_TypeDef_VCU_KL15eOn_2
typedef boolean VCU_KL15eOn_2;

#  define Rte_TypeDef_VCU_KL15eReuqest
typedef boolean VCU_KL15eReuqest;

#  define Rte_TypeDef_VCU_LowTempInhibitPowerUpWarn
typedef boolean VCU_LowTempInhibitPowerUpWarn;

#  define Rte_TypeDef_VCU_LowTempInhibitPowerUpWarn_2
typedef boolean VCU_LowTempInhibitPowerUpWarn_2;

#  define Rte_TypeDef_VCU_MCUActHeatPwr
typedef uint8 VCU_MCUActHeatPwr;

#  define Rte_TypeDef_VCU_MCUActHeatPwr_1
typedef uint8 VCU_MCUActHeatPwr_1;

#  define Rte_TypeDef_VCU_MCUDesiredTorque
typedef uint16 VCU_MCUDesiredTorque;

#  define Rte_TypeDef_VCU_MCUDesiredTorque_1
typedef uint16 VCU_MCUDesiredTorque_1;

#  define Rte_TypeDef_VCU_MCUDesiredTorque_2
typedef uint16 VCU_MCUDesiredTorque_2;

#  define Rte_TypeDef_VCU_MCUDesiredTorque_3
typedef uint16 VCU_MCUDesiredTorque_3;

#  define Rte_TypeDef_VCU_MCUDesiredTorque_4
typedef uint16 VCU_MCUDesiredTorque_4;

#  define Rte_TypeDef_VCU_MCUPower_2
typedef uint16 VCU_MCUPower_2;

#  define Rte_TypeDef_VCU_MCUSurgeDamperState_2
typedef uint8 VCU_MCUSurgeDamperState_2;

#  define Rte_TypeDef_VCU_ManuallyUnlockComment_1
typedef boolean VCU_ManuallyUnlockComment_1;

#  define Rte_TypeDef_VCU_ManuallyUnlockComment_2
typedef boolean VCU_ManuallyUnlockComment_2;

#  define Rte_TypeDef_VCU_MaxSpdLimit
typedef uint16 VCU_MaxSpdLimit;

#  define Rte_TypeDef_VCU_MaxSpdLimit_1
typedef uint16 VCU_MaxSpdLimit_1;

#  define Rte_TypeDef_VCU_MaxTorqueGradient
typedef uint16 VCU_MaxTorqueGradient;

#  define Rte_TypeDef_VCU_MaxTorqueGradient_1
typedef uint16 VCU_MaxTorqueGradient_1;

#  define Rte_TypeDef_VCU_MaxTorqueGradient_2
typedef uint16 VCU_MaxTorqueGradient_2;

#  define Rte_TypeDef_VCU_MaxTorqueLimit_1
typedef uint16 VCU_MaxTorqueLimit_1;

#  define Rte_TypeDef_VCU_MaxTorqueLimit_2
typedef uint16 VCU_MaxTorqueLimit_2;

#  define Rte_TypeDef_VCU_MaximumOutputCurrent_2
typedef uint16 VCU_MaximumOutputCurrent_2;

#  define Rte_TypeDef_VCU_MaximumOutputVoltage_2
typedef uint16 VCU_MaximumOutputVoltage_2;

#  define Rte_TypeDef_VCU_MemoryChargeFault_2
typedef boolean VCU_MemoryChargeFault_2;

#  define Rte_TypeDef_VCU_MinTorqueLimit_1
typedef uint16 VCU_MinTorqueLimit_1;

#  define Rte_TypeDef_VCU_MinTorqueLimit_2
typedef uint16 VCU_MinTorqueLimit_2;

#  define Rte_TypeDef_VCU_MinimumOutputCurrent_2
typedef uint16 VCU_MinimumOutputCurrent_2;

#  define Rte_TypeDef_VCU_MinimumOutputVoltage_2
typedef uint16 VCU_MinimumOutputVoltage_2;

#  define Rte_TypeDef_VCU_MotorActualTorque
typedef uint16 VCU_MotorActualTorque;

#  define Rte_TypeDef_VCU_MotorSpdReq
typedef uint16 VCU_MotorSpdReq;

#  define Rte_TypeDef_VCU_MotorSpdReq_1
typedef uint16 VCU_MotorSpdReq_1;

#  define Rte_TypeDef_VCU_OBC_ChargeCurrentCommand_1
typedef uint16 VCU_OBC_ChargeCurrentCommand_1;

#  define Rte_TypeDef_VCU_OBC_ChargeCurrentCommand_2
typedef uint16 VCU_OBC_ChargeCurrentCommand_2;

#  define Rte_TypeDef_VCU_OBC_Control_of_S2_SW_1
typedef boolean VCU_OBC_Control_of_S2_SW_1;

#  define Rte_TypeDef_VCU_OBC_Control_of_S2_SW_2
typedef boolean VCU_OBC_Control_of_S2_SW_2;

#  define Rte_TypeDef_VCU_OBC_Control_of_em_lock_1
typedef boolean VCU_OBC_Control_of_em_lock_1;

#  define Rte_TypeDef_VCU_OBC_Control_of_em_lock_2
typedef boolean VCU_OBC_Control_of_em_lock_2;

#  define Rte_TypeDef_VCU_OnepadelFault
typedef uint8 VCU_OnepadelFault;

#  define Rte_TypeDef_VCU_OnepadelFault_2
typedef uint8 VCU_OnepadelFault_2;

#  define Rte_TypeDef_VCU_PNC5
typedef boolean VCU_PNC5;

#  define Rte_TypeDef_VCU_PermitPackPTC_2
typedef boolean VCU_PermitPackPTC_2;

#  define Rte_TypeDef_VCU_RegenTorqueCap
typedef uint16 VCU_RegenTorqueCap;

#  define Rte_TypeDef_VCU_RemainChrgTime_2
typedef uint16 VCU_RemainChrgTime_2;

#  define Rte_TypeDef_VCU_RequestedModeDCDC_2
typedef uint8 VCU_RequestedModeDCDC_2;

#  define Rte_TypeDef_VCU_RequestedModeMCU_2
typedef uint8 VCU_RequestedModeMCU_2;

#  define Rte_TypeDef_VCU_RequestedModeTCU_2
typedef uint8 VCU_RequestedModeTCU_2;

#  define Rte_TypeDef_VCU_RrMotorSpd
typedef uint8 VCU_RrMotorSpd;

#  define Rte_TypeDef_VCU_SOCWU_Ena
typedef boolean VCU_SOCWU_Ena;

#  define Rte_TypeDef_VCU_SOCWU_EnaLIN
typedef boolean VCU_SOCWU_EnaLIN;

#  define Rte_TypeDef_VCU_SOCWU_Ena_LIN
typedef boolean VCU_SOCWU_Ena_LIN;

#  define Rte_TypeDef_VCU_SOCWU_Treshold
typedef uint8 VCU_SOCWU_Treshold;

#  define Rte_TypeDef_VCU_SOCWU_TresholdLIN
typedef uint8 VCU_SOCWU_TresholdLIN;

#  define Rte_TypeDef_VCU_SOCWU_Treshold_LIN
typedef uint8 VCU_SOCWU_Treshold_LIN;

#  define Rte_TypeDef_VCU_SpdLimitActTorque
typedef uint16 VCU_SpdLimitActTorque;

#  define Rte_TypeDef_VCU_SynRequest
typedef uint32 VCU_SynRequest;

#  define Rte_TypeDef_VCU_TCSActive_2
typedef boolean VCU_TCSActive_2;

#  define Rte_TypeDef_VCU_TCUPowerAllowed_2
typedef uint16 VCU_TCUPowerAllowed_2;

#  define Rte_TypeDef_VCU_TrqThresholdDampgCtl
typedef uint8 VCU_TrqThresholdDampgCtl;

#  define Rte_TypeDef_VCU_TrqThresholdDampgCtl_1
typedef uint8 VCU_TrqThresholdDampgCtl_1;

#  define Rte_TypeDef_VCU_TrqThresholdDampgCtl_2
typedef uint8 VCU_TrqThresholdDampgCtl_2;

#  define Rte_TypeDef_VCU_TrqThresholdDampgCtl_3
typedef uint8 VCU_TrqThresholdDampgCtl_3;

#  define Rte_TypeDef_VCU_TrqThresholdDampgCtl_4
typedef uint8 VCU_TrqThresholdDampgCtl_4;

#  define Rte_TypeDef_VCU_UnavailRegenBraking
typedef boolean VCU_UnavailRegenBraking;

#  define Rte_TypeDef_VCU_VehicleSpeed_1
typedef uint16 VCU_VehicleSpeed_1;

#  define Rte_TypeDef_VCU_VirtualACPedal
typedef uint16 VCU_VirtualACPedal;

#  define Rte_TypeDef_VCU_VirtualPedal
typedef uint16 VCU_VirtualPedal;

#  define Rte_TypeDef_VCU_VirtualPedalValid
typedef boolean VCU_VirtualPedalValid;

#  define Rte_TypeDef_VCU_VoltageDemandLV_2
typedef uint16 VCU_VoltageDemandLV_2;

#  define Rte_TypeDef_VCU_WakeUpSrc
typedef uint8 VCU_WakeUpSrc;

#  define Rte_TypeDef_VCU_WakeUpStatus
typedef uint8 VCU_WakeUpStatus;

#  define Rte_TypeDef_VCU_WheelTrqACT
typedef uint16 VCU_WheelTrqACT;

#  define Rte_TypeDef_VCU_wakeup_cycleLIN
typedef uint8 VCU_wakeup_cycleLIN;

#  define Rte_TypeDef_VCU_wakeup_cycleLIN_1
typedef uint8 VCU_wakeup_cycleLIN_1;

#  define Rte_TypeDef_VCU_wakeup_cycle_LIN
typedef uint8 VCU_wakeup_cycle_LIN;

#  define Rte_TypeDef_checksum_271
typedef uint8 checksum_271;

#  define Rte_TypeDef_checksum_272
typedef uint8 checksum_272;

#  define Rte_TypeDef_checksum_273
typedef uint8 checksum_273;

#  define Rte_TypeDef_checksum_274
typedef uint8 checksum_274;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_BMS_BatSupName
typedef uint8 BMS_BatSupName[8];

#  define Rte_TypeDef_Dt_ARRAY608_UINT8_1_0
typedef uint8 Dt_ARRAY608_UINT8_1_0[608];

#  define Rte_TypeDef_Rte_DT_Lin_RxInfo_2
typedef uint8 Rte_DT_Lin_RxInfo_2[1];

#  define Rte_TypeDef_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_Test2
typedef Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_Test2_0 dt_RngEstimn_BattCurrIntegral2kmArrayInfo_Test2[25];

#  define Rte_TypeDef_AD_stAdCfg
typedef struct
{
  uint16 Ad_valLimLow;
  uint16 Ad_valLimHi;
  uint16 Ad_numLimLowFlt;
  uint16 Ad_numLimHiFlt;
  uint16 Ad_numLimPause;
  uint16 Ad_numLimRecovery;
  uint16 Ad_flgFil;
} AD_stAdCfg;

#  define Rte_TypeDef_AD_valResult
typedef struct
{
  uint16 Ad_valAd;
  uint8 Ad_stAdStatus;
  uint16 Ad_numAdErr;
  uint16 Ad_numAdPause;
  uint16 Ad_numAdRecovery;
} AD_valResult;

#  define Rte_TypeDef_BTS7200_stSignal
typedef struct
{
  uint8 BTS_stCtr;
  uint8 BTS_flgDiagInfo;
  uint16 BTS_valCurrent;
} BTS7200_stSignal;

#  define Rte_TypeDef_Botom_stVerAndTiMsg
typedef struct
{
  uint8 BotmSw_numVersion1;
  uint8 BotmSw_numVersion2;
  uint8 BotmSw_numVersion3;
  uint8 BotmSw_tiYear;
  uint8 BotmSw_tiMonth;
  uint8 BotmSw_tiDay;
} Botom_stVerAndTiMsg;

#  define Rte_TypeDef_CAN_stActiveInf
typedef struct
{
  uint8 CAN_flgControllerA_Active;
  uint8 CAN_flgControllerEIOActive;
  uint8 CAN_flgControllerE_Active;
} CAN_stActiveInf;

#  define Rte_TypeDef_CCP_stCanSpeFunCfg
typedef struct
{
  uint8 CCP_valSndNode;
  uint8 CCP_numSendCh;
  uint32 CCP_numSendId;
  uint8 CCP_numSendFrame;
} CCP_stCanSpeFunCfg;

#  define Rte_TypeDef_Dio_valInResult
typedef struct
{
  uint16 Dio_valIn;
  uint16 Dio_stErrIn;
} Dio_valInResult;

#  define Rte_TypeDef_IF_DCChrMgmt_IRMeasDiErr_Bus
typedef struct
{
  Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_0 DCChrMgmt_MonStatIRMeasEnaErr;
  Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_1 DCChrMgmt_MonResIRMeasEnaErr;
  Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_2 DCChrMgmt_ErrStatIRMeasEnaErr;
  Rte_DT_IF_DCChrMgmt_IRMeasDiErr_Bus_3 DCChrMgmt_ErrResIRMeasEnaErr;
} IF_DCChrMgmt_IRMeasDiErr_Bus;

#  define Rte_TypeDef_Icu_stResultInPin
typedef struct
{
  uint8 Icu_stDutyPin;
  uint32 Icu_fPin;
  uint8 Icu_stValidPin;
  uint8 Icu_stGPIO;
} Icu_stResultInPin;

#  define Rte_TypeDef_Io_stOut
typedef struct
{
  uint8 Io_stCtlOut;
  uint8 Io_stDiagOut;
} Io_stOut;

#  define Rte_TypeDef_Io_stOutCal
typedef struct
{
  uint8 Io_flgOutCalEn;
  uint8 Io_valOutCal;
} Io_stOutCal;

#  define Rte_TypeDef_Io_stPwmOutCal
typedef struct
{
  uint8 Pwm_stCalType;
  uint8 Pwm_valCalDuty;
  uint32 Pwm_fCal;
} Io_stPwmOutCal;

#  define Rte_TypeDef_Io_valCfgInFromAd
typedef struct
{
  uint16 Io_valLowLevel;
  uint16 RecordElement;
} Io_valCfgInFromAd;

#  define Rte_TypeDef_Pwm_stOut
typedef struct
{
  uint8 Pwm_stCtlOut;
  uint8 Pwm_stDiagOut;
} Pwm_stOut;

#  define Rte_TypeDef_SG_ADCU_Body_req_SigGroup
typedef struct
{
  ADCU_DmsDriver ADCU_DmsDriver;
  Checksum_20A_1 Checksum_20A;
  MessageCounter_20A_1 MessageCounter_20A;
} SG_ADCU_Body_req_SigGroup;

#  define Rte_TypeDef_SG_BCM_11_SigGroup
typedef struct
{
  BCM_Immo_State BCM_Immo_State;
  BCM_SecOCFV_273 BCM_SecOCFV_272;
  BCM_SecOCMAC_273 BCM_SecOCMAC_272;
} SG_BCM_11_SigGroup;

#  define Rte_TypeDef_SG_BCM_Authentication_SigGroup
typedef struct
{
  BCM_AntiTheftSts_3 BCM_AntiTheftSts;
  BCM_SecOCFV_335 BCM_SecOCFV_334;
  BCM_SecOCMAC_335 BCM_SecOCMAC_334;
} SG_BCM_Authentication_SigGroup;

#  define Rte_TypeDef_SG_BMS_Batcode_SigGroup
typedef struct
{
  BMS_BatCode1 BMS_BatCode1;
  BMS_BatCode2 BMS_BatCode2;
  BMS_BatCode3 BMS_BatCode3;
  BMS_BatCode4 BMS_BatCode4;
  BMS_BatCode5 BMS_BatCode5;
  BMS_BatCode6 BMS_BatCode6;
  BMS_BatCodeFrameLength BMS_BatCodeFrameLength;
  BMS_BatCodeFrameNO BMS_BatCodeFrameNO;
} SG_BMS_Batcode_SigGroup;

#  define Rte_TypeDef_SG_BMS_Charge_04_SigGroup
typedef struct
{
  BMS_SumDisChgkwh BMS_SumDisChgkwh;
} SG_BMS_Charge_04_SigGroup;

#  define Rte_TypeDef_SG_CBM_03_SigGroup
typedef struct
{
  CBM_SystemReadyReq_2 CBM_SystemReadyReq;
} SG_CBM_03_SigGroup;

#  define Rte_TypeDef_SG_IBS_Status_03_SigGroup_1
typedef struct
{
  Checksum_0B4_3 Checksum_0B4;
  IBS_ABPActive_1 IBS_ABPActive;
  IBS_ABPAvailable_1 IBS_ABPAvailable;
  IBS_ABSActive_1 IBS_ABSActive;
  IBS_ABSFault_1 IBS_ABSFault;
  IBS_DTCfault_1 IBS_DTCfault;
  IBS_EBDActive_1 IBS_EBDActive;
  IBS_EBDFault_1 IBS_EBDFault;
  IBS_EPBTextdisplay_3 IBS_EPBTextdisplay;
  IBS_SystemStatus_1 IBS_SystemStatus;
  IBS_TCSFault_1 IBS_TCSFault;
  IBS_VCU_DecelerationRequest_Available_1 IBS_VCU_DecelerationRequest_Available;
  IBS_VDCFault_1 IBS_VDCFault;
  IBS_VehicleSpeed_3 IBS_VehicleSpeed;
  IBS_VehiclespeedValid_1 IBS_VehiclespeedValid;
  MessageCounter_0B4_3 MessageCounter_0B4;
} SG_IBS_Status_03_SigGroup_1;

#  define Rte_TypeDef_SG_IBS_Status_03_SigGroup_PT
typedef struct
{
  Checksum_0B4_5 Checksum_0B4;
  IBS_EBDFault IBS_EBDFault;
  IBS_SystemStatus IBS_SystemStatus;
  MessageCounter_0B4_5 MessageCounter_0B4;
} SG_IBS_Status_03_SigGroup_PT;

#  define Rte_TypeDef_SG_MCU_Fault_02_SigGroup
typedef struct
{
  MCU_TotalFaultNum MCU_TotalFaultNum;
} SG_MCU_Fault_02_SigGroup;

#  define Rte_TypeDef_SG_MCU_HardwareNumber_SigGroup
typedef struct
{
  MCU_HwVer MCU_HwVer;
} SG_MCU_HardwareNumber_SigGroup;

#  define Rte_TypeDef_SG_MCU_SoftwareNumber_SigGroup
typedef struct
{
  MCU_CodeVer MCU_CodeVer;
  MCU_CpldVer MCU_CpldVer;
  MCU_DataVer MCU_DataVer;
  MCU_HvMcuVer MCU_HvMcuVer;
} SG_MCU_SoftwareNumber_SigGroup;

#  define Rte_TypeDef_SG_MCU_VCU_03_SigGroup
typedef struct
{
  Checksum_095 Checksum_095;
  MessageCounter_095 MessageCounter_095;
  VCU_ActualGear VCU_ActualGear;
  VCU_BrakepedalStatus VCU_BrakepedalStatus;
  VCU_KL15eOn VCU_KL15eOn;
  VCU_MCUDesiredTorque VCU_MCUDesiredTorque;
  VCU_MCUSurgeDamperState VCU_MCUSurgeDamperState;
  VCU_RequestedModeMCU VCU_RequestedModeMCU;
  VCU_TCSActive VCU_TCSActive;
  VCU_TrqThresholdDampgCtl VCU_TrqThresholdDampgCtl;
} SG_MCU_VCU_03_SigGroup;

#  define Rte_TypeDef_SG_SGW_OdometerInfor_SigGroup
typedef struct
{
  IVI_OdometerInfor_2 IVI_OdometerInfor;
  IVI_OdometerInforValid IVI_OdometerInforValid;
} SG_SGW_OdometerInfor_SigGroup;

#  define Rte_TypeDef_SG_SGW_Req_SigGroup
typedef struct
{
  IVI_ResetReq IVI_ResetReq;
  IVI_VrOnOffSet IVI_VrOnOffSet;
} SG_SGW_Req_SigGroup;

#  define Rte_TypeDef_SG_Uds_EPT_Boot_Request_SigGroup
typedef struct
{
  UDS_EPT_BootCmd1_1 UDS_EPT_BootCmd1;
  UDS_EPT_BootCmd2_1 UDS_EPT_BootCmd2;
  UDS_EPT_BootCmd3_1 UDS_EPT_BootCmd3;
} SG_Uds_EPT_Boot_Request_SigGroup;

#  define Rte_TypeDef_SG_Uds_EPT_Boot_Response_SigGroup
typedef struct
{
  Uds_EPT_bootResponse_Byte0_1 Uds_EPT_bootResponse_Byte0;
  Uds_EPT_bootResponse_Byte1_1 Uds_EPT_bootResponse_Byte1;
  Uds_EPT_bootResponse_Byte2_1 Uds_EPT_bootResponse_Byte2;
  Uds_EPT_bootResponse_Byte3_1 Uds_EPT_bootResponse_Byte3;
  Uds_EPT_bootResponse_Byte4_1 Uds_EPT_bootResponse_Byte4;
  Uds_EPT_bootResponse_Byte5_1 Uds_EPT_bootResponse_Byte5;
  Uds_EPT_bootResponse_Byte6_1 Uds_EPT_bootResponse_Byte6;
  Uds_EPT_bootResponse_Byte7_1 Uds_EPT_bootResponse_Byte7;
} SG_Uds_EPT_Boot_Response_SigGroup;

#  define Rte_TypeDef_SG_VCU_DiagInfor_SigGroup
typedef struct
{
  VCU_DTC_Number_1 VCU_DTC_Number;
} SG_VCU_DiagInfor_SigGroup;

#  define Rte_TypeDef_SG_VCU_Fault_01_SigGroup
typedef struct
{
  PWT_ErrorLevel_2 PWT_ErrorLevel;
} SG_VCU_Fault_01_SigGroup;

#  define Rte_TypeDef_SG_VCU_HVbattStatus_SigGroup
typedef struct
{
  VCU_ComsumpPowerInstant_2 VCU_ComsumpPowerInstant;
  VCU_DisplayPowerPercent_2 VCU_DisplayPowerPercent;
  VCU_EnergyReturnedRegen_2 VCU_EnergyReturnedRegen;
  VCU_LowTempInhibitPowerUpWarn_2 VCU_LowTempInhibitPowerUpWarn;
} SG_VCU_HVbattStatus_SigGroup;

#  define Rte_TypeDef_TLEMotor_stCal
typedef struct
{
  uint8 TLEMotor_flgMotCtrCalEn;
  uint8 TLEMotor_valMotCtrCal;
} TLEMotor_stCal;

#  define Rte_TypeDef_TLEMotor_stSignal
typedef struct
{
  uint8 TLEMotor_stMotCtrPlusMod;
  uint8 TLEMotor_stMotCtrDecMod;
  uint8 TLEMotor_flgOverTempShutdown;
  uint8 TLEMotor_flgDiagInfo;
} TLEMotor_stSignal;

#  define Rte_TypeDef_Tsk_stCpuSleeporOff
typedef struct
{
  uint8 Tsk_stTaskGoRun_Mp;
  uint8 Tsk_flgPowerOff_MP;
} Tsk_stCpuSleeporOff;

#  define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURawArnbl
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_0 ChassisMgmt_MonStatAccrPedlURawArnbl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_1 ChassisMgmt_MonResAccrPedlURawArnbl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_2 ChassisMgmt_ErrStatAccrPedlURawArnbl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawArnbl_3 ChassisMgmt_ErrResAccrPedlURawArnbl;
} dt_ChassisMgmt_AccrPedlURawArnbl;

#  define Rte_TypeDef_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl
typedef struct
{
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_0 ChassisMgmt_MonStatAccrPedlURawDifAndSngAbnrl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_1 ChassisMgmt_MonResAccrPedlURawDifAndSngAbnrl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_2 ChassisMgmt_ErrStatAccrPedlURawDifAndSngAbnrl;
  Rte_DT_dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl_3 ChassisMgmt_ErrResAccrPedlURawDifAndSngAbnrl;
} dt_ChassisMgmt_AccrPedlURawDifAndSngAbnrl;

#  define Rte_TypeDef_dt_ComM_CBM03TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_0 ComM_MonStatCBM03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_1 ComM_MonResCBM03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_2 ComM_ErrStatCBM03TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_CBM03TimeoutDTCInfo_3 ComM_ErrResCBM03TimeoutDTCErrorInfo;
} dt_ComM_CBM03TimeoutDTCInfo;

#  define Rte_TypeDef_dt_ComM_CBM03TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_CBM03TimeoutInfo_0 ComM_MonStatCBM03TimeoutInfo;
  Rte_DT_dt_ComM_CBM03TimeoutInfo_1 ComM_MonResCBM03TimeoutInfo;
  Rte_DT_dt_ComM_CBM03TimeoutInfo_2 ComM_ErrStatCBM03TimeoutInfo;
  Rte_DT_dt_ComM_CBM03TimeoutInfo_3 ComM_ErrResCBM03TimeoutInfo;
} dt_ComM_CBM03TimeoutInfo;

#  define Rte_TypeDef_dt_ComM_IVI01CRCDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IVI01CRCDTCInfo_0 ComM_MonStatIVI01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCDTCInfo_1 ComM_MonResIVI01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCDTCInfo_2 ComM_ErrStatIVI01CRCDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01CRCDTCInfo_3 ComM_ErrResIVI01CRCDTCErrorInfo;
} dt_ComM_IVI01CRCDTCInfo;

#  define Rte_TypeDef_dt_ComM_IVI01TimeoutDTCInfo
typedef struct
{
  Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_0 ComM_MonStatIVI01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_1 ComM_MonResIVI01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_2 ComM_ErrStatIVI01TimeoutDTCErrorInfo;
  Rte_DT_dt_ComM_IVI01TimeoutDTCInfo_3 ComM_ErrResIVI01TimeoutDTCErrorInfo;
} dt_ComM_IVI01TimeoutDTCInfo;

#  define Rte_TypeDef_dt_ComM_IVI01TimeoutInfo
typedef struct
{
  Rte_DT_dt_ComM_IVI01TimeoutInfo_0 ComM_MonStatIVI01TimeoutInfo;
  Rte_DT_dt_ComM_IVI01TimeoutInfo_1 ComM_MonResIVI01TimeoutInfo;
  Rte_DT_dt_ComM_IVI01TimeoutInfo_2 ComM_ErrStatIVI01TimeoutInfo;
  Rte_DT_dt_ComM_IVI01TimeoutInfo_3 ComM_ErrResIVI01TimeoutInfo;
} dt_ComM_IVI01TimeoutInfo;

#  define Rte_TypeDef_dt_LvMgmt_IBSBattIDcHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_0 LvMgmt_MonStatIBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_1 LvMgmt_MonResIBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_2 LvMgmt_ErrStatIBSBattIDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattIDcHiDTC_3 LvMgmt_ErrResIBSBattIDcHiDTC;
} dt_LvMgmt_IBSBattIDcHiDTC;

#  define Rte_TypeDef_dt_LvMgmt_IBSBattUDcHiDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_0 LvMgmt_MonStatIBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_1 LvMgmt_MonResIBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_2 LvMgmt_ErrStatIBSBattUDcHiDTC;
  Rte_DT_dt_LvMgmt_IBSBattUDcHiDTC_3 LvMgmt_ErrResBSBattUDcHiDTC;
} dt_LvMgmt_IBSBattUDcHiDTC;

#  define Rte_TypeDef_dt_LvMgmt_IBSBattUDcLoDTC
typedef struct
{
  Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_0 LvMgmt_MonStatIBSBattUDcLoDTC_Flg;
  Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_1 LvMgmt_MonResIBSBattUDcLoDTC;
  Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_2 LvMgmt_ErrStatIBSBattUDcLoDTC;
  Rte_DT_dt_LvMgmt_IBSBattUDcLoDTC_3 LvMgmt_ErrResBSBattUDcLoDTC;
} dt_LvMgmt_IBSBattUDcLoDTC;

#  define Rte_TypeDef_tec_CB_Diag_CBOpeningEvents_t
typedef struct
{
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_0 CB_CCBOpeningsDrivingInfo;
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_1 CB_CCBOpeningsParkInfo;
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_2 CB_DCBOpeningsDrivingInfo;
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_3 CB_DCBOpeningsParkInfo;
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_4 CB_NumOfShortCircuitEventsInfo;
  Rte_DT_tec_CB_Diag_CBOpeningEvents_t_5 CB_NumOfCBOpeningByADuCInfo;
} tec_CB_Diag_CBOpeningEvents_t;

#  define Rte_TypeDef_BCM_AntiTheftSts
typedef uint8 BCM_AntiTheftSts;

#  define Rte_TypeDef_BMS_AbortAchiveSingleVolt
typedef uint8 BMS_AbortAchiveSingleVolt;

#  define Rte_TypeDef_BMS_AbortAchiveTotalVolt
typedef uint8 BMS_AbortAchiveTotalVolt;

#  define Rte_TypeDef_BMS_AbortAchivesetValue
typedef uint8 BMS_AbortAchivesetValue;

#  define Rte_TypeDef_BMS_AbortErrorCurrent
typedef uint8 BMS_AbortErrorCurrent;

#  define Rte_TypeDef_BMS_AbortErrorVoltage
typedef uint8 BMS_AbortErrorVoltage;

#  define Rte_TypeDef_BMS_AbortFaultBMSTemp
typedef uint8 BMS_AbortFaultBMSTemp;

#  define Rte_TypeDef_BMS_AbortFaultBatteryTemp
typedef uint8 BMS_AbortFaultBatteryTemp;

#  define Rte_TypeDef_BMS_AllowCellTemperature
typedef uint8 BMS_AllowCellTemperature;

#  define Rte_TypeDef_BMS_AllowChagCurrent
typedef uint16 BMS_AllowChagCurrent;

#  define Rte_TypeDef_BMS_BatChagSum
typedef uint16 BMS_BatChagSum;

#  define Rte_TypeDef_BMS_BatProDatDay
typedef uint8 BMS_BatProDatDay;

#  define Rte_TypeDef_BMS_BatProDatMonth
typedef uint8 BMS_BatProDatMonth;

#  define Rte_TypeDef_BMS_BatProDatYear
typedef uint8 BMS_BatProDatYear;

#  define Rte_TypeDef_BMS_BatProRights
typedef boolean BMS_BatProRights;

#  define Rte_TypeDef_BMS_BatSupName_64
typedef uint64 BMS_BatSupName_64;

#  define Rte_TypeDef_BMS_BatType
typedef uint8 BMS_BatType;

#  define Rte_TypeDef_BMS_BattCurr
typedef uint16 BMS_BattCurr;

#  define Rte_TypeDef_BMS_BattVolt
typedef uint16 BMS_BattVolt;

#  define Rte_TypeDef_BMS_ChagComplete
typedef uint8 BMS_ChagComplete;

#  define Rte_TypeDef_BMS_ChargeRequest
typedef uint8 BMS_ChargeRequest;

#  define Rte_TypeDef_BMS_DCChgMode
typedef uint8 BMS_DCChgMode;

#  define Rte_TypeDef_BMS_DisChgCurr
typedef uint16 BMS_DisChgCurr;

#  define Rte_TypeDef_BMS_DisplaySOC
typedef uint16 BMS_DisplaySOC;

#  define Rte_TypeDef_BMS_ErrorCellHighTemp
typedef uint8 BMS_ErrorCellHighTemp;

#  define Rte_TypeDef_BMS_ErrorCellLowTemp
typedef uint8 BMS_ErrorCellLowTemp;

#  define Rte_TypeDef_BMS_ErrorCellOverVolt
typedef uint8 BMS_ErrorCellOverVolt;

#  define Rte_TypeDef_BMS_ErrorCellUnderVolt
typedef uint8 BMS_ErrorCellUnderVolt;

#  define Rte_TypeDef_BMS_ErrorChaCurrentOver
typedef uint8 BMS_ErrorChaCurrentOver;

#  define Rte_TypeDef_BMS_ErrorHVIL
typedef boolean BMS_ErrorHVIL;

#  define Rte_TypeDef_BMS_ErrorHighSoc
typedef boolean BMS_ErrorHighSoc;

#  define Rte_TypeDef_BMS_ErrorLowSoc
typedef uint8 BMS_ErrorLowSoc;

#  define Rte_TypeDef_BMS_ErrorRelay
typedef boolean BMS_ErrorRelay;

#  define Rte_TypeDef_BMS_FeedbackCurr
typedef uint16 BMS_FeedbackCurr;

#  define Rte_TypeDef_BMS_Heatcurrent
typedef uint16 BMS_Heatcurrent;

#  define Rte_TypeDef_BMS_KeepWarmRequest
typedef boolean BMS_KeepWarmRequest;

#  define Rte_TypeDef_BMS_KeepWarmStatus
typedef uint8 BMS_KeepWarmStatus;

#  define Rte_TypeDef_BMS_LinkVoltage
typedef uint16 BMS_LinkVoltage;

#  define Rte_TypeDef_BMS_MaxCellTemp
typedef uint8 BMS_MaxCellTemp;

#  define Rte_TypeDef_BMS_MaxCellTempNO
typedef uint8 BMS_MaxCellTempNO;

#  define Rte_TypeDef_BMS_MaxCellVoltage
typedef uint16 BMS_MaxCellVoltage;

#  define Rte_TypeDef_BMS_MaxCellVoltageModuleNO
typedef uint8 BMS_MaxCellVoltageModuleNO;

#  define Rte_TypeDef_BMS_MaxCellVoltageNO
typedef uint8 BMS_MaxCellVoltageNO;

#  define Rte_TypeDef_BMS_MaxChagVoltage
typedef uint16 BMS_MaxChagVoltage;

#  define Rte_TypeDef_BMS_MinCellTemp
typedef uint8 BMS_MinCellTemp;

#  define Rte_TypeDef_BMS_MinCellTempNO
typedef uint8 BMS_MinCellTempNO;

#  define Rte_TypeDef_BMS_MinCellVoltage
typedef uint16 BMS_MinCellVoltage;

#  define Rte_TypeDef_BMS_NegRelayStatus
typedef uint8 BMS_NegRelayStatus;

#  define Rte_TypeDef_BMS_PTC_VoltageValue
typedef uint16 BMS_PTC_VoltageValue;

#  define Rte_TypeDef_BMS_PackVoltage
typedef uint16 BMS_PackVoltage;

#  define Rte_TypeDef_BMS_PosRelayStatus
typedef uint8 BMS_PosRelayStatus;

#  define Rte_TypeDef_BMS_RTC_Request
typedef boolean BMS_RTC_Request;

#  define Rte_TypeDef_BMS_RatBatVoltage
typedef uint16 BMS_RatBatVoltage;

#  define Rte_TypeDef_BMS_RatCapacity
typedef uint16 BMS_RatCapacity;

#  define Rte_TypeDef_BMS_RatEnergy
typedef uint16 BMS_RatEnergy;

#  define Rte_TypeDef_BMS_RemChagTime
typedef uint16 BMS_RemChagTime;

#  define Rte_TypeDef_BMS_RemainCapacity
typedef uint16 BMS_RemainCapacity;

#  define Rte_TypeDef_BMT_BatteryTemp0
typedef uint8 BMT_BatteryTemp0;

#  define Rte_TypeDef_BMT_BatteryTemp1
typedef uint8 BMT_BatteryTemp1;

#  define Rte_TypeDef_BMT_BatteryTemp10
typedef uint8 BMT_BatteryTemp10;

#  define Rte_TypeDef_BMT_BatteryTemp11
typedef uint8 BMT_BatteryTemp11;

#  define Rte_TypeDef_BMT_BatteryTemp12
typedef uint8 BMT_BatteryTemp12;

#  define Rte_TypeDef_BMT_BatteryTemp13
typedef uint8 BMT_BatteryTemp13;

#  define Rte_TypeDef_BMT_BatteryTemp14
typedef uint8 BMT_BatteryTemp14;

#  define Rte_TypeDef_BMT_BatteryTemp15
typedef uint8 BMT_BatteryTemp15;

#  define Rte_TypeDef_BMT_BatteryTemp2
typedef uint8 BMT_BatteryTemp2;

#  define Rte_TypeDef_BMT_BatteryTemp3
typedef uint8 BMT_BatteryTemp3;

#  define Rte_TypeDef_BMT_BatteryTemp4
typedef uint8 BMT_BatteryTemp4;

#  define Rte_TypeDef_BMT_BatteryTemp5
typedef uint8 BMT_BatteryTemp5;

#  define Rte_TypeDef_BMT_BatteryTemp6
typedef uint8 BMT_BatteryTemp6;

#  define Rte_TypeDef_BMT_BatteryTemp7
typedef uint8 BMT_BatteryTemp7;

#  define Rte_TypeDef_BMT_BatteryTemp8
typedef uint8 BMT_BatteryTemp8;

#  define Rte_TypeDef_BMT_BatteryTemp9
typedef uint8 BMT_BatteryTemp9;

#  define Rte_TypeDef_BMV_BatteryGroupID0
typedef uint8 BMV_BatteryGroupID0;

#  define Rte_TypeDef_BMV_BatteryGroupID1
typedef uint8 BMV_BatteryGroupID1;

#  define Rte_TypeDef_BMV_BatteryGroupID10
typedef uint8 BMV_BatteryGroupID10;

#  define Rte_TypeDef_BMV_BatteryGroupID100
typedef uint8 BMV_BatteryGroupID100;

#  define Rte_TypeDef_BMV_BatteryGroupID101
typedef uint8 BMV_BatteryGroupID101;

#  define Rte_TypeDef_BMV_BatteryGroupID102
typedef uint8 BMV_BatteryGroupID102;

#  define Rte_TypeDef_BMV_BatteryGroupID103
typedef uint8 BMV_BatteryGroupID103;

#  define Rte_TypeDef_BMV_BatteryGroupID104
typedef uint8 BMV_BatteryGroupID104;

#  define Rte_TypeDef_BMV_BatteryGroupID105
typedef uint8 BMV_BatteryGroupID105;

#  define Rte_TypeDef_BMV_BatteryGroupID106
typedef uint8 BMV_BatteryGroupID106;

#  define Rte_TypeDef_BMV_BatteryGroupID107
typedef uint8 BMV_BatteryGroupID107;

#  define Rte_TypeDef_BMV_BatteryGroupID108
typedef uint8 BMV_BatteryGroupID108;

#  define Rte_TypeDef_BMV_BatteryGroupID109
typedef uint8 BMV_BatteryGroupID109;

#  define Rte_TypeDef_BMV_BatteryGroupID11
typedef uint8 BMV_BatteryGroupID11;

#  define Rte_TypeDef_BMV_BatteryGroupID110
typedef uint8 BMV_BatteryGroupID110;

#  define Rte_TypeDef_BMV_BatteryGroupID111
typedef uint8 BMV_BatteryGroupID111;

#  define Rte_TypeDef_BMV_BatteryGroupID112
typedef uint8 BMV_BatteryGroupID112;

#  define Rte_TypeDef_BMV_BatteryGroupID113
typedef uint8 BMV_BatteryGroupID113;

#  define Rte_TypeDef_BMV_BatteryGroupID114
typedef uint8 BMV_BatteryGroupID114;

#  define Rte_TypeDef_BMV_BatteryGroupID115
typedef uint8 BMV_BatteryGroupID115;

#  define Rte_TypeDef_BMV_BatteryGroupID116
typedef uint8 BMV_BatteryGroupID116;

#  define Rte_TypeDef_BMV_BatteryGroupID117
typedef uint8 BMV_BatteryGroupID117;

#  define Rte_TypeDef_BMV_BatteryGroupID118
typedef uint8 BMV_BatteryGroupID118;

#  define Rte_TypeDef_BMV_BatteryGroupID119
typedef uint8 BMV_BatteryGroupID119;

#  define Rte_TypeDef_BMV_BatteryGroupID12
typedef uint8 BMV_BatteryGroupID12;

#  define Rte_TypeDef_BMV_BatteryGroupID120
typedef uint8 BMV_BatteryGroupID120;

#  define Rte_TypeDef_BMV_BatteryGroupID121
typedef uint8 BMV_BatteryGroupID121;

#  define Rte_TypeDef_BMV_BatteryGroupID122
typedef uint8 BMV_BatteryGroupID122;

#  define Rte_TypeDef_BMV_BatteryGroupID123
typedef uint8 BMV_BatteryGroupID123;

#  define Rte_TypeDef_BMV_BatteryGroupID124
typedef uint8 BMV_BatteryGroupID124;

#  define Rte_TypeDef_BMV_BatteryGroupID125
typedef uint8 BMV_BatteryGroupID125;

#  define Rte_TypeDef_BMV_BatteryGroupID126
typedef uint8 BMV_BatteryGroupID126;

#  define Rte_TypeDef_BMV_BatteryGroupID127
typedef uint8 BMV_BatteryGroupID127;

#  define Rte_TypeDef_BMV_BatteryGroupID128
typedef uint8 BMV_BatteryGroupID128;

#  define Rte_TypeDef_BMV_BatteryGroupID129
typedef uint8 BMV_BatteryGroupID129;

#  define Rte_TypeDef_BMV_BatteryGroupID13
typedef uint8 BMV_BatteryGroupID13;

#  define Rte_TypeDef_BMV_BatteryGroupID130
typedef uint8 BMV_BatteryGroupID130;

#  define Rte_TypeDef_BMV_BatteryGroupID131
typedef uint8 BMV_BatteryGroupID131;

#  define Rte_TypeDef_BMV_BatteryGroupID132
typedef uint8 BMV_BatteryGroupID132;

#  define Rte_TypeDef_BMV_BatteryGroupID133
typedef uint8 BMV_BatteryGroupID133;

#  define Rte_TypeDef_BMV_BatteryGroupID134
typedef uint8 BMV_BatteryGroupID134;

#  define Rte_TypeDef_BMV_BatteryGroupID135
typedef uint8 BMV_BatteryGroupID135;

#  define Rte_TypeDef_BMV_BatteryGroupID136
typedef uint8 BMV_BatteryGroupID136;

#  define Rte_TypeDef_BMV_BatteryGroupID137
typedef uint8 BMV_BatteryGroupID137;

#  define Rte_TypeDef_BMV_BatteryGroupID138
typedef uint8 BMV_BatteryGroupID138;

#  define Rte_TypeDef_BMV_BatteryGroupID139
typedef uint8 BMV_BatteryGroupID139;

#  define Rte_TypeDef_BMV_BatteryGroupID14
typedef uint8 BMV_BatteryGroupID14;

#  define Rte_TypeDef_BMV_BatteryGroupID140
typedef uint8 BMV_BatteryGroupID140;

#  define Rte_TypeDef_BMV_BatteryGroupID141
typedef uint8 BMV_BatteryGroupID141;

#  define Rte_TypeDef_BMV_BatteryGroupID142
typedef uint8 BMV_BatteryGroupID142;

#  define Rte_TypeDef_BMV_BatteryGroupID143
typedef uint8 BMV_BatteryGroupID143;

#  define Rte_TypeDef_BMV_BatteryGroupID144
typedef uint8 BMV_BatteryGroupID144;

#  define Rte_TypeDef_BMV_BatteryGroupID145
typedef uint8 BMV_BatteryGroupID145;

#  define Rte_TypeDef_BMV_BatteryGroupID146
typedef uint8 BMV_BatteryGroupID146;

#  define Rte_TypeDef_BMV_BatteryGroupID147
typedef uint8 BMV_BatteryGroupID147;

#  define Rte_TypeDef_BMV_BatteryGroupID148
typedef uint8 BMV_BatteryGroupID148;

#  define Rte_TypeDef_BMV_BatteryGroupID149
typedef uint8 BMV_BatteryGroupID149;

#  define Rte_TypeDef_BMV_BatteryGroupID15
typedef uint8 BMV_BatteryGroupID15;

#  define Rte_TypeDef_BMV_BatteryGroupID150
typedef uint8 BMV_BatteryGroupID150;

#  define Rte_TypeDef_BMV_BatteryGroupID151
typedef uint8 BMV_BatteryGroupID151;

#  define Rte_TypeDef_BMV_BatteryGroupID152
typedef uint8 BMV_BatteryGroupID152;

#  define Rte_TypeDef_BMV_BatteryGroupID153
typedef uint8 BMV_BatteryGroupID153;

#  define Rte_TypeDef_BMV_BatteryGroupID154
typedef uint8 BMV_BatteryGroupID154;

#  define Rte_TypeDef_BMV_BatteryGroupID155
typedef uint8 BMV_BatteryGroupID155;

#  define Rte_TypeDef_BMV_BatteryGroupID156
typedef uint8 BMV_BatteryGroupID156;

#  define Rte_TypeDef_BMV_BatteryGroupID157
typedef uint8 BMV_BatteryGroupID157;

#  define Rte_TypeDef_BMV_BatteryGroupID158
typedef uint8 BMV_BatteryGroupID158;

#  define Rte_TypeDef_BMV_BatteryGroupID159
typedef uint8 BMV_BatteryGroupID159;

#  define Rte_TypeDef_BMV_BatteryGroupID16
typedef uint8 BMV_BatteryGroupID16;

#  define Rte_TypeDef_BMV_BatteryGroupID160
typedef uint8 BMV_BatteryGroupID160;

#  define Rte_TypeDef_BMV_BatteryGroupID161
typedef uint8 BMV_BatteryGroupID161;

#  define Rte_TypeDef_BMV_BatteryGroupID162
typedef uint8 BMV_BatteryGroupID162;

#  define Rte_TypeDef_BMV_BatteryGroupID163
typedef uint8 BMV_BatteryGroupID163;

#  define Rte_TypeDef_BMV_BatteryGroupID164
typedef uint8 BMV_BatteryGroupID164;

#  define Rte_TypeDef_BMV_BatteryGroupID165
typedef uint8 BMV_BatteryGroupID165;

#  define Rte_TypeDef_BMV_BatteryGroupID166
typedef uint8 BMV_BatteryGroupID166;

#  define Rte_TypeDef_BMV_BatteryGroupID167
typedef uint8 BMV_BatteryGroupID167;

#  define Rte_TypeDef_BMV_BatteryGroupID168
typedef uint8 BMV_BatteryGroupID168;

#  define Rte_TypeDef_BMV_BatteryGroupID169
typedef uint8 BMV_BatteryGroupID169;

#  define Rte_TypeDef_BMV_BatteryGroupID17
typedef uint8 BMV_BatteryGroupID17;

#  define Rte_TypeDef_BMV_BatteryGroupID170
typedef uint8 BMV_BatteryGroupID170;

#  define Rte_TypeDef_BMV_BatteryGroupID171
typedef uint8 BMV_BatteryGroupID171;

#  define Rte_TypeDef_BMV_BatteryGroupID172
typedef uint8 BMV_BatteryGroupID172;

#  define Rte_TypeDef_BMV_BatteryGroupID173
typedef uint8 BMV_BatteryGroupID173;

#  define Rte_TypeDef_BMV_BatteryGroupID174
typedef uint8 BMV_BatteryGroupID174;

#  define Rte_TypeDef_BMV_BatteryGroupID175
typedef uint8 BMV_BatteryGroupID175;

#  define Rte_TypeDef_BMV_BatteryGroupID176
typedef uint8 BMV_BatteryGroupID176;

#  define Rte_TypeDef_BMV_BatteryGroupID177
typedef uint8 BMV_BatteryGroupID177;

#  define Rte_TypeDef_BMV_BatteryGroupID178
typedef uint8 BMV_BatteryGroupID178;

#  define Rte_TypeDef_BMV_BatteryGroupID179
typedef uint8 BMV_BatteryGroupID179;

#  define Rte_TypeDef_BMV_BatteryGroupID18
typedef uint8 BMV_BatteryGroupID18;

#  define Rte_TypeDef_BMV_BatteryGroupID180
typedef uint8 BMV_BatteryGroupID180;

#  define Rte_TypeDef_BMV_BatteryGroupID181
typedef uint8 BMV_BatteryGroupID181;

#  define Rte_TypeDef_BMV_BatteryGroupID182
typedef uint8 BMV_BatteryGroupID182;

#  define Rte_TypeDef_BMV_BatteryGroupID183
typedef uint8 BMV_BatteryGroupID183;

#  define Rte_TypeDef_BMV_BatteryGroupID184
typedef uint8 BMV_BatteryGroupID184;

#  define Rte_TypeDef_BMV_BatteryGroupID185
typedef uint8 BMV_BatteryGroupID185;

#  define Rte_TypeDef_BMV_BatteryGroupID186
typedef uint8 BMV_BatteryGroupID186;

#  define Rte_TypeDef_BMV_BatteryGroupID187
typedef uint8 BMV_BatteryGroupID187;

#  define Rte_TypeDef_BMV_BatteryGroupID188
typedef uint8 BMV_BatteryGroupID188;

#  define Rte_TypeDef_BMV_BatteryGroupID189
typedef uint8 BMV_BatteryGroupID189;

#  define Rte_TypeDef_BMV_BatteryGroupID19
typedef uint8 BMV_BatteryGroupID19;

#  define Rte_TypeDef_BMV_BatteryGroupID190
typedef uint8 BMV_BatteryGroupID190;

#  define Rte_TypeDef_BMV_BatteryGroupID191
typedef uint8 BMV_BatteryGroupID191;

#  define Rte_TypeDef_BMV_BatteryGroupID192
typedef uint8 BMV_BatteryGroupID192;

#  define Rte_TypeDef_BMV_BatteryGroupID193
typedef uint8 BMV_BatteryGroupID193;

#  define Rte_TypeDef_BMV_BatteryGroupID194
typedef uint8 BMV_BatteryGroupID194;

#  define Rte_TypeDef_BMV_BatteryGroupID195
typedef uint8 BMV_BatteryGroupID195;

#  define Rte_TypeDef_BMV_BatteryGroupID196
typedef uint8 BMV_BatteryGroupID196;

#  define Rte_TypeDef_BMV_BatteryGroupID197
typedef uint8 BMV_BatteryGroupID197;

#  define Rte_TypeDef_BMV_BatteryGroupID198
typedef uint8 BMV_BatteryGroupID198;

#  define Rte_TypeDef_BMV_BatteryGroupID199
typedef uint8 BMV_BatteryGroupID199;

#  define Rte_TypeDef_BMV_BatteryGroupID2
typedef uint8 BMV_BatteryGroupID2;

#  define Rte_TypeDef_BMV_BatteryGroupID20
typedef uint8 BMV_BatteryGroupID20;

#  define Rte_TypeDef_BMV_BatteryGroupID200
typedef uint8 BMV_BatteryGroupID200;

#  define Rte_TypeDef_BMV_BatteryGroupID201
typedef uint8 BMV_BatteryGroupID201;

#  define Rte_TypeDef_BMV_BatteryGroupID202
typedef uint8 BMV_BatteryGroupID202;

#  define Rte_TypeDef_BMV_BatteryGroupID203
typedef uint8 BMV_BatteryGroupID203;

#  define Rte_TypeDef_BMV_BatteryGroupID204
typedef uint8 BMV_BatteryGroupID204;

#  define Rte_TypeDef_BMV_BatteryGroupID205
typedef uint8 BMV_BatteryGroupID205;

#  define Rte_TypeDef_BMV_BatteryGroupID206
typedef uint8 BMV_BatteryGroupID206;

#  define Rte_TypeDef_BMV_BatteryGroupID207
typedef uint8 BMV_BatteryGroupID207;

#  define Rte_TypeDef_BMV_BatteryGroupID208
typedef uint8 BMV_BatteryGroupID208;

#  define Rte_TypeDef_BMV_BatteryGroupID209
typedef uint8 BMV_BatteryGroupID209;

#  define Rte_TypeDef_BMV_BatteryGroupID21
typedef uint8 BMV_BatteryGroupID21;

#  define Rte_TypeDef_BMV_BatteryGroupID210
typedef uint8 BMV_BatteryGroupID210;

#  define Rte_TypeDef_BMV_BatteryGroupID211
typedef uint8 BMV_BatteryGroupID211;

#  define Rte_TypeDef_BMV_BatteryGroupID212
typedef uint8 BMV_BatteryGroupID212;

#  define Rte_TypeDef_BMV_BatteryGroupID213
typedef uint8 BMV_BatteryGroupID213;

#  define Rte_TypeDef_BMV_BatteryGroupID214
typedef uint8 BMV_BatteryGroupID214;

#  define Rte_TypeDef_BMV_BatteryGroupID215
typedef uint8 BMV_BatteryGroupID215;

#  define Rte_TypeDef_BMV_BatteryGroupID216
typedef uint8 BMV_BatteryGroupID216;

#  define Rte_TypeDef_BMV_BatteryGroupID217
typedef uint8 BMV_BatteryGroupID217;

#  define Rte_TypeDef_BMV_BatteryGroupID218
typedef uint8 BMV_BatteryGroupID218;

#  define Rte_TypeDef_BMV_BatteryGroupID219
typedef uint8 BMV_BatteryGroupID219;

#  define Rte_TypeDef_BMV_BatteryGroupID22
typedef uint8 BMV_BatteryGroupID22;

#  define Rte_TypeDef_BMV_BatteryGroupID220
typedef uint8 BMV_BatteryGroupID220;

#  define Rte_TypeDef_BMV_BatteryGroupID221
typedef uint8 BMV_BatteryGroupID221;

#  define Rte_TypeDef_BMV_BatteryGroupID222
typedef uint8 BMV_BatteryGroupID222;

#  define Rte_TypeDef_BMV_BatteryGroupID223
typedef uint8 BMV_BatteryGroupID223;

#  define Rte_TypeDef_BMV_BatteryGroupID224
typedef uint8 BMV_BatteryGroupID224;

#  define Rte_TypeDef_BMV_BatteryGroupID225
typedef uint8 BMV_BatteryGroupID225;

#  define Rte_TypeDef_BMV_BatteryGroupID226
typedef uint8 BMV_BatteryGroupID226;

#  define Rte_TypeDef_BMV_BatteryGroupID227
typedef uint8 BMV_BatteryGroupID227;

#  define Rte_TypeDef_BMV_BatteryGroupID228
typedef uint8 BMV_BatteryGroupID228;

#  define Rte_TypeDef_BMV_BatteryGroupID229
typedef uint8 BMV_BatteryGroupID229;

#  define Rte_TypeDef_BMV_BatteryGroupID23
typedef uint8 BMV_BatteryGroupID23;

#  define Rte_TypeDef_BMV_BatteryGroupID230
typedef uint8 BMV_BatteryGroupID230;

#  define Rte_TypeDef_BMV_BatteryGroupID231
typedef uint8 BMV_BatteryGroupID231;

#  define Rte_TypeDef_BMV_BatteryGroupID232
typedef uint8 BMV_BatteryGroupID232;

#  define Rte_TypeDef_BMV_BatteryGroupID233
typedef uint8 BMV_BatteryGroupID233;

#  define Rte_TypeDef_BMV_BatteryGroupID234
typedef uint8 BMV_BatteryGroupID234;

#  define Rte_TypeDef_BMV_BatteryGroupID235
typedef uint8 BMV_BatteryGroupID235;

#  define Rte_TypeDef_BMV_BatteryGroupID236
typedef uint8 BMV_BatteryGroupID236;

#  define Rte_TypeDef_BMV_BatteryGroupID237
typedef uint8 BMV_BatteryGroupID237;

#  define Rte_TypeDef_BMV_BatteryGroupID238
typedef uint8 BMV_BatteryGroupID238;

#  define Rte_TypeDef_BMV_BatteryGroupID239
typedef uint8 BMV_BatteryGroupID239;

#  define Rte_TypeDef_BMV_BatteryGroupID24
typedef uint8 BMV_BatteryGroupID24;

#  define Rte_TypeDef_BMV_BatteryGroupID240
typedef uint8 BMV_BatteryGroupID240;

#  define Rte_TypeDef_BMV_BatteryGroupID241
typedef uint8 BMV_BatteryGroupID241;

#  define Rte_TypeDef_BMV_BatteryGroupID242
typedef uint8 BMV_BatteryGroupID242;

#  define Rte_TypeDef_BMV_BatteryGroupID243
typedef uint8 BMV_BatteryGroupID243;

#  define Rte_TypeDef_BMV_BatteryGroupID244
typedef uint8 BMV_BatteryGroupID244;

#  define Rte_TypeDef_BMV_BatteryGroupID245
typedef uint8 BMV_BatteryGroupID245;

#  define Rte_TypeDef_BMV_BatteryGroupID246
typedef uint8 BMV_BatteryGroupID246;

#  define Rte_TypeDef_BMV_BatteryGroupID247
typedef uint8 BMV_BatteryGroupID247;

#  define Rte_TypeDef_BMV_BatteryGroupID248
typedef uint8 BMV_BatteryGroupID248;

#  define Rte_TypeDef_BMV_BatteryGroupID249
typedef uint8 BMV_BatteryGroupID249;

#  define Rte_TypeDef_BMV_BatteryGroupID25
typedef uint8 BMV_BatteryGroupID25;

#  define Rte_TypeDef_BMV_BatteryGroupID250
typedef uint8 BMV_BatteryGroupID250;

#  define Rte_TypeDef_BMV_BatteryGroupID251
typedef uint8 BMV_BatteryGroupID251;

#  define Rte_TypeDef_BMV_BatteryGroupID252
typedef uint8 BMV_BatteryGroupID252;

#  define Rte_TypeDef_BMV_BatteryGroupID253
typedef uint8 BMV_BatteryGroupID253;

#  define Rte_TypeDef_BMV_BatteryGroupID254
typedef uint8 BMV_BatteryGroupID254;

#  define Rte_TypeDef_BMV_BatteryGroupID255
typedef uint8 BMV_BatteryGroupID255;

#  define Rte_TypeDef_BMV_BatteryGroupID26
typedef uint8 BMV_BatteryGroupID26;

#  define Rte_TypeDef_BMV_BatteryGroupID27
typedef uint8 BMV_BatteryGroupID27;

#  define Rte_TypeDef_BMV_BatteryGroupID28
typedef uint8 BMV_BatteryGroupID28;

#  define Rte_TypeDef_BMV_BatteryGroupID29
typedef uint8 BMV_BatteryGroupID29;

#  define Rte_TypeDef_BMV_BatteryGroupID3
typedef uint8 BMV_BatteryGroupID3;

#  define Rte_TypeDef_BMV_BatteryGroupID30
typedef uint8 BMV_BatteryGroupID30;

#  define Rte_TypeDef_BMV_BatteryGroupID31
typedef uint8 BMV_BatteryGroupID31;

#  define Rte_TypeDef_BMV_BatteryGroupID32
typedef uint8 BMV_BatteryGroupID32;

#  define Rte_TypeDef_BMV_BatteryGroupID33
typedef uint8 BMV_BatteryGroupID33;

#  define Rte_TypeDef_BMV_BatteryGroupID34
typedef uint8 BMV_BatteryGroupID34;

#  define Rte_TypeDef_BMV_BatteryGroupID35
typedef uint8 BMV_BatteryGroupID35;

#  define Rte_TypeDef_BMV_BatteryGroupID36
typedef uint8 BMV_BatteryGroupID36;

#  define Rte_TypeDef_BMV_BatteryGroupID37
typedef uint8 BMV_BatteryGroupID37;

#  define Rte_TypeDef_BMV_BatteryGroupID38
typedef uint8 BMV_BatteryGroupID38;

#  define Rte_TypeDef_BMV_BatteryGroupID39
typedef uint8 BMV_BatteryGroupID39;

#  define Rte_TypeDef_BMV_BatteryGroupID4
typedef uint8 BMV_BatteryGroupID4;

#  define Rte_TypeDef_BMV_BatteryGroupID40
typedef uint8 BMV_BatteryGroupID40;

#  define Rte_TypeDef_BMV_BatteryGroupID41
typedef uint8 BMV_BatteryGroupID41;

#  define Rte_TypeDef_BMV_BatteryGroupID42
typedef uint8 BMV_BatteryGroupID42;

#  define Rte_TypeDef_BMV_BatteryGroupID43
typedef uint8 BMV_BatteryGroupID43;

#  define Rte_TypeDef_BMV_BatteryGroupID44
typedef uint8 BMV_BatteryGroupID44;

#  define Rte_TypeDef_BMV_BatteryGroupID45
typedef uint8 BMV_BatteryGroupID45;

#  define Rte_TypeDef_BMV_BatteryGroupID46
typedef uint8 BMV_BatteryGroupID46;

#  define Rte_TypeDef_BMV_BatteryGroupID47
typedef uint8 BMV_BatteryGroupID47;

#  define Rte_TypeDef_BMV_BatteryGroupID48
typedef uint8 BMV_BatteryGroupID48;

#  define Rte_TypeDef_BMV_BatteryGroupID49
typedef uint8 BMV_BatteryGroupID49;

#  define Rte_TypeDef_BMV_BatteryGroupID5
typedef uint8 BMV_BatteryGroupID5;

#  define Rte_TypeDef_BMV_BatteryGroupID50
typedef uint8 BMV_BatteryGroupID50;

#  define Rte_TypeDef_BMV_BatteryGroupID51
typedef uint8 BMV_BatteryGroupID51;

#  define Rte_TypeDef_BMV_BatteryGroupID52
typedef uint8 BMV_BatteryGroupID52;

#  define Rte_TypeDef_BMV_BatteryGroupID53
typedef uint8 BMV_BatteryGroupID53;

#  define Rte_TypeDef_BMV_BatteryGroupID54
typedef uint8 BMV_BatteryGroupID54;

#  define Rte_TypeDef_BMV_BatteryGroupID55
typedef uint8 BMV_BatteryGroupID55;

#  define Rte_TypeDef_BMV_BatteryGroupID56
typedef uint8 BMV_BatteryGroupID56;

#  define Rte_TypeDef_BMV_BatteryGroupID57
typedef uint8 BMV_BatteryGroupID57;

#  define Rte_TypeDef_BMV_BatteryGroupID58
typedef uint8 BMV_BatteryGroupID58;

#  define Rte_TypeDef_BMV_BatteryGroupID59
typedef uint8 BMV_BatteryGroupID59;

#  define Rte_TypeDef_BMV_BatteryGroupID6
typedef uint8 BMV_BatteryGroupID6;

#  define Rte_TypeDef_BMV_BatteryGroupID60
typedef uint8 BMV_BatteryGroupID60;

#  define Rte_TypeDef_BMV_BatteryGroupID61
typedef uint8 BMV_BatteryGroupID61;

#  define Rte_TypeDef_BMV_BatteryGroupID62
typedef uint8 BMV_BatteryGroupID62;

#  define Rte_TypeDef_BMV_BatteryGroupID63
typedef uint8 BMV_BatteryGroupID63;

#  define Rte_TypeDef_BMV_BatteryGroupID64
typedef uint8 BMV_BatteryGroupID64;

#  define Rte_TypeDef_BMV_BatteryGroupID65
typedef uint8 BMV_BatteryGroupID65;

#  define Rte_TypeDef_BMV_BatteryGroupID66
typedef uint8 BMV_BatteryGroupID66;

#  define Rte_TypeDef_BMV_BatteryGroupID67
typedef uint8 BMV_BatteryGroupID67;

#  define Rte_TypeDef_BMV_BatteryGroupID68
typedef uint8 BMV_BatteryGroupID68;

#  define Rte_TypeDef_BMV_BatteryGroupID69
typedef uint8 BMV_BatteryGroupID69;

#  define Rte_TypeDef_BMV_BatteryGroupID7
typedef uint8 BMV_BatteryGroupID7;

#  define Rte_TypeDef_BMV_BatteryGroupID70
typedef uint8 BMV_BatteryGroupID70;

#  define Rte_TypeDef_BMV_BatteryGroupID71
typedef uint8 BMV_BatteryGroupID71;

#  define Rte_TypeDef_BMV_BatteryGroupID72
typedef uint8 BMV_BatteryGroupID72;

#  define Rte_TypeDef_BMV_BatteryGroupID73
typedef uint8 BMV_BatteryGroupID73;

#  define Rte_TypeDef_BMV_BatteryGroupID74
typedef uint8 BMV_BatteryGroupID74;

#  define Rte_TypeDef_BMV_BatteryGroupID75
typedef uint8 BMV_BatteryGroupID75;

#  define Rte_TypeDef_BMV_BatteryGroupID76
typedef uint8 BMV_BatteryGroupID76;

#  define Rte_TypeDef_BMV_BatteryGroupID77
typedef uint8 BMV_BatteryGroupID77;

#  define Rte_TypeDef_BMV_BatteryGroupID78
typedef uint8 BMV_BatteryGroupID78;

#  define Rte_TypeDef_BMV_BatteryGroupID79
typedef uint8 BMV_BatteryGroupID79;

#  define Rte_TypeDef_BMV_BatteryGroupID8
typedef uint8 BMV_BatteryGroupID8;

#  define Rte_TypeDef_BMV_BatteryGroupID80
typedef uint8 BMV_BatteryGroupID80;

#  define Rte_TypeDef_BMV_BatteryGroupID81
typedef uint8 BMV_BatteryGroupID81;

#  define Rte_TypeDef_BMV_BatteryGroupID82
typedef uint8 BMV_BatteryGroupID82;

#  define Rte_TypeDef_BMV_BatteryGroupID83
typedef uint8 BMV_BatteryGroupID83;

#  define Rte_TypeDef_BMV_BatteryGroupID84
typedef uint8 BMV_BatteryGroupID84;

#  define Rte_TypeDef_BMV_BatteryGroupID85
typedef uint8 BMV_BatteryGroupID85;

#  define Rte_TypeDef_BMV_BatteryGroupID86
typedef uint8 BMV_BatteryGroupID86;

#  define Rte_TypeDef_BMV_BatteryGroupID87
typedef uint8 BMV_BatteryGroupID87;

#  define Rte_TypeDef_BMV_BatteryGroupID88
typedef uint8 BMV_BatteryGroupID88;

#  define Rte_TypeDef_BMV_BatteryGroupID89
typedef uint8 BMV_BatteryGroupID89;

#  define Rte_TypeDef_BMV_BatteryGroupID9
typedef uint8 BMV_BatteryGroupID9;

#  define Rte_TypeDef_BMV_BatteryGroupID90
typedef uint8 BMV_BatteryGroupID90;

#  define Rte_TypeDef_BMV_BatteryGroupID91
typedef uint8 BMV_BatteryGroupID91;

#  define Rte_TypeDef_BMV_BatteryGroupID92
typedef uint8 BMV_BatteryGroupID92;

#  define Rte_TypeDef_BMV_BatteryGroupID93
typedef uint8 BMV_BatteryGroupID93;

#  define Rte_TypeDef_BMV_BatteryGroupID94
typedef uint8 BMV_BatteryGroupID94;

#  define Rte_TypeDef_BMV_BatteryGroupID95
typedef uint8 BMV_BatteryGroupID95;

#  define Rte_TypeDef_BMV_BatteryGroupID96
typedef uint8 BMV_BatteryGroupID96;

#  define Rte_TypeDef_BMV_BatteryGroupID97
typedef uint8 BMV_BatteryGroupID97;

#  define Rte_TypeDef_BMV_BatteryGroupID98
typedef uint8 BMV_BatteryGroupID98;

#  define Rte_TypeDef_BMV_BatteryGroupID99
typedef uint8 BMV_BatteryGroupID99;

#  define Rte_TypeDef_BMV_BatteryVoltageMin0
typedef uint16 BMV_BatteryVoltageMin0;

#  define Rte_TypeDef_BMV_BatteryVoltageMin1
typedef uint16 BMV_BatteryVoltageMin1;

#  define Rte_TypeDef_BMV_BatteryVoltageMin10
typedef uint16 BMV_BatteryVoltageMin10;

#  define Rte_TypeDef_BMV_BatteryVoltageMin100
typedef uint16 BMV_BatteryVoltageMin100;

#  define Rte_TypeDef_BMV_BatteryVoltageMin101
typedef uint16 BMV_BatteryVoltageMin101;

#  define Rte_TypeDef_BMV_BatteryVoltageMin102
typedef uint16 BMV_BatteryVoltageMin102;

#  define Rte_TypeDef_BMV_BatteryVoltageMin103
typedef uint16 BMV_BatteryVoltageMin103;

#  define Rte_TypeDef_BMV_BatteryVoltageMin104
typedef uint16 BMV_BatteryVoltageMin104;

#  define Rte_TypeDef_BMV_BatteryVoltageMin105
typedef uint16 BMV_BatteryVoltageMin105;

#  define Rte_TypeDef_BMV_BatteryVoltageMin106
typedef uint16 BMV_BatteryVoltageMin106;

#  define Rte_TypeDef_BMV_BatteryVoltageMin107
typedef uint16 BMV_BatteryVoltageMin107;

#  define Rte_TypeDef_BMV_BatteryVoltageMin108
typedef uint16 BMV_BatteryVoltageMin108;

#  define Rte_TypeDef_BMV_BatteryVoltageMin109
typedef uint16 BMV_BatteryVoltageMin109;

#  define Rte_TypeDef_BMV_BatteryVoltageMin11
typedef uint16 BMV_BatteryVoltageMin11;

#  define Rte_TypeDef_BMV_BatteryVoltageMin110
typedef uint16 BMV_BatteryVoltageMin110;

#  define Rte_TypeDef_BMV_BatteryVoltageMin111
typedef uint16 BMV_BatteryVoltageMin111;

#  define Rte_TypeDef_BMV_BatteryVoltageMin112
typedef uint16 BMV_BatteryVoltageMin112;

#  define Rte_TypeDef_BMV_BatteryVoltageMin113
typedef uint16 BMV_BatteryVoltageMin113;

#  define Rte_TypeDef_BMV_BatteryVoltageMin114
typedef uint16 BMV_BatteryVoltageMin114;

#  define Rte_TypeDef_BMV_BatteryVoltageMin115
typedef uint16 BMV_BatteryVoltageMin115;

#  define Rte_TypeDef_BMV_BatteryVoltageMin116
typedef uint16 BMV_BatteryVoltageMin116;

#  define Rte_TypeDef_BMV_BatteryVoltageMin117
typedef uint16 BMV_BatteryVoltageMin117;

#  define Rte_TypeDef_BMV_BatteryVoltageMin118
typedef uint16 BMV_BatteryVoltageMin118;

#  define Rte_TypeDef_BMV_BatteryVoltageMin119
typedef uint16 BMV_BatteryVoltageMin119;

#  define Rte_TypeDef_BMV_BatteryVoltageMin12
typedef uint16 BMV_BatteryVoltageMin12;

#  define Rte_TypeDef_BMV_BatteryVoltageMin120
typedef uint16 BMV_BatteryVoltageMin120;

#  define Rte_TypeDef_BMV_BatteryVoltageMin121
typedef uint16 BMV_BatteryVoltageMin121;

#  define Rte_TypeDef_BMV_BatteryVoltageMin122
typedef uint16 BMV_BatteryVoltageMin122;

#  define Rte_TypeDef_BMV_BatteryVoltageMin123
typedef uint16 BMV_BatteryVoltageMin123;

#  define Rte_TypeDef_BMV_BatteryVoltageMin124
typedef uint16 BMV_BatteryVoltageMin124;

#  define Rte_TypeDef_BMV_BatteryVoltageMin125
typedef uint16 BMV_BatteryVoltageMin125;

#  define Rte_TypeDef_BMV_BatteryVoltageMin126
typedef uint16 BMV_BatteryVoltageMin126;

#  define Rte_TypeDef_BMV_BatteryVoltageMin127
typedef uint16 BMV_BatteryVoltageMin127;

#  define Rte_TypeDef_BMV_BatteryVoltageMin128
typedef uint16 BMV_BatteryVoltageMin128;

#  define Rte_TypeDef_BMV_BatteryVoltageMin129
typedef uint16 BMV_BatteryVoltageMin129;

#  define Rte_TypeDef_BMV_BatteryVoltageMin13
typedef uint16 BMV_BatteryVoltageMin13;

#  define Rte_TypeDef_BMV_BatteryVoltageMin130
typedef uint16 BMV_BatteryVoltageMin130;

#  define Rte_TypeDef_BMV_BatteryVoltageMin131
typedef uint16 BMV_BatteryVoltageMin131;

#  define Rte_TypeDef_BMV_BatteryVoltageMin132
typedef uint16 BMV_BatteryVoltageMin132;

#  define Rte_TypeDef_BMV_BatteryVoltageMin133
typedef uint16 BMV_BatteryVoltageMin133;

#  define Rte_TypeDef_BMV_BatteryVoltageMin134
typedef uint16 BMV_BatteryVoltageMin134;

#  define Rte_TypeDef_BMV_BatteryVoltageMin135
typedef uint16 BMV_BatteryVoltageMin135;

#  define Rte_TypeDef_BMV_BatteryVoltageMin136
typedef uint16 BMV_BatteryVoltageMin136;

#  define Rte_TypeDef_BMV_BatteryVoltageMin137
typedef uint16 BMV_BatteryVoltageMin137;

#  define Rte_TypeDef_BMV_BatteryVoltageMin138
typedef uint16 BMV_BatteryVoltageMin138;

#  define Rte_TypeDef_BMV_BatteryVoltageMin139
typedef uint16 BMV_BatteryVoltageMin139;

#  define Rte_TypeDef_BMV_BatteryVoltageMin14
typedef uint16 BMV_BatteryVoltageMin14;

#  define Rte_TypeDef_BMV_BatteryVoltageMin140
typedef uint16 BMV_BatteryVoltageMin140;

#  define Rte_TypeDef_BMV_BatteryVoltageMin141
typedef uint16 BMV_BatteryVoltageMin141;

#  define Rte_TypeDef_BMV_BatteryVoltageMin142
typedef uint16 BMV_BatteryVoltageMin142;

#  define Rte_TypeDef_BMV_BatteryVoltageMin143
typedef uint16 BMV_BatteryVoltageMin143;

#  define Rte_TypeDef_BMV_BatteryVoltageMin144
typedef uint16 BMV_BatteryVoltageMin144;

#  define Rte_TypeDef_BMV_BatteryVoltageMin145
typedef uint16 BMV_BatteryVoltageMin145;

#  define Rte_TypeDef_BMV_BatteryVoltageMin146
typedef uint16 BMV_BatteryVoltageMin146;

#  define Rte_TypeDef_BMV_BatteryVoltageMin147
typedef uint16 BMV_BatteryVoltageMin147;

#  define Rte_TypeDef_BMV_BatteryVoltageMin148
typedef uint16 BMV_BatteryVoltageMin148;

#  define Rte_TypeDef_BMV_BatteryVoltageMin149
typedef uint16 BMV_BatteryVoltageMin149;

#  define Rte_TypeDef_BMV_BatteryVoltageMin15
typedef uint16 BMV_BatteryVoltageMin15;

#  define Rte_TypeDef_BMV_BatteryVoltageMin150
typedef uint16 BMV_BatteryVoltageMin150;

#  define Rte_TypeDef_BMV_BatteryVoltageMin151
typedef uint16 BMV_BatteryVoltageMin151;

#  define Rte_TypeDef_BMV_BatteryVoltageMin152
typedef uint16 BMV_BatteryVoltageMin152;

#  define Rte_TypeDef_BMV_BatteryVoltageMin153
typedef uint16 BMV_BatteryVoltageMin153;

#  define Rte_TypeDef_BMV_BatteryVoltageMin154
typedef uint16 BMV_BatteryVoltageMin154;

#  define Rte_TypeDef_BMV_BatteryVoltageMin155
typedef uint16 BMV_BatteryVoltageMin155;

#  define Rte_TypeDef_BMV_BatteryVoltageMin156
typedef uint16 BMV_BatteryVoltageMin156;

#  define Rte_TypeDef_BMV_BatteryVoltageMin157
typedef uint16 BMV_BatteryVoltageMin157;

#  define Rte_TypeDef_BMV_BatteryVoltageMin158
typedef uint16 BMV_BatteryVoltageMin158;

#  define Rte_TypeDef_BMV_BatteryVoltageMin159
typedef uint16 BMV_BatteryVoltageMin159;

#  define Rte_TypeDef_BMV_BatteryVoltageMin16
typedef uint16 BMV_BatteryVoltageMin16;

#  define Rte_TypeDef_BMV_BatteryVoltageMin160
typedef uint16 BMV_BatteryVoltageMin160;

#  define Rte_TypeDef_BMV_BatteryVoltageMin161
typedef uint16 BMV_BatteryVoltageMin161;

#  define Rte_TypeDef_BMV_BatteryVoltageMin162
typedef uint16 BMV_BatteryVoltageMin162;

#  define Rte_TypeDef_BMV_BatteryVoltageMin163
typedef uint16 BMV_BatteryVoltageMin163;

#  define Rte_TypeDef_BMV_BatteryVoltageMin164
typedef uint16 BMV_BatteryVoltageMin164;

#  define Rte_TypeDef_BMV_BatteryVoltageMin165
typedef uint16 BMV_BatteryVoltageMin165;

#  define Rte_TypeDef_BMV_BatteryVoltageMin166
typedef uint16 BMV_BatteryVoltageMin166;

#  define Rte_TypeDef_BMV_BatteryVoltageMin167
typedef uint16 BMV_BatteryVoltageMin167;

#  define Rte_TypeDef_BMV_BatteryVoltageMin168
typedef uint16 BMV_BatteryVoltageMin168;

#  define Rte_TypeDef_BMV_BatteryVoltageMin169
typedef uint16 BMV_BatteryVoltageMin169;

#  define Rte_TypeDef_BMV_BatteryVoltageMin17
typedef uint16 BMV_BatteryVoltageMin17;

#  define Rte_TypeDef_BMV_BatteryVoltageMin170
typedef uint16 BMV_BatteryVoltageMin170;

#  define Rte_TypeDef_BMV_BatteryVoltageMin171
typedef uint16 BMV_BatteryVoltageMin171;

#  define Rte_TypeDef_BMV_BatteryVoltageMin172
typedef uint16 BMV_BatteryVoltageMin172;

#  define Rte_TypeDef_BMV_BatteryVoltageMin173
typedef uint16 BMV_BatteryVoltageMin173;

#  define Rte_TypeDef_BMV_BatteryVoltageMin174
typedef uint16 BMV_BatteryVoltageMin174;

#  define Rte_TypeDef_BMV_BatteryVoltageMin175
typedef uint16 BMV_BatteryVoltageMin175;

#  define Rte_TypeDef_BMV_BatteryVoltageMin176
typedef uint16 BMV_BatteryVoltageMin176;

#  define Rte_TypeDef_BMV_BatteryVoltageMin177
typedef uint16 BMV_BatteryVoltageMin177;

#  define Rte_TypeDef_BMV_BatteryVoltageMin178
typedef uint16 BMV_BatteryVoltageMin178;

#  define Rte_TypeDef_BMV_BatteryVoltageMin179
typedef uint16 BMV_BatteryVoltageMin179;

#  define Rte_TypeDef_BMV_BatteryVoltageMin18
typedef uint16 BMV_BatteryVoltageMin18;

#  define Rte_TypeDef_BMV_BatteryVoltageMin180
typedef uint16 BMV_BatteryVoltageMin180;

#  define Rte_TypeDef_BMV_BatteryVoltageMin181
typedef uint16 BMV_BatteryVoltageMin181;

#  define Rte_TypeDef_BMV_BatteryVoltageMin182
typedef uint16 BMV_BatteryVoltageMin182;

#  define Rte_TypeDef_BMV_BatteryVoltageMin183
typedef uint16 BMV_BatteryVoltageMin183;

#  define Rte_TypeDef_BMV_BatteryVoltageMin184
typedef uint16 BMV_BatteryVoltageMin184;

#  define Rte_TypeDef_BMV_BatteryVoltageMin185
typedef uint16 BMV_BatteryVoltageMin185;

#  define Rte_TypeDef_BMV_BatteryVoltageMin186
typedef uint16 BMV_BatteryVoltageMin186;

#  define Rte_TypeDef_BMV_BatteryVoltageMin187
typedef uint16 BMV_BatteryVoltageMin187;

#  define Rte_TypeDef_BMV_BatteryVoltageMin188
typedef uint16 BMV_BatteryVoltageMin188;

#  define Rte_TypeDef_BMV_BatteryVoltageMin189
typedef uint16 BMV_BatteryVoltageMin189;

#  define Rte_TypeDef_BMV_BatteryVoltageMin19
typedef uint16 BMV_BatteryVoltageMin19;

#  define Rte_TypeDef_BMV_BatteryVoltageMin190
typedef uint16 BMV_BatteryVoltageMin190;

#  define Rte_TypeDef_BMV_BatteryVoltageMin191
typedef uint16 BMV_BatteryVoltageMin191;

#  define Rte_TypeDef_BMV_BatteryVoltageMin192
typedef uint16 BMV_BatteryVoltageMin192;

#  define Rte_TypeDef_BMV_BatteryVoltageMin193
typedef uint16 BMV_BatteryVoltageMin193;

#  define Rte_TypeDef_BMV_BatteryVoltageMin194
typedef uint16 BMV_BatteryVoltageMin194;

#  define Rte_TypeDef_BMV_BatteryVoltageMin195
typedef uint16 BMV_BatteryVoltageMin195;

#  define Rte_TypeDef_BMV_BatteryVoltageMin196
typedef uint16 BMV_BatteryVoltageMin196;

#  define Rte_TypeDef_BMV_BatteryVoltageMin197
typedef uint16 BMV_BatteryVoltageMin197;

#  define Rte_TypeDef_BMV_BatteryVoltageMin198
typedef uint16 BMV_BatteryVoltageMin198;

#  define Rte_TypeDef_BMV_BatteryVoltageMin199
typedef uint16 BMV_BatteryVoltageMin199;

#  define Rte_TypeDef_BMV_BatteryVoltageMin2
typedef uint16 BMV_BatteryVoltageMin2;

#  define Rte_TypeDef_BMV_BatteryVoltageMin20
typedef uint16 BMV_BatteryVoltageMin20;

#  define Rte_TypeDef_BMV_BatteryVoltageMin200
typedef uint16 BMV_BatteryVoltageMin200;

#  define Rte_TypeDef_BMV_BatteryVoltageMin201
typedef uint16 BMV_BatteryVoltageMin201;

#  define Rte_TypeDef_BMV_BatteryVoltageMin202
typedef uint16 BMV_BatteryVoltageMin202;

#  define Rte_TypeDef_BMV_BatteryVoltageMin203
typedef uint16 BMV_BatteryVoltageMin203;

#  define Rte_TypeDef_BMV_BatteryVoltageMin204
typedef uint16 BMV_BatteryVoltageMin204;

#  define Rte_TypeDef_BMV_BatteryVoltageMin205
typedef uint16 BMV_BatteryVoltageMin205;

#  define Rte_TypeDef_BMV_BatteryVoltageMin206
typedef uint16 BMV_BatteryVoltageMin206;

#  define Rte_TypeDef_BMV_BatteryVoltageMin207
typedef uint16 BMV_BatteryVoltageMin207;

#  define Rte_TypeDef_BMV_BatteryVoltageMin208
typedef uint16 BMV_BatteryVoltageMin208;

#  define Rte_TypeDef_BMV_BatteryVoltageMin209
typedef uint16 BMV_BatteryVoltageMin209;

#  define Rte_TypeDef_BMV_BatteryVoltageMin21
typedef uint16 BMV_BatteryVoltageMin21;

#  define Rte_TypeDef_BMV_BatteryVoltageMin210
typedef uint16 BMV_BatteryVoltageMin210;

#  define Rte_TypeDef_BMV_BatteryVoltageMin211
typedef uint16 BMV_BatteryVoltageMin211;

#  define Rte_TypeDef_BMV_BatteryVoltageMin212
typedef uint16 BMV_BatteryVoltageMin212;

#  define Rte_TypeDef_BMV_BatteryVoltageMin213
typedef uint16 BMV_BatteryVoltageMin213;

#  define Rte_TypeDef_BMV_BatteryVoltageMin214
typedef uint16 BMV_BatteryVoltageMin214;

#  define Rte_TypeDef_BMV_BatteryVoltageMin215
typedef uint16 BMV_BatteryVoltageMin215;

#  define Rte_TypeDef_BMV_BatteryVoltageMin216
typedef uint16 BMV_BatteryVoltageMin216;

#  define Rte_TypeDef_BMV_BatteryVoltageMin217
typedef uint16 BMV_BatteryVoltageMin217;

#  define Rte_TypeDef_BMV_BatteryVoltageMin218
typedef uint16 BMV_BatteryVoltageMin218;

#  define Rte_TypeDef_BMV_BatteryVoltageMin219
typedef uint16 BMV_BatteryVoltageMin219;

#  define Rte_TypeDef_BMV_BatteryVoltageMin22
typedef uint16 BMV_BatteryVoltageMin22;

#  define Rte_TypeDef_BMV_BatteryVoltageMin220
typedef uint16 BMV_BatteryVoltageMin220;

#  define Rte_TypeDef_BMV_BatteryVoltageMin221
typedef uint16 BMV_BatteryVoltageMin221;

#  define Rte_TypeDef_BMV_BatteryVoltageMin222
typedef uint16 BMV_BatteryVoltageMin222;

#  define Rte_TypeDef_BMV_BatteryVoltageMin223
typedef uint16 BMV_BatteryVoltageMin223;

#  define Rte_TypeDef_BMV_BatteryVoltageMin224
typedef uint16 BMV_BatteryVoltageMin224;

#  define Rte_TypeDef_BMV_BatteryVoltageMin225
typedef uint16 BMV_BatteryVoltageMin225;

#  define Rte_TypeDef_BMV_BatteryVoltageMin226
typedef uint16 BMV_BatteryVoltageMin226;

#  define Rte_TypeDef_BMV_BatteryVoltageMin227
typedef uint16 BMV_BatteryVoltageMin227;

#  define Rte_TypeDef_BMV_BatteryVoltageMin228
typedef uint16 BMV_BatteryVoltageMin228;

#  define Rte_TypeDef_BMV_BatteryVoltageMin229
typedef uint16 BMV_BatteryVoltageMin229;

#  define Rte_TypeDef_BMV_BatteryVoltageMin23
typedef uint16 BMV_BatteryVoltageMin23;

#  define Rte_TypeDef_BMV_BatteryVoltageMin230
typedef uint16 BMV_BatteryVoltageMin230;

#  define Rte_TypeDef_BMV_BatteryVoltageMin231
typedef uint16 BMV_BatteryVoltageMin231;

#  define Rte_TypeDef_BMV_BatteryVoltageMin232
typedef uint16 BMV_BatteryVoltageMin232;

#  define Rte_TypeDef_BMV_BatteryVoltageMin233
typedef uint16 BMV_BatteryVoltageMin233;

#  define Rte_TypeDef_BMV_BatteryVoltageMin234
typedef uint16 BMV_BatteryVoltageMin234;

#  define Rte_TypeDef_BMV_BatteryVoltageMin235
typedef uint16 BMV_BatteryVoltageMin235;

#  define Rte_TypeDef_BMV_BatteryVoltageMin236
typedef uint16 BMV_BatteryVoltageMin236;

#  define Rte_TypeDef_BMV_BatteryVoltageMin237
typedef uint16 BMV_BatteryVoltageMin237;

#  define Rte_TypeDef_BMV_BatteryVoltageMin238
typedef uint16 BMV_BatteryVoltageMin238;

#  define Rte_TypeDef_BMV_BatteryVoltageMin239
typedef uint16 BMV_BatteryVoltageMin239;

#  define Rte_TypeDef_BMV_BatteryVoltageMin24
typedef uint16 BMV_BatteryVoltageMin24;

#  define Rte_TypeDef_BMV_BatteryVoltageMin240
typedef uint16 BMV_BatteryVoltageMin240;

#  define Rte_TypeDef_BMV_BatteryVoltageMin241
typedef uint16 BMV_BatteryVoltageMin241;

#  define Rte_TypeDef_BMV_BatteryVoltageMin242
typedef uint16 BMV_BatteryVoltageMin242;

#  define Rte_TypeDef_BMV_BatteryVoltageMin243
typedef uint16 BMV_BatteryVoltageMin243;

#  define Rte_TypeDef_BMV_BatteryVoltageMin244
typedef uint16 BMV_BatteryVoltageMin244;

#  define Rte_TypeDef_BMV_BatteryVoltageMin245
typedef uint16 BMV_BatteryVoltageMin245;

#  define Rte_TypeDef_BMV_BatteryVoltageMin246
typedef uint16 BMV_BatteryVoltageMin246;

#  define Rte_TypeDef_BMV_BatteryVoltageMin247
typedef uint16 BMV_BatteryVoltageMin247;

#  define Rte_TypeDef_BMV_BatteryVoltageMin248
typedef uint16 BMV_BatteryVoltageMin248;

#  define Rte_TypeDef_BMV_BatteryVoltageMin249
typedef uint16 BMV_BatteryVoltageMin249;

#  define Rte_TypeDef_BMV_BatteryVoltageMin25
typedef uint16 BMV_BatteryVoltageMin25;

#  define Rte_TypeDef_BMV_BatteryVoltageMin250
typedef uint16 BMV_BatteryVoltageMin250;

#  define Rte_TypeDef_BMV_BatteryVoltageMin251
typedef uint16 BMV_BatteryVoltageMin251;

#  define Rte_TypeDef_BMV_BatteryVoltageMin252
typedef uint16 BMV_BatteryVoltageMin252;

#  define Rte_TypeDef_BMV_BatteryVoltageMin253
typedef uint16 BMV_BatteryVoltageMin253;

#  define Rte_TypeDef_BMV_BatteryVoltageMin254
typedef uint16 BMV_BatteryVoltageMin254;

#  define Rte_TypeDef_BMV_BatteryVoltageMin255
typedef uint16 BMV_BatteryVoltageMin255;

#  define Rte_TypeDef_BMV_BatteryVoltageMin26
typedef uint16 BMV_BatteryVoltageMin26;

#  define Rte_TypeDef_BMV_BatteryVoltageMin27
typedef uint16 BMV_BatteryVoltageMin27;

#  define Rte_TypeDef_BMV_BatteryVoltageMin28
typedef uint16 BMV_BatteryVoltageMin28;

#  define Rte_TypeDef_BMV_BatteryVoltageMin29
typedef uint16 BMV_BatteryVoltageMin29;

#  define Rte_TypeDef_BMV_BatteryVoltageMin3
typedef uint16 BMV_BatteryVoltageMin3;

#  define Rte_TypeDef_BMV_BatteryVoltageMin30
typedef uint16 BMV_BatteryVoltageMin30;

#  define Rte_TypeDef_BMV_BatteryVoltageMin31
typedef uint16 BMV_BatteryVoltageMin31;

#  define Rte_TypeDef_BMV_BatteryVoltageMin32
typedef uint16 BMV_BatteryVoltageMin32;

#  define Rte_TypeDef_BMV_BatteryVoltageMin33
typedef uint16 BMV_BatteryVoltageMin33;

#  define Rte_TypeDef_BMV_BatteryVoltageMin34
typedef uint16 BMV_BatteryVoltageMin34;

#  define Rte_TypeDef_BMV_BatteryVoltageMin35
typedef uint16 BMV_BatteryVoltageMin35;

#  define Rte_TypeDef_BMV_BatteryVoltageMin36
typedef uint16 BMV_BatteryVoltageMin36;

#  define Rte_TypeDef_BMV_BatteryVoltageMin37
typedef uint16 BMV_BatteryVoltageMin37;

#  define Rte_TypeDef_BMV_BatteryVoltageMin38
typedef uint16 BMV_BatteryVoltageMin38;

#  define Rte_TypeDef_BMV_BatteryVoltageMin39
typedef uint16 BMV_BatteryVoltageMin39;

#  define Rte_TypeDef_BMV_BatteryVoltageMin4
typedef uint16 BMV_BatteryVoltageMin4;

#  define Rte_TypeDef_BMV_BatteryVoltageMin40
typedef uint16 BMV_BatteryVoltageMin40;

#  define Rte_TypeDef_BMV_BatteryVoltageMin41
typedef uint16 BMV_BatteryVoltageMin41;

#  define Rte_TypeDef_BMV_BatteryVoltageMin42
typedef uint16 BMV_BatteryVoltageMin42;

#  define Rte_TypeDef_BMV_BatteryVoltageMin43
typedef uint16 BMV_BatteryVoltageMin43;

#  define Rte_TypeDef_BMV_BatteryVoltageMin44
typedef uint16 BMV_BatteryVoltageMin44;

#  define Rte_TypeDef_BMV_BatteryVoltageMin45
typedef uint16 BMV_BatteryVoltageMin45;

#  define Rte_TypeDef_BMV_BatteryVoltageMin46
typedef uint16 BMV_BatteryVoltageMin46;

#  define Rte_TypeDef_BMV_BatteryVoltageMin47
typedef uint16 BMV_BatteryVoltageMin47;

#  define Rte_TypeDef_BMV_BatteryVoltageMin48
typedef uint16 BMV_BatteryVoltageMin48;

#  define Rte_TypeDef_BMV_BatteryVoltageMin49
typedef uint16 BMV_BatteryVoltageMin49;

#  define Rte_TypeDef_BMV_BatteryVoltageMin5
typedef uint16 BMV_BatteryVoltageMin5;

#  define Rte_TypeDef_BMV_BatteryVoltageMin50
typedef uint16 BMV_BatteryVoltageMin50;

#  define Rte_TypeDef_BMV_BatteryVoltageMin51
typedef uint16 BMV_BatteryVoltageMin51;

#  define Rte_TypeDef_BMV_BatteryVoltageMin52
typedef uint16 BMV_BatteryVoltageMin52;

#  define Rte_TypeDef_BMV_BatteryVoltageMin53
typedef uint16 BMV_BatteryVoltageMin53;

#  define Rte_TypeDef_BMV_BatteryVoltageMin54
typedef uint16 BMV_BatteryVoltageMin54;

#  define Rte_TypeDef_BMV_BatteryVoltageMin55
typedef uint16 BMV_BatteryVoltageMin55;

#  define Rte_TypeDef_BMV_BatteryVoltageMin56
typedef uint16 BMV_BatteryVoltageMin56;

#  define Rte_TypeDef_BMV_BatteryVoltageMin57
typedef uint16 BMV_BatteryVoltageMin57;

#  define Rte_TypeDef_BMV_BatteryVoltageMin58
typedef uint16 BMV_BatteryVoltageMin58;

#  define Rte_TypeDef_BMV_BatteryVoltageMin59
typedef uint16 BMV_BatteryVoltageMin59;

#  define Rte_TypeDef_BMV_BatteryVoltageMin6
typedef uint16 BMV_BatteryVoltageMin6;

#  define Rte_TypeDef_BMV_BatteryVoltageMin60
typedef uint16 BMV_BatteryVoltageMin60;

#  define Rte_TypeDef_BMV_BatteryVoltageMin61
typedef uint16 BMV_BatteryVoltageMin61;

#  define Rte_TypeDef_BMV_BatteryVoltageMin62
typedef uint16 BMV_BatteryVoltageMin62;

#  define Rte_TypeDef_BMV_BatteryVoltageMin63
typedef uint16 BMV_BatteryVoltageMin63;

#  define Rte_TypeDef_BMV_BatteryVoltageMin64
typedef uint16 BMV_BatteryVoltageMin64;

#  define Rte_TypeDef_BMV_BatteryVoltageMin65
typedef uint16 BMV_BatteryVoltageMin65;

#  define Rte_TypeDef_BMV_BatteryVoltageMin66
typedef uint16 BMV_BatteryVoltageMin66;

#  define Rte_TypeDef_BMV_BatteryVoltageMin67
typedef uint16 BMV_BatteryVoltageMin67;

#  define Rte_TypeDef_BMV_BatteryVoltageMin68
typedef uint16 BMV_BatteryVoltageMin68;

#  define Rte_TypeDef_BMV_BatteryVoltageMin69
typedef uint16 BMV_BatteryVoltageMin69;

#  define Rte_TypeDef_BMV_BatteryVoltageMin7
typedef uint16 BMV_BatteryVoltageMin7;

#  define Rte_TypeDef_BMV_BatteryVoltageMin70
typedef uint16 BMV_BatteryVoltageMin70;

#  define Rte_TypeDef_BMV_BatteryVoltageMin71
typedef uint16 BMV_BatteryVoltageMin71;

#  define Rte_TypeDef_BMV_BatteryVoltageMin72
typedef uint16 BMV_BatteryVoltageMin72;

#  define Rte_TypeDef_BMV_BatteryVoltageMin73
typedef uint16 BMV_BatteryVoltageMin73;

#  define Rte_TypeDef_BMV_BatteryVoltageMin74
typedef uint16 BMV_BatteryVoltageMin74;

#  define Rte_TypeDef_BMV_BatteryVoltageMin75
typedef uint16 BMV_BatteryVoltageMin75;

#  define Rte_TypeDef_BMV_BatteryVoltageMin76
typedef uint16 BMV_BatteryVoltageMin76;

#  define Rte_TypeDef_BMV_BatteryVoltageMin77
typedef uint16 BMV_BatteryVoltageMin77;

#  define Rte_TypeDef_BMV_BatteryVoltageMin78
typedef uint16 BMV_BatteryVoltageMin78;

#  define Rte_TypeDef_BMV_BatteryVoltageMin79
typedef uint16 BMV_BatteryVoltageMin79;

#  define Rte_TypeDef_BMV_BatteryVoltageMin8
typedef uint16 BMV_BatteryVoltageMin8;

#  define Rte_TypeDef_BMV_BatteryVoltageMin80
typedef uint16 BMV_BatteryVoltageMin80;

#  define Rte_TypeDef_BMV_BatteryVoltageMin81
typedef uint16 BMV_BatteryVoltageMin81;

#  define Rte_TypeDef_BMV_BatteryVoltageMin82
typedef uint16 BMV_BatteryVoltageMin82;

#  define Rte_TypeDef_BMV_BatteryVoltageMin83
typedef uint16 BMV_BatteryVoltageMin83;

#  define Rte_TypeDef_BMV_BatteryVoltageMin84
typedef uint16 BMV_BatteryVoltageMin84;

#  define Rte_TypeDef_BMV_BatteryVoltageMin85
typedef uint16 BMV_BatteryVoltageMin85;

#  define Rte_TypeDef_BMV_BatteryVoltageMin86
typedef uint16 BMV_BatteryVoltageMin86;

#  define Rte_TypeDef_BMV_BatteryVoltageMin87
typedef uint16 BMV_BatteryVoltageMin87;

#  define Rte_TypeDef_BMV_BatteryVoltageMin88
typedef uint16 BMV_BatteryVoltageMin88;

#  define Rte_TypeDef_BMV_BatteryVoltageMin89
typedef uint16 BMV_BatteryVoltageMin89;

#  define Rte_TypeDef_BMV_BatteryVoltageMin9
typedef uint16 BMV_BatteryVoltageMin9;

#  define Rte_TypeDef_BMV_BatteryVoltageMin90
typedef uint16 BMV_BatteryVoltageMin90;

#  define Rte_TypeDef_BMV_BatteryVoltageMin91
typedef uint16 BMV_BatteryVoltageMin91;

#  define Rte_TypeDef_BMV_BatteryVoltageMin92
typedef uint16 BMV_BatteryVoltageMin92;

#  define Rte_TypeDef_BMV_BatteryVoltageMin93
typedef uint16 BMV_BatteryVoltageMin93;

#  define Rte_TypeDef_BMV_BatteryVoltageMin94
typedef uint16 BMV_BatteryVoltageMin94;

#  define Rte_TypeDef_BMV_BatteryVoltageMin95
typedef uint16 BMV_BatteryVoltageMin95;

#  define Rte_TypeDef_BMV_BatteryVoltageMin96
typedef uint16 BMV_BatteryVoltageMin96;

#  define Rte_TypeDef_BMV_BatteryVoltageMin97
typedef uint16 BMV_BatteryVoltageMin97;

#  define Rte_TypeDef_BMV_BatteryVoltageMin98
typedef uint16 BMV_BatteryVoltageMin98;

#  define Rte_TypeDef_BMV_BatteryVoltageMin99
typedef uint16 BMV_BatteryVoltageMin99;

#  define Rte_TypeDef_BS_BatVltOORHIDiag
typedef uint8 BS_BatVltOORHIDiag;

#  define Rte_TypeDef_BS_BatVltOORLoDiag
typedef uint8 BS_BatVltOORLoDiag;

#  define Rte_TypeDef_BS_IBSBatSOC
typedef uint8 BS_IBSBatSOC;

#  define Rte_TypeDef_BS_IBSCommError_CalcData
typedef boolean BS_IBSCommError_CalcData;

#  define Rte_TypeDef_BS_IBSCommError_MVI
typedef boolean BS_IBSCommError_MVI;

#  define Rte_TypeDef_BS_IBSCommError_MeasTemp
typedef boolean BS_IBSCommError_MeasTemp;

#  define Rte_TypeDef_BS_IBSCommError_Rtn
typedef boolean BS_IBSCommError_Rtn;

#  define Rte_TypeDef_BS_IBSCommError_VehStrtUp
typedef boolean BS_IBSCommError_VehStrtUp;

#  define Rte_TypeDef_BS_ShntVltOORHiDiag
typedef uint8 BS_ShntVltOORHiDiag;

#  define Rte_TypeDef_CBM_SystemReadyReq
typedef uint8 CBM_SystemReadyReq;

#  define Rte_TypeDef_CML_OutpuVoltageMax
typedef uint16 CML_OutpuVoltageMax;

#  define Rte_TypeDef_CML_OutputCurrentMax
typedef uint16 CML_OutputCurrentMax;

#  define Rte_TypeDef_CML_OutputCurrentMin
typedef uint16 CML_OutputCurrentMin;

#  define Rte_TypeDef_CML_OutputVoltageMin
typedef uint16 CML_OutputVoltageMin;

#  define Rte_TypeDef_ComState
typedef uint8 ComState;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_EVCOM_CompActlPwrCnsmp
typedef uint8 EVCOM_CompActlPwrCnsmp;

#  define Rte_TypeDef_IVI_AppointChargeCmd
typedef uint8 IVI_AppointChargeCmd;

#  define Rte_TypeDef_IVI_DriveModeSet
typedef uint8 IVI_DriveModeSet;

#  define Rte_TypeDef_IVI_DschrgOnOffSet
typedef uint8 IVI_DschrgOnOffSet;

#  define Rte_TypeDef_IVI_ForwardVmaxAllowed
typedef uint8 IVI_ForwardVmaxAllowed;

#  define Rte_TypeDef_IVI_ForwardVmaxlimitSw
typedef uint8 IVI_ForwardVmaxlimitSw;

#  define Rte_TypeDef_IVI_LockACPlug
typedef uint8 IVI_LockACPlug;

#  define Rte_TypeDef_IVI_MaxChrgSocSet
typedef uint8 IVI_MaxChrgSocSet;

#  define Rte_TypeDef_IVI_OdometerInfor
typedef uint32 IVI_OdometerInfor;

#  define Rte_TypeDef_IVI_V2LidisSet
typedef uint8 IVI_V2LidisSet;

#  define Rte_TypeDef_MCU_TempStatus
typedef uint8 MCU_TempStatus;

#  define Rte_TypeDef_MCU_TrqAbsMax
typedef uint16 MCU_TrqAbsMax;

#  define Rte_TypeDef_MCU_TrqAbsMin
typedef uint16 MCU_TrqAbsMin;

#  define Rte_TypeDef_MCU_VCUWorkMode
typedef uint8 MCU_VCUWorkMode;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_POD_DCDC_FaultLevel
typedef uint8 POD_DCDC_FaultLevel;

#  define Rte_TypeDef_POD_DCDC_HVInputCurrent
typedef uint8 POD_DCDC_HVInputCurrent;

#  define Rte_TypeDef_POD_DCDC_HVInputVoltage
typedef uint16 POD_DCDC_HVInputVoltage;

#  define Rte_TypeDef_POD_DCDC_Side2Overtempfault
typedef boolean POD_DCDC_Side2Overtempfault;

#  define Rte_TypeDef_POD_DCDC_WorkMode
typedef uint8 POD_DCDC_WorkMode;

#  define Rte_TypeDef_POD_DCFCVoltage
typedef uint16 POD_DCFCVoltage;

#  define Rte_TypeDef_POD_DCInletTempA
typedef uint8 POD_DCInletTempA;

#  define Rte_TypeDef_POD_DCInletTempB
typedef uint8 POD_DCInletTempB;

#  define Rte_TypeDef_POD_DCPortInletTempAValid
typedef uint8 POD_DCPortInletTempAValid;

#  define Rte_TypeDef_POD_DCPortInletTempBValid
typedef uint8 POD_DCPortInletTempBValid;

#  define Rte_TypeDef_POD_DCPosRelayState
typedef uint8 POD_DCPosRelayState;

#  define Rte_TypeDef_POD_OBC_CCCurrentLimit
typedef uint8 POD_OBC_CCCurrentLimit;

#  define Rte_TypeDef_POD_OBC_CCStatus
typedef uint8 POD_OBC_CCStatus;

#  define Rte_TypeDef_POD_OBC_CPCurrentLimit
typedef uint8 POD_OBC_CPCurrentLimit;

#  define Rte_TypeDef_POD_OBC_CPDuty
typedef uint8 POD_OBC_CPDuty;

#  define Rte_TypeDef_POD_OBC_CPStatus
typedef uint8 POD_OBC_CPStatus;

#  define Rte_TypeDef_POD_OBC_ChargCapacibility
typedef uint8 POD_OBC_ChargCapacibility;

#  define Rte_TypeDef_POD_OBC_EMLockState
typedef uint8 POD_OBC_EMLockState;

#  define Rte_TypeDef_POD_OBC_FaultLevel
typedef uint8 POD_OBC_FaultLevel;

#  define Rte_TypeDef_POD_OBC_InputACCurrent_R
typedef uint8 POD_OBC_InputACCurrent_R;

#  define Rte_TypeDef_POD_OBC_InputACVoltage_R
typedef uint16 POD_OBC_InputACVoltage_R;

#  define Rte_TypeDef_POD_OBC_OBCMaxPermOutpCrrt
typedef uint16 POD_OBC_OBCMaxPermOutpCrrt;

#  define Rte_TypeDef_POD_OBC_OutputDCChargeCurrent
typedef uint16 POD_OBC_OutputDCChargeCurrent;

#  define Rte_TypeDef_POD_OBC_OutputDCChargeVoltage
typedef uint16 POD_OBC_OutputDCChargeVoltage;

#  define Rte_TypeDef_POD_OBC_PrimarySideTemp
typedef uint8 POD_OBC_PrimarySideTemp;

#  define Rte_TypeDef_POD_OBC_S2State
typedef uint8 POD_OBC_S2State;

#  define Rte_TypeDef_POD_OBC_SecondarySideTemp
typedef uint8 POD_OBC_SecondarySideTemp;

#  define Rte_TypeDef_POD_OBC_Side1Overtempfault
typedef boolean POD_OBC_Side1Overtempfault;

#  define Rte_TypeDef_POD_OBC_Side2Overtempfault
typedef boolean POD_OBC_Side2Overtempfault;

#  define Rte_TypeDef_POD_OBC_WorkMode
typedef uint8 POD_OBC_WorkMode;

#  define Rte_TypeDef_PWT_ErrorLevel
typedef uint8 PWT_ErrorLevel;

#  define Rte_TypeDef_PerBlockIdType
typedef uint16 PerBlockIdType;

#  define Rte_TypeDef_QCF_RecoveryT
typedef uint8 QCF_RecoveryT;

#  define Rte_TypeDef_QCF_SafetyT
typedef uint8 QCF_SafetyT;

#  define Rte_TypeDef_SGW_AppointChargeCmd
typedef uint8 SGW_AppointChargeCmd;

#  define Rte_TypeDef_SGW_ChargeFormSet
typedef uint8 SGW_ChargeFormSet;

#  define Rte_TypeDef_SGW_MaxChrgSocSet
typedef uint8 SGW_MaxChrgSocSet;

#  define Rte_TypeDef_SGW_RemoteHVCtrlReq
typedef uint8 SGW_RemoteHVCtrlReq;

#  define Rte_TypeDef_SGW_TimeInfoSecond
typedef uint8 SGW_TimeInfoSecond;

#  define Rte_TypeDef_SGW_V2LidisSet
typedef uint8 SGW_V2LidisSet;

#  define Rte_TypeDef_TCU_HVCHHVDCCurrent
typedef uint8 TCU_HVCHHVDCCurrent;

#  define Rte_TypeDef_TCU_HVCHHighVoltage
typedef uint16 TCU_HVCHHighVoltage;

#  define Rte_TypeDef_TCU_HVPwrState
typedef uint8 TCU_HVPwrState;

#  define Rte_TypeDef_TCU_TMSFaultLevel
typedef uint8 TCU_TMSFaultLevel;

#  define Rte_TypeDef_TCU_TMSTotoalPwrReq
typedef uint8 TCU_TMSTotoalPwrReq;

#  define Rte_TypeDef_VCU_BrakeCompensateStatus
typedef uint8 VCU_BrakeCompensateStatus;

#  define Rte_TypeDef_VCU_ChargeEndReason
typedef uint8 VCU_ChargeEndReason;

#  define Rte_TypeDef_VCU_ChargeEnergy
typedef uint16 VCU_ChargeEnergy;

#  define Rte_TypeDef_VCU_ChargeProcessComment
typedef uint8 VCU_ChargeProcessComment;

#  define Rte_TypeDef_VCU_ChargeTime
typedef uint16 VCU_ChargeTime;

#  define Rte_TypeDef_VCU_DCDCPowerLimit
typedef uint8 VCU_DCDCPowerLimit;

#  define Rte_TypeDef_VCU_DCFCCurrent
typedef uint16 VCU_DCFCCurrent;

#  define Rte_TypeDef_VCU_DischargeEndReason
typedef uint8 VCU_DischargeEndReason;

#  define Rte_TypeDef_VCU_DisplayMileage
typedef uint16 VCU_DisplayMileage;

#  define Rte_TypeDef_VCU_Display_voltage
typedef uint16 VCU_Display_voltage;

#  define Rte_TypeDef_VCU_EnableOBC
typedef uint8 VCU_EnableOBC;

#  define Rte_TypeDef_VCU_Enable_DC_Relay
typedef boolean VCU_Enable_DC_Relay;

#  define Rte_TypeDef_VCU_EnergyV2L
typedef uint16 VCU_EnergyV2L;

#  define Rte_TypeDef_VCU_ForwardVmaxlimitStatus
typedef boolean VCU_ForwardVmaxlimitStatus;

#  define Rte_TypeDef_VCU_HVConnectFault
typedef boolean VCU_HVConnectFault;

#  define Rte_TypeDef_VCU_IsoMeasurementSwitch
typedef uint8 VCU_IsoMeasurementSwitch;

#  define Rte_TypeDef_VCU_MCUPower
typedef uint16 VCU_MCUPower;

#  define Rte_TypeDef_VCU_ManuallyUnlockComment
typedef boolean VCU_ManuallyUnlockComment;

#  define Rte_TypeDef_VCU_MaxTorqueLimit
typedef uint16 VCU_MaxTorqueLimit;

#  define Rte_TypeDef_VCU_MaximumOutputCurrent
typedef uint16 VCU_MaximumOutputCurrent;

#  define Rte_TypeDef_VCU_MaximumOutputVoltage
typedef uint16 VCU_MaximumOutputVoltage;

#  define Rte_TypeDef_VCU_MemoryChargeFault
typedef boolean VCU_MemoryChargeFault;

#  define Rte_TypeDef_VCU_MinTorqueLimit
typedef uint16 VCU_MinTorqueLimit;

#  define Rte_TypeDef_VCU_MinimumOutputCurrent
typedef uint16 VCU_MinimumOutputCurrent;

#  define Rte_TypeDef_VCU_MinimumOutputVoltage
typedef uint16 VCU_MinimumOutputVoltage;

#  define Rte_TypeDef_VCU_OBC_ChargeCurrentCommand
typedef uint16 VCU_OBC_ChargeCurrentCommand;

#  define Rte_TypeDef_VCU_OBC_Control_of_S2_SW
typedef boolean VCU_OBC_Control_of_S2_SW;

#  define Rte_TypeDef_VCU_OBC_Control_of_em_lock
typedef boolean VCU_OBC_Control_of_em_lock;

#  define Rte_TypeDef_VCU_PermitPackPTC
typedef boolean VCU_PermitPackPTC;

#  define Rte_TypeDef_VCU_RemainChrgTime
typedef uint16 VCU_RemainChrgTime;

#  define Rte_TypeDef_VCU_RequestedModeDCDC
typedef uint8 VCU_RequestedModeDCDC;

#  define Rte_TypeDef_VCU_RequestedModeTCU
typedef uint8 VCU_RequestedModeTCU;

#  define Rte_TypeDef_VCU_TCUPowerAllowed
typedef uint16 VCU_TCUPowerAllowed;

#  define Rte_TypeDef_VCU_VoltageDemandLV
typedef uint16 VCU_VoltageDemandLV;

#  define Rte_TypeDef_Dt_RECORD_CriticalDataWriteCounter_PIM
typedef struct
{
  Dt_ARRAY608_UINT8_1_0 CriticalDataWriteCounter_PIM_Data;
} Dt_RECORD_CriticalDataWriteCounter_PIM;

#  define Rte_TypeDef_Lin_RxInfo
typedef struct
{
  uint8 Lin_RxValid;
  uint8 Lin_RxID;
  Rte_DT_Lin_RxInfo_2 Lin_RxData;
  uint8 Lin_CheckData;
  uint8 Lin_CheckResult;
} Lin_RxInfo;

# endif


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(dt_RngEstimn_BattCurrIntegral2kmArrayInfo, RTE_CONST) Rte_C_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0;

extern CONST(SG_ACU_01_SigGroup, RTE_CONST) Rte_C_SG_ACU_01_SigGroup_0;

extern CONST(SG_ACU_02_SigGroup, RTE_CONST) Rte_C_SG_ACU_02_SigGroup_0;

extern CONST(SG_ACU_Info_SigGroup, RTE_CONST) Rte_C_SG_ACU_Info_SigGroup_0;

extern CONST(SG_ADCU_ACC_02_SigGroup, RTE_CONST) Rte_C_SG_ADCU_ACC_02_SigGroup_0;

extern CONST(SG_ADCU_AEB_01_SigGroup, RTE_CONST) Rte_C_SG_ADCU_AEB_01_SigGroup_0;

extern CONST(SG_ADCU_APS_01_SigGroup, RTE_CONST) Rte_C_SG_ADCU_APS_01_SigGroup_0;

extern CONST(SG_ADCU_APS_02_SigGroup, RTE_CONST) Rte_C_SG_ADCU_APS_02_SigGroup_0;

extern CONST(SG_ADCU_DA_SigGroup, RTE_CONST) Rte_C_SG_ADCU_DA_SigGroup_0;

extern CONST(SG_APTC_TCU_SigGroup, RTE_CONST) Rte_C_SG_APTC_TCU_SigGroup_0;

extern CONST(SG_BCM_05_SigGroup, RTE_CONST) Rte_C_SG_BCM_05_SigGroup_0;

extern CONST(SG_BCM_06_SigGroup, RTE_CONST) Rte_C_SG_BCM_06_SigGroup_0;

extern CONST(SG_BMS_BatInfor_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_01_SigGroup_0;

extern CONST(SG_BMS_BatInfor_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_02_SigGroup_0;

extern CONST(SG_BMS_BatInfor_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_03_SigGroup_0;

extern CONST(SG_BMS_CellTemp_SigGroup, RTE_CONST) Rte_C_SG_BMS_CellTemp_SigGroup_0;

extern CONST(SG_BMS_CellVoltage_SigGroup, RTE_CONST) Rte_C_SG_BMS_CellVoltage_SigGroup_0;

extern CONST(SG_BMS_Charge_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_01_SigGroup_0;

extern CONST(SG_BMS_Charge_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_02_SigGroup_0;

extern CONST(SG_BMS_Charge_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_03_SigGroup_0;

extern CONST(SG_BMS_DIRelayState_SigGroup, RTE_CONST) Rte_C_SG_BMS_DIRelayState_SigGroup_0;

extern CONST(SG_BMS_ErrorInfo_SigGroup, RTE_CONST) Rte_C_SG_BMS_ErrorInfo_SigGroup_0;

extern CONST(SG_BMS_PRO_SigGroup, RTE_CONST) Rte_C_SG_BMS_PRO_SigGroup_0;

extern CONST(SG_BMS_TCU_SigGroup, RTE_CONST) Rte_C_SG_BMS_TCU_SigGroup_0;

extern CONST(SG_BMS_VersionInfor_SigGroup, RTE_CONST) Rte_C_SG_BMS_VersionInfor_SigGroup_0;

extern CONST(SG_BMS_status_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_01_SigGroup_0;

extern CONST(SG_BMS_status_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_02_SigGroup_0;

extern CONST(SG_BMS_status_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_03_SigGroup_0;

extern CONST(SG_BMS_status_04_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_04_SigGroup_0;

extern CONST(SG_CGW_01_SigGroup, RTE_CONST) Rte_C_SG_CGW_01_SigGroup_0;

extern CONST(SG_CGW_02_SigGroup, RTE_CONST) Rte_C_SG_CGW_02_SigGroup_0;

extern CONST(SG_CGW_VIN1_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN1_SigGroup_0;

extern CONST(SG_CGW_VIN2_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN2_SigGroup_0;

extern CONST(SG_CGW_VIN3VER_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN3VER_SigGroup_0;

extern CONST(SG_DCM_FL_02_SigGroup, RTE_CONST) Rte_C_SG_DCM_FL_02_SigGroup_0;

extern CONST(SG_DCM_FR_02_SigGroup, RTE_CONST) Rte_C_SG_DCM_FR_02_SigGroup_0;

extern CONST(SG_DCM_FR_SigGroup, RTE_CONST) Rte_C_SG_DCM_FR_SigGroup_0;

extern CONST(SG_DCM_RL_SigGroup, RTE_CONST) Rte_C_SG_DCM_RL_SigGroup_0;

extern CONST(SG_DCM_RR_SigGroup, RTE_CONST) Rte_C_SG_DCM_RR_SigGroup_0;

extern CONST(SG_EPS_CONV_SigGroup, RTE_CONST) Rte_C_SG_EPS_CONV_SigGroup_0;

extern CONST(SG_EVCOM_State_01_SigGroup, RTE_CONST) Rte_C_SG_EVCOM_State_01_SigGroup_0;

extern CONST(SG_IBS_ACC_SigGroup, RTE_CONST) Rte_C_SG_IBS_ACC_SigGroup_0;

extern CONST(SG_IBS_APS_SigGroup, RTE_CONST) Rte_C_SG_IBS_APS_SigGroup_0;

extern CONST(SG_IBS_Status_01_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_01_SigGroup_0;

extern CONST(SG_IBS_Status_02_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_02_SigGroup_0;

extern CONST(SG_IBS_Status_03_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_03_SigGroup_0;

extern CONST(SG_IBS_Status_04_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_04_SigGroup_0;

extern CONST(SG_IBS_Status_05_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_05_SigGroup_0;

extern CONST(SG_IBS_Status_06_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_06_SigGroup_0;

extern CONST(SG_IBS_Torque_SigGroup, RTE_CONST) Rte_C_SG_IBS_Torque_SigGroup_0;

extern CONST(SG_IBS_VCU_MotorControl_SigGroup, RTE_CONST) Rte_C_SG_IBS_VCU_MotorControl_SigGroup_0;

extern CONST(SG_IBS_WheelSpeed_01_SigGroup, RTE_CONST) Rte_C_SG_IBS_WheelSpeed_01_SigGroup_0;

extern CONST(SG_IBS_WheelSpeed_02_SigGroup, RTE_CONST) Rte_C_SG_IBS_WheelSpeed_02_SigGroup_0;

extern CONST(SG_IVI_01_SigGroup, RTE_CONST) Rte_C_SG_IVI_01_SigGroup_0;

extern CONST(SG_IVI_03_SigGroup, RTE_CONST) Rte_C_SG_IVI_03_SigGroup_0;

extern CONST(SG_IVI_OdometerInfor_SigGroup, RTE_CONST) Rte_C_SG_IVI_OdometerInfor_SigGroup_0;

extern CONST(SG_MCU_01_SigGroup, RTE_CONST) Rte_C_SG_MCU_01_SigGroup_0;

extern CONST(SG_MCU_02_SigGroup, RTE_CONST) Rte_C_SG_MCU_02_SigGroup_0;

extern CONST(SG_MCU_DeratingStatus_SigGroup, RTE_CONST) Rte_C_SG_MCU_DeratingStatus_SigGroup_0;

extern CONST(SG_MCU_FailureCode_SigGroup, RTE_CONST) Rte_C_SG_MCU_FailureCode_SigGroup_0;

extern CONST(SG_MCU_Temperature_01_SigGroup, RTE_CONST) Rte_C_SG_MCU_Temperature_01_SigGroup_0;

extern CONST(SG_MCU_Temperature_02_SigGroup, RTE_CONST) Rte_C_SG_MCU_Temperature_02_SigGroup_0;

extern CONST(SG_POD_DCDC_01_SigGroup, RTE_CONST) Rte_C_SG_POD_DCDC_01_SigGroup_0;

extern CONST(SG_POD_DCDC_02_SigGroup, RTE_CONST) Rte_C_SG_POD_DCDC_02_SigGroup_0;

extern CONST(SG_POD_OBC_CHRGSTATION_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_CHRGSTATION_SigGroup_0;

extern CONST(SG_POD_OBC_STATUS_02_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_02_SigGroup_0;

extern CONST(SG_POD_OBC_STATUS_03_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_03_SigGroup_0;

extern CONST(SG_POD_OBC_STATUS_04_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_04_SigGroup_0;

extern CONST(SG_POD_Status_01_SigGroup, RTE_CONST) Rte_C_SG_POD_Status_01_SigGroup_0;

extern CONST(SG_POD_Status_02_SigGroup, RTE_CONST) Rte_C_SG_POD_Status_02_SigGroup_0;

extern CONST(SG_PRND_SigGroup, RTE_CONST) Rte_C_SG_PRND_SigGroup_0;

extern CONST(SG_SGW_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_01_SigGroup_0;

extern CONST(SG_SGW_04_SigGroup, RTE_CONST) Rte_C_SG_SGW_04_SigGroup_0;

extern CONST(SG_SGW_16_SigGroup, RTE_CONST) Rte_C_SG_SGW_16_SigGroup_0;

extern CONST(SG_SGW_17_SigGroup, RTE_CONST) Rte_C_SG_SGW_17_SigGroup_0;

extern CONST(SG_SGW_FVSynchronization_01_SigGrou, RTE_CONST) Rte_C_SG_SGW_FVSynchronization_01_SigGrou_0;

extern CONST(SG_SGW_IBS_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_IBS_01_SigGroup_0;

extern CONST(SG_SGW_PT_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_PT_01_SigGroup_0;

extern CONST(SG_SGW_Time_SigGroup, RTE_CONST) Rte_C_SG_SGW_Time_SigGroup_0;

extern CONST(SG_SGW_VCU_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_VCU_01_SigGroup_0;

extern CONST(SG_TCU_01_SigGroup, RTE_CONST) Rte_C_SG_TCU_01_SigGroup_0;

extern CONST(SG_TCU_02_SigGroup, RTE_CONST) Rte_C_SG_TCU_02_SigGroup_0;

extern CONST(SG_VCU_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_02_SigGroup_0;

extern CONST(SG_VCU_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_03_SigGroup_0;

extern CONST(SG_VCU_04_SigGroup, RTE_CONST) Rte_C_SG_VCU_04_SigGroup_0;

extern CONST(SG_VCU_05_SigGroup, RTE_CONST) Rte_C_SG_VCU_05_SigGroup_0;

extern CONST(SG_VCU_06_SigGroup, RTE_CONST) Rte_C_SG_VCU_06_SigGroup_0;

extern CONST(SG_VCU_AccPedal_SigGroup, RTE_CONST) Rte_C_SG_VCU_AccPedal_SigGroup_0;

extern CONST(SG_VCU_BMS_SigGroup, RTE_CONST) Rte_C_SG_VCU_BMS_SigGroup_0;

extern CONST(SG_VCU_Chassis_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_Chassis_01_SigGroup_0;

extern CONST(SG_VCU_DCDC_SigGroup, RTE_CONST) Rte_C_SG_VCU_DCDC_SigGroup_0;

extern CONST(SG_VCU_HMIsignals_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_01_SigGroup_0;

extern CONST(SG_VCU_HMIsignals_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_02_SigGroup_0;

extern CONST(SG_VCU_HMIsignals_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_03_SigGroup_0;

extern CONST(SG_VCU_IBS_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_IBS_01_SigGroup_0;

extern CONST(SG_VCU_MCU_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_02_SigGroup_0;

extern CONST(SG_VCU_MCU_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_03_SigGroup_0;

extern CONST(SG_VCU_MCU_05_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_05_SigGroup_0;

extern CONST(SG_VCU_POD_SigGroup, RTE_CONST) Rte_C_SG_VCU_POD_SigGroup_0;

extern CONST(SG_VCU_PlugInChrgInfo_SigGroup, RTE_CONST) Rte_C_SG_VCU_PlugInChrgInfo_SigGroup_0;

extern CONST(SG_VCU_SynReq_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_SynReq_01_SigGroup_0;

extern CONST(SG_VCU_TCU_SigGroup, RTE_CONST) Rte_C_SG_VCU_TCU_SigGroup_0;

extern CONST(dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0;

extern CONST(dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0;

extern CONST(dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0;

extern CONST(dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0;

extern CONST(dt_ChassisMgmt_AccrPedlURaw1Hi, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw1Hi_0;

extern CONST(dt_ChassisMgmt_AccrPedlURaw1Lo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw1Lo_0;

extern CONST(dt_ChassisMgmt_AccrPedlURaw2Hi, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw2Hi_0;

extern CONST(dt_ChassisMgmt_AccrPedlURaw2Lo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw2Lo_0;

extern CONST(dt_ChassisMgmt_AccrPedlURawDif, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURawDif_0;

extern CONST(dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0;

extern CONST(dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_0;

extern CONST(dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0;

extern CONST(dt_ChrMgmt_AcPreheatUDcCtrlErr, RTE_CONST) Rte_C_dt_ChrMgmt_AcPreheatUDcCtrlErr_0;

extern CONST(dt_ChrMgmt_AcPreheatUDcCtrlErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0;

extern CONST(dt_ChrMgmt_CC2UDcDTC, RTE_CONST) Rte_C_dt_ChrMgmt_CC2UDcDTC_0;

extern CONST(dt_ChrMgmt_CC2UDcErr, RTE_CONST) Rte_C_dt_ChrMgmt_CC2UDcErr_0;

extern CONST(dt_ChrMgmt_ChrgStsJmpErr, RTE_CONST) Rte_C_dt_ChrMgmt_ChrgStsJmpErr_0;

extern CONST(dt_ChrMgmt_ChrgStsJmpErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_ChrgStsJmpErrDTC_0;

extern CONST(dt_ChrMgmt_DcPreheatUDcCtrlErr, RTE_CONST) Rte_C_dt_ChrMgmt_DcPreheatUDcCtrlErr_0;

extern CONST(dt_ChrMgmt_DcPreheatUDcCtrlErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0;

extern CONST(dt_ChrMgmt_PreheatIRChkErr, RTE_CONST) Rte_C_dt_ChrMgmt_PreheatIRChkErr_0;

extern CONST(dt_ChrMgmt_PreheatIRChkErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_PreheatIRChkErrDTC_0;

extern CONST(dt_ComM_ACU01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU01CRCDTCInfo_0;

extern CONST(dt_ComM_ACU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU01TimeoutDTCInfo_0;

extern CONST(dt_ComM_ACU02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU02CRCDTCInfo_0;

extern CONST(dt_ComM_ACU02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU02TimeoutDTCInfo_0;

extern CONST(dt_ComM_ACU02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ACU02TimeoutInfo_0;

extern CONST(dt_ComM_ACUInfoCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoCRCDTCInfo_0;

extern CONST(dt_ComM_ACUInfoTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoTimeoutDTCInfo_0;

extern CONST(dt_ComM_ACUInfoTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoTimeoutInfo_0;

extern CONST(dt_ComM_ADCUACC02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02CRCDTCInfo_0;

extern CONST(dt_ComM_ADCUACC02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02TimeoutDTCInfo_0;

extern CONST(dt_ComM_ADCUACC02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02TimeoutInfo_0;

extern CONST(dt_ComM_ADCUAEB01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAEB01CRCDTCInfo_0;

extern CONST(dt_ComM_ADCUAEB01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAEB01TimeoutDTCInfo_0;

extern CONST(dt_ComM_ADCUAPS01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAPS01CRCDTCInfo_0;

extern CONST(dt_ComM_ADCUAPS01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAPS01TimeoutDTCInfo_0;

extern CONST(dt_ComM_ADCUBodyReqCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUBodyReqCRCDTCInfo_0;

extern CONST(dt_ComM_ADCUBodyReqTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0;

extern CONST(dt_ComM_ADCUDACRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUDACRCDTCInfo_0;

extern CONST(dt_ComM_ADCUDATimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUDATimeoutDTCInfo_0;

extern CONST(dt_ComM_APTCTCUTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_APTCTCUTimeoutDTCInfo_0;

extern CONST(dt_ComM_APTCTCUTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_APTCTCUTimeoutInfo_0;

extern CONST(dt_ComM_BCM05CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM05CRCDTCInfo_0;

extern CONST(dt_ComM_BCM05TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM05TimeoutDTCInfo_0;

extern CONST(dt_ComM_BCM06CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM06CRCDTCInfo_0;

extern CONST(dt_ComM_BCM06TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM06TimeoutDTCInfo_0;

extern CONST(dt_ComM_BCM06TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BCM06TimeoutInfo_0;

extern CONST(dt_ComM_BMSErrInfoTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSErrInfoTimeoutInfo_0;

extern CONST(dt_ComM_BMSSts01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01CRCDTCInfo_0;

extern CONST(dt_ComM_BMSSts01CRCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01CRCInfo_0;

extern CONST(dt_ComM_BMSSts01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01E2ETimeoutInfo_0;

extern CONST(dt_ComM_BMSSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01TimeoutDTCInfo_0;

extern CONST(dt_ComM_BMSSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01TimeoutInfo_0;

extern CONST(dt_ComM_BMSSts02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts02TimeoutDTCInfo_0;

extern CONST(dt_ComM_BMSSts02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts02TimeoutInfo_0;

extern CONST(dt_ComM_CGW01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_CGW01CRCDTCInfo_0;

extern CONST(dt_ComM_CGW01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_CGW01TimeoutDTCInfo_0;

extern CONST(dt_ComM_CGW01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_CGW01TimeoutInfo_0;

extern CONST(dt_ComM_CHCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_CHCANBusOffDTCInfo_0;

extern CONST(dt_ComM_CHCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_CHCANBusOffInfo_0;

extern CONST(dt_ComM_DCCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCCANBusOffDTCInfo_0;

extern CONST(dt_ComM_DCCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_DCCANBusOffInfo_0;

extern CONST(dt_ComM_DCMFL02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02CRCDTCInfo_0;

extern CONST(dt_ComM_DCMFL02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02TimeoutDTCInfo_0;

extern CONST(dt_ComM_DCMFL02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02TimeoutInfo_0;

extern CONST(dt_ComM_DCMFRTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFRTimeoutDTCInfo_0;

extern CONST(dt_ComM_DCMFRTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMFRTimeoutInfo_0;

extern CONST(dt_ComM_DCMRLTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMRLTimeoutDTCInfo_0;

extern CONST(dt_ComM_DCMRLTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMRLTimeoutInfo_0;

extern CONST(dt_ComM_DCMRRTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMRRTimeoutDTCInfo_0;

extern CONST(dt_ComM_DCMRRTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMRRTimeoutInfo_0;

extern CONST(dt_ComM_EPTCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_EPTCANBusOffDTCInfo_0;

extern CONST(dt_ComM_EPTCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_EPTCANBusOffInfo_0;

extern CONST(dt_ComM_EVCOMSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_EVCOMSts01TimeoutDTCInfo_0;

extern CONST(dt_ComM_EVCOMSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_EVCOMSts01TimeoutInfo_0;

extern CONST(dt_ComM_FRCRespErrDTC, RTE_CONST) Rte_C_dt_ComM_FRCRespErrDTC_0;

extern CONST(dt_ComM_FRCSplyUDcHiDTC, RTE_CONST) Rte_C_dt_ComM_FRCSplyUDcHiDTC_0;

extern CONST(dt_ComM_FRCSplyUDcLoDTC, RTE_CONST) Rte_C_dt_ComM_FRCSplyUDcLoDTC_0;

extern CONST(dt_ComM_IBSACCCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCCRCDTCInfo_0;

extern CONST(dt_ComM_IBSACCCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCCRCInfo_0;

extern CONST(dt_ComM_IBSACCE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCE2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSACCTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCTimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSAPSCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSAPSCRCDTCInfo_0;

extern CONST(dt_ComM_IBSAPSTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSAPSTimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts01CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01CRCInfo_0;

extern CONST(dt_ComM_IBSSts01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01E2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts02CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02CRCInfo_0;

extern CONST(dt_ComM_IBSSts02E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02E2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSSts02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts03CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts03CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03CRCInfo_0;

extern CONST(dt_ComM_IBSSts03E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03E2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSSts03TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts04CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts04CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04CRCInfo_0;

extern CONST(dt_ComM_IBSSts04E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04E2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSSts04TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts05CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts05CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05CRCInfo_0;

extern CONST(dt_ComM_IBSSts05E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05E2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSSts05TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSSts05TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05TimeoutInfo_0;

extern CONST(dt_ComM_IBSSts06CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts06CRCDTCInfo_0;

extern CONST(dt_ComM_IBSSts06TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts06TimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSTqCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqCRCDTCInfo_0;

extern CONST(dt_ComM_IBSTqCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqCRCInfo_0;

extern CONST(dt_ComM_IBSTqE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqE2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSTqTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqTimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0;

extern CONST(dt_ComM_IBSVCUMotCtrlCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlCRCInfo_0;

extern CONST(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0;

extern CONST(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0;

extern CONST(dt_ComM_IBSVCUMotCtrlTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0;

extern CONST(dt_ComM_IBSWhlSpd01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd01CRCDTCInfo_0;

extern CONST(dt_ComM_IBSWhlSpd01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd01TimeoutInfo_0;

extern CONST(dt_ComM_IBSWhlSpd02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd02CRCDTCInfo_0;

extern CONST(dt_ComM_IBSWhlSpd02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd02TimeoutInfo_0;

extern CONST(dt_ComM_IVI01CRCInfo, RTE_CONST) Rte_C_dt_ComM_IVI01CRCInfo_0;

extern CONST(dt_ComM_IVI01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IVI01E2ETimeoutInfo_0;

extern CONST(dt_ComM_LinMsgErrInfo, RTE_CONST) Rte_C_dt_ComM_LinMsgErrInfo_0;

extern CONST(dt_ComM_MCU01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01CRCDTCInfo_0;

extern CONST(dt_ComM_MCU01CRCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01CRCInfo_0;

extern CONST(dt_ComM_MCU01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCU01E2ETimeoutInfo_0;

extern CONST(dt_ComM_MCU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01TimeoutDTCInfo_0;

extern CONST(dt_ComM_MCU01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCU01TimeoutInfo_0;

extern CONST(dt_ComM_MCUFailrCodCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodCRCDTCInfo_0;

extern CONST(dt_ComM_MCUFailrCodCRCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodCRCInfo_0;

extern CONST(dt_ComM_MCUFailrCodE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodE2ETimeoutInfo_0;

extern CONST(dt_ComM_MCUFailrCodTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodTimeoutDTCInfo_0;

extern CONST(dt_ComM_PODDCDC01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PODDCDC01TimeoutDTCInfo_0;

extern CONST(dt_ComM_PODDCDC01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODDCDC01TimeoutInfo_0;

extern CONST(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0;

extern CONST(dt_ComM_PODOBCChrgStatTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODOBCChrgStatTimeoutInfo_0;

extern CONST(dt_ComM_PODSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODSts01TimeoutInfo_0;

extern CONST(dt_ComM_PRNDCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDCRCDTCInfo_0;

extern CONST(dt_ComM_PRNDCRCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDCRCInfo_0;

extern CONST(dt_ComM_PRNDE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PRNDE2ETimeoutInfo_0;

extern CONST(dt_ComM_PRNDTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDTimeoutDTCInfo_0;

extern CONST(dt_ComM_PRNDTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PRNDTimeoutInfo_0;

extern CONST(dt_ComM_SGW16TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGW16TimeoutDTCInfo_0;

extern CONST(dt_ComM_SGW16TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGW16TimeoutInfo_0;

extern CONST(dt_ComM_SGW17TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGW17TimeoutDTCInfo_0;

extern CONST(dt_ComM_SGW17TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGW17TimeoutInfo_0;

extern CONST(dt_ComM_SGWPT01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGWPT01TimeoutDTCInfo_0;

extern CONST(dt_ComM_SGWPT01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGWPT01TimeoutInfo_0;

extern CONST(dt_ComM_SGWTimTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGWTimTimeoutDTCInfo_0;

extern CONST(dt_ComM_SGWTimTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGWTimTimeoutInfo_0;

extern CONST(dt_ComM_TCU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_TCU01TimeoutDTCInfo_0;

extern CONST(dt_ComM_TCU01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_TCU01TimeoutInfo_0;

extern CONST(dt_DCChrMgmt_BEMRxCCSTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCCSTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCCSTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCCSTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCMLTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCMLTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCMLTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCMLTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCRMTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCRMTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCROPrepdTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROPrepdTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCROPrepdTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCROTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCROTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCSDTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSDTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCSDTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSDTmtDTC_0;

extern CONST(dt_DCChrMgmt_BEMRxCSTTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSTTmt_0;

extern CONST(dt_DCChrMgmt_BEMRxCSTTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSTTmtDTC_0;

extern CONST(dt_DCChrMgmt_DcPortTempErrLvl1, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl1_0;

extern CONST(dt_DCChrMgmt_DcPortTempErrLvl1DTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0;

extern CONST(dt_DCChrMgmt_DcPortTempErrLvl2, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl2_0;

extern CONST(dt_DCChrMgmt_DcPortTempErrLvl2DTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0;

extern CONST(dt_DCChrMgmt_DcPortTempSnsrErr, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempSnsrErr_0;

extern CONST(dt_DCChrMgmt_DcPortTempSnsrErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0;

extern CONST(dt_DCChrMgmt_IRMeasDiErr, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasDiErr_0;

extern CONST(dt_DCChrMgmt_IRMeasDiErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasDiErrDTC_0;

extern CONST(dt_DCChrMgmt_IRMeasEnaErr, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasEnaErr_0;

extern CONST(dt_DCChrMgmt_IRMeasEnaErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasEnaErrDTC_0;

extern CONST(dt_EgyMgmt_EgyMgmtWarnOne, RTE_CONST) Rte_C_dt_EgyMgmt_EgyMgmtWarnOne_0;

extern CONST(dt_EgyMgmt_EgyMgmtWarnTwo, RTE_CONST) Rte_C_dt_EgyMgmt_EgyMgmtWarnTwo_0;

extern CONST(dt_ErrMgmt_DrvMotTempOvrLamp, RTE_CONST) Rte_C_dt_ErrMgmt_DrvMotTempOvrLamp_0;

extern CONST(dt_ErrMgmt_HvBattTempOvrLamp, RTE_CONST) Rte_C_dt_ErrMgmt_HvBattTempOvrLamp_0;

extern CONST(dt_ErrMgmt_InslaFlt, RTE_CONST) Rte_C_dt_ErrMgmt_InslaFlt_0;

extern CONST(dt_ErrMgmt_TorqCtrlErr, RTE_CONST) Rte_C_dt_ErrMgmt_TorqCtrlErr_0;

extern CONST(dt_ErrMgmt_VCUHVILDTC, RTE_CONST) Rte_C_dt_ErrMgmt_VCUHVILDTC_0;

extern CONST(dt_ErrMgmt_VehHVIL, RTE_CONST) Rte_C_dt_ErrMgmt_VehHVIL_0;

extern CONST(dt_FctSftyMon_AccrPedlTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_0;

extern CONST(dt_FctSftyMon_AccrPedlTqOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_AccrPedlTqOverFltInfo_0;

extern CONST(dt_FctSftyMon_ActGearCfmFail, RTE_CONST) Rte_C_dt_FctSftyMon_ActGearCfmFail_0;

extern CONST(dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_0;

extern CONST(dt_FctSftyMon_CrpCtrlTqOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0;

extern CONST(dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_0;

extern CONST(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0;

extern CONST(dt_HvMgmt_BMSRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTC_0;

extern CONST(dt_HvMgmt_BMSRlyClsDTCOne, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTCOne_0;

extern CONST(dt_HvMgmt_BMSRlyClsDTCTwo, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTCTwo_0;

extern CONST(dt_HvMgmt_BMSRlyOpenDTC, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyOpenDTC_0;

extern CONST(dt_HvMgmt_DCDCEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCDCEnaFltDTC_0;

extern CONST(dt_HvMgmt_DCDCStopFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCDCStopFltDTC_0;

extern CONST(dt_HvMgmt_DCFCRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCFCRlyClsDTC_0;

extern CONST(dt_HvMgmt_MCUClsFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCUClsFltDTC_0;

extern CONST(dt_HvMgmt_MCUEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCUEnaFltDTC_0;

extern CONST(dt_HvMgmt_MCURdyFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTC_0;

extern CONST(dt_HvMgmt_MCURdyFltDTCOne, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTCOne_0;

extern CONST(dt_HvMgmt_MCURdyFltDTCTwo, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTCTwo_0;

extern CONST(dt_HvMgmt_PreheatPosRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_PreheatPosRlyClsDTC_0;

extern CONST(dt_HvMgmt_PreheatPosRlyOpenDTC, RTE_CONST) Rte_C_dt_HvMgmt_PreheatPosRlyOpenDTC_0;

extern CONST(dt_HvMgmt_TCUEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_TCUEnaFltDTC_0;

extern CONST(dt_HvMgmt_TCUStopFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_TCUStopFltDTC_0;

extern CONST(dt_LvMgmt_BSBattChrgIDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattChrgIDcHiDTC_0;

extern CONST(dt_LvMgmt_BSBattIDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattIDcHiDTC_0;

extern CONST(dt_LvMgmt_BSBattSOCLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattSOCLoDTC_0;

extern CONST(dt_LvMgmt_BSBattTempHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattTempHiDTC_0;

extern CONST(dt_LvMgmt_BSBattTempLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattTempLoDTC_0;

extern CONST(dt_LvMgmt_BSBattUDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattUDcHiDTC_0;

extern CONST(dt_LvMgmt_BSBattUDcLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattUDcLoDTC_0;

extern CONST(dt_LvMgmt_BSRespErrDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSRespErrDTC_0;

extern CONST(dt_LvMgmt_ECUsDiagDTC, RTE_CONST) Rte_C_dt_LvMgmt_ECUsDiagDTC_0;

extern CONST(dt_LvMgmt_KL15eOffDTC, RTE_CONST) Rte_C_dt_LvMgmt_KL15eOffDTC_0;

extern CONST(dt_LvMgmt_KL15eOnDTC, RTE_CONST) Rte_C_dt_LvMgmt_KL15eOnDTC_0;

extern CONST(dt_LvMgmt_LvSysLoUdcDTC, RTE_CONST) Rte_C_dt_LvMgmt_LvSysLoUdcDTC_0;

extern CONST(dt_LvMgmt_LvSysOvrUdcDTC, RTE_CONST) Rte_C_dt_LvMgmt_LvSysOvrUdcDTC_0;

extern CONST(dt_ModMgmt_OnePedlWarnHiSpd, RTE_CONST) Rte_C_dt_ModMgmt_OnePedlWarnHiSpd_0;

extern CONST(dt_ModMgmt_OnePedlWarnVehFaild, RTE_CONST) Rte_C_dt_ModMgmt_OnePedlWarnVehFaild_0;

extern CONST(dt_ModMgmt_SptModWarnLoSOC, RTE_CONST) Rte_C_dt_ModMgmt_SptModWarnLoSOC_0;

extern CONST(dt_Nv_ChassisMgmtInfo, RTE_CONST) Rte_C_dt_Nv_ChassisMgmtInfo_0;

extern CONST(dt_Nv_ChrgEgyCalInfo, RTE_CONST) Rte_C_dt_Nv_ChrgEgyCalInfo_0;

extern CONST(dt_Nv_ChrgStatInfo, RTE_CONST) Rte_C_dt_Nv_ChrgStatInfo_0;

extern CONST(dt_Nv_GearMgmtInfo, RTE_CONST) Rte_C_dt_Nv_GearMgmtInfo_0;

extern CONST(dt_Nv_ModMgmtInfo, RTE_CONST) Rte_C_dt_Nv_ModMgmtInfo_0;

extern CONST(dt_Nv_RngEstimnInfo, RTE_CONST) Rte_C_dt_Nv_RngEstimnInfo_0;

extern CONST(dt_OBCMgmt_CPStsJmpErr, RTE_CONST) Rte_C_dt_OBCMgmt_CPStsJmpErr_0;

extern CONST(dt_OBCMgmt_CPStsJmpErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_CPStsJmpErrDTC_0;

extern CONST(dt_OBCMgmt_ElectcLockClsErr, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockClsErr_0;

extern CONST(dt_OBCMgmt_ElectcLockClsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockClsErrDTC_0;

extern CONST(dt_OBCMgmt_ElectcLockOpenErr, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockOpenErr_0;

extern CONST(dt_OBCMgmt_ElectcLockOpenErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockOpenErrDTC_0;

extern CONST(dt_OBCMgmt_OBCChrgStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCChrgStsErr_0;

extern CONST(dt_OBCMgmt_OBCChrgStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCChrgStsErrDTC_0;

extern CONST(dt_OBCMgmt_OBCDchaStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDchaStsErr_0;

extern CONST(dt_OBCMgmt_OBCDchaStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDchaStsErrDTC_0;

extern CONST(dt_OBCMgmt_OBCDiErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDiErr_0;

extern CONST(dt_OBCMgmt_OBCDiErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDiErrDTC_0;

extern CONST(dt_OBCMgmt_OBCInpUDcLoErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCInpUDcLoErr_0;

extern CONST(dt_OBCMgmt_OBCInpUDcLoErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCInpUDcLoErrDTC_0;

extern CONST(dt_OBCMgmt_OBCPreheatStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCPreheatStsErr_0;

extern CONST(dt_OBCMgmt_OBCPreheatStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCPreheatStsErrDTC_0;

extern CONST(dt_OBCMgmt_S2SwtClsErr, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtClsErr_0;

extern CONST(dt_OBCMgmt_S2SwtClsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtClsErrDTC_0;

extern CONST(dt_OBCMgmt_S2SwtOpenErr, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtOpenErr_0;

extern CONST(dt_OBCMgmt_S2SwtOpenErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtOpenErrDTC_0;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtAp_CANHandler
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_CtAp_CANHandler, RTE_CONST, RTE_CONST) Rte_Inst_CtAp_CANHandler;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT     (0U)
# define RTE_STATE_SCHM_START (1U)
# define RTE_STATE_SCHM_INIT  (2U)
# define RTE_STATE_INIT       (3U)

# define RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_StartTiming_InitState; /* PRQA S 0850, 3408 */ /* MD_MSR_MacroArgumentEmpty, MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_1; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_2; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(CCS_OutputCurrent, RTE_VAR_INIT_NOCACHE) Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CCS_OutputVoltage, RTE_VAR_INIT_NOCACHE) Rte_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CEM_BatteryChargeRequireTimeout, RTE_VAR_INIT_NOCACHE) Rte_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CHM_ProtocolVersion, RTE_VAR_INIT_NOCACHE) Rte_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ACU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ACU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ACU_Info_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ADCU_ACC_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ADCU_AEB_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ADCU_APS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ADCU_APS_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_ADCU_DA_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_APTC_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BCM_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BCM_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_BatInfor_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_BatInfor_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_BatInfor_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_CellTemp_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_CellVoltage_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_Charge_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_Charge_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_Charge_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_DIRelayState_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_ErrorInfo_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_PRO_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_VersionInfor_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_status_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_BMS_status_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_CGW_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_CGW_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_CGW_VIN1_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_CGW_VIN2_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_CGW_VIN3VER_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_DCM_FL_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_DCM_FR_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_DCM_FR_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_DCM_RL_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_DCM_RR_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_EPS_CONV_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_EVCOM_State_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_ACC_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_APS_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Status_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_Torque_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_VCU_MotorControl_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_WheelSpeed_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IBS_WheelSpeed_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IVI_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IVI_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_IVI_OdometerInfor_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_DeratingStatus_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_FailureCode_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_Temperature_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_MCU_Temperature_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_DCDC_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_DCDC_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_OBC_CHRGSTATION_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_OBC_STATUS_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_OBC_STATUS_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_OBC_STATUS_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_Status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_POD_Status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_PRND_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_16_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_17_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_FVSynchronization_01_SigGrou, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_IBS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_PT_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_Time_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_SGW_VCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_TCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_TCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CRM_RecognitionResult, RTE_VAR_INIT_NOCACHE) Rte_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CRO_ChargerReady, RTE_VAR_INIT_NOCACHE) Rte_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CSD_ChargerNo, RTE_VAR_INIT_NOCACHE) Rte_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CST_AbortAchiveCondition, RTE_VAR_INIT_NOCACHE) Rte_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(CTS_Year, RTE_VAR_INIT_NOCACHE) Rte_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(FRC_ComFtonNet, RTE_VAR_INIT_NOCACHE) Rte_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(FRC_Vl_OV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(FRC_Vl_UV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IBATT_QUIESCENT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(I_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(I_RANGE_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Resp_Error_LIN01, RTE_VAR_INIT_NOCACHE) Rte_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOC_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOF_V1_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOF_V2_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOH_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(T_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(U_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_Ecu_KeyWakeStatus_Keywake; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_ChassisMgmtInfo, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACU01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACU02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACU02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACU02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACUInfoCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACUInfoTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ACUInfoTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUACC02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUACC02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUACC02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUAEB01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUAEB01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUAPS01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUAPS01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUBodyReqCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUBodyReqTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUDACRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_ADCUDATimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_APTCTCUTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_APTCTCUTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BCM05CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BCM05TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BCM06CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BCM06TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BCM06TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSErrInfoTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_BMSSts02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_CGW01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_CGW01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_CGW01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMFL02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMFL02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMFL02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMFRTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMFRTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMRLTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMRLTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMRRTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCMRRTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_EVCOMSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_EVCOMSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSACCCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSACCCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSACCE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSACCTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSAPSCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSAPSTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts02CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts02E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts03CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts03CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts03E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts03TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts04CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts04CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts04E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts04TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts05CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts05CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts05E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts05TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts05TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts06CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSSts06TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSTqCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSTqCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSTqE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSTqTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSVCUMotCtrlCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSVCUMotCtrlTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSWhlSpd01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSWhlSpd01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSWhlSpd02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IBSWhlSpd02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IVI01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_IVI01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCU01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCU01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCU01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCU01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCUFailrCodCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCUFailrCodCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_MCUFailrCodTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(sint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PODDCDC01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PODDCDC01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PODOBCChrgStatTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PODSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PRNDCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PRNDCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PRNDE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PRNDTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_PRNDTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGW16TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGW16TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGW17TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGW17TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGWPT01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGWPT01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGWTimTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_SGWTimTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_TCU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_TCU01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCCSTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCMLTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCRMPrepdTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCRMTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCROPrepdTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCROTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCSDTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_BEMRxCSTTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_DcPortTempErrLvl1, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_DcPortTempErrLvl2, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_DcPortTempSnsrErr, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_ChrgEgyCalInfo, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ChrMgmt_AcPreheatUDcCtrlErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ChrMgmt_DcPreheatUDcCtrlErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ChrMgmt_PreheatIRChkErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_IRMeasDiErr, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_DCChrMgmt_IRMeasEnaErr, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_ChrgStatInfo, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CoastCtrl_RTE_P_ChassisMgmt_CoastCtrlDesTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_CHCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_DCCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ComM_EPTCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_ModMgmtInfo, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_GearMgmtInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ErrMgmt_TorqCtrlErr, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ErrMgmt_DrvMotTempOvrLamp, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ErrMgmt_HvBattTempOvrLamp, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ErrMgmt_InslaFlt, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_ErrMgmt_VehHVIL, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_OBCChrgStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_OBCDchaStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_OBCDiErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_OBCPreheatStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_RngEstimn_BattCurrIntegral2kmArrayInfo, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_Nv_RngEstimnInfo, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_CPStsJmpErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_OBCInpUDcLoErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(dt_OBCMgmt_S2SwtClsErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_SlopEst_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCrossZr_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqFil_RTE_P_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(BHM_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_0; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_AccPedal_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_BMS_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_Chassis_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_DCDC_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_HMIsignals_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_HMIsignals_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_HMIsignals_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_IBS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_MCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_MCU_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_MCU_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_POD_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_PlugInChrgInfo_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_SynReq_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SG_VCU_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCL_ChargeMode, RTE_VAR_INIT_NOCACHE) Rte_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCL_CurrentRequire, RTE_VAR_INIT_NOCACHE) Rte_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCL_VolltageRequire, RTE_VAR_INIT_NOCACHE) Rte_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_AllowTempMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_BatteryChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_BatteryNominalEnergy, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_BatteryTotalVoltage, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_ChargeCurrentMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCP_SOC, RTE_VAR_INIT_NOCACHE) Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_BatteryVoltMax, RTE_VAR_INIT_NOCACHE) Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_BatteryVoltMaxGroup, RTE_VAR_INIT_NOCACHE) Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_ChargeCurrentMeasure, RTE_VAR_INIT_NOCACHE) Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_ChargeVoltageMeasure, RTE_VAR_INIT_NOCACHE) Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_EstimatedTimeRemaining, RTE_VAR_INIT_NOCACHE) Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BCS_SOC, RTE_VAR_INIT_NOCACHE) Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargeAbortTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargeFinishTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargeStateTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargeStatisticsTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargerIdTimeout0, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_ChargerIdTimeout1, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BEM_TimesyncOrPowerTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BHM_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_1; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryChargeTimes, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryProductDay, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryProductMonth, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryProductYear, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryProperty, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatterySN, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatterySystemRatedCapacity, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatterySystemRatedVoltage, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_BatteryType, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_Manufacturer, RTE_VAR_INIT_NOCACHE) Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_ProtocolVersion, RTE_VAR_INIT_NOCACHE) Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_VehicleIdByte17, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_VehicleIdByte1_8, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRM_VehicleIdByte9_16, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BRO_BMSChargeReady, RTE_VAR_INIT_NOCACHE) Rte_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSD_AbortSOC, RTE_VAR_INIT_NOCACHE) Rte_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSD_BatteryTempMax, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSD_BatteryTempMin, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSD_BatteryVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSD_BatteryVoltageMin, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryCurrentState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryOutpuConnectorState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryTempMax, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryTempMaxNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryTempMin, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryTempMinNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryTempState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryVoltageMaxNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_BatteryVoltageState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_ChargeEnable, RTE_VAR_INIT_NOCACHE) Rte_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_InsulationState, RTE_VAR_INIT_NOCACHE) Rte_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BSM_SOC, RTE_VAR_INIT_NOCACHE) Rte_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortAchiveSOC, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortAchiveSingleVolt, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortAchiveTotalVolt, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortChargparameter, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortErrorCurrent, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortErrorVoltage, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultBMSTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultBatteryTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultConnector, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultConnectorTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultInsulation, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortFaultOther, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_AbortHVrelayfault, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_Abortdet2Voltexception, RTE_VAR_INIT_NOCACHE) Rte_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BST_Abortmanoperate, RTE_VAR_INIT_NOCACHE) Rte_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(boolean, RTE_VAR_INIT_NOCACHE) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(ChargeCurrWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(ChargeCurrWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(DisChargeCurrWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(DisChargeCurrWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOCWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(SOCWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_ACU_DriverWarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_ACU_PassengerAirbagSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_ACU_PassengerWarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_ACU_WarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_BCM_FLSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_BCM_FRSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_BCM_RLSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_BCM_RRSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_CGW_VehicleState_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DCDCFail_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DCM_FL_DoorFLSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DCM_FR_DoorFRSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DCM_RL_DoorRLSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DCM_RR_DoorRRSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_DriveMotOvrTemp_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_HVBatCriFail_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_HVBatOvrTemp_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IBS_BrakeFluidWarning_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IBS_EBDFault_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IBS_RollerbenchMode_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IBS_SystemStatus_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IVI_BulbCheckStsLIN01, RTE_VAR_INIT_NOCACHE) Rte_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(VCU_IVI_VrState_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
/* TxUpdateFlags for ComSendSignalProxy without IOCs */

typedef struct
{
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN : 1;
} Rte_SystemApplication_OsCore0_TxUpdateFlagsType;

#  define RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore0_TxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore0_TxUpdateFlags;

#  define RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* TxUpdateFlags for ComSendSignalProxy without IOCs */

typedef struct
{
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCP_SOC_BCP_SOC : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BCS_SOC_BCS_SOC : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BSM_SOC_BSM_SOC : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception : 2;
  Rte_BitType Rte_TxUpdate_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 : 2;
  Rte_BitType Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN : 2;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 : 1;
  Rte_BitType Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN : 1;
} Rte_SystemApplication_OsCore1_TxUpdateFlagsType;

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore1_TxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore1_TxUpdateFlags;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/


#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# endif /* defined(RTE_CORE) */

/**********************************************************************************************************************
 * extern declaration of RTE Update Flags for optimized macro implementation
 *********************************************************************************************************************/
typedef struct
{
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet_Sender : 1;
  Rte_BitType Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01_Sender : 1;
} Rte_SystemApplication_OsCore0_RxUpdateFlagsType;

typedef struct
{
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup : 1;
  Rte_BitType Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet : 1;
  Rte_BitType Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01 : 1;
} Rte_SystemApplication_OsCore1_RxUpdateFlagsType;

# define RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore0_RxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore0_RxUpdateFlags;

# define RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore1_RxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore1_RxUpdateFlags;

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
