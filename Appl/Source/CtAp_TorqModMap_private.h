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
 *  Filename:           CtAp_TorqModMap_private.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqModMap_private_h_
#define RTW_HEADER_CtAp_TorqModMap_private_h_
#include "rtwtypes.h"
#include "CtAp_TorqModMap.h"
#include "CtAp_TorqModMap_types.h"
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

extern boolean_T CtAp_TorqModMap_ATOM_TimeCnt(boolean_T rtu_In, uint8_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_To_T
  *CtAp_TorqModMap__ARID_DEF_arg);

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

extern real32_T CtAp_TorqModMap_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

extern real32_T CtAp_TorqModM_ATOM_DlyRatRmpLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt, real32_T rtu_delay);

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_TorqModMap_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
