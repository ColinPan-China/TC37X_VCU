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
 *  Filename:           CtAp_TrsmProtd_private.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.45
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:53:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:52:53 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TrsmProtd_private_h_
#define RTW_HEADER_CtAp_TrsmProtd_private_h_
#include "rtwtypes.h"
#include "CtAp_TrsmProtd.h"
#include "CtAp_TrsmProtd_types.h"
#define CtAp_TrsmProtd_START_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

extern void CtAp_TrsmProtd_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T *CtAp_TrsmProtd__ARID_DEF_arg);

#define CtAp_TrsmProtd_STOP_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"
#define CtAp_TrsmProtd_START_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

extern boolean_T CtAp_TrsmProtd_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T *CtAp_TrsmProtd__ARID_DEF_arg);

#define CtAp_TrsmProtd_STOP_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"
#endif                                /* RTW_HEADER_CtAp_TrsmProtd_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
