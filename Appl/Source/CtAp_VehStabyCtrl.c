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
 *  Filename:           CtAp_VehStabyCtrl.c
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.55
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 14:22:46 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 14:14:29 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehStabyCtrl.h"
#include "rtwtypes.h"
#include "CtAp_VehStabyCtrl_private.h"
#include "Rte_Type.h"
#include "CtAp_VehStabyCtrl_Glb.h"
#include "CtAp_VehStabyCtrl_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S11>/ATOM_Limiter'
 *    '<S12>/ATOM_Limiter'
 */
#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

real32_T CtAp_VehStabyCtrl_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S13>/Switch' incorporates:
   *  RelationalOperator: '<S13>/RelationalOperator'
   *  RelationalOperator: '<S13>/RelationalOperator1'
   *  Switch: '<S13>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S13>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S13>/Switch' */
  return rty_Out_0;
}

#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/If'
 *    '<S12>/If'
 */
#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

real32_T CtAp_VehStabyCtrl_If(boolean_T rtu_if, real32_T rtu_then, uint8_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S14>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (real32_T)rtu_else;
  }

  /* End of Switch: '<S14>/Switch' */
  return rty_Out1_0;
}

#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_VehStabyCtrl_START_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

void R_VehStabyCtrl_Cyclic_10ms(void)
{
  /* local block i/o variables */
  dt_ComM_IBSSts04E2ETimeoutInfo rtb_ComM_IBSSts04E2ETimeoutInfo;
  dt_ComM_IBSSts04CRCInfo rtb_ComM_IBSSts04CRCInfo_Bus;
  dt_ComM_IBSSts02E2ETimeoutInfo rtb_ComM_IBSSts02E2ETimeoutInfo;
  dt_ComM_IBSSts02CRCInfo rtb_ComM_IBSSts02CRCInfo_Bus;
  real32_T rtb_Switch;
  real32_T rtb_Switch_nk5j;
  real32_T rtb_ComM_MotActTq_Nm;
  real32_T rtb_Switch_lwxq;
  boolean_T rtb_ComM_IBSDtcActv_Flg;
  boolean_T rtb_ComM_IBSTcsActv_Flg;
  boolean_T rtb_ComM_IBSVdcActv_Flg;
  dt_ComM_IBSVCUMotCtrlCRCInfo tmpRead_2;
  dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo tmpRead_3;
  real32_T tmpRead;
  real32_T tmpRead_1;
  real32_T tmpRead_9;
  uint8_T tmpRead_7;
  uint8_T tmpRead_8;
  boolean_T rtb_ChassisMgmt_GearD_Flg;
  boolean_T tmpRead_0;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;
  boolean_T tmpRead_6;

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead_9);

  /* SignalConversion: '<S4>/SignalCopy18' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm'
   */
  (void)Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
    (&rtb_ComM_MotActTq_Nm);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
    (&tmpRead_4);

  /* SignalConversion: '<S4>/SignalCopy12' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg
    (&rtb_ComM_IBSVdcActv_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus
    (&tmpRead_2);

  /* SignalConversion: '<S4>/SignalCopy9' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg
    (&rtb_ComM_IBSTcsActv_Flg);

  /* SignalConversion: '<S4>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus'
   */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus
    (&rtb_ComM_IBSSts04E2ETimeoutInfo);

  /* SignalConversion: '<S4>/SignalCopy7' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(
    &rtb_ComM_IBSSts04CRCInfo_Bus);

  /* SignalConversion: '<S4>/SignalCopy6' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus'
   */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
    (&rtb_ComM_IBSSts02E2ETimeoutInfo);

  /* SignalConversion: '<S4>/SignalCopy5' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(
    &rtb_ComM_IBSSts02CRCInfo_Bus);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg
    (&rtb_ChassisMgmt_GearD_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(&tmpRead);

  /* SignalConversion: '<S4>/SignalCopy' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg
    (&rtb_ComM_IBSDtcActv_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehStabyCtrl_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
   *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
   */
  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S8>/VehStabyCtrl_DRIVEREADY'
   *  Constant: '<S8>/VehStabyCtrl_GEAR_D'
   *  Constant: '<S8>/VehStabyCtrl_GEAR_R'
   *  Logic: '<S8>/LogicalOperator'
   *  Logic: '<S8>/LogicalOperator2'
   *  Logic: '<S8>/LogicalOperator3'
   *  Logic: '<S8>/LogicalOperator4'
   *  Logic: '<S8>/LogicalOperator5'
   *  Logic: '<S8>/LogicalOperator6'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator1'
   *  RelationalOperator: '<S8>/Relational Operator2'
   *  SignalConversion: '<S4>/SignalCopy10'
   *  SignalConversion: '<S4>/SignalCopy11'
   *  SignalConversion: '<S4>/SignalCopy13'
   *  SignalConversion: '<S4>/SignalCopy14'
   *  SignalConversion: '<S4>/SignalCopy15'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  SignalConversion: '<S4>/SignalCopy17'
   */
  ChassisMgmt_VehStbCtrlTqAvl_Flg = (((tmpRead_7 == ((uint8_T)
    VehStabyCtrl_GEAR_R)) || (tmpRead_7 == ((uint8_T)VehStabyCtrl_GEAR_D))) &&
    (tmpRead_8 == ((uint8_T)VehStabyCtrl_DRIVEREADY)) && !tmpRead_5 &&
    !tmpRead_6 && !tmpRead_4 &&
    !tmpRead_3.ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo &&
    !tmpRead_2.ComM_ErrResIBSVCUMotCtrlCRCErrorInfo);

  /* Logic: '<S11>/LogicalOperator1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy2'
   */
  ChassisMgmt_IBSIntvIncTqActv_Flg = (ChassisMgmt_VehStbCtrlTqAvl_Flg &&
    tmpRead_0);

  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  ChassisMgmt_IBSIntvRednTqActv_Flg = (ChassisMgmt_VehStbCtrlTqAvl_Flg &&
    rtb_ChassisMgmt_GearD_Flg);

  /* Outputs for Atomic SubSystem: '<S6>/Torque_Limit'
   *
   * Block requirements for '<S6>/Torque_Limit':
   *  1. SWREQ_06026 TCS/VDC torque requst limit
   *  2. SWREQ_01546 TCS/VDC torque requst limit
   *  3. SWREQ_01549 DTC torque requst limit
   *  4. SWREQ_06027 DTC torque requst limit
   */
  /* RelationalOperator: '<S9>/RelationalOperator' incorporates:
   *  Constant: '<S9>/VehStabyCtrl_GEAR_D'
   *  SignalConversion: '<S4>/SignalCopy16'
   */
  rtb_ChassisMgmt_GearD_Flg = (tmpRead_7 == ((uint8_T)VehStabyCtrl_GEAR_D));

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */

  /* Switch: '<S9>/Switch' */
  if (rtb_ChassisMgmt_GearD_Flg) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
     *
     * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
     *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
     */
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvRednThdTq_CFG1'
     *  SignalConversion: '<S4>/SignalCopy19'
     *  Sum: '<S9>/Add'
     */
    TorqPahMgmt_IBSIntvRednMaxTq_Nm = ChassisMgmt_IBSIntvRednThdTq_CFG +
      tmpRead_9;

    /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvRednMaxTq_CFG'
     */
    TorqPahMgmt_IBSIntvRednMaxTq_Nm = ChassisMgmt_IBSIntvRednMaxTq_CFG;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
   *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
   */
  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/VehStabyCtrl_GEAR_D1'
   *  Logic: '<S9>/LogicalOperator'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  Switch: '<S9>/Switch3'
   */
  if (rtb_ChassisMgmt_GearD_Flg || (tmpRead_7 == ((uint8_T)VehStabyCtrl_GEAR_R)))
  {
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvIncMaxTq_CFG'
     */
    TorqPahMgmt_IBSIntvIncMaxTq_Nm = ChassisMgmt_IBSIntvIncMaxTq_CFG;

    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvRednMaxThdTq_CFG2'
     *  SignalConversion: '<S4>/SignalCopy19'
     *  Sum: '<S9>/Subtract1'
     */
    TorqPahMgmt_IBSIntvIncMinTq_Nm = tmpRead_9 - ChassisMgmt_IBSIntvIncThdTq_CFG;
  } else {
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/VehStabyCtrl_ZERO_TORQUE'
     */
    TorqPahMgmt_IBSIntvIncMaxTq_Nm = (real32_T)((uint8_T)
      VehStabyCtrl_ZERO_TORQUE);

    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S9>/VehStabyCtrl_ZERO_TORQUE1'
     */
    TorqPahMgmt_IBSIntvIncMinTq_Nm = (real32_T)((uint8_T)
      VehStabyCtrl_ZERO_TORQUE);
  }

  /* End of Switch: '<S9>/Switch2' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */

  /* Switch: '<S9>/Switch1' */
  if (rtb_ChassisMgmt_GearD_Flg) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvRednMinTq_CFG'
     */
    TorqPahMgmt_IBSIntvRednMinTq_Nm = ChassisMgmt_IBSIntvRednMinTq_CFG;
  } else {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
     *
     * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
     *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
     */
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/ChassisMgmt_IBSIntvRednMThdTq_CFG'
     *  SignalConversion: '<S4>/SignalCopy19'
     *  Sum: '<S9>/Subtract'
     */
    TorqPahMgmt_IBSIntvRednMinTq_Nm = tmpRead_9 -
      ChassisMgmt_IBSIntvRednThdTq_CFG;

    /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */
  }

  /* End of Switch: '<S9>/Switch1' */
  /* End of Outputs for SubSystem: '<S6>/Torque_Limit' */

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/ChassisMgmt_VehRednRat_CFG'
   *  Constant: '<S11>/ChassisMgmt_VehTrsmEff_CFG'
   *  Product: '<S12>/Product'
   */
  tmpRead_9 = ChassisMgmt_VehRednRat_CFG * ChassisMgmt_VehTrsmEff_CFG;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
   *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
   */
  /* Product: '<S11>/Divide' incorporates:
   *  Product: '<S11>/Product'
   *  SignalConversion: '<S4>/SignalCopy1'
   */
  ChassisMgmt_IBSIntvIncMotTq_Nm = tmpRead / tmpRead_9;

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_Limiter' */
  rtb_Switch_lwxq = CtAp_VehStabyCtrl_ATOM_Limiter
    (TorqPahMgmt_IBSIntvIncMaxTq_Nm, ChassisMgmt_IBSIntvIncMotTq_Nm,
     TorqPahMgmt_IBSIntvIncMinTq_Nm);

  /* End of Outputs for SubSystem: '<S11>/ATOM_Limiter' */

  /* Outputs for Atomic SubSystem: '<S11>/If' */
  /* Constant: '<S11>/VehStabyCtrl_ZERO_TORQUE' */
  rtb_Switch_nk5j = CtAp_VehStabyCtrl_If(ChassisMgmt_IBSIntvIncTqActv_Flg,
    rtb_Switch_lwxq, ((uint8_T)VehStabyCtrl_ZERO_TORQUE));

  /* End of Outputs for SubSystem: '<S11>/If' */

  /* SignalConversion generated from: '<S11>/If' */
  ChassisMgmt_IBSIntvDesIncTq_Nm = rtb_Switch_nk5j;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Input':
   *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
   */
  /* Product: '<S12>/Divide' incorporates:
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  ChassisMgmt_IBSIntvRednMotTq_Nm = tmpRead_1 / tmpRead_9;

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_Limiter' */
  rtb_Switch_lwxq = CtAp_VehStabyCtrl_ATOM_Limiter
    (TorqPahMgmt_IBSIntvRednMaxTq_Nm, ChassisMgmt_IBSIntvRednMotTq_Nm,
     TorqPahMgmt_IBSIntvRednMinTq_Nm);

  /* End of Outputs for SubSystem: '<S12>/ATOM_Limiter' */

  /* Outputs for Atomic SubSystem: '<S12>/If' */
  /* Constant: '<S12>/VehStabyCtrl_ZERO_TORQUE' */
  rtb_Switch = CtAp_VehStabyCtrl_If(ChassisMgmt_IBSIntvRednTqActv_Flg,
    rtb_Switch_lwxq, ((uint8_T)VehStabyCtrl_ZERO_TORQUE));

  /* End of Outputs for SubSystem: '<S12>/If' */

  /* SignalConversion generated from: '<S12>/If' */
  ChassisMgmt_IBSIntvDesRednTq_Nm = rtb_Switch;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Output':
   *  1. SWREQ_01533 The function of "Vehicle Standby Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm
    (ChassisMgmt_IBSIntvDesIncTq_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm
    (ChassisMgmt_IBSIntvDesRednTq_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg
    (ChassisMgmt_IBSIntvIncTqActv_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg
    (ChassisMgmt_IBSIntvRednTqActv_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Output' */

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv' incorporates:
   *  Logic: '<S10>/LogicalOperator'
   */
  (void)Rte_Write_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv
    (ChassisMgmt_IBSIntvRednTqActv_Flg || ChassisMgmt_IBSIntvIncTqActv_Flg);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStabyCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_VehStabyCtrl_Output':
   *  1. SWREQ_01533 The function of "Vehicle Standby Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg
    (ChassisMgmt_VehStbCtrlTqAvl_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStabyCtrl_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_VehStabyCtrl_Cyclic_10ms_sys' */
}

#define CtAp_VehStabyCtrl_STOP_SEC_CODE
#include "CtAp_VehStabyCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_VehStabyCtrl_START_SEC_VAR_CONST_8
#include "CtAp_VehStabyCtrl_MemMap.h"

void R_VehStabyCtrl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_IBSIntvIncMotTq_Nm = 0.0F;
  ChassisMgmt_IBSIntvDesIncTq_Nm = 0.0F;
  ChassisMgmt_IBSIntvRednMotTq_Nm = 0.0F;
  ChassisMgmt_IBSIntvDesRednTq_Nm = 0.0F;
  TorqPahMgmt_IBSIntvRednMaxTq_Nm = 0.0F;
  TorqPahMgmt_IBSIntvIncMaxTq_Nm = 0.0F;
  TorqPahMgmt_IBSIntvIncMinTq_Nm = 0.0F;
  TorqPahMgmt_IBSIntvRednMinTq_Nm = 0.0F;
  ChassisMgmt_VehStbCtrlTqAvl_Flg = false;
  ChassisMgmt_IBSIntvIncTqActv_Flg = false;
  ChassisMgmt_IBSIntvRednTqActv_Flg = false;
}

#define CtAp_VehStabyCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_VehStabyCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
