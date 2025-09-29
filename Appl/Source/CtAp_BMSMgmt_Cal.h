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
 *  Filename:           CtAp_BMSMgmt_Cal.h
 *  File Creation Date: 25-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul 25 10:24:27 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Jul 08 11:09:17 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_BMSMgmt_Cal_h_
#define RTW_HEADER_CtAp_BMSMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T HvMgmt_BMSBattEnaSOC_CFG;

/* Smart charging Determines the battery SOC in high-voltage scenarios
 */
extern volatile const uint16_T HvMgmt_BMSHVPowerOff_CFG;

/* BMS relay opened fault DTC set condition time settin
 */
extern volatile const uint16_T HvMgmt_BMSHVPowerOn_CFG;

/* BMS relay opened fault DTC set condition time settin
 */
extern volatile const uint16_T HvMgmt_BMSHVPwrOffRsv_CFG;

/* Recovery of the electrical state of HV off for BMS
 */
extern volatile const real32_T HvMgmt_BSBattChrgEndSOC_CFG;

/* Low voltage battery charging cut-off SOC
 */
extern volatile const real32_T HvMgmt_BSBattChrgStartSOC_CFG;

/* SOC judgment of low-voltage battery charging request
 */
extern volatile const boolean_T HvMgmt_EnHVBattRemoteEnSOC_CFG;

/* Whether to enable SGW Remote to remotely apply high voltage to determine the battery SOC
 */
extern volatile const real32_T HvMgmt_HVBattRemoteEnSOC_CFG;

/* SGW Remote remote high voltage determines the threshold of battery SOC
 */
extern volatile const uint16_T HvMgmt_LocalHVFailTmr_CFG;

/* Determine the timeout period of high voltage power-on failure
 */
extern volatile const real32_T HvMgmt_SmtPwrCompTmr_CFG;

/* After the intelligent wake up, the high voltage is used to determine the timeout period for the DCDC to enter Buck
 */
extern volatile const real32_T HvMgmt_SmtPwrKeepTmr_CFG;

/* After the intelligent wake up, the high voltage determines that the low-voltage battery does not increase by 1% of the timeout period
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_BMSMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
