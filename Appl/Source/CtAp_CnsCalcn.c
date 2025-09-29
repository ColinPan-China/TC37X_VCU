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
 *  Filename:           CtAp_CnsCalcn.c
 *  File Creation Date: 03-Apr-2025
 *  Model Name:         CtAp_CnsCalcn
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:10 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr  3 14:30:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Apr 03 14:29:51 2025
 *
 *
 *******************************************************************************/
#include "CtAp_CnsCalcn.h"
#include "rtwtypes.h"
#include "CtAp_CnsCalcn_private.h"
#include <math.h>
#include "CtAp_CnsCalcn_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_CnsCalcn_START_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"

ARID_DEF_CtAp_CnsCalcn_T CtAp_CnsCalcn_ARID_DEF;

#define CtAp_CnsCalcn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/If'
 *    '<S8>/If'
 *    '<S9>/If'
 *    '<S9>/If1'
 *    '<S10>/If'
 *    '<S11>/If'
 */
#define CtAp_CnsCalcn_START_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

real32_T CtAp_CnsCalcn_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S13>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S13>/Switch' */
  return rty_Out1_0;
}

#define CtAp_CnsCalcn_STOP_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

/* Output and update for atomic system: '<S9>/ATOM_AvgFilt' */
#define CtAp_CnsCalcn_START_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

real32_T CtAp_CnsCalcn_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_Cn_T
  *CtAp_CnsCalcn__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;
  int_T idxDelay;

  /* MinMax: '<S20>/Min' incorporates:
   *  Constant: '<S20>/AverageFilterCount'
   *  Constant: '<S20>/Constant'
   *  Delay: '<S20>/Delay3'
   *  Sum: '<S20>/Plus2'
   */
  CtAp_CnsCalcn__ARID_DEF_arg->Delay3_DSTATE = fminf(rtp_AverageFilterCount,
    1.0F + CtAp_CnsCalcn__ARID_DEF_arg->Delay3_DSTATE);

  /* Sum: '<S20>/Plus1' incorporates:
   *  DataTypeConversion: '<S20>/DataTypeConversion'
   *  Delay: '<S20>/Delay1'
   *  Delay: '<S20>/Delay2'
   *  Sum: '<S20>/Plus3'
   */
  CtAp_CnsCalcn__ARID_DEF_arg->Delay1_DSTATE = rtu_DataInput +
    CtAp_CnsCalcn__ARID_DEF_arg->Delay1_DSTATE -
    CtAp_CnsCalcn__ARID_DEF_arg->Delay2_DSTATE[0];

  /* Product: '<S20>/Divide' incorporates:
   *  Delay: '<S20>/Delay1'
   *  Delay: '<S20>/Delay3'
   */
  rty_DataOutput_0 = CtAp_CnsCalcn__ARID_DEF_arg->Delay1_DSTATE /
    CtAp_CnsCalcn__ARID_DEF_arg->Delay3_DSTATE;

  /* Update for Delay: '<S20>/Delay2' incorporates:
   *  DataTypeConversion: '<S20>/DataTypeConversion'
   */
  for (idxDelay = 0; idxDelay < 9; idxDelay++) {
    CtAp_CnsCalcn__ARID_DEF_arg->Delay2_DSTATE[idxDelay] =
      CtAp_CnsCalcn__ARID_DEF_arg->Delay2_DSTATE[idxDelay + 1];
  }

  CtAp_CnsCalcn__ARID_DEF_arg->Delay2_DSTATE[9] = rtu_DataInput;

  /* End of Update for Delay: '<S20>/Delay2' */
  return rty_DataOutput_0;
}

#define CtAp_CnsCalcn_STOP_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_CnsCalcn_START_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

