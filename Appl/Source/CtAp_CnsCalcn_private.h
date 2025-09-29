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
 *  Filename:           CtAp_CnsCalcn_private.h
 *  File Creation Date: 03-Apr-2025
 *  Model Name:         CtAp_CnsCalcn
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:10 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr  3 14:30:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Apr 03 14:29:51 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CnsCalcn_private_h_
#define RTW_HEADER_CtAp_CnsCalcn_private_h_
#include "rtwtypes.h"
#include "CtAp_CnsCalcn.h"
#include "CtAp_CnsCalcn_types.h"
#define CtAp_CnsCalcn_START_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

extern real32_T CtAp_CnsCalcn_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_CnsCalcn_STOP_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"
#define CtAp_CnsCalcn_START_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

extern real32_T CtAp_CnsCalcn_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_Cn_T
  *CtAp_CnsCalcn__ARID_DEF_arg);

#define CtAp_CnsCalcn_STOP_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_CnsCalcn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
