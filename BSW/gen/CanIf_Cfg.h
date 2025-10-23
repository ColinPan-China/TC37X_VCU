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
 *            Module: CanIf
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Cfg.h
 *   Generation Time: 2025-10-23 10:40:42
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#if !defined(CANIF_CFG_H)
#define CANIF_CFG_H


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/
#include "Can.h"




/**********************************************************************************************************************
  \def  Version defines
**********************************************************************************************************************/

#define CANIF_CFG5_VERSION                                 0x0500u
#define CANIF_CFG5_RELEASE_VERSION                         0x01u
#define IF_ASRIFCAN_GENTOOL_CFG5_MAJOR_VERSION             0x05u
#define IF_ASRIFCAN_GENTOOL_CFG5_MINOR_VERSION             0x00u
#define IF_ASRIFCAN_GENTOOL_CFG5_PATCH_VERSION             0x01u

#define CANIF_CFG5_GENERATOR_COMPATIBILITY_VERSION         0x0212u

/**********************************************************************************************************************
  \def  Switches
**********************************************************************************************************************/

#define CANIF_TRANSMIT_BUFFER                              STD_ON /* Signals if Tx-buffer is enabled at all in CanIf. The value is determined from parameter "CanIfPublicTxBuffering". */
#define CANIF_TRANSMIT_BUFFER_PRIO_BY_CANID                STD_OFF
#define CANIF_TRANSMIT_BUFFER_FIFO                         STD_ON
#define CANIF_BITQUEUE                                     STD_OFF
#define CANIF_STATIC_FD_TXQUEUE                            STD_OFF
#define CANIF_WAKEUP_SUPPORT                               STD_ON
#define CANIF_WAKEUP_VALIDATION                            STD_ON
#define CANIF_WAKEUP_VALID_ALL_RX_MSGS                     STD_OFF
#define CANIF_WAKEUP_VALID_ONLY_NM_RX_MSGS                 STD_ON
#define CANIF_CHECK_WAKEUP_CAN_RET_TYPE                    STD_OFF
#define CANIF_DEV_ERROR_DETECT                             STD_ON
#define CANIF_DEV_ERROR_REPORT                             STD_ON
#define CANIF_TRANSMIT_CANCELLATION                        STD_OFF
#define CANIF_CANCEL_SUPPORT_API                           STD_OFF
#define CANIF_VERSION_INFO_API                             STD_OFF
#define CANIF_DLC_CHECK                                    STD_ON
#define CANIF_SUPPORT_NMOSEK_INDICATION                    STD_OFF
#define CANIF_TRCV_HANDLING                                STD_ON
#define CANIF_TRCV_MAPPING                                 STD_OFF
#define CANIF_PN_TRCV_HANDLING                             STD_OFF
#define CANIF_EXTENDEDID_SUPPORT                           STD_ON
#define CANIF_SETDYNAMICTXID_API                           STD_OFF
#define CANIF_PN_WU_TX_PDU_FILTER                          STD_OFF
#define CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT            STD_OFF
#define CANIF_RX_INDICATION_TYPE_I_IS_USED                 STD_OFF
#define CANIF_RX_INDICATION_TYPE_IV_IS_USED                STD_OFF
#define CANIF_CHANGE_BAUDRATE_SUPPORT                      STD_OFF
#define CANIF_SET_BAUDRATE_API                             STD_OFF
#define CANIF_META_DATA_RX_SUPPORT                         STD_ON
#define CANIF_META_DATA_TX_SUPPORT                         STD_ON
#define CANIF_J1939_DYN_ADDR_SUPPORT                       CANIF_J1939_DYN_ADDR_DISABLED
#define CANIF_MULTIPLE_CANDRV_SUPPORT                      STD_OFF
#define CANIF_RX_SEARCH_CONSIDER_MSG_TYPE                  STD_OFF
#define CANIF_ECUC_SAFE_BSW_CHECKS                         STD_OFF
#define CANIF_EXTENDED_RAM_CHECK_SUPPORT                   STD_OFF
#define CANIF_DATA_CHECKSUM_RX_SUPPORT                     STD_OFF
#define CANIF_DATA_CHECKSUM_TX_SUPPORT                     STD_OFF
#define CANIF_SET_PDU_RECEPTION_MODE_SUPPORT               STD_OFF
#define CANIF_BUS_MIRRORING_SUPPORT                        STD_OFF
#define CANIF_ENABLE_SECURITY_EVENT_REPORTING              STD_OFF
#define CANIF_SUPPORT_CANDRV_ASR440                        STD_OFF

#define CANIF_SUPPRESS_EXTENDED_VERSION_CHECK

#ifndef CANIF_USE_DUMMY_STATEMENT
#define CANIF_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT
#define CANIF_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT_CONST
#define CANIF_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANIF_ATOMIC_VARIABLE_ACCESS
#define CANIF_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANIF_PROCESSOR_TC377T
#define CANIF_PROCESSOR_TC377T
#endif
#ifndef CANIF_COMP_TASKING
#define CANIF_COMP_TASKING
#endif
#ifndef CANIF_GEN_GENERATOR_MSR
#define CANIF_GEN_GENERATOR_MSR
#endif
#ifndef CANIF_CPUTYPE_BITORDER_LSB2MSB
#define CANIF_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#define CANIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_LINKTIME
#define CANIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANIF_CONFIGURATION_VARIANT
#define CANIF_CONFIGURATION_VARIANT CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANIF_POSTBUILD_VARIANT_SUPPORT
#define CANIF_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CANIF_CPU_TYPE_SET_IN_ECUC_MODULE                  CPU_TYPE_32

/**********************************************************************************************************************
  \def  Search algorithm
**********************************************************************************************************************/
#define CANIF_SEARCH_ALGORITHM                             CANIF_LINEAR


/**********************************************************************************************************************
  \def  Configuration variant
**********************************************************************************************************************/
#define CANIF_CONFIG_VARIANT                               CANIF_CFGVAR_PRECOMPILETIME


/**********************************************************************************************************************
  Type definitions
**********************************************************************************************************************/

/**********************************************************************************************************************
  \def  Tx-buffer - queue size type
**********************************************************************************************************************/
typedef uint8 CanIf_TxBufferSizeType;


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
#include "CanIf_Types.h"

/**********************************************************************************************************************
  \def  Memory mapping keywords
**********************************************************************************************************************/
#define CANIF_XCFG                                         CANIF_CONST
#define CANIF_VAR_XCFG_NOINIT                              CANIF_VAR_NOINIT


/**********************************************************************************************************************
  \def  Invalid PDU handle
**********************************************************************************************************************/
#define CanIf_TxPduHnd_INVALID                             0xFFu
#define CanIf_RxPduHnd_INVALID                             0xFFu


/**********************************************************************************************************************
  \def  Tx-buffer - handling types
**********************************************************************************************************************/
#define CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID                                                             1u
#define CANIF_TXBUFFER_HANDLINGTYPE_FIFO                                                                    2u
#define CANIF_TXBUFFER_HANDLINGTYPE_NONE                                                                    3u



/**********************************************************************************************************************
  \def  CAN controller - symbolic handles
**********************************************************************************************************************/

#define CanIfConf_CanIfCtrlCfg_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292                         0u
#define CanIfConf_CanIfCtrlCfg_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03                         1u
#define CanIfConf_CanIfCtrlCfg_CT_ATOM_CAN_XCP_40afa023                                             2u
#define CanIfConf_CanIfCtrlCfg_CT_J1939_bms_92f0044b                                                3u
#define CanIfConf_CanIfCtrlCfg_CT_TC37X_VCU_CAN01_55ccbf7a                                          4u


/**********************************************************************************************************************
  \def  CAN transceiver - symbolic handles
**********************************************************************************************************************/

#define CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_PT                                                      0u





/**********************************************************************************************************************
  \def  Transceiver handling APIs
**********************************************************************************************************************/
 
#define CanTrcv_SetOpMode                                  CanTrcv_30_Tja1040_SetOpMode
#define CanTrcv_GetOpMode                                  CanTrcv_30_Tja1040_GetOpMode
#define CanTrcv_GetBusWuReason                             CanTrcv_30_Tja1040_GetBusWuReason
#define CanTrcv_SetWakeupMode                              CanTrcv_30_Tja1040_SetWakeupMode
#define CanTrcv_CheckWakeup                                CanTrcv_30_Tja1040_CheckWakeup


/**********************************************************************************************************************
  \def  Tx PDU handles
**********************************************************************************************************************/

#define CanIfTxPduHnd_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx                          0u
#define CanIfTxPduHnd_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx              1u
#define CanIfTxPduHnd_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx                          2u
#define CanIfTxPduHnd_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx               3u
#define CanIfTxPduHnd_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx               4u
#define CanIfTxPduHnd_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx                          5u
#define CanIfTxPduHnd_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx                          6u
#define CanIfTxPduHnd_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx                  7u
#define CanIfTxPduHnd_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx                    8u
#define CanIfTxPduHnd_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx                         9u
#define CanIfTxPduHnd_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx                      10u
#define CanIfTxPduHnd_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx                      11u
#define CanIfTxPduHnd_DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx             12u
#define CanIfTxPduHnd_Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_17c5802f_Tx           13u
#define CanIfTxPduHnd_DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx                 14u
#define CanIfTxPduHnd_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_21d4212a_Tx                          15u
#define CanIfTxPduHnd_VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_a221e0ee_Tx                   16u
#define CanIfTxPduHnd_VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_ce5997a6_Tx               17u
#define CanIfTxPduHnd_VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_d64c1292_Tx                          18u
#define CanIfTxPduHnd_VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_b18572fb_Tx               19u
#define CanIfTxPduHnd_VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_59ebe7dd_Tx                   20u
#define CanIfTxPduHnd_VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_91495a4f_Tx                          21u
#define CanIfTxPduHnd_VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_386e6ea6_Tx                          22u
#define CanIfTxPduHnd_VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_c350eb20_Tx                         23u
#define CanIfTxPduHnd_VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c9a902ae_Tx                        24u
#define CanIfTxPduHnd_VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_d17423c6_Tx                         25u
#define CanIfTxPduHnd_VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_ef1d8001_Tx                      26u
#define CanIfTxPduHnd_VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0136bf08_Tx                    27u
#define CanIfTxPduHnd_VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_d9bb8aad_Tx                         28u
#define CanIfTxPduHnd_VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_01fbbe2f_Tx                      29u
#define CanIfTxPduHnd_VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a9fa037b_Tx                      30u
#define CanIfTxPduHnd_XCP_Response_oATOM_CAN_XCP_d6d6f7ba_Tx                                        31u
#define CanIfTxPduHnd_VcuCan12TxMsg1_oATOM_CAN_XCP_d981eee3_Tx                                      32u
#define CanIfTxPduHnd_TPCM_Tp_oJ1939_bms_a48fdf8c_Tx                                                33u
#define CanIfTxPduHnd_TPDT_Tp_oJ1939_bms_8ac69245_Tx                                                34u
#define CanIfTxPduHnd_BHM_oJ1939_bms_044d7d7d_Tx                                                    35u
#define CanIfTxPduHnd_BSD_oJ1939_bms_fde044b7_Tx                                                    36u
#define CanIfTxPduHnd_BSM_oJ1939_bms_9623b7f3_Tx                                                    37u
#define CanIfTxPduHnd_BCL_oJ1939_bms_23e5ef2c_Tx                                                    38u
#define CanIfTxPduHnd_BRO_oJ1939_bms_c539320a_Tx                                                    39u
#define CanIfTxPduHnd_BEM_oJ1939_bms_b95b1f8b_Tx                                                    40u
#define CanIfTxPduHnd_BST_oJ1939_bms_4a4e2ee5_Tx                                                    41u
#define CanIfTxPduHnd_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx                                   42u
#define CanIfTxPduHnd_VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx                               43u
#define CanIfTxPduHnd_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx                                   44u
#define CanIfTxPduHnd_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx                                   45u
#define CanIfTxPduHnd_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx                                   46u
#define CanIfTxPduHnd_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx                                   47u
#define CanIfTxPduHnd_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx                                   48u
#define CanIfTxPduHnd_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx                                   49u
#define CanIfTxPduHnd_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx                                   50u
#define CanIfTxPduHnd_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx                                   51u
#define CanIfTxPduHnd_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx                                   52u
#define CanIfTxPduHnd_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx                                   53u
#define CanIfTxPduHnd_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx                                   54u
#define CanIfTxPduHnd_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx                                   55u


/**********************************************************************************************************************
  \def  Rx PDU handles (Rx indication function specific ones)
**********************************************************************************************************************/

