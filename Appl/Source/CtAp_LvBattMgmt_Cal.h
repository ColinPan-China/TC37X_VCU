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
 *  Filename:           CtAp_LvBattMgmt_Cal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_LvBattMgmt_Cal_h_
#define RTW_HEADER_CtAp_LvBattMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T LvMgmt_BSBattCHGIDcDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery charge over current
 */
extern volatile const uint16_T LvMgmt_BSBattCHGIDcDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery charge over current
 */
extern volatile const uint16_T LvMgmt_BSBattDSGIDcDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery discharge over current
 */
extern volatile const uint16_T LvMgmt_BSBattDSGIDcDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery discharge over current
 */
extern volatile const uint16_T LvMgmt_BSBattSOCLoDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery under SOC
 */
extern volatile const uint16_T LvMgmt_BSBattSOCLoDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery under SOC
 */
extern volatile const real32_T LvMgmt_BSBattSOCLo_CFG;

/* The SOC of low-voltage batteries is low
 */
extern volatile const uint16_T LvMgmt_BSBattTempHiDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery under temperature
 */
extern volatile const uint16_T LvMgmt_BSBattTempHiDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery under temperature
 */
extern volatile const uint16_T LvMgmt_BSBattTempLoDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery over temperature
 */
extern volatile const uint16_T LvMgmt_BSBattTempLoDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery over temperature
 */
extern volatile const uint16_T LvMgmt_BSBattUDcHiDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery over voltage
 */
extern volatile const uint16_T LvMgmt_BSBattUDcHiDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery over voltage
 */
extern volatile const real32_T LvMgmt_BSBattUDcHi_CFG;

/* Maximum threshold for determining the voltage of the low-voltage battery
 */
extern volatile const uint16_T LvMgmt_BSBattUDcLoDTCResetTim_CFG;

/* Reset time of DTC for Low voltage battery below voltage
 */
extern volatile const uint16_T LvMgmt_BSBattUDcLoDTCSetTim_CFG;

/* Set time of DTC for Low voltage battery below voltage
 */
extern volatile const real32_T LvMgmt_BSBattUDcLo_CFG;

/* Minimum threshold for determining the voltage of the low-voltage battery
 */
extern volatile const real32_T LvMgmt_BSIBattHi_CFG;

/* The current of low-voltage batteries is high
 */
extern volatile const real32_T LvMgmt_BSIBattLo_CFG;

/* The current of low-voltage batteries is low
 */
extern volatile const real32_T LvMgmt_BSTBattHi_CFG;

/* The temperature of low-voltage batteries is high
 */
extern volatile const real32_T LvMgmt_BSTBattLo_CFG;

/* The temperature of low-voltage batteries is low
 */
extern volatile const real32_T LvMgmt_BSUBattHi_CFG;

/* The voltage of low-voltage batteries is high
 */
extern volatile const real32_T LvMgmt_BSUBattLo_CFG;

/* The voltage of low-voltage batteries is low
 */
extern volatile const real32_T LvMgmt_LVLevel1LmtSOC_CFG;

/* Low-voltage battery warning level one SOC threshold
 */
extern volatile const real32_T LvMgmt_LVLevel2LmtSOC_CFG;

/* Low-voltage battery warning level two SOC threshold
 */
extern volatile const real32_T LvMgmt_LVLevel3LmtSOC_CFG;

/* Low-voltage battery warning level three SOC threshold
 */
extern volatile const real32_T LvMgmt_LVLevelLmtResetSOC_CFG;

/* Low-voltage battery warning level reset SOC threshold
 */
extern volatile const real32_T LvMgmt_LVSOHExitWarn_CFG;

/* Low voltage battery SOH exit warning state threshold
 */
extern volatile const real32_T LvMgmt_LVSOHWarn_CFG;

/* Low voltage battery SOH warning threshold
 */
extern volatile const uint16_T LvMgmt_LvSysUDcHiEnaSetTim_CFG;

/* Enable time of DTC for low-voltage system overvoltage fault
 */
extern volatile const real32_T LvMgmt_LvSysUDcHiReset_CFG;

/* Reset time of DTC for low-voltage system overvoltage fault
 */
extern volatile const real32_T LvMgmt_LvSysUDcHiSet_CFG;

/* Set time of DTC for low-voltage system overvoltage fault
 */
extern volatile const uint16_T LvMgmt_LvSysUDcLoEnaSetTim_CFG;

/* Enable time of DTC for low-voltage system undervoltage fault
 */
extern volatile const real32_T LvMgmt_LvSysUDcLoReset_CFG;

/* Reset time of DTC for low-voltage system undervoltage  fault
 */
extern volatile const real32_T LvMgmt_LvSysUDcLoSet_CFG;

/* Set time of DTC for low-voltage system undervoltage  fault
 */
extern volatile const uint16_T LvMgmt_LvSysUDcResetTim_CFG;

/* Reset time of DTC for low-voltage system overvoltage or undervoltage  fault
 */
extern volatile const uint16_T LvMgmt_LvSysUDcSetTim_CFG;

/* Set time of DTC for low-voltage system overvoltage or undervoltage  fault
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_LvBattMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
