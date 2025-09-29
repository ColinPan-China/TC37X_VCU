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
 *  Filename:           CtAp_TorqCrossZr_Cal.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_TorqCrossZr
 *  Model Version:      1.91
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 09:25:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 09:22:59 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqCrossZr_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TorqCrossZr_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegTq_MAP[209] = {
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 800.0F, 400.0F, 330.0F, 290.0F, 270.0F, 250.0F, 230.0F, 230.0F,
  230.0F, 230.0F, 230.0F, 250.0F, 270.0F, 290.0F, 600.0F, 700.0F, 800.0F,
  3000.0F, 2000.0F, 800.0F, 400.0F, 350.0F, 390.0F, 370.0F, 350.0F, 330.0F,
  310.0F, 250.0F, 310.0F, 330.0F, 350.0F, 370.0F, 390.0F, 600.0F, 700.0F, 800.0F,
  3000.0F, 2500.0F, 600.0F, 500.0F, 480.0F, 450.0F, 430.0F, 410.0F, 400.0F,
  380.0F, 500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1800.0F,
  2000.0F, 3000.0F, 2500.0F, 700.0F, 600.0F, 580.0F, 550.0F, 520.0F, 500.0F,
  480.0F, 450.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1500.0F,
  1800.0F, 2000.0F, 3000.0F, 2000.0F, 900.0F, 800.0F, 700.0F, 650.0F, 600.0F,
  600.0F, 600.0F, 600.0F, 700.0F, 700.0F, 700.0F, 800.0F, 1000.0F, 1200.0F,
  1500.0F, 1800.0F, 2000.0F, 3000.0F, 2000.0F, 1000.0F, 1000.0F, 900.0F, 850.0F,
  800.0F, 800.0F, 800.0F, 800.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
  1200.0F, 1500.0F, 1800.0F, 2000.0F, 3000.0F } ;
                     /* Torque Cross Zero  Negative Ramp MAP in Rgn High mode */

volatile const real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosTq_MAP[209] = {
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 1500.0F, 800.0F, 600.0F, 400.0F, 200.0F, 100.0F, 80.0F, 60.0F, 20.0F,
  60.0F, 80.0F, 100.0F, 200.0F, 400.0F, 600.0F, 800.0F, 1500.0F, 2000.0F,
  2000.0F, 800.0F, 400.0F, 330.0F, 290.0F, 270.0F, 250.0F, 230.0F, 230.0F,
  230.0F, 230.0F, 230.0F, 250.0F, 270.0F, 290.0F, 600.0F, 700.0F, 800.0F,
  3000.0F, 2000.0F, 800.0F, 400.0F, 350.0F, 390.0F, 370.0F, 350.0F, 330.0F,
  310.0F, 250.0F, 310.0F, 330.0F, 350.0F, 370.0F, 390.0F, 600.0F, 700.0F, 800.0F,
  3000.0F, 2500.0F, 600.0F, 500.0F, 480.0F, 450.0F, 430.0F, 410.0F, 400.0F,
  380.0F, 500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1800.0F,
  2000.0F, 3000.0F, 2500.0F, 700.0F, 600.0F, 580.0F, 550.0F, 520.0F, 500.0F,
  480.0F, 450.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1500.0F,
  1800.0F, 2000.0F, 3000.0F, 2000.0F, 900.0F, 800.0F, 700.0F, 650.0F, 600.0F,
  600.0F, 600.0F, 600.0F, 700.0F, 700.0F, 700.0F, 800.0F, 1000.0F, 1200.0F,
  1500.0F, 1800.0F, 2000.0F, 3000.0F, 2000.0F, 1000.0F, 1000.0F, 900.0F, 850.0F,
  800.0F, 800.0F, 800.0F, 800.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
  1200.0F, 1500.0F, 1800.0F, 2000.0F, 3000.0F } ;
                     /* Torque Cross Zero  Negative Ramp MAP in Rgn High mode */

