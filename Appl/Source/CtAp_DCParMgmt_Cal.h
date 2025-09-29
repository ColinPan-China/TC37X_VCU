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
 *  Filename:           CtAp_DCParMgmt_Cal.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_DCParMgmt
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:23 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:05:59 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue Jul 29 13:40:04 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DCParMgmt_Cal_h_
#define RTW_HEADER_CtAp_DCParMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T DCChrMgmt_ConCurrUDcCmp_CFG;

/* Const current voltage compensation */
extern volatile const real32_T DCChrMgmt_ConVoltModProtdVolt_CFG;

/* DC port fault charge current require coefficient */
extern volatile const real32_T DCChrMgmt_DCPortErrIDcCoeff_CFG;

/* DC port fault charge current require coefficient */
extern volatile const real32_T DCChrMgmt_DCPreheatIDcCmp_CFG;

/* DC preheat current compensation */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DCParMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
