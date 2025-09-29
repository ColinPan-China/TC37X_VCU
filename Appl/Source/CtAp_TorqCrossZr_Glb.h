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
 *  Filename:           CtAp_TorqCrossZr_Glb.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_TorqCrossZr
 *  Model Version:      1.91
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 09:25:22 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 09:22:59 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TorqCrossZr_Glb_h_
#define RTW_HEADER_CtAp_TorqCrossZr_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_TorqCrossZr_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T TorqPahMgmt_DeltaZrCrssTq_Nm;

/* The delta difference between filtered desired primary axle torque and prefiltered desired propulsion torque */
extern real32_T TorqPahMgmt_DesFildTq_Nm;

/* The filtered desired torqueis calculated by a smoothing of prefiltered desired propulsion torque on primary axle in a way that the transition from overrun to pull (and vice versa) is performed as smooth as possible and the approximation of filtered desired primary axle torque to the target value of prefiltered desired propulsion torque on primary axle is made as smooth as possible. */
extern real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegSlopTq_Nm;

/* IBS VLC APS BrakeRengen Torque Negative ramp gradient for zero-transition on primary axle  calculated vale */
extern real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosSlopTq_Nm;

/* IBS VLC APS BrakeRengen Torque  positive ramp gradient for zero-transition on primary axle  calculated vale */
extern real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegSlopTq_Nm;

/* Driving Mode Negative ramp gradient for zero-transition on primary axle  calculated vale */
extern real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosSlopTq_Nm;

/* Driving Mode positive ramp gradient for zero-transition on primary axle  calculated vale */
extern real32_T TorqPahMgmt_GrdtMaxZrCrssDasPosTq_Nm;

/* Driver Assistance System positive ramp gradient for zero-transition on primary axle  calculated vale */
extern real32_T TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm;

/* The maximum negative ramp gradient for zero-transition */
extern real32_T TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm;

/* The maximum positive ramp gradient for zero-transition */
extern real32_T TorqPahMgmt_GrdtReaTarNegTq_Nm;

/* The maximum positive ramp gradient for approximation to target value */
extern real32_T TorqPahMgmt_GrdtReaTarPosTq_Nm;

/* The maximum positive ramp gradient for approximation to target value */
extern real32_T TorqPahMgmt_GrdtZrCrssLmtNegSlopTq_Nm;

/* The maximum Negative ramp gradient for approximation to target value */
extern real32_T TorqPahMgmt_GrdtZrCrssLmtPosSlopTq_Nm;

/* Maximum absolute positive ramp gradient on primary axle. */
#define CtAp_TorqCrossZr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TorqCrossZr_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
