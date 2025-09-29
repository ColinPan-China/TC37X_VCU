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
 *  Filename:           CtAp_TrsmProtd_Glb.h
 *  File Creation Date: 27-Mar-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.40
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Mar 27 15:19:22 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Mar 27 15:00:27 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TrsmProtd_Glb_h_
#define RTW_HEADER_CtAp_TrsmProtd_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_TrsmProtd_START_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T TorqPahMgmt_MotDftlProtnActv_Flg;

/* Motor Differential Protection Active status */
extern real32_T TorqPahMgmt_TramProtdLmtMaxTq_Nm;

/* Motor Differential Protection max torque */
extern real32_T TorqPahMgmt_TramProtdLmtMinTq_Nm;

/* Motor Differential Protection min torque */
#define CtAp_TrsmProtd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TrsmProtd_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
