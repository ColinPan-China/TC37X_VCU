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
 *  Filename:           CtAp_TorqFil_Glb.c
 *  File Creation Date: 02-Sep-2024
 *  Model Name:         CtAp_TorqFil
 *  Model Version:      1.20
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:25 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Sep  2 17:34:58 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Sep 02 17:31:21 2024
 *
 *
 *******************************************************************************/
#include "CtAp_TorqFil_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TorqFil_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TorqFil_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T TorqPahMgmt_DesLpFildTq_Nm;
                            /* the second&#x2212;order lowpass filter torque  */
real32_T TorqPahMgmt_TqRefFilTim_s;
         /* the filter time for the second&#x2212;order lowpass torque filter */

#define CtAp_TorqFil_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
