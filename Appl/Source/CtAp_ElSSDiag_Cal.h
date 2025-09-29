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
 *  Filename:           CtAp_ElSSDiag_Cal.h
 *  File Creation Date: 26-Mar-2025
 *  Model Name:         CtAp_ElSSDiag
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:12:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Mar 26 16:46:09 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Mar 26 16:45:41 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ElSSDiag_Cal_h_
#define RTW_HEADER_CtAp_ElSSDiag_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T LvMgmt_ECUsDiagDTCEnaSetTim_CFG;

/* ECU self-check fault DTC enable time
 */
extern volatile const uint16_T LvMgmt_ECUsDiagFbResetTim_CFG;

/* ECU self-check fault DTC reset time
 */
extern volatile const uint16_T LvMgmt_ECUsDiagFbSetTim_CFG;

/* ECU self-check fault DTC set time
 */
extern volatile const uint16_T LvMgmt_KL15eDTCEnaSetTim_CFG;

/* KL15 relay fault DTC enable time
 */
extern volatile const uint16_T LvMgmt_KL15eFbResetTim_CFG;

/* KL15 relay fault DTC set/reset time
 */
extern volatile const uint16_T LvMgmt_KL15eFbSetTim_CFG;

/* KL15 relay fault DTC set/reset time
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ElSSDiag_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
