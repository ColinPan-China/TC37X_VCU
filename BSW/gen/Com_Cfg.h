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
 *   Generation Time: 2025-06-18 09:54:38
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
#define COM_TX_CONFIRMATION_API              STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSignalGateway] || /ActiveEcuC/Com/ComGeneral[0:ComDescriptionGateway] */
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT   2U
#define COM_SUPPORTED_IPDU_GROUPS            10uL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

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
#define ComConf_ComGroupSignal_Checksum_0BC_oIBS_Status_06_oTC37X_VCU_CAN01_586aa482_Rx 61u
#define ComConf_ComGroupSignal_IBS_AVHSts_oIBS_Status_06_oTC37X_VCU_CAN01_3d334918_Rx 62u
#define ComConf_ComGroupSignal_IBS_BrakeFluidWarning_oIBS_Status_06_oTC37X_VCU_CAN01_4cdf2121_Rx 63u
#define ComConf_ComGroupSignal_IBS_EPBFailureStatus_oIBS_Status_06_oTC37X_VCU_CAN01_ba4d18ec_Rx 64u
#define ComConf_ComGroupSignal_IBS_ESCOffSts_oIBS_Status_06_oTC37X_VCU_CAN01_8a954749_Rx 65u
#define ComConf_ComGroupSignal_IBS_ESClampdisplay_oIBS_Status_06_oTC37X_VCU_CAN01_d7918b4f_Rx 66u
#define ComConf_ComGroupSignal_IBS_FactoryMode_oIBS_Status_06_oTC37X_VCU_CAN01_a9ca1443_Rx 67u
#define ComConf_ComGroupSignal_IBS_HBAActive_oIBS_Status_06_oTC37X_VCU_CAN01_35d2723b_Rx 68u
#define ComConf_ComGroupSignal_IBS_HDCSts_oIBS_Status_06_oTC37X_VCU_CAN01_ab37f07e_Rx 69u
#define ComConf_ComGroupSignal_IBS_MaintenaceMode_oIBS_Status_06_oTC37X_VCU_CAN01_896255a7_Rx 70u
#define ComConf_ComGroupSignal_IBS_RWUActive_oIBS_Status_06_oTC37X_VCU_CAN01_10c4a4b9_Rx 71u
#define ComConf_ComGroupSignal_IBS_RWUAvailable_oIBS_Status_06_oTC37X_VCU_CAN01_7502d327_Rx 72u
#define ComConf_ComGroupSignal_IBS_RollerbenchMode_oIBS_Status_06_oTC37X_VCU_CAN01_c388d2a8_Rx 73u
#define ComConf_ComGroupSignal_IBS_TPMS_ResetSts_oIBS_Status_06_oTC37X_VCU_CAN01_63f516d0_Rx 74u
#define ComConf_ComGroupSignal_IBS_TireMonSysSts_oIBS_Status_06_oTC37X_VCU_CAN01_16b044b2_Rx 75u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntLe_oIBS_Status_06_oTC37X_VCU_CAN01_1e67f6ea_Rx 76u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntRi_oIBS_Status_06_oTC37X_VCU_CAN01_a8904419_Rx 77u
#define ComConf_ComGroupSignal_IBS_TireWarnReLe_oIBS_Status_06_oTC37X_VCU_CAN01_38e70e6d_Rx 78u
#define ComConf_ComGroupSignal_IBS_TireWarnReRi_oIBS_Status_06_oTC37X_VCU_CAN01_8e10bc9e_Rx 79u
#define ComConf_ComGroupSignal_MessageCounter_0BC_oIBS_Status_06_oTC37X_VCU_CAN01_99ce1b8a_Rx 80u
#define ComConf_ComSignal_A_I_Actuator_With_F_B_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_0324126f_Rx 0u
#define ComConf_ComSignal_Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx 1u
#define ComConf_ComSignal_Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx 2u
#define ComConf_ComSignal_Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx 3u
#define ComConf_ComSignal_COOLING_FAN_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_282b4f5d_Rx 4u
#define ComConf_ComSignal_Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx 5u
#define ComConf_ComSignal_EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx 6u
#define ComConf_ComSignal_EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx 7u
#define ComConf_ComSignal_EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx 8u
#define ComConf_ComSignal_EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx 9u
#define ComConf_ComSignal_EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx 10u
#define ComConf_ComSignal_EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx 11u
#define ComConf_ComSignal_EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx 12u
#define ComConf_ComSignal_EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx 13u
#define ComConf_ComSignal_EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx 14u
#define ComConf_ComSignal_EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx 15u
#define ComConf_ComSignal_EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx 16u
#define ComConf_ComSignal_EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx 17u
#define ComConf_ComSignal_EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx    18u
#define ComConf_ComSignal_EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx 19u
#define ComConf_ComSignal_EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx 20u
#define ComConf_ComSignal_EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx 21u
#define ComConf_ComSignal_EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx 22u
#define ComConf_ComSignal_EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx 23u
#define ComConf_ComSignal_EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx 24u
#define ComConf_ComSignal_EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx 25u
#define ComConf_ComSignal_HVAC_Blower_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_ea1e3327_Rx 26u
#define ComConf_ComSignal_HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx 27u
#define ComConf_ComSignal_HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx 28u
#define ComConf_ComSignal_HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx 29u
#define ComConf_ComSignal_HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx 30u
#define ComConf_ComSignal_HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx 31u
#define ComConf_ComSignal_HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx 32u
#define ComConf_ComSignal_HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx 33u
#define ComConf_ComSignal_HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx 34u
#define ComConf_ComSignal_HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx 35u
#define ComConf_ComSignal_HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx 36u
#define ComConf_ComSignal_HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx 37u
#define ComConf_ComSignal_HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx   38u
#define ComConf_ComSignal_HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx  39u
#define ComConf_ComSignal_HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx 40u
#define ComConf_ComSignal_HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx 41u
#define ComConf_ComSignal_HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx 42u
#define ComConf_ComSignal_LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx 43u
#define ComConf_ComSignal_Mode_Actuator_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_b0a0ba91_Rx 44u
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
#define ComConf_ComSignal_PNC_Can00_ComSignal_Rx                      59u
#define ComConf_ComSignal_RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx  60u
#define ComConf_ComSignal_SV1_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_a1028998_Rx 81u
#define ComConf_ComSignal_SV2_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_424b3e3a_Rx 82u
#define ComConf_ComSignal_SV3_request_oVCU_Minor_03_oKAMA_FP_EPT_0303_aa5cae9b_Rx 83u
#define ComConf_ComSignal_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx 84u
#define ComConf_ComSignal_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx 85u
#define ComConf_ComSignal_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx 86u
#define ComConf_ComSignal_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx 87u
#define ComConf_ComSignal_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx 88u
#define ComConf_ComSignal_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx 89u
#define ComConf_ComSignal_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx 90u
#define ComConf_ComSignal_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx 91u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_ab1f8c96_Rx 92u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx 93u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_8f9ddda0_Rx 94u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx 95u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_e21b2efa_Rx 96u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx 97u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_c6997fcc_Rx 98u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx 99u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_735765ea_Rx 100u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx 101u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_57d534dc_Rx 102u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx 103u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_3a53c786_Rx 104u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx 105u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_1ed196b0_Rx 106u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx 107u
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oTC37X_VCU_CAN01_71598f6f_Tx 44u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oTC37X_VCU_CAN01_4500c00c_Tx 45u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oTC37X_VCU_CAN01_1e026d66_Tx 46u
#define ComConf_ComGroupSignal_VCU_ActiveEnergyProfile_oVCU_BMS_oTC37X_VCU_CAN01_22cbfa40_Tx 47u
#define ComConf_ComGroupSignal_VCU_ActiveRgnBrkProfile_oVCU_BMS_oTC37X_VCU_CAN01_0363ef69_Tx 48u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oTC37X_VCU_CAN01_a0eafa9e_Tx 49u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_NegRelay_oVCU_BMS_oTC37X_VCU_CAN01_bc6cb144_Tx 50u
#define ComConf_ComGroupSignal_VCU_Chargestatus_oVCU_BMS_oTC37X_VCU_CAN01_1130fda5_Tx 51u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oTC37X_VCU_CAN01_e4aabe75_Tx 52u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oTC37X_VCU_CAN01_2f506c79_Tx 53u
#define ComConf_ComGroupSignal_VCU_IsomeasurmentSwitch_oVCU_BMS_oTC37X_VCU_CAN01_911803f5_Tx 54u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oTC37X_VCU_CAN01_2fc74514_Tx 55u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oTC37X_VCU_CAN01_d4db7fa5_Tx 56u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oTC37X_VCU_CAN01_3252df12_Tx 57u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oTC37X_VCU_CAN01_1d4d6e47_Tx 58u
#define ComConf_ComSignal_A_I_F_B_oVCU_Minor_01_oKAMA_FP_EPT_0303_576573ee_Tx 0u
#define ComConf_ComSignal_COMP_Pdis_oVCU_Minor_02_oKAMA_FP_EPT_0303_4bfdbd85_Tx 1u
#define ComConf_ComSignal_COMP_Psuc_oVCU_Minor_02_oKAMA_FP_EPT_0303_9659454d_Tx 2u
#define ComConf_ComSignal_COMP_Tdis_oVCU_Minor_02_oKAMA_FP_EPT_0303_73ade512_Tx 3u
#define ComConf_ComSignal_COMP_Tsuc_oVCU_Minor_02_oKAMA_FP_EPT_0303_ae091dda_Tx 4u
#define ComConf_ComSignal_Calibration_cmd_oVCU_SVA_CMD_oLIN00_6732180a_Tx 5u
#define ComConf_ComSignal_ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx 6u
#define ComConf_ComSignal_ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx 7u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Init_Rq_oEDCU_EXV2_oLIN00_0144aec9_Tx 8u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Move_Enbl_oEDCU_EXV2_oLIN00_d6797517_Tx 9u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx 10u
#define ComConf_ComSignal_EXT1_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_caf787ea_Tx 11u
#define ComConf_ComSignal_EXT2_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_9096b88a_Tx 12u
#define ComConf_ComSignal_EXT3_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_fae072f7_Tx 13u
#define ComConf_ComSignal_EXT4_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_ced21b28_Tx 14u
#define ComConf_ComSignal_EXT5_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_a170bad6_Tx 15u
#define ComConf_ComSignal_EXT6_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_fb1185b6_Tx 16u
#define ComConf_ComSignal_EXT7_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_9acf98cd_Tx 17u
#define ComConf_ComSignal_EXT8_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_725b5c6c_Tx 18u
#define ComConf_ComSignal_EXT9_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_1df9fd92_Tx 19u
#define ComConf_ComSignal_EXT10_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_ba532916_Tx 20u
#define ComConf_ComSignal_EXT11_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_d025e36b_Tx 21u
#define ComConf_ComSignal_EXT12_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_8a44dc0b_Tx 22u
#define ComConf_ComSignal_EXT13_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_e5e67df5_Tx 23u
#define ComConf_ComSignal_EXT14_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_d1d4142a_Tx 24u
#define ComConf_ComSignal_EXT15_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_a75ba75d_Tx 25u
#define ComConf_ComSignal_EXT16_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_fd3a983d_Tx 26u
#define ComConf_ComSignal_EXT_A_IN1_oVcuTxIoMsg1_oTC37X_VCU_CAN00_37348eff_Tx 27u
#define ComConf_ComSignal_EXT_A_IN2_oVcuTxIoMsg1_oTC37X_VCU_CAN00_241cb78c_Tx 28u
#define ComConf_ComSignal_EXT_A_IN3_oVcuTxIoMsg2_oTC37X_VCU_CAN00_c07d823f_Tx 29u
#define ComConf_ComSignal_EXT_A_IN4_oVcuTxIoMsg2_oTC37X_VCU_CAN00_e8ca1808_Tx 30u
#define ComConf_ComSignal_EXT_A_IN5_oVcuTxIoMsg3_oTC37X_VCU_CAN00_097f4638_Tx 31u
#define ComConf_ComSignal_EXT_A_IN6_oVcuTxIoMsg3_oTC37X_VCU_CAN00_1a577f4b_Tx 32u
#define ComConf_ComSignal_EXT_A_IN7_oVcuTxIoMsg4_oTC37X_VCU_CAN00_f59e9dfe_Tx 33u
#define ComConf_ComSignal_EXT_A_IN8_oVcuTxIoMsg4_oTC37X_VCU_CAN00_aa164141_Tx 34u
#define ComConf_ComSignal_EXT_A_IN9_oVcuTxIoMsg5_oTC37X_VCU_CAN00_4ba31f71_Tx 35u
#define ComConf_ComSignal_EXT_A_IN10_oVcuTxIoMsg5_oTC37X_VCU_CAN00_83e5b725_Tx 36u
#define ComConf_ComSignal_EXT_A_IN11_oVcuTxIoMsg6_oTC37X_VCU_CAN00_67848296_Tx 37u
#define ComConf_ComSignal_EXT_A_IN12_oVcuTxIoMsg6_oTC37X_VCU_CAN00_74acbbe5_Tx 38u
#define ComConf_ComSignal_EXT_A_IN13_oVcuTxIoMsg7_oTC37X_VCU_CAN00_9519e5d5_Tx 39u
#define ComConf_ComSignal_EXT_A_IN14_oVcuTxIoMsg7_oTC37X_VCU_CAN00_bdae7fe2_Tx 40u
#define ComConf_ComSignal_EXT_A_IN15_oVcuTxIoMsg8_oTC37X_VCU_CAN00_4536335b_Tx 41u
#define ComConf_ComSignal_EXT_A_IN16_oVcuTxIoMsg8_oTC37X_VCU_CAN00_561e0a28_Tx 42u
#define ComConf_ComSignal_MODE_F_B_oVCU_Minor_01_oKAMA_FP_EPT_0303_8d5db84c_Tx 43u
#define ComConf_ComSignal_TCU_HVCHMaxPowerLimit_oTCU_HVCH_Cmd_oLIN00_4bc53e0b_Tx 59u
#define ComConf_ComSignal_TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_Tx 60u
#define ComConf_ComSignal_TCU_HVCH_TmaxLim_output_oTCU_HVCH_Cmd_oLIN00_5e45d521_Tx 61u
#define ComConf_ComSignal_TCU_HVCH_heating_rq_oTCU_HVCH_Cmd_oLIN00_5e3a32b2_Tx 62u
#define ComConf_ComSignal_TMM_EXV1_EnableRequest_oVCU_EXV_1_oLIN00_d988d266_Tx 63u
#define ComConf_ComSignal_TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx 64u
#define ComConf_ComSignal_TMM_EXV1_initRequest_oVCU_EXV_1_oLIN00_082350ea_Tx 65u
#define ComConf_ComSignal_TMM_EXV2_EnableRequest_oVCU_EXV_2_oLIN00_0c106490_Tx 66u
#define ComConf_ComSignal_TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx 67u
#define ComConf_ComSignal_TMM_EXV2_initRequest_oVCU_EXV_2_oLIN00_95846e7a_Tx 68u
#define ComConf_ComSignal_Tamb_oVCU_Minor_01_oKAMA_FP_EPT_0303_8a5abefe_Tx 69u
#define ComConf_ComSignal_Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx 70u
#define ComConf_ComSignal_Tevap_Tchiller_out_oVCU_Minor_01_oKAMA_FP_EPT_0303_29906cec_Tx 71u
#define ComConf_ComSignal_Tincar_oVCU_Minor_02_oKAMA_FP_EPT_0303_a42f9f70_Tx 72u
#define ComConf_ComSignal_Tohx_in_oVCU_Minor_01_oKAMA_FP_EPT_0303_ef5c5e50_Tx 73u
#define ComConf_ComSignal_Tohx_out_oVCU_Minor_01_oKAMA_FP_EPT_0303_63435844_Tx 74u
#define ComConf_ComSignal_VCU_Tx_51Ch_NM_PNCData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c1eb5e4b_Tx 75u
#define ComConf_ComSignal_VCU_Tx_51Ch_NM_UserData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_eace6dfa_Tx 76u
#define ComConf_ComSignal_VCU_Tx_51Ch_NM_UserData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_04c00cd6_Tx 77u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx 78u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig0_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_1782ee05_Tx 79u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx 80u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig1_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_3300bf33_Tx 81u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx 82u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig2_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_5e864c69_Tx 83u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx 84u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig3_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_7a041d5f_Tx 85u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx 86u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig0_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_2e9f2f9c_Tx 87u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx 88u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig1_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_0a1d7eaa_Tx 89u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx 90u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig2_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_679b8df0_Tx 91u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx 92u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig3_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_4319dcc6_Tx 93u
#define ComConf_ComSignal_VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx 94u
#define ComConf_ComSignal_VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx 95u
#define ComConf_ComSignal_VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx 96u
#define ComConf_ComSignal_VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx 97u
#define ComConf_ComSignal_VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx 98u
#define ComConf_ComSignal_VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx 99u
#define ComConf_ComSignal_VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx 100u
#define ComConf_ComSignal_VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx 101u
/**\} */




/**
 * \defgroup ComHandleIdscomRxSigGrp Handle IDs of handle space comRxSigGrp.
 * \brief Rx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_IBS_Status_06_Signal_Group_oIBS_Status_06_oTC37X_VCU_CAN01_481059d9_Rx 0u
/**\} */

/**
 * \defgroup ComHandleIdscomTxSigGrp Handle IDs of handle space comTxSigGrp.
 * \brief Tx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_VCU_BMS_Signal_Group_oVCU_BMS_oTC37X_VCU_CAN01_c4ef97e6_Tx 0u
/**\} */




/**
 * \defgroup ComHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPduGroup_VCU_oKAMA_FP_EPT_0303_Rx_07e8d111        0u
#define ComConf_ComIPduGroup_VCU_oKAMA_FP_EPT_0303_Tx_51b27697        1u
#define ComConf_ComIPduGroup_VCU_oLIN00_Rx_4b9dfc53                   2u
#define ComConf_ComIPduGroup_VCU_oLIN00_Tx_1dc75bd5                   3u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39         4u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf         5u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c         6u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda         7u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Rx_b23e03d7         8u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Tx_e464a451         9u
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

