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
 *  Filename:           CtAp_CrpCtrl_Cal.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CrpCtrl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_CrpCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T ChassisMgmt_CrpCtrlActvStdlMaxTim_CFG = 10000U;
                             /* CtAp_CrpCtrl mode zero vehicle speed max time */
volatile const real32_T ChassisMgmt_CrpCtrlActvStdlMotSpd_CFG = 25.0F;
                                 /* creep control  Active status bypass value */
volatile const boolean_T ChassisMgmt_CrpCtrlActvStdlSpdSelect_CFG = true;
/* creep control  standstill status bypass switch select mot speed or vehicle speed
   1:Motor Speed 0:Vehicle Speed */
volatile const real32_T ChassisMgmt_CrpCtrlActvStdlSpd_CFG = 0.1F;
                         /* CtAp_CrpCtrl mode standstill status vehicle speed */
volatile const real32_T ChassisMgmt_CrpCtrlActvStdlTq_CFG = 50.0F;
                               /* CtAp_CrpCtrl mode zero vehicle Allow Torque */
volatile const real32_T ChassisMgmt_CrpCtrlAllwdMaxBrkPushrodStk_CFG = 5.5F;
                /* creep control Allowed Max brake pedal Brake Pushrod Stroke */
volatile const real32_T ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG = 40.0F;
                    /* creep control Allowed Max brake pedal Plunger Pressure */
volatile const real32_T ChassisMgmt_CrpCtrlAllwdVehSpdThdOff_CFG = 0.0F;
                         /* creep control Allowed Max vehicle speed Threshold */
volatile const real32_T ChassisMgmt_CrpCtrlAllwdVehSpdThdOn_CFG = 2.0F;
                         /* creep control Allowed Max vehicle speed Threshold */
volatile const real32_T ChassisMgmt_CrpCtrlDesFbTqX_MAP[6] = { -1.0F, 0.0F, 2.0F,
  5.0F, 7.0F, 9.0F } ;   /* creep control feedback torque lookup table X asix */

volatile const real32_T ChassisMgmt_CrpCtrlDesFbTqY_MAP[12] = { -9.0F, -7.0F,
  -5.0F, -3.0F, -2.8F, 0.0F, 2.8F, 3.0F, 5.0F, 6.0F, 7.0F, 9.0F } ;
                         /* creep control feedback torque lookup table Y asix */

