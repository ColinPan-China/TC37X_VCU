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
 *  Filename:           CtAp_PwrLim_Cal.h
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_PwrLim_Cal_h_
#define RTW_HEADER_CtAp_PwrLim_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T EgyMgmt_BMSDispSOCEnaTCU_CFG;

/* BMS display SOC Time threshold for enabling TCU
 */
extern volatile const real32_T EgyMgmt_BMSDispSOCLo_CFG;

/* BMS display SOC low threshold
 */
extern volatile const real32_T EgyMgmt_BMSMaxOutPackPTCPowerValue_CFG;
extern volatile const uint16_T EgyMgmt_BatteryDischargingInChargingTime_CFG;

/* BMS battery current threshold set time
 */
extern volatile const real32_T EgyMgmt_DCDCPowerLimitValue_CFG;
extern volatile const boolean_T EgyMgmt_EnablePackPTCWork_CFG;

/* Enable PackPTC to work
 */
extern volatile const real32_T EgyMgmt_MCUDrvPwrLmtTrans[10];

/* MCU drive power limiting factor Map */
extern volatile const real32_T EgyMgmt_MCUDrvPwrLmtTransX[10];

/* MCU drive power limiting factor X axis */
extern volatile const real32_T EgyMgmt_MCUFbPwrLmtTrans[10];

/* MCU feedback power limiting factor Map */
extern volatile const real32_T EgyMgmt_MCUFbPwrLmtTransX[10];

/* MCU feedback power limiting factor X axis */
extern volatile const real32_T EgyMgmt_PODMaxOutDCDCPowerValue_CFG;
extern volatile const uint16_T EgyMgmt_PckPTCSetTim_CFG;

/* Pack PTC threshold set time
 */
extern volatile const real32_T EgyMgmt_TCUPwrTran_CFG;

/* TCU power transmission coefficient
 */
extern volatile const real32_T EgyMgmt_VCUDisChgPwrLmtDft_CFG;

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_PwrLim_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
