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
 *  Filename:           CtAp_VehStat_Glb.h
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_VehStat
 *  Model Version:      1.10
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 13:36:15 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Sep 04 13:35:55 2024
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_VehStat_Glb_h_
#define RTW_HEADER_CtAp_VehStat_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_VehStat_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern uint8_T ModMgmt_HvSts_Enum;

/* Monitor variable signal for ModMgmt_HvSts_Enum! */
extern boolean_T ModMgmt_ReqSleep_Flg;

/* Monitor variable signal for ModMgmt_ReqSleep_Flg! */
extern boolean_T ModMgmt_SysRdy_Flg;

/* Monitor variable signal for ModMgmt_SysRdy_Flg! */
#define CtAp_VehStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_VehStat_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
