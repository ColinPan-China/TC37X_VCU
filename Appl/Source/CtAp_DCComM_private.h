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
 *  Filename:           CtAp_DCComM_private.h
 *  File Creation Date: 07-Aug-2025
 *  Model Name:         CtAp_DCComM
 *  Model Version:      V1.004
 *  Model Author:       TaoWang - Fri Mar 28 10:42:49 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug  7 18:50:01 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Aug 07 18:47:55 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCComM_private_h_
#define RTW_HEADER_CtAp_DCComM_private_h_
#include "rtwtypes.h"
#include "CtAp_DCComM.h"
#include "CtAp_DCComM_types.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

extern real32_T CtAp_DCComM_ATOM_SignalSend(real32_T rtu_InputSignal, real32_T
  rtu_IresolutionRation, real32_T rtu_offset);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

extern uint16_T CtAp_DCComM_If(boolean_T rtu_if, uint16_T rtu_then, uint16_T
  rtu_else);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

extern real32_T CtAp_DCComM_ATOM_SignalRead(real32_T rtu_InputSignal, real32_T
  rtu_IresolutionRation, real32_T rtu_offset);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

extern void CtAp_DCComM_ATOM_OffDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OffDelay_CtAp_D_T *CtAp_DCComM__ARID_DEF_arg);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

extern boolean_T CtAp_DCComM_ATOM_OffDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OffDelay_CtAp_D_T
  *CtAp_DCComM__ARID_DEF_arg);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_DCComM_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
