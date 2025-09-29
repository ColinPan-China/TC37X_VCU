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
 *  Filename:           CtAp_AccrPedlDrv_Cal.h
 *  File Creation Date: 18-Aug-2025
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.57
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug 18 18:08:29 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Aug 18 18:06:08 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_AccrPedlDrv_Cal_h_
#define RTW_HEADER_CtAp_AccrPedlDrv_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvDesTqMax_CFG;

/* driver desired torque upper limit */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvDesTqMin_CFG;

/* driver desired torque lower limit */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModEcoDesTq_MAP[320];

/* ECO mode needs drive torque */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModLpfTim_CFG;

/* Drive mode not switch torque filter Coeffecent time */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModNormDesTq_MAP[320];

/* Normal mode needs drive torque */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModOPDesTq_MAP[320];

/* Onepedal mode needs drive torque */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModReqTqGearDX_MAP[16];

/* Acceleration pedal position */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModReqTqGearDY_MAP[20];

/* Driver desired vehicle speed in gear D */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModReqTqGearRX_MAP[16];

/* Acceleration pedal position */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModReqTqGearRY_MAP[20];

/* Driver desired vehicle speed in gear R */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModReqTqGearR_MAP[320];

/* driver needs drive torque in gear R */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModSptDesTq_MAP[320];

/* Sport mode needs drive torque */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModSwtDifTqX_LUT[7];

/* Driver mode switch torque filter difference lookup table x asix */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModSwtLpfActvDifTq_CFG;

/* driver desired torque difference */
extern volatile const real32_T ChassisMgmt_AccrPedlDrvModSwtTqLpfTim_LUT[7];

/* Driver mode switch torque filter difference lookup table y asix */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_AccrPedlDrv_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
