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
 *  Filename:           CtAp_MCUMgmt_Cal.c
 *  File Creation Date: 21-Aug-2025
 *  Model Name:         CtAp_MCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:17:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug 21 10:52:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Aug 21 10:37:51 2025
 *
 *
 *******************************************************************************/
#include "CtAp_MCUMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_MCUMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const boolean_T HvMgmt_EnableBCMImmoSts_CFG = true;
                                   /* The BCM Immo calibration value was enabled
                                    */
volatile const uint16_T HvMgmt_MCUClsFltDTCEnaSetTim_CFG = 1500U;
                                   /* MCU closed fault DTC enable condition Time
                                    */
volatile const uint16_T HvMgmt_MCUClsFltDTCResetTim_CFG = 1000U;
                                    /* MCU closed fault DTC reset condition Time
                                     */
volatile const uint16_T HvMgmt_MCUClsFltDTCSetTim_CFG = 200U;
                                      /* MCU closed fault DTC set condition Time
                                       */
volatile const uint16_T HvMgmt_MCUEnaFltDTCEnaSetTim_CFG = 1500U;
                                  /* MCU enables fault DTC enable condition time
                                   */
volatile const uint16_T HvMgmt_MCUEnaFltDTCSetTim_CFG = 200U;
                                     /* MCU enables fault DTC set condition time
                                      */
volatile const uint16_T HvMgmt_MCUHVPowerOnTim_CFG = 300U;
                    /* The MCU enters the Ready fault DTC set condition one time
                     */
volatile const uint16_T HvMgmt_MCURdyFltCheckTim_CFG = 100U;
                    /* The MCU enters the Ready fault DTC set condition two time
                     */
volatile const uint16_T HvMgmt_MCURdyFltDTCEnaSetTim_CFG = 1500U;
                     /* The MCU enters the Ready fault DTC enable condition time
                      */
volatile const uint16_T HvMgmt_MCURdyFltSetTim_CFG = 300U;
                        /* The MCU enters the Ready fault DTC set condition time
                         */
volatile const real32_T HvMgmt_MotActTqDwn_CFG = -3.0F;/* MCU actual torque lower edge set value
                                                        */
volatile const uint16_T HvMgmt_MotActTqFltSetTim_CFG = 2000U;/* MCU actual torque failure setting time
                                                              */
volatile const real32_T HvMgmt_MotActTqUp_CFG = 3.0F;/* MCU actual torque upper edge set value
                                                      */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
