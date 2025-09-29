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
 *  Filename:           CtAp_AccrPedlDrv_Global.c
 *  File Creation Date: 02-Sep-2024
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.16
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Sep  2 16:55:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  51913 - Mon Sep 02 13:10:30 2024
 *
 *
 *******************************************************************************/
#include "CtAp_AccrPedlDrv_Global.h"
#include "rtwtypes.h"
#include "CtAp_AccrPedlDrv_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_AccrPedlDrvDesTqLimBefore_Nm;/* Drive desired torque before limited

                                                   */
real32_T ChassisMgmt_AccrPedlDrvDesTqLim_Nm;/* Drive desired torque after limited

                                             */
real32_T ChassisMgmt_AccrPedlDrvModPrevDesTq_Nm;/* Drive desired perious torque

                                                 */
boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfActv_Flg;
                    /* Driver switch mode torque through filtered active status:
                       0:Not active
                       1:Active
                     */
real32_T ChassisMgmt_AccrPedlDrvModSwTqLpfCoeff;
                                  /* Acceleration pedal drive filtered coeffcent

                                   */
boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfEnty_Flg;
                                      /* Driver switch mode torque entry status:
                                         0:Not entry
                                         1:Entry
                                       */
boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfExit_Flg;/* Driver switch mode torque exit status:
                                                       0:Not exit
                                                       1:Exit
                                                     */

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
