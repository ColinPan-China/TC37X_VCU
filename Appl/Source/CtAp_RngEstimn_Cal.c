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
 *  Filename:           CtAp_RngEstimn_Cal.c
 *  File Creation Date: 08-Aug-2025
 *  Model Name:         CtAp_RngEstimn
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:48 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  8 09:14:18 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 08 09:13:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_RngEstimn_Cal.h"
#include "rtwtypes.h"
#include "CtAp_RngEstimn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T RngEstimn_AmbTempCorrnCoeffX_LUT[9] = { -40.0F, -20.0F,
  -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 20.0F, 40.0F } ;
                            /* standard Mileage Temperature Coefficient Xasix */

volatile const real32_T RngEstimn_AmbTempCorrnCoeff_LUT[9] = { 0.5F, 0.6F, 0.8F,
  0.9F, 0.95F, 1.0F, 1.0F, 1.0F, 1.0F } ;
                                  /* standard Mileage Temperature Coefficient */

volatile const real32_T RngEstimn_BMSBattIDcIntglMaxCoeff_CFG = 2.0F;
           /* Dynamic Mileage init battery integral Capacity  max Coefficient */
volatile const uint32_T RngEstimn_BMSBattIDcIntglMax_CFG = 300000000U;
                            /* Dynamic Mileage init battery integral Capacity */
volatile const real32_T RngEstimn_BMSBattIDcIntglMinCoeff_CFG = 0.7F;
            /* Dynamic Mileage init battery integral Capacity min Coefficient */
volatile const real32_T RngEstimn_BMSBattIDcIntglMin_CFG = 1.0F;
                            /* Dynamic Mileage init battery integral Capacity */
volatile const real32_T RngEstimn_BattCurrIntegralInitXAxis_CFG[15] = { -30.0F,
  -25.0F, -20.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F,
  30.0F, 35.0F, 40.0F } ;              /* total mileage min */

volatile const real32_T RngEstimn_BattCurrIntegralInitYAxis_CFG[15] = { 8000.0F,
  7300.0F, 6600.0F, 6000.0F, 5500.0F, 5000.0F, 4700.0F, 4200.0F, 3800.0F,
  3400.0F, 3197.0F, 3197.0F, 3700.0F, 4230.0F, 4500.0F } ;/* total mileage min */

volatile const uint16_T RngEstimn_DynDrvMilgInvld_CFG = 1023U;/* Dynamic Mileage invalid display */
volatile const uint32_T RngEstimn_InitBMSBattCp_CFG = 799200U;
                            /* Dynamic Mileage init battery integral Capacity */
volatile const uint32_T RngEstimn_InitMilg_CFG = 500000U;
                            /* Dynamic Mileage init battery integral Capacity */
volatile const uint32_T RngEstimn_MaxAccuMilg_CFG = 3900000000U;/* total mileage max */
volatile const uint16_T RngEstimn_MaxStdDrvMilg_CFG = 500U;/* Max standard  Mileage */
volatile const uint16_T RngEstimn_MilgLowRmnOff_CFG = 60U;
                                      /* Low drive range reminder off mileage */
volatile const uint16_T RngEstimn_MilgLowRmnOn_CFG = 50U;/* Low drive range reminder on mileage */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
