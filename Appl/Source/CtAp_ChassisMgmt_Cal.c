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
 *  Filename:           CtAp_ChassisMgmt_Cal.c
 *  File Creation Date: 14-Sep-2024
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.35
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 14 10:44:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sat Sep 07 14:16:41 2024
 *
 *
 *******************************************************************************/
#include "CtAp_ChassisMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DrvAsscCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* Volatile memory section */
#define YDF_RVCU_Swc_START_SEC_VAR_INIT_8
#include "YDF_RVCU_Swc_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

volatile const real32_T ChassisMgmt_VehRednRat_CFG = 10.418F;/* Vehicle deceleration ratio */
volatile const real32_T ChassisMgmt_VehTrsmEff_CFG = 0.96F;/* Vehicle efficiency */

#define YDF_RVCU_Swc_STOP_SEC_VAR_INIT_8
#include "YDF_RVCU_Swc_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
