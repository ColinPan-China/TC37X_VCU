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
 *              File: Com_Cbk.h
 *   Generation Time: 2025-09-18 10:37:20
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_92b30981_Rx 0u
#define ComConf_ComIPdu_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_19603798_Rx 1u
#define ComConf_ComIPdu_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_c3757d77_Rx 2u
#define ComConf_ComIPdu_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_09e0da82_Rx 3u
#define ComConf_ComIPdu_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_73fc26ce_Rx 4u
#define ComConf_ComIPdu_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_d7aca41b_Rx 5u
#define ComConf_ComIPdu_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_5c7f9a02_Rx 6u
#define ComConf_ComIPdu_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_c19ff818_Rx 7u
#define ComConf_ComIPdu_APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_f53cb06f_Rx 8u
#define ComConf_ComIPdu_BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_0d1b9ac1_Rx 9u
#define ComConf_ComIPdu_BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_86c8a4d8_Rx 10u
#define ComConf_ComIPdu_BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_10f11df6_Rx 11u
#define ComConf_ComIPdu_BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_f1177f98_Rx 12u
#define ComConf_ComIPdu_BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_c71479d5_Rx 13u
#define ComConf_ComIPdu_BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_4cc747cc_Rx 14u
#define ComConf_ComIPdu_BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_83595004_Rx 15u
#define ComConf_ComIPdu_BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_fd2a47f3_Rx 16u
#define ComConf_ComIPdu_BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_61ce11e6_Rx 17u
#define ComConf_ComIPdu_BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_a9484401_Rx 18u
#define ComConf_ComIPdu_BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_229b7a18_Rx 19u
#define ComConf_ComIPdu_BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_ed056dd0_Rx 20u
#define ComConf_ComIPdu_BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_48edebca_Rx 21u
#define ComConf_ComIPdu_BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_7b9afbfb_Rx 22u
#define ComConf_ComIPdu_BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_4a8c07e1_Rx 23u
#define ComConf_ComIPdu_BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_911c2b08_Rx 24u
#define ComConf_ComIPdu_BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8287fedd_Rx 25u
#define ComConf_ComIPdu_BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_aa75a24f_Rx 26u
#define ComConf_ComIPdu_BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_21a69c56_Rx 27u
#define ComConf_ComIPdu_BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_ee388b9e_Rx 28u
#define ComConf_ComIPdu_BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_ed71e625_Rx 29u
#define ComConf_ComIPdu_BS_01_oATOM_HWLIN1_4fec24f8_Rx                30u
#define ComConf_ComIPdu_BS_02_oATOM_HWLIN1_338d0123_Rx                31u
#define ComConf_ComIPdu_BS_03_oATOM_HWLIN1_ae82e055_Rx                32u
#define ComConf_ComIPdu_CCS_oJ1939_bms_0673def2_Rx                    33u
#define ComConf_ComIPdu_CEM_oJ1939_bms_43bf3fcd_Rx                    34u
#define ComConf_ComIPdu_CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_092387bf_Rx 35u
#define ComConf_ComIPdu_CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_82f0b9a6_Rx 36u
#define ComConf_ComIPdu_CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_661858dc_Rx 37u
#define ComConf_ComIPdu_CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_edcb66c5_Rx 38u
#define ComConf_ComIPdu_CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_df8c8006_Rx 39u
#define ComConf_ComIPdu_CHM_oJ1939_bms_04935fb3_Rx                    40u
#define ComConf_ComIPdu_CML_oJ1939_bms_8219a0cf_Rx                    41u
#define ComConf_ComIPdu_CRM_oJ1939_bms_8acb9f4f_Rx                    42u
#define ComConf_ComIPdu_CRO_oJ1939_bms_66f001d0_Rx                    43u
#define ComConf_ComIPdu_CSD_oJ1939_bms_caf47c5b_Rx                    44u
#define ComConf_ComIPdu_CST_oJ1939_bms_c6ec91a7_Rx                    45u
#define ComConf_ComIPdu_CTS_oJ1939_bms_cf077e70_Rx                    46u
#define ComConf_ComIPdu_DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_01d0b409_Rx 47u
#define ComConf_ComIPdu_DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_98d3bd3c_Rx 48u
#define ComConf_ComIPdu_DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_22d2db3a_Rx 49u
#define ComConf_ComIPdu_DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_b2ab7ecc_Rx 50u
#define ComConf_ComIPdu_DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_fbc3e1f1_Rx 51u
#define ComConf_ComIPdu_EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_58e3b562_Rx 52u
#define ComConf_ComIPdu_FRC_01_oATOM_HWLIN1_c69106f2_Rx               53u
#define ComConf_ComIPdu_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ef8c28ba_Rx 54u
#define ComConf_ComIPdu_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_25d77553_Rx 55u
#define ComConf_ComIPdu_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b0697754_Rx 56u
#define ComConf_ComIPdu_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_3bba494d_Rx 57u
#define ComConf_ComIPdu_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f4245e85_Rx 58u
#define ComConf_ComIPdu_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_f76d333e_Rx 59u
#define ComConf_ComIPdu_IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_07ae5d67_Rx 60u
#define ComConf_ComIPdu_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3201aef_Rx 61u
#define ComConf_ComIPdu_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_e4106cfa_Rx 62u
#define ComConf_ComIPdu_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_d229d0d9_Rx 63u
#define ComConf_ComIPdu_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1c45b3ee_Rx 64u
#define ComConf_ComIPdu_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_97968df7_Rx 65u
#define ComConf_ComIPdu_IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_12948905_Rx 66u
#define ComConf_ComIPdu_IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_56d9a0d4_Rx 67u
#define ComConf_ComIPdu_IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_fa3740ee_Rx 68u
#define ComConf_ComIPdu_MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_071cb230_Rx 69u
#define ComConf_ComIPdu_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_8ccf8c29_Rx 70u
#define ComConf_ComIPdu_MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_06ac1cd5_Rx 71u
#define ComConf_ComIPdu_MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_4a7c4da7_Rx 72u
#define ComConf_ComIPdu_MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_021c1dde_Rx 73u
#define ComConf_ComIPdu_MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_89cf23c7_Rx 74u
#define ComConf_ComIPdu_POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_6e196312_Rx 75u
#define ComConf_ComIPdu_POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_e5ca5d0b_Rx 76u
#define ComConf_ComIPdu_POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_9a75b36b_Rx 77u
#define ComConf_ComIPdu_POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_5da6c285_Rx 78u
#define ComConf_ComIPdu_POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_9238d54d_Rx 79u
#define ComConf_ComIPdu_POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_9171b8f6_Rx 80u
#define ComConf_ComIPdu_POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_ccbeaeb3_Rx 81u
#define ComConf_ComIPdu_POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_476d90aa_Rx 82u
#define ComConf_ComIPdu_PRND_oATOM_CAN_Matrix_PT_V600_20250211_a04a662c_Rx 83u
#define ComConf_ComIPdu_SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_fdc48441_Rx 84u
#define ComConf_ComIPdu_SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_bac0c02b_Rx 85u
#define ComConf_ComIPdu_SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_6bfd3d6f_Rx 86u
#define ComConf_ComIPdu_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_9b3e5336_Rx 87u
#define ComConf_ComIPdu_SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_640f878f_Rx 88u
#define ComConf_ComIPdu_SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_afe1198b_Rx 89u
#define ComConf_ComIPdu_SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_f69035b0_Rx 90u
#define ComConf_ComIPdu_SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_2fddccce_Rx 91u
#define ComConf_ComIPdu_SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_0e1163ba_Rx 92u
#define ComConf_ComIPdu_TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_26cca276_Rx 93u
#define ComConf_ComIPdu_TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_ad1f9c6f_Rx 94u
#define ComConf_ComIPdu_Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_1c93f757_Rx 95u
#define ComConf_ComIPdu_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_b24a2ab4_Rx    96u
#define ComConf_ComIPdu_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_5d189c55_Rx    97u
#define ComConf_ComIPdu_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b79e4137_Rx    98u
#define ComConf_ComIPdu_VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx        99u
#define ComConf_ComIPdu_VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx        100u
#define ComConf_ComIPdu_Vcu_Lin0_RxMsg1_oATOM_HWLIN4_1c04db6a_Rx      101u
#define ComConf_ComIPdu_Vcu_Lin0_RxMsg2_oATOM_HWLIN4_6065feb1_Rx      102u
#define ComConf_ComIPdu_Vcu_Lin3_RxMsg1_oATOM_HWLIN3_f97ecc2a_Rx      103u
#define ComConf_ComIPdu_Vcu_Lin3_RxMsg2_oATOM_HWLIN3_851fe9f1_Rx      104u
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_BCL_oJ1939_bms_e5f04d09_Tx                    0u
#define ComConf_ComIPdu_BCP_oJ1939_bms_ece2ed74_Tx                    1u
#define ComConf_ComIPdu_BCS_oJ1939_bms_9b7c3f84_Tx                    2u
#define ComConf_ComIPdu_BEM_oJ1939_bms_deb0debb_Tx                    3u
#define ComConf_ComIPdu_BHM_oJ1939_bms_999cbec5_Tx                    4u
#define ComConf_ComIPdu_BMT_oJ1939_bms_1502dabb_Tx                    5u
#define ComConf_ComIPdu_BMV_oJ1939_bms_f9394424_Tx                    6u
#define ComConf_ComIPdu_BRM_oJ1939_bms_17c47e39_Tx                    7u
#define ComConf_ComIPdu_BRO_oJ1939_bms_fbffe0a6_Tx                    8u
#define ComConf_ComIPdu_BSD_oJ1939_bms_57fb9d2d_Tx                    9u
#define ComConf_ComIPdu_BSM_oJ1939_bms_ca52a7bc_Tx                    10u
#define ComConf_ComIPdu_BSOC_oJ1939_bms_5e951453_Tx                   11u
#define ComConf_ComIPdu_BST_oJ1939_bms_5be370d1_Tx                    12u
#define ComConf_ComIPdu_Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_8bdda24d_Tx 13u
#define ComConf_ComIPdu_VCU_01_oATOM_HWLIN1_a447f974_Tx               14u
#define ComConf_ComIPdu_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_17bac731_Tx 15u
#define ComConf_ComIPdu_VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_28e7bea0_Tx 16u
#define ComConf_ComIPdu_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_d824d0f9_Tx 17u
#define ComConf_ComIPdu_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_db6dbd42_Tx 18u
#define ComConf_ComIPdu_VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_2baed31b_Tx 19u
#define ComConf_ComIPdu_VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_a07ded02_Tx 20u
#define ComConf_ComIPdu_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_0d0df7a0_Tx 21u
#define ComConf_ComIPdu_VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_32508e31_Tx 22u
#define ComConf_ComIPdu_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_1208e503_Tx 23u
#define ComConf_ComIPdu_VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_2d559c92_Tx 24u
#define ComConf_ComIPdu_VCU_BS_01_oATOM_HWLIN1_77dc7aee_Tx            25u
#define ComConf_ComIPdu_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d7fdb34f_Tx 26u
#define ComConf_ComIPdu_VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_2c28a723_Tx 27u
#define ComConf_ComIPdu_VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_ad82eb28_Tx 28u
#define ComConf_ComIPdu_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f29a9fcc_Tx 29u
#define ComConf_ComIPdu_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_7949a1d5_Tx 30u
#define ComConf_ComIPdu_VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_4614d844_Tx 31u
#define ComConf_ComIPdu_VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_898acf8c_Tx 32u
#define ComConf_ComIPdu_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_4c086bc0_Tx 33u
#define ComConf_ComIPdu_VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_fd5e64f0_Tx 34u
#define ComConf_ComIPdu_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_0d9d0aa9_Tx 35u
#define ComConf_ComIPdu_VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_32c07338_Tx 36u
#define ComConf_ComIPdu_VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_fe17094b_Tx 37u
#define ComConf_ComIPdu_VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_28db6ecb_Tx 38u
#define ComConf_ComIPdu_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_20405e82_Tx 39u
#define ComConf_ComIPdu_VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_9b305e0d_Tx 40u
#define ComConf_ComIPdu_VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_8e1c824e_Tx 41u
#define ComConf_ComIPdu_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_5798df68_Tx   42u
#define ComConf_ComIPdu_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_b8ca6989_Tx   43u
#define ComConf_ComIPdu_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_40b0bba8_Tx   44u
#define ComConf_ComIPdu_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_afe20d49_Tx   45u
#define ComConf_ComIPdu_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_79c816e8_Tx   46u
#define ComConf_ComIPdu_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_969aa009_Tx   47u
#define ComConf_ComIPdu_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_6ee07228_Tx   48u
#define ComConf_ComIPdu_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_81b2c4c9_Tx   49u
#define ComConf_ComIPdu_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_eedbf968_Tx   50u
#define ComConf_ComIPdu_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_01894f89_Tx   51u
#define ComConf_ComIPdu_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_eb0f92eb_Tx   52u
#define ComConf_ComIPdu_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_045d240a_Tx   53u
#define ComConf_ComIPdu_VcuCan12TxMsg1_oATOM_CAN_XCP_895c1d63_Tx      54u
#define ComConf_ComIPdu_VcuMeasurementMsg0_oTC37X_VCU_CAN01_0deb23c3_Tx 55u
#define ComConf_ComIPdu_Vcu_Lin0_TxMsg1_oATOM_HWLIN4_81d8d079_Tx      56u
#define ComConf_ComIPdu_Vcu_Lin0_TxMsg2_oATOM_HWLIN4_fdb9f5a2_Tx      57u
#define ComConf_ComIPdu_Vcu_Lin3_TxMsg1_oATOM_HWLIN3_64a2c739_Tx      58u
#define ComConf_ComIPdu_Vcu_Lin3_TxMsg2_oATOM_HWLIN3_18c3e2e2_Tx      59u
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
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /*MD_MSR_MemMap */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after an I-PDU has been received.
    \param[in]    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                               Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param[in]    PduInfoPtr   Payload information of the received I-PDU (pointer to data and data length).
    \return       none
    \context      The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737026
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after the PDU has been transmitted on the network.
                  A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param[in]    TxPduId   ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return       none
    \context      The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737028
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);

