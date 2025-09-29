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
 *  Filename:           CtAp_TorqLmt.c
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
#include "CtAp_TorqLmt.h"
#include "rtwtypes.h"
#include "CtAp_TorqLmt_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_TorqLmt_Glb.h"
#include "look2_iflf_binlca.h"
#include "plook_u32ff_binca.h"
#include "intrp3d_fu32fla.h"
#include "look1_iflf_binlca.h"
#include "CtAp_TorqLmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_TorqLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static boolean_T TorqLmt_GearChgSts_Flg;/* '<S20>/Relational Operator' */

/* zero torque status */
static real32_T TorqLmt_PrevEmacMaxTq_Nm;/* '<S6>/TorqPahMgmt_PrevEmacMaxTq_Nm' */

/* last cycle max motor torque */
static real32_T TorqLmt_PrevEmacMinTq_Nm;/* '<S6>/TorqPahMgmt_PrevEmacMinTq_Nm' */

/* last cycle min motor torque */
static real32_T TorqLmt_PwrTqCnvnMotSpd_rpm;/* '<S26>/MinMax' */

/* Calculation bms allow maxmin torque uesd motor speed */
#define CtAp_TorqLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"

ARID_DEF_CtAp_TorqLmt_T CtAp_TorqLmt_ARID_DEF;

#define CtAp_TorqLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* System initialize for atomic system: '<S10>/TimerTOff' */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

