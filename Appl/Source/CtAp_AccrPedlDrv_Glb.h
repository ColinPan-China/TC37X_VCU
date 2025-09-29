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
 *  Filename:           CtAp_AccrPedlDrv_Glb.h
 *  File Creation Date: 18-Aug-2025
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.57
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug 18 18:08:29 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Aug 18 18:06:08 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_AccrPedlDrv_Glb_h_
#define RTW_HEADER_CtAp_AccrPedlDrv_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ChassisMgmt_AccrPedlDesTq_Nm;

/* driver desired torque */
extern real32_T ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm;

/* ChassisMgmt AccrPedlDrvDesFwdPrpTq Nm */
extern real32_T ChassisMgmt_AccrPedlDrvDesFwdTq_Nm;

/* Acceleration pedal drive needs torque in gear D */
extern real32_T ChassisMgmt_AccrPedlDrvDesRvsTq_Nm;

/* Acceleration pedal drive needs torque in gear R */
extern boolean_T ChassisMgmt_AccrPedlDrvModActv_Flg;

/* Acceleration pedal drive mode active status: 0:Inactive 1:Active */
extern real32_T ChassisMgmt_AccrPedlDrvModDesDifTq_Nm;

/* Drive desired torque difference */
extern real32_T ChassisMgmt_AccrPedlVehSpd_kph;

/* Acceleration pedal drive used vehicle speed */
#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_AccrPedlDrv_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
