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
 *  Filename:           CtAp_ResEst_Cal.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:21:58 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:20:57 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ResEst_Cal_h_
#define RTW_HEADER_CtAp_ResEst_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ResEst_CftConstant_CFG;

/*
   constant */
extern volatile const real32_T ResEst_EstCoefficient_CFG;

/*
   The resistance is calculated in proportion to the change of the low-pass filter when the two calculation modes are switched
 */
extern volatile const real32_T ResEst_EstSampleLimit_CFG;

/*
   The maximum absolute value of each change in the filter when the two resistance calculation methods are switched
 */
extern volatile const real32_T ResEst_OneCft_CFG;

/*
   one cft */
extern volatile const real32_T ResEst_WheelCircumference_CFG;

/*
   Wheel circumference
 */
extern volatile const real32_T ResEst_WheelMass_CFG;

/*
   Vehicle mass
 */
extern volatile const real32_T ResEst_WheelRadius_CFG;

/*
   Wheel radius
 */
extern volatile const boolean_T VehMot_aPrpCurrSW;

/*
   The current allowable acceleration of the switch
 */
extern volatile const real32_T VehMot_aPrpCurrVal;

/*
   The switching value of the current allowable acceleration
 */
extern volatile const boolean_T VehMot_aPrpMaxSW;

/*
   The maximum allowable acceleration of the switch
 */
extern volatile const real32_T VehMot_aPrpMaxVal;

/*
   The switching value of the maximum allowable acceleration
 */
extern volatile const boolean_T VehMot_aPrpMinSW;

/*
   The minimum allowable acceleration of the switch
 */
extern volatile const real32_T VehMot_aPrpMinVal;

/*
   The switching value of the minimum allowable acceleration
 */
extern volatile const boolean_T VehMot_trqDragSW;

/*
   Resistance calculation output switch, if turned on will use its own output VehMot_trqDragVal
 */
extern volatile const real32_T VehMot_trqDragVal;

/*
   After the output switch of resistance calculation VehMot_trqDragSW is turned on, the resistance calculation is assigned by this value
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ResEst_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
