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
 *  Filename:           CtAp_DrvMod_Cal.h
 *  File Creation Date: 26-May-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.1.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 26 16:27:47 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu May 22 10:55:41 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DrvMod_Cal_h_
#define RTW_HEADER_CtAp_DrvMod_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const boolean_T ModMgmt_ActDrvMod_Enum_CtrlCFG;

/* Enable the Settings for driving mode calibration

 */
extern volatile const uint8_T ModMgmt_ActDrvMod_Enum_ValueCFG;

/* The value of driving mode calibration
 */
extern volatile const boolean_T ModMgmt_ActRgnSts_Enum_CtrlCFG;

/* Enable the Settings for energy recovery classcalibration
 */
extern volatile const uint8_T ModMgmt_ActRgnSts_Enum_ValueCFG;

/* The value of energy recovery class calibration
 */
extern volatile const real32_T ModMgmt_BMSDispSOCRstThd_CFG;

/* The display SOC of BMS exceeds the recovery limit
 */
extern volatile const real32_T ModMgmt_BMSDispSOCSetThd_CFG;

/* The display SOC of the BMS is below the set limit
 */
extern volatile const uint16_T ModMgmt_DrvModWarn2SetTmr_CFG;

/* Drive Mode set condition time of alarm level two
 */
extern volatile const uint16_T ModMgmt_DrvModWarn3SetTmr_CFG;

/* Drive Mode set condition time of alarm level three
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DrvMod_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
