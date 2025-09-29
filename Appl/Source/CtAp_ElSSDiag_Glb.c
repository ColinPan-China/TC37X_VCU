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
 *  Filename:           CtAp_ElSSDiag_Glb.c
 *  File Creation Date: 28-Oct-2024
 *  Model Name:         CtAp_ElSSDiag
 *  Model Version:      1.78
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:12:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Oct 28 13:24:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Oct 28 13:23:40 2024
 *
 *
 *******************************************************************************/
#include "CtAp_ElSSDiag_Glb.h"
#include "rtwtypes.h"
#include "CtAp_ElSSDiag_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_ElSSDiag_START_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T LvMgmt_StayInRun_Flg;
                         /* Monitor variable signal for LvMgmt_StayInRun_Flg! */

#define CtAp_ElSSDiag_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
