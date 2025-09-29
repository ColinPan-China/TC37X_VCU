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
 *  Filename:           CtAp_TorqModMap_Cal.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TorqModMap_Cal_h_
#define RTW_HEADER_CtAp_TorqModMap_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG;

/*  The desired torque of gradient limit */
extern volatile const uint16_T TorqPahMgmt_DifDesAndActTqTim_CFG;

/*  The desired torque and actual torque error alarm need time */
extern volatile const real32_T TorqPahMgmt_DifDesAndActTq_CFG;

/*  The desired torque and actual torque error alarm value */
extern volatile const real32_T TorqPahMgmt_InvldMotActTq_CFG;

/* Motor invalid desired torque */
extern volatile const real32_T TorqPahMgmt_InvldWhlActTq_CFG;

/* Motor invalid desired torque */
extern volatile const real32_T TorqPahMgmt_MotRednRat_CFG;

/* torque ratio of transmission */
extern volatile const real32_T TorqPahMgmt_MotTrsmEff_CFG;

/* torque losses ratio of transmission */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TorqModMap_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
