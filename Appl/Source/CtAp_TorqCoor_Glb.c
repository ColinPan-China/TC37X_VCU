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
 *  Filename:           CtAp_TorqCoor_Glb.c
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqCoor_Glb.h"
#include "rtwtypes.h"
#include "CtAp_TorqCoor_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_TorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T TorqPahMgmt_DesCoorrDeltaTq_Nm;
/* delta difference between filtered desired torque and prefiltered desired propulsion torque */
real32_T TorqPahMgmt_DesCoorrTq_Nm; /* esp interventions desired torque value */
real32_T TorqPahMgmt_DesCoorrUnFilTq_Nm;
                             /* esp interventions filter desired torque value */
real32_T TorqPahMgmt_GrdTqCoorrNegTq_Nm;
                              /* esp interventions filter negative ramp value */
real32_T TorqPahMgmt_GrdTqCoorrPosTq_Nm;
                               /* esp interventions filter postive ramp value */
boolean_T TorqPahMgmt_IBSIntvRampShOffCdn_Flg;
                                      /* ESP interventions Exit filter status */
boolean_T TorqPahMgmt_IBSIntvShOffCdn_Flg;
                                      /* ESP interventions Exit filter status */

#define CtAp_TorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
