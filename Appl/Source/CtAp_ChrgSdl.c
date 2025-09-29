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
 *  Filename:           CtAp_ChrgSdl.c
 *  File Creation Date: 22-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu May 22 10:04:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 10:03:15 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgSdl.h"
#include "rtwtypes.h"
#include "CtAp_ChrgSdl_private.h"
#include <math.h>
#include "look2_iflf_binlx.h"
#include "look1_iflf_binlx.h"
#include "CtAp_ChrgSdl_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */

/*if not init use it */
#define CtAp_ChrgSdl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChrgSdl_CCTimRemain;          /* '<S59>/If' */
real32_T ChrgSdl_CVTimRemain;          /* '<S60>/Add' */
real32_T ChrgSdl_ChrgTimRemain;        /* '<S61>/Add' */
real32_T ChrgSdl_PreTimRemain;         /* '<S62>/If' */

#define CtAp_ChrgSdl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgSdl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"

ARID_DEF_CtAp_ChrgSdl_T CtAp_ChrgSdl_ARID_DEF;

#define CtAp_ChrgSdl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S10>/If'
 *    '<S10>/If1'
 *    '<S10>/If2'
 *    '<S10>/If3'
 *    '<S11>/If'
 *    '<S11>/If1'
 *    '<S19>/If'
 *    '<S19>/If1'
 *    '<S19>/If2'
 *    '<S19>/If3'
 */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

