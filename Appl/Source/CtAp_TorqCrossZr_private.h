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
 *  Filename:           CtAp_TorqCrossZr_private.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_TorqCrossZr
 *  Model Version:      1.91
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 09:25:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 09:22:59 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqCrossZr_private_h_
#define RTW_HEADER_CtAp_TorqCrossZr_private_h_
#include "rtwtypes.h"
#include "CtAp_TorqCrossZr.h"
#include "CtAp_TorqCrossZr_types.h"
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

extern void CtAp_TorqCrossZr_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

extern real32_T CtAp_TorqCross_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_TorqCrossZr__ARID_DEF_arg);

#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_TorqCrossZr_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
