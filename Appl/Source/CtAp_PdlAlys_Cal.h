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
 *  Filename:           CtAp_PdlAlys_Cal.h
 *  File Creation Date: 19-Aug-2025
 *  Model Name:         CtAp_PdlAlys
 *  Model Version:      1.260
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug 19 13:32:42 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 13:32:00 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_PdlAlys_Cal_h_
#define RTW_HEADER_CtAp_PdlAlys_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_AccrPedl1RatLnrX_LUT[4];

/* Acceleration pedal1 position calculate votage */
extern volatile const real32_T ChassisMgmt_AccrPedl1RatLnr_LUT[4];

/* Acceleration pedal1 linearity curve according to voltage */
extern volatile const real32_T ChassisMgmt_AccrPedl1Usub_CFG;

/* Accrleration pedal 1 fault active voltage substitute value */
extern volatile const real32_T ChassisMgmt_AccrPedl2RatLnrX_LUT[4];

/* Acceleration pedal2 position calculate votage */
extern volatile const real32_T ChassisMgmt_AccrPedl2RatLnr_LUT[4];

/* Acceleration pedal2 linearity curve according to voltage */
extern volatile const real32_T ChassisMgmt_AccrPedl2Usub_CFG;

/* Accrleration pedal 2 fault active voltage substitute value */
extern volatile const real32_T ChassisMgmt_AccrPedlKdOffPosn_CFG;

/* Accrleration pedal Kick down off value */
extern volatile const real32_T ChassisMgmt_AccrPedlKdOnPosn_CFG;

/* Accrleration pedal Kick down on value */
extern volatile const real32_T ChassisMgmt_AccrPedlPosnPreUnJitter_CFG;

/* Voltage threshold which is used for the unjittering the sensor signal 1 */
extern volatile const real32_T ChassisMgmt_AccrPedlPosnSubDft_CFG;

/* Accrleration pedal substitute value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG;

/* Accrleration pedal 1 Power Supply Voltage  fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG;

/* Accrleration pedal 1 Power Supply Voltage demature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1HiThd_CFG;

/* Accrleration pedal  Power Supply Voltage 1 upper voltage  Threshold value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1Hi_CFG;

/* Accrleration pedal 1 Power Supply Voltage 1 upper voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1LoThd_CFG;

/* Accrleration pedal 1 Power Supply Voltage 1 upper voltage  Threshold value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt1Lo_CFG;

/* Accrleration pedal 1 Power Supply Voltage  upper voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG;

/* Accrleration pedal 2 Power Supply Voltage  fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG;

/* Accrleration pedal 2 Power Supply Voltage demature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2HiThd_CFG;

/* Accrleration pedal Power Supply Voltage 2 upper voltage  Threshold value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2Hi_CFG;

/* Accrleration pedal 1 Power Supply Voltage 2 upper voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2LoThd_CFG;

/* Accrleration pedal 1 Power Supply Voltage  upper voltage  Threshold value */
extern volatile const uint16_T ChassisMgmt_AccrPedlSplyVolt2Lo_CFG;

/* Accrleration pedal 2 Power Supply Voltage  upper voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlUPreUnJitter2_CFG;

/* Voltage threshold which is used for the unjittering the sensor signal 2 */
extern volatile const real32_T ChassisMgmt_AccrPedlUPreUnJitter_CFG;

/* Voltage threshold which is used for the unjittering the sensor signal 1 */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG;

/* Accrleration pedal1 higher than upper voltage volue fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG;

/* Accrleration pedal1 higher than upper voltage volue fault demature time */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw1HiThd_CFG;

/* Accrleration pedal 1 upper voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw1Hi_CFG;

/* Accrleration pedal 1 upper voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG;

/* Accrleration pedal1 lower than lower voltage volue fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG;

/* Accrleration pedal1 lower than lower voltage volue fault demature time */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw1LoThd_CFG;

/* Accrleration pedal 1 upper voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw1Lo_CFG;

/* Accrleration pedal 1 lower voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG;

/* Accrleration pedal2 higher than upper voltage value fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG;

/* Accrleration pedal2 higher than upper voltage value fault demature time */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw2HiThd_CFG;

/* Accrleration pedal 1 upper voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw2Hi_CFG;

/* Accrleration pedal 2 upper voltage limit value */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG;

/* Accrleration pedal2 lower than lower voltage volue fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG;

/* Accrleration pedal2 lower than lower voltage volue fault demature time */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw2LoThd_CFG;

/* Accrleration pedal 1 upper voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURaw2Lo_CFG;

/* Accrleration pedal 2 lower voltage limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURawDTCEnaTim_CFG;

/* Accrleration pedal1 higher than upper voltage volue fault DTC enable Time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG;

/* Accrleration pedal1 and 2 difference fault mature time */
extern volatile const uint16_T ChassisMgmt_AccrPedlURawDifDebOkTim_CFG;

/* Accrleration pedal1 and 2 difference fault demature time */
extern volatile const real32_T ChassisMgmt_AccrPedlURawDifThd_CFG;

/* Accrleration pedal 1 and 2 difference value limit value */
extern volatile const real32_T ChassisMgmt_AccrPedlURawDif_CFG;

/* Accrleration pedal 1 and 2 difference value limit value */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_PdlAlys_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
