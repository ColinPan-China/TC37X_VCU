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
 *  Filename:           CtAp_SpdLmt_private.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_SpdLmt_private_h_
#define RTW_HEADER_CtAp_SpdLmt_private_h_
#include "rtwtypes.h"
#include "CtAp_SpdLmt_types.h"
#include "CtAp_SpdLmt.h"
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

extern uint8_T CtAp_SpdLmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

extern real32_T CtAp_SpdLmt_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

extern void CtAp_SpdLmt_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt);

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

extern void CtAp_SpdLmt_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C);

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_SpdLmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
