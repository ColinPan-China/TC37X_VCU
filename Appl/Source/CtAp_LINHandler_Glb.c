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
 *  Filename:           CtAp_LINHandler_Glb.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 18:32:11 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Sep 11 18:31:24 2025
 *
 *
 *******************************************************************************/
#include "CtAp_LINHandler_Glb.h"
#include "rtwtypes.h"
#include "CtAp_LINHandler_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_LINHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T BS_BSBatSOC_IsUpdated;       /* Whether BS_BSBatSOC message is lost */
boolean_T ComM_FRC01_IsUpdated;        /* Whether FRC_01 message is lost */
boolean_T ComM_FRCComFtonNet;          /* FRC communication status */
boolean_T ComM_FRCNodComFailrInfo;     /* FRC communication lost status */
boolean_T ComM_FRCVlOV;                /* FRC overvoltage state */
boolean_T ComM_FRCVlUV;                /* FRC under-voltage state */

#define CtAp_LINHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
