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
 *  Filename:           CtAp_BrkMgmt_private.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_BrkMgmt
 *  Model Version:      1.144
 *  Model Author:       Mike Ni - Fri Aug 16 09:59:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 09:13:06 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Sep 10 14:51:20 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_BrkMgmt_private_h_
#define RTW_HEADER_CtAp_BrkMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_BrkMgmt.h"
#include "CtAp_BrkMgmt_types.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern void CtAp_BrkMgmt_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern boolean_T CtAp_BrkMgmt_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern boolean_T CtAp_BrkMgmt_ATOM_TimeCnt(boolean_T rtu_In, real32_T
  rtu_RunStep_C, real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Br_T
  *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern real32_T CtAp_BrkMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern boolean_T CtAp_BrkMgmt_ATOM_TimeCnt_dw0o(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_Ct_ihho_T
  *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern void CtAp_BrkMgmt_NoReset_Init(void);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern void CtAp_BrkMgmt_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_BrkMgmt_T *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

extern void CtAp_BrkMgmt_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_BrkMgmt__ARID_DEF_arg);

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_BrkMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
