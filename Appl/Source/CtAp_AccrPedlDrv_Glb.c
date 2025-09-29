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
 *  Filename:           CtAp_AccrPedlDrv_Glb.c
 *  File Creation Date: 10-Sep-2025
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.59
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep 10 14:56:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 09:44:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_AccrPedlDrv_Glb.h"
#include "rtwtypes.h"
#include "CtAp_AccrPedlDrv_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_AccrPedlDesTq_Nm; /* driver desired torque */
real32_T ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm;
                                     /* ChassisMgmt AccrPedlDrvDesFwdPrpTq Nm */
real32_T ChassisMgmt_AccrPedlDrvDesFwdTq_Nm;
                           /* Acceleration pedal drive needs torque in gear D */
real32_T ChassisMgmt_AccrPedlDrvDesRvsTq_Nm;
                           /* Acceleration pedal drive needs torque in gear R */
boolean_T ChassisMgmt_AccrPedlDrvModActv_Flg;
          /* Acceleration pedal drive mode active status: 0:Inactive 1:Active */
real32_T ChassisMgmt_AccrPedlDrvModDesDifTq_Nm;/* Drive desired torque difference */
real32_T ChassisMgmt_AccrPedlVehSpd_kph;
                               /* Acceleration pedal drive used vehicle speed */

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
