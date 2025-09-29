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
 *  Filename:           CtAp_ChrgSeqCtrl_Cal.c
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_ChrgSeqCtrl
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:03:55 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 11:02:45 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgSeqCtrl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgSeqCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T DCChrMgmt_ChrgSeqDTCEnaTim_CFG = 1500U;/* Charge sequsnse DTC enable time */
volatile const real32_T DCChrMgmt_DCFCOpnIDCLmt_CFG = 5.0F;/* DCFC open current limit */
volatile const uint16_T DCChrMgmt_DCFCOpnTimLmt_CFG = 10000U;/* DCFC open time limit */
volatile const uint16_T DCChrMgmt_IRCheckOffTimLmt_CFG = 2000U;
                                      /* insulation resistance off time limit */
volatile const uint16_T DCChrMgmt_IRCheckOnTimLmt_CFG = 2000U;/* insulation resistance on time limit */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
