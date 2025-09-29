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
 *  Filename:           CtAp_PdlAlys_Cal.c
 *  File Creation Date: 19-Aug-2025
 *  Model Name:         CtAp_PdlAlys
 *  Model Version:      1.260
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug 19 13:32:42 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 13:32:00 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PdlAlys_Cal.h"
#include "rtwtypes.h"
#include "CtAp_PdlAlys_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChassisMgmt_AccrPedl1RatLnrX_LUT[4] = { 637.0F, 870.0F,
  4160.0F, 4682.0F } ;       /* Acceleration pedal1 position calculate votage */

volatile const real32_T ChassisMgmt_AccrPedl1RatLnr_LUT[4] = { 0.0F, 0.0F,
  100.0F, 100.0F } ;
                  /* Acceleration pedal1 linearity curve according to voltage */

volatile const real32_T ChassisMgmt_AccrPedl1Usub_CFG = 640.0F;
                /* Accrleration pedal 1 fault active voltage substitute value */
volatile const real32_T ChassisMgmt_AccrPedl2RatLnrX_LUT[4] = { 318.0F, 435.0F,
  2080.0F, 2341.0F } ;       /* Acceleration pedal2 position calculate votage */

volatile const real32_T ChassisMgmt_AccrPedl2RatLnr_LUT[4] = { 0.0F, 0.0F,
  100.0F, 100.0F } ;
                  /* Acceleration pedal2 linearity curve according to voltage */

volatile const real32_T ChassisMgmt_AccrPedl2Usub_CFG = 320.0F;
                /* Accrleration pedal 2 fault active voltage substitute value */
volatile const real32_T ChassisMgmt_AccrPedlKdOffPosn_CFG = 88.0F;
                                    /* Accrleration pedal Kick down off value */
volatile const real32_T ChassisMgmt_AccrPedlKdOnPosn_CFG = 90.1F;
                                     /* Accrleration pedal Kick down on value */
volatile const real32_T ChassisMgmt_AccrPedlPosnMax_CFG = 100.0F;/* Accrleration pedal Max positon */
volatile const real32_T ChassisMgmt_AccrPedlPosnMin_CFG = 0.0F;/* Accrleration pedal min positon */
volatile const real32_T ChassisMgmt_AccrPedlPosnPreUnJitter_CFG = 10.0F;
   /* Voltage threshold which is used for the unjittering the sensor signal 1 */
volatile const real32_T ChassisMgmt_AccrPedlPosnSubDft_CFG = 20.0F;/* Accrleration pedal substitute value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG = 400U;
              /* Accrleration pedal 1 Power Supply Voltage  fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG = 1000U;
                   /* Accrleration pedal 1 Power Supply Voltage demature time */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1HiThd_CFG = 0U;
/* Accrleration pedal  Power Supply Voltage 1 upper voltage  Threshold value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1Hi_CFG = 7500U;
     /* Accrleration pedal 1 Power Supply Voltage 1 upper voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1LoThd_CFG = 0U;
/* Accrleration pedal 1 Power Supply Voltage 1 upper voltage  Threshold value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1Lo_CFG = 3500U;
      /* Accrleration pedal 1 Power Supply Voltage  upper voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG = 400U;
              /* Accrleration pedal 2 Power Supply Voltage  fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG = 1000U;
                   /* Accrleration pedal 2 Power Supply Voltage demature time */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2HiThd_CFG = 0U;
  /* Accrleration pedal Power Supply Voltage 2 upper voltage  Threshold value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2Hi_CFG = 7500U;
     /* Accrleration pedal 1 Power Supply Voltage 2 upper voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2LoThd_CFG = 0U;
/* Accrleration pedal 1 Power Supply Voltage  upper voltage  Threshold value */
volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2Lo_CFG = 3500U;
      /* Accrleration pedal 2 Power Supply Voltage  upper voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlUPreUnJitter2_CFG = 1000.0F;
   /* Voltage threshold which is used for the unjittering the sensor signal 2 */
volatile const real32_T ChassisMgmt_AccrPedlUPreUnJitter_CFG = 2000.0F;
   /* Voltage threshold which is used for the unjittering the sensor signal 1 */
volatile const uint16_T ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG = 400U;
     /* Accrleration pedal1 higher than upper voltage volue fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG = 1000U;
   /* Accrleration pedal1 higher than upper voltage volue fault demature time */
volatile const real32_T ChassisMgmt_AccrPedlURaw1HiThd_CFG = 50.0F;
                            /* Accrleration pedal 1 upper voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlURaw1Hi_CFG = 4682.0F;
                            /* Accrleration pedal 1 upper voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG = 400U;
      /* Accrleration pedal1 lower than lower voltage volue fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG = 1000U;
    /* Accrleration pedal1 lower than lower voltage volue fault demature time */
volatile const real32_T ChassisMgmt_AccrPedlURaw1LoThd_CFG = 50.0F;
                            /* Accrleration pedal 1 upper voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlURaw1Lo_CFG = 637.0F;
                            /* Accrleration pedal 1 lower voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG = 400U;
     /* Accrleration pedal2 higher than upper voltage value fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG = 1000U;
   /* Accrleration pedal2 higher than upper voltage value fault demature time */
volatile const real32_T ChassisMgmt_AccrPedlURaw2HiThd_CFG = 50.0F;
                            /* Accrleration pedal 1 upper voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlURaw2Hi_CFG = 2341.0F;
                            /* Accrleration pedal 2 upper voltage limit value */
volatile const uint16_T ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG = 400U;
      /* Accrleration pedal2 lower than lower voltage volue fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG = 1000U;
    /* Accrleration pedal2 lower than lower voltage volue fault demature time */
volatile const real32_T ChassisMgmt_AccrPedlURaw2LoThd_CFG = 50.0F;
                            /* Accrleration pedal 1 upper voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlURaw2Lo_CFG = 318.0F;
                            /* Accrleration pedal 2 lower voltage limit value */
volatile const real32_T ChassisMgmt_AccrPedlURawDTCEnaTim_CFG = 1500.0F;
/* Accrleration pedal1 higher than upper voltage volue fault DTC enable Time */
volatile const uint16_T ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG = 400U;
                    /* Accrleration pedal1 and 2 difference fault mature time */
volatile const uint16_T ChassisMgmt_AccrPedlURawDifDebOkTim_CFG = 1000U;
                  /* Accrleration pedal1 and 2 difference fault demature time */
volatile const real32_T ChassisMgmt_AccrPedlURawDifThd_CFG = 0.0F;
                   /* Accrleration pedal 1 and 2 difference value limit value */
volatile const real32_T ChassisMgmt_AccrPedlURawDif_CFG = 500.0F;
                   /* Accrleration pedal 1 and 2 difference value limit value */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
