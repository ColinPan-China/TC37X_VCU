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
 *  Filename:           CtAp_TorqModMap_Glb.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqModMap_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TorqModMap_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TorqModMap_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T TorqPahMgmt_DesMotTq_Nm;
                           /* The desired torque for electrical machine Motor */

#define CtAp_TorqModMap_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
