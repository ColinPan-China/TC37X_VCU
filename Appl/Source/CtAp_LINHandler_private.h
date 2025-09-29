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
 *  Filename:           CtAp_LINHandler_private.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 18:32:11 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Sep 11 18:31:24 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_LINHandler_private_h_
#define RTW_HEADER_CtAp_LINHandler_private_h_
#include "rtwtypes.h"
#include "CtAp_LINHandler.h"
#include "CtAp_LINHandler_types.h"
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

extern boolean_T CtAp_LINHandler_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_LI_T
  *CtAp_LINHandler__ARID_DEF_arg);

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

extern void CtAp_LINHandler_NoDTAvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDTAvoidMu_CtAp_LIN_T
  *CtAp_LINHandler__ARID_DEF_arg);

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

extern void CtAp_LINHandler_NoTime(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_NoTime_CtAp_LINHandl_T *CtAp_LINHandler__ARID_DEF_arg);

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

extern real32_T CtAp_LINHandler_ATOM_SignalRead(real32_T rtu_InputSignal,
  real32_T rtu_IresolutionRation, real32_T rtu_offset);

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_LINHandler_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
