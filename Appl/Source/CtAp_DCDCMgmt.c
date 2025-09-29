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
 *  Filename:           CtAp_DCDCMgmt.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DCDCMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       ATOM-HyacinthGe - Thu Aug 29 14:06:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:31:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:30:10 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCDCMgmt.h"
#include "rtwtypes.h"
#include "CtAp_DCDCMgmt_private.h"
#include "Rte_Type.h"
#include "CtAp_DCDCMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_DCDCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"

ARID_DEF_CtAp_DCDCMgmt_T CtAp_DCDCMgmt_ARID_DEF;

#define CtAp_DCDCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S10>/If5'
 *    '<S10>/If6'
 */
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

real32_T CtAp_DCDCMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S20>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S20>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/ATOM_TimeCnt'
 *    '<S11>/ATOM_TimeCnt1'
 *    '<S11>/ATOM_TimeCnt2'
 *    '<S11>/ATOM_TimeCnt3'
 *    '<S11>/ATOM_TimeCnt4'
 *    '<S11>/ATOM_TimeCnt5'
 *    '<S60>/ATOM_TimeCnt1'
 *    '<S61>/ATOM_TimeCnt'
 */
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

boolean_T CtAp_DCDCMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_DC_T
  *CtAp_DCDCMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1_fvr2;

  /* Sum: '<S25>/Add1' incorporates:
   *  DataTypeConversion: '<S25>/Data Type Conversion'
   *  DataTypeConversion: '<S25>/Data Type Conversion1'
   */
  rtb_Add1_fvr2 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S25>/Switch' */
  if (rtu_In) {
    /* Sum: '<S25>/Add' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S25>/Min' */
    if (rtb_Add1_fvr2 <= CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S25>/Add' */
      CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_fvr2;
    }

    /* End of MinMax: '<S25>/Min' */
  } else {
    /* Sum: '<S25>/Add' incorporates:
     *  Constant: '<S25>/Constant'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S25>/Switch' */

  /* RelationalOperator: '<S25>/Relational Operator' incorporates:
   *  UnitDelay: '<S25>/Delay'
   */
  return CtAp_DCDCMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_fvr2;
}

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/If1'
 *    '<S11>/If10'
 *    '<S11>/If11'
 *    '<S11>/If2'
 *    '<S11>/If3'
 *    '<S11>/If4'
 *    '<S11>/If9'
 *    '<S12>/If7'
 *    '<S12>/If8'
 */
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

