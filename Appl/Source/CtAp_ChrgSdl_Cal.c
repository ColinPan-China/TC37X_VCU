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
 *  Filename:           CtAp_ChrgSdl_Cal.c
 *  File Creation Date: 22-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu May 22 10:04:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 10:03:15 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgSdl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgSdl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChrgSdl_CCEndSOC_CFG = 95.0F;
volatile const real32_T ChrgSdl_CcCurrMaxX_Map[5] = { 5.0049F, 19.9951F,
  40.0024F, 59.9976F, 80.0049F } ;

volatile const real32_T ChrgSdl_CcCurrMaxY_Map[5] = { 1.001F, 19.9951F, 40.0024F,
  59.9976F, 75.0F } ;

volatile const real32_T ChrgSdl_CcCurrMax_Map[25] = { 400.0F, 400.0F, 400.0F,
  400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F,
  400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F,
  400.0F, 400.0F } ;

volatile const real32_T ChrgSdl_CcStrtTempSOCX_Map[6] = { -10.04F, -5.04F,
  -0.04F, 4.96F, 9.96F, 24.96F } ;

volatile const real32_T ChrgSdl_CcStrtTempSOCY_Map[6] = { 0.0F, 5.0049F, 9.9976F,
  15.0024F, 19.9951F, 25.0F } ;

volatile const real32_T ChrgSdl_CcStrtTempSOC_Map[36] = { 9.9976F, 9.9976F,
  9.9976F, 5.0F, 5.0F, 5.0F, 9.9976F, 9.9976F, 9.9976F, 5.0F, 5.0F, 5.0F,
  9.9976F, 9.9976F, 9.9976F, 10.0F, 10.0F, 10.0F, 9.9976F, 9.9976F, 9.9976F,
  10.0F, 10.0F, 10.0F, 9.9976F, 9.9976F, 9.9976F, 10.0F, 10.0F, 10.0F, 9.9976F,
  9.9976F, 9.9976F, 10.0F, 10.0F, 10.0F } ;

volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSecX_Map[7] = { 0.0F, 2.002F,
  5.0049F, 9.9976F, 15.0024F, 19.9951F, 30.0F } ;

volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSecY_Map[6] = { 10.0F, 20.0F,
  30.0F, 40.0F, 50.0F, 60.0F } ;

volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSec_Map[42] = { 0.0F, 800.0F,
  1650.0F, 3200.0F, 3810.0F, 6730.0F, 6730.0F, 0.0F, 400.0F, 1200.0F, 2030.0F,
  3000.0F, 4327.0F, 4327.0F, 0.0F, 330.0F, 850.0F, 1600.0F, 2420.0F, 3300.0F,
  3300.0F, 0.0F, 270.0F, 670.0F, 1350.0F, 2100.0F, 2700.0F, 2700.0F, 0.0F,
  270.0F, 670.0F, 1350.0F, 2100.0F, 2700.0F, 2700.0F, 0.0F, 270.0F, 670.0F,
  1350.0F, 2100.0F, 2700.0F, 2700.0F } ;

volatile const real32_T ChrgSdl_PreHeatTimX_Lut[7] = { -40.0F, -20.0F, -10.0F,
  -5.0F, 0.0F, 5.0F, 10.0F } ;

volatile const real32_T ChrgSdl_PreHeatTim_Lut[7] = { 3600.0F, 1800.0F, 600.0F,
  600.0F, 300.0F, 100.0F, 5.0F } ;

volatile const real32_T ChrgSdl_facCvX_Lut[7] = { 80.0049F, 81.0059F, 84.9976F,
  90.0024F, 94.9951F, 98.999F, 100.0F } ;

volatile const real32_T ChrgSdl_facCv_Lut[7] = { 1.0F, 0.69F, 0.63F, 0.5F, 0.45F,
  0.22F, 0.0F } ;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
