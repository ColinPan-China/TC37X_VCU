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
 *  Filename:           CtAp_VehSpd_private.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:28:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:27:16 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_VehSpd_private_h_
#define RTW_HEADER_CtAp_VehSpd_private_h_
#include "rtwtypes.h"
#include "CtAp_VehSpd.h"
#include "CtAp_VehSpd_types.h"
#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

extern real32_T CtAp_VehSpd_ATOM_SingleLPF(real32_T rtu_u, real32_T rtu_tc,
  real32_T rtu_dt, ARID_DEF_ATOM_SingleLPF_CtAp__T *CtAp_VehSpd__ARID_DEF_arg);

#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"
#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

extern boolean_T CtAp_VehSpd_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ve_T
  *CtAp_VehSpd__ARID_DEF_arg);

#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_VehSpd_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
