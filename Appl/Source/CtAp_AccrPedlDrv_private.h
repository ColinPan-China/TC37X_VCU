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
 *  Filename:           CtAp_AccrPedlDrv_private.h
 *  File Creation Date: 10-Sep-2025
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.59
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep 10 14:56:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 09:44:43 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_AccrPedlDrv_private_h_
#define RTW_HEADER_CtAp_AccrPedlDrv_private_h_
#include "rtwtypes.h"
#include "CtAp_AccrPedlDrv.h"
#include "CtAp_AccrPedlDrv_types.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern real32_T CtAp_AccrPedlDrv_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern real32_T CtAp_AccrPedlDrv_If(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern void CtAp_AccrPedlDr_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Accr_T *CtAp_AccrPedlDrv__ARID_DEF_arg);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern boolean_T CtAp_AccrPedlDrv_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Accr_T *CtAp_AccrPedlDrv__ARID_DEF_arg);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern real32_T CtAp_AccrPedlDrv_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_A_T
  *CtAp_AccrPedlDrv__ARID_DEF_arg);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

extern void CtAp_AccrPedlDrv_If_mzvr(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_AccrPedlDrv_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
