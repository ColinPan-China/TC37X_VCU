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
 *  Filename:           CtAp_SlopEst_Cal.h
 *  File Creation Date: 01-Aug-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.2.0Test
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  1 16:23:14 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Aug 01 16:22:35 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_SlopEst_Cal_h_
#define RTW_HEADER_CtAp_SlopEst_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T SlopEst_BrakeSpdEnable_CFG;

/* Vehicle mass */
extern volatile const boolean_T SlopEst_EnableEntZero_CFG;
extern volatile const uint16_T SlopEst_EntZeroSlopTime_CFG;
extern volatile const real32_T SlopEst_ExitZeroSlop_CFG;
extern volatile const real32_T SlopEst_GAcclr_CFG;

/* Vehicle mass */
extern volatile const uint16_T SlopEst_LgtAAcclrEnbTim_CFG;
extern volatile const real32_T SlopEst_LgtAAcclrEnb_CFG;
extern volatile const real32_T SlopEst_Limit_CFG;

/* Vehicle mass */
extern volatile const uint16_T SlopEst_RemainDly_CFG;
extern volatile const uint16_T SlopEst_Remain_CFG;
extern volatile const uint8_T SlopEst_VCUAcclrDlyEnb_CFG;
extern volatile const real32_T SlopEst_VCUAcclrEnb1_CFG;
extern volatile const real32_T SlopEst_VCUAcclrEnb2_CFG;
extern volatile const uint16_T SlopEst_VCUAcclrEnbTime_CFG;
extern volatile const real32_T SlopRes_EntZeroSlop_CFG;
extern volatile const real32_T SlopRes_MaxSlop_CFG;

/* Maximum allowable output slope */
extern volatile const real32_T SlopRes_MinSlop_CFG;

/* Maximum allowable output slope */
extern volatile const real32_T SlopRes_ReleaseTrigger_CFG;
extern volatile const real32_T SlopRes_RemainRealTrigger_CFG;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_SlopEst_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
