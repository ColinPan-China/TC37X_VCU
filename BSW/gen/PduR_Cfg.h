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
 *            Module: PduR
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Cfg.h
 *   Generation Time: 2025-10-14 14:41:51
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_TC377T
#define PDUR_PROCESSOR_TC377T
#endif
#ifndef PDUR_COMP_TASKING
#define PDUR_COMP_TASKING
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_LSB2MSB
#define PDUR_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif



#define PDUR_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_EXTENDED_ERROR_CHECKS STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRExtendedErrorChecks] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

#define PDUR_ERROR_NOTIFICATION STD_OFF

#define PDUR_MAIN_FUNCTION STD_OFF

#define PDUR_MULTICORE STD_OFF /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSupportMulticore] */

#define PduR_PBConfigIdType uint32

 
 /*  DET Error define list  */ 
#define PDUR_FCT_CANIFRXIND 0x01u 
#define PDUR_FCT_CANIFTX 0x09u 
#define PDUR_FCT_CANIFTXCFM 0x02u 
#define PDUR_FCT_COMTX 0x89u 
#define PDUR_FCT_DCMTX 0x99u 
#define PDUR_FCT_DCMCTX 0x9Au 
#define PDUR_FCT_CANTPRXIND 0x05u 
#define PDUR_FCT_CANTPTX 0x09u 
#define PDUR_FCT_CANTPTXCFM 0x08u 
#define PDUR_FCT_CANTPSOR 0x06u 
#define PDUR_FCT_CANTPCPYRX 0x04u 
#define PDUR_FCT_CANTPCPYTX 0x07u 
#define PDUR_FCT_LINIFRXIND 0x51u 
#define PDUR_FCT_LINIFTX 0x59u 
#define PDUR_FCT_LINIFTXCFM 0x52u 
#define PDUR_FCT_LINIFTT 0x53u 
#define PDUR_FCT_J1939TPRXIND 0x25u 
#define PDUR_FCT_J1939TPTX 0x29u 
#define PDUR_FCT_J1939TPTXCFM 0x28u 
#define PDUR_FCT_J1939TPSOR 0x26u 
#define PDUR_FCT_J1939TPCPYRX 0x24u 
#define PDUR_FCT_J1939TPCPYTX 0x27u 
#define PDUR_FCT_CANNMRXIND 0x11u 
#define PDUR_FCT_CANNMTX 0x19u 
#define PDUR_FCT_CANNMTXCFM 0x12u 
#define PDUR_FCT_CANNMTT 0x13u 
 /*   PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_ComTransmit  PduR_DcmTransmit  PduR_DcmCancelTransmit  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_LinIfIfRxIndication  PduR_LinIfTransmit  PduR_LinIfTxConfirmation  PduR_LinIfTriggerTransmit  PduR_J1939TpTpRxIndication  PduR_J1939TpTransmit  PduR_J1939TpTxConfirmation  PduR_J1939TpStartOfReception  PduR_J1939TpCopyRxData  PduR_J1939TpCopyTxData  PduR_CanNmIfRxIndication  PduR_CanNmTransmit  PduR_CanNmTxConfirmation  PduR_CanNmTriggerTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx_9eae4558_Rx 0u
#define PduRConf_PduRDestPdu_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx_0dbe25ba_Rx 1u
#define PduRConf_PduRDestPdu_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx_f767588b_Rx 2u
#define PduRConf_PduRDestPdu_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx_56f39b3b_Rx 3u
#define PduRConf_PduRDestPdu_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx_686bd310_Rx 4u
#define PduRConf_PduRDestPdu_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx_d84c121b_Rx 5u
#define PduRConf_PduRDestPdu_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx_bc9c1fec_Rx 6u
#define PduRConf_PduRDestPdu_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx_08ea31b4_Rx 7u
#define PduRConf_PduRDestPdu_APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_e759f28b_Rx_993d8e8a_Rx 8u
#define PduRConf_PduRDestPdu_BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_bf3214bb_Rx_c4d092fa_Rx 9u
#define PduRConf_PduRDestPdu_BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_2672f3d4_Rx_794cc76a_Rx 10u
#define PduRConf_PduRDestPdu_BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_f3ce7274_Rx_eebd1636_Rx 11u
#define PduRConf_PduRDestPdu_BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_8720645c_Rx_07ad9208_Rx 12u
#define PduRConf_PduRDestPdu_BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_95ec7fc6_Rx_3881d9ad_Rx 13u
#define PduRConf_PduRDestPdu_BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_0cac98a9_Rx_55b90c68_Rx 14u
#define PduRConf_PduRDestPdu_BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_cd43c7b3_Rx_0c4dce36_Rx 15u
#define PduRConf_PduRDestPdu_BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_253e5592_Rx_4ed79f7d_Rx 16u
#define PduRConf_PduRDestPdu_BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_49a2ff30_Rx_e3bed30b_Rx 17u
#define PduRConf_PduRDestPdu_BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_7145a374_Rx_18355f69_Rx 18u
#define PduRConf_PduRDestPdu_BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_e805441b_Rx_2f5b0f93_Rx 19u
#define PduRConf_PduRDestPdu_BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_29ea1b01_Rx_7dfb13db_Rx 20u
#define PduRConf_PduRDestPdu_BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_64866c1e_Rx_b34f4ed8_Rx 21u
#define PduRConf_PduRDestPdu_BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_744f74f5_Rx_c6a6b7d8_Rx 22u
#define PduRConf_PduRDestPdu_BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_925408cc_Rx_e3e26218_Rx 23u
#define PduRConf_PduRDestPdu_BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_0825057e_Rx_7d63f76e_Rx 24u
#define PduRConf_PduRDestPdu_BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_a6395240_Rx_334e1a89_Rx 25u
#define PduRConf_PduRDestPdu_BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_f6aa5f55_Rx_5187e753_Rx 26u
#define PduRConf_PduRDestPdu_BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_6feab83a_Rx_6d932377_Rx 27u
#define PduRConf_PduRDestPdu_BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_ae05e720_Rx_2dd16f9f_Rx 28u
#define PduRConf_PduRDestPdu_BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_861a70a5_Rx_9e2ae37f_Rx 29u
#define PduRConf_PduRDestPdu_BS_01_oATOM_HWLIN1_9c4501d9_Rx_10a80227_Rx 30u
#define PduRConf_PduRDestPdu_BS_02_oATOM_HWLIN1_17963fc0_Rx_78487954_Rx 31u
#define PduRConf_PduRDestPdu_BS_03_oATOM_HWLIN1_d8082808_Rx_f46aae86_Rx 32u
#define PduRConf_PduRDestPdu_CCS_oJ1939_bms_8c0b4315_Rx_2edb25c9_Rx   33u
#define PduRConf_PduRDestPdu_CEM_oJ1939_bms_7a55ed54_Rx_0337d83e_Rx   34u
#define PduRConf_PduRDestPdu_CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_6b01f90a_Rx_36051844_Rx 35u
#define PduRConf_PduRDestPdu_CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_f2411e65_Rx_47d97d6b_Rx 36u
#define PduRConf_PduRDestPdu_CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_a569c65a_Rx_1c3803b9_Rx 37u
#define PduRConf_PduRDestPdu_CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_3c292135_Rx_3d0f621e_Rx 38u
#define PduRConf_PduRDestPdu_CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_255d67dc_Rx_c43586a5_Rx 39u
#define PduRConf_PduRDestPdu_CHM_oJ1939_bms_1911c680_Rx_bfbe0d55_Rx   40u
#define PduRConf_PduRDestPdu_CML_oJ1939_bms_97a631d1_Rx_c7bfb7be_Rx   41u
#define PduRConf_PduRDestPdu_CRM_oJ1939_bms_df999128_Rx_67ab3cd0_Rx   42u
#define PduRConf_PduRDestPdu_CRO_oJ1939_bms_c256408a_Rx_4e7ec83a_Rx   43u
#define PduRConf_PduRDestPdu_CSD_oJ1939_bms_579b3adb_Rx_cdbf7751_Rx   44u
#define PduRConf_PduRDestPdu_CST_oJ1939_bms_b9e5b7cb_Rx_db486d3c_Rx   45u
#define PduRConf_PduRDestPdu_CTS_oJ1939_bms_29c73f69_Rx_c30ef479_Rx   46u
#define PduRConf_PduRDestPdu_DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_e178006a_Rx_f6cb4db3_Rx 47u
#define PduRConf_PduRDestPdu_DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_519d17ad_Rx_3867459e_Rx 48u
#define PduRConf_PduRDestPdu_DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_00cda30a_Rx_249eb541_Rx 49u
#define PduRConf_PduRDestPdu_DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_62ba4764_Rx_e5f98abc_Rx 50u
#define PduRConf_PduRDestPdu_DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9a6ba105_Rx_653320c0_Rx 51u
#define PduRConf_PduRDestPdu_EPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_5a733336_Rx_9cff78f3_Rx 52u
#define PduRConf_PduRDestPdu_EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_14a0a5cc_Rx_fcbdca80_Rx 53u
#define PduRConf_PduRDestPdu_FRC_01_oATOM_HWLIN1_94cce030_Rx_4642eaf1_Rx 54u
#define PduRConf_PduRDestPdu_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx_ca3eaa8a_Rx 55u
#define PduRConf_PduRDestPdu_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx_283e282c_Rx 56u
#define PduRConf_PduRDestPdu_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx_d09902f0_Rx 57u
#define PduRConf_PduRDestPdu_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx_77b4603c_Rx 58u
#define PduRConf_PduRDestPdu_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx_12481f07_Rx 59u
#define PduRConf_PduRDestPdu_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx_6a5d743a_Rx 60u
#define PduRConf_PduRDestPdu_IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7868db81_Rx_75f9cd0c_Rx 61u
#define PduRConf_PduRDestPdu_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx_65adbba1_Rx 62u
#define PduRConf_PduRDestPdu_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx_629168fc_Rx 63u
#define PduRConf_PduRDestPdu_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx_4e239512_Rx 64u
#define PduRConf_PduRDestPdu_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx_fcecab79_Rx 65u
#define PduRConf_PduRDestPdu_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx_ca150190_Rx 66u
#define PduRConf_PduRDestPdu_IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_6884d46d_Rx_768473b3_Rx 67u
#define PduRConf_PduRDestPdu_IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_302b6c18_Rx_56ab55cb_Rx 68u
#define PduRConf_PduRDestPdu_IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_41b50bfd_Rx_a8951de4_Rx 69u
#define PduRConf_PduRDestPdu_MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_18559a9d_Rx_6a0fc49c_Rx 70u
#define PduRConf_PduRDestPdu_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_81157df2_Rx_5fe77ffa_Rx 71u
#define PduRConf_PduRDestPdu_MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_de507b38_Rx_a01ee3b0_Rx 72u
#define PduRConf_PduRDestPdu_MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_51b3e171_Rx_fa5a6015_Rx 73u
#define PduRConf_PduRDestPdu_MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_ea16780f_Rx_51994caa_Rx 74u
#define PduRConf_PduRDestPdu_MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_73569f60_Rx_2d50859d_Rx 75u
#define PduRConf_PduRDestPdu_POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_9e52ac89_Rx_2c23a96a_Rx 79u
#define PduRConf_PduRDestPdu_POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_07124be6_Rx_2eb983a0_Rx 80u
#define PduRConf_PduRDestPdu_POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_df8ecd71_Rx_55bb8b3e_Rx 81u
#define PduRConf_PduRDestPdu_POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_29dcadd3_Rx_14a43957_Rx 82u
#define PduRConf_PduRDestPdu_POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_e833f2c9_Rx_4262a7c2_Rx 83u
#define PduRConf_PduRDestPdu_POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_c02c654c_Rx_2e10d998_Rx 84u
#define PduRConf_PduRDestPdu_POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_e70d1cd3_Rx_6a4f8110_Rx 85u
#define PduRConf_PduRDestPdu_POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_7e4dfbbc_Rx_787801bd_Rx 86u
#define PduRConf_PduRDestPdu_PRND_oATOM_CAN_Matrix_PT_V600_20250211_7ae8f154_Rx_27fe156b_Rx 87u
#define PduRConf_PduRDestPdu_PduRDestPdu                              78u
#define PduRConf_PduRDestPdu_PduRDestPdu_1                            77u
#define PduRConf_PduRDestPdu_PduRDestPdu_2                            76u
#define PduRConf_PduRDestPdu_SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_4b04d591_Rx_2ab3ccf5_Rx 88u
#define PduRConf_PduRDestPdu_SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_3bb4fa61_Rx_ca105c2f_Rx 89u
#define PduRConf_PduRDestPdu_SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_9eb85431_Rx_f4111595_Rx 90u
#define PduRConf_PduRDestPdu_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx_316b9b30_Rx 91u
#define PduRConf_PduRDestPdu_SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_d9a61796_Rx_160807d5_Rx 92u
#define PduRConf_PduRDestPdu_SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_10cb64fa_Rx_a393dab1_Rx 93u
#define PduRConf_PduRDestPdu_SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_3c4b1ea4_Rx_999b8108_Rx 94u
#define PduRConf_PduRDestPdu_SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_90c528d8_Rx_3e9241c6_Rx 95u
#define PduRConf_PduRDestPdu_SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_fbd26219_Rx_5cf167cd_Rx 96u
#define PduRConf_PduRDestPdu_TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_0c8b422e_Rx_db4bf9f4_Rx 97u
#define PduRConf_PduRDestPdu_TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_95cba541_Rx_f8476887_Rx 98u
#define PduRConf_PduRDestPdu_Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_5ef4d74d_Rx_0a6cd4f7_Rx 99u
#define PduRConf_PduRDestPdu_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx_01131484_Rx 100u
#define PduRConf_PduRDestPdu_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx_35c74fdb_Rx 101u
#define PduRConf_PduRDestPdu_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx_d7cb99e6_Rx 102u
#define PduRConf_PduRDestPdu_VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx 103u
#define PduRConf_PduRDestPdu_VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx 104u
#define PduRConf_PduRDestPdu_Vcu_Lin0_RxMsg1_oATOM_HWLIN4_2f84bea2_Rx_7f13441e_Rx 105u
#define PduRConf_PduRDestPdu_Vcu_Lin0_RxMsg2_oATOM_HWLIN4_a45780bb_Rx_f972fecd_Rx 106u
#define PduRConf_PduRDestPdu_Vcu_Lin3_RxMsg1_oATOM_HWLIN3_ec029e32_Rx_f06d7ac9_Rx 107u
#define PduRConf_PduRDestPdu_Vcu_Lin3_RxMsg2_oATOM_HWLIN3_67d1a02b_Rx_48bc0539_Rx 108u
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                78u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a6cd4f7                       99u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0c4dce36                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0dbe25ba                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1                              77u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1c3803b9                       37u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2                              76u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2ab3ccf5                       88u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2c23a96a                       79u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2d50859d                       75u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2dd16f9f                       28u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2e10d998                       84u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2eb983a0                       80u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2edb25c9                       33u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2f5b0f93                       19u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3d0f621e                       38u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3e9241c6                       95u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e7ec83a                       43u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e239512                       64u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4ed79f7d                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5cf167cd                       96u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5fe77ffa                       71u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a0fc49c                       70u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a4f8110                       85u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a5d743a                       60u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6d932377                       27u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7d63f76e                       24u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7dfb13db                       20u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7f13441e                       105u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9cff78f3                       52u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9e2ae37f                       29u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9eae4558                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_07ad9208                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_08ea31b4                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_10a80227                       30u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_14a43957                       82u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_27fe156b                       87u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_35c74fdb                       101u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_47d97d6b                       36u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_48bc0539                       108u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_55b90c68                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_55bb8b3e                       81u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_56ab55cb                       68u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_56f39b3b                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_65adbba1                       62u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_67ab3cd0                       42u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_75f9cd0c                       61u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_77b4603c                       58u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_249eb541                       49u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_283e282c                       56u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_316b9b30                       91u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_334e1a89                       25u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_686bd310                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_794cc76a                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_993d8e8a                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_999b8108                       94u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0337d83e                       34u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3881d9ad                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4262a7c2                       83u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4642eaf1                       54u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5187e753                       26u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_12481f07                       59u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_18355f69                       18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_51994caa                       74u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_160807d5                       92u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_629168fc                       63u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_653320c0                       51u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_768473b3                       67u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_787801bd                       86u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3867459e                       48u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3905054b                       103u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_01131484                       100u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_36051844                       35u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_78487954                       31u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a01ee3b0                       72u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a393dab1                       93u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a8951de4                       69u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b34f4ed8                       21u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bc9c1fec                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bfbe0d55                       40u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c4d092fa                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c6a6b7d8                       22u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c7bfb7be                       41u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c30ef479                       46u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c43586a5                       39u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca3eaa8a                       55u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca105c2f                       89u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca150190                       66u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cdbf7751                       44u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d7cb99e6                       102u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d84c121b                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d09902f0                       57u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_db4bf9f4                       97u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_db486d3c                       45u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e3bed30b                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e3e26218                       23u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e5f98abc                       50u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_eebd1636                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f5b46736                       104u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f6cb4db3                       47u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f06d7ac9                       107u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f46aae86                       32u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f972fecd                       106u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f767588b                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f4111595                       90u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f8476887                       98u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fa5a6015                       73u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fcbdca80                       53u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fcecab79                       65u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a2b7a00                       48u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0b6ac76d                       53u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0d6a7b1f                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0ef8885c                       31u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1a3c0479                       24u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2a76e2f2                       61u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2e1edbfb                       28u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2fb849ca                       38u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3e7b6d82                       64u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3e8314bc                       46u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4c91c4a7                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e38448c                       63u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4fcbec42                       54u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9fbb06ad                       60u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9fc32995                       51u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_17f11187                       37u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_37fea4b2                       57u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_38cf15b9                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_38cf320f                       59u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_49c8436f                       30u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_59ef7a2a                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_74b45400                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_75ceb29f                       47u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_88d7da53                       58u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_096ff783                       32u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_108c7515                       34u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_238e87f9                       49u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_350c260d                       56u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_624e541b                       55u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_961dd6a8                       27u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1008b467                       52u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7179d90d                       23u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_09413bc2                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_35535faf                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_67493e4a                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_71424d7d                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_80312ba0                       26u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_90908bdc                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_93186e38                       35u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_319663fb                       25u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_388965a3                       45u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_699953c0                       40u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3797127c                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7219126f                       29u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a60cff81                       43u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ae15b571                       50u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b0ae8a73                       20u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b312cc5f                       41u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b564f0c0                       62u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b79653ad                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b7560081                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ba9ea2a5                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bad18405                       44u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bb615a46                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c0ac8d7c                       33u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c3983958                       39u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cc64d5d1                       18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cff815f6                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d01c6afd                       36u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d836fcb2                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e1a24fd2                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ec53c477                       22u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ec659b26                       42u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_eeac2237                       21u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fd46d90f                       19u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_BCL_oJ1939_bms_0b0f8249_Tx               0u
#define PduRConf_PduRDestPdu_BEM_oJ1939_bms_4ca77da7_Tx               1u
#define PduRConf_PduRDestPdu_BHM_oJ1939_bms_2fe35673_Tx               2u
#define PduRConf_PduRDestPdu_BRO_oJ1939_bms_f4a4d079_Tx               3u
#define PduRConf_PduRDestPdu_BSD_oJ1939_bms_6169aa28_Tx               4u
#define PduRConf_PduRDestPdu_BSM_oJ1939_bms_18b10471_Tx               5u
#define PduRConf_PduRDestPdu_BST_oJ1939_bms_8f172738_Tx               6u
#define PduRConf_PduRDestPdu_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_00753c97_Tx_90908bdc_Tx 7u
#define PduRConf_PduRDestPdu_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_3f284506_Tx_09413bc2_Tx 8u
#define PduRConf_PduRDestPdu_Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_c47c83fb_Tx 9u
#define PduRConf_PduRDestPdu_VCU_01_oATOM_HWLIN1_3376b4d2_Tx          10u
#define PduRConf_PduRDestPdu_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx 11u
#define PduRConf_PduRDestPdu_VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_dc79618a_Tx 12u
#define PduRConf_PduRDestPdu_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx 13u
#define PduRConf_PduRDestPdu_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx 14u
#define PduRConf_PduRDestPdu_VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_f466f60f_Tx 15u
#define PduRConf_PduRDestPdu_VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_6d261160_Tx 16u
#define PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx 17u
#define PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_5930977d_Tx 18u
#define PduRConf_PduRDestPdu_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx 19u
#define PduRConf_PduRDestPdu_VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_e81d87a2_Tx 20u
#define PduRConf_PduRDestPdu_VCU_BS_01_oATOM_HWLIN1_bc28519d_Tx       21u
#define PduRConf_PduRDestPdu_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx 22u
#define PduRConf_PduRDestPdu_VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_2cf6caff_Tx 23u
#define PduRConf_PduRDestPdu_VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_99a29031_Tx 24u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx 25u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx 26u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_51f286fc_Tx 27u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_901dd9e6_Tx 28u
#define PduRConf_PduRDestPdu_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx 29u
#define PduRConf_PduRDestPdu_VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_38095b95_Tx 30u
#define PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx 31u
#define PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_f9e6048f_Tx 32u
#define PduRConf_PduRDestPdu_VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_1016cc10_Tx 33u
#define PduRConf_PduRDestPdu_VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_bb987d73_Tx 34u
#define PduRConf_PduRDestPdu_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx 35u
#define PduRConf_PduRDestPdu_VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_fde06b01_Tx 36u
#define PduRConf_PduRDestPdu_VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_e6bfcc3d_Tx 37u
#define PduRConf_PduRDestPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_b1a53ae9_Tx_3e8314bc_Tx 38u
#define PduRConf_PduRDestPdu_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx 39u
#define PduRConf_PduRDestPdu_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx 40u
#define PduRConf_PduRDestPdu_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx 41u
#define PduRConf_PduRDestPdu_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx 42u
#define PduRConf_PduRDestPdu_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx 43u
#define PduRConf_PduRDestPdu_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx 44u
#define PduRConf_PduRDestPdu_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx 45u
#define PduRConf_PduRDestPdu_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx 46u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx 47u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx 48u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx 49u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx 50u
#define PduRConf_PduRDestPdu_VcuCan12TxMsg1_oATOM_CAN_XCP_4049029a_Tx 51u
#define PduRConf_PduRDestPdu_VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx 52u
#define PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg1_oATOM_HWLIN4_7afddfb2_Tx 53u
#define PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg2_oATOM_HWLIN4_f12ee1ab_Tx 54u
#define PduRConf_PduRDestPdu_Vcu_Lin3_TxMsg1_oATOM_HWLIN3_b97bff22_Tx 55u
#define PduRConf_PduRDestPdu_Vcu_Lin3_TxMsg2_oATOM_HWLIN3_32a8c13b_Tx 56u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DiagReq_ALL_oATOM_CAN_Matrix_PT_V600_20250211_278c238c_Rx_d6323ebe_Rx 0u
#define PduRConf_PduRDestPdu_DiagReq_FUN_oATOM_CAN_Matrix_PT_V600_20250211_f00b311f_Rx_f4a18b15_Rx 1u
#define PduRConf_PduRDestPdu_DiagReq_OBD_oATOM_CAN_Matrix_PT_V600_20250211_2ff897c4_Rx_c012a7a4_Rx 2u
#define PduRConf_PduRDestPdu_DiagReq_PT_oATOM_CAN_Matrix_PT_V600_20250211_c86f8199_Rx_d73377b4_Rx 3u
#define PduRConf_PduRDestPdu_DiagReq_VCU_OBD_oATOM_CAN_Matrix_PT_V600_20250211_7d1d4961_Rx_1a5e9c8c_Rx 4u
#define PduRConf_PduRDestPdu_DiagReq_VCU_oATOM_CAN_Matrix_PT_V600_20250211_a64ab01c_Rx_65a4ed4d_Rx 5u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1a5e9c8c                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_65a4ed4d                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c012a7a4                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d6323ebe                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d73377b4                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f4a18b15                       1u
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_BCP_oJ1939_bms_a9d1ea95_Tx               0u
#define PduRConf_PduRDestPdu_BCS_oJ1939_bms_baf9d3e6_Tx               1u
#define PduRConf_PduRDestPdu_BMT_oJ1939_bms_38156aba_Tx               2u
#define PduRConf_PduRDestPdu_BMV_oJ1939_bms_25dabb18_Tx               3u
#define PduRConf_PduRDestPdu_BRM_oJ1939_bms_e96b01db_Tx               4u
#define PduRConf_PduRDestPdu_BSOC_oJ1939_bms_340842a2_Tx              5u
#define PduRConf_PduRDestPdu_DiagResp_VCU_OBD_oATOM_CAN_Matrix_PT_V600_20250211_e13d53cd_Tx 6u
#define PduRConf_PduRDestPdu_DiagResp_VCU_oATOM_CAN_Matrix_PT_V600_20250211_1dcc985c_Tx 7u
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

