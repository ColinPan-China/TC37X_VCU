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
 *  Filename:           CtAp_FctSftyGear_Glb.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.2
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:36:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:35:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyGear_Glb.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyGear_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T FctSftyMon_ActGearCfmFailDTC_Flg;
uint8_T FctSftyMon_ActualGearEPB;
boolean_T FctSftyMon_BrkPressChkPass;
uint8_T FctSftyMon_FUSATarGear_Enum;
boolean_T FctSftyMon_FusaTargetChkPass;
uint8_T GearMgmt_UnCfmdActGearDly_Enum;
uint8_T Nvm_MemGearCfm_Enum;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
