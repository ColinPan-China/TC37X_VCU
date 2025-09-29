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
 *  Filename:           CtAp_ResEst.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:46:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:45:41 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ResEst.h"
#include "rtwtypes.h"
#include "CtAp_ResEst_private.h"
#include <math.h>
#include "CtAp_ResEst_Cal.h"
#include "CtAp_ResEst_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ResEst_START_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"

ARID_DEF_CtAp_ResEst_T CtAp_ResEst_ARID_DEF;/* '<S10>/Delay' */

#define CtAp_ResEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S3>/ATOM_SafeDivide1'
 *    '<S3>/ATOM_SafeDivide2'
 *    '<S3>/ATOM_SafeDivide'
 */
#define CtAp_ResEst_START_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

real32_T CtAp_ResEst_ATOM_SafeDivide(real32_T rtu_num, real32_T rtu_den,
  real32_T rtu_eps)
{
  real32_T tmp;

  /* Switch: '<S7>/LogicalSwitch' incorporates:
   *  Gain: '<S7>/Gain'
   *  Gain: '<S7>/Gain1'
   *  MinMax: '<S7>/MinMax'
   *  MinMax: '<S7>/MinMax1'
   *  RelationalOperator: '<S7>/RelationalOperator'
   */
  if (rtu_den < (0.0F * rtu_eps)) {
    tmp = fminf(rtu_den, (-1.0F) * rtu_eps);
  } else {
    tmp = fmaxf(rtu_eps, rtu_den);
  }

  /* Product: '<S7>/Product' incorporates:
   *  Switch: '<S7>/LogicalSwitch'
   */
  return rtu_num / tmp;
}

#define CtAp_ResEst_STOP_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

/* Output and update for atomic system: '<S9>/If2' */
#define CtAp_ResEst_START_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

real32_T CtAp_ResEst_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S11>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S11>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ResEst_STOP_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ResEst_START_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

