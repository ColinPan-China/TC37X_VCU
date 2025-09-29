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
 *  Filename:           CtAp_FctSftyGear_private.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.2
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:36:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:35:37 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FctSftyGear_private_h_
#define RTW_HEADER_CtAp_FctSftyGear_private_h_
#include "rtwtypes.h"
#include "CtAp_FctSftyGear.h"
#include "CtAp_FctSftyGear_types.h"
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

extern boolean_T CtAp_FctSftyGear_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T
  *CtAp_FctSftyGear__ARID_DEF_arg);

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

extern void CtAp_FctSftyGear_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_FctSftyGear__ARID_DEF_arg);

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

extern boolean_T CtAp_FctSftyGear_DetectIncrease(boolean_T rtu_U,
  ARID_DEF_DetectIncrease_CtAp__T *CtAp_FctSftyGear__ARID_DEF_arg);

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_FctSftyGear_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
