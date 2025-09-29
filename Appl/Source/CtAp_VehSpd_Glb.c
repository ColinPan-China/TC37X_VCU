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
 *  Filename:           CtAp_VehSpd_Glb.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:28:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:27:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehSpd_Glb.h"
#include "rtwtypes.h"
#include "CtAp_VehSpd_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_VehSpd_START_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T VehMot_VehDirDifGearD_Flg;
boolean_T VehMot_VehDirDifGearR_Flg;
real32_T VehMot_VehTirRd_cm;

#define CtAp_VehSpd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
