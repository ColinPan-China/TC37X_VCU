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
 *   Generation Time: 2025-08-08 14:45:52
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
 /*   PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_ComTransmit  PduR_DcmTransmit  PduR_DcmCancelTransmit  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_LinIfIfRxIndication  PduR_LinIfTransmit  PduR_LinIfTxConfirmation  PduR_LinIfTriggerTransmit  */ 



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
#define PduRConf_PduRDestPdu_EXV2_Status_oLIN00_7fcf9f75_Rx_c3f2be6b_Rx 8u
#define PduRConf_PduRDestPdu_EXV_1_VCU_oLIN00_366267d6_Rx_718a1cfb_Rx 9u
#define PduRConf_PduRDestPdu_EXV_2_VCU_oLIN00_85f64a15_Rx_b894d38e_Rx 10u
#define PduRConf_PduRDestPdu_HVCH_Rsp01_oLIN00_d50f5fa3_Rx_aa2a3f7d_Rx 11u
#define PduRConf_PduRDestPdu_HVCH_Rsp02_oLIN00_a3ea669e_Rx_90a9658c_Rx 12u
#define PduRConf_PduRDestPdu_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx_ca3eaa8a_Rx 13u
#define PduRConf_PduRDestPdu_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx_283e282c_Rx 14u
#define PduRConf_PduRDestPdu_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx_d09902f0_Rx 15u
#define PduRConf_PduRDestPdu_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx_77b4603c_Rx 16u
#define PduRConf_PduRDestPdu_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx_12481f07_Rx 17u
#define PduRConf_PduRDestPdu_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx_6a5d743a_Rx 18u
#define PduRConf_PduRDestPdu_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx_65adbba1_Rx 19u
#define PduRConf_PduRDestPdu_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx_629168fc_Rx 20u
#define PduRConf_PduRDestPdu_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx_4e239512_Rx 21u
#define PduRConf_PduRDestPdu_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx_fcecab79_Rx 22u
#define PduRConf_PduRDestPdu_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx_ca150190_Rx 23u
#define PduRConf_PduRDestPdu_PMP2_Sts_oLIN00_200c907c_Rx_9a742e46_Rx  24u
#define PduRConf_PduRDestPdu_PMP3_Sts_oLIN00_4e808b3d_Rx_43cea622_Rx  25u
#define PduRConf_PduRDestPdu_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx_316b9b30_Rx 26u
#define PduRConf_PduRDestPdu_SVA_VCU_STD_oLIN00_4f0795ef_Rx_166cd16c_Rx 27u
#define PduRConf_PduRDestPdu_VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx_4e610413_Rx 28u
#define PduRConf_PduRDestPdu_VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx_a2204cbf_Rx 29u
#define PduRConf_PduRDestPdu_VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx_9d116735_Rx 30u
#define PduRConf_PduRDestPdu_VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx_0a95646f_Rx 31u
#define PduRConf_PduRDestPdu_VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx 32u
#define PduRConf_PduRDestPdu_VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx 33u
#define PduRConf_PduRDestPdu_VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx 34u
#define PduRConf_PduRDestPdu_VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx 35u
#define PduRConf_PduRDestPdu_Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx_12331c6c_Rx 36u
#define PduRConf_PduRDestPdu_Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx_d314568e_Rx 37u
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a95646f                       31u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0dbe25ba                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e239512                       21u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e610413                       28u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a5d743a                       18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9a742e46                       24u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9d116735                       30u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9eae4558                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_08ea31b4                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_43cea622                       25u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_56f39b3b                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_65adbba1                       19u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_77b4603c                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_90a9658c                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_166cd16c                       27u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_283e282c                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_316b9b30                       26u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_686bd310                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_718a1cfb                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_803efadc                       33u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6711bd67                       32u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_12331c6c                       36u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_12481f07                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_629168fc                       20u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3905054b                       34u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a2204cbf                       29u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_aa2a3f7d                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b894d38e                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bc9c1fec                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c3f2be6b                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca3eaa8a                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca150190                       23u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d84c121b                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d09902f0                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d314568e                       37u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f5b46736                       35u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f767588b                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fcecab79                       22u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a2b7a00                       18u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0b6ac76d                       23u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1a8748e9                       45u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3ef2d11c                       34u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4bd8719a                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4fcbec42                       24u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a17111c                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6c0ea6d2                       29u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6cefc258                       31u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8c9b3cfc                       39u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9fc32995                       21u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_15ef524a                       36u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_17f11187                       13u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_23c89b9b                       35u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_27dcf988                       40u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_37fea4b2                       27u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_49c8436f                       8u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_75ceb29f                       17u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_88d7da53                       28u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_91ca29f5                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_91d52164                       41u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_96b222db                       33u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_108c7515                       12u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_238e87f9                       19u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_350c260d                       26u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_573a7055                       32u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_624e541b                       25u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_886ac60a                       37u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_961dd6a8                       7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0417dd35                       44u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1008b467                       22u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_69924b1b                       42u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_275934e8                       38u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_319663fb                       6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0361509d                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9414725b                       10u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a59b3a32                       30u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a60cff81                       15u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ae15b571                       20u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b06eca36                       16u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c0ac8d7c                       11u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c3983958                       14u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ec53c477                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_eeac2237                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fd46d90f                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ff5e60c1                       43u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_EDCU_EXV2_oLIN00_18b050dc_Tx             0u
#define PduRConf_PduRDestPdu_PMP_Cmd_oLIN00_6d889c97_Tx               1u
#define PduRConf_PduRDestPdu_TCU_HVCH_Cmd_oLIN00_ddc31229_Tx          2u
#define PduRConf_PduRDestPdu_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx 3u
#define PduRConf_PduRDestPdu_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx 4u
#define PduRConf_PduRDestPdu_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx 5u
#define PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx 6u
#define PduRConf_PduRDestPdu_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx 7u
#define PduRConf_PduRDestPdu_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx 8u
#define PduRConf_PduRDestPdu_VCU_EXV_1_oLIN00_58a890ac_Tx             9u
#define PduRConf_PduRDestPdu_VCU_EXV_2_oLIN00_2e4da991_Tx             10u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx 11u
#define PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx 12u
#define PduRConf_PduRDestPdu_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx 13u
#define PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx 14u
#define PduRConf_PduRDestPdu_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx 15u
#define PduRConf_PduRDestPdu_VCU_SVA_CMD_oLIN00_89e2bb7b_Tx           16u
#define PduRConf_PduRDestPdu_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx 17u
#define PduRConf_PduRDestPdu_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx 18u
#define PduRConf_PduRDestPdu_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx 19u
#define PduRConf_PduRDestPdu_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx 20u
#define PduRConf_PduRDestPdu_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx 21u
#define PduRConf_PduRDestPdu_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx 22u
#define PduRConf_PduRDestPdu_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx 23u
#define PduRConf_PduRDestPdu_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx 24u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx 25u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx 26u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx 27u
#define PduRConf_PduRDestPdu_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx 28u
#define PduRConf_PduRDestPdu_VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx 29u
#define PduRConf_PduRDestPdu_VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx 30u
#define PduRConf_PduRDestPdu_VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx 31u
#define PduRConf_PduRDestPdu_VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx 32u
#define PduRConf_PduRDestPdu_VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx 33u
#define PduRConf_PduRDestPdu_VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx 34u
#define PduRConf_PduRDestPdu_VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx 35u
#define PduRConf_PduRDestPdu_VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx 36u
#define PduRConf_PduRDestPdu_VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx 37u
#define PduRConf_PduRDestPdu_VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx 38u
#define PduRConf_PduRDestPdu_VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx 39u
#define PduRConf_PduRDestPdu_VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx 40u
#define PduRConf_PduRDestPdu_VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx   41u
#define PduRConf_PduRDestPdu_VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx   42u
#define PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx       43u
#define PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx       44u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx 0u
#define PduRConf_PduRDestPdu_Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx 1u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4bac36fb                       0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_925fbf89                       1u
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx 0u
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

