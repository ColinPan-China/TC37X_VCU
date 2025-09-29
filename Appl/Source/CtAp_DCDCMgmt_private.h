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
 *  Filename:           CtAp_DCDCMgmt_private.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DCDCMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       ATOM-HyacinthGe - Thu Aug 29 14:06:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:31:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:30:10 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCDCMgmt_private_h_
#define RTW_HEADER_CtAp_DCDCMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_DCDCMgmt.h"
#include "CtAp_DCDCMgmt_types.h"
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

extern real32_T CtAp_DCDCMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

extern boolean_T CtAp_DCDCMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_DC_T
  *CtAp_DCDCMgmt__ARID_DEF_arg);

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

extern uint8_T CtAp_DCDCMgmt_If1(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

extern void CtAp_DCDCMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_DCDCMgmt__ARID_DEF_arg);

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_DCDCMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
