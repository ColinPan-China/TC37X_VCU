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
 *  Filename:           CtAp_DCParMgmt_Cal.c
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_DCParMgmt
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:23 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:05:59 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue Jul 29 13:40:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCParMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DCParMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T DCChrMgmt_ConCurrUDcCmp_CFG = 20.0F;/* Const current voltage compensation */
volatile const real32_T DCChrMgmt_ConVoltModProtdVolt_CFG = 2.0F;
                          /* DC port fault charge current require coefficient */
volatile const real32_T DCChrMgmt_DCPortErrIDcCoeff_CFG = 0.5F;
                          /* DC port fault charge current require coefficient */
volatile const real32_T DCChrMgmt_DCPreheatIDcCmp_CFG = 10.0F;/* DC preheat current compensation */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
