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
 *  Filename:           CtAp_AccCal_Cal.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:40:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:39:42 2025
 *
 *
 *******************************************************************************/
#include "CtAp_AccCal_Cal.h"
#include "rtwtypes.h"
#include "CtAp_AccCal_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T AccCal_AcclrRadio_CFG = 0.1F;/*
                                                        acclr module to calculate the low pass filter coefficient of acceleration
                                                      */
volatile const real32_T AccCal_CycleDt_CFG = 0.01F;/*
                                                      Low-pass filtering cycle time for calculating acceleration in acclr module
                                                    */
volatile const real32_T AccCal_EnterRgnAcclr_CFG = 1.3F;/*
                                                           Light brake pedal lamp deceleration threshold, greater than the light
                                                         */
volatile const real32_T AccCal_ExitRgnAcclr_CFG = 0.7F;/*
                                                          Exit brake pedal light deceleration threshold
                                                        */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
