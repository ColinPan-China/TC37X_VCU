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
 *  Filename:           CtAp_CoastCtrl.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_CoastCtrl
 *  Model Version:      1.82
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 17:23:01 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 16:20:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CoastCtrl.h"
#include <math.h>
#include "rtwtypes.h"
#include "look2_iflf_binlca.h"
#include "CtAp_CoastCtrl_Glb.h"
#include "CtAp_CoastCtrl_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_CoastCtrl_START_SEC_CODE
#include "CtAp_CoastCtrl_MemMap.h"

void R_CoastCtrl_Cyclic_10ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_LogicalOperator3;
  real32_T rtb_Switch;
  real32_T tmpRead;
  real32_T tmpRead_5;
  uint8_T tmpRead_0;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_4;
  uint8_T tmpRead_7;
  boolean_T tmpRead_1;
  boolean_T tmpRead_6;
  boolean_T tmpRead_8;

  /* Inport: '<Root>/RTE_R_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts' */
  (void)Rte_Read_RTE_R_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_ACUYawRate_tec_ComM_ACUYawRate' */
  (void)Rte_Read_RTE_R_ComM_ACUYawRate_tec_ComM_ACUYawRate(&rtb_Switch);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_CoastCtrl_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Coast_Control_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/Coast_Control_Status'
   *
   * Block requirements for '<S4>/Coast_Control_Status':
   *  1. SWREQ_01615 Coast active
   *  2. SWREQ_01616 Coast Inactive
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CoastCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CoastCtrl_Input':
   *  1. SWREQ_01609 The function of "Coast Control" has the following inputs:
   */
  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Constant: '<S7>/CoastCtrl_DRIVE_READY'
   *  Constant: '<S7>/CoastCtrl_GEAR_D'
   *  Constant: '<S7>/CoastCtrl_OFF'
   *  Constant: '<S7>/CoastCtrl_STANDBY'
   *  Logic: '<S7>/LogicalOperator'
   *  Logic: '<S7>/LogicalOperator2'
   *  Logic: '<S7>/LogicalOperator4'
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator3'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  ChassisMgmt_CoastCtrlActv_Flg = ((tmpRead_4 == ((uint8_T)CoastCtrl_DRIVE_READY))
    && (tmpRead_2 == ((uint8_T)CoastCtrl_GEAR_D)) && !tmpRead_1 && ((tmpRead_0 ==
    ((uint8_T)CoastCtrl_OFF)) || (tmpRead_0 == ((uint8_T)CoastCtrl_STANDBY))) &&
    !tmpRead_8);

  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator3 = !tmpRead_6;

  /* End of Outputs for SubSystem: '<S4>/Coast_Control_Status' */

  /* Outputs for Atomic SubSystem: '<S4>/SteeringToCoastingTorqueGainFactor '
   *
   * Block requirements for '<S4>/SteeringToCoastingTorqueGainFactor ':
   *  1. SWREQ_06047 Coast  Torque High Gain Factor
   *  2. SWREQ_06048 Coast Middle Torque Gain Factor
   *  3. SWREQ_06049 Coast low Torque Gain Factor
   *  4. SWREQ_06050 Coast Torque Gain Factor clear
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/CoastCtrl_HIGH'
   *  Constant: '<S9>/CoastCtrl_LOW'
   *  Constant: '<S9>/CoastCtrl_MIDDLE'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  RelationalOperator: '<S9>/RelationalOperator2'
   *  RelationalOperator: '<S9>/RelationalOperator3'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch2'
   */
  if (tmpRead_3 == ((uint8_T)CoastCtrl_LOW)) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Lookup_n-D: '<S9>/ChassisMgmt_CoastCtrlLoLvlGainFac_MAP'
     *  SignalConversion: '<S5>/SignalCopy1'
     *  SignalConversion: '<S5>/SignalCopy7'
     */
    rtb_Switch = look2_iflf_binlca(tmpRead_5, rtb_Switch,
      &ChassisMgmt_CoastCtrlGainFacY_MAP[0], &ChassisMgmt_CoastCtrlGainFacX_MAP
      [0], &ChassisMgmt_CoastCtrlLoLvlGainFac_MAP[0],
      CtAp_CoastCtrl_ConstP.pooled2, 17U);
  } else if (tmpRead_3 == ((uint8_T)CoastCtrl_MIDDLE)) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Lookup_n-D: '<S9>/ChassisMgmt_CoastCtrlMidLvlGainFac_MAP'
     *  SignalConversion: '<S5>/SignalCopy1'
     *  SignalConversion: '<S5>/SignalCopy7'
     *  Switch: '<S9>/Switch1'
     */
    rtb_Switch = look2_iflf_binlca(tmpRead_5, rtb_Switch,
      &ChassisMgmt_CoastCtrlGainFacY_MAP[0], &ChassisMgmt_CoastCtrlGainFacX_MAP
      [0], &ChassisMgmt_CoastCtrlMidLvlGainFac_MAP[0],
      CtAp_CoastCtrl_ConstP.pooled2, 17U);
  } else if (tmpRead_3 == ((uint8_T)CoastCtrl_HIGH)) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Lookup_n-D: '<S9>/ChassisMgmt_CoastCtrlHiLvlGainFac_MAP'
     *  SignalConversion: '<S5>/SignalCopy1'
     *  SignalConversion: '<S5>/SignalCopy7'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     */
    rtb_Switch = look2_iflf_binlca(tmpRead_5, rtb_Switch,
      &ChassisMgmt_CoastCtrlGainFacY_MAP[0], &ChassisMgmt_CoastCtrlGainFacX_MAP
      [0], &ChassisMgmt_CoastCtrlHiLvlGainFac_MAP[0],
      CtAp_CoastCtrl_ConstP.pooled2, 17U);
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S9>/CoastCtrl_100_PCT'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     */
    rtb_Switch = CoastCtrl_100_PCT;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_CoastCtrl_Input' */

  /* Product: '<S9>/Divide' incorporates:
   *  Constant: '<S9>/CoastCtrl_PCT2NUM'
   */
  ChassisMgmt_CoastCtrlDesTqGainFac_pct = rtb_Switch / CoastCtrl_PCT2NUM;

  /* End of Outputs for SubSystem: '<S4>/SteeringToCoastingTorqueGainFactor ' */

  /* Outputs for Atomic SubSystem: '<S4>/Coast_Control_Torque_Calcution'
   *
   * Block requirements for '<S4>/Coast_Control_Torque_Calcution':
   *  1. SWREQ_01617 Coast One Pedal torque
   *  2. SWREQ_01618 Coast high torque
   *  3. SWREQ_01619 Coast middle torque
   *  4. SWREQ_01620 Coast low torque
   *  5. SWREQ_01621 Coast torque clear
   *  6. SWREQ_06051 Coast Desired Torque
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CoastCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_CoastCtrl_Input':
   *  1. SWREQ_01609 The function of "Coast Control" has the following inputs:
   */
  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/CoastCtrl_HIGH'
   *  Constant: '<S8>/CoastCtrl_LOW'
   *  Constant: '<S8>/CoastCtrl_MIDDLE'
   *  Constant: '<S8>/CoastCtrl_ONE_PEDAL_MODE'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  RelationalOperator: '<S8>/RelationalOperator2'
   *  RelationalOperator: '<S8>/RelationalOperator3'
   *  RelationalOperator: '<S8>/RelationalOperator4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy9'
   *  Switch: '<S8>/Switch2'
   *  Switch: '<S8>/Switch3'
   *  Switch: '<S8>/Switch4'
   */
  if (tmpRead_7 == ((uint8_T)CoastCtrl_ONE_PEDAL_MODE)) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Lookup_n-D: '<S8>/ChassisMgmt_CoastCtrlOnePedlDesTq_MAP'
     *  SignalConversion: '<S5>/SignalCopy'
     *  SignalConversion: '<S5>/SignalCopy7'
     */
    ChassisMgmt_CoastCtrlRawDesTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead,
      &ChassisMgmt_CoastCtrlDesTqY_MAP[0], &ChassisMgmt_CoastCtrlDesTqX_MAP[0],
      &ChassisMgmt_CoastCtrlOnePedlDesTq_MAP[0], CtAp_CoastCtrl_ConstP.pooled1,
      20U);
  } else if (tmpRead_3 == ((uint8_T)CoastCtrl_LOW)) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Lookup_n-D: '<S8>/ChassisMgmt_CoastCtrlLoLvlDesTq_MAP'
     *  SignalConversion: '<S5>/SignalCopy'
     *  SignalConversion: '<S5>/SignalCopy7'
     *  Switch: '<S8>/Switch4'
     */
    ChassisMgmt_CoastCtrlRawDesTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead,
      &ChassisMgmt_CoastCtrlDesTqY_MAP[0], &ChassisMgmt_CoastCtrlDesTqX_MAP[0],
      &ChassisMgmt_CoastCtrlLoLvlDesTq_MAP[0], CtAp_CoastCtrl_ConstP.pooled1,
      20U);
  } else if (tmpRead_3 == ((uint8_T)CoastCtrl_MIDDLE)) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Lookup_n-D: '<S8>/ChassisMgmt_CoastCtrlMidLvlDesTq_MAP'
     *  SignalConversion: '<S5>/SignalCopy'
     *  SignalConversion: '<S5>/SignalCopy7'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch4'
     */
    ChassisMgmt_CoastCtrlRawDesTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead,
      &ChassisMgmt_CoastCtrlDesTqY_MAP[0], &ChassisMgmt_CoastCtrlDesTqX_MAP[0],
      &ChassisMgmt_CoastCtrlMidLvlDesTq_MAP[0], CtAp_CoastCtrl_ConstP.pooled1,
      20U);
  } else if (tmpRead_3 == ((uint8_T)CoastCtrl_HIGH)) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Lookup_n-D: '<S8>/ChassisMgmt_CoastCtrlHiLvlDesTq_MAP'
     *  SignalConversion: '<S5>/SignalCopy'
     *  SignalConversion: '<S5>/SignalCopy7'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch3'
     *  Switch: '<S8>/Switch4'
     */
    ChassisMgmt_CoastCtrlRawDesTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead,
      &ChassisMgmt_CoastCtrlDesTqY_MAP[0], &ChassisMgmt_CoastCtrlDesTqX_MAP[0],
      &ChassisMgmt_CoastCtrlHiLvlDesTq_MAP[0], CtAp_CoastCtrl_ConstP.pooled1,
      20U);
  } else {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/ChassisMgmt_CoastCtrlZeroTq_CFG1'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch3'
     *  Switch: '<S8>/Switch4'
     */
    ChassisMgmt_CoastCtrlRawDesTq_Nm = ChassisMgmt_CoastCtrlZeroTq_CFG;
  }

  /* End of Switch: '<S8>/Switch1' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_CoastCtrl_Input' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/ChassisMgmt_CoastCtrlZeroTq_CFG'
   *  Product: '<S8>/Product'
   */
  if (ChassisMgmt_CoastCtrlActv_Flg) {
    tmpRead_5 = ChassisMgmt_CoastCtrlRawDesTq_Nm *
      ChassisMgmt_CoastCtrlDesTqGainFac_pct;
  } else {
    tmpRead_5 = ChassisMgmt_CoastCtrlZeroTq_CFG;
  }

  /* MinMax: '<S8>/Max' incorporates:
   *  Constant: '<S8>/ChassisMgmt_CoastCtrlMinTq_CFG'
   *  Switch: '<S8>/Switch'
   */
  ChassisMgmt_CoastCtrlDesTq_Nm = fmaxf(tmpRead_5,
    ChassisMgmt_CoastCtrlMinTq_CFG);

  /* End of Outputs for SubSystem: '<S4>/Coast_Control_Torque_Calcution' */
  /* End of Outputs for SubSystem: '<S2>/Coast_Control_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CoastCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_CoastCtrl_Output':
   *  1. SWREQ_01611 The function of "Coast Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_CoastCtrlDesTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_CoastCtrlDesTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm
    (ChassisMgmt_CoastCtrlDesTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_CoastCtrl_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_CoastCtrl_Cyclic_10ms_sys' */
}

#define CtAp_CoastCtrl_STOP_SEC_CODE
#include "CtAp_CoastCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_CoastCtrl_START_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

void R_CoastCtrl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_CoastCtrlDesTqGainFac_pct = 0.0F;
  ChassisMgmt_CoastCtrlRawDesTq_Nm = 0.0F;
  ChassisMgmt_CoastCtrlDesTq_Nm = 0.0F;
  ChassisMgmt_CoastCtrlActv_Flg = false;
}

#define CtAp_CoastCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
