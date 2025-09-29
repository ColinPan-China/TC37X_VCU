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
 *  Filename:           CtAp_ResEst_Glb.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:46:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:45:41 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ResEst_Glb.h"
#include "rtwtypes.h"
#include "CtAp_ResEst_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_ResEst_START_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T VehMot_AcclrPrpMax_mps2q;
real32_T VehMot_AcclrPrpMin_mps2q;

#define CtAp_ResEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
