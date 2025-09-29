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
 *  Filename:           CtAp_VehStabyCtrl_Cal.h
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.56
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 16:16:25 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 16:15:21 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_VehStabyCtrl_Cal_h_
#define RTW_HEADER_CtAp_VehStabyCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_IBSIntvIncMaxTq_CFG;

/* DTC active max torque in gear D/R */
extern volatile const real32_T ChassisMgmt_IBSIntvIncThdTq_CFG;

/* DTC active max threshold torque */
extern volatile const real32_T ChassisMgmt_IBSIntvRednMaxTq_CFG;

/* TCS/VDC max torque */
extern volatile const real32_T ChassisMgmt_IBSIntvRednMinTq_CFG;

/* TCS/VDC min Torque in Gear D */
extern volatile const real32_T ChassisMgmt_IBSIntvRednThdTq_CFG;

/* TCS/VDC active max threshold torque */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_VehStabyCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
