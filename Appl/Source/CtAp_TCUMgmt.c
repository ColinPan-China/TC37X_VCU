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
 *  Filename:           CtAp_TCUMgmt.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_TCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:37 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:38:14 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:25:48 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TCUMgmt.h"
#include "rtwtypes.h"
#include "CtAp_TCUMgmt_private.h"
#include "Rte_Type.h"
#include "CtAp_TCUMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_TCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"

ARID_DEF_CtAp_TCUMgmt_T CtAp_TCUMgmt_ARID_DEF;

#define CtAp_TCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_TimeCnt'
 *    '<S7>/ATOM_TimeCnt1'
 *    '<S28>/ATOM_TimeCnt'
 *    '<S28>/ATOM_TimeCnt1'
 *    '<S28>/ATOM_TimeCnt2'
 *    '<S28>/ATOM_TimeCnt3'
 *    '<S28>/ATOM_TimeCnt4'
 *    '<S28>/ATOM_TimeCnt5'
 */
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

boolean_T CtAp_TCUMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_TC_T
  *CtAp_TCUMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1_kwfh;

  /* Sum: '<S9>/Add1' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   *  DataTypeConversion: '<S9>/Data Type Conversion1'
   */
  rtb_Add1_kwfh = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S9>/Switch' */
  if (rtu_In) {
    /* Sum: '<S9>/Add' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S9>/Min' */
    if (rtb_Add1_kwfh <= CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S9>/Add' */
      CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_kwfh;
    }

    /* End of MinMax: '<S9>/Min' */
  } else {
    /* Sum: '<S9>/Add' incorporates:
     *  Constant: '<S9>/Constant'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S9>/Switch' */

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  UnitDelay: '<S9>/Delay'
   */
  return CtAp_TCUMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_kwfh;
}

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_U16ErrorHandleT1'
 *    '<S7>/ATOM_U16ErrorHandleT2'
 */
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

void CtAp_TCUMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_TCUMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S11>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/Constant2'
     *  Constant: '<S21>/Constant4'
     *  Switch: '<S21>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S21>/Switch' incorporates:
       *  Constant: '<S21>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S21>/Constant3'
     *  RelationalOperator: '<S21>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S23>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S23>/Sum' incorporates:
       *  UnitDelay: '<S23>/UnitDelay'
       */
      CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S23>/MinMax' */
      if (u0 <= CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S23>/Sum' */
        CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S23>/MinMax' */
    } else {
      /* Sum: '<S23>/Sum' incorporates:
       *  Constant: '<S21>/Constant23'
       *  UnitDelay: '<S23>/UnitDelay'
       */
      CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S23>/Switch1' */

    /* RelationalOperator: '<S21>/Equal2' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S22>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S22>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S22>/Sum' incorporates:
       *  UnitDelay: '<S22>/UnitDelay'
       */
      CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf);

      /* MinMax: '<S22>/MinMax' */
      if (u0 <= CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf) {
        /* Sum: '<S22>/Sum' */
        CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf = u0;
      }

      /* End of MinMax: '<S22>/MinMax' */
    } else {
      /* Sum: '<S22>/Sum' incorporates:
       *  Constant: '<S21>/Constant37'
       *  UnitDelay: '<S22>/UnitDelay'
       */
      CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf = ((uint16_T)0U);
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Switch: '<S21>/Switch8' incorporates:
     *  Constant: '<S21>/Constant6'
     *  Constant: '<S21>/DEBOUNCING'
     *  RelationalOperator: '<S21>/Equal6'
     *  RelationalOperator: '<S22>/B_MiHold'
     *  RelationalOperator: '<S23>/B_MiHold'
     *  Switch: '<S21>/Switch2'
     *  Switch: '<S21>/Switch3'
     *  Switch: '<S21>/Switch4'
     *  UnitDelay: '<S22>/UnitDelay'
     *  UnitDelay: '<S23>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_hpnf >
               rtu_MatureTime) {
      /* Switch: '<S21>/Switch2' incorporates:
       *  Constant: '<S21>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S21>/Switch3' incorporates:
       *  Constant: '<S21>/DEBOUNCING_F'
       *  Switch: '<S21>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_TCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S21>/Switch4' incorporates:
       *  Constant: '<S21>/PASSED'
       *  Switch: '<S21>/Switch2'
       *  Switch: '<S21>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S21>/Switch3' incorporates:
       *  Constant: '<S21>/DEBOUNCING_P'
       *  Switch: '<S21>/Switch2'
       *  Switch: '<S21>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S21>/Switch8' */

    /* Switch: '<S21>/Switch6' incorporates:
     *  Constant: '<S21>/Constant30'
     *  Constant: '<S21>/Constant31'
     *  Constant: '<S21>/Constant32'
     *  Delay: '<S21>/Delay1'
     *  RelationalOperator: '<S21>/Equal3'
     *  RelationalOperator: '<S21>/Equal4'
     *  Switch: '<S21>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S21>/Switch7' incorporates:
       *  Constant: '<S21>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_TCUMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S21>/Switch6' */

    /* Update for Delay: '<S21>/Delay1' */
    CtAp_TCUMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S11>/ErrorHandleSysU16' */
}

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S27>/If7'
 *    '<S27>/If8'
 *    '<S28>/If1'
 *    '<S28>/If10'
 *    '<S28>/If11'
 *    '<S28>/If2'
 *    '<S28>/If3'
 *    '<S28>/If4'
 *    '<S28>/If9'
 */
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

