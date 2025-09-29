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
 *  Filename:           CtAp_CnsCalcn_Glb.c
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_CnsCalcn
 *  Model Version:      1.12
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:10 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 17:31:11 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Sep 04 17:30:34 2024
 *
 *
 *******************************************************************************/
#include "CtAp_CnsCalcn_Glb.h"
#include "rtwtypes.h"
#include "CtAp_CnsCalcn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_CnsCalcn_START_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T EgyMgmt_ACSysPwrCnsCalcn_Kw;
                  /* Monitor variable signal for EgyMgmt_ACSysPwrCnsCalcn_Kw! */
real32_T EgyMgmt_AvgMCUPwrCnsCalcn_Kw;
                 /* Monitor variable signal for EgyMgmt_AvgMCUPwrCnsCalcn_Kw! */
real32_T EgyMgmt_DCDCPwrCnsCalcn_Kw;
                   /* Monitor variable signal for EgyMgmt_DCDCPwrCnsCalcn_Kw! */
real32_T EgyMgmt_MCUPwrCnsCalcn_Kw;
                    /* Monitor variable signal for EgyMgmt_MCUPwrCnsCalcn_Kw! */
real32_T EgyMgmt_PackPTCPwrCnsCalcn_Kw;
                /* Monitor variable signal for EgyMgmt_PackPTCPwrCnsCalcn_Kw! */
real32_T EgyMgmt_V2LPwrCnsCalcn_Kw;
                    /* Monitor variable signal for EgyMgmt_V2LPwrCnsCalcn_Kw! */

#define CtAp_CnsCalcn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
