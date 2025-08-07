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
 *   Generation Time: 2025-08-07 16:35:00
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
#define COM_SUPPORTED_IPDU_GROUPS            14uL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

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
#define ComConf_ComGroupSignal_ACU_CrashOutputStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_01645954_Rx 66u
#define ComConf_ComGroupSignal_ACU_CrashOutputSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8aba12b9_Rx 67u
#define ComConf_ComGroupSignal_ACU_DriverSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2fcd0f16_Rx 68u
#define ComConf_ComGroupSignal_ACU_DriverSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a79a099_Rx 69u
#define ComConf_ComGroupSignal_ACU_DriverWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_53dfaac4_Rx 70u
#define ComConf_ComGroupSignal_ACU_LatAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_5faf7139_Rx 60u
#define ComConf_ComGroupSignal_ACU_LatA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_0373507d_Rx 61u
#define ComConf_ComGroupSignal_ACU_LgtAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8eba5290_Rx 62u
#define ComConf_ComGroupSignal_ACU_LgtA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_7ce5ad57_Rx 63u
#define ComConf_ComGroupSignal_ACU_PassengerAirbagSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a4cb1e6_Rx 71u
#define ComConf_ComGroupSignal_ACU_PassengerSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_96ea6676_Rx 72u
#define ComConf_ComGroupSignal_ACU_PassengerSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2c4c3734_Rx 73u
#define ComConf_ComGroupSignal_ACU_PassengerSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eb52bcb8_Rx 74u
#define ComConf_ComGroupSignal_ACU_PassengerWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eaccbc6f_Rx 75u
#define ComConf_ComGroupSignal_ACU_RLSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_231d8b98_Rx 76u
#define ComConf_ComGroupSignal_ACU_RRSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8ba1e757_Rx 77u
#define ComConf_ComGroupSignal_ACU_SecondLeftSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_0c298557_Rx 78u
#define ComConf_ComGroupSignal_ACU_SecondLeftSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4d0b3459_Rx 79u
#define ComConf_ComGroupSignal_ACU_SecondRightSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3170c946_Rx 80u
#define ComConf_ComGroupSignal_ACU_SecondRightSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_19211d8e_Rx 81u
#define ComConf_ComGroupSignal_ACU_WarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c596fcb_Rx 82u
#define ComConf_ComGroupSignal_ACU_YawRateStatus_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a5dd4854_Rx 56u
#define ComConf_ComGroupSignal_ACU_YawRate_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_35ce62e9_Rx 57u
#define ComConf_ComGroupSignal_ADCU_ACCDA_HandsOFF_Warning_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_cdbbce90_Rx 85u
#define ComConf_ComGroupSignal_ADCU_ACCDA_SYS_Failure_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_0c0a67d0_Rx 86u
#define ComConf_ComGroupSignal_ADCU_ACC_Mode_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_4b80afee_Rx 87u
#define ComConf_ComGroupSignal_ADCU_AEBReq_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_cfcc0419_Rx 90u
#define ComConf_ComGroupSignal_ADCU_AEBWarningSts_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_ce5fed0e_Rx 91u
#define ComConf_ComGroupSignal_ADCU_AEB_AWB_Level_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_16b7390a_Rx 92u
#define ComConf_ComGroupSignal_ADCU_AEB_AWB_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_52a850e5_Rx 93u
#define ComConf_ComGroupSignal_ADCU_AEB_Decel_Cmd_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_e2026fd4_Rx 94u
#define ComConf_ComGroupSignal_ADCU_AEB_Prefill_CMD_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_935b0159_Rx 95u
#define ComConf_ComGroupSignal_ADCU_AEB_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_040d6d85_Rx 96u
#define ComConf_ComGroupSignal_ADCU_AEB_Stop_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_edd96c77_Rx 97u
#define ComConf_ComGroupSignal_ADCU_APSComfBrkReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b25663d8_Rx 101u
#define ComConf_ComGroupSignal_ADCU_APSCrlModeReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_589f1c09_Rx 102u
#define ComConf_ComGroupSignal_ADCU_APSCrlReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_da787726_Rx 103u
#define ComConf_ComGroupSignal_ADCU_APSCrlTypReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_25dd00be_Rx 104u
#define ComConf_ComGroupSignal_ADCU_APSDistanceStop_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_5af9bfc0_Rx 105u
#define ComConf_ComGroupSignal_ADCU_APSMaxSpeedReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_afdb21bd_Rx 106u
#define ComConf_ComGroupSignal_ADCU_APS_Stop_Req_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_cd03c7ef_Rx 107u
#define ComConf_ComGroupSignal_ADCU_DA_Mode_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_98abcb34_Rx 114u
#define ComConf_ComGroupSignal_ADCU_FCW_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_858628ce_Rx 98u
#define ComConf_ComGroupSignal_ADCU_Parking_CtrlSts_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c95774a6_Rx 108u
#define ComConf_ComGroupSignal_ADCU_Parking_Mode_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c6e9f3f9_Rx 109u
#define ComConf_ComGroupSignal_ADCU_RemoteParkingMode_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_262c752a_Rx 113u
#define ComConf_ComGroupSignal_ADCU_TargetGear_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_dbe43087_Rx 110u
#define ComConf_ComGroupSignal_Checksum_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_efb220b2_Rx 219u
#define ComConf_ComGroupSignal_Checksum_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_65c4b71d_Rx 229u
#define ComConf_ComGroupSignal_Checksum_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ad2c5ce1_Rx 138u
#define ComConf_ComGroupSignal_Checksum_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a2ce7b09_Rx 145u
#define ComConf_ComGroupSignal_Checksum_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_47252d94_Rx 163u
#define ComConf_ComGroupSignal_Checksum_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7cf1e80a_Rx 129u
#define ComConf_ComGroupSignal_Checksum_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ea42d99c_Rx 117u
#define ComConf_ComGroupSignal_Checksum_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_c0d26283_Rx 204u
#define ComConf_ComGroupSignal_Checksum_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_77cd2b4a_Rx 179u
#define ComConf_ComGroupSignal_Checksum_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e0933738_Rx 184u
#define ComConf_ComGroupSignal_Checksum_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_31389c92_Rx 88u
#define ComConf_ComGroupSignal_Checksum_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_3047b966_Rx 99u
#define ComConf_ComGroupSignal_Checksum_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_19b3517b_Rx 111u
#define ComConf_ComGroupSignal_Checksum_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_6e918845_Rx 115u
#define ComConf_ComGroupSignal_Checksum_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_21944b83_Rx 58u
#define ComConf_ComGroupSignal_Checksum_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_63736e97_Rx 64u
#define ComConf_ComGroupSignal_Checksum_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_b5095e35_Rx 213u
#define ComConf_ComGroupSignal_Checksum_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_591da21b_Rx 83u
#define ComConf_ComGroupSignal_IBS_ABPActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_9a3de825_Rx 164u
#define ComConf_ComGroupSignal_IBS_ABPAvailable_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_7eb6cd8c_Rx 165u
#define ComConf_ComGroupSignal_IBS_ABSActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_bc82dc5c_Rx 166u
#define ComConf_ComGroupSignal_IBS_ABSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1bd8c058_Rx 167u
#define ComConf_ComGroupSignal_IBS_AEBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_27fddc4e_Rx 146u
#define ComConf_ComGroupSignal_IBS_AEBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_586c329d_Rx 147u
#define ComConf_ComGroupSignal_IBS_APSComfortAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_761e7ded_Rx 130u
#define ComConf_ComGroupSignal_IBS_APSCrlReqEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7e0dcab4_Rx 131u
#define ComConf_ComGroupSignal_IBS_APSEmergenyAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_98e19592_Rx 132u
#define ComConf_ComGroupSignal_IBS_APSModeEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b13c14e1_Rx 133u
#define ComConf_ComGroupSignal_IBS_APSTrqReqActive_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_95892cb5_Rx 134u
#define ComConf_ComGroupSignal_IBS_APS_Avl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_912b9c67_Rx 135u
#define ComConf_ComGroupSignal_IBS_AVHAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_e9505f9e_Rx 148u
#define ComConf_ComGroupSignal_IBS_AVHSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e3018ac7_Rx 185u
#define ComConf_ComGroupSignal_IBS_AWBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_47745887_Rx 149u
#define ComConf_ComGroupSignal_IBS_AWBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_0d99f9f9_Rx 150u
#define ComConf_ComGroupSignal_IBS_BrakeFluidWarning_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cf3bf9da_Rx 186u
#define ComConf_ComGroupSignal_IBS_BrakeLightRequest_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a14297cf_Rx 151u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatusValid_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ba3a564c_Rx 139u
#define ComConf_ComGroupSignal_IBS_BrakePedalStatus_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_c14952d9_Rx 140u
#define ComConf_ComGroupSignal_IBS_BrakePushrodStroke_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b9911368_Rx 141u
#define ComConf_ComGroupSignal_IBS_BrakeTypEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_efa1b54d_Rx 136u
#define ComConf_ComGroupSignal_IBS_CDPActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_5f0477e0_Rx 180u
#define ComConf_ComGroupSignal_IBS_CDPAvailable_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_551f17a8_Rx 181u
#define ComConf_ComGroupSignal_IBS_CddActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_cd634808_Rx 118u
#define ComConf_ComGroupSignal_IBS_CddAvailable_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_694f6a44_Rx 119u
#define ComConf_ComGroupSignal_IBS_CddError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_15ba1189_Rx 120u
#define ComConf_ComGroupSignal_IBS_DTCActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_05637011_Rx 182u
#define ComConf_ComGroupSignal_IBS_DTCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_632f33ac_Rx 168u
#define ComConf_ComGroupSignal_IBS_EBDActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1e24a445_Rx 169u
#define ComConf_ComGroupSignal_IBS_EBDFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_dad1ab7b_Rx 170u
#define ComConf_ComGroupSignal_IBS_EPBControllerSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_65ed44e8_Rx 152u
#define ComConf_ComGroupSignal_IBS_EPBFailureLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_94ade1a4_Rx 153u
#define ComConf_ComGroupSignal_IBS_EPBFailureStatus_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_2591769d_Rx 187u
#define ComConf_ComGroupSignal_IBS_EPBFunctionLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_947116d4_Rx 154u
#define ComConf_ComGroupSignal_IBS_EPBTextdisplay_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_e8354645_Rx 171u
#define ComConf_ComGroupSignal_IBS_EPBworkingSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_fc06f35e_Rx 155u
#define ComConf_ComGroupSignal_IBS_ESCOffSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_a7e250e7_Rx 188u
#define ComConf_ComGroupSignal_IBS_ESClampdisplay_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cffaf18c_Rx 189u
#define ComConf_ComGroupSignal_IBS_FLMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_0e538d73_Rx 220u
#define ComConf_ComGroupSignal_IBS_FLWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_9718fa24_Rx 221u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_19d76bef_Rx 222u
#define ComConf_ComGroupSignal_IBS_FLWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_d228a055_Rx 223u
#define ComConf_ComGroupSignal_IBS_FRMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_be7c8b57_Rx 224u
#define ComConf_ComGroupSignal_IBS_FRWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_8f930e98_Rx 225u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_2564a038_Rx 226u
#define ComConf_ComGroupSignal_IBS_FRWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_7a94cc9a_Rx 227u
#define ComConf_ComGroupSignal_IBS_FactoryMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_1f4b8984_Rx 190u
#define ComConf_ComGroupSignal_IBS_HBAActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3e0fd61_Rx 191u
#define ComConf_ComGroupSignal_IBS_HDCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_deb691a6_Rx 156u
#define ComConf_ComGroupSignal_IBS_HDCSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d0313153_Rx 192u
#define ComConf_ComGroupSignal_IBS_HHCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_f453be85_Rx 157u
#define ComConf_ComGroupSignal_IBS_HHCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a333cc25_Rx 158u
#define ComConf_ComGroupSignal_IBS_HazWarnReq_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b191eb63_Rx 159u
#define ComConf_ComGroupSignal_IBS_MaintenaceMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e1932fbc_Rx 193u
#define ComConf_ComGroupSignal_IBS_MasterCylinderPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b339468a_Rx 142u
#define ComConf_ComGroupSignal_IBS_PlungerPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_1a29f19b_Rx 143u
#define ComConf_ComGroupSignal_IBS_RBSStatus_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dc8e16c0_Rx 205u
#define ComConf_ComGroupSignal_IBS_RLMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_ad5dc1f0_Rx 230u
#define ComConf_ComGroupSignal_IBS_RLWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_296e9e60_Rx 231u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_82f6f2de_Rx 232u
#define ComConf_ComGroupSignal_IBS_RLWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_5459dc3a_Rx 233u
#define ComConf_ComGroupSignal_IBS_RRMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_1d72c7d4_Rx 234u
#define ComConf_ComGroupSignal_IBS_RRWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_31e56adc_Rx 235u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_be453909_Rx 236u
#define ComConf_ComGroupSignal_IBS_RRWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_fce5b0f5_Rx 237u
#define ComConf_ComGroupSignal_IBS_RWUActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_353ab732_Rx 194u
#define ComConf_ComGroupSignal_IBS_RWUAvailable_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_55a4e82d_Rx 195u
#define ComConf_ComGroupSignal_IBS_RollerbenchMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7e2deccc_Rx 196u
#define ComConf_ComGroupSignal_IBS_SystemStatus_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_306130d0_Rx 172u
#define ComConf_ComGroupSignal_IBS_TCSActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a64ac2d8_Rx 160u
#define ComConf_ComGroupSignal_IBS_TCSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2d90687a_Rx 173u
#define ComConf_ComGroupSignal_IBS_TPMS_ResetSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ee7e0532_Rx 197u
#define ComConf_ComGroupSignal_IBS_TargetGearReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_35085f4b_Rx 206u
#define ComConf_ComGroupSignal_IBS_TireMonSysSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_91ee3722_Rx 198u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7fea0ce4_Rx 199u
#define ComConf_ComGroupSignal_IBS_TireWarnFrntRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_dbb01a62_Rx 200u
#define ComConf_ComGroupSignal_IBS_TireWarnReLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_6e5db930_Rx 201u
#define ComConf_ComGroupSignal_IBS_TireWarnReRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ca07afb6_Rx 202u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationReqActive_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5138c66a_Rx 207u
#define ComConf_ComGroupSignal_IBS_VCU_DecelerationRequest_Available_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_227d55b1_Rx 174u
#define ComConf_ComGroupSignal_IBS_VDCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_7ab0d9f3_Rx 161u
#define ComConf_ComGroupSignal_IBS_VDCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_01868c54_Rx 175u
#define ComConf_ComGroupSignal_IBS_VehicleSpeedValid_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_317a0a26_Rx 176u
#define ComConf_ComGroupSignal_IBS_VehicleSpeed_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_5ce10c83_Rx 177u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_Valid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_8e482947_Rx 121u
#define ComConf_ComGroupSignal_IBS_VehicleStandstill_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5c3fb2c_Rx 122u
#define ComConf_ComGroupSignal_IBS_VlcActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_3fa05f6d_Rx 123u
#define ComConf_ComGroupSignal_IBS_VlcAvalible_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_5ec40897_Rx 124u
#define ComConf_ComGroupSignal_IBS_VlcError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_b4ad3ada_Rx 125u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_406d9ee6_Rx 208u
#define ComConf_ComGroupSignal_IBS_WLTorqueAPSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_1036d2a9_Rx 209u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_f80f3ab5_Rx 214u
#define ComConf_ComGroupSignal_IBS_WLTorqueIncrReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_6e9d7a41_Rx 215u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_0144d4d4_Rx 210u
#define ComConf_ComGroupSignal_IBS_WLTorqueRBSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dae1e9b7_Rx 211u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_2655e1fb_Rx 216u
#define ComConf_ComGroupSignal_IBS_WLTorqueRedReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_79bc7664_Rx 217u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReqValid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_d640a38d_Rx 126u
#define ComConf_ComGroupSignal_IBS_WLTorqueVLCReq_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5232329_Rx 127u
#define ComConf_ComGroupSignal_MessageCounter_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_895d6141_Rx 228u
#define ComConf_ComGroupSignal_MessageCounter_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_032bf6ee_Rx 238u
#define ComConf_ComGroupSignal_MessageCounter_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_7bc88e71_Rx 144u
#define ComConf_ComGroupSignal_MessageCounter_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_742aa999_Rx 162u
#define ComConf_ComGroupSignal_MessageCounter_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_91c1ff04_Rx 178u
#define ComConf_ComGroupSignal_MessageCounter_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b68b4db2_Rx 137u
#define ComConf_ComGroupSignal_MessageCounter_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_20387c24_Rx 128u
#define ComConf_ComGroupSignal_MessageCounter_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_683f1d6f_Rx 212u
#define ComConf_ComGroupSignal_MessageCounter_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_a129f9da_Rx 183u
#define ComConf_ComGroupSignal_MessageCounter_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_3677e5a8_Rx 203u
#define ComConf_ComGroupSignal_MessageCounter_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_982cdfbe_Rx 89u
#define ComConf_ComGroupSignal_MessageCounter_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_9953fa4a_Rx 100u
#define ComConf_ComGroupSignal_MessageCounter_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b0a71257_Rx 112u
#define ComConf_ComGroupSignal_MessageCounter_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_a4eb2dfd_Rx 116u
#define ComConf_ComGroupSignal_MessageCounter_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_e1f37972_Rx 59u
#define ComConf_ComGroupSignal_MessageCounter_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_a3145c66_Rx 65u
#define ComConf_ComGroupSignal_MessageCounter_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_db5c1277_Rx 218u
#define ComConf_ComGroupSignal_MessageCounter_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c6de300_Rx 84u
#define ComConf_ComGroupSignal_SGW_BLESystemReadyReq_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_359ce2fd_Rx 239u
#define ComConf_ComSignal_Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx 0u
#define ComConf_ComSignal_Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx 1u
#define ComConf_ComSignal_Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx 2u
#define ComConf_ComSignal_Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx 3u
#define ComConf_ComSignal_EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx 4u
#define ComConf_ComSignal_EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx 5u
#define ComConf_ComSignal_EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx 6u
#define ComConf_ComSignal_EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx 7u
#define ComConf_ComSignal_EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx 8u
#define ComConf_ComSignal_EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx 9u
#define ComConf_ComSignal_EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx 10u
#define ComConf_ComSignal_EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx 11u
#define ComConf_ComSignal_EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx 12u
#define ComConf_ComSignal_EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx 13u
#define ComConf_ComSignal_EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx 14u
#define ComConf_ComSignal_EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx 15u
#define ComConf_ComSignal_EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx    16u
#define ComConf_ComSignal_EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx 17u
#define ComConf_ComSignal_EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx 18u
#define ComConf_ComSignal_EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx 19u
#define ComConf_ComSignal_EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx 20u
#define ComConf_ComSignal_EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx 21u
#define ComConf_ComSignal_EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx 22u
#define ComConf_ComSignal_EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx 23u
#define ComConf_ComSignal_HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx 24u
#define ComConf_ComSignal_HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx 25u
#define ComConf_ComSignal_HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx 26u
#define ComConf_ComSignal_HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx 27u
#define ComConf_ComSignal_HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx 28u
#define ComConf_ComSignal_HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx 29u
#define ComConf_ComSignal_HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx 30u
#define ComConf_ComSignal_HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx 31u
#define ComConf_ComSignal_HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx 32u
#define ComConf_ComSignal_HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx 33u
#define ComConf_ComSignal_HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx 34u
#define ComConf_ComSignal_HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx   35u
#define ComConf_ComSignal_HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx  36u
#define ComConf_ComSignal_HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx 37u
#define ComConf_ComSignal_HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx 38u
#define ComConf_ComSignal_HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx 39u
#define ComConf_ComSignal_LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx 40u
#define ComConf_ComSignal_PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_Rx 41u
#define ComConf_ComSignal_PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_Rx 42u
#define ComConf_ComSignal_PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_Rx 43u
#define ComConf_ComSignal_PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_Rx 44u
#define ComConf_ComSignal_PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_Rx 45u
#define ComConf_ComSignal_PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_Rx 46u
#define ComConf_ComSignal_PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_Rx   47u
#define ComConf_ComSignal_PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_Rx 48u
#define ComConf_ComSignal_PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_Rx 49u
#define ComConf_ComSignal_PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_Rx 50u
#define ComConf_ComSignal_PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_Rx 51u
#define ComConf_ComSignal_PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_Rx 52u
#define ComConf_ComSignal_PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_Rx 53u
#define ComConf_ComSignal_PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_Rx   54u
#define ComConf_ComSignal_RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx  55u
#define ComConf_ComSignal_VcuCan12RxMsg3_Sig0_oVcuCan12RxMsg3_oTC37X_VCU_CAN12_5a65a77f_Rx 240u
#define ComConf_ComSignal_VcuCan12RxMsg3_Sig1_oVcuCan12RxMsg3_oTC37X_VCU_CAN12_7ee7f649_Rx 241u
#define ComConf_ComSignal_VcuCan12RxMsg3_Sig2_oVcuCan12RxMsg3_oTC37X_VCU_CAN12_13610513_Rx 242u
#define ComConf_ComSignal_VcuCan12RxMsg3_Sig3_oVcuCan12RxMsg3_oTC37X_VCU_CAN12_37e35425_Rx 243u
#define ComConf_ComSignal_VcuCan12RxMsg4_Sig0_oVcuCan12RxMsg4_oTC37X_VCU_CAN12_89859905_Rx 244u
#define ComConf_ComSignal_VcuCan12RxMsg4_Sig1_oVcuCan12RxMsg4_oTC37X_VCU_CAN12_ad07c833_Rx 245u
#define ComConf_ComSignal_VcuCan12RxMsg4_Sig2_oVcuCan12RxMsg4_oTC37X_VCU_CAN12_c0813b69_Rx 246u
#define ComConf_ComSignal_VcuCan12RxMsg4_Sig3_oVcuCan12RxMsg4_oTC37X_VCU_CAN12_e4036a5f_Rx 247u
#define ComConf_ComSignal_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx 248u
#define ComConf_ComSignal_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx 249u
#define ComConf_ComSignal_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx 250u
#define ComConf_ComSignal_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx 251u
#define ComConf_ComSignal_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx 252u
#define ComConf_ComSignal_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx 253u
#define ComConf_ComSignal_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx 254u
#define ComConf_ComSignal_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx 255u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_ab1f8c96_Rx 256u
#define ComConf_ComSignal_VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx 257u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_8f9ddda0_Rx 258u
#define ComConf_ComSignal_VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx 259u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_e21b2efa_Rx 260u
#define ComConf_ComSignal_VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx 261u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuCan03RxMsg1_oTC37X_VCU_CAN03_c6997fcc_Rx 262u
#define ComConf_ComSignal_VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx 263u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_735765ea_Rx 264u
#define ComConf_ComSignal_VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx 265u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_57d534dc_Rx 266u
#define ComConf_ComSignal_VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx 267u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_3a53c786_Rx 268u
#define ComConf_ComSignal_VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx 269u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuCan03RxMsg2_oTC37X_VCU_CAN03_1ed196b0_Rx 270u
#define ComConf_ComSignal_VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx 271u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN01_6c375668_Rx 272u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN01_c9bcc666_Rx 273u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN01_a6197493_Rx 274u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN01_0392e49d_Rx 275u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN01_b8f0552d_Rx 276u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN01_367f52ce_Rx 277u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN01_1d7bc523_Rx 278u
#define ComConf_ComSignal_Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN01_93f4c2c0_Rx 279u
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c848143c_Tx 63u
#define ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_51727e14_Tx 50u
#define ComConf_ComGroupSignal_Checksum_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_090e4c9b_Tx 76u
#define ComConf_ComGroupSignal_Checksum_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_28a707e9_Tx 114u
#define ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_004b6de5_Tx 121u
#define ComConf_ComGroupSignal_Checksum_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_7e8714d3_Tx 91u
#define ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_fc013b78_Tx 105u
#define ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_0232b184_Tx 64u
#define ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_630306b4_Tx 51u
#define ComConf_ComGroupSignal_MessageCounter_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f9d73b0d_Tx 77u
#define ComConf_ComGroupSignal_MessageCounter_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_804a7805_Tx 115u
#define ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a8a61209_Tx 122u
#define ComConf_ComGroupSignal_MessageCounter_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_18685520_Tx 92u
#define ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_9aee7a8b_Tx 106u
#define ComConf_ComGroupSignal_VCU_ADASOverride_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_0c002a43_Tx 78u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_c8f21b10_Tx 79u
#define ComConf_ComGroupSignal_VCU_APSTorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8298a57a_Tx 80u
#define ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_365d9f08_Tx 52u
#define ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_f84e7cef_Tx 53u
#define ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c1c6ace2_Tx 65u
#define ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_adcf3745_Tx 123u
#define ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9ec34af1_Tx 66u
#define ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_cab9d256_Tx 67u
#define ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_55d19f8e_Tx 38u
#define ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_34765b89_Tx 39u
#define ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_0d3265cb_Tx 40u
#define ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_41d6d523_Tx 41u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateStatus_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_aada4313_Tx 43u
#define ComConf_ComGroupSignal_VCU_BrakeCompensateWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8427f667_Tx 81u
#define ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f285ec19_Tx 124u
#define ComConf_ComGroupSignal_VCU_ChargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_86604033_Tx 132u
#define ComConf_ComGroupSignal_VCU_ChargeProcessComment_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_b076f405_Tx 44u
#define ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_17f7901d_Tx 68u
#define ComConf_ComGroupSignal_VCU_CriSysFailure_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_13fa69e3_Tx 93u
#define ComConf_ComGroupSignal_VCU_DCDCFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_8211651e_Tx 94u
#define ComConf_ComGroupSignal_VCU_DCFCCurrent_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_54508868_Tx 45u
#define ComConf_ComGroupSignal_VCU_DecelerationReq_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22f1bc0a_Tx 82u
#define ComConf_ComGroupSignal_VCU_DecelerationReqactive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_29147867_Tx 83u
#define ComConf_ComGroupSignal_VCU_DischargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_a9c41ef6_Tx 133u
#define ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_a47f7a1f_Tx 107u
#define ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_629aba80_Tx 108u
#define ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_1364d55f_Tx 109u
#define ComConf_ComGroupSignal_VCU_DriveMotOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_2b850699_Tx 95u
#define ComConf_ComGroupSignal_VCU_DriverTorqueRequest_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f98385dc_Tx 84u
#define ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8a817be7_Tx 69u
#define ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4a2bfea4_Tx 54u
#define ComConf_ComGroupSignal_VCU_EnergyManagementWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_4b7de956_Tx 85u
#define ComConf_ComGroupSignal_VCU_EnergyV2L_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_5ef6f2f0_Tx 46u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_631e19bb_Tx 110u
#define ComConf_ComGroupSignal_VCU_ForwardVmaxlimitStatus_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_beba9b73_Tx 48u
#define ComConf_ComGroupSignal_VCU_HVBatCriFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_05faf04f_Tx 96u
#define ComConf_ComGroupSignal_VCU_HVBatOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1ab841cc_Tx 97u
#define ComConf_ComGroupSignal_VCU_HVConnectFault_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_ad3614da_Tx 134u
#define ComConf_ComGroupSignal_VCU_HVILError_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f1e2e871_Tx 98u
#define ComConf_ComGroupSignal_VCU_HVInsulResFault_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_e6836204_Tx 99u
#define ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_aebb67ba_Tx 70u
#define ComConf_ComGroupSignal_VCU_InvldGearSel_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_773f11d0_Tx 100u
#define ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d7a76412_Tx 71u
#define ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_2306d930_Tx 125u
#define ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_17d4134b_Tx 55u
#define ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_944086eb_Tx 72u
#define ComConf_ComGroupSignal_VCU_LimpHome_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_664ff33a_Tx 101u
#define ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a07350bb_Tx 126u
#define ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4b3e55ae_Tx 127u
#define ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b94ce354_Tx 111u
#define ComConf_ComGroupSignal_VCU_ManuallyUnlockComment_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_3223f100_Tx 49u
#define ComConf_ComGroupSignal_VCU_MemoryChargeFault_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_cb765ea4_Tx 47u
#define ComConf_ComGroupSignal_VCU_MileagelowRemind_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1b14b376_Tx 102u
#define ComConf_ComGroupSignal_VCU_MotorActualTorqueValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_2709c7ef_Tx 116u
#define ComConf_ComGroupSignal_VCU_MotorActualTorque_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_90c1c989_Tx 117u
#define ComConf_ComGroupSignal_VCU_OPStandstillReq_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_af773c24_Tx 118u
#define ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4725a26e_Tx 128u
#define ComConf_ComGroupSignal_VCU_PlugStatus_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_250fa71e_Tx 103u
#define ComConf_ComGroupSignal_VCU_ReachLimitStd_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_5cd2e319_Tx 104u
#define ComConf_ComGroupSignal_VCU_RegStatus_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_6d4e3983_Tx 86u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_b28083e9_Tx 73u
#define ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9537c5ed_Tx 74u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCapValid_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_5eaff4d8_Tx 87u
#define ComConf_ComGroupSignal_VCU_RegenTorqueCap_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_a5a4bebf_Tx 88u
#define ComConf_ComGroupSignal_VCU_RemainChrgTime_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_deed3006_Tx 135u
#define ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_a3197c92_Tx 75u
#define ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_97cf52ed_Tx 129u
#define ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_3baa5f6f_Tx 112u
#define ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f7e15433_Tx 130u
#define ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d928d8b4_Tx 56u
#define ComConf_ComGroupSignal_VCU_TorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_24abcc5b_Tx 89u
#define ComConf_ComGroupSignal_VCU_TorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22997d3f_Tx 90u
#define ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_86f61526_Tx 131u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_a1329f5d_Tx 57u
#define ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d00cfa4f_Tx 58u
#define ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_70135d30_Tx 59u
#define ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_da00c229_Tx 60u
#define ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4b161096_Tx 61u
#define ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_03ae7390_Tx 62u
#define ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_091aaa11_Tx 42u
#define ComConf_ComGroupSignal_VCU_WheelTrqACTValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_0e2031fb_Tx 119u
#define ComConf_ComGroupSignal_VCU_WheelTrqACT_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_722027bb_Tx 120u
#define ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b7e91aff_Tx 113u
#define ComConf_ComSignal_Calibration_cmd_oVCU_SVA_CMD_oLIN00_6732180a_Tx 0u
#define ComConf_ComSignal_ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx 1u
#define ComConf_ComSignal_ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx 2u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Init_Rq_oEDCU_EXV2_oLIN00_0144aec9_Tx 3u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Move_Enbl_oEDCU_EXV2_oLIN00_d6797517_Tx 4u
#define ComConf_ComSignal_EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx 5u
#define ComConf_ComSignal_EXT1_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_caf787ea_Tx 6u
#define ComConf_ComSignal_EXT2_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_9096b88a_Tx 7u
#define ComConf_ComSignal_EXT3_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_fae072f7_Tx 8u
#define ComConf_ComSignal_EXT4_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_ced21b28_Tx 9u
#define ComConf_ComSignal_EXT5_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_a170bad6_Tx 10u
#define ComConf_ComSignal_EXT6_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_fb1185b6_Tx 11u
#define ComConf_ComSignal_EXT7_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_9acf98cd_Tx 12u
#define ComConf_ComSignal_EXT8_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_725b5c6c_Tx 13u
#define ComConf_ComSignal_EXT9_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_1df9fd92_Tx 14u
#define ComConf_ComSignal_EXT10_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_ba532916_Tx 15u
#define ComConf_ComSignal_EXT11_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_d025e36b_Tx 16u
#define ComConf_ComSignal_EXT12_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_8a44dc0b_Tx 17u
#define ComConf_ComSignal_EXT13_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_e5e67df5_Tx 18u
#define ComConf_ComSignal_EXT14_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_d1d4142a_Tx 19u
#define ComConf_ComSignal_EXT15_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_a75ba75d_Tx 20u
#define ComConf_ComSignal_EXT16_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_fd3a983d_Tx 21u
#define ComConf_ComSignal_EXT_A_IN1_oVcuTxIoMsg1_oTC37X_VCU_CAN00_37348eff_Tx 22u
#define ComConf_ComSignal_EXT_A_IN2_oVcuTxIoMsg1_oTC37X_VCU_CAN00_241cb78c_Tx 23u
#define ComConf_ComSignal_EXT_A_IN3_oVcuTxIoMsg2_oTC37X_VCU_CAN00_c07d823f_Tx 24u
#define ComConf_ComSignal_EXT_A_IN4_oVcuTxIoMsg2_oTC37X_VCU_CAN00_e8ca1808_Tx 25u
#define ComConf_ComSignal_EXT_A_IN5_oVcuTxIoMsg3_oTC37X_VCU_CAN00_097f4638_Tx 26u
#define ComConf_ComSignal_EXT_A_IN6_oVcuTxIoMsg3_oTC37X_VCU_CAN00_1a577f4b_Tx 27u
#define ComConf_ComSignal_EXT_A_IN7_oVcuTxIoMsg4_oTC37X_VCU_CAN00_f59e9dfe_Tx 28u
#define ComConf_ComSignal_EXT_A_IN8_oVcuTxIoMsg4_oTC37X_VCU_CAN00_aa164141_Tx 29u
#define ComConf_ComSignal_EXT_A_IN9_oVcuTxIoMsg5_oTC37X_VCU_CAN00_4ba31f71_Tx 30u
#define ComConf_ComSignal_EXT_A_IN10_oVcuTxIoMsg5_oTC37X_VCU_CAN00_83e5b725_Tx 31u
#define ComConf_ComSignal_EXT_A_IN11_oVcuTxIoMsg6_oTC37X_VCU_CAN00_67848296_Tx 32u
#define ComConf_ComSignal_EXT_A_IN12_oVcuTxIoMsg6_oTC37X_VCU_CAN00_74acbbe5_Tx 33u
#define ComConf_ComSignal_EXT_A_IN13_oVcuTxIoMsg7_oTC37X_VCU_CAN00_9519e5d5_Tx 34u
#define ComConf_ComSignal_EXT_A_IN14_oVcuTxIoMsg7_oTC37X_VCU_CAN00_bdae7fe2_Tx 35u
#define ComConf_ComSignal_EXT_A_IN15_oVcuTxIoMsg8_oTC37X_VCU_CAN00_4536335b_Tx 36u
#define ComConf_ComSignal_EXT_A_IN16_oVcuTxIoMsg8_oTC37X_VCU_CAN00_561e0a28_Tx 37u
#define ComConf_ComSignal_TCU_HVCHMaxPowerLimit_oTCU_HVCH_Cmd_oLIN00_4bc53e0b_Tx 136u
#define ComConf_ComSignal_TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_Tx 137u
#define ComConf_ComSignal_TCU_HVCH_TmaxLim_output_oTCU_HVCH_Cmd_oLIN00_5e45d521_Tx 138u
#define ComConf_ComSignal_TCU_HVCH_heating_rq_oTCU_HVCH_Cmd_oLIN00_5e3a32b2_Tx 139u
#define ComConf_ComSignal_TMM_EXV1_EnableRequest_oVCU_EXV_1_oLIN00_d988d266_Tx 140u
#define ComConf_ComSignal_TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx 141u
#define ComConf_ComSignal_TMM_EXV1_initRequest_oVCU_EXV_1_oLIN00_082350ea_Tx 142u
#define ComConf_ComSignal_TMM_EXV2_EnableRequest_oVCU_EXV_2_oLIN00_0c106490_Tx 143u
#define ComConf_ComSignal_TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx 144u
#define ComConf_ComSignal_TMM_EXV2_initRequest_oVCU_EXV_2_oLIN00_95846e7a_Tx 145u
#define ComConf_ComSignal_Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx 146u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx 147u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig0_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_1782ee05_Tx 148u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx 149u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig1_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_3300bf33_Tx 150u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx 151u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig2_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_5e864c69_Tx 152u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx 153u
#define ComConf_ComSignal_VcuAdcTxMsg1_Sig3_oVcuCan03TxMsg1_oTC37X_VCU_CAN03_7a041d5f_Tx 154u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx 155u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig0_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_2e9f2f9c_Tx 156u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx 157u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig1_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_0a1d7eaa_Tx 158u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx 159u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig2_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_679b8df0_Tx 160u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx 161u
#define ComConf_ComSignal_VcuAdcTxMsg2_Sig3_oVcuCan03TxMsg2_oTC37X_VCU_CAN03_4319dcc6_Tx 162u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig0_oVcuCan12TxMsg1_oTC37X_VCU_CAN12_d3993898_Tx 163u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig1_oVcuCan12TxMsg1_oTC37X_VCU_CAN12_f71b69ae_Tx 164u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig2_oVcuCan12TxMsg1_oTC37X_VCU_CAN12_9a9d9af4_Tx 165u
#define ComConf_ComSignal_VcuCan12TxMsg1_Sig3_oVcuCan12TxMsg1_oTC37X_VCU_CAN12_be1fcbc2_Tx 166u
#define ComConf_ComSignal_VcuCan12TxMsg2_Sig0_oVcuCan12TxMsg2_oTC37X_VCU_CAN12_ea84f901_Tx 167u
#define ComConf_ComSignal_VcuCan12TxMsg2_Sig1_oVcuCan12TxMsg2_oTC37X_VCU_CAN12_ce06a837_Tx 168u
#define ComConf_ComSignal_VcuCan12TxMsg2_Sig2_oVcuCan12TxMsg2_oTC37X_VCU_CAN12_a3805b6d_Tx 169u
#define ComConf_ComSignal_VcuCan12TxMsg2_Sig3_oVcuCan12TxMsg2_oTC37X_VCU_CAN12_87020a5b_Tx 170u
#define ComConf_ComSignal_VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx 171u
#define ComConf_ComSignal_VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx 172u
#define ComConf_ComSignal_VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx 173u
#define ComConf_ComSignal_VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx 174u
#define ComConf_ComSignal_VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx 175u
#define ComConf_ComSignal_VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx 176u
#define ComConf_ComSignal_VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx 177u
#define ComConf_ComSignal_VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx 178u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig0_oVcu_Lin0_TxMsg1_oLIN01_0005f3c6_Tx 179u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig1_oVcu_Lin0_TxMsg1_oLIN01_a58e63c8_Tx 180u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig2_oVcu_Lin0_TxMsg1_oLIN01_9063d59b_Tx 181u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg1_Sig3_oVcu_Lin0_TxMsg1_oLIN01_35e84595_Tx 182u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig0_oVcu_Lin0_TxMsg2_oLIN01_ca2bd13d_Tx 183u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig1_oVcu_Lin0_TxMsg2_oLIN01_6fa04133_Tx 184u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig2_oVcu_Lin0_TxMsg2_oLIN01_5a4df760_Tx 185u
#define ComConf_ComSignal_Vcu_Lin0_TxMsg2_Sig3_oVcu_Lin0_TxMsg2_oLIN01_ffc6676e_Tx 186u
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
#define ComConf_ComSignalGroup_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx 8u
#define ComConf_ComSignalGroup_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx 9u
#define ComConf_ComSignalGroup_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx 10u
#define ComConf_ComSignalGroup_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx 11u
#define ComConf_ComSignalGroup_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx 12u
#define ComConf_ComSignalGroup_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx 13u
#define ComConf_ComSignalGroup_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx 14u
#define ComConf_ComSignalGroup_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx 15u
#define ComConf_ComSignalGroup_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx 16u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx 17u
#define ComConf_ComSignalGroup_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx 18u
#define ComConf_ComSignalGroup_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx 19u
/**\} */

