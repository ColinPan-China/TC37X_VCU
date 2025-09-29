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
 *  Filename:           CtAp_PwrLim_Glb.h
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_PwrLim_Glb_h_
#define RTW_HEADER_CtAp_PwrLim_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_PwrLim_START_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T EgyMgmt_ErrResEgyMgmtWarnOne;

/* Energy management warning level 1 Err Res */
extern boolean_T EgyMgmt_ErrResEgyMgmtWarnTwo;

/* Energy management warning level 1 Err Res */
extern uint8_T EgyMgmt_MonResEgyMgmtWarnOne;

/* Energy management warning level 1 Mon Res */
extern uint8_T EgyMgmt_MonResEgyMgmtWarnTwo;

/* Energy management warning level 1 Mon Res */
#define CtAp_PwrLim_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_PwrLim_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
