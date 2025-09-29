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
 *  Filename:           CtAp_OnePedCtrl.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_OnePedCtrl
 *  Model Version:      1.70
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:33 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 17:57:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 17:57:11 2025
 *
 *
 *******************************************************************************/
#include "CtAp_OnePedCtrl.h"
#include "rtwtypes.h"
#include "CtAp_OnePedCtrl_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_OnePedCtrl_Glb.h"
#include "CtAp_OnePedCtrl_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S8>/ATOM_SafeDivide' */
#define CtAp_OnePedCtrl_START_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"

real32_T CtAp_OnePedCtrl_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps)
{
  real32_T tmp;

  /* Switch: '<S15>/LogicalSwitch' incorporates:
   *  Gain: '<S15>/Gain'
   *  Gain: '<S15>/Gain1'
   *  MinMax: '<S15>/MinMax'
   *  MinMax: '<S15>/MinMax1'
   *  RelationalOperator: '<S15>/RelationalOperator'
   */
  if (rtu_den < (0.0F * rtu_eps)) {
    tmp = fminf(rtu_den, (-1.0F) * rtu_eps);
  } else {
    tmp = fmaxf(rtu_eps, rtu_den);
  }

  /* Product: '<S15>/Product' incorporates:
   *  Switch: '<S15>/LogicalSwitch'
   */
  return rtu_num / tmp;
}

#define CtAp_OnePedCtrl_STOP_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_OnePedCtrl_START_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"

