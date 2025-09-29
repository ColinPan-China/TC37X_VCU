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
 *  Filename:           CtAp_TrsmProtd.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.45
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:53:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:52:53 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TrsmProtd.h"
#include "rtwtypes.h"
#include "CtAp_TrsmProtd_private.h"
#include <math.h>
#include "CtAp_TrsmProtd_Cal.h"
#include "CtAp_TrsmProtd_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_TrsmProtd_START_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"

ARID_DEF_CtAp_TrsmProtd_T CtAp_TrsmProtd_ARID_DEF;

#define CtAp_TrsmProtd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* System initialize for atomic system: '<S7>/ATOM_RS_FF' */
#define CtAp_TrsmProtd_START_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

void CtAp_TrsmProtd_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T *CtAp_TrsmProtd__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S9>/UnitDelay1' */
  CtAp_TrsmProtd__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_TrsmProtd_STOP_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

/* Output and update for atomic system: '<S7>/ATOM_RS_FF' */
#define CtAp_TrsmProtd_START_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

boolean_T CtAp_TrsmProtd_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T *CtAp_TrsmProtd__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S9>/LogOp2' incorporates:
   *  Logic: '<S9>/LogOp'
   *  Logic: '<S9>/LogOp4'
   *  UnitDelay: '<S9>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S || CtAp_TrsmProtd__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S9>/UnitDelay1' */
  CtAp_TrsmProtd__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_TrsmProtd_STOP_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TrsmProtd_START_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