uint16_T CtAp_ChrgSdl_If(boolean_T rtu_if, uint16_T rtu_then, uint16_T rtu_else)
{
  uint16_T rty_Out1_0;

  /* Switch: '<S12>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S12>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* System initialize for atomic system: '<S11>/ATOM_OnDelay' */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

void CtAp_ChrgSdl_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSdl__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S16>/Sum' incorporates:
   *  UnitDelay: '<S16>/UnitDelay'
   */
  CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* Output and update for atomic system: '<S11>/ATOM_OnDelay' */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

boolean_T CtAp_ChrgSdl_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint8_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgSdl__ARID_DEF_arg)
{
  /* Switch: '<S16>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S16>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S16>/Sum' incorporates:
     *  UnitDelay: '<S16>/UnitDelay'
     */
    CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S16>/MinMax' */
    if (u0 <= CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S16>/Sum' */
      CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S16>/MinMax' */
  } else {
    /* Sum: '<S16>/Sum' incorporates:
     *  UnitDelay: '<S16>/UnitDelay'
     */
    CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)rtu_ClearValue;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* RelationalOperator: '<S16>/B_MiHold' incorporates:
   *  UnitDelay: '<S16>/UnitDelay'
   */
  return CtAp_ChrgSdl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* Output and update for atomic system: '<S8>/If' */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

uint16_T CtAp_ChrgSdl_If_ctk5(boolean_T rtu_if, uint16_T rtu_then, real32_T
  rtu_else)
{
  uint16_T rty_Out1_0;

  /* Switch: '<S25>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (uint16_T)rtu_else;
  }

  /* End of Switch: '<S25>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S26>/ATOM_SafeDivide'
 *    '<S59>/ATOM_SafeDivide'
 */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

real32_T CtAp_ChrgSdl_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps)
{
  real32_T tmp;

  /* Switch: '<S32>/LogicalSwitch' incorporates:
   *  Gain: '<S32>/Gain'
   *  Gain: '<S32>/Gain1'
   *  MinMax: '<S32>/MinMax'
   *  MinMax: '<S32>/MinMax1'
   *  RelationalOperator: '<S32>/RelationalOperator'
   */
  if (rtu_den < (0.0F * rtu_eps)) {
    tmp = fminf(rtu_den, (-1.0F) * rtu_eps);
  } else {
    tmp = fmaxf(rtu_eps, rtu_den);
  }

  /* Product: '<S32>/Product' incorporates:
   *  Switch: '<S32>/LogicalSwitch'
   */
  return rtu_num / tmp;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S26>/If'
 *    '<S26>/If2'
 *    '<S26>/If3'
 */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

real32_T CtAp_ChrgSdl_If_omfw(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S37>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S37>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* Output and update for atomic system: '<S26>/If1' */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

uint8_T CtAp_ChrgSdl_If1(boolean_T rtu_if, uint8_T rtu_then, real32_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S38>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (uint8_T)rtu_else;
  }

  /* End of Switch: '<S38>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S43>/If'
 *    '<S43>/If1'
 *    '<S43>/If2'
 *    '<S43>/If3'
 */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

uint8_T CtAp_ChrgSdl_If_hkuy(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S55>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S55>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S59>/If'
 *    '<S62>/If'
 */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

real32_T CtAp_ChrgSdl_If_fjuu(boolean_T rtu_if, real32_T rtu_then, uint8_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S66>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (real32_T)rtu_else;
  }

  /* End of Switch: '<S66>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgSdl_START_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

void R_ChrgSdl_Cyclic_50ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TmpSignalConversionAtR_ks5u;
  real32_T rtb_DataTypeConversion1;
  real32_T rtb_ChrgSdl_PreHeatTimLut;
  real32_T rtb_Switch;
  real32_T rtb_Divide3;
  real32_T rtb_MinMax;
  real32_T rtb_Switch_hyeb;
  real32_T rtb_Gain;
  real32_T rtb_Abs;
  real32_T rtb_Switch_pl44;
  real32_T rtb_ChrgSdl_facCvLut;
  real32_T rtb_DataTypeConversion_j1hr;
  uint16_T rtb_Add_dgal;
  uint16_T rtb_Add1;
  uint16_T rtb_Switch_ov5w;
  uint16_T rtb_Switch_djj2;
  uint16_T rtb_Add_cyjw;
  uint16_T rtb_Add1_coki;
  uint16_T rtb_Switch_jtgi;
  uint16_T rtb_Switch_j5zg;
  uint16_T rtb_Delay1;
  uint16_T rtb_Switch_ld5l;
  uint8_T rtb_Switch_mzzu;
  uint8_T rtb_Switch_erme;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator_nkbr;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator8;
  boolean_T rtb_Compare_bwkv;
  boolean_T rtb_Compare_adj5;
  boolean_T rtb_Compare_eg1i;
  boolean_T rtb_Compare_fb0s;
  boolean_T rtb_LogicalOperator_oi4r;
  boolean_T rtb_RelationalOperator_l4un;
  boolean_T rtb_LogicalOperator1_oibt;
  boolean_T rtb_RelationalOperator_g1zv;
  boolean_T rtb_LogicalOperator_dvxk;
  boolean_T rtb_LogicalOperator1_n031;
  boolean_T rtb_RelationalOperator_jxad;
  boolean_T rtb_LogicalOperator_jbjo;
  boolean_T rtb_LogicalOperator2_btoo;
  boolean_T rtb_RelationalOperator_oce5;
  real32_T rtb_ChrgSdl_iCv;
  real32_T rtb_MinMax_gz3c;
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  real32_T tmpRead_0;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpRead_5;
  uint16_T tmpRead_1;
  uint16_T tmpWrite;
  uint16_T tmpWrite_0;
  int8_T rtb_MinMax_d0le;
  int8_T tmpRead;
  uint8_T rtb_TmpSignalConversionAtR_ej1p;
  uint8_T rtb_TmpSignalConversionAtR_g54z;
  uint8_T rtb_TmpSignalConversionAtR_mtab;

  /* Inport: '<Root>/RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A
    (&rtb_MinMax_gz3c);

  /* Inport: '<Root>/RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min' */
  (void)Rte_Read_RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C' */
  (void)Rte_Read_RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C
    (&rtb_MinMax_d0le);

  /* Inport: '<Root>/RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C' */
  (void)Rte_Read_RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C(&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_ej1p);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct
    (&rtb_TmpSignalConversionAtR_g54z);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
    (&rtb_TmpSignalConversionAtR_mtab);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
    (&rtb_TmpSignalConversionAtR_ks5u);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgTim' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_ChrgTim'
   *
   * Block requirements for '<S4>/ChrMgmt_ChrgTim':
   *  1. SWREQ_02375 Charge Time Calculate
   *  2. SWREQ_02376 Charge Time Calculate
   *  3. SWREQ_02377 Charge Time Calculate
   */
  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_ChrgTimCalFlag' */
  /* Logic: '<S9>/LogicalOperator' incorporates:
   *  Constant: '<S9>/Define'
   *  Constant: '<S9>/Define1'
   *  Constant: '<S9>/Define2'
   *  Constant: '<S9>/Define3'
   *  RelationalOperator: '<S9>/RelationalOperator'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  RelationalOperator: '<S9>/RelationalOperator2'
   *  RelationalOperator: '<S9>/RelationalOperator3'
   */
  rtb_LogicalOperator_jbjo = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCPreheating)));

  /* Logic: '<S9>/LogicalOperator2' incorporates:
   *  Constant: '<S9>/Define4'
   *  Constant: '<S9>/Define5'
   *  Constant: '<S9>/Define6'
   *  Logic: '<S9>/LogicalOperator1'
   *  RelationalOperator: '<S9>/RelationalOperator4'
   *  RelationalOperator: '<S9>/RelationalOperator5'
   *  RelationalOperator: '<S9>/RelationalOperator6'
   */
  rtb_LogicalOperator2_btoo = (!rtb_LogicalOperator_jbjo &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgSdl_KeepWarm)) &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgSdl_ChargeFault)) &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgSdl_ChargeComplete)));

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_ChrgTimCalFlag' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_ChrgTimCalInit' */
  /* Outputs for Atomic SubSystem: '<S10>/If2' */
  /* Constant: '<S10>/Define6' incorporates:
   *  Constant: '<S10>/Define5'
   */
  rtb_Delay1 = CtAp_ChrgSdl_If(rtb_LogicalOperator_jbjo, ((uint16_T)ChrgSdl_dt),
    ((uint16_T)ChrgSdl_Count0));

  /* End of Outputs for SubSystem: '<S10>/If2' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Delay: '<S10>/Delay'
   */
  rtb_Switch_ld5l = CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_d1ax;

  /* Sum: '<S10>/Add' */
  rtb_Add_cyjw = (uint16_T)((uint32_T)rtb_Delay1 + (uint32_T)rtb_Switch_ld5l);

  /* RelationalOperator: '<S10>/RelationalOperator' incorporates:
   *  Constant: '<S10>/Define1'
   */
  rtb_RelationalOperator_jxad = (rtb_Add_cyjw >= ((uint16_T)ChrgSdl_60000ms));

  /* Outputs for Atomic SubSystem: '<S10>/If' */
  /* Constant: '<S10>/Define2' incorporates:
   *  Constant: '<S10>/Define3'
   */
  rtb_Delay1 = CtAp_ChrgSdl_If(rtb_RelationalOperator_jxad, ((uint16_T)
    ChrgSdl_Count1), ((uint16_T)ChrgSdl_Count0));

  /* End of Outputs for SubSystem: '<S10>/If' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Delay: '<S10>/Delay1'
   */
  rtb_Switch_ld5l = CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE_cgyo;

  /* Sum: '<S10>/Add1' */
  rtb_Add1_coki = (uint16_T)((uint32_T)rtb_Delay1 + (uint32_T)rtb_Switch_ld5l);

  /* Outputs for Atomic SubSystem: '<S10>/If3' */
  /* Constant: '<S10>/Define7' */
  rtb_Switch_jtgi = CtAp_ChrgSdl_If(rtb_LogicalOperator2_btoo, ((uint16_T)
    ChrgSdl_Count0), rtb_Add1_coki);

  /* End of Outputs for SubSystem: '<S10>/If3' */

  /* Outputs for Atomic SubSystem: '<S10>/If1' */
  /* Constant: '<S10>/Define4' */
  rtb_Switch_j5zg = CtAp_ChrgSdl_If(rtb_RelationalOperator_jxad, ((uint16_T)
    ChrgSdl_U16Zero), rtb_Add_cyjw);

  /* End of Outputs for SubSystem: '<S10>/If1' */

  /* Update for Delay: '<S10>/Delay' */
  CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_d1ax = rtb_Switch_j5zg;

  /* Update for Delay: '<S10>/Delay1' */
  CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE_cgyo = rtb_Switch_jtgi;

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_ChrgTimCalInit' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_ChrgTimManage' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S11>/Define5'
   *  Constant: '<S11>/Define6'
   *  RelationalOperator: '<S11>/RelationalOperator5'
   *  RelationalOperator: '<S11>/RelationalOperator6'
   */
  rtb_LogicalOperator_dvxk = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ChargeFault)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ChargeComplete)));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_OnDelay' */
  /* Constant: '<S11>/Define3' incorporates:
   *  Constant: '<S11>/Define1'
   *  Constant: '<S11>/Define2'
   */
  rtb_RelationalOperator_oce5 = CtAp_ChrgSdl_ATOM_OnDelay
    (rtb_LogicalOperator_dvxk, ((uint16_T)ChrgSdl_ChrgInfoDispTim), ((uint16_T)
      ChrgSdl_dt), ((uint8_T)ChrgSdl_Init),
     &CtAp_ChrgSdl_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S11>/ATOM_OnDelay' */

  /* Logic: '<S11>/LogicalOperator1' */
  rtb_LogicalOperator1_n031 = !rtb_RelationalOperator_oce5;

  /* Outputs for Atomic SubSystem: '<S11>/If1' */
  /* Constant: '<S11>/Define4' */
  rtb_Switch_ld5l = CtAp_ChrgSdl_If(rtb_LogicalOperator1_n031, rtb_Switch_jtgi,
    ((uint16_T)ChrgSdl_ChargeTimeDefault));

  /* End of Outputs for SubSystem: '<S11>/If1' */

  /* Outputs for Atomic SubSystem: '<S11>/If' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min' incorporates:
   *  Constant: '<S11>/Define10'
   */
  tmpWrite_0 = CtAp_ChrgSdl_If(rtb_LogicalOperator_dvxk, rtb_Switch_ld5l,
    ((uint16_T)ChrgSdl_ChargeTimeDefault));

  /* End of Outputs for SubSystem: '<S11>/If' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_ChrgTimManage' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_ChrgTim' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_KeepWrmTim'
   *
   * Block requirements for '<S4>/ChrMgmt_KeepWrmTim':
   *  1. SWREQ_02373 Keep warm time time
   *  2. SWREQ_02374 Keep warm time time init
   */
  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_KeepWrmTimCalFlg' */
  /* RelationalOperator: '<S20>/RelationalOperator' incorporates:
   *  Constant: '<S20>/Define'
   */
  rtb_RelationalOperator_l4un = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_KeepWarm));

  /* Logic: '<S20>/LogicalOperator1' incorporates:
   *  Constant: '<S20>/Define1'
   *  Constant: '<S20>/Define2'
   *  Logic: '<S20>/LogicalOperator'
   *  RelationalOperator: '<S20>/RelationalOperator1'
   *  RelationalOperator: '<S20>/RelationalOperator2'
   */
  rtb_LogicalOperator1_oibt = (!rtb_RelationalOperator_l4un &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgSdl_ChargeFault)) &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgSdl_ChargeComplete)));

  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_KeepWrmTimCalFlg' */

  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_KeepWrmTimCal' */
  /* Outputs for Atomic SubSystem: '<S19>/If2' */
  /* Constant: '<S19>/Define' incorporates:
   *  Constant: '<S19>/Define6'
   */
  rtb_Switch_ld5l = CtAp_ChrgSdl_If(rtb_RelationalOperator_l4un, ((uint16_T)
    ChrgSdl_dt), ((uint16_T)ChrgSdl_U16Zero));

  /* End of Outputs for SubSystem: '<S19>/If2' */

  /* Delay: '<S19>/Delay1' incorporates:
   *  Delay: '<S19>/Delay'
   */
  rtb_Delay1 = CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_g03k;

  /* Sum: '<S19>/Add' */
  rtb_Add_dgal = (uint16_T)((uint32_T)rtb_Switch_ld5l + (uint32_T)rtb_Delay1);

  /* RelationalOperator: '<S19>/RelationalOperator' incorporates:
   *  Constant: '<S19>/Define1'
   */
  rtb_RelationalOperator_g1zv = (rtb_Add_dgal >= ((uint16_T)ChrgSdl_60000ms));

  /* Outputs for Atomic SubSystem: '<S19>/If' */
  /* Constant: '<S19>/Define2' incorporates:
   *  Constant: '<S19>/Define3'
   */
  rtb_Switch_ld5l = CtAp_ChrgSdl_If(rtb_RelationalOperator_g1zv, ((uint16_T)
    ChrgSdl_Count1), ((uint16_T)ChrgSdl_Count0));

  /* End of Outputs for SubSystem: '<S19>/If' */

  /* Delay: '<S19>/Delay1' */
  rtb_Delay1 = CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE_eibr;

  /* Sum: '<S19>/Add1' */
  rtb_Add1 = (uint16_T)((uint32_T)rtb_Switch_ld5l + (uint32_T)rtb_Delay1);

  /* Outputs for Atomic SubSystem: '<S19>/If3' */
  /* Constant: '<S19>/Define5' */
  rtb_Switch_ov5w = CtAp_ChrgSdl_If(rtb_LogicalOperator1_oibt, ((uint16_T)
    ChrgSdl_Count0), rtb_Add1);

  /* End of Outputs for SubSystem: '<S19>/If3' */

  /* Outputs for Atomic SubSystem: '<S19>/If1' */
  /* Constant: '<S19>/Define4' */
  rtb_Switch_djj2 = CtAp_ChrgSdl_If(rtb_RelationalOperator_g1zv, ((uint16_T)
    ChrgSdl_U16Zero), rtb_Add_dgal);

  /* End of Outputs for SubSystem: '<S19>/If1' */

  /* Update for Delay: '<S19>/Delay' */
  CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_g03k = rtb_Switch_djj2;

  /* Update for Delay: '<S19>/Delay1' */
  CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE_eibr = rtb_Switch_ov5w;

  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_KeepWrmTimCal' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_KeepWrmTim' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrgMgmt_ChrgnRemnTim'
   *
   * Block requirements for '<S4>/ChrgMgmt_ChrgnRemnTim':
   *  1. SWREQ_02371 Charge remain time
   *  2. SWREQ_02372 Charge remain time init
   */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S8>/Define'
   *  Constant: '<S8>/Define1'
   *  Constant: '<S8>/Define2'
   *  Constant: '<S8>/Define3'
   *  RelationalOperator: '<S8>/RelationalOperator'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  RelationalOperator: '<S8>/RelationalOperator2'
   *  RelationalOperator: '<S8>/RelationalOperator3'
   */
  rtb_LogicalOperator_oi4r = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCPreheating)));

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. SWREQ_02371 Charge remain time
   *  2. SWREQ_02372 Charge remain time init
   */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min' incorporates:
   *  Constant: '<S8>/Define4'
   */
  tmpWrite = CtAp_ChrgSdl_If_ctk5(rtb_LogicalOperator_oi4r, tmpRead_1,
    ChrgSdl_RemainTimeDefault);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/ChrgMgmt_ChrgnRemnTim' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgTim' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* Outputs for Atomic SubSystem: '<S5>/ChrgSdl_BMSBattempCalcd' */
  /* MinMax: '<S28>/MinMax' */
  if (tmpRead <= rtb_MinMax_d0le) {
    /* MinMax: '<S28>/MinMax' */
    rtb_MinMax_d0le = tmpRead;
  }

  /* End of MinMax: '<S28>/MinMax' */
  /* End of Outputs for SubSystem: '<S5>/ChrgSdl_BMSBattempCalcd' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_ChrgCurrent' */
  /* Gain: '<S26>/Gain' incorporates:
   *  Sum: '<S26>/Add'
   */
  rtb_Gain = 1000.0F * (tmpRead_3 + tmpRead_4 + tmpRead_5);

  /* Outputs for Atomic SubSystem: '<S26>/ATOM_SafeDivide' */
  /* Constant: '<S26>/Define2' */
  rtb_Switch_pl44 = CtAp_ChrgSdl_ATOM_SafeDivide(rtb_Gain,
    rtb_TmpSignalConversionAtR_ks5u, 2.22044605E-16F);

  /* End of Outputs for SubSystem: '<S26>/ATOM_SafeDivide' */

  /* RelationalOperator: '<S35>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   */
  rtb_Compare_bwkv = (rtb_TmpSignalConversionAtR_ks5u == ChrgSdl_SingleZero);

  /* Outputs for Atomic SubSystem: '<S26>/If3' */
  /* Constant: '<S26>/Define1' */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_If_omfw(rtb_Compare_bwkv,
    ChrgSdl_SingleZero, rtb_Switch_pl44);

  /* End of Outputs for SubSystem: '<S26>/If3' */

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   */
  rtb_Compare_adj5 = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_OffPlug));

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   */
  rtb_Compare_eg1i = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACPlugDetected));

  /* Abs: '<S26>/Abs' */
  rtb_Abs = fabsf(tmpRead_2);

  /* RelationalOperator: '<S36>/Compare' incorporates:
   *  Constant: '<S36>/Constant'
   */
  rtb_Compare_fb0s = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCPlugDetected));

  /* Outputs for Atomic SubSystem: '<S26>/If2' */
  /* Delay: '<S26>/Delay' */
  rtb_ChrgSdl_facCvLut = CtAp_ChrgSdl_If_omfw(rtb_Compare_fb0s, rtb_Abs,
    CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S26>/If2' */

  /* Outputs for Atomic SubSystem: '<S26>/If' */
  rtb_Switch_pl44 = CtAp_ChrgSdl_If_omfw(rtb_Compare_eg1i, rtb_MinMax_gz3c,
    rtb_ChrgSdl_facCvLut);

  /* End of Outputs for SubSystem: '<S26>/If' */

  /* Outputs for Atomic SubSystem: '<S26>/If1' */
  /* Constant: '<S26>/Define' */
  rtb_Switch_erme = CtAp_ChrgSdl_If1(rtb_Compare_adj5, ((uint8_T)ChrgSdl_Init),
    rtb_Switch_pl44);

  /* End of Outputs for SubSystem: '<S26>/If1' */

  /* DataTypeConversion: '<S26>/DataTypeConversion' incorporates:
   *  Delay: '<S26>/Delay'
   */
  CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE = (real32_T)rtb_Switch_erme;

  /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
   *  Delay: '<S26>/Delay'
   *  Sum: '<S26>/Add1'
   */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE -
    rtb_DataTypeConversion_j1hr;

  /* MinMax: '<S26>/MinMax' incorporates:
   *  Constant: '<S26>/Define3'
   */
  rtb_MinMax_gz3c = fmaxf(rtb_DataTypeConversion_j1hr, ChrgSdl_SingleZero);

  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_ChrgCurrent' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_SOCEndCheck' */
  /* Switch: '<S57>/Switch' incorporates:
   *  Delay: '<S27>/Delay'
   */
  rtb_Switch_erme = CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_ks4o;

  /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
   *  Delay: '<S27>/Delay1'
   */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE;

  /* Update for Delay: '<S27>/Delay' */
  CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_ks4o = rtb_TmpSignalConversionAtR_g54z;

  /* Update for Delay: '<S27>/Delay1' */
  CtAp_ChrgSdl_ARID_DEF.Delay1_DSTATE = rtb_MinMax_gz3c;

  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_SOCEndCheck' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min' */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min
    (tmpWrite);

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min' */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(tmpWrite_0);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* Outputs for Enabled SubSystem: '<S5>/ChrgSdl_SOCSet' incorporates:
   *  EnablePort: '<S31>/Enable'
   */
  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_SOCEndCheck' */
  /* Logic: '<S27>/LogicalOperator1' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Logic: '<S27>/LogicalOperator8'
   *  Logic: '<S27>/LogicalOperator9'
   *  RelationalOperator: '<S27>/RelationalOperator1'
   *  RelationalOperator: '<S27>/RelationalOperator2'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   */
  if ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)ChrgSdl_ACPlugDetected)) ||
      (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)ChrgSdl_DCPlugDetected)) ||
      ((rtb_TmpSignalConversionAtR_g54z != rtb_Switch_erme) || (rtb_MinMax_gz3c
        != rtb_DataTypeConversion_j1hr))) {
    /* SignalConversion generated from: '<S31>/ChrMgmt_ChrgTarSOC_pct' */
    CtAp_ChrgSdl_ARID_DEF.ChrMgmt_ChrgTarSOC_pct =
      rtb_TmpSignalConversionAtR_g54z;

    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S31>/CAL'
     *  MinMax: '<S31>/MinMax1'
     */
    rtb_Switch_mzzu = (uint8_T)fminf((real32_T)
      CtAp_ChrgSdl_ARID_DEF.ChrMgmt_ChrgTarSOC_pct, ChrgSdl_CCEndSOC_CFG);

    /* DataTypeConversion: '<S31>/DataTypeConversion5' */
    CtAp_ChrgSdl_ARID_DEF.DataTypeConversion5 = (real32_T)rtb_Switch_mzzu;

    /* DataTypeConversion: '<S31>/DataTypeConversion6' */
    CtAp_ChrgSdl_ARID_DEF.DataTypeConversion6 = (real32_T)rtb_Switch_mzzu;

    /* Lookup_n-D: '<S60>/ChrgSdl_facCvLut' incorporates:
     *  DataTypeConversion: '<S31>/DataTypeConversion3'
     */
    rtb_ChrgSdl_facCvLut = (real32_T)rtb_MinMax_d0le;

    /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S31>/DataTypeConversion2'
     */
    rtb_DataTypeConversion_j1hr = rtb_TmpSignalConversionAtRTE_R_;

    /* Lookup_n-D: '<S60>/ChrgSdl_facCvLut' incorporates:
     *  DataTypeConversion: '<S62>/DataTypeConversion'
     *  Lookup_n-D: '<S31>/ChrgSdl_CcStrtTempSOCMap'
     */
    rtb_ChrgSdl_facCvLut = look2_iflf_binlx(rtb_ChrgSdl_facCvLut,
      rtb_DataTypeConversion_j1hr, &ChrgSdl_CcStrtTempSOCX_Map[0],
      &ChrgSdl_CcStrtTempSOCY_Map[0], &ChrgSdl_CcStrtTempSOC_Map[0],
      CtAp_ChrgSdl_ConstP.ChrgSdl_CcStrtTempSOCMap_maxInd, 6U);

    /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
     *  MinMax: '<S31>/MinMax'
     */
    rtb_DataTypeConversion_j1hr = fminf(rtb_ChrgSdl_facCvLut, (real32_T)
      CtAp_ChrgSdl_ARID_DEF.ChrMgmt_ChrgTarSOC_pct);

    /* DataTypeConversion: '<S31>/DataTypeConversion1' */
    rtb_DataTypeConversion1 = rtb_DataTypeConversion_j1hr;

    /* DataTypeConversion: '<S31>/DataTypeConversion4' */
    CtAp_ChrgSdl_ARID_DEF.DataTypeConversion4 = rtb_DataTypeConversion_j1hr;
  }

  /* End of Logic: '<S27>/LogicalOperator1' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_SOCEndCheck' */
  /* End of Outputs for SubSystem: '<S5>/ChrgSdl_SOCSet' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah' */
  (void)Rte_Read_RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah
    (&tmpRead_0);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* Outputs for Atomic SubSystem: '<S5>/ChrgSdl_ChargeMod' */
  /* Outputs for Atomic SubSystem: '<S29>/ChrMgmt_ChrgModSet' */
  /* RelationalOperator: '<S43>/RelationalOperator' */
  rtb_RelationalOperator_oce5 = (rtb_TmpSignalConversionAtRTE_R_ >
    CtAp_ChrgSdl_ARID_DEF.DataTypeConversion6);

  /* Logic: '<S43>/LogicalOperator' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S47>/Constant'
   *  Logic: '<S43>/LogicalOperator1'
   *  Logic: '<S43>/LogicalOperator4'
   *  Logic: '<S43>/LogicalOperator5'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S47>/Compare'
   */
  rtb_LogicalOperator_nkbr = ((!rtb_RelationalOperator_oce5 &&
    (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)ChrgSdl_ACCharging))) ||
    ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)ChrgSdl_DCCharging)) &&
     (rtb_TmpSignalConversionAtR_mtab == ((uint8_T)ChrgSdl_ConstCurrent))));

  /* Logic: '<S43>/LogicalOperator6' incorporates:
   *  Constant: '<S48>/Constant'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S53>/Constant'
   *  Logic: '<S43>/LogicalOperator2'
   *  Logic: '<S43>/LogicalOperator7'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S53>/Compare'
   */
  rtb_LogicalOperator6 = (((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCCharging)) && (rtb_TmpSignalConversionAtR_mtab == ((uint8_T)
    ChrgSdl_ConstVoltage))) || ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACCharging)) && rtb_RelationalOperator_oce5));

  /* Outputs for Atomic SubSystem: '<S43>/If1' */
  /* Constant: '<S43>/Define1' incorporates:
   *  Delay: '<S43>/Delay'
   */
  rtb_Switch_erme = CtAp_ChrgSdl_If_hkuy(rtb_LogicalOperator6, ((uint8_T)
    ChrgSdl_CVMod), CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr);

  /* End of Outputs for SubSystem: '<S43>/If1' */

  /* Outputs for Atomic SubSystem: '<S43>/If' */
  /* Constant: '<S43>/Define' */
  rtb_Switch_mzzu = CtAp_ChrgSdl_If_hkuy(rtb_LogicalOperator_nkbr, ((uint8_T)
    ChrgSdl_CCMod), rtb_Switch_erme);

  /* End of Outputs for SubSystem: '<S43>/If' */

  /* Logic: '<S43>/LogicalOperator3' incorporates:
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   */
  rtb_LogicalOperator3 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ACPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_DCPreheating)));

  /* Outputs for Atomic SubSystem: '<S43>/If2' */
  /* Constant: '<S43>/Define3' */
  rtb_Switch_erme = CtAp_ChrgSdl_If_hkuy(rtb_LogicalOperator3, ((uint8_T)
    ChrgSdl_PreMod), rtb_Switch_mzzu);

  /* End of Outputs for SubSystem: '<S43>/If2' */

  /* Logic: '<S43>/LogicalOperator8' incorporates:
   *  Constant: '<S46>/Constant'
   *  Constant: '<S50>/Constant'
   *  Constant: '<S54>/Constant'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   */
  rtb_LogicalOperator8 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ChargeComplete)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_ChargeFault)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgSdl_KeepWarm)));

  /* Outputs for Atomic SubSystem: '<S43>/If3' */
  /* Constant: '<S43>/Define4' */
  rtb_Switch_mzzu = CtAp_ChrgSdl_If_hkuy(rtb_LogicalOperator8, ((uint8_T)
    ChrgSdl_Init), rtb_Switch_erme);

  /* End of Outputs for SubSystem: '<S43>/If3' */

  /* DataTypeConversion: '<S43>/DataTypeConversion' incorporates:
   *  Delay: '<S43>/Delay'
   */
  CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr = rtb_Switch_mzzu;

  /* End of Outputs for SubSystem: '<S29>/ChrMgmt_ChrgModSet' */
  /* End of Outputs for SubSystem: '<S5>/ChrgSdl_ChargeMod' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrgSdl_ChrgTimRemain' */
  /* Outputs for Atomic SubSystem: '<S30>/ChrgSdl_CCPrdCalcn' */
  /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
   *  Sum: '<S59>/Add1'
   */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_ARID_DEF.DataTypeConversion5 -
    rtb_TmpSignalConversionAtRTE_R_;

  /* Lookup_n-D: '<S60>/ChrgSdl_facCvLut' incorporates:
   *  Constant: '<S59>/Define2'
   *  MinMax: '<S59>/MinMax1'
   */
  rtb_ChrgSdl_facCvLut = fmaxf(rtb_DataTypeConversion_j1hr, (real32_T)((uint8_T)
    ChrgSdl_Init));

  /* Product: '<S59>/Divide3' incorporates:
   *  Constant: '<S59>/Constant'
   *  Constant: '<S59>/Constant1'
   *  Product: '<S59>/Divide'
   *  Product: '<S59>/Divide1'
   */
  rtb_Divide3 = (rtb_ChrgSdl_facCvLut / ChrgSdl_100Percent) * (tmpRead_0 *
    ChrgSdl_Hour2SecFac);

  /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion4'
   *  Lookup_n-D: '<S59>/ChrgSdl_CcCurrMax_Map'
   *  Sum: '<S59>/Add'
   */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_ARID_DEF.DataTypeConversion5 -
    CtAp_ChrgSdl_ARID_DEF.DataTypeConversion4;
  rtb_DataTypeConversion_j1hr = look2_iflf_binlx
    (CtAp_ChrgSdl_ARID_DEF.DataTypeConversion4, rtb_DataTypeConversion_j1hr,
     &ChrgSdl_CcCurrMaxX_Map[0], &ChrgSdl_CcCurrMaxY_Map[0],
     &ChrgSdl_CcCurrMax_Map[0],
     CtAp_ChrgSdl_ConstP.ChrgSdl_CcCurrMax_Map_maxIndex, 5U);

  /* MinMax: '<S59>/MinMax' */
  rtb_MinMax = fminf(rtb_MinMax_gz3c, rtb_DataTypeConversion_j1hr);

  /* Outputs for Atomic SubSystem: '<S59>/ATOM_SafeDivide' */
  /* Constant: '<S59>/Define1' */
  rtb_DataTypeConversion_j1hr = CtAp_ChrgSdl_ATOM_SafeDivide(rtb_Divide3,
    rtb_MinMax, 2.22044605E-16F);

  /* End of Outputs for SubSystem: '<S59>/ATOM_SafeDivide' */

  /* Logic: '<S59>/LogicalOperator' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Delay: '<S43>/Delay'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   */
  rtb_LogicalOperator = ((CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr == ((uint8_T)
    ChrgSdl_CCMod)) || (CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr == ((uint8_T)
    ChrgSdl_PreMod)));

  /* Outputs for Atomic SubSystem: '<S59>/If' */
  /* Constant: '<S59>/Define' */
  rtb_Switch_hyeb = CtAp_ChrgSdl_If_fjuu(rtb_LogicalOperator,
    rtb_DataTypeConversion_j1hr, ((uint8_T)ChrgSdl_Init));

  /* End of Outputs for SubSystem: '<S59>/If' */

  /* SignalConversion generated from: '<S59>/If' */
  ChrgSdl_CCTimRemain = rtb_Switch_hyeb;

  /* End of Outputs for SubSystem: '<S30>/ChrgSdl_CCPrdCalcn' */

  /* Outputs for Atomic SubSystem: '<S30>/ChrgSdl_CVPrdCalcn' */
  /* Chart: '<S60>/ATOM_Chart' incorporates:
   *  Delay: '<S43>/Delay'
   *  Inport: '<Root>/RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A'
   */
  if (CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr == ((uint8_T)ChrgSdl_CVMod)) {
    (void)Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
      (&rtb_ChrgSdl_iCv);
    rtb_TmpSignalConversionAtRTE_R_ = (real32_T)
      CtAp_ChrgSdl_ARID_DEF.ChrMgmt_ChrgTarSOC_pct -
      rtb_TmpSignalConversionAtRTE_R_;
  } else if ((CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr < ((uint8_T)ChrgSdl_CVMod))
             && (CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr > ((uint8_T)
               ChrgSdl_Init))) {
    rtb_TmpSignalConversionAtRTE_R_ = (real32_T)
      CtAp_ChrgSdl_ARID_DEF.ChrMgmt_ChrgTarSOC_pct -
      CtAp_ChrgSdl_ARID_DEF.DataTypeConversion6;
    rtb_ChrgSdl_iCv = rtb_MinMax_gz3c;
  } else {
    rtb_TmpSignalConversionAtRTE_R_ = (real32_T)((uint8_T)ChrgSdl_Init);
    rtb_ChrgSdl_iCv = (real32_T)((uint8_T)ChrgSdl_Init);
  }

  /* End of Chart: '<S60>/ATOM_Chart' */

  /* DataTypeConversion: '<S62>/DataTypeConversion' incorporates:
   *  Lookup_n-D: '<S60>/ChrgSdl_CvTimeSecMap'
   */
  rtb_DataTypeConversion_j1hr = look2_iflf_binlx(rtb_TmpSignalConversionAtRTE_R_,
    rtb_ChrgSdl_iCv, &ChrgSdl_CvDeltaCvCurrTimeSecX_Map[0],
    &ChrgSdl_CvDeltaCvCurrTimeSecY_Map[0], &ChrgSdl_CvDeltaCvCurrTimeSec_Map[0],
    CtAp_ChrgSdl_ConstP.ChrgSdl_CvTimeSecMap_maxIndex, 7U);

  /* Lookup_n-D: '<S60>/ChrgSdl_facCvLut' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion6'
   */
  rtb_ChrgSdl_facCvLut = look1_iflf_binlx
    (CtAp_ChrgSdl_ARID_DEF.DataTypeConversion6, &ChrgSdl_facCvX_Lut[0],
     &ChrgSdl_facCv_Lut[0], 6U);

  /* Sum: '<S60>/Add' incorporates:
   *  Product: '<S60>/Product'
   */
  ChrgSdl_CVTimRemain = rtb_DataTypeConversion_j1hr -
    (rtb_DataTypeConversion_j1hr * rtb_ChrgSdl_facCvLut);

  /* End of Outputs for SubSystem: '<S30>/ChrgSdl_CVPrdCalcn' */

  /* Outputs for Atomic SubSystem: '<S30>/ChrgSdl_CurrPrdCalcn' */
  /* DataTypeConversion: '<S62>/DataTypeConversion' */
  rtb_DataTypeConversion_j1hr = (real32_T)rtb_MinMax_d0le;

  /* Lookup_n-D: '<S62>/ChrgSdl_PreHeatTimLut' incorporates:
   *  DataTypeConversion: '<S62>/DataTypeConversion'
   */
  rtb_ChrgSdl_PreHeatTimLut = look1_iflf_binlx(rtb_DataTypeConversion_j1hr,
    &ChrgSdl_PreHeatTimX_Lut[0], &ChrgSdl_PreHeatTim_Lut[0], 6U);

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Delay: '<S43>/Delay'
   */
  rtb_Compare = (CtAp_ChrgSdl_ARID_DEF.Delay_DSTATE_dmrr == ((uint8_T)
    ChrgSdl_PreMod));

  /* Outputs for Atomic SubSystem: '<S62>/If' */
  /* Constant: '<S62>/Define' */
  rtb_Switch = CtAp_ChrgSdl_If_fjuu(rtb_Compare, rtb_ChrgSdl_PreHeatTimLut,
    ((uint8_T)ChrgSdl_Init));

  /* End of Outputs for SubSystem: '<S62>/If' */

  /* SignalConversion generated from: '<S62>/If' */
  ChrgSdl_PreTimRemain = rtb_Switch;

  /* End of Outputs for SubSystem: '<S30>/ChrgSdl_CurrPrdCalcn' */

  /* Outputs for Atomic SubSystem: '<S30>/ChrgSdl_ChrgTimCalcn' */
  /* Sum: '<S61>/Add' */
  ChrgSdl_ChrgTimRemain = ChrgSdl_CVTimRemain + ChrgSdl_CCTimRemain +
    ChrgSdl_PreTimRemain;

  /* End of Outputs for SubSystem: '<S30>/ChrgSdl_ChrgTimCalcn' */
  /* End of Outputs for SubSystem: '<S5>/ChrgSdl_ChrgTimRemain' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgTimSelf' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min' */
  (void)Rte_Write_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min
    (rtb_Switch_ov5w);
}

