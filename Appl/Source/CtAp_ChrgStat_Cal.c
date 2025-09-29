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
 *  Filename:           CtAp_ChrgStat_Cal.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_ChrgStat
 *  Model Version:      1.014
 *  Model Author:       Mike Ni - Fri Aug 16 10:06:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 14:36:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Sep 11 14:35:06 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgStat_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgStat_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T ChrMgmt_ACGearPWaitTim_CFG = 3000U;
                                   /* Time limit of Gear P check in AC Charge */
volatile const uint16_T ChrMgmt_AcChrgWaitTim_CFG = 60000U;
                                    /* AC Charge wait time when AC Flow start */
volatile const uint16_T ChrMgmt_CC2ChkActvCfmTim_CFG = 500U;/* CC2 check active time limit */
volatile const uint16_T ChrMgmt_CC2ChkActvUDcLowr_CFG = 1650U;/* CC2 check lower limit */
volatile const uint16_T ChrMgmt_CC2ChkActvUDcUppr_CFG = 2650U;/* CC2 check upper limit */
volatile const uint16_T ChrMgmt_CC2ChkInvldCfmTim_CFG = 500U;/* CC2 check Inactive time limit */
volatile const uint16_T ChrMgmt_CC2ChkUDcNoConn_CFG = 4800U;/* CC2 check Inactive voltage limit */
volatile const uint16_T ChrMgmt_CC2ErrDematureTim_CFG = 1000U;/* CC2 check fault mature time  */
volatile const uint16_T ChrMgmt_CC2ErrEnaTim_CFG = 1000U;/* CC2 check fault mature time  */
volatile const uint16_T ChrMgmt_CCChkActvCfmTim_CFG = 300U;/* CC check active time limit */
volatile const uint16_T ChrMgmt_CCChkElectcLockCfmTim_CFG = 300U;/* Emlock check active time */
volatile const uint16_T ChrMgmt_CCChkFltCfmTim_CFG = 300U;/* CC check fault time limit */
volatile const uint16_T ChrMgmt_CCChkInvldCfmTim_CFG = 300U;/* CC check Inactive time limit */
volatile const uint16_T ChrMgmt_ChrgCmplHvOffReq_CFG = 30000U;
                          /* Tme of require Hv power off when charge complete */
volatile const uint16_T ChrMgmt_ChrgOffPlugHvOffReq_CFG = 1000U;
                                 /* Tme of require Hv power off when off plug */
volatile const uint32_T ChrMgmt_ChrgPlugNoChrgnTmt_CFG = 300000U;
                                   /* Tme of no charging since plug dectected */
volatile const uint16_T ChrMgmt_ChrgSOCActvLowr_CFG = 60U;/* Active charge SOC lower limit */
volatile const uint16_T ChrMgmt_ChrgSOCActvUppr_CFG = 100U;/* Active charge SOC upper limit */
volatile const uint16_T ChrMgmt_ChrgStsDTCEnaTim_CFG = 1500U;/* DTC enable time */
volatile const uint32_T ChrMgmt_DcChrgWaitTim_CFG = 180000U;
                                    /* DC Charge wait time when DC Flow start */
volatile const real32_T ChrMgmt_DcChrgrOutpActvIDc_CFG = 2.0F;
                              /* Current of the judgement of into DC Charging */
volatile const uint16_T ChrMgmt_DchaSOCActvLowr_CFG = 20U;/* Active  discharge SOC lower limit */
volatile const uint16_T ChrMgmt_DchaSOCActvUppr_CFG = 50U;/* Active  discharge SOC upper limit */
volatile const uint16_T ChrMgmt_KeepWrmTimAllow_CFG = 600U;/* keep warm max time */
volatile const uint16_T ChrMgmt_MemFltContnsTim_CFG = 10000U;/* Memery fault contious time */
volatile const real32_T ChrMgmt_OBCOutpActvIDc_CFG = 2.0F;
                              /* Current of the judgement of into AC Charging */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
