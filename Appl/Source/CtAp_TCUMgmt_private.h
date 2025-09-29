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
 *  Filename:           CtAp_TCUMgmt_private.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_TCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:37 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:38:14 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:25:48 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TCUMgmt_private_h_
#define RTW_HEADER_CtAp_TCUMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_TCUMgmt.h"
#include "CtAp_TCUMgmt_types.h"
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

extern boolean_T CtAp_TCUMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_TC_T
  *CtAp_TCUMgmt__ARID_DEF_arg);

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

extern void CtAp_TCUMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_TCUMgmt__ARID_DEF_arg);

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

extern uint8_T CtAp_TCUMgmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_TCUMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
