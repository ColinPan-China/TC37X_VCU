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
 *  Filename:           CtAp_TorqLmt_Cal.c
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.161
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:32:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:31:46 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqLmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_TorqLmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T TorqPahMgmt_BattQstyMaxTq_CFG = 310.0F;
                                 /* bms Quasi stationary max discharge torque */
volatile const real32_T TorqPahMgmt_BattQstyMinTq_CFG = -310.0F;
                                /* Bms Quasi stationary  min discharge torque */
volatile const real32_T TorqPahMgmt_Fac60Div2Pi_CFG = 9.549F;
                     /* Fixed Calibration value 9.549 = 60/2*PI when Pwr in W */
volatile const real32_T TorqPahMgmt_FltDetnTq_CFG = 0.0F;
      /* When there occurs system errors,the motor limit torque to this value */
volatile const uint16_T TorqPahMgmt_GearChgFildMaxTim_CFG = 200U;
/* When there occurs system gear change,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_GearChgMaxGrdtNegSlopTq_LUT[6] = { 20.0F,
  20.0F, 20.0F, 300.0F, 500.0F, 1000.0F } ;
/* When there occurs system gear change,the motor limit max torque positive ramp  */

volatile const real32_T TorqPahMgmt_GearChgMaxGrdtPosSlopTq_LUT[6] = { 20.0F,
  20.0F, 20.0F, 300.0F, 500.0F, 3000.0F } ;
/* When there occurs system gear change,the motor limit max torque positive ramp  */

volatile const real32_T TorqPahMgmt_GearChgMaxGrdtSlopTqX_LUT[6] = { 0.0F, 10.0F,
  50.0F, 100.0F, 200.0F, 300.0F } ;
/* When there occurs system gear change,the motor limit max torque ramp x asix */

volatile const real32_T TorqPahMgmt_GearChgMinGrdtNegSlopTq_LUT[6] = { 3000.0F,
  1000.0F, 500.0F, 300.0F, 100.0F, 100.0F } ;
/* When there occurs system gear change,the motor limit max torque positive ramp  */

volatile const real32_T TorqPahMgmt_GearChgMinGrdtPosSlopTq_LUT[6] = { 3000.0F,
  1000.0F, 500.0F, 300.0F, 100.0F, 100.0F } ;
/* When there occurs system gear change,the motor limit min torque positive ramp  */

volatile const real32_T TorqPahMgmt_GearChgMinGrdtSlopTqX_LUT[6] = { -300.0F,
  -20.0F, -10.0F, -5.0F, -2.0F, 0.0F } ;
/* When there occurs system gear change,the motor limit min torque negative ramp  */

volatile const real32_T TorqPahMgmt_MaxDlyGrdtErrNegSlopTq_CFG = 200.0F;
/* When there occurs system errors,the  motor limit max torque negative ramp  */
volatile const real32_T TorqPahMgmt_MaxDlyGrdtErrPosSlopTq_CFG = 200.0F;
/* When there occurs system errors,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_MaxGrdtErrNegSlopTq_CFG = 200.0F;
/* When there occurs system errors,the motor limit max torque negative ramp  */
volatile const real32_T TorqPahMgmt_MaxGrdtErrPosSlopTq_CFG = 200.0F;
/* When there occurs system errors,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG = 5000.0F;
/* When there occurs system errors recover,the motor limit max torque negative ramp  */
volatile const real32_T TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG = 5000.0F;
/* When there occurs system errors recover,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_MaxMotExtChartcTq_MAP[231] = { 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 295.0F, 310.0F,
  310.0F, 310.0F, 310.0F, 310.0F, 310.0F, 280.0F, 310.0F, 310.0F, 310.0F, 310.0F,
  310.0F, 310.0F, 251.0F, 291.0F, 309.0F, 310.0F, 310.0F, 310.0F, 310.0F, 222.0F,
  271.0F, 307.0F, 310.0F, 310.0F, 310.0F, 310.0F, 199.0F, 247.0F, 286.0F, 293.0F,
  310.0F, 310.0F, 310.0F, 176.0F, 223.0F, 265.0F, 275.0F, 310.0F, 310.0F, 310.0F,
  160.0F, 204.0F, 245.0F, 260.0F, 295.0F, 300.0F, 300.0F, 144.0F, 184.0F, 224.0F,
  245.0F, 279.0F, 290.0F, 290.0F, 133.0F, 169.0F, 207.0F, 230.0F, 261.0F, 273.0F,
  273.0F, 121.0F, 154.0F, 189.0F, 214.0F, 243.0F, 255.0F, 255.0F, 113.0F, 143.0F,
  175.0F, 200.0F, 227.0F, 239.0F, 239.0F, 104.0F, 132.0F, 161.0F, 185.0F, 211.0F,
  223.0F, 223.0F, 98.0F, 124.0F, 151.0F, 174.0F, 198.0F, 209.0F, 209.0F, 91.0F,
  115.0F, 140.0F, 163.0F, 184.0F, 195.0F, 195.0F, 86.0F, 108.0F, 132.0F, 153.0F,
  173.0F, 183.0F, 183.0F, 81.0F, 101.0F, 123.0F, 143.0F, 161.0F, 171.0F, 171.0F,
  77.0F, 96.0F, 116.0F, 135.0F, 152.0F, 161.0F, 161.0F, 73.0F, 90.0F, 109.0F,
  126.0F, 142.0F, 151.0F, 151.0F, 70.0F, 86.0F, 104.0F, 120.0F, 135.0F, 143.0F,
  143.0F, 66.0F, 82.0F, 98.0F, 113.0F, 128.0F, 135.0F, 135.0F, 63.0F, 78.0F,
  93.0F, 108.0F, 122.0F, 129.0F, 129.0F, 60.0F, 74.0F, 88.0F, 103.0F, 115.0F,
  122.0F, 122.0F, 58.0F, 71.0F, 84.0F, 98.0F, 110.0F, 116.0F, 116.0F, 55.0F,
  68.0F, 80.0F, 93.0F, 104.0F, 110.0F, 110.0F, 53.0F, 65.0F, 77.0F, 89.0F,
  100.0F, 105.0F, 105.0F, 51.0F, 62.0F, 74.0F, 85.0F, 95.0F, 100.0F, 100.0F } ;
                        /* Max torque Motor External Characteristic Limit MAP */

