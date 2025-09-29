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
 *  Filename:           CtAp_DCParMgmt.c
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_DCParMgmt
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:23 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:05:59 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue Jul 29 13:40:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCParMgmt.h"
#include "rtwtypes.h"
#include "CtAp_DCParMgmt_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_DCParMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S6>/If'
 *    '<S6>/If1'
 *    '<S7>/If2'
 *    '<S14>/If'
 *    '<S15>/If1'
 */
#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

real32_T CtAp_DCParMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S9>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S9>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

/* Output and update for atomic system: '<S8>/ATOM_SafeDivide' */
#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

real32_T CtAp_DCParMgmt_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps)
{
  real32_T tmp;

  /* Switch: '<S12>/LogicalSwitch' incorporates:
   *  Gain: '<S12>/Gain'
   *  Gain: '<S12>/Gain1'
   *  MinMax: '<S12>/MinMax'
   *  MinMax: '<S12>/MinMax1'
   *  RelationalOperator: '<S12>/RelationalOperator'
   */
  if (rtu_den < (0.0F * rtu_eps)) {
    tmp = fminf(rtu_den, (-1.0F) * rtu_eps);
  } else {
    tmp = fmaxf(rtu_eps, rtu_den);
  }

  /* Product: '<S12>/Product' incorporates:
   *  Switch: '<S12>/LogicalSwitch'
   */
  return rtu_num / tmp;
}

#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DCParMgmt_START_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

