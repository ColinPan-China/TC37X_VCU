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
 *  Filename:           CtAp_OBCStsMgmt_private.h
 *  File Creation Date: 04-Aug-2025
 *  Model Name:         CtAp_OBCStsMgmt
 *  Model Version:      1.007
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug  4 09:30:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 10:46:19 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_OBCStsMgmt_private_h_
#define RTW_HEADER_CtAp_OBCStsMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_OBCStsMgmt.h"
#include "CtAp_OBCStsMgmt_types.h"
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

extern void CtAp_OBCStsMgmt_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_OBCSt_T *CtAp_OBCStsMgmt__ARID_DEF_arg);

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

extern void CtAp_OBCStsMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_OBCStsMgmt_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg);

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

extern boolean_T CtAp_OBCStsMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_OB_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg);

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

extern void CtAp_OBCStsMgmt_NoEnable(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnable_CtAp_OBCSts_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg);

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

extern void CtAp_OBCStsMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_OBCStsMgmt__ARID_DEF_arg);

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_OBCStsMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
