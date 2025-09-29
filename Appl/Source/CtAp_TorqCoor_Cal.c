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
 *  Filename:           CtAp_TorqCoor_Cal.c
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqCoor_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TorqCoor_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_GrdTqCoorrMaxNegTq_CFG = 4000.0F;
                                 /* No esp interventions filter negative ramp */
volatile const real32_T TorqPahMgmt_GrdTqCoorrMaxPosTq_CFG = 4000.0F;
                                  /* No esp interventions filter postive ramp */
volatile const real32_T TorqPahMgmt_GrdtTqCoorrNegTqX_LUT[10] = { -300.0F,
  -200.0F, -100.0F, -50.0F, -10.0F, 10.0F, 50.0F, 100.0F, 200.0F, 300.0F } ;
                           /* ESP interventions Exit filter negative ramp LUT */

volatile const real32_T TorqPahMgmt_GrdtTqCoorrNegTq_LUT[10] = { 1000.0F, 800.0F,
  500.0F, 300.0F, 100.0F, 100.0F, 300.0F, 500.0F, 800.0F, 1000.0F } ;
                           /* ESP interventions Exit filter negative ramp LUT */

volatile const real32_T TorqPahMgmt_GrdtTqCoorrPosTqX_LUT[8] = { -200.0F,
  -100.0F, -50.0F, -10.0F, 10.0F, 50.0F, 100.0F, 200.0F } ;
                            /* ESP interventions Exit filter postive ramp LUT */

volatile const real32_T TorqPahMgmt_GrdtTqCoorrPosTq_LUT[8] = { 800.0F, 500.0F,
  300.0F, 100.0F, 100.0F, 300.0F, 500.0F, 800.0F } ;
                            /* ESP interventions Exit filter postive ramp LUT */

volatile const real32_T TorqPahMgmt_IBSIntvGrdtSlopNegTq_CFG = 4000.0F;
                                    /* esp interventions filter negative ramp */
volatile const real32_T TorqPahMgmt_IBSIntvGrdtSlopPosTq_CFG = 4000.0F;
                                     /* esp interventions filter postive ramp */
volatile const real32_T TorqPahMgmt_TqCoorrRampStsThdTq_CFG = 5.0F;
/* if delta toruqe TorqPahMgmt_DesCoorrDeltaTq_Nm less than this value will Exit filter */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
