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
 *  Filename:           CtAp_BMSMgmt_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:26:58 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:26:09 2025
 *
 *
 *******************************************************************************/
#include "CtAp_BMSMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_BMSMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T HvMgmt_BMSBattEnaSOC_CFG = 20.0F;
          /* Smart charging Determines the battery SOC in high-voltage scenarios
           */
volatile const uint16_T HvMgmt_BMSHVPowerOff_CFG = 300U;
                         /* BMS relay opened fault DTC set condition time settin
                          */
volatile const uint16_T HvMgmt_BMSHVPowerOn_CFG = 2000U;
                         /* BMS relay opened fault DTC set condition time settin
                          */
volatile const uint16_T HvMgmt_BMSHVPwrOffRsv_CFG = 320U;
                           /* Recovery of the electrical state of HV off for BMS
                            */
volatile const real32_T HvMgmt_BSBattChrgEndSOC_CFG = 90.0F;
                                     /* Low voltage battery charging cut-off SOC
                                      */
volatile const real32_T HvMgmt_BSBattChrgStartSOC_CFG = 75.0F;
                         /* SOC judgment of low-voltage battery charging request
                          */
volatile const boolean_T HvMgmt_EnHVBattRemoteEnSOC_CFG = false;
/* Whether to enable SGW Remote to remotely apply high voltage to determine the battery SOC
 */
volatile const real32_T HvMgmt_HVBattRemoteEnSOC_CFG = 40.0F;
       /* SGW Remote remote high voltage determines the threshold of battery SOC
        */
volatile const uint16_T HvMgmt_LocalHVFailTmr_CFG = 10000U;
                /* Determine the timeout period of high voltage power-on failure
                 */
volatile const real32_T HvMgmt_SmtPwrCompTmr_CFG = 1.8E+7F;
/* After the intelligent wake up, the high voltage is used to determine the timeout period for the DCDC to enter Buck
 */
volatile const real32_T HvMgmt_SmtPwrKeepTmr_CFG = 1.8E+6F;
/* After the intelligent wake up, the high voltage determines that the low-voltage battery does not increase by 1% of the timeout period
 */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
