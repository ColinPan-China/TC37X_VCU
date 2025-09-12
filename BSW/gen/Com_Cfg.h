/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cfg.h
 *   Generation Time: 2025-09-12 17:00:35
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CFG_H)
# define COM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef COM_USE_DUMMY_STATEMENT
#define COM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef COM_DUMMY_STATEMENT
#define COM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef COM_DUMMY_STATEMENT_CONST
#define COM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef COM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define COM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef COM_ATOMIC_VARIABLE_ACCESS
#define COM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef COM_PROCESSOR_TC377T
#define COM_PROCESSOR_TC377T
#endif
#ifndef COM_COMP_TASKING
#define COM_COMP_TASKING
#endif
#ifndef COM_GEN_GENERATOR_MSR
#define COM_GEN_GENERATOR_MSR
#endif
#ifndef COM_CPUTYPE_BITORDER_LSB2MSB
#define COM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef COM_CONFIGURATION_VARIANT_PRECOMPILE
#define COM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef COM_CONFIGURATION_VARIANT_LINKTIME
#define COM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef COM_CONFIGURATION_VARIANT
#define COM_CONFIGURATION_VARIANT COM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef COM_POSTBUILD_VARIANT_SUPPORT
#define COM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* General */
#define COM_DEV_ERROR_DETECT                 STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComSafeBswChecks] || /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_DEV_ERROR_REPORT                 STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_RETRY_FAILED_TRANSMIT_REQUESTS   STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComRetryFailedTransmitRequests] */
#define COM_IPDUCALLOUT_USEPDUINFOPTR        STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComAdvancedIPduCallouts] */

/* API */
#define COM_COMMUNICATION_INTERFACE          STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRCommunicationInterface] */
#define COM_TRANSPORT_PROTOCOL               STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTransportProtocol] */

#define COM_TRIGGER_TRANSMIT_API             STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTriggertransmit] */
#define COM_TX_CONFIRMATION_API              STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSignalGateway] || /ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] */
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT   2U
#define COM_SUPPORTED_IPDU_GROUPS            15uL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

#define COM_RXIMMEDIATEFCTPTRCACHE           STD_OFF
#define COM_RXIMMEDIATEFCTPTRCACHESIZE       0U

#define COM_STRICT_REPETITION_PERIOD         STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComStrictRepetitionPeriod] */
#define COM_MIXEDMODEPERIODICSUPPRESSION     STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComMixedModePeriodicSuppression] */

/**
  \brief  Constants to compare floating-point values according to ISO C-99 standard.
  \details  -
    \{
*/
#define COM_FLT_EPSILON                      1E-5
#define COM_DBL_EPSILON                      1E-9
/**
  \}
*/




