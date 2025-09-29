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
 *  Filename:           CtAp_FltReactn_private.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.2.2
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:22:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:20:16 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FltReactn_private_h_
#define RTW_HEADER_CtAp_FltReactn_private_h_
#include "rtwtypes.h"
#include "CtAp_FltReactn.h"
#include "CtAp_FltReactn_types.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReact_ATOM_TimeCnt_Init(ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReac_ATOM_TimeCnt_Reset(ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern boolean_T CtAp_FltReactn_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReact_DetectChange_Init(ARID_DEF_DetectChange_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReac_DetectChange_Reset(ARID_DEF_DetectChange_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern boolean_T CtAp_FltReactn_DetectChange(uint8_T rtu_U,
  ARID_DEF_DetectChange_CtAp_Fl_T *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReactn_ErrDlyCfm_Init(ARID_DEF_ErrDlyCfm_CtAp_FltRe_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern void CtAp_FltReactn_ErrDlyCfm_Reset(ARID_DEF_ErrDlyCfm_CtAp_FltRe_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern boolean_T CtAp_FltReactn_ErrDlyCfm(uint8_T rtu_In,
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

extern boolean_T CtAp_FltReactn_ATOM_U32TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint32_T rtu_MaxTime_C, ARID_DEF_ATOM_U32TimeCnt_CtAp_T
  *CtAp_FltReactn__ARID_DEF_arg);

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"
#endif                                /* RTW_HEADER_CtAp_FltReactn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