void CtAp_TorqLmt_TimerTOff_Init(ARID_DEF_TimerTOff_CtAp_TorqL_T
  *CtAp_TorqLmt__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S21>/Delay1' */
  CtAp_TorqLmt__ARID_DEF_arg->icLoad = true;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Output and update for atomic system: '<S10>/TimerTOff' */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

void CtAp_TorqLmt_TimerTOff(boolean_T rtu_u, uint16_T rtu_Toff, uint16_T rtu_dT,
  ARID_DEF_TimerTOff_CtAp_TorqL_T *CtAp_TorqLmt__ARID_DEF_arg)
{
  /* Delay: '<S21>/Delay1' */
  if (CtAp_TorqLmt__ARID_DEF_arg->icLoad) {
    /* Sum: '<S21>/Sum2' */
    CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE = rtu_Toff;
  }

  /* Switch: '<S21>/Switch' incorporates:
   *  Logic: '<S20>/Logical Operator5'
   */
  if (!rtu_u) {
    uint16_T u0;

    /* Sum: '<S21>/Sum1' incorporates:
     *  Delay: '<S21>/Delay1'
     */
    u0 = (uint16_T)((uint32_T)CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE +
                    (uint32_T)rtu_dT);

    /* Sum: '<S21>/Sum2' */
    CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE = (uint16_T)((uint32_T)rtu_dT +
      (uint32_T)rtu_Toff);

    /* MinMax: '<S21>/MinMax' */
    if (u0 <= CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE) {
      /* Sum: '<S21>/Sum2' incorporates:
       *  Switch: '<S21>/Switch'
       */
      CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE = u0;
    }

    /* End of MinMax: '<S21>/MinMax' */
  } else {
    /* Sum: '<S21>/Sum2' incorporates:
     *  Constant: '<S21>/const'
     *  Switch: '<S21>/Switch'
     */
    CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S21>/Switch' */

  /* RelationalOperator: '<S20>/Relational Operator' */
  TorqLmt_GearChgSts_Flg = (CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE <=
    rtu_Toff);

  /* Update for Delay: '<S21>/Delay1' */
  CtAp_TorqLmt__ARID_DEF_arg->icLoad = false;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Output and update for atomic system: '<S12>/ATOM_AvgFilt' */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

real32_T CtAp_TorqLmt_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_To_T
  *CtAp_TorqLmt__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;
  int_T idxDelay;

  /* MinMax: '<S22>/Min' incorporates:
   *  Constant: '<S22>/AverageFilterCount'
   *  Constant: '<S22>/Constant'
   *  Delay: '<S22>/Delay3'
   *  Sum: '<S22>/Plus2'
   */
  CtAp_TorqLmt__ARID_DEF_arg->Delay3_DSTATE = fminf(rtp_AverageFilterCount, 1.0F
    + CtAp_TorqLmt__ARID_DEF_arg->Delay3_DSTATE);

  /* Sum: '<S22>/Plus1' incorporates:
   *  DataTypeConversion: '<S22>/DataTypeConversion'
   *  Delay: '<S22>/Delay1'
   *  Delay: '<S22>/Delay2'
   *  Sum: '<S22>/Plus3'
   */
  CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE = rtu_DataInput +
    CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE -
    CtAp_TorqLmt__ARID_DEF_arg->Delay2_DSTATE[0];

  /* Product: '<S22>/Divide' incorporates:
   *  Delay: '<S22>/Delay1'
   *  Delay: '<S22>/Delay3'
   */
  rty_DataOutput_0 = CtAp_TorqLmt__ARID_DEF_arg->Delay1_DSTATE /
    CtAp_TorqLmt__ARID_DEF_arg->Delay3_DSTATE;

  /* Update for Delay: '<S22>/Delay2' incorporates:
   *  DataTypeConversion: '<S22>/DataTypeConversion'
   */
  for (idxDelay = 0; idxDelay < 9; idxDelay++) {
    CtAp_TorqLmt__ARID_DEF_arg->Delay2_DSTATE[idxDelay] =
      CtAp_TorqLmt__ARID_DEF_arg->Delay2_DSTATE[idxDelay + 1];
  }

  CtAp_TorqLmt__ARID_DEF_arg->Delay2_DSTATE[9] = rtu_DataInput;

  /* End of Update for Delay: '<S22>/Delay2' */
  return rty_DataOutput_0;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S12>/LowPassFilter'
 *    '<S12>/LowPassFilter1'
 */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

real32_T CtAp_TorqLmt_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_T_T
  *CtAp_TorqLmt__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;

  /* Sum: '<S23>/Sum3' incorporates:
   *  Product: '<S23>/Prd3'
   *  Product: '<S23>/Prd4'
   *  Sum: '<S23>/Sum4'
   *  UnitDelay: '<S23>/Delay'
   */
  rty_DataOutput_0 = ((rtu_TSample_C / rtu_TimeCnst_C) * (rtu_DataInput -
    CtAp_TorqLmt__ARID_DEF_arg->Delay_DSTATE)) +
    CtAp_TorqLmt__ARID_DEF_arg->Delay_DSTATE;

  /* Update for UnitDelay: '<S23>/Delay' */
  CtAp_TorqLmt__ARID_DEF_arg->Delay_DSTATE = rty_DataOutput_0;
  return rty_DataOutput_0;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S27>/ATOM_Limiter'
 *    '<S27>/ATOM_Limiter1'
 */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

real32_T CtAp_TorqLmt_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S28>/Switch' incorporates:
   *  RelationalOperator: '<S28>/RelationalOperator'
   *  RelationalOperator: '<S28>/RelationalOperator1'
   *  Switch: '<S28>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S28>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S28>/Switch' */
  return rty_Out_0;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S27>/If'
 *    '<S27>/If1'
 */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

real32_T CtAp_TorqLmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S30>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S30>/Switch' */
  return rty_Out1_0;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Output and update for atomic system: '<S15>/ATOM_RateRampLmt' */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

void CtAp_TorqLmt_ATOM_RateRampLmt(real32_T rtu_demand, real32_T rtu_rise_rate,
  real32_T rtu_fall_rate, real32_T rtu_dt)
{
  /* Switch: '<S32>/Switch' incorporates:
   *  Delay: '<S32>/Delay'
   *  RelationalOperator: '<S32>/Relational Operator1'
   */
  if (rtu_demand > TorqPahMgmt_EmacQstyMaxTq_Nm) {
    /* Switch: '<S32>/Switch' incorporates:
     *  MinMax: '<S32>/MinMax'
     *  Product: '<S32>/Product3'
     *  Sum: '<S32>/Sum'
     */
    TorqPahMgmt_EmacQstyMaxTq_Nm = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
      TorqPahMgmt_EmacQstyMaxTq_Nm);
  } else {
    /* Switch: '<S32>/Switch' incorporates:
     *  MinMax: '<S32>/MinMax1'
     *  Product: '<S32>/Product2'
     *  Sum: '<S32>/Sum1'
     */
    TorqPahMgmt_EmacQstyMaxTq_Nm = fmaxf(rtu_demand,
      TorqPahMgmt_EmacQstyMaxTq_Nm - (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S32>/Switch' */
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Output and update for atomic system: '<S15>/ATOM_RateRampLmt1' */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

void CtAp_TorqLmt_ATOM_RateRampLmt1(real32_T rtu_demand, real32_T rtu_rise_rate,
  real32_T rtu_fall_rate, real32_T rtu_dt)
{
  /* Switch: '<S33>/Switch' incorporates:
   *  Delay: '<S33>/Delay'
   *  RelationalOperator: '<S33>/Relational Operator1'
   */
  if (rtu_demand > TorqPahMgmt_EmacQstyMinTq_Nm) {
    /* Switch: '<S33>/Switch' incorporates:
     *  MinMax: '<S33>/MinMax'
     *  Product: '<S33>/Product3'
     *  Sum: '<S33>/Sum'
     */
    TorqPahMgmt_EmacQstyMinTq_Nm = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
      TorqPahMgmt_EmacQstyMinTq_Nm);
  } else {
    /* Switch: '<S33>/Switch' incorporates:
     *  MinMax: '<S33>/MinMax1'
     *  Product: '<S33>/Product2'
     *  Sum: '<S33>/Sum1'
     */
    TorqPahMgmt_EmacQstyMinTq_Nm = fmaxf(rtu_demand,
      TorqPahMgmt_EmacQstyMinTq_Nm - (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S33>/Switch' */
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

void R_TorqLmt_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T TorqLmt_MotActSpdAbs_rpm;
  real32_T TorqLmt_MotActSpdAbsLpfFil_rpm;
  real32_T TorqLmt_DesLmtMaxTq_Nm;
  real32_T TorqLmt_DesLmtMinTq_Nm;
  real32_T rtb_TorqLmt_BattQstyFbTq_Nm;
  real32_T rtb_TorqLmt_BattQstyDrvTq_Nm;
  real32_T rtb_TorqLmt_BattQstyNoLmtMinTq_;
  real32_T rtb_Switch;
  real32_T rtb_Switch_nt1o;
  real32_T rtb_Sum3;
  real32_T rtb_Sum3_mexv;
  real32_T TorqLmt_MaxGrdtErrPosSlopTq_Nm;
  real32_T TorqLmt_MaxGrdtErrNegSlopTq_Nm;
  real32_T TorqLmt_MinGrdtErrNegSlopTq_Nm;
  real32_T TorqLmt_MinGrdtErrPosSlopTq_Nm;
  real32_T TorqLmt_DesFltLmtMaxTq_Nm;
  real32_T TorqLmt_DesFltLmtMinTq_Nm;
  real32_T rtb_Switch_gnym;
  real32_T rtb_MinMax3;
  boolean_T rtb_TorqPahMgmt_RvsGearSt_Flg;
  boolean_T rtb_TorqLmt_GearChgStsAllw_Flg;
  dt_ErrMgmt_TorqCtrlErr tmpRead_5;
  real32_T fractions[3];
  real32_T tmpRead;
  real32_T tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpRead_6;
  real32_T tmpRead_7;
  real32_T tmpRead_8;
  uint32_T bpIndices[3];
  int16_T tmpRead_0;
  uint8_T tmpRead_9;
  uint8_T tmpRead_a;
  boolean_T rtb_RelationalOperator3;
  boolean_T rtb_TorqLmt_HvOffZeroTq_Flg;
  boolean_T tmpRead_b;
  boolean_T tmpRead_c;

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq' */
  (void)Rte_Read_RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
    (&rtb_RelationalOperator3);

  /* Inport: '<Root>/RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' */
  (void)Rte_Read_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm' */
  (void)Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V' */
  (void)Rte_Read_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqLmt_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_Torque_Limit' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* RelationalOperator: '<S11>/RelationalOperator' incorporates:
   *  Constant: '<S11>/TorqLmt_MCU_ALLOW_TQ'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  rtb_TorqLmt_HvOffZeroTq_Flg = (tmpRead_a != ((uint8_T)TorqLmt_MCU_ALLOW_TQ));

  /* Outputs for Atomic SubSystem: '<S6>/Desired_Limit_Torque'
   *
   * Block requirements for '<S6>/Desired_Limit_Torque':
   *  1. SWREQ_06440 Fault Handling and Delay Shutdown Zero Torque
   *  2. SWREQ_06439 Fault Handling and Delay Shutdown Zero Torque
   */
  /* Switch: '<S7>/Switch' incorporates:
   *  Logic: '<S7>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  Switch: '<S7>/Switch1'
   */
  if (tmpRead_5.ErrMgmt_GrdtZeroTq_Flg || tmpRead_5.ErrMgmt_DlyGrdtZeroTq_Flg ||
      tmpRead_b || rtb_TorqLmt_HvOffZeroTq_Flg ||
      tmpRead_5.ErrMgmt_ImdtZeroTq_Flg) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/TorqPahMgmt_FltDetnTq_CFG'
     */
    TorqLmt_DesFltLmtMaxTq_Nm = TorqPahMgmt_FltDetnTq_CFG;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/TorqPahMgmt_FltDetnTq_CFG1'
     */
    TorqLmt_DesFltLmtMinTq_Nm = TorqPahMgmt_FltDetnTq_CFG;
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/TorqPahMgmt_VCUMaxTq_CFG'
     */
    TorqLmt_DesFltLmtMaxTq_Nm = TorqPahMgmt_VCUMaxTq_CFG;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/TorqPahMgmt_VCUMinTq_CFG'
     */
    TorqLmt_DesFltLmtMinTq_Nm = TorqPahMgmt_VCUMinTq_CFG;
  }

  /* End of Switch: '<S7>/Switch' */
  /* End of Outputs for SubSystem: '<S6>/Desired_Limit_Torque' */

  /* Abs: '<S12>/Abs' incorporates:
   *  SignalConversion: '<S4>/SignalCopy1'
   *
   * Block requirements for '<S12>/Abs':
   *  1. SWREQ_05653 Motor Speed conversion
   */
  if (tmpRead_0 < 0) {
    /* DataTypeConversion: '<S12>/DataTypeConversion' */
    TorqLmt_MotActSpdAbs_rpm = (real32_T)((int16_T)(-tmpRead_0));
  } else {
    /* DataTypeConversion: '<S12>/DataTypeConversion' */
    TorqLmt_MotActSpdAbs_rpm = (real32_T)tmpRead_0;
  }

  /* End of Abs: '<S12>/Abs' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/LowPassFilter'
   *
   * Block requirements for '<S12>/LowPassFilter':
   *  1. SWREQ_05653 Motor Speed conversion
   */
  /* Constant: '<S12>/TorqPahMgmt_MotSpdLpFilTim_CFG' incorporates:
   *  Constant: '<S12>/TorqLmt_Dt'
   */
  rtb_Sum3_mexv = CtAp_TorqLmt_LowPassFilter(TorqLmt_MotActSpdAbs_rpm,
    TorqPahMgmt_MotSpdLpFilTim_CFG, TorqLmt_Dt,
    &CtAp_TorqLmt_ARID_DEF.ARID_DEF_LowPassFilter);

  /* End of Outputs for SubSystem: '<S12>/LowPassFilter' */

  /* Outputs for Atomic SubSystem: '<S12>/LowPassFilter1'
   *
   * Block requirements for '<S12>/LowPassFilter1':
   *  1. SWREQ_05653 Motor Speed conversion
   */
  /* Constant: '<S12>/TorqPahMgmt_MotSpdLpFilTim_CFG1' incorporates:
   *  Constant: '<S12>/TorqLmt_Dt'
   */
  rtb_Sum3 = CtAp_TorqLmt_LowPassFilter(rtb_Sum3_mexv,
    TorqPahMgmt_MotSpdLpFilTim_CFG, TorqLmt_Dt,
    &CtAp_TorqLmt_ARID_DEF.ARID_DEF_LowPassFilter1);

  /* End of Outputs for SubSystem: '<S12>/LowPassFilter1' */

  /* SignalConversion generated from: '<S12>/LowPassFilter1'
   *
   * Block requirements for SignalConversion generated from '<S12>/LowPassFilter1':
   *  1. SWREQ_05653 Motor Speed conversion
   */
  TorqLmt_MotActSpdAbsLpfFil_rpm = rtb_Sum3;

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_AvgFilt' */
  rtb_Switch_gnym = CtAp_TorqLmt_ATOM_AvgFilt(TorqLmt_MotActSpdAbsLpfFil_rpm,
    10.0F, &CtAp_TorqLmt_ARID_DEF.ARID_DEF_ATOM_AvgFilt);

  /* End of Outputs for SubSystem: '<S12>/ATOM_AvgFilt' */

  /* SignalConversion: '<S12>/SignalCopy' */
  TorqPahMgmt_MotActSpdAbsFil_rpm = rtb_Switch_gnym;

  /* Outputs for Atomic SubSystem: '<S6>/Motor_External_Characteristic_Limit'
   *
   * Block requirements for '<S6>/Motor_External_Characteristic_Limit':
   *  1. SWREQ_01978 Motor external characteristic limit and Torque Limit
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Lookup_n-D: '<S13>/TorqPahMgmt_MaxMotExtChartcTq_MAP' incorporates:
   *  SignalConversion: '<S12>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  TorqPahMgmt_MaxMotExtChartcTq_Nm = look2_iflf_binlca(tmpRead,
    TorqPahMgmt_MotActSpdAbsFil_rpm, &TorqPahMgmt_MotExtChartcTqY_MAP[0],
    &TorqPahMgmt_MotExtChartcTqX_MAP[0], &TorqPahMgmt_MaxMotExtChartcTq_MAP[0],
    CtAp_TorqLmt_ConstP.pooled2, 7U);

  /* Lookup_n-D: '<S13>/TorqPahMgmt_MinMotExtChartcTq_MAP' incorporates:
   *  SignalConversion: '<S12>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  TorqPahMgmt_MinMotExtChartcTq_Nm = look2_iflf_binlca(tmpRead,
    TorqPahMgmt_MotActSpdAbsFil_rpm, &TorqPahMgmt_MotExtChartcTqY_MAP[0],
    &TorqPahMgmt_MotExtChartcTqX_MAP[0], &TorqPahMgmt_MinMotExtChartcTq_MAP[0],
    CtAp_TorqLmt_ConstP.pooled2, 7U);

  /* End of Outputs for SubSystem: '<S6>/Motor_External_Characteristic_Limit' */

  /* RelationalOperator: '<S25>/RelationalOperator' incorporates:
   *  Constant: '<S25>/TorqLmt_GEAR_R'
   *  SignalConversion: '<S4>/SignalCopy12'
   */
  rtb_TorqPahMgmt_RvsGearSt_Flg = (tmpRead_9 == ((uint8_T)TorqLmt_GEAR_R));

  /* Outputs for Atomic SubSystem: '<S14>/Motor_Efficiency_Calculation'
   *
   * Block requirements for '<S14>/Motor_Efficiency_Calculation':
   *  1. SWREQ_01979 Batter power limit  use Motor Speed
   */
  /* Switch: '<S30>/Switch' incorporates:
   *  Abs: '<S26>/Abs'
   *  SignalConversion: '<S4>/SignalCopy11'
   *
   * Block requirements for '<S26>/Abs':
   *  1. SWREQ_01979 Batter power limit  use Motor Speed
   */
  rtb_Switch_gnym = fabsf(tmpRead_8);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Lookup_n-D: '<S26>/TorqPahMgmt_MotEff_MAP' incorporates:
   *  SignalConversion: '<S12>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy'
   *  Switch: '<S30>/Switch'
   */
  bpIndices[0U] = plook_u32ff_binca(rtb_Switch_gnym, &TorqPahMgmt_MotEffY_MAP[0],
    15U, &tmpRead_8);
  fractions[0U] = tmpRead_8;
  bpIndices[1U] = plook_u32ff_binca(TorqPahMgmt_MotActSpdAbsFil_rpm,
    &TorqPahMgmt_MotEffX_MAP[0], 16U, &tmpRead_8);
  fractions[1U] = tmpRead_8;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  bpIndices[2U] = plook_u32ff_binca(tmpRead, &TorqPahMgmt_MotEffZ_MAP[0], 4U,
    &tmpRead_8);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */
  fractions[2U] = tmpRead_8;

  /* Lookup_n-D: '<S26>/TorqPahMgmt_MotEff_MAP' */
  TorqPahMgmt_MotEff_pct = intrp3d_fu32fla(bpIndices, fractions,
    CtAp_TorqLmt_ConstP.TorqPahMgmt_MotEff_MAP_tableDat,
    CtAp_TorqLmt_ConstP.TorqPahMgmt_MotEff_MAP_dimSizes,
    CtAp_TorqLmt_ConstP.TorqPahMgmt_MotEff_MAP_maxIndex);

  /* Product: '<S26>/Product' incorporates:
   *  Constant: '<S26>/TorqPahMgmt_MotEffCnvrNum_CFG'
   *  Constant: '<S26>/TorqPahMgmt_VehDrvShaftEff_CFG'
   *  Product: '<S26>/Divide'
   */
  TorqPahMgmt_VehDrvEff_pct = (TorqPahMgmt_MotEff_pct /
    TorqPahMgmt_MotEffCnvrNum_CFG) * TorqPahMgmt_VehDrvShaftEff_CFG;

  /* MinMax: '<S26>/MinMax' incorporates:
   *  Constant: '<S26>/TorqPahMgmt_MinPwrTqCnvnMotSpd_CFG'
   */
  TorqLmt_PwrTqCnvnMotSpd_rpm = fmaxf(TorqPahMgmt_MotActSpdAbsFil_rpm,
    TorqPahMgmt_MinPwrTqCnvnMotSpd_CFG);

  /* End of Outputs for SubSystem: '<S14>/Motor_Efficiency_Calculation' */

  /* Outputs for Atomic SubSystem: '<S14>/Quasi_Stationary_Max_Power_Limits'
   *
   * Block requirements for '<S14>/Quasi_Stationary_Max_Power_Limits':
   *  1. SWREQ_01980 Battery  Quasi Stationary power limit torque in gear R
   *  2. SWREQ_06437 Battery  Quasi Stationary power limit torque in gear D
   */
  /* MinMax: '<S16>/MinMax3' incorporates:
   *  Constant: '<S27>/TorqPahMgmt_Fac60Div2Pi_CFG'
   *  Product: '<S27>/Divide1'
   */
  rtb_MinMax3 = TorqPahMgmt_Fac60Div2Pi_CFG / TorqLmt_PwrTqCnvnMotSpd_rpm;

  /* End of Outputs for SubSystem: '<S14>/Quasi_Stationary_Max_Power_Limits' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/TorqLmt_ZERO_POWER'
   *  SignalConversion: '<S4>/SignalCopy13'
   */
  if (rtb_RelationalOperator3) {
    tmpRead_4 = TorqLmt_ZERO_POWER;
  }

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/Quasi_Stationary_Max_Power_Limits'
   *
   * Block requirements for '<S14>/Quasi_Stationary_Max_Power_Limits':
   *  1. SWREQ_01980 Battery  Quasi Stationary power limit torque in gear R
   *  2. SWREQ_06437 Battery  Quasi Stationary power limit torque in gear D
   */
  /* Product: '<S27>/Divide' incorporates:
   *  Constant: '<S27>/TorqLmt_Kw2W1'
   *  Product: '<S27>/Product2'
   *  Product: '<S27>/Product4'
   *  Switch: '<S9>/Switch'
   */
  rtb_TorqLmt_BattQstyFbTq_Nm = (rtb_MinMax3 * (tmpRead_4 * TorqLmt_Kw2W)) /
    TorqPahMgmt_VehDrvEff_pct;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Product: '<S27>/Product3' incorporates:
   *  Constant: '<S27>/TorqLmt_Kw2W'
   *  Product: '<S27>/Product'
   *  Product: '<S27>/Product1'
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  rtb_TorqLmt_BattQstyDrvTq_Nm = ((tmpRead_3 * TorqLmt_Kw2W) * rtb_MinMax3) *
    TorqPahMgmt_VehDrvEff_pct;

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S27>/If' */
  rtb_Switch_gnym = CtAp_TorqLmt_If(rtb_TorqPahMgmt_RvsGearSt_Flg,
    rtb_TorqLmt_BattQstyFbTq_Nm, rtb_TorqLmt_BattQstyDrvTq_Nm);

  /* End of Outputs for SubSystem: '<S27>/If' */

  /* Outputs for Atomic SubSystem: '<S27>/ATOM_Limiter' */
  /* Constant: '<S27>/TorqPahMgmt_BattQstyMaxTq_CFG' incorporates:
   *  Constant: '<S27>/TorqLmt_ZERO_TORQUE'
   */
  rtb_Switch_nt1o = CtAp_TorqLmt_ATOM_Limiter(TorqPahMgmt_BattQstyMaxTq_CFG,
    rtb_Switch_gnym, TorqLmt_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S27>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S27>/ATOM_Limiter' */
  TorqPahMgmt_BattQstyMaxTq_Nm = rtb_Switch_nt1o;

  /* Outputs for Atomic SubSystem: '<S27>/If1' */
  rtb_MinMax3 = CtAp_TorqLmt_If(rtb_TorqPahMgmt_RvsGearSt_Flg,
    rtb_TorqLmt_BattQstyDrvTq_Nm, rtb_TorqLmt_BattQstyFbTq_Nm);

  /* End of Outputs for SubSystem: '<S27>/If1' */

  /* Gain: '<S27>/TorqLmt_POS2NEG' */
  rtb_TorqLmt_BattQstyNoLmtMinTq_ = TorqLmt_POS2NEG * rtb_MinMax3;

  /* Outputs for Atomic SubSystem: '<S27>/ATOM_Limiter1' */
  /* Constant: '<S27>/TorqLmt_ZERO_TORQUE' incorporates:
   *  Constant: '<S27>/TorqPahMgmt_BattQstyMinTq_CFG'
   */
  rtb_Switch = CtAp_TorqLmt_ATOM_Limiter(TorqLmt_ZERO_TORQUE,
    rtb_TorqLmt_BattQstyNoLmtMinTq_, TorqPahMgmt_BattQstyMinTq_CFG);

  /* End of Outputs for SubSystem: '<S27>/ATOM_Limiter1' */

  /* SignalConversion generated from: '<S27>/ATOM_Limiter1' */
  TorqPahMgmt_BattQstyMinTq_Nm = rtb_Switch;

  /* End of Outputs for SubSystem: '<S14>/Quasi_Stationary_Max_Power_Limits' */

  /* Outputs for Atomic SubSystem: '<S6>/Torque_Limits_Normal'
   *
   * Block requirements for '<S6>/Torque_Limits_Normal':
   *  1. SWREQ_01982 Torque Limit in normal status
   */
  /* MinMax: '<S16>/MinMax3' incorporates:
   *  MinMax: '<S17>/MinMax'
   *  MinMax: '<S17>/MinMax2'
   *  SignalConversion: '<S4>/SignalCopy2'
   */
  rtb_MinMax3 = fminf(TorqPahMgmt_MaxMotExtChartcTq_Nm,
                      TorqPahMgmt_BattQstyMaxTq_Nm);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  rtb_MinMax3 = fminf(rtb_MinMax3, tmpRead_1);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* MinMax: '<S17>/MinMax1' incorporates:
   *  Constant: '<S17>/TorqLmt_ZERO_TORQUE'
   */
  TorqPahMgmt_QstyMaxLmtTq_Nm = fmaxf(rtb_MinMax3, TorqLmt_ZERO_TORQUE);

  /* MinMax: '<S16>/MinMax3' incorporates:
   *  MinMax: '<S17>/MinMax3'
   *  MinMax: '<S17>/MinMax4'
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  rtb_MinMax3 = fmaxf(TorqPahMgmt_MinMotExtChartcTq_Nm,
                      TorqPahMgmt_BattQstyMinTq_Nm);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  rtb_MinMax3 = fmaxf(rtb_MinMax3, tmpRead_2);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* MinMax: '<S17>/MinMax5' incorporates:
   *  Constant: '<S17>/TorqLmt_ZERO_TORQUE'
   */
  TorqPahMgmt_QstyMinLmtTq_Nm = fminf(TorqLmt_ZERO_TORQUE, rtb_MinMax3);

  /* End of Outputs for SubSystem: '<S6>/Torque_Limits_Normal' */

  /* Outputs for Atomic SubSystem: '<S6>/Torque_Limits_Mgmt'
   *
   * Block requirements for '<S6>/Torque_Limits_Mgmt':
   *  1. SWREQ_06441 Torque Limit Managerment
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* MinMax: '<S16>/MinMax3' incorporates:
   *  MinMax: '<S16>/MinMax2'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  rtb_MinMax3 = fminf(TorqLmt_DesFltLmtMaxTq_Nm, tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* MinMax: '<S16>/MinMax' */
  TorqLmt_DesLmtMaxTq_Nm = fminf(TorqPahMgmt_QstyMaxLmtTq_Nm, rtb_MinMax3);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* MinMax: '<S16>/MinMax3' incorporates:
   *  SignalConversion: '<S4>/SignalCopy10'
   */
  rtb_MinMax3 = fmaxf(TorqLmt_DesFltLmtMinTq_Nm, tmpRead_7);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* MinMax: '<S16>/MinMax1' */
  TorqLmt_DesLmtMinTq_Nm = fmaxf(TorqPahMgmt_QstyMinLmtTq_Nm, rtb_MinMax3);

  /* End of Outputs for SubSystem: '<S6>/Torque_Limits_Mgmt' */

  /* RelationalOperator: '<S10>/RelationalOperator3' incorporates:
   *  Constant: '<S10>/TorqModMap_GEAR_R1'
   *  UnitDelay: '<S10>/OneDelay1'
   */
  rtb_RelationalOperator3 = (CtAp_TorqLmt_ARID_DEF.OneDelay1_DSTATE == ((uint8_T)
    TorqLmt_GEAR_R));

  /* UnitDelay: '<S10>/OneDelay' incorporates:
   *  UnitDelay: '<S10>/OneDelay1'
   */
  CtAp_TorqLmt_ARID_DEF.OneDelay1_DSTATE = CtAp_TorqLmt_ARID_DEF.OneDelay_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Logic: '<S10>/LogicalOperator2' incorporates:
   *  Constant: '<S10>/TorqModMap_GEAR_D'
   *  Constant: '<S10>/TorqModMap_GEAR_D1'
   *  Constant: '<S10>/TorqModMap_GEAR_R'
   *  Logic: '<S10>/LogicalOperator'
   *  Logic: '<S10>/LogicalOperator1'
   *  RelationalOperator: '<S10>/RelationalOperator'
   *  RelationalOperator: '<S10>/RelationalOperator1'
   *  RelationalOperator: '<S10>/RelationalOperator2'
   *  SignalConversion: '<S4>/SignalCopy12'
   *  UnitDelay: '<S10>/OneDelay1'
   */
  rtb_TorqLmt_GearChgStsAllw_Flg = ((rtb_RelationalOperator3 && (tmpRead_9 ==
    ((uint8_T)TorqLmt_GEAR_D))) || ((tmpRead_9 == ((uint8_T)TorqLmt_GEAR_R)) &&
    (CtAp_TorqLmt_ARID_DEF.OneDelay1_DSTATE == ((uint8_T)TorqLmt_GEAR_D))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/TimerTOff'
   *
   * Block requirements for '<S10>/TimerTOff':
   *  1. SWREQ_06446 Gear Change Status Inactive
   */
  /* Constant: '<S10>/TorqPahMgmt_GearChgFildMaxTim_CFG' incorporates:
   *  Constant: '<S10>/TorqLmt_SAMPLE_TIME'
   */
  CtAp_TorqLmt_TimerTOff(rtb_TorqLmt_GearChgStsAllw_Flg,
    TorqPahMgmt_GearChgFildMaxTim_CFG, ((uint16_T)TorqLmt_SAMPLE_TIME),
    &CtAp_TorqLmt_ARID_DEF.ARID_DEF_TimerTOff);

  /* End of Outputs for SubSystem: '<S10>/TimerTOff' */

  /* Outputs for Atomic SubSystem: '<S6>/Fault_Handling_Ramp_Slope' */
  /* Outputs for Atomic SubSystem: '<S8>/MinTorqRampSlope'
   *
   * Block requirements for '<S8>/MinTorqRampSlope':
   *  1. SWREQ_06444 Motor Differential Protection Torque Limit Gradient
   *  2. SWREQ_01986 Fault Handling and Shutdown Gradient Zero Torque
   *  3. SWREQ_01987 Fault Handling and Shutdown Delay Gradient Zero Torque
   *  4. SWREQ_06447 Gear  and HV down  Torque Limit Gradient
   *  5. SWREQ_06448 Torque Limit Normal  Gradient
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Logic: '<S18>/LogicalOperator2' incorporates:
   *  Logic: '<S18>/LogicalOperator3'
   *  Logic: '<S19>/LogicalOperator2'
   *  Logic: '<S19>/LogicalOperator3'
   *  SignalConversion: '<S4>/SignalCopy14'
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  tmpRead_c = (tmpRead_c || tmpRead_5.ErrMgmt_ImdtZeroTq_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Switch: '<S18>/Switch2' incorporates:
   *  Logic: '<S18>/LogicalOperator'
   *  Logic: '<S18>/LogicalOperator2'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  Switch: '<S18>/Switch1'
   *  Switch: '<S18>/Switch13'
   *  Switch: '<S18>/Switch3'
   *  Switch: '<S18>/Switch9'
   *  Switch: '<S19>/Switch5'
   *  Switch: '<S19>/Switch6'
   */
  if (tmpRead_c || rtb_TorqLmt_HvOffZeroTq_Flg) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S18>/TorqPahMgmt_MotDftlMaxGrdtErrPosSlopTq_CFG'
     */
    TorqLmt_MaxGrdtErrPosSlopTq_Nm = TorqPahMgmt_MotDftlMaxGrdtErrPosSlopTq_CFG;

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S18>/TorqPahMgmt_MotDftMaxGrdtErrNegSlopTq_CFG'
     */
    TorqLmt_MaxGrdtErrNegSlopTq_Nm = TorqPahMgmt_MotDftMaxGrdtErrNegSlopTq_CFG;

    /* Switch: '<S19>/Switch6' incorporates:
     *  Constant: '<S19>/TorqPahMgmt_MotDftMinGrdtErrNegSlopTq_CFG'
     */
    TorqLmt_MinGrdtErrNegSlopTq_Nm = TorqPahMgmt_MotDftMinGrdtErrNegSlopTq_CFG;

    /* Switch: '<S19>/Switch5' incorporates:
     *  Constant: '<S19>/TorqPahMgmt_MotDftMinGrdtErrPosSlopTq_CFG'
     */
    TorqLmt_MinGrdtErrPosSlopTq_Nm = TorqPahMgmt_MotDftMinGrdtErrPosSlopTq_CFG;
  } else {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
     *
     * Block requirements for '<S2>/CtAp_TorqLmt_Input':
     *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
     */
    if (tmpRead_5.ErrMgmt_GrdtZeroTq_Flg) {
      /* Switch: '<S18>/Switch2' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxGrdtErrPosSlopTq_CFG1'
       *  Switch: '<S18>/Switch13'
       */
      TorqLmt_MaxGrdtErrPosSlopTq_Nm = TorqPahMgmt_MaxGrdtErrPosSlopTq_CFG;
    } else if (tmpRead_5.ErrMgmt_DlyGrdtZeroTq_Flg) {
      /* Switch: '<S18>/Switch2' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxDlyGrdtErrPosSlopTq_CFG'
       *  Switch: '<S18>/Switch13'
       *  Switch: '<S18>/Switch3'
       */
      TorqLmt_MaxGrdtErrPosSlopTq_Nm = TorqPahMgmt_MaxDlyGrdtErrPosSlopTq_CFG;
    } else if (TorqLmt_GearChgSts_Flg || tmpRead_b) {
      /* Switch: '<S18>/Switch2' incorporates:
       *  Lookup_n-D: '<S18>/TorqPahMgmt_GearChgMaxGrdtPosSlopTq_LUT'
       *  Switch: '<S18>/Switch13'
       *  Switch: '<S18>/Switch3'
       *  Switch: '<S18>/Switch9'
       *  UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMaxTq_Nm'
       */
      TorqLmt_MaxGrdtErrPosSlopTq_Nm = look1_iflf_binlca
        (TorqLmt_PrevEmacMaxTq_Nm, &TorqPahMgmt_GearChgMaxGrdtSlopTqX_LUT[0],
         &TorqPahMgmt_GearChgMaxGrdtPosSlopTq_LUT[0], 5U);
    } else {
      /* Switch: '<S18>/Switch2' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG'
       *  Switch: '<S18>/Switch13'
       *  Switch: '<S18>/Switch3'
       *  Switch: '<S18>/Switch9'
       */
      TorqLmt_MaxGrdtErrPosSlopTq_Nm = TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG;
    }

    /* Switch: '<S18>/Switch15' incorporates:
     *  Logic: '<S18>/LogicalOperator'
     *  Logic: '<S18>/LogicalOperator1'
     *  SignalConversion: '<S4>/SignalCopy6'
     *  SignalConversion: '<S4>/SignalCopy7'
     *  Switch: '<S18>/Switch10'
     *  Switch: '<S18>/Switch13'
     *  Switch: '<S18>/Switch3'
     *  Switch: '<S18>/Switch4'
     *  Switch: '<S18>/Switch9'
     */
    if (tmpRead_5.ErrMgmt_GrdtZeroTq_Flg) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxGrdtErrNegSlopTq_CFG'
       *  Switch: '<S18>/Switch15'
       */
      TorqLmt_MaxGrdtErrNegSlopTq_Nm = TorqPahMgmt_MaxGrdtErrNegSlopTq_CFG;
    } else if (tmpRead_5.ErrMgmt_DlyGrdtZeroTq_Flg) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxDlyGrdtErrNegSlopTq_CFG'
       *  Switch: '<S18>/Switch4'
       */
      TorqLmt_MaxGrdtErrNegSlopTq_Nm = TorqPahMgmt_MaxDlyGrdtErrNegSlopTq_CFG;
    } else if (TorqLmt_GearChgSts_Flg || tmpRead_b) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Lookup_n-D: '<S18>/TorqPahMgmt_GearChgMaxGrdtNegSlopTq_LUT'
       *  Switch: '<S18>/Switch10'
       *  Switch: '<S18>/Switch4'
       *  UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMaxTq_Nm'
       */
      TorqLmt_MaxGrdtErrNegSlopTq_Nm = look1_iflf_binlca
        (TorqLmt_PrevEmacMaxTq_Nm, &TorqPahMgmt_GearChgMaxGrdtSlopTqX_LUT[0],
         &TorqPahMgmt_GearChgMaxGrdtNegSlopTq_LUT[0], 5U);
    } else {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Constant: '<S18>/TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG'
       *  Switch: '<S18>/Switch10'
       *  Switch: '<S18>/Switch4'
       */
      TorqLmt_MaxGrdtErrNegSlopTq_Nm = TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG;
    }

    /* End of Switch: '<S18>/Switch15' */

    /* Switch: '<S19>/Switch1' incorporates:
     *  Logic: '<S19>/LogicalOperator'
     *  SignalConversion: '<S4>/SignalCopy6'
     *  SignalConversion: '<S4>/SignalCopy7'
     *  Switch: '<S19>/Switch12'
     *  Switch: '<S19>/Switch8'
     */
    if (tmpRead_5.ErrMgmt_GrdtZeroTq_Flg) {
      /* Switch: '<S19>/Switch6' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MinGrdtErrNegSlopTq_CFG'
       *  Switch: '<S19>/Switch1'
       */
      TorqLmt_MinGrdtErrNegSlopTq_Nm = TorqPahMgmt_MinGrdtErrNegSlopTq_CFG;
    } else if (tmpRead_5.ErrMgmt_DlyGrdtZeroTq_Flg) {
      /* Switch: '<S19>/Switch6' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MinDlyGrdtErrNegSlopTq_CFG'
       *  Switch: '<S19>/Switch8'
       */
      TorqLmt_MinGrdtErrNegSlopTq_Nm = TorqPahMgmt_MinDlyGrdtErrNegSlopTq_CFG;
    } else if (TorqLmt_GearChgSts_Flg || tmpRead_b) {
      /* Switch: '<S19>/Switch6' incorporates:
       *  Lookup_n-D: '<S19>/TorqPahMgmt_GearChgMinGrdtNegSlopTq_LUT'
       *  Switch: '<S19>/Switch12'
       *  Switch: '<S19>/Switch8'
       *  UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMinTq_Nm'
       */
      TorqLmt_MinGrdtErrNegSlopTq_Nm = look1_iflf_binlca
        (TorqLmt_PrevEmacMinTq_Nm, &TorqPahMgmt_GearChgMinGrdtSlopTqX_LUT[0],
         &TorqPahMgmt_GearChgMinGrdtNegSlopTq_LUT[0], 5U);
    } else {
      /* Switch: '<S19>/Switch6' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG1'
       *  Switch: '<S19>/Switch12'
       *  Switch: '<S19>/Switch8'
       */
      TorqLmt_MinGrdtErrNegSlopTq_Nm = TorqPahMgmt_MaxLmtGrdtNegSlopTq_CFG;
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Switch: '<S19>/Switch14' incorporates:
     *  Logic: '<S19>/LogicalOperator1'
     *  SignalConversion: '<S4>/SignalCopy6'
     *  SignalConversion: '<S4>/SignalCopy7'
     *  Switch: '<S19>/Switch11'
     *  Switch: '<S19>/Switch7'
     */
    if (tmpRead_5.ErrMgmt_GrdtZeroTq_Flg) {
      /* Switch: '<S19>/Switch5' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MinGrdtErrPosSlopTq_CFG'
       *  Switch: '<S19>/Switch14'
       */
      TorqLmt_MinGrdtErrPosSlopTq_Nm = TorqPahMgmt_MinGrdtErrPosSlopTq_CFG;
    } else if (tmpRead_5.ErrMgmt_DlyGrdtZeroTq_Flg) {
      /* Switch: '<S19>/Switch5' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MinDlyGrdtErrPosSlopTq_CFG'
       *  Switch: '<S19>/Switch7'
       */
      TorqLmt_MinGrdtErrPosSlopTq_Nm = TorqPahMgmt_MinDlyGrdtErrPosSlopTq_CFG;
    } else if (TorqLmt_GearChgSts_Flg || tmpRead_b) {
      /* Switch: '<S19>/Switch5' incorporates:
       *  Lookup_n-D: '<S19>/TorqPahMgmt_GearChgMinGrdtPosSlopTq_LUT'
       *  Switch: '<S19>/Switch11'
       *  Switch: '<S19>/Switch7'
       *  UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMinTq_Nm'
       */
      TorqLmt_MinGrdtErrPosSlopTq_Nm = look1_iflf_binlca
        (TorqLmt_PrevEmacMinTq_Nm, &TorqPahMgmt_GearChgMinGrdtSlopTqX_LUT[0],
         &TorqPahMgmt_GearChgMinGrdtPosSlopTq_LUT[0], 5U);
    } else {
      /* Switch: '<S19>/Switch5' incorporates:
       *  Constant: '<S19>/TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG1'
       *  Switch: '<S19>/Switch11'
       *  Switch: '<S19>/Switch7'
       */
      TorqLmt_MinGrdtErrPosSlopTq_Nm = TorqPahMgmt_MaxLmtGrdtPosSlopTq_CFG;
    }

    /* End of Switch: '<S19>/Switch14' */
    /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */
  }

  /* End of Switch: '<S18>/Switch2' */
  /* End of Outputs for SubSystem: '<S8>/MinTorqRampSlope' */
  /* End of Outputs for SubSystem: '<S6>/Fault_Handling_Ramp_Slope' */

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_RateRampLmt' */
  /* Constant: '<S15>/TorqLmt_Dt' */
  CtAp_TorqLmt_ATOM_RateRampLmt(TorqLmt_DesLmtMaxTq_Nm,
    TorqLmt_MaxGrdtErrPosSlopTq_Nm, TorqLmt_MaxGrdtErrNegSlopTq_Nm, TorqLmt_Dt);

  /* End of Outputs for SubSystem: '<S15>/ATOM_RateRampLmt' */

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_RateRampLmt1' */
  /* Constant: '<S15>/TorqLmt_Dt1' */
  CtAp_TorqLmt_ATOM_RateRampLmt1(TorqLmt_DesLmtMinTq_Nm,
    TorqLmt_MinGrdtErrPosSlopTq_Nm, TorqLmt_MinGrdtErrNegSlopTq_Nm, TorqLmt_Dt);

  /* End of Outputs for SubSystem: '<S15>/ATOM_RateRampLmt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Input':
   *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
   */
  /* Update for UnitDelay: '<S10>/OneDelay1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy12'
   */
  CtAp_TorqLmt_ARID_DEF.OneDelay1_DSTATE = tmpRead_9;

  /* Update for UnitDelay: '<S10>/OneDelay' incorporates:
   *  SignalConversion: '<S4>/SignalCopy12'
   */
  CtAp_TorqLmt_ARID_DEF.OneDelay_DSTATE = tmpRead_9;

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Input' */

  /* Update for UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMaxTq_Nm' */
  TorqLmt_PrevEmacMaxTq_Nm = TorqPahMgmt_EmacQstyMaxTq_Nm;

  /* Update for UnitDelay: '<S6>/TorqPahMgmt_PrevEmacMinTq_Nm' */
  TorqLmt_PrevEmacMinTq_Nm = TorqPahMgmt_EmacQstyMinTq_Nm;

  /* End of Outputs for SubSystem: '<S2>/Function_Torque_Limit' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqLmt_Output'
   *
   * Block requirements for '<S2>/CtAp_TorqLmt_Output':
   *  1. SWREQ_01974 The function of "Torque Limit" has the following outputs:
   *  2. SWREQ_01981 Battery  dynamic power limit torque
   */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm
    (TorqPahMgmt_EmacQstyMaxTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm
    (TorqPahMgmt_EmacQstyMinTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
    (TorqPahMgmt_EmacQstyMaxTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
    (TorqPahMgmt_EmacQstyMinTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqLmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqLmt_Cyclic_10ms_sys' */
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqLmt_START_SEC_VAR_CONST_8
#include "CtAp_TorqLmt_MemMap.h"

void R_TorqLmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_MotActSpdAbsFil_rpm = 0.0F;
  TorqPahMgmt_QstyMaxLmtTq_Nm = 0.0F;
  TorqPahMgmt_QstyMinLmtTq_Nm = 0.0F;
  TorqPahMgmt_BattQstyMaxTq_Nm = 0.0F;
  TorqPahMgmt_BattQstyMinTq_Nm = 0.0F;
  TorqPahMgmt_MotEff_pct = 0.0F;
  TorqPahMgmt_VehDrvEff_pct = 0.0F;
  TorqPahMgmt_MaxMotExtChartcTq_Nm = 0.0F;
  TorqPahMgmt_MinMotExtChartcTq_Nm = 0.0F;
  TorqPahMgmt_EmacQstyMinTq_Nm = 0.0F;
  TorqPahMgmt_EmacQstyMaxTq_Nm = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TorqLmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TorqLmt_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_TorqLmt_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Function_Torque_Limit' */
  /* SystemInitialize for Atomic SubSystem: '<S10>/TimerTOff'
   *
   * Block requirements for '<S10>/TimerTOff':
   *  1. SWREQ_06446 Gear Change Status Inactive
   */
  CtAp_TorqLmt_TimerTOff_Init(&CtAp_TorqLmt_ARID_DEF.ARID_DEF_TimerTOff);

  /* End of SystemInitialize for SubSystem: '<S10>/TimerTOff' */
  /* End of SystemInitialize for SubSystem: '<S2>/Function_Torque_Limit' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_TorqLmt_Cyclic_10ms_sys' */
}

#define CtAp_TorqLmt_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqLmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