/* These definitions can change at Post-build configuration time. Use them wisely. */
/* Assigned to: NULL_PTR*/
/* Assigned to: CanNm_RxIndication*/
#define CanIfRxPduHnd_VCU_42a243c5_Rx                                                               0u
#define CanIfRxPduHnd_VCU_8f9a5a9f_Rx                                                               1u
#define CanIfRxPduHnd_VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx                                   2u
/* Assigned to: CanTp_RxIndication*/
#define CanIfRxPduHnd_DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx                  0u
#define CanIfRxPduHnd_DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx                   1u
#define CanIfRxPduHnd_DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx              2u
#define CanIfRxPduHnd_DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx                  3u
#define CanIfRxPduHnd_DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx                  4u
#define CanIfRxPduHnd_DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx                  5u
/* Assigned to: J1939Tp_RxIndication*/
#define CanIfRxPduHnd_TPCM_Tp_oJ1939_bms_a48fdf8c_Rx                                                0u
/* Assigned to: PduR_CanIfRxIndication*/
#define CanIfRxPduHnd_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx                          0u
#define CanIfRxPduHnd_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx                     1u
#define CanIfRxPduHnd_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx                          2u
#define CanIfRxPduHnd_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx                          3u
#define CanIfRxPduHnd_EPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_0f3c50a5_Rx                        4u
#define CanIfRxPduHnd_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx                         5u
#define CanIfRxPduHnd_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx                     6u
#define CanIfRxPduHnd_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx                     7u
#define CanIfRxPduHnd_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx                     8u
#define CanIfRxPduHnd_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx                   9u
#define CanIfRxPduHnd_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx                   10u
#define CanIfRxPduHnd_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx                      11u
#define CanIfRxPduHnd_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx                         12u
#define CanIfRxPduHnd_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx                         13u
#define CanIfRxPduHnd_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx                   14u
#define CanIfRxPduHnd_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx                   15u
#define CanIfRxPduHnd_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx                   16u
#define CanIfRxPduHnd_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx               17u
#define CanIfRxPduHnd_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx               18u
#define CanIfRxPduHnd_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx                        19u
#define CanIfRxPduHnd_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx            20u
#define CanIfRxPduHnd_Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx            21u
#define CanIfRxPduHnd_SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx        22u
#define CanIfRxPduHnd_IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx               23u
#define CanIfRxPduHnd_BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx                 24u
#define CanIfRxPduHnd_BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx                   25u
#define CanIfRxPduHnd_BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx                 26u
#define CanIfRxPduHnd_BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx                 27u
#define CanIfRxPduHnd_BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx                         28u
#define CanIfRxPduHnd_BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx                29u
#define CanIfRxPduHnd_MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx              30u
#define CanIfRxPduHnd_MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx              31u
#define CanIfRxPduHnd_CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx                     32u
#define CanIfRxPduHnd_CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx                        33u
#define CanIfRxPduHnd_CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx                        34u
#define CanIfRxPduHnd_CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx                          35u
#define CanIfRxPduHnd_BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx                          36u
#define CanIfRxPduHnd_BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx              37u
#define CanIfRxPduHnd_POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx               38u
#define CanIfRxPduHnd_BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx                   39u
#define CanIfRxPduHnd_BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx                         40u
#define CanIfRxPduHnd_POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx                     41u
#define CanIfRxPduHnd_IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx                          42u
#define CanIfRxPduHnd_SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx                       43u
#define CanIfRxPduHnd_SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx                          44u
#define CanIfRxPduHnd_DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx                       45u
#define CanIfRxPduHnd_DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx                       46u
#define CanIfRxPduHnd_DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx                          47u
#define CanIfRxPduHnd_DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx                          48u
#define CanIfRxPduHnd_DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx                          49u
#define CanIfRxPduHnd_CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx                          50u
#define CanIfRxPduHnd_BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx                          51u
#define CanIfRxPduHnd_BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx                          52u
#define CanIfRxPduHnd_EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx                  53u
#define CanIfRxPduHnd_APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx                        54u
#define CanIfRxPduHnd_TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx                          55u
#define CanIfRxPduHnd_TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx                          56u
#define CanIfRxPduHnd_MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx                 57u
#define CanIfRxPduHnd_MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx              58u
#define CanIfRxPduHnd_POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx               59u
#define CanIfRxPduHnd_PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx                            60u
#define CanIfRxPduHnd_POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx             61u
#define CanIfRxPduHnd_POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx               62u
#define CanIfRxPduHnd_POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx                     63u
#define CanIfRxPduHnd_POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx                   64u
#define CanIfRxPduHnd_POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx                   65u
#define CanIfRxPduHnd_SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx                          66u
#define CanIfRxPduHnd_SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx                          67u
#define CanIfRxPduHnd_SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx                        68u
#define CanIfRxPduHnd_SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx                      69u
#define CanIfRxPduHnd_SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx                      70u
#define CanIfRxPduHnd_BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx                    71u
#define CanIfRxPduHnd_BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx                 72u
#define CanIfRxPduHnd_BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx                   73u
#define CanIfRxPduHnd_BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx                   74u
#define CanIfRxPduHnd_BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx                   75u
#define CanIfRxPduHnd_BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx                   76u
#define CanIfRxPduHnd_BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx                77u
#define CanIfRxPduHnd_IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx                          78u
#define CanIfRxPduHnd_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx                          79u
#define CanIfRxPduHnd_BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx                   80u
#define CanIfRxPduHnd_BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx                   81u
#define CanIfRxPduHnd_IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx                   82u
#define CanIfRxPduHnd_MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx                          83u
#define CanIfRxPduHnd_CST_oJ1939_bms_e81a6c9e_Rx                                                    84u
#define CanIfRxPduHnd_CRO_oJ1939_bms_676d7071_Rx                                                    85u
#define CanIfRxPduHnd_CRM_oJ1939_bms_0744fcab_Rx                                                    86u
#define CanIfRxPduHnd_CSD_oJ1939_bms_5fb406cc_Rx                                                    87u
#define CanIfRxPduHnd_CHM_oJ1939_bms_a6193f06_Rx                                                    88u
#define CanIfRxPduHnd_CTS_oJ1939_bms_e1ed0074_Rx                                                    89u
#define CanIfRxPduHnd_CCS_oJ1939_bms_fda6a12f_Rx                                                    90u
#define CanIfRxPduHnd_CML_oJ1939_bms_69f2d4c4_Rx                                                    91u
#define CanIfRxPduHnd_CEM_oJ1939_bms_1b0f5df0_Rx                                                    92u
#define CanIfRxPduHnd_VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx                                        93u
#define CanIfRxPduHnd_VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx                                        94u
#define CanIfRxPduHnd_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx                                    95u
#define CanIfRxPduHnd_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx                                    96u
#define CanIfRxPduHnd_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx                                    97u
/* Assigned to: Xcp_CanIfRxIndication*/
#define CanIfRxPduHnd_XCP_Request_oATOM_CAN_XCP_c6725b76_Rx                                         0u



/**********************************************************************************************************************
  \def  AUTOSAR Tx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfTxPduCfg_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx                0u
#define CanIfConf_CanIfTxPduCfg_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx    1u
#define CanIfConf_CanIfTxPduCfg_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx                2u
#define CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx     3u
#define CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx     4u
#define CanIfConf_CanIfTxPduCfg_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx                5u
#define CanIfConf_CanIfTxPduCfg_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx                6u
#define CanIfConf_CanIfTxPduCfg_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx        7u
#define CanIfConf_CanIfTxPduCfg_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx          8u
#define CanIfConf_CanIfTxPduCfg_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx               9u
#define CanIfConf_CanIfTxPduCfg_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx            10u
#define CanIfConf_CanIfTxPduCfg_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx            11u
#define CanIfConf_CanIfTxPduCfg_DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx   12u
#define CanIfConf_CanIfTxPduCfg_Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_17c5802f_Tx 13u
#define CanIfConf_CanIfTxPduCfg_DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx       14u
#define CanIfConf_CanIfTxPduCfg_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_21d4212a_Tx                15u
#define CanIfConf_CanIfTxPduCfg_VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_a221e0ee_Tx         16u
#define CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_ce5997a6_Tx     17u
#define CanIfConf_CanIfTxPduCfg_VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_d64c1292_Tx                18u
#define CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_b18572fb_Tx     19u
#define CanIfConf_CanIfTxPduCfg_VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_59ebe7dd_Tx         20u
#define CanIfConf_CanIfTxPduCfg_VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_91495a4f_Tx                21u
#define CanIfConf_CanIfTxPduCfg_VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_386e6ea6_Tx                22u
#define CanIfConf_CanIfTxPduCfg_VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_c350eb20_Tx               23u
#define CanIfConf_CanIfTxPduCfg_VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c9a902ae_Tx              24u
#define CanIfConf_CanIfTxPduCfg_VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_d17423c6_Tx               25u
#define CanIfConf_CanIfTxPduCfg_VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_ef1d8001_Tx            26u
#define CanIfConf_CanIfTxPduCfg_VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0136bf08_Tx          27u
#define CanIfConf_CanIfTxPduCfg_VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_d9bb8aad_Tx               28u
#define CanIfConf_CanIfTxPduCfg_VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_01fbbe2f_Tx            29u
#define CanIfConf_CanIfTxPduCfg_VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a9fa037b_Tx            30u
#define CanIfConf_CanIfTxPduCfg_XCP_Response_oATOM_CAN_XCP_d6d6f7ba_Tx                              31u
#define CanIfConf_CanIfTxPduCfg_VcuCan12TxMsg1_oATOM_CAN_XCP_d981eee3_Tx                            32u
#define CanIfConf_CanIfTxPduCfg_TPCM_Tp_oJ1939_bms_a48fdf8c_Tx                                      33u
#define CanIfConf_CanIfTxPduCfg_TPDT_Tp_oJ1939_bms_8ac69245_Tx                                      34u
#define CanIfConf_CanIfTxPduCfg_BHM_oJ1939_bms_044d7d7d_Tx                                          35u
#define CanIfConf_CanIfTxPduCfg_BSD_oJ1939_bms_fde044b7_Tx                                          36u
#define CanIfConf_CanIfTxPduCfg_BSM_oJ1939_bms_9623b7f3_Tx                                          37u
#define CanIfConf_CanIfTxPduCfg_BCL_oJ1939_bms_23e5ef2c_Tx                                          38u
#define CanIfConf_CanIfTxPduCfg_BRO_oJ1939_bms_c539320a_Tx                                          39u
#define CanIfConf_CanIfTxPduCfg_BEM_oJ1939_bms_b95b1f8b_Tx                                          40u
#define CanIfConf_CanIfTxPduCfg_BST_oJ1939_bms_4a4e2ee5_Tx                                          41u
#define CanIfConf_CanIfTxPduCfg_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx                         42u
#define CanIfConf_CanIfTxPduCfg_VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx                     43u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx                         44u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx                         45u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx                         46u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx                         47u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx                         48u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx                         49u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx                         50u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx                         51u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx                         52u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx                         53u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx                         54u
#define CanIfConf_CanIfTxPduCfg_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx                         55u


/**********************************************************************************************************************
  \def  AUTOSAR Rx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfRxPduCfg_VCU_42a243c5_Rx                                                     0u
#define CanIfConf_CanIfRxPduCfg_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx                1u
#define CanIfConf_CanIfRxPduCfg_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx           2u
#define CanIfConf_CanIfRxPduCfg_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx                3u
#define CanIfConf_CanIfRxPduCfg_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx                4u
#define CanIfConf_CanIfRxPduCfg_EPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_0f3c50a5_Rx              5u
#define CanIfConf_CanIfRxPduCfg_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx               6u
#define CanIfConf_CanIfRxPduCfg_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx           7u
#define CanIfConf_CanIfRxPduCfg_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx           8u
#define CanIfConf_CanIfRxPduCfg_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx           9u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx         10u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx         11u
#define CanIfConf_CanIfRxPduCfg_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx            12u
#define CanIfConf_CanIfRxPduCfg_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx               13u
#define CanIfConf_CanIfRxPduCfg_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx               14u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx         15u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx         16u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx         17u
#define CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx     18u
#define CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx     19u
#define CanIfConf_CanIfRxPduCfg_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx              20u
#define CanIfConf_CanIfRxPduCfg_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx  21u
#define CanIfConf_CanIfRxPduCfg_VCU_8f9a5a9f_Rx                                                     22u
#define CanIfConf_CanIfRxPduCfg_DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx        23u
#define CanIfConf_CanIfRxPduCfg_DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx         24u
#define CanIfConf_CanIfRxPduCfg_DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx    25u
#define CanIfConf_CanIfRxPduCfg_DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx        26u
#define CanIfConf_CanIfRxPduCfg_DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx        27u
#define CanIfConf_CanIfRxPduCfg_DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx        28u
#define CanIfConf_CanIfRxPduCfg_Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx  29u
#define CanIfConf_CanIfRxPduCfg_SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx 30u
#define CanIfConf_CanIfRxPduCfg_IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx     31u
#define CanIfConf_CanIfRxPduCfg_BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx       32u
#define CanIfConf_CanIfRxPduCfg_BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx         33u
#define CanIfConf_CanIfRxPduCfg_BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx       34u
#define CanIfConf_CanIfRxPduCfg_BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx       35u
#define CanIfConf_CanIfRxPduCfg_BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx               36u
#define CanIfConf_CanIfRxPduCfg_BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx      37u
#define CanIfConf_CanIfRxPduCfg_MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx    38u
#define CanIfConf_CanIfRxPduCfg_MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx    39u
#define CanIfConf_CanIfRxPduCfg_CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx           40u
#define CanIfConf_CanIfRxPduCfg_CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx              41u
#define CanIfConf_CanIfRxPduCfg_CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx              42u
#define CanIfConf_CanIfRxPduCfg_CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx                43u
#define CanIfConf_CanIfRxPduCfg_BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx                44u
#define CanIfConf_CanIfRxPduCfg_BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx    45u
#define CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx     46u
#define CanIfConf_CanIfRxPduCfg_BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx         47u
#define CanIfConf_CanIfRxPduCfg_BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx               48u
#define CanIfConf_CanIfRxPduCfg_POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx           49u
#define CanIfConf_CanIfRxPduCfg_IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx                50u
#define CanIfConf_CanIfRxPduCfg_SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx             51u
#define CanIfConf_CanIfRxPduCfg_SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx                52u
#define CanIfConf_CanIfRxPduCfg_DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx             53u
#define CanIfConf_CanIfRxPduCfg_DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx             54u
#define CanIfConf_CanIfRxPduCfg_DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx                55u
#define CanIfConf_CanIfRxPduCfg_DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx                56u
#define CanIfConf_CanIfRxPduCfg_DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx                57u
#define CanIfConf_CanIfRxPduCfg_CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx                58u
#define CanIfConf_CanIfRxPduCfg_BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx                59u
#define CanIfConf_CanIfRxPduCfg_BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx                60u
#define CanIfConf_CanIfRxPduCfg_EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx        61u
#define CanIfConf_CanIfRxPduCfg_APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx              62u
#define CanIfConf_CanIfRxPduCfg_TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx                63u
#define CanIfConf_CanIfRxPduCfg_TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx                64u
#define CanIfConf_CanIfRxPduCfg_MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx       65u
#define CanIfConf_CanIfRxPduCfg_MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx    66u
#define CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx     67u
#define CanIfConf_CanIfRxPduCfg_PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx                  68u
#define CanIfConf_CanIfRxPduCfg_POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx   69u
#define CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx     70u
#define CanIfConf_CanIfRxPduCfg_POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx           71u
#define CanIfConf_CanIfRxPduCfg_POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx         72u
#define CanIfConf_CanIfRxPduCfg_POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx         73u
#define CanIfConf_CanIfRxPduCfg_SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx                74u
#define CanIfConf_CanIfRxPduCfg_SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx                75u
#define CanIfConf_CanIfRxPduCfg_SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx              76u
#define CanIfConf_CanIfRxPduCfg_SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx            77u
#define CanIfConf_CanIfRxPduCfg_SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx            78u
#define CanIfConf_CanIfRxPduCfg_BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx          79u
#define CanIfConf_CanIfRxPduCfg_BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx       80u
#define CanIfConf_CanIfRxPduCfg_BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx         81u
#define CanIfConf_CanIfRxPduCfg_BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx         82u
#define CanIfConf_CanIfRxPduCfg_BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx         83u
#define CanIfConf_CanIfRxPduCfg_BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx         84u
#define CanIfConf_CanIfRxPduCfg_BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx      85u
#define CanIfConf_CanIfRxPduCfg_IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx                86u
#define CanIfConf_CanIfRxPduCfg_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx                87u
#define CanIfConf_CanIfRxPduCfg_BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx         88u
#define CanIfConf_CanIfRxPduCfg_BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx         89u
#define CanIfConf_CanIfRxPduCfg_IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx         90u
#define CanIfConf_CanIfRxPduCfg_MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx                91u
#define CanIfConf_CanIfRxPduCfg_XCP_Request_oATOM_CAN_XCP_c6725b76_Rx                               92u
#define CanIfConf_CanIfRxPduCfg_TPCM_Tp_oJ1939_bms_a48fdf8c_Rx                                      93u
#define CanIfConf_CanIfRxPduCfg_CST_oJ1939_bms_e81a6c9e_Rx                                          94u
#define CanIfConf_CanIfRxPduCfg_CRO_oJ1939_bms_676d7071_Rx                                          95u
#define CanIfConf_CanIfRxPduCfg_CRM_oJ1939_bms_0744fcab_Rx                                          96u
#define CanIfConf_CanIfRxPduCfg_CSD_oJ1939_bms_5fb406cc_Rx                                          97u
#define CanIfConf_CanIfRxPduCfg_CHM_oJ1939_bms_a6193f06_Rx                                          98u
#define CanIfConf_CanIfRxPduCfg_CTS_oJ1939_bms_e1ed0074_Rx                                          99u
#define CanIfConf_CanIfRxPduCfg_CCS_oJ1939_bms_fda6a12f_Rx                                          100u
#define CanIfConf_CanIfRxPduCfg_CML_oJ1939_bms_69f2d4c4_Rx                                          101u
#define CanIfConf_CanIfRxPduCfg_CEM_oJ1939_bms_1b0f5df0_Rx                                          102u
#define CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx                         103u
#define CanIfConf_CanIfRxPduCfg_VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx                              104u
#define CanIfConf_CanIfRxPduCfg_VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx                              105u
#define CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx                          106u
#define CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx                          107u
#define CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx                          108u



/**********************************************************************************************************************
  \def  Tx buffer type
**********************************************************************************************************************/

