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
 *  Filename:           CtAp_AccCal_private.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:40:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:39:42 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_AccCal_private_h_
#define RTW_HEADER_CtAp_AccCal_private_h_
#include "rtwtypes.h"
#include "CtAp_AccCal.h"
#include "CtAp_AccCal_types.h"
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

extern void CtAp_AccCal_ATOM_SingleLPF_Init(ARID_DEF_ATOM_SingleLPF_CtAp__T
  *CtAp_AccCal__ARID_DEF_arg);

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

extern void CtAp_AccCa_ATOM_SingleLPF_Reset(ARID_DEF_ATOM_SingleLPF_CtAp__T
  *CtAp_AccCal__ARID_DEF_arg);

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

extern real32_T CtAp_AccCal_ATOM_SingleLPF(real32_T rtu_u, real32_T rtu_tc,
  real32_T rtu_dt, ARID_DEF_ATOM_SingleLPF_CtAp__T *CtAp_AccCal__ARID_DEF_arg);

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_AccCal_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
