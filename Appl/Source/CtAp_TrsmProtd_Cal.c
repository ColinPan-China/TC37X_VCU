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
 *  Filename:           CtAp_TrsmProtd_Cal.c
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
#include "CtAp_TrsmProtd_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TrsmProtd_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_TramProtdDiffMaxSpd_CFG = 35.0F;
/* when ibs RL and RR speed diff over this speed ,teh Motor Differential Protection Active */
volatile const real32_T TorqPahMgmt_TramProtdDiffMinSpd_CFG = 20.0F;
/* when ibs RL and RR speed diff less than this speed ,teh Motor Differential Protection Active */
volatile const real32_T TorqPahMgmt_TramProtdLmtDftMaxTq_CFG = 310.0F;
                          /* Motor Differential Protection default max torque */
volatile const real32_T TorqPahMgmt_TramProtdLmtDftMinTq_CFG = -310.0F;
                          /* Motor Differential Protection default min torque */
volatile const real32_T TorqPahMgmt_TramProtdLmtMaxTq_CFG = 10.0F;
                            /* Motor Differential Protection Limit max torque */
volatile const real32_T TorqPahMgmt_TramProtdLmtMinTq_CFG = -10.0F;
                            /* Motor Differential Protection Limit max torque */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
