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
 *  Filename:           CtAp_RngEstimn_private.h
 *  File Creation Date: 08-Aug-2025
 *  Model Name:         CtAp_RngEstimn
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:48 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  8 09:14:18 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 08 09:13:21 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_RngEstimn_private_h_
#define RTW_HEADER_CtAp_RngEstimn_private_h_
#include "rtwtypes.h"
#include "CtAp_RngEstimn.h"
#include "CtAp_RngEstimn_types.h"
#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

extern void CtAp_RngEstimn_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_RngE_T *CtAp_RngEstimn__ARID_DEF_arg);

#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"
#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

extern boolean_T CtAp_RngEstimn_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_RngE_T *CtAp_RngEstimn__ARID_DEF_arg);

#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"
#endif                                /* RTW_HEADER_CtAp_RngEstimn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
