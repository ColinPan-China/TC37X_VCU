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
 *  Filename:           CtAp_S2Mgmt_private.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_S2Mgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:46:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:45:06 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_S2Mgmt_private_h_
#define RTW_HEADER_CtAp_S2Mgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_S2Mgmt.h"
#include "CtAp_S2Mgmt_types.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern void CtAp_S2Mgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern void CtAp_S2Mgmt_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_eg0u_T *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern boolean_T CtAp_S2Mgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_S2_T
  *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern void CtAp_S_ATOM_U16ErrorHandle_jbhp(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_dcso_T *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern void CtAp_S_ATOM_U16ErrorHandle_isn5(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_hg5k_T *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

extern void CtAp_S_ATOM_U16ErrorHandle_gkze(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_inzr_T *CtAp_S2Mgmt__ARID_DEF_arg);

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_S2Mgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
