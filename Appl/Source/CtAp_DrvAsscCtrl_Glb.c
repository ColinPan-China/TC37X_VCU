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
 *  Filename:           CtAp_DrvAsscCtrl_Glb.c
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvAsscCtrl_Glb.h"
#include "rtwtypes.h"
#include "CtAp_DrvAsscCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChassisMgmt_DrvAsscCtrlCmnAvl_Flg;
                              /* Drive Assist Control common condition Status */
boolean_T ChassisMgmt_IBSApsCtrlDesTqOverFltActv_Flg;
  /* APS desired torque over limit fault active status: 0:Not active 1:Active */
real32_T ChassisMgmt_IBSApsDesTq_Nm;   /* APS desired torque */
boolean_T ChassisMgmt_IBSApsReqTqActv_Flg;
                   /* APS request torque active status: 0:Not active 1:Active */
boolean_T ChassisMgmt_IBSApsReqTqAvl_Flg;
          /* APS request torque available status: 0:Not available 1:Available */
boolean_T ChassisMgmt_IBSVlcCtrlDesTqOverFltActv_Flg;
  /* VLC desired torque over limit fault active status: 0:Not active 1:Active */
real32_T ChassisMgmt_IBSVlcDesTq_Nm;   /* VLC desired torque */
boolean_T ChassisMgmt_IBSVlcReqTqActv_Flg;
                   /* VLC request torque active status: 0:Not active 1:Active */
boolean_T ChassisMgmt_IBSVlcReqTqAvl_Flg;
          /* VLC request torque available status: 0:Not available 1:Available */

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
