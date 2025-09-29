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
 *  Filename:           CtAp_PwrLim_private.h
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_PwrLim_private_h_
#define RTW_HEADER_CtAp_PwrLim_private_h_
#include "rtwtypes.h"
#include "CtAp_PwrLim.h"
#include "CtAp_PwrLim_types.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern uint8_T CtAp_PwrLim_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern real32_T CtAp_PwrLim_If_jnrb(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern void CtAp_PwrLim_NoEnDTAvdMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoEnDTAvdMu_CtAp_Pwr_T *CtAp_PwrLim__ARID_DEF_arg);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern void CtAp_PwrLim_NoEnTimMonR(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern boolean_T CtAp_PwrLim_If_f4bg(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

extern boolean_T CtAp_PwrLim_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T
  *CtAp_PwrLim__ARID_DEF_arg);

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_PwrLim_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