volatile const real32_T TorqPahMgmt_MinDlyGrdtErrNegSlopTq_CFG = 200.0F;
/* When there occurs system errors,the max motor limit torque negative ramp  */
volatile const real32_T TorqPahMgmt_MinDlyGrdtErrPosSlopTq_CFG = 200.0F;
/* When there occurs system errors,the  motor limit min torque positive ramp  */
volatile const real32_T TorqPahMgmt_MinGrdtErrNegSlopTq_CFG = 200.0F;
/* When there occurs system errors,the motor limit min torque negative ramp  */
volatile const real32_T TorqPahMgmt_MinGrdtErrPosSlopTq_CFG = 200.0F;
/* When there occurs system errors,the motor limit min torque positive ramp  */
volatile const real32_T TorqPahMgmt_MinMotExtChartcTq_MAP[231] = { -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F,
  -295.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -280.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -310.0F, -251.0F, -291.0F,
  -309.0F, -310.0F, -310.0F, -310.0F, -310.0F, -222.0F, -271.0F, -307.0F,
  -310.0F, -310.0F, -310.0F, -310.0F, -199.0F, -247.0F, -286.0F, -293.0F,
  -310.0F, -310.0F, -310.0F, -176.0F, -223.0F, -265.0F, -275.0F, -310.0F,
  -310.0F, -310.0F, -160.0F, -204.0F, -245.0F, -260.0F, -295.0F, -300.0F,
  -300.0F, -144.0F, -184.0F, -224.0F, -245.0F, -279.0F, -290.0F, -290.0F,
  -133.0F, -169.0F, -207.0F, -230.0F, -261.0F, -273.0F, -273.0F, -121.0F,
  -154.0F, -189.0F, -214.0F, -243.0F, -255.0F, -255.0F, -113.0F, -143.0F,
  -175.0F, -200.0F, -227.0F, -239.0F, -239.0F, -104.0F, -132.0F, -161.0F,
  -185.0F, -211.0F, -223.0F, -223.0F, -98.0F, -124.0F, -151.0F, -174.0F, -198.0F,
  -209.0F, -209.0F, -91.0F, -115.0F, -140.0F, -163.0F, -184.0F, -195.0F, -195.0F,
  -86.0F, -108.0F, -132.0F, -153.0F, -173.0F, -183.0F, -183.0F, -81.0F, -101.0F,
  -123.0F, -143.0F, -161.0F, -171.0F, -171.0F, -77.0F, -96.0F, -116.0F, -135.0F,
  -152.0F, -161.0F, -161.0F, -73.0F, -90.0F, -109.0F, -126.0F, -142.0F, -151.0F,
  -151.0F, -70.0F, -86.0F, -104.0F, -120.0F, -135.0F, -143.0F, -143.0F, -66.0F,
  -82.0F, -98.0F, -113.0F, -128.0F, -135.0F, -135.0F, -63.0F, -78.0F, -93.0F,
  -108.0F, -122.0F, -129.0F, -129.0F, -60.0F, -74.0F, -88.0F, -103.0F, -115.0F,
  -122.0F, -122.0F, -58.0F, -71.0F, -84.0F, -98.0F, -110.0F, -116.0F, -116.0F,
  -55.0F, -68.0F, -80.0F, -93.0F, -104.0F, -110.0F, -110.0F, -53.0F, -65.0F,
  -77.0F, -89.0F, -100.0F, -105.0F, -105.0F, -51.0F, -62.0F, -74.0F, -85.0F,
  -95.0F, -100.0F, -100.0F } ;
                        /* Max torque Motor External Characteristic Limit MAP */

