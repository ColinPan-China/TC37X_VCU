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
 *  Filename:           CtAp_DrvMod_Glb.h
 *  File Creation Date: 26-May-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.1.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 26 16:27:47 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu May 22 10:55:41 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DrvMod_Glb_h_
#define RTW_HEADER_CtAp_DrvMod_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_DrvMod_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ModMgmt_ErrResOnePedlWarnHiSpd;

/* The Err result of driving mode fault level three */
extern boolean_T ModMgmt_ErrResOnePedlWarnVehFaild;

/* The Err result of driving mode fault level two */
extern boolean_T ModMgmt_ErrResSptModWarnLoSOC;

/* The Err result of driving mode fault level two */
extern uint8_T ModMgmt_MonResOnePedlWarnHiSpd;

/* The Mon result of driving mode fault level three */
extern uint8_T ModMgmt_MonResOnePedlWarnVehFaild;

/* The Mon result of driving mode fault level two */
extern uint8_T ModMgmt_MonResSptModWarnLoSOC;

/* The Mon result of driving mode fault level two */
#define CtAp_DrvMod_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DrvMod_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
