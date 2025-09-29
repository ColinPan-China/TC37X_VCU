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
 *  Filename:           CtAp_CoastCtrl_data.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_CoastCtrl
 *  Model Version:      1.82
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 17:23:01 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 16:20:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CoastCtrl.h"

/*  GLOBAL DATA DEFINITIONS */

/* Constant parameters (default storage) */
#define CtAp_CoastCtrl_START_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

const ConstP_CtAp_CoastCtrl_T CtAp_CoastCtrl_ConstP = {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/ChassisMgmt_CoastCtrlHiLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlLoLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlMidLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlOnePedlDesTq_MAP'
   */
  { 19U, 8U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S9>/ChassisMgmt_CoastCtrlHiLvlGainFac_MAP'
   *   '<S9>/ChassisMgmt_CoastCtrlLoLvlGainFac_MAP'
   *   '<S9>/ChassisMgmt_CoastCtrlMidLvlGainFac_MAP'
   */
  { 16U, 10U }
};

#define CtAp_CoastCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
