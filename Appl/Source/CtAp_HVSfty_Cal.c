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
 *  Filename:           CtAp_HVSfty_Cal.c
 *  File Creation Date: 12-Feb-2025
 *  Model Name:         CtAp_HVSfty
 *  Model Version:      2.1.4
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:53 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Feb 12 11:07:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed Feb 12 11:06:40 2025
 *
 *
 *******************************************************************************/
#include "CtAp_HVSfty_Cal.h"
#include "rtwtypes.h"
#include "CtAp_HVSfty_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T HVSfty_HVILDTCPreEnable_CFG = 1500U;/*
                                                               The DTC determines the prerequisite time
                                                             */
volatile const uint16_T HVSfty_HVILDTCResetTim_CFG = 200U;/*
                                                             HVIL DTC reset time
                                                           */
volatile const uint16_T HVSfty_HVILDTCSetTim_CFG = 60U;/*
                                                          HVIL DTC set time
                                                        */
volatile const uint8_T HVSfty_HVILPWMFrq_CFG = 100U;/*
                                                       Send out the pwm of the HVIL
                                                     */
volatile const uint8_T HVSfty_HVILPWMMonrMax_CFG = 105U;/*
                                                           The maximum PWM value of the received HVIL
                                                         */
volatile const uint8_T HVSfty_HVILPWMMonrMin_CFG = 95U;/*
                                                          The minimum PWM value of the received HVIL
                                                        */
volatile const uint16_T HVSfty_HVILPreTimEnable_CFG = 1500U;/*
                                                               HVIL DTC prerequisite time
                                                             */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
