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
 *  Filename:           CtAp_TorqModMap_Cal.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqModMap_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TorqModMap_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG = 1500.0F;
                                     /*  The desired torque of gradient limit */
volatile const uint16_T TorqPahMgmt_DifDesAndActTqTim_CFG = 200U;
               /*  The desired torque and actual torque error alarm need time */
volatile const real32_T TorqPahMgmt_DifDesAndActTq_CFG = 50.0F;
                   /*  The desired torque and actual torque error alarm value */
volatile const real32_T TorqPahMgmt_InvldMotActTq_CFG = 1023.0F;/* Motor invalid desired torque */
volatile const real32_T TorqPahMgmt_InvldWhlActTq_CFG = 20000.0F;/* Motor invalid desired torque */
volatile const real32_T TorqPahMgmt_MotRednRat_CFG = 10.418F;/* torque ratio of transmission */
volatile const real32_T TorqPahMgmt_MotTrsmEff_CFG = 0.96F;/* torque losses ratio of transmission */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
