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
 *  Filename:           CtAp_VehStat_Glb.c
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_VehStat
 *  Model Version:      1.10
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 13:36:15 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Sep 04 13:35:55 2024
 *
 *
 *******************************************************************************/
#include "CtAp_VehStat_Glb.h"
#include "rtwtypes.h"
#include "CtAp_VehStat_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_VehStat_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint8_T ModMgmt_HvSts_Enum;/* Monitor variable signal for ModMgmt_HvSts_Enum! */
boolean_T ModMgmt_ReqSleep_Flg;
                         /* Monitor variable signal for ModMgmt_ReqSleep_Flg! */
boolean_T ModMgmt_SysRdy_Flg;
                           /* Monitor variable signal for ModMgmt_SysRdy_Flg! */

#define CtAp_VehStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
