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
 *  Filename:           CtAp_ResEst_Cal.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:46:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:45:41 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ResEst_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ResEst_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ResEst_CftConstant_CFG = 154.67F;/*
                                                            constant */
volatile const real32_T ResEst_EstCoefficient_CFG = 0.95F;/*
                                                             The resistance is calculated in proportion to the change of the low-pass filter when the two calculation modes are switched
                                                           */
volatile const real32_T ResEst_EstSampleLimit_CFG = 70.0F;/*
                                                             The maximum absolute value of each change in the filter when the two resistance calculation methods are switched
                                                           */
volatile const real32_T ResEst_OneCft_CFG = 0.0388F;/*
                                                       one cft */
volatile const real32_T ResEst_WheelCircumference_CFG = 0.68F;/*
                                                                 Wheel circumference
                                                               */
volatile const real32_T ResEst_WheelMass_CFG = 1800.0F;/*
                                                          Vehicle mass
                                                        */
volatile const boolean_T VehMot_aPrpCurrSW = false;/*
                                                      The current allowable acceleration of the switch
                                                    */
volatile const real32_T VehMot_aPrpCurrVal = 0.0F;/*
                                                     The switching value of the current allowable acceleration
                                                   */
volatile const boolean_T VehMot_aPrpMaxSW = false;/*
                                                     The maximum allowable acceleration of the switch
                                                   */
volatile const real32_T VehMot_aPrpMaxVal = 0.0F;/*
                                                    The switching value of the maximum allowable acceleration
                                                  */
volatile const boolean_T VehMot_aPrpMinSW = false;/*
                                                     The minimum allowable acceleration of the switch
                                                   */
volatile const real32_T VehMot_aPrpMinVal = 0.0F;/*
                                                    The switching value of the minimum allowable acceleration
                                                  */
volatile const boolean_T VehMot_trqDragSW = false;/*
                                                     Resistance calculation output switch, if turned on will use its own output VehMot_trqDragVal
                                                   */
volatile const real32_T VehMot_trqDragVal = 0.0F;/*
                                                    After the output switch of resistance calculation VehMot_trqDragSW is turned on, the resistance calculation is assigned by this value
                                                  */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
