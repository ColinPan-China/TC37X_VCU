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
 *  Filename:           CtAp_ChrgComM_Cal.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ChrgComM
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Fri Aug 16 10:03:51 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:24:22 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 03 10:23:17 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ChrgComM_Cal_h_
#define RTW_HEADER_CtAp_ChrgComM_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T DCChrMgmt_CC2ActvValLowr_CFG;

/* CC2 Lower limit of effective voltage value */
extern volatile const uint16_T DCChrMgmt_CC2ActvValUppr_CFG;

/* CC2 Upper limit of effective voltage value */
extern volatile const uint16_T DCChrMgmt_ChrgCommDTCEnaTim_CFG;

/* Time of Charge communication DTC Enable condition */
extern volatile const uint16_T DCChrMgmt_ChrgErrWaitConnTim_CFG;

/* DC Charge error allows reconnection wait time */
extern volatile const uint16_T DCChrMgmt_DcPortErrLv1TempRelsTim_CFG;

/* Time to release DC port temperature fault level 1 */
extern volatile const uint16_T DCChrMgmt_DcPortErrLv2TempRelsTim_CFG;

/* Time to release DC port temperature fault  level 2 */
extern volatile const int8_T DCChrMgmt_DcPortErrRelsTempLv1_CFG;

/* Temperature to release DC port temperature fault level 1 */
extern volatile const int16_T DCChrMgmt_DcPortErrRelsTempLv2_CFG;

/* Temperature to release DC port temperature fault level 2 */
extern volatile const int8_T DCChrMgmt_DcPortErrTempLv1_CFG;

/* Temperature to confirm DC port temperature fault level 1 */
extern volatile const int8_T DCChrMgmt_DcPortErrTemplv2_CFG;

/* Temperature  to confirm DC port temperature fault level 2 */
extern volatile const uint16_T DCChrMgmt_DcPortSnsrErrCfmTim_CFG;

/* Time to confirm DC port sensor fault */
extern volatile const uint16_T DCChrMgmt_DcPortSnsrErrRelsTim_CFG;
extern volatile const uint16_T DCChrMgmt_DcPortTempErrLv1CfmTim_CFG;

/* Time to confirm DC port temperature fault level 1 */
extern volatile const uint16_T DCChrMgmt_DcPortTempErrLv2CfmTim_CFG;

/* Time to confirm DC port temperature fault level 2 */
extern volatile const real32_T DCChrMgmt_MaxChrgIDc_CFG;

/* DC Charge max charge current limit */
extern volatile const real32_T DCChrMgmt_MaxChrgUDc_CFG;

/* DC Charge max voltage */
extern volatile const uint16_T DCChrMgmt_RxCCSTmt_CFG;

/* Timeout period for receiving CCS */
extern volatile const uint16_T DCChrMgmt_RxCMLTmt_CFG;

/* Timeout period for receiving CML */
extern volatile const uint16_T DCChrMgmt_RxCRMPrepdTmt_CFG;

/* Timeout period for receiving CRM prepared */
extern volatile const uint16_T DCChrMgmt_RxCRMTmt_CFG;

/* Timeout period for receiving CRM */
extern volatile const uint16_T DCChrMgmt_RxCROPrepdTmt_CFG;

/* Timeout period for receiving CRO prepared */
extern volatile const uint16_T DCChrMgmt_RxCROTmt_CFG;

/* Timeout period for receiving CRO */
extern volatile const uint16_T DCChrMgmt_RxCSDTmt_CFG;

/* Timeout period for receiving CSD */
extern volatile const uint16_T DCChrMgmt_RxCSTTmt_CFG;

/* Timeout period for receiving CST */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChrgComM_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
