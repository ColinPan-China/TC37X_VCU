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
 *  Filename:           CtAp_DCFCMgmt_Cal.c
 *  File Creation Date: 07-Jul-2025
 *  Model Name:         CtAp_DCFCMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:50 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul  7 16:33:09 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 07 16:32:15 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCFCMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DCFCMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T HvMgmt_DCFCRlyClsDTCEnaSetTim_CFG = 1500U;
                            /* DCFC relay closed fault DTC enable condition time
                             */
volatile const uint16_T HvMgmt_DCFCRlyDTCSetTim_CFG = 2000U;
                                      /* DCFC relay DTC fault set condition time
                                       */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
