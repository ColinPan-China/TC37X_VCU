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
 *  Filename:           CtAp_TorqLmt_Glb.c
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.161
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:32:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:31:46 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqLmt_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TorqLmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TorqLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T TorqPahMgmt_BattQstyMaxTq_Nm;
                    /* BMS The Quasi stationary Primary axle discharge torque */
real32_T TorqPahMgmt_BattQstyMinTq_Nm;
                           /* BMS Quasi stationary Primary axle charge torque */
real32_T TorqPahMgmt_EmacQstyMaxTq_Nm; /* VCU Quasi stationary min torque */
real32_T TorqPahMgmt_EmacQstyMinTq_Nm;
                                   /* VCU Quasi stationary Primary min torque */
real32_T TorqPahMgmt_MaxMotExtChartcTq_Nm;
                            /* Max torque Motor External Characteristic Limit */
real32_T TorqPahMgmt_MinMotExtChartcTq_Nm;
                            /* Min torque Motor External Characteristic Limit */
real32_T TorqPahMgmt_MotActSpdAbsFil_rpm;/* motor speed filter value */
real32_T TorqPahMgmt_MotEff_pct;       /* motor Efficiency */
real32_T TorqPahMgmt_QstyMaxLmtTq_Nm;
                              /* no err limit the Quasi stationary max torque */
real32_T TorqPahMgmt_QstyMinLmtTq_Nm;
                              /* no err limit the Quasi stationary min torque */
real32_T TorqPahMgmt_VehDrvEff_pct;    /* vehicle drive Efficiency */

#define CtAp_TorqLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
