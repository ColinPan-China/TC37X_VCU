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
 *  Filename:           CtAp_ChrgEgyCal_private.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ChrgEgyCal
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 17:27:21 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 17:26:49 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgEgyCal_private_h_
#define RTW_HEADER_CtAp_ChrgEgyCal_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgEgyCal.h"
#include "CtAp_ChrgEgyCal_types.h"
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

extern real32_T CtAp_ChrgEgyCal_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else);

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

extern void CtAp_ChrgEgyC_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgEgyCal__ARID_DEF_arg);

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

extern boolean_T CtAp_ChrgEgyCal_ATOM_OnDelay(boolean_T rtu_x, uint16_T
  rtu_tm_dly, uint16_T rtu_dt, uint8_T rtu_ClearValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgEgyCal__ARID_DEF_arg);

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"
#endif                               /* RTW_HEADER_CtAp_ChrgEgyCal_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
