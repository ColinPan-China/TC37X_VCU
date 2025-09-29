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
 *  Filename:           CtAp_CrpCtrl_private.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CrpCtrl_private_h_
#define RTW_HEADER_CtAp_CrpCtrl_private_h_
#include "rtwtypes.h"
#include "CtAp_CrpCtrl.h"
#include "CtAp_CrpCtrl_types.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern void CtAp_CrpCtrl_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern boolean_T CtAp_CrpCtrl_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern real32_T CtAp_CrpCtrl_ATOM_DlyRatRmpLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt, real32_T rtu_delay);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern boolean_T CtAp_CrpCtr_ATOM_EdgeDetectRise(boolean_T rtu_In1,
  ARID_DEF_ATOM_EdgeDetectRise__T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern real32_T CtAp_CrpCtrl_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern void CtAp_CrpCtrl_ATOM_SR_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern boolean_T CtAp_CrpCtrl_ATOM_SR_FF(boolean_T rtu_S, boolean_T rtu_R,
  ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern boolean_T CtAp_CrpCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Cr_T
  *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern real32_T CtAp_CrpCtrl_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

extern real32_T CtAp_CrpCtrl_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_CrpCtrl__ARID_DEF_arg);

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_CrpCtrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
