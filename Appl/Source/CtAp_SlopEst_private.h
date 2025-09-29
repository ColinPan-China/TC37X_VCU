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
 *  Filename:           CtAp_SlopEst_private.h
 *  File Creation Date: 13-Sep-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.3.0
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 13 13:01:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Sat Sep 13 13:00:37 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_SlopEst_private_h_
#define RTW_HEADER_CtAp_SlopEst_private_h_
#include "rtwtypes.h"
#include "CtAp_SlopEst.h"
#include "CtAp_SlopEst_types.h"
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

extern real32_T CtAp_SlopEst_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_Sl_T
  *CtAp_SlopEst__ARID_DEF_arg);

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

extern boolean_T CtAp_SlopEst_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T
  *CtAp_SlopEst__ARID_DEF_arg);

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

extern real32_T CtAp_SlopEst_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_S_T
  *CtAp_SlopEst__ARID_DEF_arg);

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_SlopEst_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
