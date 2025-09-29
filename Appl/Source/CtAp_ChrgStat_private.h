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
 *  Filename:           CtAp_ChrgStat_private.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_ChrgStat
 *  Model Version:      1.014
 *  Model Author:       Mike Ni - Fri Aug 16 10:06:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 14:36:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Sep 11 14:35:06 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgStat_private_h_
#define RTW_HEADER_CtAp_ChrgStat_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgStat.h"
#include "CtAp_ChrgStat_types.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp_ChrgStat_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp_ChrgStat_If(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern uint8_T CtAp_ChrgStat_If_bdx1(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp_ChrgStat_ATOM_U32DebAct(boolean_T rtu_In, uint16_T
  rtu_RunStep, uint32_T rtu_CountOnOffMax_CFG, ARID_DEF_ATOM_U32DebAct_CtAp__T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern uint8_T CtAp_ChrgStat_If2(boolean_T rtu_if, uint8_T rtu_then, uint16_T
  rtu_else);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern uint16_T CtAp_ChrgStat_If3(boolean_T rtu_if, uint16_T rtu_then, uint8_T
  rtu_else);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp__ChrMgmt_ChrgStatErrSetCdn(uint16_T
  rtu_ChrMgmt_ChrgSig_Bus);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_NoEnAvoidMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnAvoidMu_CtAp_Chr_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_AvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_ChrgSta_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp_ChrgStat_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T CtAp_C_ChrMgmt_ChrgStatResetCdn(uint8_T rtu_ChrMgmt_ChrgSig_Bus);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_ChrgS_T *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T C_ChrMgmt_ChrgStatResetCdn_brpa(uint8_T rtu_ChrMgmt_ChrgSig_Bus);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_ChrgStat_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern boolean_T ChrMgmt_ChrgStatErrSetCdn_ao4q(uint8_T rtu_ChrMgmt_ChrgSig_Bus,
  boolean_T rtu_ChrMgmt_ChrgSig_Bus_mtzw);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_U32NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint32_T rtu_MatureTime, uint32_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_U32NoDTAndEn_CtAp_Ch_T *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_U32NoDTAvoidMu(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint32_T
  rtu_MatureTime, uint32_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_U32NoDTAvoidMu_CtAp__T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

extern void CtAp_ChrgStat_NoEnableAndTime(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnableAndTime_CtAp_T
  *CtAp_ChrgStat__ARID_DEF_arg);

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_ChrgStat_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
