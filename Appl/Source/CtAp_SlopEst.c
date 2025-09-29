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
 *  Filename:           CtAp_SlopEst.c
 *  File Creation Date: 13-Sep-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.3.0
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 13 13:01:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Sat Sep 13 13:00:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_SlopEst.h"
#include "rtwtypes.h"
#include "CtAp_SlopEst_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_SlopEst_Glb.h"
#include "CtAp_SlopEst_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S6>/ATOM_Chart' */
#define CtAp_SlopEst_IN_Normal         ((uint8_T)1U)
#define CtAp_SlopEst_IN_Remain         ((uint8_T)2U)
#define CtAp_SlopEst_IN_RemainDly      ((uint8_T)3U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_SlopEst_START_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"

ARID_DEF_CtAp_SlopEst_T CtAp_SlopEst_ARID_DEF;

#define CtAp_SlopEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S6>/ATOM_AvgFilt' */
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

real32_T CtAp_SlopEst_ATOM_AvgFilt(real32_T rtu_DataInput, real32_T
  rtp_AverageFilterCount, ARID_DEF_ATOM_AvgFilt_CtAp_Sl_T
  *CtAp_SlopEst__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;
  int_T idxDelay;

  /* MinMax: '<S7>/Min' incorporates:
   *  Constant: '<S7>/AverageFilterCount'
   *  Constant: '<S7>/Constant'
   *  Delay: '<S7>/Delay3'
   *  Sum: '<S7>/Plus2'
   */
  CtAp_SlopEst__ARID_DEF_arg->Delay3_DSTATE = fminf(rtp_AverageFilterCount, 1.0F
    + CtAp_SlopEst__ARID_DEF_arg->Delay3_DSTATE);

  /* Sum: '<S7>/Plus1' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion'
   *  Delay: '<S7>/Delay1'
   *  Delay: '<S7>/Delay2'
   *  Sum: '<S7>/Plus3'
   */
  CtAp_SlopEst__ARID_DEF_arg->Delay1_DSTATE = rtu_DataInput +
    CtAp_SlopEst__ARID_DEF_arg->Delay1_DSTATE -
    CtAp_SlopEst__ARID_DEF_arg->Delay2_DSTATE[0];

  /* Product: '<S7>/Divide' incorporates:
   *  Delay: '<S7>/Delay1'
   *  Delay: '<S7>/Delay3'
   */
  rty_DataOutput_0 = CtAp_SlopEst__ARID_DEF_arg->Delay1_DSTATE /
    CtAp_SlopEst__ARID_DEF_arg->Delay3_DSTATE;

  /* Update for Delay: '<S7>/Delay2' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion'
   */
  for (idxDelay = 0; idxDelay < 9; idxDelay++) {
    CtAp_SlopEst__ARID_DEF_arg->Delay2_DSTATE[idxDelay] =
      CtAp_SlopEst__ARID_DEF_arg->Delay2_DSTATE[idxDelay + 1];
  }

  CtAp_SlopEst__ARID_DEF_arg->Delay2_DSTATE[9] = rtu_DataInput;

  /* End of Update for Delay: '<S7>/Delay2' */
  return rty_DataOutput_0;
}

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S6>/ATOM_TimeCnt2'
 *    '<S6>/ATOM_TimeCnt3'
 *    '<S6>/ATOM_TimeCnt5'
 */
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

