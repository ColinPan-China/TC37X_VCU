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
 *  Filename:           CtAp_LvBattMgmt_Cal.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 *******************************************************************************/
#include "CtAp_LvBattMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_LvBattMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T LvMgmt_BSBattCHGIDcDTCResetTim_CFG = 1000U;
                /* Reset time of DTC for Low voltage battery charge over current
                 */
volatile const uint16_T LvMgmt_BSBattCHGIDcDTCSetTim_CFG = 5000U;
                  /* Set time of DTC for Low voltage battery charge over current
                   */
volatile const uint16_T LvMgmt_BSBattDSGIDcDTCResetTim_CFG = 1000U;
             /* Reset time of DTC for Low voltage battery discharge over current
              */
volatile const uint16_T LvMgmt_BSBattDSGIDcDTCSetTim_CFG = 5000U;
               /* Set time of DTC for Low voltage battery discharge over current
                */
volatile const uint16_T LvMgmt_BSBattSOCLoDTCResetTim_CFG = 1000U;
                          /* Reset time of DTC for Low voltage battery under SOC
                           */
volatile const uint16_T LvMgmt_BSBattSOCLoDTCSetTim_CFG = 5000U;
                            /* Set time of DTC for Low voltage battery under SOC
                             */
volatile const real32_T LvMgmt_BSBattSOCLo_CFG = 30.0F;
                                      /* The SOC of low-voltage batteries is low
                                       */
volatile const uint16_T LvMgmt_BSBattTempHiDTCResetTim_CFG = 1000U;
                  /* Reset time of DTC for Low voltage battery under temperature
                   */
volatile const uint16_T LvMgmt_BSBattTempHiDTCSetTim_CFG = 5000U;
                    /* Set time of DTC for Low voltage battery under temperature
                     */
volatile const uint16_T LvMgmt_BSBattTempLoDTCResetTim_CFG = 1000U;
                   /* Reset time of DTC for Low voltage battery over temperature
                    */
volatile const uint16_T LvMgmt_BSBattTempLoDTCSetTim_CFG = 5000U;
                     /* Set time of DTC for Low voltage battery over temperature
                      */
volatile const uint16_T LvMgmt_BSBattUDcHiDTCResetTim_CFG = 1000U;
                       /* Reset time of DTC for Low voltage battery over voltage
                        */
volatile const uint16_T LvMgmt_BSBattUDcHiDTCSetTim_CFG = 5000U;
                         /* Set time of DTC for Low voltage battery over voltage
                          */
volatile const real32_T LvMgmt_BSBattUDcHi_CFG = 16000.0F;
     /* Maximum threshold for determining the voltage of the low-voltage battery
      */
volatile const uint16_T LvMgmt_BSBattUDcLoDTCResetTim_CFG = 1000U;
                      /* Reset time of DTC for Low voltage battery below voltage
                       */
volatile const uint16_T LvMgmt_BSBattUDcLoDTCSetTim_CFG = 5000U;
                        /* Set time of DTC for Low voltage battery below voltage
                         */
volatile const real32_T LvMgmt_BSBattUDcLo_CFG = 9000.0F;
     /* Minimum threshold for determining the voltage of the low-voltage battery
      */
volatile const real32_T LvMgmt_BSIBattHi_CFG = 15.0F;
                                 /* The current of low-voltage batteries is high
                                  */
volatile const real32_T LvMgmt_BSIBattLo_CFG = -800.0F;
                                  /* The current of low-voltage batteries is low
                                   */
volatile const real32_T LvMgmt_BSTBattHi_CFG = 70.0F;
                             /* The temperature of low-voltage batteries is high
                              */
volatile const real32_T LvMgmt_BSTBattLo_CFG = -35.0F;
                              /* The temperature of low-voltage batteries is low
                               */
volatile const real32_T LvMgmt_BSUBattHi_CFG = 16.0F;
                                 /* The voltage of low-voltage batteries is high
                                  */
volatile const real32_T LvMgmt_BSUBattLo_CFG = 9.0F;
                                  /* The voltage of low-voltage batteries is low
                                   */
volatile const real32_T LvMgmt_LVLevel1LmtSOC_CFG = 60.0F;
                          /* Low-voltage battery warning level one SOC threshold
                           */
volatile const real32_T LvMgmt_LVLevel2LmtSOC_CFG = 50.0F;
                          /* Low-voltage battery warning level two SOC threshold
                           */
volatile const real32_T LvMgmt_LVLevel3LmtSOC_CFG = 40.0F;
                        /* Low-voltage battery warning level three SOC threshold
                         */
volatile const real32_T LvMgmt_LVLevelLmtResetSOC_CFG = 2.0F;
                        /* Low-voltage battery warning level reset SOC threshold
                         */
volatile const real32_T LvMgmt_LVSOHExitWarn_CFG = 15.0F;
                         /* Low voltage battery SOH exit warning state threshold
                          */
volatile const real32_T LvMgmt_LVSOHWarn_CFG = 10.0F;
                                    /* Low voltage battery SOH warning threshold
                                     */
volatile const uint16_T LvMgmt_LvSysUDcHiEnaSetTim_CFG = 1500U;
                  /* Enable time of DTC for low-voltage system overvoltage fault
                   */
volatile const real32_T LvMgmt_LvSysUDcHiReset_CFG = 15000.0F;
                   /* Reset time of DTC for low-voltage system overvoltage fault
                    */
volatile const real32_T LvMgmt_LvSysUDcHiSet_CFG = 16000.0F;
                     /* Set time of DTC for low-voltage system overvoltage fault
                      */
volatile const uint16_T LvMgmt_LvSysUDcLoEnaSetTim_CFG = 1500U;
                 /* Enable time of DTC for low-voltage system undervoltage fault
                  */
volatile const real32_T LvMgmt_LvSysUDcLoReset_CFG = 10000.0F;
                 /* Reset time of DTC for low-voltage system undervoltage  fault
                  */
volatile const real32_T LvMgmt_LvSysUDcLoSet_CFG = 9000.0F;
                   /* Set time of DTC for low-voltage system undervoltage  fault
                    */
volatile const uint16_T LvMgmt_LvSysUDcResetTim_CFG = 1000U;
  /* Reset time of DTC for low-voltage system overvoltage or undervoltage  fault
   */
volatile const uint16_T LvMgmt_LvSysUDcSetTim_CFG = 1000U;
    /* Set time of DTC for low-voltage system overvoltage or undervoltage  fault
     */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
