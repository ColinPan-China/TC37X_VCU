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
 *  Filename:           CtAp_TorqLmt_Cal.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.161
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:32:31 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:31:46 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TorqLmt_Cal_h_
#define RTW_HEADER_CtAp_TorqLmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T TorqPahMgmt_BattQstyMaxTq_CFG;

/* bms Quasi stationary max discharge torque */
extern volatile const real32_T TorqPahMgmt_BattQstyMinTq_CFG;

/* Bms Quasi stationary  min discharge torque */
extern volatile const real32_T TorqPahMgmt_Fac60Div2Pi_CFG;

/* Fixed Calibration value 9.549 = 60/2*PI when Pwr in W */
extern volatile const real32_T TorqPahMgmt_FltDetnTq_CFG;

/* When there occurs system errors,the motor limit torque to this value */
extern volatile const uint16_T TorqPahMgmt_GearChgFildMaxTim_CFG;

/* When there occurs system gear change,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_GearChgMaxGrdtNegSlopTq_LUT[6];

/* When there occurs system gear change,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_GearChgMaxGrdtPosSlopTq_LUT[6];

/* When there occurs system gear change,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_GearChgMaxGrdtSlopTqX_LUT[6];

/* When there occurs system gear change,the motor limit max torque ramp x asix */
extern volatile const real32_T TorqPahMgmt_GearChgMinGrdtNegSlopTq_LUT[6];

/* When there occurs system gear change,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_GearChgMinGrdtPosSlopTq_LUT[6];

/* When there occurs system gear change,the motor limit min torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_GearChgMinGrdtSlopTqX_LUT[6];

/* When there occurs system gear change,the motor limit min torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MaxDlyGrdtErrNegSlopTq_CFG;

/* When there occurs system errors,the  motor limit max torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MaxDlyGrdtErrPosSlopTq_CFG;

/* When there occurs system errors,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MaxGrdtErrNegSlopTq_CFG;

/* When there occurs system errors,the motor limit max torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MaxGrdtErrPosSlopTq_CFG;

/* When there occurs system errors,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG;

/* When there occurs system errors recover,the motor limit max torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG;

/* When there occurs system errors recover,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MaxMotExtChartcTq_MAP[231];

/* Max torque Motor External Characteristic Limit MAP */
extern volatile const real32_T TorqPahMgmt_MinDlyGrdtErrNegSlopTq_CFG;

/* When there occurs system errors,the max motor limit torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MinDlyGrdtErrPosSlopTq_CFG;

/* When there occurs system errors,the  motor limit min torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MinGrdtErrNegSlopTq_CFG;

/* When there occurs system errors,the motor limit min torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MinGrdtErrPosSlopTq_CFG;

/* When there occurs system errors,the motor limit min torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MinMotExtChartcTq_MAP[231];

/* Max torque Motor External Characteristic Limit MAP */
extern volatile const real32_T TorqPahMgmt_MinPwrTqCnvnMotSpd_CFG;

/* Calculation bms allow maxmin torque the min motor speed */
extern volatile const real32_T TorqPahMgmt_MotDftMaxGrdtErrNegSlopTq_CFG;

/* When there occurs system errors motor differential speed protection,the motor limit max torque negative ramp  */
extern volatile const real32_T TorqPahMgmt_MotDftMinGrdtErrNegSlopTq_CFG;

/* When there occurs system errors motor differential speed protection,the motor limit min torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MotDftMinGrdtErrPosSlopTq_CFG;

/* When there occurs system error motor differential speed protection,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MotDftlMaxGrdtErrPosSlopTq_CFG;

/* When there occurs system motor differential speed protection ,the motor limit max torque positive ramp  */
extern volatile const real32_T TorqPahMgmt_MotEffCnvrNum_CFG;

/* Motor_Efficiency convert to float */
extern volatile const real32_T TorqPahMgmt_MotEffX_MAP[17];

/* Motor_Efficiency MAP Xaxis */
extern volatile const real32_T TorqPahMgmt_MotEffY_MAP[16];

/* Motor_Efficiency MAP Y axis */
extern volatile const real32_T TorqPahMgmt_MotEffZ_MAP[5];

/* Motor External Characteristic Limit MAP Zaxis */
extern volatile const real32_T TorqPahMgmt_MotExtChartcTqX_MAP[33];

/* Motor External Characteristic Limit MAP Xaxis */
extern volatile const real32_T TorqPahMgmt_MotExtChartcTqY_MAP[7];

/* Motor External Characteristic Limit MAP Y axis */
extern volatile const real32_T TorqPahMgmt_MotSpdLpFilTim_CFG;

/* motor speed average filter number */
extern volatile const real32_T TorqPahMgmt_VCUMaxTq_CFG;

/* VCU limit min torque  */
extern volatile const real32_T TorqPahMgmt_VCUMinTq_CFG;

/* VCU limit max torque  */
extern volatile const real32_T TorqPahMgmt_VehDrvShaftEff_CFG;

/* Vehcile drive shaft Efficiency */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TorqLmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
