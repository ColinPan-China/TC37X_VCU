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
 *  Filename:           CtAp_VehStabyCtrl_Cal.c
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.56
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 16:16:25 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 16:15:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehStabyCtrl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_VehStabyCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChassisMgmt_IBSIntvIncMaxTq_CFG = 20.0F;/* DTC active max torque in gear D/R */
volatile const real32_T ChassisMgmt_IBSIntvIncThdTq_CFG = 20.0F;/* DTC active max threshold torque */
volatile const real32_T ChassisMgmt_IBSIntvRednMaxTq_CFG = 15.0F;/* TCS/VDC max torque */
volatile const real32_T ChassisMgmt_IBSIntvRednMinTq_CFG = -15.0F;/* TCS/VDC min Torque in Gear D */
volatile const real32_T ChassisMgmt_IBSIntvRednThdTq_CFG = 20.0F;/* TCS/VDC active max threshold torque */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
