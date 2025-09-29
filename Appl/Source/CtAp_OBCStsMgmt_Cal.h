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
 *  Filename:           CtAp_OBCStsMgmt_Cal.h
 *  File Creation Date: 04-Aug-2025
 *  Model Name:         CtAp_OBCStsMgmt
 *  Model Version:      1.007
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug  4 09:30:03 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 10:46:19 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_OBCStsMgmt_Cal_h_
#define RTW_HEADER_CtAp_OBCStsMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T OBCMgmt_OBCCDchaTmt_CFG;

/* OBC discharge Error timeout  */
extern volatile const uint16_T OBCMgmt_OBCCPreheatReqTmt_CFG;

/* OBCMgmt_OBCCPreheatReqTmt_CFG */
extern volatile const uint16_T OBCMgmt_OBCChrgReqTmt_CFG;

/* OBC require charge status time limit */
extern volatile const uint16_T OBCMgmt_OBCCtrlDTCEnaTim_CFG;

/* OBC DTC enable time limit */
extern volatile const uint16_T OBCMgmt_OBCDiRecvy_CFG;

/* OBC require disable time fault recovery time */
extern volatile const uint16_T OBCMgmt_OBCDiTmt_CFG;

/* OBC require disable time limit */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_OBCStsMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
