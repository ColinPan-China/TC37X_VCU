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
 *  Filename:           CtAp_TorqCoor.c
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqCoor.h"
#include "rtwtypes.h"
#include "CtAp_TorqCoor_private.h"
#include <math.h>
#include "look1_iflf_binlca.h"
#include "CtAp_TorqCoor_Glb.h"
#include "CtAp_TorqCoor_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_TorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static real32_T TorqPahMgmt_DesFildLmtTq_Nm;/* '<S15>/Switch' */

/* TorqPahMgmt DesFildLmtTq Nm */
#define CtAp_TorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"

ARID_DEF_CtAp_TorqCoor_T CtAp_TorqCoor_ARID_DEF;

#define CtAp_TorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S11>/ATOM_EdgeDetectFall' */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

boolean_T CtAp_TorqCo_ATOM_EdgeDetectFall(boolean_T rtu_In1,
  ARID_DEF_ATOM_EdgeDetectFall__T *CtAp_TorqCoor__ARID_DEF_arg)
{
  boolean_T rty_Out1_0;

  /* Logic: '<S13>/AND' incorporates:
   *  Logic: '<S13>/NOT'
   *  UnitDelay: '<S13>/Delay'
   */
  rty_Out1_0 = (!rtu_In1 && CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE);

  /* Update for UnitDelay: '<S13>/Delay' */
  CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE = rtu_In1;
  return rty_Out1_0;
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* System initialize for atomic system: '<S11>/ATOM_RS_FF' */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

void CtAp_TorqCoor_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Torq_T *CtAp_TorqCoor__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S14>/UnitDelay1' */
  CtAp_TorqCoor__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* Output and update for atomic system: '<S11>/ATOM_RS_FF' */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

boolean_T CtAp_TorqCoor_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Torq_T *CtAp_TorqCoor__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S14>/LogOp2' incorporates:
   *  Logic: '<S14>/LogOp'
   *  Logic: '<S14>/LogOp4'
   *  UnitDelay: '<S14>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S || CtAp_TorqCoor__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S14>/UnitDelay1' */
  CtAp_TorqCoor__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* Output and update for atomic system: '<S8>/ATOM_Limiter' */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

void CtAp_TorqCoor_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  /* Switch: '<S15>/Switch' incorporates:
   *  RelationalOperator: '<S15>/RelationalOperator'
   *  RelationalOperator: '<S15>/RelationalOperator1'
   *  Switch: '<S15>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    /* Switch: '<S15>/Switch' */
    TorqPahMgmt_DesFildLmtTq_Nm = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S15>/Switch1' incorporates:
     *  Switch: '<S15>/Switch'
     */
    TorqPahMgmt_DesFildLmtTq_Nm = rtu_In;
  } else {
    /* Switch: '<S15>/Switch' incorporates:
     *  Switch: '<S15>/Switch1'
     */
    TorqPahMgmt_DesFildLmtTq_Nm = rtu_MIN;
  }

  /* End of Switch: '<S15>/Switch' */
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* Output and update for atomic system: '<S9>/ATOM_RateRampLmt' */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

