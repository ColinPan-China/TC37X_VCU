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
 *  Filename:           CtAp_ChrgSdl_data.c
 *  File Creation Date: 22-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu May 22 10:04:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 10:03:15 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgSdl.h"

/*  GLOBAL DATA DEFINITIONS */

/* Constant parameters (default storage) */
#define CtAp_ChrgSdl_START_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

const ConstP_CtAp_ChrgSdl_T CtAp_ChrgSdl_ConstP = {
  /* Computed Parameter: ChrgSdl_CcCurrMax_Map_maxIndex
   * Referenced by: '<S59>/ChrgSdl_CcCurrMax_Map'
   */
  { 4U, 4U },

  /* Computed Parameter: ChrgSdl_CvTimeSecMap_maxIndex
   * Referenced by: '<S60>/ChrgSdl_CvTimeSecMap'
   */
  { 6U, 5U },

  /* Computed Parameter: ChrgSdl_CcStrtTempSOCMap_maxInd
   * Referenced by: '<S31>/ChrgSdl_CcStrtTempSOCMap'
   */
  { 5U, 5U }
};

#define CtAp_ChrgSdl_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