void R_TrsmProtd_Cyclic_10ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_TorqPahMgmt_MotDftlPro_bew3;
  boolean_T rtb_TorqPahMgmt_MotDftlPro_a4dm;
  boolean_T rtb_LogOp2;
  real32_T rtb_TorqPahMgmt_MotDftlPro_be_0;
  real32_T tmpRead_1;
  real32_T tmpRead_4;
  uint8_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_3;
  uint8_T tmpRead_5;
  boolean_T rtb_TorqPahMgmt_FwdMotDftlProtn;
  boolean_T rtb_TorqPahMgmt_RvsMotDftlProtn;
  boolean_T tmpRead_2;

  /* Inport: '<Root>/RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg
    (&rtb_TorqPahMgmt_FwdMotDftlProtn);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg
    (&rtb_TorqPahMgmt_RvsMotDftlProtn);

  /* Inport: '<Root>/RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph' */
  (void)Rte_Read_RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph' */
  (void)Rte_Read_RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_TrsmProtd_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_TrsmProtd_Cyclic_10ms_sys':
   *  1. SWREQ_01948 The function of "Torque Transition Protection" has the following parameters:
   */
  /* Outputs for Atomic SubSystem: '<S2>/Function_Transmission_Protection' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TrsmProtd_Input' */
  /* Abs: '<S7>/Abs' incorporates:
   *  Abs: '<S7>/Abs2'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Sum: '<S7>/Subtract2'
   */
  rtb_TorqPahMgmt_MotDftlPro_be_0 = fabsf(tmpRead_1 - tmpRead_4);

  /* Abs: '<S7>/Abs1' incorporates:
   *  Abs: '<S7>/Abs3'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Sum: '<S7>/Subtract3'
   */
  tmpRead_4 = fabsf(tmpRead_1 + tmpRead_4);

  /* Logic: '<S7>/LogicalOperator6' incorporates:
   *  Abs: '<S7>/Abs'
   *  Abs: '<S7>/Abs1'
   *  Constant: '<S7>/TorqPahMgmt_TramProtdDiffMinSpd_CFG'
   *  Constant: '<S7>/TorqPahMgmt_TramProtdDiffMinSpd_CFG1'
   *  Constant: '<S7>/TrsmProtd_ESC_OFF'
   *  Logic: '<S7>/LogicalOperator'
   *  Logic: '<S7>/LogicalOperator4'
   *  Logic: '<S7>/LogicalOperator5'
   *  Logic: '<S7>/LogicalOperator7'
   *  RelationalOperator: '<S7>/RelationalOperator4'
   *  RelationalOperator: '<S7>/RelationalOperator5'
   *  RelationalOperator: '<S7>/RelationalOperator6'
   *  RelationalOperator: '<S7>/RelationalOperator7'
   *  RelationalOperator: '<S7>/RelationalOperator8'
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  rtb_TorqPahMgmt_MotDftlPro_bew3 = ((!rtb_TorqPahMgmt_FwdMotDftlProtn &&
    (tmpRead != ((uint8_T)TrsmProtd_ESC_OFF))) || tmpRead_2 ||
    rtb_TorqPahMgmt_RvsMotDftlProtn || ((tmpRead_0 == tmpRead_3) &&
    (rtb_TorqPahMgmt_MotDftlPro_be_0 <= TorqPahMgmt_TramProtdDiffMinSpd_CFG)) ||
    ((tmpRead_0 != tmpRead_3) && (tmpRead_4 <=
    TorqPahMgmt_TramProtdDiffMinSpd_CFG)));

  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  Constant: '<S7>/TorqPahMgmt_TramProtdDiffMaxSpd_CFG'
   *  Constant: '<S7>/TorqPahMgmt_TramProtdDiffMaxSpd_CFG1'
   *  Logic: '<S7>/LogicalOperator1'
   *  Logic: '<S7>/LogicalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  rtb_TorqPahMgmt_MotDftlPro_a4dm = (((tmpRead_0 == tmpRead_3) &&
    (rtb_TorqPahMgmt_MotDftlPro_be_0 >= TorqPahMgmt_TramProtdDiffMaxSpd_CFG)) ||
    ((tmpRead_0 != tmpRead_3) && (tmpRead_4 >=
    TorqPahMgmt_TramProtdDiffMaxSpd_CFG)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TrsmProtd_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_TrsmProtd_ATOM_RS_FF(rtb_TorqPahMgmt_MotDftlPro_bew3,
    rtb_TorqPahMgmt_MotDftlPro_a4dm,
    &CtAp_TrsmProtd_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S7>/ATOM_RS_FF' */

  /* SignalConversion generated from: '<S7>/ATOM_RS_FF' */
  TorqPahMgmt_MotDftlProtnActv_Flg = rtb_LogOp2;

  /* Outputs for Atomic SubSystem: '<S6>/Motor_Differential_Protection_Torque_Limit'
   *
   * Block requirements for '<S6>/Motor_Differential_Protection_Torque_Limit':
   *  1. SWREQ_01952 Torque Transition Protection Inctive Torque Set
   *  2. SWREQ_05651 Torque Transition Protection  Torque GearD
   *  3. SWREQ_05652 Torque Transition Protection  Torque GearR
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TrsmProtd_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S8>/TrsmProtd_GEAR_D'
   *  RelationalOperator: '<S8>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy7'
   */
  rtb_TorqPahMgmt_FwdMotDftlProtn = ((tmpRead_5 == ((uint8_T)TrsmProtd_GEAR_D)) &&
    TorqPahMgmt_MotDftlProtnActv_Flg);

  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S8>/TrsmProtd_GEAR_R'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy7'
   */
  rtb_TorqPahMgmt_RvsMotDftlProtn = (TorqPahMgmt_MotDftlProtnActv_Flg &&
    (tmpRead_5 == ((uint8_T)TrsmProtd_GEAR_R)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TrsmProtd_Input' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Logic: '<S8>/LogicalOperator2'
   */
  if (rtb_TorqPahMgmt_RvsMotDftlProtn || rtb_TorqPahMgmt_FwdMotDftlProtn) {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_TramProtdLmtMinTq_CFG'
     */
    TorqPahMgmt_TramProtdLmtMinTq_Nm = TorqPahMgmt_TramProtdLmtMinTq_CFG;
  } else {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_TramProtdLmtDftMinTq_CFG'
     */
    TorqPahMgmt_TramProtdLmtMinTq_Nm = TorqPahMgmt_TramProtdLmtDftMinTq_CFG;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  if (rtb_TorqPahMgmt_FwdMotDftlProtn) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_TramProtdLmtMaxTq_CFG'
     */
    TorqPahMgmt_TramProtdLmtMaxTq_Nm = TorqPahMgmt_TramProtdLmtMaxTq_CFG;
  } else if (rtb_TorqPahMgmt_RvsMotDftlProtn) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/TrsmProtd_ZERO_TORQUE'
     *  Switch: '<S8>/Switch'
     */
    TorqPahMgmt_TramProtdLmtMaxTq_Nm = TrsmProtd_ZERO_TORQUE;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/TorqPahMgmt_TramProtdLmtDftMaxTq_CFG'
     *  Switch: '<S8>/Switch1'
     */
    TorqPahMgmt_TramProtdLmtMaxTq_Nm = TorqPahMgmt_TramProtdLmtDftMaxTq_CFG;
  }

  /* End of Switch: '<S8>/Switch' */
  /* End of Outputs for SubSystem: '<S6>/Motor_Differential_Protection_Torque_Limit' */
  /* End of Outputs for SubSystem: '<S2>/Function_Transmission_Protection' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TrsmProtd_Output' */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm
    (TorqPahMgmt_TramProtdLmtMaxTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm
    (TorqPahMgmt_TramProtdLmtMinTq_Nm);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv
    (TorqPahMgmt_MotDftlProtnActv_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TrsmProtd_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TrsmProtd_Cyclic_10ms_sys' */
}

#define CtAp_TrsmProtd_STOP_SEC_CODE
#include "CtAp_TrsmProtd_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TrsmProtd_START_SEC_VAR_CONST_8
#include "CtAp_TrsmProtd_MemMap.h"

void R_TrsmProtd_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_TramProtdLmtMinTq_Nm = 0.0F;
  TorqPahMgmt_TramProtdLmtMaxTq_Nm = 0.0F;
  TorqPahMgmt_MotDftlProtnActv_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TrsmProtd_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TrsmProtd_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_TrsmProtd_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_TrsmProtd_Cyclic_10ms_sys':
   *  1. SWREQ_01948 The function of "Torque Transition Protection" has the following parameters:
   */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Function_Transmission_Protection' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/ATOM_RS_FF' */
  CtAp_TrsmProtd_ATOM_RS_FF_Init(false,
    &CtAp_TrsmProtd_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S7>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S2>/Function_Transmission_Protection' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_TrsmProtd_Cyclic_10ms_sys' */
}

#define CtAp_TrsmProtd_STOP_SEC_VAR_CONST_8
#include "CtAp_TrsmProtd_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
