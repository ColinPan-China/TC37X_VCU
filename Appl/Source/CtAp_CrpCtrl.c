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
 *  Filename:           CtAp_CrpCtrl.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CrpCtrl.h"
#include "rtwtypes.h"
#include "CtAp_CrpCtrl_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "look1_iflf_binlca.h"
#include "look2_iflf_binlca.h"
#include "CtAp_CrpCtrl_Cal.h"
#include "CtAp_CrpCtrl_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_CrpCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static boolean_T CrpCtrl_CrpCtrlBrkPedlAllwdSts_Flg;/* '<S10>/LogicalOperator3' */

/* creep control  brake pedal status allowed */
static boolean_T CrpCtrl_CrpCtrlGearSpdAllwdSts_Flg;/* '<S13>/LogicalOperator4' */

/* creep control  gear and vehicle speed  status allowed */
static boolean_T CrpCtrl_CrpCtrlIBSAllwdSts_Flg;/* '<S14>/LogicalOperator5' */

/* creep control  Ibs status allowed */
static boolean_T CrpCtrl_CrpCtrlVehModAllwdSts_Flg;/* '<S16>/LogicalOperator' */

/* creep control  gear and vehicle mode  status allowed */
static boolean_T CrpCtrl_PrevCrpCtrlPidKiStatnCdn_Flg;
                            /* '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm1' */

/*  Creep control Pid  ki torque saturation status at last cycle */
#define CtAp_CrpCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_CrpCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"

ARID_DEF_CtAp_CrpCtrl_T CtAp_CrpCtrl_ARID_DEF;

#define CtAp_CrpCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* System initialize for atomic system: '<S10>/ATOM_RS_FF' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

void CtAp_CrpCtrl_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_CrpCtrl__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Output and update for atomic system: '<S10>/ATOM_RS_FF' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

boolean_T CtAp_CrpCtrl_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S17>/LogOp2' incorporates:
   *  Logic: '<S17>/LogOp'
   *  Logic: '<S17>/LogOp4'
   *  UnitDelay: '<S17>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S || CtAp_CrpCtrl__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_CrpCtrl__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Output and update for atomic system: '<S12>/ATOM_DlyRatRmpLmt' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

