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
 *  Filename:           CtAp_TorqDamp_Glb.c
 *  File Creation Date: 02-Sep-2024
 *  Model Name:         CtAp_TorqDamp
 *  Model Version:      1.12
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:30 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Sep  2 17:04:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 30 16:50:57 2024
 *
 *
 *******************************************************************************/
#include "CtAp_TorqDamp_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TorqDamp_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TorqDamp_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqDamp_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint8_T TorqPahMgmt_ReqMotDampSts_Enum;/* Requested surge damper state */

#define CtAp_TorqDamp_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqDamp_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
