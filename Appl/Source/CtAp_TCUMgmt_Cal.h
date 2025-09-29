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
 *  Filename:           CtAp_TCUMgmt_Cal.h
 *  File Creation Date: 28-May-2025
 *  Model Name:         CtAp_TCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:37 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed May 28 16:55:45 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed May 28 16:55:12 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TCUMgmt_Cal_h_
#define RTW_HEADER_CtAp_TCUMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T HvMgmt_TCUDTCEnaSetTim_CFG;

/*
   Time determination of DTC enable conditions for TCU
 */
extern volatile const uint16_T HvMgmt_TCUEnaFltDTCResetTim_CFG;

/*
   Time determination of TCU enbale fault DTC reset conditions
 */
extern volatile const uint16_T HvMgmt_TCUEnaFltDTCSetTim_CFG;

/*
   Time determination of TCU enable fault DTC set conditions
 */
extern volatile const uint16_T HvMgmt_TCUStopFltDTCResetTim_CFG;

/*
   Time determination of TCU stop fault DTC reset conditions
 */
extern volatile const uint16_T HvMgmt_TCUStopFltDTCSetTim_CFG;

/*
   Time determination of TCU stop fault DTC set conditions
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TCUMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
