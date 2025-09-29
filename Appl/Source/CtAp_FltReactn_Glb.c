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
 *  Filename:           CtAp_FltReactn_Glb.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.2.2
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:22:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:20:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FltReactn_Glb.h"
#include "rtwtypes.h"
#include "CtAp_FltReactn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_FltReactn_START_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint8_T ErrMgmt_BMSErrLvl_Enum;
boolean_T ErrMgmt_ChrgCmpl_Flg;
boolean_T ErrMgmt_ChrgInPlug_Flg;
uint8_T ErrMgmt_CrashErrLvl_Enum;
uint8_T ErrMgmt_DCDCErrLvl_Enum;
uint8_T ErrMgmt_HVILErrLvl_Enum;
boolean_T ErrMgmt_HvEnable;
uint8_T ErrMgmt_InslaErrLvl_Enum;
uint8_T ErrMgmt_MCUErrLvl_Enum;
uint8_T ErrMgmt_OBCErrLvl_Enum;
uint8_T ErrMgmt_TCUErrLvl_Enum;

#define CtAp_FltReactn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
