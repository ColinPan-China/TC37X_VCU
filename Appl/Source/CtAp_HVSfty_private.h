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
 *  Filename:           CtAp_HVSfty_private.h
 *  File Creation Date: 29-Oct-2024
 *  Model Name:         CtAp_HVSfty
 *  Model Version:      1.79
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:53 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Oct 29 13:30:42 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Tue Oct 29 13:29:10 2024
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_HVSfty_private_h_
#define RTW_HEADER_CtAp_HVSfty_private_h_
#include "rtwtypes.h"
#include "CtAp_HVSfty.h"
#include "CtAp_HVSfty_types.h"
#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

extern void CtAp_HVSfty_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_HVSfty__ARID_DEF_arg);

#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"
#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

extern boolean_T CtAp_HVSfty_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_HV_T
  *CtAp_HVSfty__ARID_DEF_arg);

#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_HVSfty_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
