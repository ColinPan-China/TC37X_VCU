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
 *  Filename:           CtAp_CnsCalcn_Cal.c
 *  File Creation Date: 03-Apr-2025
 *  Model Name:         CtAp_CnsCalcn
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:10 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr  3 14:30:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Apr 03 14:29:51 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CnsCalcn_Cal.h"
#include "rtwtypes.h"
#include "CtAp_CnsCalcn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T EgyMgmt_BMSMaxOutPackPTCPower_CFG = 1.5F;/* Default PackPTC power value */
volatile const real32_T EgyMgmt_PODMaxOutDCDCPower_CFG = 3.3F;/* Default DCDC power value */
volatile const real32_T EgyMgmt_PODMaxOutPower_CFG = 4.0F;/* Default V2L power value */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
