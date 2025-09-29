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
 *  Filename:           CtAp_MCUMgmt_Cal.h
 *  File Creation Date: 21-Aug-2025
 *  Model Name:         CtAp_MCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:17:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug 21 10:52:20 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Aug 21 10:37:51 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_MCUMgmt_Cal_h_
#define RTW_HEADER_CtAp_MCUMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const boolean_T HvMgmt_EnableBCMImmoSts_CFG;

/* The BCM Immo calibration value was enabled
 */
extern volatile const uint16_T HvMgmt_MCUClsFltDTCEnaSetTim_CFG;

/* MCU closed fault DTC enable condition Time
 */
extern volatile const uint16_T HvMgmt_MCUClsFltDTCResetTim_CFG;

/* MCU closed fault DTC reset condition Time
 */
extern volatile const uint16_T HvMgmt_MCUClsFltDTCSetTim_CFG;

/* MCU closed fault DTC set condition Time
 */
extern volatile const uint16_T HvMgmt_MCUEnaFltDTCEnaSetTim_CFG;

/* MCU enables fault DTC enable condition time
 */
extern volatile const uint16_T HvMgmt_MCUEnaFltDTCSetTim_CFG;

/* MCU enables fault DTC set condition time
 */
extern volatile const uint16_T HvMgmt_MCUHVPowerOnTim_CFG;

/* The MCU enters the Ready fault DTC set condition one time
 */
extern volatile const uint16_T HvMgmt_MCURdyFltCheckTim_CFG;

/* The MCU enters the Ready fault DTC set condition two time
 */
extern volatile const uint16_T HvMgmt_MCURdyFltDTCEnaSetTim_CFG;

/* The MCU enters the Ready fault DTC enable condition time
 */
extern volatile const uint16_T HvMgmt_MCURdyFltSetTim_CFG;

/* The MCU enters the Ready fault DTC set condition time
 */
extern volatile const real32_T HvMgmt_MotActTqDwn_CFG;

/* MCU actual torque lower edge set value
 */
extern volatile const uint16_T HvMgmt_MotActTqFltSetTim_CFG;

/* MCU actual torque failure setting time
 */
extern volatile const real32_T HvMgmt_MotActTqUp_CFG;

/* MCU actual torque upper edge set value
 */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_MCUMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