real32_T CtAp_TorqCoor_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_TorqCoor__ARID_DEF_arg)
{
  real32_T rty_output_0;

  /* Switch: '<S16>/Switch' incorporates:
   *  Delay: '<S16>/Delay'
   *  MinMax: '<S16>/MinMax'
   *  MinMax: '<S16>/MinMax1'
   *  Product: '<S16>/Product2'
   *  Product: '<S16>/Product3'
   *  RelationalOperator: '<S16>/Relational Operator1'
   *  Sum: '<S16>/Sum'
   *  Sum: '<S16>/Sum1'
   */
  if (rtu_demand > CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE) {
    rty_output_0 = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
                         CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE);
  } else {
    rty_output_0 = fmaxf(rtu_demand, CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE -
                         (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S16>/Switch' */

  /* Update for Delay: '<S16>/Delay' */
  CtAp_TorqCoor__ARID_DEF_arg->Delay_DSTATE = rty_output_0;
  return rty_output_0;
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqCoor_START_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

void R_TorqCoor_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T TorqPahMgmt_PrevDesCoorrTq_Nm;
  real32_T rtb_TorqPahMgmt_DesFildTq_Nm;
  real32_T rtb_TorqPahMgmt_EmacQstyMaxTq_N;
  real32_T rtb_TorqPahMgmt_EmacQstyMinTq_N;
  real32_T rtb_VehMot_VehSpd_kph_read;
  uint8_T rtb_ModMgmt_HvSts_Enum_read;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogOp2;
  boolean_T rtb_AND;
  real32_T tmpRead;
  real32_T tmpRead_0;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;

  /* SignalConversion: '<S4>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
    (&rtb_VehMot_VehSpd_kph_read);

  /* SignalConversion: '<S4>/SignalCopy7' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* SignalConversion: '<S4>/SignalCopy6' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
    (&rtb_TorqPahMgmt_EmacQstyMaxTq_N);

  /* SignalConversion: '<S4>/SignalCopy5' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm'
   */
  (void)Rte_Read_RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm
    (&rtb_TorqPahMgmt_DesFildTq_Nm);

  /* SignalConversion: '<S4>/SignalCopy4' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_ModMgmt_HvSts_Enum_read);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm' */
  (void)Rte_Read_RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqCoor_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_TorqCoor' */
  /* Outputs for Atomic SubSystem: '<S8>/ATOM_Limiter' */
  CtAp_TorqCoor_ATOM_Limiter(rtb_TorqPahMgmt_EmacQstyMaxTq_N,
    rtb_TorqPahMgmt_DesFildTq_Nm, rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* End of Outputs for SubSystem: '<S8>/ATOM_Limiter' */

  /* UnitDelay: '<S6>/TorqPahMgmt_PrevDesCoorrTq_Nm' */
  TorqPahMgmt_PrevDesCoorrTq_Nm = TorqPahMgmt_DesCoorrTq_Nm;

  /* Outputs for Atomic SubSystem: '<S6>/ESP_Interventions_Filter' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqCoor_Input' */
  /* Switch: '<S10>/Switch' incorporates:
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  Switch: '<S10>/Switch1'
   */
  if (tmpRead_1) {
    /* Switch: '<S10>/Switch' incorporates:
     *  SignalConversion: '<S4>/SignalCopy'
     */
    TorqPahMgmt_DesCoorrUnFilTq_Nm = tmpRead;
  } else if (tmpRead_2) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  SignalConversion: '<S4>/SignalCopy1'
     *  Switch: '<S10>/Switch'
     */
    TorqPahMgmt_DesCoorrUnFilTq_Nm = tmpRead_0;
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Switch: '<S10>/Switch1'
     */
    TorqPahMgmt_DesCoorrUnFilTq_Nm = TorqPahMgmt_DesFildLmtTq_Nm;
  }

  /* End of Switch: '<S10>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqCoor_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/Torque_Coordination_Delta_Tq'
   *
   * Block requirements for '<S7>/Torque_Coordination_Delta_Tq':
   *  1. SWREQ_01865 TCS/VDCV/DTC  Exit Ramp inctive
   */
  /* Sum: '<S12>/Subtract' */
  TorqPahMgmt_DesCoorrDeltaTq_Nm = TorqPahMgmt_DesFildLmtTq_Nm -
    TorqPahMgmt_PrevDesCoorrTq_Nm;

  /* End of Outputs for SubSystem: '<S7>/Torque_Coordination_Delta_Tq' */

  /* Outputs for Atomic SubSystem: '<S7>/SlopeValue'
   *
   * Block requirements for '<S7>/SlopeValue':
   *  1. SWREQ_01864 TCS/VDCV/DTC  Exit Ramp Active
   *  2. SWREQ_01865 TCS/VDCV/DTC  Exit Ramp inctive
   *  3. SWREQ_01866 TCS/VDCV/DTC  Exit Ramp keep
   *  4. SWREQ_01867 TCS/VDCV/DTC  Exit Ramp inctive ramp value
   *  5. SWREQ_06449 TCS/VDCV/DTC  Active Ramp value
   *  6. SWREQ_06450 TCS/VDCV/DTC  Exit Ramp inctive ramp value
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqCoor_Input' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  rtb_LogicalOperator = (tmpRead_1 || tmpRead_2);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqCoor_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_EdgeDetectFall' */
  rtb_AND = CtAp_TorqCo_ATOM_EdgeDetectFall(rtb_LogicalOperator,
    &CtAp_TorqCoor_ARID_DEF.ARID_DEF_ATOM_EdgeDetectFall);

  /* End of Outputs for SubSystem: '<S11>/ATOM_EdgeDetectFall' */

  /* SignalConversion generated from: '<S11>/ATOM_EdgeDetectFall' */
  TorqPahMgmt_IBSIntvShOffCdn_Flg = rtb_AND;

  /* RelationalOperator: '<S11>/RelationalOperator' incorporates:
   *  Abs: '<S11>/Abs'
   *  Constant: '<S11>/TorqPahMgmt_TqCoorrRampStsThdTq_CFG'
   */
  TorqPahMgmt_IBSIntvRampShOffCdn_Flg = (fabsf(TorqPahMgmt_DesCoorrDeltaTq_Nm) <=
    TorqPahMgmt_TqCoorrRampStsThdTq_CFG);

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_TorqCoor_ATOM_RS_FF(TorqPahMgmt_IBSIntvRampShOffCdn_Flg,
    TorqPahMgmt_IBSIntvShOffCdn_Flg, &CtAp_TorqCoor_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S11>/ATOM_RS_FF' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqCoor_Input' */
  /* Switch: '<S11>/Switch' incorporates:
   *  Logic: '<S11>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  Switch: '<S11>/Switch2'
   */
  if (tmpRead_1 || tmpRead_2) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/TorqPahMgmt_IBSIntvGrdtSlopPosTq_CFG'
     */
    TorqPahMgmt_GrdTqCoorrPosTq_Nm = TorqPahMgmt_IBSIntvGrdtSlopPosTq_CFG;
  } else if (rtb_LogOp2) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Lookup_n-D: '<S11>/TorqPahMgmt_GrdtTqCoorrPosTq_LUT'
     *  Sum: '<S12>/Subtract'
     *  Switch: '<S11>/Switch2'
     */
    TorqPahMgmt_GrdTqCoorrPosTq_Nm = look1_iflf_binlca
      (TorqPahMgmt_DesCoorrDeltaTq_Nm, &TorqPahMgmt_GrdtTqCoorrPosTqX_LUT[0],
       &TorqPahMgmt_GrdtTqCoorrPosTq_LUT[0], 7U);
  } else {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/TorqPahMgmt_GrdTqCoorrMaxPosTq_CFG'
     *  Switch: '<S11>/Switch2'
     */
    TorqPahMgmt_GrdTqCoorrPosTq_Nm = TorqPahMgmt_GrdTqCoorrMaxPosTq_CFG;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S11>/Switch1' incorporates:
   *  Logic: '<S11>/LogicalOperator2'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  Switch: '<S11>/Switch3'
   */
  if (tmpRead_1 || tmpRead_2) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/TorqPahMgmt_IBSIntvGrdtSlopNegTq_CFG'
     */
    TorqPahMgmt_GrdTqCoorrNegTq_Nm = TorqPahMgmt_IBSIntvGrdtSlopNegTq_CFG;
  } else if (rtb_LogOp2) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Lookup_n-D: '<S11>/TorqPahMgmt_GrdtTqCoorrNegTq_LUT'
     *  Sum: '<S12>/Subtract'
     *  Switch: '<S11>/Switch3'
     */
    TorqPahMgmt_GrdTqCoorrNegTq_Nm = look1_iflf_binlca
      (TorqPahMgmt_DesCoorrDeltaTq_Nm, &TorqPahMgmt_GrdtTqCoorrNegTqX_LUT[0],
       &TorqPahMgmt_GrdtTqCoorrNegTq_LUT[0], 9U);
  } else {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/TorqPahMgmt_GrdTqCoorrMaxNegTq_CFG'
     *  Switch: '<S11>/Switch3'
     */
    TorqPahMgmt_GrdTqCoorrNegTq_Nm = TorqPahMgmt_GrdTqCoorrMaxNegTq_CFG;
  }

  /* End of Switch: '<S11>/Switch1' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqCoor_Input' */
  /* End of Outputs for SubSystem: '<S7>/SlopeValue' */
  /* End of Outputs for SubSystem: '<S6>/ESP_Interventions_Filter' */

  /* Outputs for Atomic SubSystem: '<S6>/Torque_Coordination'
   *
   * Block requirements for '<S6>/Torque_Coordination':
   *  1. SWREQ_06451 TCS/VDCV/DTC Torque Filter
   */
  /* Outputs for Atomic SubSystem: '<S9>/ATOM_RateRampLmt' */
  /* Constant: '<S9>/TorqCoor_Dt' */
  TorqPahMgmt_DesCoorrTq_Nm = CtAp_TorqCoor_ATOM_RateRampLmt
    (TorqPahMgmt_DesCoorrUnFilTq_Nm, TorqPahMgmt_GrdTqCoorrPosTq_Nm,
     TorqPahMgmt_GrdTqCoorrNegTq_Nm, TorqCoor_Dt,
     &CtAp_TorqCoor_ARID_DEF.ARID_DEF_ATOM_RateRampLmt);

  /* End of Outputs for SubSystem: '<S9>/ATOM_RateRampLmt' */
  /* End of Outputs for SubSystem: '<S6>/Torque_Coordination' */
  /* End of Outputs for SubSystem: '<S2>/Function_TorqCoor' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqCoor_Output' */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm
    (TorqPahMgmt_DesCoorrTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqCoor_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqCoor_Cyclic_10ms_sys' */
}

#define CtAp_TorqCoor_STOP_SEC_CODE
#include "CtAp_TorqCoor_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqCoor_START_SEC_VAR_CONST_8
#include "CtAp_TorqCoor_MemMap.h"

void R_TorqCoor_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_DesCoorrTq_Nm = 0.0F;
  TorqPahMgmt_DesCoorrUnFilTq_Nm = 0.0F;
  TorqPahMgmt_DesCoorrDeltaTq_Nm = 0.0F;
  TorqPahMgmt_GrdTqCoorrPosTq_Nm = 0.0F;
  TorqPahMgmt_GrdTqCoorrNegTq_Nm = 0.0F;
  TorqPahMgmt_IBSIntvShOffCdn_Flg = false;
  TorqPahMgmt_IBSIntvRampShOffCdn_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TorqCoor_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TorqCoor_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_TorqCoor_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Function_TorqCoor' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/ESP_Interventions_Filter' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/SlopeValue'
   *
   * Block requirements for '<S7>/SlopeValue':
   *  1. SWREQ_01864 TCS/VDCV/DTC  Exit Ramp Active
   *  2. SWREQ_01865 TCS/VDCV/DTC  Exit Ramp inctive
   *  3. SWREQ_01866 TCS/VDCV/DTC  Exit Ramp keep
   *  4. SWREQ_01867 TCS/VDCV/DTC  Exit Ramp inctive ramp value
   *  5. SWREQ_06449 TCS/VDCV/DTC  Active Ramp value
   *  6. SWREQ_06450 TCS/VDCV/DTC  Exit Ramp inctive ramp value
   */
  /* SystemInitialize for Atomic SubSystem: '<S11>/ATOM_RS_FF' */
  CtAp_TorqCoor_ATOM_RS_FF_Init(false,
    &CtAp_TorqCoor_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S11>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S7>/SlopeValue' */
  /* End of SystemInitialize for SubSystem: '<S6>/ESP_Interventions_Filter' */
  /* End of SystemInitialize for SubSystem: '<S2>/Function_TorqCoor' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_TorqCoor_Cyclic_10ms_sys' */
}

#define CtAp_TorqCoor_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqCoor_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
