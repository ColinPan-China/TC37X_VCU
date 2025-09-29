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
 *  Filename:           CtAp_MCUMgmt_private.h
 *  File Creation Date: 21-Aug-2025
 *  Model Name:         CtAp_MCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:17:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug 21 10:52:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Aug 21 10:37:51 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_MCUMgmt_private_h_
#define RTW_HEADER_CtAp_MCUMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_MCUMgmt.h"
#include "CtAp_MCUMgmt_types.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern boolean_T CtAp_MCUMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_MC_T
  *CtAp_MCUMgmt__ARID_DEF_arg);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern void CtAp_MCUMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_MCUMgmt__ARID_DEF_arg);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern void CtAp_MCUMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_MCUMgmt_T
  *CtAp_MCUMgmt__ARID_DEF_arg);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern void CtAp_MCUMgmt_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern void CtAp_MCUMgmt_NoDT_g31q(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_MCUMg_kac5_T
  *CtAp_MCUMgmt__ARID_DEF_arg);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern void CtAp_MCUMgmt_NoDT_gb4d(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_MCUMg_awov_T
  *CtAp_MCUMgmt__ARID_DEF_arg);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

extern boolean_T CtAp_MCUMgmt_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else);

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_MCUMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
