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
 *  Filename:           CtAp_WakeUpRsn_Cal.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_WakeUpRsn_Cal.h"
#include "rtwtypes.h"
#include "CtAp_WakeUpRsn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T LvMgmt_ACChgCompleteEndTmrCnt_CFG = 30000U;
/* AC charging NM packet sending time determination according to Charge Complete */
volatile const uint16_T LvMgmt_ACChgOffPlugEndTmrCnt_CFG = 1000U;
    /* AC charging NM packet sending time determination according to Off Plug */
volatile const uint32_T LvMgmt_ACChgTimeoutEndTmrCnt_CFG = 300000U;
/* AC charging NM packet sending time determination according to Charge Timeout */
volatile const uint16_T LvMgmt_ACDisChgCompleteEndTmrCnt_CFG = 30000U;
/* AC discharging NM packet sending time determination according to Charge Complete */
volatile const uint16_T LvMgmt_ACDisChgOffPlugEndTmrCnt_CFG = 1000U;
/* AC discharging NM packet sending time determination according to Off Plug */
volatile const uint32_T LvMgmt_ACDisChgTimeoutEndTmrCnt_CFG = 300000U;
/* AC discharging NM packet sending time determination according to Charge Timeout */
volatile const uint16_T LvMgmt_DCCompleteEndTmrCnt_CFG = 30000U;
/* DC charging NM packet sending time determination according to Charge Complete
 */
volatile const uint16_T LvMgmt_DCOffPlugEndTmrCnt_CFG = 1000U;
       /* DC charging NM packet sending time determination according to Off Plug
        */
volatile const uint32_T LvMgmt_DCTimeoutEndTmrCnt_CFG = 300000U;
/* DC charging NM packet sending time determination according to Charge Timeout */
volatile const uint16_T LvMgmt_LINMsgCycTmr_CFG = 100U;
volatile const real32_T LvMgmt_LVBatteryChargingStartSOC_CFG = 75.0F;
        /* The low-voltage battery requests the initial SOC to start charging */
volatile const uint16_T LvMgmt_NMInterfaceTmr_CFG = 700U;
volatile const uint16_T LvMgmt_StayLVExpiredTmr_CFG = 30000U;/* Maintain LIN smart wake time
                                                              */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
