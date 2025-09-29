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
 *  Filename:           CtAp_WakeUpRsn_Cal.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_WakeUpRsn_Cal_h_
#define RTW_HEADER_CtAp_WakeUpRsn_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T LvMgmt_ACChgCompleteEndTmrCnt_CFG;

/* AC charging NM packet sending time determination according to Charge Complete */
extern volatile const uint16_T LvMgmt_ACChgOffPlugEndTmrCnt_CFG;

/* AC charging NM packet sending time determination according to Off Plug */
extern volatile const uint32_T LvMgmt_ACChgTimeoutEndTmrCnt_CFG;

/* AC charging NM packet sending time determination according to Charge Timeout */
extern volatile const uint16_T LvMgmt_ACDisChgCompleteEndTmrCnt_CFG;

/* AC discharging NM packet sending time determination according to Charge Complete */
extern volatile const uint16_T LvMgmt_ACDisChgOffPlugEndTmrCnt_CFG;

/* AC discharging NM packet sending time determination according to Off Plug */
extern volatile const uint32_T LvMgmt_ACDisChgTimeoutEndTmrCnt_CFG;

/* AC discharging NM packet sending time determination according to Charge Timeout */
extern volatile const uint16_T LvMgmt_DCCompleteEndTmrCnt_CFG;

/* DC charging NM packet sending time determination according to Charge Complete
 */
extern volatile const uint16_T LvMgmt_DCOffPlugEndTmrCnt_CFG;

/* DC charging NM packet sending time determination according to Off Plug
 */
extern volatile const uint32_T LvMgmt_DCTimeoutEndTmrCnt_CFG;

/* DC charging NM packet sending time determination according to Charge Timeout */
extern volatile const uint16_T LvMgmt_LINMsgCycTmr_CFG;
extern volatile const real32_T LvMgmt_LVBatteryChargingStartSOC_CFG;

/* The low-voltage battery requests the initial SOC to start charging */
extern volatile const uint16_T LvMgmt_NMInterfaceTmr_CFG;
extern volatile const uint16_T LvMgmt_StayLVExpiredTmr_CFG;

/* Maintain LIN smart wake time
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_WakeUpRsn_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