/**
 * \defgroup ComHandleIdsComRxSig Handle IDs of handle space ComRxSig.
 * \brief Rx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_ACU_CrashOutputStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_01645954_Rx 70u
#define ComConf_ComGroupSignal_ACU_CrashOutputSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8aba12b9_Rx 71u
#define ComConf_ComGroupSignal_ACU_DriverSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2fcd0f16_Rx 72u
#define ComConf_ComGroupSignal_ACU_DriverSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a79a099_Rx 73u
#define ComConf_ComGroupSignal_ACU_DriverWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_53dfaac4_Rx 74u
#define ComConf_ComGroupSignal_ACU_LatAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_5faf7139_Rx 64u
#define ComConf_ComGroupSignal_ACU_LatA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_0373507d_Rx 65u
#define ComConf_ComGroupSignal_ACU_LgtAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8eba5290_Rx 66u
#define ComConf_ComGroupSignal_ACU_LgtA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_7ce5ad57_Rx 67u
#define ComConf_ComGroupSignal_ACU_PassengerAirbagSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a4cb1e6_Rx 75u
#define ComConf_ComGroupSignal_ACU_PassengerSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_96ea6676_Rx 76u
#define ComConf_ComGroupSignal_ACU_PassengerSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2c4c3734_Rx 77u
#define ComConf_ComGroupSignal_ACU_PassengerSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eb52bcb8_Rx 78u
#define ComConf_ComGroupSignal_ACU_PassengerWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eaccbc6f_Rx 79u
#define ComConf_ComGroupSignal_ACU_RLSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_231d8b98_Rx 80u
#define ComConf_ComGroupSignal_ACU_RRSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8ba1e757_Rx 81u
#define ComConf_ComGroupSignal_ACU_SecondLeftSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_0c298557_Rx 82u
#define ComConf_ComGroupSignal_ACU_SecondLeftSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4d0b3459_Rx 83u
#define ComConf_ComGroupSignal_ACU_SecondRightSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3170c946_Rx 84u
#define ComConf_ComGroupSignal_ACU_SecondRightSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_19211d8e_Rx 85u
#define ComConf_ComGroupSignal_ACU_WarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c596fcb_Rx 86u
#define ComConf_ComGroupSignal_ACU_YawRateStatus_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a5dd4854_Rx 60u
#define ComConf_ComGroupSignal_ACU_YawRate_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_35ce62e9_Rx 61u
#define ComConf_ComGroupSignal_ADCU_ACCDA_HandsOFF_Warning_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_cdbbce90_Rx 89u
#define ComConf_ComGroupSignal_ADCU_ACCDA_SYS_Failure_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_0c0a67d0_Rx 90u
#define ComConf_ComGroupSignal_ADCU_ACC_Mode_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_4b80afee_Rx 91u
#define ComConf_ComGroupSignal_ADCU_AEBReq_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_cfcc0419_Rx 94u
#define ComConf_ComGroupSignal_ADCU_AEBWarningSts_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_ce5fed0e_Rx 95u
#define ComConf_ComGroupSignal_ADCU_AEB_AWB_Level_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_16b7390a_Rx 96u
#define ComConf_ComGroupSignal_ADCU_AEB_AWB_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_52a850e5_Rx 97u
#define ComConf_ComGroupSignal_ADCU_AEB_Decel_Cmd_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_e2026fd4_Rx 98u
#define ComConf_ComGroupSignal_ADCU_AEB_Prefill_CMD_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_935b0159_Rx 99u
#define ComConf_ComGroupSignal_ADCU_AEB_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_040d6d85_Rx 100u
#define ComConf_ComGroupSignal_ADCU_AEB_Stop_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_edd96c77_Rx 101u
#define ComConf_ComGroupSignal_ADCU_APSComfBrkReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b25663d8_Rx 105u
#define ComConf_ComGroupSignal_ADCU_APSCrlModeReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_589f1c09_Rx 106u
#define ComConf_ComGroupSignal_ADCU_APSCrlReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_da787726_Rx 107u
#define ComConf_ComGroupSignal_ADCU_APSCrlTypReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_25dd00be_Rx 108u
#define ComConf_ComGroupSignal_ADCU_APSDistanceStop_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_5af9bfc0_Rx 109u
#define ComConf_ComGroupSignal_ADCU_APSMaxSpeedReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_afdb21bd_Rx 110u
#define ComConf_ComGroupSignal_ADCU_APS_Stop_Req_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_cd03c7ef_Rx 111u
#define ComConf_ComGroupSignal_ADCU_DA_Mode_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_98abcb34_Rx 118u
#define ComConf_ComGroupSignal_ADCU_FCW_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_858628ce_Rx 102u
#define ComConf_ComGroupSignal_ADCU_Parking_CtrlSts_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c95774a6_Rx 112u
#define ComConf_ComGroupSignal_ADCU_Parking_Mode_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c6e9f3f9_Rx 113u
#define ComConf_ComGroupSignal_ADCU_RemoteParkingMode_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_262c752a_Rx 117u
#define ComConf_ComGroupSignal_ADCU_TargetGear_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_dbe43087_Rx 114u
#define ComConf_ComGroupSignal_APTC_PowerConsumption_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1649be11_Rx 121u
#define ComConf_ComGroupSignal_BCM_AntiTheftSts_oBCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_10f28e9f_Rx 146u
#define ComConf_ComGroupSignal_BCM_AutoCloseWinFunSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_721cde79_Rx 122u
#define ComConf_ComGroupSignal_BCM_ChrgFlapLockSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_178f84af_Rx 123u
#define ComConf_ComGroupSignal_BCM_DomeLampAutoSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_d0321d9a_Rx 124u
#define ComConf_ComGroupSignal_BCM_DomeLampBrightSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_a496c206_Rx 125u
#define ComConf_ComGroupSignal_BCM_FLSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_65ab8c1e_Rx 126u
#define ComConf_ComGroupSignal_BCM_FRSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_4ddb1af9_Rx 127u
#define ComConf_ComGroupSignal_BCM_FrontWiperModeSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_bc45dbca_Rx 128u
#define ComConf_ComGroupSignal_BCM_GearTimesSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_f9cf4f13_Rx 129u
#define ComConf_ComGroupSignal_BCM_Immo_State_oBCM_11_oATOM_CAN_Matrix_PT_V600_20250211_b85d08af_Rx 143u
#define ComConf_ComGroupSignal_BCM_KeyNotInCarRemind_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_26929e5b_Rx 130u
#define ComConf_ComGroupSignal_BCM_PepsPowerMode_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_db922ead_Rx 139u
#define ComConf_ComGroupSignal_BCM_PowerOffDisplayReq_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_9133ccdf_Rx 140u
#define ComConf_ComGroupSignal_BCM_PuddleLiReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_e2d97524_Rx 131u
#define ComConf_ComGroupSignal_BCM_RLSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_f8ff7457_Rx 132u
#define ComConf_ComGroupSignal_BCM_RRSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_d08fe2b0_Rx 133u
#define ComConf_ComGroupSignal_BCM_SecOCFV_272_oBCM_11_oATOM_CAN_Matrix_PT_V600_20250211_4451baff_Rx 144u
#define ComConf_ComGroupSignal_BCM_SecOCFV_334_oBCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_90e9c731_Rx 147u
#define ComConf_ComGroupSignal_BCM_SecOCMAC_272_oBCM_11_oATOM_CAN_Matrix_PT_V600_20250211_397206c9_Rx 145u
#define ComConf_ComGroupSignal_BCM_SecOCMAC_334_oBCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_9bea24c0_Rx 148u
#define ComConf_ComGroupSignal_BCM_WelLightshowOnOffSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5761d474_Rx 134u
#define ComConf_ComGroupSignal_BCM_WiperServiceSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_00dc1681_Rx 135u
#define ComConf_ComGroupSignal_BCM_WiperWorkingSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_2776ea8d_Rx 136u
#define ComConf_ComGroupSignal_BMS_AbortAchiveSingleVolt_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_b1bd7374_Rx 169u
#define ComConf_ComGroupSignal_BMS_AbortAchiveTotalVolt_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_f53da614_Rx 170u
#define ComConf_ComGroupSignal_BMS_AbortAchivesetValue_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_efa8b96b_Rx 171u
#define ComConf_ComGroupSignal_BMS_AbortErrorCurrent_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_db5d5e67_Rx 172u
#define ComConf_ComGroupSignal_BMS_AbortErrorVoltage_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_445453cb_Rx 173u
#define ComConf_ComGroupSignal_BMS_AbortFaultBMSTemp_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_403794ce_Rx 174u
#define ComConf_ComGroupSignal_BMS_AbortFaultBatteryTemp_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5b6b8a56_Rx 175u
#define ComConf_ComGroupSignal_BMS_AllowCellTemperature_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_696be742_Rx 200u
#define ComConf_ComGroupSignal_BMS_AllowChagCurrent_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_5bdeed04_Rx 166u
#define ComConf_ComGroupSignal_BMS_AverageCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_8a0ff926_Rx 156u
#define ComConf_ComGroupSignal_BMS_BalancingStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_282baecd_Rx 206u
#define ComConf_ComGroupSignal_BMS_BatChagSum_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_acd539d3_Rx 179u
#define ComConf_ComGroupSignal_BMS_BatProDatDay_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_7f9a6bc2_Rx 197u
#define ComConf_ComGroupSignal_BMS_BatProDatMonth_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_a585932e_Rx 198u
#define ComConf_ComGroupSignal_BMS_BatProDatYear_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_329b6492_Rx 199u
#define ComConf_ComGroupSignal_BMS_BatProRights_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_65b7c251_Rx 204u
#define ComConf_ComGroupSignal_BMS_BatSupName_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_eaf2f758_Rx 154u
#define ComConf_ComGroupSignal_BMS_BatType_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_379fb564_Rx 149u
#define ComConf_ComGroupSignal_BMS_BattCurr_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_114279ae_Rx 220u
#define ComConf_ComGroupSignal_BMS_BattVolt_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_434721f0_Rx 221u
#define ComConf_ComGroupSignal_BMS_CellNumbers_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_c37ce81e_Rx 150u
#define ComConf_ComGroupSignal_BMS_ChagComplete_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_ea7a6697_Rx 176u
#define ComConf_ComGroupSignal_BMS_ChargeRequest_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_1918c4e0_Rx 177u
#define ComConf_ComGroupSignal_BMS_ChargeStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_79fec82c_Rx 207u
#define ComConf_ComGroupSignal_BMS_ComVersion_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_a6b9c4fe_Rx 205u
#define ComConf_ComGroupSignal_BMS_DCChgMode_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_6d869dd0_Rx 178u
#define ComConf_ComGroupSignal_BMS_DisChgCurr_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_9054a7c7_Rx 226u
#define ComConf_ComGroupSignal_BMS_DisplaySOC_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_58348b09_Rx 223u
#define ComConf_ComGroupSignal_BMS_ErrorCellHighTemp_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_99700c48_Rx 187u
#define ComConf_ComGroupSignal_BMS_ErrorCellLowTemp_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_c40cc4fe_Rx 188u
#define ComConf_ComGroupSignal_BMS_ErrorCellOverVolt_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_5db8e4a2_Rx 189u
#define ComConf_ComGroupSignal_BMS_ErrorCellUnderVolt_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_56775465_Rx 190u
#define ComConf_ComGroupSignal_BMS_ErrorChaCurrentOver_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a2ef7503_Rx 191u
#define ComConf_ComGroupSignal_BMS_ErrorHighSoc_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_73bd0212_Rx 192u
#define ComConf_ComGroupSignal_BMS_ErrorIsolationSingleLow_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_b188e9c7_Rx 208u
#define ComConf_ComGroupSignal_BMS_ErrorLevel_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_9a0a25e1_Rx 209u
#define ComConf_ComGroupSignal_BMS_ErrorLowSoc_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_b96841e2_Rx 193u
#define ComConf_ComGroupSignal_BMS_ErrorPreChaFailed_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_59a6a965_Rx 194u
#define ComConf_ComGroupSignal_BMS_ErrorRelay_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_117a9031_Rx 195u
#define ComConf_ComGroupSignal_BMS_FeedbackCurr_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_adfb81c2_Rx 227u
#define ComConf_ComGroupSignal_BMS_HVinterlockState_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_83b45d03_Rx 210u
#define ComConf_ComGroupSignal_BMS_Heatcurrent_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_d7161a8d_Rx 222u
#define ComConf_ComGroupSignal_BMS_InsulationDetectionStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_27ab5dff_Rx 211u
#define ComConf_ComGroupSignal_BMS_KeepWarmRequest_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1b8e0c34_Rx 201u
#define ComConf_ComGroupSignal_BMS_KeepWarmStatus_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_96e48497_Rx 202u
#define ComConf_ComGroupSignal_BMS_LinkVoltage_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_57ffa044_Rx 224u
#define ComConf_ComGroupSignal_BMS_MaxCellTempNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_34228f51_Rx 157u
#define ComConf_ComGroupSignal_BMS_MaxCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_f2af76ab_Rx 158u
#define ComConf_ComGroupSignal_BMS_MaxCellVoltageModuleNO_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_41af4f62_Rx 162u
#define ComConf_ComGroupSignal_BMS_MaxCellVoltageNO_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f7be414b_Rx 163u
#define ComConf_ComGroupSignal_BMS_MaxCellVoltage_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_44643af9_Rx 164u
#define ComConf_ComGroupSignal_BMS_MaxChagVoltage_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_6cebdb8e_Rx 167u
#define ComConf_ComGroupSignal_BMS_MinCellTempModuleNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_5ad1b821_Rx 159u
#define ComConf_ComGroupSignal_BMS_MinCellTempNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_5aa7be5e_Rx 160u
#define ComConf_ComGroupSignal_BMS_MinCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_cb26cda9_Rx 161u
#define ComConf_ComGroupSignal_BMS_MinCellVoltage_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_d5508559_Rx 165u
#define ComConf_ComGroupSignal_BMS_NegRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_cb3f998e_Rx 182u
#define ComConf_ComGroupSignal_BMS_PTCRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_51f2d2bd_Rx 183u
#define ComConf_ComGroupSignal_BMS_PTC_VoltageValue_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_01e2b502_Rx 184u
#define ComConf_ComGroupSignal_BMS_PackVoltage_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_4cda4f33_Rx 225u
#define ComConf_ComGroupSignal_BMS_PosRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_0aa0be71_Rx 185u
#define ComConf_ComGroupSignal_BMS_PreCharge_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_07564e5b_Rx 212u
#define ComConf_ComGroupSignal_BMS_PreRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_51af39b6_Rx 186u
#define ComConf_ComGroupSignal_BMS_RTC_Request_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_dbff15fc_Rx 203u
#define ComConf_ComGroupSignal_BMS_RatBatVoltage_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_f1943e5d_Rx 151u
#define ComConf_ComGroupSignal_BMS_RatCapacity_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_a06c3dfc_Rx 152u
#define ComConf_ComGroupSignal_BMS_RatEnergy_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_92d3972c_Rx 153u
#define ComConf_ComGroupSignal_BMS_RemChagTime_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_27af82cf_Rx 168u
#define ComConf_ComGroupSignal_BMS_RemainCapacity_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_0c2dc68f_Rx 155u
#define ComConf_ComGroupSignal_BMS_RunHeatStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2fcb1018_Rx 213u
#define ComConf_ComGroupSignal_BMS_SOH_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_1aab6bd4_Rx 214u
#define ComConf_ComGroupSignal_BMS_SingChgkwh_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_015ce54e_Rx 180u
#define ComConf_ComGroupSignal_BMS_SumChgkwh_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_483ef743_Rx 181u
#define ComConf_ComGroupSignal_BMS_SysRegInsulationValue_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_8d0ccb80_Rx 215u
#define ComConf_ComGroupSignal_BMS_ThermalRunawayFault_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_bc9ae26c_Rx 196u
#define ComConf_ComGroupSignal_BMS_ThrmlRunawayFault_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_72ef69bf_Rx 216u
#define ComConf_ComGroupSignal_BMS_WorkMode_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_93c719c8_Rx 217u
#define ComConf_ComGroupSignal_CGW_ADCUSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_4e5b2421_Rx 231u
#define ComConf_ComGroupSignal_CGW_BCMSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_973cb2b1_Rx 232u
#define ComConf_ComGroupSignal_CGW_BMSSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c446f701_Rx 233u
#define ComConf_ComGroupSignal_CGW_CBMSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c3f45508_Rx 234u
#define ComConf_ComGroupSignal_CGW_CGWSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_f27832b0_Rx 235u
#define ComConf_ComGroupSignal_CGW_DCM_FLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_b0fddc0a_Rx 236u
#define ComConf_ComGroupSignal_CGW_DCM_FRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_b2caf30f_Rx 237u
#define ComConf_ComGroupSignal_CGW_DCM_RLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_ef4d5eca_Rx 238u
#define ComConf_ComGroupSignal_CGW_DCM_RRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_ed7a71cf_Rx 239u
#define ComConf_ComGroupSignal_CGW_HLLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9d5cf1eb_Rx 240u
#define ComConf_ComGroupSignal_CGW_HLRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9f6bdeee_Rx 241u
#define ComConf_ComGroupSignal_CGW_HOD_HeatingSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_d2f6c570_Rx 242u
#define ComConf_ComGroupSignal_CGW_IVISts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_f58e06dc_Rx 243u
#define ComConf_ComGroupSignal_CGW_MFP_FCSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_6eb7e4ef_Rx 244u
#define ComConf_ComGroupSignal_CGW_MFP_RCSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_3107662f_Rx 245u
#define ComConf_ComGroupSignal_CGW_PRNDSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_bdb63078_Rx 246u
#define ComConf_ComGroupSignal_CGW_SCU_LSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9ba30c74_Rx 247u
#define ComConf_ComGroupSignal_CGW_SCU_RSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_99942371_Rx 248u
#define ComConf_ComGroupSignal_CGW_SGWSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9f84f3f2_Rx 249u
#define ComConf_ComGroupSignal_CGW_SWPSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_1aac9e5f_Rx 250u
#define ComConf_ComGroupSignal_CGW_SwichesSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c378d64a_Rx 251u
#define ComConf_ComGroupSignal_CGW_VCUSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_d5f4b0ad_Rx 252u
#define ComConf_ComGroupSignal_CGW_VERSION1_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_870615dc_Rx 269u
#define ComConf_ComGroupSignal_CGW_VERSION2_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_c1d420b8_Rx 270u
#define ComConf_ComGroupSignal_CGW_VIN0_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_460f82b6_Rx 253u
#define ComConf_ComGroupSignal_CGW_VIN1_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_e599aafa_Rx 254u
#define ComConf_ComGroupSignal_CGW_VIN2_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_da52d46f_Rx 255u
#define ComConf_ComGroupSignal_CGW_VIN3_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_79c4fc23_Rx 256u
#define ComConf_ComGroupSignal_CGW_VIN4_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_a5c42945_Rx 257u
#define ComConf_ComGroupSignal_CGW_VIN5_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_06520109_Rx 258u
#define ComConf_ComGroupSignal_CGW_VIN6_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_39997f9c_Rx 259u
#define ComConf_ComGroupSignal_CGW_VIN7_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_9a0f57d0_Rx 260u
#define ComConf_ComGroupSignal_CGW_VIN8_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_d13aed08_Rx 261u
#define ComConf_ComGroupSignal_CGW_VIN9_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_72acc544_Rx 262u
#define ComConf_ComGroupSignal_CGW_VIN10_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_40e1447e_Rx 263u
#define ComConf_ComGroupSignal_CGW_VIN11_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_e3776c32_Rx 264u
#define ComConf_ComGroupSignal_CGW_VIN12_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_dcbc12a7_Rx 265u
#define ComConf_ComGroupSignal_CGW_VIN13_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_7f2a3aeb_Rx 266u
#define ComConf_ComGroupSignal_CGW_VIN14_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_a32aef8d_Rx 267u
#define ComConf_ComGroupSignal_CGW_VIN15_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_00bcc7c1_Rx 268u
#define ComConf_ComGroupSignal_CGW_VIN16_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_e72a7464_Rx 271u
#define ComConf_ComGroupSignal_CGW_VehicleState_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_1252b1db_Rx 228u
#define ComConf_ComGroupSignal_Checksum_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_efb220b2_Rx 398u
#define ComConf_ComGroupSignal_Checksum_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_65c4b71d_Rx 408u
#define ComConf_ComGroupSignal_Checksum_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ad2c5ce1_Rx 312u
#define ComConf_ComGroupSignal_Checksum_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a2ce7b09_Rx 319u
#define ComConf_ComGroupSignal_Checksum_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_47252d94_Rx 337u
#define ComConf_ComGroupSignal_Checksum_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7cf1e80a_Rx 303u
#define ComConf_ComGroupSignal_Checksum_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ea42d99c_Rx 291u
#define ComConf_ComGroupSignal_Checksum_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_c0d26283_Rx 383u
#define ComConf_ComGroupSignal_Checksum_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_77cd2b4a_Rx 353u
#define ComConf_ComGroupSignal_Checksum_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_d02c6941_Rx 358u
#define ComConf_ComGroupSignal_Checksum_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e0933738_Rx 363u
#define ComConf_ComGroupSignal_Checksum_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2a2c563b_Rx 218u
#define ComConf_ComGroupSignal_Checksum_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_31389c92_Rx 92u
#define ComConf_ComGroupSignal_Checksum_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_3047b966_Rx 103u
#define ComConf_ComGroupSignal_Checksum_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_19b3517b_Rx 115u
#define ComConf_ComGroupSignal_Checksum_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_6e918845_Rx 119u
#define ComConf_ComGroupSignal_Checksum_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_21944b83_Rx 62u
#define ComConf_ComGroupSignal_Checksum_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_63736e97_Rx 68u
#define ComConf_ComGroupSignal_Checksum_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_77cc8260_Rx 419u
#define ComConf_ComGroupSignal_Checksum_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_cce2105d_Rx 272u
#define ComConf_ComGroupSignal_Checksum_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_240d647b_Rx 137u
#define ComConf_ComGroupSignal_Checksum_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_b5095e35_Rx 392u
#define ComConf_ComGroupSignal_Checksum_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_591da21b_Rx 87u
#define ComConf_ComGroupSignal_Checksum_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3d12a66a_Rx 425u
#define ComConf_ComGroupSignal_Checksum_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2169404d_Rx 477u
#define ComConf_ComGroupSignal_Checksum_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_81801456_Rx 437u
#define ComConf_ComGroupSignal_Checksum_278_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_d9b09121_Rx 229u
#define ComConf_ComGroupSignal_DCM_FL_DoorFLSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_2e6576e2_Rx 273u
#define ComConf_ComGroupSignal_DCM_FL_FRWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_a982c250_Rx 274u
#define ComConf_ComGroupSignal_DCM_FL_LeftMirrorHorizontalPos_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_010d4778_Rx 275u
#define ComConf_ComGroupSignal_DCM_FL_LeftMirrorVerticalPos_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_5ff4b001_Rx 276u
#define ComConf_ComGroupSignal_DCM_FL_MirrorAutoFoldUnfoldSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_6b867db1_Rx 277u
#define ComConf_ComGroupSignal_DCM_FL_MirrorAutoTurnDownSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_da51d0f7_Rx 278u
#define ComConf_ComGroupSignal_DCM_FL_MirrorFold_UnfoldSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_fb31c620_Rx 279u
#define ComConf_ComGroupSignal_DCM_FL_RLWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_74fa2511_Rx 280u
#define ComConf_ComGroupSignal_DCM_FL_RRWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_09de1801_Rx 281u
#define ComConf_ComGroupSignal_DCM_FL_RearmirrorHeatingSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_aa058e71_Rx 282u
#define ComConf_ComGroupSignal_DCM_FR_AmbientTemperatureValid_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_e90c62bb_Rx 284u
#define ComConf_ComGroupSignal_DCM_FR_AmbientTemperature_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_cadd082e_Rx 285u
#define ComConf_ComGroupSignal_DCM_FR_DoorFRSts_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_525d6e8b_Rx 286u
#define ComConf_ComGroupSignal_DCM_RL_DoorRLSts_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_9ea56f59_Rx 287u
#define ComConf_ComGroupSignal_DCM_RR_DoorRRSts_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c830eb38_Rx 288u
#define ComConf_ComGroupSignal_EVCOM_CompActlCnsmpCur_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_a627e94c_Rx 289u
#define ComConf_ComGroupSignal_EVCOM_CompActlPwrCnsmp_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_d741f4fb_Rx 290u
#define ComConf_ComGroupSignal_IBS_ABPActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_9a3de825_Rx 338u
#define ComConf_ComGroupSignal_IBS_ABPAvailable_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_7eb6cd8c_Rx 339u
#define ComConf_ComGroupSignal_IBS_ABSActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_bc82dc5c_Rx 340u
#define ComConf_ComGroupSignal_IBS_ABSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1bd8c058_Rx 341u
#define ComConf_ComGroupSignal_IBS_AEBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_27fddc4e_Rx 320u
#define ComConf_ComGroupSignal_IBS_AEBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_586c329d_Rx 321u
#define ComConf_ComGroupSignal_IBS_APSComfortAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_761e7ded_Rx 304u
#define ComConf_ComGroupSignal_IBS_APSCrlReqEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7e0dcab4_Rx 305u
#define ComConf_ComGroupSignal_IBS_APSEmergenyAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_98e19592_Rx 306u
#define ComConf_ComGroupSignal_IBS_APSModeEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b13c14e1_Rx 307u
#define ComConf_ComGroupSignal_IBS_APSTrqReqActive_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_95892cb5_Rx 308u
#define ComConf_ComGroupSignal_IBS_APS_Avl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_912b9c67_Rx 309u
#define ComConf_ComGroupSignal_IBS_AVHAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_e9505f9e_Rx 322u
#define ComConf_ComGroupSignal_IBS_AVHSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e3018ac7_Rx 364u
#define ComConf_ComGroupSignal_IBS_AWBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_47745887_Rx 323u
#define ComConf_ComGroupSignal_IBS_AWBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_0d99f9f9_Rx 324u
#define ComConf_ComGroupSignal_IBS_BrakeFluidWarning_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cf3bf9da_Rx 365u
#define ComConf_ComGroupSignal_IBS_BrakeLightRequest_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a14297cf_Rx 325u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatusValid_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ba3a564c_Rx 313u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatus_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_c14952d9_Rx 314u
#define ComConf_ComGroupSignal_IBS_BrakePushrodStroke_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b9911368_Rx 315u
#define ComConf_ComGroupSignal_IBS_BrakeTypEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_efa1b54d_Rx 310u
#define ComConf_ComGroupSignal_IBS_CDPActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_5f0477e0_Rx 354u
#define ComConf_ComGroupSignal_IBS_CDPAvailable_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_551f17a8_Rx 355u
#define ComConf_ComGroupSignal_IBS_CddActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_cd634808_Rx 292u
#define ComConf_ComGroupSignal_IBS_CddAvailable_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_694f6a44_Rx 293u
#define ComConf_ComGroupSignal_IBS_CddError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_15ba1189_Rx 294u
#define ComConf_ComGroupSignal_IBS_DTCActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_05637011_Rx 356u
#define ComConf_ComGroupSignal_IBS_DTCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_632f33ac_Rx 342u
#define ComConf_ComGroupSignal_IBS_EBDActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1e24a445_Rx 343u
#define ComConf_ComGroupSignal_IBS_EBDFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_dad1ab7b_Rx 344u
#define ComConf_ComGroupSignal_IBS_EPBControllerSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_65ed44e8_Rx 326u
#define ComConf_ComGroupSignal_IBS_EPBFailureLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_94ade1a4_Rx 327u
#define ComConf_ComGroupSignal_IBS_EPBFailureStatus_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_2591769d_Rx 366u
#define ComConf_ComGroupSignal_IBS_EPBFunctionLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_947116d4_Rx 328u
#define ComConf_ComGroupSignal_IBS_EPBTextdisplay_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_e8354645_Rx 345u
#define ComConf_ComGroupSignal_IBS_EPBworkingSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_fc06f35e_Rx 329u
#define ComConf_ComGroupSignal_IBS_ESCOffSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_a7e250e7_Rx 367u
#define ComConf_ComGroupSignal_IBS_ESClampdisplay_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cffaf18c_Rx 368u
#define ComConf_ComGroupSignal_IBS_FLMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_0e538d73_Rx 399u
#define ComConf_ComGroupSignal_IBS_FLWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_9718fa24_Rx 400u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_19d76bef_Rx 401u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_d228a055_Rx 402u
#define ComConf_ComGroupSignal_IBS_FRMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_be7c8b57_Rx 403u
#define ComConf_ComGroupSignal_IBS_FRWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_8f930e98_Rx 404u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_2564a038_Rx 405u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_7a94cc9a_Rx 406u
#define ComConf_ComGroupSignal_IBS_FactoryMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_1f4b8984_Rx 369u
#define ComConf_ComGroupSignal_IBS_HBAActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3e0fd61_Rx 370u
#define ComConf_ComGroupSignal_IBS_HDCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_deb691a6_Rx 330u
#define ComConf_ComGroupSignal_IBS_HDCSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d0313153_Rx 371u
#define ComConf_ComGroupSignal_IBS_HHCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_f453be85_Rx 331u
#define ComConf_ComGroupSignal_IBS_HHCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a333cc25_Rx 332u
#define ComConf_ComGroupSignal_IBS_HazWarnReq_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b191eb63_Rx 333u
#define ComConf_ComGroupSignal_IBS_MaintenaceMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e1932fbc_Rx 372u
#define ComConf_ComGroupSignal_IBS_MasterCylinderPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b339468a_Rx 316u
#define ComConf_ComGroupSignal_IBS_PlungerPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_1a29f19b_Rx 317u
#define ComConf_ComGroupSignal_IBS_RBSStatus_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dc8e16c0_Rx 384u
#define ComConf_ComGroupSignal_IBS_RLMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_ad5dc1f0_Rx 409u
#define ComConf_ComGroupSignal_IBS_RLWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_296e9e60_Rx 410u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_82f6f2de_Rx 411u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_5459dc3a_Rx 412u
#define ComConf_ComGroupSignal_IBS_RRMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_1d72c7d4_Rx 413u
#define ComConf_ComGroupSignal_IBS_RRWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_31e56adc_Rx 414u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_be453909_Rx 415u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_fce5b0f5_Rx 416u
#define ComConf_ComGroupSignal_IBS_RWUActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_353ab732_Rx 373u
#define ComConf_ComGroupSignal_IBS_RWUAvailable_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_55a4e82d_Rx 374u
#define ComConf_ComGroupSignal_IBS_RollerbenchMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7e2deccc_Rx 375u
#define ComConf_ComGroupSignal_IBS_SUBEPBControllerSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_4db2fa5a_Rx 359u
#define ComConf_ComGroupSignal_IBS_SUBEPBFailureStatus_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_85549b8d_Rx 360u
#define ComConf_ComGroupSignal_IBS_SUBEPBworkingSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_6b861b0d_Rx 361u
#define ComConf_ComGroupSignal_IBS_SystemStatus_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_306130d0_Rx 346u
#define ComConf_ComGroupSignal_IBS_TCSActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a64ac2d8_Rx 334u
#define ComConf_ComGroupSignal_IBS_TCSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2d90687a_Rx 347u
#define ComConf_ComGroupSignal_IBS_TPMS_ResetSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ee7e0532_Rx 376u
#define ComConf_ComGroupSignal_IBS_TargetGearReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_35085f4b_Rx 385u
#define ComConf_ComGroupSignal_IBS_TireMonSysSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_91ee3722_Rx 377u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7fea0ce4_Rx 378u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_dbb01a62_Rx 379u
#define ComConf_ComGroupSignal_IBS_TireWarnReLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_6e5db930_Rx 380u
#define ComConf_ComGroupSignal_IBS_TireWarnReRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ca07afb6_Rx 381u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationReqActive_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5138c66a_Rx 386u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationRequest_Available_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_227d55b1_Rx 348u
#define ComConf_ComGroupSignal_IBS_VDCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_7ab0d9f3_Rx 335u
#define ComConf_ComGroupSignal_IBS_VDCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_01868c54_Rx 349u
#define ComConf_ComGroupSignal_IBS_VehicleSpeedValid_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_317a0a26_Rx 350u
#define ComConf_ComGroupSignal_IBS_VehicleSpeed_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_5ce10c83_Rx 351u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_Valid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_8e482947_Rx 295u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5c3fb2c_Rx 296u
#define ComConf_ComGroupSignal_IBS_VlcActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_3fa05f6d_Rx 297u
#define ComConf_ComGroupSignal_IBS_VlcAvalible_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_5ec40897_Rx 298u
#define ComConf_ComGroupSignal_IBS_VlcError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_b4ad3ada_Rx 299u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_406d9ee6_Rx 387u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_1036d2a9_Rx 388u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_f80f3ab5_Rx 393u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_6e9d7a41_Rx 394u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_0144d4d4_Rx 389u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dae1e9b7_Rx 390u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_2655e1fb_Rx 395u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_79bc7664_Rx 396u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReqValid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_d640a38d_Rx 300u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReq_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5232329_Rx 301u
#define ComConf_ComGroupSignal_IVI_AppointChargeCmd_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8c65f5f8_Rx 496u
#define ComConf_ComGroupSignal_IVI_BrakeCompensateCmd_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_49b5a1e8_Rx 494u
#define ComConf_ComGroupSignal_IVI_BulbCheckSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_ac8ee3d9_Rx 420u
#define ComConf_ComGroupSignal_IVI_CRLevelSet_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_8543222f_Rx 495u
#define ComConf_ComGroupSignal_IVI_DriveModeSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e3273eed_Rx 507u
#define ComConf_ComGroupSignal_IVI_DschrgOnOffSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_21f6b725_Rx 508u
#define ComConf_ComGroupSignal_IVI_ForwardVmaxAllowed_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_13b9eae3_Rx 509u
#define ComConf_ComGroupSignal_IVI_ForwardVmaxlimitSw_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8d0f6899_Rx 497u
#define ComConf_ComGroupSignal_IVI_GearRequest_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_3ae0554e_Rx 418u
#define ComConf_ComGroupSignal_IVI_LV_LimitPop_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_1112ab7d_Rx 498u
#define ComConf_ComGroupSignal_IVI_LockACPlug_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_01b87dfd_Rx 499u
#define ComConf_ComGroupSignal_IVI_MaxChrgSocSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_99c3e2a8_Rx 510u
#define ComConf_ComGroupSignal_IVI_OdometerInfor_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_e6e371ee_Rx 424u
#define ComConf_ComGroupSignal_IVI_SFIDippedBeamSet_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_23dcee29_Rx 421u
#define ComConf_ComGroupSignal_IVI_SFIabnormalSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_fd225a73_Rx 422u
#define ComConf_ComGroupSignal_IVI_V2LidisSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_25a8a73a_Rx 511u
#define ComConf_ComGroupSignal_IVI_VrState_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_518f75b6_Rx 489u
#define ComConf_ComGroupSignal_MCU_ActTrqValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_ac2cd648_Rx 426u
#define ComConf_ComGroupSignal_MCU_ActualSpeedValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_cc3b4560_Rx 427u
#define ComConf_ComGroupSignal_MCU_ActualSpeed_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_528eb860_Rx 428u
#define ComConf_ComGroupSignal_MCU_ActualTorque_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_6a6087a3_Rx 429u
#define ComConf_ComGroupSignal_MCU_BDmpCActv_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c0586eb8_Rx 433u
#define ComConf_ComGroupSignal_MCU_FaultLevel_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf7f5830_Rx 438u
#define ComConf_ComGroupSignal_MCU_IGBTTempMax_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_2c994d0d_Rx 440u
#define ComConf_ComGroupSignal_MCU_IsCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3f405105_Rx 430u
#define ComConf_ComGroupSignal_MCU_TempStatus_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_ccf76e7e_Rx 441u
#define ComConf_ComGroupSignal_MCU_TrqAbsMax_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_e9a1ec48_Rx 435u
#define ComConf_ComGroupSignal_MCU_TrqAbsMin_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_84a8e353_Rx 436u
#define ComConf_ComGroupSignal_MCU_UdcCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_c9f788aa_Rx 431u
#define ComConf_ComGroupSignal_MCU_VCUWorkMode_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2a117a8b_Rx 434u
#define ComConf_ComGroupSignal_MessageCounter_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_895d6141_Rx 407u
#define ComConf_ComGroupSignal_MessageCounter_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_032bf6ee_Rx 417u
#define ComConf_ComGroupSignal_MessageCounter_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_7bc88e71_Rx 318u
#define ComConf_ComGroupSignal_MessageCounter_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_742aa999_Rx 336u
#define ComConf_ComGroupSignal_MessageCounter_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_91c1ff04_Rx 352u
#define ComConf_ComGroupSignal_MessageCounter_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b68b4db2_Rx 311u
#define ComConf_ComGroupSignal_MessageCounter_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_20387c24_Rx 302u
#define ComConf_ComGroupSignal_MessageCounter_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_683f1d6f_Rx 391u
#define ComConf_ComGroupSignal_MessageCounter_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_a129f9da_Rx 357u
#define ComConf_ComGroupSignal_MessageCounter_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_06c8bbd1_Rx 362u
#define ComConf_ComGroupSignal_MessageCounter_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_3677e5a8_Rx 382u
#define ComConf_ComGroupSignal_MessageCounter_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_fcc884ab_Rx 219u
#define ComConf_ComGroupSignal_MessageCounter_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_982cdfbe_Rx 93u
#define ComConf_ComGroupSignal_MessageCounter_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_9953fa4a_Rx 104u
#define ComConf_ComGroupSignal_MessageCounter_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b0a71257_Rx 116u
#define ComConf_ComGroupSignal_MessageCounter_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_a4eb2dfd_Rx 120u
#define ComConf_ComGroupSignal_MessageCounter_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_e1f37972_Rx 63u
#define ComConf_ComGroupSignal_MessageCounter_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_a3145c66_Rx 69u
#define ComConf_ComGroupSignal_MessageCounter_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_b7abb091_Rx 423u
#define ComConf_ComGroupSignal_MessageCounter_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_4642a9f0_Rx 283u
#define ComConf_ComGroupSignal_MessageCounter_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_e46a568a_Rx 138u
#define ComConf_ComGroupSignal_MessageCounter_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_db5c1277_Rx 397u
#define ComConf_ComGroupSignal_MessageCounter_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c6de300_Rx 88u
#define ComConf_ComGroupSignal_MessageCounter_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_fd75949b_Rx 432u
#define ComConf_ComGroupSignal_MessageCounter_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_7249f622_Rx 478u
#define ComConf_ComGroupSignal_MessageCounter_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_981cfb50_Rx 439u
#define ComConf_ComGroupSignal_MessageCounter_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_8423cb57_Rx 141u
#define ComConf_ComGroupSignal_MessageCounter_278_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_19d7a3d0_Rx 230u
#define ComConf_ComGroupSignal_POD_DCDC_FaultLevel_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_eefe3afb_Rx 445u
#define ComConf_ComGroupSignal_POD_DCDC_HVInputCurrent_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_135e2f35_Rx 442u
#define ComConf_ComGroupSignal_POD_DCDC_HVInputVoltage_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_9c7a540a_Rx 443u
#define ComConf_ComGroupSignal_POD_DCDC_Side2Overtempfault_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_52f42506_Rx 446u
#define ComConf_ComGroupSignal_POD_DCDC_WorkMode_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_444a4f6b_Rx 444u
#define ComConf_ComGroupSignal_POD_DCFCVoltage_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_b89acdd0_Rx 471u
#define ComConf_ComGroupSignal_POD_DCInletTempA_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3fbc48fa_Rx 472u
#define ComConf_ComGroupSignal_POD_DCInletTempB_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_689e64a8_Rx 473u
#define ComConf_ComGroupSignal_POD_DCPortInletTempAValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_bbc9cc4c_Rx 474u
#define ComConf_ComGroupSignal_POD_DCPortInletTempBValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_ddcd197c_Rx 475u
#define ComConf_ComGroupSignal_POD_DCPosRelayState_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_6f150a52_Rx 476u
#define ComConf_ComGroupSignal_POD_OBC_CCCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_19f9b4da_Rx 447u
#define ComConf_ComGroupSignal_POD_OBC_CCStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_6df4ee5e_Rx 448u
#define ComConf_ComGroupSignal_POD_OBC_CPCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_53d381d9_Rx 449u
#define ComConf_ComGroupSignal_POD_OBC_CPDuty_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_602b732e_Rx 450u
#define ComConf_ComGroupSignal_POD_OBC_CPStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d6c8ee40_Rx 451u
#define ComConf_ComGroupSignal_POD_OBC_ChargCapacibility_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_1bd7c0f0_Rx 452u
#define ComConf_ComGroupSignal_POD_OBC_ChrgOutpPwrAvl_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_a1981126_Rx 457u
#define ComConf_ComGroupSignal_POD_OBC_EMLockState_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4eb1f977_Rx 453u
#define ComConf_ComGroupSignal_POD_OBC_FaultLevel_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_dfddb20c_Rx 460u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6a93fe10_Rx 465u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6b3657a6_Rx 466u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6f4e0ba4_Rx 467u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_779a5b73_Rx 468u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_763ff2c5_Rx 469u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_7247aec7_Rx 470u
#define ComConf_ComGroupSignal_POD_OBC_OBCMaxPermOutpCrrt_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_27da1158_Rx 454u
#define ComConf_ComGroupSignal_POD_OBC_OutputDCChargeCurrent_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_9a885370_Rx 458u
#define ComConf_ComGroupSignal_POD_OBC_OutputDCChargeVoltage_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_249f5302_Rx 459u
#define ComConf_ComGroupSignal_POD_OBC_PrimarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_315b5171_Rx 461u
#define ComConf_ComGroupSignal_POD_OBC_S2State_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d46756d3_Rx 455u
#define ComConf_ComGroupSignal_POD_OBC_SecondarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6ad0dc35_Rx 462u
#define ComConf_ComGroupSignal_POD_OBC_Side1Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_180c8c7c_Rx 463u
#define ComConf_ComGroupSignal_POD_OBC_Side2Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_54bfa6d5_Rx 464u
#define ComConf_ComGroupSignal_POD_OBC_WorkMode_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_206572d6_Rx 456u
#define ComConf_ComGroupSignal_PRND_Pbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_748786ed_Rx 479u
#define ComConf_ComGroupSignal_PRND_Pbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2bc3bb96_Rx 480u
#define ComConf_ComGroupSignal_PRND_RNDbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_fe92ca7a_Rx 481u
#define ComConf_ComGroupSignal_PRND_RNDbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_400cef5e_Rx 482u
#define ComConf_ComGroupSignal_SGW_AppointChargeCmd_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_cf3a83f6_Rx 483u
#define ComConf_ComGroupSignal_SGW_BLESystemReadyReq_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_359ce2fd_Rx 490u
#define ComConf_ComGroupSignal_SGW_ChargeFormSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3f92bd57_Rx 484u
#define ComConf_ComGroupSignal_SGW_DschrgOnOffSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_a0a977dd_Rx 485u
#define ComConf_ComGroupSignal_SGW_LockACPlug_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_5ade64ae_Rx 486u
#define ComConf_ComGroupSignal_SGW_RemoteHVCtrlReq_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_17e2f736_Rx 488u
#define ComConf_ComGroupSignal_SGW_ResetCounter_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_61156e06_Rx 491u
#define ComConf_ComGroupSignal_SGW_SynMsgAuthenticator_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_b2115b74_Rx 492u
#define ComConf_ComGroupSignal_SGW_TimeInfoDay_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_880a47df_Rx 500u
#define ComConf_ComGroupSignal_SGW_TimeInfoHour_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_bc8cc791_Rx 501u
#define ComConf_ComGroupSignal_SGW_TimeInfoMinute_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_107045bf_Rx 502u
#define ComConf_ComGroupSignal_SGW_TimeInfoMonth_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0acdad62_Rx 503u
#define ComConf_ComGroupSignal_SGW_TimeInfoSecond_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_ed2116e5_Rx 504u
#define ComConf_ComGroupSignal_SGW_TimeInfoYear_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_76136356_Rx 505u
#define ComConf_ComGroupSignal_SGW_TimeValid_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_4cd83a01_Rx 506u
#define ComConf_ComGroupSignal_SGW_TimingChargeSwitchStatus_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_83e61a6c_Rx 487u
#define ComConf_ComGroupSignal_SGW_TripCounter_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1cad6227_Rx 493u
#define ComConf_ComGroupSignal_TCU_HVCHHVDCCurrent_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_400bea9a_Rx 516u
#define ComConf_ComGroupSignal_TCU_HVCHHighVoltage_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3d196c75_Rx 517u
#define ComConf_ComGroupSignal_TCU_HVPwrState_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_8d7d29e0_Rx 512u
#define ComConf_ComGroupSignal_TCU_TMSFaultLevel_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_0e521934_Rx 513u
#define ComConf_ComGroupSignal_TCU_TMSTotalPwrCnsmp_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_9dde2d90_Rx 514u
#define ComConf_ComGroupSignal_TCU_TMSTotoalPwrReq_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_247c22c3_Rx 515u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd1_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_c9ab8207_Rx 518u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd2_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e054f4ab_Rx 519u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd3_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_f8fe26cf_Rx 520u
#define ComConf_ComGroupSignal_checksum_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_70f1cf66_Rx 142u
#define ComConf_ComSignal_Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx 0u
#define ComConf_ComSignal_Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx 1u
#define ComConf_ComSignal_Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx 2u
#define ComConf_ComSignal_Bts7xx_HS1_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_d0692a3c_Rx 3u
#define ComConf_ComSignal_Bts7xx_HS2_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_b48951c2_Rx 4u
#define ComConf_ComSignal_Bts7xx_HS3_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_21f98557_Rx 5u
#define ComConf_ComSignal_Bts7xx_HS4_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7d49a63e_Rx 6u
#define ComConf_ComSignal_Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx 7u
#define ComConf_ComSignal_EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx 8u
#define ComConf_ComSignal_EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx 9u
#define ComConf_ComSignal_EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx 10u
#define ComConf_ComSignal_EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx 11u
#define ComConf_ComSignal_EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx 12u
#define ComConf_ComSignal_EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx 13u
#define ComConf_ComSignal_EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx 14u
#define ComConf_ComSignal_EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx 15u
#define ComConf_ComSignal_EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx 16u
#define ComConf_ComSignal_EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx 17u
#define ComConf_ComSignal_EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx 18u
#define ComConf_ComSignal_EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx 19u
#define ComConf_ComSignal_EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx    20u
#define ComConf_ComSignal_EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx 21u
#define ComConf_ComSignal_EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx 22u
#define ComConf_ComSignal_EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx 23u
#define ComConf_ComSignal_EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx 24u
#define ComConf_ComSignal_EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx 25u
#define ComConf_ComSignal_EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx 26u
#define ComConf_ComSignal_EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx 27u
#define ComConf_ComSignal_HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx 28u
#define ComConf_ComSignal_HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx 29u
#define ComConf_ComSignal_HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx 30u
#define ComConf_ComSignal_HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx 31u
#define ComConf_ComSignal_HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx 32u
#define ComConf_ComSignal_HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx 33u
#define ComConf_ComSignal_HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx 34u
#define ComConf_ComSignal_HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx 35u
#define ComConf_ComSignal_HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx 36u
#define ComConf_ComSignal_HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx 37u
#define ComConf_ComSignal_HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx 38u
#define ComConf_ComSignal_HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx   39u
#define ComConf_ComSignal_HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx  40u
#define ComConf_ComSignal_HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx 41u
#define ComConf_ComSignal_HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx 42u
#define ComConf_ComSignal_HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx 43u
#define ComConf_ComSignal_LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx 44u
#define ComConf_ComSignal_PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_Rx 45u
#define ComConf_ComSignal_PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_Rx 46u
#define ComConf_ComSignal_PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_Rx 47u
#define ComConf_ComSignal_PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_Rx 48u
#define ComConf_ComSignal_PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_Rx 49u
#define ComConf_ComSignal_PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_Rx 50u
#define ComConf_ComSignal_PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_Rx   51u
#define ComConf_ComSignal_PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_Rx 52u
#define ComConf_ComSignal_PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_Rx 53u
#define ComConf_ComSignal_PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_Rx 54u
#define ComConf_ComSignal_PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_Rx 55u
#define ComConf_ComSignal_PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_Rx 56u
#define ComConf_ComSignal_PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_Rx 57u
#define ComConf_ComSignal_PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_Rx   58u
#define ComConf_ComSignal_RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx  59u
#define ComConf_ComSignal_Tle888qk_Lout1_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_0e3571fa_Rx 521u
#define ComConf_ComSignal_Tle888qk_Lout8_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_ebe51441_Rx 522u
#define ComConf_ComSignal_Tle888qk_Lout14_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_a11e1e88_Rx 523u
#define ComConf_ComSignal_Tle888qk_Lout16_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_508eb1e3_Rx 524u
#define ComConf_ComSignal_Tle888qk_Out21BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_f4735e02_Rx 525u
#define ComConf_ComSignal_Tle888qk_Out21_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_fce8b2a9_Rx 526u
#define ComConf_ComSignal_Tle888qk_Out22BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_27e842f9_Rx 527u
#define ComConf_ComSignal_Tle888qk_Out22_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_9808c957_Rx 528u
#define ComConf_ComSignal_Tle888qk_Out23BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_69614950_Rx 529u
#define ComConf_ComSignal_Tle888qk_Out23_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_0d781dc2_Rx 530u
#define ComConf_ComSignal_Tle888qk_Out24BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_5baf7d4e_Rx 531u
#define ComConf_ComSignal_Tle888qk_Out24_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_51c83eab_Rx 532u
#define ComConf_ComSignal_Tle4252d_en_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_24c739a8_Rx 533u
#define ComConf_ComSignal_Tle9201_Dir_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_4c38edaa_Rx 534u
#define ComConf_ComSignal_Tle9201_Dis_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7aca7d59_Rx 535u
#define ComConf_ComSignal_Tle9201_Pwm_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_bf73fa17_Rx 536u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_ab1f8c96_Rx 537u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx 538u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_8f9ddda0_Rx 539u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx 540u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_e21b2efa_Rx 541u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx 542u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_c6997fcc_Rx 543u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx 544u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_735765ea_Rx 545u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx 546u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_57d534dc_Rx 547u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx 548u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_3a53c786_Rx 549u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx 550u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_1ed196b0_Rx 551u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx 552u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN01_6c375668_Rx 553u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN01_c9bcc666_Rx 554u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN01_a6197493_Rx 555u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN01_0392e49d_Rx 556u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN01_b8f0552d_Rx 557u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN01_367f52ce_Rx 558u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN01_1d7bc523_Rx 559u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN01_93f4c2c0_Rx 560u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg1_Sig0_oVcu_Lin3_RxMsg1_oLIN02_be2252cb_Rx 561u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg1_Sig1_oVcu_Lin3_RxMsg1_oLIN02_1ba9c2c5_Rx 562u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig0_oVcu_Lin3_RxMsg2_oLIN02_740c7030_Rx 563u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig1_oVcu_Lin3_RxMsg2_oLIN02_d187e03e_Rx 564u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig2_oVcu_Lin3_RxMsg1_oLIN02_6ae5518e_Rx 565u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig2_oVcu_Lin3_RxMsg2_oLIN02_e46a566d_Rx 566u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig3_oVcu_Lin3_RxMsg1_oLIN02_cf6ec180_Rx 567u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig3_oVcu_Lin3_RxMsg2_oLIN02_41e1c663_Rx 568u
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c848143c_Tx 120u
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f7156dad_Tx 133u
#define ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_51727e14_Tx 94u
#define ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_6e2f0785_Tx 107u
#define ComConf_ComGroupSignal_Checksum_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_090e4c9b_Tx 146u
#define ComConf_ComGroupSignal_Checksum_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_28a707e9_Tx 200u
#define ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_004b6de5_Tx 210u
#define ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_3f161474_Tx 221u
#define ComConf_ComGroupSignal_Checksum_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_7e8714d3_Tx 165u
#define ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_fc013b78_Tx 179u
#define ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_c35c42e9_Tx 188u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_0232b184_Tx 121u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_3d6fc815_Tx 134u
#define ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_630306b4_Tx 95u
#define ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_5c5e7f25_Tx 108u
#define ComConf_ComGroupSignal_MessageCounter_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f9d73b0d_Tx 147u
#define ComConf_ComGroupSignal_MessageCounter_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_804a7805_Tx 201u
#define ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a8a61209_Tx 211u
#define ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_97fb6b98_Tx 222u
#define ComConf_ComGroupSignal_MessageCounter_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_18685520_Tx 166u
#define ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_9aee7a8b_Tx 180u
#define ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_a5b3031a_Tx 189u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte0_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_735bdcd5_Tx 59u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte1_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_399cd346_Tx 60u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte2_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_e6d5c3f3_Tx 61u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte3_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_ac12cc60_Tx 62u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte4_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_8336e4d8_Tx 63u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte5_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_c9f1eb4b_Tx 64u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte6_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_16b8fbfe_Tx 65u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte7_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_5c7ff46d_Tx 66u
#define ComConf_ComGroupSignal_VCU_ADASOverride_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_0c002a43_Tx 148u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_c8f21b10_Tx 149u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8298a57a_Tx 150u
#define ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_365d9f08_Tx 96u
#define ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0900e699_Tx 109u
#define ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_f84e7cef_Tx 97u
#define ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_c713057e_Tx 110u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c1c6ace2_Tx 122u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_fe9bd573_Tx 135u
#define ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_adcf3745_Tx 212u
#define ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_92924ed4_Tx 223u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9ec34af1_Tx 123u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_a19e3360_Tx 136u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_cab9d256_Tx 124u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f5e4abc7_Tx 137u
#define ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_55d19f8e_Tx 67u
#define ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_6a8ce61f_Tx 72u
#define ComConf_ComGroupSignal_VCU_BS_HCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_6f1b1ed0_Tx 197u
#define ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_34765b89_Tx 68u
#define ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0b2b2218_Tx 73u
#define ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_0d3265cb_Tx 69u
#define ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_326f1c5a_Tx 74u
#define ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_41d6d523_Tx 70u
#define ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_7e8bacb2_Tx 75u
#define ComConf_ComGroupSignal_VCU_BS_QuiescentCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_2f6b45d6_Tx 198u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateStatus_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_aada4313_Tx 77u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8427f667_Tx 151u
#define ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f285ec19_Tx 213u
#define ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_cdd89588_Tx 224u
#define ComConf_ComGroupSignal_VCU_ChargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_86604033_Tx 242u
#define ComConf_ComGroupSignal_VCU_ChargeEnergy_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aa509ad7_Tx 88u
#define ComConf_ComGroupSignal_VCU_ChargeProcessComment_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_b076f405_Tx 78u
#define ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_17f7901d_Tx 125u
#define ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_28aae98c_Tx 138u
#define ComConf_ComGroupSignal_VCU_ChargeTime_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_b03563a4_Tx 89u
#define ComConf_ComGroupSignal_VCU_CreepTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7425dee6_Tx 232u
#define ComConf_ComGroupSignal_VCU_CriSysFailure_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_13fa69e3_Tx 167u
#define ComConf_ComGroupSignal_VCU_DCDCFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_8211651e_Tx 168u
#define ComConf_ComGroupSignal_VCU_DCDCPowerLimit_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_90ed45f3_Tx 161u
#define ComConf_ComGroupSignal_VCU_DCFCCurrent_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_54508868_Tx 79u
#define ComConf_ComGroupSignal_VCU_DTC_Number_oVCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_bf444eeb_Tx 164u
#define ComConf_ComGroupSignal_VCU_DecelerationReq_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22f1bc0a_Tx 152u
#define ComConf_ComGroupSignal_VCU_DecelerationReqactive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_29147867_Tx 153u
#define ComConf_ComGroupSignal_VCU_DisChgPowerLimit_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aae83d58_Tx 90u
#define ComConf_ComGroupSignal_VCU_DischargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_a9c41ef6_Tx 243u
#define ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_a47f7a1f_Tx 181u
#define ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_9b22038e_Tx 190u
#define ComConf_ComGroupSignal_VCU_DisplayMileage_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_1f4b707e_Tx 91u
#define ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_629aba80_Tx 182u
#define ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5dc7c311_Tx 191u
#define ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_1364d55f_Tx 183u
#define ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_2c39acce_Tx 192u
#define ComConf_ComGroupSignal_VCU_Display_voltage_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_1f4e8320_Tx 199u
#define ComConf_ComGroupSignal_VCU_DriveMotOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_2b850699_Tx 169u
#define ComConf_ComGroupSignal_VCU_DriverTorqueRequest_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f98385dc_Tx 154u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8a817be7_Tx 126u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_b5dc0276_Tx 139u
#define ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4a2bfea4_Tx 98u
#define ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_75768735_Tx 111u
#define ComConf_ComGroupSignal_VCU_EnableOBC_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_316adab0_Tx 237u
#define ComConf_ComGroupSignal_VCU_Enable_DC_Relay_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_187d15ec_Tx 238u
#define ComConf_ComGroupSignal_VCU_EnergyManagementWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_4b7de956_Tx 155u
#define ComConf_ComGroupSignal_VCU_EnergyV2L_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_5ef6f2f0_Tx 80u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_631e19bb_Tx 184u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5c43602a_Tx 193u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxlimitStatus_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_beba9b73_Tx 82u
#define ComConf_ComGroupSignal_VCU_HVBatCriFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_05faf04f_Tx 170u
#define ComConf_ComGroupSignal_VCU_HVBatOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1ab841cc_Tx 171u
#define ComConf_ComGroupSignal_VCU_HVConnectFault_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_ad3614da_Tx 244u
#define ComConf_ComGroupSignal_VCU_HVILError_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f1e2e871_Tx 172u
#define ComConf_ComGroupSignal_VCU_HVInsulResFault_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_e6836204_Tx 173u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_aebb67ba_Tx 127u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_91e61e2b_Tx 140u
#define ComConf_ComGroupSignal_VCU_InvldGearSel_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_773f11d0_Tx 174u
#define ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d7a76412_Tx 128u
#define ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_e8fa1d83_Tx 141u
#define ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_2306d930_Tx 214u
#define ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_1c5ba0a1_Tx 225u
#define ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_17d4134b_Tx 99u
#define ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_28896ada_Tx 112u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_944086eb_Tx 129u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_ab1dff7a_Tx 142u
#define ComConf_ComGroupSignal_VCU_LimpHome_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_664ff33a_Tx 175u
#define ComConf_ComGroupSignal_VCU_MCUActHeatPwr_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_420c1833_Tx 207u
#define ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a07350bb_Tx 215u
#define ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_9f2e292a_Tx 226u
#define ComConf_ComGroupSignal_VCU_MCUPower_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_5ed6e72f_Tx 92u
#define ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4b3e55ae_Tx 216u
#define ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_74632c3f_Tx 227u
#define ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b94ce354_Tx 185u
#define ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_86119ac5_Tx 194u
#define ComConf_ComGroupSignal_VCU_ManuallyUnlockComment_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_3223f100_Tx 83u
#define ComConf_ComGroupSignal_VCU_MaxSpdLimit_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_1d67c298_Tx 208u
#define ComConf_ComGroupSignal_VCU_MaxTorqueGradient_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_2927c5de_Tx 233u
#define ComConf_ComGroupSignal_VCU_MaxTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_3a034e45_Tx 234u
#define ComConf_ComGroupSignal_VCU_MaximumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_fe0b8d7d_Tx 84u
#define ComConf_ComGroupSignal_VCU_MaximumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_9c0bf641_Tx 85u
#define ComConf_ComGroupSignal_VCU_MemoryChargeFault_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_cb765ea4_Tx 81u
#define ComConf_ComGroupSignal_VCU_MileagelowRemind_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1b14b376_Tx 176u
#define ComConf_ComGroupSignal_VCU_MinTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d434a6d2_Tx 235u
#define ComConf_ComGroupSignal_VCU_MinimumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6eda15dd_Tx 86u
#define ComConf_ComGroupSignal_VCU_MinimumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_0cda6ee1_Tx 87u
#define ComConf_ComGroupSignal_VCU_MotorActualTorqueValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_2709c7ef_Tx 202u
#define ComConf_ComGroupSignal_VCU_MotorActualTorque_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_90c1c989_Tx 203u
#define ComConf_ComGroupSignal_VCU_MotorSpdReq_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c5c80260_Tx 209u
#define ComConf_ComGroupSignal_VCU_OBC_ChargeCurrentCommand_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_afae32a2_Tx 239u
#define ComConf_ComGroupSignal_VCU_OBC_Control_of_S2_SW_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_2bbcc657_Tx 240u
#define ComConf_ComGroupSignal_VCU_OBC_Control_of_em_lock_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_476ced65_Tx 241u
#define ComConf_ComGroupSignal_VCU_OPStandstillReq_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_af773c24_Tx 204u
#define ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4725a26e_Tx 217u
#define ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_7878dbff_Tx 228u
#define ComConf_ComGroupSignal_VCU_PermitPackPTC_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_8f94a915_Tx 93u
#define ComConf_ComGroupSignal_VCU_PlugStatus_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_250fa71e_Tx 177u
#define ComConf_ComGroupSignal_VCU_ReachLimitStd_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_5cd2e319_Tx 178u
#define ComConf_ComGroupSignal_VCU_RegStatus_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_6d4e3983_Tx 156u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_b28083e9_Tx 130u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_8dddfa78_Tx 143u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9537c5ed_Tx 131u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_aa6abc7c_Tx 144u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCapValid_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_5eaff4d8_Tx 157u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCap_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_a5a4bebf_Tx 158u
#define ComConf_ComGroupSignal_VCU_RemainChrgTime_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_deed3006_Tx 245u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_a3197c92_Tx 132u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_9c440503_Tx 145u
#define ComConf_ComGroupSignal_VCU_RequestedModeDCDC_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c910d2b3_Tx 162u
#define ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_97cf52ed_Tx 218u
#define ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a8922b7c_Tx 229u
#define ComConf_ComGroupSignal_VCU_RequestedModeTCU_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_ea14d901_Tx 247u
#define ComConf_ComGroupSignal_VCU_SpdLimitActTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6de9d8ce_Tx 236u
#define ComConf_ComGroupSignal_VCU_SynRequest_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_c64837e4_Tx 246u
#define ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_3baa5f6f_Tx 186u
#define ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_04f726fe_Tx 195u
#define ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f7e15433_Tx 219u
#define ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_c8bc2da2_Tx 230u
#define ComConf_ComGroupSignal_VCU_TCUPowerAllowed_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_0cf367b9_Tx 248u
#define ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d928d8b4_Tx 100u
#define ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e675a125_Tx 113u
#define ComConf_ComGroupSignal_VCU_TorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_24abcc5b_Tx 159u
#define ComConf_ComGroupSignal_VCU_TorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22997d3f_Tx 160u
#define ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_86f61526_Tx 220u
#define ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_b9ab6cb7_Tx 231u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_a1329f5d_Tx 101u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_9e6fe6cc_Tx 114u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d00cfa4f_Tx 102u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_ef5183de_Tx 115u
#define ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_70135d30_Tx 103u
#define ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_4f4e24a1_Tx 116u
#define ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_da00c229_Tx 104u
#define ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e55dbbb8_Tx 117u
#define ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4b161096_Tx 105u
#define ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_744b6907_Tx 118u
#define ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_03ae7390_Tx 106u
#define ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_3cf30a01_Tx 119u
#define ComConf_ComGroupSignal_VCU_VoltageDemandLV_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_9951a04f_Tx 163u
#define ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_091aaa11_Tx 71u
#define ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3647d380_Tx 76u
#define ComConf_ComGroupSignal_VCU_WheelTrqACTValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_0e2031fb_Tx 205u
#define ComConf_ComGroupSignal_VCU_WheelTrqACT_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_722027bb_Tx 206u
#define ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b7e91aff_Tx 187u
#define ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_88b4636e_Tx 196u
#define ComConf_ComSignal_AN0_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_66f10a00_Tx 0u
#define ComConf_ComSignal_AN1_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_42735b36_Tx 1u
#define ComConf_ComSignal_AN2_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_2ff5a86c_Tx 2u
#define ComConf_ComSignal_AN3_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0b77f95a_Tx 3u
#define ComConf_ComSignal_AN4_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_1baaf839_Tx 4u
#define ComConf_ComSignal_AN5_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_3f28a90f_Tx 5u
#define ComConf_ComSignal_AN6_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_52ae5a55_Tx 6u
#define ComConf_ComSignal_AN7_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_762c0b63_Tx 7u
#define ComConf_ComSignal_AN8_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_8ebae131_Tx 8u
#define ComConf_ComSignal_AN9_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_aa38b007_Tx 9u
#define ComConf_ComSignal_AN10_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_f71f00b1_Tx 10u
#define ComConf_ComSignal_AN11_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_d39d5187_Tx 11u
#define ComConf_ComSignal_AN12_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_5149143c_Tx 12u
#define ComConf_ComSignal_AN13_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_75cb450a_Tx 13u
#define ComConf_ComSignal_AN14_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_8a44f288_Tx 14u
#define ComConf_ComSignal_AN15_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_aec6a3be_Tx 15u
#define ComConf_ComSignal_AN16_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_156a4b45_Tx 16u
#define ComConf_ComSignal_AN17_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_31e81a73_Tx 17u
#define ComConf_ComSignal_AN18_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_31042200_Tx 18u
#define ComConf_ComSignal_AN19_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_15867336_Tx 19u
#define ComConf_ComSignal_AN20_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_aae62509_Tx 20u
#define ComConf_ComSignal_AN21_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_8e64743f_Tx 21u
#define ComConf_ComSignal_AN22_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_e3e28765_Tx 22u
#define ComConf_ComSignal_AN23_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_c760d653_Tx 23u
#define ComConf_ComSignal_AN24_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_c095b3f0_Tx 24u
#define ComConf_ComSignal_AN25_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_e417e2c6_Tx 25u
#define ComConf_ComSignal_AN26_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_8991119c_Tx 26u
#define ComConf_ComSignal_AN27_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_ad1340aa_Tx 27u
#define ComConf_ComSignal_AN28_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_42adce38_Tx 28u
#define ComConf_ComSignal_AN29_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_662f9f0e_Tx 29u
#define ComConf_ComSignal_AN30_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_72505601_Tx 30u
#define ComConf_ComSignal_AN31_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_56d20737_Tx 31u
#define ComConf_ComSignal_AN32_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_543dc9cc_Tx 32u
#define ComConf_ComSignal_AN33_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_70bf98fa_Tx 33u
#define ComConf_ComSignal_AN34_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_8f302f78_Tx 34u
#define ComConf_ComSignal_AN35_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_abb27e4e_Tx 35u
#define ComConf_ComSignal_AN36_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_29663bf5_Tx 36u
#define ComConf_ComSignal_AN37_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_0de46ac3_Tx 37u
#define ComConf_ComSignal_AN38_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_0d0852b0_Tx 38u
#define ComConf_ComSignal_AN39_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_298a0386_Tx 39u
#define ComConf_ComSignal_AN40_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_1ba46d98_Tx 40u
#define ComConf_ComSignal_AN41_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_3f263cae_Tx 41u
#define ComConf_ComSignal_AN42_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_52a0cff4_Tx 42u
#define ComConf_ComSignal_AN43_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_76229ec2_Tx 43u
#define ComConf_ComSignal_AN44_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_66ff9fa1_Tx 44u
#define ComConf_ComSignal_AN45_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_427dce97_Tx 45u
#define ComConf_ComSignal_AN46_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_2ffb3dcd_Tx 46u
#define ComConf_ComSignal_AN47_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_0b796cfb_Tx 47u
#define ComConf_ComSignal_Calibration_cmd_oVCU_SVA_CMD_oLIN00_6732180a_Tx 48u
#define ComConf_ComSignal_ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx 49u
#define ComConf_ComSignal_ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx 50u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Init_Rq_oEDCU_EXV2_oLIN00_0144aec9_Tx 51u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Move_Enbl_oEDCU_EXV2_oLIN00_d6797517_Tx 52u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx 53u
#define ComConf_ComSignal_EXT_PWM_IN1_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_92760a96_Tx 54u
#define ComConf_ComSignal_EXT_PWM_IN1_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_c46a50e4_Tx 55u
#define ComConf_ComSignal_EXT_PWM_IN2_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_5b42119b_Tx 56u
#define ComConf_ComSignal_EXT_PWM_IN2_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_fba12e71_Tx 57u
#define ComConf_ComSignal_Ext_IN2_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_a925e19e_Tx 58u
#define ComConf_ComSignal_TCU_HVCHMaxPowerLimit_oTCU_HVCH_Cmd_oLIN00_4bc53e0b_Tx 249u
#define ComConf_ComSignal_TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_Tx 250u
#define ComConf_ComSignal_TCU_HVCH_TmaxLim_output_oTCU_HVCH_Cmd_oLIN00_5e45d521_Tx 251u
#define ComConf_ComSignal_TCU_HVCH_heating_rq_oTCU_HVCH_Cmd_oLIN00_5e3a32b2_Tx 252u
#define ComConf_ComSignal_TMM_EXV1_EnableRequest_oVCU_EXV_1_oLIN00_d988d266_Tx 253u
#define ComConf_ComSignal_TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx 254u
#define ComConf_ComSignal_TMM_EXV1_initRequest_oVCU_EXV_1_oLIN00_082350ea_Tx 255u
#define ComConf_ComSignal_TMM_EXV2_EnableRequest_oVCU_EXV_2_oLIN00_0c106490_Tx 256u
#define ComConf_ComSignal_TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx 257u
#define ComConf_ComSignal_TMM_EXV2_initRequest_oVCU_EXV_2_oLIN00_95846e7a_Tx 258u
#define ComConf_ComSignal_Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx 259u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig0_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_1782ee05_Tx 260u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig1_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_3300bf33_Tx 261u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig2_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_5e864c69_Tx 262u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig3_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_7a041d5f_Tx 263u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig0_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_2e9f2f9c_Tx 264u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig1_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_0a1d7eaa_Tx 265u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig2_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_679b8df0_Tx 266u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig3_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_4319dcc6_Tx 267u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig0_oVcuCan12TxMsg1_oATOM_CAN_XCP_777aa5f3_Tx 268u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig1_oVcuCan12TxMsg1_oATOM_CAN_XCP_799d4d22_Tx 269u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig2_oVcuCan12TxMsg1_oATOM_CAN_XCP_6ab57451_Tx 270u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig3_oVcuCan12TxMsg1_oATOM_CAN_XCP_64529c80_Tx 271u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig0_oVcu_Lin0_TxMsg1_oLIN01_0005f3c6_Tx 272u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig1_oVcu_Lin0_TxMsg1_oLIN01_a58e63c8_Tx 273u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig2_oVcu_Lin0_TxMsg1_oLIN01_9063d59b_Tx 274u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig3_oVcu_Lin0_TxMsg1_oLIN01_35e84595_Tx 275u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig0_oVcu_Lin0_TxMsg2_oLIN01_ca2bd13d_Tx 276u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig1_oVcu_Lin0_TxMsg2_oLIN01_6fa04133_Tx 277u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig2_oVcu_Lin0_TxMsg2_oLIN01_5a4df760_Tx 278u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig3_oVcu_Lin0_TxMsg2_oLIN01_ffc6676e_Tx 279u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig0_oVcu_Lin3_TxMsg1_oLIN02_d210f765_Tx 280u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig1_oVcu_Lin3_TxMsg1_oLIN02_779b676b_Tx 281u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig2_oVcu_Lin3_TxMsg1_oLIN02_4276d138_Tx 282u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig3_oVcu_Lin3_TxMsg1_oLIN02_e7fd4136_Tx 283u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig0_oVcu_Lin3_TxMsg2_oLIN02_183ed59e_Tx 284u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig1_oVcu_Lin3_TxMsg2_oLIN02_bdb54590_Tx 285u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig2_oVcu_Lin3_TxMsg2_oLIN02_8858f3c3_Tx 286u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig3_oVcu_Lin3_TxMsg2_oLIN02_2dd363cd_Tx 287u
/**\} */




