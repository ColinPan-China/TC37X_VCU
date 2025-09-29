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
 *  Filename:           CtAp_PwrLim.c
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PwrLim.h"
#include "rtwtypes.h"
#include "CtAp_PwrLim_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "look1_iflf_binlca.h"
#include "CtAp_PwrLim_Cal.h"
#include "CtAp_PwrLim_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_PwrLim_START_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"

ARID_DEF_CtAp_PwrLim_T CtAp_PwrLim_ARID_DEF;

#define CtAp_PwrLim_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/If'
 *    '<S7>/If1'
 *    '<S7>/If2'
 *    '<S9>/If'
 *    '<S9>/If1'
 */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

uint8_T CtAp_PwrLim_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S26>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S26>/Switch' */
  return rty_Out1_0;
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/If'
 *    '<S8>/If1'
 *    '<S8>/If2'
 *    '<S8>/If3'
 *    '<S8>/If4'
 *    '<S8>/If5'
 *    '<S12>/If'
 *    '<S13>/If'
 *    '<S13>/If1'
 *    '<S15>/If'
 *    ...
 */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

real32_T CtAp_PwrLim_If_jnrb(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S60>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S60>/Switch' */
  return rty_Out1_0;
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/* Output and update for atomic system: '<S10>/NoEnDTAvdMu' */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

void CtAp_PwrLim_NoEnDTAvdMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoEnDTAvdMu_CtAp_Pwr_T *CtAp_PwrLim__ARID_DEF_arg)
{
  boolean_T rtb_Equal2;

  /* Constant: '<S72>/True' */
  *rty_MonStat = true;

  /* Switch: '<S73>/Switch1' incorporates:
   *  Constant: '<S73>/Constant2'
   *  DataTypeConversion: '<S73>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S73>/Switch1' */

  /* RelationalOperator: '<S73>/Equal2' incorporates:
   *  Constant: '<S73>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S74>/Switch1' */
  if (rtb_Equal2) {
    uint16_T u0;

    /* Sum: '<S74>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S74>/Sum' incorporates:
     *  UnitDelay: '<S74>/UnitDelay'
     */
    CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S74>/MinMax' */
    if (u0 <= CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S74>/Sum' */
      CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S74>/MinMax' */
  } else {
    /* Sum: '<S74>/Sum' incorporates:
     *  Constant: '<S73>/Constant37'
     *  UnitDelay: '<S74>/UnitDelay'
     */
    CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S74>/Switch1' */

  /* Switch: '<S73>/Switch2' incorporates:
   *  Constant: '<S73>/FAILED'
   *  Constant: '<S73>/PASSED'
   *  RelationalOperator: '<S74>/B_MiHold'
   *  Switch: '<S73>/Switch3'
   *  UnitDelay: '<S74>/UnitDelay'
   */
  if (CtAp_PwrLim__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S73>/Switch3' incorporates:
     *  Constant: '<S73>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S73>/Switch2' */

  /* Switch: '<S73>/Switch6' incorporates:
   *  Constant: '<S73>/Constant30'
   *  Constant: '<S73>/Constant31'
   *  Constant: '<S73>/Constant32'
   *  Delay: '<S73>/Delay1'
   *  RelationalOperator: '<S73>/Equal3'
   *  RelationalOperator: '<S73>/Equal4'
   *  Switch: '<S73>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S73>/Switch7' incorporates:
     *  Constant: '<S73>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_PwrLim__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S73>/Switch6' */

  /* Update for Delay: '<S73>/Delay1' */
  CtAp_PwrLim__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/* Output and update for atomic system: '<S11>/NoEnTimMonR' */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

void CtAp_PwrLim_NoEnTimMonR(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes)
{
  /* Constant: '<S83>/True' */
  *rty_MonStat = true;

  /* Switch: '<S84>/Switch1' incorporates:
   *  Constant: '<S84>/Constant2'
   *  DataTypeConversion: '<S84>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S84>/Switch1' */

  /* Switch: '<S84>/Switch3' incorporates:
   *  Constant: '<S84>/Constant5'
   *  Constant: '<S84>/F'
   *  Constant: '<S84>/P'
   *  RelationalOperator: '<S84>/Equal2'
   */
  if (*rty_MonRes == ((uint8_T)1U)) {
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S84>/Switch3' */

  /* Switch: '<S84>/Switch6' incorporates:
   *  Constant: '<S84>/Constant11'
   *  Constant: '<S84>/Constant30'
   *  Constant: '<S84>/Constant32'
   *  RelationalOperator: '<S84>/Equal3'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else {
    *rty_ErrorRes = false;
  }

  /* End of Switch: '<S84>/Switch6' */
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S14>/If'
 *    '<S14>/If1'
 */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

boolean_T CtAp_PwrLim_If_f4bg(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S93>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S93>/Switch' */
  return rty_Out1_0;
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S170>/ATOM_TimeCnt2'
 *    '<S171>/ATOM_TimeCnt2'
 *    '<S173>/ATOM_TimeCnt2'
 *    '<S175>/ATOM_TimeCnt2'
 *    '<S176>/ATOM_TimeCnt2'
 *    '<S177>/ATOM_TimeCnt2'
 */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

boolean_T CtAp_PwrLim_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T
  *CtAp_PwrLim__ARID_DEF_arg)
{
  uint16_T rtb_Add1_kcyt;

  /* Sum: '<S191>/Add1' incorporates:
   *  DataTypeConversion: '<S191>/Data Type Conversion'
   *  DataTypeConversion: '<S191>/Data Type Conversion1'
   */
  rtb_Add1_kcyt = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S191>/Switch' */
  if (rtu_In) {
    /* Sum: '<S191>/Add' incorporates:
     *  DataTypeConversion: '<S191>/Data Type Conversion'
     *  UnitDelay: '<S191>/Delay'
     */
    CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S191>/Min' */
    if (rtb_Add1_kcyt <= CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S191>/Add' */
      CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_kcyt;
    }

    /* End of MinMax: '<S191>/Min' */
  } else {
    /* Sum: '<S191>/Add' incorporates:
     *  Constant: '<S191>/Constant'
     *  UnitDelay: '<S191>/Delay'
     */
    CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S191>/Switch' */

  /* RelationalOperator: '<S191>/Relational Operator' incorporates:
   *  UnitDelay: '<S191>/Delay'
   */
  return CtAp_PwrLim__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_kcyt;
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_PwrLim_START_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

void R_PwrLim_Cyclic_100ms(void)
{
  /* local block i/o variables */
  dt_EgyMgmt_EgyMgmtWarnTwo rtb_BusCreator1;
  dt_EgyMgmt_EgyMgmtWarnOne rtb_BusCreator1_c1wx;
  real32_T rtb_EgyMgmt_MCUPwrCnsCalcn_Kw;
  real32_T rtb_EgyMgmt_V2LPwrCnsCalcn_Kw;
  real32_T rtb_MinMax1;
  real32_T rtb_MinMax;
  real32_T rtb_MinMax_f5qq;
  real32_T rtb_MinMax_fe1k;
  real32_T rtb_Product1_bpks;
  real32_T rtb_MinMax_abnt;
  real32_T rtb_MinMax_jmpl;
  real32_T rtb_MinMax_agjv;
  real32_T rtb_MinMax_c4zw;
  real32_T rtb_MinMax_mq1c;
  real32_T rtb_Add3;
  real32_T rtb_Add7;
  real32_T rtb_MinMax_kdax;
  real32_T rtb_MinMax_mblh;
  real32_T rtb_MinMax1_jung;
  real32_T rtb_MinMax2;
  real32_T rtb_MinMax3;
  real32_T rtb_Switch_jpyc;
  real32_T rtb_Switch_lul2;
  real32_T rtb_Switch_nbfi;
  real32_T rtb_Switch_khwq;
  real32_T rtb_Switch_gddn;
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch1_dogb;
  uint8_T rtb_Switch_pq1s;
  uint8_T rtb_Switch_lb3b;
  uint8_T rtb_Switch2;
  uint8_T rtb_Switch_if2c;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_Compare_mpee;
  boolean_T rtb_Compare_ikjg;
  boolean_T rtb_LogicalOperator1_e02b;
  boolean_T rtb_Compare_n1hy;
  boolean_T rtb_LogicalOperator1_op13;
  boolean_T rtb_Compare_cooq;
  boolean_T rtb_LogicalOperator1_jp2m;
  boolean_T rtb_LogicalOperator1_cwi2;
  boolean_T rtb_Compare_k0ps;
  boolean_T rtb_LogicalOperator1_fsrq;
  boolean_T rtb_LogicalOperator1_jc0r;
  boolean_T rtb_Compare_cqje;
  boolean_T rtb_LogicalOperator1_iymp;
  boolean_T rtb_Compare_grqu;
  boolean_T rtb_LogicalOperator1_kclv;
  boolean_T rtb_LogicalOperator1_ese3;
  boolean_T rtb_LogicalOperator9_o5a1;
  boolean_T rtb_LogicalOperator1_d4wr;
  boolean_T rtb_LogicalOperator9_g5jr;
  boolean_T rtb_LogicalOperator4_cogd;
  boolean_T rtb_LogicalOperator9_dqmh;
  boolean_T rtb_LogicalOperator5_a1op;
  boolean_T rtb_LogicalOperator6_npvf;
  boolean_T rtb_Switch6;
  boolean_T rtb_LogicalOperator5_pn3z;
  boolean_T rtb_LogicalOperator6_hkui;
  boolean_T rtb_Switch6_dae5;
  boolean_T rtb_LogicalOperator2_nfjc;
  boolean_T rtb_LogicalOperator3_kef4;
  boolean_T rtb_LogicalOperator1_chzh;
  boolean_T rtb_LogicalOperator5_eqm1;
  boolean_T rtb_LogicalOperator7_lom4;
  boolean_T rtb_Compare_p43v;
  boolean_T rtb_LogicalOperator2_fomf;
  boolean_T rtb_LogicalOperator1_oubm;
  boolean_T rtb_LogicalOperator5_nwlk;
  boolean_T rtb_RelationalOperator_byst;
  real32_T rtb_Product1_f21o;
  real32_T rtb_Switch_lul2_tmp;
  real32_T rtb_Switch_lul2_tmp_tmp;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpRead_5;
  real32_T tmpRead_6;
  real32_T tmpRead_b;
  real32_T tmpRead_c;
  real32_T tmpRead_d;
  real32_T tmpRead_e;
  real32_T tmpRead_f;
  real32_T tmpRead_l;
  real32_T tmpRead_n;
  real32_T tmpRead_o;
  uint8_T tmpRead;
  uint8_T tmpRead_g;
  uint8_T tmpRead_h;
  uint8_T tmpRead_k;
  uint8_T tmpRead_m;
  boolean_T tmpRead_7;
  boolean_T tmpRead_8;
  boolean_T tmpRead_9;
  boolean_T tmpRead_a;
  boolean_T tmpRead_i;
  boolean_T tmpRead_j;

  /* Inport: '<Root>/RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V' */
  (void)Rte_Read_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V
    (&tmpRead_o);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A' */
  (void)Rte_Read_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A
    (&tmpRead_n);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_m);

  /* Inport: '<Root>/RTE_R_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw' */
  (void)Rte_Read_RTE_R_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw
    (&tmpRead_l);

  /* Inport: '<Root>/RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
    (&tmpRead_k);

  /* Inport: '<Root>/RTE_R_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg' */
  (void)Rte_Read_RTE_R_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg
    (&tmpRead_j);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(&tmpRead_i);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_h);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_g);

  /* SignalConversion: '<S5>/SignalCopy19' incorporates:
   *  Inport: '<Root>/RTE_R_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw'
   */
  (void)Rte_Read_RTE_R_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw
    (&rtb_EgyMgmt_V2LPwrCnsCalcn_Kw);

  /* Inport: '<Root>/RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
    (&tmpRead_f);

  /* SignalConversion: '<S5>/SignalCopy17' incorporates:
   *  Inport: '<Root>/RTE_R_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw'
   */
  (void)Rte_Read_RTE_R_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw
    (&rtb_EgyMgmt_MCUPwrCnsCalcn_Kw);

  /* Inport: '<Root>/RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
    (&tmpRead_e);

  /* Inport: '<Root>/RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W' */
  (void)Rte_Read_RTE_R_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V' */
  (void)Rte_Read_RTE_R_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A' */
  (void)Rte_Read_RTE_R_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
    (&rtb_Product1_f21o);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_PwrLim_Cyclic_100ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_BMSTarThermLvl'
   *
   * Block requirements for '<S4>/EgyMgmt_BMSTarThermLvl':
   *  1. VCU_SW_Requirements_Specification.slreqx:3804
   *  2. VCU_SW_Requirements_Specification.slreqx:3805
   *  3. VCU_SW_Requirements_Specification.slreqx:3806
   *  4. VCU_SW_Requirements_Specification.slreqx:3807
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S7>/LogicalOperator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S29>/Constant'
   *  Logic: '<S7>/LogicalOperator3'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy21'
   */
  rtb_LogicalOperator2_fomf = ((tmpRead == ((uint8_T)PwrLim_Off_Plug)) &&
    (tmpRead_h == ((uint8_T)PwrLim_ECO)) && ((tmpRead_g == ((uint8_T)
    PwrLim_Gear_R)) || (tmpRead_g == ((uint8_T)PwrLim_Gear_D))));

  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S30>/Constant'
   *  Logic: '<S7>/LogicalOperator4'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy21'
   */
  rtb_LogicalOperator1_oubm = ((tmpRead == ((uint8_T)PwrLim_Off_Plug)) &&
    (tmpRead_h == ((uint8_T)PwrLim_NORMAL)) && ((tmpRead_g == ((uint8_T)
    PwrLim_Gear_R)) || (tmpRead_g == ((uint8_T)PwrLim_Gear_D))));

  /* Logic: '<S7>/LogicalOperator5' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Logic: '<S7>/LogicalOperator6'
   *  Logic: '<S7>/LogicalOperator7'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy21'
   */
  rtb_LogicalOperator5_nwlk = (((tmpRead_h == ((uint8_T)PwrLim_SPORT)) ||
    (tmpRead_h == ((uint8_T)PwrLim_OnePedal))) && (tmpRead == ((uint8_T)
    PwrLim_Off_Plug)) && ((tmpRead_g == ((uint8_T)PwrLim_Gear_R)) || (tmpRead_g ==
    ((uint8_T)PwrLim_Gear_D))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If2'
   *
   * Block requirements for '<S7>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:3806
   *  2. VCU_SW_Requirements_Specification.slreqx:3807
   */
  /* Constant: '<S7>/Marco_LevelThree' incorporates:
   *  Constant: '<S7>/Marco_LevelResreved'
   */
  rtb_Switch_if2c = CtAp_PwrLim_If(rtb_LogicalOperator5_nwlk, ((uint8_T)
    PwrLim_LevelThree), ((uint8_T)PwrLim_LevelResreved));

  /* End of Outputs for SubSystem: '<S7>/If2' */

  /* Outputs for Atomic SubSystem: '<S7>/If1'
   *
   * Block requirements for '<S7>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3805
   */
  /* Constant: '<S7>/Marco_LevelTwo' */
  rtb_Switch2 = CtAp_PwrLim_If(rtb_LogicalOperator1_oubm, ((uint8_T)
    PwrLim_LevelTwo), rtb_Switch_if2c);

  /* End of Outputs for SubSystem: '<S7>/If1' */

  /* Outputs for Atomic SubSystem: '<S7>/If'
   *
   * Block requirements for '<S7>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3804
   */
  /* Constant: '<S7>/Marco_LevelOne' */
  rtb_Switch_pq1s = CtAp_PwrLim_If(rtb_LogicalOperator2_fomf, ((uint8_T)
    PwrLim_LevelOne), rtb_Switch2);

  /* End of Outputs for SubSystem: '<S7>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_BMSTarThermLvl' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd'
   *
   * Block requirements for '<S4>/EgyMgmt_TCUPwrAllwd':
   *  1. VCU_SW_Requirements_Specification.slreqx:3795
   *  2. VCU_SW_Requirements_Specification.slreqx:3797
   *  3. VCU_SW_Requirements_Specification.slreqx:3798
   *  4. VCU_SW_Requirements_Specification.slreqx:3799
   *  5. VCU_SW_Requirements_Specification.slreqx:15057
   *  6. VCU_SW_Requirements_Specification.slreqx:15058
   *  7. VCU_SW_Requirements_Specification.slreqx:3800
   *  8. VCU_SW_Requirements_Specification.slreqx:3801
   *  9. VCU_SW_Requirements_Specification.slreqx:3802
   *  10. VCU_SW_Requirements_Specification.slreqx:3796
   *  11. VCU_SW_Requirements_Specification.slreqx:132817
   */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueOne' */
  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_DCDCPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_DCDCPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:3778
   *  2. VCU_SW_Requirements_Specification.slreqx:3779
   *  3. VCU_SW_Requirements_Specification.slreqx:3780
   *  4. VCU_SW_Requirements_Specification.slreqx:3781
   *  5. VCU_SW_Requirements_Specification.slreqx:3782
   *  6. VCU_SW_Requirements_Specification.slreqx:3783
   *  7. VCU_SW_Requirements_Specification.slreqx:3784
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Product: '<S8>/Product1' incorporates:
   *  Product: '<S181>/Product'
   *  Product: '<S182>/Product'
   *  Product: '<S185>/Product'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  rtb_Switch_lul2_tmp_tmp = tmpRead_1 * tmpRead_4;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueOne' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_V2LDisChgPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_V2LDisChgPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:15070
   *  2. VCU_SW_Requirements_Specification.slreqx:15071
   */
  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_MCUDrvPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_MCUDrvPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:3786
   *  2. VCU_SW_Requirements_Specification.slreqx:3787
   */
  /* Product: '<S8>/Divide1' incorporates:
   *  Constant: '<S8>/Marco_EgyMgmt_PwrCnsKwTran1'
   *  Product: '<S12>/Divide1'
   *  Product: '<S12>/Divide3'
   *  Product: '<S16>/Divide3'
   *  Product: '<S8>/Divide4'
   *  Product: '<S8>/Divide5'
   *  Product: '<S8>/Product1'
   */
  rtb_Switch_lul2_tmp = rtb_Switch_lul2_tmp_tmp / PwrLim_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_MCUDrvPwrLmt' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_V2LDisChgPwrLmt' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd'
   *
   * Block requirements for '<S4>/EgyMgmt_TCUPwrAllwd':
   *  1. VCU_SW_Requirements_Specification.slreqx:3795
   *  2. VCU_SW_Requirements_Specification.slreqx:3797
   *  3. VCU_SW_Requirements_Specification.slreqx:3798
   *  4. VCU_SW_Requirements_Specification.slreqx:3799
   *  5. VCU_SW_Requirements_Specification.slreqx:15057
   *  6. VCU_SW_Requirements_Specification.slreqx:15058
   *  7. VCU_SW_Requirements_Specification.slreqx:3800
   *  8. VCU_SW_Requirements_Specification.slreqx:3801
   *  9. VCU_SW_Requirements_Specification.slreqx:3802
   *  10. VCU_SW_Requirements_Specification.slreqx:3796
   *  11. VCU_SW_Requirements_Specification.slreqx:132817
   */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Product: '<S8>/Product' incorporates:
   *  Product: '<S179>/Product'
   *  Product: '<S185>/Product3'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  tmpRead_b *= tmpRead_4;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd' */

  /* Switch: '<S85>/Switch' incorporates:
   *  Constant: '<S8>/Marco_EgyMgmt_PwrCnsKwTran '
   *  Product: '<S8>/Divide'
   *  Product: '<S8>/Divide1'
   *  Product: '<S8>/Product'
   *  Sum: '<S8>/Add'
   */
  rtb_Switch_lul2 = (tmpRead_b / PwrLim_PwrCnsKwTran) + rtb_Switch_lul2_tmp;

  /* MinMax: '<S8>/MinMax' incorporates:
   *  Constant: '<S8>/EgyMgmt_PODMaxOutDCDCPowerValue_CFG1'
   */
  rtb_MinMax_mblh = fminf(rtb_Switch_lul2, EgyMgmt_PODMaxOutDCDCPowerValue_CFG);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S56>/Constant'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_LogicalOperator2_nfjc = ((tmpRead == ((uint8_T)PwrLim_AC_Charging)) &&
    (tmpRead_8 == PwrLim_Passed));

  /* Logic: '<S8>/LogicalOperator3' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S57>/Constant'
   *  Logic: '<S8>/LogicalOperator12'
   *  Logic: '<S8>/LogicalOperator4'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_LogicalOperator3_kef4 = ((((tmpRead == ((uint8_T)PwrLim_AC_Plug_detected))
    && (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqOne))) || (tmpRead == ((uint8_T)
    PwrLim_AC_Preheating)) || (tmpRead == ((uint8_T)PwrLim_Keep_Warning))) &&
    (tmpRead_8 == PwrLim_Passed));

  /* MinMax: '<S8>/MinMax1' incorporates:
   *  Constant: '<S8>/EgyMgmt_DCDCPowerLimitValue_CFG1'
   *  SignalConversion: '<S5>/SignalCopy25'
   */
  rtb_MinMax1_jung = fminf(tmpRead_l, EgyMgmt_DCDCPowerLimitValue_CFG);

  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_LogicalOperator1_chzh = ((tmpRead == ((uint8_T)PwrLim_DC_Charging)) ||
    (tmpRead == ((uint8_T)PwrLim_DC_Preheating)) || tmpRead_8);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If1'
   *
   * Block requirements for '<S8>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3779
   */
  /* Constant: '<S8>/EgyMgmt_PODMaxOutDCDCPowerValue_CFG' incorporates:
   *  Delay: '<S8>/Delay'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3784
   */
  rtb_Switch_jpyc = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_chzh,
    EgyMgmt_PODMaxOutDCDCPowerValue_CFG, CtAp_PwrLim_ARID_DEF.Delay_DSTATE_jrzd);

  /* End of Outputs for SubSystem: '<S8>/If1' */

  /* Outputs for Atomic SubSystem: '<S8>/If3'
   *
   * Block requirements for '<S8>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:3781
   */
  rtb_Switch_lul2 = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator3_kef4,
    rtb_MinMax1_jung, rtb_Switch_jpyc);

  /* End of Outputs for SubSystem: '<S8>/If3' */

  /* Outputs for Atomic SubSystem: '<S8>/If2'
   *
   * Block requirements for '<S8>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:3780
   */
  rtb_Switch_khwq = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator2_nfjc,
    rtb_MinMax_mblh, rtb_Switch_lul2);

  /* End of Outputs for SubSystem: '<S8>/If2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S225>/Relational Operator' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Constant: '<S53>/Constant'
   *  Constant: '<S54>/Constant'
   *  Logic: '<S8>/LogicalOperator10'
   *  Logic: '<S8>/LogicalOperator11'
   *  Logic: '<S8>/LogicalOperator6'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S53>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_RelationalOperator_byst = ((tmpRead == ((uint8_T)PwrLim_Off_Plug)) ||
    (tmpRead == ((uint8_T)PwrLim_V2L_Plug_Detected)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Discharging)) || (tmpRead == ((uint8_T)PwrLim_Charging_Complete))
    || (tmpRead == ((uint8_T)PwrLim_Charging_Fault)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Complete)) || (tmpRead == ((uint8_T)PwrLim_V2L_Fault)) ||
    (tmpRead == ((uint8_T)PwrLim_DC_Plug_detected)) || ((tmpRead == ((uint8_T)
    PwrLim_AC_Plug_detected)) && ((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqZero))
    || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqTwo)) || (tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqThree)) || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqFour)))));

  /* Logic: '<S8>/LogicalOperator5' incorporates:
   *  Constant: '<S49>/Constant'
   *  Constant: '<S58>/Constant'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator5_eqm1 = (rtb_RelationalOperator_byst && (tmpRead_8 ==
    PwrLim_Passed) && (tmpRead_2 > EgyMgmt_BMSDispSOCLo_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S85>/Switch' incorporates:
   *  Product: '<S8>/Divide5'
   */
  rtb_Switch_lul2 = rtb_Switch_lul2_tmp;

  /* MinMax: '<S8>/MinMax2' incorporates:
   *  Constant: '<S8>/EgyMgmt_PODMaxOutDCDCPowerValue_CFG2'
   */
  rtb_MinMax2 = fminf(rtb_Switch_lul2, EgyMgmt_PODMaxOutDCDCPowerValue_CFG);

  /* Outputs for Atomic SubSystem: '<S8>/If4'
   *
   * Block requirements for '<S8>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:3782
   */
  rtb_Switch_jpyc = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator5_eqm1, rtb_MinMax2,
    rtb_Switch_khwq);

  /* End of Outputs for SubSystem: '<S8>/If4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S8>/LogicalOperator7' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S59>/Constant'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator7_lom4 = (rtb_RelationalOperator_byst && (tmpRead_8 ==
    PwrLim_Passed) && (tmpRead_2 <= EgyMgmt_BMSDispSOCLo_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S85>/Switch' incorporates:
   *  Product: '<S8>/Divide4'
   */
  rtb_Switch_lul2 = rtb_Switch_lul2_tmp;

  /* MinMax: '<S8>/MinMax3' incorporates:
   *  Constant: '<S8>/EgyMgmt_DCDCPowerLimitValue_CFG'
   */
  rtb_MinMax3 = fminf(rtb_Switch_lul2, EgyMgmt_DCDCPowerLimitValue_CFG);

  /* Outputs for Atomic SubSystem: '<S8>/If5'
   *
   * Block requirements for '<S8>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:3783
   */
  rtb_Switch_lul2 = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator7_lom4, rtb_MinMax3,
    rtb_Switch_jpyc);

  /* End of Outputs for SubSystem: '<S8>/If5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_Compare_p43v = (tmpRead == ((uint8_T)PwrLim_Init));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3778
   */
  /* Delay: '<S8>/Delay' incorporates:
   *  Constant: '<S8>/Marco_DCDCLimPwrZero'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3784
   */
  CtAp_PwrLim_ARID_DEF.Delay_DSTATE_jrzd = CtAp_PwrLim_If_jnrb(rtb_Compare_p43v,
    PwrLim_DCDCLimPwrZero, rtb_Switch_lul2);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_DCDCPwrLmt' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_EgyMgmtWarnOne'
   *
   * Block requirements for '<S4>/EgyMgmt_EgyMgmtWarnOne':
   *  1. VCU_SW_Requirements_Specification.slreqx:3815
   *  2. VCU_SW_Requirements_Specification.slreqx:3816
   *  3. VCU_SW_Requirements_Specification.slreqx:3817
   *  4. VCU_SW_Requirements_Specification.slreqx:3823
   *  5. VCU_SW_Requirements_Specification.slreqx:3824
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S10>/LogicalOperator5' incorporates:
   *  Constant: '<S68>/Constant'
   *  Constant: '<S70>/Constant'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S10>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:3815
   */
  rtb_LogicalOperator5_pn3z = ((rtb_Product1_f21o > PwrLim_Single_Zero) &&
    (tmpRead == ((uint8_T)PwrLim_AC_Charging)));

  /* Logic: '<S10>/LogicalOperator6' incorporates:
   *  Constant: '<S69>/Constant'
   *  Constant: '<S71>/Constant'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S10>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:3816
   */
  rtb_LogicalOperator6_hkui = ((tmpRead != ((uint8_T)PwrLim_AC_Charging)) ||
    (rtb_Product1_f21o <= PwrLim_Single_Zero));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/NoEnDTAvdMu' */
  /* Constant: '<S10>/EgyMgmt_BatteryDischargingInChargingTime_CFG' incorporates:
   *  Constant: '<S10>/EgyMgmt_RunStep'
   */
  CtAp_PwrLim_NoEnDTAvdMu(rtb_LogicalOperator5_pn3z, rtb_LogicalOperator6_hkui,
    EgyMgmt_BatteryDischargingInChargingTime_CFG, ((uint16_T)
    PwrLim_EgyMgmt_RunStep), &rtb_RelationalOperator_byst, &rtb_Switch1_dogb,
    &rtb_Switch2, &rtb_Switch6_dae5, &CtAp_PwrLim_ARID_DEF.ARID_DEF_NoEnDTAvdMu);

  /* End of Outputs for SubSystem: '<S10>/NoEnDTAvdMu' */

  /* SignalConversion generated from: '<S10>/NoEnDTAvdMu' */
  EgyMgmt_MonResEgyMgmtWarnOne = rtb_Switch1_dogb;

  /* SignalConversion generated from: '<S10>/NoEnDTAvdMu' */
  EgyMgmt_ErrResEgyMgmtWarnOne = rtb_Switch6_dae5;

  /* BusCreator: '<S10>/Bus Creator1' */
  rtb_BusCreator1_c1wx.EgyMgmt_MonStatEgyMgmtWarnOne =
    rtb_RelationalOperator_byst;
  rtb_BusCreator1_c1wx.EgyMgmt_MonResEgyMgmtWarnOne =
    EgyMgmt_MonResEgyMgmtWarnOne;
  rtb_BusCreator1_c1wx.EgyMgmt_ErrStatEgyMgmtWarnOne = rtb_Switch2;
  rtb_BusCreator1_c1wx.EgyMgmt_ErrResEgyMgmtWarnOne =
    EgyMgmt_ErrResEgyMgmtWarnOne;

  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_EgyMgmtWarnOne' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_EgyMgmtWarnTwo'
   *
   * Block requirements for '<S4>/EgyMgmt_EgyMgmtWarnTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:3828
   *  2. VCU_SW_Requirements_Specification.slreqx:3829
   *  3. VCU_SW_Requirements_Specification.slreqx:3830
   *  4. VCU_SW_Requirements_Specification.slreqx:3836
   *  5. VCU_SW_Requirements_Specification.slreqx:3837
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S11>/LogicalOperator5' incorporates:
   *  Constant: '<S75>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   *  Logic: '<S11>/LogicalOperator1'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy3'
   *
   * Block requirements for '<S11>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:3828
   */
  rtb_LogicalOperator5_a1op = ((tmpRead_2 <= EgyMgmt_BMSDispSOCLo_CFG) &&
    (tmpRead == ((uint8_T)PwrLim_Off_Plug)) && ((tmpRead_g == ((uint8_T)
    PwrLim_Gear_R)) || (tmpRead_g == ((uint8_T)PwrLim_Gear_D))));

  /* Logic: '<S11>/LogicalOperator6' incorporates:
   *  Constant: '<S76>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  Logic: '<S11>/LogicalOperator2'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy3'
   *
   * Block requirements for '<S11>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:3829
   */
  rtb_LogicalOperator6_npvf = ((tmpRead != ((uint8_T)PwrLim_Off_Plug)) ||
    (tmpRead_2 > EgyMgmt_BMSDispSOCLo_CFG) || ((tmpRead_g != ((uint8_T)
    PwrLim_Gear_R)) && (tmpRead_g != ((uint8_T)PwrLim_Gear_D))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/NoEnTimMonR' */
  CtAp_PwrLim_NoEnTimMonR(rtb_LogicalOperator5_a1op, rtb_LogicalOperator6_npvf,
    &rtb_RelationalOperator_byst, &rtb_Switch1, &rtb_Switch_lb3b, &rtb_Switch6);

  /* End of Outputs for SubSystem: '<S11>/NoEnTimMonR' */

  /* SignalConversion generated from: '<S11>/NoEnTimMonR' */
  EgyMgmt_MonResEgyMgmtWarnTwo = rtb_Switch1;

  /* SignalConversion generated from: '<S11>/NoEnTimMonR' */
  EgyMgmt_ErrResEgyMgmtWarnTwo = rtb_Switch6;

  /* BusCreator: '<S11>/Bus Creator1' */
  rtb_BusCreator1.EgyMgmt_MonStatEgyMgmtWarnTwo = rtb_RelationalOperator_byst;
  rtb_BusCreator1.EgyMgmt_MonResEgyMgmtWarnTwo = EgyMgmt_MonResEgyMgmtWarnTwo;
  rtb_BusCreator1.EgyMgmt_ErrStatEgyMgmtWarnTwo = rtb_Switch_lb3b;
  rtb_BusCreator1.EgyMgmt_ErrResEgyMgmtWarnTwo = EgyMgmt_ErrResEgyMgmtWarnTwo;

  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_EgyMgmtWarnTwo' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_EgyMgmtWarn'
   *
   * Block requirements for '<S4>/EgyMgmt_EgyMgmtWarn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3808
   *  2. VCU_SW_Requirements_Specification.slreqx:3809
   *  3. VCU_SW_Requirements_Specification.slreqx:3810
   */
  /* Outputs for Atomic SubSystem: '<S9>/If1'
   *
   * Block requirements for '<S9>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3809
   *  2. VCU_SW_Requirements_Specification.slreqx:3810
   */
  /* Constant: '<S9>/Marco_Fault_one' incorporates:
   *  Constant: '<S9>/Marco_Fault_zero'
   */
  rtb_Switch_lb3b = CtAp_PwrLim_If
    (rtb_BusCreator1_c1wx.EgyMgmt_ErrResEgyMgmtWarnOne, ((uint8_T)
      PwrLim_Fault_one), ((uint8_T)PwrLim_Fault_zero));

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3808
   */
  /* Constant: '<S9>/Marco_Fault_two' */
  rtb_Switch_if2c = CtAp_PwrLim_If(rtb_BusCreator1.EgyMgmt_ErrResEgyMgmtWarnTwo,
    ((uint8_T)PwrLim_Fault_two), rtb_Switch_lb3b);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_EgyMgmtWarn' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_MCUDrvPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_MCUDrvPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:3786
   *  2. VCU_SW_Requirements_Specification.slreqx:3787
   */
  /* Switch: '<S88>/Switch' incorporates:
   *  Product: '<S12>/Divide3'
   */
  rtb_Switch_jpyc = rtb_Switch_lul2_tmp;

  /* Switch: '<S161>/Switch' incorporates:
   *  Lookup_n-D: '<S12>/EgyMgmt_MCUDrvPwrLmtTrans'
   *  Switch: '<S88>/Switch'
   */
  rtb_Switch_khwq = look1_iflf_binlca(rtb_Switch_jpyc,
    &EgyMgmt_MCUDrvPwrLmtTransX[0], &EgyMgmt_MCUDrvPwrLmtTrans[0], 9U);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Switch: '<S160>/Switch' incorporates:
   *  Constant: '<S12>/Marco_EgyMgmt_PwrCnsKwTran2'
   *  Product: '<S12>/Divide2'
   *  Product: '<S12>/Product1'
   *  Product: '<S12>/Product4'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  Sum: '<S12>/Subtract3'
   *  Sum: '<S12>/Subtract4'
   *  Sum: '<S12>/Subtract5'
   *  Sum: '<S12>/Subtract6'
   *  Sum: '<S12>/Subtract7'
   */
  rtb_Switch_gddn = (rtb_Switch_lul2_tmp * rtb_Switch_khwq) - tmpRead_e -
    tmpRead_f - tmpRead_d - (((rtb_Product1_f21o - tmpRead_1) * tmpRead_4) /
    PwrLim_PwrCnsKwTran);

  /* Switch: '<S88>/Switch' incorporates:
   *  Product: '<S12>/Product'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  Sum: '<S12>/Subtract'
   *  Sum: '<S12>/Subtract1'
   *  Sum: '<S12>/Subtract2'
   */
  rtb_Switch_jpyc = (rtb_Switch_jpyc * rtb_Switch_khwq) - tmpRead_e - tmpRead_f
    - tmpRead_d;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* MinMax: '<S12>/MinMax' */
  rtb_MinMax_kdax = fminf(rtb_Switch_jpyc, rtb_Switch_gddn);

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_MCUFbPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_MCUFbPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:3788
   *  2. VCU_SW_Requirements_Specification.slreqx:3789
   *  3. VCU_SW_Requirements_Specification.slreqx:99941
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Logic: '<S13>/LogicalOperator1'
   *  Logic: '<S13>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  tmpRead_9 = !tmpRead_9;

  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_MCUFbPwrLmt' */

  /* Logic: '<S12>/LogicalOperator9' incorporates:
   *  Constant: '<S86>/Constant'
   *  Logic: '<S12>/LogicalOperator1'
   *  RelationalOperator: '<S86>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator9_dqmh = (tmpRead_9 && (tmpRead_m == ((uint8_T)
    PwrLim_DrvReady)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/If'
   *
   * Block requirements for '<S12>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3786
   */
  /* Constant: '<S12>/Marco_MCUDftPwr'
   *
   * Block requirements for '<S12>/Marco_MCUDftPwr':
   *  1. VCU_SW_Requirements_Specification.slreqx:3787
   */
  rtb_Switch_lul2 = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator9_dqmh,
    rtb_MinMax_kdax, PwrLim_MCUDftPwr);

  /* End of Outputs for SubSystem: '<S12>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_MCUDrvPwrLmt' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_MCUFbPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_MCUFbPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:3788
   *  2. VCU_SW_Requirements_Specification.slreqx:3789
   *  3. VCU_SW_Requirements_Specification.slreqx:99941
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Abs: '<S13>/Abs1' incorporates:
   *  Abs: '<S13>/Abs2'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  tmpRead_1 = fabsf(rtb_Product1_f21o);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S161>/Switch' incorporates:
   *  Abs: '<S13>/Abs1'
   */
  rtb_Switch_khwq = tmpRead_1;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S13>/LogicalOperator9' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S90>/Constant'
   *  RelationalOperator: '<S13>/RelationalOperator'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator9_g5jr = (tmpRead_9 && (tmpRead_m == ((uint8_T)
    PwrLim_DrvReady)) && (rtb_Product1_f21o < PwrLim_MCUDftPwr) &&
    (rtb_Switch_khwq >= tmpRead_3));

  /* Switch: '<S161>/Switch' incorporates:
   *  Constant: '<S13>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S13>/Divide3'
   *  Product: '<S13>/Product3'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  rtb_Switch_khwq = (tmpRead_3 * tmpRead_4) / PwrLim_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S160>/Switch' incorporates:
   *  Lookup_n-D: '<S13>/EgyMgmt_MCUFbPwrLmtTrans'
   *  Switch: '<S161>/Switch'
   */
  rtb_Switch_gddn = look1_iflf_binlca(rtb_Switch_khwq,
    &EgyMgmt_MCUFbPwrLmtTransX[0], &EgyMgmt_MCUFbPwrLmtTrans[0], 9U);

  /* Product: '<S13>/Product1' */
  rtb_Product1_f21o = rtb_Switch_khwq * rtb_Switch_gddn;

  /* Switch: '<S161>/Switch' incorporates:
   *  Abs: '<S13>/Abs2'
   */
  rtb_Switch_khwq = tmpRead_1;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Sum: '<S13>/Add3' incorporates:
   *  Constant: '<S13>/Marco_EgyMgmt_PwrCnsKwTran1'
   *  Product: '<S13>/Divide1'
   *  Product: '<S13>/Product2'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  Sum: '<S13>/Add'
   *  Sum: '<S13>/Add1'
   *  Sum: '<S13>/Add2'
   *  Sum: '<S13>/Add4'
   */
  rtb_Add3 = rtb_Product1_f21o + tmpRead_e + tmpRead_f + tmpRead_d -
    (((rtb_Switch_khwq - tmpRead_3) * tmpRead_4) / PwrLim_PwrCnsKwTran);

  /* Sum: '<S13>/Add7' incorporates:
   *  Constant: '<S13>/Marco_EgyMgmt_PwrCnsKwTran2'
   *  Product: '<S13>/Divide2'
   *  Product: '<S13>/Product4'
   *  Product: '<S13>/Product5'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  Sum: '<S13>/Add5'
   *  Sum: '<S13>/Add6'
   */
  rtb_Add7 = (((tmpRead_3 * tmpRead_4) / PwrLim_PwrCnsKwTran) * rtb_Switch_gddn)
    + tmpRead_e + tmpRead_f + tmpRead_d;

  /* Logic: '<S13>/LogicalOperator4' incorporates:
   *  Constant: '<S91>/Constant'
   *  RelationalOperator: '<S91>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator4_cogd = (tmpRead_9 && (tmpRead_m == ((uint8_T)
    PwrLim_DrvReady)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S13>/If1'
   *
   * Block requirements for '<S13>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:99941
   */
  /* Constant: '<S13>/Marco_MCUDftPwr' */
  rtb_Switch_khwq = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator4_cogd, rtb_Add7,
    PwrLim_MCUDftPwr);

  /* End of Outputs for SubSystem: '<S13>/If1' */

  /* Outputs for Atomic SubSystem: '<S13>/If'
   *
   * Block requirements for '<S13>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3788
   *  2. VCU_SW_Requirements_Specification.slreqx:3789
   */
  rtb_Switch_jpyc = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator9_g5jr, rtb_Add3,
    rtb_Switch_khwq);

  /* End of Outputs for SubSystem: '<S13>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_MCUFbPwrLmt' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_PermtPckPTC'
   *
   * Block requirements for '<S4>/EgyMgmt_PermtPckPTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:3791
   *  2. VCU_SW_Requirements_Specification.slreqx:3792
   *  3. VCU_SW_Requirements_Specification.slreqx:3793
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCInactiveOne' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCInactiveTwo' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCInactiveFour' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCInactiveFive' */
  /* Logic: '<S14>/LogicalOperator9' incorporates:
   *  Constant: '<S132>/Constant'
   *  Constant: '<S133>/Constant'
   *  Constant: '<S134>/Constant'
   *  Constant: '<S135>/Constant'
   *  Constant: '<S136>/Constant'
   *  Constant: '<S137>/Constant'
   *  Constant: '<S138>/Constant'
   *  Constant: '<S139>/Constant'
   *  Constant: '<S140>/Constant'
   *  Constant: '<S141>/Constant'
   *  Constant: '<S142>/Constant'
   *  Constant: '<S143>/Constant'
   *  Constant: '<S144>/Constant'
   *  Constant: '<S145>/Constant'
   *  Constant: '<S146>/Constant'
   *  Constant: '<S147>/Constant'
   *  Constant: '<S148>/Constant'
   *  Constant: '<S149>/Constant'
   *  Constant: '<S150>/Constant'
   *  Constant: '<S151>/Constant'
   *  Constant: '<S152>/Constant'
   *  Constant: '<S153>/Constant'
   *  Constant: '<S154>/Constant'
   *  Constant: '<S155>/Constant'
   *  Constant: '<S156>/Constant'
   *  Constant: '<S157>/Constant'
   *  Constant: '<S92>/Constant'
   *  Logic: '<S100>/LogicalOperator1'
   *  Logic: '<S100>/LogicalOperator2'
   *  Logic: '<S100>/LogicalOperator3'
   *  Logic: '<S100>/LogicalOperator4'
   *  Logic: '<S100>/LogicalOperator5'
   *  Logic: '<S101>/LogicalOperator1'
   *  Logic: '<S101>/LogicalOperator2'
   *  Logic: '<S101>/LogicalOperator3'
   *  Logic: '<S101>/LogicalOperator9'
   *  Logic: '<S102>/LogicalOperator1'
   *  Logic: '<S102>/LogicalOperator9'
   *  Logic: '<S99>/LogicalOperator1'
   *  Logic: '<S99>/LogicalOperator11'
   *  Logic: '<S99>/LogicalOperator2'
   *  Logic: '<S99>/LogicalOperator4'
   *  RelationalOperator: '<S132>/Compare'
   *  RelationalOperator: '<S133>/Compare'
   *  RelationalOperator: '<S134>/Compare'
   *  RelationalOperator: '<S135>/Compare'
   *  RelationalOperator: '<S136>/Compare'
   *  RelationalOperator: '<S137>/Compare'
   *  RelationalOperator: '<S138>/Compare'
   *  RelationalOperator: '<S139>/Compare'
   *  RelationalOperator: '<S140>/Compare'
   *  RelationalOperator: '<S141>/Compare'
   *  RelationalOperator: '<S142>/Compare'
   *  RelationalOperator: '<S143>/Compare'
   *  RelationalOperator: '<S144>/Compare'
   *  RelationalOperator: '<S145>/Compare'
   *  RelationalOperator: '<S146>/Compare'
   *  RelationalOperator: '<S147>/Compare'
   *  RelationalOperator: '<S148>/Compare'
   *  RelationalOperator: '<S149>/Compare'
   *  RelationalOperator: '<S150>/Compare'
   *  RelationalOperator: '<S151>/Compare'
   *  RelationalOperator: '<S152>/Compare'
   *  RelationalOperator: '<S153>/Compare'
   *  RelationalOperator: '<S154>/Compare'
   *  RelationalOperator: '<S155>/Compare'
   *  RelationalOperator: '<S156>/Compare'
   *  RelationalOperator: '<S157>/Compare'
   *  RelationalOperator: '<S92>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy24'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_LogicalOperator9_o5a1 = ((tmpRead == ((uint8_T)PwrLim_Init)) || (((tmpRead
    == ((uint8_T)PwrLim_Off_Plug)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Plug_Detected)) || (tmpRead == ((uint8_T)PwrLim_Charging_Complete))
    || (tmpRead == ((uint8_T)PwrLim_Charging_Fault)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Complete)) || (tmpRead == ((uint8_T)PwrLim_V2L_Fault))) &&
    (((tmpRead_2 <= EgyMgmt_BMSDispSOCLo_CFG) && (tmpRead_7 == PwrLim_Passed)) ||
     tmpRead_7)) || (((tmpRead == ((uint8_T)PwrLim_DC_Charging)) || (tmpRead ==
    ((uint8_T)PwrLim_V2L_Discharging)) || (tmpRead == ((uint8_T)
    PwrLim_DC_Preheating))) && tmpRead_7) || ((((tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqOne)) && ((tmpRead == ((uint8_T)PwrLim_AC_Plug_detected)) ||
    (tmpRead == ((uint8_T)PwrLim_DC_Plug_detected)))) || (tmpRead == ((uint8_T)
    PwrLim_AC_Preheating)) || (tmpRead == ((uint8_T)PwrLim_AC_Charging)) ||
    (tmpRead == ((uint8_T)PwrLim_Keep_Warning))) && (tmpRead_7 || (tmpRead_j ==
    PwrLim_Inactive))) || (((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqZero)) ||
    (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqTwo)) || (tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqThree)) || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqFour)))
    && ((tmpRead == ((uint8_T)PwrLim_AC_Plug_detected)) || (tmpRead == ((uint8_T)
    PwrLim_DC_Plug_detected))) && ((tmpRead_j == PwrLim_Inactive) || (tmpRead_2 <=
    EgyMgmt_BMSDispSOCLo_CFG) || tmpRead_7)));

  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCInactiveFive' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCInactiveFour' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCInactiveTwo' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCInactiveOne' */

  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCActiveOne' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCActiveTwo' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCActiveFour' */
  /* Outputs for Atomic SubSystem: '<S14>/PermtPckPTCActiveFive' */
  /* Logic: '<S14>/LogicalOperator1' incorporates:
   *  Constant: '<S103>/Constant'
   *  Constant: '<S104>/Constant'
   *  Constant: '<S105>/Constant'
   *  Constant: '<S106>/Constant'
   *  Constant: '<S107>/Constant'
   *  Constant: '<S108>/Constant'
   *  Constant: '<S109>/Constant'
   *  Constant: '<S110>/Constant'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S112>/Constant'
   *  Constant: '<S113>/Constant'
   *  Constant: '<S114>/Constant'
   *  Constant: '<S115>/Constant'
   *  Constant: '<S116>/Constant'
   *  Constant: '<S117>/Constant'
   *  Constant: '<S118>/Constant'
   *  Constant: '<S119>/Constant'
   *  Constant: '<S120>/Constant'
   *  Constant: '<S121>/Constant'
   *  Constant: '<S122>/Constant'
   *  Constant: '<S123>/Constant'
   *  Constant: '<S124>/Constant'
   *  Constant: '<S125>/Constant'
   *  Constant: '<S126>/Constant'
   *  Constant: '<S127>/Constant'
   *  Constant: '<S128>/Constant'
   *  Constant: '<S129>/Constant'
   *  Constant: '<S130>/Constant'
   *  Constant: '<S131>/Constant'
   *  Logic: '<S95>/LogicalOperator1'
   *  Logic: '<S95>/LogicalOperator11'
   *  Logic: '<S95>/LogicalOperator2'
   *  Logic: '<S95>/LogicalOperator4'
   *  Logic: '<S96>/LogicalOperator1'
   *  Logic: '<S96>/LogicalOperator2'
   *  Logic: '<S96>/LogicalOperator3'
   *  Logic: '<S96>/LogicalOperator4'
   *  Logic: '<S96>/LogicalOperator5'
   *  Logic: '<S97>/LogicalOperator1'
   *  Logic: '<S97>/LogicalOperator9'
   *  Logic: '<S98>/LogicalOperator1'
   *  Logic: '<S98>/LogicalOperator9'
   *  RelationalOperator: '<S103>/Compare'
   *  RelationalOperator: '<S104>/Compare'
   *  RelationalOperator: '<S105>/Compare'
   *  RelationalOperator: '<S106>/Compare'
   *  RelationalOperator: '<S107>/Compare'
   *  RelationalOperator: '<S108>/Compare'
   *  RelationalOperator: '<S109>/Compare'
   *  RelationalOperator: '<S110>/Compare'
   *  RelationalOperator: '<S111>/Compare'
   *  RelationalOperator: '<S112>/Compare'
   *  RelationalOperator: '<S113>/Compare'
   *  RelationalOperator: '<S114>/Compare'
   *  RelationalOperator: '<S115>/Compare'
   *  RelationalOperator: '<S116>/Compare'
   *  RelationalOperator: '<S117>/Compare'
   *  RelationalOperator: '<S118>/Compare'
   *  RelationalOperator: '<S119>/Compare'
   *  RelationalOperator: '<S120>/Compare'
   *  RelationalOperator: '<S121>/Compare'
   *  RelationalOperator: '<S122>/Compare'
   *  RelationalOperator: '<S123>/Compare'
   *  RelationalOperator: '<S124>/Compare'
   *  RelationalOperator: '<S125>/Compare'
   *  RelationalOperator: '<S126>/Compare'
   *  RelationalOperator: '<S127>/Compare'
   *  RelationalOperator: '<S128>/Compare'
   *  RelationalOperator: '<S129>/Compare'
   *  RelationalOperator: '<S130>/Compare'
   *  RelationalOperator: '<S131>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy24'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_LogicalOperator1_d4wr = ((((tmpRead == ((uint8_T)PwrLim_Off_Plug)) ||
    (tmpRead == ((uint8_T)PwrLim_V2L_Plug_Detected)) || (tmpRead == ((uint8_T)
    PwrLim_Charging_Complete)) || (tmpRead == ((uint8_T)PwrLim_Charging_Fault)) ||
    (tmpRead == ((uint8_T)PwrLim_V2L_Complete)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Fault))) && (tmpRead_2 > EgyMgmt_BMSDispSOCLo_CFG) && (tmpRead_7 ==
    PwrLim_Passed)) || (((tmpRead == ((uint8_T)PwrLim_DC_Charging)) || (tmpRead ==
    ((uint8_T)PwrLim_V2L_Discharging)) || (tmpRead == ((uint8_T)
    PwrLim_DC_Preheating))) && (tmpRead_7 == PwrLim_Passed)) || ((((tmpRead_k ==
    ((uint8_T)PwrLim_BMSChrgReqOne)) && ((tmpRead == ((uint8_T)
    PwrLim_AC_Plug_detected)) || (tmpRead == ((uint8_T)PwrLim_DC_Plug_detected))))
    || (tmpRead == ((uint8_T)PwrLim_AC_Preheating)) || (tmpRead == ((uint8_T)
    PwrLim_AC_Charging)) || (tmpRead == ((uint8_T)PwrLim_Keep_Warning))) &&
    ((tmpRead_7 == PwrLim_Passed) && (tmpRead_j == PwrLim_Active))) ||
    (((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqZero)) || (tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqTwo)) || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqThree)) ||
      (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqFour))) && ((tmpRead == ((uint8_T)
    PwrLim_AC_Plug_detected)) || (tmpRead == ((uint8_T)PwrLim_DC_Plug_detected)))
     && ((tmpRead_j == PwrLim_Active) && (tmpRead_2 > EgyMgmt_BMSDispSOCLo_CFG) &&
         (tmpRead_7 == PwrLim_Passed))));

  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCActiveFive' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCActiveFour' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCActiveTwo' */
  /* End of Outputs for SubSystem: '<S14>/PermtPckPTCActiveOne' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/If1'
   *
   * Block requirements for '<S14>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3792
   */
  /* Constant: '<S14>/Marco_Active' incorporates:
   *  Delay: '<S14>/Delay'
   *
   * Block requirements for '<S14>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3793
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_If_f4bg(rtb_LogicalOperator1_d4wr,
    PwrLim_Active, CtAp_PwrLim_ARID_DEF.Delay_DSTATE_pwl4);

  /* End of Outputs for SubSystem: '<S14>/If1' */

  /* Outputs for Atomic SubSystem: '<S14>/If'
   *
   * Block requirements for '<S14>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3791
   */
  /* Delay: '<S14>/Delay' incorporates:
   *  Constant: '<S14>/Marco_Inactive'
   *
   * Block requirements for '<S14>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3793
   */
  CtAp_PwrLim_ARID_DEF.Delay_DSTATE_pwl4 = CtAp_PwrLim_If_f4bg
    (rtb_LogicalOperator9_o5a1, PwrLim_Inactive, rtb_RelationalOperator_byst);

  /* End of Outputs for SubSystem: '<S14>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_PermtPckPTC' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd'
   *
   * Block requirements for '<S4>/EgyMgmt_TCUPwrAllwd':
   *  1. VCU_SW_Requirements_Specification.slreqx:3795
   *  2. VCU_SW_Requirements_Specification.slreqx:3797
   *  3. VCU_SW_Requirements_Specification.slreqx:3798
   *  4. VCU_SW_Requirements_Specification.slreqx:3799
   *  5. VCU_SW_Requirements_Specification.slreqx:15057
   *  6. VCU_SW_Requirements_Specification.slreqx:15058
   *  7. VCU_SW_Requirements_Specification.slreqx:3800
   *  8. VCU_SW_Requirements_Specification.slreqx:3801
   *  9. VCU_SW_Requirements_Specification.slreqx:3802
   *  10. VCU_SW_Requirements_Specification.slreqx:3796
   *  11. VCU_SW_Requirements_Specification.slreqx:132817
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S158>/Compare' incorporates:
   *  Constant: '<S158>/Constant'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_Compare_mpee = (tmpRead == ((uint8_T)PwrLim_Init));

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondOne' */
  /* RelationalOperator: '<S219>/Compare' incorporates:
   *  Constant: '<S219>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_k0ps = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S173>/ATOM_TimeCnt2' */
  /* Constant: '<S173>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S173>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_k0ps,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_kkiq);

  /* End of Outputs for SubSystem: '<S173>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S173>/LogicalOperator1' incorporates:
   *  Constant: '<S173>/EgyMgmt_EnablePackPTCWork_CFG'
   *  Constant: '<S205>/Constant'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S207>/Constant'
   *  Constant: '<S208>/Constant'
   *  Constant: '<S209>/Constant'
   *  Constant: '<S210>/Constant'
   *  Constant: '<S211>/Constant'
   *  Constant: '<S212>/Constant'
   *  Constant: '<S213>/Constant'
   *  Constant: '<S214>/Constant'
   *  Constant: '<S215>/Constant'
   *  Constant: '<S216>/Constant'
   *  Constant: '<S217>/Constant'
   *  Constant: '<S218>/Constant'
   *  Logic: '<S173>/LogicalOperator11'
   *  Logic: '<S173>/LogicalOperator2'
   *  Logic: '<S173>/LogicalOperator3'
   *  Logic: '<S173>/LogicalOperator4'
   *  Logic: '<S173>/LogicalOperator9'
   *  RelationalOperator: '<S205>/Compare'
   *  RelationalOperator: '<S206>/Compare'
   *  RelationalOperator: '<S207>/Compare'
   *  RelationalOperator: '<S208>/Compare'
   *  RelationalOperator: '<S209>/Compare'
   *  RelationalOperator: '<S210>/Compare'
   *  RelationalOperator: '<S211>/Compare'
   *  RelationalOperator: '<S212>/Compare'
   *  RelationalOperator: '<S213>/Compare'
   *  RelationalOperator: '<S214>/Compare'
   *  RelationalOperator: '<S215>/Compare'
   *  RelationalOperator: '<S216>/Compare'
   *  RelationalOperator: '<S217>/Compare'
   *  RelationalOperator: '<S218>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_LogicalOperator1_fsrq = (((((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqZero))
    || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqTwo)) || (tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqThree)) || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqFour)))
    && ((tmpRead == ((uint8_T)PwrLim_AC_Plug_detected)) || (tmpRead == ((uint8_T)
    PwrLim_DC_Plug_detected)))) || (tmpRead == ((uint8_T)PwrLim_Off_Plug)) ||
    (tmpRead == ((uint8_T)PwrLim_V2L_Plug_Detected)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Discharging)) || (tmpRead == ((uint8_T)PwrLim_Charging_Complete))
    || (tmpRead == ((uint8_T)PwrLim_Charging_Fault)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Complete)) || (tmpRead == ((uint8_T)PwrLim_V2L_Fault))) &&
    (tmpRead_a == PwrLim_Passed) && (rtb_RelationalOperator_byst &&
    EgyMgmt_EnablePackPTCWork_CFG));

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondOne' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueEight' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueOne' */
  /* Product: '<S182>/Product1' incorporates:
   *  Constant: '<S182>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S178>/Product1'
   *  Product: '<S179>/Product1'
   *  Product: '<S181>/Product1'
   *  Product: '<S185>/Product1'
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  tmpRead_3 = tmpRead_e * PwrLim_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueEight' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueTwo' */
  /* Sum: '<S182>/Subtract' incorporates:
   *  Product: '<S182>/Product1'
   *  Sum: '<S186>/Subtract'
   */
  rtb_Product1_f21o = rtb_Switch_lul2_tmp_tmp - tmpRead_3;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueTwo' */

  /* Switch: '<S160>/Switch' incorporates:
   *  Sum: '<S182>/Subtract'
   */
  rtb_Switch_gddn = rtb_Product1_f21o;

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Sum: '<S182>/Subtract1' incorporates:
   *  Product: '<S182>/Product2'
   *  SignalConversion: '<S5>/SignalCopy14'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy8'
   *  Sum: '<S179>/Subtract1'
   *  Sum: '<S185>/Subtract1'
   */
  tmpRead_5 = tmpRead_c - (tmpRead_5 * tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFive' */

  /* Switch: '<S254>/Switch' incorporates:
   *  Sum: '<S182>/Subtract1'
   */
  rtb_Switch_nbfi = tmpRead_5;

  /* MinMax: '<S182>/MinMax' */
  rtb_MinMax_abnt = fminf(rtb_Switch_nbfi, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueOne' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondTwo' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S251>/Compare' incorporates:
   *  Constant: '<S251>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_ikjg = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S177>/ATOM_TimeCnt2' */
  /* Constant: '<S177>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S177>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_ikjg,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S177>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondFour' */
  /* Logic: '<S177>/LogicalOperator7' incorporates:
   *  Constant: '<S177>/EgyMgmt_EnablePackPTCWork_CFG'
   *  Logic: '<S171>/LogicalOperator7'
   */
  tmpRead_j = !EgyMgmt_EnablePackPTCWork_CFG;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondFour' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S177>/LogicalOperator1' incorporates:
   *  Constant: '<S237>/Constant'
   *  Constant: '<S238>/Constant'
   *  Constant: '<S239>/Constant'
   *  Constant: '<S240>/Constant'
   *  Constant: '<S241>/Constant'
   *  Constant: '<S242>/Constant'
   *  Constant: '<S243>/Constant'
   *  Constant: '<S244>/Constant'
   *  Constant: '<S245>/Constant'
   *  Constant: '<S246>/Constant'
   *  Constant: '<S247>/Constant'
   *  Constant: '<S248>/Constant'
   *  Constant: '<S249>/Constant'
   *  Constant: '<S250>/Constant'
   *  Constant: '<S252>/Constant'
   *  Logic: '<S177>/LogicalOperator'
   *  Logic: '<S177>/LogicalOperator11'
   *  Logic: '<S177>/LogicalOperator3'
   *  Logic: '<S177>/LogicalOperator4'
   *  Logic: '<S177>/LogicalOperator5'
   *  Logic: '<S177>/LogicalOperator6'
   *  Logic: '<S177>/LogicalOperator7'
   *  Logic: '<S177>/LogicalOperator8'
   *  Logic: '<S177>/LogicalOperator9'
   *  RelationalOperator: '<S237>/Compare'
   *  RelationalOperator: '<S238>/Compare'
   *  RelationalOperator: '<S239>/Compare'
   *  RelationalOperator: '<S240>/Compare'
   *  RelationalOperator: '<S241>/Compare'
   *  RelationalOperator: '<S242>/Compare'
   *  RelationalOperator: '<S243>/Compare'
   *  RelationalOperator: '<S244>/Compare'
   *  RelationalOperator: '<S245>/Compare'
   *  RelationalOperator: '<S246>/Compare'
   *  RelationalOperator: '<S247>/Compare'
   *  RelationalOperator: '<S248>/Compare'
   *  RelationalOperator: '<S249>/Compare'
   *  RelationalOperator: '<S250>/Compare'
   *  RelationalOperator: '<S252>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_LogicalOperator1_e02b = (((((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqZero))
    || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqTwo)) || (tmpRead_k == ((uint8_T)
    PwrLim_BMSChrgReqThree)) || (tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqFour)))
    && ((tmpRead == ((uint8_T)PwrLim_AC_Plug_detected)) || (tmpRead == ((uint8_T)
    PwrLim_DC_Plug_detected)))) || (tmpRead == ((uint8_T)PwrLim_Off_Plug)) ||
    (tmpRead == ((uint8_T)PwrLim_V2L_Plug_Detected)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Discharging)) || (tmpRead == ((uint8_T)PwrLim_Charging_Complete))
    || (tmpRead == ((uint8_T)PwrLim_Charging_Fault)) || (tmpRead == ((uint8_T)
    PwrLim_V2L_Complete)) || (tmpRead == ((uint8_T)PwrLim_V2L_Fault))) &&
    (tmpRead_a == PwrLim_Passed) && (tmpRead_j || ((tmpRead_f !=
    PwrLim_TCUInitPwr) || (rtb_Compare_ikjg && !rtb_RelationalOperator_byst))));

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondTwo' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueEight' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFour' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueTwo' */
  /* Product: '<S186>/Product2' incorporates:
   *  Constant: '<S186>/Marco_EgyMgmt_PwrCnsKwTran1'
   *  Product: '<S178>/Product2'
   *  Product: '<S180>/Product2'
   *  Product: '<S181>/Product2'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  tmpRead_6 = tmpRead_f * PwrLim_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFour' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueEight' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S254>/Switch' incorporates:
   *  Product: '<S186>/Product2'
   *  Sum: '<S186>/Subtract1'
   */
  rtb_Switch_nbfi = rtb_Product1_f21o - tmpRead_6;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* MinMax: '<S186>/MinMax' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_MinMax = fminf(tmpRead_c, rtb_Switch_nbfi);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueTwo' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondThree' */
  /* RelationalOperator: '<S235>/Compare' incorporates:
   *  Constant: '<S235>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_n1hy = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S176>/ATOM_TimeCnt2' */
  /* Constant: '<S176>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S176>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_n1hy,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_mbvz);

  /* End of Outputs for SubSystem: '<S176>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S176>/LogicalOperator1' incorporates:
   *  Constant: '<S176>/EgyMgmt_EnablePackPTCWork_CFG'
   *  Constant: '<S232>/Constant'
   *  Constant: '<S233>/Constant'
   *  Constant: '<S234>/Constant'
   *  Logic: '<S176>/LogicalOperator2'
   *  RelationalOperator: '<S232>/Compare'
   *  RelationalOperator: '<S233>/Compare'
   *  RelationalOperator: '<S234>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator1_op13 = ((tmpRead == ((uint8_T)PwrLim_AC_Charging)) &&
    (tmpRead_a == PwrLim_Passed) && (tmpRead_2 >= EgyMgmt_BMSDispSOCEnaTCU_CFG) &&
    (rtb_RelationalOperator_byst && EgyMgmt_EnablePackPTCWork_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondThree' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFour' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueThree' */
  /* Sum: '<S185>/Subtract' incorporates:
   *  Sum: '<S180>/Subtract'
   *  Sum: '<S185>/Add'
   */
  rtb_Product1_f21o = rtb_Switch_lul2_tmp_tmp + tmpRead_b - tmpRead_3;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFour' */

  /* Switch: '<S254>/Switch' incorporates:
   *  Sum: '<S185>/Subtract'
   */
  rtb_Switch_nbfi = rtb_Product1_f21o;

  /* Switch: '<S160>/Switch' incorporates:
   *  Sum: '<S185>/Subtract1'
   */
  rtb_Switch_gddn = tmpRead_5;

  /* MinMax: '<S185>/MinMax' */
  rtb_MinMax_f5qq = fminf(rtb_Switch_gddn, rtb_Switch_nbfi);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueThree' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondFour' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S200>/Compare' incorporates:
   *  Constant: '<S200>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_cqje = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S171>/ATOM_TimeCnt2' */
  /* Constant: '<S171>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S171>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_cqje,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_cxar);

  /* End of Outputs for SubSystem: '<S171>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S171>/LogicalOperator1' incorporates:
   *  Constant: '<S197>/Constant'
   *  Constant: '<S198>/Constant'
   *  Constant: '<S199>/Constant'
   *  Constant: '<S201>/Constant'
   *  Logic: '<S171>/LogicalOperator'
   *  Logic: '<S171>/LogicalOperator2'
   *  Logic: '<S171>/LogicalOperator3'
   *  Logic: '<S171>/LogicalOperator6'
   *  RelationalOperator: '<S197>/Compare'
   *  RelationalOperator: '<S198>/Compare'
   *  RelationalOperator: '<S199>/Compare'
   *  RelationalOperator: '<S201>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator1_iymp = ((tmpRead == ((uint8_T)PwrLim_AC_Charging)) &&
    (tmpRead_2 >= EgyMgmt_BMSDispSOCEnaTCU_CFG) && (tmpRead_a == PwrLim_Passed) &&
    (tmpRead_j || ((tmpRead_f != PwrLim_TCUInitPwr) || (rtb_Compare_cqje &&
    !rtb_RelationalOperator_byst))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondFour' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFour' */
  /* Switch: '<S160>/Switch' incorporates:
   *  Sum: '<S180>/Subtract1'
   */
  rtb_Switch_gddn = rtb_Product1_f21o - tmpRead_6;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* MinMax: '<S180>/MinMax' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_MinMax_agjv = fminf(tmpRead_c, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFour' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondFive' */
  /* RelationalOperator: '<S195>/Compare' incorporates:
   *  Constant: '<S195>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_grqu = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S170>/ATOM_TimeCnt2' */
  /* Constant: '<S170>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S170>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_grqu,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_bhxx);

  /* End of Outputs for SubSystem: '<S170>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S170>/LogicalOperator1' incorporates:
   *  Constant: '<S192>/Constant'
   *  Constant: '<S193>/Constant'
   *  Constant: '<S194>/Constant'
   *  RelationalOperator: '<S192>/Compare'
   *  RelationalOperator: '<S193>/Compare'
   *  RelationalOperator: '<S194>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator1_kclv = ((tmpRead == ((uint8_T)PwrLim_AC_Charging)) &&
    (tmpRead_a == PwrLim_Passed) && (tmpRead_2 < EgyMgmt_BMSDispSOCEnaTCU_CFG) &&
    rtb_RelationalOperator_byst);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondFive' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueSix' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueFive' */
  /* Sum: '<S179>/Subtract' incorporates:
   *  Product: '<S179>/Product3'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  Sum: '<S179>/Add'
   *  Sum: '<S184>/Subtract'
   */
  rtb_Product1_f21o = tmpRead_b - (tmpRead_0 * tmpRead_4) - tmpRead_3;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueSix' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S160>/Switch' incorporates:
   *  Constant: '<S179>/Marco_PwrLim_TCUInitPwr'
   *  MinMax: '<S179>/MinMax1'
   *  Sum: '<S179>/Subtract'
   */
  rtb_Switch_gddn = rtb_Product1_f21o;
  rtb_Switch_gddn = fmaxf(rtb_Switch_gddn, PwrLim_TCUInitPwr);

  /* Switch: '<S254>/Switch' incorporates:
   *  Sum: '<S179>/Subtract1'
   */
  rtb_Switch_nbfi = tmpRead_5;

  /* MinMax: '<S179>/MinMax' */
  rtb_MinMax_c4zw = fminf(rtb_Switch_nbfi, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueFive' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondSix' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* RelationalOperator: '<S229>/Compare' incorporates:
   *  Constant: '<S229>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  rtb_Compare_cooq = (tmpRead_f == PwrLim_TCUInitPwr);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S175>/ATOM_TimeCnt2' */
  /* Constant: '<S175>/EgyMgmt_RunStep' incorporates:
   *  Constant: '<S175>/EgyMgmt_PckPTCSetTim_CFG'
   */
  rtb_RelationalOperator_byst = CtAp_PwrLim_ATOM_TimeCnt(rtb_Compare_cooq,
    ((uint16_T)PwrLim_EgyMgmt_RunStep), EgyMgmt_PckPTCSetTim_CFG,
    &CtAp_PwrLim_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_cl54);

  /* End of Outputs for SubSystem: '<S175>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S175>/LogicalOperator1' incorporates:
   *  Constant: '<S226>/Constant'
   *  Constant: '<S227>/Constant'
   *  Constant: '<S228>/Constant'
   *  Constant: '<S230>/Constant'
   *  Logic: '<S175>/LogicalOperator'
   *  Logic: '<S175>/LogicalOperator2'
   *  Logic: '<S175>/LogicalOperator3'
   *  RelationalOperator: '<S226>/Compare'
   *  RelationalOperator: '<S227>/Compare'
   *  RelationalOperator: '<S228>/Compare'
   *  RelationalOperator: '<S230>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator1_jp2m = ((tmpRead == ((uint8_T)PwrLim_AC_Charging)) &&
    (tmpRead_2 < EgyMgmt_BMSDispSOCEnaTCU_CFG) && (tmpRead_a == PwrLim_Passed) &&
    ((tmpRead_f != PwrLim_TCUInitPwr) || (rtb_Compare_cooq &&
    !rtb_RelationalOperator_byst)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondSix' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueSix' */
  /* Switch: '<S160>/Switch' incorporates:
   *  Constant: '<S184>/Marco_PwrLim_TCUInitPwr'
   *  MinMax: '<S184>/MinMax1'
   *  Sum: '<S184>/Subtract'
   */
  rtb_Switch_gddn = rtb_Product1_f21o;
  rtb_Switch_gddn = fmaxf(rtb_Switch_gddn, PwrLim_TCUInitPwr);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* MinMax: '<S184>/MinMax' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_MinMax_fe1k = fminf(tmpRead_c, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueSix' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondSeven' */
  /* Logic: '<S174>/LogicalOperator1' incorporates:
   *  Constant: '<S220>/Constant'
   *  Constant: '<S221>/Constant'
   *  Constant: '<S222>/Constant'
   *  Constant: '<S223>/Constant'
   *  Constant: '<S224>/Constant'
   *  Logic: '<S174>/LogicalOperator2'
   *  Logic: '<S174>/LogicalOperator9'
   *  RelationalOperator: '<S220>/Compare'
   *  RelationalOperator: '<S221>/Compare'
   *  RelationalOperator: '<S222>/Compare'
   *  RelationalOperator: '<S223>/Compare'
   *  RelationalOperator: '<S224>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_LogicalOperator1_cwi2 = ((((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqOne)) &&
    (tmpRead == ((uint8_T)PwrLim_AC_Plug_detected))) || (tmpRead == ((uint8_T)
    PwrLim_AC_Preheating)) || (tmpRead == ((uint8_T)PwrLim_Keep_Warning))) &&
    (tmpRead_a == PwrLim_Passed));

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondSeven' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueSeven' */
  /* Product: '<S183>/Product1' incorporates:
   *  Constant: '<S183>/EgyMgmt_BMSMaxOutPackPTCPowerValue_CFG'
   *  Constant: '<S183>/EgyMgmt_DCDCPowerLimitValue_CFG'
   *  Constant: '<S183>/EgyMgmt_TCUPwrTran_CFG'
   *  Constant: '<S183>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S183>/Product3'
   *  SignalConversion: '<S5>/SignalCopy25'
   *  Sum: '<S183>/Subtract'
   *  Sum: '<S183>/Subtract1'
   */
  rtb_Product1_bpks = ((tmpRead_l - EgyMgmt_DCDCPowerLimitValue_CFG -
                        EgyMgmt_BMSMaxOutPackPTCPowerValue_CFG) *
                       PwrLim_PwrCnsKwTran) * EgyMgmt_TCUPwrTran_CFG;

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueSeven' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondEight' */
  /* Logic: '<S169>/LogicalOperator1' incorporates:
   *  Constant: '<S187>/Constant'
   *  Constant: '<S188>/Constant'
   *  Constant: '<S189>/Constant'
   *  Constant: '<S190>/Constant'
   *  Logic: '<S169>/LogicalOperator2'
   *  Logic: '<S169>/LogicalOperator3'
   *  RelationalOperator: '<S187>/Compare'
   *  RelationalOperator: '<S188>/Compare'
   *  RelationalOperator: '<S189>/Compare'
   *  RelationalOperator: '<S190>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  rtb_LogicalOperator1_ese3 = ((((tmpRead_k == ((uint8_T)PwrLim_BMSChrgReqOne)) &&
    (tmpRead == ((uint8_T)PwrLim_DC_Plug_detected))) || (tmpRead == ((uint8_T)
    PwrLim_DC_Preheating))) && (tmpRead_a == PwrLim_Passed));

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondEight' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueEight' */
  /* Abs: '<S178>/Abs' incorporates:
   *  Abs: '<S181>/Abs'
   *  SignalConversion: '<S5>/SignalCopy27'
   */
  rtb_Product1_f21o = fabsf(tmpRead_n);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Switch: '<S160>/Switch' incorporates:
   *  Abs: '<S178>/Abs'
   *  Product: '<S178>/Product3'
   *  SignalConversion: '<S5>/SignalCopy28'
   *  Sum: '<S178>/Subtract'
   *  Sum: '<S178>/Subtract1'
   */
  rtb_Switch_gddn = rtb_Product1_f21o;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  rtb_Switch_gddn = (rtb_Switch_gddn * tmpRead_o) - tmpRead_3 - tmpRead_6;

  /* MinMax: '<S178>/MinMax' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_MinMax_mq1c = fminf(tmpRead_c, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueEight' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdCondNine' */
  /* Logic: '<S172>/LogicalOperator1' incorporates:
   *  Constant: '<S202>/Constant'
   *  Constant: '<S203>/Constant'
   *  RelationalOperator: '<S202>/Compare'
   *  RelationalOperator: '<S203>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy12'
   */
  rtb_LogicalOperator1_jc0r = ((tmpRead == ((uint8_T)PwrLim_DC_Charging)) &&
    (tmpRead_a == PwrLim_Passed));

  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdCondNine' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/TCUPwrAllwdValueNine' */
  /* Switch: '<S160>/Switch' incorporates:
   *  Abs: '<S181>/Abs'
   *  Product: '<S181>/Product3'
   *  SignalConversion: '<S5>/SignalCopy28'
   *  Sum: '<S181>/Subtract'
   *  Sum: '<S181>/Subtract1'
   *  Sum: '<S181>/Subtract2'
   */
  rtb_Switch_gddn = rtb_Product1_f21o;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  rtb_Switch_gddn = (rtb_Switch_gddn * tmpRead_o) + rtb_Switch_lul2_tmp_tmp -
    tmpRead_3 - tmpRead_6;

  /* MinMax: '<S181>/MinMax' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_MinMax_jmpl = fminf(tmpRead_c, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* End of Outputs for SubSystem: '<S15>/TCUPwrAllwdValueNine' */

  /* Outputs for Atomic SubSystem: '<S15>/If9'
   *
   * Block requirements for '<S15>/If9':
   *  1. VCU_SW_Requirements_Specification.slreqx:132817
   */
  /* Delay: '<S15>/Delay'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3802
   */
  rtb_Switch_gddn = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_jc0r,
    rtb_MinMax_jmpl, CtAp_PwrLim_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S15>/If9' */

  /* Outputs for Atomic SubSystem: '<S15>/If6'
   *
   * Block requirements for '<S15>/If6':
   *  1. VCU_SW_Requirements_Specification.slreqx:3801
   */
  rtb_Switch_nbfi = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_ese3,
    rtb_MinMax_mq1c, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/If6' */

  /* Outputs for Atomic SubSystem: '<S15>/If5'
   *
   * Block requirements for '<S15>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:3800
   */
  rtb_Switch_khwq = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_cwi2,
    rtb_Product1_bpks, rtb_Switch_nbfi);

  /* End of Outputs for SubSystem: '<S15>/If5' */

  /* Outputs for Atomic SubSystem: '<S15>/If8'
   *
   * Block requirements for '<S15>/If8':
   *  1. VCU_SW_Requirements_Specification.slreqx:15058
   */
  rtb_Switch_gddn = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_jp2m,
    rtb_MinMax_fe1k, rtb_Switch_khwq);

  /* End of Outputs for SubSystem: '<S15>/If8' */

  /* Outputs for Atomic SubSystem: '<S15>/If7'
   *
   * Block requirements for '<S15>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:15057
   */
  rtb_Switch_nbfi = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_kclv,
    rtb_MinMax_c4zw, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/If7' */

  /* Outputs for Atomic SubSystem: '<S15>/If4'
   *
   * Block requirements for '<S15>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:3799
   */
  rtb_Switch_khwq = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_iymp,
    rtb_MinMax_agjv, rtb_Switch_nbfi);

  /* End of Outputs for SubSystem: '<S15>/If4' */

  /* Outputs for Atomic SubSystem: '<S15>/If3'
   *
   * Block requirements for '<S15>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:3798
   */
  rtb_Switch_gddn = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_op13,
    rtb_MinMax_f5qq, rtb_Switch_khwq);

  /* End of Outputs for SubSystem: '<S15>/If3' */

  /* Outputs for Atomic SubSystem: '<S15>/If2'
   *
   * Block requirements for '<S15>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:3797
   */
  rtb_Switch_khwq = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_e02b, rtb_MinMax,
    rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/If2' */

  /* Outputs for Atomic SubSystem: '<S15>/If1'
   *
   * Block requirements for '<S15>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3796
   */
  rtb_Switch_gddn = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator1_fsrq,
    rtb_MinMax_abnt, rtb_Switch_khwq);

  /* End of Outputs for SubSystem: '<S15>/If1' */

  /* Outputs for Atomic SubSystem: '<S15>/If'
   *
   * Block requirements for '<S15>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:3795
   */
  /* Delay: '<S15>/Delay' incorporates:
   *  Constant: '<S15>/Marco_EgyMgmt_TCUInitPwr0'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3802
   */
  CtAp_PwrLim_ARID_DEF.Delay_DSTATE = CtAp_PwrLim_If_jnrb(rtb_Compare_mpee,
    PwrLim_TCUInitPwr, rtb_Switch_gddn);

  /* End of Outputs for SubSystem: '<S15>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_TCUPwrAllwd' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_V2LDisChgPwrLmt'
   *
   * Block requirements for '<S4>/EgyMgmt_V2LDisChgPwrLmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:15070
   *  2. VCU_SW_Requirements_Specification.slreqx:15071
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Input' */
  /* Logic: '<S16>/LogicalOperator2' incorporates:
   *  Constant: '<S253>/Constant'
   *  Logic: '<S16>/LogicalOperator1'
   *  RelationalOperator: '<S253>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy22'
   */
  rtb_LogicalOperator2 = ((tmpRead == ((uint8_T)PwrLim_V2L_Discharging)) &&
    !tmpRead_i);

  /* Switch: '<S254>/Switch' incorporates:
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  Sum: '<S16>/Subtract'
   *  Sum: '<S16>/Subtract1'
   *  Sum: '<S16>/Subtract2'
   */
  rtb_Switch_nbfi = rtb_Switch_lul2_tmp - tmpRead_e - tmpRead_f - tmpRead_d;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Input' */

  /* MinMax: '<S16>/MinMax1' incorporates:
   *  Constant: '<S16>/EgyMgmt_VCUDisChgPwrLmtDft_CFG1'
   */
  rtb_MinMax1 = fminf(rtb_Switch_nbfi, EgyMgmt_VCUDisChgPwrLmtDft_CFG);

  /* Outputs for Atomic SubSystem: '<S16>/If'
   *
   * Block requirements for '<S16>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:15070
   *  2. VCU_SW_Requirements_Specification.slreqx:15071
   */
  /* Constant: '<S16>/EgyMgmt_VCUDisChgPwrLmtDft_CFG' */
  rtb_Switch_nbfi = CtAp_PwrLim_If_jnrb(rtb_LogicalOperator2, rtb_MinMax1,
    EgyMgmt_VCUDisChgPwrLmtDft_CFG);

  /* End of Outputs for SubSystem: '<S16>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_V2LDisChgPwrLmt' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PwrLim_Output' */
  /* Outport: '<Root>/RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum
    (rtb_Switch_pq1s);

  /* Outport: '<Root>/RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw' incorporates:
   *  Delay: '<S8>/Delay'
   *  SignalConversion: '<S6>/SignalCopy1'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3784
   */
  (void)Rte_Write_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw
    (CtAp_PwrLim_ARID_DEF.Delay_DSTATE_jrzd);

  /* Outport: '<Root>/RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy2'
   */
  (void)Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum
    (rtb_Switch_if2c);

  /* Outport: '<Root>/RTE_P_EgyMgmt_EgyMgmtWarnOne_Bus_tec_EgyMgmt_EgyMgmtWarnOne_Bus' incorporates:
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  CtAp_PwrLim_ARID_DEF.RTE_P_EgyMgmt_EgyMgmtWarnOne_Bu = rtb_BusCreator1_c1wx;

  /* Outport: '<Root>/RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bus_tec_EgyMgmt_EgyMgmtWarnTwo_Bus' incorporates:
   *  SignalConversion: '<S6>/SignalCopy4'
   */
  CtAp_PwrLim_ARID_DEF.RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bu = rtb_BusCreator1;

  /* Outport: '<Root>/RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy5'
   */
  (void)Rte_Write_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw
    (rtb_Switch_lul2);

  /* Outport: '<Root>/RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy6'
   */
  (void)Rte_Write_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw
    (rtb_Switch_jpyc);

  /* Outport: '<Root>/RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg' incorporates:
   *  Delay: '<S14>/Delay'
   *  SignalConversion: '<S6>/SignalCopy7'
   *
   * Block requirements for '<S14>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3793
   */
  (void)Rte_Write_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg
    (CtAp_PwrLim_ARID_DEF.Delay_DSTATE_pwl4);

  /* Outport: '<Root>/RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W' incorporates:
   *  Delay: '<S15>/Delay'
   *  SignalConversion: '<S6>/SignalCopy8'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:3802
   */
  (void)Rte_Write_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W
    (CtAp_PwrLim_ARID_DEF.Delay_DSTATE);

  /* Outport: '<Root>/RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo' incorporates:
   *  SignalConversion: '<S6>/SignalCopy9'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo
    (rtb_Switch_nbfi);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PwrLim_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_PwrLim_Cyclic_100ms_sys' */
  (void)
    Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarnOne_Bus_tec_EgyMgmt_EgyMgmtWarnOne_Bus
    (&CtAp_PwrLim_ARID_DEF.RTE_P_EgyMgmt_EgyMgmtWarnOne_Bu);
  (void)
    Rte_Write_RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bus_tec_EgyMgmt_EgyMgmtWarnTwo_Bus
    (&CtAp_PwrLim_ARID_DEF.RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bu);
}

#define CtAp_PwrLim_STOP_SEC_CODE
#include "CtAp_PwrLim_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_PwrLim_START_SEC_VAR_CONST_8
#include "CtAp_PwrLim_MemMap.h"

void R_PwrLim_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  EgyMgmt_MonResEgyMgmtWarnTwo = ((uint8_T)0U);
  EgyMgmt_MonResEgyMgmtWarnOne = ((uint8_T)0U);
  EgyMgmt_ErrResEgyMgmtWarnTwo = false;
  EgyMgmt_ErrResEgyMgmtWarnOne = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_PwrLim_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_PwrLim_T));
}

#define CtAp_PwrLim_STOP_SEC_VAR_CONST_8
#include "CtAp_PwrLim_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
