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
 *  Filename:           CtAp_AccrPedlDrv_Global.h
 *  File Creation Date: 30-Aug-2024
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.12
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 30 18:45:47 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  51913 - Fri Aug 30 18:34:56 2024
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_AccrPedlDrv_Global_h_
#define RTW_HEADER_CtAp_AccrPedlDrv_Global_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ChassisMgmt_AccrPedlDrvDesTqLimBefore_Nm;

/* Drive desired torque before limited

 */
extern real32_T ChassisMgmt_AccrPedlDrvDesTqLim_Nm;

/* Drive desired torque after limited

 */
extern real32_T ChassisMgmt_AccrPedlDrvModPrevDesTq_Nm;

/* Drive desired perious torque

 */
extern boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfActv_Flg;

/* Driver switch mode torque through filtered active status:
   0:Not active
   1:Active
 */
extern real32_T ChassisMgmt_AccrPedlDrvModSwTqLpfCoeff;

/* Acceleration pedal drive filtered coeffcent

 */
extern boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfEnty_Flg;

/* Driver switch mode torque entry status:
   0:Not entry
   1:Entry
 */
extern boolean_T ChassisMgmt_AccrPedlDrvModSwTqLpfExit_Flg;

/* Driver switch mode torque exit status:
   0:Not exit
   1:Exit
 */
#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                               /* RTW_HEADER_CtAp_AccrPedlDrv_Global_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
