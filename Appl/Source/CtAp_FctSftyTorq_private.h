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
 *  Filename:           CtAp_FctSftyTorq_private.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FctSftyTorq_private_h_
#define RTW_HEADER_CtAp_FctSftyTorq_private_h_
#include "rtwtypes.h"
#include "CtAp_FctSftyTorq.h"
#include "CtAp_FctSftyTorq_types.h"
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

extern boolean_T CtAp_FctSftyTorq_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T
  *CtAp_FctSftyTorq__ARID_DEF_arg);

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

extern void CtAp_FctSftyTorq_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoReset_CtAp_FctSfty_T *CtAp_FctSftyTorq__ARID_DEF_arg);

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

extern void CtAp_FctSftyTo_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_FctSftyTorq__ARID_DEF_arg);

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

extern void CtAp_FctSftyTorq_NoReset_e10u(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt,
  boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Fc_nsaz_T *CtAp_FctSftyTorq__ARID_DEF_arg);

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

extern void CtAp_FctSftyTorq_NoReset_gcck(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt,
  boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Fc_a3io_T *CtAp_FctSftyTorq__ARID_DEF_arg);

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_FctSftyTorq_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
