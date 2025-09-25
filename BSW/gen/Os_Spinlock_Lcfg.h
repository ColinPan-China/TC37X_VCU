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
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Spinlock_Lcfg.h
 *   Generation Time: 2025-09-25 10:42:48
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_SPINLOCK_LCFG_H
# define OS_SPINLOCK_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Spinlock_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Spinlock configuration data: Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx;

/*! Spinlock configuration data: Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx;

/*! Spinlock configuration data: Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx;

/*! Spinlock configuration data: Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx;

/*! Spinlock configuration data: Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx;

/*! Spinlock configuration data: Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx;

/*! Spinlock configuration data: Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx;

/*! Spinlock configuration data: Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx */
extern CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx;

/*! Object reference table for spinlocks. */
extern CONSTP2CONST(Os_SpinlockConfigType, OS_CONST, OS_CONST) OsCfg_SpinlockRefs[OS_SPINLOCKID_COUNT + 1];  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_SPINLOCK_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Spinlock_Lcfg.h
 *********************************************************************************************************************/
