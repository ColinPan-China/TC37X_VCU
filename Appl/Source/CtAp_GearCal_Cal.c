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
 *  Filename:           CtAp_GearCal_Cal.c
 *  File Creation Date: 04-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul  4 18:52:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jul 04 18:51:54 2025
 *
 *
 *******************************************************************************/
#include "CtAp_GearCal_Cal.h"
#include "rtwtypes.h"
#include "CtAp_GearCal_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T GearCal_AllowD2RVehSpdCfm_CFG = 7.0F;/*
                                                                The speed threshold that allows the gear to be cut from D to R
                                                              */
volatile const real32_T GearCal_AllowDorR2NVehSpdCfm_CFG = 8.0F;/*
                                                                   The speed threshold that allows the gear to change from drive to N
                                                                 */
volatile const real32_T GearCal_AllowR2DVehSpdCfm_CFG = 5.0F;/*
                                                                The speed threshold that allows the gear to be cut from R to D
                                                              */
volatile const boolean_T GearCal_CAL = false;/*
                                                A switch that controls the manual shift target
                                              */
volatile const uint8_T GearCal_CALVAL = 0U;/*
                                              The switch value that controls the manual shift target
                                            */
volatile const boolean_T GearCal_EnableADASChk_CFG = true;
volatile const boolean_T GearCal_EnableImmoChk_CFG = true;
volatile const real32_T GearCal_GearSWAccrCfm_CFG = 3.0F;/*
                                                            The accelerator pedal opening threshold that allows switching of gears
                                                          */
volatile const uint16_T GearCal_InvldTim_CFG = 6000U;/*
                                                        Possible Cause Indicates the maximum time for giving feedback to the ivi
                                                      */
volatile const real32_T GearCal_VehStillCfm_CFG = 3.0F;/*
                                                          A low speed threshold that allows any gear to switch between each other
                                                        */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
