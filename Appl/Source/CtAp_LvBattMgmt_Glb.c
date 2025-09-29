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
 *  Filename:           CtAp_LvBattMgmt_Glb.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 *******************************************************************************/
#include "CtAp_LvBattMgmt_Glb.h"
#include "rtwtypes.h"
#include "CtAp_LvBattMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_LvBattMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T LvMgmt_BSSOCMinimum;
                           /* The low voltage state keeps the operating state */

#define CtAp_LvBattMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
