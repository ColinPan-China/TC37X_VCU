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
 *  Filename:           CtAp_FctSftyTorq_Cal.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyTorq_Cal.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyTorq_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T FctSftyMon_AccrPedlDesTqOverFltEnaTim_CFG = 1500U;
                /* function safety accelerator pedal torque fault enable Time */
volatile const uint16_T FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG = 400U;
                /* function safety accelerator pedal torque fault Mature Time */
volatile const real32_T FctSftyMon_AccrPedlLmtFwdMinTqX_LUT[11] = { 0.0F, 5.0F,
  10.0F, 20.0F, 30.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F } ;
                 /* function safety accelerator pedal torque limit MAP x axis */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdMinTq_LUT[11] = { -150.0F,
  -100.0F, -50.0F, -50.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;
                           /* function safety accelerator pedal torque limit  */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqEco_MAP[66] = { 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 60.0F, 50.0F, 50.0F, 50.0F, 110.0F,
  110.0F, 110.0F, 70.0F, 50.0F, 50.0F, 155.0F, 155.0F, 155.0F, 110.0F, 50.0F,
  50.0F, 220.0F, 220.0F, 220.0F, 140.0F, 80.0F, 50.0F, 235.0F, 235.0F, 235.0F,
  180.0F, 120.0F, 70.0F, 255.0F, 255.0F, 255.0F, 210.0F, 150.0F, 90.0F, 275.0F,
  275.0F, 275.0F, 250.0F, 180.0F, 120.0F, 295.0F, 295.0F, 295.0F, 280.0F, 210.0F,
  140.0F, 315.0F, 315.0F, 315.0F, 310.0F, 240.0F, 160.0F, 315.0F, 315.0F, 315.0F,
  315.0F, 250.0F, 160.0F } ;
                /* function safety accelerator pedal forward torque limit MAP */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqNor_MAP[66] = { 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 60.0F, 50.0F, 50.0F, 50.0F, 110.0F,
  110.0F, 110.0F, 70.0F, 50.0F, 50.0F, 155.0F, 155.0F, 155.0F, 110.0F, 50.0F,
  50.0F, 220.0F, 220.0F, 220.0F, 140.0F, 80.0F, 50.0F, 235.0F, 235.0F, 235.0F,
  180.0F, 120.0F, 70.0F, 255.0F, 255.0F, 255.0F, 210.0F, 150.0F, 90.0F, 275.0F,
  275.0F, 275.0F, 250.0F, 180.0F, 120.0F, 295.0F, 295.0F, 295.0F, 280.0F, 210.0F,
  140.0F, 315.0F, 315.0F, 315.0F, 310.0F, 240.0F, 160.0F, 315.0F, 315.0F, 315.0F,
  315.0F, 250.0F, 160.0F } ;
                /* function safety accelerator pedal forward torque limit MAP */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP[66] = { 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 60.0F, 50.0F, 50.0F, 50.0F,
  110.0F, 110.0F, 110.0F, 70.0F, 50.0F, 50.0F, 155.0F, 155.0F, 155.0F, 110.0F,
  50.0F, 50.0F, 220.0F, 220.0F, 220.0F, 140.0F, 80.0F, 50.0F, 235.0F, 235.0F,
  235.0F, 180.0F, 120.0F, 70.0F, 255.0F, 255.0F, 255.0F, 210.0F, 150.0F, 90.0F,
  275.0F, 275.0F, 275.0F, 250.0F, 180.0F, 120.0F, 295.0F, 295.0F, 295.0F, 280.0F,
  210.0F, 140.0F, 315.0F, 315.0F, 315.0F, 310.0F, 240.0F, 160.0F, 315.0F, 315.0F,
  315.0F, 315.0F, 250.0F, 160.0F } ;
                /* function safety accelerator pedal forward torque limit MAP */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqSpt_MAP[66] = { 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 60.0F, 50.0F, 50.0F, 50.0F, 110.0F,
  110.0F, 110.0F, 70.0F, 50.0F, 50.0F, 155.0F, 155.0F, 155.0F, 110.0F, 50.0F,
  50.0F, 220.0F, 220.0F, 220.0F, 140.0F, 80.0F, 50.0F, 235.0F, 235.0F, 235.0F,
  180.0F, 120.0F, 70.0F, 255.0F, 255.0F, 255.0F, 210.0F, 150.0F, 90.0F, 275.0F,
  275.0F, 275.0F, 250.0F, 180.0F, 120.0F, 295.0F, 295.0F, 295.0F, 280.0F, 210.0F,
  140.0F, 315.0F, 315.0F, 315.0F, 310.0F, 240.0F, 160.0F, 315.0F, 315.0F, 315.0F,
  315.0F, 250.0F, 160.0F } ;
                /* function safety accelerator pedal forward torque limit MAP */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqX_MAP[11] = { 0.0F, 10.0F,
  20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F } ;
                 /* function safety accelerator pedal torque limit MAP x axis */

volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqY_MAP[6] = { 0.0F, 5.0F,
  10.0F, 80.0F, 120.0F, 121.0F } ;
                 /* function safety accelerator pedal torque Limit MAP Y axis */

volatile const real32_T FctSftyMon_AccrPedlLmtMaxTq_CFG = 315.0F;
             /* function safety accelerator pedal torque Limit in gear N or P */
volatile const real32_T FctSftyMon_AccrPedlLmtMinTq_CFG = -315.0F;
             /* function safety accelerator pedal torque Limit in gear N or P */
volatile const real32_T FctSftyMon_AccrPedlLmtRvsMaxTq_LUT[11] = { 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F } ;
                /* function safety accelerator pedal Reverse torque limit MAX */

volatile const real32_T FctSftyMon_AccrPedlLmtRvsMinTq_MAP[33] = { -50.0F,
  -50.0F, -50.0F, -50.0F, -50.0F, -50.0F, -90.0F, -90.0F, -50.0F, -130.0F,
  -130.0F, -80.0F, -180.0F, -180.0F, -100.0F, -200.0F, -200.0F, -120.0F, -220.0F,
  -220.0F, -140.0F, -250.0F, -250.0F, -160.0F, -270.0F, -270.0F, -185.0F,
  -290.0F, -290.0F, -210.0F, -315.0F, -315.0F, -230.0F } ;
                /* function safety accelerator pedal Reverse torque Limit min */

volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqX_LUT[11] = { 0.0F, 10.0F,
  20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F } ;
         /* function safety accelerator pedal Reverse torque Limit MAP x axis */

volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqX_MAP[11] = { 0.0F, 10.0F,
  20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F } ;
         /* function safety accelerator pedal Reverse torque Limit MAP x axis */

volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqY_MAP[3] = { 0.0F, 15.0F,
  16.0F } ;
         /* function safety accelerator pedal Reverse torque Limit MAP Y axis */

volatile const real32_T FctSftyMon_CrpCtrlLmtFwdTqX_LUT[7] = { 0.0F, 2.0F, 4.0F,
  6.0F, 7.0F, 10.0F, 11.0F } ;
                    /* function safety creep  forward torque limit LUT x axis */

volatile const real32_T FctSftyMon_CrpCtrlLmtFwdTq_LUT[7] = { 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 0.0F } ;
                           /* function safety creep  forward torque limit LUT */

volatile const real32_T FctSftyMon_CrpCtrlLmtRvsTqX_LUT[7] = { 0.0F, 1.0F, 3.0F,
  5.0F, 7.0F, 10.0F, 11.0F } ;
                    /* function safety creep  Reverse torque limit LUT x axis */

volatile const real32_T FctSftyMon_CrpCtrlLmtRvsTq_LUT[7] = { 200.0F, 200.0F,
  200.0F, 200.0F, 200.0F, 200.0F, 0.0F } ;
                           /* function safety creep  Reverse torque limit LUT */

volatile const real32_T FctSftyMon_CrpCtrlLmtTq_CFG = 310.0F;
                         /* function safety creep torque Limit in gear N or P */
volatile const uint16_T FctSftyMon_CrpDesTqOverFltEnaTim_CFG = 1500U;
                            /* function safety creep torque fault enable Time */
volatile const uint16_T FctSftyMon_CrpDesTqOverFltMatureTim_CFG = 400U;
                            /* function safety creep torque fault Mature Time */
volatile const real32_T FctSftyMon_DesVehDecelSpdLmtTq_CFG = -2.7F;/* function safety Deceleration Limit */
volatile const uint16_T FctSftyMon_DesVehDecelSpdOverFltEnaTim_CFG = 1500U;
                            /* function safety Deceleration fault enable Time */
volatile const uint16_T FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG = 400U;
                            /* function safety Deceleration fault Mature Time */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
