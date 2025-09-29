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
 *  Filename:           CtAp_SpdLmt_Glb.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_SpdLmt_Glb_h_
#define RTW_HEADER_CtAp_SpdLmt_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_SpdLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_SpdLmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern uint8_T TorqPahMgmt_DftFwdMaxSpd_kph;

/* Default maximum speed limit
 */
extern boolean_T TorqPahMgmt_FwdMaxSpdSts_Flg;

/* Monitor variable signal for TorqPahMgmt_FwdMaxSpdSts_Flg */
extern real32_T TorqPahMgmt_FwdMaxVehSpdCnvr_kph;

/* IVI set vehcile limit speed convert software use limit speed */
extern uint8_T TorqPahMgmt_FwdMaxVehSpd_kph;

/* Monitor variable signal for TorqPahMgmt_FwdMaxVehSpd_Enum */
extern uint8_T TorqPahMgmt_IVIFwdVehSpdAllwd_kph;

/* IVI set vehcile limit speed convert CAN speed limit */
extern real32_T TorqPahMgmt_MaxVehSpdLmtFbTq_Nm;

/* Max Limit Speed Feadback control torque */
extern real32_T TorqPahMgmt_MaxVehSpdLmtPidTq_Nm;

/* Max Limit Speed PID control no limit torque */
extern boolean_T TorqPahMgmt_MaxVehSpdLmtTqSts_Flg;

/* Monitor variable signal for TorqPahMgmt_MaxVehSpdLmtTqSts_Flg */
extern real32_T TorqPahMgmt_MaxVehSpdLmtTq_Nm;

/* Monitor variable signal for TorqPahMgmt_MaxVehSpdLmtTq_Nm! */
extern real32_T TorqPahMgmt_MaxVehSpdTq_Nm;

/* Max Limit Speed control Calculate torque */
extern real32_T TorqPahMgmt_MaxVehSpd_kph;

/* software use vehcile max limit speed */
#define CtAp_SpdLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SpdLmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_SpdLmt_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