uint8_T CtAp_TCUMgmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S31>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S31>/Switch' */
  return rty_Out1_0;
}

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TCUMgmt_START_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

void R_TCUMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  uint16_T rtb_Add;
  uint16_T rtb_Add1;
  uint8_T rtb_Switch_h5xe;
  uint8_T rtb_Switch_j2up;
  uint8_T rtb_Switch_olh1;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator15;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_Compare_b35p;
  boolean_T rtb_LogicalOperator1_li5y;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator13;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator5;
  boolean_T rtb_LogicalOperator6_mv0a;
  boolean_T rtb_Compare_imkf;
  boolean_T rtb_LogicalOperator1_brzp;
  boolean_T rtb_LogicalOperator2_ajtu;
  boolean_T rtb_Compare_e5ze;
  boolean_T rtb_RelationalOperator_p1ch;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_krck;
  dt_ComM_EPTCANBusOffInfo tmpRead_1;
  real32_T tmpRead_0;
  real32_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_5;
  uint8_T tmpRead_7;
  boolean_T tmpRead;
  boolean_T tmpRead_4;
  boolean_T tmpRead_6;
  boolean_T tmpRead_8;

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum' */
  (void)Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg' */
  (void)Rte_Read_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V' */
  (void)Rte_Read_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg' */
  (void)
    Rte_Read_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_TCUMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_TCUSts' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S27>/LogicalOperator1' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Logic: '<S27>/LogicalOperator11'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator1 = (((tmpRead_7 == ((uint8_T)TCUMgmt_HvReady)) ||
    (tmpRead_7 == ((uint8_T)TCUMgmt_Preheating)) || (tmpRead_7 == ((uint8_T)
    TCUMgmt_DrvReady))) && (tmpRead_5 == ((uint8_T)TCUMgmt_U8Active)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S27>/If8'
   *
   * Block requirements for '<S27>/If8':
   *  1. VCU_SW_Requirements_Specification.slreqx:542
   */
  /* Constant: '<S27>/Marco_TCUReq_Ena' incorporates:
   *  Delay: '<S27>/Delay2'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_Switch_j2up = CtAp_TCUMgmt_If(rtb_LogicalOperator1, ((uint8_T)
    TCUMgmt_TCUReq_Ena), CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE);

  /* End of Outputs for SubSystem: '<S27>/If8' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S27>/LogicalOperator6' incorporates:
   *  Constant: '<S27>/Marco_BMSBattUDcFac'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Logic: '<S27>/LogicalOperator10'
   *  Logic: '<S27>/LogicalOperator7'
   *  Logic: '<S27>/LogicalOperator8'
   *  Logic: '<S27>/LogicalOperator9'
   *  Product: '<S27>/Product'
   *  RelationalOperator: '<S27>/RelationalOperator2'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator6 = ((tmpRead_7 == ((uint8_T)TCUMgmt_INIT)) || (tmpRead_7 ==
    ((uint8_T)TCUMgmt_Sleep)) || (tmpRead_7 == ((uint8_T)TCUMgmt_Standby)) ||
    tmpRead || (((tmpRead_7 == ((uint8_T)TCUMgmt_HvReady)) || (tmpRead_7 ==
    ((uint8_T)TCUMgmt_Preheating))) && ((tmpRead_5 == ((uint8_T)
    TCUMgmt_U8Inactive)) || !tmpRead_4 || (tmpRead_2 <= (tmpRead_0 *
    TCUMgmt_BMSBattUDcFac)))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S27>/If7'
   *
   * Block requirements for '<S27>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:541
   */
  /* Delay: '<S27>/Delay2' incorporates:
   *  Constant: '<S27>/Marco_TCUReq_Disable'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE = CtAp_TCUMgmt_If(rtb_LogicalOperator6,
    ((uint8_T)TCUMgmt_TCUReq_Disable), rtb_Switch_j2up);

  /* End of Outputs for SubSystem: '<S27>/If7' */

  /* RelationalOperator: '<S10>/Relational Operator' incorporates:
   *  Constant: '<S53>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S53>/Compare'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_RelationalOperator_p1ch = (CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE ==
    ((uint8_T)TCUMgmt_TCUReq_Disable));

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator2' incorporates:
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator2 = (rtb_RelationalOperator_p1ch && (tmpRead_7 != ((uint8_T)
    TCUMgmt_INIT)) && (tmpRead_7 != ((uint8_T)TCUMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Sum: '<S28>/Add' incorporates:
   *  Constant: '<S28>/HvMgmt_RunStep'
   *  Constant: '<S28>/HvMgmt_TCUStopFltDTCSetTim_CFG2'
   */
  rtb_Add = (uint16_T)((uint32_T)((uint16_T)TCUMgmt_HvMgmt_RunStep) + (uint32_T)
                       HvMgmt_TCUStopFltDTCSetTim_CFG);

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt' */
  /* Constant: '<S28>/HvMgmt_RunStep' */
  rtb_DataTypeConversion_krck = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator2,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), rtb_Add,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator' incorporates:
   *  Constant: '<S49>/Constant'
   *  RelationalOperator: '<S28>/RelationalOperator'
   *  RelationalOperator: '<S49>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator = ((rtb_RelationalOperator_p1ch !=
    rtb_DataTypeConversion_krck) && (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_OFF)));

  /* Logic: '<S28>/LogicalOperator15' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S56>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator15 = ((CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    TCUMgmt_TCUReq_Ena)) && (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_ON)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt5' */
  /* Constant: '<S28>/HvMgmt_RunStep5' incorporates:
   *  Constant: '<S28>/HvMgmt_TCUEnaFltDTCSetTim_CFG'
   */
  rtb_RelationalOperator_p1ch = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator15,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUEnaFltDTCSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator4' incorporates:
   *  Constant: '<S51>/Constant'
   *  Constant: '<S57>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator4 = ((tmpRead_3 != ((uint8_T)TCUMgmt_TCU_ON)) &&
    (CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)TCUMgmt_TCUReq_Ena)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt3' */
  /* Constant: '<S28>/HvMgmt_RunStep3' incorporates:
   *  Constant: '<S28>/HvMgmt_TCUEnaFltDTCSetTim_CFG1'
   */
  rtb_DataTypeConversion = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator4,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUEnaFltDTCSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt3' */

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
   *  Delay: '<S27>/Delay2'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_Compare_b35p = (CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    TCUMgmt_TCUReq_Ena));

  /* Sum: '<S28>/Add1' incorporates:
   *  Constant: '<S28>/HvMgmt_RunStep1'
   *  Constant: '<S28>/HvMgmt_TCUEnaFltDTCSetTim_CFG_CFG2'
   */
  rtb_Add1 = (uint16_T)((uint32_T)((uint16_T)TCUMgmt_HvMgmt_RunStep) + (uint32_T)
                        HvMgmt_TCUEnaFltDTCSetTim_CFG);

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt1' */
  /* Constant: '<S28>/HvMgmt_RunStep1' */
  rtb_DataTypeConversion_krck = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_Compare_b35p,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), rtb_Add1,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator1' incorporates:
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S28>/RelationalOperator1'
   *  RelationalOperator: '<S52>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator1_li5y = ((rtb_Compare_b35p != rtb_DataTypeConversion_krck)
    && (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_ON)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/If2'
   *
   * Block requirements for '<S28>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:550
   *  2. VCU_SW_Requirements_Specification.slreqx:551
   */
  /* Constant: '<S28>/Marco_TCUEnaCmpl1' incorporates:
   *  Delay: '<S28>/Delay'
   */
  rtb_Switch_olh1 = CtAp_TCUMgmt_If(rtb_LogicalOperator1_li5y, ((uint8_T)
    TCUMgmt_TCUEnaCmpl), CtAp_TCUMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S28>/If2' */

  /* Outputs for Atomic SubSystem: '<S28>/If4'
   *
   * Block requirements for '<S28>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:549
   */
  /* Constant: '<S28>/Marco_TCUEnaFailed' */
  rtb_Switch_h5xe = CtAp_TCUMgmt_If(rtb_DataTypeConversion, ((uint8_T)
    TCUMgmt_TCUEnaFailed), rtb_Switch_olh1);

  /* End of Outputs for SubSystem: '<S28>/If4' */

  /* Outputs for Atomic SubSystem: '<S28>/If11'
   *
   * Block requirements for '<S28>/If11':
   *  1. VCU_SW_Requirements_Specification.slreqx:548
   */
  /* Constant: '<S28>/Marco_TCUEnaCmpl' */
  rtb_Switch_olh1 = CtAp_TCUMgmt_If(rtb_RelationalOperator_p1ch, ((uint8_T)
    TCUMgmt_TCUEnaCmpl), rtb_Switch_h5xe);

  /* End of Outputs for SubSystem: '<S28>/If11' */

  /* Outputs for Atomic SubSystem: '<S28>/If1'
   *
   * Block requirements for '<S28>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:547
   */
  /* Constant: '<S28>/Marco_TCUDisableCmpl1' */
  rtb_Switch_j2up = CtAp_TCUMgmt_If(rtb_LogicalOperator, ((uint8_T)
    TCUMgmt_TCUDisableCmpl), rtb_Switch_olh1);

  /* End of Outputs for SubSystem: '<S28>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator3' incorporates:
   *  Constant: '<S48>/Constant'
   *  Constant: '<S55>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator3 = ((tmpRead_3 != ((uint8_T)TCUMgmt_TCU_OFF)) &&
    (CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)TCUMgmt_TCUReq_Disable)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt2' */
  /* Constant: '<S28>/HvMgmt_RunStep2' incorporates:
   *  Constant: '<S28>/HvMgmt_TCUStopFltDTCSetTim_CFG1'
   */
  rtb_DataTypeConversion = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator3,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUStopFltDTCSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S28>/If3'
   *
   * Block requirements for '<S28>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:546
   */
  /* Constant: '<S28>/Marco_TCUDisableFailed' */
  rtb_Switch_h5xe = CtAp_TCUMgmt_If(rtb_DataTypeConversion, ((uint8_T)
    TCUMgmt_TCUDisableFailed), rtb_Switch_j2up);

  /* End of Outputs for SubSystem: '<S28>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator13' incorporates:
   *  Constant: '<S47>/Constant'
   *  Constant: '<S54>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator13 = ((CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    TCUMgmt_TCUReq_Disable)) && (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_OFF)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/ATOM_TimeCnt4' */
  /* Constant: '<S28>/HvMgmt_RunStep4' incorporates:
   *  Constant: '<S28>/HvMgmt_TCUStopFltDTCSetTim_CFG'
   */
  rtb_RelationalOperator_p1ch = CtAp_TCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator13,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUStopFltDTCSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4);

  /* End of Outputs for SubSystem: '<S28>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S28>/If10'
   *
   * Block requirements for '<S28>/If10':
   *  1. VCU_SW_Requirements_Specification.slreqx:545
   */
  /* Constant: '<S28>/Marco_TCUDisableCmpl' */
  rtb_Switch_olh1 = CtAp_TCUMgmt_If(rtb_RelationalOperator_p1ch, ((uint8_T)
    TCUMgmt_TCUDisableCmpl), rtb_Switch_h5xe);

  /* End of Outputs for SubSystem: '<S28>/If10' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* Logic: '<S28>/LogicalOperator12' incorporates:
   *  Constant: '<S68>/Constant'
   *  Constant: '<S69>/Constant'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator12 = ((tmpRead_7 == ((uint8_T)TCUMgmt_INIT)) || (tmpRead_7 ==
    ((uint8_T)TCUMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S28>/If9'
   *
   * Block requirements for '<S28>/If9':
   *  1. VCU_SW_Requirements_Specification.slreqx:544
   */
  /* Delay: '<S28>/Delay' incorporates:
   *  Constant: '<S28>/Marco_INIT'
   */
  CtAp_TCUMgmt_ARID_DEF.Delay_DSTATE = CtAp_TCUMgmt_If(rtb_LogicalOperator12,
    ((uint8_T)TCUMgmt_INIT), rtb_Switch_olh1);

  /* End of Outputs for SubSystem: '<S28>/If9' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_TCUSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_TCUDTC'
   *
   * Block requirements for '<S4>/HvMgmt_TCUDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:556
   *  2. VCU_SW_Requirements_Specification.slreqx:557
   *  3. VCU_SW_Requirements_Specification.slreqx:558
   *  4. VCU_SW_Requirements_Specification.slreqx:562
   *  5. VCU_SW_Requirements_Specification.slreqx:563
   *  6. VCU_SW_Requirements_Specification.slreqx:564
   *  7. VCU_SW_Requirements_Specification.slreqx:569
   *  8. VCU_SW_Requirements_Specification.slreqx:570
   *  9. VCU_SW_Requirements_Specification.slreqx:571
   *  10. VCU_SW_Requirements_Specification.slreqx:575
   *  11. VCU_SW_Requirements_Specification.slreqx:576
   *  12. VCU_SW_Requirements_Specification.slreqx:577
   */
  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt' */
  /* Constant: '<S7>/Marco_Active' incorporates:
   *  Constant: '<S7>/HvMgmt_RunStep'
   *  Constant: '<S7>/HvMgmt_TCUDTCEnaSetTim_CFG'
   */
  rtb_DataTypeConversion = CtAp_TCUMgmt_ATOM_TimeCnt(TCUMgmt_Active, ((uint16_T)
    TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUDTCEnaSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cl54);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Constant: '<S13>/Constant'
   *  RelationalOperator: '<S13>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_DataTypeConversion_krck = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    TCUMgmt_Inactive);

  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  Logic: '<S7>/LogicalOperator4'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  tmpRead_8 = !tmpRead_8;

  /* Logic: '<S7>/LogicalOperator5' incorporates:
   *  Logic: '<S7>/LogicalOperator3'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:558
   */
  rtb_LogicalOperator5 = (rtb_DataTypeConversion && rtb_DataTypeConversion_krck &&
    tmpRead_8 && tmpRead_6);

  /* Logic: '<S7>/LogicalOperator6' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S19>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S7>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:556
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator6_mv0a = ((CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    TCUMgmt_TCUReq_Disable)) && (tmpRead_3 != ((uint8_T)TCUMgmt_TCU_OFF)));

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_imkf = (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_OFF));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_U16ErrorHandleT1' */
  /* Constant: '<S7>/HvMgmt_TCUStopFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S7>/HvMgmt_RunStep1'
   *  Constant: '<S7>/HvMgmt_TCUStopFltDTCResetTim_CFG'
   *
   * Block requirements for '<S7>/HvMgmt_TCUStopFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:562
   *
   * Block requirements for '<S7>/HvMgmt_TCUStopFltDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:563
   */
  CtAp_TCUMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator5, rtb_LogicalOperator6_mv0a,
    rtb_Compare_imkf, HvMgmt_TCUStopFltDTCSetTim_CFG,
    HvMgmt_TCUStopFltDTCResetTim_CFG, ((uint16_T)TCUMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion, &CtAp_TCUMgmt_ARID_DEF.Switch1_mmnj,
    &CtAp_TCUMgmt_ARID_DEF.Switch8_ol2a, &CtAp_TCUMgmt_ARID_DEF.Switch6_edws,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandleT1);

  /* End of Outputs for SubSystem: '<S7>/ATOM_U16ErrorHandleT1' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt1' */
  /* Constant: '<S7>/Marco_Active1' incorporates:
   *  Constant: '<S7>/HvMgmt_RunStep2'
   *  Constant: '<S7>/HvMgmt_TCUDTCEnaSetTim_CFG1'
   */
  rtb_RelationalOperator_p1ch = CtAp_TCUMgmt_ATOM_TimeCnt(TCUMgmt_Active,
    ((uint16_T)TCUMgmt_HvMgmt_RunStep), HvMgmt_TCUDTCEnaSetTim_CFG,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_mbvz);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Input' */
  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Constant: '<S14>/Constant'
   *  RelationalOperator: '<S14>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_DataTypeConversion_krck = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    TCUMgmt_Inactive);

  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:571
   */
  rtb_LogicalOperator1_brzp = (rtb_RelationalOperator_p1ch &&
    rtb_DataTypeConversion_krck && tmpRead_8 && tmpRead_6);

  /* Logic: '<S7>/LogicalOperator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S20>/Constant'
   *  Delay: '<S27>/Delay2'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   *
   * Block requirements for '<S7>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:569
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  rtb_LogicalOperator2_ajtu = ((CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    TCUMgmt_TCUReq_Ena)) && (tmpRead_3 != ((uint8_T)TCUMgmt_TCU_ON)));

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_Compare_e5ze = (tmpRead_3 == ((uint8_T)TCUMgmt_TCU_ON));

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_U16ErrorHandleT2' */
  /* Constant: '<S7>/HvMgmt_TCUEnaFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S7>/HvMgmt_RunStep3'
   *  Constant: '<S7>/HvMgmt_TCUEnaFltDTCResetTim_CFG'
   *
   * Block requirements for '<S7>/HvMgmt_TCUEnaFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:575
   *
   * Block requirements for '<S7>/HvMgmt_TCUEnaFltDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:576
   */
  CtAp_TCUMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator1_brzp,
    rtb_LogicalOperator2_ajtu, rtb_Compare_e5ze, HvMgmt_TCUEnaFltDTCSetTim_CFG,
    HvMgmt_TCUEnaFltDTCResetTim_CFG, ((uint16_T)TCUMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion_krck, &CtAp_TCUMgmt_ARID_DEF.Switch1,
    &CtAp_TCUMgmt_ARID_DEF.Switch8, &CtAp_TCUMgmt_ARID_DEF.Switch6,
    &CtAp_TCUMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandleT2);

  /* End of Outputs for SubSystem: '<S7>/ATOM_U16ErrorHandleT2' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_TCUDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum' incorporates:
   *  Delay: '<S27>/Delay2'
   *  SignalConversion: '<S6>/SignalCopy'
   *
   * Block requirements for '<S27>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:543
   */
  (void)Rte_Write_RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum
    (CtAp_TCUMgmt_ARID_DEF.Delay2_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_TCUDTC'
   *
   * Block requirements for '<S4>/HvMgmt_TCUDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:556
   *  2. VCU_SW_Requirements_Specification.slreqx:557
   *  3. VCU_SW_Requirements_Specification.slreqx:558
   *  4. VCU_SW_Requirements_Specification.slreqx:562
   *  5. VCU_SW_Requirements_Specification.slreqx:563
   *  6. VCU_SW_Requirements_Specification.slreqx:564
   *  7. VCU_SW_Requirements_Specification.slreqx:569
   *  8. VCU_SW_Requirements_Specification.slreqx:570
   *  9. VCU_SW_Requirements_Specification.slreqx:571
   *  10. VCU_SW_Requirements_Specification.slreqx:575
   *  11. VCU_SW_Requirements_Specification.slreqx:576
   *  12. VCU_SW_Requirements_Specification.slreqx:577
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_TCUEnaFltDTC_Bus_tec_HvMgmt_TCUEnaFltDTC_Bus' incorporates:
   *  BusCreator: '<S7>/Bus Creator2'
   */
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t.HvMgmt_MonStatTCUEnaFltDTC
    = rtb_DataTypeConversion_krck;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t.HvMgmt_MonResTCUEnaFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch1;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t.HvMgmt_ErrStatTCUEnaFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch8;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t.HvMgmt_ErrResTCUEnaFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_HvMgmt_TCUStopFltDTC_Bus_tec_HvMgmt_TCUStopFltDTC_Bus' incorporates:
   *  BusCreator: '<S7>/Bus Creator1'
   */
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUStopFltDTC_Bus_.HvMgmt_MonStatTCUStopFltDTC
    = rtb_DataTypeConversion;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUStopFltDTC_Bus_.HvMgmt_MonResTCUStopFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch1_mmnj;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUStopFltDTC_Bus_.HvMgmt_ErrStatTCUStopFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch8_ol2a;
  CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUStopFltDTC_Bus_.HvMgmt_ErrResTCUStopFltDTC
    = CtAp_TCUMgmt_ARID_DEF.Switch6_edws;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_TCUDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TCUMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum' incorporates:
   *  Delay: '<S28>/Delay'
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
    (CtAp_TCUMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TCUMgmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TCUMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_HvMgmt_TCUEnaFltDTC_Bus_tec_HvMgmt_TCUEnaFltDTC_Bus
    (&CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t);
  (void)Rte_Write_RTE_P_HvMgmt_TCUStopFltDTC_Bus_tec_HvMgmt_TCUStopFltDTC_Bus
    (&CtAp_TCUMgmt_ARID_DEF.RTE_P_HvMgmt_TCUStopFltDTC_Bus_);
}

#define CtAp_TCUMgmt_STOP_SEC_CODE
#include "CtAp_TCUMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TCUMgmt_START_SEC_VAR_CONST_8
#include "CtAp_TCUMgmt_MemMap.h"

void R_TCUMgmt_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TCUMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TCUMgmt_T));
}

#define CtAp_TCUMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_TCUMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
