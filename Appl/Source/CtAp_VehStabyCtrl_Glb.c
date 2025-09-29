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
 *  Filename:           CtAp_VehStabyCtrl_Glb.c
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.55
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 14:22:46 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 14:14:29 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehStabyCtrl_Glb.h"
#include "rtwtypes.h"
#include "CtAp_VehStabyCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_VehStabyCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStabyCtrl_MemMap.h"  /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_IBSIntvDesIncTq_Nm;
                                   /* Vehicle standby request increase torque */
real32_T ChassisMgmt_IBSIntvDesRednTq_Nm;
                                   /* Vehicle standby request redction torque */
real32_T ChassisMgmt_IBSIntvIncMotTq_Nm;/* ChassisMgmt IBSIntvIncMotTq Nm */
boolean_T ChassisMgmt_IBSIntvIncTqActv_Flg;
/* Vehicle standby increase request torque active status: 0:Not active 1:Active */
real32_T ChassisMgmt_IBSIntvRednMotTq_Nm;/* ChassisMgmt IBSIntvRednMotTq Nm */
boolean_T ChassisMgmt_IBSIntvRednTqActv_Flg;
/* Vehicle standby reduction request torque active status: 0:Not active 1:Active */
boolean_T ChassisMgmt_VehStbCtrlTqAvl_Flg;
/* Vehicle standby request torque available status: 0:Not available 1:Available */
real32_T TorqPahMgmt_IBSIntvIncMaxTq_Nm;/* TorqPahMgmt IBSIntvIncMaxTq Nm */
real32_T TorqPahMgmt_IBSIntvIncMinTq_Nm;/* TorqPahMgmt IBSIntvIncMinTq Nm */
real32_T TorqPahMgmt_IBSIntvRednMaxTq_Nm;/* TorqPahMgmt IBSIntvRednMaxTq Nm */
real32_T TorqPahMgmt_IBSIntvRednMinTq_Nm;/* TorqPahMgmt IBSIntvRednMinTq Nm */

#define CtAp_VehStabyCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStabyCtrl_MemMap.h"  /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
