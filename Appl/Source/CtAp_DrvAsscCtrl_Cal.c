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
 *  Filename:           CtAp_DrvAsscCtrl_Cal.c
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvAsscCtrl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DrvAsscCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChassisMgmt_DrvAsscModMotMaxTq_CFG = 300.0F;/* Drive assistance upper limit torque */
volatile const real32_T ChassisMgmt_IBSApsCtrlDesTqOverFltEnaTim_CFG = 1500.0F;
                               /* APS torque over limit fault DTC enable time */
volatile const uint16_T ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG = 400U;
                                   /* APS torque over limit fault mature time */
volatile const real32_T ChassisMgmt_IBSApsCtrlFwdMaxLmtTq_CFG = 310.0F;/* APS upper limit torque */
volatile const real32_T ChassisMgmt_IBSApsCtrlFwdMinLmtTq_CFG = -310.0F;/* APS lower limit torque */
volatile const real32_T ChassisMgmt_IBSApsCtrlRvsMaxLmtTq_CFG = 310.0F;/* APS upper limit torque */
volatile const real32_T ChassisMgmt_IBSApsCtrlRvsMinLmtTq_CFG = -310.0F;/* APS lower limit torque */
volatile const real32_T ChassisMgmt_IBSCddAccrPedlPosnOvrdOff_CFG = 2.0F;
                          /* CDD Accelerator Pedal position override InActive */
volatile const real32_T ChassisMgmt_IBSCddAccrPedlPosnOvrdOn_CFG = 3.0F;
                            /* CDD Accelerator Pedal position override Active */
volatile const real32_T ChassisMgmt_IBSCddAccrPedlTqOvrdOff_CFG = -281.0F;
                           /* CDD Accelerator Pedal torque override Threshold */
volatile const real32_T ChassisMgmt_IBSCddAccrPedlTqOvrdOn_CFG = -280.0F;
                           /* CDD Accelerator Pedal torque override Threshold */
volatile const real32_T ChassisMgmt_IBSVlcAccrPedlPosnOvrdOn_CFG = 3.0F;
                           /* VLC  Accelerator Pedal position override Active */
volatile const real32_T ChassisMgmt_IBSVlcAccrPedlTqOvrdOffThd_CFG = 0.0F;
                           /* VLC Accelerator Pedal torque override Threshold */
volatile const real32_T ChassisMgmt_IBSVlcAccrPedlTqOvrdOnThd_CFG = 1.0F;
                           /* VLC Accelerator Pedal torque override Threshold */
volatile const real32_T ChassisMgmt_IBSVlcCtrlDesTqOverFltEnaTim_CFG = 1500.0F;
                               /* VLC torque over limit fault DTC enable time */
volatile const uint16_T ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG = 400U;
                                   /* VLC torque over limit fault mature time */
volatile const real32_T ChassisMgmt_IBSVlcCtrlMaxLmtTqX_LUT[4] = { 0.0F, 18.0F,
  72.0F, 170.0F } ;                    /* VLC limit torque */

volatile const real32_T ChassisMgmt_IBSVlcCtrlMaxLmtTq_LUT[4] = { 290.0F, 290.0F,
  150.0F, 150.0F } ;                   /* VLC limit torque */

volatile const real32_T ChassisMgmt_IBSVlcCtrlMinLmtTq_CFG = 0.0F;/* VLC limit torque */
volatile const real32_T ChassisMgmt_MaxVirtAccrPedlPosn_CFG = 100.0F;/* Max Virtual Pedal position */
volatile const real32_T ChassisMgmt_MinVirtAccrPedlPosn_CFG = 0.0F;/* Min Virtual Pedal position */
volatile const boolean_T ChassisMgmt_VirtAccrPedlPosnSw_CFG = true;
                                      /* Virtual Pedal position method switch */
volatile const real32_T ChassisMgmt_VirtAccrPedlPosnX_MAP[11] = { 0.0F, 10.0F,
  20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 110.0F, 130.0F, 150.0F, 170.0F } ;/* Virtual Pedal position X axis */

volatile const real32_T ChassisMgmt_VirtAccrPedlPosnY_MAP[10] = { -10.0F, 0.0F,
  10.0F, 50.0F, 80.0F, 120.0F, 180.0F, 220.0F, 280.0F, 310.0F } ;/* Virtual Pedal position Y axis */

volatile const real32_T ChassisMgmt_VirtAccrPedlPosn_MAP[110] = { 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F,
  60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 70.0F, 70.0F, 70.0F, 70.0F, 70.0F,
  70.0F, 70.0F, 70.0F, 70.0F, 70.0F, 70.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 90.0F, 90.0F, 90.0F, 90.0F, 100.0F,
  100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
  100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F } ;/* Virtual Pedal position lookup MAP */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
