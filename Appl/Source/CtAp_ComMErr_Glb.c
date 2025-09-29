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
 *  Filename:           CtAp_ComMErr_Glb.c
 *  File Creation Date: 21-May-2025
 *  Model Name:         CtAp_ComMErr
 *  Model Version:      3.0.0
 *  Model Author:       Mike Ni - Fri Aug 16 09:50:02 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed May 21 17:16:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed May 21 17:16:38 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ComMErr_Glb.h"
#include "rtwtypes.h"
#include "CtAp_ComMErr_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_ComMErr_START_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ComM_APTCNodComFailr_Flg;
boolean_T ComM_EPTIBSNodComFailr_Flg;
boolean_T ComM_EVCOMNodComFailr_Flg;
boolean_T ComM_SGWCHNodComFailr_Flg;

#define CtAp_ComMErr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