#define CanIfTxBufferType                    NONE

/**********************************************************************************************************************
  \def  For ASR4.0.3/ASR4.2.2 compatibility - indirection macros
**********************************************************************************************************************/
#define  CanIf_RxIndication(Hrh, CanId, CanDlc, CanSduPtr) CanIf_RxIndicationAsr403((Hrh), (CanId), (CanDlc), (CanSduPtr)) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */




/**********************************************************************************************************************
  \def  Transceiver handling indirection macros
**********************************************************************************************************************/

#define CanIf_30_Tja1040_TrcvModeIndication(TransceiverId, TransceiverMode)                         (CanIf_TrcvModeIndication((TransceiverId), TransceiverMode)) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */





/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define CANIF_CFG_MAXRXDLC_PLUS_MAXMETADATALEN    68u


/* Coded in RxPduCanId of table CanIf_RxPduConfig[] */
#define CANIF_MASKCODE_RANGE_FLAG                                                                   0x20000000u
#define CANIF_FD_FLAG                                                                               0x40000000u
#define CANIF_FD_FLAG_MASKOUT                                                                       0xBFFFFFFFu
#define CANIF_FD_FLAG_SHIFTPOS                                                                      30u
/* Coded in RxPduMask of table CanIf_RxPduConfig[] */
#define CANIF_STOP_FLAG                                                                             0x40000000u
#define CANIF_RANGE_FLAG                                                                            0x20000000u
#define CANIF_STOP_RANGE_FLAG                                                                       0x60000000u
#define CANIF_STOP_RANGE_FLAG_MASKOUT                                                               0x9FFFFFFFu


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCDataSwitches  CanIf Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_BUSOFFNOTIFICATIONFCTPTR                                                              STD_ON
#define CANIF_CANCONTROLLERIDUPTOLOWMAP                                                             STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLIDXOFCANCONTROLLERIDUPTOLOWMAP                                            STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.CanDrvFctTblIdx' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLUSEDOFCANCONTROLLERIDUPTOLOWMAP                                           STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.CanDrvFctTblUsed' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CONTROLLEROFCANCONTROLLERIDUPTOLOWMAP                                                 STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.Controller' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBL                                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANCELTXFCTOFCANDRVFCTTBL                                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CancelTxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANGEBAUDRATEFCTOFCANDRVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.ChangeBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKBAUDRATEFCTOFCANDRVFCTTBL                                                        STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANDRVFCTTBL                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckWakeupFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERERRORSTATEFCTOFCANDRVFCTTBL                                              STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerErrorStateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERRXERRORCOUNTEROFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerRxErrorCounter' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERTXERRORCOUNTEROFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerTxErrorCounter' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLECONTROLLERFCTOFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableControllerFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLEMAILBOXFCTOFCANDRVFCTTBL                                                STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableMailboxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKEXECUTEFCTOFCANDRVFCTTBL                                                      STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckExecuteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETBAUDRATEFCTOFCANDRVFCTTBL                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETCONTROLLERMODEFCTOFCANDRVFCTTBL                                                    STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetControllerModeFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_WRITEFCTOFCANDRVFCTTBL                                                                STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.WriteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIG                                                     STD_ON
#define CANIF_INVALIDHNDOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                                         STD_OFF  /**< Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig.InvalidHnd' Reason: 'the value of CanIf_InvalidHndOfCanIfCtrlId2MappedTxBuffersConfig is always 'false' due to this, the array is deactivated.' */
#define CANIF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                        STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                      STD_ON
#define CANIF_CANTRCVFCTTBL                                                                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEFLAGFCTOFCANTRCVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANTRCVFCTTBL                                                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeupFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CLEARTRCVWUFFLAGFCTOFCANTRCVFCTTBL                                                    STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.ClearTrcvWufFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETBUSWUREASONFCTOFCANTRCVFCTTBL                                                      STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetBusWuReasonFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETOPMODEFCTOFCANTRCVFCTTBL                                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETOPMODEFCTOFCANTRCVFCTTBL                                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETWAKEUPMODEFCTOFCANTRCVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetWakeupModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CTRLCONFIG                                                                            STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_FEATUREPNWUTXPDUFILTERENABLEDOFCTRLCONFIG                                             STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.FeaturePnWuTxPduFilterEnabled' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDROFFSETOFCTRLCONFIG                                                        STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrOffset' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDRSUPPORTOFCTRLCONFIG                                                       STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrSupport' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER1OFCTRLCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber1' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER2OFCTRLCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber2' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_CTRLMODEINDICATIONFCTPTR                                                              STD_ON
#define CANIF_CTRLSTATES                                                                            STD_ON
#define CANIF_CTRLMODEOFCTRLSTATES                                                                  STD_ON
#define CANIF_PDUMODEOFCTRLSTATES                                                                   STD_ON
#define CANIF_WAKEUPVALIDATIONSTATEOFCTRLSTATES                                                     STD_ON
#define CANIF_FINALMAGICNUMBER                                                                      STD_OFF  /**< Deactivateable: 'CanIf_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSION                                                         STD_ON
#define CANIF_GENERATORVERSION                                                                      STD_ON
#define CANIF_HXHOFFSET                                                                             STD_OFF  /**< Deactivateable: 'CanIf_HxhOffset' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_INITDATAHASHCODE                                                                      STD_OFF  /**< Deactivateable: 'CanIf_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIG                                                                         STD_ON
#define CANIF_CTRLSTATESIDXOFMAILBOXCONFIG                                                          STD_ON
#define CANIF_MAILBOXTYPEOFMAILBOXCONFIG                                                            STD_ON
#define CANIF_PDUIDFIRSTOFMAILBOXCONFIG                                                             STD_ON
#define CANIF_PDUIDLASTOFMAILBOXCONFIG                                                              STD_ON
#define CANIF_TXBUFFERCFGIDXOFMAILBOXCONFIG                                                         STD_ON
#define CANIF_TXBUFFERCFGOFMAILBOXCONFIG                                                            STD_ON
#define CANIF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                                                        STD_ON
#define CANIF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                                                   STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIG                                                                 STD_ON
#define CANIF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG                                               STD_ON
#define CANIF_MAXTRCVHANDLEIDPLUSONE                                                                STD_ON
#define CANIF_MAXWAKEUPSOURCES                                                                      STD_ON
#define CANIF_PDURXMODE                                                                             STD_OFF  /**< Deactivateable: 'CanIf_PduRxMode' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANIF_RXDHADJUST                                                                            STD_OFF  /**< Deactivateable: 'CanIf_RxDHAdjust' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXINDICATIONFCTLIST                                                                   STD_ON
#define CANIF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                                  STD_ON
#define CANIF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                               STD_ON
#define CANIF_RXPDUCONFIG                                                                           STD_ON
#define CANIF_CANIFRXPDUIDOFRXPDUCONFIG                                                             STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.CanIfRxPduId' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_ISCANNMRXPDUOFRXPDUCONFIG                                                             STD_ON
#define CANIF_ISDATACHECKSUMRXPDUOFRXPDUCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.IsDataChecksumRxPdu' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_MSGTYPEOFRXPDUCONFIG                                                                  STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.MsgType' Reason: '"CanIfRxSearchConsiderMsgType" is deactivated.' */
#define CANIF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                                   STD_ON
#define CANIF_RXMETADATALENGTHOFRXPDUCONFIG                                                         STD_ON
#define CANIF_RXPDUCANIDOFRXPDUCONFIG                                                               STD_ON
#define CANIF_RXPDUDLCOFRXPDUCONFIG                                                                 STD_ON
#define CANIF_RXPDUMASKOFRXPDUCONFIG                                                                STD_ON
#define CANIF_UPPERPDUIDOFRXPDUCONFIG                                                               STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                                               STD_ON
#define CANIF_SIZEOFCTRLSTATES                                                                      STD_ON
#define CANIF_SIZEOFMAILBOXCONFIG                                                                   STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIG                                                           STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLIST                                                             STD_ON
#define CANIF_SIZEOFRXPDUCONFIG                                                                     STD_ON
#define CANIF_SIZEOFTRCVTOCTRLMAP                                                                   STD_ON
#define CANIF_SIZEOFTXBUFFERFIFOBASE                                                                STD_ON
#define CANIF_SIZEOFTXBUFFERFIFOCONFIG                                                              STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLIST                                                           STD_ON
#define CANIF_SIZEOFTXFIFOQUEUEBASE                                                                 STD_ON
#define CANIF_SIZEOFTXFIFOQUEUEDATA                                                                 STD_ON
#define CANIF_SIZEOFTXPDUCONFIG                                                                     STD_ON
#define CANIF_SIZEOFWAKEUPCONFIG                                                                    STD_ON
#define CANIF_TRANSCEIVERUPTOLOWMAP                                                                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CANTRCVFCTTBLIDXOFTRANSCEIVERUPTOLOWMAP                                               STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.CanTrcvFctTblIdx' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRANSCEIVEROFTRANSCEIVERUPTOLOWMAP                                                    STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.Transceiver' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRANSCEIVERUPTOUPPERMAP                                                               STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToUpperMap' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRCVMODEINDICATIONFCTPTR                                                              STD_ON
#define CANIF_TRCVTOCTRLMAP                                                                         STD_ON
#define CANIF_TXBUFFERFIFOBASE                                                                      STD_ON
#define CANIF_TXBUFFERFIFOCONFIG                                                                    STD_ON
#define CANIF_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                                                STD_ON
#define CANIF_TXBUFFERFIFOBASEIDXOFTXBUFFERFIFOCONFIG                                               STD_ON
#define CANIF_TXFIFOQUEUEBASEENDIDXOFTXBUFFERFIFOCONFIG                                             STD_ON
#define CANIF_TXFIFOQUEUEBASELENGTHOFTXBUFFERFIFOCONFIG                                             STD_ON
#define CANIF_TXFIFOQUEUEBASESTARTIDXOFTXBUFFERFIFOCONFIG                                           STD_ON
#define CANIF_TXFIFOQUEUEDATAENDIDXOFTXBUFFERFIFOCONFIG                                             STD_ON
#define CANIF_TXFIFOQUEUEDATASTARTIDXOFTXBUFFERFIFOCONFIG                                           STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBITQUEUECONFIG                                                     STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfig' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG                               STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfig.BitPos2TxPduIdOffset' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG                                                    STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueConfig' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS                                              STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXCONFIRMATIONFCTLIST                                                                 STD_ON
#define CANIF_TXFIFOQUEUEBASE                                                                       STD_ON
#define CANIF_TXFIFOQUEUEDATA                                                                       STD_ON
#define CANIF_TXPDUCONFIG                                                                           STD_ON
#define CANIF_CANIDOFTXPDUCONFIG                                                                    STD_ON
#define CANIF_CANIDTXMASKOFTXPDUCONFIG                                                              STD_ON
#define CANIF_CTRLSTATESIDXOFTXPDUCONFIG                                                            STD_ON
#define CANIF_ISDATACHECKSUMTXPDUOFTXPDUCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.IsDataChecksumTxPdu' Reason: '"CanIfDataChecksumTxSupport" is deactivated.' */
#define CANIF_ISPNWUTXPDUOFTXPDUCONFIG                                                              STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.IsPnWuTxPdu' Reason: '"CanIfPnWakeupTxPduFilterSupport" is deactivated.' */
#define CANIF_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                        STD_ON
#define CANIF_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                         STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                                 STD_ON
#define CANIF_TXMETADATALENGTHOFTXPDUCONFIG                                                         STD_ON
#define CANIF_TXPDULENGTHOFTXPDUCONFIG                                                              STD_ON
#define CANIF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                        STD_ON
#define CANIF_TXPDUQUEUEINDEX                                                                       STD_OFF  /**< Deactivateable: 'CanIf_TxPduQueueIndex' Reason: 'Tx buffer support is deactivated.' */
#define CANIF_TXPDUSTATIC2DYNAMICINDIRECTION                                                        STD_OFF  /**< Deactivateable: 'CanIf_TxPduStatic2DynamicIndirection' Reason: 'Dynamic Tx-CanId support is deactivated.' */
#define CANIF_TXQUEUEINDEX2DATASTARTSTOP                                                            STD_OFF  /**< Deactivateable: 'CanIf_TxQueueIndex2DataStartStop' Reason: 'Static FD Tx-buffer is deactivated.' */
#define CANIF_ULRXPDUID2INTERNALRXPDUID                                                             STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGIDXOFULRXPDUID2INTERNALRXPDUID                                             STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigIdx' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGUSEDOFULRXPDUID2INTERNALRXPDUID                                            STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigUsed' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_ULTXPDUID2INTERNALTXPDUID                                                             STD_OFF  /**< Deactivateable: 'CanIf_UlTxPduId2InternalTxPduId' Reason: 'Configuration variant is Pre-compile!' */
#define CANIF_WAKEUPCONFIG                                                                          STD_ON
#define CANIF_CONTROLLERIDOFWAKEUPCONFIG                                                            STD_ON
#define CANIF_WAKEUPSOURCEOFWAKEUPCONFIG                                                            STD_ON
#define CANIF_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                                                     STD_ON
#define CANIF_WAKEUPTARGETMODULEOFWAKEUPCONFIG                                                      STD_ON
#define CANIF_WAKEUPVALIDATIONFCTPTR                                                                STD_ON
#define CANIF_PCCONFIG                                                                              STD_ON
#define CANIF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                                    STD_ON
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                           STD_ON
#define CANIF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                                    STD_ON
#define CANIF_CTRLSTATESOFPCCONFIG                                                                  STD_ON
#define CANIF_FINALMAGICNUMBEROFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                                               STD_ON
#define CANIF_GENERATORVERSIONOFPCCONFIG                                                            STD_ON
#define CANIF_INITDATAHASHCODEOFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIGOFPCCONFIG                                                               STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                                       STD_ON
#define CANIF_MAXTRCVHANDLEIDPLUSONEOFPCCONFIG                                                      STD_ON
#define CANIF_MAXWAKEUPSOURCESOFPCCONFIG                                                            STD_ON
#define CANIF_RXINDICATIONFCTLISTOFPCCONFIG                                                         STD_ON
#define CANIF_RXPDUCONFIGOFPCCONFIG                                                                 STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                     STD_ON
#define CANIF_SIZEOFCTRLSTATESOFPCCONFIG                                                            STD_ON
#define CANIF_SIZEOFMAILBOXCONFIGOFPCCONFIG                                                         STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIGOFPCCONFIG                                                 STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLISTOFPCCONFIG                                                   STD_ON
#define CANIF_SIZEOFRXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_SIZEOFTRCVTOCTRLMAPOFPCCONFIG                                                         STD_ON
#define CANIF_SIZEOFTXBUFFERFIFOBASEOFPCCONFIG                                                      STD_ON
#define CANIF_SIZEOFTXBUFFERFIFOCONFIGOFPCCONFIG                                                    STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLISTOFPCCONFIG                                                 STD_ON
#define CANIF_SIZEOFTXFIFOQUEUEBASEOFPCCONFIG                                                       STD_ON
#define CANIF_SIZEOFTXFIFOQUEUEDATAOFPCCONFIG                                                       STD_ON
#define CANIF_SIZEOFTXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_SIZEOFWAKEUPCONFIGOFPCCONFIG                                                          STD_ON
#define CANIF_TRCVMODEINDICATIONFCTPTROFPCCONFIG                                                    STD_ON
#define CANIF_TRCVTOCTRLMAPOFPCCONFIG                                                               STD_ON
#define CANIF_TXBUFFERFIFOBASEOFPCCONFIG                                                            STD_ON
#define CANIF_TXBUFFERFIFOCONFIGOFPCCONFIG                                                          STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                       STD_ON
#define CANIF_TXFIFOQUEUEBASEOFPCCONFIG                                                             STD_ON
#define CANIF_TXFIFOQUEUEDATAOFPCCONFIG                                                             STD_ON
#define CANIF_TXPDUCONFIGOFPCCONFIG                                                                 STD_ON
#define CANIF_WAKEUPCONFIGOFPCCONFIG                                                                STD_ON
#define CANIF_WAKEUPVALIDATIONFCTPTROFPCCONFIG                                                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCMinNumericValueDefines  CanIf Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CANIF_MIN_TXFIFOQUEUEDATA                                                                   0u
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCMaxNumericValueDefines  CanIf Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CANIF_MAX_TXFIFOQUEUEDATA                                                                   255u
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCNoReferenceDefines  CanIf No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG                                                      255u
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEnumExistsDefines  CanIf Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CANIF_EXISTS_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG                                  STD_ON
#define CANIF_EXISTS_NO_TXBUFFERCFGOFMAILBOXCONFIG                                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEnumDefines  CanIf Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG                                         0x00u
#define CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG                                                         0xFFu
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIsReducedToDefineDefines  CanIf Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                  STD_OFF
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFMAILBOXCONFIG                                                    STD_OFF
#define CANIF_ISDEF_MAILBOXTYPEOFMAILBOXCONFIG                                                      STD_OFF
#define CANIF_ISDEF_PDUIDFIRSTOFMAILBOXCONFIG                                                       STD_OFF
#define CANIF_ISDEF_PDUIDLASTOFMAILBOXCONFIG                                                        STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGIDXOFMAILBOXCONFIG                                                   STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGOFMAILBOXCONFIG                                                      STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                                                  STD_OFF
#define CANIF_ISDEF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                                             STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG                                         STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                            STD_OFF
#define CANIF_ISDEF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                         STD_OFF
#define CANIF_ISDEF_ISCANNMRXPDUOFRXPDUCONFIG                                                       STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                             STD_OFF
#define CANIF_ISDEF_RXMETADATALENGTHOFRXPDUCONFIG                                                   STD_OFF
#define CANIF_ISDEF_RXPDUCANIDOFRXPDUCONFIG                                                         STD_OFF
#define CANIF_ISDEF_RXPDUDLCOFRXPDUCONFIG                                                           STD_OFF
#define CANIF_ISDEF_RXPDUMASKOFRXPDUCONFIG                                                          STD_OFF
#define CANIF_ISDEF_UPPERPDUIDOFRXPDUCONFIG                                                         STD_OFF
#define CANIF_ISDEF_TRCVTOCTRLMAP                                                                   STD_OFF
#define CANIF_ISDEF_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                                          STD_OFF
#define CANIF_ISDEF_TXBUFFERFIFOBASEIDXOFTXBUFFERFIFOCONFIG                                         STD_OFF
#define CANIF_ISDEF_TXFIFOQUEUEBASEENDIDXOFTXBUFFERFIFOCONFIG                                       STD_OFF
#define CANIF_ISDEF_TXFIFOQUEUEBASELENGTHOFTXBUFFERFIFOCONFIG                                       STD_OFF
#define CANIF_ISDEF_TXFIFOQUEUEBASESTARTIDXOFTXBUFFERFIFOCONFIG                                     STD_OFF
#define CANIF_ISDEF_TXFIFOQUEUEDATAENDIDXOFTXBUFFERFIFOCONFIG                                       STD_OFF
#define CANIF_ISDEF_TXFIFOQUEUEDATASTARTIDXOFTXBUFFERFIFOCONFIG                                     STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLIST                                                           STD_OFF
#define CANIF_ISDEF_CANIDOFTXPDUCONFIG                                                              STD_OFF
#define CANIF_ISDEF_CANIDTXMASKOFTXPDUCONFIG                                                        STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFTXPDUCONFIG                                                      STD_OFF
#define CANIF_ISDEF_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                  STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                   STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                           STD_OFF
#define CANIF_ISDEF_TXMETADATALENGTHOFTXPDUCONFIG                                                   STD_OFF
#define CANIF_ISDEF_TXPDULENGTHOFTXPDUCONFIG                                                        STD_OFF
#define CANIF_ISDEF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                  STD_OFF
#define CANIF_ISDEF_CONTROLLERIDOFWAKEUPCONFIG                                                      STD_OFF
#define CANIF_ISDEF_WAKEUPSOURCEOFWAKEUPCONFIG                                                      STD_OFF
#define CANIF_ISDEF_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                                               STD_OFF
#define CANIF_ISDEF_WAKEUPTARGETMODULEOFWAKEUPCONFIG                                                STD_OFF
#define CANIF_ISDEF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                              STD_ON
#define CANIF_ISDEF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                     STD_ON
#define CANIF_ISDEF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                              STD_ON
#define CANIF_ISDEF_CTRLSTATESOFPCCONFIG                                                            STD_ON
#define CANIF_ISDEF_MAILBOXCONFIGOFPCCONFIG                                                         STD_ON
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                                 STD_ON
#define CANIF_ISDEF_RXINDICATIONFCTLISTOFPCCONFIG                                                   STD_ON
#define CANIF_ISDEF_RXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_ISDEF_TRCVMODEINDICATIONFCTPTROFPCCONFIG                                              STD_ON
#define CANIF_ISDEF_TRCVTOCTRLMAPOFPCCONFIG                                                         STD_ON
#define CANIF_ISDEF_TXBUFFERFIFOBASEOFPCCONFIG                                                      STD_ON
#define CANIF_ISDEF_TXBUFFERFIFOCONFIGOFPCCONFIG                                                    STD_ON
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                 STD_ON
#define CANIF_ISDEF_TXFIFOQUEUEBASEOFPCCONFIG                                                       STD_ON
#define CANIF_ISDEF_TXFIFOQUEUEDATAOFPCCONFIG                                                       STD_ON
#define CANIF_ISDEF_TXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_ISDEF_WAKEUPCONFIGOFPCCONFIG                                                          STD_ON
#define CANIF_ISDEF_WAKEUPVALIDATIONFCTPTROFPCCONFIG                                                STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEqualsAlwaysToDefines  CanIf Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                    
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                  
#define CANIF_EQ2_CTRLSTATESIDXOFMAILBOXCONFIG                                                      
#define CANIF_EQ2_MAILBOXTYPEOFMAILBOXCONFIG                                                        
#define CANIF_EQ2_PDUIDFIRSTOFMAILBOXCONFIG                                                         
#define CANIF_EQ2_PDUIDLASTOFMAILBOXCONFIG                                                          
#define CANIF_EQ2_TXBUFFERCFGIDXOFMAILBOXCONFIG                                                     
#define CANIF_EQ2_TXBUFFERCFGOFMAILBOXCONFIG                                                        
#define CANIF_EQ2_TXBUFFERCFGUSEDOFMAILBOXCONFIG                                                    
#define CANIF_EQ2_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                                               
#define CANIF_EQ2_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG                                           
#define CANIF_EQ2_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                              
#define CANIF_EQ2_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                           
#define CANIF_EQ2_ISCANNMRXPDUOFRXPDUCONFIG                                                         
#define CANIF_EQ2_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                               
#define CANIF_EQ2_RXMETADATALENGTHOFRXPDUCONFIG                                                     
#define CANIF_EQ2_RXPDUCANIDOFRXPDUCONFIG                                                           
#define CANIF_EQ2_RXPDUDLCOFRXPDUCONFIG                                                             
#define CANIF_EQ2_RXPDUMASKOFRXPDUCONFIG                                                            
#define CANIF_EQ2_UPPERPDUIDOFRXPDUCONFIG                                                           
#define CANIF_EQ2_TRCVTOCTRLMAP                                                                     
#define CANIF_EQ2_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                                            
#define CANIF_EQ2_TXBUFFERFIFOBASEIDXOFTXBUFFERFIFOCONFIG                                           
#define CANIF_EQ2_TXFIFOQUEUEBASEENDIDXOFTXBUFFERFIFOCONFIG                                         
#define CANIF_EQ2_TXFIFOQUEUEBASELENGTHOFTXBUFFERFIFOCONFIG                                         
#define CANIF_EQ2_TXFIFOQUEUEBASESTARTIDXOFTXBUFFERFIFOCONFIG                                       
#define CANIF_EQ2_TXFIFOQUEUEDATAENDIDXOFTXBUFFERFIFOCONFIG                                         
#define CANIF_EQ2_TXFIFOQUEUEDATASTARTIDXOFTXBUFFERFIFOCONFIG                                       
#define CANIF_EQ2_TXCONFIRMATIONFCTLIST                                                             
#define CANIF_EQ2_CANIDOFTXPDUCONFIG                                                                
#define CANIF_EQ2_CANIDTXMASKOFTXPDUCONFIG                                                          
#define CANIF_EQ2_CTRLSTATESIDXOFTXPDUCONFIG                                                        
#define CANIF_EQ2_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                    
#define CANIF_EQ2_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                     
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                             
#define CANIF_EQ2_TXMETADATALENGTHOFTXPDUCONFIG                                                     
#define CANIF_EQ2_TXPDULENGTHOFTXPDUCONFIG                                                          
#define CANIF_EQ2_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                    
#define CANIF_EQ2_CONTROLLERIDOFWAKEUPCONFIG                                                        
#define CANIF_EQ2_WAKEUPSOURCEOFWAKEUPCONFIG                                                        
#define CANIF_EQ2_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                                                 
#define CANIF_EQ2_WAKEUPTARGETMODULEOFWAKEUPCONFIG                                                  
#define CANIF_EQ2_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                                (&(CanIf_BusOffNotificationFctPtr))
#define CANIF_EQ2_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                       CanIf_CanIfCtrlId2MappedTxBuffersConfig
#define CANIF_EQ2_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                                (&(CanIf_CtrlModeIndicationFctPtr))
#define CANIF_EQ2_CTRLSTATESOFPCCONFIG                                                              CanIf_CtrlStates.raw
#define CANIF_EQ2_MAILBOXCONFIGOFPCCONFIG                                                           CanIf_MailBoxConfig
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                                                   CanIf_MappedTxBuffersConfig
#define CANIF_EQ2_RXINDICATIONFCTLISTOFPCCONFIG                                                     CanIf_RxIndicationFctList
#define CANIF_EQ2_RXPDUCONFIGOFPCCONFIG                                                             CanIf_RxPduConfig
#define CANIF_EQ2_TRCVMODEINDICATIONFCTPTROFPCCONFIG                                                (&(CanIf_TrcvModeIndicationFctPtr))
#define CANIF_EQ2_TRCVTOCTRLMAPOFPCCONFIG                                                           CanIf_TrcvToCtrlMap
#define CANIF_EQ2_TXBUFFERFIFOBASEOFPCCONFIG                                                        CanIf_TxBufferFifoBase.raw
#define CANIF_EQ2_TXBUFFERFIFOCONFIGOFPCCONFIG                                                      CanIf_TxBufferFifoConfig
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                   CanIf_TxConfirmationFctList
#define CANIF_EQ2_TXFIFOQUEUEBASEOFPCCONFIG                                                         CanIf_TxFifoQueueBase.raw
#define CANIF_EQ2_TXFIFOQUEUEDATAOFPCCONFIG                                                         CanIf_TxFifoQueueData.raw
#define CANIF_EQ2_TXPDUCONFIGOFPCCONFIG                                                             CanIf_TxPduConfig
#define CANIF_EQ2_WAKEUPCONFIGOFPCCONFIG                                                            CanIf_WakeUpConfig
#define CANIF_EQ2_WAKEUPVALIDATIONFCTPTROFPCCONFIG                                                  (&(CanIf_WakeUpValidationFctPtr))
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicInitializationPointers  CanIf Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanIf_Config_Ptr                                                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanIf' */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCInitializationSymbols  CanIf Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanIf_Config                                                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanIf */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGeneral  CanIf General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANIF_CHECK_INIT_POINTER                                                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANIF_FINAL_MAGIC_NUMBER                                                                    0x3C1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanIf */
#define CANIF_INDIVIDUAL_POSTBUILD                                                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanIf' is not configured to be postbuild capable. */
#define CANIF_INIT_DATA                                                                             CANIF_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANIF_INIT_DATA_HASH_CODE                                                                   -713533440  /**< the precompile constant to validate the initialization structure at initialization time of CanIf with a hashcode. The seed value is '0x3C1Eu' */
#define CANIF_USE_ECUM_BSW_ERROR_HOOK                                                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANIF_USE_INIT_POINTER                                                                      STD_OFF  /**< STD_ON if the init pointer CanIf shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPBDataSwitches  CanIf Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_PBCONFIG                                                                              STD_OFF  /**< Deactivateable: 'CanIf_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_LTCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_PCCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCGetConstantDuplicatedRootDataMacros  CanIf Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtrOfPCConfig()                                               (&(CanIf_BusOffNotificationFctPtr))  /**< the pointer to CanIf_BusOffNotificationFctPtr */
#define CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()                                      CanIf_CanIfCtrlId2MappedTxBuffersConfig  /**< the pointer to CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetCtrlModeIndicationFctPtrOfPCConfig()                                               (&(CanIf_CtrlModeIndicationFctPtr))  /**< the pointer to CanIf_CtrlModeIndicationFctPtr */
#define CanIf_GetCtrlStatesOfPCConfig()                                                             CanIf_CtrlStates.raw  /**< the pointer to CanIf_CtrlStates */
#define CanIf_GetGeneratorCompatibilityVersionOfPCConfig()                                          0x0212u
#define CanIf_GetGeneratorVersionOfPCConfig()                                                       0x00050001u
#define CanIf_GetMailBoxConfigOfPCConfig()                                                          CanIf_MailBoxConfig  /**< the pointer to CanIf_MailBoxConfig */
#define CanIf_GetMappedTxBuffersConfigOfPCConfig()                                                  CanIf_MappedTxBuffersConfig  /**< the pointer to CanIf_MappedTxBuffersConfig */
#define CanIf_GetMaxTrcvHandleIdPlusOneOfPCConfig()                                                 1u
#define CanIf_GetMaxWakeUpSourcesOfPCConfig()                                                       1u
#define CanIf_GetRxIndicationFctListOfPCConfig()                                                    CanIf_RxIndicationFctList  /**< the pointer to CanIf_RxIndicationFctList */
#define CanIf_GetRxPduConfigOfPCConfig()                                                            CanIf_RxPduConfig  /**< the pointer to CanIf_RxPduConfig */
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()                                5u  /**< the number of accomplishable value elements in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetSizeOfCtrlStatesOfPCConfig()                                                       5u  /**< the number of accomplishable value elements in CanIf_CtrlStates */
#define CanIf_GetSizeOfMailBoxConfigOfPCConfig()                                                    32u  /**< the number of accomplishable value elements in CanIf_MailBoxConfig */
#define CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()                                            5u  /**< the number of accomplishable value elements in CanIf_MappedTxBuffersConfig */
#define CanIf_GetSizeOfRxIndicationFctListOfPCConfig()                                              6u  /**< the number of accomplishable value elements in CanIf_RxIndicationFctList */
#define CanIf_GetSizeOfRxPduConfigOfPCConfig()                                                      109u  /**< the number of accomplishable value elements in CanIf_RxPduConfig */
#define CanIf_GetSizeOfTrcvToCtrlMapOfPCConfig()                                                    1u  /**< the number of accomplishable value elements in CanIf_TrcvToCtrlMap */
#define CanIf_GetSizeOfTxBufferFifoBaseOfPCConfig()                                                 5u  /**< the number of accomplishable value elements in CanIf_TxBufferFifoBase */
#define CanIf_GetSizeOfTxBufferFifoConfigOfPCConfig()                                               5u  /**< the number of accomplishable value elements in CanIf_TxBufferFifoConfig */
#define CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()                                            5u  /**< the number of accomplishable value elements in CanIf_TxConfirmationFctList */
#define CanIf_GetSizeOfTxFifoQueueBaseOfPCConfig()                                                  53u  /**< the number of accomplishable value elements in CanIf_TxFifoQueueBase */
#define CanIf_GetSizeOfTxFifoQueueDataOfPCConfig()                                                  424u  /**< the number of accomplishable value elements in CanIf_TxFifoQueueData */
#define CanIf_GetSizeOfTxPduConfigOfPCConfig()                                                      56u  /**< the number of accomplishable value elements in CanIf_TxPduConfig */
#define CanIf_GetSizeOfWakeUpConfigOfPCConfig()                                                     1u  /**< the number of accomplishable value elements in CanIf_WakeUpConfig */
#define CanIf_GetTrcvModeIndicationFctPtrOfPCConfig()                                               (&(CanIf_TrcvModeIndicationFctPtr))  /**< the pointer to CanIf_TrcvModeIndicationFctPtr */
#define CanIf_GetTrcvToCtrlMapOfPCConfig()                                                          CanIf_TrcvToCtrlMap  /**< the pointer to CanIf_TrcvToCtrlMap */
#define CanIf_GetTxBufferFifoBaseOfPCConfig()                                                       CanIf_TxBufferFifoBase.raw  /**< the pointer to CanIf_TxBufferFifoBase */
#define CanIf_GetTxBufferFifoConfigOfPCConfig()                                                     CanIf_TxBufferFifoConfig  /**< the pointer to CanIf_TxBufferFifoConfig */
#define CanIf_GetTxConfirmationFctListOfPCConfig()                                                  CanIf_TxConfirmationFctList  /**< the pointer to CanIf_TxConfirmationFctList */
#define CanIf_GetTxFifoQueueBaseOfPCConfig()                                                        CanIf_TxFifoQueueBase.raw  /**< the pointer to CanIf_TxFifoQueueBase */
#define CanIf_GetTxFifoQueueDataOfPCConfig()                                                        CanIf_TxFifoQueueData.raw  /**< the pointer to CanIf_TxFifoQueueData */
#define CanIf_GetTxPduConfigOfPCConfig()                                                            CanIf_TxPduConfig  /**< the pointer to CanIf_TxPduConfig */
#define CanIf_GetWakeUpConfigOfPCConfig()                                                           CanIf_WakeUpConfig  /**< the pointer to CanIf_WakeUpConfig */
#define CanIf_GetWakeUpValidationFctPtrOfPCConfig()                                                 (&(CanIf_WakeUpValidationFctPtr))  /**< the pointer to CanIf_WakeUpValidationFctPtr */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDataMacros  CanIf Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtr()                                                         ((*(CanIf_GetBusOffNotificationFctPtrOfPCConfig())))
#define CanIf_GetMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index)              (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index)            (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetCtrlModeIndicationFctPtr()                                                         ((*(CanIf_GetCtrlModeIndicationFctPtrOfPCConfig())))
#define CanIf_GetCtrlModeOfCtrlStates(Index)                                                        (CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates)
#define CanIf_GetPduModeOfCtrlStates(Index)                                                         (CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates)
#define CanIf_GetWakeUpValidationStateOfCtrlStates(Index)                                           (CanIf_GetCtrlStatesOfPCConfig()[(Index)].WakeUpValidationStateOfCtrlStates)
#define CanIf_GetCtrlStatesIdxOfMailBoxConfig(Index)                                                (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].CtrlStatesIdxOfMailBoxConfig)
#define CanIf_GetMailBoxTypeOfMailBoxConfig(Index)                                                  (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].MailBoxTypeOfMailBoxConfig)
#define CanIf_GetPduIdFirstOfMailBoxConfig(Index)                                                   (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdFirstOfMailBoxConfig)
#define CanIf_GetPduIdLastOfMailBoxConfig(Index)                                                    (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdLastOfMailBoxConfig)
#define CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index)                                               (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferCfgIdxOfMailBoxConfig)
#define CanIf_GetTxBufferCfgOfMailBoxConfig(Index)                                                  (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferCfgOfMailBoxConfig)
#define CanIf_GetTxBufferHandlingTypeOfMailBoxConfig(Index)                                         (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferHandlingTypeOfMailBoxConfig)
#define CanIf_GetMailBoxConfigIdxOfMappedTxBuffersConfig(Index)                                     (CanIf_GetMappedTxBuffersConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfMappedTxBuffersConfig)
#define CanIf_GetRxIndicationFctOfRxIndicationFctList(Index)                                        (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationFctOfRxIndicationFctList)
#define CanIf_GetRxIndicationLayoutOfRxIndicationFctList(Index)                                     (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationLayoutOfRxIndicationFctList)
#define CanIf_IsIsCanNmRxPduOfRxPduConfig(Index)                                                    ((CanIf_GetRxPduConfigOfPCConfig()[(Index)].IsCanNmRxPduOfRxPduConfig) != FALSE)
#define CanIf_GetRxIndicationFctListIdxOfRxPduConfig(Index)                                         (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxIndicationFctListIdxOfRxPduConfig)
#define CanIf_GetRxMetaDataLengthOfRxPduConfig(Index)                                               (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxMetaDataLengthOfRxPduConfig)
#define CanIf_GetRxPduCanIdOfRxPduConfig(Index)                                                     (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduCanIdOfRxPduConfig)
#define CanIf_GetRxPduDlcOfRxPduConfig(Index)                                                       (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduDlcOfRxPduConfig)
#define CanIf_GetRxPduMaskOfRxPduConfig(Index)                                                      (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduMaskOfRxPduConfig)
#define CanIf_GetUpperPduIdOfRxPduConfig(Index)                                                     (CanIf_GetRxPduConfigOfPCConfig()[(Index)].UpperPduIdOfRxPduConfig)
#define CanIf_GetTrcvModeIndicationFctPtr()                                                         ((*(CanIf_GetTrcvModeIndicationFctPtrOfPCConfig())))
#define CanIf_GetTrcvToCtrlMap(Index)                                                               (CanIf_GetTrcvToCtrlMapOfPCConfig()[(Index)])
#define CanIf_GetTxBufferFifoBase(Index)                                                            (CanIf_GetTxBufferFifoBaseOfPCConfig()[(Index)])
#define CanIf_GetSizeOfOnePayloadElOfTxBufferFifoConfig(Index)                                      (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].SizeOfOnePayloadElOfTxBufferFifoConfig)
#define CanIf_GetTxBufferFifoBaseIdxOfTxBufferFifoConfig(Index)                                     (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxBufferFifoBaseIdxOfTxBufferFifoConfig)
#define CanIf_GetTxFifoQueueBaseEndIdxOfTxBufferFifoConfig(Index)                                   (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxFifoQueueBaseEndIdxOfTxBufferFifoConfig)
#define CanIf_GetTxFifoQueueBaseLengthOfTxBufferFifoConfig(Index)                                   (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxFifoQueueBaseLengthOfTxBufferFifoConfig)
#define CanIf_GetTxFifoQueueBaseStartIdxOfTxBufferFifoConfig(Index)                                 (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxFifoQueueBaseStartIdxOfTxBufferFifoConfig)
#define CanIf_GetTxFifoQueueDataEndIdxOfTxBufferFifoConfig(Index)                                   (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxFifoQueueDataEndIdxOfTxBufferFifoConfig)
#define CanIf_GetTxFifoQueueDataStartIdxOfTxBufferFifoConfig(Index)                                 (CanIf_GetTxBufferFifoConfigOfPCConfig()[(Index)].TxFifoQueueDataStartIdxOfTxBufferFifoConfig)
#define CanIf_GetTxConfirmationFctList(Index)                                                       (CanIf_GetTxConfirmationFctListOfPCConfig()[(Index)])
#define CanIf_GetTxFifoQueueBase(Index)                                                             (CanIf_GetTxFifoQueueBaseOfPCConfig()[(Index)])
#define CanIf_GetTxFifoQueueData(Index)                                                             (CanIf_GetTxFifoQueueDataOfPCConfig()[(Index)])
#define CanIf_GetCanIdOfTxPduConfig(Index)                                                          (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdOfTxPduConfig)
#define CanIf_GetCanIdTxMaskOfTxPduConfig(Index)                                                    (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdTxMaskOfTxPduConfig)
#define CanIf_GetCtrlStatesIdxOfTxPduConfig(Index)                                                  (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CtrlStatesIdxOfTxPduConfig)
#define CanIf_IsIsTxPduTruncationOfTxPduConfig(Index)                                               ((CanIf_GetTxPduConfigOfPCConfig()[(Index)].IsTxPduTruncationOfTxPduConfig) != FALSE)
#define CanIf_GetMailBoxConfigIdxOfTxPduConfig(Index)                                               (CanIf_GetTxPduConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfTxPduConfig)
#define CanIf_GetTxConfirmationFctListIdxOfTxPduConfig(Index)                                       (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxConfirmationFctListIdxOfTxPduConfig)
#define CanIf_GetTxMetaDataLengthOfTxPduConfig(Index)                                               (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxMetaDataLengthOfTxPduConfig)
#define CanIf_GetTxPduLengthOfTxPduConfig(Index)                                                    (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxPduLengthOfTxPduConfig)
#define CanIf_GetUpperLayerTxPduIdOfTxPduConfig(Index)                                              (CanIf_GetTxPduConfigOfPCConfig()[(Index)].UpperLayerTxPduIdOfTxPduConfig)
#define CanIf_GetControllerIdOfWakeUpConfig(Index)                                                  (CanIf_GetWakeUpConfigOfPCConfig()[(Index)].ControllerIdOfWakeUpConfig)
#define CanIf_GetWakeUpSourceOfWakeUpConfig(Index)                                                  ((EcuM_WakeupSourceType)CanIf_GetWakeUpConfigOfPCConfig()[(Index)].WakeUpSourceOfWakeUpConfig)
#define CanIf_GetWakeUpTargetAddressOfWakeUpConfig(Index)                                           (CanIf_GetWakeUpConfigOfPCConfig()[(Index)].WakeUpTargetAddressOfWakeUpConfig)
#define CanIf_GetWakeUpTargetModuleOfWakeUpConfig(Index)                                            (CanIf_GetWakeUpConfigOfPCConfig()[(Index)].WakeUpTargetModuleOfWakeUpConfig)
#define CanIf_GetWakeUpValidationFctPtr()                                                           ((*(CanIf_GetWakeUpValidationFctPtrOfPCConfig())))
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDeduplicatedDataMacros  CanIf Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanIf_GetGeneratorCompatibilityVersion()                                                    CanIf_GetGeneratorCompatibilityVersionOfPCConfig()
#define CanIf_GetGeneratorVersion()                                                                 CanIf_GetGeneratorVersionOfPCConfig()
#define CanIf_IsTxBufferCfgUsedOfMailBoxConfig(Index)                                               (((boolean)(CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index) != CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxBufferFifoConfig */
#define CanIf_GetMaxTrcvHandleIdPlusOne()                                                           CanIf_GetMaxTrcvHandleIdPlusOneOfPCConfig()
#define CanIf_GetMaxWakeUpSources()                                                                 CanIf_GetMaxWakeUpSourcesOfPCConfig()
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfig()                                          CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfCtrlStates()                                                                 CanIf_GetSizeOfCtrlStatesOfPCConfig()
#define CanIf_GetSizeOfMailBoxConfig()                                                              CanIf_GetSizeOfMailBoxConfigOfPCConfig()
#define CanIf_GetSizeOfMappedTxBuffersConfig()                                                      CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfRxIndicationFctList()                                                        CanIf_GetSizeOfRxIndicationFctListOfPCConfig()
#define CanIf_GetSizeOfRxPduConfig()                                                                CanIf_GetSizeOfRxPduConfigOfPCConfig()
#define CanIf_GetSizeOfTrcvToCtrlMap()                                                              CanIf_GetSizeOfTrcvToCtrlMapOfPCConfig()
#define CanIf_GetSizeOfTxBufferFifoBase()                                                           CanIf_GetSizeOfTxBufferFifoBaseOfPCConfig()
#define CanIf_GetSizeOfTxBufferFifoConfig()                                                         CanIf_GetSizeOfTxBufferFifoConfigOfPCConfig()
#define CanIf_GetSizeOfTxConfirmationFctList()                                                      CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()
#define CanIf_GetSizeOfTxFifoQueueBase()                                                            CanIf_GetSizeOfTxFifoQueueBaseOfPCConfig()
#define CanIf_GetSizeOfTxFifoQueueData()                                                            CanIf_GetSizeOfTxFifoQueueDataOfPCConfig()
#define CanIf_GetSizeOfTxPduConfig()                                                                CanIf_GetSizeOfTxPduConfigOfPCConfig()
#define CanIf_GetSizeOfWakeUpConfig()                                                               CanIf_GetSizeOfWakeUpConfigOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSetDataMacros  CanIf Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanIf_SetCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates = (Value)
#define CanIf_SetPduModeOfCtrlStates(Index, Value)                                                  CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates = (Value)
#define CanIf_SetWakeUpValidationStateOfCtrlStates(Index, Value)                                    CanIf_GetCtrlStatesOfPCConfig()[(Index)].WakeUpValidationStateOfCtrlStates = (Value)
#define CanIf_SetTxBufferFifoBase(Index, Value)                                                     CanIf_GetTxBufferFifoBaseOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxFifoQueueBase(Index, Value)                                                      CanIf_GetTxFifoQueueBaseOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxFifoQueueData(Index, Value)                                                      CanIf_GetTxFifoQueueDataOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetAddressOfDataMacros  CanIf Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define CanIf_GetAddrTxFifoQueueData(Index)                                                         (&CanIf_GetTxFifoQueueData(Index))
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCHasMacros  CanIf Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanIf_HasBusOffNotificationFctPtr()                                                         (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfig()                                                (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig()                   (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig()                 (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtr()                                                         (TRUE != FALSE)
#define CanIf_HasCtrlStates()                                                                       (TRUE != FALSE)
#define CanIf_HasCtrlModeOfCtrlStates()                                                             (TRUE != FALSE)
#define CanIf_HasPduModeOfCtrlStates()                                                              (TRUE != FALSE)
#define CanIf_HasWakeUpValidationStateOfCtrlStates()                                                (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersion()                                                    (TRUE != FALSE)
#define CanIf_HasGeneratorVersion()                                                                 (TRUE != FALSE)
#define CanIf_HasMailBoxConfig()                                                                    (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfMailBoxConfig()                                                     (TRUE != FALSE)
#define CanIf_HasMailBoxTypeOfMailBoxConfig()                                                       (TRUE != FALSE)
#define CanIf_HasPduIdFirstOfMailBoxConfig()                                                        (TRUE != FALSE)
#define CanIf_HasPduIdLastOfMailBoxConfig()                                                         (TRUE != FALSE)
#define CanIf_HasTxBufferCfgIdxOfMailBoxConfig()                                                    (TRUE != FALSE)
#define CanIf_HasTxBufferCfgOfMailBoxConfig()                                                       (TRUE != FALSE)
#define CanIf_HasTxBufferCfgUsedOfMailBoxConfig()                                                   (TRUE != FALSE)
#define CanIf_HasTxBufferHandlingTypeOfMailBoxConfig()                                              (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfig()                                                            (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfMappedTxBuffersConfig()                                          (TRUE != FALSE)
#define CanIf_HasMaxTrcvHandleIdPlusOne()                                                           (TRUE != FALSE)
#define CanIf_HasMaxWakeUpSources()                                                                 (TRUE != FALSE)
#define CanIf_HasRxIndicationFctList()                                                              (TRUE != FALSE)
#define CanIf_HasRxIndicationFctOfRxIndicationFctList()                                             (TRUE != FALSE)
#define CanIf_HasRxIndicationLayoutOfRxIndicationFctList()                                          (TRUE != FALSE)
#define CanIf_HasRxPduConfig()                                                                      (TRUE != FALSE)
#define CanIf_HasIsCanNmRxPduOfRxPduConfig()                                                        (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListIdxOfRxPduConfig()                                              (TRUE != FALSE)
#define CanIf_HasRxMetaDataLengthOfRxPduConfig()                                                    (TRUE != FALSE)
#define CanIf_HasRxPduCanIdOfRxPduConfig()                                                          (TRUE != FALSE)
#define CanIf_HasRxPduDlcOfRxPduConfig()                                                            (TRUE != FALSE)
#define CanIf_HasRxPduMaskOfRxPduConfig()                                                           (TRUE != FALSE)
#define CanIf_HasUpperPduIdOfRxPduConfig()                                                          (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfig()                                          (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStates()                                                                 (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfig()                                                              (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfig()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctList()                                                        (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfig()                                                                (TRUE != FALSE)
#define CanIf_HasSizeOfTrcvToCtrlMap()                                                              (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferFifoBase()                                                           (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferFifoConfig()                                                         (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctList()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxFifoQueueBase()                                                            (TRUE != FALSE)
#define CanIf_HasSizeOfTxFifoQueueData()                                                            (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfig()                                                                (TRUE != FALSE)
#define CanIf_HasSizeOfWakeUpConfig()                                                               (TRUE != FALSE)
#define CanIf_HasTrcvModeIndicationFctPtr()                                                         (TRUE != FALSE)
#define CanIf_HasTrcvToCtrlMap()                                                                    (TRUE != FALSE)
#define CanIf_HasTxBufferFifoBase()                                                                 (TRUE != FALSE)
#define CanIf_HasTxBufferFifoConfig()                                                               (TRUE != FALSE)
#define CanIf_HasSizeOfOnePayloadElOfTxBufferFifoConfig()                                           (TRUE != FALSE)
#define CanIf_HasTxBufferFifoBaseIdxOfTxBufferFifoConfig()                                          (TRUE != FALSE)
#define CanIf_HasTxFifoQueueBaseEndIdxOfTxBufferFifoConfig()                                        (TRUE != FALSE)
#define CanIf_HasTxFifoQueueBaseLengthOfTxBufferFifoConfig()                                        (TRUE != FALSE)
#define CanIf_HasTxFifoQueueBaseStartIdxOfTxBufferFifoConfig()                                      (TRUE != FALSE)
#define CanIf_HasTxFifoQueueDataEndIdxOfTxBufferFifoConfig()                                        (TRUE != FALSE)
#define CanIf_HasTxFifoQueueDataStartIdxOfTxBufferFifoConfig()                                      (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctList()                                                            (TRUE != FALSE)
#define CanIf_HasTxFifoQueueBase()                                                                  (TRUE != FALSE)
#define CanIf_HasTxFifoQueueData()                                                                  (TRUE != FALSE)
#define CanIf_HasTxPduConfig()                                                                      (TRUE != FALSE)
#define CanIf_HasCanIdOfTxPduConfig()                                                               (TRUE != FALSE)
#define CanIf_HasCanIdTxMaskOfTxPduConfig()                                                         (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfTxPduConfig()                                                       (TRUE != FALSE)
#define CanIf_HasIsTxPduTruncationOfTxPduConfig()                                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfTxPduConfig()                                                    (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListIdxOfTxPduConfig()                                            (TRUE != FALSE)
#define CanIf_HasTxMetaDataLengthOfTxPduConfig()                                                    (TRUE != FALSE)
#define CanIf_HasTxPduLengthOfTxPduConfig()                                                         (TRUE != FALSE)
#define CanIf_HasUpperLayerTxPduIdOfTxPduConfig()                                                   (TRUE != FALSE)
#define CanIf_HasWakeUpConfig()                                                                     (TRUE != FALSE)
#define CanIf_HasControllerIdOfWakeUpConfig()                                                       (TRUE != FALSE)
#define CanIf_HasWakeUpSourceOfWakeUpConfig()                                                       (TRUE != FALSE)
#define CanIf_HasWakeUpTargetAddressOfWakeUpConfig()                                                (TRUE != FALSE)
#define CanIf_HasWakeUpTargetModuleOfWakeUpConfig()                                                 (TRUE != FALSE)
#define CanIf_HasWakeUpValidationFctPtr()                                                           (TRUE != FALSE)
#define CanIf_HasPCConfig()                                                                         (TRUE != FALSE)
#define CanIf_HasBusOffNotificationFctPtrOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()                                      (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtrOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasCtrlStatesOfPCConfig()                                                             (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersionOfPCConfig()                                          (TRUE != FALSE)
#define CanIf_HasGeneratorVersionOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasMailBoxConfigOfPCConfig()                                                          (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigOfPCConfig()                                                  (TRUE != FALSE)
#define CanIf_HasMaxTrcvHandleIdPlusOneOfPCConfig()                                                 (TRUE != FALSE)
#define CanIf_HasMaxWakeUpSourcesOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListOfPCConfig()                                                    (TRUE != FALSE)
#define CanIf_HasRxPduConfigOfPCConfig()                                                            (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()                                (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStatesOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfigOfPCConfig()                                                    (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfigOfPCConfig()                                            (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctListOfPCConfig()                                              (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfigOfPCConfig()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTrcvToCtrlMapOfPCConfig()                                                    (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferFifoBaseOfPCConfig()                                                 (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferFifoConfigOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctListOfPCConfig()                                            (TRUE != FALSE)
#define CanIf_HasSizeOfTxFifoQueueBaseOfPCConfig()                                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxFifoQueueDataOfPCConfig()                                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfigOfPCConfig()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfWakeUpConfigOfPCConfig()                                                     (TRUE != FALSE)
#define CanIf_HasTrcvModeIndicationFctPtrOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasTrcvToCtrlMapOfPCConfig()                                                          (TRUE != FALSE)
#define CanIf_HasTxBufferFifoBaseOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasTxBufferFifoConfigOfPCConfig()                                                     (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListOfPCConfig()                                                  (TRUE != FALSE)
#define CanIf_HasTxFifoQueueBaseOfPCConfig()                                                        (TRUE != FALSE)
#define CanIf_HasTxFifoQueueDataOfPCConfig()                                                        (TRUE != FALSE)
#define CanIf_HasTxPduConfigOfPCConfig()                                                            (TRUE != FALSE)
#define CanIf_HasWakeUpConfigOfPCConfig()                                                           (TRUE != FALSE)
#define CanIf_HasWakeUpValidationFctPtrOfPCConfig()                                                 (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIncrementDataMacros  CanIf Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanIf_IncCtrlModeOfCtrlStates(Index)                                                        CanIf_GetCtrlModeOfCtrlStates(Index)++
#define CanIf_IncPduModeOfCtrlStates(Index)                                                         CanIf_GetPduModeOfCtrlStates(Index)++
#define CanIf_IncWakeUpValidationStateOfCtrlStates(Index)                                           CanIf_GetWakeUpValidationStateOfCtrlStates(Index)++
#define CanIf_IncTxBufferFifoBase(Index)                                                            CanIf_GetTxBufferFifoBase(Index)++
#define CanIf_IncTxFifoQueueBase(Index)                                                             CanIf_GetTxFifoQueueBase(Index)++
#define CanIf_IncTxFifoQueueData(Index)                                                             CanIf_GetTxFifoQueueData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCDecrementDataMacros  CanIf Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanIf_DecCtrlModeOfCtrlStates(Index)                                                        CanIf_GetCtrlModeOfCtrlStates(Index)--
#define CanIf_DecPduModeOfCtrlStates(Index)                                                         CanIf_GetPduModeOfCtrlStates(Index)--
#define CanIf_DecWakeUpValidationStateOfCtrlStates(Index)                                           CanIf_GetWakeUpValidationStateOfCtrlStates(Index)--
#define CanIf_DecTxBufferFifoBase(Index)                                                            CanIf_GetTxBufferFifoBase(Index)--
#define CanIf_DecTxFifoQueueBase(Index)                                                             CanIf_GetTxFifoQueueBase(Index)--
#define CanIf_DecTxFifoQueueData(Index)                                                             CanIf_GetTxFifoQueueData(Index)--
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCAddDataMacros  CanIf Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define CanIf_AddCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_SetCtrlModeOfCtrlStates(Index, (CanIf_GetCtrlModeOfCtrlStates(Index) + Value))
#define CanIf_AddPduModeOfCtrlStates(Index, Value)                                                  CanIf_SetPduModeOfCtrlStates(Index, (CanIf_GetPduModeOfCtrlStates(Index) + Value))
#define CanIf_AddWakeUpValidationStateOfCtrlStates(Index, Value)                                    CanIf_SetWakeUpValidationStateOfCtrlStates(Index, (CanIf_GetWakeUpValidationStateOfCtrlStates(Index) + Value))
#define CanIf_AddTxBufferFifoBase(Index, Value)                                                     CanIf_SetTxBufferFifoBase(Index, (CanIf_GetTxBufferFifoBase(Index) + Value))
#define CanIf_AddTxFifoQueueBase(Index, Value)                                                      CanIf_SetTxFifoQueueBase(Index, (CanIf_GetTxFifoQueueBase(Index) + Value))
#define CanIf_AddTxFifoQueueData(Index, Value)                                                      CanIf_SetTxFifoQueueData(Index, (CanIf_GetTxFifoQueueData(Index) + Value))
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSubstractDataMacros  CanIf Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define CanIf_SubCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_SetCtrlModeOfCtrlStates(Index, (CanIf_GetCtrlModeOfCtrlStates(Index) - Value))
#define CanIf_SubPduModeOfCtrlStates(Index, Value)                                                  CanIf_SetPduModeOfCtrlStates(Index, (CanIf_GetPduModeOfCtrlStates(Index) - Value))
#define CanIf_SubWakeUpValidationStateOfCtrlStates(Index, Value)                                    CanIf_SetWakeUpValidationStateOfCtrlStates(Index, (CanIf_GetWakeUpValidationStateOfCtrlStates(Index) - Value))
#define CanIf_SubTxBufferFifoBase(Index, Value)                                                     CanIf_SetTxBufferFifoBase(Index, (CanIf_GetTxBufferFifoBase(Index) - Value))
#define CanIf_SubTxFifoQueueBase(Index, Value)                                                      CanIf_SetTxFifoQueueBase(Index, (CanIf_GetTxFifoQueueBase(Index) - Value))
#define CanIf_SubTxFifoQueueData(Index, Value)                                                      CanIf_SetTxFifoQueueData(Index, (CanIf_GetTxFifoQueueData(Index) - Value))
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCIterableTypes  CanIf Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef uint8_least CanIf_CanIfCtrlId2MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_CtrlStates */
typedef uint8_least CanIf_CtrlStatesIterType;

/**   \brief  type used to iterate CanIf_MailBoxConfig */
typedef uint8_least CanIf_MailBoxConfigIterType;

/**   \brief  type used to iterate CanIf_MappedTxBuffersConfig */
typedef uint8_least CanIf_MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_RxIndicationFctList */
typedef uint8_least CanIf_RxIndicationFctListIterType;

/**   \brief  type used to iterate CanIf_RxPduConfig */
typedef uint8_least CanIf_RxPduConfigIterType;

/**   \brief  type used to iterate CanIf_TrcvToCtrlMap */
typedef uint8_least CanIf_TrcvToCtrlMapIterType;

/**   \brief  type used to iterate CanIf_TxBufferFifoBase */
typedef uint8_least CanIf_TxBufferFifoBaseIterType;

/**   \brief  type used to iterate CanIf_TxBufferFifoConfig */
typedef uint8_least CanIf_TxBufferFifoConfigIterType;

/**   \brief  type used to iterate CanIf_TxConfirmationFctList */
typedef uint8_least CanIf_TxConfirmationFctListIterType;

/**   \brief  type used to iterate CanIf_TxFifoQueueBase */
typedef uint8_least CanIf_TxFifoQueueBaseIterType;

/**   \brief  type used to iterate CanIf_TxFifoQueueData */
typedef uint16_least CanIf_TxFifoQueueDataIterType;

/**   \brief  type used to iterate CanIf_TxPduConfig */
typedef uint8_least CanIf_TxPduConfigIterType;

/**   \brief  type used to iterate CanIf_WakeUpConfig */
typedef uint8_least CanIf_WakeUpConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCValueTypes  CanIf Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_GeneratorCompatibilityVersion */
typedef uint16 CanIf_GeneratorCompatibilityVersionType;

/**   \brief  value based type definition for CanIf_GeneratorVersion */
typedef uint32 CanIf_GeneratorVersionType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfMailBoxConfig */
typedef uint8 CanIf_CtrlStatesIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdFirstOfMailBoxConfig */
typedef uint8 CanIf_PduIdFirstOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdLastOfMailBoxConfig */
typedef uint8 CanIf_PduIdLastOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgIdxOfMailBoxConfig */
typedef uint8 CanIf_TxBufferCfgIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgOfMailBoxConfig */
typedef uint8 CanIf_TxBufferCfgOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgUsedOfMailBoxConfig */
typedef boolean CanIf_TxBufferCfgUsedOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferHandlingTypeOfMailBoxConfig */
typedef uint8 CanIf_TxBufferHandlingTypeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfMappedTxBuffersConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_MaxTrcvHandleIdPlusOne */
typedef uint8 CanIf_MaxTrcvHandleIdPlusOneType;

/**   \brief  value based type definition for CanIf_MaxWakeUpSources */
typedef uint8 CanIf_MaxWakeUpSourcesType;

/**   \brief  value based type definition for CanIf_IsCanNmRxPduOfRxPduConfig */
typedef boolean CanIf_IsCanNmRxPduOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxIndicationFctListIdxOfRxPduConfig */
typedef uint8 CanIf_RxIndicationFctListIdxOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxMetaDataLengthOfRxPduConfig */
typedef uint8 CanIf_RxMetaDataLengthOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduCanIdOfRxPduConfig */
typedef uint32 CanIf_RxPduCanIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduDlcOfRxPduConfig */
typedef uint8 CanIf_RxPduDlcOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduMaskOfRxPduConfig */
typedef uint32 CanIf_RxPduMaskOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperPduIdOfRxPduConfig */
typedef PduIdType CanIf_UpperPduIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCtrlStates */
typedef uint8 CanIf_SizeOfCtrlStatesType;

/**   \brief  value based type definition for CanIf_SizeOfMailBoxConfig */
typedef uint8 CanIf_SizeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_SizeOfMappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfRxIndicationFctList */
typedef uint8 CanIf_SizeOfRxIndicationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduConfig */
typedef uint8 CanIf_SizeOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTrcvToCtrlMap */
typedef uint8 CanIf_SizeOfTrcvToCtrlMapType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferFifoBase */
typedef uint8 CanIf_SizeOfTxBufferFifoBaseType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferFifoConfig */
typedef uint8 CanIf_SizeOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxConfirmationFctList */
typedef uint8 CanIf_SizeOfTxConfirmationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfTxFifoQueueBase */
typedef uint8 CanIf_SizeOfTxFifoQueueBaseType;

/**   \brief  value based type definition for CanIf_SizeOfTxFifoQueueData */
typedef uint16 CanIf_SizeOfTxFifoQueueDataType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduConfig */
typedef uint8 CanIf_SizeOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfWakeUpConfig */
typedef uint8 CanIf_SizeOfWakeUpConfigType;

/**   \brief  value based type definition for CanIf_TrcvToCtrlMap */
typedef uint8 CanIf_TrcvToCtrlMapType;

/**   \brief  value based type definition for CanIf_SizeOfOnePayloadElOfTxBufferFifoConfig */
typedef uint8 CanIf_SizeOfOnePayloadElOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxBufferFifoBaseIdxOfTxBufferFifoConfig */
typedef uint8 CanIf_TxBufferFifoBaseIdxOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueBaseEndIdxOfTxBufferFifoConfig */
typedef uint8 CanIf_TxFifoQueueBaseEndIdxOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueBaseLengthOfTxBufferFifoConfig */
typedef uint8 CanIf_TxFifoQueueBaseLengthOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueBaseStartIdxOfTxBufferFifoConfig */
typedef uint8 CanIf_TxFifoQueueBaseStartIdxOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueDataEndIdxOfTxBufferFifoConfig */
typedef uint16 CanIf_TxFifoQueueDataEndIdxOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueDataStartIdxOfTxBufferFifoConfig */
typedef uint16 CanIf_TxFifoQueueDataStartIdxOfTxBufferFifoConfigType;

/**   \brief  value based type definition for CanIf_TxFifoQueueData */
typedef uint8 CanIf_TxFifoQueueDataType;

/**   \brief  value based type definition for CanIf_CanIdOfTxPduConfig */
typedef uint32 CanIf_CanIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CanIdTxMaskOfTxPduConfig */
typedef uint32 CanIf_CanIdTxMaskOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfTxPduConfig */
typedef uint8 CanIf_CtrlStatesIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_IsTxPduTruncationOfTxPduConfig */
typedef boolean CanIf_IsTxPduTruncationOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfTxPduConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxConfirmationFctListIdxOfTxPduConfig */
typedef uint8 CanIf_TxConfirmationFctListIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxMetaDataLengthOfTxPduConfig */
typedef uint8 CanIf_TxMetaDataLengthOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxPduLengthOfTxPduConfig */
typedef uint8 CanIf_TxPduLengthOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperLayerTxPduIdOfTxPduConfig */
typedef PduIdType CanIf_UpperLayerTxPduIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_ControllerIdOfWakeUpConfig */
typedef uint8 CanIf_ControllerIdOfWakeUpConfigType;

/**   \brief  value based type definition for CanIf_WakeUpSourceOfWakeUpConfig */
typedef uint8 CanIf_WakeUpSourceOfWakeUpConfigType;

/**   \brief  value based type definition for CanIf_WakeUpTargetAddressOfWakeUpConfig */
typedef uint8 CanIf_WakeUpTargetAddressOfWakeUpConfigType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCStructTypes  CanIf Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
/*! \spec weak type invariant () { 
 * (self.MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig < CanIf_GetSizeOfMappedTxBuffersConfig()) &&
 * (self.MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig < CanIf_GetSizeOfMappedTxBuffersConfig())
 * } */
typedef struct sCanIf_CanIfCtrlId2MappedTxBuffersConfigType
{
  CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
  CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
} CanIf_CanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_CtrlStates */
typedef struct sCanIf_CtrlStatesType
{
  CanIf_ControllerModeType CtrlModeOfCtrlStates;  /**< Controller mode. */
  CanIf_PduGetModeType PduModeOfCtrlStates;  /**< PDU mode state. */
  CanIf_WakeUpValidationStateType WakeUpValidationStateOfCtrlStates;  /**< Wake-up validation state. */
} CanIf_CtrlStatesType;

/**   \brief  type used in CanIf_MailBoxConfig */
/*! \spec weak type invariant () { 
 * (self.CtrlStatesIdxOfMailBoxConfig < CanIf_GetSizeOfCtrlStates()) &&
 * (!((self.TxBufferCfgIdxOfMailBoxConfig != CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG)) || ((( self.TxBufferCfgOfMailBoxConfig == CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG) && (self.TxBufferCfgIdxOfMailBoxConfig < CanIf_GetSizeOfTxBufferFifoConfig()))))
 * } */
typedef struct sCanIf_MailBoxConfigType
{
  CanIf_CtrlStatesIdxOfMailBoxConfigType CtrlStatesIdxOfMailBoxConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_PduIdFirstOfMailBoxConfigType PduIdFirstOfMailBoxConfig;  /**< "First" PDU mapped to mailbox. */
  CanIf_PduIdLastOfMailBoxConfigType PduIdLastOfMailBoxConfig;  /**< "Last" PDU mapped to mailbox. */
  CanIf_TxBufferCfgOfMailBoxConfigType TxBufferCfgOfMailBoxConfig;
  CanIf_TxBufferCfgIdxOfMailBoxConfigType TxBufferCfgIdxOfMailBoxConfig;  /**< the index of the 0:1 relation pointing to CanIf_TxBufferFifoConfig */
  CanIf_TxBufferHandlingTypeOfMailBoxConfigType TxBufferHandlingTypeOfMailBoxConfig;
  CanIf_MailBoxTypeType MailBoxTypeOfMailBoxConfig;  /**< Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused. */
} CanIf_MailBoxConfigType;

/**   \brief  type used in CanIf_MappedTxBuffersConfig */
/*! \spec weak type invariant () { 
 * (self.MailBoxConfigIdxOfMappedTxBuffersConfig < CanIf_GetSizeOfMailBoxConfig())
 * } */
typedef struct sCanIf_MappedTxBuffersConfigType
{
  CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType MailBoxConfigIdxOfMappedTxBuffersConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
} CanIf_MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_RxIndicationFctList */
typedef struct sCanIf_RxIndicationFctListType
{
  CanIf_RxIndicationFctType RxIndicationFctOfRxIndicationFctList;  /**< Rx indication function. */
  CanIf_RxIndicationLayoutType RxIndicationLayoutOfRxIndicationFctList;  /**< Layout of Rx indication function. */
} CanIf_RxIndicationFctListType;

/**   \brief  type used in CanIf_RxPduConfig */
/*! \spec weak type invariant () { 
 * (self.RxIndicationFctListIdxOfRxPduConfig < CanIf_GetSizeOfRxIndicationFctList())
 * } */
typedef struct sCanIf_RxPduConfigType
{
  CanIf_RxPduCanIdOfRxPduConfigType RxPduCanIdOfRxPduConfig;  /**< Rx-PDU: CAN identifier. */
  CanIf_RxPduMaskOfRxPduConfigType RxPduMaskOfRxPduConfig;  /**< Rx-PDU: CAN identifier mask. */
  CanIf_UpperPduIdOfRxPduConfigType UpperPduIdOfRxPduConfig;  /**< PDU ID defined by upper layer. */
  CanIf_IsCanNmRxPduOfRxPduConfigType IsCanNmRxPduOfRxPduConfig;  /**< TRUE: CAN-Nm Rx-PDU (for Wakeup validation), FALSE: No CAN-Nm Rx-PDU */
  CanIf_RxIndicationFctListIdxOfRxPduConfigType RxIndicationFctListIdxOfRxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_RxIndicationFctList */
  CanIf_RxMetaDataLengthOfRxPduConfigType RxMetaDataLengthOfRxPduConfig;  /**< Meta data length. */
  CanIf_RxPduDlcOfRxPduConfigType RxPduDlcOfRxPduConfig;  /**< Rx-PDU length (DLC). */
} CanIf_RxPduConfigType;

/**   \brief  type used in CanIf_TxBufferFifoConfig */
/*! \spec weak type invariant () { 
 * (self.TxBufferFifoBaseIdxOfTxBufferFifoConfig < CanIf_GetSizeOfTxBufferFifoBase()) &&
 * (self.TxFifoQueueBaseStartIdxOfTxBufferFifoConfig < CanIf_GetSizeOfTxFifoQueueBase()) &&
 * (self.TxFifoQueueBaseEndIdxOfTxBufferFifoConfig < CanIf_GetSizeOfTxFifoQueueBase()) &&
 * (self.TxFifoQueueDataStartIdxOfTxBufferFifoConfig < CanIf_GetSizeOfTxFifoQueueData()) &&
 * (self.TxFifoQueueDataEndIdxOfTxBufferFifoConfig < CanIf_GetSizeOfTxFifoQueueData())
 * } */
typedef struct sCanIf_TxBufferFifoConfigType
{
  CanIf_TxFifoQueueDataEndIdxOfTxBufferFifoConfigType TxFifoQueueDataEndIdxOfTxBufferFifoConfig;  /**< the end index of the 1:n relation pointing to CanIf_TxFifoQueueData */
  CanIf_TxFifoQueueDataStartIdxOfTxBufferFifoConfigType TxFifoQueueDataStartIdxOfTxBufferFifoConfig;  /**< the start index of the 1:n relation pointing to CanIf_TxFifoQueueData */
  CanIf_SizeOfOnePayloadElOfTxBufferFifoConfigType SizeOfOnePayloadElOfTxBufferFifoConfig;
  CanIf_TxBufferFifoBaseIdxOfTxBufferFifoConfigType TxBufferFifoBaseIdxOfTxBufferFifoConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxBufferFifoBase */
  CanIf_TxFifoQueueBaseEndIdxOfTxBufferFifoConfigType TxFifoQueueBaseEndIdxOfTxBufferFifoConfig;  /**< the end index of the 1:n relation pointing to CanIf_TxFifoQueueBase */
  CanIf_TxFifoQueueBaseLengthOfTxBufferFifoConfigType TxFifoQueueBaseLengthOfTxBufferFifoConfig;  /**< the number of relations pointing to CanIf_TxFifoQueueBase */
  CanIf_TxFifoQueueBaseStartIdxOfTxBufferFifoConfigType TxFifoQueueBaseStartIdxOfTxBufferFifoConfig;  /**< the start index of the 1:n relation pointing to CanIf_TxFifoQueueBase */
} CanIf_TxBufferFifoConfigType;

/**   \brief  type used in CanIf_TxPduConfig */
/*! \spec weak type invariant () { 
 * (self.CtrlStatesIdxOfTxPduConfig < CanIf_GetSizeOfCtrlStates()) &&
 * (self.MailBoxConfigIdxOfTxPduConfig < CanIf_GetSizeOfMailBoxConfig()) &&
 * (self.TxConfirmationFctListIdxOfTxPduConfig < CanIf_GetSizeOfTxConfirmationFctList())
 * } */
typedef struct sCanIf_TxPduConfigType
{
  CanIf_CanIdOfTxPduConfigType CanIdOfTxPduConfig;  /**< CAN identifier (16bit / 32bit). */
  CanIf_CanIdTxMaskOfTxPduConfigType CanIdTxMaskOfTxPduConfig;  /**< CAN identifier mask (16bit / 32bit). */
  CanIf_UpperLayerTxPduIdOfTxPduConfigType UpperLayerTxPduIdOfTxPduConfig;  /**< Upper layer handle-Id (8bit / 16bit). */
  CanIf_IsTxPduTruncationOfTxPduConfigType IsTxPduTruncationOfTxPduConfig;  /**< TRUE: Truncation of Tx-PDU is enabled, FALSE: Truncation of Tx-PDU is disabled */
  CanIf_CtrlStatesIdxOfTxPduConfigType CtrlStatesIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_MailBoxConfigIdxOfTxPduConfigType MailBoxConfigIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
  CanIf_TxConfirmationFctListIdxOfTxPduConfigType TxConfirmationFctListIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList */
  CanIf_TxMetaDataLengthOfTxPduConfigType TxMetaDataLengthOfTxPduConfig;  /**< Meta data length. */
  CanIf_TxPduLengthOfTxPduConfigType TxPduLengthOfTxPduConfig;  /**< Tx-PDU length. */
} CanIf_TxPduConfigType;

/**   \brief  type used in CanIf_WakeUpConfig */
typedef struct sCanIf_WakeUpConfigType
{
  CanIf_ControllerIdOfWakeUpConfigType ControllerIdOfWakeUpConfig;  /**< ControllerId of this wake-up source configuration */
  CanIf_WakeUpSourceOfWakeUpConfigType WakeUpSourceOfWakeUpConfig;  /**< Wake-up source identifier */
  CanIf_WakeUpTargetAddressOfWakeUpConfigType WakeUpTargetAddressOfWakeUpConfig;  /**< Target address of wake up source (driver independent handle Id): CAN controller (ControllerId)/CAN transceiver (TransceiverId) */
  CanIf_WakeUpTargetType WakeUpTargetModuleOfWakeUpConfig;  /**< Target module of wake-up source: CAN driver/CAN transceiver driver */
} CanIf_WakeUpConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicStructTypes  CanIf Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to CanIf_CtrlStates */
typedef struct CanIf_CtrlStatesStructSTag
{
  CanIf_CtrlStatesType CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292;
  CanIf_CtrlStatesType CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03;
  CanIf_CtrlStatesType CT_ATOM_CAN_XCP_40afa023;
  CanIf_CtrlStatesType CT_J1939_bms_92f0044b;
  CanIf_CtrlStatesType CT_TC37X_VCU_CAN01_55ccbf7a;
} CanIf_CtrlStatesStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxBufferFifoBase */
typedef struct CanIf_TxBufferFifoBaseStructSTag
{
  CanIf_TxBufferFifoBaseType CHNL_785eea40;
  CanIf_TxBufferFifoBaseType CHNL_beb59c29;
  CanIf_TxBufferFifoBaseType CHNL_31a12637;
  CanIf_TxBufferFifoBaseType CHNL_47d531e5;
  CanIf_TxBufferFifoBaseType CHNL_131d55da;
} CanIf_TxBufferFifoBaseStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxFifoQueueBase */
typedef struct CanIf_TxFifoQueueBaseStructSTag
{
  CanIf_TxFifoQueueBaseType CHNL_785eea40[10];
  CanIf_TxFifoQueueBaseType CHNL_beb59c29[19];
  CanIf_TxFifoQueueBaseType CHNL_31a12637[2];
  CanIf_TxFifoQueueBaseType CHNL_47d531e5[8];
  CanIf_TxFifoQueueBaseType CHNL_131d55da[14];
} CanIf_TxFifoQueueBaseStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxFifoQueueData */
typedef struct CanIf_TxFifoQueueDataStructSTag
{
  CanIf_TxFifoQueueDataType CHNL_785eea40[80];
  CanIf_TxFifoQueueDataType CHNL_beb59c29[152];
  CanIf_TxFifoQueueDataType CHNL_31a12637[16];
  CanIf_TxFifoQueueDataType CHNL_47d531e5[64];
  CanIf_TxFifoQueueDataType CHNL_131d55da[112];
} CanIf_TxFifoQueueDataStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCUnionIndexAndSymbolTypes  CanIf Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access CanIf_CtrlStates in an index and symbol based style. */
typedef union CanIf_CtrlStatesUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  CanIf_CtrlStatesType raw[5];
  CanIf_CtrlStatesStructSType str;
} CanIf_CtrlStatesUType;

/**   \brief  type to access CanIf_TxBufferFifoBase in an index and symbol based style. */
typedef union CanIf_TxBufferFifoBaseUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  CanIf_TxBufferFifoBaseType raw[5];
  CanIf_TxBufferFifoBaseStructSType str;
} CanIf_TxBufferFifoBaseUType;

/**   \brief  type to access CanIf_TxFifoQueueBase in an index and symbol based style. */
typedef union CanIf_TxFifoQueueBaseUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  CanIf_TxFifoQueueBaseType raw[53];
  CanIf_TxFifoQueueBaseStructSType str;
} CanIf_TxFifoQueueBaseUType;

/**   \brief  type to access CanIf_TxFifoQueueData in an index and symbol based style. */
typedef union CanIf_TxFifoQueueDataUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  CanIf_TxFifoQueueDataType raw[424];
  CanIf_TxFifoQueueDataStructSType str;
} CanIf_TxFifoQueueDataUType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootPointerTypes  CanIf Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to CanIf_BusOffNotificationFctPtr */
typedef P2CONST(CanIf_BusOffNotificationFctType, TYPEDEF, CANIF_CONST) CanIf_BusOffNotificationFctPtrPtrType;

