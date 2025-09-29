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
 *  Filename:           CtAp_FctSftyTorq_Glb.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyTorq_Glb.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyTorq_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_FctSftyTorq_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T FctSftyMon_AccrPedlLmtMaxTq_Nm;
                            /* function safety accelerator pedal torque Limit */
real32_T FctSftyMon_AccrPedlLmtMinTq_Nm;
                            /* function safety accelerator pedal torque Limit */
real32_T FctSftyMon_CrpCtrlLmtTq_Nm;   /* function safety creep torque Limit */

#define CtAp_FctSftyTorq_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
