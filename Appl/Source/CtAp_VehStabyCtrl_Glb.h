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
 *  Filename:           CtAp_VehStabyCtrl_Glb.h
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.55
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 14:22:46 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 14:14:29 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_VehStabyCtrl_Glb_h_
#define RTW_HEADER_CtAp_VehStabyCtrl_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_VehStabyCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStabyCtrl_MemMap.h"  /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ChassisMgmt_IBSIntvDesIncTq_Nm;

/* Vehicle standby request increase torque */
extern real32_T ChassisMgmt_IBSIntvDesRednTq_Nm;

/* Vehicle standby request redction torque */
extern real32_T ChassisMgmt_IBSIntvIncMotTq_Nm;

/* ChassisMgmt IBSIntvIncMotTq Nm */
extern boolean_T ChassisMgmt_IBSIntvIncTqActv_Flg;

/* Vehicle standby increase request torque active status: 0:Not active 1:Active */
extern real32_T ChassisMgmt_IBSIntvRednMotTq_Nm;

/* ChassisMgmt IBSIntvRednMotTq Nm */
extern boolean_T ChassisMgmt_IBSIntvRednTqActv_Flg;

/* Vehicle standby reduction request torque active status: 0:Not active 1:Active */
extern boolean_T ChassisMgmt_VehStbCtrlTqAvl_Flg;

/* Vehicle standby request torque available status: 0:Not available 1:Available */
extern real32_T TorqPahMgmt_IBSIntvIncMaxTq_Nm;

/* TorqPahMgmt IBSIntvIncMaxTq Nm */
extern real32_T TorqPahMgmt_IBSIntvIncMinTq_Nm;

/* TorqPahMgmt IBSIntvIncMinTq Nm */
extern real32_T TorqPahMgmt_IBSIntvRednMaxTq_Nm;

/* TorqPahMgmt IBSIntvRednMaxTq Nm */
extern real32_T TorqPahMgmt_IBSIntvRednMinTq_Nm;

/* TorqPahMgmt IBSIntvRednMinTq Nm */
#define CtAp_VehStabyCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStabyCtrl_MemMap.h"  /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_VehStabyCtrl_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
