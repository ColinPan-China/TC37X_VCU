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
 *  Filename:           CtAp_CoastCtrl_Glb.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_CoastCtrl
 *  Model Version:      1.82
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 17:23:01 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 16:20:16 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_CoastCtrl_Glb_h_
#define RTW_HEADER_CtAp_CoastCtrl_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_CoastCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_CoastCtrl_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChassisMgmt_CoastCtrlActv_Flg;

/* coast control active status 0:no active 1:active */
extern real32_T ChassisMgmt_CoastCtrlDesTqGainFac_pct;

/* coast control torque scaling factor */
extern real32_T ChassisMgmt_CoastCtrlDesTq_Nm;

/* coast control  desired torque */
extern real32_T ChassisMgmt_CoastCtrlRawDesTq_Nm;

/* coast control active raw desired torque */
#define CtAp_CoastCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CoastCtrl_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_CoastCtrl_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
