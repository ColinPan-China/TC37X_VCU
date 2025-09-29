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
 *  Filename:           CtAp_TrsmProtd_Glb.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.45
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:53:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:52:53 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TrsmProtd_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TrsmProtd_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TrsmProtd_START_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T TorqPahMgmt_MotDftlProtnActv_Flg;
                               /* Motor Differential Protection Active status */
real32_T TorqPahMgmt_TramProtdLmtMaxTq_Nm;
                                  /* Motor Differential Protection max torque */
real32_T TorqPahMgmt_TramProtdLmtMinTq_Nm;
                                  /* Motor Differential Protection min torque */

#define CtAp_TrsmProtd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
