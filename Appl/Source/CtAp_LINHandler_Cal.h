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
 *  Filename:           CtAp_LINHandler_Cal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:21:25 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:19:22 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_LINHandler_Cal_h_
#define RTW_HEADER_CtAp_LINHandler_Cal_h_
#include "rtwtypes.h"

/* Exported data define */
/* Definition for custom storage class: Define_AtomAutoSar */
#define LINHandler_LinMsgBS01LostTim   455U
#define LINHandler_RangeOne            1U
#define LINHandler_RangeTwo            2U
#define LINHandler_RangeZero           0U

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T LINHandler_LVBatteryChargingStartSOC_CFG;

/* Set the value of VCU_wakeup_cycle */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_LINHandler_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
