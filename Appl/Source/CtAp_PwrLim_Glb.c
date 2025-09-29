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
 *  Filename:           CtAp_PwrLim_Glb.c
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PwrLim_Glb.h"
#include "rtwtypes.h"
#include "CtAp_PwrLim_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_PwrLim_START_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T EgyMgmt_ErrResEgyMgmtWarnOne;
                                 /* Energy management warning level 1 Err Res */
boolean_T EgyMgmt_ErrResEgyMgmtWarnTwo;
                                 /* Energy management warning level 1 Err Res */
uint8_T EgyMgmt_MonResEgyMgmtWarnOne;
                                 /* Energy management warning level 1 Mon Res */
uint8_T EgyMgmt_MonResEgyMgmtWarnTwo;
                                 /* Energy management warning level 1 Mon Res */

#define CtAp_PwrLim_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
