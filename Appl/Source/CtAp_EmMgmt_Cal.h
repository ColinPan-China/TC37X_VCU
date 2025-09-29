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
 *  Filename:           CtAp_EmMgmt_Cal.h
 *  File Creation Date: 10-Apr-2025
 *  Model Name:         CtAp_EmMgmt
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:03 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr 10 14:49:16 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Apr 10 14:48:26 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_EmMgmt_Cal_h_
#define RTW_HEADER_CtAp_EmMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T OBCMgmt_BCMAntithftStsCfmTim_CFG;

/* Require emlock of the BCM status limit */
extern volatile const uint16_T OBCMgmt_CPInvldCfmTim_CFG;

/* Require emlock of the CP status limit */
extern volatile const uint16_T OBCMgmt_ElectcLockDTCEnaTim_CFG;

/* Emlock DTC enable time */
extern volatile const uint16_T OBCMgmt_ElectcLockLockTmt_CFG;

/* Emlock lock time limit */
extern volatile const uint16_T OBCMgmt_ElectcLockUnlckTmt_CFG;

/* Emlock Unlock time limit */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_EmMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
