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
 *  Filename:           CtAp_FltReactn_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.2.2
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:22:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:20:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FltReactn_Cal.h"
#include "rtwtypes.h"
#include "CtAp_FltReactn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T FltReactn_BMSErrCfm_CFG = 40U;/*
                                                         BMS Error Confirm Time
                                                       */
volatile const uint16_T FltReactn_BMSInslaErrCfm_CFG = 60U;/*
                                                              Insulation fault Error Confirm Time
                                                            */
volatile const real32_T FltReactn_BMSInslaErrVehSpdCfm_CFG = 10.0F;/*
                                                                      Insulation fault error confirm vehicle speed
                                                                    */
volatile const uint16_T FltReactn_CrashErrCfm_CFG = 60U;/*
                                                           crash Error Confirm Time
                                                         */
volatile const uint16_T FltReactn_DCDCErrCfm_CFG = 600U;/*
                                                           DCDC Error Confirm Time
                                                         */
volatile const uint32_T FltReactn_DCDCErrDlyCfm_CFG = 180000U;/*
                                                                 DCDC Error Delay Confirm Time
                                                               */
volatile const uint16_T FltReactn_DlyHvDwn_CFG = 60000U;/*
                                                           The fault delays the high voltage times
                                                         */
volatile const real32_T FltReactn_ErrLvl5VehSpdLim_CFG = 60.0F;/*
                                                                  Vehicle speed with fault level 5
                                                                */
volatile const real32_T FltReactn_ErrLvl6VehSpdLim_CFG = 20.0F;/*
                                                                  Vehicle speed with fault level 6
                                                                */
volatile const real32_T FltReactn_HVILErrVehSpdCfm_CFG = 10.0F;/*
                                                                  HVIL Error confirm vehicle speed
                                                                */
volatile const uint16_T FltReactn_MCUErrCfm_CFG = 300U;/*
                                                          MCU Error Confirm Time
                                                        */
volatile const uint16_T FltReactn_OBCErrCfm_CFG = 600U;/*
                                                          OBC Error Confirm Time
                                                        */
volatile const uint32_T FltReactn_OBCErrDlyCfm_CFG = 180000U;/*
                                                                OBC Dly Error Confirm Time
                                                              */
volatile const uint16_T FltReactn_TCUErrCfm_CFG = 300U;/*
                                                          TCU Error Confirm Time
                                                        */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
