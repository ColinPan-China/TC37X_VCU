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
 *  Filename:           CtAp_ChrgComM_Cal.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ChrgComM
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Fri Aug 16 10:03:51 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:24:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 03 10:23:17 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgComM_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgComM_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T DCChrMgmt_CC2ActvValLowr_CFG = 1650U;
                                /* CC2 Lower limit of effective voltage value */
volatile const uint16_T DCChrMgmt_CC2ActvValUppr_CFG = 2650U;
                                /* CC2 Upper limit of effective voltage value */
volatile const uint16_T DCChrMgmt_ChrgCommDTCEnaTim_CFG = 1500U;
                         /* Time of Charge communication DTC Enable condition */
volatile const uint16_T DCChrMgmt_ChrgErrWaitConnTim_CFG = 30000U;
                             /* DC Charge error allows reconnection wait time */
volatile const uint16_T DCChrMgmt_DcPortErrLv1TempRelsTim_CFG = 60000U;
                         /* Time to release DC port temperature fault level 1 */
volatile const uint16_T DCChrMgmt_DcPortErrLv2TempRelsTim_CFG = 60000U;
                        /* Time to release DC port temperature fault  level 2 */
volatile const int8_T DCChrMgmt_DcPortErrRelsTempLv1_CFG = 90;
                  /* Temperature to release DC port temperature fault level 1 */
volatile const int16_T DCChrMgmt_DcPortErrRelsTempLv2_CFG = 100;
                  /* Temperature to release DC port temperature fault level 2 */
volatile const int8_T DCChrMgmt_DcPortErrTempLv1_CFG = 95;
                  /* Temperature to confirm DC port temperature fault level 1 */
volatile const int8_T DCChrMgmt_DcPortErrTemplv2_CFG = 105;
                 /* Temperature  to confirm DC port temperature fault level 2 */
volatile const uint16_T DCChrMgmt_DcPortSnsrErrCfmTim_CFG = 1000U;
                                      /* Time to confirm DC port sensor fault */
volatile const uint16_T DCChrMgmt_DcPortSnsrErrRelsTim_CFG = 1000U;
volatile const uint16_T DCChrMgmt_DcPortTempErrLv1CfmTim_CFG = 5000U;
                         /* Time to confirm DC port temperature fault level 1 */
volatile const uint16_T DCChrMgmt_DcPortTempErrLv2CfmTim_CFG = 5000U;
                         /* Time to confirm DC port temperature fault level 2 */
volatile const real32_T DCChrMgmt_MaxChrgIDc_CFG = -400.0F;/* DC Charge max charge current limit */
volatile const real32_T DCChrMgmt_MaxChrgUDc_CFG = 450.0F;/* DC Charge max voltage */
volatile const uint16_T DCChrMgmt_RxCCSTmt_CFG = 1000U;/* Timeout period for receiving CCS */
volatile const uint16_T DCChrMgmt_RxCMLTmt_CFG = 5000U;/* Timeout period for receiving CML */
volatile const uint16_T DCChrMgmt_RxCRMPrepdTmt_CFG = 5000U;
                                 /* Timeout period for receiving CRM prepared */
volatile const uint16_T DCChrMgmt_RxCRMTmt_CFG = 30000U;/* Timeout period for receiving CRM */
volatile const uint16_T DCChrMgmt_RxCROPrepdTmt_CFG = 60000U;
                                 /* Timeout period for receiving CRO prepared */
volatile const uint16_T DCChrMgmt_RxCROTmt_CFG = 5000U;/* Timeout period for receiving CRO */
volatile const uint16_T DCChrMgmt_RxCSDTmt_CFG = 10000U;/* Timeout period for receiving CSD */
volatile const uint16_T DCChrMgmt_RxCSTTmt_CFG = 5000U;/* Timeout period for receiving CST */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
