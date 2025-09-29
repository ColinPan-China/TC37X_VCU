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
 *  Filename:           CtAp_DrvAsscCtrl_private.h
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DrvAsscCtrl_private_h_
#define RTW_HEADER_CtAp_DrvAsscCtrl_private_h_
#include "rtwtypes.h"
#include "CtAp_DrvAsscCtrl.h"
#include "CtAp_DrvAsscCtrl_types.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern real32_T CtAp_DrvAsscCtrl_If(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern void CtAp_DrvAsscCtr_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern boolean_T CtAp_DrvAsscCtrl_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern boolean_T CtAp_DrvAsscCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern void CtAp_DrvAsscCtrl_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_DrvAssc_T *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern void CtAp_DrvAsscCt_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern void CtAp_DrvAsscCtrl_NoReset_hsrm(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt,
  boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Dr_fn1j_T *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern void CtAp_DrvA_NoEnableAndReset_khyu(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndRese_plgt_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg);

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_DrvAsscCtrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
