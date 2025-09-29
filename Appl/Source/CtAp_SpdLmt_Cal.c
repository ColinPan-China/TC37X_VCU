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
 *  Filename:           CtAp_SpdLmt_Cal.c
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_SpdLmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_SpdLmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint8_T TorqPahMgmt_DftFwdMaxSpd2GearD_CFG = 150U;
                              /* default init set max vehicle speed in Gear D */
volatile const uint8_T TorqPahMgmt_DftFwdMaxSpd3GearD_CFG = 130U;
                              /* default init set max vehicle speed in Gear D */
volatile const uint8_T TorqPahMgmt_DftFwdMaxSpdGearD_CFG = 170U;
                              /* default init set max vehicle speed in Gear D */
volatile const real32_T TorqPahMgmt_DftFwdMaxSpdGearR_CFG = 50.0F;
                              /* default init set max vehicle speed in Gear R */
volatile const real32_T TorqPahMgmt_FwdMaxVehSpdDifSca_CFG = 1.0F;
                                      /* softwar max limit speed error value  */
volatile const real32_T TorqPahMgmt_FwdMaxVehSpdDif_CFG = 0.0F;/* softwar max limit speed error value */
volatile const real32_T TorqPahMgmt_GrdtMaxVehSpdNeg_CFG = 200.0F;
                     /* Vehicle set speed  filter negative gradient step size */
volatile const real32_T TorqPahMgmt_GrdtMaxVehSpdPos_CFG = 200.0F;
                     /* Vehicle set speed  filter positive gradient step size */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTqX_MAP[14] = { -30.0F, -20.0F,
  -10.0F, -5.0F, -2.0F, 0.0F, 2.0F, 3.0F, 5.0F, 7.0F, 10.0F, 20.0F, 30.0F, 50.0F
} ;                 /* Max vehcile speed feedback control lookup table x Asix */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTqY_MAP[18] = { 5.0F, 10.0F,
  20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F,
  130.0F, 140.0F, 150.0F, 160.0F, 170.0F } ;
                    /* Max vehcile speed feedback control lookup table y Asix */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtFbTq_MAP[252] = { 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 2.0F, 2.0F, 5.0F, 7.0F, 7.0F, 9.0F, 9.0F,
  9.0F, 9.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 0.0F, 6.0F, 6.0F,
  6.0F, 8.0F, 10.0F, 12.0F, 12.0F, 12.0F, 12.0F, 12.0F, 15.0F, 18.0F, 22.15F,
  22.0F, 28.0F, 30.0F, 32.0F, 34.0F, 0.0F, 8.0F, 8.0F, 10.0F, 12.0F, 14.0F,
  14.0F, 14.0F, 14.0F, 16.0F, 18.0F, 20.0F, 24.0F, 26.0F, 30.0F, 34.0F, 36.0F,
  38.0F, 0.0F, 10.0F, 10.0F, 10.0F, 12.0F, 14.0F, 14.0F, 14.0F, 14.0F, 16.0F,
  16.43F, 17.86F, 26.0F, 28.0F, 30.0F, 40.0F, 42.0F, 44.0F, 0.0F, 10.0F, 10.0F,
  10.0F, 12.0F, 14.0F, 14.0F, 14.0F, 14.0F, 16.0F, 30.0F, 40.0F, 50.0F, 100.0F,
  100.0F, 100.0F, 100.0F, 100.0F, 0.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  100.0F, 100.0F, 100.0F, 100.0F, 120.0F, 120.0F, 120.0F, 120.0F, 120.0F, 120.0F,
  120.0F, 0.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
  100.0F, 100.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 0.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 0.0F, 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 0.0F, 200.0F, 200.0F, 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F } ;
                           /* Max vehcile speed feedback control lookup table */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKiTqMax_CFG = 50.0F;
                                 /* Max Limit Speed PID control Kp max torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKiTqMin_CFG = -50.0F;
                                 /* Max Limit Speed PID control Kp min torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKpTqMax_CFG = 310.0F;
                                 /* Max Limit Speed PID control Kp max torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidKpTqMin_CFG = -200.0F;
                                 /* Max Limit Speed PID control Kp min torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidTqMax_CFG = 310.0F;
                                   /* Max Limit Speed PID control  max torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtPidTqMin_CFG = -50.0F;
                                    /* Max Limit Speed PID control min torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG = 5.0F;
     /* Max vehcile speed bound error less than this value start Limit status */
volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKiX_LUT[14] = { -20.0F,
  -10.0F, -8.0F, -6.0F, -4.0F, -2.0F, 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 20.0F,
  30.0F } ;      /* Max Limit Speed PID control Ki factor lookup table x axis */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKi_LUT[14] = { 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.005F, 0.0F, 0.005F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                        /* Max Limit Speed PID control Ki factor lookup table */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKpX_LUT[14] = { -20.0F,
  -10.0F, -8.0F, -6.0F, -4.0F, -2.0F, 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 20.0F,
  30.0F } ;      /* Max Limit Speed PID control Kp factor lookup table x axis */

volatile const real32_T TorqPahMgmt_MaxVehSpdLmtTqPidKp_LUT[14] = { 20.0F, 15.0F,
  10.0F, 6.0F, 2.0F, 1.0F, 1.0F, 1.0F, 8.0F, 40.0F, 35.0F, 30.0F, 15.0F, 10.0F }
;                       /* Max Limit Speed PID control Kp factor lookup table */

volatile const real32_T TorqPahMgmt_MaxVehSpdTqMax_CFG = 310.0F;
                                   /* Max Limit Speed PID control  max torque */
volatile const real32_T TorqPahMgmt_MaxVehSpdTqMin_CFG = 0.0F;
                                   /* Max Limit Speed PID control  max torque */
volatile const real32_T TorqPahMgmt_VehSpdFilTim_CFG = 0.02F;/* Vehicle speed  filter time factor */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