volatile const real32_T ChassisMgmt_CrpCtrlDesFbTq_MAP[72] = { 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 20.0F, 40.0F, 50.0F, 78.0F, 82.0F, 88.0F, 120.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 20.0F, 50.0F, 50.0F, 55.0F, 65.0F, 83.0F, 100.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 20.0F, 20.0F, 40.0F, 50.0F, 60.0F, 73.0F, 90.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 20.0F, 20.0F, 32.0F, 40.0F, 50.0F, 65.0F, 85.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                               /* creep control feedback torque lookup table  */

volatile const real32_T ChassisMgmt_CrpCtrlDesFwdVehSpdX_LUT[4] = { 0.0F, 0.2F,
  2.0F, 5.5F } ;
           /* creep control desired forward vehcile speed lookup table X axis */

volatile const real32_T ChassisMgmt_CrpCtrlDesFwdVehSpd_LUT[4] = { 7.0F, 7.0F,
  3.0F, 0.0F } ;
           /* creep control desired forward vehcile speed lookup table values */

volatile const real32_T ChassisMgmt_CrpCtrlDesPidKiTqX_LUT[10] = { -2.0F, -1.0F,
  0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 7.0F, 8.0F } ;
                  /* creep control Desired Pid Ki toruqe lookcup table X asix */

volatile const real32_T ChassisMgmt_CrpCtrlDesPidKiTq_LUT[10] = { -0.1F, -0.015F,
  0.0F, 0.0005F, 0.0001F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                   /* creep control Desired Pid Ki toruqe lookcup table value */

volatile const real32_T ChassisMgmt_CrpCtrlDesPidKpTqX_LUT[10] = { -2.0F, -1.0F,
  0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 7.0F, 8.0F } ;
                  /* creep control Desired Pid Kp toruqe lookcup table X asix */

volatile const real32_T ChassisMgmt_CrpCtrlDesPidKpTq_LUT[10] = { -20.0F, -35.0F,
  -10.0F, 5.0F, 10.0F, 15.0F, 15.0F, 15.0F, 28.0F, -20.0F } ;
                   /* creep control Desired Pid Kp toruqe lookcup table value */

volatile const real32_T ChassisMgmt_CrpCtrlDesRvsFbTq_MAP[72] = { -1.0F, -1.0F,
  -1.0F, -1.0F, -1.0F, -1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 105.0F, 77.0F,
  65.0F, 50.0F, 35.0F, 20.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 100.0F, 70.0F,
  60.0F, 42.0F, 35.0F, 20.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 95.0F, 65.0F,
  58.0F, 40.0F, 20.0F, 20.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                               /* creep control feedback torque lookup table  */

volatile const real32_T ChassisMgmt_CrpCtrlDesRvsPidKiTq_LUT[10] = { -0.1F,
  -0.015F, 0.0F, 0.0005F, 0.0001F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                   /* creep control Desired Pid Ki toruqe lookcup table value */

volatile const real32_T ChassisMgmt_CrpCtrlDesRvsPidKpTq_LUT[10] = { -20.0F,
  -35.0F, -10.0F, 5.0F, 10.0F, 10.0F, 10.0F, 10.0F, -20.0F, -20.0F } ;
                   /* creep control Desired Pid Kp toruqe lookcup table value */

volatile const real32_T ChassisMgmt_CrpCtrlDesRvsVehSpdX_LUT[4] = { 0.0F, 0.2F,
  2.0F, 5.5F } ;
           /* creep control desired reverse vehcile speed lookup table X axis */

volatile const real32_T ChassisMgmt_CrpCtrlDesRvsVehSpd_LUT[4] = { 5.0F, 5.0F,
  2.0F, 0.0F } ;
           /* creep control desired reverse vehcile speed lookup table values */

volatile const real32_T ChassisMgmt_CrpCtrlDesSteerGearAgTqX_LUT[11] = { -780.0F,
  -360.0F, -180.0F, -90.0F, -45.0F, 0.0F, 45.0F, 90.0F, 180.0F, 360.0F, 780.0F }
; /* creep control desired EPS steering gear angle Troque lookup table X axis */

volatile const real32_T ChassisMgmt_CrpCtrlDesSteerGearAgTq_LUT[11] = { 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
  /* creep control desired EPS steering gear angle Troque lookup table X axis */

volatile const real32_T ChassisMgmt_CrpCtrlDesTqMax_CFG = 250.0F;/* creep control desired max torque */
volatile const real32_T ChassisMgmt_CrpCtrlDesTqMin_CFG = 0.0F;/* creep control desired min torque */
volatile const real32_T ChassisMgmt_CrpCtrlDesVehSpdGrdtNeg_CFG = 100.0F;
                /* creep control demand  vehcile speed gradient negtive value */
volatile const real32_T ChassisMgmt_CrpCtrlDesVehSpdGrdtPos_CFG = 100.0F;
                /* creep control demand  vehcile speed gradient postive value */
volatile const real32_T ChassisMgmt_CrpCtrlInActvTq_CFG = 0.0F;/* CtAp_CrpCtrl mode inactive torque */
volatile const real32_T ChassisMgmt_CrpCtrlMotToothTq_CFG = 1.0F;
                             /* creep control accr pedal grather creep torque */
volatile const real32_T ChassisMgmt_CrpCtrlPidKiTqMax_CFG = 150.0F;/* creep control Pid max torque */
volatile const real32_T ChassisMgmt_CrpCtrlPidKiTqMin_CFG = -10.0F;/* creep control Pid min torque */
volatile const real32_T ChassisMgmt_CrpCtrlPidKpTqGrdtNeg_CFG = 100.0F;
                             /* creep control Pid Kp Torque positive gradient */
volatile const real32_T ChassisMgmt_CrpCtrlPidKpTqGrdtPos_CFG = 100.0F;
                             /* creep control Pid Kp Torque negative gradient */
volatile const real32_T ChassisMgmt_CrpCtrlPidTqMax_CFG = 150.0F;/* creep control Pid max torque */
volatile const real32_T ChassisMgmt_CrpCtrlPidTqMin_CFG = -20.0F;/* creep control Pid min torque */
volatile const boolean_T ChassisMgmt_CrpCtrlSteerGearAgTqEna_CFG = false;
                      /* creep control desired EPS steering gear angle Enable */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