uint8_T CtAp_DCDCMgmt_If1(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S43>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S43>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S60>/ATOM_U16ErrorHandle'
 *    '<S61>/ATOM_U16ErrorHandle'
 */
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

void CtAp_DCDCMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_DCDCMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S63>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S63>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S68>/Constant2'
     *  Constant: '<S68>/Constant4'
     *  Switch: '<S68>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S68>/Switch' incorporates:
       *  Constant: '<S68>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S68>/Constant3'
     *  RelationalOperator: '<S68>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S70>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S70>/Sum' incorporates:
       *  UnitDelay: '<S70>/UnitDelay'
       */
      CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S70>/MinMax' */
      if (u0 <= CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S70>/Sum' */
        CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S70>/MinMax' */
    } else {
      /* Sum: '<S70>/Sum' incorporates:
       *  Constant: '<S68>/Constant23'
       *  UnitDelay: '<S70>/UnitDelay'
       */
      CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S70>/Switch1' */

    /* RelationalOperator: '<S68>/Equal2' incorporates:
     *  Constant: '<S68>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S69>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S69>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S69>/Sum' incorporates:
       *  UnitDelay: '<S69>/UnitDelay'
       */
      CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be);

      /* MinMax: '<S69>/MinMax' */
      if (u0 <= CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be) {
        /* Sum: '<S69>/Sum' */
        CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be = u0;
      }

      /* End of MinMax: '<S69>/MinMax' */
    } else {
      /* Sum: '<S69>/Sum' incorporates:
       *  Constant: '<S68>/Constant37'
       *  UnitDelay: '<S69>/UnitDelay'
       */
      CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be = ((uint16_T)0U);
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Switch: '<S68>/Switch8' incorporates:
     *  Constant: '<S68>/Constant6'
     *  Constant: '<S68>/DEBOUNCING'
     *  RelationalOperator: '<S68>/Equal6'
     *  RelationalOperator: '<S69>/B_MiHold'
     *  RelationalOperator: '<S70>/B_MiHold'
     *  Switch: '<S68>/Switch2'
     *  Switch: '<S68>/Switch3'
     *  Switch: '<S68>/Switch4'
     *  UnitDelay: '<S69>/UnitDelay'
     *  UnitDelay: '<S70>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE_e2be >
               rtu_MatureTime) {
      /* Switch: '<S68>/Switch2' incorporates:
       *  Constant: '<S68>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S68>/Switch3' incorporates:
       *  Constant: '<S68>/DEBOUNCING_F'
       *  Switch: '<S68>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_DCDCMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S68>/Switch4' incorporates:
       *  Constant: '<S68>/PASSED'
       *  Switch: '<S68>/Switch2'
       *  Switch: '<S68>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S68>/Switch3' incorporates:
       *  Constant: '<S68>/DEBOUNCING_P'
       *  Switch: '<S68>/Switch2'
       *  Switch: '<S68>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S68>/Switch8' */

    /* Switch: '<S68>/Switch6' incorporates:
     *  Constant: '<S68>/Constant30'
     *  Constant: '<S68>/Constant31'
     *  Constant: '<S68>/Constant32'
     *  Delay: '<S68>/Delay1'
     *  RelationalOperator: '<S68>/Equal3'
     *  RelationalOperator: '<S68>/Equal4'
     *  Switch: '<S68>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S68>/Switch7' incorporates:
       *  Constant: '<S68>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_DCDCMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S68>/Switch6' */

    /* Update for Delay: '<S68>/Delay1' */
    CtAp_DCDCMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S63>/ErrorHandleSysU16' */
}

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DCDCMgmt_START_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

