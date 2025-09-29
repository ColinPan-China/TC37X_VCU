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
 *  Filename:           CtAp_ACParMgmt.c
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ACParMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:08 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:55:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:54:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ACParMgmt.h"
#include "rtwtypes.h"
#include "CtAp_ACParMgmt_private.h"
#include <math.h>
#include "CtAp_ACParMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ACParMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_ACParMgmt_MemMap.h"

ARID_DEF_CtAp_ACParMgmt_T CtAp_ACParMgmt_ARID_DEF;/* '<S10>/Delay' */

#define CtAp_ACParMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ACParMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S4>/If'
 *    '<S9>/If'
 *    '<S9>/If1'
 */
#define CtAp_ACParMgmt_START_SEC_CODE
#include "CtAp_ACParMgmt_MemMap.h"

real32_T CtAp_ACParMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S7>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S7>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ACParMgmt_STOP_SEC_CODE
#include "CtAp_ACParMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ACParMgmt_START_SEC_CODE
#include "CtAp_ACParMgmt_MemMap.h"

void R_ACParMgmt_Cyclic_50ms(void)
{
  /* local block i/o variables */
  real32_T rtb_TmpSignalConversionAtR_kccr;
  real32_T rtb_Min;
  real32_T rtb_Product2;
  real32_T rtb_Min2;
  real32_T rtb_Switch_amkp;
  boolean_T rtb_Equal;
  boolean_T rtb_Compare;
  boolean_T rtb_OR1;
  real32_T rtb_Min1;
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_3;
  real32_T tmpRead_4;
  real32_T tmpWrite;
  uint8_T rtb_TmpSignalConversionAtR_k55r;
  uint8_T rtb_TmpSignalConversionAtR_l0cy;
  uint8_T rtb_TmpSignalConversionAtR_llwq;
  uint8_T rtb_TmpSignalConversionAtR_lx12;
  uint8_T tmpRead_6;
  boolean_T tmpRead_5;

  /* Inport: '<Root>/RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(&tmpRead_5);

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

  /* Inport: '<Root>/RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V' */
  (void)Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(&rtb_Min1);

  /* Inport: '<Root>/RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A' */
  (void)Rte_Read_RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A' */
  (void)Rte_Read_RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum
    (&rtb_TmpSignalConversionAtR_llwq);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (&rtb_TmpSignalConversionAtR_lx12);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A'
   */
  (void)Rte_Read_RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A
    (&rtb_TmpSignalConversionAtR_kccr);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_k55r);

  /* SignalConversion generated from: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_l0cy);

  /* Outputs for Atomic SubSystem: '<Root>/R_ACParMgmt_Cyclic_50ms_sys' */
  /* RelationalOperator: '<S4>/Equal' incorporates:
   *  Constant: '<S4>/Define1'
   */
  rtb_Equal = (rtb_TmpSignalConversionAtR_llwq == ((uint8_T)ACParMgmt_ThreePhase));

  /* MinMax: '<S4>/Min' */
  rtb_Min = fminf(tmpRead_0, tmpRead_1);

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<S4>/Define2'
   */
  rtb_Product2 = ACParMgmt_ThreePhaseCoefficient * rtb_Min;

  /* Outputs for Atomic SubSystem: '<S4>/If'
   *
   * Block requirements for '<S4>/If':
   *  1. SWREQ_03692 CC Current lmt three phase
   *  2. SWREQ_03693 CC Current lmt signle phase
   */
  rtb_Switch_amkp = CtAp_ACParMgmt_If(rtb_Equal, rtb_Product2, rtb_Min);

  /* End of Outputs for SubSystem: '<S4>/If' */

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Constant'
   *  Sum: '<S6>/Add'
   */
  rtb_TmpSignalConversionAtRTE_R_ += 2.22044605E-16F;

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S4>/CAL'
   *  Product: '<S4>/Divide'
   *  Product: '<S4>/Product'
   *  Product: '<S4>/Product1'
   *  Sum: '<S4>/Add'
   *
   * Block requirements for '<S4>/Divide':
   *  1. SWREQ_03691 CP Current lmt three phase
   */
  rtb_Switch_amkp = ((rtb_Switch_amkp * rtb_Min1) * OBCMgmt_OBCChrgCoeff_CFG) /
    rtb_TmpSignalConversionAtRTE_R_;

  /* MinMax: '<S4>/Min1' */
  rtb_Min1 = fminf(rtb_Switch_amkp, rtb_TmpSignalConversionAtR_kccr);

  /* Outputs for Atomic SubSystem: '<S5>/OBCMgmt_PreHeatReqOutpDiable'
   *
   * Block requirements for '<S5>/OBCMgmt_PreHeatReqOutpDiable':
   *  1. SWREQ_06490 Heat OnlyPreHeatReqZero
   *  2. SWREQ_06491 PreHeat to chatge ReqZero
   *  3. SWREQ_06492 No preheat req
   *  4. SWREQ_06493 preheat req matain
   */
  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  Delay: '<S8>/Delay'
   *  Logic: '<S8>/AND1'
   *  Logic: '<S8>/AND3'
   *  Logic: '<S8>/AND4'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   */
  CtAp_ACParMgmt_ARID_DEF.Delay_DSTATE_nuon = ((rtb_TmpSignalConversionAtR_lx12 ==
    ((uint8_T)ACParMgmt_ACPreheatAndChrgnPrepd)) ||
    ((rtb_TmpSignalConversionAtR_lx12 != ((uint8_T)ACParMgmt_PreheatComplete)) &&
     (rtb_TmpSignalConversionAtR_lx12 != ((uint8_T)ACParMgmt_Nopreheat)) &&
     CtAp_ACParMgmt_ARID_DEF.Delay_DSTATE_nuon));

  /* End of Outputs for SubSystem: '<S5>/OBCMgmt_PreHeatReqOutpDiable' */

  /* Outputs for Atomic SubSystem: '<S5>/OBCMgmt_ReqOBCOutp'
   *
   * Block requirements for '<S5>/OBCMgmt_ReqOBCOutp':
   *  1. SWREQ_03695 Current Req Flag
   *  2. SWREQ_03696 Current Req Flag
   *  3. SWREQ_03697 Current Req Flag
   */
  /* Logic: '<S10>/AND1' incorporates:
   *  Constant: '<S10>/Define'
   *  Constant: '<S10>/Define1'
   *  Constant: '<S10>/Define2'
   *  Delay: '<S10>/Delay'
   *  Delay: '<S10>/Delay1'
   *  Logic: '<S10>/AND'
   *  Logic: '<S10>/NOT'
   *  Logic: '<S10>/OR'
   *  RelationalOperator: '<S10>/Equal'
   *  RelationalOperator: '<S10>/Equal1'
   *  RelationalOperator: '<S10>/Equal2'
   */
  CtAp_ACParMgmt_ARID_DEF.Delay1_DSTATE = ((rtb_TmpSignalConversionAtR_l0cy !=
    ((uint8_T)ACParMgmt_OBCDisabling)) && (((rtb_TmpSignalConversionAtR_l0cy ==
    ((uint8_T)ACParMgmt_OBCEnabled)) && (CtAp_ACParMgmt_ARID_DEF.Delay_DSTATE ==
    ((uint8_T)ACParMgmt_ChargePreparing))) ||
    CtAp_ACParMgmt_ARID_DEF.Delay1_DSTATE));

  /* Update for Delay: '<S10>/Delay' */
  CtAp_ACParMgmt_ARID_DEF.Delay_DSTATE = rtb_TmpSignalConversionAtR_l0cy;

  /* End of Outputs for SubSystem: '<S5>/OBCMgmt_ReqOBCOutp' */

  /* Outputs for Atomic SubSystem: '<S5>/OBCMgmt_ReqOBCIDc'
   *
   * Block requirements for '<S5>/OBCMgmt_ReqOBCIDc':
   *  1. SWREQ_03698 Current Req Zero
   *  2. SWREQ_03699 Current Req wait preheat
   *  3. SWREQ_03700 Current Req  preheating
   *  4. SWREQ_03701 Current Req  charging
   */
  /* Switch: '<S19>/Switch' incorporates:
   *  Gain: '<S6>/Gain'
   *  Product: '<S6>/Divide'
   *  Sum: '<S6>/Plus'
   *  Sum: '<S9>/Add'
   */
  rtb_Switch_amkp = ((1000.0F * (tmpRead_2 + tmpRead_4 + tmpRead_3)) /
                     rtb_TmpSignalConversionAtRTE_R_) + tmpRead;

  /* MinMax: '<S9>/Min2'
   *
   * Block requirements for '<S9>/Min2':
   *  1. SWREQ_03694 Current Req Init
   */
  rtb_Min2 = fminf(rtb_Min1, rtb_Switch_amkp);

  /* RelationalOperator: '<S17>/Compare' incorporates:
   *  Constant: '<S17>/Constant'
   */
  rtb_Compare = (rtb_TmpSignalConversionAtR_k55r == ((uint8_T)
    ACParMgmt_Preheating));

  /* Outputs for Atomic SubSystem: '<S9>/If1' */
  rtb_Switch_amkp = CtAp_ACParMgmt_If(rtb_Compare,
    rtb_TmpSignalConversionAtR_kccr, rtb_Min2);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S5>/OBCMgmt_PreHeatReqOutpDiable'
   *
   * Block requirements for '<S5>/OBCMgmt_PreHeatReqOutpDiable':
   *  1. SWREQ_06490 Heat OnlyPreHeatReqZero
   *  2. SWREQ_06491 PreHeat to chatge ReqZero
   *  3. SWREQ_06492 No preheat req
   *  4. SWREQ_06493 preheat req matain
   */
  /* Logic: '<S9>/OR1' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S16>/Constant'
   *  Delay: '<S8>/Delay'
   *  Logic: '<S8>/AND2'
   *  Logic: '<S8>/LogicalOperator'
   *  Logic: '<S9>/NOT1'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   */
  rtb_OR1 = (!CtAp_ACParMgmt_ARID_DEF.Delay1_DSTATE || tmpRead_5 ||
             (rtb_TmpSignalConversionAtR_llwq == ((uint8_T)ACParMgmt_CpbyErr)) ||
             (((tmpRead_6 == ((uint8_T)ACParMgmt_HeatOnly)) &&
               (rtb_TmpSignalConversionAtR_k55r == ((uint8_T)ACParMgmt_HvReady)))
              || CtAp_ACParMgmt_ARID_DEF.Delay_DSTATE_nuon));

  /* End of Outputs for SubSystem: '<S5>/OBCMgmt_PreHeatReqOutpDiable' */

  /* Outputs for Atomic SubSystem: '<S9>/If' */
  /* Outport: '<Root>/RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A' incorporates:
   *  Constant: '<S9>/Define3'
   */
  tmpWrite = CtAp_ACParMgmt_If(rtb_OR1, ACParMgmt_SingleZero, rtb_Switch_amkp);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S5>/OBCMgmt_ReqOBCIDc' */
  /* End of Outputs for SubSystem: '<Root>/R_ACParMgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A' */
  (void)Rte_Write_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A
    (rtb_Min1);

  /* Outport: '<Root>/RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A' */
  (void)Rte_Write_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(tmpWrite);
}

#define CtAp_ACParMgmt_STOP_SEC_CODE
#include "CtAp_ACParMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ACParMgmt_START_SEC_VAR_CONST_8
#include "CtAp_ACParMgmt_MemMap.h"

void R_ACParMgmt_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ACParMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ACParMgmt_T));
}

#define CtAp_ACParMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_ACParMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