volatile const real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqX_MAP[11] = { 1.0F,
  3.0F, 7.0F, 10.0F, 15.0F, 20.0F, 30.0F, 50.0F, 100.0F, 180.0F, 200.0F } ;
                  /* Torque Cross Zero  Negative Ramp MAP X axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqY_MAP[19] = { -145.0F,
  -110.0F, -100.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F, 2.0F,
  5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                  /* Torque Cross Zero  Negative Ramp MAP Y axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqHi_MAP[209] = {
  120.0F, 105.0F, 100.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 20.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 250.0F, 250.0F, 250.0F, 120.0F, 105.0F,
  100.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 80.0F, 80.0F,
  90.0F, 90.0F, 100.0F, 100.0F, 120.0F, 120.0F, 120.0F, 105.0F, 100.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 80.0F, 80.0F, 90.0F, 90.0F,
  100.0F, 100.0F, 120.0F, 120.0F, 120.0F, 105.0F, 100.0F, 90.0F, 65.0F, 60.0F,
  80.0F, 80.0F, 30.0F, 30.0F, 30.0F, 80.0F, 80.0F, 90.0F, 90.0F, 100.0F, 120.0F,
  150.0F, 160.0F, 120.0F, 105.0F, 100.0F, 90.0F, 65.0F, 60.0F, 50.0F, 50.0F,
  40.0F, 40.0F, 40.0F, 50.0F, 50.0F, 60.0F, 80.0F, 100.0F, 120.0F, 150.0F,
  180.0F, 120.0F, 105.0F, 100.0F, 90.0F, 90.0F, 60.0F, 60.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 60.0F, 60.0F, 80.0F, 100.0F, 120.0F, 160.0F, 180.0F,
  120.0F, 105.0F, 100.0F, 90.0F, 90.0F, 60.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 60.0F, 60.0F, 80.0F, 100.0F, 120.0F, 160.0F, 180.0F, 120.0F, 105.0F,
  100.0F, 90.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 80.0F, 100.0F, 120.0F, 160.0F, 180.0F, 120.0F, 105.0F, 100.0F, 90.0F,
  90.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 80.0F,
  100.0F, 120.0F, 160.0F, 180.0F, 120.0F, 105.0F, 100.0F, 90.0F, 90.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 100.0F, 120.0F,
  160.0F, 180.0F, 120.0F, 105.0F, 100.0F, 90.0F, 90.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 100.0F, 120.0F, 160.0F,
  180.0F } ;         /* Torque Cross Zero  Negative Ramp MAP in Rgn High mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqLow_MAP[209] = {
  220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 20.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 250.0F, 250.0F, 250.0F, 100.0F, 100.0F,
  120.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 50.0F, 80.0F,
  90.0F, 90.0F, 90.0F, 90.0F, 100.0F, 120.0F, 100.0F, 100.0F, 120.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 50.0F, 80.0F, 90.0F, 90.0F,
  90.0F, 90.0F, 100.0F, 120.0F, 100.0F, 100.0F, 120.0F, 90.0F, 65.0F, 60.0F,
  50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 80.0F, 80.0F, 100.0F, 100.0F, 120.0F,
  120.0F, 150.0F, 160.0F, 220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 50.0F,
  50.0F, 40.0F, 40.0F, 40.0F, 50.0F, 50.0F, 60.0F, 65.0F, 90.0F, 150.0F, 150.0F,
  180.0F, 200.0F, 110.0F, 110.0F, 80.0F, 80.0F, 60.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 60.0F, 80.0F, 120.0F, 120.0F, 180.0F,
  200.0F, 110.0F, 110.0F, 80.0F, 80.0F, 60.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 60.0F, 80.0F, 120.0F, 120.0F, 180.0F, 200.0F, 110.0F,
  110.0F, 110.0F, 60.0F, 50.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 60.0F, 80.0F, 120.0F, 120.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F,
  90.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 60.0F,
  80.0F, 120.0F, 120.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F, 90.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 80.0F, 110.0F, 150.0F,
  160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F, 90.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  180.0F } ;          /* Torque Cross Zero  Negative Ramp MAP in Rgn low mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqMid_MAP[209] = {
  220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 20.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 250.0F, 250.0F, 250.0F, 100.0F, 100.0F,
  120.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 50.0F, 80.0F,
  90.0F, 90.0F, 100.0F, 100.0F, 120.0F, 120.0F, 100.0F, 100.0F, 120.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 20.0F, 20.0F, 20.0F, 50.0F, 80.0F, 90.0F, 90.0F,
  100.0F, 100.0F, 120.0F, 120.0F, 100.0F, 100.0F, 120.0F, 90.0F, 65.0F, 60.0F,
  50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 50.0F, 80.0F, 90.0F, 90.0F, 120.0F, 120.0F,
  150.0F, 160.0F, 220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 50.0F, 50.0F,
  40.0F, 40.0F, 40.0F, 50.0F, 50.0F, 60.0F, 65.0F, 90.0F, 150.0F, 150.0F, 180.0F,
  200.0F, 110.0F, 110.0F, 90.0F, 70.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 60.0F, 90.0F, 150.0F, 160.0F, 180.0F, 200.0F, 110.0F,
  110.0F, 90.0F, 70.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 60.0F, 90.0F, 150.0F, 160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 90.0F,
  70.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F,
  90.0F, 150.0F, 160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 90.0F, 90.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 60.0F, 90.0F, 150.0F,
  160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 90.0F, 90.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  180.0F, 200.0F, 110.0F, 110.0F, 90.0F, 90.0F, 80.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F, 180.0F } ;
                   /* Torque Cross Zero  Negative Ramp MAP in Rgn Middle mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOff_MAP[209] = {
  220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 20.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F,
  120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 50.0F, 52.0F, 54.0F, 56.0F,
  60.0F, 65.0F, 90.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 90.0F,
  65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 50.0F, 52.0F, 54.0F, 56.0F, 60.0F, 65.0F,
  90.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F,
  56.0F, 54.0F, 52.0F, 50.0F, 52.0F, 54.0F, 56.0F, 60.0F, 65.0F, 90.0F, 150.0F,
  300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F,
  52.0F, 50.0F, 52.0F, 54.0F, 56.0F, 60.0F, 65.0F, 90.0F, 150.0F, 300.0F, 430.0F,
  220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 50.0F, 52.0F,
  54.0F, 56.0F, 60.0F, 65.0F, 90.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F,
  120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 50.0F, 52.0F, 54.0F, 56.0F,
  60.0F, 65.0F, 90.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 90.0F,
  65.0F, 63.0F, 61.0F, 59.0F, 57.0F, 55.0F, 57.0F, 59.0F, 61.0F, 63.0F, 65.0F,
  90.0F, 150.0F, 300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 100.0F, 75.0F, 70.0F,
  66.0F, 64.0F, 62.0F, 60.0F, 62.0F, 64.0F, 66.0F, 70.0F, 75.0F, 100.0F, 150.0F,
  300.0F, 430.0F, 220.0F, 160.0F, 120.0F, 105.0F, 85.0F, 80.0F, 76.0F, 74.0F,
  72.0F, 70.0F, 72.0F, 74.0F, 76.0F, 80.0F, 85.0F, 105.0F, 150.0F, 300.0F,
  430.0F, 220.0F, 160.0F, 120.0F, 110.0F, 95.0F, 90.0F, 88.0F, 86.0F, 84.0F,
  80.0F, 84.0F, 86.0F, 88.0F, 90.0F, 95.0F, 110.0F, 150.0F, 300.0F, 430.0F } ;
                      /* Torque Cross Zero  Negative Ramp MAP in Rgn off mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOnePedl_MAP[228] =
  { 220.0F, 160.0F, 80.0F, 50.0F, 30.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F, 10.0F, 10.0F, 30.0F, 30.0F, 50.0F, 80.0F, 120.0F, 120.0F, 100.0F,
  100.0F, 80.0F, 50.0F, 30.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F, 30.0F, 30.0F, 50.0F, 80.0F, 120.0F, 120.0F, 100.0F, 100.0F, 80.0F,
  50.0F, 30.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 30.0F,
  30.0F, 50.0F, 80.0F, 120.0F, 120.0F, 100.0F, 100.0F, 80.0F, 50.0F, 30.0F,
  10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 30.0F, 50.0F, 80.0F,
  120.0F, 120.0F, 120.0F, 100.0F, 100.0F, 120.0F, 90.0F, 65.0F, 60.0F, 50.0F,
  50.0F, 40.0F, 40.0F, 40.0F, 50.0F, 50.0F, 60.0F, 65.0F, 90.0F, 150.0F, 150.0F,
  180.0F, 220.0F, 160.0F, 120.0F, 90.0F, 65.0F, 60.0F, 50.0F, 50.0F, 40.0F,
  40.0F, 40.0F, 50.0F, 50.0F, 60.0F, 65.0F, 90.0F, 150.0F, 150.0F, 180.0F,
  200.0F, 110.0F, 110.0F, 110.0F, 90.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F,
  60.0F, 60.0F, 60.0F, 60.0F, 110.0F, 110.0F, 150.0F, 160.0F, 180.0F, 200.0F,
  110.0F, 110.0F, 110.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 60.0F, 90.0F, 150.0F, 160.0F, 180.0F, 200.0F, 110.0F, 110.0F,
  110.0F, 60.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  60.0F, 90.0F, 150.0F, 160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F, 90.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 60.0F, 90.0F,
  150.0F, 160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F, 90.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F,
  160.0F, 180.0F, 200.0F, 110.0F, 110.0F, 110.0F, 90.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  180.0F } ;         /* Torque Cross Zero  Negative Ramp MAP in Rgn High mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqX_MAP[11] = { 1.0F,
  10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 120.0F, 170.0F } ;
                  /* Torque Cross Zero  Negative Ramp MAP X axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqY_MAP[19] = { -
  145.0F, -110.0F, -100.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F,
  2.0F, 5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                  /* Torque Cross Zero  Negative Ramp MAP Y axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqEco_MAP[209] = {
  220.0F, 150.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 50.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 120.0F, 140.0F, 160.0F, 160.0F, 160.0F, 160.0F, 200.0F, 150.0F,
  50.0F, 50.0F, 50.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
  20.0F, 50.0F, 100.0F, 100.0F, 110.0F, 130.0F, 200.0F, 150.0F, 50.0F, 50.0F,
  50.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 50.0F,
  80.0F, 100.0F, 110.0F, 130.0F, 220.0F, 150.0F, 50.0F, 50.0F, 50.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 50.0F, 80.0F, 100.0F,
  110.0F, 130.0F, 220.0F, 150.0F, 120.0F, 90.0F, 80.0F, 30.0F, 30.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 80.0F, 100.0F, 110.0F, 130.0F,
  200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 50.0F, 80.0F, 100.0F, 110.0F, 130.0F, 200.0F, 150.0F,
  120.0F, 90.0F, 80.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 50.0F, 80.0F, 100.0F, 110.0F, 130.0F, 200.0F, 150.0F, 120.0F, 90.0F,
  80.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 50.0F,
  80.0F, 100.0F, 110.0F, 130.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 60.0F, 80.0F, 100.0F,
  110.0F, 130.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 60.0F, 60.0F, 60.0F,
  60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 80.0F, 100.0F, 110.0F, 130.0F,
  200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F,
  60.0F, 60.0F, 60.0F, 60.0F, 80.0F, 100.0F, 110.0F, 130.0F } ;
                          /* Torque Cross Zero  Positive Ramp MAP in eco mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqNor_MAP[209] = {
  220.0F, 150.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 100.0F,
  100.0F, 100.0F, 120.0F, 140.0F, 160.0F, 160.0F, 160.0F, 160.0F, 160.0F, 200.0F,
  150.0F, 50.0F, 50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  30.0F, 30.0F, 80.0F, 100.0F, 130.0F, 150.0F, 160.0F, 200.0F, 150.0F, 50.0F,
  50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  50.0F, 80.0F, 130.0F, 150.0F, 160.0F, 220.0F, 150.0F, 50.0F, 50.0F, 50.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 110.0F,
  130.0F, 150.0F, 160.0F, 220.0F, 150.0F, 120.0F, 90.0F, 80.0F, 40.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 80.0F, 110.0F, 130.0F, 150.0F,
  170.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 150.0F, 188.0F,
  200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 160.0F, 188.0F, 200.0F, 150.0F,
  120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 110.0F, 110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F,
  80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 110.0F,
  110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F,
  160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  188.0F } ;           /* Torque Cross Zero  Positive Ramp MAP in normal mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqOnePedl_MAP[228] =
  { 220.0F, 150.0F, 150.0F, 80.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  30.0F, 30.0F, 30.0F, 30.0F, 60.0F, 80.0F, 120.0F, 200.0F, 200.0F, 200.0F,
  150.0F, 150.0F, 80.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  30.0F, 30.0F, 60.0F, 80.0F, 120.0F, 200.0F, 200.0F, 200.0F, 150.0F, 150.0F,
  80.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  60.0F, 80.0F, 120.0F, 200.0F, 200.0F, 220.0F, 150.0F, 150.0F, 110.0F, 80.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 80.0F,
  120.0F, 150.0F, 160.0F, 220.0F, 150.0F, 150.0F, 110.0F, 80.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 80.0F, 120.0F, 150.0F,
  170.0F, 200.0F, 150.0F, 120.0F, 110.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 80.0F, 120.0F, 150.0F, 188.0F,
  200.0F, 150.0F, 120.0F, 110.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 60.0F, 80.0F, 120.0F, 160.0F, 188.0F, 200.0F,
  150.0F, 120.0F, 110.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 60.0F, 80.0F, 120.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F,
  110.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  60.0F, 80.0F, 120.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F,
  150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F,
  160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 110.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  188.0F } ;        /* Torque Cross Zero  Positive Ramp MAP in One Pedal mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqSpt_MAP[209] = {
  220.0F, 150.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 150.0F,
  150.0F, 150.0F, 180.0F, 200.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 300.0F,
  300.0F, 300.0F, 300.0F, 50.0F, 50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
  50.0F, 50.0F, 80.0F, 100.0F, 180.0F, 220.0F, 220.0F, 300.0F, 300.0F, 300.0F,
  300.0F, 50.0F, 50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 50.0F,
  80.0F, 100.0F, 150.0F, 180.0F, 220.0F, 300.0F, 300.0F, 300.0F, 300.0F, 50.0F,
  50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 50.0F, 80.0F, 100.0F,
  150.0F, 180.0F, 220.0F, 220.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 80.0F, 110.0F, 130.0F, 150.0F,
  210.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 150.0F, 188.0F,
  200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 160.0F, 188.0F, 200.0F, 150.0F,
  120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 110.0F, 110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F,
  80.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 110.0F,
  110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F,
  160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 80.0F, 80.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F, 160.0F,
  188.0F } ;            /* Torque Cross Zero  Positive Ramp MAP in sport mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqX_MAP[11] = { 1.0F,
  10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 120.0F, 170.0F } ;
                  /* Torque Cross Zero  Positive Ramp MAP X axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqY_MAP[19] = { -
  145.0F, -110.0F, -80.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F,
  2.0F, 5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                  /* Torque Cross Zero  Positive Ramp MAP Y axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlX_MAP[12] = {
  1.0F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 120.0F,
  170.0F } ;      /* Torque Cross Zero  Positive Ramp MAP X axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlY_MAP[19] = { -
  145.0F, -110.0F, -80.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F,
  2.0F, 5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                  /* Torque Cross Zero  Positive Ramp MAP Y axi in drive mode */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssTqX_MAP[11] = { 0.0F,
  2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 50.0F, 70.0F, 100.0F, 180.0F, 200.0F } ;
                                 /* Torque Cross Zero  Ramp MAP X axi in Init */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssTqY_MAP[19] = { -300.0F,
  -200.0F, -100.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F, 2.0F,
  5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                                 /* Torque Cross Zero  Ramp MAP Y axi in init */

volatile const real32_T TorqPahMgmt_DrvgModGrdtMaxZrCrssTq_MAP[209] = { 120.0F,
  120.0F, 100.0F, 100.0F, 90.0F, 90.0F, 80.0F, 80.0F, 20.0F, 20.0F, 20.0F, 80.0F,
  80.0F, 90.0F, 90.0F, 100.0F, 100.0F, 120.0F, 120.0F, 120.0F, 120.0F, 100.0F,
  100.0F, 90.0F, 90.0F, 80.0F, 80.0F, 20.0F, 20.0F, 20.0F, 80.0F, 80.0F, 90.0F,
  90.0F, 100.0F, 100.0F, 120.0F, 120.0F, 120.0F, 120.0F, 100.0F, 100.0F, 90.0F,
  90.0F, 80.0F, 80.0F, 20.0F, 20.0F, 20.0F, 80.0F, 80.0F, 90.0F, 90.0F, 100.0F,
  100.0F, 120.0F, 120.0F, 120.0F, 120.0F, 100.0F, 100.0F, 90.0F, 90.0F, 80.0F,
  80.0F, 20.0F, 20.0F, 20.0F, 80.0F, 80.0F, 90.0F, 90.0F, 100.0F, 100.0F, 120.0F,
  120.0F, 120.0F, 120.0F, 100.0F, 100.0F, 90.0F, 90.0F, 80.0F, 80.0F, 20.0F,
  20.0F, 20.0F, 80.0F, 80.0F, 90.0F, 90.0F, 100.0F, 100.0F, 120.0F, 120.0F,
  120.0F, 120.0F, 100.0F, 100.0F, 90.0F, 90.0F, 80.0F, 80.0F, 20.0F, 20.0F,
  20.0F, 80.0F, 80.0F, 90.0F, 90.0F, 100.0F, 100.0F, 120.0F, 120.0F, 3000.0F,
  2500.0F, 2000.0F, 1800.0F, 1000.0F, 900.0F, 800.0F, 700.0F, 600.0F, 500.0F,
  600.0F, 700.0F, 800.0F, 900.0F, 1000.0F, 1800.0F, 2500.0F, 2500.0F, 3000.0F,
  2500.0F, 2500.0F, 2000.0F, 1300.0F, 800.0F, 700.0F, 600.0F, 500.0F, 500.0F,
  500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1500.0F, 2500.0F, 2500.0F,
  2500.0F, 2500.0F, 2500.0F, 2000.0F, 1300.0F, 800.0F, 700.0F, 600.0F, 500.0F,
  500.0F, 500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1500.0F, 2500.0F,
  2500.0F, 2500.0F, 2000.0F, 2000.0F, 1500.0F, 1300.0F, 800.0F, 700.0F, 600.0F,
  500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1500.0F,
  1800.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F, 1500.0F, 1300.0F, 800.0F, 700.0F,
  600.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 600.0F, 700.0F, 800.0F,
  1500.0F, 1800.0F, 2000.0F, 2000.0F } ;/* Torque Cross Zero  Ramp MAP in init */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffX_MAP[5] = { 0.0F,
  3.0F, 5.0F, 7.0F, 9.0F } ;
                    /* Torque Cross Zero Mode troque Ramp Coefficient X axis  */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffY_MAP[13] = { -200.0F,
  -100.0F, -50.0F, -20.0F, -10.0F, -2.0F, 0.0F, 2.0F, 10.0F, 20.0F, 50.0F,
  100.0F, 200.0F } ; /* Torque Cross Zero Mode troque Ramp Coefficient Y axis */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP[65] = { 3.0F,
  2.0F, 0.8F, 0.6F, 0.5F, 0.3F, 0.1F, 0.3F, 0.5F, 0.6F, 0.8F, 1.5F, 2.0F, 3.0F,
  2.0F, 0.8F, 0.6F, 0.5F, 0.3F, 0.3F, 0.3F, 0.5F, 0.6F, 0.8F, 1.5F, 2.0F, 3.0F,
  2.0F, 2.0F, 1.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.8F, 1.0F, 2.0F, 2.0F, 3.0F,
  2.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 3.0F,
  2.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F } ;
                        /* Torque Cross Zero Mode troque Ramp Coefficient MAP */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssDasTqX_MAP[6] = { 0.0F, 3.0F,
  5.0F, 10.0F, 15.0F, 20.0F } ;
             /* Torque Cross Zero  Ramp MAP X axi in Driver Assistance System */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssDasTqY_MAP[19] = { -300.0F,
  -200.0F, -100.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F, 2.0F,
  5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
     /* Torque Cross Zero  Postive Ramp MAP Y axi in Driver Assistance System */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssNegDasTq_MAP[114] = { 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  800.0F, 400.0F, 330.0F, 290.0F, 270.0F, 250.0F, 230.0F, 230.0F, 230.0F, 230.0F,
  230.0F, 250.0F, 270.0F, 290.0F, 600.0F, 700.0F, 800.0F, 3000.0F } ;
          /* Torque Cross Zero  Negative Ramp MAP in Driver Assistance System */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssNegTqHi_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum negative ramp LUT gradient for approximation to target value in regen High Mode */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssPosDasTq_MAP[114] = { 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  300.0F, 250.0F, 200.0F, 140.0F, 120.0F, 100.0F, 80.0F, 60.0F, 20.0F, 60.0F,
  80.0F, 100.0F, 120.0F, 140.0F, 200.0F, 250.0F, 300.0F, 2000.0F, 2000.0F,
  800.0F, 400.0F, 330.0F, 290.0F, 270.0F, 250.0F, 230.0F, 230.0F, 230.0F, 230.0F,
  230.0F, 250.0F, 270.0F, 290.0F, 600.0F, 700.0F, 800.0F, 3000.0F } ;
          /* Torque Cross Zero  Positive Ramp MAP in Driver Assistance System */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffX_MAP[10] = { 0.0F,
  10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 120.0F } ;
                    /* Torque Cross Zero Mode troque Ramp Coefficient X axis  */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffY_MAP[14] = { -200.0F,
  -100.0F, -50.0F, -20.0F, -10.0F, -2.0F, 0.0F, 2.0F, 10.0F, 20.0F, 50.0F,
  100.0F, 200.0F, 300.0F } ;
                     /* Torque Cross Zero Mode troque Ramp Coefficient Y axis */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP[140] = { 3.0F,
  3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
  5.0F, 5.0F, 5.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.2F, 3.4F, 3.6F, 3.8F, 4.0F,
  4.2F, 5.0F, 5.0F, 5.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.2F, 3.4F, 3.6F, 3.8F,
  4.0F, 4.2F, 5.0F, 5.0F, 5.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.6F, 3.8F, 4.0F,
  4.3F, 4.5F, 4.8F, 5.0F, 5.0F, 5.0F, 5.0F, 4.0F, 4.0F, 4.0F, 4.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 6.0F, 7.0F, 6.0F, 5.0F, 5.0F, 5.0F, 4.0F, 4.0F, 4.0F, 4.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 6.0F, 8.0F, 7.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 5.5F, 6.0F, 8.0F, 7.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 5.0F, 5.5F, 6.0F, 8.0F, 7.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 6.0F, 8.0F, 7.0F, 5.0F, 5.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 6.0F, 8.0F } ;
                        /* Torque Cross Zero Mode troque Ramp Coefficient MAP */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqGearRvsX_MAP[11] = { 0.0F,
  3.0F, 5.0F, 10.0F, 15.0F, 20.0F, 50.0F, 70.0F, 100.0F, 180.0F, 200.0F } ;
                       /* Torque Cross Zero Mode troque Ramp X axis in gear R */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqGearRvsY_MAP[19] = { -300.0F,
  -200.0F, -100.0F, -50.0F, -20.0F, -10.0F, -8.0F, -5.0F, -2.0F, 0.0F, 2.0F,
  5.0F, 8.0F, 10.0F, 20.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                       /* Torque Cross Zero Mode troque Ramp Y axis in gear R */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP[209] = { 220.0F,
  150.0F, 120.0F, 90.0F, 65.0F, 60.0F, 56.0F, 54.0F, 52.0F, 150.0F, 150.0F,
  150.0F, 180.0F, 200.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 300.0F, 300.0F,
  300.0F, 300.0F, 50.0F, 50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F,
  50.0F, 50.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
  50.0F, 50.0F, 50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 50.0F, 50.0F,
  300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 50.0F, 50.0F,
  50.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 50.0F, 50.0F, 50.0F, 300.0F, 300.0F,
  300.0F, 300.0F, 220.0F, 150.0F, 120.0F, 90.0F, 80.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 80.0F, 110.0F, 130.0F, 150.0F,
  210.0F, 200.0F, 150.0F, 120.0F, 90.0F, 110.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 150.0F, 188.0F,
  200.0F, 150.0F, 120.0F, 90.0F, 110.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 50.0F, 50.0F, 110.0F, 110.0F, 130.0F, 160.0F, 188.0F, 200.0F,
  150.0F, 120.0F, 90.0F, 110.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  50.0F, 50.0F, 110.0F, 110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F,
  90.0F, 110.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F,
  110.0F, 110.0F, 150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 110.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F,
  150.0F, 160.0F, 188.0F, 200.0F, 150.0F, 120.0F, 90.0F, 110.0F, 80.0F, 80.0F,
  80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 110.0F, 110.0F, 150.0F,
  160.0F, 188.0F } ;      /* Torque Cross Zero Mode troque Ramp MAP in gear R */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffX_MAP[8] = { 0.0F,
  3.0F, 5.0F, 10.0F, 15.0F, 20.0F, 50.0F, 70.0F } ;
                    /* Torque Cross Zero Mode troque Ramp Coefficient X axis  */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffY_MAP[7] = { -200.0F,
  -100.0F, -50.0F, -20.0F, -10.0F, -2.0F, 0.0F } ;
                     /* Torque Cross Zero Mode troque Ramp Coefficient Y axis */

volatile const real32_T TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP[56] = { 3.0F,
  2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 3.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  3.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 3.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 3.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 3.0F, 2.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 3.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 3.0F, 2.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F } ;  /* Torque Cross Zero Mode troque Ramp Coefficient MAP */

volatile const real32_T TorqPahMgmt_GrdtReaTarNegTqLow_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum negative ramp LUT gradient for approximation to target value in regen low mode Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarNegTqMid_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum negative ramp LUT gradient for approximation to target value in regen middle Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarNegTqOff_LUT[9] = { 3000.0F,
  3000.0F, 3000.0F, 3000.0F, 3000.0F, 3000.0F, 3000.0F, 3000.0F, 3000.0F } ;
/* The maximum negative ramp LUT gradient for approximation to target value in Eco Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarNegTqX_LUT[9] = { -300.0F, -200.0F,
  -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
/* The maximum negative ramp LUT x axis gradient for approximation to target */

volatile const real32_T TorqPahMgmt_GrdtReaTarPosTqEco_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in Eco Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarPosTqNor_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in Normal Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarPosTqOnePedl_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in Normal Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarPosTqSpt_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in sport Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarPosTqX_LUT[9] = { -300.0F, -200.0F,
  -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
/* The maximum positive ramp LUT x axis gradient for approximation to target */

volatile const real32_T TorqPahMgmt_GrdtReaTarTqDrvAsscX_LUT[9] = { -300.0F,
  -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
/* The maximum positive ramp LUT x axis gradient for approximation to target */

volatile const real32_T TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in sport Mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarTqGearRvsX_LUT[9] = { -300.0F,
  -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
/* The maximum positive ramp LUT x axis gradient for approximation to target in gear R */

volatile const real32_T TorqPahMgmt_GrdtReaTarTqGearRvs_LUT[9] = { 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum positive ramp LUT gradient for approximation to target value in Gear R */

volatile const real32_T TorqPahMgmt_GrdtReaTarTqX_LUT[9] = { -300.0F, -200.0F,
  -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
/* The maximum negative ramp LUT x axis gradient for approximation to target in init mode */

volatile const real32_T TorqPahMgmt_GrdtReaTarTq_LUT[9] = { 4000.0F, 4000.0F,
  4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F, 4000.0F } ;
/* The maximum negative ramp LUT gradient for approximation to target value in Init Mode */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
