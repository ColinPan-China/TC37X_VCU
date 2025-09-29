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
 *  Filename:           CtAp_SlopEst_Glb.c
 *  File Creation Date: 13-Sep-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.3.0
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 13 13:01:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Sat Sep 13 13:00:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_SlopEst_Glb.h"
#include "rtwtypes.h"
#include "CtAp_SlopEst_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_SlopEst_START_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T SlopEst_Enable;
                    /* Enable the prerequisite for turning on ramp estimation */
uint8_T SlopEst_TestPath;             /* Confirm the jump status in the chart */
real32_T VehMot_SlopGrdLcl1_pct;
real32_T VehMot_SlopGrdLcl2_pct;
real32_T VehMot_YRSAxFltDly_mps2q;
real32_T VehMot_YRSAxFlt_mps2q;

#define CtAp_SlopEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