volatile const real32_T TorqPahMgmt_MinPwrTqCnvnMotSpd_CFG = 100.0F;
                   /* Calculation bms allow maxmin torque the min motor speed */
volatile const real32_T TorqPahMgmt_MotDftMaxGrdtErrNegSlopTq_CFG = 5000.0F;
/* When there occurs system errors motor differential speed protection,the motor limit max torque negative ramp  */
volatile const real32_T TorqPahMgmt_MotDftMinGrdtErrNegSlopTq_CFG = 3000.0F;
/* When there occurs system errors motor differential speed protection,the motor limit min torque positive ramp  */
volatile const real32_T TorqPahMgmt_MotDftMinGrdtErrPosSlopTq_CFG = 3000.0F;
/* When there occurs system error motor differential speed protection,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_MotDftlMaxGrdtErrPosSlopTq_CFG = 5000.0F;
/* When there occurs system motor differential speed protection ,the motor limit max torque positive ramp  */
volatile const real32_T TorqPahMgmt_MotEffCnvrNum_CFG = 100.0F;/* Motor_Efficiency convert to float */
volatile const real32_T TorqPahMgmt_MotEffX_MAP[17] = { 1.0F, 1000.0F, 2000.0F,
  3000.0F, 4000.0F, 5000.0F, 6000.0F, 7000.0F, 8000.0F, 9000.0F, 10000.0F,
  11000.0F, 12000.0F, 13000.0F, 14000.0F, 15000.0F, 16000.0F } ;/* Motor_Efficiency MAP Xaxis */

volatile const real32_T TorqPahMgmt_MotEffY_MAP[16] = { 1.0F, 20.0F, 40.0F,
  60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F, 200.0F, 220.0F, 240.0F,
  260.0F, 280.0F, 300.0F } ;           /* Motor_Efficiency MAP Y axis */

volatile const real32_T TorqPahMgmt_MotEffZ_MAP[5] = { 250.0F, 300.0F, 350.0F,
  430.0F, 450.0F } ;         /* Motor External Characteristic Limit MAP Zaxis */

volatile const real32_T TorqPahMgmt_MotExtChartcTqX_MAP[33] = { 0.0F, 500.0F,
  1000.0F, 1500.0F, 2000.0F, 2500.0F, 3000.0F, 3500.0F, 4000.0F, 4500.0F,
  5000.0F, 5500.0F, 6000.0F, 6500.0F, 7000.0F, 7500.0F, 8000.0F, 8500.0F,
  9000.0F, 9500.0F, 10000.0F, 10500.0F, 11000.0F, 11500.0F, 12000.0F, 12500.0F,
  13000.0F, 13500.0F, 14000.0F, 14500.0F, 15000.0F, 15500.0F, 16000.0F } ;
                             /* Motor External Characteristic Limit MAP Xaxis */

volatile const real32_T TorqPahMgmt_MotExtChartcTqY_MAP[7] = { 250.0F, 300.0F,
  350.0F, 400.0F, 430.0F, 450.0F, 480.0F } ;
                            /* Motor External Characteristic Limit MAP Y axis */

volatile const real32_T TorqPahMgmt_MotSpdLpFilTim_CFG = 0.5F;/* motor speed average filter number */
volatile const real32_T TorqPahMgmt_VCUMaxTq_CFG = 310.0F;/* VCU limit min torque  */
volatile const real32_T TorqPahMgmt_VCUMinTq_CFG = -310.0F;/* VCU limit max torque  */
volatile const real32_T TorqPahMgmt_VehDrvShaftEff_CFG = 0.98F;/* Vehcile drive shaft Efficiency */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
