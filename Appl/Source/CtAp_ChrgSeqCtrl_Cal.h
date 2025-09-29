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
 *  Filename:           CtAp_ChrgSeqCtrl_Cal.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_ChrgSeqCtrl
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:03:55 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 11:02:45 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ChrgSeqCtrl_Cal_h_
#define RTW_HEADER_CtAp_ChrgSeqCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T DCChrMgmt_ChrgSeqDTCEnaTim_CFG;

/* Charge sequsnse DTC enable time */
extern volatile const real32_T DCChrMgmt_DCFCOpnIDCLmt_CFG;

/* DCFC open current limit */
extern volatile const uint16_T DCChrMgmt_DCFCOpnTimLmt_CFG;

/* DCFC open time limit */
extern volatile const uint16_T DCChrMgmt_IRCheckOffTimLmt_CFG;

/* insulation resistance off time limit */
extern volatile const uint16_T DCChrMgmt_IRCheckOnTimLmt_CFG;

/* insulation resistance on time limit */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChrgSeqCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
