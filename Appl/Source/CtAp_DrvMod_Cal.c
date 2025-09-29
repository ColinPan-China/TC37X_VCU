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
 *  Filename:           CtAp_DrvMod_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:57:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:56:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvMod_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DrvMod_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const boolean_T ModMgmt_ActDrvMod_Enum_CtrlCFG = false;
                             /* Enable the Settings for driving mode calibration

                              */
volatile const uint8_T ModMgmt_ActDrvMod_Enum_ValueCFG = 0U;/* The value of driving mode calibration
                                                             */
volatile const boolean_T ModMgmt_ActRgnSts_Enum_CtrlCFG = false;
                     /* Enable the Settings for energy recovery classcalibration
                      */
volatile const uint8_T ModMgmt_ActRgnSts_Enum_ValueCFG = 0U;
                               /* The value of energy recovery class calibration
                                */
volatile const real32_T ModMgmt_BMSDispSOCRstThd_CFG = 25.0F;
                            /* The display SOC of BMS exceeds the recovery limit
                             */
volatile const real32_T ModMgmt_BMSDispSOCSetThd_CFG = 20.0F;
                            /* The display SOC of the BMS is below the set limit
                             */
volatile const uint16_T ModMgmt_DrvModWarn2SetTmr_CFG = 6000U;
                             /* Drive Mode set condition time of alarm level two
                              */
volatile const uint16_T ModMgmt_DrvModWarn3SetTmr_CFG = 6000U;
                           /* Drive Mode set condition time of alarm level three
                            */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