/**
 * \defgroup ComHandleIdscomRxSigGrp Handle IDs of handle space comRxSigGrp.
 * \brief Rx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx 0u
#define ComConf_ComSignalGroup_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx 1u
#define ComConf_ComSignalGroup_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx 2u
#define ComConf_ComSignalGroup_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx 3u
#define ComConf_ComSignalGroup_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx 4u
#define ComConf_ComSignalGroup_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx 5u
#define ComConf_ComSignalGroup_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx 6u
#define ComConf_ComSignalGroup_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx 7u
#define ComConf_ComSignalGroup_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx 8u
#define ComConf_ComSignalGroup_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx 9u
#define ComConf_ComSignalGroup_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx 10u
#define ComConf_ComSignalGroup_SG_BCM_11_SigGroup_oBCM_11_oATOM_CAN_Matrix_PT_V600_20250211_59b7aa06_Rx 11u
#define ComConf_ComSignalGroup_SG_BCM_Authentication_SigGroup_oBCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_e24c50d2_Rx 12u
#define ComConf_ComSignalGroup_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx 13u
#define ComConf_ComSignalGroup_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx 14u
#define ComConf_ComSignalGroup_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx 15u
#define ComConf_ComSignalGroup_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx 16u
#define ComConf_ComSignalGroup_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx 17u
#define ComConf_ComSignalGroup_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx 18u
#define ComConf_ComSignalGroup_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx 19u
#define ComConf_ComSignalGroup_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx 20u
#define ComConf_ComSignalGroup_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx 21u
#define ComConf_ComSignalGroup_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx 22u
#define ComConf_ComSignalGroup_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx 23u
#define ComConf_ComSignalGroup_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx 24u
#define ComConf_ComSignalGroup_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx 25u
#define ComConf_ComSignalGroup_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx 26u
#define ComConf_ComSignalGroup_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx 27u
#define ComConf_ComSignalGroup_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx 28u
#define ComConf_ComSignalGroup_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx 29u
#define ComConf_ComSignalGroup_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx 30u
#define ComConf_ComSignalGroup_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx 31u
#define ComConf_ComSignalGroup_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx 32u
#define ComConf_ComSignalGroup_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx 33u
#define ComConf_ComSignalGroup_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx 34u
#define ComConf_ComSignalGroup_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx 35u
#define ComConf_ComSignalGroup_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx 36u
#define ComConf_ComSignalGroup_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx 37u
#define ComConf_ComSignalGroup_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx 38u
#define ComConf_ComSignalGroup_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx 39u
#define ComConf_ComSignalGroup_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx 40u
#define ComConf_ComSignalGroup_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx 41u
#define ComConf_ComSignalGroup_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx 42u
#define ComConf_ComSignalGroup_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx 43u
#define ComConf_ComSignalGroup_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx 44u
#define ComConf_ComSignalGroup_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx 45u
#define ComConf_ComSignalGroup_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx 46u
#define ComConf_ComSignalGroup_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx 47u
#define ComConf_ComSignalGroup_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx 48u
#define ComConf_ComSignalGroup_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx 49u
#define ComConf_ComSignalGroup_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx 50u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx 51u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx 52u
#define ComConf_ComSignalGroup_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx 53u
#define ComConf_ComSignalGroup_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx 54u
#define ComConf_ComSignalGroup_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx 55u
#define ComConf_ComSignalGroup_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx 56u
#define ComConf_ComSignalGroup_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx 57u
#define ComConf_ComSignalGroup_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx 58u
#define ComConf_ComSignalGroup_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx 59u
#define ComConf_ComSignalGroup_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx 60u
#define ComConf_ComSignalGroup_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx 61u
#define ComConf_ComSignalGroup_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx 62u
#define ComConf_ComSignalGroup_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx 63u
#define ComConf_ComSignalGroup_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx 64u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx 65u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx 66u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx 67u
#define ComConf_ComSignalGroup_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx 68u
#define ComConf_ComSignalGroup_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx 69u
#define ComConf_ComSignalGroup_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx 70u
#define ComConf_ComSignalGroup_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx 71u
#define ComConf_ComSignalGroup_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx 72u
#define ComConf_ComSignalGroup_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx 73u
#define ComConf_ComSignalGroup_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx 74u
#define ComConf_ComSignalGroup_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx 75u
#define ComConf_ComSignalGroup_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx 76u
#define ComConf_ComSignalGroup_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx 77u
#define ComConf_ComSignalGroup_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx 78u
#define ComConf_ComSignalGroup_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx 79u
#define ComConf_ComSignalGroup_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx 80u
#define ComConf_ComSignalGroup_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx 81u
#define ComConf_ComSignalGroup_SG_Uds_EPT_Boot_Request_SigGroup_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_1855e222_Rx 82u
/**\} */

