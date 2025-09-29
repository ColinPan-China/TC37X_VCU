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
 *  Filename:           CtAp_DCParMgmt_private.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_DCParMgmt
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:23 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:05:59 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue Jul 29 13:40:04 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCParMgmt_private_h_
#define RTW_HEADER_CtAp_DCParMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_DCParMgmt_types.h"
#include "CtAp_DCParMgmt.h"
#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

extern real32_T CtAp_DCParMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"
#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

extern real32_T CtAp_DCParMgmt_ATOM_SafeDivide(real32_T rtu_num, real32_T
  rtu_den, real32_T rtu_eps);

#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"
#endif                                /* RTW_HEADER_CtAp_DCParMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
