/*
 *************************************************************************
 *                                                                       *
 *                           ATOM GMBH                                   *
 *                        VCU SoftWare Team                              *
 *                                                                       *
 *                       All rights reserved                             *
 *                                                                       *
 *************************************************************************
 */
/*******************************************************************************
 *  FILE INFORMATION:
 *  Filename:           CtAp_PwrLim_Cal.c
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PwrLim_Cal.h"
#include "rtwtypes.h"
#include "CtAp_PwrLim_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T EgyMgmt_BMSDispSOCEnaTCU_CFG = 25.0F;
                              /* BMS display SOC Time threshold for enabling TCU
                               */
volatile const real32_T EgyMgmt_BMSDispSOCLo_CFG = 5.0F;/* BMS display SOC low threshold
                                                         */
volatile const real32_T EgyMgmt_BMSMaxOutPackPTCPowerValue_CFG = 1.5F;
volatile const uint16_T EgyMgmt_BatteryDischargingInChargingTime_CFG = 30000U;/* BMS battery current threshold set time
                                                                      */
volatile const real32_T EgyMgmt_DCDCPowerLimitValue_CFG = 0.5F;
volatile const boolean_T EgyMgmt_EnablePackPTCWork_CFG = false;/* Enable PackPTC to work
                                                                */
volatile const real32_T EgyMgmt_MCUDrvPwrLmtTrans[10] = { 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* MCU drive power limiting factor Map */

volatile const real32_T EgyMgmt_MCUDrvPwrLmtTransX[10] = { 0.0F, 20.0F, 40.0F,
  60.0F, 80.0F, 100.0F, 120.0F, 150.0F, 200.0F, 280.0F } ;
                                    /* MCU drive power limiting factor X axis */

volatile const real32_T EgyMgmt_MCUFbPwrLmtTrans[10] = { 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;
                                    /* MCU feedback power limiting factor Map */

volatile const real32_T EgyMgmt_MCUFbPwrLmtTransX[10] = { 0.0F, 10.0F, 20.0F,
  30.0F, 50.0F, 70.0F, 100.0F, 130.0F, 160.0F, 180.0F } ;
                                 /* MCU feedback power limiting factor X axis */

volatile const real32_T EgyMgmt_PODMaxOutDCDCPowerValue_CFG = 3.3F;
volatile const uint16_T EgyMgmt_PckPTCSetTim_CFG = 30000U;/* Pack PTC threshold set time
                                                           */
volatile const real32_T EgyMgmt_TCUPwrTran_CFG = 0.6F;/* TCU power transmission coefficient
                                                       */
volatile const real32_T EgyMgmt_VCUDisChgPwrLmtDft_CFG = 4.0F;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
