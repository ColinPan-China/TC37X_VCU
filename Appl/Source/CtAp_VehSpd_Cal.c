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
 *  Filename:           CtAp_VehSpd_Cal.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:28:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:27:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehSpd_Cal.h"
#include "rtwtypes.h"
#include "CtAp_VehSpd_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T VehMot_VehTirRd_CFG2 = 33.22F;/*
                                                         Diag_VehTirRd_PRM equal to one,Tyre radius size
                                                       */
volatile const real32_T VehSpd_CycleDt_CFG = 0.01F;/*
                                                      Low-pass filtering coefficient of vehspd module
                                                    */
volatile const real32_T VehSpd_InvalidSpd_CFG = 360.0F;/*
                                                          The value of the speed when the speed is invalid
                                                        */
volatile const real32_T VehSpd_MCUSpdRat_CFG = 10.418F;/*
                                                          Motor to wheel gear ratio
                                                        */
volatile const real32_T VehSpd_MCUVehSpdLPFTc_CFG = 0.05F;/*
                                                             Calculate the low-pass filtering coefficient of vehicle speed according to mcu
                                                           */
volatile const real32_T VehSpd_SpdGearDDif_CFG = -100.0F;/*
                                                            The MCU speed at D gear that thinks the direction of the vehicle is opposite to the gear
                                                          */
volatile const real32_T VehSpd_SpdGearDRcvr_CFG = 10.0F;/*
                                                           If the car body is in the opposite direction of the gear in D gear, then changing CFG means restoring the mcu speed of this situation
                                                         */
volatile const real32_T VehSpd_SpdGearRDif_CFG = 100.0F;/*
                                                           If the car body is in the opposite direction of the gear in R gear, then changing CFG means restoring the mcu speed of this situation
                                                         */
volatile const real32_T VehSpd_SpdGearRRcvr_CFG = -10.0F;/*
                                                            In R gear the body direction is different to recover the mcu speed
                                                          */
volatile const uint16_T VehSpd_VehDrvDirTimCfm_CFG = 100U;/*
                                                             Judging time according to the delay of the mcu to judge the direction of the vehicle
                                                           */
volatile const real32_T VehSpd_VehStdl_CFG = 3.0F;/*
                                                     The speed threshold that determines the speed is low
                                                   */
volatile const real32_T VehSpd_VehTirRd_CFG1 = 33.415F;/*
                                                          Diag_VehTirRd_PRM equal to zero,Tyre radius size
                                                        */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
