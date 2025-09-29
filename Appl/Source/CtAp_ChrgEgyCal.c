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
 *  Filename:           CtAp_ChrgEgyCal.c
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ChrgEgyCal
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 17:27:21 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 17:26:49 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgEgyCal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgEgyCal_private.h"
#include <math.h>

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Global variable introduced due to SenderReceiver mapping */
dt_Nv_ChrgEgyCalInfo RTE_RP_ChrgEgyCalInfo_tec_ChrgE;
                   /* '<Root>/RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo_write' */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgEgyCal_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgEgyCal_MemMap.h"

ARID_DEF_CtAp_ChrgEgyCal_T CtAp_ChrgEgyCal_ARID_DEF;

#define CtAp_ChrgEgyCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgEgyCal_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S9>/If'
 *    '<S9>/If1'
 *    '<S9>/If2'
 *    '<S11>/If'
 *    '<S17>/If'
 *    '<S17>/If1'
 *    '<S17>/If2'
 *    '<S18>/If'
 *    '<S18>/If1'
 *    '<S25>/If'
 *    ...
 */
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

real32_T CtAp_ChrgEgyCal_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S12>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S12>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

/* System initialize for atomic system: '<S18>/ATOM_OnDelay' */
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

void CtAp_ChrgEgyC_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgEgyCal__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S22>/Sum' incorporates:
   *  UnitDelay: '<S22>/UnitDelay'
   */
  CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

/* Output and update for atomic system: '<S18>/ATOM_OnDelay' */
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

