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
 *  Filename:           CtAp_BMSMgmt_private.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:26:58 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:26:09 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_BMSMgmt_private_h_
#define RTW_HEADER_CtAp_BMSMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_BMSMgmt.h"
#include "CtAp_BMSMgmt_types.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern boolean_T CtAp_BMSMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_BM_T
  *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoDT_Init(void);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_BMSMgmt_T
  *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoDT_bf2p_Init(void);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoDT_pjnp(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_BMSMg_holk_T
  *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_NoDT_lspv(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_BMSMg_b2ky_T
  *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern uint8_T CtAp_BMSMgmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern boolean_T CtAp_BMSMgmt_If_lssa(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern void CtAp_BMSMgmt_ATOM_OnDelay_Init(real32_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_BM_T *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern boolean_T CtAp_BMSMgmt_ATOM_OnDelay(boolean_T rtu_x, real32_T rtu_tm_dly,
  real32_T rtu_dt, real32_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_BM_T
  *CtAp_BMSMgmt__ARID_DEF_arg);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

extern real32_T CtAp_BMSMgmt_If3(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_BMSMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
