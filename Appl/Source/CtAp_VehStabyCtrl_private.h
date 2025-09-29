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
 *  Filename:           CtAp_VehStabyCtrl_private.h
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.55
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 14:22:46 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 14:14:29 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_VehStabyCtrl_private_h_
#define RTW_HEADER_CtAp_VehStabyCtrl_private_h_
#include "rtwtypes.h"
#include "CtAp_VehStabyCtrl_types.h"
#include "CtAp_VehStabyCtrl.h"
#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

extern real32_T CtAp_VehStabyCtrl_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"
#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

extern real32_T CtAp_VehStabyCtrl_If(boolean_T rtu_if, real32_T rtu_then,
  uint8_T rtu_else);

#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"
#endif                             /* RTW_HEADER_CtAp_VehStabyCtrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
