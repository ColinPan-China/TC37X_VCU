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
 *  Filename:           CtAp_WakeUpRsn_Glb.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_WakeUpRsn_Glb.h"
#include "rtwtypes.h"
#include "CtAp_WakeUpRsn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_WakeUpRsn_START_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ComM_BMSAWBDeal;             /* BMS_AWB signal processing */
boolean_T ComM_BMSPNC15Deal;           /* BMS_PNC15 signal processing */
boolean_T ComM_CGWAWBDeal;             /* CGW_AWB signal processing */
boolean_T ComM_CGWPNC15Deal;           /* CGW_PNC15 signal processing */
boolean_T Ecu_CHCANWakeStatusDeal;   /* Ecu_CHCANWakeStatus signal processing */
boolean_T Ecu_LinWakeStatus_CntReset;  /* Reason ofThe change of LIN wake */
boolean_T Ecu_PTCANWakeStatusDeal;   /* Ecu_PTCANWakeStatus signal processing */
boolean_T Ecu_SelfWakeStatus_CntReset; /* Reason ofThe change of Self wake */

#define CtAp_WakeUpRsn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
