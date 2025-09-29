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
 *  Filename:           CtAp_RngEstimn_Cal.h
 *  File Creation Date: 08-Aug-2025
 *  Model Name:         CtAp_RngEstimn
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:48 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  8 09:14:18 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 08 09:13:21 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_RngEstimn_Cal_h_
#define RTW_HEADER_CtAp_RngEstimn_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T RngEstimn_AmbTempCorrnCoeffX_LUT[9];

/* standard Mileage Temperature Coefficient Xasix */
extern volatile const real32_T RngEstimn_AmbTempCorrnCoeff_LUT[9];

/* standard Mileage Temperature Coefficient */
extern volatile const real32_T RngEstimn_BMSBattIDcIntglMaxCoeff_CFG;

/* Dynamic Mileage init battery integral Capacity  max Coefficient */
extern volatile const uint32_T RngEstimn_BMSBattIDcIntglMax_CFG;

/* Dynamic Mileage init battery integral Capacity */
extern volatile const real32_T RngEstimn_BMSBattIDcIntglMinCoeff_CFG;

/* Dynamic Mileage init battery integral Capacity min Coefficient */
extern volatile const real32_T RngEstimn_BMSBattIDcIntglMin_CFG;

/* Dynamic Mileage init battery integral Capacity */
extern volatile const real32_T RngEstimn_BattCurrIntegralInitXAxis_CFG[15];

/* total mileage min */
extern volatile const real32_T RngEstimn_BattCurrIntegralInitYAxis_CFG[15];

/* total mileage min */
extern volatile const uint16_T RngEstimn_DynDrvMilgInvld_CFG;

/* Dynamic Mileage invalid display */
extern volatile const uint32_T RngEstimn_InitBMSBattCp_CFG;

/* Dynamic Mileage init battery integral Capacity */
extern volatile const uint32_T RngEstimn_InitMilg_CFG;

/* Dynamic Mileage init battery integral Capacity */
extern volatile const uint32_T RngEstimn_MaxAccuMilg_CFG;

/* total mileage max */
extern volatile const uint16_T RngEstimn_MaxStdDrvMilg_CFG;

/* Max standard  Mileage */
extern volatile const uint16_T RngEstimn_MilgLowRmnOff_CFG;

/* Low drive range reminder off mileage */
extern volatile const uint16_T RngEstimn_MilgLowRmnOn_CFG;

/* Low drive range reminder on mileage */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_RngEstimn_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
