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
 *  Filename:           CtAp_TorqFil_Cal.c
 *  File Creation Date: 06-Jan-2025
 *  Model Name:         CtAp_TorqFil
 *  Model Version:      1.34
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:25 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jan  6 17:34:54 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Dec 30 23:35:34 2024
 *
 *
 *******************************************************************************/
#include "CtAp_TorqFil_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TorqFil_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_TqRefFilDasTim_CFG = 0.05F;
/* with the prameter the filter time for the second&#x2212;order lowpass torque filter can be adtrrusted in case that the driving assistance function is active */
volatile const real32_T TorqPahMgmt_TqRefFilTim_CFG = 0.02F;
/* With this parameter the filter time for the second&#x2212;order lowpass torque filter can be adjusted in case that no driving assistance function is active */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
