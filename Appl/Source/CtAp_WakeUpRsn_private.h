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
 *  Filename:           CtAp_WakeUpRsn_private.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_WakeUpRsn_private_h_
#define RTW_HEADER_CtAp_WakeUpRsn_private_h_
#include "rtwtypes.h"
#include "CtAp_WakeUpRsn.h"
#include "CtAp_WakeUpRsn_types.h"
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

extern uint8_T CtAp_WakeUpRsn_ATOM_U8BitSet(boolean_T rtu_Bit0, boolean_T
  rtu_Bit1, boolean_T rtu_Bit2, boolean_T rtu_Bit3, boolean_T rtu_Bit4,
  boolean_T rtu_Bit5, boolean_T rtu_Bit6, boolean_T rtu_Bit7);

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

extern boolean_T CtAp_WakeUpRsn_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Wa_T
  *CtAp_WakeUpRsn__ARID_DEF_arg);

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

extern boolean_T CtAp_WakeUpRsn_ATOM_U8BitDecode(uint8_T rtu_BitInp, uint8_T
  rtu_Bitx);

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

extern boolean_T CtAp_WakeUpRsn_If(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"
#endif                                /* RTW_HEADER_CtAp_WakeUpRsn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