/**
 * \defgroup ComHandleIdscomTxSigGrp Handle IDs of handle space comTxSigGrp.
 * \brief Tx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_Uds_EPT_Boot_Response_SigGroup_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_37dd7ff6_Tx 0u
#define ComConf_ComSignalGroup_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx 1u
#define ComConf_ComSignalGroup_SG_VCU_02_SigGroup_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_109f7195_Tx 2u
#define ComConf_ComSignalGroup_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx 3u
#define ComConf_ComSignalGroup_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx 4u
#define ComConf_ComSignalGroup_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx 5u
#define ComConf_ComSignalGroup_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx 6u
#define ComConf_ComSignalGroup_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx 7u
#define ComConf_ComSignalGroup_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_950dd51c_Tx 8u
#define ComConf_ComSignalGroup_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx 9u
#define ComConf_ComSignalGroup_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_ed2292a1_Tx 10u
#define ComConf_ComSignalGroup_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx 11u
#define ComConf_ComSignalGroup_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx 12u
#define ComConf_ComSignalGroup_SG_VCU_DiagInfor_SigGroup_oVCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_f76d1342_Tx 13u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx 14u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx 15u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_86577563_Tx 16u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx 17u
#define ComConf_ComSignalGroup_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx 18u
#define ComConf_ComSignalGroup_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx 19u
#define ComConf_ComSignalGroup_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx 20u
#define ComConf_ComSignalGroup_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_ff58040a_Tx 21u
#define ComConf_ComSignalGroup_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx 22u
#define ComConf_ComSignalGroup_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx 23u
#define ComConf_ComSignalGroup_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx 24u
#define ComConf_ComSignalGroup_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx 25u
#define ComConf_ComSignalGroup_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx 26u
/**\} */