boolean_T CtAp_SlopEst_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T
  *CtAp_SlopEst__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S9>/Add1' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   *  DataTypeConversion: '<S9>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S9>/Switch' */
  if (rtu_In) {
    /* Sum: '<S9>/Add' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S9>/Min' */
    if (rtb_Add1 <= CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S9>/Add' */
      CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S9>/Min' */
  } else {
    /* Sum: '<S9>/Add' incorporates:
     *  Constant: '<S9>/Constant'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S9>/Switch' */

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  UnitDelay: '<S9>/Delay'
   */
  return CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S6>/LowPassFilter'
 *    '<S6>/LowPassFilter1'
 */
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

real32_T CtAp_SlopEst_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_S_T
  *CtAp_SlopEst__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;

  /* Sum: '<S33>/Sum3' incorporates:
   *  Product: '<S33>/Prd3'
   *  Product: '<S33>/Prd4'
   *  Sum: '<S33>/Sum4'
   *  UnitDelay: '<S33>/Delay'
   */
  rty_DataOutput_0 = ((rtu_TSample_C / rtu_TimeCnst_C) * (rtu_DataInput -
    CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE)) +
    CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE;

  /* Update for UnitDelay: '<S33>/Delay' */
  CtAp_SlopEst__ARID_DEF_arg->Delay_DSTATE = rty_DataOutput_0;
  return rty_DataOutput_0;
}

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_SlopEst_START_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

void R_SlopEst_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion5;
  real32_T rtb_Sum3;
  real32_T rtb_Sum3_eaxl;
  real32_T rtb_Divide;
  boolean_T rtb_Compare_jlme;
  boolean_T rtb_RelationalOperator_fm4q;
  boolean_T rtb_Compare_bpcl;
  boolean_T rtb_RelationalOperator_k0ty;
  boolean_T rtb_Compare_ac5z;
  dt_ComM_ACU02TimeoutInfo tmpRead;
  int_T idxDelay;
  real32_T rtb_Abs;
  real32_T rtb_Abs_mp5e;
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_TmpSignalConversionAtR_hg4k;
  uint8_T rtb_TmpSignalConversionAtR_m31l;
  uint8_T tmpRead_0;
  boolean_T rtb_Compare_ogwj;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator9;

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&rtb_Abs);

  /* Inport: '<Root>/RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q' */
  (void)Rte_Read_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(&rtb_Abs_mp5e);

  /* SignalConversion generated from: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&rtb_TmpSignalConversionAtR_m31l);

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_TmpSignalConversionAtR_hg4k);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* Outputs for Atomic SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */
  /* Abs: '<S1>/Abs' */
  rtb_Abs = fabsf(rtb_Abs);

  /* Outputs for Atomic SubSystem: '<S1>/StationaryVehicleSys' */
  /* Outputs for Atomic SubSystem: '<S6>/LowPassFilter' */
  /* Constant: '<S6>/Constant12' incorporates:
   *  Constant: '<S6>/Constant18'
   */
  rtb_Sum3_eaxl = CtAp_SlopEst_LowPassFilter(rtb_Abs_mp5e, 0.05F, 0.01F,
    &CtAp_SlopEst_ARID_DEF.ARID_DEF_LowPassFilter);

  /* End of Outputs for SubSystem: '<S6>/LowPassFilter' */

  /* Outputs for Atomic SubSystem: '<S6>/LowPassFilter1' */
  /* Constant: '<S6>/Constant19' incorporates:
   *  Constant: '<S6>/Constant20'
   */
  rtb_Sum3 = CtAp_SlopEst_LowPassFilter(rtb_Sum3_eaxl, 0.05F, 0.01F,
    &CtAp_SlopEst_ARID_DEF.ARID_DEF_LowPassFilter1);

  /* End of Outputs for SubSystem: '<S6>/LowPassFilter1' */

  /* DataTypeConversion: '<S6>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = rtb_Sum3;

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_AvgFilt' */
  rtb_Divide = CtAp_SlopEst_ATOM_AvgFilt(rtb_DataTypeConversion5, 10.0F,
    &CtAp_SlopEst_ARID_DEF.ARID_DEF_ATOM_AvgFilt);

  /* End of Outputs for SubSystem: '<S6>/ATOM_AvgFilt' */

  /* SignalConversion generated from: '<S6>/ATOM_AvgFilt' */
  VehMot_YRSAxFlt_mps2q = rtb_Divide;

  /* Delay: '<S6>/Delay2' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  if (SlopEst_VCUAcclrDlyEnb_CFG <= 0U) {
    /* Delay: '<S6>/Delay2' */
    VehMot_YRSAxFltDly_mps2q = VehMot_YRSAxFlt_mps2q;
  } else {
    uint16_T tmp;
    if (SlopEst_VCUAcclrDlyEnb_CFG > 100U) {
      tmp = 100U;
    } else {
      tmp = (uint16_T)SlopEst_VCUAcclrDlyEnb_CFG;
    }

    /* Delay: '<S6>/Delay2' */
    VehMot_YRSAxFltDly_mps2q = CtAp_SlopEst_ARID_DEF.Delay2_DSTATE[(uint16_T)
      (100U - (uint32_T)tmp)];
  }

  /* End of Delay: '<S6>/Delay2' */

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Abs: '<S6>/Abs2'
   *  Constant: '<S13>/Constant'
   *  Sum: '<S6>/Add3'
   */
  rtb_Compare_jlme = (fabsf(VehMot_YRSAxFlt_mps2q - VehMot_YRSAxFltDly_mps2q) <=
                      SlopEst_LgtAAcclrEnb_CFG);

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_TimeCnt2' */
  /* Constant: '<S6>/Constant16' incorporates:
   *  Constant: '<S6>/Constant25'
   */
  rtb_Compare_ac5z = CtAp_SlopEst_ATOM_TimeCnt(rtb_Compare_jlme, ((uint16_T)10U),
    SlopEst_LgtAAcclrEnbTim_CFG, &CtAp_SlopEst_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S6>/ATOM_TimeCnt2' */

  /* Sum: '<S35>/Add' incorporates:
   *  Delay: '<S35>/Delay'
   *  Sum: '<S35>/Add5'
   *  Switch: '<S35>/Switch'
   */
  rtb_TmpSignalConversionAtRTE_R_ -= CtAp_SlopEst_ARID_DEF.Delay_DSTATE;

  /* Abs: '<S36>/Abs' incorporates:
   *  Constant: '<S6>/Constant17'
   *  Delay: '<S35>/Delay'
   *  Product: '<S35>/Product'
   *  Sum: '<S35>/Add'
   *  Sum: '<S35>/Add1'
   */
  rtb_Abs_mp5e = (rtb_TmpSignalConversionAtRTE_R_ * 0.95F) +
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE;

  /* Switch: '<S35>/Switch' incorporates:
   *  Abs: '<S35>/Abs'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S6>/Constant26'
   *  Delay: '<S35>/Delay'
   *  RelationalOperator: '<S35>/Relational Operator'
   *  RelationalOperator: '<S39>/Compare'
   *  Sum: '<S35>/Add2'
   *  Switch: '<S35>/Switch1'
   */
  if (fabsf(CtAp_SlopEst_ARID_DEF.Delay_DSTATE - rtb_Abs_mp5e) <= 0.01F) {
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE = rtb_Abs_mp5e;
  } else if (rtb_TmpSignalConversionAtRTE_R_ >= 0.0F) {
    /* Switch: '<S35>/Switch1' incorporates:
     *  Sum: '<S35>/Add3'
     */
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE += 0.01F;
  } else {
    /* Switch: '<S35>/Switch1' incorporates:
     *  Sum: '<S35>/Add4'
     */
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE -= 0.01F;
  }

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S6>/Constant5'
   *  Constant: '<S6>/Constant6'
   *  RelationalOperator: '<S14>/Compare'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  if ((real_T)CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE == 1.0) {
    rtb_TmpSignalConversionAtRTE_R_ = SlopEst_VCUAcclrEnb2_CFG;
  } else {
    rtb_TmpSignalConversionAtRTE_R_ = SlopEst_VCUAcclrEnb1_CFG;
  }

  /* RelationalOperator: '<S6>/RelationalOperator' incorporates:
   *  Abs: '<S6>/Abs4'
   *  Delay: '<S35>/Delay'
   *  Switch: '<S6>/Switch1'
   */
  rtb_RelationalOperator_fm4q = (fabsf(CtAp_SlopEst_ARID_DEF.Delay_DSTATE) <=
    rtb_TmpSignalConversionAtRTE_R_);

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_TimeCnt3' */
  /* Constant: '<S6>/Constant23' incorporates:
   *  Constant: '<S6>/Constant24'
   */
  rtb_RelationalOperator_k0ty = CtAp_SlopEst_ATOM_TimeCnt
    (rtb_RelationalOperator_fm4q, ((uint16_T)10U), SlopEst_VCUAcclrEnbTime_CFG,
     &CtAp_SlopEst_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S6>/ATOM_TimeCnt3' */

  /* Logic: '<S6>/LogicalOperator4' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  Logic: '<S6>/LogicalOperator1'
   *  Logic: '<S6>/LogicalOperator5'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S31>/Compare'
   */
  SlopEst_Enable = (rtb_RelationalOperator_k0ty && rtb_Compare_ac5z &&
                    ((rtb_TmpSignalConversionAtR_m31l != ((uint8_T)
    SlopRes_BrkPress)) || (rtb_Abs <= SlopEst_BrakeSpdEnable_CFG)));

  /* Outputs for Enabled SubSystem: '<S6>/CalcnFormulaOne2' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (SlopEst_Enable) {
    /* Product: '<S12>/Divide3' incorporates:
     *  Constant: '<S12>/Constant'
     */
    rtb_TmpSignalConversionAtRTE_R_ = VehMot_YRSAxFlt_mps2q / SlopEst_GAcclr_CFG;

    /* Trigonometry: '<S12>/Trigonometric Function1' */
    if (rtb_TmpSignalConversionAtRTE_R_ > 1.0F) {
      rtb_TmpSignalConversionAtRTE_R_ = 1.0F;
    } else if (rtb_TmpSignalConversionAtRTE_R_ < -1.0F) {
      rtb_TmpSignalConversionAtRTE_R_ = -1.0F;
    } else {
      /* no actions */
    }

    /* Sum: '<S37>/Add' incorporates:
     *  Constant: '<S12>/Constant18'
     *  Constant: '<S12>/Pi'
     *  Delay: '<S37>/Delay'
     *  Product: '<S12>/Divide1'
     *  Product: '<S12>/Product1'
     *  Sum: '<S37>/Add5'
     *  Switch: '<S37>/Switch'
     *  Trigonometry: '<S12>/Trigonometric Function1'
     */
    rtb_TmpSignalConversionAtRTE_R_ = (180.0F * (asinf
      (rtb_TmpSignalConversionAtRTE_R_) / 3.14159274F)) - VehMot_SlopGrdLcl1_pct;

    /* Sum: '<S37>/Add1' incorporates:
     *  Constant: '<S12>/Constant1'
     *  Constant: '<S6>/Constant4'
     *  Delay: '<S37>/Delay'
     *  Product: '<S37>/Product'
     *  Sum: '<S37>/Add'
     */
    rtb_Abs_mp5e = (rtb_TmpSignalConversionAtRTE_R_ * 0.95F) +
      VehMot_SlopGrdLcl1_pct;

    /* Switch: '<S37>/Switch' incorporates:
     *  Abs: '<S37>/Abs'
     *  Constant: '<S12>/Constant2'
     *  Constant: '<S38>/Constant'
     *  Delay: '<S37>/Delay'
     *  RelationalOperator: '<S37>/Relational Operator'
     *  RelationalOperator: '<S38>/Compare'
     *  Sum: '<S37>/Add2'
     *  Switch: '<S37>/Switch1'
     */
    if (fabsf(VehMot_SlopGrdLcl1_pct - rtb_Abs_mp5e) <= SlopEst_Limit_CFG) {
      /* Switch: '<S37>/Switch' */
      VehMot_SlopGrdLcl1_pct = rtb_Abs_mp5e;
    } else if (rtb_TmpSignalConversionAtRTE_R_ >= 0.0F) {
      /* Switch: '<S37>/Switch1' incorporates:
       *  Sum: '<S37>/Add3'
       *  Switch: '<S37>/Switch'
       */
      VehMot_SlopGrdLcl1_pct = VehMot_SlopGrdLcl1_pct + SlopEst_Limit_CFG;
    } else {
      /* Switch: '<S37>/Switch' incorporates:
       *  Sum: '<S37>/Add4'
       *  Switch: '<S37>/Switch1'
       */
      VehMot_SlopGrdLcl1_pct = VehMot_SlopGrdLcl1_pct - SlopEst_Limit_CFG;
    }
  }

  /* End of Outputs for SubSystem: '<S6>/CalcnFormulaOne2' */

  /* Abs: '<S6>/Abs7' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  rtb_Abs_mp5e = fabsf(VehMot_SlopGrdLcl1_pct);

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Abs: '<S6>/Abs3'
   *  Constant: '<S16>/Constant'
   *  UnitDelay: '<S6>/Unit Delay3'
   */
  rtb_Compare_bpcl = (fabsf(VehMot_SlopGrdLcl2_pct) <= SlopRes_EntZeroSlop_CFG);

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_TimeCnt5' */
  /* Constant: '<S6>/Constant11' incorporates:
   *  Constant: '<S6>/Constant13'
   */
  rtb_RelationalOperator_k0ty = CtAp_SlopEst_ATOM_TimeCnt(rtb_Compare_bpcl,
    ((uint16_T)10U), SlopEst_EntZeroSlopTime_CFG,
    &CtAp_SlopEst_ARID_DEF.ARID_DEF_ATOM_TimeCnt5);

  /* End of Outputs for SubSystem: '<S6>/ATOM_TimeCnt5' */

  /* UnitDelay: '<S6>/Unit Delay4' incorporates:
   *  UnitDelay: '<S6>/Unit Delay'
   */
  CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE =
    CtAp_SlopEst_ARID_DEF.UnitDelay4_DSTATE;

  /* Logic: '<S6>/LogicalOperator6' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  rtb_LogicalOperator6 = (((real_T)rtb_TmpSignalConversionAtR_hg4k == 3.0) &&
    ((real_T)CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE == 4.0));

  /* UnitDelay: '<S6>/Unit Delay5' incorporates:
   *  UnitDelay: '<S6>/Unit Delay'
   */
  CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE =
    CtAp_SlopEst_ARID_DEF.UnitDelay5_DSTATE;

  /* Logic: '<S6>/LogicalOperator7' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S32>/Constant'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  rtb_LogicalOperator7 = (((real_T)CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE == 3.0)
    && ((real_T)rtb_TmpSignalConversionAtR_hg4k == 4.0));

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   */
  rtb_Compare_ogwj = ((real_T)rtb_Abs > 0.0);

  /* UnitDelay: '<S6>/Unit Delay1' incorporates:
   *  UnitDelay: '<S6>/Unit Delay'
   */
  CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE =
    CtAp_SlopEst_ARID_DEF.UnitDelay1_DSTATE;

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S22>/Compare'
   */
  rtb_Compare_ac5z = ((real_T)rtb_TmpSignalConversionAtR_m31l == 0.0);

  /* Logic: '<S6>/LogicalOperator9' incorporates:
   *  Constant: '<S17>/Constant'
   *  Logic: '<S6>/LogicalOperator13'
   *  RelationalOperator: '<S17>/Compare'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  rtb_LogicalOperator9 = (((real_T)CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE == 1.0)
    && rtb_Compare_ac5z && !rtb_Compare_ogwj);

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   *  RelationalOperator: '<S26>/Compare'
   */
  rtb_Compare_ac5z = ((real_T)rtb_TmpSignalConversionAtR_m31l == 0.0);

  /* UnitDelay: '<S6>/Unit Delay6' incorporates:
   *  UnitDelay: '<S6>/Unit Delay'
   */
  CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE =
    CtAp_SlopEst_ARID_DEF.UnitDelay6_DSTATE;

  /* Logic: '<S6>/LogicalOperator11' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S27>/Constant'
   *  Logic: '<S6>/LogicalOperator10'
   *  Logic: '<S6>/LogicalOperator12'
   *  Logic: '<S6>/LogicalOperator14'
   *  Logic: '<S6>/LogicalOperator8'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  rtb_LogicalOperator6 = (rtb_RelationalOperator_k0ty && (((rtb_LogicalOperator6
    || rtb_LogicalOperator7) && rtb_Compare_ogwj) || rtb_LogicalOperator9 ||
    (rtb_Compare_ac5z && (CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE == ((uint8_T)
    SlopRes_BrkPress)) && ((real_T)rtb_Abs >= 0.0))));

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   */
  rtb_Compare_ac5z = ((real_T)rtb_TmpSignalConversionAtR_m31l == 1.0);

  /* Logic: '<S6>/LogicalOperator3' incorporates:
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S25>/Compare'
   */
  rtb_LogicalOperator7 = (rtb_Compare_ac5z && ((real_T)rtb_Abs == 0.0));

  /* Chart: '<S6>/ATOM_Chart' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   */
  if ((uint32_T)CtAp_SlopEst_ARID_DEF.is_active_c4_CtAp_SlopEst == 0U) {
    CtAp_SlopEst_ARID_DEF.is_active_c4_CtAp_SlopEst = 1U;
    CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_Normal;
    CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct = VehMot_SlopGrdLcl1_pct;
    CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
    CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
    SlopEst_TestPath = 1U;
  } else {
    switch (CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst) {
     case CtAp_SlopEst_IN_Normal:
      SlopEst_TestPath = 1U;
      if (rtb_LogicalOperator6) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_RemainDly;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
        SlopEst_TestPath = 2U;
      } else {
        CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct = VehMot_SlopGrdLcl1_pct;
      }
      break;

     case CtAp_SlopEst_IN_Remain:
      SlopEst_TestPath = 3U;
      if ((rtb_Abs_mp5e <= SlopRes_ReleaseTrigger_CFG) || rtb_LogicalOperator7 ||
          (CtAp_SlopEst_ARID_DEF.RemainCnt == SlopEst_Remain_CFG) ||
          (rtb_Abs_mp5e >= SlopEst_ExitZeroSlop_CFG)) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_Normal;
        CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct = VehMot_SlopGrdLcl1_pct;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
        SlopEst_TestPath = 1U;
      } else if (rtb_LogicalOperator6) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_RemainDly;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
        SlopEst_TestPath = 2U;
      } else {
        CtAp_SlopEst_ARID_DEF.RemainCnt = (uint16_T)((int32_T)((int32_T)
          CtAp_SlopEst_ARID_DEF.RemainCnt + 10));
      }
      break;

     default:
      /* case IN_RemainDly: */
      SlopEst_TestPath = 2U;
      if (rtb_Abs_mp5e >= SlopRes_RemainRealTrigger_CFG) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_Remain;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        SlopEst_TestPath = 3U;
      } else if (rtb_LogicalOperator7 || (CtAp_SlopEst_ARID_DEF.RemainDlyCnt ==
                  SlopEst_RemainDly_CFG)) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_Normal;
        CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct = VehMot_SlopGrdLcl1_pct;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
        SlopEst_TestPath = 1U;
      } else if (rtb_LogicalOperator6) {
        CtAp_SlopEst_ARID_DEF.is_c4_CtAp_SlopEst = CtAp_SlopEst_IN_RemainDly;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = 0U;
        CtAp_SlopEst_ARID_DEF.RemainCnt = 0U;
      } else {
        CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct = VehMot_SlopGrdLcl1_pct;
        CtAp_SlopEst_ARID_DEF.RemainDlyCnt = (uint16_T)((int32_T)((int32_T)
          CtAp_SlopEst_ARID_DEF.RemainDlyCnt + 10));
      }
      break;
    }
  }

  /* End of Chart: '<S6>/ATOM_Chart' */

  /* Sum: '<S36>/Add' incorporates:
   *  Delay: '<S36>/Delay'
   *  Sum: '<S36>/Add5'
   *  Switch: '<S36>/Switch'
   */
  rtb_TmpSignalConversionAtRTE_R_ = CtAp_SlopEst_ARID_DEF.VehMot_SlopGrd_pct -
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm;

  /* Sum: '<S36>/Add1' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant4'
   *  Delay: '<S36>/Delay'
   *  Product: '<S36>/Product'
   *  Sum: '<S36>/Add'
   */
  rtb_Abs_mp5e = (rtb_TmpSignalConversionAtRTE_R_ * 0.95F) +
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm;

  /* Switch: '<S36>/Switch' incorporates:
   *  Abs: '<S36>/Abs'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S6>/Constant3'
   *  Delay: '<S36>/Delay'
   *  RelationalOperator: '<S36>/Relational Operator'
   *  RelationalOperator: '<S40>/Compare'
   *  Sum: '<S36>/Add2'
   *  Switch: '<S36>/Switch1'
   */
  if (fabsf(CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm - rtb_Abs_mp5e) <=
      SlopEst_Limit_CFG) {
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm = rtb_Abs_mp5e;
  } else if (rtb_TmpSignalConversionAtRTE_R_ >= 0.0F) {
    /* Switch: '<S36>/Switch1' incorporates:
     *  Sum: '<S36>/Add3'
     */
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm += SlopEst_Limit_CFG;
  } else {
    /* Switch: '<S36>/Switch1' incorporates:
     *  Sum: '<S36>/Add4'
     */
    CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm -= SlopEst_Limit_CFG;
  }

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  if (SlopEst_EnableEntZero_CFG) {
    /* Switch: '<S6>/Switch' */
    VehMot_SlopGrdLcl2_pct = VehMot_SlopGrdLcl1_pct;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Delay: '<S36>/Delay'
     */
    VehMot_SlopGrdLcl2_pct = CtAp_SlopEst_ARID_DEF.Delay_DSTATE_dmmm;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Update for Delay: '<S6>/Delay2' */
  for (idxDelay = 0; idxDelay < 99; idxDelay++) {
    CtAp_SlopEst_ARID_DEF.Delay2_DSTATE[idxDelay] =
      CtAp_SlopEst_ARID_DEF.Delay2_DSTATE[idxDelay + 1];
  }

  /* End of Outputs for SubSystem: '<S1>/StationaryVehicleSys' */
  /* End of Outputs for SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts' */
  (void)Rte_Read_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/StationaryVehicleSys' */
  /* Update for Delay: '<S6>/Delay2' */
  CtAp_SlopEst_ARID_DEF.Delay2_DSTATE[99] = VehMot_YRSAxFlt_mps2q;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  CtAp_SlopEst_ARID_DEF.UnitDelay_DSTATE = SlopEst_TestPath;

  /* Update for UnitDelay: '<S6>/Unit Delay4' */
  CtAp_SlopEst_ARID_DEF.UnitDelay4_DSTATE = rtb_TmpSignalConversionAtR_hg4k;

  /* Update for UnitDelay: '<S6>/Unit Delay5' */
  CtAp_SlopEst_ARID_DEF.UnitDelay5_DSTATE = rtb_TmpSignalConversionAtR_hg4k;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  CtAp_SlopEst_ARID_DEF.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtR_m31l;

  /* Update for UnitDelay: '<S6>/Unit Delay6' */
  CtAp_SlopEst_ARID_DEF.UnitDelay6_DSTATE = rtb_TmpSignalConversionAtR_m31l;

  /* End of Outputs for SubSystem: '<S1>/StationaryVehicleSys' */

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Logic: '<S1>/LogicalOperator'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  Switch: '<S1>/Switch'
   *  Switch: '<S1>/Switch1'
   */
  if ((tmpRead_0 != ((uint8_T)SlopEst_Vaild)) ||
      tmpRead.ComM_ErrResACU02TimeoutInfo) {
    rtb_TmpSignalConversionAtRTE_R_ = 0.0F;
  } else if (VehMot_SlopGrdLcl2_pct >= SlopRes_MaxSlop_CFG) {
    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant'
     */
    rtb_TmpSignalConversionAtRTE_R_ = SlopRes_MaxSlop_CFG;
  } else if (VehMot_SlopGrdLcl2_pct <= SlopRes_MinSlop_CFG) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Switch: '<S1>/Switch'
     */
    rtb_TmpSignalConversionAtRTE_R_ = SlopRes_MinSlop_CFG;
  } else {
    rtb_TmpSignalConversionAtRTE_R_ = VehMot_SlopGrdLcl2_pct;
  }

  /* Outport: '<Root>/RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct' incorporates:
   *  Switch: '<S1>/Switch2'
   */
  (void)Rte_Write_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct
    (rtb_TmpSignalConversionAtRTE_R_);

  /* End of Outputs for SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */
}

#define CtAp_SlopEst_STOP_SEC_CODE
#include "CtAp_SlopEst_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_SlopEst_START_SEC_VAR_CONST_8
#include "CtAp_SlopEst_MemMap.h"

void R_SlopEst_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  VehMot_YRSAxFlt_mps2q = 0.0F;
  VehMot_YRSAxFltDly_mps2q = 0.0F;
  VehMot_SlopGrdLcl2_pct = 0.0F;
  VehMot_SlopGrdLcl1_pct = 0.0F;
  SlopEst_TestPath = 0U;
  SlopEst_Enable = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_SlopEst_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_SlopEst_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S1>/StationaryVehicleSys' */
  /* SystemInitialize for Chart: '<S6>/ATOM_Chart' */
  SlopEst_TestPath = 0U;

  /* End of SystemInitialize for SubSystem: '<S1>/StationaryVehicleSys' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_SlopEst_Cyclic_10ms_sys' */
}

#define CtAp_SlopEst_STOP_SEC_VAR_CONST_8
#include "CtAp_SlopEst_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