/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief          This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
                    Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
                    to the L-PDU buffer given by SduPtr.
                    Use case:
                    This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
                    can be initiated by the Master schedule table itself or a received LIN header.
                    This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
                    (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
                    (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param[in]      TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context        TASK|ISR2
    \synchronous    TRUE
    \reentrant      TRUE, for different Handles
    \trace          SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note           The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);

/**********************************************************************************************************************
  Com_TpTxConfirmation
**********************************************************************************************************************/
/** \brief        This function is called by the PduR after a large I-PDU has been transmitted via the transport protocol on its network.
    \param[in]    PduId    ID of the I-PDU that has been transmitted.
    \param[in]    Result   Result of the transmission of the I-PDU
    \return       None.
    \context      TASK|ISR2
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737029
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpTxConfirmation( PduIdType PduId, Std_ReturnType Result );

/**********************************************************************************************************************
  Com_CopyTxData
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer to copy Data from the Com TP buffer to the lower layer TP buffer.
    \param[in]    PduId               ID of Com TP I-PDU to be transmitted.
    \param[in]    PduInfoPtr          Pointer to a PduInfoType, which indicates the number of bytes to be copied (SduLength) and the location where the data have to be copied to (SduDataPtr).
                                      An SduLength of 0 is possible in order to poll the available transmit data count. In this case no data are to be copied and SduDataPtr might be invalid.
    \param[in]    RetryInfoPtr        If the TpDataState of the RetryInfoPtr is TP_DATARETRY no data will be copied. Otherwise, the COM module
                                      will ignore the value of this pointer, since it always keeps the complete buffer until the transmission of a large I-PDU is either confirmed or aborted.
    \param[out]   TxDataCntPtr        Out parameter: Remaining Tx data after completion of this call.
    \return       BufReq_ReturnType   BUFREQ_OK:       Data has been copied to the transmit buffer completely as requested.
                                      BUFREQ_E_BUSY:   The transmission buffer is actually not available (implementation specific).
                                      BUFREQ_E_NOT_OK: Data has not been copied. Request failed, in case the corresponding I-PDU was stopped.
    \context      TASK|ISR2
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2736849, SPEC-2737039, SPEC-2737040
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyTxData(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr, P2VAR(RetryInfoType, AUTOMATIC, COM_APPL_VAR) RetryInfoPtr, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) TxDataCntPtr);

/**********************************************************************************************************************
  Com_TpRxIndication
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after a TP I-PDU has been received.
    \param[in]    PduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                             Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param[in]    Result     Indicates whether the Message was received successfully.
    \return       none
    \context      TASK|ISR2
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737027, SPEC-2737063
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpRxIndication( PduIdType PduId, Std_ReturnType Result );

/**********************************************************************************************************************
  Com_StartOfReception
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer to indicate the start of a incomming TP connection.
    \param[in]    ComRxPduId         ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param[in]    TpSduInfoPtr       The parameter 'TpSduInfoPtr' is used to pass the Meta Data (pointer to data and data length) to the Com.
    \param[in]    TpSduLength        complete length of the TP I-PDU to be received.
    \param[out]   RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return       BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.
                                                      RxBufferSizePtr indicates the available receive buffer.
                                     BUFREQ_E_NOT_OK: Connection has been rejected.
                                                      RxBufferSizePtr remains unchanged.
                                     BUFREQ_E_OVFL:   In case the configured buffer size as specified via ComPduIdRef.PduLength is smaller than TpSduLength.
    \context      TASK|ISR2
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2736846, SPEC-2737030, SPEC-2737031, SPEC-2737032, SPEC-2737033, SPEC-2737034, SPEC-2737035, SPEC-2737036
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_StartOfReception(PduIdType ComRxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) TpSduInfoPtr, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

/**********************************************************************************************************************
  Com_CopyRxData
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer to hand a received TP segment to Com.
                  The Com copies the received segment in his internal tp buffer.
    \param[in]    PduId              ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param[in]    PduInfoPointer     Payload information of the received TP segment (pointer to data and data length).
    \param[out]   RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return       BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.
                                                      RxBufferSizePtr indicates the available receive buffer.
                                     BUFREQ_E_NOT_OK: Connection has been rejected.
                                                      RxBufferSizePtr remains unchanged.
    \context      TASK|ISR2
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2736846, SPEC-2737037, SPEC-2737038
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyRxData(PduIdType PduId, CONSTP2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPointer, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

