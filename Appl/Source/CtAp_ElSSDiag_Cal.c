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
 *  Filename:           CtAp_ElSSDiag_Cal.c
 *  File Creation Date: 02-Apr-2025
 *  Model Name:         CtAp_ElSSDiag
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:12:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Apr  2 14:33:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Apr 02 14:32:10 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ElSSDiag_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ElSSDiag_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T LvMgmt_ECUsDiagDTCEnaSetTim_CFG = 1500U;/* ECU self-check fault DTC enable time
                                                                 */
volatile const uint16_T LvMgmt_ECUsDiagFbResetTim_CFG = 1000U;/* ECU self-check fault DTC reset time
                                                               */
volatile const uint16_T LvMgmt_ECUsDiagFbSetTim_CFG = 800U;/* ECU self-check fault DTC set time
                                                            */
volatile const uint16_T LvMgmt_KL15eDTCEnaSetTim_CFG = 1500U;/* KL15 relay fault DTC enable time
                                                              */
volatile const uint16_T LvMgmt_KL15eFbResetTim_CFG = 1000U;/* KL15 relay fault DTC set/reset time
                                                            */
volatile const uint16_T LvMgmt_KL15eFbSetTim_CFG = 1000U;/* KL15 relay fault DTC set/reset time
                                                          */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