void R_OnePedCtrl_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Add;
  real32_T rtb_VehMot_Acclr2Tq_Nm;
  real32_T rtb_Product_ob0j;
  dt_FctSftyMon_DesVehDecelSpdOverFltInfo tmpRead_a;
  real32_T tmpRead;
  real32_T tmpRead_f;
  real32_T tmpRead_h;
  uint8_T tmpRead_1;
  uint8_T tmpRead_5;
  uint8_T tmpRead_9;
  uint8_T tmpRead_b;
  uint8_T tmpRead_c;
  boolean_T tmpRead_0;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_6;
  boolean_T tmpRead_7;
  boolean_T tmpRead_8;
  boolean_T tmpRead_d;
  boolean_T tmpRead_e;
  boolean_T tmpRead_g;

  /* Inport: '<Root>/RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm' */
  (void)Rte_Read_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm(&tmpRead_h);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
    (&tmpRead_f);

  /* SignalConversion: '<S4>/SignalCopy20' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm'
   */
  (void)Rte_Read_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm
    (&rtb_VehMot_Acclr2Tq_Nm);

  /* Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus' */
  (void)
    Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_OnePedCtrl_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_OnePedal_Control' */
  /* Outputs for Atomic SubSystem: '<S6>/OnePedal_Control_Mode_Status' */
  /* Outputs for Atomic SubSystem: '<S7>/Brake_Allowed_Status'
   *
   * Block requirements for '<S7>/Brake_Allowed_Status':
   *  1. SWREQ_05910 Vehicle Deceleration common condition Active
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_OnePedCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_OnePedCtrl_Input':
   *  1. SWREQ_01682 The function of "One Pedal Control" has the following inputs:
   */
  /* RelationalOperator: '<S9>/RelationalOperator2' incorporates:
   *  Constant: '<S9>/OnePedCtrl_INVALID'
   *  SignalConversion: '<S4>/SignalCopy2'
   */
  ChassisMgmt_OnePedlCtrlBrkPedlAllwdSts_Flg = (tmpRead_1 != ((uint8_T)
    OnePedCtrl_INVALID));

  /* End of Outputs for SubSystem: '<S7>/Brake_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/IBS_Allowed_Status'
   *
   * Block requirements for '<S7>/IBS_Allowed_Status':
   *  1. SWREQ_05910 Vehicle Deceleration common condition Active
   */
  /* Logic: '<S11>/LogicalOperator5' incorporates:
   *  Constant: '<S11>/OnePedCtrl_HDC_AVH_ACTIVE1'
   *  Logic: '<S11>/LogicalOperator'
   *  Logic: '<S11>/LogicalOperator1'
   *  Logic: '<S11>/LogicalOperator2'
   *  Logic: '<S11>/LogicalOperator3'
   *  Logic: '<S11>/LogicalOperator4'
   *  Logic: '<S11>/LogicalOperator6'
   *  Logic: '<S11>/LogicalOperator7'
   *  RelationalOperator: '<S11>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy10'
   *  SignalConversion: '<S4>/SignalCopy21'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  SignalConversion: '<S4>/SignalCopy8'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  ChassisMgmt_OnePedlCtrlIBSAllwdSts_Flg = (!tmpRead_g && !tmpRead_7 &&
    !tmpRead_2 && !tmpRead_4 && !tmpRead_3 && !tmpRead_8 && (tmpRead_5 !=
    ((uint8_T)OnePedCtrl_HDC_AVH_ACTIVE)) && !tmpRead_6);

  /* End of Outputs for SubSystem: '<S7>/IBS_Allowed_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/Common_Conditioning_Status'
   *
   * Block requirements for '<S7>/Common_Conditioning_Status':
   *  1. SWREQ_05910 Vehicle Deceleration common condition Active
   *  2. SWREQ_06015 Vehicle Deceleration common condition inActive
   */
  /* Outputs for Atomic SubSystem: '<S7>/Vheicle_Mode_Allowed_Status'
   *
   * Block requirements for '<S7>/Vheicle_Mode_Allowed_Status':
   *  1. SWREQ_05910 Vehicle Deceleration common condition Active
   */
  /* Logic: '<S10>/LogicalOperator' incorporates:
   *  Constant: '<S14>/OnePedCtrl_DRIVE_READY'
   *  RelationalOperator: '<S14>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy14'
   *  SignalConversion: '<S4>/SignalCopy17'
   */
  ChassisMgmt_OnePedlCtrlCmnCdng_Flg = ((tmpRead_c == ((uint8_T)
    OnePedCtrl_DRIVE_READY)) && tmpRead_d &&
    ChassisMgmt_OnePedlCtrlBrkPedlAllwdSts_Flg &&
    ChassisMgmt_OnePedlCtrlIBSAllwdSts_Flg);

  /* End of Outputs for SubSystem: '<S7>/Vheicle_Mode_Allowed_Status' */
  /* End of Outputs for SubSystem: '<S7>/Common_Conditioning_Status' */

  /* Outputs for Atomic SubSystem: '<S7>/IBS_Standstill_Request'
   *
   * Block requirements for '<S7>/IBS_Standstill_Request':
   *  1. SWREQ_01694 IBS Standstill Request
   *  2. SWREQ_01695 IBS Standstill Request clear
   */
  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Constant: '<S12>/ChassisMgmt_OnePedlCtrlReqStdlAccrPedl_CFG'
   *  Constant: '<S12>/OnePedCtrl_GEAR_D'
   *  Constant: '<S12>/OnePedCtrl_GEAR_R'
   *  Constant: '<S12>/OnePedCtrl_ONE_PEDAL'
   *  Logic: '<S12>/LogicalOperator'
   *  Logic: '<S12>/LogicalOperator2'
   *  Logic: '<S12>/LogicalOperator3'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   *  RelationalOperator: '<S12>/RelationalOperator2'
   *  RelationalOperator: '<S12>/RelationalOperator3'
   *  RelationalOperator: '<S12>/RelationalOperator4'
   *  SignalConversion: '<S4>/SignalCopy11'
   *  SignalConversion: '<S4>/SignalCopy13'
   *  SignalConversion: '<S4>/SignalCopy18'
   *  SignalConversion: '<S4>/SignalCopy19'
   */
  ChassisMgmt_OnePedlCtrlReqStdlSts_Flg = (ChassisMgmt_OnePedlCtrlCmnCdng_Flg &&
    (tmpRead_b == ((uint8_T)OnePedCtrl_ONE_PEDAL)) && (tmpRead_e && (tmpRead_f <
    ChassisMgmt_OnePedlCtrlReqStdlAccrPedl_CFG)) && ((tmpRead_9 == ((uint8_T)
    OnePedCtrl_GEAR_R)) || (tmpRead_9 == ((uint8_T)OnePedCtrl_GEAR_D))));

  /* End of Outputs for SubSystem: '<S7>/IBS_Standstill_Request' */

  /* Outputs for Atomic SubSystem: '<S7>/Vheicle_Deceleration_Status'
   *
   * Block requirements for '<S7>/Vheicle_Deceleration_Status':
   *  1. SWREQ_01688 Vehicle Deceleration calculate
   *  2. SWREQ_01689 Vehicle Deceleration Send to CAN
   *  3. SWREQ_01690 Vehicle Deceleration clear
   */
  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/OnePedCtrl_GEAR_D'
   *  Constant: '<S13>/OnePedCtrl_ONE_PEDAL'
   *  Logic: '<S13>/LogicalOperator'
   *  Logic: '<S13>/LogicalOperator1'
   *  RelationalOperator: '<S13>/RelationalOperator1'
   *  RelationalOperator: '<S13>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy11'
   *  SignalConversion: '<S4>/SignalCopy12'
   *  SignalConversion: '<S4>/SignalCopy13'
   *  Switch: '<S13>/Switch1'
   */
  if (tmpRead_a.FctSftyMon_ErrResDesVehDecelSpdOverFltInfo) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/OnePedCtrl_ERROR'
     */
    ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum = ((uint8_T)OnePedCtrl_ERROR);
  } else if (ChassisMgmt_OnePedlCtrlCmnCdng_Flg && ((tmpRead_b == ((uint8_T)
                OnePedCtrl_ONE_PEDAL)) || tmpRead_0) && (tmpRead_9 == ((uint8_T)
               OnePedCtrl_GEAR_D))) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/OnePedCtrl_ACTIVE'
     *  Switch: '<S13>/Switch'
     */
    ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum = ((uint8_T)OnePedCtrl_ACTIVE);
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/OnePedCtrl_NO_ACTIVE'
     *  Switch: '<S13>/Switch1'
     */
    ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum = ((uint8_T)OnePedCtrl_NO_ACTIVE);
  }

  /* End of Switch: '<S13>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/Vheicle_Deceleration_Status' */
  /* End of Outputs for SubSystem: '<S6>/OnePedal_Control_Mode_Status' */

  /* Outputs for Atomic SubSystem: '<S6>/Vheicle_Deceleration_Calculation'
   *
   * Block requirements for '<S6>/Vheicle_Deceleration_Calculation':
   *  1. SWREQ_01691 Vehicle Deceleration Limit
   *  2. SWREQ_01692 Deceleration request Active
   *  3. SWREQ_01693 Deceleration request Inctive
   *  4. SWREQ_01689 Vehicle Deceleration Send to CAN
   *  5. SWREQ_01690 Vehicle Deceleration clear
   *  6. SWREQ_01688 Vehicle Deceleration calculate
   */
  /* Sum: '<S8>/Add' incorporates:
   *  Constant: '<S8>/ChassisMgmt_VehDragTqDir_CFG'
   *  Constant: '<S8>/ChassisMgmt_VehRednRat_CFG'
   *  Constant: '<S8>/ChassisMgmt_VehTrsmEff_CFG'
   *  Product: '<S8>/Product'
   *  Product: '<S8>/Product1'
   *  Product: '<S8>/Product2'
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy15'
   */
  rtb_Add = (ChassisMgmt_VehDragTqDir_CFG * tmpRead_h) + ((tmpRead *
    ChassisMgmt_VehRednRat_CFG) * ChassisMgmt_VehTrsmEff_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_OnePedCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_SafeDivide' */
  /* Constant: '<S8>/OnePedCtrl_MIN_DIVIDE' */
  rtb_Product_ob0j = CtAp_OnePedCtrl_ATOM_SafeDivide(rtb_Add,
    rtb_VehMot_Acclr2Tq_Nm, OnePedCtrl_MIN_DIVIDE);

  /* End of Outputs for SubSystem: '<S8>/ATOM_SafeDivide' */

  /* SignalConversion generated from: '<S8>/ATOM_SafeDivide' */
  ChassisMgmt_DesNoLmtVehDecelSpd_mps2q = rtb_Product_ob0j;

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/OnePedCtrl_ACTIVE'
   *  RelationalOperator: '<S8>/RelationalOperator'
   */
  if (ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum == ((uint8_T)OnePedCtrl_ACTIVE))
  {
    /* Switch: '<S8>/Switch' */
    ChassisMgmt_DesVehDecelSpd_mps2q = ChassisMgmt_DesNoLmtVehDecelSpd_mps2q;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/ChassisMgmt_MaxVehDecelSpd_CFG'
     */
    ChassisMgmt_DesVehDecelSpd_mps2q = ChassisMgmt_MaxVehDecelSpd_CFG;
  }

  /* End of Switch: '<S8>/Switch' */

  /* RelationalOperator: '<S8>/RelationalOperator2' incorporates:
   *  Constant: '<S8>/ChassisMgmt_MinVehDecelSpd_CFG'
   */
  ChassisMgmt_VehDecelSpdSts_Flg = (ChassisMgmt_DesVehDecelSpd_mps2q <=
    ChassisMgmt_MinVehDecelSpd_CFG);

  /* End of Outputs for SubSystem: '<S6>/Vheicle_Deceleration_Calculation' */
  /* End of Outputs for SubSystem: '<S2>/Function_OnePedal_Control' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_OnePedCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_OnePedCtrl_Output':
   *  1. SWREQ_01684 The function of "One Pedal Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q
    (ChassisMgmt_DesVehDecelSpd_mps2q);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg
    (ChassisMgmt_VehDecelSpdSts_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg
    (ChassisMgmt_OnePedlCtrlReqStdlSts_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_OnePedCtrl_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_OnePedCtrl_Cyclic_10ms_sys' */
}

#define CtAp_OnePedCtrl_STOP_SEC_CODE
#include "CtAp_OnePedCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_OnePedCtrl_START_SEC_VAR_CONST_8
#include "CtAp_OnePedCtrl_MemMap.h"

void R_OnePedCtrl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_DesNoLmtVehDecelSpd_mps2q = 0.0F;
  ChassisMgmt_DesVehDecelSpd_mps2q = 0.0F;
  ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum = ((uint8_T)0U);
  ChassisMgmt_VehDecelSpdSts_Flg = false;
  ChassisMgmt_OnePedlCtrlReqStdlSts_Flg = false;
  ChassisMgmt_OnePedlCtrlIBSAllwdSts_Flg = false;
  ChassisMgmt_OnePedlCtrlCmnCdng_Flg = false;
  ChassisMgmt_OnePedlCtrlBrkPedlAllwdSts_Flg = false;
}

#define CtAp_OnePedCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_OnePedCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
