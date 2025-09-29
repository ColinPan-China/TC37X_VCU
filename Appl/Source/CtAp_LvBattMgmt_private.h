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
 *  Filename:           CtAp_LvBattMgmt_private.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_LvBattMgmt_private_h_
#define RTW_HEADER_CtAp_LvBattMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_LvBattMgmt.h"
#include "CtAp_LvBattMgmt_types.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern void CtAp_LvBattMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_LvBattMgmt__ARID_DEF_arg);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern boolean_T CtAp_LvBattMgmt_ActiveTimCnt(uint16_T rtu_RunStep_C, uint16_T
  rtu_MaxTime_C, ARID_DEF_ActiveTimCnt_CtAp_Lv_T *CtAp_LvBattMgmt__ARID_DEF_arg);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern void CtAp_LvBattMgmt_NoTime(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_NoTime_CtAp_LvBattMg_T *CtAp_LvBattMgmt__ARID_DEF_arg);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern boolean_T CtAp_LvBattMgmt_If(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern real32_T CtAp_LvBattMgmt_If3(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

extern uint8_T CtAp_LvBattMgmt_If_bsvd(boolean_T rtu_if, uint8_T rtu_then,
  uint8_T rtu_else);

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_LvBattMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
