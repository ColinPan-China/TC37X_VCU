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
 *  Filename:           CtAp_TorqFil_private.h
 *  File Creation Date: 29-Oct-2024
 *  Model Name:         CtAp_TorqFil
 *  Model Version:      1.27
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:25 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Oct 29 17:25:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Sep 22 13:54:38 2024
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqFil_private_h_
#define RTW_HEADER_CtAp_TorqFil_private_h_
#include "rtwtypes.h"
#include "CtAp_TorqFil.h"
#include "CtAp_TorqFil_types.h"
#define CtAp_TorqFil_START_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

extern real32_T CtAp_TorqFil_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_TorqFil_STOP_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"
#define CtAp_TorqFil_START_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

extern real32_T CtAp_TorqFil_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_T_T
  *CtAp_TorqFil__ARID_DEF_arg);

#define CtAp_TorqFil_STOP_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_TorqFil_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
