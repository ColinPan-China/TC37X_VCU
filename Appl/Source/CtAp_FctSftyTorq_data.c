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
 *  Filename:           CtAp_FctSftyTorq_data.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyTorq.h"

/*  GLOBAL DATA DEFINITIONS */

/* Constant parameters (default storage) */
#define CtAp_FctSftyTorq_START_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

const ConstP_CtAp_FctSftyTorq_T CtAp_FctSftyTorq_ConstP = {
  /* Computed Parameter: FctSftyMon_AccrPedlLmtRvsMinTq_
   * Referenced by: '<S34>/FctSftyMon_AccrPedlLmtRvsMinTq_LUT'
   */
  { 2U, 10U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqEco_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqNor_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqSpt_MAP'
   */
  { 5U, 10U }
};

#define CtAp_FctSftyTorq_STOP_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