/**   \brief  type used to point to CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef P2CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, TYPEDEF, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfigPtrType;

/**   \brief  type used to point to CanIf_CtrlModeIndicationFctPtr */
typedef P2CONST(CanIf_CtrlModeIndicationFctType, TYPEDEF, CANIF_CONST) CanIf_CtrlModeIndicationFctPtrPtrType;

/**   \brief  type used to point to CanIf_CtrlStates */
typedef P2VAR(CanIf_CtrlStatesType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_CtrlStatesPtrType;

/**   \brief  type used to point to CanIf_MailBoxConfig */
typedef P2CONST(CanIf_MailBoxConfigType, TYPEDEF, CANIF_CONST) CanIf_MailBoxConfigPtrType;

/**   \brief  type used to point to CanIf_MappedTxBuffersConfig */
typedef P2CONST(CanIf_MappedTxBuffersConfigType, TYPEDEF, CANIF_CONST) CanIf_MappedTxBuffersConfigPtrType;

/**   \brief  type used to point to CanIf_RxIndicationFctList */
typedef P2CONST(CanIf_RxIndicationFctListType, TYPEDEF, CANIF_CONST) CanIf_RxIndicationFctListPtrType;

/**   \brief  type used to point to CanIf_RxPduConfig */
typedef P2CONST(CanIf_RxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_RxPduConfigPtrType;

/**   \brief  type used to point to CanIf_TrcvModeIndicationFctPtr */
typedef P2CONST(CanIf_TrcvModeIndicationFctType, TYPEDEF, CANIF_CONST) CanIf_TrcvModeIndicationFctPtrPtrType;

/**   \brief  type used to point to CanIf_TrcvToCtrlMap */
typedef P2CONST(CanIf_TrcvToCtrlMapType, TYPEDEF, CANIF_CONST) CanIf_TrcvToCtrlMapPtrType;

/**   \brief  type used to point to CanIf_TxBufferFifoBase */
typedef P2VAR(CanIf_TxBufferFifoBaseType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_TxBufferFifoBasePtrType;

/**   \brief  type used to point to CanIf_TxBufferFifoConfig */
typedef P2CONST(CanIf_TxBufferFifoConfigType, TYPEDEF, CANIF_CONST) CanIf_TxBufferFifoConfigPtrType;

/**   \brief  type used to point to CanIf_TxConfirmationFctList */
typedef P2CONST(CanIf_TxConfirmationFctType, TYPEDEF, CANIF_CONST) CanIf_TxConfirmationFctListPtrType;

/**   \brief  type used to point to CanIf_TxFifoQueueBase */
typedef P2VAR(CanIf_TxFifoQueueBaseType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_TxFifoQueueBasePtrType;

/**   \brief  type used to point to CanIf_TxFifoQueueData */
typedef P2VAR(CanIf_TxFifoQueueDataType, TYPEDEF, CANIF_VAR_NOINIT_FAST) CanIf_TxFifoQueueDataPtrType;

/**   \brief  type used to point to CanIf_TxPduConfig */
typedef P2CONST(CanIf_TxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_TxPduConfigPtrType;

/**   \brief  type used to point to CanIf_WakeUpConfig */
typedef P2CONST(CanIf_WakeUpConfigType, TYPEDEF, CANIF_CONST) CanIf_WakeUpConfigPtrType;

/**   \brief  type used to point to CanIf_WakeUpValidationFctPtr */
typedef P2CONST(CanIf_WakeUpValidationFctType, TYPEDEF, CANIF_CONST) CanIf_WakeUpValidationFctPtrPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootValueTypes  CanIf Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in CanIf_PCConfig */
typedef struct sCanIf_PCConfigType
{
  uint8 CanIf_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} CanIf_PCConfigType;

typedef CanIf_PCConfigType CanIf_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[5];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfg         
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferFifoConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[32];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[5];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[6];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  IsCanNmRxPdu              TRUE: CAN-Nm Rx-PDU (for Wakeup validation), FALSE: No CAN-Nm Rx-PDU
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  RxMetaDataLength          Meta data length.
  RxPduDlc                  Rx-PDU length (DLC).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[109];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TrcvModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_TrcvModeIndicationFctType, CANIF_CONST) CanIf_TrcvModeIndicationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TrcvToCtrlMap
**********************************************************************************************************************/
/** 
  \var    CanIf_TrcvToCtrlMap
  \brief  Indirection table: CAN transceiver driver independent transceiver handle-Id (TransceiverId) to CAN driver independent CAN controller handle-Id (ControllerId).
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_TrcvToCtrlMapType, CANIF_CONST) CanIf_TrcvToCtrlMap[1];
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferFifoConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferFifoConfig
  \brief  Tx-buffer: FIFO
  \details
  Element                    Description
  TxFifoQueueDataEndIdx      the end index of the 1:n relation pointing to CanIf_TxFifoQueueData
  TxFifoQueueDataStartIdx    the start index of the 1:n relation pointing to CanIf_TxFifoQueueData
  SizeOfOnePayloadEl     
  TxBufferFifoBaseIdx        the index of the 1:1 relation pointing to CanIf_TxBufferFifoBase
  TxFifoQueueBaseEndIdx      the end index of the 1:n relation pointing to CanIf_TxFifoQueueBase
  TxFifoQueueBaseLength      the number of relations pointing to CanIf_TxFifoQueueBase
  TxFifoQueueBaseStartIdx    the start index of the 1:n relation pointing to CanIf_TxFifoQueueBase
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_TxBufferFifoConfigType, CANIF_CONST) CanIf_TxBufferFifoConfig[5];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[5];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  CanIdTxMask                 CAN identifier mask (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle-Id (8bit / 16bit).
  IsTxPduTruncation           TRUE: Truncation of Tx-PDU is enabled, FALSE: Truncation of Tx-PDU is disabled
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
  TxMetaDataLength            Meta data length.
  TxPduLength                 Tx-PDU length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[56];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_WakeUpConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_WakeUpConfig
  \brief  Wake-up source configuration
  \details
  Element                Description
  ControllerId           ControllerId of this wake-up source configuration
  WakeUpSource           Wake-up source identifier
  WakeUpTargetAddress    Target address of wake up source (driver independent handle Id): CAN controller (ControllerId)/CAN transceiver (TransceiverId)
  WakeUpTargetModule     Target module of wake-up source: CAN driver/CAN transceiver driver
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_WakeUpConfigType, CANIF_CONST) CanIf_WakeUpConfig[1];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_WakeUpValidationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_WakeUpValidationFctType, CANIF_CONST) CanIf_WakeUpValidationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element                  Description
  CtrlMode                 Controller mode.
  PduMode                  PDU mode state.
  WakeUpValidationState    Wake-up validation state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferFifoBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferFifoBase
  \brief  Variable declaration - Tx-buffer FIFO: buffer-base: write-/read-index, counter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(CanIf_TxBufferFifoBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferFifoBase;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxFifoQueueBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxFifoQueueBase
  \brief  Variable declaration - Tx-buffer FIFO: queue-base: CAN identifier, data length, queued / NOT queued.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(CanIf_TxFifoQueueBaseUType, CANIF_VAR_NOINIT) CanIf_TxFifoQueueBase;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxFifoQueueData
**********************************************************************************************************************/
/** 
  \var    CanIf_TxFifoQueueData
  \brief  Variable declaration - Tx-buffer FIFO: queue-data.
*/ 
#define CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(CanIf_TxFifoQueueDataUType, CANIF_VAR_NOINIT_FAST) CanIf_TxFifoQueueData;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/




#endif  /* CANIF_CFG_H */
/**********************************************************************************************************************
  END OF FILE: CanIf_Cfg.h
**********************************************************************************************************************/