/**
 * \defgroup ComHandleIdscomTxSigGrp Handle IDs of handle space comTxSigGrp.
 * \brief Tx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx 0u
#define ComConf_ComSignalGroup_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx 1u
#define ComConf_ComSignalGroup_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx 2u
#define ComConf_ComSignalGroup_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx 3u
#define ComConf_ComSignalGroup_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx 4u
#define ComConf_ComSignalGroup_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx 5u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx 6u
#define ComConf_ComSignalGroup_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx 7u
#define ComConf_ComSignalGroup_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx 8u
#define ComConf_ComSignalGroup_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx 9u
#define ComConf_ComSignalGroup_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx 10u
/**\} */




/**
 * \defgroup ComHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPduGroup_VCU_oATOM_CANFD_Matrix_CH_V600_202502_Rx_5e4659c4 0u
#define ComConf_ComIPduGroup_VCU_oATOM_CANFD_Matrix_CH_V600_202502_Tx_081cfe42 1u
#define ComConf_ComIPduGroup_VCU_oLIN00_Rx_4b9dfc53                   2u
#define ComConf_ComIPduGroup_VCU_oLIN00_Tx_1dc75bd5                   3u
#define ComConf_ComIPduGroup_VCU_oLIN01_Rx_f3219b36                   4u
#define ComConf_ComIPduGroup_VCU_oLIN01_Tx_a57b3cb0                   5u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39         6u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf         7u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c         8u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda         9u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Rx_b23e03d7         10u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN03_Tx_e464a451         11u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN12_Rx_37e24d02         12u
#define ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN12_Tx_61b8ea84         13u
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