void R_DCParMgmt_Cyclic_50ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  real32_T rtb_TmpSignalConversionAtR_db3l;
  real32_T rtb_Switch_esls;
  real32_T rtb_Switch_apye;
  real32_T rtb_Switch_hxtw;
  real32_T rtb_Gain;
  real32_T rtb_Gain_lsyi;
  real32_T rtb_MinMax1;
  real32_T rtb_MinMax;
  real32_T rtb_Product;
  real32_T rtb_Product_pp4u;
  real32_T rtb_Switch_pyag;
  real32_T rtb_Switch_l1pt;
  boolean_T rtb_RelationalOperator1;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator_f1hu;
  dt_DCChrMgmt_DcPortTempErrLvl1 tmpRead_1;
  real32_T rtb_Switch;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpWrite;
  uint8_T rtb_TmpSignalConversionAtR_c4yl;
  uint8_T rtb_TmpSignalConversionAtR_fpr5;
  uint8_T rtb_TmpSignalConversionAtR_lcjz;
  uint8_T rtb_TmpSignalConversionAtR_lx12;
  uint8_T rtb_TmpSignalConversionAtR_nckz;
  boolean_T tmpRead_5;

  /* Inport: '<Root>/RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus' */
  (void)
    Rte_Read_RTE_R_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (&rtb_TmpSignalConversionAtR_lx12);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V
    (&rtb_TmpSignalConversionAtR_db3l);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
    (&rtb_TmpSignalConversionAtR_nckz);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_lcjz);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum
    (&rtb_TmpSignalConversionAtR_c4yl);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum
    (&rtb_TmpSignalConversionAtR_fpr5);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCParMgmt_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_DcChrgnIDcReq' */
  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_VehIDcReq'
   *
   * Block requirements for '<S4>/DCChrMgmt_VehIDcReq':
   *  1. SWREQ_03081 Vehicle current Req
   */
  /* Gain: '<S8>/Gain' incorporates:
   *  Sum: '<S8>/Add'
   */
  rtb_Gain = 1000.0F * (tmpRead_2 + tmpRead_4 + tmpRead_3);

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_SafeDivide' */
  /* Constant: '<S8>/Constant' */
  rtb_Product_pp4u = CtAp_DCParMgmt_ATOM_SafeDivide(rtb_Gain,
    rtb_TmpSignalConversionAtRTE_R_, 2.22044605E-16F);

  /* End of Outputs for SubSystem: '<S8>/ATOM_SafeDivide' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_VehIDcReq' */

  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_DcChrgIDcReqInit'
   *
   * Block requirements for '<S4>/DCChrMgmt_DcChrgIDcReqInit':
   *  1. SWREQ_03082 POD Temp lmt charge current
   *  2. SWREQ_03083 no lmt charge current
   *  3. SWREQ_03084 preheatcurrent
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Abs: '<S6>/Abs'
   */
  rtb_Switch_pyag = fabsf(tmpRead_0);

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S6>/CAL1'
   *  Sum: '<S6>/Add'
   */
  rtb_Switch_l1pt = rtb_Product_pp4u + DCChrMgmt_DCPreheatIDcCmp_CFG;

  /* MinMax: '<S6>/MinMax1' */
  rtb_MinMax1 = fminf(rtb_Switch_pyag, rtb_Switch_l1pt);

  /* Logic: '<S6>/LogicalOperator' incorporates:
   *  Constant: '<S6>/Define1'
   *  Constant: '<S6>/Define2'
   *  RelationalOperator: '<S6>/RelationalOperator'
   *  RelationalOperator: '<S6>/RelationalOperator1'
   */
  rtb_LogicalOperator_f1hu = ((rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)
    DCParMgmt_NoPreheat)) || (rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)
    DCParMgmt_PreheatComplete)));

  /* Switch: '<S10>/Switch' incorporates:
   *  Abs: '<S6>/Abs1'
   *  Sum: '<S6>/Add1'
   */
  rtb_Switch_l1pt = fabsf(tmpRead);
  rtb_Switch_l1pt += rtb_Product_pp4u;

  /* MinMax: '<S6>/MinMax' */
  rtb_MinMax = fminf(rtb_Switch_l1pt, rtb_Switch_pyag);

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/CAL'
   */
  rtb_Product = DCChrMgmt_DCPortErrIDcCoeff_CFG * rtb_MinMax;

  /* Outputs for Atomic SubSystem: '<S6>/If1'
   *
   * Block requirements for '<S6>/If1':
   *  1. SWREQ_03083 no lmt charge current
   */
  rtb_Switch_l1pt = CtAp_DCParMgmt_If
    (tmpRead_1.DCChrMgmt_ErrResDcPortTempErrLvl1, rtb_Product, rtb_MinMax);

  /* End of Outputs for SubSystem: '<S6>/If1' */

  /* Outputs for Atomic SubSystem: '<S6>/If'
   *
   * Block requirements for '<S6>/If':
   *  1. SWREQ_03082 POD Temp lmt charge current
   */
  rtb_Switch_pyag = CtAp_DCParMgmt_If(rtb_LogicalOperator_f1hu, rtb_Switch_l1pt,
    rtb_MinMax1);

  /* End of Outputs for SubSystem: '<S6>/If' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_DcChrgIDcReqInit' */

  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_DcChrgnIDcReq'
   *
   * Block requirements for '<S4>/DCChrMgmt_DcChrgnIDcReq':
   *  1. SWREQ_03085 Init current
   *  2. SWREQ_03086 DC Pause current
   *  3. SWREQ_03087 wait prehenting current
   *  4. SWREQ_03088 current require
   */
  /* Logic: '<S7>/LogicalOperator2' incorporates:
   *  Constant: '<S7>/Define1'
   *  Constant: '<S7>/Define2'
   *  Constant: '<S7>/Define3'
   *  Constant: '<S7>/Define4'
   *  Constant: '<S7>/Define5'
   *  Logic: '<S7>/LogicalOperator1'
   *  Logic: '<S7>/LogicalOperator3'
   *  Logic: '<S7>/LogicalOperator4'
   *  Logic: '<S7>/LogicalOperator5'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator3'
   *  RelationalOperator: '<S7>/RelationalOperator4'
   *  RelationalOperator: '<S7>/RelationalOperator5'
   *
   * Block requirements for '<S7>/LogicalOperator3':
   *  1. SWREQ_03087 wait prehenting current
   *
   * Block requirements for '<S7>/LogicalOperator4':
   *  1. SWREQ_03086 DC Pause current
   */
  rtb_LogicalOperator2 = (!tmpRead_5 && ((rtb_TmpSignalConversionAtR_lcjz ==
    ((uint8_T)DCParMgmt_Preheating)) || ((rtb_TmpSignalConversionAtR_lcjz ==
    ((uint8_T)DCParMgmt_HvReady)) && ((rtb_TmpSignalConversionAtR_lx12 ==
    ((uint8_T)DCParMgmt_DuringPreheating)) || (rtb_TmpSignalConversionAtR_lx12 ==
    ((uint8_T)DCParMgmt_NoPreheat)) || (rtb_TmpSignalConversionAtR_lx12 ==
    ((uint8_T)DCParMgmt_PreheatComplete))))));

  /* Gain: '<S7>/Gain' */
  rtb_Gain_lsyi = (-1.0F) * rtb_Switch_pyag;

  /* Outputs for Atomic SubSystem: '<S7>/If2' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A' incorporates:
   *  Constant: '<S7>/Define6'
   *
   * Block requirements for '<S7>/Define6':
   *  1. SWREQ_03088 current require
   */
  tmpWrite = CtAp_DCParMgmt_If(rtb_LogicalOperator2, rtb_Gain_lsyi,
    DCParMgmt_SingleZero);

  /* End of Outputs for SubSystem: '<S7>/If2' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_DcChrgnIDcReq' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_DcChrgnIDcReq' */
  /* End of Outputs for SubSystem: '<Root>/R_DCParMgmt_Cyclic_50ms_sys' */
  (void)Rte_Write_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A
    (tmpWrite);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCParMgmt_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_DcChrgnUDcReq'
   *
   * Block requirements for '<S2>/DCChrMgmt_DcChrgnUDcReq':
   *  1. SWREQ_03080 DC Voltage require
   */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcChrgnUDcReq'
   *
   * Block requirements for '<S5>/DCChrMgmt_DcChrgnUDcReq':
   *  1. SWREQ_03078 DC Voltage require
   *  2. SWREQ_03079 DC Voltage require No preheat Const Voltage
   *  3. SWREQ_06751 DC Voltage require Relay Open Const Voltage
   *  4. SWREQ_06752 DC Voltage require Relay Colse Const Voltage
   */
  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Define'
   *  Constant: '<S15>/Define2'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Inport: '<Root>/RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V'
   *  Logic: '<S14>/LogicalOperator1'
   *  RelationalOperator: '<S15>/RelationalOperator'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  Switch: '<S14>/Switch'
   *
   * Block requirements for '<S15>/Define2':
   *  1. SWREQ_03080 DC Voltage require
   */
  if (rtb_TmpSignalConversionAtR_nckz == ((uint8_T)DCParMgmt_ConstantCurrent)) {
    (void)Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V
      (&rtb_Switch);

    /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_ConCurrUDcReq' */
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S13>/CAL'
     *  Inport: '<Root>/RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V'
     *  Sum: '<S13>/Add'
     */
    rtb_Switch += DCChrMgmt_ConCurrUDcCmp_CFG;

    /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_ConCurrUDcReq' */
  } else {
    /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_ConVoltUDcReq'
     *
     * Block requirements for '<S5>/DCChrMgmt_ConVoltUDcReq':
     *  1. SWREQ_03079 DC Voltage require No preheat Const Voltage
     *  2. SWREQ_06751 DC Voltage require Relay Open Const Voltage
     */
    if ((rtb_TmpSignalConversionAtR_c4yl == ((uint8_T)DCParMgmt_RlyClosed)) &&
        (rtb_TmpSignalConversionAtR_fpr5 == ((uint8_T)DCParMgmt_RlyClosed))) {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/CAL'
       *  Sum: '<S14>/Add'
       */
      rtb_Switch_apye = rtb_TmpSignalConversionAtR_db3l -
        DCChrMgmt_ConVoltModProtdVolt_CFG;
    } else {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/Define2'
       *
       * Block requirements for '<S14>/Define2':
       *  1. SWREQ_03080 DC Voltage require
       */
      rtb_Switch_apye = DCParMgmt_SingleZero;
    }

    /* Logic: '<S14>/LogicalOperator3' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Logic: '<S14>/LogicalOperator'
     *  Logic: '<S14>/LogicalOperator4'
     *  RelationalOperator: '<S16>/Compare'
     *  RelationalOperator: '<S17>/Compare'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S21>/Compare'
     */
    rtb_LogicalOperator3 = ((rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)
      DCParMgmt_NoPreheat)) || (rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)
      DCParMgmt_PreheatComplete)) || ((rtb_TmpSignalConversionAtR_fpr5 ==
      ((uint8_T)DCParMgmt_RlyOpened)) && (rtb_TmpSignalConversionAtR_c4yl ==
      ((uint8_T)DCParMgmt_RlyClosed))));

    /* Outputs for Atomic SubSystem: '<S14>/If' */
    rtb_Switch_hxtw = CtAp_DCParMgmt_If(rtb_LogicalOperator3,
      rtb_TmpSignalConversionAtR_db3l, rtb_Switch_apye);

    /* End of Outputs for SubSystem: '<S14>/If' */
    /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_ConVoltUDcReq' */

    /* RelationalOperator: '<S15>/RelationalOperator1' incorporates:
     *  Constant: '<S15>/Define1'
     */
    rtb_RelationalOperator1 = (rtb_TmpSignalConversionAtR_nckz == ((uint8_T)
      DCParMgmt_ConstantVoltage));

    /* Outputs for Atomic SubSystem: '<S15>/If1' */
    rtb_Switch_esls = CtAp_DCParMgmt_If(rtb_RelationalOperator1, rtb_Switch_hxtw,
      DCParMgmt_SingleZero);

    /* End of Outputs for SubSystem: '<S15>/If1' */

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S15>/Define2'
     *
     * Block requirements for '<S15>/Define2':
     *  1. SWREQ_03080 DC Voltage require
     */
    rtb_Switch = rtb_Switch_esls;
  }

  /* End of Switch: '<S15>/Switch' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcChrgnUDcReq' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_DcChrgnUDcReq' */
  /* End of Outputs for SubSystem: '<Root>/R_DCParMgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V' */
  (void)Rte_Write_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V
    (rtb_Switch);
}

#define CtAp_DCParMgmt_STOP_SEC_CODE
#include "CtAp_DCParMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DCParMgmt_START_SEC_VAR_CONST_8
#include "CtAp_DCParMgmt_MemMap.h"

void R_DCParMgmt_Init(void)
{
  /* (no initialization code required) */
}

#define CtAp_DCParMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_DCParMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
