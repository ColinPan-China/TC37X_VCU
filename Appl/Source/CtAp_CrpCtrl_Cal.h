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
 *  Filename:           CtAp_CrpCtrl_Cal.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_CrpCtrl_Cal_h_
#define RTW_HEADER_CtAp_CrpCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T ChassisMgmt_CrpCtrlActvStdlMaxTim_CFG;

/* CtAp_CrpCtrl mode zero vehicle speed max time */
extern volatile const real32_T ChassisMgmt_CrpCtrlActvStdlMotSpd_CFG;

/* creep control  Active status bypass value */
extern volatile const boolean_T ChassisMgmt_CrpCtrlActvStdlSpdSelect_CFG;

/* creep control  standstill status bypass switch select mot speed or vehicle speed
   1:Motor Speed 0:Vehicle Speed */
extern volatile const real32_T ChassisMgmt_CrpCtrlActvStdlSpd_CFG;

/* CtAp_CrpCtrl mode standstill status vehicle speed */
extern volatile const real32_T ChassisMgmt_CrpCtrlActvStdlTq_CFG;

/* CtAp_CrpCtrl mode zero vehicle Allow Torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlAllwdMaxBrkPushrodStk_CFG;

/* creep control Allowed Max brake pedal Brake Pushrod Stroke */
extern volatile const real32_T ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG;

/* creep control Allowed Max brake pedal Plunger Pressure */
extern volatile const real32_T ChassisMgmt_CrpCtrlAllwdVehSpdThdOff_CFG;

/* creep control Allowed Max vehicle speed Threshold */
extern volatile const real32_T ChassisMgmt_CrpCtrlAllwdVehSpdThdOn_CFG;

/* creep control Allowed Max vehicle speed Threshold */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesFbTqX_MAP[6];

/* creep control feedback torque lookup table X asix */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesFbTqY_MAP[12];

/* creep control feedback torque lookup table Y asix */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesFbTq_MAP[72];

/* creep control feedback torque lookup table  */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesFwdVehSpdX_LUT[4];

/* creep control desired forward vehcile speed lookup table X axis */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesFwdVehSpd_LUT[4];

/* creep control desired forward vehcile speed lookup table values */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesPidKiTqX_LUT[10];

/* creep control Desired Pid Ki toruqe lookcup table X asix */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesPidKiTq_LUT[10];

/* creep control Desired Pid Ki toruqe lookcup table value */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesPidKpTqX_LUT[10];

/* creep control Desired Pid Kp toruqe lookcup table X asix */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesPidKpTq_LUT[10];

/* creep control Desired Pid Kp toruqe lookcup table value */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesRvsFbTq_MAP[72];

/* creep control feedback torque lookup table  */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesRvsPidKiTq_LUT[10];

/* creep control Desired Pid Ki toruqe lookcup table value */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesRvsPidKpTq_LUT[10];

/* creep control Desired Pid Kp toruqe lookcup table value */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesRvsVehSpdX_LUT[4];

/* creep control desired reverse vehcile speed lookup table X axis */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesRvsVehSpd_LUT[4];

/* creep control desired reverse vehcile speed lookup table values */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesSteerGearAgTqX_LUT[11];

/* creep control desired EPS steering gear angle Troque lookup table X axis */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesSteerGearAgTq_LUT[11];

/* creep control desired EPS steering gear angle Troque lookup table X axis */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesTqMax_CFG;

/* creep control desired max torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesTqMin_CFG;

/* creep control desired min torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesVehSpdGrdtNeg_CFG;

/* creep control demand  vehcile speed gradient negtive value */
extern volatile const real32_T ChassisMgmt_CrpCtrlDesVehSpdGrdtPos_CFG;

/* creep control demand  vehcile speed gradient postive value */
extern volatile const real32_T ChassisMgmt_CrpCtrlInActvTq_CFG;

/* CtAp_CrpCtrl mode inactive torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlMotToothTq_CFG;

/* creep control accr pedal grather creep torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidKiTqMax_CFG;

/* creep control Pid max torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidKiTqMin_CFG;

/* creep control Pid min torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidKpTqGrdtNeg_CFG;

/* creep control Pid Kp Torque positive gradient */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidKpTqGrdtPos_CFG;

/* creep control Pid Kp Torque negative gradient */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidTqMax_CFG;

/* creep control Pid max torque */
extern volatile const real32_T ChassisMgmt_CrpCtrlPidTqMin_CFG;

/* creep control Pid min torque */
extern volatile const boolean_T ChassisMgmt_CrpCtrlSteerGearAgTqEna_CFG;

/* creep control desired EPS steering gear angle Enable */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_CrpCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
