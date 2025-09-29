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
 *  Filename:           CtAp_SlopEst_Cal.c
 *  File Creation Date: 13-Sep-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.3.0
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 13 13:01:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Sat Sep 13 13:00:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_SlopEst_Cal.h"
#include "rtwtypes.h"
#include "CtAp_SlopEst_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T SlopEst_BrakeSpdEnable_CFG = 0.0F;/* Vehicle mass */
volatile const boolean_T SlopEst_EnableEntZero_CFG = false;
volatile const uint16_T SlopEst_EntZeroSlopTime_CFG = 400U;
volatile const real32_T SlopEst_ExitZeroSlop_CFG = 3.8F;
volatile const real32_T SlopEst_GAcclr_CFG = 9.8F;/* Vehicle mass */
volatile const uint16_T SlopEst_LgtAAcclrEnbTim_CFG = 80U;
volatile const real32_T SlopEst_LgtAAcclrEnb_CFG = 0.031F;
volatile const real32_T SlopEst_Limit_CFG = 0.15F;/* Vehicle mass */
volatile const uint16_T SlopEst_RemainDly_CFG = 10000U;
volatile const uint16_T SlopEst_Remain_CFG = 5000U;
volatile const uint8_T SlopEst_VCUAcclrDlyEnb_CFG = 8U;
volatile const real32_T SlopEst_VCUAcclrEnb1_CFG = 0.4F;
volatile const real32_T SlopEst_VCUAcclrEnb2_CFG = 0.4F;
volatile const uint16_T SlopEst_VCUAcclrEnbTime_CFG = 50U;
volatile const real32_T SlopRes_EntZeroSlop_CFG = 2.4F;
volatile const real32_T SlopRes_MaxSlop_CFG = 18.0F;/* Maximum allowable output slope */
volatile const real32_T SlopRes_MinSlop_CFG = -18.0F;/* Maximum allowable output slope */
volatile const real32_T SlopRes_ReleaseTrigger_CFG = 1.1F;
volatile const real32_T SlopRes_RemainRealTrigger_CFG = 1.2F;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
