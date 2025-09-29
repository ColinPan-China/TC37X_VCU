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
 *  Filename:           CtAp_LvBattMgmt.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 *******************************************************************************/
#include "CtAp_LvBattMgmt.h"
#include "rtwtypes.h"
#include "CtAp_LvBattMgmt_private.h"
#include "CtAp_LvBattMgmt_Cal.h"
#include "CtAp_LvBattMgmt_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_LvBattMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"

ARID_DEF_CtAp_LvBattMgmt_T CtAp_LvBattMgmt_ARID_DEF;

#define CtAp_LvBattMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S12>/ATOM_U16ErrorHandle13'
 *    '<S13>/ATOM_U16ErrorHandle13'
 *    '<S14>/ATOM_U16ErrorHandle13'
 *    '<S15>/ATOM_U16ErrorHandle13'
 *    '<S16>/ATOM_U16ErrorHandle13'
 *    '<S17>/ATOM_U16ErrorHandle13'
 *    '<S18>/ATOM_U16ErrorHandle13'
 *    '<S20>/ATOM_U16ErrorHandle13'
 *    '<S21>/ATOM_U16ErrorHandle14'
 */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

void CtAp_LvBattMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_LvBattMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S22>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S22>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant2'
     *  Constant: '<S26>/Constant4'
     *  Switch: '<S26>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S26>/Switch' incorporates:
       *  Constant: '<S26>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S26>/Constant3'
     *  RelationalOperator: '<S26>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S28>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S28>/Sum' incorporates:
       *  UnitDelay: '<S28>/UnitDelay'
       */
      CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S28>/MinMax' */
      if (u0 <= CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S28>/Sum' */
        CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S28>/MinMax' */
    } else {
      /* Sum: '<S28>/Sum' incorporates:
       *  Constant: '<S26>/Constant23'
       *  UnitDelay: '<S28>/UnitDelay'
       */
      CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S28>/Switch1' */

    /* RelationalOperator: '<S26>/Equal2' incorporates:
     *  Constant: '<S26>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S27>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S27>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S27>/Sum' incorporates:
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1 = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1);

      /* MinMax: '<S27>/MinMax' */
      if (u0 <= CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1) {
        /* Sum: '<S27>/Sum' */
        CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1 = u0;
      }

      /* End of MinMax: '<S27>/MinMax' */
    } else {
      /* Sum: '<S27>/Sum' incorporates:
       *  Constant: '<S26>/Constant37'
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1 = ((uint16_T)0U);
    }

    /* End of Switch: '<S27>/Switch1' */

    /* Switch: '<S26>/Switch8' incorporates:
     *  Constant: '<S26>/Constant6'
     *  Constant: '<S26>/DEBOUNCING'
     *  RelationalOperator: '<S26>/Equal6'
     *  RelationalOperator: '<S27>/B_MiHold'
     *  RelationalOperator: '<S28>/B_MiHold'
     *  Switch: '<S26>/Switch2'
     *  Switch: '<S26>/Switch3'
     *  Switch: '<S26>/Switch4'
     *  UnitDelay: '<S27>/UnitDelay'
     *  UnitDelay: '<S28>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE_nwy1 >
               rtu_MatureTime) {
      /* Switch: '<S26>/Switch2' incorporates:
       *  Constant: '<S26>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S26>/Switch3' incorporates:
       *  Constant: '<S26>/DEBOUNCING_F'
       *  Switch: '<S26>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_LvBattMgmt__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Constant: '<S26>/PASSED'
       *  Switch: '<S26>/Switch2'
       *  Switch: '<S26>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S26>/Switch3' incorporates:
       *  Constant: '<S26>/DEBOUNCING_P'
       *  Switch: '<S26>/Switch2'
       *  Switch: '<S26>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S26>/Switch8' */

    /* Switch: '<S26>/Switch6' incorporates:
     *  Constant: '<S26>/Constant30'
     *  Constant: '<S26>/Constant31'
     *  Constant: '<S26>/Constant32'
     *  Delay: '<S26>/Delay1'
     *  RelationalOperator: '<S26>/Equal3'
     *  RelationalOperator: '<S26>/Equal4'
     *  Switch: '<S26>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S26>/Switch7' incorporates:
       *  Constant: '<S26>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_LvBattMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S26>/Switch6' */

    /* Update for Delay: '<S26>/Delay1' */
    CtAp_LvBattMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S22>/ErrorHandleSysU16' */
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S12>/ActiveTimCnt'
 *    '<S13>/ActiveTimCnt'
 *    '<S14>/ActiveTimCnt'
 *    '<S15>/ActiveTimCnt'
 *    '<S16>/ActiveTimCnt'
 *    '<S17>/ActiveTimCnt'
 *    '<S18>/ActiveTimCnt'
 *    '<S19>/ActiveTimCnt'
 *    '<S20>/ActiveTimCnt'
 *    '<S21>/ActiveTimCnt'
 *    ...
 */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

boolean_T CtAp_LvBattMgmt_ActiveTimCnt(uint16_T rtu_RunStep_C, uint16_T
  rtu_MaxTime_C, ARID_DEF_ActiveTimCnt_CtAp_Lv_T *CtAp_LvBattMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S23>/Add' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion'
   *  UnitDelay: '<S23>/Delay'
   */
  CtAp_LvBattMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
    rtu_RunStep_C + (uint32_T)CtAp_LvBattMgmt__ARID_DEF_arg->Delay_DSTATE);

  /* Sum: '<S23>/Add1' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion'
   *  DataTypeConversion: '<S23>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* MinMax: '<S23>/Min' incorporates:
   *  UnitDelay: '<S23>/Delay'
   */
  if (rtb_Add1 <= CtAp_LvBattMgmt__ARID_DEF_arg->Delay_DSTATE) {
    CtAp_LvBattMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
  }

  /* End of MinMax: '<S23>/Min' */

  /* RelationalOperator: '<S23>/Relational Operator' incorporates:
   *  UnitDelay: '<S23>/Delay'
   */
  return CtAp_LvBattMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/* Output and update for atomic system: '<S19>/NoTime' */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

void CtAp_LvBattMgmt_NoTime(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_NoTime_CtAp_LvBattMg_T *CtAp_LvBattMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S74>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S74>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S76>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S76>/Constant2'
     *  Constant: '<S76>/Constant4'
     *  Switch: '<S76>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S76>/Switch' incorporates:
       *  Constant: '<S76>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Switch: '<S76>/Switch8' incorporates:
     *  Constant: '<S76>/Constant5'
     *  Constant: '<S76>/Constant6'
     *  Constant: '<S76>/DEBOUNCING'
     *  Constant: '<S76>/DEBOUNCING_P'
     *  RelationalOperator: '<S76>/Equal2'
     *  RelationalOperator: '<S76>/Equal6'
     *  Switch: '<S76>/Switch3'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (*rty_MonRes == ((uint8_T)1U)) {
      /* Switch: '<S76>/Switch3' incorporates:
       *  Constant: '<S76>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S76>/Switch8' */

    /* Switch: '<S76>/Switch6' incorporates:
     *  Constant: '<S76>/Constant30'
     *  Constant: '<S76>/Constant31'
     *  Constant: '<S76>/Constant32'
     *  Delay: '<S76>/Delay1'
     *  RelationalOperator: '<S76>/Equal3'
     *  RelationalOperator: '<S76>/Equal4'
     *  Switch: '<S76>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S76>/Switch7' incorporates:
       *  Constant: '<S76>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_LvBattMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S76>/Switch6' */

    /* Update for Delay: '<S76>/Delay1' */
    CtAp_LvBattMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S74>/ErrorHandleSysU16' */
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/If'
 *    '<S9>/If'
 *    '<S9>/If1'
 *    '<S10>/If'
 *    '<S10>/If1'
 *    '<S10>/If2'
 */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

boolean_T CtAp_LvBattMgmt_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S91>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S91>/Switch' */
  return rty_Out1_0;
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S10>/If3'
 *    '<S10>/If4'
 *    '<S10>/If5'
 *    '<S11>/If3'
 *    '<S11>/If5'
 *    '<S11>/If6'
 */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

real32_T CtAp_LvBattMgmt_If3(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S106>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S106>/Switch' */
  return rty_Out1_0;
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/If'
 *    '<S11>/If1'
 *    '<S11>/If2'
 *    '<S11>/If4'
 */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

uint8_T CtAp_LvBattMgmt_If_bsvd(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S120>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S120>/Switch' */
  return rty_Out1_0;
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

void R_LvBattMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  real32_T rtb_ComM_BSBattSOC_pct;
  real32_T rtb_Delay4;
  real32_T rtb_Delay4_fenp;
  real32_T rtb_Delay3;
  real32_T rtb_Switch_eige;
  uint16_T rtb_LvMgmt_RunStep;
  uint16_T rtb_LvMgmt_RunStep_o4ga;
  uint16_T rtb_LvMgmt_RunStep_gq3v;
  uint16_T rtb_LvMgmt_RunStep1;
  uint16_T rtb_LvMgmt_RunStep_pqxp;
  uint16_T rtb_LvMgmt_RunStep1_jaj4;
  uint16_T rtb_LvMgmt_RunStep_pe5n;
  uint16_T rtb_LvMgmt_RunStep1_op4j;
  uint16_T rtb_LvMgmt_RunStep_jmjh;
  uint16_T rtb_LvMgmt_RunStep1_dbob;
  uint16_T rtb_LvMgmt_RunStep_aopc;
  uint16_T rtb_LvMgmt_RunStep1_cvoe;
  uint16_T rtb_LvMgmt_RunStep_kem0;
  uint16_T rtb_LvMgmt_RunStep1_jagj;
  uint16_T rtb_LvMgmt_RunStep_jkpb;
  uint16_T rtb_LvMgmt_RunStep1_j3ri;
  uint16_T rtb_LvMgmt_RunStep_haat;
  uint16_T rtb_LvMgmt_RunStep_kkde;
  uint16_T rtb_LvMgmt_RunStep1_khuv;
  uint16_T rtb_LvMgmt_RunStep_chsn;
  uint16_T rtb_LvMgmt_RunStep1_cfjz;
  uint8_T rtb_Switch_ch1j;
  uint8_T rtb_Switch_cufg;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_RelationalOperator1;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator8_ix2q;
  boolean_T rtb_RelationalOperator1_kqbx;
  boolean_T rtb_RelationalOperator_dxue;
  boolean_T rtb_LogicalOperator7_puas;
  boolean_T rtb_LogicalOperator1_cdmx;
  boolean_T rtb_LogicalOperator_mxcr;
  boolean_T rtb_LogicalOperator1_mps1;
  boolean_T rtb_LogicalOperator_jax1;
  boolean_T rtb_LogicalOperator_nmxi;
  boolean_T rtb_Switch_e0ya;
  boolean_T rtb_LogicalOperator2_iavj;
  boolean_T rtb_Compare_mhjv;
  boolean_T rtb_Compare_gnx3;
  boolean_T rtb_LogicalOperator2_fyj0;
  boolean_T rtb_Compare_jmdi;
  boolean_T rtb_Compare_d0hb;
  boolean_T rtb_LogicalOperator2_aoon;
  boolean_T rtb_Compare_e5hy;
  boolean_T rtb_Compare_mbym;
  boolean_T rtb_LogicalOperator2_dy45;
  boolean_T rtb_Compare_inbh;
  boolean_T rtb_Compare_f2od;
  boolean_T rtb_LogicalOperator2_mbrv;
  boolean_T rtb_Compare_il3p;
  boolean_T rtb_Compare_cun1;
  boolean_T rtb_LogicalOperator1_cllu;
  boolean_T rtb_Compare_nfku;
  boolean_T rtb_Compare_aky1;
  boolean_T rtb_LogicalOperator3_dwjj;
  boolean_T rtb_Compare_pymm;
  boolean_T rtb_Compare_k50v;
  boolean_T rtb_LogicalOperator2_idd4;
  boolean_T rtb_LogicalOperator1_m4vr;
  boolean_T rtb_LogicalOperator4_p50h;
  boolean_T rtb_Compare_b23d;
  boolean_T rtb_Compare_pmhe;
  boolean_T rtb_LogicalOperator5_jd30;
  boolean_T rtb_Compare_kgrk;
  boolean_T rtb_Compare_ehiy;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_imcn;
  boolean_T rtb_RelationalOperator_cekp;
  boolean_T rtb_DataTypeConversion_pobq;
  boolean_T rtb_DataTypeConversion_nars;
  boolean_T rtb_DataTypeConversion_hjpa;
  boolean_T rtb_DataTypeConversion_adai;
  boolean_T rtb_DataTypeConversion_lmdr;
  boolean_T rtb_Switch_p2o1;
  boolean_T rtb_DataTypeConversion_odhv;
  boolean_T rtb_DataTypeConversion_pjmu;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_8;
  real32_T tmpRead_9;
  real32_T tmpRead_a;
  uint8_T tmpRead_2;
  uint8_T tmpRead_5;
  boolean_T tmpRead_1;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_6;
  boolean_T tmpRead_7;
  boolean_T tmpRead_b;

  /* Inport: '<Root>/RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNe' */
  (void)Rte_Read_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo' */
  (void)Rte_Read_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo' */
  (void)Rte_Read_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo' */
  (void)Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated' */
  (void)Rte_Read_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo' */
  (void)Rte_Read_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo' */
  (void)Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo' */
  (void)Rte_Read_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V' */
  (void)Rte_Read_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V(&tmpRead);

  /* SignalConversion: '<S5>/SignalCopy1' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct'
   */
  (void)Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(&rtb_ComM_BSBattSOC_pct);

  /* Outputs for Atomic SubSystem: '<Root>/R_LvBattMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattUDcNorm'
   *
   * Block requirements for '<S4>/LvMgmt_BSBattUDcNorm':
   *  1. VCU_SW_Requirements_Specification.slreqx:144
   *  2. VCU_SW_Requirements_Specification.slreqx:145
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S8>/LvMgmt_BSBattUDcHi_CFG'
   *  Constant: '<S8>/LvMgmt_BSBattUDcLo_CFG'
   *  RelationalOperator: '<S8>/RelationalOperator'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator_nmxi = ((LvMgmt_BSBattUDcHi_CFG >= tmpRead) && (tmpRead >=
    LvMgmt_BSBattUDcLo_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:144
   *  2. VCU_SW_Requirements_Specification.slreqx:145
   */
  /* Constant: '<S8>/Marco_Active' incorporates:
   *  Constant: '<S8>/Marco_Inactive'
   */
  rtb_Switch_e0ya = CtAp_LvBattMgmt_If(rtb_LogicalOperator_nmxi,
    LvBattMgmt_Active, LvBattMgmt_Inactive);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattUDcNorm' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Constant: '<S12>/LvMgmt_RunStep' */
  rtb_LvMgmt_RunStep_gq3v = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S12>/ActiveTimCnt' */
  /* Constant: '<S12>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_lmdr = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_gq3v, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_guug);

  /* End of Outputs for SubSystem: '<S12>/ActiveTimCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator6' incorporates:
   *  Logic: '<S13>/LogicalOperator6'
   *  Logic: '<S14>/LogicalOperator6'
   *  Logic: '<S15>/LogicalOperator6'
   *  Logic: '<S16>/LogicalOperator6'
   *  Logic: '<S17>/LogicalOperator7'
   *  Logic: '<S18>/LogicalOperator8'
   *  Logic: '<S19>/LogicalOperator6'
   *  Logic: '<S20>/LogicalOperator9'
   *  Logic: '<S21>/LogicalOperator10'
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  tmpRead_6 = !tmpRead_6;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Logic: '<S12>/LogicalOperator2' incorporates:
   *  Logic: '<S12>/LogicalOperator6'
   *
   * Block requirements for '<S12>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:69962
   */
  rtb_LogicalOperator2_iavj = (rtb_DataTypeConversion_lmdr && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_Compare_mhjv = (tmpRead_9 > LvMgmt_BSIBattHi_CFG);

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_Compare_gnx3 = (tmpRead_9 <= LvMgmt_BSIBattHi_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S12>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1 = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S12>/LvMgmt_BSBattCHGIDcDTCSetTim_CFG' incorporates:
   *  Constant: '<S12>/LvMgmt_BSBattCHGIDcDTCResetTim_CFG'
   *
   * Block requirements for '<S12>/LvMgmt_BSBattCHGIDcDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S12>/LvMgmt_BSBattCHGIDcDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator2_iavj, rtb_Compare_mhjv,
    rtb_Compare_gnx3, LvMgmt_BSBattCHGIDcDTCSetTim_CFG,
    LvMgmt_BSBattCHGIDcDTCResetTim_CFG, rtb_LvMgmt_RunStep1,
    &rtb_DataTypeConversion_imcn, &CtAp_LvBattMgmt_ARID_DEF.Switch1_km3m,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_kq0v,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_be5x,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_ldqo);

  /* End of Outputs for SubSystem: '<S12>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S13>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_pqxp = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S13>/ActiveTimCnt' */
  /* Constant: '<S13>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_adai = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_pqxp, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_jwzv);

  /* End of Outputs for SubSystem: '<S13>/ActiveTimCnt' */

  /* Logic: '<S13>/LogicalOperator2'
   *
   * Block requirements for '<S13>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:178
   */
  rtb_LogicalOperator2_fyj0 = (rtb_DataTypeConversion_adai && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_Compare_jmdi = (tmpRead_9 < LvMgmt_BSIBattLo_CFG);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  rtb_Compare_d0hb = (tmpRead_9 >= LvMgmt_BSIBattLo_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S13>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_jaj4 = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S13>/LvMgmt_BSBattDSGIDcDTCSetTim_CFG' incorporates:
   *  Constant: '<S13>/LvMgmt_BSBattDSGIDcDTCResetTim_CFG'
   *
   * Block requirements for '<S13>/LvMgmt_BSBattDSGIDcDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S13>/LvMgmt_BSBattDSGIDcDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator2_fyj0, rtb_Compare_jmdi,
    rtb_Compare_d0hb, LvMgmt_BSBattDSGIDcDTCSetTim_CFG,
    LvMgmt_BSBattDSGIDcDTCResetTim_CFG, rtb_LvMgmt_RunStep1_jaj4,
    &rtb_DataTypeConversion_lmdr, &CtAp_LvBattMgmt_ARID_DEF.Switch1_cjak,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_l4dy,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_kncm,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_dhmr);

  /* End of Outputs for SubSystem: '<S13>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S14>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_pe5n = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S14>/ActiveTimCnt' */
  /* Constant: '<S14>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_hjpa = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_pe5n, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_ppxr);

  /* End of Outputs for SubSystem: '<S14>/ActiveTimCnt' */

  /* Logic: '<S14>/LogicalOperator2'
   *
   * Block requirements for '<S14>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:70001
   */
  rtb_LogicalOperator2_aoon = (rtb_DataTypeConversion_hjpa && rtb_Switch_e0ya &&
    tmpRead_6);

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S38>/Constant'
   */
  rtb_Compare_e5hy = (rtb_ComM_BSBattSOC_pct < LvMgmt_BSBattSOCLo_CFG);

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_Compare_mbym = (rtb_ComM_BSBattSOC_pct >= LvMgmt_BSBattSOCLo_CFG);

  /* Constant: '<S14>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_op4j = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S14>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S14>/LvMgmt_BSBattSOCLoDTCSetTim_CFG' incorporates:
   *  Constant: '<S14>/LvMgmt_BSBattSOCLoDTCResetTim_CFG'
   *
   * Block requirements for '<S14>/LvMgmt_BSBattSOCLoDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S14>/LvMgmt_BSBattSOCLoDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator2_aoon, rtb_Compare_e5hy,
    rtb_Compare_mbym, LvMgmt_BSBattSOCLoDTCSetTim_CFG,
    LvMgmt_BSBattSOCLoDTCResetTim_CFG, rtb_LvMgmt_RunStep1_op4j,
    &rtb_DataTypeConversion_adai, &CtAp_LvBattMgmt_ARID_DEF.Switch1_lxve,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_aghw,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_ba3k,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_llw0);

  /* End of Outputs for SubSystem: '<S14>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S15>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_jmjh = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S15>/ActiveTimCnt' */
  /* Constant: '<S15>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_pjmu = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_jmjh, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_merl);

  /* End of Outputs for SubSystem: '<S15>/ActiveTimCnt' */

  /* Logic: '<S15>/LogicalOperator2'
   *
   * Block requirements for '<S15>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:69975
   */
  rtb_LogicalOperator2_dy45 = (rtb_DataTypeConversion_pjmu && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_inbh = (tmpRead_a > LvMgmt_BSTBattHi_CFG);

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_f2od = (tmpRead_a <= LvMgmt_BSTBattHi_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S15>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_dbob = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S15>/LvMgmt_BSBattTempHiDTCSetTim_CFG' incorporates:
   *  Constant: '<S15>/LvMgmt_BSBattTempHiDTCResetTim_CFG'
   *
   * Block requirements for '<S15>/LvMgmt_BSBattTempHiDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S15>/LvMgmt_BSBattTempHiDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator2_dy45, rtb_Compare_inbh,
    rtb_Compare_f2od, LvMgmt_BSBattTempHiDTCSetTim_CFG,
    LvMgmt_BSBattTempHiDTCResetTim_CFG, rtb_LvMgmt_RunStep1_dbob,
    &rtb_DataTypeConversion_hjpa, &CtAp_LvBattMgmt_ARID_DEF.Switch1_oxxi,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_ikcp,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_hide,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_nz4o);

  /* End of Outputs for SubSystem: '<S15>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S16>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_aopc = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S16>/ActiveTimCnt' */
  /* Constant: '<S16>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_pjmu = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_aopc, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_g2ml);

  /* End of Outputs for SubSystem: '<S16>/ActiveTimCnt' */

  /* Logic: '<S16>/LogicalOperator2'
   *
   * Block requirements for '<S16>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:69988
   */
  rtb_LogicalOperator2_mbrv = (rtb_DataTypeConversion_pjmu && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_il3p = (tmpRead_a < LvMgmt_BSTBattLo_CFG);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_cun1 = (tmpRead_a >= LvMgmt_BSTBattLo_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S16>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_cvoe = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S16>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S16>/LvMgmt_BSBattTempLoDTCSetTim_CFG' incorporates:
   *  Constant: '<S16>/LvMgmt_BSBattTempLoDTCResetTim_CFG'
   *
   * Block requirements for '<S16>/LvMgmt_BSBattTempLoDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S16>/LvMgmt_BSBattTempLoDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator2_mbrv, rtb_Compare_il3p,
    rtb_Compare_cun1, LvMgmt_BSBattTempLoDTCSetTim_CFG,
    LvMgmt_BSBattTempLoDTCResetTim_CFG, rtb_LvMgmt_RunStep1_cvoe,
    &rtb_DataTypeConversion_pjmu, &CtAp_LvBattMgmt_ARID_DEF.Switch1_kj2h,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_aolb,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_gemz,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_g1sm);

  /* End of Outputs for SubSystem: '<S16>/ATOM_U16ErrorHandle13' */

  /* Switch: '<S121>/Switch' incorporates:
   *  DataTypeConversion: '<S16>/DataTypeConversion'
   */
  rtb_Switch_cufg = rtb_DataTypeConversion_pjmu ? ((uint8_T)1) : ((uint8_T)0);

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus' incorporates:
   *  BusCreator: '<S16>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempLoDTC_Bu.LvMgmt_MonStatBSBattTempLoDTC
    = rtb_Switch_cufg;

  /* Constant: '<S17>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_kem0 = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S17>/ActiveTimCnt' */
  /* Constant: '<S17>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_nars = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_kem0, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_cv5h);

  /* End of Outputs for SubSystem: '<S17>/ActiveTimCnt' */

  /* Logic: '<S17>/LogicalOperator1'
   *
   * Block requirements for '<S17>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:152
   */
  rtb_LogicalOperator1_cllu = (rtb_DataTypeConversion_nars && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  rtb_Compare_nfku = (tmpRead_8 > LvMgmt_BSUBattHi_CFG);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  rtb_Compare_aky1 = (tmpRead_8 <= LvMgmt_BSUBattHi_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S17>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_jagj = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S17>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S17>/LvMgmt_BSBattUDcHiDTCSetTim_CFG' incorporates:
   *  Constant: '<S17>/LvMgmt_BSBattUDcHiDTCResetTim_CFG'
   *
   * Block requirements for '<S17>/LvMgmt_BSBattUDcHiDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S17>/LvMgmt_BSBattUDcHiDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator1_cllu, rtb_Compare_nfku,
    rtb_Compare_aky1, LvMgmt_BSBattUDcHiDTCSetTim_CFG,
    LvMgmt_BSBattUDcHiDTCResetTim_CFG, rtb_LvMgmt_RunStep1_jagj,
    &rtb_DataTypeConversion_pjmu, &CtAp_LvBattMgmt_ARID_DEF.Switch1_lido,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_ahy1,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_lql5,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_fqdq);

  /* End of Outputs for SubSystem: '<S17>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S18>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_jkpb = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S18>/ActiveTimCnt' */
  /* Constant: '<S18>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_odhv = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_jkpb, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_bhxx);

  /* End of Outputs for SubSystem: '<S18>/ActiveTimCnt' */

  /* Logic: '<S18>/LogicalOperator3'
   *
   * Block requirements for '<S18>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:165
   */
  rtb_LogicalOperator3_dwjj = (rtb_DataTypeConversion_odhv && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  rtb_Compare_pymm = (tmpRead_8 < LvMgmt_BSUBattLo_CFG);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  rtb_Compare_k50v = (tmpRead_8 >= LvMgmt_BSUBattLo_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S18>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_j3ri = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S18>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S18>/LvMgmt_BSBattUDcLoDTCSetTim_CFG' incorporates:
   *  Constant: '<S18>/LvMgmt_BSBattUDcLoDTCResetTim_CFG'
   *
   * Block requirements for '<S18>/LvMgmt_BSBattUDcLoDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S18>/LvMgmt_BSBattUDcLoDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator3_dwjj, rtb_Compare_pymm,
    rtb_Compare_k50v, LvMgmt_BSBattUDcLoDTCSetTim_CFG,
    LvMgmt_BSBattUDcLoDTCResetTim_CFG, rtb_LvMgmt_RunStep1_j3ri,
    &rtb_DataTypeConversion_nars, &CtAp_LvBattMgmt_ARID_DEF.Switch1_ifsh,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_gpiu,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_l5x0,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_pbm3);

  /* End of Outputs for SubSystem: '<S18>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S19>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_haat = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S19>/ActiveTimCnt' */
  /* Constant: '<S19>/LvMgmt_BSBattDTCEnaSetTim' */
  rtb_DataTypeConversion_odhv = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_haat, ((uint16_T)LvMgmt_BSBattDTCEnaSetTim),
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_cxar);

  /* End of Outputs for SubSystem: '<S19>/ActiveTimCnt' */

  /* Logic: '<S19>/LogicalOperator2'
   *
   * Block requirements for '<S19>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:70014
   */
  rtb_LogicalOperator2_idd4 = (rtb_DataTypeConversion_odhv && rtb_Switch_e0ya &&
    tmpRead_6);

  /* Outputs for Enabled SubSystem: '<S19>/LvMgmt_BSRespErrDTCCnt' incorporates:
   *  EnablePort: '<S73>/Enable'
   *
   * Block requirements for '<S19>/LvMgmt_BSRespErrDTCCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:70012
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  SignalConversion: '<S5>/SignalCopy18'
   */
  if (tmpRead_b == LvBattMgmt_Active) {
    if (!CtAp_LvBattMgmt_ARID_DEF.LvMgmt_BSRespErrDTCCnt_MODE) {
      /* InitializeConditions for MinMax: '<S73>/Min' incorporates:
       *  Delay: '<S73>/Delay'
       */
      CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc = ((uint8_T)0U);
      CtAp_LvBattMgmt_ARID_DEF.LvMgmt_BSRespErrDTCCnt_MODE = true;
    }

    /* DataTypeConversion: '<S74>/DataTypeConversion' incorporates:
     *  Constant: '<S75>/Constant'
     *  RelationalOperator: '<S75>/Compare'
     *  SignalConversion: '<S5>/SignalCopy12'
     */
    rtb_DataTypeConversion_odhv = (tmpRead_7 == LvBattMgmt_Active);

    /* Switch: '<S121>/Switch' incorporates:
     *  DataTypeConversion: '<S73>/DataTypeConversion'
     *  Delay: '<S73>/Delay'
     *  Sum: '<S73>/Add'
     */
    rtb_Switch_cufg = rtb_DataTypeConversion_odhv ? ((uint8_T)1) : ((uint8_T)0);
    rtb_Switch_cufg = (uint8_T)((uint32_T)
      CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc + (uint32_T)rtb_Switch_cufg);

    /* MinMax: '<S73>/Min' incorporates:
     *  Constant: '<S73>/LvMgmt_BSMsgFourCntTim'
     */
    CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc = rtb_Switch_cufg;
    if (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc > ((uint8_T)
         LvMgmt_BSMsgFourCntTim)) {
      CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc = ((uint8_T)
        LvMgmt_BSMsgFourCntTim);
    }

    /* End of MinMax: '<S73>/Min' */

    /* RelationalOperator: '<S73>/Relational Operator' incorporates:
     *  Constant: '<S73>/LvMgmt_BSMsgFourCntTim'
     *  Delay: '<S73>/Delay'
     */
    CtAp_LvBattMgmt_ARID_DEF.RelationalOperator =
      (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc >= ((uint8_T)
        LvMgmt_BSMsgFourCntTim));
  } else if (CtAp_LvBattMgmt_ARID_DEF.LvMgmt_BSRespErrDTCCnt_MODE) {
    /* Disable for RelationalOperator: '<S73>/Relational Operator' incorporates:
     *  Outport: '<S73>/LvMgmt_BSRespErrDTCCnt'
     */
    CtAp_LvBattMgmt_ARID_DEF.RelationalOperator = false;
    CtAp_LvBattMgmt_ARID_DEF.LvMgmt_BSRespErrDTCCnt_MODE = false;
  } else {
    /* no actions */
  }

  /* End of RelationalOperator: '<S72>/Compare' */
  /* End of Outputs for SubSystem: '<S19>/LvMgmt_BSRespErrDTCCnt' */

  /* Logic: '<S19>/LogicalOperator1' incorporates:
   *  SignalConversion: '<S5>/SignalCopy18'
   *
   * Block requirements for '<S19>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:70013
   */
  rtb_LogicalOperator1_m4vr = !tmpRead_b;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S19>/NoTime' */
  CtAp_LvBattMgmt_NoTime(rtb_LogicalOperator2_idd4,
    CtAp_LvBattMgmt_ARID_DEF.RelationalOperator, rtb_LogicalOperator1_m4vr,
    &rtb_DataTypeConversion_odhv, &CtAp_LvBattMgmt_ARID_DEF.Switch1_awdy,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_h2kh,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_eays,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_NoTime);

  /* End of Outputs for SubSystem: '<S19>/NoTime' */

  /* Constant: '<S20>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_kkde = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S20>/ActiveTimCnt' */
  /* Constant: '<S20>/LvMgmt_LvSysUDcLoEnaSetTim_CFG' */
  rtb_DataTypeConversion_pobq = CtAp_LvBattMgmt_ActiveTimCnt
    (rtb_LvMgmt_RunStep_kkde, LvMgmt_LvSysUDcLoEnaSetTim_CFG,
     &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_kkiq);

  /* End of Outputs for SubSystem: '<S20>/ActiveTimCnt' */

  /* Logic: '<S20>/LogicalOperator4'
   *
   * Block requirements for '<S20>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:191
   */
  rtb_LogicalOperator4_p50h = (rtb_DataTypeConversion_pobq && tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_b23d = (tmpRead < LvMgmt_LvSysUDcLoSet_CFG);

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_pmhe = (tmpRead > LvMgmt_LvSysUDcLoReset_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S20>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_khuv = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S20>/ATOM_U16ErrorHandle13' */
  /* Constant: '<S20>/LvMgmt_LvSysUDcSetTim_CFG' incorporates:
   *  Constant: '<S20>/LvMgmt_LvSysUDcResetTim_CFG'
   *
   * Block requirements for '<S20>/LvMgmt_LvSysUDcSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:195
   *
   * Block requirements for '<S20>/LvMgmt_LvSysUDcResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:196
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator4_p50h, rtb_Compare_b23d,
    rtb_Compare_pmhe, LvMgmt_LvSysUDcSetTim_CFG, LvMgmt_LvSysUDcResetTim_CFG,
    rtb_LvMgmt_RunStep1_khuv, &rtb_DataTypeConversion,
    &CtAp_LvBattMgmt_ARID_DEF.Switch1_kkhd,
    &CtAp_LvBattMgmt_ARID_DEF.Switch8_fypa,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6_ce24,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle13);

  /* End of Outputs for SubSystem: '<S20>/ATOM_U16ErrorHandle13' */

  /* Constant: '<S21>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_chsn = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S21>/ActiveTimCnt' */
  /* Constant: '<S21>/LvMgmt_LvSysUDcHiEnaSetTim_CFG' */
  rtb_Switch_p2o1 = CtAp_LvBattMgmt_ActiveTimCnt(rtb_LvMgmt_RunStep_chsn,
    LvMgmt_LvSysUDcHiEnaSetTim_CFG,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_cl54);

  /* End of Outputs for SubSystem: '<S21>/ActiveTimCnt' */

  /* Logic: '<S21>/LogicalOperator5'
   *
   * Block requirements for '<S21>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:204
   */
  rtb_LogicalOperator5_jd30 = (rtb_Switch_p2o1 && tmpRead_6);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* RelationalOperator: '<S86>/Compare' incorporates:
   *  Constant: '<S86>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_kgrk = (tmpRead > LvMgmt_LvSysUDcHiSet_CFG);

  /* RelationalOperator: '<S87>/Compare' incorporates:
   *  Constant: '<S87>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_ehiy = (tmpRead < LvMgmt_LvSysUDcHiReset_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Constant: '<S21>/LvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep1_cfjz = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_U16ErrorHandle14' */
  /* Constant: '<S21>/LvMgmt_LvSysUDcSetTim_CFG' incorporates:
   *  Constant: '<S21>/LvMgmt_LvSysUDcResetTim_CFG'
   *
   * Block requirements for '<S21>/LvMgmt_LvSysUDcSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:208
   *
   * Block requirements for '<S21>/LvMgmt_LvSysUDcResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:209
   */
  CtAp_LvBattMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator5_jd30, rtb_Compare_kgrk,
    rtb_Compare_ehiy, LvMgmt_LvSysUDcSetTim_CFG, LvMgmt_LvSysUDcResetTim_CFG,
    rtb_LvMgmt_RunStep1_cfjz, &rtb_DataTypeConversion_pobq,
    &CtAp_LvBattMgmt_ARID_DEF.Switch1, &CtAp_LvBattMgmt_ARID_DEF.Switch8,
    &CtAp_LvBattMgmt_ARID_DEF.Switch6,
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle14);

  /* End of Outputs for SubSystem: '<S21>/ATOM_U16ErrorHandle14' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_VCUlimLvl'
   *
   * Block requirements for '<S4>/LvMgmt_VCUlimLvl':
   *  1. VCU_SW_Requirements_Specification.slreqx:11240
   *  2. VCU_SW_Requirements_Specification.slreqx:11241
   *  3. VCU_SW_Requirements_Specification.slreqx:11242
   *  4. VCU_SW_Requirements_Specification.slreqx:11243
   */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_ReachLimStd'
   *
   * Block requirements for '<S4>/LvMgmt_ReachLimStd':
   *  1. VCU_SW_Requirements_Specification.slreqx:11237
   *  2. VCU_SW_Requirements_Specification.slreqx:11238
   *  3. VCU_SW_Requirements_Specification.slreqx:11239
   */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_IndicatorLightSts'
   *
   * Block requirements for '<S4>/LvMgmt_IndicatorLightSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:11244
   *  2. VCU_SW_Requirements_Specification.slreqx:11245
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator2' incorporates:
   *  Logic: '<S10>/LogicalOperator4'
   *  Logic: '<S10>/LogicalOperator5'
   *  Logic: '<S11>/LogicalOperator5'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  tmpRead_6 = !tmpRead_1;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_ReachLimStd' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_VCUlimLvl' */

  /* Logic: '<S9>/LogicalOperator1' incorporates:
   *  Constant: '<S9>/LvMgmt_LVSOHExitWarn_CFG'
   *  Logic: '<S9>/LogicalOperator2'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator1_mps1 = ((LvMgmt_LVSOHExitWarn_CFG < tmpRead_0) &&
    tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If1'
   *
   * Block requirements for '<S9>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:11245
   */
  /* Constant: '<S9>/Marco_Inactive' incorporates:
   *  Delay: '<S9>/Delay'
   */
  rtb_Switch_p2o1 = CtAp_LvBattMgmt_If(rtb_LogicalOperator1_mps1,
    LvBattMgmt_Inactive, CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_dzgy);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator' incorporates:
   *  Constant: '<S9>/LvMgmt_LVSOHWarn_CFG'
   *  RelationalOperator: '<S9>/RelationalOperator'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  rtb_LogicalOperator_jax1 = ((LvMgmt_LVSOHWarn_CFG >= tmpRead_0) || tmpRead_1);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:11244
   */
  /* Delay: '<S9>/Delay' incorporates:
   *  Constant: '<S9>/Marco_Active'
   */
  CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_dzgy = CtAp_LvBattMgmt_If
    (rtb_LogicalOperator_jax1, LvBattMgmt_Active, rtb_Switch_p2o1);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_IndicatorLightSts' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_ReachLimStd'
   *
   * Block requirements for '<S4>/LvMgmt_ReachLimStd':
   *  1. VCU_SW_Requirements_Specification.slreqx:11237
   *  2. VCU_SW_Requirements_Specification.slreqx:11238
   *  3. VCU_SW_Requirements_Specification.slreqx:11239
   */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Constant: '<S10>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep_o4ga = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */

  /* Outputs for Atomic SubSystem: '<S10>/ActiveTimCnt' */
  /* Constant: '<S10>/LvBattMgmt_WarnLvlInitTmr' */
  rtb_Switch_p2o1 = CtAp_LvBattMgmt_ActiveTimCnt(rtb_LvMgmt_RunStep_o4ga,
    ((uint16_T)LvBattMgmt_WarnLvlInitTmr),
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt_mbvz);

  /* End of Outputs for SubSystem: '<S10>/ActiveTimCnt' */

  /* Logic: '<S10>/LogicalOperator8' */
  rtb_LogicalOperator8_ix2q = !rtb_Switch_p2o1;

  /* Outputs for Atomic SubSystem: '<S10>/If5' */
  rtb_Delay3 = CtAp_LvBattMgmt_If3(rtb_LogicalOperator8_ix2q,
    rtb_ComM_BSBattSOC_pct, LvMgmt_BSSOCMinimum);

  /* End of Outputs for SubSystem: '<S10>/If5' */

  /* Switch: '<S126>/Switch' incorporates:
   *  Delay: '<S10>/Delay5'
   */
  rtb_Switch_eige = CtAp_LvBattMgmt_ARID_DEF.Delay5_DSTATE_ce3t;

  /* RelationalOperator: '<S10>/RelationalOperator1' */
  rtb_RelationalOperator1_kqbx = (rtb_ComM_BSBattSOC_pct > rtb_Switch_eige);

  /* Switch: '<S126>/Switch' incorporates:
   *  Delay: '<S10>/Delay3'
   */
  rtb_Switch_eige = CtAp_LvBattMgmt_ARID_DEF.Delay3_DSTATE_k0s5;

  /* RelationalOperator: '<S10>/RelationalOperator' */
  rtb_RelationalOperator_dxue = (rtb_ComM_BSBattSOC_pct < rtb_Switch_eige);

  /* Delay: '<S10>/Delay4' */
  rtb_Delay4_fenp = CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE_m15p;

  /* Outputs for Atomic SubSystem: '<S10>/If4' */
  /* Delay: '<S10>/Delay4' */
  CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE_m15p = CtAp_LvBattMgmt_If3
    (rtb_RelationalOperator_dxue, rtb_ComM_BSBattSOC_pct, rtb_Delay4_fenp);

  /* End of Outputs for SubSystem: '<S10>/If4' */

  /* Outputs for Atomic SubSystem: '<S10>/If3' */
  LvMgmt_BSSOCMinimum = CtAp_LvBattMgmt_If3(rtb_RelationalOperator1_kqbx,
    CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE_m15p, rtb_Delay3);

  /* End of Outputs for SubSystem: '<S10>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S10>/LogicalOperator7' incorporates:
   *  Constant: '<S102>/Constant'
   *  Constant: '<S10>/LvMgmt_LVLevelLmtResetSOC_CFG'
   *  Constant: '<S99>/Constant'
   *  Logic: '<S10>/LogicalOperator6'
   *  RelationalOperator: '<S102>/Compare'
   *  RelationalOperator: '<S10>/RelationalOperator2'
   *  RelationalOperator: '<S99>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  Sum: '<S10>/Add'
   */
  rtb_LogicalOperator7_puas = (((rtb_ComM_BSBattSOC_pct >
    LvMgmt_LVLevel3LmtSOC_CFG) && (rtb_ComM_BSBattSOC_pct >=
    (LvMgmt_BSSOCMinimum + LvMgmt_LVLevelLmtResetSOC_CFG))) || (tmpRead_5 ==
    ((uint8_T)LvBattMgmt_PEPSOff)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/If2'
   *
   * Block requirements for '<S10>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:11239
   */
  /* Constant: '<S10>/Marco_Inactive' incorporates:
   *  Delay: '<S10>/Delay'
   */
  rtb_RelationalOperator_cekp = CtAp_LvBattMgmt_If(rtb_LogicalOperator7_puas,
    LvBattMgmt_Inactive, CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_no4h);

  /* End of Outputs for SubSystem: '<S10>/If2' */

  /* Switch: '<S126>/Switch' incorporates:
   *  Delay: '<S10>/Delay2'
   */
  rtb_Switch_eige = CtAp_LvBattMgmt_ARID_DEF.Delay2_DSTATE;

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_VCUlimLvl'
   *
   * Block requirements for '<S4>/LvMgmt_VCUlimLvl':
   *  1. VCU_SW_Requirements_Specification.slreqx:11240
   *  2. VCU_SW_Requirements_Specification.slreqx:11241
   *  3. VCU_SW_Requirements_Specification.slreqx:11242
   *  4. VCU_SW_Requirements_Specification.slreqx:11243
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S10>/LogicalOperator2' incorporates:
   *  Logic: '<S10>/LogicalOperator3'
   *  Logic: '<S11>/LogicalOperator11'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  tmpRead_3 = !tmpRead_3;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_VCUlimLvl' */

  /* Logic: '<S10>/LogicalOperator1' incorporates:
   *  Constant: '<S101>/Constant'
   *  Constant: '<S97>/Constant'
   *  Constant: '<S98>/Constant'
   *  Logic: '<S10>/LogicalOperator2'
   *  RelationalOperator: '<S101>/Compare'
   *  RelationalOperator: '<S97>/Compare'
   *  RelationalOperator: '<S98>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_LogicalOperator1_cdmx = (tmpRead_3 && (tmpRead_5 == ((uint8_T)
    LvBattMgmt_PEPSOn)) && tmpRead_6 && (rtb_ComM_BSBattSOC_pct <
    LvMgmt_LVLevel2LmtSOC_CFG) && (rtb_Switch_eige >= LvMgmt_LVLevel2LmtSOC_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/If1'
   *
   * Block requirements for '<S10>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:11238
   */
  /* Constant: '<S10>/Marco_Active1' */
  rtb_Switch_p2o1 = CtAp_LvBattMgmt_If(rtb_LogicalOperator1_cdmx,
    LvBattMgmt_Active, rtb_RelationalOperator_cekp);

  /* End of Outputs for SubSystem: '<S10>/If1' */

  /* Switch: '<S126>/Switch' incorporates:
   *  Delay: '<S10>/Delay1'
   */
  rtb_Switch_eige = CtAp_LvBattMgmt_ARID_DEF.Delay1_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S10>/LogicalOperator' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S95>/Constant'
   *  Constant: '<S96>/Constant'
   *  RelationalOperator: '<S100>/Compare'
   *  RelationalOperator: '<S95>/Compare'
   *  RelationalOperator: '<S96>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_LogicalOperator_mxcr = (tmpRead_3 && (tmpRead_5 == ((uint8_T)
    LvBattMgmt_PEPSOn)) && tmpRead_6 && (rtb_ComM_BSBattSOC_pct <
    LvMgmt_LVLevel1LmtSOC_CFG) && (rtb_Switch_eige >= LvMgmt_LVLevel1LmtSOC_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/If'
   *
   * Block requirements for '<S10>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:11237
   */
  /* Delay: '<S10>/Delay' incorporates:
   *  Constant: '<S10>/Marco_Active'
   */
  CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_no4h = CtAp_LvBattMgmt_If
    (rtb_LogicalOperator_mxcr, LvBattMgmt_Active, rtb_Switch_p2o1);

  /* End of Outputs for SubSystem: '<S10>/If' */

  /* Update for Delay: '<S10>/Delay5' */
  CtAp_LvBattMgmt_ARID_DEF.Delay5_DSTATE_ce3t = rtb_ComM_BSBattSOC_pct;

  /* Update for Delay: '<S10>/Delay3' */
  CtAp_LvBattMgmt_ARID_DEF.Delay3_DSTATE_k0s5 = rtb_ComM_BSBattSOC_pct;

  /* Update for Delay: '<S10>/Delay2' */
  CtAp_LvBattMgmt_ARID_DEF.Delay2_DSTATE = rtb_ComM_BSBattSOC_pct;

  /* Update for Delay: '<S10>/Delay1' */
  CtAp_LvBattMgmt_ARID_DEF.Delay1_DSTATE = rtb_ComM_BSBattSOC_pct;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_ReachLimStd' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_VCUlimLvl'
   *
   * Block requirements for '<S4>/LvMgmt_VCUlimLvl':
   *  1. VCU_SW_Requirements_Specification.slreqx:11240
   *  2. VCU_SW_Requirements_Specification.slreqx:11241
   *  3. VCU_SW_Requirements_Specification.slreqx:11242
   *  4. VCU_SW_Requirements_Specification.slreqx:11243
   */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Constant: '<S11>/LvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/LvMgmt_RunStep'
   */
  rtb_LvMgmt_RunStep = (uint16_T)((uint8_T)LvBattMgmt_LvMgmt_RunStep);

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */

  /* Outputs for Atomic SubSystem: '<S11>/ActiveTimCnt' */
  /* Constant: '<S11>/LvBattMgmt_WarnLvlInitTmr' */
  rtb_RelationalOperator_cekp = CtAp_LvBattMgmt_ActiveTimCnt(rtb_LvMgmt_RunStep,
    ((uint16_T)LvBattMgmt_WarnLvlInitTmr),
    &CtAp_LvBattMgmt_ARID_DEF.ARID_DEF_ActiveTimCnt);

  /* End of Outputs for SubSystem: '<S11>/ActiveTimCnt' */

  /* Logic: '<S11>/LogicalOperator12' */
  rtb_LogicalOperator12 = !rtb_RelationalOperator_cekp;

  /* Outputs for Atomic SubSystem: '<S11>/If6' */
  /* Delay: '<S11>/Delay7' */
  rtb_Switch_eige = CtAp_LvBattMgmt_If3(rtb_LogicalOperator12,
    rtb_ComM_BSBattSOC_pct, CtAp_LvBattMgmt_ARID_DEF.Delay7_DSTATE);

  /* End of Outputs for SubSystem: '<S11>/If6' */

  /* Delay: '<S11>/Delay3' incorporates:
   *  Delay: '<S11>/Delay5'
   */
  rtb_Delay3 = CtAp_LvBattMgmt_ARID_DEF.Delay5_DSTATE;

  /* RelationalOperator: '<S11>/RelationalOperator1' */
  rtb_RelationalOperator1 = (rtb_ComM_BSBattSOC_pct > rtb_Delay3);

  /* Delay: '<S11>/Delay3' */
  rtb_Delay3 = CtAp_LvBattMgmt_ARID_DEF.Delay3_DSTATE;

  /* RelationalOperator: '<S11>/RelationalOperator' */
  rtb_RelationalOperator = (rtb_ComM_BSBattSOC_pct < rtb_Delay3);

  /* Delay: '<S11>/Delay4' */
  rtb_Delay4 = CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE;

  /* Outputs for Atomic SubSystem: '<S11>/If5' */
  /* Delay: '<S11>/Delay4' */
  CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE = CtAp_LvBattMgmt_If3
    (rtb_RelationalOperator, rtb_ComM_BSBattSOC_pct, rtb_Delay4);

  /* End of Outputs for SubSystem: '<S11>/If5' */

  /* Outputs for Atomic SubSystem: '<S11>/If3' */
  /* Delay: '<S11>/Delay7' incorporates:
   *  Delay: '<S11>/Delay4'
   */
  CtAp_LvBattMgmt_ARID_DEF.Delay7_DSTATE = CtAp_LvBattMgmt_If3
    (rtb_RelationalOperator1, CtAp_LvBattMgmt_ARID_DEF.Delay4_DSTATE,
     rtb_Switch_eige);

  /* End of Outputs for SubSystem: '<S11>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator7' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S119>/Constant'
   *  Constant: '<S11>/LvMgmt_LVLevelLmtResetSOC_CFG'
   *  Delay: '<S11>/Delay7'
   *  Logic: '<S11>/LogicalOperator6'
   *  RelationalOperator: '<S114>/Compare'
   *  RelationalOperator: '<S119>/Compare'
   *  RelationalOperator: '<S11>/RelationalOperator2'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  Sum: '<S11>/Add'
   */
  rtb_LogicalOperator7 = (((rtb_ComM_BSBattSOC_pct > LvMgmt_LVLevel3LmtSOC_CFG) &&
    (rtb_ComM_BSBattSOC_pct >= (CtAp_LvBattMgmt_ARID_DEF.Delay7_DSTATE +
    LvMgmt_LVLevelLmtResetSOC_CFG))) || (tmpRead_5 == ((uint8_T)
    LvBattMgmt_PEPSOff)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If2'
   *
   * Block requirements for '<S11>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:11243
   */
  /* Constant: '<S11>/Marco_LevelZero' incorporates:
   *  Delay: '<S11>/Delay'
   */
  rtb_Switch_cufg = CtAp_LvBattMgmt_If_bsvd(rtb_LogicalOperator7, ((uint8_T)
    LvBattMgmt_LevelZero), CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S11>/If2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator10' incorporates:
   *  Constant: '<S115>/Constant'
   *  Constant: '<S118>/Constant'
   *  Logic: '<S11>/LogicalOperator14'
   *  RelationalOperator: '<S115>/Compare'
   *  RelationalOperator: '<S118>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  rtb_LogicalOperator10 = (tmpRead_3 && (tmpRead_5 == ((uint8_T)
    LvBattMgmt_PEPSOn)) && (tmpRead_1 || (rtb_ComM_BSBattSOC_pct <
    LvMgmt_LVLevel3LmtSOC_CFG)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If4'
   *
   * Block requirements for '<S11>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:11242
   */
  /* Constant: '<S11>/Marco_LevelThree' */
  rtb_Switch_ch1j = CtAp_LvBattMgmt_If_bsvd(rtb_LogicalOperator10, ((uint8_T)
    LvBattMgmt_LevelThree), rtb_Switch_cufg);

  /* End of Outputs for SubSystem: '<S11>/If4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator1' incorporates:
   *  Constant: '<S112>/Constant'
   *  Constant: '<S113>/Constant'
   *  Constant: '<S117>/Constant'
   *  Delay: '<S10>/Delay'
   *  Logic: '<S11>/LogicalOperator9'
   *  RelationalOperator: '<S112>/Compare'
   *  RelationalOperator: '<S113>/Compare'
   *  RelationalOperator: '<S117>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_LogicalOperator1 = (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_no4h &&
    tmpRead_6 && !tmpRead_4 && (tmpRead_2 == ((uint8_T)LvBattMgmt_IVILmtPop)) &&
    (rtb_ComM_BSBattSOC_pct < LvMgmt_LVLevel2LmtSOC_CFG) &&
    (rtb_ComM_BSBattSOC_pct >= LvMgmt_LVLevel3LmtSOC_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If1'
   *
   * Block requirements for '<S11>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:11241
   */
  /* Constant: '<S11>/Marco_LevelTwo' */
  rtb_Switch_cufg = CtAp_LvBattMgmt_If_bsvd(rtb_LogicalOperator1, ((uint8_T)
    LvBattMgmt_LevelTwo), rtb_Switch_ch1j);

  /* End of Outputs for SubSystem: '<S11>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S110>/Constant'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S116>/Constant'
   *  Delay: '<S10>/Delay'
   *  Logic: '<S11>/LogicalOperator4'
   *  Logic: '<S11>/LogicalOperator8'
   *  RelationalOperator: '<S110>/Compare'
   *  RelationalOperator: '<S111>/Compare'
   *  RelationalOperator: '<S116>/Compare'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_LogicalOperator = (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_no4h &&
    !tmpRead_1 && !tmpRead_4 && (tmpRead_2 == ((uint8_T)LvBattMgmt_IVILmtPop)) &&
    (rtb_ComM_BSBattSOC_pct < LvMgmt_LVLevel1LmtSOC_CFG) &&
    (rtb_ComM_BSBattSOC_pct >= LvMgmt_LVLevel2LmtSOC_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If'
   *
   * Block requirements for '<S11>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:11240
   */
  /* Delay: '<S11>/Delay' incorporates:
   *  Constant: '<S11>/Marco_LevelOne'
   */
  CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE = CtAp_LvBattMgmt_If_bsvd
    (rtb_LogicalOperator, ((uint8_T)LvBattMgmt_LevelOne), rtb_Switch_cufg);

  /* End of Outputs for SubSystem: '<S11>/If' */

  /* Update for Delay: '<S11>/Delay5' */
  CtAp_LvBattMgmt_ARID_DEF.Delay5_DSTATE = rtb_ComM_BSBattSOC_pct;

  /* Update for Delay: '<S11>/Delay3' */
  CtAp_LvBattMgmt_ARID_DEF.Delay3_DSTATE = rtb_ComM_BSBattSOC_pct;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_VCUlimLvl' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus' incorporates:
   *  BusCreator: '<S13>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattIDcHiDTC_Bus.LvMgmt_MonStatBSBattIDcHiDTC
    = rtb_DataTypeConversion_lmdr;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattIDcHiDTC_Bus.LvMgmt_MonResBSBattIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_cjak;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattIDcHiDTC_Bus.LvMgmt_ErrStatBSBattIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_l4dy;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattIDcHiDTC_Bus.LvMgmt_ErrResBSBattIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_kncm;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus' incorporates:
   *  BusCreator: '<S17>/Bus Creator1'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcHiDTC_Bus.LvMgmt_MonStatBSBattUDcHiDTC
    = rtb_DataTypeConversion_pjmu;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcHiDTC_Bus.LvMgmt_MonResBSBattUDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_lido;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcHiDTC_Bus.LvMgmt_ErrStatBSBattUDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_ahy1;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcHiDTC_Bus.LvMgmt_ErrResBSBattUDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_lql5;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus' incorporates:
   *  BusCreator: '<S18>/Bus Creator2'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcLoDTC_Bus.LvMgmt_MonStatBSBattUDcLoDTC
    = rtb_DataTypeConversion_nars;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcLoDTC_Bus.LvMgmt_MonResBSBattUDcLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_ifsh;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcLoDTC_Bus.LvMgmt_ErrStatBSBattUDcLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_gpiu;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcLoDTC_Bus.LvMgmt_ErrResBSBattUDcLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_l5x0;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Output' */
  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  (void)Rte_Write_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (rtb_Switch_e0ya);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Outport: '<Root>/RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus' incorporates:
   *  BusCreator: '<S20>/Bus Creator3'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_.LvMgmt_MonStatLvSysLoUDcDTC
    = rtb_DataTypeConversion;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_.LvMgmt_MonResLvSysLoUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_kkhd;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_.LvMgmt_ErrStatLvSysLoUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_fypa;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_.LvMgmt_ErrResLvSysLoUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_ce24;

  /* Outport: '<Root>/RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus' incorporates:
   *  BusCreator: '<S21>/Bus Creator4'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus.LvMgmt_MonStatLvSysOvrUDcDTC
    = rtb_DataTypeConversion_pobq;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus.LvMgmt_MonResLvSysOvrUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus.LvMgmt_ErrStatLvSysOvrUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus.LvMgmt_ErrResLvSysOvrUDcDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Output' */
  /* Outport: '<Root>/RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo' incorporates:
   *  Delay: '<S9>/Delay'
   *  SignalConversion: '<S6>/SignalCopy6'
   */
  (void)
    Rte_Write_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo
    (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_dzgy);

  /* Outport: '<Root>/RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo' incorporates:
   *  Delay: '<S10>/Delay'
   *  SignalConversion: '<S6>/SignalCopy7'
   */
  (void)Rte_Write_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo
    (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_no4h);

  /* Outport: '<Root>/RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo' incorporates:
   *  Delay: '<S11>/Delay'
   *  SignalConversion: '<S6>/SignalCopy8'
   */
  (void)Rte_Write_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo
    (CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus' incorporates:
   *  BusCreator: '<S12>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattChrgIDcHiDTC.LvMgmt_MonStatBSBattChrgIDcHiDTC
    = rtb_DataTypeConversion_imcn;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattChrgIDcHiDTC.LvMgmt_MonResBSBattChrgIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_km3m;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattChrgIDcHiDTC.LvMgmt_ErrStatBSBattChrgIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_kq0v;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattChrgIDcHiDTC.LvMgmt_ErrResBSBattChrgIDcHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_be5x;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus' incorporates:
   *  BusCreator: '<S14>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattSOCLoDTC_Bus.LvMgmt_MonStatBSBattSOCLoDTC
    = rtb_DataTypeConversion_adai;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattSOCLoDTC_Bus.LvMgmt_MonResBSBattSOCLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_lxve;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattSOCLoDTC_Bus.LvMgmt_ErrStatBSBattSOCLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_aghw;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattSOCLoDTC_Bus.LvMgmt_ErrResBSBattSOCLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_ba3k;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus' incorporates:
   *  BusCreator: '<S15>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempHiDTC_Bu.LvMgmt_MonStatBSBattTempHiDTC
    = rtb_DataTypeConversion_hjpa;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempHiDTC_Bu.LvMgmt_MonResBSBattTempHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_oxxi;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempHiDTC_Bu.LvMgmt_ErrStatBSBattTempHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_ikcp;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempHiDTC_Bu.LvMgmt_ErrResBSBattTempHiDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_hide;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus' incorporates:
   *  BusCreator: '<S16>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempLoDTC_Bu.LvMgmt_MonResBSBattTempLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_kj2h;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempLoDTC_Bu.LvMgmt_ErrStatBSBattTempLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_aolb;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempLoDTC_Bu.LvMgmt_ErrResBSBattTempLoDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_gemz;

  /* Outport: '<Root>/RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus' incorporates:
   *  BusCreator: '<S19>/Bus Creator5'
   */
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSRespErrDTC_Bus_t.LvMgmt_MonStatBSRespErrDTC
    = rtb_DataTypeConversion_odhv;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSRespErrDTC_Bus_t.LvMgmt_MonResBSRespErrDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch1_awdy;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSRespErrDTC_Bus_t.LvMgmt_ErrStatBSRespErrDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch8_h2kh;
  CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSRespErrDTC_Bus_t.LvMgmt_ErrResBSRespErrDTC
    = CtAp_LvBattMgmt_ARID_DEF.Switch6_eays;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* End of Outputs for SubSystem: '<Root>/R_LvBattMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus(
    &CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattIDcHiDTC_Bus);
  (void)Rte_Write_RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus(
    &CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcHiDTC_Bus);
  (void)Rte_Write_RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus(
    &CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattUDcLoDTC_Bus);
  (void)Rte_Write_RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus
    (&CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_);
  (void)Rte_Write_RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus(
    &CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus);
  (void)
    Rte_Write_RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus
    (&CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattChrgIDcHiDTC);
  (void)Rte_Write_RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus(
    &CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattSOCLoDTC_Bus);
  (void)
    Rte_Write_RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus
    (&CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempHiDTC_Bu);
  (void)
    Rte_Write_RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus
    (&CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSBattTempLoDTC_Bu);
  (void)Rte_Write_RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus
    (&CtAp_LvBattMgmt_ARID_DEF.RTE_P_LvMgmt_BSRespErrDTC_Bus_t);
}

#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_LvBattMgmt_START_SEC_VAR_CONST_8
#include "CtAp_LvBattMgmt_MemMap.h"

void R_LvBattMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  LvMgmt_BSSOCMinimum = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_LvBattMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_LvBattMgmt_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_LvBattMgmt_Cyclic_20ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* SystemInitialize for Enabled SubSystem: '<S19>/LvMgmt_BSRespErrDTCCnt'
   *
   * Block requirements for '<S19>/LvMgmt_BSRespErrDTCCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:70012
   */
  /* InitializeConditions for MinMax: '<S73>/Min' incorporates:
   *  Delay: '<S73>/Delay'
   */
  CtAp_LvBattMgmt_ARID_DEF.Delay_DSTATE_kwrc = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S19>/LvMgmt_BSRespErrDTCCnt' */
  /* End of SystemInitialize for SubSystem: '<S4>/LvMgmt_BSBattDTCs' */
  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_LvBattMgmt_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_LvBattMgmt_Cyclic_20ms_sys' */
}

#define CtAp_LvBattMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_LvBattMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
