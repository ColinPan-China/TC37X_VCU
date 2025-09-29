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
 *  Filename:           CtAp_SpdLmt.c
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_SpdLmt.h"
#include "rtwtypes.h"
#include "CtAp_SpdLmt_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "look1_iflf_binlca.h"
#include "look2_iflf_binlca.h"
#include "CtAp_SpdLmt_Glb.h"
#include "CtAp_SpdLmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_SpdLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_SpdLmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static real32_T SpdLmt_MaxVehSpdDiff_kph;/* '<S19>/Subtract' */

/* Max Limit Speed Difference value */
static real32_T SpdLmt_MaxVehSpdFil_kph;/* '<S31>/Switch' */

/* Max set vehicle speed filter */
static boolean_T SpdLmt_MaxVehSpdPidKiStatnCdn_Flg;/* '<S25>/LogicalOperator3' */

/* Max Limit Speed PID control Ki torque rest condition */
static real32_T SpdLmt_MaxVehSpdPidKiTq_Nm;/* '<S25>/Add1' */

/* Max Limit Speed PID control Ki torque */
static boolean_T SpdLmt_PrevFwdMaxSpdSts_Flg;
                                  /* '<S17>/TorqPahMgmt_PrevFwdMaxSpdSts_Flg' */

/* last cycle TorqPahMgmt_FwdMaxSpdSts_Flg value */
static uint8_T SpdLmt_PrevFwdMaxVehSpd_kph;
                                 /* '<S16>/TorqPahMgmt_PrevFwdMaxVehSpd_Enum' */

/* last cycle TorqPahMgmt_FwdMaxVehSpd_Enum value */
static real32_T SpdLmt_PrevMaxSpdPidKiTq_Nm;
                                     /* '<S22>/TorqMgmt_PrevMaxSpdPidKiTq_Nm' */

/* last cycle TorqPahMgmt_vMaxVehSpdPidKiStatnCdn_Flg value */
static boolean_T SpdLmt_PrevMaxVehSpdPidKiStatnCdn_Flg;
                               /* '<S22>/TorqMgmt_MaxVehSpdPidKiStatnCdnPrev' */

/* last cycle TorqPahMgmt_MaxVehSpdPidKiStatnCdn_Flg value */
static real32_T SpdLmt_VehSpdFil_kph;  /* '<S32>/Sum3' */

/* vehicle absolute value speed */
#define CtAp_SpdLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SpdLmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S15>/If' */
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

uint8_T CtAp_SpdLmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S18>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S18>/Switch' */
  return rty_Out1_0;
}

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S24>/ATOM_Limiter'
 *    '<S25>/ATOM_Limiter'
 *    '<S26>/ATOM_Limiter'
 *    '<S11>/ATOM_Limiter'
 */
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

real32_T CtAp_SpdLmt_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S27>/Switch' incorporates:
   *  RelationalOperator: '<S27>/RelationalOperator'
   *  RelationalOperator: '<S27>/RelationalOperator1'
   *  Switch: '<S27>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S27>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S27>/Switch' */
  return rty_Out_0;
}

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

/* Output and update for atomic system: '<S12>/ATOM_RateRampLmt' */
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

