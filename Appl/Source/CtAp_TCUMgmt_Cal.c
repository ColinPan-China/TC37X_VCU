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
 *  Filename:           CtAp_TCUMgmt_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_TCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:37 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:38:14 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:25:48 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TCUMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TCUMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T HvMgmt_TCUDTCEnaSetTim_CFG = 1500U;/*
                                                              Time determination of DTC enable conditions for TCU
                                                            */
volatile const uint16_T HvMgmt_TCUEnaFltDTCResetTim_CFG = 1000U;/*
                                                                   Time determination of TCU enbale fault DTC reset conditions
                                                                 */
volatile const uint16_T HvMgmt_TCUEnaFltDTCSetTim_CFG = 2000U;/*
                                                                 Time determination of TCU enable fault DTC set conditions
                                                               */
volatile const uint16_T HvMgmt_TCUStopFltDTCResetTim_CFG = 1000U;/*
                                                                    Time determination of TCU stop fault DTC reset conditions
                                                                  */
volatile const uint16_T HvMgmt_TCUStopFltDTCSetTim_CFG = 500U;/*
                                                                 Time determination of TCU stop fault DTC set conditions
                                                               */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
