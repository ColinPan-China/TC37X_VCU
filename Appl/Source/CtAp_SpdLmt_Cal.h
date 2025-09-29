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
 *  Filename:           CtAp_SpdLmt_Cal.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_SpdLmt_Cal_h_
#define RTW_HEADER_CtAp_SpdLmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint8_T TorqPahMgmt_DftFwdMaxSpd2GearD_CFG;

/* default init set max vehicle speed in Gear D */
extern volatile const uint8_T TorqPahMgmt_DftFwdMaxSpd3GearD_CFG;

/* default init set max vehicle speed in Gear D */
extern volatile const uint8_T TorqPahMgmt_DftFwdMaxSpdGearD_CFG;

/* default init set max vehicle speed in Gear D */
extern volatile const real32_T TorqPahMgmt_DftFwdMaxSpdGearR_CFG;

/* default init set max vehicle speed in Gear R */
extern volatile const real32_T TorqPahMgmt_FwdMaxVehSpdDifSca_CFG;

/* softwar max limit speed error value  */
extern volatile const real32_T TorqPahMgmt_FwdMaxVehSpdDif_CFG;

/* softwar max limit speed error value */
extern volatile const real32_T TorqPahMgmt_GrdtMaxVehSpdNeg_CFG;

/* Vehicle set speed  filter negative gradient step size */
extern volatile const real32_T TorqPahMgmt_GrdtMaxVehSpdPos_CFG;

/* Vehicle set speed  filter positive gradient step size */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTqX_MAP[14];

/* Max vehcile speed feedback control lookup table x Asix */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTqY_MAP[18];

/* Max vehcile speed feedback control lookup table y Asix */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTq_MAP[252];

/* Max vehcile speed feedback control lookup table */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKiTqMax_CFG;

/* Max Limit Speed PID control Kp max torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKiTqMin_CFG;

/* Max Limit Speed PID control Kp min torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKpTqMax_CFG;

/* Max Limit Speed PID control Kp max torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKpTqMin_CFG;

/* Max Limit Speed PID control Kp min torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidTqMax_CFG;

/* Max Limit Speed PID control  max torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidTqMin_CFG;

/* Max Limit Speed PID control min torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG;

/* Max vehcile speed bound error less than this value start Limit status */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKiX_LUT[14];

/* Max Limit Speed PID control Ki factor lookup table x axis */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKi_LUT[14];

/* Max Limit Speed PID control Ki factor lookup table */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKpX_LUT[14];

/* Max Limit Speed PID control Kp factor lookup table x axis */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKp_LUT[14];

/* Max Limit Speed PID control Kp factor lookup table */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdTqMax_CFG;

/* Max Limit Speed PID control  max torque */
extern volatile const real32_T TorqPahMgmt_MaxVehSpdTqMin_CFG;

/* Max Limit Speed PID control  max torque */
extern volatile const real32_T TorqPahMgmt_VehSpdFilTim_CFG;

/* Vehicle speed  filter time factor */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_SpdLmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