void R_ResEst_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TorqMgmt_VehMotA2Tq;
  real32_T rtb_Subtract;
  real32_T rtb_Product_co50;
  real32_T rtb_Subtract2;
  real32_T rtb_Product_kvut;
  real32_T rtb_Subtract1;
  real32_T rtb_Product_cuar;
  real32_T rtb_Abs;
  real32_T rtb_Add1_lbgo;
  real32_T rtb_Product5;
  real32_T rtb_Switch2;
  real32_T rtb_Switch_ftgs;
  real32_T tmpRead;
  boolean_T tmpRead_0;

  /* Inport: '<Root>/RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo' */
  (void)Rte_Read_RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo(&rtb_Product5);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
    (&rtb_Switch_ftgs);

  /* Outputs for Atomic SubSystem: '<Root>/R_ResEst_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S9>/If2' */
  /* Constant: '<S9>/Constant1' */
  rtb_Abs = CtAp_ResEst_If(tmpRead_0, rtb_Switch_ftgs, ResEst_SingleZero);

  /* End of Outputs for SubSystem: '<S9>/If2' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Product: '<S1>/Divide1'
   */
  rtb_Switch_ftgs = rtb_Product5 / 100.0F;

  /* Product: '<S9>/Product5' incorporates:
   *  Constant: '<S9>/CAL10'
   *  Constant: '<S9>/CAL12'
   *  Math: '<S9>/Square1'
   *  Product: '<S9>/Product3'
   *  Sum: '<S9>/Add1'
   */
  rtb_Product5 = (((rtb_Abs * rtb_Abs) * ResEst_OneCft_CFG) +
                  ResEst_CftConstant_CFG) * rtb_Switch_ftgs;

  /* Sum: '<S10>/Add' incorporates:
   *  Delay: '<S10>/Delay'
   *  Sum: '<S10>/Add5'
   *  Switch: '<S10>/Switch'
   */
  rtb_Product5 -= CtAp_ResEst_ARID_DEF.Delay_DSTATE;

  /* Sum: '<S10>/Add1' incorporates:
   *  Constant: '<S9>/CAL8'
   *  Delay: '<S10>/Delay'
   *  Product: '<S10>/Product'
   *  Sum: '<S10>/Add'
   */
  rtb_Add1_lbgo = (rtb_Product5 * ResEst_EstCoefficient_CFG) +
    CtAp_ResEst_ARID_DEF.Delay_DSTATE;

  /* Abs: '<S10>/Abs' incorporates:
   *  Delay: '<S10>/Delay'
   *  Sum: '<S10>/Add2'
   */
  rtb_Abs = CtAp_ResEst_ARID_DEF.Delay_DSTATE - rtb_Add1_lbgo;
  rtb_Abs = fabsf(rtb_Abs);

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S9>/CAL9'
   *  Delay: '<S10>/Delay'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S12>/Compare'
   *  Switch: '<S10>/Switch1'
   */
  if (rtb_Abs <= ResEst_EstSampleLimit_CFG) {
    CtAp_ResEst_ARID_DEF.Delay_DSTATE = rtb_Add1_lbgo;
  } else if (rtb_Product5 >= 0.0F) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Delay: '<S10>/Delay'
     *  Sum: '<S10>/Add3'
     */
    CtAp_ResEst_ARID_DEF.Delay_DSTATE += ResEst_EstSampleLimit_CFG;
  } else {
    /* Delay: '<S10>/Delay' incorporates:
     *  Sum: '<S10>/Add4'
     *  Switch: '<S10>/Switch1'
     */
    CtAp_ResEst_ARID_DEF.Delay_DSTATE -= ResEst_EstSampleLimit_CFG;
  }

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/CAL'
   */
  if (VehMot_trqDragSW) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/CAL1'
     */
    rtb_Product5 = VehMot_trqDragVal;
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Delay: '<S10>/Delay'
     */
    rtb_Product5 = CtAp_ResEst_ARID_DEF.Delay_DSTATE;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  if (!ResEst_True) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/CAL'
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant2'
     *  Product: '<S4>/Divide'
     *  Product: '<S4>/Product'
     */
    rtb_Switch_ftgs = (real32_T)((real_T)((real_T)ResEst_WheelCircumference_CFG /
      ((real_T)ResEst_PI * 2.0)));
  }

  /* End of Switch: '<S4>/Switch' */

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<S4>/CAL1'
   */
  rtb_TorqMgmt_VehMotA2Tq = rtb_Switch_ftgs * ResEst_WheelMass_CFG;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/CAL'
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
   */
  if (VehMot_aPrpMaxSW) {
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/CAL1'
     */
    VehMot_AcclrPrpMax_mps2q = VehMot_aPrpMaxVal;
  } else {
    (void)
      Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
      (&tmpRead);

    /* Sum: '<S3>/Subtract' incorporates:
     *  Gain: '<S1>/Gain'
     *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
     */
    rtb_Subtract = (SpdRatio * tmpRead) - rtb_Product5;

    /* Outputs for Atomic SubSystem: '<S3>/ATOM_SafeDivide' */
    rtb_Product_co50 = CtAp_ResEst_ATOM_SafeDivide(rtb_Subtract,
      rtb_TorqMgmt_VehMotA2Tq, 0.001F);

    /* End of Outputs for SubSystem: '<S3>/ATOM_SafeDivide' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant'
     */
    VehMot_AcclrPrpMax_mps2q = rtb_Product_co50;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/CAL2'
   *  Constant: '<S3>/Constant3'
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
   */
  if (VehMot_aPrpMinSW) {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/CAL3'
     */
    VehMot_AcclrPrpMin_mps2q = VehMot_aPrpMinVal;
  } else {
    (void)
      Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
      (&rtb_Switch2);

    /* Sum: '<S3>/Subtract1' incorporates:
     *  Gain: '<S1>/Gain1'
     *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
     */
    rtb_Subtract1 = (SpdRatio * rtb_Switch2) - rtb_Product5;

    /* Outputs for Atomic SubSystem: '<S3>/ATOM_SafeDivide1' */
    rtb_Product_cuar = CtAp_ResEst_ATOM_SafeDivide(rtb_Subtract1,
      rtb_TorqMgmt_VehMotA2Tq, 0.001F);

    /* End of Outputs for SubSystem: '<S3>/ATOM_SafeDivide1' */

    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    VehMot_AcclrPrpMin_mps2q = rtb_Product_cuar;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/CAL4'
   *  Constant: '<S3>/Constant1'
   */
  if (VehMot_aPrpCurrSW) {
    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S3>/CAL5'
     */
    rtb_Switch2 = VehMot_aPrpCurrVal;
  } else {
    /* Sum: '<S3>/Subtract2' */
    rtb_Subtract2 = 0.0F - rtb_Product5;

    /* Outputs for Atomic SubSystem: '<S3>/ATOM_SafeDivide2' */
    rtb_Product_kvut = CtAp_ResEst_ATOM_SafeDivide(rtb_Subtract2,
      rtb_TorqMgmt_VehMotA2Tq, 0.001F);

    /* End of Outputs for SubSystem: '<S3>/ATOM_SafeDivide2' */

    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rtb_Switch2 = rtb_Product_kvut;
  }

  /* End of Switch: '<S3>/Switch2' */
  /* End of Outputs for SubSystem: '<Root>/R_ResEst_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm' */
  (void)Rte_Write_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm
    (rtb_TorqMgmt_VehMotA2Tq);

  /* Outport: '<Root>/RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q' */
  (void)Rte_Write_RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q
    (rtb_Switch2);

  /* Outputs for Atomic SubSystem: '<Root>/R_ResEst_Cyclic_10ms_sys' */
  /* Outport: '<Root>/RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q' incorporates:
   *  SignalConversion: '<S3>/Signal Copy'
   */
  (void)Rte_Write_RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q
    (VehMot_AcclrPrpMax_mps2q);

  /* Outport: '<Root>/RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q' incorporates:
   *  SignalConversion: '<S3>/Signal Copy1'
   */
  (void)Rte_Write_RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q
    (VehMot_AcclrPrpMin_mps2q);

  /* End of Outputs for SubSystem: '<Root>/R_ResEst_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm' */
  (void)Rte_Write_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm(rtb_Product5);
}

#define CtAp_ResEst_STOP_SEC_CODE
#include "CtAp_ResEst_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ResEst_START_SEC_VAR_CONST_8
#include "CtAp_ResEst_MemMap.h"

void R_ResEst_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  VehMot_AcclrPrpMax_mps2q = 0.0F;
  VehMot_AcclrPrpMin_mps2q = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ResEst_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ResEst_T));
}

#define CtAp_ResEst_STOP_SEC_VAR_CONST_8
#include "CtAp_ResEst_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
