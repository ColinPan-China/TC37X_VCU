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
 *  Filename:           CtAp_ResEst_private.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:46:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:45:41 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ResEst_private_h_
#define RTW_HEADER_CtAp_ResEst_private_h_
#include "rtwtypes.h"
#include "CtAp_ResEst_types.h"
#include "CtAp_ResEst.h"
#define CtAp_ResEst_START_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

extern real32_T CtAp_ResEst_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps);

#define CtAp_ResEst_STOP_SEC_CODE
#include "CtAp_ResEst_MemMap.h"
#define CtAp_ResEst_START_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

extern real32_T CtAp_ResEst_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_ResEst_STOP_SEC_CODE
#include "CtAp_ResEst_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_ResEst_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
