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
 *  Filename:           CtAp_AccCal_Cal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:35:04 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:34:38 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_AccCal_Cal_h_
#define RTW_HEADER_CtAp_AccCal_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T AccCal_AcclrRadio_CFG;

/*
   acclr module to calculate the low pass filter coefficient of acceleration
 */
extern volatile const real32_T AccCal_CycleDt_CFG;

/*
   Low-pass filtering cycle time for calculating acceleration in acclr module
 */
extern volatile const real32_T AccCal_EnterRgnAcclr_CFG;

/*
   Light brake pedal lamp deceleration threshold, greater than the light
 */
extern volatile const real32_T AccCal_ExitRgnAcclr_CFG;

/*
   Exit brake pedal light deceleration threshold
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_AccCal_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
