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
 *  Filename:           CtAp_TorqCoor_private.h
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqCoor_private_h_
#define RTW_HEADER_CtAp_TorqCoor_private_h_
#include "rtwtypes.h"
#include "CtAp_TorqCoor.h"
#include "CtAp_TorqCoor_types.h"
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

extern boolean_T CtAp_TorqCo_ATOM_EdgeDetectFall(boolean_T rtu_In1,
  ARID_DEF_ATOM_EdgeDetectFall__T *CtAp_TorqCoor__ARID_DEF_arg);

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

extern void CtAp_TorqCoor_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Torq_T *CtAp_TorqCoor__ARID_DEF_arg);

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

extern boolean_T CtAp_TorqCoor_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Torq_T *CtAp_TorqCoor__ARID_DEF_arg);

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

extern void CtAp_TorqCoor_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

extern real32_T CtAp_TorqCoor_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_TorqCoor__ARID_DEF_arg);

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_TorqCoor_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