void R_CnsCalcn_Cyclic_100ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Divide;
  real32_T rtb_Switch;
  real32_T rtb_Divide_jfzf;
  real32_T rtb_Divide_ijgg;
  real32_T rtb_Switch_katb;
  real32_T rtb_Switch_lkzx;
  real32_T rtb_Divide_fosj;
  real32_T rtb_Switch_fb25;
  real32_T rtb_Add;
  real32_T rtb_Switch_m0sx;
  real32_T rtb_Switch_jftx;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator_jbgd;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator_mztg;
  boolean_T rtb_LogicalOperator_e2sw;
  boolean_T rtb_LogicalOperator_cbgd;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpRead_5;
  real32_T tmpRead_6;
  real32_T tmpRead_7;
  real32_T tmpRead_8;
  real32_T tmpRead_e;
  real32_T tmpRead_f;
  uint8_T tmpRead_g;
  boolean_T tmpRead_9;
  boolean_T tmpRead_a;
  boolean_T tmpRead_b;
  boolean_T tmpRead_c;
  boolean_T tmpRead_d;

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V' */
  (void)Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(&tmpRead_f);

  /* Inport: '<Root>/RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V' */
  (void)Rte_Read_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_MCUIDc_A_tec_ComM_MCUIDc_A' */
  (void)Rte_Read_RTE_R_ComM_MCUIDc_A_tec_ComM_MCUIDc_A(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V' */
  (void)Rte_Read_RTE_R_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A' */
  (void)Rte_Read_RTE_R_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw' */
  (void)Rte_Read_RTE_R_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V' */
  (void)Rte_Read_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw' */
  (void)Rte_Read_RTE_R_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_CnsCalcn_Cyclic_100ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_ACSysPwrCal'
   *
   * Block requirements for '<S4>/EgyMgmt_ACSysPwrCal':
   *  1. SWREQ_03829 TCU power caculate
   *  2. SWREQ_03830 TCU power caculate
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Sum: '<S7>/Add' incorporates:
   *  Constant: '<S7>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S7>/Divide'
   *  Product: '<S7>/Product'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  Sum: '<S7>/Add1'
   */
  rtb_Add = ((tmpRead_6 * tmpRead_5) / CnsCalcn_PwrCnsKwTran) + tmpRead +
    tmpRead_4;

  /* Logic: '<S7>/LogicalOperator' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  SignalConversion: '<S5>/SignalCopy14'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator_cbgd = ((tmpRead_g != ((uint8_T)CnsCalcn_INIT)) &&
    (tmpRead_g != ((uint8_T)CnsCalcn_Sleep)) && (tmpRead_d == CnsCalcn_Passed));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If'
   *
   * Block requirements for '<S7>/If':
   *  1. SWREQ_03829 TCU power caculate
   *  2. SWREQ_03830 TCU power caculate
   */
  /* Delay: '<S7>/Delay' */
  rtb_Switch_m0sx = CtAp_CnsCalcn_If(rtb_LogicalOperator_cbgd, rtb_Add,
    CtAp_CnsCalcn_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S7>/If' */

  /* Update for Delay: '<S7>/Delay' */
  CtAp_CnsCalcn_ARID_DEF.Delay_DSTATE = rtb_Switch_m0sx;

  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_ACSysPwrCal' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_DCDCPwrCal'
   *
   * Block requirements for '<S4>/EgyMgmt_DCDCPwrCal':
   *  1. SWREQ_03819 DCDC power caculate
   *  2. SWREQ_03820 DCDC power caculate
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator_e2sw = ((tmpRead_g != ((uint8_T)CnsCalcn_INIT)) &&
    (tmpRead_g != ((uint8_T)CnsCalcn_Sleep)) && (tmpRead_a == CnsCalcn_Passed));

  /* Product: '<S8>/Divide' incorporates:
   *  Constant: '<S8>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S8>/Product'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Divide_fosj = (tmpRead_2 * tmpRead_3) / CnsCalcn_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. SWREQ_03819 DCDC power caculate
   *  2. SWREQ_03820 DCDC power caculate
   */
  /* Constant: '<S8>/EgyMgmt_PODMaxOutDCDCPower_CFG' */
  rtb_Switch_fb25 = CtAp_CnsCalcn_If(rtb_LogicalOperator_e2sw, rtb_Divide_fosj,
    EgyMgmt_PODMaxOutDCDCPower_CFG);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_DCDCPwrCal' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_MCUPwrCal'
   *
   * Block requirements for '<S4>/EgyMgmt_MCUPwrCal':
   *  1. SWREQ_03821 Motor power caculate
   *  2. SWREQ_03822 Motor power caculate
   *  3. SWREQ_03823 Moter power caculate
   *  4. SWREQ_03824 Moter power caculate
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Logic: '<S9>/LogicalOperator1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator1 = ((tmpRead_b == CnsCalcn_Passed) && (tmpRead_g ==
    ((uint8_T)CnsCalcn_DrvReady)));

  /* Product: '<S9>/Divide' incorporates:
   *  Constant: '<S9>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S9>/Product'
   *  SignalConversion: '<S5>/SignalCopy8'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_Divide_ijgg = (tmpRead_7 * tmpRead_8) / CnsCalcn_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. SWREQ_03821 Motor power caculate
   *  2. SWREQ_03822 Motor power caculate
   */
  /* Constant: '<S9>/Marco_MCUDftPwr' */
  rtb_Switch_lkzx = CtAp_CnsCalcn_If(rtb_LogicalOperator1, rtb_Divide_ijgg,
    CnsCalcn_MCUDftPwr);

  /* End of Outputs for SubSystem: '<S9>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_AvgFilt' */
  rtb_Switch_jftx = CtAp_CnsCalcn_ATOM_AvgFilt(rtb_Switch_lkzx, 10.0F,
    &CtAp_CnsCalcn_ARID_DEF.ARID_DEF_ATOM_AvgFilt);

  /* End of Outputs for SubSystem: '<S9>/ATOM_AvgFilt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Logic: '<S9>/LogicalOperator' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S26>/Constant'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator_mztg = ((tmpRead_b == CnsCalcn_Passed) && (tmpRead_g ==
    ((uint8_T)CnsCalcn_DrvReady)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If1'
   *
   * Block requirements for '<S9>/If1':
   *  1. SWREQ_03823 Moter power caculate
   *  2. SWREQ_03824 Moter power caculate
   */
  /* Constant: '<S9>/Marco_MCUDftPwr1' */
  rtb_Switch_katb = CtAp_CnsCalcn_If(rtb_LogicalOperator_mztg, rtb_Switch_jftx,
    CnsCalcn_MCUDftPwr);

  /* End of Outputs for SubSystem: '<S9>/If1' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_MCUPwrCal' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_PackPTCPwrCal'
   *
   * Block requirements for '<S4>/EgyMgmt_PackPTCPwrCal':
   *  1. SWREQ_03827 PackPTC power caculate
   *  2. SWREQ_03828 PackPTC power caculate
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Logic: '<S10>/LogicalOperator' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator_jbgd = ((tmpRead_g != ((uint8_T)CnsCalcn_INIT)) &&
    (tmpRead_g != ((uint8_T)CnsCalcn_Sleep)) && (tmpRead_9 == CnsCalcn_Passed));

  /* Product: '<S10>/Divide' incorporates:
   *  Constant: '<S10>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S10>/Product'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_Divide_jfzf = (tmpRead_1 * tmpRead_0) / CnsCalcn_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/If'
   *
   * Block requirements for '<S10>/If':
   *  1. SWREQ_03827 PackPTC power caculate
   *  2. SWREQ_03828 PackPTC power caculate
   */
  /* Constant: '<S10>/EgyMgmt_BMSMaxOutPackPTCPower_CFG' */
  rtb_Switch_jftx = CtAp_CnsCalcn_If(rtb_LogicalOperator_jbgd, rtb_Divide_jfzf,
    EgyMgmt_BMSMaxOutPackPTCPower_CFG);

  /* End of Outputs for SubSystem: '<S10>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_PackPTCPwrCal' */

  /* Outputs for Atomic SubSystem: '<S4>/EgyMgmt_V2LPwrCal'
   *
   * Block requirements for '<S4>/EgyMgmt_V2LPwrCal':
   *  1. SWREQ_03825 V2L power caculate
   *  2. SWREQ_03826 V2L power caculate
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Input' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  rtb_LogicalOperator = ((tmpRead_g != ((uint8_T)CnsCalcn_INIT)) && (tmpRead_g
    != ((uint8_T)CnsCalcn_Sleep)) && (tmpRead_c == CnsCalcn_Passed));

  /* Product: '<S11>/Divide' incorporates:
   *  Constant: '<S11>/Marco_EgyMgmt_PwrCnsKwTran'
   *  Product: '<S11>/Product'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  rtb_Divide = (tmpRead_e * tmpRead_f) / CnsCalcn_PwrCnsKwTran;

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If'
   *
   * Block requirements for '<S11>/If':
   *  1. SWREQ_03825 V2L power caculate
   *  2. SWREQ_03826 V2L power caculate
   */
  /* Constant: '<S11>/EgyMgmt_PODMaxOutPower_CFG' */
  rtb_Switch = CtAp_CnsCalcn_If(rtb_LogicalOperator, rtb_Divide,
    EgyMgmt_PODMaxOutPower_CFG);

  /* End of Outputs for SubSystem: '<S11>/If' */
  /* End of Outputs for SubSystem: '<S4>/EgyMgmt_V2LPwrCal' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_CnsCalcn_Output' */
  /* Outport: '<Root>/RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
    (rtb_Switch_m0sx);

  /* Outport: '<Root>/RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw
    (rtb_Switch_katb);

  /* Outport: '<Root>/RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
    (rtb_Switch_fb25);

  /* Outport: '<Root>/RTE_P_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  (void)Rte_Write_RTE_P_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw
    (rtb_Switch_lkzx);

  /* Outport: '<Root>/RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy4'
   */
  (void)
    Rte_Write_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
    (rtb_Switch_jftx);

  /* Outport: '<Root>/RTE_P_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw' incorporates:
   *  SignalConversion: '<S6>/SignalCopy5'
   */
  (void)Rte_Write_RTE_P_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw
    (rtb_Switch);

  /* End of Outputs for SubSystem: '<S2>/CtAp_CnsCalcn_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_CnsCalcn_Cyclic_100ms_sys' */
}

#define CtAp_CnsCalcn_STOP_SEC_CODE
#include "CtAp_CnsCalcn_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_CnsCalcn_START_SEC_VAR_CONST_8
#include "CtAp_CnsCalcn_MemMap.h"

void R_CnsCalcn_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_CnsCalcn_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_CnsCalcn_T));
}

#define CtAp_CnsCalcn_STOP_SEC_VAR_CONST_8
#include "CtAp_CnsCalcn_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
