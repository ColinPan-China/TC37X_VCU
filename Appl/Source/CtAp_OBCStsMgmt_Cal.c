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
 *  Filename:           CtAp_OBCStsMgmt_Cal.c
 *  File Creation Date: 04-Aug-2025
 *  Model Name:         CtAp_OBCStsMgmt
 *  Model Version:      1.007
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug  4 09:30:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 10:46:19 2025
 *
 *
 *******************************************************************************/
#include "CtAp_OBCStsMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_OBCStsMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T OBCMgmt_OBCCDchaTmt_CFG = 10000U;/* OBC discharge Error timeout  */
volatile const uint16_T OBCMgmt_OBCCPreheatReqTmt_CFG = 5000U;/* OBCMgmt_OBCCPreheatReqTmt_CFG */
volatile const uint16_T OBCMgmt_OBCChrgReqTmt_CFG = 5000U;
                                      /* OBC require charge status time limit */
volatile const uint16_T OBCMgmt_OBCCtrlDTCEnaTim_CFG = 1500U;/* OBC DTC enable time limit */
volatile const uint16_T OBCMgmt_OBCDiRecvy_CFG = 1000U;
                              /* OBC require disable time fault recovery time */
volatile const uint16_T OBCMgmt_OBCDiTmt_CFG = 5000U;/* OBC require disable time limit */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