#define CtAp_ChrgSdl_STOP_SEC_CODE
#include "CtAp_ChrgSdl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgSdl_START_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

void R_ChrgSdl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChrgSdl_PreTimRemain = 0.0F;
  ChrgSdl_ChrgTimRemain = 0.0F;
  ChrgSdl_CVTimRemain = 0.0F;
  ChrgSdl_CCTimRemain = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgSdl_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgSdl_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_ChrgTim' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/ChrMgmt_ChrgTim'
   *
   * Block requirements for '<S4>/ChrMgmt_ChrgTim':
   *  1. SWREQ_02375 Charge Time Calculate
   *  2. SWREQ_02376 Charge Time Calculate
   *  3. SWREQ_02377 Charge Time Calculate
   */
  /* SystemInitialize for Atomic SubSystem: '<S6>/ChrMgmt_ChrgTimManage' */
  /* SystemInitialize for Atomic SubSystem: '<S11>/ATOM_OnDelay' */
  CtAp_ChrgSdl_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgSdl_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S11>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S6>/ChrMgmt_ChrgTimManage' */
  /* End of SystemInitialize for SubSystem: '<S4>/ChrMgmt_ChrgTim' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_ChrgTim' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgSdl_Cyclic_50ms_sys' */
}

#define CtAp_ChrgSdl_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
