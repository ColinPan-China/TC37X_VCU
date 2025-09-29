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
 *  Filename:           CtAp_TorqCoor_Cal.h
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TorqCoor_Cal_h_
#define RTW_HEADER_CtAp_TorqCoor_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T TorqPahMgmt_GrdTqCoorrMaxNegTq_CFG;

/* No esp interventions filter negative ramp */
extern volatile const real32_T TorqPahMgmt_GrdTqCoorrMaxPosTq_CFG;

/* No esp interventions filter postive ramp */
extern volatile const real32_T TorqPahMgmt_GrdtTqCoorrNegTqX_LUT[10];

/* ESP interventions Exit filter negative ramp LUT */
extern volatile const real32_T TorqPahMgmt_GrdtTqCoorrNegTq_LUT[10];

/* ESP interventions Exit filter negative ramp LUT */
extern volatile const real32_T TorqPahMgmt_GrdtTqCoorrPosTqX_LUT[8];

/* ESP interventions Exit filter postive ramp LUT */
extern volatile const real32_T TorqPahMgmt_GrdtTqCoorrPosTq_LUT[8];

/* ESP interventions Exit filter postive ramp LUT */
extern volatile const real32_T TorqPahMgmt_IBSIntvGrdtSlopNegTq_CFG;

/* esp interventions filter negative ramp */
extern volatile const real32_T TorqPahMgmt_IBSIntvGrdtSlopPosTq_CFG;

/* esp interventions filter postive ramp */
extern volatile const real32_T TorqPahMgmt_TqCoorrRampStsThdTq_CFG;

/* if delta toruqe TorqPahMgmt_DesCoorrDeltaTq_Nm less than this value will Exit filter */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TorqCoor_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
