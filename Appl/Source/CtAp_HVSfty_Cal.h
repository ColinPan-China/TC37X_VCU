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
 *  Filename:           CtAp_HVSfty_Cal.h
 *  File Creation Date: 11-Feb-2025
 *  Model Name:         CtAp_HVSfty
 *  Model Version:      2.0.4
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:53 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Feb 11 16:56:36 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Tue Feb 11 16:36:56 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_HVSfty_Cal_h_
#define RTW_HEADER_CtAp_HVSfty_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T HVSfty_HVILDTCPreEnable_CFG;

/*
   The DTC determines the prerequisite time
 */
extern volatile const uint16_T HVSfty_HVILDTCResetTim_CFG;

/*
   HVIL DTC reset time
 */
extern volatile const uint16_T HVSfty_HVILDTCSetTim_CFG;

/*
   HVIL DTC set time
 */
extern volatile const uint8_T HVSfty_HVILPWMFrq_CFG;

/*
   Send out the pwm of the HVIL
 */
extern volatile const uint8_T HVSfty_HVILPWMMonrMax_CFG;

/*
   The maximum PWM value of the received HVIL
 */
extern volatile const uint8_T HVSfty_HVILPWMMonrMin_CFG;

/*
   The minimum PWM value of the received HVIL
 */
extern volatile const uint16_T HVSfty_HVILPreTimEnable_CFG;

/*
   HVIL DTC prerequisite time
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_HVSfty_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
