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
 *  Filename:           CtAp_ChrgSdl_private.h
 *  File Creation Date: 22-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu May 22 10:04:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 10:03:15 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgSdl_private_h_
#define RTW_HEADER_CtAp_ChrgSdl_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgSdl.h"
#include "CtAp_ChrgSdl_types.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern uint16_T CtAp_ChrgSdl_If(boolean_T rtu_if, uint16_T rtu_then, uint16_T
  rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern void CtAp_ChrgSdl_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSdl__ARID_DEF_arg);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern boolean_T CtAp_ChrgSdl_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint8_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgSdl__ARID_DEF_arg);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern uint16_T CtAp_ChrgSdl_If_ctk5(boolean_T rtu_if, uint16_T rtu_then,
  real32_T rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern real32_T CtAp_ChrgSdl_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern real32_T CtAp_ChrgSdl_If_omfw(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern uint8_T CtAp_ChrgSdl_If1(boolean_T rtu_if, uint8_T rtu_then, real32_T
  rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern uint8_T CtAp_ChrgSdl_If_hkuy(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

extern real32_T CtAp_ChrgSdl_If_fjuu(boolean_T rtu_if, real32_T rtu_then,
  uint8_T rtu_else);

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_ChrgSdl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