void CtAp_SpdLmt_ATOM_RateRampLmt(real32_T rtu_demand, real32_T rtu_rise_rate,
  real32_T rtu_fall_rate, real32_T rtu_dt)
{
  /* Switch: '<S31>/Switch' incorporates:
   *  Delay: '<S31>/Delay'
   *  RelationalOperator: '<S31>/Relational Operator1'
   */
  if (rtu_demand > SpdLmt_MaxVehSpdFil_kph) {
    /* Switch: '<S31>/Switch' incorporates:
     *  MinMax: '<S31>/MinMax'
     *  Product: '<S31>/Product3'
     *  Sum: '<S31>/Sum'
     */
    SpdLmt_MaxVehSpdFil_kph = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
      SpdLmt_MaxVehSpdFil_kph);
  } else {
    /* Switch: '<S31>/Switch' incorporates:
     *  MinMax: '<S31>/MinMax1'
     *  Product: '<S31>/Product2'
     *  Sum: '<S31>/Sum1'
     */
    SpdLmt_MaxVehSpdFil_kph = fmaxf(rtu_demand, SpdLmt_MaxVehSpdFil_kph -
      (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S31>/Switch' */
}

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

/* Output and update for atomic system: '<S12>/LowPassFilter' */
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

void CtAp_SpdLmt_LowPassFilter(real32_T rtu_DataInput, real32_T rtu_TimeCnst_C,
  real32_T rtu_TSample_C)
{
  /* Sum: '<S32>/Sum3' incorporates:
   *  Product: '<S32>/Prd3'
   *  Product: '<S32>/Prd4'
   *  Sum: '<S32>/Sum4'
   *  UnitDelay: '<S32>/Delay'
   */
  SpdLmt_VehSpdFil_kph = ((rtu_TSample_C / rtu_TimeCnst_C) * (rtu_DataInput -
    SpdLmt_VehSpdFil_kph)) + SpdLmt_VehSpdFil_kph;
}

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_SpdLmt_START_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

void R_SpdLmt_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TorqPahMgmt_EmacQstyMaxTq_N;
  real32_T rtb_TorqPahMgmt_EmacQstyMinTq_N;
  real32_T rtb_VehMot_Acclr2Tq_Nm;
  real32_T rtb_VehMot_VehDragTq_Nm;
  real32_T rtb_VehMot_VehSpdAcclr_mps2q;
  real32_T SpdLmt_MaxVehSpdLmtPidKiTq_Nm;
  real32_T rtb_TorqPahMgmt_MaxVehSpdLmtPid;
  real32_T SpdLmt_MaxVehSpdLmtPidKpLmtTq_Nm;
  real32_T rtb_SpdLmt_MaxVehSpdNoLmtPidTq_;
  real32_T rtb_SpdLmt_VehSpd_kph;
  real32_T rtb_Switch_lbnd;
  real32_T rtb_Switch_htsx;
  real32_T rtb_Switch_gpne;
  real32_T rtb_Switch_iq4a;
  uint8_T rtb_Divide;
  uint8_T rtb_Switch_kmhs;
  boolean_T rtb_ComM_IVINodComFailr_Flg;
  boolean_T rtb_VehMot_VehSpdVld_Flg;
  boolean_T rtb_DiagApp_SpdLmtUpdateInfo;
  boolean_T rtb_ChassisMgmt_AccrPedlKdSts_F;
  dt_ErrMgmt_TorqCtrlErr tmpRead_0;
  int32_T rtb_SpdLmt_MaxVehSpdPidKiTq_int;
  int32_T tmp;
  int32_T u;
  real32_T rtb_Switch;
  real32_T tmpRead_3;
  uint8_T tmpRead;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  uint8_T tmpRead_4;

  /* SignalConversion: '<S6>/SignalCopy15' incorporates:
   *  Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo'
   */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo
    (&rtb_ChassisMgmt_AccrPedlKdSts_F);

  /* SignalConversion: '<S6>/SignalCopy14' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_SpdLmtUpdateInfo_tec_DiagApp_SpdLmtUpdateInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_SpdLmtUpdateInfo_tec_DiagApp_SpdLmtUpdateInfo
    (&rtb_DiagApp_SpdLmtUpdateInfo);

  /* Inport: '<Root>/RTE_R_DiagApp_SpdLmtInfo_tec_DiagApp_SpdLmtInfo' */
  (void)Rte_Read_RTE_R_DiagApp_SpdLmtInfo_tec_DiagApp_SpdLmtInfo(&tmpRead_4);

  /* SignalConversion: '<S6>/SignalCopy12' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (&rtb_VehMot_VehSpdVld_Flg);

  /* SignalConversion: '<S6>/SignalCopy11' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q
    (&rtb_VehMot_VehSpdAcclr_mps2q);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&tmpRead_3);

  /* SignalConversion: '<S6>/SignalCopy9' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm'
   */
  (void)Rte_Read_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm
    (&rtb_VehMot_VehDragTq_Nm);

  /* SignalConversion: '<S6>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm'
   */
  (void)Rte_Read_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm
    (&rtb_VehMot_Acclr2Tq_Nm);

  /* SignalConversion: '<S6>/SignalCopy7' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* SignalConversion: '<S6>/SignalCopy6' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMaxTq_N);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' */
  (void)Rte_Read_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus
    (&tmpRead_0);

  /* SignalConversion: '<S6>/SignalCopy2' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
    (&rtb_ComM_IVINodComFailr_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum' */
  (void)
    Rte_Read_RTE_R_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum
    (&TorqPahMgmt_IVIFwdVehSpdAllwd_kph);

  /* Inport: '<Root>/RTE_R_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum' */
  (void)
    Rte_Read_RTE_R_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_SpdLmt_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Function' */
  /* Outputs for Atomic SubSystem: '<S5>/DefaultMaximumVehicleSpeed'
   *
   * Block requirements for '<S5>/DefaultMaximumVehicleSpeed':
   *  1. SWREQ_01725 Default maximum Vehicle Speed limit
   *  2. SWREQ_01726 Default maximum Vehicle Speed limit2
   *  3. SWREQ_01727 Default maximum Vehicle Speed limit3
   *  4. SWREQ_01728 Default maximum Vehicle Speed limit Keep
   *  5. SWREQ_05947 Default limit  Vehicle Speed  convert
   */
  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Input'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Input':
   *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
   */
  /* MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
   *  SignalConversion: '<S6>/SignalCopy13'
   */
  switch (tmpRead_4) {
   case 0:
    /* MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_DftFwdMaxSpd3GearD_CFG'
     */
    TorqPahMgmt_DftFwdMaxSpd_kph = TorqPahMgmt_DftFwdMaxSpd3GearD_CFG;
    break;

   case 1:
    /* MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_DftFwdMaxSpd2GearD_CFG'
     */
    TorqPahMgmt_DftFwdMaxSpd_kph = TorqPahMgmt_DftFwdMaxSpd2GearD_CFG;
    break;

   case 2:
    /* MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_DftFwdMaxSpdGearD_CFG1'
     */
    TorqPahMgmt_DftFwdMaxSpd_kph = TorqPahMgmt_DftFwdMaxSpdGearD_CFG;
    break;

   default:
    /* no actions */
    break;
  }

  /* End of MultiPortSwitch: '<S8>/MultiportSwitch' */
  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Input' */
  /* End of Outputs for SubSystem: '<S5>/DefaultMaximumVehicleSpeed' */

  /* Outputs for Atomic SubSystem: '<S5>/IVI_VehicleSpeedLimitSet' */
  /* Switch: '<S18>/Switch' incorporates:
   *  UnitDelay: '<S16>/TorqPahMgmt_PrevFwdMaxVehSpd_Enum'
   */
  rtb_Switch_kmhs = SpdLmt_PrevFwdMaxVehSpd_kph;

  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Input'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Input':
   *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
   */
  /* Switch: '<S16>/Switch2' incorporates:
   *  Constant: '<S16>/SpdLmt_170_IVI'
   *  Constant: '<S16>/SpdLmt_NO_REQUEST'
   *  Logic: '<S16>/LogicalOperator2'
   *  Logic: '<S16>/LogicalOperator3'
   *  RelationalOperator: '<S16>/RelationalOperator'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  if ((TorqPahMgmt_IVIFwdVehSpdAllwd_kph > ((uint8_T)SpdLmt_170_IVI)) ||
      (TorqPahMgmt_IVIFwdVehSpdAllwd_kph == ((uint8_T)SpdLmt_NO_REQUEST))) {
    /* Switch: '<S16>/Switch2' incorporates:
     *  Inport: '<Root>/RTE_R_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum'
     */
    TorqPahMgmt_IVIFwdVehSpdAllwd_kph = rtb_Switch_kmhs;
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/SpdLmt_OFF'
   *  Constant: '<S17>/SpdLmt_ON'
   *  RelationalOperator: '<S17>/RelationalOperator'
   *  RelationalOperator: '<S17>/RelationalOperator1'
   *  SignalConversion: '<S6>/SignalCopy'
   *  Switch: '<S17>/Switch1'
   */
  if (tmpRead == ((uint8_T)SpdLmt_ON)) {
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/SpdLmt_ACTIVE'
     */
    TorqPahMgmt_FwdMaxSpdSts_Flg = SpdLmt_ACTIVE;
  } else if (tmpRead == ((uint8_T)SpdLmt_OFF)) {
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S17>/SpdLmt_INACTIVE'
     *  Switch: '<S17>/Switch'
     */
    TorqPahMgmt_FwdMaxSpdSts_Flg = SpdLmt_INACTIVE;
  } else {
    /* Switch: '<S17>/Switch' incorporates:
     *  UnitDelay: '<S17>/TorqPahMgmt_PrevFwdMaxSpdSts_Flg'
     */
    TorqPahMgmt_FwdMaxSpdSts_Flg = SpdLmt_PrevFwdMaxSpdSts_Flg;
  }

  /* End of Switch: '<S17>/Switch' */
  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Input' */

  /* Switch: '<S16>/Switch' */
  if (TorqPahMgmt_FwdMaxSpdSts_Flg) {
    /* Switch: '<S16>/Switch' */
    TorqPahMgmt_FwdMaxVehSpd_kph = TorqPahMgmt_IVIFwdVehSpdAllwd_kph;
  } else {
    /* Switch: '<S16>/Switch' */
    TorqPahMgmt_FwdMaxVehSpd_kph = TorqPahMgmt_DftFwdMaxSpd_kph;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Outputs for Atomic SubSystem: '<S9>/IVISetSpeedConvertSoftwareSpeed'
   *
   * Block requirements for '<S9>/IVISetSpeedConvertSoftwareSpeed':
   *  1. SWREQ_01734 VCU limit Vehicle Speed  Kick down off
   *  2. SWREQ_05891 VCU limit Vehicle Speed  Kick down
   */
  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S15>/TorqPahMgmt_FwdMaxVehSpdDif_CFG'
   *  Sum: '<S15>/Subtract'
   */
  rtb_Switch_kmhs = (uint8_T)((uint32_T)TorqPahMgmt_FwdMaxVehSpd_kph - (uint32_T)
    ((uint8_T)TorqPahMgmt_FwdMaxVehSpdDif_CFG));

  /* Product: '<S15>/Divide' incorporates:
   *  Constant: '<S15>/TorqPahMgmt_FwdMaxVehSpdDifSca_CFG'
   */
  rtb_Divide = (uint8_T)((real32_T)((real32_T)rtb_Switch_kmhs /
    TorqPahMgmt_FwdMaxVehSpdDifSca_CFG));

  /* Outputs for Atomic SubSystem: '<S15>/If' */
  rtb_Switch_kmhs = CtAp_SpdLmt_If(rtb_ChassisMgmt_AccrPedlKdSts_F,
    TorqPahMgmt_DftFwdMaxSpd_kph, rtb_Divide);

  /* End of Outputs for SubSystem: '<S15>/If' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  TorqPahMgmt_FwdMaxVehSpdCnvr_kph = (real32_T)rtb_Switch_kmhs;

  /* End of Outputs for SubSystem: '<S9>/IVISetSpeedConvertSoftwareSpeed' */

  /* Update for UnitDelay: '<S16>/TorqPahMgmt_PrevFwdMaxVehSpd_Enum' */
  SpdLmt_PrevFwdMaxVehSpd_kph = TorqPahMgmt_FwdMaxVehSpd_kph;

  /* Update for UnitDelay: '<S17>/TorqPahMgmt_PrevFwdMaxSpdSts_Flg' */
  SpdLmt_PrevFwdMaxSpdSts_Flg = TorqPahMgmt_FwdMaxSpdSts_Flg;

  /* End of Outputs for SubSystem: '<S5>/IVI_VehicleSpeedLimitSet' */

  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Input'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Input':
   *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
   */
  /* Switch: '<S14>/Switch' incorporates:
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  if (tmpRead_0.ErrMgmt_VehSpdLimEna_Flg) {
    /* Switch: '<S14>/Switch' */
    rtb_Switch = tmpRead_0.ErrMgmt_VehSpdLim_kph;
  } else {
    /* Switch: '<S14>/Switch' */
    rtb_Switch = (real32_T)TorqPahMgmt_DftFwdMaxSpd_kph;
  }

  /* End of Switch: '<S14>/Switch' */

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/SpdLmt_VEHICLE_READY'
   *  RelationalOperator: '<S14>/RelationalOperator2'
   *  SignalConversion: '<S6>/SignalCopy5'
   */
  if (tmpRead_2 == ((uint8_T)SpdLmt_VEHICLE_READY)) {
    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S14>/SpdLmt_GearD'
     *  Constant: '<S14>/SpdLmt_GearR'
     *  RelationalOperator: '<S14>/RelationalOperator'
     *  RelationalOperator: '<S14>/RelationalOperator1'
     *  SignalConversion: '<S6>/SignalCopy4'
     *  Switch: '<S14>/Switch3'
     */
    if (tmpRead_1 == ((uint8_T)SpdLmt_GearD)) {
      /* Switch: '<S14>/Switch1' */
      if (TorqPahMgmt_FwdMaxSpdSts_Flg) {
        /* Switch: '<S14>/Switch5' incorporates:
         *  SignalConversion: '<S6>/SignalCopy3'
         */
        if (tmpRead_0.ErrMgmt_VehSpdLimEna_Flg) {
          /* Switch: '<S14>/Switch4' incorporates:
           *  MinMax: '<S14>/MinMax'
           *  Switch: '<S14>/Switch5'
           */
          TorqPahMgmt_MaxVehSpd_kph = fminf(TorqPahMgmt_FwdMaxVehSpdCnvr_kph,
            tmpRead_0.ErrMgmt_VehSpdLim_kph);
        } else {
          /* Switch: '<S14>/Switch4' incorporates:
           *  Switch: '<S14>/Switch5'
           */
          TorqPahMgmt_MaxVehSpd_kph = TorqPahMgmt_FwdMaxVehSpdCnvr_kph;
        }

        /* End of Switch: '<S14>/Switch5' */
      } else {
        /* Switch: '<S14>/Switch4' incorporates:
         *  Switch: '<S14>/Switch1'
         *  Switch: '<S14>/Switch2'
         */
        TorqPahMgmt_MaxVehSpd_kph = rtb_Switch;
      }

      /* End of Switch: '<S14>/Switch1' */
    } else if (tmpRead_1 == ((uint8_T)SpdLmt_GearR)) {
      /* Switch: '<S14>/Switch3' incorporates:
       *  Constant: '<S14>/TorqPahMgmt_DftFwdMaxSpdGearR_CFG'
       *  MinMax: '<S14>/MinMax1'
       *  Switch: '<S14>/Switch2'
       *  Switch: '<S14>/Switch4'
       */
      TorqPahMgmt_MaxVehSpd_kph = fminf(rtb_Switch,
        TorqPahMgmt_DftFwdMaxSpdGearR_CFG);
    } else {
      /* Switch: '<S14>/Switch4' incorporates:
       *  Switch: '<S14>/Switch2'
       *  Switch: '<S14>/Switch3'
       */
      TorqPahMgmt_MaxVehSpd_kph = (real32_T)TorqPahMgmt_DftFwdMaxSpd_kph;
    }

    /* End of Switch: '<S14>/Switch2' */
  } else {
    /* Switch: '<S14>/Switch4' */
    TorqPahMgmt_MaxVehSpd_kph = (real32_T)TorqPahMgmt_DftFwdMaxSpd_kph;
  }

  /* End of Switch: '<S14>/Switch4' */
  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S5>/SpeedFilter'
   *
   * Block requirements for '<S5>/SpeedFilter':
   *  1. SWREQ_01742 VCU limit Vehicle Speed  Filter
   *  2. SWREQ_01743 vehicle Speed  Filter
   */
  /* Outputs for Atomic SubSystem: '<S12>/ATOM_RateRampLmt' */
  /* Constant: '<S12>/TorqPahMgmt_GrdtMaxVehSpdPos_CFG' incorporates:
   *  Constant: '<S12>/SpdLmt_Dt'
   *  Constant: '<S12>/TorqPahMgmt_GrdtMaxVehSpdNeg_CFG'
   */
  CtAp_SpdLmt_ATOM_RateRampLmt(TorqPahMgmt_MaxVehSpd_kph,
    TorqPahMgmt_GrdtMaxVehSpdPos_CFG, TorqPahMgmt_GrdtMaxVehSpdNeg_CFG,
    SpdLmt_Dt);

  /* End of Outputs for SubSystem: '<S12>/ATOM_RateRampLmt' */

  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Input'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Input':
   *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
   */
  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/SpdLmt_GearR'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   *  Saturate: '<S12>/MaxLimit'
   *  SignalConversion: '<S6>/SignalCopy10'
   *  SignalConversion: '<S6>/SignalCopy4'
   */
  if (tmpRead_1 == ((uint8_T)SpdLmt_GearR)) {
    /* Saturate: '<S12>/MaxLimit' incorporates:
     *  SignalConversion: '<S6>/SignalCopy10'
     */
    if (tmpRead_3 > SpdLmt_MAX_SPEED) {
      tmpRead_3 = SpdLmt_MAX_SPEED;
    } else if (tmpRead_3 < SpdLmt_MIN_SPEED) {
      tmpRead_3 = SpdLmt_MIN_SPEED;
    } else {
      /* no actions */
    }

    /* Switch: '<S12>/Switch' incorporates:
     *  Gain: '<S12>/Gain'
     *  Saturate: '<S12>/MaxLimit'
     */
    rtb_SpdLmt_VehSpd_kph = (-1.0F) * tmpRead_3;
  } else if (tmpRead_3 > SpdLmt_MAX_SPEED) {
    /* Saturate: '<S12>/MaxLimit' incorporates:
     *  Switch: '<S12>/Switch'
     */
    rtb_SpdLmt_VehSpd_kph = SpdLmt_MAX_SPEED;
  } else if (tmpRead_3 < SpdLmt_MIN_SPEED) {
    /* Saturate: '<S12>/MaxLimit' incorporates:
     *  Switch: '<S12>/Switch'
     */
    rtb_SpdLmt_VehSpd_kph = SpdLmt_MIN_SPEED;
  } else {
    /* Switch: '<S12>/Switch' incorporates:
     *  Saturate: '<S12>/MaxLimit'
     *  SignalConversion: '<S6>/SignalCopy10'
     */
    rtb_SpdLmt_VehSpd_kph = tmpRead_3;
  }

  /* End of Switch: '<S12>/Switch' */
  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/LowPassFilter' */
  /* Constant: '<S12>/TorqPahMgmt_VehSpdFilTim_CFG' incorporates:
   *  Constant: '<S12>/SpdLmt_Dt1'
   */
  CtAp_SpdLmt_LowPassFilter(rtb_SpdLmt_VehSpd_kph, TorqPahMgmt_VehSpdFilTim_CFG,
    SpdLmt_Dt);

  /* End of Outputs for SubSystem: '<S12>/LowPassFilter' */
  /* End of Outputs for SubSystem: '<S5>/SpeedFilter' */

  /* Outputs for Atomic SubSystem: '<S10>/MaxLimitSpeedBoundError'
   *
   * Block requirements for '<S10>/MaxLimitSpeedBoundError':
   *  1. SWREQ_01744 VCU limit Speed Bound Error
   */
  /* Sum: '<S19>/Subtract' */
  SpdLmt_MaxVehSpdDiff_kph = SpdLmt_MaxVehSpdFil_kph - SpdLmt_VehSpdFil_kph;

  /* End of Outputs for SubSystem: '<S10>/MaxLimitSpeedBoundError' */

  /* Outputs for Atomic SubSystem: '<S10>/MaxlimitSpeedStatus'
   *
   * Block requirements for '<S10>/MaxlimitSpeedStatus':
   *  1. SWREQ_01745 VCU limit Speed Status
   */
  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Input'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Input':
   *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
   */
  /* Logic: '<S23>/LogicalOperator1' incorporates:
   *  Constant: '<S23>/SpdLmt_GearD'
   *  Constant: '<S23>/SpdLmt_GearR'
   *  Constant: '<S23>/SpdLmt_ZERO_SPEED'
   *  Constant: '<S23>/SpdLmt_ZERO_SPEED1'
   *  Constant: '<S23>/TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG'
   *  Constant: '<S23>/TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG1'
   *  Logic: '<S23>/LogicalOperator'
   *  Logic: '<S23>/LogicalOperator2'
   *  RelationalOperator: '<S23>/RelationalOperator'
   *  RelationalOperator: '<S23>/RelationalOperator1'
   *  RelationalOperator: '<S23>/RelationalOperator2'
   *  RelationalOperator: '<S23>/RelationalOperator3'
   *  RelationalOperator: '<S23>/RelationalOperator4'
   *  RelationalOperator: '<S23>/RelationalOperator5'
   *  SignalConversion: '<S6>/SignalCopy4'
   */
  TorqPahMgmt_MaxVehSpdLmtTqSts_Flg = (((SpdLmt_MaxVehSpdDiff_kph <
    TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG) && (tmpRead_1 == ((uint8_T)
    SpdLmt_GearD)) && (SpdLmt_VehSpdFil_kph > SpdLmt_ZERO_SPEED)) ||
    ((SpdLmt_MaxVehSpdDiff_kph < TorqPahMgmt_MaxVehSpdLmtStsDifSpd_CFG) &&
     (tmpRead_1 == ((uint8_T)SpdLmt_GearR)) && (SpdLmt_VehSpdFil_kph >
    SpdLmt_ZERO_SPEED)));

  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Input' */
  /* End of Outputs for SubSystem: '<S10>/MaxlimitSpeedStatus' */

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/SpdLmt_ZERO_TORQUE'
   *  UnitDelay: '<S22>/TorqMgmt_MaxVehSpdPidKiStatnCdnPrev'
   */
  if (SpdLmt_PrevMaxVehSpdPidKiStatnCdn_Flg) {
    tmpRead_3 = SpdLmt_ZERO_TORQUE;
  } else {
    tmpRead_3 = SpdLmt_MaxVehSpdDiff_kph;
  }

  /* Switch: '<S25>/Switch1' incorporates:
   *  Constant: '<S25>/SpdLmt_ZERO_TORQUE1'
   */
  if (!TorqPahMgmt_MaxVehSpdLmtTqSts_Flg) {
    SpdLmt_PrevMaxSpdPidKiTq_Nm = SpdLmt_ZERO_TORQUE;
  }

  /* Sum: '<S25>/Add1' incorporates:
   *  Lookup_n-D: '<S25>/TorqPahMgmt_MaxVehSpdLmtTqPidKi_LUT'
   *  Product: '<S25>/Product1'
   *  Sum: '<S19>/Subtract'
   *  Switch: '<S25>/Switch'
   *  Switch: '<S25>/Switch1'
   */
  SpdLmt_MaxVehSpdPidKiTq_Nm = (look1_iflf_binlca(SpdLmt_MaxVehSpdDiff_kph,
    &TorqPahMgmt_MaxVehSpdLmtTqPidKiX_LUT[0],
    &TorqPahMgmt_MaxVehSpdLmtTqPidKi_LUT[0], 13U) * tmpRead_3) +
    SpdLmt_PrevMaxSpdPidKiTq_Nm;

  /* DataTypeConversion: '<S25>/Float2Int2' */
  rtb_SpdLmt_MaxVehSpdPidKiTq_int = (int32_T)floorf(SpdLmt_MaxVehSpdPidKiTq_Nm);

  /* Outputs for Atomic SubSystem: '<S25>/ATOM_Limiter' */
  /* Constant: '<S25>/TorqPahMgmt_MaxVehSpdLmtPidKiTqMax_CFG' incorporates:
   *  Constant: '<S25>/TorqPahMgmt_MaxVehSpdLmtPidKiTqMin_CFG'
   */
  rtb_Switch_gpne = CtAp_SpdLmt_ATOM_Limiter
    (TorqPahMgmt_MaxVehSpdLmtPidKiTqMax_CFG, SpdLmt_MaxVehSpdPidKiTq_Nm,
     TorqPahMgmt_MaxVehSpdLmtPidKiTqMin_CFG);

  /* End of Outputs for SubSystem: '<S25>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S25>/ATOM_Limiter' */
  SpdLmt_MaxVehSpdLmtPidKiTq_Nm = rtb_Switch_gpne;

  /* DataTypeConversion: '<S25>/Float2Int32' */
  u = (int32_T)floorf(SpdLmt_MaxVehSpdDiff_kph);

  /* Signum: '<S25>/Sign' */
  if (rtb_SpdLmt_MaxVehSpdPidKiTq_int < 0) {
    tmp = -1;
  } else {
    tmp = (rtb_SpdLmt_MaxVehSpdPidKiTq_int > 0) ? ((int32_T)1) : ((int32_T)0);
  }

  /* Signum: '<S25>/Sign1' */
  if (u < 0) {
    u = -1;
  } else {
    u = (u > 0) ? ((int32_T)1) : ((int32_T)0);
  }

  /* Logic: '<S25>/LogicalOperator3' incorporates:
   *  DataTypeConversion: '<S25>/Float2Int1'
   *  RelationalOperator: '<S25>/RelationalOperator1'
   *  RelationalOperator: '<S25>/RelationalOperator4'
   *  Signum: '<S25>/Sign'
   *  Signum: '<S25>/Sign1'
   */
  SpdLmt_MaxVehSpdPidKiStatnCdn_Flg = (((int32_T)floorf
    (SpdLmt_MaxVehSpdLmtPidKiTq_Nm) != rtb_SpdLmt_MaxVehSpdPidKiTq_int) && (tmp ==
    u));

  /* Product: '<S26>/Product' incorporates:
   *  Lookup_n-D: '<S26>/TorqPahMgmt_MaxVehSpdLmtTqPidKp_LUT'
   *  Sum: '<S19>/Subtract'
   */
  rtb_TorqPahMgmt_MaxVehSpdLmtPid = SpdLmt_MaxVehSpdDiff_kph * look1_iflf_binlca
    (SpdLmt_MaxVehSpdDiff_kph, &TorqPahMgmt_MaxVehSpdLmtTqPidKpX_LUT[0],
     &TorqPahMgmt_MaxVehSpdLmtTqPidKp_LUT[0], 13U);

  /* Outputs for Atomic SubSystem: '<S26>/ATOM_Limiter' */
  /* Constant: '<S26>/TorqPahMgmt_MaxVehSpdLmtPidKpTqMax_CFG' incorporates:
   *  Constant: '<S26>/TorqPahMgmt_MaxVehSpdLmtPidKpTqMin_CFG'
   */
  rtb_Switch_htsx = CtAp_SpdLmt_ATOM_Limiter
    (TorqPahMgmt_MaxVehSpdLmtPidKpTqMax_CFG, rtb_TorqPahMgmt_MaxVehSpdLmtPid,
     TorqPahMgmt_MaxVehSpdLmtPidKpTqMin_CFG);

  /* End of Outputs for SubSystem: '<S26>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S26>/ATOM_Limiter' */
  SpdLmt_MaxVehSpdLmtPidKpLmtTq_Nm = rtb_Switch_htsx;

  /* Sum: '<S24>/Add' */
  rtb_SpdLmt_MaxVehSpdNoLmtPidTq_ = SpdLmt_MaxVehSpdLmtPidKpLmtTq_Nm +
    SpdLmt_MaxVehSpdLmtPidKiTq_Nm;

  /* Outputs for Atomic SubSystem: '<S24>/ATOM_Limiter' */
  /* Constant: '<S24>/TorqPahMgmt_MaxVehSpdPidTqMax_CFG' incorporates:
   *  Constant: '<S24>/TorqPahMgmt_MaxVehSpdLmtPidTqMin_CFG'
   */
  rtb_Switch_iq4a = CtAp_SpdLmt_ATOM_Limiter
    (TorqPahMgmt_MaxVehSpdLmtPidTqMax_CFG, rtb_SpdLmt_MaxVehSpdNoLmtPidTq_,
     TorqPahMgmt_MaxVehSpdLmtPidTqMin_CFG);

  /* End of Outputs for SubSystem: '<S24>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S24>/ATOM_Limiter' */
  TorqPahMgmt_MaxVehSpdLmtPidTq_Nm = rtb_Switch_iq4a;

  /* Lookup_n-D: '<S21>/TorqPahMgmt_MaxVehSpdLmtFbTq_MAP' incorporates:
   *  Sum: '<S19>/Subtract'
   *  Switch: '<S31>/Switch'
   */
  TorqPahMgmt_MaxVehSpdLmtFbTq_Nm = look2_iflf_binlca(SpdLmt_MaxVehSpdFil_kph,
    SpdLmt_MaxVehSpdDiff_kph, &TorqPahMgmt_MaxVehSpdLmtFbTqY_MAP[0],
    &TorqPahMgmt_MaxVehSpdLmtFbTqX_MAP[0], &TorqPahMgmt_MaxVehSpdLmtFbTq_MAP[0],
    CtAp_SpdLmt_ConstP.TorqPahMgmt_MaxVehSpdLmtFbTq_MA, 18U);

  /* Sum: '<S20>/Add2' */
  TorqPahMgmt_MaxVehSpdTq_Nm = TorqPahMgmt_MaxVehSpdLmtPidTq_Nm +
    TorqPahMgmt_MaxVehSpdLmtFbTq_Nm;

  /* Outputs for Atomic SubSystem: '<S5>/MaxVehicleSpeedTorqueLimit'
   *
   * Block requirements for '<S5>/MaxVehicleSpeedTorqueLimit':
   *  1. SWREQ_01750 VCU limit Speed  control Torque Limit
   */
  /* Outputs for Atomic SubSystem: '<S11>/ATOM_Limiter' */
  /* Constant: '<S11>/TorqPahMgmt_MaxVehSpdTqMax_CFG' incorporates:
   *  Constant: '<S11>/TorqPahMgmt_MaxVehSpdTqMin_CFG'
   */
  rtb_Switch_lbnd = CtAp_SpdLmt_ATOM_Limiter(TorqPahMgmt_MaxVehSpdTqMax_CFG,
    TorqPahMgmt_MaxVehSpdTq_Nm, TorqPahMgmt_MaxVehSpdTqMin_CFG);

  /* End of Outputs for SubSystem: '<S11>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S11>/ATOM_Limiter' */
  TorqPahMgmt_MaxVehSpdLmtTq_Nm = rtb_Switch_lbnd;

  /* End of Outputs for SubSystem: '<S5>/MaxVehicleSpeedTorqueLimit' */

  /* Update for Switch: '<S25>/Switch1' incorporates:
   *  UnitDelay: '<S22>/TorqMgmt_PrevMaxSpdPidKiTq_Nm'
   */
  SpdLmt_PrevMaxSpdPidKiTq_Nm = SpdLmt_MaxVehSpdPidKiTq_Nm;

  /* Update for UnitDelay: '<S22>/TorqMgmt_MaxVehSpdPidKiStatnCdnPrev' */
  SpdLmt_PrevMaxVehSpdPidKiStatnCdn_Flg = SpdLmt_MaxVehSpdPidKiStatnCdn_Flg;

  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Function' */

  /* Outputs for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Output'
   *
   * Block requirements for '<S3>/CtAp_SpdLmt_Output':
   *  1. SWREQ_01721 The function of "Speed Limit" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg' incorporates:
   *  SignalConversion: '<S7>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg
    (TorqPahMgmt_FwdMaxSpdSts_Flg);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum' incorporates:
   *  SignalConversion: '<S7>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum
    (TorqPahMgmt_FwdMaxVehSpd_kph);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm' incorporates:
   *  SignalConversion: '<S7>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm
    (TorqPahMgmt_MaxVehSpdLmtTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MaxVehSpdLmtTqSts_Flg_tec_TorqPahMgmt_MaxVehSpdLmtTqSts_Flg' incorporates:
   *  SignalConversion: '<S7>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_MaxVehSpdLmtTqSts_Flg_tec_TorqPahMgmt_MaxVehSpdLmtTqSts_Flg
    (TorqPahMgmt_MaxVehSpdLmtTqSts_Flg);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_SpdLmtReadInfo_tec_TorqPahMgmt_SpdLmtReadInfo' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_SpdLmtReadInfo_tec_TorqPahMgmt_SpdLmtReadInfo
    ((real32_T)TorqPahMgmt_DftFwdMaxSpd_kph);

  /* End of Outputs for SubSystem: '<S3>/CtAp_SpdLmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_SpdLmt_Cyclic_10ms_sys' */
}

#define CtAp_SpdLmt_STOP_SEC_CODE
#include "CtAp_SpdLmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_SpdLmt_START_SEC_VAR_CONST_8
#include "CtAp_SpdLmt_MemMap.h"

void R_SpdLmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_MaxVehSpd_kph = 0.0F;
  TorqPahMgmt_MaxVehSpdLmtPidTq_Nm = 0.0F;
  TorqPahMgmt_MaxVehSpdLmtFbTq_Nm = 0.0F;
  TorqPahMgmt_MaxVehSpdTq_Nm = 0.0F;
  TorqPahMgmt_MaxVehSpdLmtTq_Nm = 0.0F;
  TorqPahMgmt_FwdMaxVehSpdCnvr_kph = 0.0F;
  TorqPahMgmt_IVIFwdVehSpdAllwd_kph = 0U;
  TorqPahMgmt_FwdMaxVehSpd_kph = ((uint8_T)0U);
  TorqPahMgmt_DftFwdMaxSpd_kph = ((uint8_T)170U);
  TorqPahMgmt_MaxVehSpdLmtTqSts_Flg = false;
  TorqPahMgmt_FwdMaxSpdSts_Flg = false;

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_SpdLmt_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S3>/CtAp_SpdLmt_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S5>/DefaultMaximumVehicleSpeed'
   *
   * Block requirements for '<S5>/DefaultMaximumVehicleSpeed':
   *  1. SWREQ_01725 Default maximum Vehicle Speed limit
   *  2. SWREQ_01726 Default maximum Vehicle Speed limit2
   *  3. SWREQ_01727 Default maximum Vehicle Speed limit3
   *  4. SWREQ_01728 Default maximum Vehicle Speed limit Keep
   *  5. SWREQ_05947 Default limit  Vehicle Speed  convert
   */
  /* InitializeConditions for MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
   *  UnitDelay: '<S8>/OneDelay'
   */
  TorqPahMgmt_DftFwdMaxSpd_kph = ((uint8_T)170U);

  /* End of SystemInitialize for SubSystem: '<S5>/DefaultMaximumVehicleSpeed' */
  /* End of SystemInitialize for SubSystem: '<S3>/CtAp_SpdLmt_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_SpdLmt_Cyclic_10ms_sys' */
}

#define CtAp_SpdLmt_STOP_SEC_VAR_CONST_8
#include "CtAp_SpdLmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
