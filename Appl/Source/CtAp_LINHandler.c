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
 *  Filename:           CtAp_LINHandler.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 18:32:11 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Sep 11 18:31:24 2025
 *
 *
 *******************************************************************************/
#include "CtAp_LINHandler.h"
#include "rtwtypes.h"
#include "CtAp_LINHandler_private.h"
#include "Rte_Type.h"
#include "CtAp_LINHandler_Glb.h"
#include "CtAp_LINHandler_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_LINHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"

ARID_DEF_CtAp_LINHandler_T CtAp_LINHandler_ARID_DEF;

#define CtAp_LINHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_TimeCnt1'
 *    '<S7>/ATOM_TimeCnt2'
 *    '<S8>/ATOM_TimeCnt1'
 *    '<S8>/ATOM_TimeCnt2'
 *    '<S17>/ATOM_TimeCnt2'
 *    '<S18>/ATOM_TimeCnt2'
 *    '<S19>/ATOM_TimeCnt2'
 *    '<S20>/ATOM_TimeCnt2'
 *    '<S21>/ATOM_TimeCnt2'
 */
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

boolean_T CtAp_LINHandler_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_LI_T
  *CtAp_LINHandler__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S13>/Add1' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion'
   *  DataTypeConversion: '<S13>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S13>/Switch' */
  if (rtu_In) {
    /* Sum: '<S13>/Add' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     *  UnitDelay: '<S13>/Delay'
     */
    CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S13>/Min' */
    if (rtb_Add1 <= CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S13>/Add' */
      CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S13>/Min' */
  } else {
    /* Sum: '<S13>/Add' incorporates:
     *  Constant: '<S13>/Constant'
     *  UnitDelay: '<S13>/Delay'
     */
    CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S13>/Switch' */

  /* RelationalOperator: '<S13>/Relational Operator' incorporates:
   *  UnitDelay: '<S13>/Delay'
   */
  return CtAp_LINHandler__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S17>/NoDTAvoidMu'
 *    '<S19>/NoDTAvoidMu'
 *    '<S20>/NoDTAvoidMu'
 *    '<S21>/NoDTAvoidMu'
 */
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

void CtAp_LINHandler_NoDTAvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDTAvoidMu_CtAp_LIN_T
  *CtAp_LINHandler__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S23>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S24>/Constant2'
     *  DataTypeConversion: '<S24>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S24>/Switch1' */

    /* RelationalOperator: '<S24>/Equal2' incorporates:
     *  Constant: '<S24>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S25>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S25>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S25>/Sum' incorporates:
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S25>/MinMax' */
      if (u0 <= CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S25>/Sum' */
        CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S25>/MinMax' */
    } else {
      /* Sum: '<S25>/Sum' incorporates:
       *  Constant: '<S24>/Constant37'
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Switch: '<S24>/Switch2' incorporates:
     *  Constant: '<S24>/FAILED'
     *  Constant: '<S24>/PASSED'
     *  RelationalOperator: '<S25>/B_MiHold'
     *  Switch: '<S24>/Switch3'
     *  UnitDelay: '<S25>/UnitDelay'
     */
    if (CtAp_LINHandler__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S24>/Switch3' incorporates:
       *  Constant: '<S24>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S24>/Switch2' */

    /* Switch: '<S24>/Switch6' incorporates:
     *  Constant: '<S24>/Constant30'
     *  Constant: '<S24>/Constant31'
     *  Constant: '<S24>/Constant32'
     *  Delay: '<S24>/Delay1'
     *  RelationalOperator: '<S24>/Equal3'
     *  RelationalOperator: '<S24>/Equal4'
     *  Switch: '<S24>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S24>/Switch7' incorporates:
       *  Constant: '<S24>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_LINHandler__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S24>/Switch6' */

    /* Update for Delay: '<S24>/Delay1' */
    CtAp_LINHandler__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S23>/ErrorHandleSysU16' */
}

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

/* Output and update for atomic system: '<S18>/NoTime' */
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

void CtAp_LINHandler_NoTime(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_NoTime_CtAp_LINHandl_T *CtAp_LINHandler__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S29>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S29>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S31>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S31>/Constant2'
     *  Constant: '<S31>/Constant4'
     *  Switch: '<S31>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S31>/Switch' incorporates:
       *  Constant: '<S31>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S31>/Switch1' */

    /* Switch: '<S31>/Switch8' incorporates:
     *  Constant: '<S31>/Constant5'
     *  Constant: '<S31>/Constant6'
     *  Constant: '<S31>/DEBOUNCING'
     *  Constant: '<S31>/DEBOUNCING_P'
     *  RelationalOperator: '<S31>/Equal2'
     *  RelationalOperator: '<S31>/Equal6'
     *  Switch: '<S31>/Switch3'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (*rty_MonRes == ((uint8_T)1U)) {
      /* Switch: '<S31>/Switch3' incorporates:
       *  Constant: '<S31>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S31>/Switch8' */

    /* Switch: '<S31>/Switch6' incorporates:
     *  Constant: '<S31>/Constant30'
     *  Constant: '<S31>/Constant31'
     *  Constant: '<S31>/Constant32'
     *  Delay: '<S31>/Delay1'
     *  RelationalOperator: '<S31>/Equal3'
     *  RelationalOperator: '<S31>/Equal4'
     *  Switch: '<S31>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S31>/Switch7' incorporates:
       *  Constant: '<S31>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_LINHandler__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S31>/Switch6' */

    /* Update for Delay: '<S31>/Delay1' */
    CtAp_LINHandler__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S29>/ErrorHandleSysU16' */
}

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S69>/ATOM_SignalRead'
 *    '<S70>/ATOM_SignalRead'
 *    '<S71>/ATOM_SignalRead'
 *    '<S72>/ATOM_SignalRead'
 *    '<S73>/ATOM_SignalRead'
 *    '<S73>/ATOM_SignalRead1'
 *    '<S73>/ATOM_SignalRead2'
 *    '<S73>/ATOM_SignalRead3'
 *    '<S74>/ATOM_SignalRead'
 *    '<S75>/ATOM_SignalRead'
 *    '<S76>/ATOM_SignalRead'
 */
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

real32_T CtAp_LINHandler_ATOM_SignalRead(real32_T rtu_InputSignal, real32_T
  rtu_IresolutionRation, real32_T rtu_offset)
{
  real32_T tmp;

  /* Switch: '<S77>/Switch' incorporates:
   *  Constant: '<S77>/Constant'
   *  Constant: '<S77>/Constant1'
   *  RelationalOperator: '<S77>/Equal'
   */
  if (rtu_IresolutionRation == 0.0F) {
    tmp = (real32_T)2.2204460492503131E-16;
  } else {
    tmp = rtu_IresolutionRation;
  }

  /* Product: '<S77>/Product1' incorporates:
   *  Product: '<S77>/Divide'
   *  Sum: '<S77>/Plus'
   *  Switch: '<S77>/Switch'
   */
  return (rtu_InputSignal + (rtu_offset / tmp)) * rtu_IresolutionRation;
}

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_LINHandler_START_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

void R_LINHandler_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion4;
  real32_T rtb_DataTypeConversion4_mlnt;
  real32_T rtb_DataTypeConversion4_b3xt;
  real32_T rtb_DataTypeConversion4_pxqa;
  real32_T rtb_Product1;
  real32_T rtb_Product1_jyho;
  real32_T rtb_DataTypeConversion4_mxvo;
  real32_T rtb_Product1_frzr;
  real32_T rtb_Product1_d35n;
  real32_T rtb_DataTypeConversion6_c3la;
  real32_T rtb_Product1_atpk;
  real32_T rtb_DataTypeConversion2;
  real32_T rtb_Product1_fzmh;
  real32_T rtb_DataTypeConversion4_cu3d;
  real32_T rtb_Product1_ep5c;
  real32_T rtb_Product1_aff3;
  real32_T rtb_Product1_af5q;
  real32_T rtb_DataTypeConversion4_aeub;
  real32_T rtb_Product1_iets;
  real32_T rtb_DataTypeConversion4_mbi4;
  real32_T rtb_Product1_fvhf;
  boolean_T rtb_ComM_ACUNodComFailr_Flg;
  boolean_T rtb_ComM_BCMNodComFailr_Flg;
  boolean_T rtb_ComM_CGWNodComFailr_Flg;
  boolean_T rtb_ComM_CHIBSNodComFailr_Flg;
  boolean_T rtb_ComM_DCMFLNodComFailr_Flg;
  boolean_T rtb_ComM_DCMFRNodComFailr_Flg;
  boolean_T rtb_ComM_DCMRLNodComFailr_Flg;
  boolean_T rtb_ComM_DCMRRNodComFailr_Flg;
  boolean_T rtb_Resp_Error_LIN01_IsUpdated;
  boolean_T rtb_FRC_ComFtonNet_IsUpdated;
  FRC_Vl_OV rtb_FRC_Vl_OV;
  FRC_Vl_UV rtb_FRC_Vl_UV;
  boolean_T rtb_ComM_IVINodComFailr_Flg;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator1_nwli;
  boolean_T rtb_LogicalOperator_fjx0;
  boolean_T rtb_LogicalOperator1_ajjl;
  boolean_T rtb_LogicalOperator_gpgb;
  boolean_T rtb_LogicalOperator1_h4ii;
  boolean_T rtb_LogicalOperator_m2w5;
  boolean_T rtb_LogicalOperator1_jtrn;
  boolean_T rtb_LogicalOperator_d5g2;
  boolean_T rtb_LogicalOperator1_ao5s;
  boolean_T rtb_DataTypeConversion_mowp;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_DataTypeConversion_hcvm;
  boolean_T rtb_RelationalOperator_hnid;
  boolean_T rtb_DataTypeConversion_pytb;
  boolean_T rtb_RelationalOperator_lhcs;
  boolean_T rtb_RelationalOperator_pfjj;
  boolean_T rtb_DataTypeConversion_lipa;
  boolean_T rtb_RelationalOperator_moez;
  boolean_T rtb_LogicalOperator1_d5wf;
  boolean_T rtb_RelationalOperator_eboa;
  boolean_T rtb_RelationalOperator_knjg;
  boolean_T rtb_LogicalOperator1_jsbk;
  boolean_T rtb_RelationalOperator_nqpo;
  boolean_T rtb_RelationalOperator_fcp2;
  boolean_T rtb_DataTypeConversion_of2q;
  dt_ErrMgmt_DrvMotTempOvrLamp tmpRead_i;
  dt_ErrMgmt_HvBattTempOvrLamp tmpRead_k;
  real32_T rtb_Switch;
  real32_T rtb_Switch_lolb;
  real32_T rtb_Switch_oopb;
  real32_T rtb_Switch_psiw;
  I_BATT_LIN01 tmpRead_p;
  U_BATT_LIN01 tmpRead_z;
  IBATT_QUIESCENT_LIN01 tmpRead_r;
  I_RANGE_LIN01 tmpRead_q;
  SOC_LIN01 tmpRead_u;
  SOF_V1_LIN01 tmpRead_v;
  SOF_V2_LIN01 tmpRead_w;
  SOH_LIN01 tmpRead_x;
  T_BATT_LIN01 tmpRead_y;
  uint8_T tmpRead_0;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_4;
  uint8_T tmpRead_5;
  uint8_T tmpRead_6;
  uint8_T tmpRead_7;
  uint8_T tmpRead_8;
  uint8_T tmpRead_9;
  uint8_T tmpRead_a;
  uint8_T tmpRead_b;
  uint8_T tmpRead_c;
  uint8_T tmpRead_d;
  uint8_T tmpRead_e;
  uint8_T tmpRead_f;
  uint8_T tmpRead_g;
  uint8_T tmpRead_j;
  FRC_ComFtonNet tmpRead_n;
  Resp_Error_LIN01 tmpRead_s;
  boolean_T rtb_LogicalOperator_hrzk;
  boolean_T rtb_LogicalOperator_tmp_tmp;
  boolean_T tmpRead;
  boolean_T tmpRead_h;
  boolean_T tmpRead_l;
  boolean_T tmpRead_m;
  boolean_T tmpRead_o;
  boolean_T tmpRead_t;

  /* Inport: '<Root>/Resp_Error_LIN01_Resp_Error_LIN01_IsUpdated' */
  rtb_LogicalOperator_hrzk = Rte_IsUpdated_Resp_Error_LIN01_Resp_Error_LIN01();

  /* SignalConversion: '<S5>/SignalCopy47' incorporates:
   *  Inport: '<Root>/FRC_ComFtonNet_FRC_ComFtonNet_IsUpdated'
   */
  rtb_FRC_ComFtonNet_IsUpdated = Rte_IsUpdated_FRC_ComFtonNet_FRC_ComFtonNet();

  /* Inport: '<Root>/U_BATT_LIN01_U_BATT_LIN01' */
  (void)Rte_Read_U_BATT_LIN01_U_BATT_LIN01(&tmpRead_z);

  /* Inport: '<Root>/T_BATT_LIN01_T_BATT_LIN01' */
  (void)Rte_Read_T_BATT_LIN01_T_BATT_LIN01(&tmpRead_y);

  /* Inport: '<Root>/SOH_LIN01_SOH_LIN01' */
  (void)Rte_Read_SOH_LIN01_SOH_LIN01(&tmpRead_x);

  /* Inport: '<Root>/SOF_V2_LIN01_SOF_V2_LIN01' */
  (void)Rte_Read_SOF_V2_LIN01_SOF_V2_LIN01(&tmpRead_w);

  /* Inport: '<Root>/SOF_V1_LIN01_SOF_V1_LIN01' */
  (void)Rte_Read_SOF_V1_LIN01_SOF_V1_LIN01(&tmpRead_v);

  /* Inport: '<Root>/SOC_LIN01_SOC_LIN01' */
  (void)Rte_Read_SOC_LIN01_SOC_LIN01(&tmpRead_u);

  /* Inport: '<Root>/RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo' */
  (void)Rte_Read_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo
    (&tmpRead_t);

  /* Inport: '<Root>/Resp_Error_LIN01_Resp_Error_LIN01' */
  (void)Rte_Read_Resp_Error_LIN01_Resp_Error_LIN01(&tmpRead_s);

  /* Inport: '<Root>/IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01' */
  (void)Rte_Read_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01(&tmpRead_r);

  /* Inport: '<Root>/I_RANGE_LIN01_I_RANGE_LIN01' */
  (void)Rte_Read_I_RANGE_LIN01_I_RANGE_LIN01(&tmpRead_q);

  /* Inport: '<Root>/I_BATT_LIN01_I_BATT_LIN01' */
  (void)Rte_Read_I_BATT_LIN01_I_BATT_LIN01(&tmpRead_p);

  /* SignalConversion: '<S5>/SignalCopy51' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
    (&rtb_ComM_IVINodComFailr_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState' */
  (void)Rte_Read_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState(&tmpRead_o);

  /* SignalConversion: '<S5>/SignalCopy49' incorporates:
   *  Inport: '<Root>/FRC_Vl_UV_FRC_Vl_UV'
   */
  (void)Rte_Read_FRC_Vl_UV_FRC_Vl_UV(&rtb_FRC_Vl_UV);

  /* SignalConversion: '<S5>/SignalCopy48' incorporates:
   *  Inport: '<Root>/FRC_Vl_OV_FRC_Vl_OV'
   */
  (void)Rte_Read_FRC_Vl_OV_FRC_Vl_OV(&rtb_FRC_Vl_OV);

  /* Inport: '<Root>/FRC_ComFtonNet_FRC_ComFtonNet' */
  (void)Rte_Read_FRC_ComFtonNet_FRC_ComFtonNet(&tmpRead_n);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_m);

  /* Inport: '<Root>/RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo' */
  (void)
    Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo
    (&tmpRead_l);

  /* Inport: '<Root>/RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus' */
  (void)
    Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus
    (&tmpRead_k);

  /* Inport: '<Root>/RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp' */
  (void)Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp
    (&tmpRead_j);

  /* Inport: '<Root>/RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus' */
  (void)
    Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus
    (&tmpRead_i);

  /* Inport: '<Root>/RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg
    (&tmpRead_h);

  /* Inport: '<Root>/RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo' */
  (void)Rte_Read_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo' */
  (void)Rte_Read_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo' */
  (void)Rte_Read_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo
    (&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo' */
  (void)Rte_Read_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo' */
  (void)Rte_Read_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo' */
  (void)Rte_Read_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(&tmpRead_b);

  /* SignalConversion: '<S5>/SignalCopy23' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg
    (&rtb_ComM_DCMRRNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy22' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg
    (&rtb_ComM_DCMRLNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy21' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg
    (&rtb_ComM_DCMFRNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy20' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg
    (&rtb_ComM_DCMFLNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy19' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
    (&rtb_ComM_CHIBSNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy18' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg
    (&rtb_ComM_CGWNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy17' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
    (&rtb_ComM_BCMNodComFailr_Flg);

  /* SignalConversion: '<S5>/SignalCopy16' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
    (&rtb_ComM_ACUNodComFailr_Flg);

  /* Inport: '<Root>/RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo' */
  (void)Rte_Read_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo' */
  (void)Rte_Read_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo' */
  (void)Rte_Read_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo' */
  (void)Rte_Read_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo' */
  (void)Rte_Read_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo' */
  (void)Rte_Read_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo' */
  (void)Rte_Read_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo' */
  (void)Rte_Read_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo' */
  (void)Rte_Read_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo' */
  (void)Rte_Read_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo' */
  (void)Rte_Read_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_LINHandler_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* SignalConversion: '<S5>/SignalCopy41' */
  rtb_Resp_Error_LIN01_IsUpdated = rtb_LogicalOperator_hrzk;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_BSNodComFailr'
   *
   * Block requirements for '<S4>/LINHandler_BSNodComFailr':
   *  1. VCU_SW_Requirements_Specification.slreqx:45992
   */
  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt2' */
  /* Constant: '<S7>/Marco_Active' incorporates:
   *  Constant: '<S7>/LINHandler_MsgErrDTCEnaSetTim'
   *  Constant: '<S7>/LINHandler_RunStep'
   */
  rtb_RelationalOperator_nqpo = CtAp_LINHandler_ATOM_TimeCnt(LINHandler_Active,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_MsgErrDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_g2ml);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt2' */

  /* DataTypeConversion: '<S7>/DataTypeConversion' */
  BS_BSBatSOC_IsUpdated = rtb_Resp_Error_LIN01_IsUpdated;

  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Logic: '<S7>/LogicalOperator2'
   */
  rtb_LogicalOperator1_jsbk = (rtb_RelationalOperator_nqpo &&
    !BS_BSBatSOC_IsUpdated);

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt1' */
  /* Constant: '<S7>/LINHandler_RunStep2' incorporates:
   *  Constant: '<S7>/LINHandler_LinMsgBS01LostTim'
   */
  rtb_RelationalOperator_fcp2 = CtAp_LINHandler_ATOM_TimeCnt
    (rtb_LogicalOperator1_jsbk, ((uint16_T)LINHandler_RunStep), ((uint16_T)
      LINHandler_LinMsgBS01LostTim),
     &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_g1sm);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt1' */

  /* Logic: '<S7>/LogicalOperator' */
  rtb_LogicalOperator_hrzk = (rtb_RelationalOperator_nqpo &&
    rtb_RelationalOperator_fcp2);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_BSNodComFailr' */

  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* Switch: '<S69>/Switch' incorporates:
   *  Constant: '<S69>/LINHandler_BSBatVltHlResOffs'
   *  Constant: '<S69>/LINHandler_BSBatVltHlResResl'
   *  Constant: '<S70>/LINHandler_BSBattSOCOffs'
   *  Constant: '<S70>/LINHandler_BSBattSOCResl'
   *  Logic: '<S69>/LogicalOperator1'
   *  Switch: '<S70>/Switch'
   */
  if (!rtb_LogicalOperator_hrzk) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
    /* DataTypeConversion: '<S69>/DataTypeConversion4' incorporates:
     *  Inport: '<Root>/U_BATT_LIN01_U_BATT_LIN01'
     *  SignalConversion: '<S5>/SignalCopy45'
     */
    rtb_DataTypeConversion4_mbi4 = (real32_T)tmpRead_z;

    /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

    /* Outputs for Atomic SubSystem: '<S69>/ATOM_SignalRead' */
    rtb_Product1_fvhf = CtAp_LINHandler_ATOM_SignalRead
      (rtb_DataTypeConversion4_mbi4, LINHandler_BSBatVltHlResResl,
       LINHandler_BSBatVltHlResOffs);

    /* End of Outputs for SubSystem: '<S69>/ATOM_SignalRead' */

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S69>/LINHandler_BSBatVltHlResOffs'
     *  Constant: '<S69>/LINHandler_BSBatVltHlResResl'
     *  DataTypeConversion: '<S69>/DataTypeConversion3'
     */
    rtb_Switch = rtb_Product1_fvhf;

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
    /* DataTypeConversion: '<S70>/DataTypeConversion4' incorporates:
     *  Inport: '<Root>/SOC_LIN01_SOC_LIN01'
     *  SignalConversion: '<S5>/SignalCopy42'
     */
    rtb_DataTypeConversion4_aeub = (real32_T)tmpRead_u;

    /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

    /* Outputs for Atomic SubSystem: '<S70>/ATOM_SignalRead' */
    rtb_Product1_iets = CtAp_LINHandler_ATOM_SignalRead
      (rtb_DataTypeConversion4_aeub, LINHandler_BSBattSOCResl,
       LINHandler_BSBattSOCOffs);

    /* End of Outputs for SubSystem: '<S70>/ATOM_SignalRead' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/LINHandler_BSBattSOCOffs'
     *  Constant: '<S70>/LINHandler_BSBattSOCResl'
     *  DataTypeConversion: '<S70>/DataTypeConversion3'
     */
    rtb_Switch_psiw = rtb_Product1_iets;
  } else {
    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S69>/LINHandler_BSBatVltHlResDftValue'
     */
    rtb_Switch = LINHandler_BSBatVltHlResDftValue;

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/LINHandler_BSBattSOCDftValue'
     */
    rtb_Switch_psiw = LINHandler_BSBattSOCDftValue;
  }

  /* End of Switch: '<S69>/Switch' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* DataTypeConversion: '<S71>/DataTypeConversion4' incorporates:
   *  Inport: '<Root>/SOH_LIN01_SOH_LIN01'
   *  SignalConversion: '<S5>/SignalCopy43'
   */
  rtb_DataTypeConversion4 = (real32_T)tmpRead_x;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S71>/ATOM_SignalRead' */
  /* Constant: '<S71>/LINHandler_BSBattSOCResl' incorporates:
   *  Constant: '<S71>/LINHandler_BSBattSOCOffs'
   */
  rtb_Product1_af5q = CtAp_LINHandler_ATOM_SignalRead(rtb_DataTypeConversion4,
    LINHandler_BSBattSOCResl, LINHandler_BSBattSOCOffs);

  /* End of Outputs for SubSystem: '<S71>/ATOM_SignalRead' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* DataTypeConversion: '<S72>/DataTypeConversion4' incorporates:
   *  SignalConversion: '<S5>/SignalCopy44'
   */
  rtb_DataTypeConversion4_mlnt = (real32_T)tmpRead_y;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S72>/ATOM_SignalRead' */
  /* Constant: '<S72>/LINHandler_BSBattTempResl' incorporates:
   *  Constant: '<S72>/LINHandler_BSBattTempOffs'
   */
  rtb_Product1_aff3 = CtAp_LINHandler_ATOM_SignalRead
    (rtb_DataTypeConversion4_mlnt, LINHandler_BSBattTempResl,
     LINHandler_BSBattTempOffs);

  /* End of Outputs for SubSystem: '<S72>/ATOM_SignalRead' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Switch: '<S73>/Switch' incorporates:
   *  Constant: '<S73>/LINHandler_RangeZeroOffsCoef'
   *  Constant: '<S73>/LINHandler_RangeZeroReslCoef'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Inport: '<Root>/I_RANGE_LIN01_I_RANGE_LIN01'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  SignalConversion: '<S5>/SignalCopy38'
   *  Switch: '<S73>/Switch1'
   *  Switch: '<S73>/Switch2'
   */
  if (tmpRead_q == (I_RANGE_LIN01)((uint8_T)LINHandler_RangeZero)) {
    /* DataTypeConversion: '<S73>/DataTypeConversion4' incorporates:
     *  SignalConversion: '<S5>/SignalCopy37'
     */
    rtb_DataTypeConversion4_cu3d = (real32_T)tmpRead_p;

    /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead' */
    rtb_Product1_ep5c = CtAp_LINHandler_ATOM_SignalRead
      (rtb_DataTypeConversion4_cu3d, LINHandler_RangeZeroReslCoef,
       LINHandler_RangeZeroOffsCoef);

    /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S73>/LINHandler_RangeZeroOffsCoef'
     *  Constant: '<S73>/LINHandler_RangeZeroReslCoef'
     *  DataTypeConversion: '<S73>/DataTypeConversion3'
     */
    rtb_Switch_oopb = rtb_Product1_ep5c;
  } else if (tmpRead_q == (I_RANGE_LIN01)((uint8_T)LINHandler_RangeOne)) {
    /* DataTypeConversion: '<S73>/DataTypeConversion2' incorporates:
     *  SignalConversion: '<S5>/SignalCopy37'
     *  Switch: '<S73>/Switch1'
     */
    rtb_DataTypeConversion2 = (real32_T)tmpRead_p;

    /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead1' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/LINHandler_RangeOneOffsCoef'
     *  Constant: '<S73>/LINHandler_RangeOneReslCoef'
     */
    rtb_Product1_fzmh = CtAp_LINHandler_ATOM_SignalRead(rtb_DataTypeConversion2,
      LINHandler_RangeOneReslCoef, LINHandler_RangeOneOffsCoef);

    /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead1' */

    /* Switch: '<S73>/Switch' incorporates:
     *  DataTypeConversion: '<S73>/DataTypeConversion1'
     *  Switch: '<S73>/Switch1'
     */
    rtb_Switch_oopb = rtb_Product1_fzmh;
  } else if (tmpRead_q == (I_RANGE_LIN01)((uint8_T)LINHandler_RangeTwo)) {
    /* DataTypeConversion: '<S73>/DataTypeConversion6' incorporates:
     *  SignalConversion: '<S5>/SignalCopy37'
     *  Switch: '<S73>/Switch1'
     *  Switch: '<S73>/Switch2'
     */
    rtb_DataTypeConversion6_c3la = (real32_T)tmpRead_p;

    /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead2' */
    /* Switch: '<S73>/Switch2' incorporates:
     *  Constant: '<S73>/LINHandler_RangeTwoOffsCoef'
     *  Constant: '<S73>/LINHandler_RangeTwoReslCoef'
     *  Switch: '<S73>/Switch1'
     */
    rtb_Product1_atpk = CtAp_LINHandler_ATOM_SignalRead
      (rtb_DataTypeConversion6_c3la, LINHandler_RangeTwoReslCoef,
       LINHandler_RangeTwoOffsCoef);

    /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead2' */

    /* Switch: '<S73>/Switch' incorporates:
     *  DataTypeConversion: '<S73>/DataTypeConversion5'
     *  Switch: '<S73>/Switch1'
     *  Switch: '<S73>/Switch2'
     */
    rtb_Switch_oopb = rtb_Product1_atpk;
  } else {
    /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead3' */
    /* Switch: '<S73>/Switch2' incorporates:
     *  Constant: '<S73>/LINHandler_BSHCrntDftValue'
     *  Constant: '<S73>/LINHandler_RangeTwoOffsCoef1'
     *  Constant: '<S73>/LINHandler_RangeTwoReslCoef1'
     *  Switch: '<S73>/Switch1'
     */
    rtb_Product1_d35n = CtAp_LINHandler_ATOM_SignalRead
      (LINHandler_BSHCrntDftValue, LINHandler_RangeTwoReslCoef,
       LINHandler_RangeTwoOffsCoef);

    /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead3' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Switch: '<S73>/Switch1'
     *  Switch: '<S73>/Switch2'
     */
    rtb_Switch_oopb = rtb_Product1_d35n;
  }

  /* End of Switch: '<S73>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Switch: '<S74>/Switch' incorporates:
   *  Constant: '<S74>/LINHandler_BSQuiescentCurrentOffs'
   *  Constant: '<S74>/LINHandler_BSQuiescentCurrentResl'
   *  Logic: '<S74>/LogicalOperator1'
   */
  if (!rtb_LogicalOperator_hrzk) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
    /* DataTypeConversion: '<S74>/DataTypeConversion4' incorporates:
     *  SignalConversion: '<S5>/SignalCopy36'
     */
    rtb_DataTypeConversion4_mxvo = (real32_T)tmpRead_r;

    /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

    /* Outputs for Atomic SubSystem: '<S74>/ATOM_SignalRead' */
    rtb_Product1_frzr = CtAp_LINHandler_ATOM_SignalRead
      (rtb_DataTypeConversion4_mxvo, LINHandler_BSQuiescentCurrentResl,
       LINHandler_BSQuiescentCurrentOffs);

    /* End of Outputs for SubSystem: '<S74>/ATOM_SignalRead' */

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S74>/LINHandler_BSQuiescentCurrentOffs'
     *  Constant: '<S74>/LINHandler_BSQuiescentCurrentResl'
     *  DataTypeConversion: '<S74>/DataTypeConversion3'
     */
    rtb_Switch_lolb = rtb_Product1_frzr;
  } else {
    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S74>/LINHandler_BSQuiescentCurrentDftValue'
     */
    rtb_Switch_lolb = LINHandler_BSQuiescentCurrentDftValue;
  }

  /* End of Switch: '<S74>/Switch' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* DataTypeConversion: '<S75>/DataTypeConversion4' incorporates:
   *  SignalConversion: '<S5>/SignalCopy52'
   */
  rtb_DataTypeConversion4_b3xt = (real32_T)tmpRead_v;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S75>/ATOM_SignalRead' */
  /* Constant: '<S75>/LINHandler_BSBattSOFVoltResl' incorporates:
   *  Constant: '<S75>/LINHandler_BSBattSOFVoltOffs'
   */
  rtb_Product1_jyho = CtAp_LINHandler_ATOM_SignalRead
    (rtb_DataTypeConversion4_b3xt, LINHandler_BSBattSOFVoltResl,
     LINHandler_BSBattSOFVoltOffs);

  /* End of Outputs for SubSystem: '<S75>/ATOM_SignalRead' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* DataTypeConversion: '<S76>/DataTypeConversion4' incorporates:
   *  SignalConversion: '<S5>/SignalCopy53'
   */
  rtb_DataTypeConversion4_pxqa = (real32_T)tmpRead_w;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S76>/ATOM_SignalRead' */
  /* Constant: '<S76>/LINHandler_BSBattSOFVoltResl' incorporates:
   *  Constant: '<S76>/LINHandler_BSBattSOFVoltOffs'
   */
  rtb_Product1 = CtAp_LINHandler_ATOM_SignalRead(rtb_DataTypeConversion4_pxqa,
    LINHandler_BSBattSOFVoltResl, LINHandler_BSBattSOFVoltOffs);

  /* End of Outputs for SubSystem: '<S76>/ATOM_SignalRead' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* DataTypeConversion: '<S11>/DataTypeConversion2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy46'
   */
  ComM_FRCComFtonNet = tmpRead_n;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* DataTypeConversion: '<S11>/DataTypeConversion3' */
  ComM_FRCVlOV = rtb_FRC_Vl_OV;

  /* DataTypeConversion: '<S11>/DataTypeConversion5' */
  ComM_FRCVlUV = rtb_FRC_Vl_UV;

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalHandle' */

  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_FRCNodComFailr'
   *
   * Block requirements for '<S4>/LINHandler_FRCNodComFailr':
   *  1. VCU_SW_Requirements_Specification.slreqx:76058
   */
  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt2' */
  /* Constant: '<S8>/Marco_Active' incorporates:
   *  Constant: '<S8>/LINHandler_MsgErrDTCEnaSetTim'
   *  Constant: '<S8>/LINHandler_RunStep'
   */
  rtb_RelationalOperator_eboa = CtAp_LINHandler_ATOM_TimeCnt(LINHandler_Active,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_MsgErrDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_fqdq);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt2' */

  /* DataTypeConversion: '<S8>/DataTypeConversion' */
  ComM_FRC01_IsUpdated = rtb_FRC_ComFtonNet_IsUpdated;

  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Logic: '<S8>/LogicalOperator2'
   */
  rtb_LogicalOperator1_d5wf = (rtb_RelationalOperator_eboa &&
    !ComM_FRC01_IsUpdated);

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt1' */
  /* Constant: '<S8>/LINHandler_RunStep2' incorporates:
   *  Constant: '<S8>/LINHandler_FRCMsgLostTim'
   */
  rtb_RelationalOperator_knjg = CtAp_LINHandler_ATOM_TimeCnt
    (rtb_LogicalOperator1_d5wf, ((uint16_T)LINHandler_RunStep), ((uint16_T)
      LINHandler_FRCMsgLostTim),
     &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt1' */

  /* Logic: '<S8>/LogicalOperator' */
  ComM_FRCNodComFailrInfo = (rtb_RelationalOperator_eboa &&
    rtb_RelationalOperator_knjg);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_FRCNodComFailr' */

  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Logic: '<S17>/LogicalOperator2' incorporates:
   *  Logic: '<S19>/LogicalOperator2'
   *  Logic: '<S20>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy35'
   */
  rtb_LogicalOperator_tmp_tmp = !tmpRead_m;

  /* Logic: '<S17>/LogicalOperator' incorporates:
   *  Logic: '<S17>/LogicalOperator2'
   *  Logic: '<S18>/LogicalOperator'
   *  Logic: '<S21>/LogicalOperator'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  tmpRead_m = (tmpRead && rtb_LogicalOperator_tmp_tmp);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Logic: '<S17>/LogicalOperator' */
  rtb_LogicalOperator = tmpRead_m;

  /* Outputs for Atomic SubSystem: '<S17>/ATOM_TimeCnt2'
   *
   * Block requirements for '<S17>/ATOM_TimeCnt2':
   *  1. VCU_SW_Requirements_Specification.slreqx:76104
   */
  /* Constant: '<S17>/LINHandler_RunStep' incorporates:
   *  Constant: '<S17>/LINHandler_MsgErrDTCEnaSetTim'
   */
  rtb_RelationalOperator_moez = CtAp_LINHandler_ATOM_TimeCnt(rtb_LogicalOperator,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_MsgErrDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_cv5h);

  /* End of Outputs for SubSystem: '<S17>/ATOM_TimeCnt2' */

  /* Logic: '<S17>/LogicalOperator1'
   *
   * Block requirements for '<S17>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:76102
   */
  rtb_LogicalOperator1_nwli = !rtb_FRC_ComFtonNet_IsUpdated;

  /* Outputs for Atomic SubSystem: '<S17>/NoDTAvoidMu' */
  /* Constant: '<S17>/LINHandler_FRCMsgLostTim' incorporates:
   *  Constant: '<S17>/LINHandler_RunStep1'
   *
   * Block requirements for '<S17>/LINHandler_FRCMsgLostTim':
   *  1. VCU_SW_Requirements_Specification.slreqx:76108
   */
  CtAp_LINHandler_NoDTAvoidMu(rtb_RelationalOperator_moez,
    rtb_LogicalOperator1_nwli, rtb_FRC_ComFtonNet_IsUpdated, ((uint16_T)
    LINHandler_FRCMsgLostTim), ((uint16_T)LINHandler_RunStep),
    &rtb_DataTypeConversion_lipa, &CtAp_LINHandler_ARID_DEF.Switch1_kfg1,
    &CtAp_LINHandler_ARID_DEF.Switch2_bs0e,
    &CtAp_LINHandler_ARID_DEF.Switch6_mosq,
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_NoDTAvoidMu_pbm3);

  /* End of Outputs for SubSystem: '<S17>/NoDTAvoidMu' */

  /* Logic: '<S18>/LogicalOperator' */
  rtb_LogicalOperator_fjx0 = tmpRead_m;

  /* Outputs for Atomic SubSystem: '<S18>/ATOM_TimeCnt2'
   *
   * Block requirements for '<S18>/ATOM_TimeCnt2':
   *  1. VCU_SW_Requirements_Specification.slreqx:76117
   */
  /* Constant: '<S18>/LINHandler_RunStep' incorporates:
   *  Constant: '<S18>/LINHandler_MsgErrDTCEnaSetTim'
   */
  rtb_RelationalOperator_pfjj = CtAp_LINHandler_ATOM_TimeCnt
    (rtb_LogicalOperator_fjx0, ((uint16_T)LINHandler_RunStep), ((uint16_T)
      LINHandler_MsgErrDTCEnaSetTim),
     &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_bhxx);

  /* End of Outputs for SubSystem: '<S18>/ATOM_TimeCnt2' */

  /* Outputs for Enabled SubSystem: '<S18>/LINHandler_FRCRespCnt' incorporates:
   *  EnablePort: '<S28>/Enable'
   *
   * Block requirements for '<S18>/LINHandler_FRCRespCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:76115
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   *  SignalConversion: '<S5>/SignalCopy46'
   */
  if (tmpRead_n == (FRC_ComFtonNet)LINHandler_Active) {
    if (!CtAp_LINHandler_ARID_DEF.LINHandler_FRCRespCnt_MODE) {
      /* InitializeConditions for Sum: '<S28>/Add' incorporates:
       *  Delay: '<S28>/Delay'
       */
      CtAp_LINHandler_ARID_DEF.Delay_DSTATE = ((uint8_T)0U);
      CtAp_LINHandler_ARID_DEF.LINHandler_FRCRespCnt_MODE = true;
    }

    /* DataTypeConversion: '<S29>/DataTypeConversion' incorporates:
     *  Constant: '<S30>/Constant'
     *  RelationalOperator: '<S30>/Compare'
     */
    rtb_DataTypeConversion_of2q = (rtb_FRC_ComFtonNet_IsUpdated ==
      LINHandler_Active);

    /* Sum: '<S28>/Add' incorporates:
     *  DataTypeConversion: '<S28>/DataTypeConversion'
     *  Delay: '<S28>/Delay'
     */
    CtAp_LINHandler_ARID_DEF.Delay_DSTATE = (uint8_T)((uint32_T)
      CtAp_LINHandler_ARID_DEF.Delay_DSTATE + (rtb_DataTypeConversion_of2q ?
      ((uint32_T)1U) : ((uint32_T)0U)));

    /* MinMax: '<S28>/Min' incorporates:
     *  Constant: '<S28>/LINHandler_LinMsgFourCntTim'
     */
    if (CtAp_LINHandler_ARID_DEF.Delay_DSTATE > ((uint8_T)
         LINHandler_LinMsgFourCntTim)) {
      /* Sum: '<S28>/Add' */
      CtAp_LINHandler_ARID_DEF.Delay_DSTATE = ((uint8_T)
        LINHandler_LinMsgFourCntTim);
    }

    /* End of MinMax: '<S28>/Min' */

    /* RelationalOperator: '<S28>/Relational Operator' incorporates:
     *  Constant: '<S28>/LINHandler_LinMsgFourCntTim'
     *  Delay: '<S28>/Delay'
     */
    CtAp_LINHandler_ARID_DEF.RelationalOperator =
      (CtAp_LINHandler_ARID_DEF.Delay_DSTATE >= ((uint8_T)
        LINHandler_LinMsgFourCntTim));
  } else if (CtAp_LINHandler_ARID_DEF.LINHandler_FRCRespCnt_MODE) {
    /* Disable for RelationalOperator: '<S28>/Relational Operator' incorporates:
     *  Outport: '<S28>/LINHandler_FRCRespCnt'
     */
    CtAp_LINHandler_ARID_DEF.RelationalOperator = false;
    CtAp_LINHandler_ARID_DEF.LINHandler_FRCRespCnt_MODE = false;
  } else {
    /* no actions */
  }

  /* End of RelationalOperator: '<S27>/Compare' */
  /* End of Outputs for SubSystem: '<S18>/LINHandler_FRCRespCnt' */

  /* Logic: '<S18>/LogicalOperator1' incorporates:
   *  SignalConversion: '<S5>/SignalCopy46'
   *
   * Block requirements for '<S18>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:76116
   */
  rtb_LogicalOperator1_ajjl = !tmpRead_n;

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S18>/NoTime' */
  CtAp_LINHandler_NoTime(rtb_RelationalOperator_pfjj,
    CtAp_LINHandler_ARID_DEF.RelationalOperator, rtb_LogicalOperator1_ajjl,
    &rtb_DataTypeConversion_of2q, &CtAp_LINHandler_ARID_DEF.Switch1_mnje,
    &CtAp_LINHandler_ARID_DEF.Switch8, &CtAp_LINHandler_ARID_DEF.Switch6_pjjm,
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_NoTime);

  /* End of Outputs for SubSystem: '<S18>/NoTime' */

  /* Outputs for Atomic SubSystem: '<S19>/ATOM_TimeCnt2' */
  /* Constant: '<S19>/Marco_Active' incorporates:
   *  Constant: '<S19>/LINHandler_FRCUDcDTCEnaSetTim'
   *  Constant: '<S19>/LINHandler_RunStep'
   */
  rtb_RelationalOperator_lhcs = CtAp_LINHandler_ATOM_TimeCnt(LINHandler_Active,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_FRCUDcDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_cxar);

  /* End of Outputs for SubSystem: '<S19>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Logic: '<S19>/LogicalOperator' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   *
   * Block requirements for '<S19>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:76130
   */
  rtb_LogicalOperator_gpgb = (rtb_RelationalOperator_lhcs && tmpRead &&
    rtb_LogicalOperator_tmp_tmp);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Logic: '<S19>/LogicalOperator1'
   *
   * Block requirements for '<S19>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:76129
   */
  rtb_LogicalOperator1_h4ii = !rtb_FRC_Vl_OV;

  /* Outputs for Atomic SubSystem: '<S19>/NoDTAvoidMu' */
  /* Constant: '<S19>/LINHandler_FRCDTCCheckTmr' incorporates:
   *  Constant: '<S19>/LINHandler_RunStep1'
   *
   * Block requirements for '<S19>/LINHandler_FRCDTCCheckTmr':
   *  1. VCU_SW_Requirements_Specification.slreqx:76134
   */
  CtAp_LINHandler_NoDTAvoidMu(rtb_LogicalOperator_gpgb, rtb_FRC_Vl_OV,
    rtb_LogicalOperator1_h4ii, ((uint16_T)LINHandler_FRCDTCCheckTmr), ((uint16_T)
    LINHandler_RunStep), &rtb_DataTypeConversion_pytb,
    &CtAp_LINHandler_ARID_DEF.Switch1_cm15,
    &CtAp_LINHandler_ARID_DEF.Switch2_arpb,
    &CtAp_LINHandler_ARID_DEF.Switch6_lxrb,
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_NoDTAvoidMu_kkiq);

  /* End of Outputs for SubSystem: '<S19>/NoDTAvoidMu' */

  /* Outputs for Atomic SubSystem: '<S20>/ATOM_TimeCnt2' */
  /* Constant: '<S20>/Marco_Active' incorporates:
   *  Constant: '<S20>/LINHandler_FRCUDcDTCEnaSetTim'
   *  Constant: '<S20>/LINHandler_RunStep'
   */
  rtb_RelationalOperator_hnid = CtAp_LINHandler_ATOM_TimeCnt(LINHandler_Active,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_FRCUDcDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_cl54);

  /* End of Outputs for SubSystem: '<S20>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Logic: '<S20>/LogicalOperator' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   *
   * Block requirements for '<S20>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:76143
   */
  rtb_LogicalOperator_m2w5 = (rtb_RelationalOperator_hnid && tmpRead &&
    rtb_LogicalOperator_tmp_tmp);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Logic: '<S20>/LogicalOperator1'
   *
   * Block requirements for '<S20>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:76142
   */
  rtb_LogicalOperator1_jtrn = !rtb_FRC_Vl_UV;

  /* Outputs for Atomic SubSystem: '<S20>/NoDTAvoidMu' */
  /* Constant: '<S20>/LINHandler_FRCDTCCheckTmr' incorporates:
   *  Constant: '<S20>/LINHandler_RunStep1'
   *
   * Block requirements for '<S20>/LINHandler_FRCDTCCheckTmr':
   *  1. VCU_SW_Requirements_Specification.slreqx:76147
   */
  CtAp_LINHandler_NoDTAvoidMu(rtb_LogicalOperator_m2w5, rtb_FRC_Vl_UV,
    rtb_LogicalOperator1_jtrn, ((uint16_T)LINHandler_FRCDTCCheckTmr), ((uint16_T)
    LINHandler_RunStep), &rtb_DataTypeConversion_hcvm,
    &CtAp_LINHandler_ARID_DEF.Switch1_cay1,
    &CtAp_LINHandler_ARID_DEF.Switch2_lyet,
    &CtAp_LINHandler_ARID_DEF.Switch6_ae0w,
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_NoDTAvoidMu_mbvz);

  /* End of Outputs for SubSystem: '<S20>/NoDTAvoidMu' */

  /* Logic: '<S21>/LogicalOperator' */
  rtb_LogicalOperator_d5g2 = tmpRead_m;

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_TimeCnt2'
   *
   * Block requirements for '<S21>/ATOM_TimeCnt2':
   *  1. VCU_SW_Requirements_Specification.slreqx:46024
   */
  /* Constant: '<S21>/LINHandler_RunStep' incorporates:
   *  Constant: '<S21>/LINHandler_MsgErrDTCEnaSetTim'
   */
  rtb_RelationalOperator = CtAp_LINHandler_ATOM_TimeCnt(rtb_LogicalOperator_d5g2,
    ((uint16_T)LINHandler_RunStep), ((uint16_T)LINHandler_MsgErrDTCEnaSetTim),
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S21>/ATOM_TimeCnt2' */

  /* Logic: '<S21>/LogicalOperator1'
   *
   * Block requirements for '<S21>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:46022
   */
  rtb_LogicalOperator1_ao5s = !rtb_Resp_Error_LIN01_IsUpdated;

  /* Outputs for Atomic SubSystem: '<S21>/NoDTAvoidMu' */
  /* Constant: '<S21>/LINHandler_LinMsgBS01LostTim' incorporates:
   *  Constant: '<S21>/LINHandler_RunStep1'
   *
   * Block requirements for '<S21>/LINHandler_LinMsgBS01LostTim':
   *  1. VCU_SW_Requirements_Specification.slreqx:46028
   */
  CtAp_LINHandler_NoDTAvoidMu(rtb_RelationalOperator, rtb_LogicalOperator1_ao5s,
    rtb_Resp_Error_LIN01_IsUpdated, ((uint16_T)LINHandler_LinMsgBS01LostTim),
    ((uint16_T)LINHandler_RunStep), &rtb_DataTypeConversion_mowp,
    &CtAp_LINHandler_ARID_DEF.Switch1, &CtAp_LINHandler_ARID_DEF.Switch2,
    &CtAp_LINHandler_ARID_DEF.Switch6,
    &CtAp_LINHandler_ARID_DEF.ARID_DEF_NoDTAvoidMu);

  /* End of Outputs for SubSystem: '<S21>/NoDTAvoidMu' */
  /* End of Outputs for SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct
    (rtb_Switch_psiw);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* Outport: '<Root>/RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus' incorporates:
   *  BusCreator: '<S21>/Bus Creator1'
   */
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_LinMsgErrInfo_Bus_te.ComM_MonStatLinMsgTimeoutDTCInfo
    = rtb_DataTypeConversion_mowp;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_LinMsgErrInfo_Bus_te.ComM_MonResLinMsgTimeoutDTCInfo
    = CtAp_LINHandler_ARID_DEF.Switch1;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_LinMsgErrInfo_Bus_te.ComM_ErrStatLinMsgTimeoutDTCInfo
    = CtAp_LINHandler_ARID_DEF.Switch2;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_LinMsgErrInfo_Bus_te.ComM_ErrRestatLinMsgTimeoutDTCInfo
    = CtAp_LINHandler_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo' incorporates:
   *  SignalConversion: '<S6>/SignalCopy2'
   */
  (void)Rte_Write_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo
    (rtb_Switch);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outport: '<Root>/ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01' incorporates:
   *  Constant: '<S12>/Constant'
   *  DataTypeConversion: '<S12>/DataTypeConversion2'
   */
  (void)Rte_Write_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01(((uint8_T)0U) !=
    (uint8_T)0 != 0U);

  /* Outport: '<Root>/ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01' incorporates:
   *  Constant: '<S12>/Constant1'
   *  DataTypeConversion: '<S12>/DataTypeConversion1'
   */
  (void)Rte_Write_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01
    ((ChargeCurrWU_Treshold_LIN01)((uint8_T)0U));

  /* Outport: '<Root>/DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01' incorporates:
   *  Constant: '<S12>/Constant2'
   *  DataTypeConversion: '<S12>/DataTypeConversion3'
   */
  (void)Rte_Write_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01(((uint8_T)
    0U) != (uint8_T)0 != 0U);

  /* Outport: '<Root>/DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01' incorporates:
   *  Constant: '<S12>/Constant3'
   *  DataTypeConversion: '<S12>/DataTypeConversion4'
   */
  (void)Rte_Write_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01
    ((DisChargeCurrWU_Treshold_LIN01)((uint8_T)0U));

  /* Outport: '<Root>/SOCWU_Ena_LIN01_SOCWU_Ena_LIN01' incorporates:
   *  Constant: '<S12>/Constant4'
   *  DataTypeConversion: '<S12>/DataTypeConversion5'
   */
  (void)Rte_Write_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01(((uint8_T)1U) != (uint8_T)0 !=
    0U);

  /* Outport: '<Root>/SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01' incorporates:
   *  Constant: '<S12>/LINHandler_LVBatteryChargingStartSOC_CFG'
   *  DataTypeConversion: '<S12>/DataTypeConversion6'
   */
  (void)Rte_Write_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01
    ((SOCWU_Treshold_LIN01)((uint8_T)((uint8_T)
       LINHandler_LVBatteryChargingStartSOC_CFG & (uint8_T)127)));

  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* Outport: '<Root>/RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo' incorporates:
   *  DataTypeConversion: '<S71>/DataTypeConversion3'
   */
  (void)Rte_Write_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo
    (rtb_Product1_af5q);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo' incorporates:
   *  SignalConversion: '<S6>/SignalCopy10'
   */
  (void)Rte_Write_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
    (rtb_LogicalOperator_hrzk);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Outport: '<Root>/VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  (void)
    Rte_Write_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN
    ((VCU_ACU_DriverWarningLampSts_LIN)tmpRead_6);

  /* Outport: '<Root>/VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy24'
   */
  (void)
    Rte_Write_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN
    ((VCU_ACU_PassengerAirbagSts_LIN)tmpRead_b);

  /* Outport: '<Root>/VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   */
  (void)
    Rte_Write_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN
    ((VCU_ACU_PassengerWarningLampSts_LIN)tmpRead_c);

  /* Outport: '<Root>/VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  (void)
    Rte_Write_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN
    ((VCU_BCM_FLSeatBeltRemindReq_LIN)tmpRead_8);

  /* Outport: '<Root>/VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  (void)
    Rte_Write_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN
    ((VCU_BCM_FRSeatBeltRemindReq_LIN)tmpRead_9);

  /* Outport: '<Root>/VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  (void)
    Rte_Write_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN
    ((VCU_BCM_RLSeatBeltRemindReq_LIN)tmpRead_d);

  /* Outport: '<Root>/VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy28'
   */
  (void)
    Rte_Write_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN
    ((VCU_BCM_RRSeatBeltRemindReq_LIN)tmpRead_f);

  /* Outport: '<Root>/VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy34'
   */
  (void)Rte_Write_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN
    ((VCU_BS_IndicatorLightSts_LIN)tmpRead_l);

  /* Outport: '<Root>/VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  (void)Rte_Write_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN
    ((VCU_CGW_VehicleState_LIN)tmpRead_1);

  /* Outport: '<Root>/VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy30'
   */
  (void)Rte_Write_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN
    ((VCU_DCDCFail_LIN_LIN)tmpRead_h);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalCAN2Lin' */
  /* Outport: '<Root>/VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN' incorporates:
   *  DataTypeConversion: '<S55>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  (void)Rte_Write_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN(tmpRead_2
    != (uint8_T)0 != 0U);

  /* Outport: '<Root>/VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN' incorporates:
   *  DataTypeConversion: '<S56>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  (void)Rte_Write_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN(tmpRead_3
    != (uint8_T)0 != 0U);

  /* Outport: '<Root>/VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN' incorporates:
   *  DataTypeConversion: '<S57>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  (void)Rte_Write_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN(tmpRead_4
    != (uint8_T)0 != 0U);

  /* Outport: '<Root>/VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN' incorporates:
   *  DataTypeConversion: '<S58>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  (void)Rte_Write_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN(tmpRead_5
    != (uint8_T)0 != 0U);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalCAN2Lin' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outport: '<Root>/VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy31'
   */
  (void)Rte_Write_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN
    ((VCU_DriveMotOvrTemp_LIN_LIN)tmpRead_i.ErrMgmt_ErrResMCUTempOvr);

  /* Outport: '<Root>/VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy32'
   */
  (void)Rte_Write_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN
    ((VCU_HVBatCriFail_LIN_LIN)tmpRead_j);

  /* Outport: '<Root>/VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy33'
   */
  (void)Rte_Write_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN
    ((VCU_HVBatOvrTemp_LIN_LIN)tmpRead_k.ErrMgmt_ErrResBMSTempOvr);

  /* Outport: '<Root>/VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  (void)Rte_Write_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN
    ((VCU_IBS_BrakeFluidWarning_LIN)tmpRead_0);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalCAN2Lin' */
  /* Outport: '<Root>/VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN' incorporates:
   *  DataTypeConversion: '<S63>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy12'
   */
  (void)Rte_Write_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN(tmpRead_7 !=
    (uint8_T)0 != 0U);

  /* Outport: '<Root>/VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN' incorporates:
   *  DataTypeConversion: '<S64>/DataTypeConversion'
   *  SignalConversion: '<S5>/SignalCopy27'
   */
  (void)Rte_Write_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN
    (tmpRead_e != (uint8_T)0 != 0U);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalCAN2Lin' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outport: '<Root>/VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  (void)Rte_Write_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN
    ((VCU_IBS_SystemStatus_LIN)tmpRead_a);

  /* Outport: '<Root>/VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy50'
   */
  (void)Rte_Write_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN((VCU_IVI_VrState_LIN)
    tmpRead_o);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt' incorporates:
   *  Constant: '<S68>/LINHandler_BSBatCrntDftValue'
   *  SignalConversion: '<S6>/SignalCopy33'
   */
  (void)Rte_Write_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt
    (LINHandler_BSBatCrntDftValue);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* Outport: '<Root>/RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated' incorporates:
   *  DataTypeConversion: '<S11>/DataTypeConversion4'
   */
  (void)Rte_Write_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated
    (rtb_Resp_Error_LIN01_IsUpdated);

  /* Outport: '<Root>/RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo' incorporates:
   *  DataTypeConversion: '<S11>/DataTypeConversion6'
   */
  (void)Rte_Write_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo
    (rtb_Switch_oopb);

  /* Outport: '<Root>/RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo' incorporates:
   *  DataTypeConversion: '<S72>/DataTypeConversion3'
   */
  (void)Rte_Write_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo
    (rtb_Product1_aff3);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt' incorporates:
   *  SignalConversion: '<S6>/SignalCopy37'
   */
  (void)Rte_Write_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt(rtb_Switch_oopb);

  /* Outport: '<Root>/RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent' incorporates:
   *  SignalConversion: '<S6>/SignalCopy38'
   */
  (void)Rte_Write_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent
    (rtb_Switch_lolb);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Outport: '<Root>/VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01' incorporates:
   *  SignalConversion: '<S5>/SignalCopy39'
   */
  (void)Rte_Write_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01
    ((VCU_IVI_BulbCheckStsLIN01)tmpRead_t);

  /* Outport: '<Root>/RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet' incorporates:
   *  SignalConversion: '<S5>/SignalCopy40'
   */
  (void)Rte_Write_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet((boolean_T)
    tmpRead_s);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* Outport: '<Root>/RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info' incorporates:
   *  DataTypeConversion: '<S75>/DataTypeConversion3'
   */
  (void)Rte_Write_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info(rtb_Product1_jyho);

  /* Outport: '<Root>/RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info' incorporates:
   *  DataTypeConversion: '<S76>/DataTypeConversion3'
   */
  (void)Rte_Write_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info(rtb_Product1);

  /* End of Outputs for SubSystem: '<S4>/LINHandler_SignalHandle' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet' incorporates:
   *  SignalConversion: '<S6>/SignalCopy43'
   */
  (void)Rte_Write_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet
    (ComM_FRCComFtonNet);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* Outport: '<Root>/RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus' incorporates:
   *  BusCreator: '<S17>/Bus Creator1'
   */
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCMsgErrDTC_Bus_tec.ComM_MonStatFRCMsgErrDTC
    = rtb_DataTypeConversion_lipa;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCMsgErrDTC_Bus_tec.ComM_MonResFRCMsgErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch1_kfg1;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCMsgErrDTC_Bus_tec.ComM_ErrStatFRCMsgErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch2_bs0e;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCMsgErrDTC_Bus_tec.ComM_ErrResFRCMsgErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch6_mosq;

  /* End of Outputs for SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo' incorporates:
   *  SignalConversion: '<S6>/SignalCopy45'
   */
  (void)Rte_Write_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo
    (ComM_FRCNodComFailrInfo);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* Outport: '<Root>/RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus' incorporates:
   *  BusCreator: '<S18>/Bus Creator1'
   */
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCRespErrDTC_Bus_te.ComM_MonStatLinFRCRespErrDTC
    = rtb_DataTypeConversion_of2q;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCRespErrDTC_Bus_te.ComM_MonResLinFRCRespErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch1_mnje;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCRespErrDTC_Bus_te.ComM_ErrStatFRCRespErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch8;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCRespErrDTC_Bus_te.ComM_ErrResFRCRespErrDTC
    = CtAp_LINHandler_ARID_DEF.Switch6_pjjm;

  /* Outport: '<Root>/RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus' incorporates:
   *  BusCreator: '<S19>/Bus Creator1'
   */
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcHiDTC_Bus_.ComM_MonStatFRCSplyUDcHiDTC
    = rtb_DataTypeConversion_pytb;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcHiDTC_Bus_.ComM_MonResFRCSplyUDcHiDTC
    = CtAp_LINHandler_ARID_DEF.Switch1_cm15;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcHiDTC_Bus_.ComM_ErrStatFRCSplyUDcHiDTC
    = CtAp_LINHandler_ARID_DEF.Switch2_arpb;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcHiDTC_Bus_.ComM_ErrResFRCSplyUDcHiDTC
    = CtAp_LINHandler_ARID_DEF.Switch6_lxrb;

  /* Outport: '<Root>/RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus' incorporates:
   *  BusCreator: '<S20>/Bus Creator1'
   */
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcLoDTC_Bus_.ComM_MonStatFRCSplyUDcLoDTC
    = rtb_DataTypeConversion_hcvm;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcLoDTC_Bus_.ComM_MonResFRCSplyUDcLoDTC
    = CtAp_LINHandler_ARID_DEF.Switch1_cay1;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcLoDTC_Bus_.ComM_ErrStatFRCSplyUDcLoDTC
    = CtAp_LINHandler_ARID_DEF.Switch2_lyet;
  CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcLoDTC_Bus_.ComM_ErrResFRCSplyUDcLoDTC
    = CtAp_LINHandler_ARID_DEF.Switch6_ae0w;

  /* End of Outputs for SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Output' */
  /* Outport: '<Root>/RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV' incorporates:
   *  SignalConversion: '<S6>/SignalCopy49'
   */
  (void)Rte_Write_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV(ComM_FRCVlOV);

  /* Outport: '<Root>/RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV' incorporates:
   *  SignalConversion: '<S6>/SignalCopy50'
   */
  (void)Rte_Write_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV(ComM_FRCVlUV);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* Outport: '<Root>/VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN' incorporates:
   *  SignalConversion: '<S5>/SignalCopy29'
   */
  (void)Rte_Write_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN
    ((VCU_ACU_WarningLampSts_LIN)tmpRead_g);

  /* End of Outputs for SubSystem: '<S2>/CtAp_LINHandler_Input' */
  /* End of Outputs for SubSystem: '<Root>/R_LINHandler_Cyclic_10ms_sys' */

  /* Outport: '<Root>/VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN' */
  (void)Rte_Write_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN((VCU_Batt_U0_Max_LIN)
    0U);

  /* Outport: '<Root>/VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN' */
  (void)Rte_Write_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN((VCU_Batt_U0_Min_LIN)
    0U);

  /* Outport: '<Root>/VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN' */
  (void)Rte_Write_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN((VCU_BattNomC20_LIN)0U);

  /* Outport: '<Root>/VCU_BattType_LIN00_VCU_BattType_LIN' */
  (void)Rte_Write_VCU_BattType_LIN00_VCU_BattType_LIN(Cx00_Default_);

  /* Outport: '<Root>/VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN' */
  (void)Rte_Write_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN(false);

  /* Outport: '<Root>/VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN' */
  (void)Rte_Write_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN(false);
  (void)Rte_Write_RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus
    (&CtAp_LINHandler_ARID_DEF.RTE_P_ComM_LinMsgErrInfo_Bus_te);
  (void)Rte_Write_RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus
    (&CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCMsgErrDTC_Bus_tec);
  (void)Rte_Write_RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus
    (&CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCRespErrDTC_Bus_te);
  (void)Rte_Write_RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus
    (&CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcHiDTC_Bus_);
  (void)Rte_Write_RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus
    (&CtAp_LINHandler_ARID_DEF.RTE_P_ComM_FRCSplyUDcLoDTC_Bus_);
}

#define CtAp_LINHandler_STOP_SEC_CODE
#include "CtAp_LINHandler_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_LINHandler_START_SEC_VAR_CONST_8
#include "CtAp_LINHandler_MemMap.h"

void R_LINHandler_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ComM_FRCComFtonNet = false;
  ComM_FRCVlOV = false;
  ComM_FRCVlUV = false;
  ComM_FRC01_IsUpdated = false;
  ComM_FRCNodComFailrInfo = false;
  BS_BSBatSOC_IsUpdated = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_LINHandler_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_LINHandler_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_LINHandler_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* SystemInitialize for Enabled SubSystem: '<S18>/LINHandler_FRCRespCnt'
   *
   * Block requirements for '<S18>/LINHandler_FRCRespCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:76115
   */
  /* InitializeConditions for Sum: '<S28>/Add' incorporates:
   *  Delay: '<S28>/Delay'
   */
  CtAp_LINHandler_ARID_DEF.Delay_DSTATE = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S18>/LINHandler_FRCRespCnt' */
  /* End of SystemInitialize for SubSystem: '<S4>/LINHandler_LinErrDTC' */
  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_LINHandler_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_LINHandler_Cyclic_10ms_sys' */
}

#define CtAp_LINHandler_STOP_SEC_VAR_CONST_8
#include "CtAp_LINHandler_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
