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
 *  Filename:           CtAp_TorqLmt_private.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.161
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:32:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:31:46 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqLmt_private_h_
#define RTW_HEADER_CtAp_TorqLmt_private_h_
#include "rtwtypes.h"
#include "CtAp_TorqLmt.h"
#include "CtAp_TorqLmt_types.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern void CtAp_TorqLmt_TimerTOff_Init(ARID_DEF_TimerTOff_CtAp_TorqL_T
  *CtAp_TorqLmt__ARID_DEF_arg);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern void CtAp_TorqLmt_TimerTOff(boolean_T rtu_u, uint16_T rtu_Toff, uint16_T
  rtu_dT, ARID_DEF_TimerTOff_CtAp_TorqL_T *CtAp_TorqLmt__ARID_DEF_arg);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern real32_T CtAp_TorqLmt_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_To_T
  *CtAp_TorqLmt__ARID_DEF_arg);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern real32_T CtAp_TorqLmt_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_T_T
  *CtAp_TorqLmt__ARID_DEF_arg);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern real32_T CtAp_TorqLmt_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern real32_T CtAp_TorqLmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern void CtAp_TorqLmt_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

extern void CtAp_TorqLmt_ATOM_RateRampLmt1(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt);

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_TorqLmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
