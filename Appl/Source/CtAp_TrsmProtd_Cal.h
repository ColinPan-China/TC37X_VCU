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
 *  Filename:           CtAp_TrsmProtd_Cal.h
 *  File Creation Date: 27-Mar-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.40
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Mar 27 15:19:22 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Mar 27 15:00:27 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TrsmProtd_Cal_h_
#define RTW_HEADER_CtAp_TrsmProtd_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T TorqPahMgmt_TramProtdDiffMaxSpd_CFG;

/* when ibs RL and RR speed diff over this speed ,teh Motor Differential Protection Active */
extern volatile const real32_T TorqPahMgmt_TramProtdDiffMinSpd_CFG;

/* when ibs RL and RR speed diff less than this speed ,teh Motor Differential Protection Active */
extern volatile const real32_T TorqPahMgmt_TramProtdLmtDftMaxTq_CFG;

/* Motor Differential Protection default max torque */
extern volatile const real32_T TorqPahMgmt_TramProtdLmtDftMinTq_CFG;

/* Motor Differential Protection default min torque */
extern volatile const real32_T TorqPahMgmt_TramProtdLmtMaxTq_CFG;

/* Motor Differential Protection Limit max torque */
extern volatile const real32_T TorqPahMgmt_TramProtdLmtMinTq_CFG;

/* Motor Differential Protection Limit max torque */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TrsmProtd_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
