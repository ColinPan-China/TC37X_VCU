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
 *   Generation Time: 2025-09-25 11:17:43
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
#define COM_TRANSPORT_PROTOCOL               STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTransportProtocol] */

#define COM_TRIGGER_TRANSMIT_API             STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTriggertransmit] */
#define COM_TX_CONFIRMATION_API              STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSignalGateway] || /ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] */
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT   3U
#define COM_SUPPORTED_IPDU_GROUPS            17uL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

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
#define ComConf_ComGroupSignal_Checksum_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_efb220b2_Rx 409u
#define ComConf_ComGroupSignal_Checksum_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_65c4b71d_Rx 419u
#define ComConf_ComGroupSignal_Checksum_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ad2c5ce1_Rx 323u
#define ComConf_ComGroupSignal_Checksum_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a2ce7b09_Rx 330u
#define ComConf_ComGroupSignal_Checksum_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_47252d94_Rx 348u
#define ComConf_ComGroupSignal_Checksum_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7cf1e80a_Rx 314u
#define ComConf_ComGroupSignal_Checksum_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ea42d99c_Rx 302u
#define ComConf_ComGroupSignal_Checksum_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_c0d26283_Rx 394u
#define ComConf_ComGroupSignal_Checksum_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_77cd2b4a_Rx 364u
#define ComConf_ComGroupSignal_Checksum_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_d02c6941_Rx 369u
#define ComConf_ComGroupSignal_Checksum_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e0933738_Rx 374u
#define ComConf_ComGroupSignal_Checksum_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2a2c563b_Rx 218u
#define ComConf_ComGroupSignal_Checksum_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_31389c92_Rx 92u
#define ComConf_ComGroupSignal_Checksum_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_3047b966_Rx 103u
#define ComConf_ComGroupSignal_Checksum_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_19b3517b_Rx 115u
#define ComConf_ComGroupSignal_Checksum_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_6e918845_Rx 119u
#define ComConf_ComGroupSignal_Checksum_0F0_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1363b82a_Rx 289u
#define ComConf_ComGroupSignal_Checksum_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_21944b83_Rx 62u
#define ComConf_ComGroupSignal_Checksum_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_63736e97_Rx 68u
#define ComConf_ComGroupSignal_Checksum_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_77cc8260_Rx 430u
#define ComConf_ComGroupSignal_Checksum_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_cce2105d_Rx 272u
#define ComConf_ComGroupSignal_Checksum_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_240d647b_Rx 137u
#define ComConf_ComGroupSignal_Checksum_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_b5095e35_Rx 403u
#define ComConf_ComGroupSignal_Checksum_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_591da21b_Rx 87u
#define ComConf_ComGroupSignal_Checksum_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3d12a66a_Rx 436u
#define ComConf_ComGroupSignal_Checksum_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2169404d_Rx 488u
#define ComConf_ComGroupSignal_Checksum_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_81801456_Rx 448u
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
#define ComConf_ComGroupSignal_EPS_ModeChangeEnable_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_151dc1e3_Rx 290u
#define ComConf_ComGroupSignal_EPS_ModeFb_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_e801e79c_Rx 291u
#define ComConf_ComGroupSignal_EPS_SteeringGearAngleSpdValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_d84ac20b_Rx 292u
#define ComConf_ComGroupSignal_EPS_SteeringGearAngleSpd_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1b144f24_Rx 293u
#define ComConf_ComGroupSignal_EPS_SteeringGearAngleValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_70279b88_Rx 294u
#define ComConf_ComGroupSignal_EPS_SteeringGearAngle_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_afb680bd_Rx 295u
#define ComConf_ComGroupSignal_EPS_TorsionBarTorqueValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_70e0d0fb_Rx 296u
#define ComConf_ComGroupSignal_EPS_TorsionBarTorque_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_28eeb08e_Rx 297u
#define ComConf_ComGroupSignal_EPS_WarningLamp_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1f264a37_Rx 298u
#define ComConf_ComGroupSignal_EVCOM_CompActlCnsmpCur_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_a627e94c_Rx 300u
#define ComConf_ComGroupSignal_EVCOM_CompActlPwrCnsmp_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_d741f4fb_Rx 301u
#define ComConf_ComGroupSignal_IBS_ABPActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_9a3de825_Rx 349u
#define ComConf_ComGroupSignal_IBS_ABPAvailable_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_7eb6cd8c_Rx 350u
#define ComConf_ComGroupSignal_IBS_ABSActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_bc82dc5c_Rx 351u
#define ComConf_ComGroupSignal_IBS_ABSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1bd8c058_Rx 352u
#define ComConf_ComGroupSignal_IBS_AEBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_27fddc4e_Rx 331u
#define ComConf_ComGroupSignal_IBS_AEBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_586c329d_Rx 332u
#define ComConf_ComGroupSignal_IBS_APSComfortAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_761e7ded_Rx 315u
#define ComConf_ComGroupSignal_IBS_APSCrlReqEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7e0dcab4_Rx 316u
#define ComConf_ComGroupSignal_IBS_APSEmergenyAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_98e19592_Rx 317u
#define ComConf_ComGroupSignal_IBS_APSModeEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b13c14e1_Rx 318u
#define ComConf_ComGroupSignal_IBS_APSTrqReqActive_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_95892cb5_Rx 319u
#define ComConf_ComGroupSignal_IBS_APS_Avl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_912b9c67_Rx 320u
#define ComConf_ComGroupSignal_IBS_AVHAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_e9505f9e_Rx 333u
#define ComConf_ComGroupSignal_IBS_AVHSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e3018ac7_Rx 375u
#define ComConf_ComGroupSignal_IBS_AWBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_47745887_Rx 334u
#define ComConf_ComGroupSignal_IBS_AWBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_0d99f9f9_Rx 335u
#define ComConf_ComGroupSignal_IBS_BrakeFluidWarning_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cf3bf9da_Rx 376u
#define ComConf_ComGroupSignal_IBS_BrakeLightRequest_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a14297cf_Rx 336u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatusValid_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ba3a564c_Rx 324u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatus_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_c14952d9_Rx 325u
#define ComConf_ComGroupSignal_IBS_BrakePushrodStroke_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b9911368_Rx 326u
#define ComConf_ComGroupSignal_IBS_BrakeTypEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_efa1b54d_Rx 321u
#define ComConf_ComGroupSignal_IBS_CDPActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_5f0477e0_Rx 365u
#define ComConf_ComGroupSignal_IBS_CDPAvailable_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_551f17a8_Rx 366u
#define ComConf_ComGroupSignal_IBS_CddActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_cd634808_Rx 303u
#define ComConf_ComGroupSignal_IBS_CddAvailable_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_694f6a44_Rx 304u
#define ComConf_ComGroupSignal_IBS_CddError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_15ba1189_Rx 305u
#define ComConf_ComGroupSignal_IBS_DTCActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_05637011_Rx 367u
#define ComConf_ComGroupSignal_IBS_DTCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_632f33ac_Rx 353u
#define ComConf_ComGroupSignal_IBS_EBDActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1e24a445_Rx 354u
#define ComConf_ComGroupSignal_IBS_EBDFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_dad1ab7b_Rx 355u
#define ComConf_ComGroupSignal_IBS_EPBControllerSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_65ed44e8_Rx 337u
#define ComConf_ComGroupSignal_IBS_EPBFailureLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_94ade1a4_Rx 338u
#define ComConf_ComGroupSignal_IBS_EPBFailureStatus_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_2591769d_Rx 377u
#define ComConf_ComGroupSignal_IBS_EPBFunctionLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_947116d4_Rx 339u
#define ComConf_ComGroupSignal_IBS_EPBTextdisplay_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_e8354645_Rx 356u
#define ComConf_ComGroupSignal_IBS_EPBworkingSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_fc06f35e_Rx 340u
#define ComConf_ComGroupSignal_IBS_ESCOffSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_a7e250e7_Rx 378u
#define ComConf_ComGroupSignal_IBS_ESClampdisplay_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cffaf18c_Rx 379u
#define ComConf_ComGroupSignal_IBS_FLMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_0e538d73_Rx 410u
#define ComConf_ComGroupSignal_IBS_FLWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_9718fa24_Rx 411u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_19d76bef_Rx 412u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_d228a055_Rx 413u
#define ComConf_ComGroupSignal_IBS_FRMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_be7c8b57_Rx 414u
#define ComConf_ComGroupSignal_IBS_FRWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_8f930e98_Rx 415u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_2564a038_Rx 416u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_7a94cc9a_Rx 417u
#define ComConf_ComGroupSignal_IBS_FactoryMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_1f4b8984_Rx 380u
#define ComConf_ComGroupSignal_IBS_HBAActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3e0fd61_Rx 381u
#define ComConf_ComGroupSignal_IBS_HDCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_deb691a6_Rx 341u
#define ComConf_ComGroupSignal_IBS_HDCSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d0313153_Rx 382u
#define ComConf_ComGroupSignal_IBS_HHCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_f453be85_Rx 342u
#define ComConf_ComGroupSignal_IBS_HHCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a333cc25_Rx 343u
#define ComConf_ComGroupSignal_IBS_HazWarnReq_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b191eb63_Rx 344u
#define ComConf_ComGroupSignal_IBS_MaintenaceMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e1932fbc_Rx 383u
#define ComConf_ComGroupSignal_IBS_MasterCylinderPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b339468a_Rx 327u
#define ComConf_ComGroupSignal_IBS_PlungerPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_1a29f19b_Rx 328u
#define ComConf_ComGroupSignal_IBS_RBSStatus_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dc8e16c0_Rx 395u
#define ComConf_ComGroupSignal_IBS_RLMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_ad5dc1f0_Rx 420u
#define ComConf_ComGroupSignal_IBS_RLWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_296e9e60_Rx 421u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_82f6f2de_Rx 422u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_5459dc3a_Rx 423u
#define ComConf_ComGroupSignal_IBS_RRMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_1d72c7d4_Rx 424u
#define ComConf_ComGroupSignal_IBS_RRWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_31e56adc_Rx 425u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_be453909_Rx 426u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_fce5b0f5_Rx 427u
#define ComConf_ComGroupSignal_IBS_RWUActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_353ab732_Rx 384u
#define ComConf_ComGroupSignal_IBS_RWUAvailable_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_55a4e82d_Rx 385u
#define ComConf_ComGroupSignal_IBS_RollerbenchMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7e2deccc_Rx 386u
#define ComConf_ComGroupSignal_IBS_SUBEPBControllerSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_4db2fa5a_Rx 370u
#define ComConf_ComGroupSignal_IBS_SUBEPBFailureStatus_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_85549b8d_Rx 371u
#define ComConf_ComGroupSignal_IBS_SUBEPBworkingSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_6b861b0d_Rx 372u
#define ComConf_ComGroupSignal_IBS_SystemStatus_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_306130d0_Rx 357u
#define ComConf_ComGroupSignal_IBS_TCSActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a64ac2d8_Rx 345u
#define ComConf_ComGroupSignal_IBS_TCSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2d90687a_Rx 358u
#define ComConf_ComGroupSignal_IBS_TPMS_ResetSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ee7e0532_Rx 387u
#define ComConf_ComGroupSignal_IBS_TargetGearReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_35085f4b_Rx 396u
#define ComConf_ComGroupSignal_IBS_TireMonSysSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_91ee3722_Rx 388u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7fea0ce4_Rx 389u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_dbb01a62_Rx 390u
#define ComConf_ComGroupSignal_IBS_TireWarnReLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_6e5db930_Rx 391u
#define ComConf_ComGroupSignal_IBS_TireWarnReRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ca07afb6_Rx 392u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationReqActive_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5138c66a_Rx 397u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationRequest_Available_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_227d55b1_Rx 359u
#define ComConf_ComGroupSignal_IBS_VDCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_7ab0d9f3_Rx 346u
#define ComConf_ComGroupSignal_IBS_VDCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_01868c54_Rx 360u
#define ComConf_ComGroupSignal_IBS_VehicleSpeedValid_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_317a0a26_Rx 361u
#define ComConf_ComGroupSignal_IBS_VehicleSpeed_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_5ce10c83_Rx 362u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_Valid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_8e482947_Rx 306u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5c3fb2c_Rx 307u
#define ComConf_ComGroupSignal_IBS_VlcActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_3fa05f6d_Rx 308u
#define ComConf_ComGroupSignal_IBS_VlcAvalible_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_5ec40897_Rx 309u
#define ComConf_ComGroupSignal_IBS_VlcError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_b4ad3ada_Rx 310u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_406d9ee6_Rx 398u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_1036d2a9_Rx 399u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_f80f3ab5_Rx 404u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_6e9d7a41_Rx 405u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_0144d4d4_Rx 400u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dae1e9b7_Rx 401u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_2655e1fb_Rx 406u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_79bc7664_Rx 407u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReqValid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_d640a38d_Rx 311u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReq_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5232329_Rx 312u
#define ComConf_ComGroupSignal_IVI_AppointChargeCmd_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8c65f5f8_Rx 507u
#define ComConf_ComGroupSignal_IVI_BrakeCompensateCmd_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_49b5a1e8_Rx 505u
#define ComConf_ComGroupSignal_IVI_BulbCheckSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_ac8ee3d9_Rx 431u
#define ComConf_ComGroupSignal_IVI_CRLevelSet_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_8543222f_Rx 506u
#define ComConf_ComGroupSignal_IVI_DriveModeSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e3273eed_Rx 518u
#define ComConf_ComGroupSignal_IVI_DschrgOnOffSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_21f6b725_Rx 519u
#define ComConf_ComGroupSignal_IVI_ForwardVmaxAllowed_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_13b9eae3_Rx 520u
#define ComConf_ComGroupSignal_IVI_ForwardVmaxlimitSw_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8d0f6899_Rx 508u
#define ComConf_ComGroupSignal_IVI_GearRequest_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_3ae0554e_Rx 429u
#define ComConf_ComGroupSignal_IVI_LV_LimitPop_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_1112ab7d_Rx 509u
#define ComConf_ComGroupSignal_IVI_LockACPlug_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_01b87dfd_Rx 510u
#define ComConf_ComGroupSignal_IVI_MaxChrgSocSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_99c3e2a8_Rx 521u
#define ComConf_ComGroupSignal_IVI_OdometerInfor_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_e6e371ee_Rx 435u
#define ComConf_ComGroupSignal_IVI_SFIDippedBeamSet_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_23dcee29_Rx 432u
#define ComConf_ComGroupSignal_IVI_SFIabnormalSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_fd225a73_Rx 433u
#define ComConf_ComGroupSignal_IVI_V2LidisSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_25a8a73a_Rx 522u
#define ComConf_ComGroupSignal_IVI_VrState_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_518f75b6_Rx 500u
#define ComConf_ComGroupSignal_MCU_ActTrqValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_ac2cd648_Rx 437u
#define ComConf_ComGroupSignal_MCU_ActualSpeedValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_cc3b4560_Rx 438u
#define ComConf_ComGroupSignal_MCU_ActualSpeed_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_528eb860_Rx 439u
#define ComConf_ComGroupSignal_MCU_ActualTorque_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_6a6087a3_Rx 440u
#define ComConf_ComGroupSignal_MCU_BDmpCActv_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c0586eb8_Rx 444u
#define ComConf_ComGroupSignal_MCU_FaultLevel_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf7f5830_Rx 449u
#define ComConf_ComGroupSignal_MCU_IGBTTempMax_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_2c994d0d_Rx 451u
#define ComConf_ComGroupSignal_MCU_IsCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3f405105_Rx 441u
#define ComConf_ComGroupSignal_MCU_TempStatus_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_ccf76e7e_Rx 452u
#define ComConf_ComGroupSignal_MCU_TrqAbsMax_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_e9a1ec48_Rx 446u
#define ComConf_ComGroupSignal_MCU_TrqAbsMin_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_84a8e353_Rx 447u
#define ComConf_ComGroupSignal_MCU_UdcCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_c9f788aa_Rx 442u
#define ComConf_ComGroupSignal_MCU_VCUWorkMode_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2a117a8b_Rx 445u
#define ComConf_ComGroupSignal_MessageCounter_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_895d6141_Rx 418u
#define ComConf_ComGroupSignal_MessageCounter_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_032bf6ee_Rx 428u
#define ComConf_ComGroupSignal_MessageCounter_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_7bc88e71_Rx 329u
#define ComConf_ComGroupSignal_MessageCounter_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_742aa999_Rx 347u
#define ComConf_ComGroupSignal_MessageCounter_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_91c1ff04_Rx 363u
#define ComConf_ComGroupSignal_MessageCounter_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b68b4db2_Rx 322u
#define ComConf_ComGroupSignal_MessageCounter_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_20387c24_Rx 313u
#define ComConf_ComGroupSignal_MessageCounter_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_683f1d6f_Rx 402u
#define ComConf_ComGroupSignal_MessageCounter_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_a129f9da_Rx 368u
#define ComConf_ComGroupSignal_MessageCounter_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_06c8bbd1_Rx 373u
#define ComConf_ComGroupSignal_MessageCounter_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_3677e5a8_Rx 393u
#define ComConf_ComGroupSignal_MessageCounter_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_fcc884ab_Rx 219u
#define ComConf_ComGroupSignal_MessageCounter_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_982cdfbe_Rx 93u
#define ComConf_ComGroupSignal_MessageCounter_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_9953fa4a_Rx 104u
#define ComConf_ComGroupSignal_MessageCounter_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b0a71257_Rx 116u
#define ComConf_ComGroupSignal_MessageCounter_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_a4eb2dfd_Rx 120u
#define ComConf_ComGroupSignal_MessageCounter_0F0_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_d613f931_Rx 299u
#define ComConf_ComGroupSignal_MessageCounter_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_e1f37972_Rx 63u
#define ComConf_ComGroupSignal_MessageCounter_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_a3145c66_Rx 69u
#define ComConf_ComGroupSignal_MessageCounter_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_b7abb091_Rx 434u
#define ComConf_ComGroupSignal_MessageCounter_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_4642a9f0_Rx 283u
#define ComConf_ComGroupSignal_MessageCounter_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_e46a568a_Rx 138u
#define ComConf_ComGroupSignal_MessageCounter_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_db5c1277_Rx 408u
#define ComConf_ComGroupSignal_MessageCounter_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c6de300_Rx 88u
#define ComConf_ComGroupSignal_MessageCounter_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_fd75949b_Rx 443u
#define ComConf_ComGroupSignal_MessageCounter_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_7249f622_Rx 489u
#define ComConf_ComGroupSignal_MessageCounter_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_981cfb50_Rx 450u
#define ComConf_ComGroupSignal_MessageCounter_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_8423cb57_Rx 141u
#define ComConf_ComGroupSignal_MessageCounter_278_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_19d7a3d0_Rx 230u
#define ComConf_ComGroupSignal_POD_DCDC_FaultLevel_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_eefe3afb_Rx 456u
#define ComConf_ComGroupSignal_POD_DCDC_HVInputCurrent_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_135e2f35_Rx 453u
#define ComConf_ComGroupSignal_POD_DCDC_HVInputVoltage_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_9c7a540a_Rx 454u
#define ComConf_ComGroupSignal_POD_DCDC_Side2Overtempfault_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_52f42506_Rx 457u
#define ComConf_ComGroupSignal_POD_DCDC_WorkMode_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_444a4f6b_Rx 455u
#define ComConf_ComGroupSignal_POD_DCFCVoltage_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_b89acdd0_Rx 482u
#define ComConf_ComGroupSignal_POD_DCInletTempA_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3fbc48fa_Rx 483u
#define ComConf_ComGroupSignal_POD_DCInletTempB_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_689e64a8_Rx 484u
#define ComConf_ComGroupSignal_POD_DCPortInletTempAValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_bbc9cc4c_Rx 485u
#define ComConf_ComGroupSignal_POD_DCPortInletTempBValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_ddcd197c_Rx 486u
#define ComConf_ComGroupSignal_POD_DCPosRelayState_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_6f150a52_Rx 487u
#define ComConf_ComGroupSignal_POD_OBC_CCCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_19f9b4da_Rx 458u
#define ComConf_ComGroupSignal_POD_OBC_CCStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_6df4ee5e_Rx 459u
#define ComConf_ComGroupSignal_POD_OBC_CPCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_53d381d9_Rx 460u
#define ComConf_ComGroupSignal_POD_OBC_CPDuty_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_602b732e_Rx 461u
#define ComConf_ComGroupSignal_POD_OBC_CPStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d6c8ee40_Rx 462u
#define ComConf_ComGroupSignal_POD_OBC_ChargCapacibility_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_1bd7c0f0_Rx 463u
#define ComConf_ComGroupSignal_POD_OBC_ChrgOutpPwrAvl_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_a1981126_Rx 468u
#define ComConf_ComGroupSignal_POD_OBC_EMLockState_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4eb1f977_Rx 464u
#define ComConf_ComGroupSignal_POD_OBC_FaultLevel_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_dfddb20c_Rx 471u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6a93fe10_Rx 476u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6b3657a6_Rx 477u
#define ComConf_ComGroupSignal_POD_OBC_InputACCurrent_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6f4e0ba4_Rx 478u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_779a5b73_Rx 479u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_763ff2c5_Rx 480u
#define ComConf_ComGroupSignal_POD_OBC_InputACVoltage_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_7247aec7_Rx 481u
#define ComConf_ComGroupSignal_POD_OBC_OBCMaxPermOutpCrrt_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_27da1158_Rx 465u
#define ComConf_ComGroupSignal_POD_OBC_OutputDCChargeCurrent_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_9a885370_Rx 469u
#define ComConf_ComGroupSignal_POD_OBC_OutputDCChargeVoltage_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_249f5302_Rx 470u
#define ComConf_ComGroupSignal_POD_OBC_PrimarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_315b5171_Rx 472u
#define ComConf_ComGroupSignal_POD_OBC_S2State_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d46756d3_Rx 466u
#define ComConf_ComGroupSignal_POD_OBC_SecondarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6ad0dc35_Rx 473u
#define ComConf_ComGroupSignal_POD_OBC_Side1Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_180c8c7c_Rx 474u
#define ComConf_ComGroupSignal_POD_OBC_Side2Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_54bfa6d5_Rx 475u
#define ComConf_ComGroupSignal_POD_OBC_WorkMode_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_206572d6_Rx 467u
#define ComConf_ComGroupSignal_PRND_Pbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_748786ed_Rx 490u
#define ComConf_ComGroupSignal_PRND_Pbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2bc3bb96_Rx 491u
#define ComConf_ComGroupSignal_PRND_RNDbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_fe92ca7a_Rx 492u
#define ComConf_ComGroupSignal_PRND_RNDbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_400cef5e_Rx 493u
#define ComConf_ComGroupSignal_SGW_AppointChargeCmd_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_cf3a83f6_Rx 494u
#define ComConf_ComGroupSignal_SGW_BLESystemReadyReq_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_359ce2fd_Rx 501u
#define ComConf_ComGroupSignal_SGW_ChargeFormSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3f92bd57_Rx 495u
#define ComConf_ComGroupSignal_SGW_DschrgOnOffSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_a0a977dd_Rx 496u
#define ComConf_ComGroupSignal_SGW_LockACPlug_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_5ade64ae_Rx 497u
#define ComConf_ComGroupSignal_SGW_RemoteHVCtrlReq_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_17e2f736_Rx 499u
#define ComConf_ComGroupSignal_SGW_ResetCounter_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_61156e06_Rx 502u
#define ComConf_ComGroupSignal_SGW_SynMsgAuthenticator_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_b2115b74_Rx 503u
#define ComConf_ComGroupSignal_SGW_TimeInfoDay_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_880a47df_Rx 511u
#define ComConf_ComGroupSignal_SGW_TimeInfoHour_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_bc8cc791_Rx 512u
#define ComConf_ComGroupSignal_SGW_TimeInfoMinute_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_107045bf_Rx 513u
#define ComConf_ComGroupSignal_SGW_TimeInfoMonth_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0acdad62_Rx 514u
#define ComConf_ComGroupSignal_SGW_TimeInfoSecond_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_ed2116e5_Rx 515u
#define ComConf_ComGroupSignal_SGW_TimeInfoYear_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_76136356_Rx 516u
#define ComConf_ComGroupSignal_SGW_TimeValid_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_4cd83a01_Rx 517u
#define ComConf_ComGroupSignal_SGW_TimingChargeSwitchStatus_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_83e61a6c_Rx 498u
#define ComConf_ComGroupSignal_SGW_TripCounter_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1cad6227_Rx 504u
#define ComConf_ComGroupSignal_TCU_HVCHHVDCCurrent_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_400bea9a_Rx 527u
#define ComConf_ComGroupSignal_TCU_HVCHHighVoltage_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3d196c75_Rx 528u
#define ComConf_ComGroupSignal_TCU_HVPwrState_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_8d7d29e0_Rx 523u
#define ComConf_ComGroupSignal_TCU_TMSFaultLevel_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_0e521934_Rx 524u
#define ComConf_ComGroupSignal_TCU_TMSTotalPwrCnsmp_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_9dde2d90_Rx 525u
#define ComConf_ComGroupSignal_TCU_TMSTotoalPwrReq_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_247c22c3_Rx 526u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd1_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_c9ab8207_Rx 529u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd2_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e054f4ab_Rx 530u
#define ComConf_ComGroupSignal_UDS_EPT_BootCmd3_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_f8fe26cf_Rx 531u
#define ComConf_ComGroupSignal_checksum_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_70f1cf66_Rx 142u
#define ComConf_ComSignal_Bts7xx_HS1_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_d0692a3c_Rx 0u
#define ComConf_ComSignal_Bts7xx_HS2_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_b48951c2_Rx 1u
#define ComConf_ComSignal_Bts7xx_HS3_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_21f98557_Rx 2u
#define ComConf_ComSignal_Bts7xx_HS4_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7d49a63e_Rx 3u
#define ComConf_ComSignal_CCS_ChargeAllow_oCCS_oJ1939_bms_6e5c3e79_Rx 4u
#define ComConf_ComSignal_CCS_ChargeTotalTime_oCCS_oJ1939_bms_5a07d8d4_Rx 5u
#define ComConf_ComSignal_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx 6u
#define ComConf_ComSignal_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx 7u
#define ComConf_ComSignal_CEM_BMSAbortChargeTimeout_oCEM_oJ1939_bms_771a7a1d_Rx 8u
#define ComConf_ComSignal_CEM_BMSChargeStatisticsTimeout_oCEM_oJ1939_bms_27ba4eca_Rx 9u
#define ComConf_ComSignal_CEM_BMSFinishChargeTimeout_oCEM_oJ1939_bms_aa496944_Rx 10u
#define ComConf_ComSignal_CEM_BMSIdentifyTimout_oCEM_oJ1939_bms_706c9dcc_Rx 11u
#define ComConf_ComSignal_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx 12u
#define ComConf_ComSignal_CEM_BatteryParameterTimout_oCEM_oJ1939_bms_33936785_Rx 13u
#define ComConf_ComSignal_CEM_BatteryStateTimeout_oCEM_oJ1939_bms_80c5ba18_Rx 14u
#define ComConf_ComSignal_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx 15u
#define ComConf_ComSignal_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx 16u
#define ComConf_ComSignal_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx 17u
#define ComConf_ComSignal_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx 18u
#define ComConf_ComSignal_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx 19u
#define ComConf_ComSignal_CRM_ChargerNo_oCRM_oJ1939_bms_cb02983d_Rx   20u
#define ComConf_ComSignal_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx 21u
#define ComConf_ComSignal_CRM_RegionCode_oCRM_oJ1939_bms_9e586b48_Rx  22u
#define ComConf_ComSignal_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx 23u
#define ComConf_ComSignal_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx   24u
#define ComConf_ComSignal_CSD_OutputEnerge_oCSD_oJ1939_bms_a401c579_Rx 25u
#define ComConf_ComSignal_CSD_TotalChargeTime_oCSD_oJ1939_bms_8b5a26e6_Rx 26u
#define ComConf_ComSignal_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx 27u
#define ComConf_ComSignal_CST_AbortByFault_oCST_oJ1939_bms_b1363f74_Rx 28u
#define ComConf_ComSignal_CST_AbortByUser_oCST_oJ1939_bms_219d547e_Rx 29u
#define ComConf_ComSignal_CST_AbortErrorCurrent_oCST_oJ1939_bms_bc9de709_Rx 30u
#define ComConf_ComSignal_CST_AbortErrorVoltage_oCST_oJ1939_bms_85b04b7b_Rx 31u
#define ComConf_ComSignal_CST_AbortFaultChargerInnerTemp_oCST_oJ1939_bms_a7051850_Rx 32u
#define ComConf_ComSignal_CST_AbortFaultChargerStop_oCST_oJ1939_bms_646490b0_Rx 33u
#define ComConf_ComSignal_CST_AbortFaultChargerTemp_oCST_oJ1939_bms_4454e6f2_Rx 34u
#define ComConf_ComSignal_CST_AbortFaultConnetor_oCST_oJ1939_bms_7094d7c5_Rx 35u
#define ComConf_ComSignal_CST_AbortFaultEnergeTransmit_oCST_oJ1939_bms_ae35b84d_Rx 36u
#define ComConf_ComSignal_CST_AbortFaultOther_oCST_oJ1939_bms_ede9c3de_Rx 37u
#define ComConf_ComSignal_CTS_Day_oCTS_oJ1939_bms_61895197_Rx         38u
#define ComConf_ComSignal_CTS_Hour_oCTS_oJ1939_bms_bb4defa0_Rx        39u
#define ComConf_ComSignal_CTS_Minute_oCTS_oJ1939_bms_36fd7e73_Rx      40u
#define ComConf_ComSignal_CTS_Month_oCTS_oJ1939_bms_470f01c4_Rx       41u
#define ComConf_ComSignal_CTS_Second_oCTS_oJ1939_bms_00353178_Rx      42u
#define ComConf_ComSignal_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx        43u
#define ComConf_ComSignal_ChargeCurrWU_Sts_oBS_02_oATOM_HWLIN1_5ac67b1d_Rx 44u
#define ComConf_ComSignal_ChargeCurrWU_oBS_02_oATOM_HWLIN1_84c8148b_Rx 45u
#define ComConf_ComSignal_DisChargeCurrWU_Sts_oBS_02_oATOM_HWLIN1_d1e440ee_Rx 46u
#define ComConf_ComSignal_DisChargeCurrWU_oBS_02_oATOM_HWLIN1_d4baa700_Rx 47u
#define ComConf_ComSignal_ERROR_Commom_oBS_01_oATOM_HWLIN1_94eab3a9_Rx 48u
#define ComConf_ComSignal_ERROR_IDENT_oBS_01_oATOM_HWLIN1_f4699c53_Rx 49u
#define ComConf_ComSignal_FLAG_INCONSISTENCY_oBS_01_oATOM_HWLIN1_5a2071a0_Rx 50u
#define ComConf_ComSignal_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx 51u
#define ComConf_ComSignal_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx  52u
#define ComConf_ComSignal_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx  53u
#define ComConf_ComSignal_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx 54u
#define ComConf_ComSignal_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx      55u
#define ComConf_ComSignal_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx     56u
#define ComConf_ComSignal_Q_Charge_oBS_03_oATOM_HWLIN1_5e5eb9db_Rx    57u
#define ComConf_ComSignal_Q_Discharge_oBS_03_oATOM_HWLIN1_8afa47b2_Rx 58u
#define ComConf_ComSignal_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx  59u
#define ComConf_ComSignal_SOCWU_Sts_oBS_02_oATOM_HWLIN1_34996d38_Rx   532u
#define ComConf_ComSignal_SOCWU_oBS_02_oATOM_HWLIN1_995046e5_Rx       533u
#define ComConf_ComSignal_SOC_STATE_oBS_02_oATOM_HWLIN1_ce124c20_Rx   534u
#define ComConf_ComSignal_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx         535u
#define ComConf_ComSignal_SOF_Q_STATE_oBS_02_oATOM_HWLIN1_cda5600b_Rx 536u
#define ComConf_ComSignal_SOF_Q_oBS_02_oATOM_HWLIN1_a9c52f19_Rx       537u
#define ComConf_ComSignal_SOF_V1_STATE_oBS_02_oATOM_HWLIN1_58d9c973_Rx 538u
#define ComConf_ComSignal_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx      539u
#define ComConf_ComSignal_SOF_V2_STATE_oBS_02_oATOM_HWLIN1_eb4de4b0_Rx 540u
#define ComConf_ComSignal_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx      541u
#define ComConf_ComSignal_SOF_t_STATE_oBS_02_oATOM_HWLIN1_7e8146a5_Rx 542u
#define ComConf_ComSignal_SOH_STATE_oBS_02_oATOM_HWLIN1_bf04b769_Rx   543u
#define ComConf_ComSignal_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx         544u
#define ComConf_ComSignal_Status_Current_oBS_01_oATOM_HWLIN1_1bec493d_Rx 545u
#define ComConf_ComSignal_Status_Temp_oBS_01_oATOM_HWLIN1_67ac0b7e_Rx 546u
#define ComConf_ComSignal_Status_Voltage_oBS_01_oATOM_HWLIN1_759757c9_Rx 547u
#define ComConf_ComSignal_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx      548u
#define ComConf_ComSignal_Tle888qk_Lout1_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_0e3571fa_Rx 549u
#define ComConf_ComSignal_Tle888qk_Lout8_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_ebe51441_Rx 550u
#define ComConf_ComSignal_Tle888qk_Lout14_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_a11e1e88_Rx 551u
#define ComConf_ComSignal_Tle888qk_Lout16_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_508eb1e3_Rx 552u
#define ComConf_ComSignal_Tle888qk_Out21BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_f4735e02_Rx 553u
#define ComConf_ComSignal_Tle888qk_Out21_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_fce8b2a9_Rx 554u
#define ComConf_ComSignal_Tle888qk_Out22BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_27e842f9_Rx 555u
#define ComConf_ComSignal_Tle888qk_Out22_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_9808c957_Rx 556u
#define ComConf_ComSignal_Tle888qk_Out23BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_69614950_Rx 557u
#define ComConf_ComSignal_Tle888qk_Out23_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_0d781dc2_Rx 558u
#define ComConf_ComSignal_Tle888qk_Out24BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_5baf7d4e_Rx 559u
#define ComConf_ComSignal_Tle888qk_Out24_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_51c83eab_Rx 560u
#define ComConf_ComSignal_Tle4252d_en_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_24c739a8_Rx 561u
#define ComConf_ComSignal_Tle9201_Dir_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_4c38edaa_Rx 562u
#define ComConf_ComSignal_Tle9201_Dis_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7aca7d59_Rx 563u
#define ComConf_ComSignal_Tle9201_Pwm_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_bf73fa17_Rx 564u
#define ComConf_ComSignal_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx      565u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx 566u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx 567u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx 568u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx 569u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx 570u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx 571u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx 572u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx 573u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oATOM_HWLIN4_a49b5868_Rx 574u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oATOM_HWLIN4_aa7cb0b9_Rx 575u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oATOM_HWLIN4_bc1a064d_Rx 576u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oATOM_HWLIN4_b2fdee9c_Rx 577u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oATOM_HWLIN4_ddb4f234_Rx 578u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oATOM_HWLIN4_a1d5d7ef_Rx 579u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oATOM_HWLIN4_d3531ae5_Rx 580u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oATOM_HWLIN4_af323f3e_Rx 581u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg1_Sig0_oVcu_Lin3_RxMsg1_oATOM_HWLIN3_88d55425_Rx 582u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg1_Sig1_oVcu_Lin3_RxMsg1_oATOM_HWLIN3_8632bcf4_Rx 583u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig0_oVcu_Lin3_RxMsg2_oATOM_HWLIN3_90540a00_Rx 584u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig1_oVcu_Lin3_RxMsg2_oATOM_HWLIN3_9eb3e2d1_Rx 585u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig2_oVcu_Lin3_RxMsg1_oATOM_HWLIN3_f1fafe79_Rx 586u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig2_oVcu_Lin3_RxMsg2_oATOM_HWLIN3_8d9bdba2_Rx 587u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig3_oVcu_Lin3_RxMsg1_oATOM_HWLIN3_ff1d16a8_Rx 588u
#define ComConf_ComSignal_Vcu_Lin3_RxMsg2_Sig3_oVcu_Lin3_RxMsg2_oATOM_HWLIN3_837c3373_Rx 589u
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c848143c_Tx 733u
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f7156dad_Tx 746u
#define ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_51727e14_Tx 707u
#define ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_6e2f0785_Tx 720u
#define ComConf_ComGroupSignal_Checksum_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_090e4c9b_Tx 759u
#define ComConf_ComGroupSignal_Checksum_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_28a707e9_Tx 813u
#define ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_004b6de5_Tx 823u
#define ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_3f161474_Tx 834u
#define ComConf_ComGroupSignal_Checksum_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_7e8714d3_Tx 778u
#define ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_fc013b78_Tx 792u
#define ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_c35c42e9_Tx 801u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_0232b184_Tx 734u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_3d6fc815_Tx 747u
#define ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_630306b4_Tx 708u
#define ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_5c5e7f25_Tx 721u
#define ComConf_ComGroupSignal_MessageCounter_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f9d73b0d_Tx 760u
#define ComConf_ComGroupSignal_MessageCounter_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_804a7805_Tx 814u
#define ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a8a61209_Tx 824u
#define ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_97fb6b98_Tx 835u
#define ComConf_ComGroupSignal_MessageCounter_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_18685520_Tx 779u
#define ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_9aee7a8b_Tx 793u
#define ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_a5b3031a_Tx 802u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte0_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_735bdcd5_Tx 672u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte1_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_399cd346_Tx 673u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte2_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_e6d5c3f3_Tx 674u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte3_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_ac12cc60_Tx 675u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte4_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_8336e4d8_Tx 676u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte5_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_c9f1eb4b_Tx 677u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte6_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_16b8fbfe_Tx 678u
#define ComConf_ComGroupSignal_Uds_EPT_bootResponse_Byte7_oUds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_5c7ff46d_Tx 679u
#define ComConf_ComGroupSignal_VCU_ADASOverride_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_0c002a43_Tx 761u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_c8f21b10_Tx 762u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8298a57a_Tx 763u
#define ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_365d9f08_Tx 709u
#define ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0900e699_Tx 722u
#define ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_f84e7cef_Tx 710u
#define ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_c713057e_Tx 723u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c1c6ace2_Tx 735u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_fe9bd573_Tx 748u
#define ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_adcf3745_Tx 825u
#define ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_92924ed4_Tx 836u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9ec34af1_Tx 736u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_a19e3360_Tx 749u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_cab9d256_Tx 737u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f5e4abc7_Tx 750u
#define ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_55d19f8e_Tx 680u
#define ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_6a8ce61f_Tx 685u
#define ComConf_ComGroupSignal_VCU_BS_HCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_6f1b1ed0_Tx 810u
#define ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_34765b89_Tx 681u
#define ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0b2b2218_Tx 686u
#define ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_0d3265cb_Tx 682u
#define ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_326f1c5a_Tx 687u
#define ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_41d6d523_Tx 683u
#define ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_7e8bacb2_Tx 688u
#define ComConf_ComGroupSignal_VCU_BS_QuiescentCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_2f6b45d6_Tx 811u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateStatus_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_aada4313_Tx 690u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8427f667_Tx 764u
#define ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f285ec19_Tx 826u
#define ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_cdd89588_Tx 837u
#define ComConf_ComGroupSignal_VCU_ChargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_86604033_Tx 855u
#define ComConf_ComGroupSignal_VCU_ChargeEnergy_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aa509ad7_Tx 701u
#define ComConf_ComGroupSignal_VCU_ChargeProcessComment_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_b076f405_Tx 691u
#define ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_17f7901d_Tx 738u
#define ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_28aae98c_Tx 751u
#define ComConf_ComGroupSignal_VCU_ChargeTime_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_b03563a4_Tx 702u
#define ComConf_ComGroupSignal_VCU_CreepTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7425dee6_Tx 845u
#define ComConf_ComGroupSignal_VCU_CriSysFailure_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_13fa69e3_Tx 780u
#define ComConf_ComGroupSignal_VCU_DCDCFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_8211651e_Tx 781u
#define ComConf_ComGroupSignal_VCU_DCDCPowerLimit_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_90ed45f3_Tx 774u
#define ComConf_ComGroupSignal_VCU_DCFCCurrent_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_54508868_Tx 692u
#define ComConf_ComGroupSignal_VCU_DTC_Number_oVCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_bf444eeb_Tx 777u
#define ComConf_ComGroupSignal_VCU_DecelerationReq_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22f1bc0a_Tx 765u
#define ComConf_ComGroupSignal_VCU_DecelerationReqactive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_29147867_Tx 766u
#define ComConf_ComGroupSignal_VCU_DisChgPowerLimit_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aae83d58_Tx 703u
#define ComConf_ComGroupSignal_VCU_DischargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_a9c41ef6_Tx 856u
#define ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_a47f7a1f_Tx 794u
#define ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_9b22038e_Tx 803u
#define ComConf_ComGroupSignal_VCU_DisplayMileage_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_1f4b707e_Tx 704u
#define ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_629aba80_Tx 795u
#define ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5dc7c311_Tx 804u
#define ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_1364d55f_Tx 796u
#define ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_2c39acce_Tx 805u
#define ComConf_ComGroupSignal_VCU_Display_voltage_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_1f4e8320_Tx 812u
#define ComConf_ComGroupSignal_VCU_DriveMotOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_2b850699_Tx 782u
#define ComConf_ComGroupSignal_VCU_DriverTorqueRequest_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f98385dc_Tx 767u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8a817be7_Tx 739u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_b5dc0276_Tx 752u
#define ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4a2bfea4_Tx 711u
#define ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_75768735_Tx 724u
#define ComConf_ComGroupSignal_VCU_EnableOBC_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_316adab0_Tx 850u
#define ComConf_ComGroupSignal_VCU_Enable_DC_Relay_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_187d15ec_Tx 851u
#define ComConf_ComGroupSignal_VCU_EnergyManagementWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_4b7de956_Tx 768u
#define ComConf_ComGroupSignal_VCU_EnergyV2L_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_5ef6f2f0_Tx 693u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_631e19bb_Tx 797u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5c43602a_Tx 806u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxlimitStatus_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_beba9b73_Tx 695u
#define ComConf_ComGroupSignal_VCU_HVBatCriFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_05faf04f_Tx 783u
#define ComConf_ComGroupSignal_VCU_HVBatOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1ab841cc_Tx 784u
#define ComConf_ComGroupSignal_VCU_HVConnectFault_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_ad3614da_Tx 857u
#define ComConf_ComGroupSignal_VCU_HVILError_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f1e2e871_Tx 785u
#define ComConf_ComGroupSignal_VCU_HVInsulResFault_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_e6836204_Tx 786u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_aebb67ba_Tx 740u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_91e61e2b_Tx 753u
#define ComConf_ComGroupSignal_VCU_InvldGearSel_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_773f11d0_Tx 787u
#define ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d7a76412_Tx 741u
#define ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_e8fa1d83_Tx 754u
#define ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_2306d930_Tx 827u
#define ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_1c5ba0a1_Tx 838u
#define ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_17d4134b_Tx 712u
#define ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_28896ada_Tx 725u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_944086eb_Tx 742u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_ab1dff7a_Tx 755u
#define ComConf_ComGroupSignal_VCU_LimpHome_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_664ff33a_Tx 788u
#define ComConf_ComGroupSignal_VCU_MCUActHeatPwr_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_420c1833_Tx 820u
#define ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a07350bb_Tx 828u
#define ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_9f2e292a_Tx 839u
#define ComConf_ComGroupSignal_VCU_MCUPower_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_5ed6e72f_Tx 705u
#define ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4b3e55ae_Tx 829u
#define ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_74632c3f_Tx 840u
#define ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b94ce354_Tx 798u
#define ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_86119ac5_Tx 807u
#define ComConf_ComGroupSignal_VCU_ManuallyUnlockComment_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_3223f100_Tx 696u
#define ComConf_ComGroupSignal_VCU_MaxSpdLimit_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_1d67c298_Tx 821u
#define ComConf_ComGroupSignal_VCU_MaxTorqueGradient_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_2927c5de_Tx 846u
#define ComConf_ComGroupSignal_VCU_MaxTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_3a034e45_Tx 847u
#define ComConf_ComGroupSignal_VCU_MaximumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_fe0b8d7d_Tx 697u
#define ComConf_ComGroupSignal_VCU_MaximumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_9c0bf641_Tx 698u
#define ComConf_ComGroupSignal_VCU_MemoryChargeFault_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_cb765ea4_Tx 694u
#define ComConf_ComGroupSignal_VCU_MileagelowRemind_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1b14b376_Tx 789u
#define ComConf_ComGroupSignal_VCU_MinTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d434a6d2_Tx 848u
#define ComConf_ComGroupSignal_VCU_MinimumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6eda15dd_Tx 699u
#define ComConf_ComGroupSignal_VCU_MinimumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_0cda6ee1_Tx 700u
#define ComConf_ComGroupSignal_VCU_MotorActualTorqueValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_2709c7ef_Tx 815u
#define ComConf_ComGroupSignal_VCU_MotorActualTorque_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_90c1c989_Tx 816u
#define ComConf_ComGroupSignal_VCU_MotorSpdReq_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c5c80260_Tx 822u
#define ComConf_ComGroupSignal_VCU_OBC_ChargeCurrentCommand_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_afae32a2_Tx 852u
#define ComConf_ComGroupSignal_VCU_OBC_Control_of_S2_SW_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_2bbcc657_Tx 853u
#define ComConf_ComGroupSignal_VCU_OBC_Control_of_em_lock_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_476ced65_Tx 854u
#define ComConf_ComGroupSignal_VCU_OPStandstillReq_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_af773c24_Tx 817u
#define ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4725a26e_Tx 830u
#define ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_7878dbff_Tx 841u
#define ComConf_ComGroupSignal_VCU_PermitPackPTC_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_8f94a915_Tx 706u
#define ComConf_ComGroupSignal_VCU_PlugStatus_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_250fa71e_Tx 790u
#define ComConf_ComGroupSignal_VCU_ReachLimitStd_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_5cd2e319_Tx 791u
#define ComConf_ComGroupSignal_VCU_RegStatus_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_6d4e3983_Tx 769u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_b28083e9_Tx 743u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_8dddfa78_Tx 756u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9537c5ed_Tx 744u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_aa6abc7c_Tx 757u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCapValid_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_5eaff4d8_Tx 770u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCap_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_a5a4bebf_Tx 771u
#define ComConf_ComGroupSignal_VCU_RemainChrgTime_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_deed3006_Tx 858u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_a3197c92_Tx 745u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_9c440503_Tx 758u
#define ComConf_ComGroupSignal_VCU_RequestedModeDCDC_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c910d2b3_Tx 775u
#define ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_97cf52ed_Tx 831u
#define ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a8922b7c_Tx 842u
#define ComConf_ComGroupSignal_VCU_RequestedModeTCU_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_ea14d901_Tx 860u
#define ComConf_ComGroupSignal_VCU_SpdLimitActTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6de9d8ce_Tx 849u
#define ComConf_ComGroupSignal_VCU_SynRequest_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_c64837e4_Tx 859u
#define ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_3baa5f6f_Tx 799u
#define ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_04f726fe_Tx 808u
#define ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f7e15433_Tx 832u
#define ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_c8bc2da2_Tx 843u
#define ComConf_ComGroupSignal_VCU_TCUPowerAllowed_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_0cf367b9_Tx 861u
#define ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d928d8b4_Tx 713u
#define ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e675a125_Tx 726u
#define ComConf_ComGroupSignal_VCU_TorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_24abcc5b_Tx 772u
#define ComConf_ComGroupSignal_VCU_TorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22997d3f_Tx 773u
#define ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_86f61526_Tx 833u
#define ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_b9ab6cb7_Tx 844u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_a1329f5d_Tx 714u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_9e6fe6cc_Tx 727u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d00cfa4f_Tx 715u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_ef5183de_Tx 728u
#define ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_70135d30_Tx 716u
#define ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_4f4e24a1_Tx 729u
#define ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_da00c229_Tx 717u
#define ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e55dbbb8_Tx 730u
#define ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4b161096_Tx 718u
#define ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_744b6907_Tx 731u
#define ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_03ae7390_Tx 719u
#define ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_3cf30a01_Tx 732u
#define ComConf_ComGroupSignal_VCU_VoltageDemandLV_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_9951a04f_Tx 776u
#define ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_091aaa11_Tx 684u
#define ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3647d380_Tx 689u
#define ComConf_ComGroupSignal_VCU_WheelTrqACTValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_0e2031fb_Tx 818u
#define ComConf_ComGroupSignal_VCU_WheelTrqACT_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_722027bb_Tx 819u
#define ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b7e91aff_Tx 800u
#define ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_88b4636e_Tx 809u
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
#define ComConf_ComSignal_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx  48u
#define ComConf_ComSignal_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx 49u
#define ComConf_ComSignal_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx 50u
#define ComConf_ComSignal_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx 51u
#define ComConf_ComSignal_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx 52u
#define ComConf_ComSignal_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx 53u
#define ComConf_ComSignal_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx 54u
#define ComConf_ComSignal_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx 55u
#define ComConf_ComSignal_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx 56u
#define ComConf_ComSignal_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx         57u
#define ComConf_ComSignal_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx 58u
#define ComConf_ComSignal_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx 59u
#define ComConf_ComSignal_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx 60u
#define ComConf_ComSignal_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx 61u
#define ComConf_ComSignal_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx 62u
#define ComConf_ComSignal_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx         63u
#define ComConf_ComSignal_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx 64u
#define ComConf_ComSignal_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx 65u
#define ComConf_ComSignal_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx 66u
#define ComConf_ComSignal_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx 67u
#define ComConf_ComSignal_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx 68u
#define ComConf_ComSignal_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx 69u
#define ComConf_ComSignal_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx 70u
#define ComConf_ComSignal_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx 71u
#define ComConf_ComSignal_BMT_BatteryTemp0_oBMT_oJ1939_bms_e14d3c62_Tx 72u
#define ComConf_ComSignal_BMT_BatteryTemp1_oBMT_oJ1939_bms_66ebf721_Tx 73u
#define ComConf_ComSignal_BMT_BatteryTemp2_oBMT_oJ1939_bms_3571aca5_Tx 74u
#define ComConf_ComSignal_BMT_BatteryTemp3_oBMT_oJ1939_bms_b2d767e6_Tx 75u
#define ComConf_ComSignal_BMT_BatteryTemp4_oBMT_oJ1939_bms_92451bad_Tx 76u
#define ComConf_ComSignal_BMT_BatteryTemp5_oBMT_oJ1939_bms_15e3d0ee_Tx 77u
#define ComConf_ComSignal_BMT_BatteryTemp6_oBMT_oJ1939_bms_46798b6a_Tx 78u
#define ComConf_ComSignal_BMT_BatteryTemp7_oBMT_oJ1939_bms_c1df4029_Tx 79u
#define ComConf_ComSignal_BMT_BatteryTemp8_oBMT_oJ1939_bms_075d73fc_Tx 80u
#define ComConf_ComSignal_BMT_BatteryTemp9_oBMT_oJ1939_bms_80fbb8bf_Tx 81u
#define ComConf_ComSignal_BMT_BatteryTemp10_oBMT_oJ1939_bms_9de986ac_Tx 82u
#define ComConf_ComSignal_BMT_BatteryTemp11_oBMT_oJ1939_bms_1a4f4def_Tx 83u
#define ComConf_ComSignal_BMT_BatteryTemp12_oBMT_oJ1939_bms_49d5166b_Tx 84u
#define ComConf_ComSignal_BMT_BatteryTemp13_oBMT_oJ1939_bms_ce73dd28_Tx 85u
#define ComConf_ComSignal_BMT_BatteryTemp14_oBMT_oJ1939_bms_eee1a163_Tx 86u
#define ComConf_ComSignal_BMT_BatteryTemp15_oBMT_oJ1939_bms_69476a20_Tx 87u
#define ComConf_ComSignal_BMV_BatteryGroupID0_oBMV_oJ1939_bms_e1f5fa30_Tx 88u
#define ComConf_ComSignal_BMV_BatteryGroupID1_oBMV_oJ1939_bms_66533173_Tx 89u
#define ComConf_ComSignal_BMV_BatteryGroupID2_oBMV_oJ1939_bms_35c96af7_Tx 90u
#define ComConf_ComSignal_BMV_BatteryGroupID3_oBMV_oJ1939_bms_b26fa1b4_Tx 91u
#define ComConf_ComSignal_BMV_BatteryGroupID4_oBMV_oJ1939_bms_92fdddff_Tx 92u
#define ComConf_ComSignal_BMV_BatteryGroupID5_oBMV_oJ1939_bms_155b16bc_Tx 93u
#define ComConf_ComSignal_BMV_BatteryGroupID6_oBMV_oJ1939_bms_46c14d38_Tx 94u
#define ComConf_ComSignal_BMV_BatteryGroupID7_oBMV_oJ1939_bms_c167867b_Tx 95u
#define ComConf_ComSignal_BMV_BatteryGroupID8_oBMV_oJ1939_bms_07e5b5ae_Tx 96u
#define ComConf_ComSignal_BMV_BatteryGroupID9_oBMV_oJ1939_bms_80437eed_Tx 97u
#define ComConf_ComSignal_BMV_BatteryGroupID10_oBMV_oJ1939_bms_94eb2566_Tx 98u
#define ComConf_ComSignal_BMV_BatteryGroupID11_oBMV_oJ1939_bms_134dee25_Tx 99u
#define ComConf_ComSignal_BMV_BatteryGroupID12_oBMV_oJ1939_bms_40d7b5a1_Tx 100u
#define ComConf_ComSignal_BMV_BatteryGroupID13_oBMV_oJ1939_bms_c7717ee2_Tx 101u
#define ComConf_ComSignal_BMV_BatteryGroupID14_oBMV_oJ1939_bms_e7e302a9_Tx 102u
#define ComConf_ComSignal_BMV_BatteryGroupID15_oBMV_oJ1939_bms_6045c9ea_Tx 103u
#define ComConf_ComSignal_BMV_BatteryGroupID16_oBMV_oJ1939_bms_33df926e_Tx 104u
#define ComConf_ComSignal_BMV_BatteryGroupID17_oBMV_oJ1939_bms_b479592d_Tx 105u
#define ComConf_ComSignal_BMV_BatteryGroupID18_oBMV_oJ1939_bms_72fb6af8_Tx 106u
#define ComConf_ComSignal_BMV_BatteryGroupID19_oBMV_oJ1939_bms_f55da1bb_Tx 107u
#define ComConf_ComSignal_BMV_BatteryGroupID20_oBMV_oJ1939_bms_7e6df804_Tx 108u
#define ComConf_ComSignal_BMV_BatteryGroupID21_oBMV_oJ1939_bms_f9cb3347_Tx 109u
#define ComConf_ComSignal_BMV_BatteryGroupID22_oBMV_oJ1939_bms_aa5168c3_Tx 110u
#define ComConf_ComSignal_BMV_BatteryGroupID23_oBMV_oJ1939_bms_2df7a380_Tx 111u
#define ComConf_ComSignal_BMV_BatteryGroupID24_oBMV_oJ1939_bms_0d65dfcb_Tx 112u
#define ComConf_ComSignal_BMV_BatteryGroupID25_oBMV_oJ1939_bms_8ac31488_Tx 113u
#define ComConf_ComSignal_BMV_BatteryGroupID26_oBMV_oJ1939_bms_d9594f0c_Tx 114u
#define ComConf_ComSignal_BMV_BatteryGroupID27_oBMV_oJ1939_bms_5eff844f_Tx 115u
#define ComConf_ComSignal_BMV_BatteryGroupID28_oBMV_oJ1939_bms_987db79a_Tx 116u
#define ComConf_ComSignal_BMV_BatteryGroupID29_oBMV_oJ1939_bms_1fdb7cd9_Tx 117u
#define ComConf_ComSignal_BMV_BatteryGroupID30_oBMV_oJ1939_bms_913f4ee5_Tx 118u
#define ComConf_ComSignal_BMV_BatteryGroupID31_oBMV_oJ1939_bms_169985a6_Tx 119u
#define ComConf_ComSignal_BMV_BatteryGroupID32_oBMV_oJ1939_bms_4503de22_Tx 120u
#define ComConf_ComSignal_BMV_BatteryGroupID33_oBMV_oJ1939_bms_c2a51561_Tx 121u
#define ComConf_ComSignal_BMV_BatteryGroupID34_oBMV_oJ1939_bms_e237692a_Tx 122u
#define ComConf_ComSignal_BMV_BatteryGroupID35_oBMV_oJ1939_bms_6591a269_Tx 123u
#define ComConf_ComSignal_BMV_BatteryGroupID36_oBMV_oJ1939_bms_360bf9ed_Tx 124u
#define ComConf_ComSignal_BMV_BatteryGroupID37_oBMV_oJ1939_bms_b1ad32ae_Tx 125u
#define ComConf_ComSignal_BMV_BatteryGroupID38_oBMV_oJ1939_bms_772f017b_Tx 126u
#define ComConf_ComSignal_BMV_BatteryGroupID39_oBMV_oJ1939_bms_f089ca38_Tx 127u
#define ComConf_ComSignal_BMV_BatteryGroupID40_oBMV_oJ1939_bms_70114481_Tx 128u
#define ComConf_ComSignal_BMV_BatteryGroupID41_oBMV_oJ1939_bms_f7b78fc2_Tx 129u
#define ComConf_ComSignal_BMV_BatteryGroupID42_oBMV_oJ1939_bms_a42dd446_Tx 130u
#define ComConf_ComSignal_BMV_BatteryGroupID43_oBMV_oJ1939_bms_238b1f05_Tx 131u
#define ComConf_ComSignal_BMV_BatteryGroupID44_oBMV_oJ1939_bms_0319634e_Tx 132u
#define ComConf_ComSignal_BMV_BatteryGroupID45_oBMV_oJ1939_bms_84bfa80d_Tx 133u
#define ComConf_ComSignal_BMV_BatteryGroupID46_oBMV_oJ1939_bms_d725f389_Tx 134u
#define ComConf_ComSignal_BMV_BatteryGroupID47_oBMV_oJ1939_bms_508338ca_Tx 135u
#define ComConf_ComSignal_BMV_BatteryGroupID48_oBMV_oJ1939_bms_96010b1f_Tx 136u
#define ComConf_ComSignal_BMV_BatteryGroupID49_oBMV_oJ1939_bms_11a7c05c_Tx 137u
#define ComConf_ComSignal_BMV_BatteryGroupID50_oBMV_oJ1939_bms_9f43f260_Tx 138u
#define ComConf_ComSignal_BMV_BatteryGroupID51_oBMV_oJ1939_bms_18e53923_Tx 139u
#define ComConf_ComSignal_BMV_BatteryGroupID52_oBMV_oJ1939_bms_4b7f62a7_Tx 140u
#define ComConf_ComSignal_BMV_BatteryGroupID53_oBMV_oJ1939_bms_ccd9a9e4_Tx 141u
#define ComConf_ComSignal_BMV_BatteryGroupID54_oBMV_oJ1939_bms_ec4bd5af_Tx 142u
#define ComConf_ComSignal_BMV_BatteryGroupID55_oBMV_oJ1939_bms_6bed1eec_Tx 143u
#define ComConf_ComSignal_BMV_BatteryGroupID56_oBMV_oJ1939_bms_38774568_Tx 144u
#define ComConf_ComSignal_BMV_BatteryGroupID57_oBMV_oJ1939_bms_bfd18e2b_Tx 145u
#define ComConf_ComSignal_BMV_BatteryGroupID58_oBMV_oJ1939_bms_7953bdfe_Tx 146u
#define ComConf_ComSignal_BMV_BatteryGroupID59_oBMV_oJ1939_bms_fef576bd_Tx 147u
#define ComConf_ComSignal_BMV_BatteryGroupID60_oBMV_oJ1939_bms_75c52f02_Tx 148u
#define ComConf_ComSignal_BMV_BatteryGroupID61_oBMV_oJ1939_bms_f263e441_Tx 149u
#define ComConf_ComSignal_BMV_BatteryGroupID62_oBMV_oJ1939_bms_a1f9bfc5_Tx 150u
#define ComConf_ComSignal_BMV_BatteryGroupID63_oBMV_oJ1939_bms_265f7486_Tx 151u
#define ComConf_ComSignal_BMV_BatteryGroupID64_oBMV_oJ1939_bms_06cd08cd_Tx 152u
#define ComConf_ComSignal_BMV_BatteryGroupID65_oBMV_oJ1939_bms_816bc38e_Tx 153u
#define ComConf_ComSignal_BMV_BatteryGroupID66_oBMV_oJ1939_bms_d2f1980a_Tx 154u
#define ComConf_ComSignal_BMV_BatteryGroupID67_oBMV_oJ1939_bms_55575349_Tx 155u
#define ComConf_ComSignal_BMV_BatteryGroupID68_oBMV_oJ1939_bms_93d5609c_Tx 156u
#define ComConf_ComSignal_BMV_BatteryGroupID69_oBMV_oJ1939_bms_1473abdf_Tx 157u
#define ComConf_ComSignal_BMV_BatteryGroupID70_oBMV_oJ1939_bms_9a9799e3_Tx 158u
#define ComConf_ComSignal_BMV_BatteryGroupID71_oBMV_oJ1939_bms_1d3152a0_Tx 159u
#define ComConf_ComSignal_BMV_BatteryGroupID72_oBMV_oJ1939_bms_4eab0924_Tx 160u
#define ComConf_ComSignal_BMV_BatteryGroupID73_oBMV_oJ1939_bms_c90dc267_Tx 161u
#define ComConf_ComSignal_BMV_BatteryGroupID74_oBMV_oJ1939_bms_e99fbe2c_Tx 162u
#define ComConf_ComSignal_BMV_BatteryGroupID75_oBMV_oJ1939_bms_6e39756f_Tx 163u
#define ComConf_ComSignal_BMV_BatteryGroupID76_oBMV_oJ1939_bms_3da32eeb_Tx 164u
#define ComConf_ComSignal_BMV_BatteryGroupID77_oBMV_oJ1939_bms_ba05e5a8_Tx 165u
#define ComConf_ComSignal_BMV_BatteryGroupID78_oBMV_oJ1939_bms_7c87d67d_Tx 166u
#define ComConf_ComSignal_BMV_BatteryGroupID79_oBMV_oJ1939_bms_fb211d3e_Tx 167u
#define ComConf_ComSignal_BMV_BatteryGroupID80_oBMV_oJ1939_bms_6ce83d8b_Tx 168u
#define ComConf_ComSignal_BMV_BatteryGroupID81_oBMV_oJ1939_bms_eb4ef6c8_Tx 169u
#define ComConf_ComSignal_BMV_BatteryGroupID82_oBMV_oJ1939_bms_b8d4ad4c_Tx 170u
#define ComConf_ComSignal_BMV_BatteryGroupID83_oBMV_oJ1939_bms_3f72660f_Tx 171u
#define ComConf_ComSignal_BMV_BatteryGroupID84_oBMV_oJ1939_bms_1fe01a44_Tx 172u
#define ComConf_ComSignal_BMV_BatteryGroupID85_oBMV_oJ1939_bms_9846d107_Tx 173u
#define ComConf_ComSignal_BMV_BatteryGroupID86_oBMV_oJ1939_bms_cbdc8a83_Tx 174u
#define ComConf_ComSignal_BMV_BatteryGroupID87_oBMV_oJ1939_bms_4c7a41c0_Tx 175u
#define ComConf_ComSignal_BMV_BatteryGroupID88_oBMV_oJ1939_bms_8af87215_Tx 176u
#define ComConf_ComSignal_BMV_BatteryGroupID89_oBMV_oJ1939_bms_0d5eb956_Tx 177u
#define ComConf_ComSignal_BMV_BatteryGroupID90_oBMV_oJ1939_bms_83ba8b6a_Tx 178u
#define ComConf_ComSignal_BMV_BatteryGroupID91_oBMV_oJ1939_bms_041c4029_Tx 179u
#define ComConf_ComSignal_BMV_BatteryGroupID92_oBMV_oJ1939_bms_57861bad_Tx 180u
#define ComConf_ComSignal_BMV_BatteryGroupID93_oBMV_oJ1939_bms_d020d0ee_Tx 181u
#define ComConf_ComSignal_BMV_BatteryGroupID94_oBMV_oJ1939_bms_f0b2aca5_Tx 182u
#define ComConf_ComSignal_BMV_BatteryGroupID95_oBMV_oJ1939_bms_771467e6_Tx 183u
#define ComConf_ComSignal_BMV_BatteryGroupID96_oBMV_oJ1939_bms_248e3c62_Tx 184u
#define ComConf_ComSignal_BMV_BatteryGroupID97_oBMV_oJ1939_bms_a328f721_Tx 185u
#define ComConf_ComSignal_BMV_BatteryGroupID98_oBMV_oJ1939_bms_65aac4f4_Tx 186u
#define ComConf_ComSignal_BMV_BatteryGroupID99_oBMV_oJ1939_bms_e20c0fb7_Tx 187u
#define ComConf_ComSignal_BMV_BatteryGroupID100_oBMV_oJ1939_bms_f9c47999_Tx 188u
#define ComConf_ComSignal_BMV_BatteryGroupID101_oBMV_oJ1939_bms_7e62b2da_Tx 189u
#define ComConf_ComSignal_BMV_BatteryGroupID102_oBMV_oJ1939_bms_2df8e95e_Tx 190u
#define ComConf_ComSignal_BMV_BatteryGroupID103_oBMV_oJ1939_bms_aa5e221d_Tx 191u
#define ComConf_ComSignal_BMV_BatteryGroupID104_oBMV_oJ1939_bms_8acc5e56_Tx 192u
#define ComConf_ComSignal_BMV_BatteryGroupID105_oBMV_oJ1939_bms_0d6a9515_Tx 193u
#define ComConf_ComSignal_BMV_BatteryGroupID106_oBMV_oJ1939_bms_5ef0ce91_Tx 194u
#define ComConf_ComSignal_BMV_BatteryGroupID107_oBMV_oJ1939_bms_d95605d2_Tx 195u
#define ComConf_ComSignal_BMV_BatteryGroupID108_oBMV_oJ1939_bms_1fd43607_Tx 196u
#define ComConf_ComSignal_BMV_BatteryGroupID109_oBMV_oJ1939_bms_9872fd44_Tx 197u
#define ComConf_ComSignal_BMV_BatteryGroupID110_oBMV_oJ1939_bms_1696cf78_Tx 198u
#define ComConf_ComSignal_BMV_BatteryGroupID111_oBMV_oJ1939_bms_9130043b_Tx 199u
#define ComConf_ComSignal_BMV_BatteryGroupID112_oBMV_oJ1939_bms_c2aa5fbf_Tx 200u
#define ComConf_ComSignal_BMV_BatteryGroupID113_oBMV_oJ1939_bms_450c94fc_Tx 201u
#define ComConf_ComSignal_BMV_BatteryGroupID114_oBMV_oJ1939_bms_659ee8b7_Tx 202u
#define ComConf_ComSignal_BMV_BatteryGroupID115_oBMV_oJ1939_bms_e23823f4_Tx 203u
#define ComConf_ComSignal_BMV_BatteryGroupID116_oBMV_oJ1939_bms_b1a27870_Tx 204u
#define ComConf_ComSignal_BMV_BatteryGroupID117_oBMV_oJ1939_bms_3604b333_Tx 205u
#define ComConf_ComSignal_BMV_BatteryGroupID118_oBMV_oJ1939_bms_f08680e6_Tx 206u
#define ComConf_ComSignal_BMV_BatteryGroupID119_oBMV_oJ1939_bms_77204ba5_Tx 207u
#define ComConf_ComSignal_BMV_BatteryGroupID120_oBMV_oJ1939_bms_fc10121a_Tx 208u
#define ComConf_ComSignal_BMV_BatteryGroupID121_oBMV_oJ1939_bms_7bb6d959_Tx 209u
#define ComConf_ComSignal_BMV_BatteryGroupID122_oBMV_oJ1939_bms_282c82dd_Tx 210u
#define ComConf_ComSignal_BMV_BatteryGroupID123_oBMV_oJ1939_bms_af8a499e_Tx 211u
#define ComConf_ComSignal_BMV_BatteryGroupID124_oBMV_oJ1939_bms_8f1835d5_Tx 212u
#define ComConf_ComSignal_BMV_BatteryGroupID125_oBMV_oJ1939_bms_08befe96_Tx 213u
#define ComConf_ComSignal_BMV_BatteryGroupID126_oBMV_oJ1939_bms_5b24a512_Tx 214u
#define ComConf_ComSignal_BMV_BatteryGroupID127_oBMV_oJ1939_bms_dc826e51_Tx 215u
#define ComConf_ComSignal_BMV_BatteryGroupID128_oBMV_oJ1939_bms_1a005d84_Tx 216u
#define ComConf_ComSignal_BMV_BatteryGroupID129_oBMV_oJ1939_bms_9da696c7_Tx 217u
#define ComConf_ComSignal_BMV_BatteryGroupID130_oBMV_oJ1939_bms_1342a4fb_Tx 218u
#define ComConf_ComSignal_BMV_BatteryGroupID131_oBMV_oJ1939_bms_94e46fb8_Tx 219u
#define ComConf_ComSignal_BMV_BatteryGroupID132_oBMV_oJ1939_bms_c77e343c_Tx 220u
#define ComConf_ComSignal_BMV_BatteryGroupID133_oBMV_oJ1939_bms_40d8ff7f_Tx 221u
#define ComConf_ComSignal_BMV_BatteryGroupID134_oBMV_oJ1939_bms_604a8334_Tx 222u
#define ComConf_ComSignal_BMV_BatteryGroupID135_oBMV_oJ1939_bms_e7ec4877_Tx 223u
#define ComConf_ComSignal_BMV_BatteryGroupID136_oBMV_oJ1939_bms_b47613f3_Tx 224u
#define ComConf_ComSignal_BMV_BatteryGroupID137_oBMV_oJ1939_bms_33d0d8b0_Tx 225u
#define ComConf_ComSignal_BMV_BatteryGroupID138_oBMV_oJ1939_bms_f552eb65_Tx 226u
#define ComConf_ComSignal_BMV_BatteryGroupID139_oBMV_oJ1939_bms_72f42026_Tx 227u
#define ComConf_ComSignal_BMV_BatteryGroupID140_oBMV_oJ1939_bms_f26cae9f_Tx 228u
#define ComConf_ComSignal_BMV_BatteryGroupID141_oBMV_oJ1939_bms_75ca65dc_Tx 229u
#define ComConf_ComSignal_BMV_BatteryGroupID142_oBMV_oJ1939_bms_26503e58_Tx 230u
#define ComConf_ComSignal_BMV_BatteryGroupID143_oBMV_oJ1939_bms_a1f6f51b_Tx 231u
#define ComConf_ComSignal_BMV_BatteryGroupID144_oBMV_oJ1939_bms_81648950_Tx 232u
#define ComConf_ComSignal_BMV_BatteryGroupID145_oBMV_oJ1939_bms_06c24213_Tx 233u
#define ComConf_ComSignal_BMV_BatteryGroupID146_oBMV_oJ1939_bms_55581997_Tx 234u
#define ComConf_ComSignal_BMV_BatteryGroupID147_oBMV_oJ1939_bms_d2fed2d4_Tx 235u
#define ComConf_ComSignal_BMV_BatteryGroupID148_oBMV_oJ1939_bms_147ce101_Tx 236u
#define ComConf_ComSignal_BMV_BatteryGroupID149_oBMV_oJ1939_bms_93da2a42_Tx 237u
#define ComConf_ComSignal_BMV_BatteryGroupID150_oBMV_oJ1939_bms_1d3e187e_Tx 238u
#define ComConf_ComSignal_BMV_BatteryGroupID151_oBMV_oJ1939_bms_9a98d33d_Tx 239u
#define ComConf_ComSignal_BMV_BatteryGroupID152_oBMV_oJ1939_bms_c90288b9_Tx 240u
#define ComConf_ComSignal_BMV_BatteryGroupID153_oBMV_oJ1939_bms_4ea443fa_Tx 241u
#define ComConf_ComSignal_BMV_BatteryGroupID154_oBMV_oJ1939_bms_6e363fb1_Tx 242u
#define ComConf_ComSignal_BMV_BatteryGroupID155_oBMV_oJ1939_bms_e990f4f2_Tx 243u
#define ComConf_ComSignal_BMV_BatteryGroupID156_oBMV_oJ1939_bms_ba0aaf76_Tx 244u
#define ComConf_ComSignal_BMV_BatteryGroupID157_oBMV_oJ1939_bms_3dac6435_Tx 245u
#define ComConf_ComSignal_BMV_BatteryGroupID158_oBMV_oJ1939_bms_fb2e57e0_Tx 246u
#define ComConf_ComSignal_BMV_BatteryGroupID159_oBMV_oJ1939_bms_7c889ca3_Tx 247u
#define ComConf_ComSignal_BMV_BatteryGroupID160_oBMV_oJ1939_bms_f7b8c51c_Tx 248u
#define ComConf_ComSignal_BMV_BatteryGroupID161_oBMV_oJ1939_bms_701e0e5f_Tx 249u
#define ComConf_ComSignal_BMV_BatteryGroupID162_oBMV_oJ1939_bms_238455db_Tx 250u
#define ComConf_ComSignal_BMV_BatteryGroupID163_oBMV_oJ1939_bms_a4229e98_Tx 251u
#define ComConf_ComSignal_BMV_BatteryGroupID164_oBMV_oJ1939_bms_84b0e2d3_Tx 252u
#define ComConf_ComSignal_BMV_BatteryGroupID165_oBMV_oJ1939_bms_03162990_Tx 253u
#define ComConf_ComSignal_BMV_BatteryGroupID166_oBMV_oJ1939_bms_508c7214_Tx 254u
#define ComConf_ComSignal_BMV_BatteryGroupID167_oBMV_oJ1939_bms_d72ab957_Tx 255u
#define ComConf_ComSignal_BMV_BatteryGroupID168_oBMV_oJ1939_bms_11a88a82_Tx 256u
#define ComConf_ComSignal_BMV_BatteryGroupID169_oBMV_oJ1939_bms_960e41c1_Tx 257u
#define ComConf_ComSignal_BMV_BatteryGroupID170_oBMV_oJ1939_bms_18ea73fd_Tx 258u
#define ComConf_ComSignal_BMV_BatteryGroupID171_oBMV_oJ1939_bms_9f4cb8be_Tx 259u
#define ComConf_ComSignal_BMV_BatteryGroupID172_oBMV_oJ1939_bms_ccd6e33a_Tx 260u
#define ComConf_ComSignal_BMV_BatteryGroupID173_oBMV_oJ1939_bms_4b702879_Tx 261u
#define ComConf_ComSignal_BMV_BatteryGroupID174_oBMV_oJ1939_bms_6be25432_Tx 262u
#define ComConf_ComSignal_BMV_BatteryGroupID175_oBMV_oJ1939_bms_ec449f71_Tx 263u
#define ComConf_ComSignal_BMV_BatteryGroupID176_oBMV_oJ1939_bms_bfdec4f5_Tx 264u
#define ComConf_ComSignal_BMV_BatteryGroupID177_oBMV_oJ1939_bms_38780fb6_Tx 265u
#define ComConf_ComSignal_BMV_BatteryGroupID178_oBMV_oJ1939_bms_fefa3c63_Tx 266u
#define ComConf_ComSignal_BMV_BatteryGroupID179_oBMV_oJ1939_bms_795cf720_Tx 267u
#define ComConf_ComSignal_BMV_BatteryGroupID180_oBMV_oJ1939_bms_ee95d795_Tx 268u
#define ComConf_ComSignal_BMV_BatteryGroupID181_oBMV_oJ1939_bms_69331cd6_Tx 269u
#define ComConf_ComSignal_BMV_BatteryGroupID182_oBMV_oJ1939_bms_3aa94752_Tx 270u
#define ComConf_ComSignal_BMV_BatteryGroupID183_oBMV_oJ1939_bms_bd0f8c11_Tx 271u
#define ComConf_ComSignal_BMV_BatteryGroupID184_oBMV_oJ1939_bms_9d9df05a_Tx 272u
#define ComConf_ComSignal_BMV_BatteryGroupID185_oBMV_oJ1939_bms_1a3b3b19_Tx 273u
#define ComConf_ComSignal_BMV_BatteryGroupID186_oBMV_oJ1939_bms_49a1609d_Tx 274u
#define ComConf_ComSignal_BMV_BatteryGroupID187_oBMV_oJ1939_bms_ce07abde_Tx 275u
#define ComConf_ComSignal_BMV_BatteryGroupID188_oBMV_oJ1939_bms_0885980b_Tx 276u
#define ComConf_ComSignal_BMV_BatteryGroupID189_oBMV_oJ1939_bms_8f235348_Tx 277u
#define ComConf_ComSignal_BMV_BatteryGroupID190_oBMV_oJ1939_bms_01c76174_Tx 278u
#define ComConf_ComSignal_BMV_BatteryGroupID191_oBMV_oJ1939_bms_8661aa37_Tx 279u
#define ComConf_ComSignal_BMV_BatteryGroupID192_oBMV_oJ1939_bms_d5fbf1b3_Tx 280u
#define ComConf_ComSignal_BMV_BatteryGroupID193_oBMV_oJ1939_bms_525d3af0_Tx 281u
#define ComConf_ComSignal_BMV_BatteryGroupID194_oBMV_oJ1939_bms_72cf46bb_Tx 282u
#define ComConf_ComSignal_BMV_BatteryGroupID195_oBMV_oJ1939_bms_f5698df8_Tx 283u
#define ComConf_ComSignal_BMV_BatteryGroupID196_oBMV_oJ1939_bms_a6f3d67c_Tx 284u
#define ComConf_ComSignal_BMV_BatteryGroupID197_oBMV_oJ1939_bms_21551d3f_Tx 285u
#define ComConf_ComSignal_BMV_BatteryGroupID198_oBMV_oJ1939_bms_e7d72eea_Tx 286u
#define ComConf_ComSignal_BMV_BatteryGroupID199_oBMV_oJ1939_bms_6071e5a9_Tx 287u
#define ComConf_ComSignal_BMV_BatteryGroupID200_oBMV_oJ1939_bms_5a92ff30_Tx 288u
#define ComConf_ComSignal_BMV_BatteryGroupID201_oBMV_oJ1939_bms_dd343473_Tx 289u
#define ComConf_ComSignal_BMV_BatteryGroupID202_oBMV_oJ1939_bms_8eae6ff7_Tx 290u
#define ComConf_ComSignal_BMV_BatteryGroupID203_oBMV_oJ1939_bms_0908a4b4_Tx 291u
#define ComConf_ComSignal_BMV_BatteryGroupID204_oBMV_oJ1939_bms_299ad8ff_Tx 292u
#define ComConf_ComSignal_BMV_BatteryGroupID205_oBMV_oJ1939_bms_ae3c13bc_Tx 293u
#define ComConf_ComSignal_BMV_BatteryGroupID206_oBMV_oJ1939_bms_fda64838_Tx 294u
#define ComConf_ComSignal_BMV_BatteryGroupID207_oBMV_oJ1939_bms_7a00837b_Tx 295u
#define ComConf_ComSignal_BMV_BatteryGroupID208_oBMV_oJ1939_bms_bc82b0ae_Tx 296u
#define ComConf_ComSignal_BMV_BatteryGroupID209_oBMV_oJ1939_bms_3b247bed_Tx 297u
#define ComConf_ComSignal_BMV_BatteryGroupID210_oBMV_oJ1939_bms_b5c049d1_Tx 298u
#define ComConf_ComSignal_BMV_BatteryGroupID211_oBMV_oJ1939_bms_32668292_Tx 299u
#define ComConf_ComSignal_BMV_BatteryGroupID212_oBMV_oJ1939_bms_61fcd916_Tx 300u
#define ComConf_ComSignal_BMV_BatteryGroupID213_oBMV_oJ1939_bms_e65a1255_Tx 301u
#define ComConf_ComSignal_BMV_BatteryGroupID214_oBMV_oJ1939_bms_c6c86e1e_Tx 302u
#define ComConf_ComSignal_BMV_BatteryGroupID215_oBMV_oJ1939_bms_416ea55d_Tx 303u
#define ComConf_ComSignal_BMV_BatteryGroupID216_oBMV_oJ1939_bms_12f4fed9_Tx 304u
#define ComConf_ComSignal_BMV_BatteryGroupID217_oBMV_oJ1939_bms_9552359a_Tx 305u
#define ComConf_ComSignal_BMV_BatteryGroupID218_oBMV_oJ1939_bms_53d0064f_Tx 306u
#define ComConf_ComSignal_BMV_BatteryGroupID219_oBMV_oJ1939_bms_d476cd0c_Tx 307u
#define ComConf_ComSignal_BMV_BatteryGroupID220_oBMV_oJ1939_bms_5f4694b3_Tx 308u
#define ComConf_ComSignal_BMV_BatteryGroupID221_oBMV_oJ1939_bms_d8e05ff0_Tx 309u
#define ComConf_ComSignal_BMV_BatteryGroupID222_oBMV_oJ1939_bms_8b7a0474_Tx 310u
#define ComConf_ComSignal_BMV_BatteryGroupID223_oBMV_oJ1939_bms_0cdccf37_Tx 311u
#define ComConf_ComSignal_BMV_BatteryGroupID224_oBMV_oJ1939_bms_2c4eb37c_Tx 312u
#define ComConf_ComSignal_BMV_BatteryGroupID225_oBMV_oJ1939_bms_abe8783f_Tx 313u
#define ComConf_ComSignal_BMV_BatteryGroupID226_oBMV_oJ1939_bms_f87223bb_Tx 314u
#define ComConf_ComSignal_BMV_BatteryGroupID227_oBMV_oJ1939_bms_7fd4e8f8_Tx 315u
#define ComConf_ComSignal_BMV_BatteryGroupID228_oBMV_oJ1939_bms_b956db2d_Tx 316u
#define ComConf_ComSignal_BMV_BatteryGroupID229_oBMV_oJ1939_bms_3ef0106e_Tx 317u
#define ComConf_ComSignal_BMV_BatteryGroupID230_oBMV_oJ1939_bms_b0142252_Tx 318u
#define ComConf_ComSignal_BMV_BatteryGroupID231_oBMV_oJ1939_bms_37b2e911_Tx 319u
#define ComConf_ComSignal_BMV_BatteryGroupID232_oBMV_oJ1939_bms_6428b295_Tx 320u
#define ComConf_ComSignal_BMV_BatteryGroupID233_oBMV_oJ1939_bms_e38e79d6_Tx 321u
#define ComConf_ComSignal_BMV_BatteryGroupID234_oBMV_oJ1939_bms_c31c059d_Tx 322u
#define ComConf_ComSignal_BMV_BatteryGroupID235_oBMV_oJ1939_bms_44bacede_Tx 323u
#define ComConf_ComSignal_BMV_BatteryGroupID236_oBMV_oJ1939_bms_1720955a_Tx 324u
#define ComConf_ComSignal_BMV_BatteryGroupID237_oBMV_oJ1939_bms_90865e19_Tx 325u
#define ComConf_ComSignal_BMV_BatteryGroupID238_oBMV_oJ1939_bms_56046dcc_Tx 326u
#define ComConf_ComSignal_BMV_BatteryGroupID239_oBMV_oJ1939_bms_d1a2a68f_Tx 327u
#define ComConf_ComSignal_BMV_BatteryGroupID240_oBMV_oJ1939_bms_513a2836_Tx 328u
#define ComConf_ComSignal_BMV_BatteryGroupID241_oBMV_oJ1939_bms_d69ce375_Tx 329u
#define ComConf_ComSignal_BMV_BatteryGroupID242_oBMV_oJ1939_bms_8506b8f1_Tx 330u
#define ComConf_ComSignal_BMV_BatteryGroupID243_oBMV_oJ1939_bms_02a073b2_Tx 331u
#define ComConf_ComSignal_BMV_BatteryGroupID244_oBMV_oJ1939_bms_22320ff9_Tx 332u
#define ComConf_ComSignal_BMV_BatteryGroupID245_oBMV_oJ1939_bms_a594c4ba_Tx 333u
#define ComConf_ComSignal_BMV_BatteryGroupID246_oBMV_oJ1939_bms_f60e9f3e_Tx 334u
#define ComConf_ComSignal_BMV_BatteryGroupID247_oBMV_oJ1939_bms_71a8547d_Tx 335u
#define ComConf_ComSignal_BMV_BatteryGroupID248_oBMV_oJ1939_bms_b72a67a8_Tx 336u
#define ComConf_ComSignal_BMV_BatteryGroupID249_oBMV_oJ1939_bms_308caceb_Tx 337u
#define ComConf_ComSignal_BMV_BatteryGroupID250_oBMV_oJ1939_bms_be689ed7_Tx 338u
#define ComConf_ComSignal_BMV_BatteryGroupID251_oBMV_oJ1939_bms_39ce5594_Tx 339u
#define ComConf_ComSignal_BMV_BatteryGroupID252_oBMV_oJ1939_bms_6a540e10_Tx 340u
#define ComConf_ComSignal_BMV_BatteryGroupID253_oBMV_oJ1939_bms_edf2c553_Tx 341u
#define ComConf_ComSignal_BMV_BatteryGroupID254_oBMV_oJ1939_bms_cd60b918_Tx 342u
#define ComConf_ComSignal_BMV_BatteryGroupID255_oBMV_oJ1939_bms_4ac6725b_Tx 343u
#define ComConf_ComSignal_BMV_BatteryVoltageMin0_oBMV_oJ1939_bms_a2a9aae5_Tx 344u
#define ComConf_ComSignal_BMV_BatteryVoltageMin1_oBMV_oJ1939_bms_250f61a6_Tx 345u
#define ComConf_ComSignal_BMV_BatteryVoltageMin2_oBMV_oJ1939_bms_76953a22_Tx 346u
#define ComConf_ComSignal_BMV_BatteryVoltageMin3_oBMV_oJ1939_bms_f133f161_Tx 347u
#define ComConf_ComSignal_BMV_BatteryVoltageMin4_oBMV_oJ1939_bms_d1a18d2a_Tx 348u
#define ComConf_ComSignal_BMV_BatteryVoltageMin5_oBMV_oJ1939_bms_56074669_Tx 349u
#define ComConf_ComSignal_BMV_BatteryVoltageMin6_oBMV_oJ1939_bms_059d1ded_Tx 350u
#define ComConf_ComSignal_BMV_BatteryVoltageMin7_oBMV_oJ1939_bms_823bd6ae_Tx 351u
#define ComConf_ComSignal_BMV_BatteryVoltageMin8_oBMV_oJ1939_bms_44b9e57b_Tx 352u
#define ComConf_ComSignal_BMV_BatteryVoltageMin9_oBMV_oJ1939_bms_c31f2e38_Tx 353u
#define ComConf_ComSignal_BMV_BatteryVoltageMin10_oBMV_oJ1939_bms_62115f6d_Tx 354u
#define ComConf_ComSignal_BMV_BatteryVoltageMin11_oBMV_oJ1939_bms_e5b7942e_Tx 355u
#define ComConf_ComSignal_BMV_BatteryVoltageMin12_oBMV_oJ1939_bms_b62dcfaa_Tx 356u
#define ComConf_ComSignal_BMV_BatteryVoltageMin13_oBMV_oJ1939_bms_318b04e9_Tx 357u
#define ComConf_ComSignal_BMV_BatteryVoltageMin14_oBMV_oJ1939_bms_111978a2_Tx 358u
#define ComConf_ComSignal_BMV_BatteryVoltageMin15_oBMV_oJ1939_bms_96bfb3e1_Tx 359u
#define ComConf_ComSignal_BMV_BatteryVoltageMin16_oBMV_oJ1939_bms_c525e865_Tx 360u
#define ComConf_ComSignal_BMV_BatteryVoltageMin17_oBMV_oJ1939_bms_42832326_Tx 361u
#define ComConf_ComSignal_BMV_BatteryVoltageMin18_oBMV_oJ1939_bms_840110f3_Tx 362u
#define ComConf_ComSignal_BMV_BatteryVoltageMin19_oBMV_oJ1939_bms_03a7dbb0_Tx 363u
#define ComConf_ComSignal_BMV_BatteryVoltageMin20_oBMV_oJ1939_bms_8897820f_Tx 364u
#define ComConf_ComSignal_BMV_BatteryVoltageMin21_oBMV_oJ1939_bms_0f31494c_Tx 365u
#define ComConf_ComSignal_BMV_BatteryVoltageMin22_oBMV_oJ1939_bms_5cab12c8_Tx 366u
#define ComConf_ComSignal_BMV_BatteryVoltageMin23_oBMV_oJ1939_bms_db0dd98b_Tx 367u
#define ComConf_ComSignal_BMV_BatteryVoltageMin24_oBMV_oJ1939_bms_fb9fa5c0_Tx 368u
#define ComConf_ComSignal_BMV_BatteryVoltageMin25_oBMV_oJ1939_bms_7c396e83_Tx 369u
#define ComConf_ComSignal_BMV_BatteryVoltageMin26_oBMV_oJ1939_bms_2fa33507_Tx 370u
#define ComConf_ComSignal_BMV_BatteryVoltageMin27_oBMV_oJ1939_bms_a805fe44_Tx 371u
#define ComConf_ComSignal_BMV_BatteryVoltageMin28_oBMV_oJ1939_bms_6e87cd91_Tx 372u
#define ComConf_ComSignal_BMV_BatteryVoltageMin29_oBMV_oJ1939_bms_e92106d2_Tx 373u
#define ComConf_ComSignal_BMV_BatteryVoltageMin30_oBMV_oJ1939_bms_67c534ee_Tx 374u
#define ComConf_ComSignal_BMV_BatteryVoltageMin31_oBMV_oJ1939_bms_e063ffad_Tx 375u
#define ComConf_ComSignal_BMV_BatteryVoltageMin32_oBMV_oJ1939_bms_b3f9a429_Tx 376u
#define ComConf_ComSignal_BMV_BatteryVoltageMin33_oBMV_oJ1939_bms_345f6f6a_Tx 377u
#define ComConf_ComSignal_BMV_BatteryVoltageMin34_oBMV_oJ1939_bms_14cd1321_Tx 378u
#define ComConf_ComSignal_BMV_BatteryVoltageMin35_oBMV_oJ1939_bms_936bd862_Tx 379u
#define ComConf_ComSignal_BMV_BatteryVoltageMin36_oBMV_oJ1939_bms_c0f183e6_Tx 380u
#define ComConf_ComSignal_BMV_BatteryVoltageMin37_oBMV_oJ1939_bms_475748a5_Tx 381u
#define ComConf_ComSignal_BMV_BatteryVoltageMin38_oBMV_oJ1939_bms_81d57b70_Tx 382u
#define ComConf_ComSignal_BMV_BatteryVoltageMin39_oBMV_oJ1939_bms_0673b033_Tx 383u
#define ComConf_ComSignal_BMV_BatteryVoltageMin40_oBMV_oJ1939_bms_86eb3e8a_Tx 384u
#define ComConf_ComSignal_BMV_BatteryVoltageMin41_oBMV_oJ1939_bms_014df5c9_Tx 385u
#define ComConf_ComSignal_BMV_BatteryVoltageMin42_oBMV_oJ1939_bms_52d7ae4d_Tx 386u
#define ComConf_ComSignal_BMV_BatteryVoltageMin43_oBMV_oJ1939_bms_d571650e_Tx 387u
#define ComConf_ComSignal_BMV_BatteryVoltageMin44_oBMV_oJ1939_bms_f5e31945_Tx 388u
#define ComConf_ComSignal_BMV_BatteryVoltageMin45_oBMV_oJ1939_bms_7245d206_Tx 389u
#define ComConf_ComSignal_BMV_BatteryVoltageMin46_oBMV_oJ1939_bms_21df8982_Tx 390u
#define ComConf_ComSignal_BMV_BatteryVoltageMin47_oBMV_oJ1939_bms_a67942c1_Tx 391u
#define ComConf_ComSignal_BMV_BatteryVoltageMin48_oBMV_oJ1939_bms_60fb7114_Tx 392u
#define ComConf_ComSignal_BMV_BatteryVoltageMin49_oBMV_oJ1939_bms_e75dba57_Tx 393u
#define ComConf_ComSignal_BMV_BatteryVoltageMin50_oBMV_oJ1939_bms_69b9886b_Tx 394u
#define ComConf_ComSignal_BMV_BatteryVoltageMin51_oBMV_oJ1939_bms_ee1f4328_Tx 395u
#define ComConf_ComSignal_BMV_BatteryVoltageMin52_oBMV_oJ1939_bms_bd8518ac_Tx 396u
#define ComConf_ComSignal_BMV_BatteryVoltageMin53_oBMV_oJ1939_bms_3a23d3ef_Tx 397u
#define ComConf_ComSignal_BMV_BatteryVoltageMin54_oBMV_oJ1939_bms_1ab1afa4_Tx 398u
#define ComConf_ComSignal_BMV_BatteryVoltageMin55_oBMV_oJ1939_bms_9d1764e7_Tx 399u
#define ComConf_ComSignal_BMV_BatteryVoltageMin56_oBMV_oJ1939_bms_ce8d3f63_Tx 400u
#define ComConf_ComSignal_BMV_BatteryVoltageMin57_oBMV_oJ1939_bms_492bf420_Tx 401u
#define ComConf_ComSignal_BMV_BatteryVoltageMin58_oBMV_oJ1939_bms_8fa9c7f5_Tx 402u
#define ComConf_ComSignal_BMV_BatteryVoltageMin59_oBMV_oJ1939_bms_080f0cb6_Tx 403u
#define ComConf_ComSignal_BMV_BatteryVoltageMin60_oBMV_oJ1939_bms_833f5509_Tx 404u
#define ComConf_ComSignal_BMV_BatteryVoltageMin61_oBMV_oJ1939_bms_04999e4a_Tx 405u
#define ComConf_ComSignal_BMV_BatteryVoltageMin62_oBMV_oJ1939_bms_5703c5ce_Tx 406u
#define ComConf_ComSignal_BMV_BatteryVoltageMin63_oBMV_oJ1939_bms_d0a50e8d_Tx 407u
#define ComConf_ComSignal_BMV_BatteryVoltageMin64_oBMV_oJ1939_bms_f03772c6_Tx 408u
#define ComConf_ComSignal_BMV_BatteryVoltageMin65_oBMV_oJ1939_bms_7791b985_Tx 409u
#define ComConf_ComSignal_BMV_BatteryVoltageMin66_oBMV_oJ1939_bms_240be201_Tx 410u
#define ComConf_ComSignal_BMV_BatteryVoltageMin67_oBMV_oJ1939_bms_a3ad2942_Tx 411u
#define ComConf_ComSignal_BMV_BatteryVoltageMin68_oBMV_oJ1939_bms_652f1a97_Tx 412u
#define ComConf_ComSignal_BMV_BatteryVoltageMin69_oBMV_oJ1939_bms_e289d1d4_Tx 413u
#define ComConf_ComSignal_BMV_BatteryVoltageMin70_oBMV_oJ1939_bms_6c6de3e8_Tx 414u
#define ComConf_ComSignal_BMV_BatteryVoltageMin71_oBMV_oJ1939_bms_ebcb28ab_Tx 415u
#define ComConf_ComSignal_BMV_BatteryVoltageMin72_oBMV_oJ1939_bms_b851732f_Tx 416u
#define ComConf_ComSignal_BMV_BatteryVoltageMin73_oBMV_oJ1939_bms_3ff7b86c_Tx 417u
#define ComConf_ComSignal_BMV_BatteryVoltageMin74_oBMV_oJ1939_bms_1f65c427_Tx 418u
#define ComConf_ComSignal_BMV_BatteryVoltageMin75_oBMV_oJ1939_bms_98c30f64_Tx 419u
#define ComConf_ComSignal_BMV_BatteryVoltageMin76_oBMV_oJ1939_bms_cb5954e0_Tx 420u
#define ComConf_ComSignal_BMV_BatteryVoltageMin77_oBMV_oJ1939_bms_4cff9fa3_Tx 421u
#define ComConf_ComSignal_BMV_BatteryVoltageMin78_oBMV_oJ1939_bms_8a7dac76_Tx 422u
#define ComConf_ComSignal_BMV_BatteryVoltageMin79_oBMV_oJ1939_bms_0ddb6735_Tx 423u
#define ComConf_ComSignal_BMV_BatteryVoltageMin80_oBMV_oJ1939_bms_9a124780_Tx 424u
#define ComConf_ComSignal_BMV_BatteryVoltageMin81_oBMV_oJ1939_bms_1db48cc3_Tx 425u
#define ComConf_ComSignal_BMV_BatteryVoltageMin82_oBMV_oJ1939_bms_4e2ed747_Tx 426u
#define ComConf_ComSignal_BMV_BatteryVoltageMin83_oBMV_oJ1939_bms_c9881c04_Tx 427u
#define ComConf_ComSignal_BMV_BatteryVoltageMin84_oBMV_oJ1939_bms_e91a604f_Tx 428u
#define ComConf_ComSignal_BMV_BatteryVoltageMin85_oBMV_oJ1939_bms_6ebcab0c_Tx 429u
#define ComConf_ComSignal_BMV_BatteryVoltageMin86_oBMV_oJ1939_bms_3d26f088_Tx 430u
#define ComConf_ComSignal_BMV_BatteryVoltageMin87_oBMV_oJ1939_bms_ba803bcb_Tx 431u
#define ComConf_ComSignal_BMV_BatteryVoltageMin88_oBMV_oJ1939_bms_7c02081e_Tx 432u
#define ComConf_ComSignal_BMV_BatteryVoltageMin89_oBMV_oJ1939_bms_fba4c35d_Tx 433u
#define ComConf_ComSignal_BMV_BatteryVoltageMin90_oBMV_oJ1939_bms_7540f161_Tx 434u
#define ComConf_ComSignal_BMV_BatteryVoltageMin91_oBMV_oJ1939_bms_f2e63a22_Tx 435u
#define ComConf_ComSignal_BMV_BatteryVoltageMin92_oBMV_oJ1939_bms_a17c61a6_Tx 436u
#define ComConf_ComSignal_BMV_BatteryVoltageMin93_oBMV_oJ1939_bms_26daaae5_Tx 437u
#define ComConf_ComSignal_BMV_BatteryVoltageMin94_oBMV_oJ1939_bms_0648d6ae_Tx 438u
#define ComConf_ComSignal_BMV_BatteryVoltageMin95_oBMV_oJ1939_bms_81ee1ded_Tx 439u
#define ComConf_ComSignal_BMV_BatteryVoltageMin96_oBMV_oJ1939_bms_d2744669_Tx 440u
#define ComConf_ComSignal_BMV_BatteryVoltageMin97_oBMV_oJ1939_bms_55d28d2a_Tx 441u
#define ComConf_ComSignal_BMV_BatteryVoltageMin98_oBMV_oJ1939_bms_9350beff_Tx 442u
#define ComConf_ComSignal_BMV_BatteryVoltageMin99_oBMV_oJ1939_bms_14f675bc_Tx 443u
#define ComConf_ComSignal_BMV_BatteryVoltageMin100_oBMV_oJ1939_bms_6ee05a6b_Tx 444u
#define ComConf_ComSignal_BMV_BatteryVoltageMin101_oBMV_oJ1939_bms_e9469128_Tx 445u
#define ComConf_ComSignal_BMV_BatteryVoltageMin102_oBMV_oJ1939_bms_badccaac_Tx 446u
#define ComConf_ComSignal_BMV_BatteryVoltageMin103_oBMV_oJ1939_bms_3d7a01ef_Tx 447u
#define ComConf_ComSignal_BMV_BatteryVoltageMin104_oBMV_oJ1939_bms_1de87da4_Tx 448u
#define ComConf_ComSignal_BMV_BatteryVoltageMin105_oBMV_oJ1939_bms_9a4eb6e7_Tx 449u
#define ComConf_ComSignal_BMV_BatteryVoltageMin106_oBMV_oJ1939_bms_c9d4ed63_Tx 450u
#define ComConf_ComSignal_BMV_BatteryVoltageMin107_oBMV_oJ1939_bms_4e722620_Tx 451u
#define ComConf_ComSignal_BMV_BatteryVoltageMin108_oBMV_oJ1939_bms_88f015f5_Tx 452u
#define ComConf_ComSignal_BMV_BatteryVoltageMin109_oBMV_oJ1939_bms_0f56deb6_Tx 453u
#define ComConf_ComSignal_BMV_BatteryVoltageMin110_oBMV_oJ1939_bms_81b2ec8a_Tx 454u
#define ComConf_ComSignal_BMV_BatteryVoltageMin111_oBMV_oJ1939_bms_061427c9_Tx 455u
#define ComConf_ComSignal_BMV_BatteryVoltageMin112_oBMV_oJ1939_bms_558e7c4d_Tx 456u
#define ComConf_ComSignal_BMV_BatteryVoltageMin113_oBMV_oJ1939_bms_d228b70e_Tx 457u
#define ComConf_ComSignal_BMV_BatteryVoltageMin114_oBMV_oJ1939_bms_f2bacb45_Tx 458u
#define ComConf_ComSignal_BMV_BatteryVoltageMin115_oBMV_oJ1939_bms_751c0006_Tx 459u
#define ComConf_ComSignal_BMV_BatteryVoltageMin116_oBMV_oJ1939_bms_26865b82_Tx 460u
#define ComConf_ComSignal_BMV_BatteryVoltageMin117_oBMV_oJ1939_bms_a12090c1_Tx 461u
#define ComConf_ComSignal_BMV_BatteryVoltageMin118_oBMV_oJ1939_bms_67a2a314_Tx 462u
#define ComConf_ComSignal_BMV_BatteryVoltageMin119_oBMV_oJ1939_bms_e0046857_Tx 463u
#define ComConf_ComSignal_BMV_BatteryVoltageMin120_oBMV_oJ1939_bms_6b3431e8_Tx 464u
#define ComConf_ComSignal_BMV_BatteryVoltageMin121_oBMV_oJ1939_bms_ec92faab_Tx 465u
#define ComConf_ComSignal_BMV_BatteryVoltageMin122_oBMV_oJ1939_bms_bf08a12f_Tx 466u
#define ComConf_ComSignal_BMV_BatteryVoltageMin123_oBMV_oJ1939_bms_38ae6a6c_Tx 467u
#define ComConf_ComSignal_BMV_BatteryVoltageMin124_oBMV_oJ1939_bms_183c1627_Tx 468u
#define ComConf_ComSignal_BMV_BatteryVoltageMin125_oBMV_oJ1939_bms_9f9add64_Tx 469u
#define ComConf_ComSignal_BMV_BatteryVoltageMin126_oBMV_oJ1939_bms_cc0086e0_Tx 470u
#define ComConf_ComSignal_BMV_BatteryVoltageMin127_oBMV_oJ1939_bms_4ba64da3_Tx 471u
#define ComConf_ComSignal_BMV_BatteryVoltageMin128_oBMV_oJ1939_bms_8d247e76_Tx 472u
#define ComConf_ComSignal_BMV_BatteryVoltageMin129_oBMV_oJ1939_bms_0a82b535_Tx 473u
#define ComConf_ComSignal_BMV_BatteryVoltageMin130_oBMV_oJ1939_bms_84668709_Tx 474u
#define ComConf_ComSignal_BMV_BatteryVoltageMin131_oBMV_oJ1939_bms_03c04c4a_Tx 475u
#define ComConf_ComSignal_BMV_BatteryVoltageMin132_oBMV_oJ1939_bms_505a17ce_Tx 476u
#define ComConf_ComSignal_BMV_BatteryVoltageMin133_oBMV_oJ1939_bms_d7fcdc8d_Tx 477u
#define ComConf_ComSignal_BMV_BatteryVoltageMin134_oBMV_oJ1939_bms_f76ea0c6_Tx 478u
#define ComConf_ComSignal_BMV_BatteryVoltageMin135_oBMV_oJ1939_bms_70c86b85_Tx 479u
#define ComConf_ComSignal_BMV_BatteryVoltageMin136_oBMV_oJ1939_bms_23523001_Tx 480u
#define ComConf_ComSignal_BMV_BatteryVoltageMin137_oBMV_oJ1939_bms_a4f4fb42_Tx 481u
#define ComConf_ComSignal_BMV_BatteryVoltageMin138_oBMV_oJ1939_bms_6276c897_Tx 482u
#define ComConf_ComSignal_BMV_BatteryVoltageMin139_oBMV_oJ1939_bms_e5d003d4_Tx 483u
#define ComConf_ComSignal_BMV_BatteryVoltageMin140_oBMV_oJ1939_bms_65488d6d_Tx 484u
#define ComConf_ComSignal_BMV_BatteryVoltageMin141_oBMV_oJ1939_bms_e2ee462e_Tx 485u
#define ComConf_ComSignal_BMV_BatteryVoltageMin142_oBMV_oJ1939_bms_b1741daa_Tx 486u
#define ComConf_ComSignal_BMV_BatteryVoltageMin143_oBMV_oJ1939_bms_36d2d6e9_Tx 487u
#define ComConf_ComSignal_BMV_BatteryVoltageMin144_oBMV_oJ1939_bms_1640aaa2_Tx 488u
#define ComConf_ComSignal_BMV_BatteryVoltageMin145_oBMV_oJ1939_bms_91e661e1_Tx 489u
#define ComConf_ComSignal_BMV_BatteryVoltageMin146_oBMV_oJ1939_bms_c27c3a65_Tx 490u
#define ComConf_ComSignal_BMV_BatteryVoltageMin147_oBMV_oJ1939_bms_45daf126_Tx 491u
#define ComConf_ComSignal_BMV_BatteryVoltageMin148_oBMV_oJ1939_bms_8358c2f3_Tx 492u
#define ComConf_ComSignal_BMV_BatteryVoltageMin149_oBMV_oJ1939_bms_04fe09b0_Tx 493u
#define ComConf_ComSignal_BMV_BatteryVoltageMin150_oBMV_oJ1939_bms_8a1a3b8c_Tx 494u
#define ComConf_ComSignal_BMV_BatteryVoltageMin151_oBMV_oJ1939_bms_0dbcf0cf_Tx 495u
#define ComConf_ComSignal_BMV_BatteryVoltageMin152_oBMV_oJ1939_bms_5e26ab4b_Tx 496u
#define ComConf_ComSignal_BMV_BatteryVoltageMin153_oBMV_oJ1939_bms_d9806008_Tx 497u
#define ComConf_ComSignal_BMV_BatteryVoltageMin154_oBMV_oJ1939_bms_f9121c43_Tx 498u
#define ComConf_ComSignal_BMV_BatteryVoltageMin155_oBMV_oJ1939_bms_7eb4d700_Tx 499u
#define ComConf_ComSignal_BMV_BatteryVoltageMin156_oBMV_oJ1939_bms_2d2e8c84_Tx 500u
#define ComConf_ComSignal_BMV_BatteryVoltageMin157_oBMV_oJ1939_bms_aa8847c7_Tx 501u
#define ComConf_ComSignal_BMV_BatteryVoltageMin158_oBMV_oJ1939_bms_6c0a7412_Tx 502u
#define ComConf_ComSignal_BMV_BatteryVoltageMin159_oBMV_oJ1939_bms_ebacbf51_Tx 503u
#define ComConf_ComSignal_BMV_BatteryVoltageMin160_oBMV_oJ1939_bms_609ce6ee_Tx 504u
#define ComConf_ComSignal_BMV_BatteryVoltageMin161_oBMV_oJ1939_bms_e73a2dad_Tx 505u
#define ComConf_ComSignal_BMV_BatteryVoltageMin162_oBMV_oJ1939_bms_b4a07629_Tx 506u
#define ComConf_ComSignal_BMV_BatteryVoltageMin163_oBMV_oJ1939_bms_3306bd6a_Tx 507u
#define ComConf_ComSignal_BMV_BatteryVoltageMin164_oBMV_oJ1939_bms_1394c121_Tx 508u
#define ComConf_ComSignal_BMV_BatteryVoltageMin165_oBMV_oJ1939_bms_94320a62_Tx 509u
#define ComConf_ComSignal_BMV_BatteryVoltageMin166_oBMV_oJ1939_bms_c7a851e6_Tx 510u
#define ComConf_ComSignal_BMV_BatteryVoltageMin167_oBMV_oJ1939_bms_400e9aa5_Tx 511u
#define ComConf_ComSignal_BMV_BatteryVoltageMin168_oBMV_oJ1939_bms_868ca970_Tx 512u
#define ComConf_ComSignal_BMV_BatteryVoltageMin169_oBMV_oJ1939_bms_012a6233_Tx 513u
#define ComConf_ComSignal_BMV_BatteryVoltageMin170_oBMV_oJ1939_bms_8fce500f_Tx 514u
#define ComConf_ComSignal_BMV_BatteryVoltageMin171_oBMV_oJ1939_bms_08689b4c_Tx 515u
#define ComConf_ComSignal_BMV_BatteryVoltageMin172_oBMV_oJ1939_bms_5bf2c0c8_Tx 516u
#define ComConf_ComSignal_BMV_BatteryVoltageMin173_oBMV_oJ1939_bms_dc540b8b_Tx 517u
#define ComConf_ComSignal_BMV_BatteryVoltageMin174_oBMV_oJ1939_bms_fcc677c0_Tx 518u
#define ComConf_ComSignal_BMV_BatteryVoltageMin175_oBMV_oJ1939_bms_7b60bc83_Tx 519u
#define ComConf_ComSignal_BMV_BatteryVoltageMin176_oBMV_oJ1939_bms_28fae707_Tx 520u
#define ComConf_ComSignal_BMV_BatteryVoltageMin177_oBMV_oJ1939_bms_af5c2c44_Tx 521u
#define ComConf_ComSignal_BMV_BatteryVoltageMin178_oBMV_oJ1939_bms_69de1f91_Tx 522u
#define ComConf_ComSignal_BMV_BatteryVoltageMin179_oBMV_oJ1939_bms_ee78d4d2_Tx 523u
#define ComConf_ComSignal_BMV_BatteryVoltageMin180_oBMV_oJ1939_bms_79b1f467_Tx 524u
#define ComConf_ComSignal_BMV_BatteryVoltageMin181_oBMV_oJ1939_bms_fe173f24_Tx 525u
#define ComConf_ComSignal_BMV_BatteryVoltageMin182_oBMV_oJ1939_bms_ad8d64a0_Tx 526u
#define ComConf_ComSignal_BMV_BatteryVoltageMin183_oBMV_oJ1939_bms_2a2bafe3_Tx 527u
#define ComConf_ComSignal_BMV_BatteryVoltageMin184_oBMV_oJ1939_bms_0ab9d3a8_Tx 528u
#define ComConf_ComSignal_BMV_BatteryVoltageMin185_oBMV_oJ1939_bms_8d1f18eb_Tx 529u
#define ComConf_ComSignal_BMV_BatteryVoltageMin186_oBMV_oJ1939_bms_de85436f_Tx 530u
#define ComConf_ComSignal_BMV_BatteryVoltageMin187_oBMV_oJ1939_bms_5923882c_Tx 531u
#define ComConf_ComSignal_BMV_BatteryVoltageMin188_oBMV_oJ1939_bms_9fa1bbf9_Tx 532u
#define ComConf_ComSignal_BMV_BatteryVoltageMin189_oBMV_oJ1939_bms_180770ba_Tx 533u
#define ComConf_ComSignal_BMV_BatteryVoltageMin190_oBMV_oJ1939_bms_96e34286_Tx 534u
#define ComConf_ComSignal_BMV_BatteryVoltageMin191_oBMV_oJ1939_bms_114589c5_Tx 535u
#define ComConf_ComSignal_BMV_BatteryVoltageMin192_oBMV_oJ1939_bms_42dfd241_Tx 536u
#define ComConf_ComSignal_BMV_BatteryVoltageMin193_oBMV_oJ1939_bms_c5791902_Tx 537u
#define ComConf_ComSignal_BMV_BatteryVoltageMin194_oBMV_oJ1939_bms_e5eb6549_Tx 538u
#define ComConf_ComSignal_BMV_BatteryVoltageMin195_oBMV_oJ1939_bms_624dae0a_Tx 539u
#define ComConf_ComSignal_BMV_BatteryVoltageMin196_oBMV_oJ1939_bms_31d7f58e_Tx 540u
#define ComConf_ComSignal_BMV_BatteryVoltageMin197_oBMV_oJ1939_bms_b6713ecd_Tx 541u
#define ComConf_ComSignal_BMV_BatteryVoltageMin198_oBMV_oJ1939_bms_70f30d18_Tx 542u
#define ComConf_ComSignal_BMV_BatteryVoltageMin199_oBMV_oJ1939_bms_f755c65b_Tx 543u
#define ComConf_ComSignal_BMV_BatteryVoltageMin200_oBMV_oJ1939_bms_cdb6dcc2_Tx 544u
#define ComConf_ComSignal_BMV_BatteryVoltageMin201_oBMV_oJ1939_bms_4a101781_Tx 545u
#define ComConf_ComSignal_BMV_BatteryVoltageMin202_oBMV_oJ1939_bms_198a4c05_Tx 546u
#define ComConf_ComSignal_BMV_BatteryVoltageMin203_oBMV_oJ1939_bms_9e2c8746_Tx 547u
#define ComConf_ComSignal_BMV_BatteryVoltageMin204_oBMV_oJ1939_bms_bebefb0d_Tx 548u
#define ComConf_ComSignal_BMV_BatteryVoltageMin205_oBMV_oJ1939_bms_3918304e_Tx 549u
#define ComConf_ComSignal_BMV_BatteryVoltageMin206_oBMV_oJ1939_bms_6a826bca_Tx 550u
#define ComConf_ComSignal_BMV_BatteryVoltageMin207_oBMV_oJ1939_bms_ed24a089_Tx 551u
#define ComConf_ComSignal_BMV_BatteryVoltageMin208_oBMV_oJ1939_bms_2ba6935c_Tx 552u
#define ComConf_ComSignal_BMV_BatteryVoltageMin209_oBMV_oJ1939_bms_ac00581f_Tx 553u
#define ComConf_ComSignal_BMV_BatteryVoltageMin210_oBMV_oJ1939_bms_22e46a23_Tx 554u
#define ComConf_ComSignal_BMV_BatteryVoltageMin211_oBMV_oJ1939_bms_a542a160_Tx 555u
#define ComConf_ComSignal_BMV_BatteryVoltageMin212_oBMV_oJ1939_bms_f6d8fae4_Tx 556u
#define ComConf_ComSignal_BMV_BatteryVoltageMin213_oBMV_oJ1939_bms_717e31a7_Tx 557u
#define ComConf_ComSignal_BMV_BatteryVoltageMin214_oBMV_oJ1939_bms_51ec4dec_Tx 558u
#define ComConf_ComSignal_BMV_BatteryVoltageMin215_oBMV_oJ1939_bms_d64a86af_Tx 559u
#define ComConf_ComSignal_BMV_BatteryVoltageMin216_oBMV_oJ1939_bms_85d0dd2b_Tx 560u
#define ComConf_ComSignal_BMV_BatteryVoltageMin217_oBMV_oJ1939_bms_02761668_Tx 561u
#define ComConf_ComSignal_BMV_BatteryVoltageMin218_oBMV_oJ1939_bms_c4f425bd_Tx 562u
#define ComConf_ComSignal_BMV_BatteryVoltageMin219_oBMV_oJ1939_bms_4352eefe_Tx 563u
#define ComConf_ComSignal_BMV_BatteryVoltageMin220_oBMV_oJ1939_bms_c862b741_Tx 564u
#define ComConf_ComSignal_BMV_BatteryVoltageMin221_oBMV_oJ1939_bms_4fc47c02_Tx 565u
#define ComConf_ComSignal_BMV_BatteryVoltageMin222_oBMV_oJ1939_bms_1c5e2786_Tx 566u
#define ComConf_ComSignal_BMV_BatteryVoltageMin223_oBMV_oJ1939_bms_9bf8ecc5_Tx 567u
#define ComConf_ComSignal_BMV_BatteryVoltageMin224_oBMV_oJ1939_bms_bb6a908e_Tx 568u
#define ComConf_ComSignal_BMV_BatteryVoltageMin225_oBMV_oJ1939_bms_3ccc5bcd_Tx 569u
#define ComConf_ComSignal_BMV_BatteryVoltageMin226_oBMV_oJ1939_bms_6f560049_Tx 570u
#define ComConf_ComSignal_BMV_BatteryVoltageMin227_oBMV_oJ1939_bms_e8f0cb0a_Tx 571u
#define ComConf_ComSignal_BMV_BatteryVoltageMin228_oBMV_oJ1939_bms_2e72f8df_Tx 572u
#define ComConf_ComSignal_BMV_BatteryVoltageMin229_oBMV_oJ1939_bms_a9d4339c_Tx 573u
#define ComConf_ComSignal_BMV_BatteryVoltageMin230_oBMV_oJ1939_bms_273001a0_Tx 574u
#define ComConf_ComSignal_BMV_BatteryVoltageMin231_oBMV_oJ1939_bms_a096cae3_Tx 575u
#define ComConf_ComSignal_BMV_BatteryVoltageMin232_oBMV_oJ1939_bms_f30c9167_Tx 576u
#define ComConf_ComSignal_BMV_BatteryVoltageMin233_oBMV_oJ1939_bms_74aa5a24_Tx 577u
#define ComConf_ComSignal_BMV_BatteryVoltageMin234_oBMV_oJ1939_bms_5438266f_Tx 578u
#define ComConf_ComSignal_BMV_BatteryVoltageMin235_oBMV_oJ1939_bms_d39eed2c_Tx 579u
#define ComConf_ComSignal_BMV_BatteryVoltageMin236_oBMV_oJ1939_bms_8004b6a8_Tx 580u
#define ComConf_ComSignal_BMV_BatteryVoltageMin237_oBMV_oJ1939_bms_07a27deb_Tx 581u
#define ComConf_ComSignal_BMV_BatteryVoltageMin238_oBMV_oJ1939_bms_c1204e3e_Tx 582u
#define ComConf_ComSignal_BMV_BatteryVoltageMin239_oBMV_oJ1939_bms_4686857d_Tx 583u
#define ComConf_ComSignal_BMV_BatteryVoltageMin240_oBMV_oJ1939_bms_c61e0bc4_Tx 584u
#define ComConf_ComSignal_BMV_BatteryVoltageMin241_oBMV_oJ1939_bms_41b8c087_Tx 585u
#define ComConf_ComSignal_BMV_BatteryVoltageMin242_oBMV_oJ1939_bms_12229b03_Tx 586u
#define ComConf_ComSignal_BMV_BatteryVoltageMin243_oBMV_oJ1939_bms_95845040_Tx 587u
#define ComConf_ComSignal_BMV_BatteryVoltageMin244_oBMV_oJ1939_bms_b5162c0b_Tx 588u
#define ComConf_ComSignal_BMV_BatteryVoltageMin245_oBMV_oJ1939_bms_32b0e748_Tx 589u
#define ComConf_ComSignal_BMV_BatteryVoltageMin246_oBMV_oJ1939_bms_612abccc_Tx 590u
#define ComConf_ComSignal_BMV_BatteryVoltageMin247_oBMV_oJ1939_bms_e68c778f_Tx 591u
#define ComConf_ComSignal_BMV_BatteryVoltageMin248_oBMV_oJ1939_bms_200e445a_Tx 592u
#define ComConf_ComSignal_BMV_BatteryVoltageMin249_oBMV_oJ1939_bms_a7a88f19_Tx 593u
#define ComConf_ComSignal_BMV_BatteryVoltageMin250_oBMV_oJ1939_bms_294cbd25_Tx 594u
#define ComConf_ComSignal_BMV_BatteryVoltageMin251_oBMV_oJ1939_bms_aeea7666_Tx 595u
#define ComConf_ComSignal_BMV_BatteryVoltageMin252_oBMV_oJ1939_bms_fd702de2_Tx 596u
#define ComConf_ComSignal_BMV_BatteryVoltageMin253_oBMV_oJ1939_bms_7ad6e6a1_Tx 597u
#define ComConf_ComSignal_BMV_BatteryVoltageMin254_oBMV_oJ1939_bms_5a449aea_Tx 598u
#define ComConf_ComSignal_BMV_BatteryVoltageMin255_oBMV_oJ1939_bms_dde251a9_Tx 599u
#define ComConf_ComSignal_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx 600u
#define ComConf_ComSignal_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx 601u
#define ComConf_ComSignal_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx 602u
#define ComConf_ComSignal_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx 603u
#define ComConf_ComSignal_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx 604u
#define ComConf_ComSignal_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx   605u
#define ComConf_ComSignal_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx 606u
#define ComConf_ComSignal_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx 607u
#define ComConf_ComSignal_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx 608u
#define ComConf_ComSignal_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx 609u
#define ComConf_ComSignal_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx 610u
#define ComConf_ComSignal_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx 611u
#define ComConf_ComSignal_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx 612u
#define ComConf_ComSignal_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx 613u
#define ComConf_ComSignal_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx 614u
#define ComConf_ComSignal_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx    615u
#define ComConf_ComSignal_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx 616u
#define ComConf_ComSignal_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx 617u
#define ComConf_ComSignal_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx 618u
#define ComConf_ComSignal_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx 619u
#define ComConf_ComSignal_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx 620u
#define ComConf_ComSignal_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx 621u
#define ComConf_ComSignal_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx 622u
#define ComConf_ComSignal_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx 623u
#define ComConf_ComSignal_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx 624u
#define ComConf_ComSignal_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx 625u
#define ComConf_ComSignal_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx 626u
#define ComConf_ComSignal_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx 627u
#define ComConf_ComSignal_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx 628u
#define ComConf_ComSignal_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx 629u
#define ComConf_ComSignal_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx 630u
#define ComConf_ComSignal_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx         631u
#define ComConf_ComSignal_BSOC_0_oBSOC_oJ1939_bms_27d57239_Tx         632u
#define ComConf_ComSignal_BSOC_1_oBSOC_oJ1939_bms_c887c4d8_Tx         633u
#define ComConf_ComSignal_BSOC_2_oBSOC_oJ1939_bms_220119ba_Tx         634u
#define ComConf_ComSignal_BSOC_3_oBSOC_oJ1939_bms_cd53af5b_Tx         635u
#define ComConf_ComSignal_BSOC_4_oBSOC_oJ1939_bms_2c7da53f_Tx         636u
#define ComConf_ComSignal_BSOC_5_oBSOC_oJ1939_bms_c32f13de_Tx         637u
#define ComConf_ComSignal_BSOC_6_oBSOC_oJ1939_bms_29a9cebc_Tx         638u
#define ComConf_ComSignal_BSOC_7_oBSOC_oJ1939_bms_c6fb785d_Tx         639u
#define ComConf_ComSignal_BSOC_8_oBSOC_oJ1939_bms_3084dc35_Tx         640u
#define ComConf_ComSignal_BSOC_9_oBSOC_oJ1939_bms_dfd66ad4_Tx         641u
#define ComConf_ComSignal_BSOC_10_oBSOC_oJ1939_bms_69437fbc_Tx        642u
#define ComConf_ComSignal_BSOC_11_oBSOC_oJ1939_bms_8611c95d_Tx        643u
#define ComConf_ComSignal_BSOC_12_oBSOC_oJ1939_bms_6c97143f_Tx        644u
#define ComConf_ComSignal_BSOC_13_oBSOC_oJ1939_bms_83c5a2de_Tx        645u
#define ComConf_ComSignal_BSOC_14_oBSOC_oJ1939_bms_62eba8ba_Tx        646u
#define ComConf_ComSignal_BSOC_15_oBSOC_oJ1939_bms_8db91e5b_Tx        647u
#define ComConf_ComSignal_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx 648u
#define ComConf_ComSignal_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx 649u
#define ComConf_ComSignal_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx 650u
#define ComConf_ComSignal_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx 651u
#define ComConf_ComSignal_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx 652u
#define ComConf_ComSignal_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx 653u
#define ComConf_ComSignal_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx 654u
#define ComConf_ComSignal_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx 655u
#define ComConf_ComSignal_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx 656u
#define ComConf_ComSignal_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx 657u
#define ComConf_ComSignal_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx 658u
#define ComConf_ComSignal_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx 659u
#define ComConf_ComSignal_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx 660u
#define ComConf_ComSignal_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx 661u
#define ComConf_ComSignal_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx 662u
#define ComConf_ComSignal_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx 663u
#define ComConf_ComSignal_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx 664u
#define ComConf_ComSignal_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx 665u
#define ComConf_ComSignal_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx 666u
#define ComConf_ComSignal_EXT_PWM_IN1_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_92760a96_Tx 667u
#define ComConf_ComSignal_EXT_PWM_IN1_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_c46a50e4_Tx 668u
#define ComConf_ComSignal_EXT_PWM_IN2_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_5b42119b_Tx 669u
#define ComConf_ComSignal_EXT_PWM_IN2_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_fba12e71_Tx 670u
#define ComConf_ComSignal_Ext_IN2_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_a925e19e_Tx 671u
#define ComConf_ComSignal_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx 862u
#define ComConf_ComSignal_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx 863u
#define ComConf_ComSignal_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx 864u
#define ComConf_ComSignal_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx 865u
#define ComConf_ComSignal_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx 866u
#define ComConf_ComSignal_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx 867u
#define ComConf_ComSignal_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx 868u
#define ComConf_ComSignal_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx 869u
#define ComConf_ComSignal_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx 870u
#define ComConf_ComSignal_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx 871u
#define ComConf_ComSignal_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx 872u
#define ComConf_ComSignal_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx 873u
#define ComConf_ComSignal_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx 874u
#define ComConf_ComSignal_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx 875u
#define ComConf_ComSignal_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx 876u
#define ComConf_ComSignal_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx 877u
#define ComConf_ComSignal_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx 878u
#define ComConf_ComSignal_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx 879u
#define ComConf_ComSignal_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx 880u
#define ComConf_ComSignal_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx 881u
#define ComConf_ComSignal_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx 882u
#define ComConf_ComSignal_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx 883u
#define ComConf_ComSignal_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx 884u
#define ComConf_ComSignal_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx 885u
#define ComConf_ComSignal_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx 886u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig0_oVcuCan12TxMsg1_oATOM_CAN_XCP_777aa5f3_Tx 887u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig1_oVcuCan12TxMsg1_oATOM_CAN_XCP_799d4d22_Tx 888u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig2_oVcuCan12TxMsg1_oATOM_CAN_XCP_6ab57451_Tx 889u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig3_oVcuCan12TxMsg1_oATOM_CAN_XCP_64529c80_Tx 890u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig0_oVcu_Lin0_TxMsg1_oATOM_HWLIN4_24a53a7e_Tx 891u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig1_oVcu_Lin0_TxMsg1_oATOM_HWLIN4_2a42d2af_Tx 892u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig2_oVcu_Lin0_TxMsg1_oATOM_HWLIN4_396aebdc_Tx 893u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig3_oVcu_Lin0_TxMsg1_oATOM_HWLIN4_378d030d_Tx 894u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig0_oVcu_Lin0_TxMsg2_oATOM_HWLIN4_3c24645b_Tx 895u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig1_oVcu_Lin0_TxMsg2_oATOM_HWLIN4_32c38c8a_Tx 896u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig2_oVcu_Lin0_TxMsg2_oATOM_HWLIN4_21ebb5f9_Tx 897u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig3_oVcu_Lin0_TxMsg2_oATOM_HWLIN4_2f0c5d28_Tx 898u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig0_oVcu_Lin3_TxMsg1_oATOM_HWLIN3_08eb3633_Tx 899u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig1_oVcu_Lin3_TxMsg1_oATOM_HWLIN3_060cdee2_Tx 900u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig2_oVcu_Lin3_TxMsg1_oATOM_HWLIN3_1524e791_Tx 901u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg1_Sig3_oVcu_Lin3_TxMsg1_oATOM_HWLIN3_1bc30f40_Tx 902u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig0_oVcu_Lin3_TxMsg2_oATOM_HWLIN3_106a6816_Tx 903u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig1_oVcu_Lin3_TxMsg2_oATOM_HWLIN3_1e8d80c7_Tx 904u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig2_oVcu_Lin3_TxMsg2_oATOM_HWLIN3_0da5b9b4_Tx 905u
#define ComConf_ComSignal_Vcu_Lin3_TxMsg2_Sig3_oVcu_Lin3_TxMsg2_oATOM_HWLIN3_03425165_Tx 906u
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
#define ComConf_ComSignalGroup_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx 40u
#define ComConf_ComSignalGroup_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx 41u
#define ComConf_ComSignalGroup_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx 42u
#define ComConf_ComSignalGroup_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx 43u
#define ComConf_ComSignalGroup_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx 44u
#define ComConf_ComSignalGroup_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx 45u
#define ComConf_ComSignalGroup_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx 46u
#define ComConf_ComSignalGroup_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx 47u
#define ComConf_ComSignalGroup_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx 48u
#define ComConf_ComSignalGroup_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx 49u
#define ComConf_ComSignalGroup_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx 50u
#define ComConf_ComSignalGroup_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx 51u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx 52u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx 53u
#define ComConf_ComSignalGroup_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx 54u
#define ComConf_ComSignalGroup_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx 55u
#define ComConf_ComSignalGroup_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx 56u
#define ComConf_ComSignalGroup_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx 57u
#define ComConf_ComSignalGroup_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx 58u
#define ComConf_ComSignalGroup_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx 59u
#define ComConf_ComSignalGroup_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx 60u
#define ComConf_ComSignalGroup_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx 61u
#define ComConf_ComSignalGroup_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx 62u
#define ComConf_ComSignalGroup_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx 63u
#define ComConf_ComSignalGroup_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx 64u
#define ComConf_ComSignalGroup_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx 65u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx 66u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx 67u
#define ComConf_ComSignalGroup_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx 68u
#define ComConf_ComSignalGroup_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx 69u
#define ComConf_ComSignalGroup_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx 70u
#define ComConf_ComSignalGroup_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx 71u
#define ComConf_ComSignalGroup_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx 72u
#define ComConf_ComSignalGroup_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx 73u
#define ComConf_ComSignalGroup_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx 74u
#define ComConf_ComSignalGroup_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx 75u
#define ComConf_ComSignalGroup_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx 76u
#define ComConf_ComSignalGroup_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx 77u
#define ComConf_ComSignalGroup_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx 78u
#define ComConf_ComSignalGroup_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx 79u
#define ComConf_ComSignalGroup_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx 80u
#define ComConf_ComSignalGroup_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx 81u
#define ComConf_ComSignalGroup_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx 82u
#define ComConf_ComSignalGroup_SG_Uds_EPT_Boot_Request_SigGroup_oUds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_1855e222_Rx 83u
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
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN1_Rx_a50aaae7             5u
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN1_Tx_f3500d61             6u
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN3_Rx_0f03626c             7u
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN3_Tx_5959c5ea             8u
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN4_Rx_92d45ad5             9u
#define ComConf_ComIPduGroup_VCU_oATOM_HWLIN4_Tx_c48efd53             10u
#define ComConf_ComIPduGroup_VCU_oJ1939_bms_Rx_0xF4_eb99090d          11u
#define ComConf_ComIPduGroup_VCU_oJ1939_bms_Tx_0xF4_88493c37          12u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c         13u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda         14u
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