real32_T CtAp_CrpCtrl_ATOM_DlyRatRmpLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt, real32_T rtu_delay)
{
  real32_T rty_output_0;

  /* Switch: '<S18>/Switch' incorporates:
   *  MinMax: '<S18>/MinMax'
   *  MinMax: '<S18>/MinMax1'
   *  Product: '<S18>/Product2'
   *  Product: '<S18>/Product3'
   *  RelationalOperator: '<S18>/Relational Operator1'
   *  Sum: '<S18>/Sum'
   *  Sum: '<S18>/Sum1'
   */
  if (rtu_demand > rtu_delay) {
    rty_output_0 = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) + rtu_delay);
  } else {
    rty_output_0 = fmaxf(rtu_demand, rtu_delay - (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S18>/Switch' */
  return rty_output_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S12>/ATOM_EdgeDetectRise'
 *    '<S15>/ATOM_EdgeDetectRise'
 *    '<S15>/ATOM_EdgeDetectRise1'
 */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

boolean_T CtAp_CrpCtr_ATOM_EdgeDetectRise(boolean_T rtu_In1,
  ARID_DEF_ATOM_EdgeDetectRise__T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  boolean_T rty_Out1_0;

  /* Logic: '<S19>/AND' incorporates:
   *  Logic: '<S19>/NOT'
   *  UnitDelay: '<S19>/Delay'
   */
  rty_Out1_0 = (rtu_In1 && !CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE);

  /* Update for UnitDelay: '<S19>/Delay' */
  CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = rtu_In1;
  return rty_Out1_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S12>/If'
 *    '<S27>/If'
 *    '<S36>/If'
 *    '<S9>/If'
 *    '<S9>/If1'
 */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

real32_T CtAp_CrpCtrl_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S20>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S20>/Switch' */
  return rty_Out1_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* System initialize for atomic system: '<S15>/ATOM_SR_FF' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

void CtAp_CrpCtrl_ATOM_SR_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S24>/Delay' */
  CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = rtp_InitialValue;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Output and update for atomic system: '<S15>/ATOM_SR_FF' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

boolean_T CtAp_CrpCtrl_ATOM_SR_FF(boolean_T rtu_S, boolean_T rtu_R,
  ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S24>/OR' incorporates:
   *  Logic: '<S24>/AND'
   *  Logic: '<S24>/LogOp'
   *  UnitDelay: '<S24>/Delay'
   */
  rty_Q_0 = ((CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE && !rtu_R) || rtu_S);

  /* Update for UnitDelay: '<S24>/Delay' */
  CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Output and update for atomic system: '<S15>/ATOM_TimeCnt' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

boolean_T CtAp_CrpCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Cr_T
  *CtAp_CrpCtrl__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S25>/Add1' incorporates:
   *  DataTypeConversion: '<S25>/Data Type Conversion'
   *  DataTypeConversion: '<S25>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S25>/Switch' */
  if (rtu_In) {
    /* Sum: '<S25>/Add' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S25>/Min' */
    if (rtb_Add1 <= CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S25>/Add' */
      CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S25>/Min' */
  } else {
    /* Sum: '<S25>/Add' incorporates:
     *  Constant: '<S25>/Constant'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S25>/Switch' */

  /* RelationalOperator: '<S25>/Relational Operator' incorporates:
   *  UnitDelay: '<S25>/Delay'
   */
  return CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S27>/ATOM_Limiter'
 *    '<S34>/ATOM_Limiter'
 *    '<S35>/ATOM_Limiter'
 */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

real32_T CtAp_CrpCtrl_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S32>/Switch' incorporates:
   *  RelationalOperator: '<S32>/RelationalOperator'
   *  RelationalOperator: '<S32>/RelationalOperator1'
   *  Switch: '<S32>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S32>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S32>/Switch' */
  return rty_Out_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Output and update for atomic system: '<S36>/ATOM_RateRampLmt' */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

real32_T CtAp_CrpCtrl_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_CrpCtrl__ARID_DEF_arg)
{
  real32_T rty_output_0;

  /* Switch: '<S39>/Switch' incorporates:
   *  Delay: '<S39>/Delay'
   *  MinMax: '<S39>/MinMax'
   *  MinMax: '<S39>/MinMax1'
   *  Product: '<S39>/Product2'
   *  Product: '<S39>/Product3'
   *  RelationalOperator: '<S39>/Relational Operator1'
   *  Sum: '<S39>/Sum'
   *  Sum: '<S39>/Sum1'
   */
  if (rtu_demand > CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE) {
    rty_output_0 = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
                         CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE);
  } else {
    rty_output_0 = fmaxf(rtu_demand, CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE -
                         (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S39>/Switch' */

  /* Update for Delay: '<S39>/Delay' */
  CtAp_CrpCtrl__ARID_DEF_arg->Delay_DSTATE = rty_output_0;
  return rty_output_0;
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_CrpCtrl_START_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

void R_CrpCtrl_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TorqPahMgmt_EmacQstyMaxTq_N;
  real32_T rtb_TorqPahMgmt_EmacQstyMinTq_N;
  real32_T rtb_VehMot_VehSpd_kph;
  real32_T rtb_Gain;
  real32_T CrpCtrl_CrpCtrlUseVehSpd_kph;
  real32_T CrpCtrl_CrpCtrlUseVehSpdCalcd_kph;
  real32_T rtb_Switch;
  real32_T rtb_Switch_kgrq;
  real32_T CrpCtrl_CrpCtrlDesNoLmtPidKiTq_Nm;
  real32_T CrpCtrl_CrpCtrlDesNoLmtPidTq_Nm;
  real32_T rtb_Switch_bwmc;
  real32_T rtb_Switch_c0ri;
  real32_T rtb_Switch_ci50;
  real32_T rtb_Switch_imls;
  real32_T rtb_Switch_hfn1;
  real32_T CrpCtrl_CrpCtrlDesNoLmtSumTq_Nm;
  real32_T CrpCtrl_CrpCtrlActvDesSumTq_Nm;
  real32_T rtb_Switch_chll;
  real32_T rtb_ChassisMgmt_CrpCtrlDesRvsVe;
  real32_T rtb_ChassisMgmt_CrpCtrlDesFwdVe;
  real32_T CrpCtrl_CrpCtrlDesNoFilVehSpd_kph;
  real32_T rtb_Switch1_mazx;
  real32_T rtb_Switch_boqj;
  boolean_T rtb_VehMot_VehDirDif_Flg;
  boolean_T rtb_RelationalOperator4;
  boolean_T rtb_ChassisMgmt_CrpCtrlSts_Flg;
  boolean_T rtb_RelationalOperator4_k5tg;
  boolean_T rtb_RelationalOperator2;
  boolean_T rtb_CrpCtrl_StdlDeactvnEntry_Fl;
  boolean_T rtb_LogicalOperator2;
  boolean_T CrpCtrl_StdlDeactvn_Flg;
  boolean_T rtb_OR;
  boolean_T rtb_RelationalOperator4_fff0;
  boolean_T rtb_LogicalOperator2_nihg;
  boolean_T rtb_RelationalOperator1_mhun;
  boolean_T rtb_LogOp2;
  boolean_T rtb_AND;
  boolean_T rtb_CrpCtrl_PrevCrpCtrlPidKiSta;
  dt_FctSftyMon_CrpCtrlTqOverFltInfo tmpRead_9;
  int32_T rtb_ChassisMgmt_CrpCtrlDesNoLmt;
  int32_T tmp;
  int32_T u;
  real32_T rtb_Switch_aqs5;
  real32_T tmpRead_6;
  real32_T tmpRead_c;
  real32_T tmpRead_d;
  real32_T tmpRead_h;
  int16_T tmpRead_j;
  uint8_T tmpRead;
  uint8_T tmpRead_3;
  uint8_T tmpRead_5;
  uint8_T tmpRead_8;
  uint8_T tmpRead_a;
  uint8_T tmpRead_b;
  uint8_T tmpRead_f;
  uint8_T tmpRead_g;
  boolean_T rtb_CrpCtrl_RvsSts_Flg;
  boolean_T tmpRead_0;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;
  boolean_T tmpRead_4;
  boolean_T tmpRead_7;
  boolean_T tmpRead_e;
  boolean_T tmpRead_i;

  /* Inport: '<Root>/RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm' */
  (void)Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(&tmpRead_j);

  /* Inport: '<Root>/RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld' */
  (void)Rte_Read_RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld
    (&tmpRead_i);

  /* Inport: '<Root>/RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg' */
  (void)Rte_Read_RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(&tmpRead_h);

  /* Inport: '<Root>/RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm' */
  (void)Rte_Read_RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm
    (&rtb_Switch_aqs5);

  /* Inport: '<Root>/RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod' */
  (void)Rte_Read_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(&tmpRead_f);

  /* SignalConversion: '<S5>/SignalCopy1' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg
    (&rtb_VehMot_VehDirDif_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (&rtb_CrpCtrl_RvsSts_Flg);

  /* SignalConversion: '<S5>/SignalCopy17' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
    (&rtb_VehMot_VehSpd_kph);

  /* Inport: '<Root>/RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct' */
  (void)Rte_Read_RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct(&tmpRead_c);

  /* SignalConversion: '<S5>/SignalCopy15' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* SignalConversion: '<S5>/SignalCopy14' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMaxTq_N);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus' */
  (void)
    Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar' */
  (void)Rte_Read_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_CrpCtrl_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Creep_Control_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/VehicleSpeedConvertGear'
   *
   * Block requirements for '<S4>/VehicleSpeedConvertGear':
   *  1. SWREQ_01577 Vehicle Speed In Gear R
   *  2. SWREQ_01578 Vehicle Speed In Gear D
   *  3. SWREQ_06246 Vehicle Speed and Gear Different Directions
   *  4. SWREQ_06247 Vehicle Speed and Gear same Directions
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* RelationalOperator: '<S9>/RelationalOperator4' incorporates:
   *  Constant: '<S9>/CrpCtrl_GEAR_R'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_RelationalOperator4 = (tmpRead_8 == ((uint8_T)CrpCtrl_GEAR_R));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Gain: '<S9>/Gain' */
  rtb_Gain = CrpCtrl_Pos2Neg * rtb_VehMot_VehSpd_kph;

  /* Outputs for Atomic SubSystem: '<S9>/If' */
  rtb_Switch_kgrq = CtAp_CrpCtrl_If(rtb_RelationalOperator4, rtb_Gain,
    rtb_VehMot_VehSpd_kph);

  /* End of Outputs for SubSystem: '<S9>/If' */

  /* SignalConversion generated from: '<S9>/If' */
  CrpCtrl_CrpCtrlUseVehSpd_kph = rtb_Switch_kgrq;

  /* Outputs for Atomic SubSystem: '<S9>/If1' */
  /* Constant: '<S9>/CrpCtrl_ZERO_SPEED' */
  rtb_Switch = CtAp_CrpCtrl_If(rtb_VehMot_VehDirDif_Flg, CrpCtrl_ZERO_SPEED,
    CrpCtrl_CrpCtrlUseVehSpd_kph);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* SignalConversion generated from: '<S9>/If1' */
  CrpCtrl_CrpCtrlUseVehSpdCalcd_kph = rtb_Switch;

  /* End of Outputs for SubSystem: '<S4>/VehicleSpeedConvertGear' */

  /* Outputs for Atomic SubSystem: '<S4>/Creep_Control_Mode_Active_Status' */
  /* Outputs for Atomic SubSystem: '<S7>/Brake_Allowed_Status'
   *
   * Block requirements for '<S7>/Brake_Allowed_Status':
   *  1. SWREQ_06035 Brake Allowed InActive
   *  2. SWREQ_06036 Brake Allowed Active
   *  3. SWREQ_06037 Brake Allowed Keep
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* Logic: '<S10>/LogicalOperator2' incorporates:
   *  Constant: '<S10>/ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG1'
   *  Constant: '<S10>/CrpCtrl_INVALID'
   *  Constant: '<S10>/CrpCtrl_PRESSED'
   *  Logic: '<S10>/LogicalOperator1'
   *  RelationalOperator: '<S10>/RelationalOperator2'
   *  RelationalOperator: '<S10>/RelationalOperator3'
   *  RelationalOperator: '<S10>/RelationalOperator4'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator2_nihg = ((tmpRead == ((uint8_T)CrpCtrl_INVALID)) ||
    ((tmpRead == ((uint8_T)CrpCtrl_PRESSED)) && (tmpRead_6 >
    ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG)));

  /* RelationalOperator: '<S10>/RelationalOperator1' incorporates:
   *  Constant: '<S10>/ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_RelationalOperator1_mhun = (tmpRead_6 <=
    ChassisMgmt_CrpCtrlAllwdMaxPlgrPrs_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_CrpCtrl_ATOM_RS_FF(rtb_LogicalOperator2_nihg,
    rtb_RelationalOperator1_mhun, &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S10>/ATOM_RS_FF' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* Logic: '<S10>/LogicalOperator3' incorporates:
   *  Constant: '<S10>/ChassisMgmt_CrpCtrlAllwdMaxBrkPushrodStk_CFG'
   *  RelationalOperator: '<S10>/RelationalOperator5'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  CrpCtrl_CrpCtrlBrkPedlAllwdSts_Flg = (rtb_LogOp2 && (rtb_Switch_aqs5 <=
    ChassisMgmt_CrpCtrlAllwdMaxBrkPushrodStk_CFG));

  /* End of Outputs for SubSystem: '<S7>/Brake_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/IBS_Allowed_Status'
   *
   * Block requirements for '<S7>/IBS_Allowed_Status':
   *  1. SWREQ_06038 IBS Status Allowed  Active
   *  2. SWREQ_06039 IBS Status  Allowed Inactive
   */
  /* Logic: '<S14>/LogicalOperator5' incorporates:
   *  Constant: '<S14>/CrpCtrl_ACC_ACTIVE'
   *  Constant: '<S14>/CrpCtrl_HDC_AVH_ACTIVE'
   *  Constant: '<S14>/CrpCtrl_HDC_AVH_ACTIVE1'
   *  Constant: '<S14>/CrpCtrl_PARK_ACTIVE'
   *  Constant: '<S14>/CrpCtrl_PARK_INTERRUPT'
   *  Logic: '<S14>/LogicalOperator'
   *  Logic: '<S14>/LogicalOperator1'
   *  Logic: '<S14>/LogicalOperator2'
   *  Logic: '<S14>/LogicalOperator3'
   *  Logic: '<S14>/LogicalOperator4'
   *  Logic: '<S14>/LogicalOperator6'
   *  Logic: '<S14>/LogicalOperator7'
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  RelationalOperator: '<S14>/RelationalOperator2'
   *  RelationalOperator: '<S14>/RelationalOperator3'
   *  RelationalOperator: '<S14>/RelationalOperator4'
   *  RelationalOperator: '<S14>/RelationalOperator5'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy21'
   *  SignalConversion: '<S5>/SignalCopy22'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  CrpCtrl_CrpCtrlIBSAllwdSts_Flg = (!tmpRead_e && !tmpRead_0 && !tmpRead_1 &&
    !tmpRead_2 && !tmpRead_4 && (tmpRead_3 != ((uint8_T)CrpCtrl_HDC_AVH_ACTIVE))
    && (tmpRead_5 != ((uint8_T)CrpCtrl_HDC_AVH_ACTIVE)) && !tmpRead_7 &&
    (tmpRead_f != ((uint8_T)CrpCtrl_ACC_ACTIVE)) && ((tmpRead_g != ((uint8_T)
    CrpCtrl_PARK_INTERRUPT)) && (tmpRead_g != ((uint8_T)CrpCtrl_PARK_ACTIVE))));

  /* End of Outputs for SubSystem: '<S7>/IBS_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/Vheicle_Mode_Allowed_Status'
   *
   * Block requirements for '<S7>/Vheicle_Mode_Allowed_Status':
   *  1. SWREQ_06030 Vheicle Mode Allowed Active
   *  2. SWREQ_06031 Vheicle Mode Allowed Inactive
   */
  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/CrpCtrl_DRIVE_READY'
   *  Constant: '<S16>/CrpCtrl_ONE_PEDAL'
   *  RelationalOperator: '<S16>/RelationalOperator'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  CrpCtrl_CrpCtrlVehModAllwdSts_Flg = ((tmpRead_b == ((uint8_T)
    CrpCtrl_DRIVE_READY)) && (tmpRead_a != ((uint8_T)CrpCtrl_ONE_PEDAL)));

  /* End of Outputs for SubSystem: '<S7>/Vheicle_Mode_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/VehicleSpeedStandstiil'
   *
   * Block requirements for '<S7>/VehicleSpeedStandstiil':
   *  1. SWREQ_06628 Vehicle Speed standstill Allowed Inactive
   *  2. SWREQ_06629 Vehicle Speed standstill Allowed Inactive
   *  3. SWREQ_06630 Vehicle Speed standstill Allowed keep
   */
  /* RelationalOperator: '<S15>/RelationalOperator4' incorporates:
   *  Constant: '<S15>/CrpCtrl_NO_PRESSED'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_RelationalOperator4_k5tg = (tmpRead == ((uint8_T)CrpCtrl_NO_PRESSED));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_EdgeDetectRise' */
  rtb_AND = CtAp_CrpCtr_ATOM_EdgeDetectRise(rtb_RelationalOperator4_k5tg,
    &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_EdgeDetectRise);

  /* End of Outputs for SubSystem: '<S15>/ATOM_EdgeDetectRise' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* RelationalOperator: '<S15>/RelationalOperator2' incorporates:
   *  Abs: '<S15>/Abs1'
   *  Constant: '<S15>/ChassisMgmt_CrpCtrlMotToothTq_CFG'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  Sum: '<S15>/Add'
   */
  rtb_RelationalOperator2 = (fabsf(tmpRead_d) >
    (ChassisMgmt_CrpCtrlMotToothTq_CFG + ChassisMgmt_CrpCtrlDesTq_Nm));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_EdgeDetectRise1' */
  rtb_CrpCtrl_PrevCrpCtrlPidKiSta = CtAp_CrpCtr_ATOM_EdgeDetectRise
    (rtb_RelationalOperator2,
     &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_EdgeDetectRise1);

  /* End of Outputs for SubSystem: '<S15>/ATOM_EdgeDetectRise1' */

  /* Logic: '<S15>/LogicalOperator1' */
  rtb_CrpCtrl_StdlDeactvnEntry_Fl = (rtb_AND || rtb_CrpCtrl_PrevCrpCtrlPidKiSta);

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/ChassisMgmt_CrpCtrlActvStdlSpdSelect_CFG'
   */
  if (ChassisMgmt_CrpCtrlActvStdlSpdSelect_CFG) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
     *
     * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
     *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
     */
    /* Abs: '<S15>/Abs2' incorporates:
     *  SignalConversion: '<S5>/SignalCopy25'
     */
    if (tmpRead_j < 0) {
      tmpRead_j = (int16_T)(-tmpRead_j);
    }

    /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

    /* UnitDelay: '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm1' incorporates:
     *  Abs: '<S15>/Abs2'
     *  Constant: '<S15>/ChassisMgmt_CrpCtrlActvStdlMotSpd_CFG'
     *  RelationalOperator: '<S15>/RelationalOperator3'
     */
    rtb_CrpCtrl_PrevCrpCtrlPidKiSta = ((real32_T)tmpRead_j <=
      ChassisMgmt_CrpCtrlActvStdlMotSpd_CFG);
  } else {
    /* UnitDelay: '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm1' incorporates:
     *  Abs: '<S15>/Abs'
     *  Constant: '<S15>/ChassisMgmt_CrpCtrlActvStdlSpd_CFG'
     *  RelationalOperator: '<S15>/RelationalOperator5'
     */
    rtb_CrpCtrl_PrevCrpCtrlPidKiSta = (fabsf(CrpCtrl_CrpCtrlUseVehSpd_kph) <=
      ChassisMgmt_CrpCtrlActvStdlSpd_CFG);
  }

  /* End of Switch: '<S15>/Switch' */

  /* Logic: '<S15>/LogicalOperator2' incorporates:
   *  Constant: '<S15>/ChassisMgmt_CrpCtrlActvStdlTq_CFG'
   *  RelationalOperator: '<S15>/RelationalOperator1'
   */
  rtb_LogicalOperator2 = ((ChassisMgmt_CrpCtrlDesTq_Nm >=
    ChassisMgmt_CrpCtrlActvStdlTq_CFG) && rtb_CrpCtrl_PrevCrpCtrlPidKiSta);

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_TimeCnt' */
  /* Constant: '<S15>/CrpCtrl_SAMPLE_TIME' incorporates:
   *  Constant: '<S15>/ChassisMgmt_CrpCtrlActvStdlMaxTim_CFG'
   */
  rtb_CrpCtrl_PrevCrpCtrlPidKiSta = CtAp_CrpCtrl_ATOM_TimeCnt
    (rtb_LogicalOperator2, ((uint16_T)CrpCtrl_SAMPLE_TIME),
     ChassisMgmt_CrpCtrlActvStdlMaxTim_CFG,
     &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S15>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_SR_FF' */
  rtb_OR = CtAp_CrpCtrl_ATOM_SR_FF(rtb_CrpCtrl_StdlDeactvnEntry_Fl,
    rtb_CrpCtrl_PrevCrpCtrlPidKiSta, &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_SR_FF);

  /* End of Outputs for SubSystem: '<S15>/ATOM_SR_FF' */

  /* SignalConversion generated from: '<S15>/ATOM_SR_FF' */
  CrpCtrl_StdlDeactvn_Flg = rtb_OR;

  /* End of Outputs for SubSystem: '<S7>/VehicleSpeedStandstiil' */

  /* Outputs for Atomic SubSystem: '<S7>/Gear_Speed_Allowed_Status'
   *
   * Block requirements for '<S7>/Gear_Speed_Allowed_Status':
   *  1. SWREQ_06032 Gear Speed Allowed Active
   *  2. SWREQ_06033 Gear Speed Allowed Inactive
   *  3. SWREQ_06034 Gear Speed Allowed Keep
   *  4. SWREQ_06249 Gear Speed Allowed Inactive
   */
  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S13>/ChassisMgmt_CrpCtrlAllwdVehSpdThdOn_CFG'
   *  Constant: '<S13>/ChassisMgmt_CrpCtrlAllwdVehSpdThd_CFG3'
   *  Constant: '<S21>/Constant'
   *  Delay: '<S21>/Delay'
   *  RelationalOperator: '<S21>/Rel'
   *  RelationalOperator: '<S21>/Rel1'
   *  Sum: '<S13>/Add2'
   *  Sum: '<S13>/Subtract'
   *  Switch: '<S21>/Switch1'
   *  UnitDelay: '<S4>/ChassisMgmt_CrpCtrlDesVehSpdPrev_kph'
   */
  if ((ChassisMgmt_CrpCtrlDesVehSpd_kph +
       ChassisMgmt_CrpCtrlAllwdVehSpdThdOn_CFG) <= CrpCtrl_CrpCtrlUseVehSpd_kph)
  {
    CtAp_CrpCtrl_ARID_DEF.Delay_DSTATE = true;
  } else if (CrpCtrl_CrpCtrlUseVehSpd_kph <= (ChassisMgmt_CrpCtrlDesVehSpd_kph -
              ChassisMgmt_CrpCtrlAllwdVehSpdThdOff_CFG)) {
    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/Constant1'
     *  Delay: '<S21>/Delay'
     */
    CtAp_CrpCtrl_ARID_DEF.Delay_DSTATE = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S21>/Switch' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* Logic: '<S13>/LogicalOperator4' incorporates:
   *  Constant: '<S13>/CrpCtrl_GEAR_D1'
   *  Constant: '<S13>/CrpCtrl_GEAR_R1'
   *  Delay: '<S21>/Delay'
   *  Logic: '<S13>/LogicalOperator10'
   *  Logic: '<S13>/LogicalOperator9'
   *  RelationalOperator: '<S13>/RelationalOperator7'
   *  RelationalOperator: '<S13>/RelationalOperator8'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  CrpCtrl_CrpCtrlGearSpdAllwdSts_Flg = (!CtAp_CrpCtrl_ARID_DEF.Delay_DSTATE &&
    rtb_CrpCtrl_RvsSts_Flg && ((tmpRead_8 == ((uint8_T)CrpCtrl_GEAR_R)) ||
    (tmpRead_8 == ((uint8_T)CrpCtrl_GEAR_D))));

  /* End of Outputs for SubSystem: '<S7>/Gear_Speed_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/Creep_Control_Active_Mgmt'
   *
   * Block requirements for '<S7>/Creep_Control_Active_Mgmt':
   *  1. SWREQ_01576 Creep Control Mode Inactive
   *  2. SWREQ_01575 Creep Control Mode Active
   */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Logic: '<S11>/LogicalOperator2'
   *  SignalConversion generated from: '<S5>/BusSelector'
   */
  ChassisMgmt_CrpCtrlSts_Flg = (CrpCtrl_CrpCtrlVehModAllwdSts_Flg &&
    CrpCtrl_CrpCtrlGearSpdAllwdSts_Flg && CrpCtrl_CrpCtrlBrkPedlAllwdSts_Flg &&
    !tmpRead_9.FctSftyMon_ErrResCrpCtrlTqOverFltInfo &&
    CrpCtrl_CrpCtrlIBSAllwdSts_Flg && CrpCtrl_StdlDeactvn_Flg);

  /* End of Outputs for SubSystem: '<S7>/Creep_Control_Active_Mgmt' */

  /* Outputs for Atomic SubSystem: '<S7>/Creep_Control_Vehicle_Speed_Demand'
   *
   * Block requirements for '<S7>/Creep_Control_Vehicle_Speed_Demand':
   *  1. SWREQ_01579 Creep Control Target Speed Set In GearR
   *  2. SWREQ_01580 Creep Control Target Speed Set In Gear other
   *  3. SWREQ_01581 Creep Control Target Speed Filter
   */
  /* RelationalOperator: '<S12>/RelationalOperator4' incorporates:
   *  Constant: '<S12>/CrpCtrl_GEAR_R'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_RelationalOperator4_fff0 = (tmpRead_8 == ((uint8_T)CrpCtrl_GEAR_R));

  /* Lookup_n-D: '<S12>/ChassisMgmt_CrpCtrlDesRvsVehSpd_LUT' incorporates:
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_ChassisMgmt_CrpCtrlDesRvsVe = look1_iflf_binlca(rtb_Switch_aqs5,
    &ChassisMgmt_CrpCtrlDesRvsVehSpdX_LUT[0],
    &ChassisMgmt_CrpCtrlDesRvsVehSpd_LUT[0], 3U);

  /* Lookup_n-D: '<S12>/ChassisMgmt_CrpCtrlDesFwdVehSpd_LUT' incorporates:
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_ChassisMgmt_CrpCtrlDesFwdVe = look1_iflf_binlca(rtb_Switch_aqs5,
    &ChassisMgmt_CrpCtrlDesFwdVehSpdX_LUT[0],
    &ChassisMgmt_CrpCtrlDesFwdVehSpd_LUT[0], 3U);

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/If' */
  rtb_Switch_boqj = CtAp_CrpCtrl_If(rtb_RelationalOperator4_fff0,
    rtb_ChassisMgmt_CrpCtrlDesRvsVe, rtb_ChassisMgmt_CrpCtrlDesFwdVe);

  /* End of Outputs for SubSystem: '<S12>/If' */

  /* SignalConversion generated from: '<S12>/If' */
  CrpCtrl_CrpCtrlDesNoFilVehSpd_kph = rtb_Switch_boqj;

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_EdgeDetectRise' */
  rtb_AND = CtAp_CrpCtr_ATOM_EdgeDetectRise(ChassisMgmt_CrpCtrlSts_Flg,
    &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_EdgeDetectRi_mbvz);

  /* End of Outputs for SubSystem: '<S12>/ATOM_EdgeDetectRise' */

  /* Switch: '<S12>/Switch1' */
  if (rtb_AND) {
    /* Switch: '<S12>/Switch1' incorporates:
     *  Abs: '<S12>/Abs'
     */
    rtb_Switch1_mazx = fabsf(CrpCtrl_CrpCtrlUseVehSpd_kph);
  } else {
    /* Switch: '<S12>/Switch1' incorporates:
     *  UnitDelay: '<S4>/ChassisMgmt_CrpCtrlDesVehSpdPrev_kph'
     */
    rtb_Switch1_mazx = ChassisMgmt_CrpCtrlDesVehSpd_kph;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_DlyRatRmpLmt' */
  /* Constant: '<S12>/ChassisMgmt_CrpCtrlDesVehSpdGrdtPos_CFG' incorporates:
   *  Constant: '<S12>/ChassisMgmt_CrpCtrlDesVehSpdGrdtNeg_CFG'
   *  Constant: '<S12>/CrpCtrl_Dt'
   */
  ChassisMgmt_CrpCtrlDesVehSpd_kph = CtAp_CrpCtrl_ATOM_DlyRatRmpLmt
    (CrpCtrl_CrpCtrlDesNoFilVehSpd_kph, ChassisMgmt_CrpCtrlDesVehSpdGrdtPos_CFG,
     ChassisMgmt_CrpCtrlDesVehSpdGrdtNeg_CFG, CrpCtrl_Dt, rtb_Switch1_mazx);

  /* End of Outputs for SubSystem: '<S12>/ATOM_DlyRatRmpLmt' */
  /* End of Outputs for SubSystem: '<S7>/Creep_Control_Vehicle_Speed_Demand' */
  /* End of Outputs for SubSystem: '<S4>/Creep_Control_Mode_Active_Status' */

  /* Outputs for Atomic SubSystem: '<S4>/Creep_Controller_Algorithm ' */
  /* SignalConversion generated from: '<S8>/ChassisMgmt_CrpCtrlSts_Flg' */
  rtb_ChassisMgmt_CrpCtrlSts_Flg = ChassisMgmt_CrpCtrlSts_Flg;

  /* Sum: '<S26>/Subtract' */
  ChassisMgmt_CrpCtrlDesVehSpdDif_kph = ChassisMgmt_CrpCtrlDesVehSpd_kph -
    CrpCtrl_CrpCtrlUseVehSpdCalcd_kph;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* RelationalOperator: '<S29>/RelationalOperator4' incorporates:
   *  Constant: '<S29>/CrpCtrl_GEAR_R'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_CrpCtrl_RvsSts_Flg = (tmpRead_8 == ((uint8_T)CrpCtrl_GEAR_R));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/PID_Torque_Control'
   *
   * Block requirements for '<S8>/PID_Torque_Control':
   *  1. SWREQ_01585 Creep Control Pid torque clear
   */
  /* Outputs for Atomic SubSystem: '<S30>/PID_P_Calculation'
   *
   * Block requirements for '<S30>/PID_P_Calculation':
   *  1. SWREQ_01586 Creep Control PID torque
   */
  /* Switch: '<S36>/Switch' */
  if (rtb_CrpCtrl_RvsSts_Flg) {
    /* Switch: '<S36>/Switch' incorporates:
     *  Lookup_n-D: '<S36>/ChassisMgmt_CrpCtrlDesRvsPidKpTq_LUT'
     *  Sum: '<S26>/Subtract'
     */
    rtb_Switch_bwmc = look1_iflf_binlca(ChassisMgmt_CrpCtrlDesVehSpdDif_kph,
      &ChassisMgmt_CrpCtrlDesPidKpTqX_LUT[0],
      &ChassisMgmt_CrpCtrlDesRvsPidKpTq_LUT[0], 9U);
  } else {
    /* Switch: '<S36>/Switch' incorporates:
     *  Lookup_n-D: '<S36>/ChassisMgmt_CrpCtrlDesPidKpTq_LUT'
     *  Sum: '<S26>/Subtract'
     */
    rtb_Switch_bwmc = look1_iflf_binlca(ChassisMgmt_CrpCtrlDesVehSpdDif_kph,
      &ChassisMgmt_CrpCtrlDesPidKpTqX_LUT[0],
      &ChassisMgmt_CrpCtrlDesPidKpTq_LUT[0], 9U);
  }

  /* End of Switch: '<S36>/Switch' */

  /* Outputs for Atomic SubSystem: '<S36>/ATOM_RateRampLmt' */
  /* Constant: '<S36>/ChassisMgmt_CrpCtrlPidKpTqGrdtPos_CFG' incorporates:
   *  Constant: '<S36>/ChassisMgmt_CrpCtrlPidKpTqGrdtNeg_CFG'
   *  Constant: '<S36>/CrpCtrl_Dt'
   */
  rtb_Switch_ci50 = CtAp_CrpCtrl_ATOM_RateRampLmt(rtb_Switch_bwmc,
    ChassisMgmt_CrpCtrlPidKpTqGrdtPos_CFG, ChassisMgmt_CrpCtrlPidKpTqGrdtNeg_CFG,
    CrpCtrl_Dt, &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_RateRampLmt);

  /* End of Outputs for SubSystem: '<S36>/ATOM_RateRampLmt' */

  /* Outputs for Atomic SubSystem: '<S36>/If' */
  /* Constant: '<S36>/CrpCtrl_ZERO_TORQUE' */
  rtb_Switch_c0ri = CtAp_CrpCtrl_If(rtb_ChassisMgmt_CrpCtrlSts_Flg,
    rtb_Switch_ci50, CrpCtrl_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S36>/If' */

  /* SignalConversion generated from: '<S36>/If' */
  ChassisMgmt_CrpCtrlDesPidKpTq_Nm = rtb_Switch_c0ri;

  /* End of Outputs for SubSystem: '<S30>/PID_P_Calculation' */

  /* UnitDelay: '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm1' */
  rtb_CrpCtrl_PrevCrpCtrlPidKiSta = CrpCtrl_PrevCrpCtrlPidKiStatnCdn_Flg;

  /* Switch: '<S35>/Switch' incorporates:
   *  Logic: '<S35>/LogicalOperator'
   */
  if (!rtb_CrpCtrl_PrevCrpCtrlPidKiSta) {
    /* Switch: '<S35>/Switch2' */
    if (rtb_CrpCtrl_RvsSts_Flg) {
      /* Switch: '<S35>/Switch' incorporates:
       *  Lookup_n-D: '<S35>/ChassisMgmt_CrpCtrlDesRvsPidKiTq_LUT'
       *  Sum: '<S26>/Subtract'
       *  Switch: '<S35>/Switch2'
       */
      rtb_Switch_aqs5 = look1_iflf_binlca(ChassisMgmt_CrpCtrlDesVehSpdDif_kph,
        &ChassisMgmt_CrpCtrlDesPidKiTqX_LUT[0],
        &ChassisMgmt_CrpCtrlDesRvsPidKiTq_LUT[0], 9U);
    } else {
      /* Switch: '<S35>/Switch' incorporates:
       *  Lookup_n-D: '<S35>/ChassisMgmt_CrpCtrlDesPidKiTq_LUT'
       *  Sum: '<S26>/Subtract'
       *  Switch: '<S35>/Switch2'
       */
      rtb_Switch_aqs5 = look1_iflf_binlca(ChassisMgmt_CrpCtrlDesVehSpdDif_kph,
        &ChassisMgmt_CrpCtrlDesPidKiTqX_LUT[0],
        &ChassisMgmt_CrpCtrlDesPidKiTq_LUT[0], 9U);
    }

    /* End of Switch: '<S35>/Switch2' */
  } else {
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S35>/CrpCtrl_ZERO_TORQUE'
     */
    rtb_Switch_aqs5 = CrpCtrl_ZERO_TORQUE;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Switch: '<S35>/Switch1' incorporates:
   *  Constant: '<S35>/CrpCtrl_ZERO_TORQUE'
   *  Logic: '<S35>/LogicalOperator1'
   */
  if (!rtb_ChassisMgmt_CrpCtrlSts_Flg) {
    CtAp_CrpCtrl_ARID_DEF.CrpCtrl_PrevCrpCtrlDesNoLmtPidK = CrpCtrl_ZERO_TORQUE;
  }

  /* Sum: '<S35>/Add1' incorporates:
   *  Switch: '<S35>/Switch1'
   */
  CrpCtrl_CrpCtrlDesNoLmtPidKiTq_Nm = rtb_Switch_aqs5 +
    CtAp_CrpCtrl_ARID_DEF.CrpCtrl_PrevCrpCtrlDesNoLmtPidK;

  /* Outputs for Atomic SubSystem: '<S35>/ATOM_Limiter' */
  /* Constant: '<S35>/ChassisMgmt_CrpCtrlPidKiTqMax_CFG' incorporates:
   *  Constant: '<S35>/ChassisMgmt_CrpCtrlPidKiTqMin_CFG'
   */
  rtb_Switch_imls = CtAp_CrpCtrl_ATOM_Limiter(ChassisMgmt_CrpCtrlPidKiTqMax_CFG,
    CrpCtrl_CrpCtrlDesNoLmtPidKiTq_Nm, ChassisMgmt_CrpCtrlPidKiTqMin_CFG);

  /* End of Outputs for SubSystem: '<S35>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S35>/ATOM_Limiter' */
  ChassisMgmt_CrpCtrlDesPidKiTq_Nm = rtb_Switch_imls;

  /* Sum: '<S34>/Add' */
  CrpCtrl_CrpCtrlDesNoLmtPidTq_Nm = ChassisMgmt_CrpCtrlDesPidKpTq_Nm +
    ChassisMgmt_CrpCtrlDesPidKiTq_Nm;

  /* Outputs for Atomic SubSystem: '<S34>/ATOM_Limiter' */
  /* Constant: '<S34>/ChassisMgmt_CrpCtrlPidTqMax_CFG' incorporates:
   *  Constant: '<S34>/ChassisMgmt_CrpCtrlPidTqMin_CFG'
   */
  rtb_Switch_hfn1 = CtAp_CrpCtrl_ATOM_Limiter(ChassisMgmt_CrpCtrlPidTqMax_CFG,
    CrpCtrl_CrpCtrlDesNoLmtPidTq_Nm, ChassisMgmt_CrpCtrlPidTqMin_CFG);

  /* End of Outputs for SubSystem: '<S34>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S34>/ATOM_Limiter' */
  ChassisMgmt_CrpCtrlDesPidTq_Nm = rtb_Switch_hfn1;

  /* DataTypeConversion: '<S35>/Float2Int1' */
  rtb_ChassisMgmt_CrpCtrlDesNoLmt = (int32_T)floorf
    (CrpCtrl_CrpCtrlDesNoLmtPidKiTq_Nm);

  /* DataTypeConversion: '<S35>/Float2Int32' */
  u = (int32_T)floorf(ChassisMgmt_CrpCtrlDesVehSpdDif_kph);

  /* Signum: '<S35>/Sign1' */
  if (u < 0) {
    u = -1;
  } else {
    u = (u > 0) ? ((int32_T)1) : ((int32_T)0);
  }

  /* Signum: '<S35>/Sign' */
  if (rtb_ChassisMgmt_CrpCtrlDesNoLmt < 0) {
    tmp = -1;
  } else {
    tmp = (rtb_ChassisMgmt_CrpCtrlDesNoLmt > 0) ? ((int32_T)1) : ((int32_T)0);
  }

  /* Logic: '<S35>/Logical Operator3' incorporates:
   *  DataTypeConversion: '<S35>/Float2Int2'
   *  RelationalOperator: '<S35>/RelationalOperator1'
   *  RelationalOperator: '<S35>/RelationalOperator2'
   *  Signum: '<S35>/Sign'
   *  Signum: '<S35>/Sign1'
   */
  ChassisMgmt_CrpCtrlPidKiStatnCdn_Flg = ((u == tmp) &&
    (rtb_ChassisMgmt_CrpCtrlDesNoLmt != (int32_T)floorf
     (ChassisMgmt_CrpCtrlDesPidKiTq_Nm)));

  /* Update for UnitDelay: '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm1' */
  CrpCtrl_PrevCrpCtrlPidKiStatnCdn_Flg = ChassisMgmt_CrpCtrlPidKiStatnCdn_Flg;

  /* Update for Switch: '<S35>/Switch1' incorporates:
   *  UnitDelay: '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm'
   */
  CtAp_CrpCtrl_ARID_DEF.CrpCtrl_PrevCrpCtrlDesNoLmtPidK =
    CrpCtrl_CrpCtrlDesNoLmtPidKiTq_Nm;

  /* End of Outputs for SubSystem: '<S8>/PID_Torque_Control' */

  /* Outputs for Atomic SubSystem: '<S8>/Feedback_Torque_Control'
   *
   * Block requirements for '<S8>/Feedback_Torque_Control':
   *  1. SWREQ_01583 Creep Control FeedBack torque Set
   *  2. SWREQ_01584 Creep Control FeedBack torque
   */
  /* Switch: '<S28>/Switch' */
  if (rtb_ChassisMgmt_CrpCtrlSts_Flg) {
    /* Switch: '<S28>/Switch1' */
    if (rtb_CrpCtrl_RvsSts_Flg) {
      /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
       *
       * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
       *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
       */
      /* Switch: '<S28>/Switch' incorporates:
       *  Lookup_n-D: '<S28>/ChassisMgmt_CrpCtrlDesRvsFbTq_MAP'
       *  SignalConversion: '<S5>/SignalCopy16'
       *  Sum: '<S26>/Subtract'
       *  Switch: '<S28>/Switch1'
       */
      ChassisMgmt_CrpCtrlDesFbTq_Nm = look2_iflf_binlca(tmpRead_c,
        ChassisMgmt_CrpCtrlDesVehSpdDif_kph, &ChassisMgmt_CrpCtrlDesFbTqY_MAP[0],
        &ChassisMgmt_CrpCtrlDesFbTqX_MAP[0], &ChassisMgmt_CrpCtrlDesRvsFbTq_MAP
        [0], CtAp_CrpCtrl_ConstP.pooled3, 12U);

      /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */
    } else {
      /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
       *
       * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
       *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
       */
      /* Switch: '<S28>/Switch' incorporates:
       *  Lookup_n-D: '<S28>/ChassisMgmt_CrpCtrlDesFbTq_MAP'
       *  SignalConversion: '<S5>/SignalCopy16'
       *  Sum: '<S26>/Subtract'
       *  Switch: '<S28>/Switch1'
       */
      ChassisMgmt_CrpCtrlDesFbTq_Nm = look2_iflf_binlca(tmpRead_c,
        ChassisMgmt_CrpCtrlDesVehSpdDif_kph, &ChassisMgmt_CrpCtrlDesFbTqY_MAP[0],
        &ChassisMgmt_CrpCtrlDesFbTqX_MAP[0], &ChassisMgmt_CrpCtrlDesFbTq_MAP[0],
        CtAp_CrpCtrl_ConstP.pooled3, 12U);

      /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */
    }

    /* End of Switch: '<S28>/Switch1' */
  } else {
    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S28>/CrpCtrl_ZERO_TORQUE'
     */
    ChassisMgmt_CrpCtrlDesFbTq_Nm = CrpCtrl_ZERO_TORQUE;
  }

  /* End of Switch: '<S28>/Switch' */
  /* End of Outputs for SubSystem: '<S8>/Feedback_Torque_Control' */

  /* Outputs for Atomic SubSystem: '<S8>/SteeringGearAngle' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Input':
   *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
   */
  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/ChassisMgmt_CrpCtrlSteerGearAgTqEna_CFG'
   *  Logic: '<S31>/LogicalOperator'
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  if (ChassisMgmt_CrpCtrlSteerGearAgTqEna_CFG && tmpRead_i) {
    /* Switch: '<S31>/Switch' incorporates:
     *  Lookup_n-D: '<S31>/ChassisMgmt_CrpCtrlDesSteerGearAgTq_LUT'
     *  SignalConversion: '<S5>/SignalCopy20'
     */
    ChassisMgmt_CrpCtrlDesSteerGearAgTq_Nm = look1_iflf_binlca(tmpRead_h,
      &ChassisMgmt_CrpCtrlDesSteerGearAgTqX_LUT[0],
      &ChassisMgmt_CrpCtrlDesSteerGearAgTq_LUT[0], 10U);
  } else {
    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S31>/CrpCtrl_ZERO_TORQUE'
     */
    ChassisMgmt_CrpCtrlDesSteerGearAgTq_Nm = CrpCtrl_ZERO_TORQUE;
  }

  /* End of Switch: '<S31>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Input' */
  /* End of Outputs for SubSystem: '<S8>/SteeringGearAngle' */

  /* Outputs for Atomic SubSystem: '<S8>/Creep_Control_Sum_Torque'
   *
   * Block requirements for '<S8>/Creep_Control_Sum_Torque':
   *  1. SWREQ_01588 Creep Control torque Total
   *  2. SWREQ_01587 Creep Control torque clear
   *  3. SWREQ_01589 Creep Control torque Limit
   */
  /* Sum: '<S27>/Add' */
  CrpCtrl_CrpCtrlDesNoLmtSumTq_Nm = ChassisMgmt_CrpCtrlDesPidTq_Nm +
    ChassisMgmt_CrpCtrlDesFbTq_Nm + ChassisMgmt_CrpCtrlDesSteerGearAgTq_Nm;

  /* Outputs for Atomic SubSystem: '<S27>/ATOM_Limiter' */
  /* Constant: '<S27>/ChassisMgmt_CrpCtrlDesTqMax_CFG' incorporates:
   *  Constant: '<S27>/ChassisMgmt_CrpCtrlDesTqMin_CFG'
   */
  rtb_Switch_chll = CtAp_CrpCtrl_ATOM_Limiter(ChassisMgmt_CrpCtrlDesTqMax_CFG,
    CrpCtrl_CrpCtrlDesNoLmtSumTq_Nm, ChassisMgmt_CrpCtrlDesTqMin_CFG);

  /* End of Outputs for SubSystem: '<S27>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S27>/ATOM_Limiter' */
  CrpCtrl_CrpCtrlActvDesSumTq_Nm = rtb_Switch_chll;

  /* Outputs for Atomic SubSystem: '<S27>/If' */
  /* Constant: '<S27>/ChassisMgmt_CrpCtrlInActvTq_CFG' */
  ChassisMgmt_CrpCtrlDesTq_Nm = CtAp_CrpCtrl_If(rtb_ChassisMgmt_CrpCtrlSts_Flg,
    CrpCtrl_CrpCtrlActvDesSumTq_Nm, ChassisMgmt_CrpCtrlInActvTq_CFG);

  /* End of Outputs for SubSystem: '<S27>/If' */
  /* End of Outputs for SubSystem: '<S8>/Creep_Control_Sum_Torque' */
  /* End of Outputs for SubSystem: '<S4>/Creep_Controller_Algorithm ' */
  /* End of Outputs for SubSystem: '<S2>/Creep_Control_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CrpCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_CrpCtrl_Output':
   *  1. SWREQ_01571 The function of "Creep Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
    (ChassisMgmt_CrpCtrlDesTq_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts
    (rtb_ChassisMgmt_CrpCtrlSts_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_CrpCtrl_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_CrpCtrl_Cyclic_10ms_sys' */
}

#define CtAp_CrpCtrl_STOP_SEC_CODE
#include "CtAp_CrpCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_CrpCtrl_START_SEC_VAR_CONST_8
#include "CtAp_CrpCtrl_MemMap.h"

void R_CrpCtrl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_CrpCtrlDesVehSpdDif_kph = 0.0F;
  ChassisMgmt_CrpCtrlDesSteerGearAgTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesPidKiTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesPidTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesPidKpTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesFbTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesTq_Nm = 0.0F;
  ChassisMgmt_CrpCtrlDesVehSpd_kph = 0.0F;
  ChassisMgmt_CrpCtrlPidKiStatnCdn_Flg = false;
  ChassisMgmt_CrpCtrlSts_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_CrpCtrl_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_CrpCtrl_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_CrpCtrl_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Creep_Control_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/Creep_Control_Mode_Active_Status' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/Brake_Allowed_Status'
   *
   * Block requirements for '<S7>/Brake_Allowed_Status':
   *  1. SWREQ_06035 Brake Allowed InActive
   *  2. SWREQ_06036 Brake Allowed Active
   *  3. SWREQ_06037 Brake Allowed Keep
   */
  /* SystemInitialize for Atomic SubSystem: '<S10>/ATOM_RS_FF' */
  CtAp_CrpCtrl_ATOM_RS_FF_Init(true, &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S10>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S7>/Brake_Allowed_Status' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/VehicleSpeedStandstiil'
   *
   * Block requirements for '<S7>/VehicleSpeedStandstiil':
   *  1. SWREQ_06628 Vehicle Speed standstill Allowed Inactive
   *  2. SWREQ_06629 Vehicle Speed standstill Allowed Inactive
   *  3. SWREQ_06630 Vehicle Speed standstill Allowed keep
   */
  /* SystemInitialize for Atomic SubSystem: '<S15>/ATOM_SR_FF' */
  CtAp_CrpCtrl_ATOM_SR_FF_Init(true, &CtAp_CrpCtrl_ARID_DEF.ARID_DEF_ATOM_SR_FF);

  /* End of SystemInitialize for SubSystem: '<S15>/ATOM_SR_FF' */
  /* End of SystemInitialize for SubSystem: '<S7>/VehicleSpeedStandstiil' */
  /* End of SystemInitialize for SubSystem: '<S4>/Creep_Control_Mode_Active_Status' */
  /* End of SystemInitialize for SubSystem: '<S2>/Creep_Control_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_CrpCtrl_Cyclic_10ms_sys' */
}

#define CtAp_CrpCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_CrpCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
