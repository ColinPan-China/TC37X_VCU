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
 *  Filename:           CtAp_DrvMod_Glb.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:57:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:56:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvMod_Glb.h"
#include "rtwtypes.h"
#include "CtAp_DrvMod_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_DrvMod_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ModMgmt_ErrResOnePedlWarnHiSpd;
                          /* The Err result of driving mode fault level three */
boolean_T ModMgmt_ErrResOnePedlWarnVehFaild;
                            /* The Err result of driving mode fault level two */
boolean_T ModMgmt_ErrResSptModWarnLoSOC;
                            /* The Err result of driving mode fault level two */
uint8_T ModMgmt_MonResOnePedlWarnHiSpd;
                          /* The Mon result of driving mode fault level three */
uint8_T ModMgmt_MonResOnePedlWarnVehFaild;
                            /* The Mon result of driving mode fault level two */
uint8_T ModMgmt_MonResSptModWarnLoSOC;
                            /* The Mon result of driving mode fault level two */

#define CtAp_DrvMod_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
