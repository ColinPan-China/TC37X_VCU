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
 *  Filename:           CtAp_LINHandler_Glb.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:21:25 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:19:22 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_LINHandler_Glb_h_
#define RTW_HEADER_CtAp_LINHandler_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_LINHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T BS_BSBatSOC_IsUpdated;

/* Whether BS_BSBatSOC message is lost */
extern boolean_T ComM_FRC01_IsUpdated;

/* Whether FRC_01 message is lost */
extern boolean_T ComM_FRCComFtonNet;

/* FRC communication status */
extern boolean_T ComM_FRCNodComFailrInfo;

/* FRC communication lost status */
extern boolean_T ComM_FRCVlOV;

/* FRC overvoltage state */
extern boolean_T ComM_FRCVlUV;

/* FRC under-voltage state */
#define CtAp_LINHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_LINHandler_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
