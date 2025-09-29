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
 *  Filename:           CtAp_ChrgStat_Cal.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_ChrgStat
 *  Model Version:      1.014
 *  Model Author:       Mike Ni - Fri Aug 16 10:06:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 14:36:52 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Sep 11 14:35:06 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ChrgStat_Cal_h_
#define RTW_HEADER_CtAp_ChrgStat_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T ChrMgmt_ACGearPWaitTim_CFG;

/* Time limit of Gear P check in AC Charge */
extern volatile const uint16_T ChrMgmt_AcChrgWaitTim_CFG;

/* AC Charge wait time when AC Flow start */
extern volatile const uint16_T ChrMgmt_CC2ChkActvCfmTim_CFG;

/* CC2 check active time limit */
extern volatile const uint16_T ChrMgmt_CC2ChkActvUDcLowr_CFG;

/* CC2 check lower limit */
extern volatile const uint16_T ChrMgmt_CC2ChkActvUDcUppr_CFG;

/* CC2 check upper limit */
extern volatile const uint16_T ChrMgmt_CC2ChkInvldCfmTim_CFG;

/* CC2 check Inactive time limit */
extern volatile const uint16_T ChrMgmt_CC2ChkUDcNoConn_CFG;

/* CC2 check Inactive voltage limit */
extern volatile const uint16_T ChrMgmt_CC2ErrDematureTim_CFG;

/* CC2 check fault mature time  */
extern volatile const uint16_T ChrMgmt_CC2ErrEnaTim_CFG;

/* CC2 check fault mature time  */
extern volatile const uint16_T ChrMgmt_CCChkActvCfmTim_CFG;

/* CC check active time limit */
extern volatile const uint16_T ChrMgmt_CCChkElectcLockCfmTim_CFG;

/* Emlock check active time */
extern volatile const uint16_T ChrMgmt_CCChkFltCfmTim_CFG;

/* CC check fault time limit */
extern volatile const uint16_T ChrMgmt_CCChkInvldCfmTim_CFG;

/* CC check Inactive time limit */
extern volatile const uint16_T ChrMgmt_ChrgCmplHvOffReq_CFG;

/* Tme of require Hv power off when charge complete */
extern volatile const uint16_T ChrMgmt_ChrgOffPlugHvOffReq_CFG;

/* Tme of require Hv power off when off plug */
extern volatile const uint32_T ChrMgmt_ChrgPlugNoChrgnTmt_CFG;

/* Tme of no charging since plug dectected */
extern volatile const uint16_T ChrMgmt_ChrgSOCActvLowr_CFG;

/* Active charge SOC lower limit */
extern volatile const uint16_T ChrMgmt_ChrgSOCActvUppr_CFG;

/* Active charge SOC upper limit */
extern volatile const uint16_T ChrMgmt_ChrgStsDTCEnaTim_CFG;

/* DTC enable time */
extern volatile const uint32_T ChrMgmt_DcChrgWaitTim_CFG;

/* DC Charge wait time when DC Flow start */
extern volatile const real32_T ChrMgmt_DcChrgrOutpActvIDc_CFG;

/* Current of the judgement of into DC Charging */
extern volatile const uint16_T ChrMgmt_DchaSOCActvLowr_CFG;

/* Active  discharge SOC lower limit */
extern volatile const uint16_T ChrMgmt_DchaSOCActvUppr_CFG;

/* Active  discharge SOC upper limit */
extern volatile const uint16_T ChrMgmt_KeepWrmTimAllow_CFG;

/* keep warm max time */
extern volatile const uint16_T ChrMgmt_MemFltContnsTim_CFG;

/* Memery fault contious time */
extern volatile const real32_T ChrMgmt_OBCOutpActvIDc_CFG;

/* Current of the judgement of into AC Charging */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChrgStat_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