boolean_T CtAp_ChrgEgyCal_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint8_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgEgyCal__ARID_DEF_arg)
{
  /* Switch: '<S22>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S22>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S22>/Sum' incorporates:
     *  UnitDelay: '<S22>/UnitDelay'
     */
    CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S22>/MinMax' */
    if (u0 <= CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S22>/Sum' */
      CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S22>/MinMax' */
  } else {
    /* Sum: '<S22>/Sum' incorporates:
     *  UnitDelay: '<S22>/UnitDelay'
     */
    CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)rtu_ClearValue;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* RelationalOperator: '<S22>/B_MiHold' incorporates:
   *  UnitDelay: '<S22>/UnitDelay'
   */
  return CtAp_ChrgEgyCal__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

void R_ChrgEgyCal_Cyclic_50ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  real32_T rtb_TmpSignalConversionAtR_nxtc;
  real32_T rtb_Abs;
  real32_T rtb_Gain1;
  real32_T rtb_Gain;
  real32_T rtb_Abs_c5ri;
  real32_T rtb_Product_oo2f;
  real32_T rtb_MinMax_a4qa;
  real32_T rtb_Add_po1k;
  real32_T rtb_Add1_nrfa;
  real32_T rtb_Divide_gyou;
  real32_T rtb_Switch_ixzk;
  real32_T rtb_Add_f1r2;
  real32_T rtb_Add1_h1fw;
  real32_T rtb_Divide_pml4;
  real32_T rtb_Switch_hkaq;
  real32_T rtb_Switch_mfbx;
  real32_T rtb_Switch_dpva;
  real32_T rtb_Switch_ci1c;
  real32_T rtb_Delay2;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_LogicalOperator_c2sm;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_LogicalOperator_bmod;
  boolean_T rtb_LogicalOperator_clj5;
  boolean_T rtb_LogicalOperator2_a0kf;
  boolean_T rtb_B_MiHold;
  boolean_T rtb_RelationalOperator_hscz;
  boolean_T rtb_LogicalOperator_bgrr;
  boolean_T rtb_LogicalOperator2_ea3t;
  boolean_T rtb_LogicalOperator_k3nl;
  boolean_T rtb_RelationalOperator_hfsv;
  boolean_T rtb_LogicalOperator1_mfg3;
  boolean_T rtb_RelationalOperator_l50h;
  real32_T rtb_Add1;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpRead_5;
  real32_T tmpRead_6;
  real32_T tmpWrite;
  real32_T tmpWrite_0;
  real32_T tmpWrite_1;
  uint8_T rtb_TmpSignalConversionAtR_ej1p;
  uint8_T tmpRead;

  /* Inport: '<Root>/RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(&tmpRead_2);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_ej1p);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A'
   */
  (void)Rte_Read_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V'
   */
  (void)Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V
    (&rtb_TmpSignalConversionAtR_nxtc);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_OBCSideSngDchaEgy'
   *
   * Block requirements for '<S2>/ChrMgmt_OBCSideSngDchaEgy':
   *  1. SWREQ_02334 V2L Energy caculate
   *  2. SWREQ_02335 V2L Energy caculate
   *  3. SWREQ_02336 V2L Energy clear
   */
  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgyCal' */
  /* RelationalOperator: '<S10>/RelationalOperator' incorporates:
   *  Constant: '<S10>/Define'
   */
  rtb_RelationalOperator_hfsv = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LDisCharging));

  /* Logic: '<S10>/LogicalOperator1' incorporates:
   *  Constant: '<S10>/Define3'
   *  Constant: '<S10>/Define4'
   *  Logic: '<S10>/LogicalOperator'
   *  RelationalOperator: '<S10>/RelationalOperator1'
   *  RelationalOperator: '<S10>/RelationalOperator2'
   */
  rtb_LogicalOperator1_mfg3 = (!rtb_RelationalOperator_hfsv &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgEgyCal_V2LComplete)) &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgEgyCal_V2LFault)));

  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgyCal' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgy'
   *
   * Block requirements for '<S5>/ChrMgmt_OBCSideSngDchaEgy':
   *  1. SWREQ_02334 V2L Energy caculate
   */
  /* Outputs for Atomic SubSystem: '<S9>/If2' */
  /* Constant: '<S9>/Define7' */
  rtb_Switch_hkaq = CtAp_ChrgEgyCal_If(rtb_RelationalOperator_hfsv, tmpRead_2,
    ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S9>/If2' */

  /* Switch: '<S28>/Switch' incorporates:
   *  Delay: '<S9>/Delay1'
   */
  rtb_Switch_mfbx = CtAp_ChrgEgyCal_ARID_DEF.Delay1_DSTATE_mo14;

  /* Sum: '<S9>/Add' incorporates:
   *  Constant: '<S9>/Define4'
   *  Product: '<S9>/Product1'
   */
  rtb_Add_f1r2 = (rtb_Switch_hkaq * ChrgEgyCal_dt_single) + rtb_Switch_mfbx;

  /* RelationalOperator: '<S9>/RelationalOperator' incorporates:
   *  Constant: '<S9>/Define'
   */
  rtb_RelationalOperator_l50h = (rtb_Add_f1r2 >= ChrgEgyCal_360As);

  /* Switch: '<S9>/Switch' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V'
   */
  if (rtb_RelationalOperator_l50h) {
    (void)Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(&tmpRead_3);

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S9>/Define2'
     *  Inport: '<Root>/RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V'
     *  Product: '<S9>/Product'
     */
    rtb_Switch_mfbx = tmpRead_3 * ChrgEgyCal_01Ah;
  } else {
    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S9>/Define3'
     */
    rtb_Switch_mfbx = ChrgEgyCal_singleZero;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgy' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_OBCSideSngDchaEgy' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */

  /* Inport: '<Root>/RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
    (&rtb_Add1);

  /* Inport: '<Root>/RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw' */
  (void)Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw' */
  (void)
    Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V' */
  (void)Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum' */
  (void)Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_OBCSideSngDchaEgy'
   *
   * Block requirements for '<S2>/ChrMgmt_OBCSideSngDchaEgy':
   *  1. SWREQ_02334 V2L Energy caculate
   *  2. SWREQ_02335 V2L Energy caculate
   *  3. SWREQ_02336 V2L Energy clear
   */
  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgy'
   *
   * Block requirements for '<S5>/ChrMgmt_OBCSideSngDchaEgy':
   *  1. SWREQ_02334 V2L Energy caculate
   */
  /* Switch: '<S33>/Switch' incorporates:
   *  Delay: '<S9>/Delay2'
   */
  rtb_Switch_hkaq = CtAp_ChrgEgyCal_ARID_DEF.Delay2_DSTATE_baro;

  /* Sum: '<S9>/Add1' */
  rtb_Add1_h1fw = rtb_Switch_mfbx + rtb_Switch_hkaq;

  /* Outputs for Atomic SubSystem: '<S9>/If1' */
  /* Delay: '<S9>/Delay2' incorporates:
   *  Constant: '<S9>/Define6'
   */
  CtAp_ChrgEgyCal_ARID_DEF.Delay2_DSTATE_baro = CtAp_ChrgEgyCal_If
    (rtb_LogicalOperator1_mfg3, ChrgEgyCal_singleZero, rtb_Add1_h1fw);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Product: '<S9>/Divide' incorporates:
   *  Constant: '<S9>/Define5'
   *  Delay: '<S9>/Delay2'
   */
  rtb_Divide_pml4 = CtAp_ChrgEgyCal_ARID_DEF.Delay2_DSTATE_baro *
    ChrgEgyCal_UnitConversionFactor;

  /* Outputs for Atomic SubSystem: '<S9>/If' */
  /* Delay: '<S9>/Delay1' incorporates:
   *  Constant: '<S9>/Define1'
   */
  CtAp_ChrgEgyCal_ARID_DEF.Delay1_DSTATE_mo14 = CtAp_ChrgEgyCal_If
    (rtb_RelationalOperator_l50h, ChrgEgyCal_singleZero, rtb_Add_f1r2);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgy' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgyManage' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S11>/Define'
   *  Constant: '<S11>/Define3'
   *  Constant: '<S11>/Define4'
   *  RelationalOperator: '<S11>/RelationalOperator'
   *  RelationalOperator: '<S11>/RelationalOperator1'
   *  RelationalOperator: '<S11>/RelationalOperator2'
   */
  rtb_LogicalOperator_k3nl = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LDisCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LComplete)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LFault)));

  /* Outputs for Atomic SubSystem: '<S11>/If' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh' incorporates:
   *  Constant: '<S11>/Define1'
   *
   * Block requirements for '<S11>/Define1':
   *  1. SWREQ_02336 V2L Energy clear
   */
  tmpWrite_0 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_k3nl, rtb_Divide_pml4,
    ChrgEgyCal_DchaEnergyinit);

  /* End of Outputs for SubSystem: '<S11>/If' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_OBCSideSngDchaEgyManage' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_OBCSideSngDchaEgy' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_VCUDispInfo' */
  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_VCUCalcdPODInitIDc'
   *
   * Block requirements for '<S7>/ChrMgmt_VCUCalcdPODInitIDc':
   *  1. SWREQ_02337 POD Current caculate init
   *  2. SWREQ_02337 POD Current caculate init
   */
  /* Sum: '<S26>/Add1' incorporates:
   *  Constant: '<S26>/Constant'
   *  Gain: '<S26>/Gain'
   *  MinMax: '<S26>/MinMax'
   *  Product: '<S26>/Divide'
   *  Sum: '<S26>/Add'
   */
  rtb_Add1 = ((1000.0F * (rtb_Add1 + tmpRead_5 + tmpRead_6)) / fmaxf(tmpRead_1,
    2.22044605E-16F)) - tmpRead_0;

  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_VCUCalcdPODInitIDc' */

  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_VCUCalcdPODIDc'
   *
   * Block requirements for '<S7>/ChrMgmt_VCUCalcdPODIDc':
   *  1. SWREQ_02338 POD Current caculate
   *  2. SWREQ_02339 POD Current caculate
   */
  /* Logic: '<S25>/LogicalOperator' incorporates:
   *  Constant: '<S25>/Define'
   *  Constant: '<S25>/Define1'
   *  Constant: '<S25>/Define2'
   *  RelationalOperator: '<S25>/RelationalOperator'
   *  RelationalOperator: '<S25>/RelationalOperator1'
   *  RelationalOperator: '<S25>/RelationalOperator2'
   */
  rtb_LogicalOperator_bmod = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCPlugDetected)));

  /* MinMax: '<S25>/MinMax' incorporates:
   *  Constant: '<S25>/Define3'
   *
   * Block requirements for '<S25>/Define3':
   *  1. SWREQ_02339 POD Current caculate
   */
  rtb_MinMax_a4qa = fmaxf(rtb_Add1, ChrgEgyCal_singleZero);

  /* Outputs for Atomic SubSystem: '<S25>/If'
   *
   * Block requirements for '<S25>/If':
   *  1. SWREQ_02338 POD Current caculate
   */
  /* Constant: '<S25>/Define3'
   *
   * Block requirements for '<S25>/Define3':
   *  1. SWREQ_02339 POD Current caculate
   */
  rtb_Switch_mfbx = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_bmod, rtb_MinMax_a4qa,
    ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S25>/If' */
  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_VCUCalcdPODIDc' */

  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_VCUDispChrgPwr' */
  /* Outputs for Atomic SubSystem: '<S27>/ChrMgmt_ChrgSts' */
  /* Logic: '<S29>/LogicalOperator' incorporates:
   *  Constant: '<S29>/Define'
   *  Constant: '<S29>/Define1'
   *  Constant: '<S29>/Define2'
   *  RelationalOperator: '<S29>/RelationalOperator'
   *  RelationalOperator: '<S29>/RelationalOperator1'
   *  RelationalOperator: '<S29>/RelationalOperator2'
   */
  rtb_LogicalOperator_c2sm = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ACCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ACPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_KeepWarm)));

  /* Logic: '<S29>/LogicalOperator2' incorporates:
   *  Constant: '<S29>/Define10'
   *  Constant: '<S29>/Define6'
   *  Constant: '<S29>/Define7'
   *  Constant: '<S29>/Define8'
   *  Constant: '<S29>/Define9'
   *  RelationalOperator: '<S29>/RelationalOperator10'
   *  RelationalOperator: '<S29>/RelationalOperator6'
   *  RelationalOperator: '<S29>/RelationalOperator7'
   *  RelationalOperator: '<S29>/RelationalOperator8'
   *  RelationalOperator: '<S29>/RelationalOperator9'
   */
  rtb_LogicalOperator2 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_Init)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_OffPlug)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ACPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LPlugDetected)));

  /* Logic: '<S29>/LogicalOperator3' incorporates:
   *  Constant: '<S29>/Define12'
   *  Constant: '<S29>/Define13'
   *  Constant: '<S29>/Define14'
   *  Constant: '<S29>/Define15'
   *  RelationalOperator: '<S29>/RelationalOperator12'
   *  RelationalOperator: '<S29>/RelationalOperator13'
   *  RelationalOperator: '<S29>/RelationalOperator14'
   *  RelationalOperator: '<S29>/RelationalOperator15'
   */
  rtb_LogicalOperator3 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ChargeingComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)ChrgEgyCal_ChargingFault)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)ChrgEgyCal_V2LComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)ChrgEgyCal_V2LFault)));

  /* Logic: '<S29>/LogicalOperator1' incorporates:
   *  Constant: '<S29>/Define3'
   *  Constant: '<S29>/Define4'
   *  RelationalOperator: '<S29>/RelationalOperator3'
   *  RelationalOperator: '<S29>/RelationalOperator4'
   */
  rtb_LogicalOperator1 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCPreheating)));

  /* RelationalOperator: '<S29>/RelationalOperator5' incorporates:
   *  Constant: '<S29>/Define5'
   */
  rtb_RelationalOperator5 = (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_V2LDisCharging));

  /* End of Outputs for SubSystem: '<S27>/ChrMgmt_ChrgSts' */

  /* Outputs for Atomic SubSystem: '<S27>/ChrMgmt_VCUDispChrgI'
   *
   * Block requirements for '<S27>/ChrMgmt_VCUDispChrgI':
   *  1. SWREQ_02340 Charge display information AC three phase
   *  2. SWREQ_02341 Charge display information AC signle phase
   *  3. SWREQ_02342 Charge display information DC
   *  4. SWREQ_02343 Charge display information V2L
   */
  /* Abs: '<S30>/Abs' */
  rtb_Abs_c5ri = fabsf(rtb_TmpSignalConversionAtRTE_R_);

  /* Outputs for Atomic SubSystem: '<S30>/If3'
   *
   * Block requirements for '<S30>/If3':
   *  1. SWREQ_02344 Charge display information default
   *  2. SWREQ_02344 Charge display information default
   *  3. SWREQ_02345 Charge display information init
   */
  /* Constant: '<S30>/Define' incorporates:
   *  Constant: '<S30>/Define1'
   */
  rtb_Switch_dpva = CtAp_ChrgEgyCal_If(rtb_LogicalOperator2,
    ChrgEgyCal_DispDefault, ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S30>/If3' */

  /* Outputs for Atomic SubSystem: '<S30>/If2'
   *
   * Block requirements for '<S30>/If2':
   *  1. SWREQ_02343 Charge display information V2L
   */
  rtb_Delay2 = CtAp_ChrgEgyCal_If(rtb_RelationalOperator5, rtb_Abs_c5ri,
    rtb_Switch_dpva);

  /* End of Outputs for SubSystem: '<S30>/If2' */

  /* Outputs for Atomic SubSystem: '<S30>/If1'
   *
   * Block requirements for '<S30>/If1':
   *  1. SWREQ_02342 Charge display information DC
   */
  rtb_Switch_ci1c = CtAp_ChrgEgyCal_If(rtb_LogicalOperator1, rtb_Switch_mfbx,
    rtb_Delay2);

  /* End of Outputs for SubSystem: '<S30>/If1' */

  /* RelationalOperator: '<S30>/RelationalOperator' incorporates:
   *  Constant: '<S30>/Define2'
   */
  rtb_RelationalOperator = (tmpRead == ((uint8_T)ChrgEgyCal_ThreePhase));

  /* Product: '<S30>/Product' incorporates:
   *  Constant: '<S30>/Define3'
   */
  rtb_Product_oo2f = rtb_TmpSignalConversionAtRTE_R_ *
    ChrgEgyCal_ThreePhaseCoefficient;

  /* Outputs for Atomic SubSystem: '<S30>/If4'
   *
   * Block requirements for '<S30>/If4':
   *  1. SWREQ_02341 Charge display information AC signle phase
   */
  rtb_Switch_dpva = CtAp_ChrgEgyCal_If(rtb_RelationalOperator, rtb_Product_oo2f,
    rtb_TmpSignalConversionAtRTE_R_);

  /* End of Outputs for SubSystem: '<S30>/If4' */

  /* Outputs for Atomic SubSystem: '<S30>/If'
   *
   * Block requirements for '<S30>/If':
   *  1. SWREQ_02340 Charge display information AC three phase
   */
  rtb_Switch_hkaq = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_c2sm, rtb_Switch_dpva,
    rtb_Switch_ci1c);

  /* End of Outputs for SubSystem: '<S30>/If' */
  /* End of Outputs for SubSystem: '<S27>/ChrMgmt_VCUDispChrgI' */

  /* Outputs for Atomic SubSystem: '<S27>/ChrMgmt_VCUDispChrgU'
   *
   * Block requirements for '<S27>/ChrMgmt_VCUDispChrgU':
   *  1. SWREQ_02340 Charge display information AC three phase
   *  2. SWREQ_02341 Charge display information AC signle phase
   *  3. SWREQ_02342 Charge display information DC
   *  4. SWREQ_02343 Charge display information V2L
   *  5. SWREQ_02344 Charge display information default
   */
  /* Abs: '<S32>/Abs' */
  rtb_Abs = fabsf(rtb_TmpSignalConversionAtR_nxtc);

  /* Outputs for Atomic SubSystem: '<S32>/If3'
   *
   * Block requirements for '<S32>/If3':
   *  1. SWREQ_02344 Charge display information default
   *  2. SWREQ_02344 Charge display information default
   *  3. SWREQ_02345 Charge display information init
   */
  /* Constant: '<S32>/Define' incorporates:
   *  Constant: '<S32>/Define1'
   */
  rtb_Delay2 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator2, ChrgEgyCal_DispDefault,
    ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S32>/If3' */

  /* Outputs for Atomic SubSystem: '<S32>/If2'
   *
   * Block requirements for '<S32>/If2':
   *  1. SWREQ_02343 Charge display information V2L
   */
  rtb_Switch_dpva = CtAp_ChrgEgyCal_If(rtb_RelationalOperator5, rtb_Abs,
    rtb_Delay2);

  /* End of Outputs for SubSystem: '<S32>/If2' */

  /* Outputs for Atomic SubSystem: '<S32>/If1'
   *
   * Block requirements for '<S32>/If1':
   *  1. SWREQ_02342 Charge display information DC
   */
  rtb_Delay2 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator1, tmpRead_4,
    rtb_Switch_dpva);

  /* End of Outputs for SubSystem: '<S32>/If1' */

  /* Outputs for Atomic SubSystem: '<S32>/If'
   *
   * Block requirements for '<S32>/If':
   *  1. SWREQ_02340 Charge display information AC three phase
   */
  rtb_Switch_dpva = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_c2sm,
    rtb_TmpSignalConversionAtR_nxtc, rtb_Delay2);

  /* End of Outputs for SubSystem: '<S32>/If' */
  /* End of Outputs for SubSystem: '<S27>/ChrMgmt_VCUDispChrgU' */

  /* Outputs for Atomic SubSystem: '<S27>/ChrMgmt_VCUDispChrgPwr'
   *
   * Block requirements for '<S27>/ChrMgmt_VCUDispChrgPwr':
   *  1. SWREQ_02340 Charge display information AC three phase
   *  2. SWREQ_02341 Charge display information AC signle phase
   *  3. SWREQ_02342 Charge display information DC
   *  4. SWREQ_02343 Charge display information V2L
   *  5. SWREQ_02344 Charge display information default
   *  6. SWREQ_02345 Charge display information init
   */
  /* Gain: '<S31>/Gain1' incorporates:
   *  Constant: '<S31>/Define'
   */
  rtb_Gain1 = 0.1F * ChrgEgyCal_DispPowerDefault;

  /* Outputs for Atomic SubSystem: '<S31>/If3' */
  /* Constant: '<S31>/Define1' */
  rtb_Delay2 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator2, rtb_Gain1,
    ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S31>/If3' */

  /* Gain: '<S31>/Gain' incorporates:
   *  Product: '<S31>/Product'
   */
  rtb_Gain = 0.001F * (rtb_Switch_dpva * rtb_Switch_hkaq);

  /* Logic: '<S31>/LogicalOperator' */
  rtb_LogicalOperator = (rtb_LogicalOperator_c2sm || rtb_LogicalOperator1 ||
    rtb_RelationalOperator5);

  /* Outputs for Atomic SubSystem: '<S31>/If' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW' */
  tmpWrite = CtAp_ChrgEgyCal_If(rtb_LogicalOperator, rtb_Gain, rtb_Delay2);

  /* End of Outputs for SubSystem: '<S31>/If' */
  /* End of Outputs for SubSystem: '<S27>/ChrMgmt_VCUDispChrgPwr' */
  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_VCUDispChrgPwr' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_VCUDispInfo' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_SngChrgEgy'
   *
   * Block requirements for '<S2>/ChrMgmt_SngChrgEgy':
   *  1. SWREQ_05908 charge Energy caculate
   *  2. SWREQ_05909 charge Energy caculate matain
   */
  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_SngChrgEgyCalFlg' */
  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/Define1'
   *  Constant: '<S16>/Define2'
   *  Constant: '<S16>/Define5'
   *  Constant: '<S16>/Define6'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   *  RelationalOperator: '<S16>/RelationalOperator2'
   *  RelationalOperator: '<S16>/RelationalOperator3'
   *  RelationalOperator: '<S16>/RelationalOperator4'
   */
  rtb_LogicalOperator_bgrr = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ACCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ACPreheating)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_DCPreheating)));

  /* Logic: '<S16>/LogicalOperator2' incorporates:
   *  Constant: '<S16>/Define'
   *  Constant: '<S16>/Define7'
   *  Constant: '<S16>/Define8'
   *  Logic: '<S16>/LogicalOperator1'
   *  RelationalOperator: '<S16>/RelationalOperator'
   *  RelationalOperator: '<S16>/RelationalOperator5'
   *  RelationalOperator: '<S16>/RelationalOperator6'
   */
  rtb_LogicalOperator2_ea3t = (!rtb_LogicalOperator_bgrr &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgEgyCal_ChargeingComplete))
    && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgEgyCal_ChargingFault)) &&
    (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)ChrgEgyCal_KeepWarm)));

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_SngChrgEgyCalFlg' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_SngChrgEgyIniCal' */
  /* Outputs for Atomic SubSystem: '<S17>/If1' */
  /* Constant: '<S17>/Define7' */
  rtb_Delay2 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_bgrr, rtb_Switch_hkaq,
    ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S17>/If1' */

  /* Switch: '<S24>/Switch' incorporates:
   *  Delay: '<S17>/Delay1'
   */
  rtb_Switch_ci1c = CtAp_ChrgEgyCal_ARID_DEF.Delay1_DSTATE;

  /* Sum: '<S17>/Add' incorporates:
   *  Constant: '<S17>/Define4'
   *  Product: '<S17>/Product1'
   */
  rtb_Add_po1k = (rtb_Delay2 * ChrgEgyCal_dt_single) + rtb_Switch_ci1c;

  /* RelationalOperator: '<S17>/RelationalOperator' incorporates:
   *  Constant: '<S17>/Define'
   */
  rtb_RelationalOperator_hscz = (rtb_Add_po1k >= ChrgEgyCal_360As);

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_SngChrgEgyIniCal' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_SngChrgEgy' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW' */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW
    (tmpWrite);

  /* Outport: '<Root>/RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh' */
  (void)
    Rte_Write_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh
    (tmpWrite_0);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_SngChrgEgy'
   *
   * Block requirements for '<S2>/ChrMgmt_SngChrgEgy':
   *  1. SWREQ_05908 charge Energy caculate
   *  2. SWREQ_05909 charge Energy caculate matain
   */
  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_SngChrgEgyIniCal' */
  /* Switch: '<S17>/Switch' */
  if (rtb_RelationalOperator_hscz) {
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S17>/Define2'
     *  Product: '<S17>/Product'
     */
    rtb_Switch_ci1c = rtb_Switch_dpva * ChrgEgyCal_01Ah;
  } else {
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S17>/Define3'
     */
    rtb_Switch_ci1c = ChrgEgyCal_singleZero;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Delay: '<S17>/Delay2' */
  rtb_Delay2 = CtAp_ChrgEgyCal_ARID_DEF.Delay2_DSTATE;

  /* Sum: '<S17>/Add1' */
  rtb_Add1_nrfa = rtb_Switch_ci1c + rtb_Delay2;

  /* Outputs for Atomic SubSystem: '<S17>/If2' */
  /* Constant: '<S17>/Define6' */
  rtb_Switch_ixzk = CtAp_ChrgEgyCal_If(rtb_LogicalOperator2_ea3t,
    ChrgEgyCal_singleZero, rtb_Add1_nrfa);

  /* End of Outputs for SubSystem: '<S17>/If2' */

  /* Product: '<S17>/Divide' incorporates:
   *  Constant: '<S17>/Define5'
   */
  rtb_Divide_gyou = rtb_Switch_ixzk * ChrgEgyCal_UnitConversionFactor;

  /* Outputs for Atomic SubSystem: '<S17>/If' */
  /* Delay: '<S17>/Delay1' incorporates:
   *  Constant: '<S17>/Define1'
   */
  CtAp_ChrgEgyCal_ARID_DEF.Delay1_DSTATE = CtAp_ChrgEgyCal_If
    (rtb_RelationalOperator_hscz, ChrgEgyCal_singleZero, rtb_Add_po1k);

  /* End of Outputs for SubSystem: '<S17>/If' */

  /* Update for Delay: '<S17>/Delay2' */
  CtAp_ChrgEgyCal_ARID_DEF.Delay2_DSTATE = rtb_Switch_ixzk;

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_SngChrgEgyIniCal' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_SngChrgEgyManage' */
  /* Logic: '<S18>/LogicalOperator' incorporates:
   *  Constant: '<S18>/Define7'
   *  Constant: '<S18>/Define8'
   *  RelationalOperator: '<S18>/RelationalOperator5'
   *  RelationalOperator: '<S18>/RelationalOperator6'
   */
  rtb_LogicalOperator_clj5 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    ChrgEgyCal_ChargeingComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)ChrgEgyCal_ChargingFault)));

  /* Outputs for Atomic SubSystem: '<S18>/ATOM_OnDelay' */
  /* Constant: '<S18>/Define2' incorporates:
   *  Constant: '<S18>/Define1'
   *  Constant: '<S18>/Define3'
   */
  rtb_B_MiHold = CtAp_ChrgEgyCal_ATOM_OnDelay(rtb_LogicalOperator_clj5,
    ((uint16_T)ChrgEgyCal_ChrgInfoDispTim), ((uint16_T)ChrgEgyCal_dt), ((uint8_T)
    ChrgEgyCal_Init), &CtAp_ChrgEgyCal_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S18>/ATOM_OnDelay' */

  /* Logic: '<S18>/LogicalOperator2' */
  rtb_LogicalOperator2_a0kf = !rtb_B_MiHold;

  /* Outputs for Atomic SubSystem: '<S18>/If1' */
  /* Constant: '<S18>/Define5'
   *
   * Block requirements for '<S18>/Define5':
   *  1. SWREQ_05909 charge Energy caculate matain
   */
  rtb_Switch_ci1c = CtAp_ChrgEgyCal_If(rtb_LogicalOperator2_a0kf,
    rtb_Divide_gyou, ChrgEgyCal_EgyInit);

  /* End of Outputs for SubSystem: '<S18>/If1' */

  /* Outputs for Atomic SubSystem: '<S18>/If'
   *
   * Block requirements for '<S18>/If':
   *  1. SWREQ_05908 charge Energy caculate
   */
  /* Outport: '<Root>/RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh' incorporates:
   *  Constant: '<S18>/Define4'
   *
   * Block requirements for '<S18>/Define4':
   *  1. SWREQ_05909 charge Energy caculate matain
   */
  tmpWrite_1 = CtAp_ChrgEgyCal_If(rtb_LogicalOperator_clj5, rtb_Switch_ci1c,
    ChrgEgyCal_EgyInit);

  /* End of Outputs for SubSystem: '<S18>/If' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_SngChrgEgyManage' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_SngChrgEgy' */

  /* Outputs for Atomic SubSystem: '<S2>/ChargeInformation' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh' incorporates:
   *  Constant: '<S4>/Define'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh
    (ChrgEgyCal_singleZero);

  /* Outport: '<Root>/RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh' incorporates:
   *  Constant: '<S4>/Define1'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh
    (ChrgEgyCal_singleZero);

  /* Outport: '<Root>/RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh' incorporates:
   *  Constant: '<S4>/Define3'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh
    (ChrgEgyCal_singleZero);

  /* Outport: '<Root>/RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh' incorporates:
   *  Constant: '<S4>/Define2'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh
    (ChrgEgyCal_singleZero);

  /* End of Outputs for SubSystem: '<S2>/ChargeInformation' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A' */
  (void)Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
    (rtb_Switch_mfbx);

  /* Outport: '<Root>/RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A' */
  (void)
    Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A
    (rtb_Add1);

  /* Outport: '<Root>/RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A' */
  (void)Rte_Write_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A
    (rtb_Switch_hkaq);

  /* Outport: '<Root>/RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V' */
  (void)Rte_Write_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V
    (rtb_Switch_dpva);

  /* Outport: '<Root>/RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo_write' incorporates:
   *  BusCreator generated from: '<Root>/RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo_write'
   *  Constant: '<S8>/Define'
   *  Constant: '<S8>/Define1'
   *  Constant: '<S8>/Define2'
   *  Constant: '<S8>/Define3'
   *  Constant: '<S8>/Define4'
   *  Constant: '<S8>/Define5'
   */
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_OBCSideTotDchaEgy_Wh
    = ChrgEgyCal_U32Zero;
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_PODSideTotChrgEgy_Wh
    = ChrgEgyCal_U32Zero;
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_BattSideTotChrgEgy_Wh
    = ChrgEgyCal_U32Zero;
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_DCChrgrSideTotChrgEgy_Wh
    = ChrgEgyCal_U32Zero;
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_OBCSideTotChrgEgy_Wh
    = ChrgEgyCal_U32Zero;
  CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE.ChrMgmt_BattChrgCnt_Tms
    = ChrgEgyCal_U32Zero;

  /* Outport: '<Root>/RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh' */
  (void)Rte_Write_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh
    (tmpWrite_1);
  (void)Rte_Write_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo
    (&CtAp_ChrgEgyCal_ARID_DEF.RTE_RP_ChrgEgyCalInfo_tec_ChrgE);
}

#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgEgyCal_START_SEC_VAR_CONST_8
#include "CtAp_ChrgEgyCal_MemMap.h"

void R_ChrgEgyCal_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgEgyCal_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgEgyCal_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_SngChrgEgy'
   *
   * Block requirements for '<S2>/ChrMgmt_SngChrgEgy':
   *  1. SWREQ_05908 charge Energy caculate
   *  2. SWREQ_05909 charge Energy caculate matain
   */
  /* SystemInitialize for Atomic SubSystem: '<S6>/ChrMgmt_SngChrgEgyManage' */
  /* SystemInitialize for Atomic SubSystem: '<S18>/ATOM_OnDelay' */
  CtAp_ChrgEgyC_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgEgyCal_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S18>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S6>/ChrMgmt_SngChrgEgyManage' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_SngChrgEgy' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgEgyCal_Cyclic_50ms_sys' */
}

#define CtAp_ChrgEgyCal_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgEgyCal_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
