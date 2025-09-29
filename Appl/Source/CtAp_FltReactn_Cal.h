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
 *  Filename:           CtAp_FltReactn_Cal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.1.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 09:45:58 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 09:40:15 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_FltReactn_Cal_h_
#define RTW_HEADER_CtAp_FltReactn_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T FltReactn_BMSErrCfm_CFG;

/*
   BMS Error Confirm Time
 */
extern volatile const uint16_T FltReactn_BMSInslaErrCfm_CFG;

/*
   Insulation fault Error Confirm Time
 */
extern volatile const real32_T FltReactn_BMSInslaErrVehSpdCfm_CFG;

/*
   Insulation fault error confirm vehicle speed
 */
extern volatile const uint16_T FltReactn_CrashErrCfm_CFG;

/*
   crash Error Confirm Time
 */
extern volatile const uint16_T FltReactn_DCDCErrCfm_CFG;

/*
   DCDC Error Confirm Time
 */
extern volatile const uint32_T FltReactn_DCDCErrDlyCfm_CFG;

/*
   DCDC Error Delay Confirm Time
 */
extern volatile const uint16_T FltReactn_DlyHvDwn_CFG;

/*
   The fault delays the high voltage times
 */
extern volatile const real32_T FltReactn_ErrLvl5VehSpdLim_CFG;

/*
   Vehicle speed with fault level 5
 */
extern volatile const real32_T FltReactn_ErrLvl6VehSpdLim_CFG;

/*
   Vehicle speed with fault level 6
 */
extern volatile const real32_T FltReactn_HVILErrVehSpdCfm_CFG;

/*
   HVIL Error confirm vehicle speed
 */
extern volatile const uint16_T FltReactn_MCUErrCfm_CFG;

/*
   MCU Error Confirm Time
 */
extern volatile const uint16_T FltReactn_OBCErrCfm_CFG;

/*
   OBC Error Confirm Time
 */
extern volatile const uint32_T FltReactn_OBCErrDlyCfm_CFG;

/*
   OBC Dly Error Confirm Time
 */
extern volatile const uint16_T FltReactn_TCUErrCfm_CFG;

/*
   TCU Error Confirm Time
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_FltReactn_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