/**
 * \defgroup ComHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPduGroup_VCU_oATOM_CANFD_Matrix_CH_V600_202502_Rx_5e4659c4 0u
#define ComConf_ComIPduGroup_VCU_oATOM_CANFD_Matrix_CH_V600_202502_Tx_081cfe42 1u
#define ComConf_ComIPduGroup_VCU_oATOM_CAN_Matrix_PT_V600_20250211_Rx_49b064ca 2u
#define ComConf_ComIPduGroup_VCU_oATOM_CAN_Matrix_PT_V600_20250211_Tx_1feac34c 3u
#define ComConf_ComIPduGroup_VCU_oATOM_CAN_XCP_Tx_ec11bff5            4u
#define ComConf_ComIPduGroup_VCU_oLIN00_Rx_4b9dfc53                   5u
#define ComConf_ComIPduGroup_VCU_oLIN00_Tx_1dc75bd5                   6u
#define ComConf_ComIPduGroup_VCU_oLIN01_Rx_f3219b36                   7u
#define ComConf_ComIPduGroup_VCU_oLIN01_Tx_a57b3cb0                   8u
#define ComConf_ComIPduGroup_VCU_oLIN02_Rx_e19434d8                   9u
#define ComConf_ComIPduGroup_VCU_oLIN02_Tx_b7ce935e                   10u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c         11u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda         12u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Rx_b23e03d7         13u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Tx_e464a451         14u
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#endif  /* COM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cfg.h
**********************************************************************************************************************/