void R_DCDCMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Switch;
  uint16_T rtb_Add1;
  uint16_T rtb_Add2;
  uint8_T rtb_Switch_ixp2;
  uint8_T rtb_Switch_jftx;
  uint8_T rtb_Switch_m34i;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_Compare_ag3p;
  boolean_T rtb_LogicalOperator_gb0q;
  boolean_T rtb_LogicalOperator1_duhp;
  boolean_T rtb_Compare_cwqk;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator1_ljc2;
  boolean_T rtb_LogicalOperator2_pgzz;
  boolean_T rtb_LogicalOperator_ktuu;
  boolean_T rtb_LogicalOperator15;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_Compare_otco;
  boolean_T rtb_LogicalOperator1_nqta;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator13;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator1_juzy;
  boolean_T rtb_RelationalOperator_ansl;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_erg1;
  dt_ComM_EPTCANBusOffInfo tmpRead_2;
  real32_T tmpRead_1;
  real32_T tmpRead_3;
  uint8_T tmpRead;
  uint8_T tmpRead_4;
  uint8_T tmpRead_7;
  boolean_T tmpRead_0;
  boolean_T tmpRead_5;
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

  /* Inport: '<Root>/RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg' */
  (void)Rte_Read_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V' */
  (void)Rte_Read_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg' */
  (void)
    Rte_Read_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum' */
  (void)Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCDCMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_DCDCSts' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator6' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S9>/Marco_BMSBattUDcFac'
   *  Logic: '<S9>/LogicalOperator10'
   *  Logic: '<S9>/LogicalOperator7'
   *  Logic: '<S9>/LogicalOperator8'
   *  Logic: '<S9>/LogicalOperator9'
   *  Product: '<S9>/Product'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S9>/RelationalOperator2'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy8'
   *
   * Block requirements for '<S9>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:491
   */
  rtb_LogicalOperator6 = ((tmpRead_7 == ((uint8_T)DCDCMgmt_INIT)) || (tmpRead_7 ==
    ((uint8_T)DCDCMgmt_Sleep)) || (tmpRead_7 == ((uint8_T)DCDCMgmt_Standby)) ||
    tmpRead_0 || (((tmpRead_7 == ((uint8_T)DCDCMgmt_HvReady)) || (tmpRead_7 ==
    ((uint8_T)DCDCMgmt_Preheating))) && ((tmpRead == ((uint8_T)
    DCDCMgmt_U8Inactive)) || !tmpRead_5 || (tmpRead_3 <= (tmpRead_1 *
    DCDCMgmt_BMSBattUDcFac)))));

  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Constant: '<S54>/Constant'
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Logic: '<S12>/LogicalOperator11'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator1_ljc2 = (((tmpRead_7 == ((uint8_T)DCDCMgmt_HvReady)) ||
    (tmpRead_7 == ((uint8_T)DCDCMgmt_Preheating)) || (tmpRead_7 == ((uint8_T)
    DCDCMgmt_DrvReady))) && (tmpRead == ((uint8_T)DCDCMgmt_U8Active)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/If8'
   *
   * Block requirements for '<S12>/If8':
   *  1. VCU_SW_Requirements_Specification.slreqx:492
   */
  /* Constant: '<S12>/Marco_DCDCReq_Buck' incorporates:
   *  Delay: '<S12>/Delay2'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_Switch_jftx = CtAp_DCDCMgmt_If1(rtb_LogicalOperator1_ljc2, ((uint8_T)
    DCDCMgmt_DCDCReq_Buck), CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE);

  /* End of Outputs for SubSystem: '<S12>/If8' */

  /* Outputs for Atomic SubSystem: '<S12>/If7'
   *
   * Block requirements for '<S12>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:491
   */
  /* Delay: '<S12>/Delay2' incorporates:
   *  Constant: '<S12>/Marco_DCDCReq_Disable'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE = CtAp_DCDCMgmt_If1(rtb_LogicalOperator6,
    ((uint8_T)DCDCMgmt_DCDCReq_Disable), rtb_Switch_jftx);

  /* End of Outputs for SubSystem: '<S12>/If7' */

  /* DataTypeConversion: '<S63>/Data Type Conversion' incorporates:
   *  Constant: '<S37>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S37>/Compare'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_DataTypeConversion_erg1 = (CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE ==
    ((uint8_T)DCDCMgmt_DCDCReq_Disable));

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator2' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator2_pgzz = (rtb_DataTypeConversion_erg1 && (tmpRead_7 !=
    ((uint8_T)DCDCMgmt_INIT)) && (tmpRead_7 != ((uint8_T)DCDCMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Sum: '<S11>/Add1' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCStopFltDTCSetTim_CFG2'
   *  Constant: '<S11>/HvMgmt_RunStep'
   */
  rtb_Add1 = (uint16_T)((uint32_T)((uint16_T)DCDCMgmt_HvMgmt_RunStep) +
                        (uint32_T)HvMgmt_DCDCStopFltDTCSetTim_CFG);

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt' */
  /* Constant: '<S11>/HvMgmt_RunStep' */
  rtb_RelationalOperator_ansl = CtAp_DCDCMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator2_pgzz, ((uint16_T)DCDCMgmt_HvMgmt_RunStep), rtb_Add1,
     &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S33>/Constant'
   *  RelationalOperator: '<S11>/RelationalOperator'
   *  RelationalOperator: '<S33>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator_ktuu = ((rtb_DataTypeConversion_erg1 !=
    rtb_RelationalOperator_ansl) && (tmpRead_4 == ((uint8_T)DCDCMgmt_Standby)));

  /* Logic: '<S11>/LogicalOperator15' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S40>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator15 = ((CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    DCDCMgmt_DCDCReq_Buck)) && (tmpRead_4 == ((uint8_T)DCDCMgmt_Buck)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt5' */
  /* Constant: '<S11>/HvMgmt_RunStep5' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCEnaFltDTCSetTim_CFG'
   */
  rtb_DataTypeConversion_erg1 = CtAp_DCDCMgmt_ATOM_TimeCnt(rtb_LogicalOperator15,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCEnaFltDTCSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator4' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S41>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator4 = ((tmpRead_4 != ((uint8_T)DCDCMgmt_Buck)) &&
    (CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)DCDCMgmt_DCDCReq_Buck)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt3' */
  /* Constant: '<S11>/HvMgmt_RunStep3' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCEnaFltDTCSetTim_CFG1'
   */
  rtb_RelationalOperator_ansl = CtAp_DCDCMgmt_ATOM_TimeCnt(rtb_LogicalOperator4,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCEnaFltDTCSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt3' */

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  Delay: '<S12>/Delay2'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_Compare_otco = (CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    DCDCMgmt_DCDCReq_Buck));

  /* Sum: '<S11>/Add2' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCEnaFltDTCSetTim_CFG2'
   *  Constant: '<S11>/HvMgmt_RunStep1'
   */
  rtb_Add2 = (uint16_T)((uint32_T)((uint16_T)DCDCMgmt_HvMgmt_RunStep) +
                        (uint32_T)HvMgmt_DCDCEnaFltDTCSetTim_CFG);

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt1' */
  /* Constant: '<S11>/HvMgmt_RunStep1' */
  rtb_DataTypeConversion = CtAp_DCDCMgmt_ATOM_TimeCnt(rtb_Compare_otco,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), rtb_Add2,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_cl54);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator1' incorporates:
   *  Constant: '<S36>/Constant'
   *  RelationalOperator: '<S11>/RelationalOperator1'
   *  RelationalOperator: '<S36>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator1_nqta = ((rtb_Compare_otco != rtb_DataTypeConversion) &&
    (tmpRead_4 == ((uint8_T)DCDCMgmt_Buck)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If2'
   *
   * Block requirements for '<S11>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:500
   *  2. VCU_SW_Requirements_Specification.slreqx:501
   */
  /* Constant: '<S11>/Marco_DCDCBuckCmpl1' incorporates:
   *  Delay: '<S11>/Delay'
   */
  rtb_Switch_m34i = CtAp_DCDCMgmt_If1(rtb_LogicalOperator1_nqta, ((uint8_T)
    DCDCMgmt_DCDCBuckCmpl), CtAp_DCDCMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S11>/If2' */

  /* Outputs for Atomic SubSystem: '<S11>/If4'
   *
   * Block requirements for '<S11>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:499
   */
  /* Constant: '<S11>/Marco_DCDCBuckFailed' */
  rtb_Switch_jftx = CtAp_DCDCMgmt_If1(rtb_RelationalOperator_ansl, ((uint8_T)
    DCDCMgmt_DCDCBuckFailed), rtb_Switch_m34i);

  /* End of Outputs for SubSystem: '<S11>/If4' */

  /* Outputs for Atomic SubSystem: '<S11>/If11'
   *
   * Block requirements for '<S11>/If11':
   *  1. VCU_SW_Requirements_Specification.slreqx:498
   */
  /* Constant: '<S11>/Marco_DCDCBuckCmpl' */
  rtb_Switch_m34i = CtAp_DCDCMgmt_If1(rtb_DataTypeConversion_erg1, ((uint8_T)
    DCDCMgmt_DCDCBuckCmpl), rtb_Switch_jftx);

  /* End of Outputs for SubSystem: '<S11>/If11' */

  /* Outputs for Atomic SubSystem: '<S11>/If1'
   *
   * Block requirements for '<S11>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:497
   */
  /* Constant: '<S11>/Marco_DCDCDisableCmpl1' */
  rtb_Switch_ixp2 = CtAp_DCDCMgmt_If1(rtb_LogicalOperator_ktuu, ((uint8_T)
    DCDCMgmt_DCDCDisableCmpl), rtb_Switch_m34i);

  /* End of Outputs for SubSystem: '<S11>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator3' incorporates:
   *  Constant: '<S32>/Constant'
   *  Constant: '<S39>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator3 = ((tmpRead_4 != ((uint8_T)DCDCMgmt_Standby)) &&
    (CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)DCDCMgmt_DCDCReq_Disable)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt2' */
  /* Constant: '<S11>/HvMgmt_RunStep2' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCStopFltDTCSetTim_CFG1'
   */
  rtb_DataTypeConversion_erg1 = CtAp_DCDCMgmt_ATOM_TimeCnt(rtb_LogicalOperator3,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCStopFltDTCSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S11>/If3'
   *
   * Block requirements for '<S11>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:496
   */
  /* Constant: '<S11>/Marco_DCDCDisableFailed' */
  rtb_Switch_jftx = CtAp_DCDCMgmt_If1(rtb_DataTypeConversion_erg1, ((uint8_T)
    DCDCMgmt_DCDCDisableFailed), rtb_Switch_ixp2);

  /* End of Outputs for SubSystem: '<S11>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator13' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S38>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator13 = ((CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    DCDCMgmt_DCDCReq_Disable)) && (tmpRead_4 == ((uint8_T)DCDCMgmt_Standby)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt4' */
  /* Constant: '<S11>/HvMgmt_RunStep4' incorporates:
   *  Constant: '<S11>/HvMgmt_DCDCStopFltDTCSetTim_CFG'
   */
  rtb_DataTypeConversion_erg1 = CtAp_DCDCMgmt_ATOM_TimeCnt(rtb_LogicalOperator13,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCStopFltDTCSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S11>/If10'
   *
   * Block requirements for '<S11>/If10':
   *  1. VCU_SW_Requirements_Specification.slreqx:495
   */
  /* Constant: '<S11>/Marco_DCDCDisableCmpl' */
  rtb_Switch_m34i = CtAp_DCDCMgmt_If1(rtb_DataTypeConversion_erg1, ((uint8_T)
    DCDCMgmt_DCDCDisableCmpl), rtb_Switch_jftx);

  /* End of Outputs for SubSystem: '<S11>/If10' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator12' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S53>/Constant'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S53>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator12 = ((tmpRead_7 == ((uint8_T)DCDCMgmt_INIT)) || (tmpRead_7
    == ((uint8_T)DCDCMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If9'
   *
   * Block requirements for '<S11>/If9':
   *  1. VCU_SW_Requirements_Specification.slreqx:494
   */
  /* Delay: '<S11>/Delay' incorporates:
   *  Constant: '<S11>/Marco_INIT'
   */
  CtAp_DCDCMgmt_ARID_DEF.Delay_DSTATE = CtAp_DCDCMgmt_If1(rtb_LogicalOperator12,
    ((uint8_T)DCDCMgmt_INIT), rtb_Switch_m34i);

  /* End of Outputs for SubSystem: '<S11>/If9' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* Logic: '<S10>/LogicalOperator1' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Logic: '<S10>/LogicalOperator11'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator1_juzy = (((tmpRead_7 == ((uint8_T)DCDCMgmt_HvReady)) ||
    (tmpRead_7 == ((uint8_T)DCDCMgmt_Preheating)) || (tmpRead_7 == ((uint8_T)
    DCDCMgmt_DrvReady))) && (tmpRead == ((uint8_T)DCDCMgmt_U8Active)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/If6'
   *
   * Block requirements for '<S10>/If6':
   *  1. VCU_SW_Requirements_Specification.slreqx:492
   */
  /* Constant: '<S10>/Marco_DCDCBuckUDc' incorporates:
   *  Delay: '<S10>/Delay1'
   *
   * Block requirements for '<S10>/Delay1':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_Switch = CtAp_DCDCMgmt_If(rtb_LogicalOperator1_juzy, DCDCMgmt_DCDCBuckUDc,
    CtAp_DCDCMgmt_ARID_DEF.Delay1_DSTATE);

  /* End of Outputs for SubSystem: '<S10>/If6' */

  /* Outputs for Atomic SubSystem: '<S10>/If5'
   *
   * Block requirements for '<S10>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:491
   */
  /* Delay: '<S10>/Delay1' incorporates:
   *  Constant: '<S10>/Marco_DCDCDiUDc'
   *
   * Block requirements for '<S10>/Delay1':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  CtAp_DCDCMgmt_ARID_DEF.Delay1_DSTATE = CtAp_DCDCMgmt_If(rtb_LogicalOperator6,
    DCDCMgmt_DCDCDiUDc, rtb_Switch);

  /* End of Outputs for SubSystem: '<S10>/If5' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_DCDCSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_DCFCDTC' */
  /* Outputs for Atomic SubSystem: '<S60>/ATOM_TimeCnt1' */
  /* Constant: '<S60>/Marco_Active1' incorporates:
   *  Constant: '<S60>/HvMgmt_DCDCDTCEnaSetTim_CFG1'
   *  Constant: '<S60>/HvMgmt_RunStep2'
   */
  rtb_DataTypeConversion_erg1 = CtAp_DCDCMgmt_ATOM_TimeCnt(DCDCMgmt_Active,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCDTCEnaSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S60>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* DataTypeConversion: '<S72>/Data Type Conversion' incorporates:
   *  Constant: '<S66>/Constant'
   *  RelationalOperator: '<S66>/Compare'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_DataTypeConversion = (tmpRead_2.ComM_ErrResEPTCANBusOffInfo ==
    DCDCMgmt_Inactive);

  /* Logic: '<S60>/LogicalOperator2' incorporates:
   *  Logic: '<S61>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  tmpRead_8 = !tmpRead_8;

  /* Logic: '<S60>/LogicalOperator' incorporates:
   *  Logic: '<S60>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S60>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:521
   */
  rtb_LogicalOperator = (rtb_DataTypeConversion_erg1 && rtb_DataTypeConversion &&
    tmpRead_6 && tmpRead_8);

  /* Logic: '<S60>/LogicalOperator1' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S67>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S60>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:519
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator1 = ((CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)
    DCDCMgmt_DCDCReq_Buck)) && (tmpRead_4 != ((uint8_T)DCDCMgmt_Buck)));

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_Compare_ag3p = (tmpRead_4 == ((uint8_T)DCDCMgmt_Buck));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S60>/ATOM_U16ErrorHandle' */
  /* Constant: '<S60>/HvMgmt_DCDCEnaFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S60>/HvMgmt_DCDCEnaFltDTCResetTim_CFG'
   *  Constant: '<S60>/HvMgmt_RunStep3'
   *
   * Block requirements for '<S60>/HvMgmt_DCDCEnaFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:525
   *
   * Block requirements for '<S60>/HvMgmt_DCDCEnaFltDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:526
   */
  CtAp_DCDCMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator, rtb_LogicalOperator1,
    rtb_Compare_ag3p, HvMgmt_DCDCEnaFltDTCSetTim_CFG,
    HvMgmt_DCDCEnaFltDTCResetTim_CFG, ((uint16_T)DCDCMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion_erg1, &CtAp_DCDCMgmt_ARID_DEF.Switch1_gea2,
    &CtAp_DCDCMgmt_ARID_DEF.Switch8_fgnd, &CtAp_DCDCMgmt_ARID_DEF.Switch6_o2xb,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_mbvz);

  /* End of Outputs for SubSystem: '<S60>/ATOM_U16ErrorHandle' */

  /* Outputs for Atomic SubSystem: '<S61>/ATOM_TimeCnt' */
  /* Constant: '<S61>/Marco_Active' incorporates:
   *  Constant: '<S61>/HvMgmt_DCDCDTCEnaSetTim_CFG'
   *  Constant: '<S61>/HvMgmt_RunStep'
   */
  rtb_RelationalOperator_ansl = CtAp_DCDCMgmt_ATOM_TimeCnt(DCDCMgmt_Active,
    ((uint16_T)DCDCMgmt_HvMgmt_RunStep), HvMgmt_DCDCDTCEnaSetTim_CFG,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S61>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */
  /* DataTypeConversion: '<S72>/Data Type Conversion' incorporates:
   *  Constant: '<S75>/Constant'
   *  RelationalOperator: '<S75>/Compare'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_DataTypeConversion = (tmpRead_2.ComM_ErrResEPTCANBusOffInfo ==
    DCDCMgmt_Inactive);

  /* Logic: '<S61>/LogicalOperator' incorporates:
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S61>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:508
   */
  rtb_LogicalOperator_gb0q = (rtb_RelationalOperator_ansl &&
    rtb_DataTypeConversion && tmpRead_6 && tmpRead_8);

  /* Logic: '<S61>/LogicalOperator1' incorporates:
   *  Constant: '<S73>/Constant'
   *  Constant: '<S76>/Constant'
   *  Delay: '<S12>/Delay2'
   *  RelationalOperator: '<S73>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S61>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:506
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  rtb_LogicalOperator1_duhp = ((CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE ==
    ((uint8_T)DCDCMgmt_DCDCReq_Disable)) && (tmpRead_4 != ((uint8_T)
    DCDCMgmt_Standby)));

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_Compare_cwqk = (tmpRead_4 == ((uint8_T)DCDCMgmt_Standby));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S61>/ATOM_U16ErrorHandle' */
  /* Constant: '<S61>/HvMgmt_DCDCStopFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S61>/HvMgmt_DCDCStopFltDTCResetTim_CFG'
   *  Constant: '<S61>/HvMgmt_RunStep1'
   *
   * Block requirements for '<S61>/HvMgmt_DCDCStopFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:512
   *
   * Block requirements for '<S61>/HvMgmt_DCDCStopFltDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:513
   */
  CtAp_DCDCMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator_gb0q,
    rtb_LogicalOperator1_duhp, rtb_Compare_cwqk, HvMgmt_DCDCStopFltDTCSetTim_CFG,
    HvMgmt_DCDCStopFltDTCResetTim_CFG, ((uint16_T)DCDCMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion, &CtAp_DCDCMgmt_ARID_DEF.Switch1,
    &CtAp_DCDCMgmt_ARID_DEF.Switch8, &CtAp_DCDCMgmt_ARID_DEF.Switch6,
    &CtAp_DCDCMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S61>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_DCFCDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V' incorporates:
   *  Delay: '<S10>/Delay1'
   *  SignalConversion: '<S6>/SignalCopy'
   *
   * Block requirements for '<S10>/Delay1':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  (void)Rte_Write_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V
    (CtAp_DCDCMgmt_ARID_DEF.Delay1_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_DCFCDTC' */
  /* Outport: '<Root>/RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus' incorporates:
   *  BusCreator: '<S60>/Bus Creator2'
   */
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_.HvMgmt_MonStatDCDCEnaFltDTC
    = rtb_DataTypeConversion_erg1;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_.HvMgmt_MonResDCDCEnaFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch1_gea2;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_.HvMgmt_ErrStatDCDCEnaFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch8_fgnd;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_.HvMgmt_ErrResDCDCEnaFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch6_o2xb;

  /* Outport: '<Root>/RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus' incorporates:
   *  BusCreator: '<S61>/Bus Creator1'
   */
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCStopFltDTC_Bus.HvMgmt_MonStatDCDCStopFltDTC
    = rtb_DataTypeConversion;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCStopFltDTC_Bus.HvMgmt_MonResDCDCStopFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch1;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCStopFltDTC_Bus.HvMgmt_ErrStatDCDCStopFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch8;
  CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCStopFltDTC_Bus.HvMgmt_ErrResDCDCStopFltDTC
    = CtAp_DCDCMgmt_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_DCFCDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCDCMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum' incorporates:
   *  Delay: '<S11>/Delay'
   *  SignalConversion: '<S6>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
    (CtAp_DCDCMgmt_ARID_DEF.Delay_DSTATE);

  /* Outport: '<Root>/RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum' incorporates:
   *  Delay: '<S12>/Delay2'
   *  SignalConversion: '<S6>/SignalCopy4'
   *
   * Block requirements for '<S12>/Delay2':
   *  1. VCU_SW_Requirements_Specification.slreqx:493
   */
  (void)Rte_Write_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum
    (CtAp_DCDCMgmt_ARID_DEF.Delay2_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCDCMgmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_DCDCMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus
    (&CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_);
  (void)Rte_Write_RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus(
    &CtAp_DCDCMgmt_ARID_DEF.RTE_P_HvMgmt_DCDCStopFltDTC_Bus);
}

#define CtAp_DCDCMgmt_STOP_SEC_CODE
#include "CtAp_DCDCMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DCDCMgmt_START_SEC_VAR_CONST_8
#include "CtAp_DCDCMgmt_MemMap.h"

void R_DCDCMgmt_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_DCDCMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_DCDCMgmt_T));
}

#define CtAp_DCDCMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_DCDCMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
