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
 *  Filename:           CtAp_FctSftyGear_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.2
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:36:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:35:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyGear_Cal.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyGear_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T FctSftyMon_ActGearCfmFailDematureTim_CFG = 200U;
volatile const uint16_T FctSftyMon_ActGearCfmFailMatureTim_CFG = 60U;
volatile const real32_T FctSftyMon_AllowD2RVehSpdCfm_CFG = 7.0F;
volatile const uint16_T FctSftyMon_DTCCfmPreEnaTim_CFG = 1500U;
volatile const uint16_T FctSftyMon_EPBWaitTime_CFG = 2000U;
volatile const uint16_T FctSftyMon_WakeupTim_CFG = 700U;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
