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
 *  Filename:           CtAp_CrpCtrl_Glb.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CrpCtrl_Glb.h"
#include "rtwtypes.h"
#include "CtAp_CrpCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_CrpCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_CrpCtrlDesFbTq_Nm;
                                     /* Creep control demand feedback  torque */
real32_T ChassisMgmt_CrpCtrlDesPidKiTq_Nm;/* Creep control demand Pid  ki torque */
real32_T ChassisMgmt_CrpCtrlDesPidKpTq_Nm;/* Creep control pid Kp torque */
real32_T ChassisMgmt_CrpCtrlDesPidTq_Nm;/* Creep control demand Pid  torque */
real32_T ChassisMgmt_CrpCtrlDesSteerGearAgTq_Nm;
                                 /* Creep control desired Steering Gear Angle */
real32_T ChassisMgmt_CrpCtrlDesTq_Nm;  /* Creep control desired creep torque */
real32_T ChassisMgmt_CrpCtrlDesVehSpdDif_kph;
           /* Creep control difference in used vehcile speed and demand speed */
real32_T ChassisMgmt_CrpCtrlDesVehSpd_kph;/* Creep control desire  vehicle speed */
boolean_T ChassisMgmt_CrpCtrlPidKiStatnCdn_Flg;
                            /* Creep control Pid  ki torque saturation status */
boolean_T ChassisMgmt_CrpCtrlSts_Flg;
                          /* creep control  Active status 1:Active 0:Inactive */

#define CtAp_CrpCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
