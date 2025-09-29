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
 *  Filename:           CtAp_DCDCMgmt_Cal.h
 *  File Creation Date: 26-Jun-2025
 *  Model Name:         CtAp_DCDCMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       ATOM-HyacinthGe - Thu Aug 29 14:06:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jun 26 17:56:03 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 05 13:24:03 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DCDCMgmt_Cal_h_
#define RTW_HEADER_CtAp_DCDCMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T HvMgmt_DCDCDTCEnaSetTim_CFG;

/* Time determination of DTC enable conditions for DCDC
 */
extern volatile const uint16_T HvMgmt_DCDCEnaFltDTCResetTim_CFG;

/* Time determination of DCDC enbale fault DTC reset conditions
 */
extern volatile const uint16_T HvMgmt_DCDCEnaFltDTCSetTim_CFG;

/* Time determination of DCDC enable fault DTC set conditions

 */
extern volatile const uint16_T HvMgmt_DCDCStopFltDTCResetTim_CFG;

/* Time determination of DCDC stop fault DTC reset conditions
 */
extern volatile const uint16_T HvMgmt_DCDCStopFltDTCSetTim_CFG;

/* Time determination of DCDC stop fault DTC set conditions
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DCDCMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
