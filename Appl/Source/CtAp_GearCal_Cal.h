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
 *  Filename:           CtAp_GearCal_Cal.h
 *  File Creation Date: 01-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Jul  1 15:01:25 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Tue Jul 01 14:57:51 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_GearCal_Cal_h_
#define RTW_HEADER_CtAp_GearCal_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T GearCal_AllowD2RVehSpdCfm_CFG;

/*
   The speed threshold that allows the gear to be cut from D to R
 */
extern volatile const real32_T GearCal_AllowDorR2NVehSpdCfm_CFG;

/*
   The speed threshold that allows the gear to change from drive to N
 */
extern volatile const real32_T GearCal_AllowR2DVehSpdCfm_CFG;

/*
   The speed threshold that allows the gear to be cut from R to D
 */
extern volatile const boolean_T GearCal_CAL;

/*
   A switch that controls the manual shift target
 */
extern volatile const uint8_T GearCal_CALVAL;

/*
   The switch value that controls the manual shift target
 */
extern volatile const boolean_T GearCal_EnableADASChk_CFG;
extern volatile const boolean_T GearCal_EnableImmoChk_CFG;
extern volatile const real32_T GearCal_GearSWAccrCfm_CFG;

/*
   The accelerator pedal opening threshold that allows switching of gears
 */
extern volatile const uint16_T GearCal_InvldTim_CFG;

/*
   Possible Cause Indicates the maximum time for giving feedback to the ivi
 */
extern volatile const real32_T GearCal_VehStillCfm_CFG;

/*
   A low speed threshold that allows any gear to switch between each other
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_GearCal_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
