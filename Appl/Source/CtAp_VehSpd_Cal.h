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
 *  Filename:           CtAp_VehSpd_Cal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:24:00 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:21:46 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_VehSpd_Cal_h_
#define RTW_HEADER_CtAp_VehSpd_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T VehMot_VehTirRd_CFG2;

/*
   Diag_VehTirRd_PRM equal to one,Tyre radius size
 */
extern volatile const real32_T VehSpd_CycleDt_CFG;

/*
   Low-pass filtering coefficient of vehspd module
 */
extern volatile const real32_T VehSpd_InvalidSpd_CFG;

/*
   The value of the speed when the speed is invalid
 */
extern volatile const real32_T VehSpd_MCUSpdRat_CFG;

/*
   Motor to wheel gear ratio
 */
extern volatile const real32_T VehSpd_MCUVehSpdLPFTc_CFG;

/*
   Calculate the low-pass filtering coefficient of vehicle speed according to mcu
 */
extern volatile const real32_T VehSpd_SpdGearDDif_CFG;

/*
   The MCU speed at D gear that thinks the direction of the vehicle is opposite to the gear
 */
extern volatile const real32_T VehSpd_SpdGearDRcvr_CFG;

/*
   If the car body is in the opposite direction of the gear in D gear, then changing CFG means restoring the mcu speed of this situation
 */
extern volatile const real32_T VehSpd_SpdGearRDif_CFG;

/*
   If the car body is in the opposite direction of the gear in R gear, then changing CFG means restoring the mcu speed of this situation
 */
extern volatile const real32_T VehSpd_SpdGearRRcvr_CFG;

/*
   In R gear the body direction is different to recover the mcu speed
 */
extern volatile const uint16_T VehSpd_VehDrvDirTimCfm_CFG;

/*
   Judging time according to the delay of the mcu to judge the direction of the vehicle
 */
extern volatile const real32_T VehSpd_VehStdl_CFG;

/*
   The speed threshold that determines the speed is low
 */
extern volatile const real32_T VehSpd_VehTirRd_CFG1;

/*
   Diag_VehTirRd_PRM equal to zero,Tyre radius size
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_VehSpd_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
