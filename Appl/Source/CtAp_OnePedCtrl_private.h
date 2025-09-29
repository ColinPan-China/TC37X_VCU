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
 *  Filename:           CtAp_OnePedCtrl_private.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_OnePedCtrl
 *  Model Version:      1.70
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:33 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 17:57:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 17:57:11 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_OnePedCtrl_private_h_
#define RTW_HEADER_CtAp_OnePedCtrl_private_h_
#include "rtwtypes.h"
#include "CtAp_OnePedCtrl_types.h"
#include "CtAp_OnePedCtrl.h"
#define CtAp_OnePedCtrl_START_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"

extern real32_T CtAp_OnePedCtrl_ATOM_SafeDivide(real32_T rtu_num, real32_T
  rtu_den, real32_T rtu_eps);

#define CtAp_OnePedCtrl_STOP_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_OnePedCtrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
