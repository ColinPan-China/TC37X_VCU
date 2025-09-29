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
 *  Filename:           CtAp_ComMErr_private.h
 *  File Creation Date: 21-May-2025
 *  Model Name:         CtAp_ComMErr
 *  Model Version:      3.0.0
 *  Model Author:       Mike Ni - Fri Aug 16 09:50:02 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed May 21 17:16:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed May 21 17:16:38 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ComMErr_private_h_
#define RTW_HEADER_CtAp_ComMErr_private_h_
#include "rtwtypes.h"
#include "CtAp_ComMErr.h"
#include "CtAp_ComMErr_types.h"
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

extern boolean_T CtAp_ComMErr_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Co_T
  *CtAp_ComMErr__ARID_DEF_arg);

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

extern void CtAp_ComMErr_NoEnTimMonR(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes);

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

extern void CtAp_ComMErr_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes);

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_ComMErr_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
