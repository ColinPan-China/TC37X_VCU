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
 *  Filename:           CtAp_DCFCMgmt_private.h
 *  File Creation Date: 07-Jul-2025
 *  Model Name:         CtAp_DCFCMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:50 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul  7 16:33:09 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 07 16:32:15 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCFCMgmt_private_h_
#define RTW_HEADER_CtAp_DCFCMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_DCFCMgmt.h"
#include "CtAp_DCFCMgmt_types.h"
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

extern boolean_T CtAp_DCFCMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_DC_T
  *CtAp_DCFCMgmt__ARID_DEF_arg);

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

extern void CtAp_DCFCMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_DCFCMgmt_T
  *CtAp_DCFCMgmt__ARID_DEF_arg);

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

extern void CtAp_DCFCMgmt_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else);

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

extern uint8_T CtAp_DCFCMgmt_If1(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_DCFCMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
