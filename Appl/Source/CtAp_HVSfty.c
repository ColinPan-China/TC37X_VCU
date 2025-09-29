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
 *  Filename:           CtAp_HVSfty.c
 *  File Creation Date: 12-Feb-2025
 *  Model Name:         CtAp_HVSfty
 *  Model Version:      2.1.4
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:53 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Feb 12 11:07:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed Feb 12 11:06:40 2025
 *
 *
 *******************************************************************************/
#include "CtAp_HVSfty.h"
#include "rtwtypes.h"
#include "CtAp_HVSfty_private.h"
#include "CtAp_HVSfty_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_HVSfty_START_SEC_VAR_NOINIT_8
#include "CtAp_HVSfty_MemMap.h"

ARID_DEF_CtAp_HVSfty_T CtAp_HVSfty_ARID_DEF;

#define CtAp_HVSfty_STOP_SEC_VAR_NOINIT_8
#include "CtAp_HVSfty_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S4>/ATOM_U16ErrHnd'
 *    '<S7>/ATOM_U16ErrHnd'
 *    '<S8>/ATOM_U16ErrHnd'
 *    '<S9>/ATOM_U16ErrHnd'
 *    '<S10>/ATOM_U16ErrHnd'
 */
#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

void CtAp_HVSfty_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_HVSfty__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S11>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S16>/Constant4'
     *  Switch: '<S16>/Switch1'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else if (rtu_ResetCondition) {
      /* Switch: '<S16>/Switch1' incorporates:
       *  Constant: '<S16>/Constant2'
       */
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S16>/Switch' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S16>/Constant3'
     *  RelationalOperator: '<S16>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S18>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S18>/Sum' incorporates:
       *  UnitDelay: '<S18>/UnitDelay'
       */
      CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S18>/MinMax' */
      if (u0 <= CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S18>/Sum' */
        CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S18>/MinMax' */
    } else {
      /* Sum: '<S18>/Sum' incorporates:
       *  Constant: '<S16>/Constant23'
       *  UnitDelay: '<S18>/UnitDelay'
       */
      CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S18>/Switch1' */

    /* RelationalOperator: '<S16>/Equal2' incorporates:
     *  Constant: '<S16>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S17>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S17>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S17>/Sum' incorporates:
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331 = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331);

      /* MinMax: '<S17>/MinMax' */
      if (u0 <= CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331) {
        /* Sum: '<S17>/Sum' */
        CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331 = u0;
      }

      /* End of MinMax: '<S17>/MinMax' */
    } else {
      /* Sum: '<S17>/Sum' incorporates:
       *  Constant: '<S16>/Constant37'
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331 = ((uint16_T)0U);
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S16>/Switch8' incorporates:
     *  Constant: '<S16>/Constant1'
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S16>/FAILED1'
     *  RelationalOperator: '<S16>/Equal5'
     *  RelationalOperator: '<S16>/Equal6'
     *  RelationalOperator: '<S17>/B_MiHold'
     *  RelationalOperator: '<S18>/B_MiHold'
     *  Switch: '<S16>/Switch2'
     *  Switch: '<S16>/Switch3'
     *  Switch: '<S16>/Switch4'
     *  Switch: '<S16>/Switch5'
     *  UnitDelay: '<S17>/UnitDelay'
     *  UnitDelay: '<S18>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE_c331 > rtu_MatureTime)
    {
      /* Switch: '<S16>/Switch2' incorporates:
       *  Constant: '<S16>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S16>/Switch3' incorporates:
       *  Constant: '<S16>/DEBOUNCING_F'
       *  Switch: '<S16>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_HVSfty__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S16>/Switch4' incorporates:
       *  Constant: '<S16>/PASSED'
       *  Switch: '<S16>/Switch2'
       *  Switch: '<S16>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else if (*rty_MonRes == ((uint8_T)0U)) {
      /* Switch: '<S16>/Switch5' incorporates:
       *  Constant: '<S16>/DEBOUNCING_P'
       *  Switch: '<S16>/Switch2'
       *  Switch: '<S16>/Switch3'
       *  Switch: '<S16>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    } else {
      /* Switch: '<S16>/Switch3' incorporates:
       *  Delay: '<S16>/Delay3'
       *  Switch: '<S16>/Switch2'
       *  Switch: '<S16>/Switch4'
       */
      *rty_ErrStat = CtAp_HVSfty__ARID_DEF_arg->Delay3_DSTATE;
    }

    /* End of Switch: '<S16>/Switch8' */

    /* Switch: '<S16>/Switch6' incorporates:
     *  Constant: '<S16>/Constant30'
     *  Constant: '<S16>/Constant31'
     *  Constant: '<S16>/Constant32'
     *  Delay: '<S16>/Delay1'
     *  RelationalOperator: '<S16>/Equal3'
     *  RelationalOperator: '<S16>/Equal4'
     *  Switch: '<S16>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S16>/Switch7' incorporates:
       *  Constant: '<S16>/Constant11'
       */
      *rty_ErrorRes = (0.0 != 0.0);
    } else {
      *rty_ErrorRes = CtAp_HVSfty__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S16>/Switch6' */

    /* Update for Delay: '<S16>/Delay3' */
    CtAp_HVSfty__ARID_DEF_arg->Delay3_DSTATE = *rty_ErrStat;

    /* Update for Delay: '<S16>/Delay1' */
    CtAp_HVSfty__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S11>/ErrorHandleSysU16' */
}

#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/ATOM_TimeCnt'
 *    '<S9>/ATOM_TimeCnt'
 *    '<S9>/ATOM_TimeCnt1'
 *    '<S9>/ATOM_TimeCnt2'
 */
#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

boolean_T CtAp_HVSfty_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_HV_T
  *CtAp_HVSfty__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S27>/Add1' incorporates:
   *  DataTypeConversion: '<S27>/Data Type Conversion'
   *  DataTypeConversion: '<S27>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S27>/Switch' */
  if (rtu_In) {
    /* Sum: '<S27>/Add' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     *  UnitDelay: '<S27>/Delay'
     */
    CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S27>/Min' */
    if (rtb_Add1 <= CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S27>/Add' */
      CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S27>/Min' */
  } else {
    /* Sum: '<S27>/Add' incorporates:
     *  Constant: '<S27>/Constant'
     *  UnitDelay: '<S27>/Delay'
     */
    CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S27>/Switch' */

  /* RelationalOperator: '<S27>/Relational Operator' incorporates:
   *  UnitDelay: '<S27>/Delay'
   */
  return CtAp_HVSfty__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

void R_HVSfty_Cyclic_10ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_Compare_apzd;
  boolean_T rtb_LogicalOperator_afyg;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator9;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_LogicalOperator2_pasg;
  boolean_T rtb_LogicalOperator3_aug3;
  boolean_T rtb_Compare_mbgv;
  boolean_T rtb_LogicalOperator_khhm;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_lajj;
  boolean_T rtb_DataTypeConversion_jv3m;
  boolean_T rtb_DataTypeConversion_iygp;
  boolean_T rtb_DataTypeConversion_lxs2;
  uint8_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_TmpSignalConversionAtR_awag;
  uint8_T rtb_TmpSignalConversionAtR_j4rv;
  uint8_T rtb_TmpSignalConversionAtR_kjud;
  boolean_T rtb_LogicalOperator1_tmp;
  boolean_T rtb_TmpSignalConversionAtR_eo43;
  boolean_T rtb_TmpSignalConversionAtR_oq4p;
  boolean_T tmpRead;
  boolean_T tmpRead_0;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg' */
  (void)
    Rte_Read_RTE_R_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg' */
  (void)
    Rte_Read_RTE_R_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg' */
  (void)
    Rte_Read_RTE_R_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg
    (&rtb_TmpSignalConversionAtR_eo43);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_awag);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum
    (&rtb_TmpSignalConversionAtR_kjud);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_oq4p);

  /* SignalConversion generated from: '<Root>/RTE_R_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz' incorporates:
   *  Inport: '<Root>/RTE_R_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz'
   */
  (void)Rte_Read_RTE_R_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz
    (&rtb_TmpSignalConversionAtR_j4rv);

  /* Outputs for Atomic SubSystem: '<Root>/R_HVSfty_Cyclic_10ms_sys' */
  /* Logic: '<S10>/LogicalOperator' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *
   * Block requirements for '<S10>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:656
   */
  rtb_LogicalOperator = ((rtb_TmpSignalConversionAtR_awag == ((uint8_T)
    HVSfty_U8FaultOne)) || (rtb_TmpSignalConversionAtR_awag == ((uint8_T)
    HVSfty_U8FaultTwo)) || (rtb_TmpSignalConversionAtR_awag == ((uint8_T)
    HVSfty_U8FaultThree)));

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   */
  rtb_Compare_apzd = (rtb_TmpSignalConversionAtR_awag == ((uint8_T)
    HVSfty_U8FaultZero));

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_U16ErrHnd'
   *
   * Block requirements for '<S10>/ATOM_U16ErrHnd':
   *  1. VCU_SW_Requirements_Specification.slreqx:659
   */
  /* Constant: '<S10>/Constant' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S10>/Constant3'
   */
  CtAp_HVSfty_ATOM_U16ErrHnd(HVSfty_True, rtb_LogicalOperator, rtb_Compare_apzd,
    ((uint16_T)HVSfty_U16TimeCntZero), ((uint16_T)HVSfty_U16TimeCntZero),
    ((uint16_T)HVSfty_Cycle), &rtb_DataTypeConversion,
    &CtAp_HVSfty_ARID_DEF.Switch, &CtAp_HVSfty_ARID_DEF.Switch8,
    &CtAp_HVSfty_ARID_DEF.Switch6, &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd);

  /* End of Outputs for SubSystem: '<S10>/ATOM_U16ErrHnd' */

  /* Logic: '<S2>/LogicalOperator' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *
   * Block requirements for '<S2>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:624
   *  2. VCU_SW_Requirements_Specification.slreqx:625
   */
  rtb_LogicalOperator_afyg = ((rtb_TmpSignalConversionAtR_j4rv <
    HVSfty_HVILPWMMonrMin_CFG) || (rtb_TmpSignalConversionAtR_j4rv >
    HVSfty_HVILPWMMonrMax_CFG));

  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Logic: '<S9>/LogicalOperator6'
   *
   * Block requirements for '<S8>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:631
   */
  rtb_LogicalOperator1_tmp = !rtb_LogicalOperator_afyg;

  /* Logic: '<S8>/LogicalOperator1'
   *
   * Block requirements for '<S8>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:631
   */
  rtb_LogicalOperator1 = rtb_LogicalOperator1_tmp;

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt' */
  /* Constant: '<S8>/Constant1' incorporates:
   *  Constant: '<S8>/CAL'
   *  Constant: '<S8>/Constant'
   */
  rtb_DataTypeConversion_iygp = CtAp_HVSfty_ATOM_TimeCnt(HVSfty_True, ((uint16_T)
    HVSfty_Cycle), HVSfty_HVILDTCPreEnable_CFG,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt' */

  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Logic: '<S8>/LogicalOperator3'
   *
   * Block requirements for '<S8>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:632
   *
   * Block requirements for '<S8>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:631
   */
  rtb_LogicalOperator2 = (rtb_DataTypeConversion_iygp && tmpRead_2 && !tmpRead_3);

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_U16ErrHnd' */
  /* Constant: '<S8>/CAL2' incorporates:
   *  Constant: '<S8>/CAL3'
   *  Constant: '<S8>/Constant2'
   *
   * Block requirements for '<S8>/CAL2':
   *  1. VCU_SW_Requirements_Specification.slreqx:636
   *
   * Block requirements for '<S8>/CAL3':
   *  1. VCU_SW_Requirements_Specification.slreqx:637
   */
  CtAp_HVSfty_ATOM_U16ErrHnd(rtb_LogicalOperator2, rtb_LogicalOperator_afyg,
    rtb_LogicalOperator1, HVSfty_HVILDTCSetTim_CFG, HVSfty_HVILDTCResetTim_CFG,
    ((uint16_T)HVSfty_Cycle), &rtb_DataTypeConversion_iygp,
    &CtAp_HVSfty_ARID_DEF.Switch_myuc, &CtAp_HVSfty_ARID_DEF.Switch8_mle5,
    &CtAp_HVSfty_ARID_DEF.Switch6_ddh5,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd_cl54);

  /* End of Outputs for SubSystem: '<S8>/ATOM_U16ErrHnd' */

  /* Logic: '<S9>/LogicalOperator6' */
  rtb_LogicalOperator6 = rtb_LogicalOperator1_tmp;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt1' */
  /* Constant: '<S9>/Constant4' incorporates:
   *  Constant: '<S9>/CAL3'
   *
   * Block requirements for '<S9>/CAL3':
   *  1. VCU_SW_Requirements_Specification.slreqx:650
   */
  rtb_DataTypeConversion_lxs2 = CtAp_HVSfty_ATOM_TimeCnt(rtb_LogicalOperator6,
    ((uint16_T)HVSfty_Cycle), HVSfty_HVILDTCResetTim_CFG,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt' */
  /* Constant: '<S9>/Constant' incorporates:
   *  Constant: '<S9>/CAL'
   *  Constant: '<S9>/Constant3'
   */
  rtb_DataTypeConversion_jv3m = CtAp_HVSfty_ATOM_TimeCnt(HVSfty_True, ((uint16_T)
    HVSfty_Cycle), HVSfty_HVILPreTimEnable_CFG,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt' */

  /* Logic: '<S9>/LogicalOperator7' */
  rtb_LogicalOperator7 = !rtb_TmpSignalConversionAtR_eo43;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt2' */
  /* Constant: '<S9>/Constant5' incorporates:
   *  Constant: '<S9>/CAL6'
   *
   * Block requirements for '<S9>/CAL6':
   *  1. VCU_SW_Requirements_Specification.slreqx:650
   */
  rtb_DataTypeConversion_lajj = CtAp_HVSfty_ATOM_TimeCnt(rtb_LogicalOperator7,
    ((uint16_T)HVSfty_Cycle), HVSfty_HVILDTCResetTim_CFG,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt2' */

  /* Logic: '<S9>/LogicalOperator9' incorporates:
   *  Logic: '<S9>/LogicalOperator1'
   *  Logic: '<S9>/LogicalOperator5'
   *  Logic: '<S9>/LogicalOperator8'
   *
   * Block requirements for '<S9>/LogicalOperator9':
   *  1. VCU_SW_Requirements_Specification.slreqx:644
   */
  rtb_LogicalOperator9 = ((!rtb_DataTypeConversion_jv3m ||
    rtb_DataTypeConversion_lxs2) && (rtb_DataTypeConversion_lajj ||
    rtb_TmpSignalConversionAtR_oq4p));

  /* Logic: '<S9>/LogicalOperator4' incorporates:
   *  Logic: '<S9>/LogicalOperator'
   *  Logic: '<S9>/LogicalOperator2'
   *  Logic: '<S9>/LogicalOperator3'
   *
   * Block requirements for '<S9>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:643
   */
  rtb_LogicalOperator4 = ((rtb_TmpSignalConversionAtR_eo43 &&
    !rtb_TmpSignalConversionAtR_oq4p) || (rtb_LogicalOperator_afyg &&
    rtb_DataTypeConversion_jv3m));

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_U16ErrHnd' */
  /* Constant: '<S9>/Constant1' incorporates:
   *  Constant: '<S9>/CAL2'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/Constant6'
   *
   * Block requirements for '<S9>/CAL2':
   *  1. VCU_SW_Requirements_Specification.slreqx:646
   *  2. VCU_SW_Requirements_Specification.slreqx:649
   */
  CtAp_HVSfty_ATOM_U16ErrHnd(HVSfty_True, rtb_LogicalOperator4,
    rtb_LogicalOperator9, HVSfty_HVILDTCSetTim_CFG, ((uint16_T)
    HVSfty_U16TimeCntZero), ((uint16_T)HVSfty_Cycle),
    &rtb_DataTypeConversion_lajj, &CtAp_HVSfty_ARID_DEF.Switch_bwy2,
    &CtAp_HVSfty_ARID_DEF.Switch8_fo1w, &CtAp_HVSfty_ARID_DEF.Switch6_mfzw,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd_mbvz);

  /* End of Outputs for SubSystem: '<S9>/ATOM_U16ErrHnd' */

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Logic: '<S7>/LogicalOperator1'
   */
  rtb_DataTypeConversion_lxs2 = (tmpRead || tmpRead_0 || tmpRead_1);

  /* Logic: '<S7>/LogicalOperator2' incorporates:
   *  Constant: '<S23>/Constant'
   *  RelationalOperator: '<S23>/Compare'
   *
   * Block requirements for '<S7>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:682
   */
  rtb_LogicalOperator2_pasg = (rtb_DataTypeConversion_lxs2 ||
    (rtb_TmpSignalConversionAtR_kjud == ((uint8_T)HVSfty_U8FaultThree)));

  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Logic: '<S7>/LogicalOperator'
   *  Logic: '<S7>/LogicalOperator4'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *
   * Block requirements for '<S7>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:683
   */
  rtb_LogicalOperator3_aug3 = (((rtb_TmpSignalConversionAtR_kjud == ((uint8_T)
    HVSfty_U8FaultOne)) || (rtb_TmpSignalConversionAtR_kjud == ((uint8_T)
    HVSfty_U8FaultTwo)) || (rtb_TmpSignalConversionAtR_kjud == ((uint8_T)
    HVSfty_U8FaultZero))) && !rtb_DataTypeConversion_lxs2);

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_U16ErrHnd'
   *
   * Block requirements for '<S7>/ATOM_U16ErrHnd':
   *  1. VCU_SW_Requirements_Specification.slreqx:635
   */
  /* Constant: '<S7>/Constant1' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   */
  CtAp_HVSfty_ATOM_U16ErrHnd(HVSfty_True, rtb_LogicalOperator2_pasg,
    rtb_LogicalOperator3_aug3, ((uint16_T)HVSfty_U16TimeCntZero), ((uint16_T)
    HVSfty_U16TimeCntZero), ((uint16_T)HVSfty_Cycle),
    &rtb_DataTypeConversion_jv3m, &CtAp_HVSfty_ARID_DEF.Switch_dneb,
    &CtAp_HVSfty_ARID_DEF.Switch8_owup, &CtAp_HVSfty_ARID_DEF.Switch6_l0hy,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd_cxar);

  /* End of Outputs for SubSystem: '<S7>/ATOM_U16ErrHnd' */

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S15>/Constant'
   */
  rtb_Compare_mbgv = (rtb_TmpSignalConversionAtRTE_R_ == ((uint8_T)
    HVSfty_U8FaultThree));

  /* Logic: '<S4>/LogicalOperator' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:670
   */
  rtb_LogicalOperator_khhm = ((rtb_TmpSignalConversionAtRTE_R_ == ((uint8_T)
    HVSfty_U8FaultOne)) || (rtb_TmpSignalConversionAtRTE_R_ == ((uint8_T)
    HVSfty_U8FaultTwo)) || (rtb_TmpSignalConversionAtRTE_R_ == ((uint8_T)
    HVSfty_U8FaultZero)));

  /* Outputs for Atomic SubSystem: '<S4>/ATOM_U16ErrHnd' */
  /* Constant: '<S4>/Constant3' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant4'
   *  Constant: '<S4>/Constant5'
   */
  CtAp_HVSfty_ATOM_U16ErrHnd(HVSfty_True, rtb_Compare_mbgv,
    rtb_LogicalOperator_khhm, ((uint16_T)HVSfty_U16TimeCntZero), ((uint16_T)
    HVSfty_U16TimeCntZero), ((uint16_T)HVSfty_Cycle),
    &rtb_DataTypeConversion_lxs2, &CtAp_HVSfty_ARID_DEF.Switch_cl4f,
    &CtAp_HVSfty_ARID_DEF.Switch8_gb5s, &CtAp_HVSfty_ARID_DEF.Switch6_ac41,
    &CtAp_HVSfty_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd_bhxx);

  /* End of Outputs for SubSystem: '<S4>/ATOM_U16ErrHnd' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz' incorporates:
   *  Constant: '<S2>/CAL'
   *
   * Block requirements for '<S2>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:623
   */
  (void)Rte_Write_RTE_P_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz
    (HVSfty_HVILPWMFrq_CFG);

  /* End of Outputs for SubSystem: '<Root>/R_HVSfty_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus'
   */
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_InslaFlt_Bus_tec_.ErrMgmt_MonStatVehHVInsla
    = rtb_DataTypeConversion;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_InslaFlt_Bus_tec_.ErrMgmt_MonResVehHVInsla =
    CtAp_HVSfty_ARID_DEF.Switch;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_InslaFlt_Bus_tec_.ErrMgmt_ErrStatVehHVInsla
    = CtAp_HVSfty_ARID_DEF.Switch8;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_InslaFlt_Bus_tec_.ErrMgmt_ErrResVehHVInsla =
    CtAp_HVSfty_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_ErrMgmt_VCUHVILDTC_Bus_tec_ErrMgmt_VCUHVILDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_VCUHVILDTC_Bus_tec_ErrMgmt_VCUHVILDTC_Bus'
   */
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VCUHVILDTC_Bus_te.ErrMgmt_MonStatVCUHVIL =
    rtb_DataTypeConversion_iygp;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VCUHVILDTC_Bus_te.ErrMgmt_MonResVCUHVIL =
    CtAp_HVSfty_ARID_DEF.Switch_myuc;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VCUHVILDTC_Bus_te.ErrMgmt_ErrStatVCUHVIL =
    CtAp_HVSfty_ARID_DEF.Switch8_mle5;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VCUHVILDTC_Bus_te.ErrMgmt_ErrResVCUHVIL =
    CtAp_HVSfty_ARID_DEF.Switch6_ddh5;

  /* Outport: '<Root>/RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg
    (rtb_LogicalOperator_afyg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus'
   */
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VehHVIL_Bus_tec_E.ErrMgmt_MonStatVehHVIL =
    rtb_DataTypeConversion_lajj;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VehHVIL_Bus_tec_E.ErrMgmt_MonResVehHVIL =
    CtAp_HVSfty_ARID_DEF.Switch_bwy2;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VehHVIL_Bus_tec_E.ErrMgmt_ErrStatVehHVIL =
    CtAp_HVSfty_ARID_DEF.Switch8_fo1w;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VehHVIL_Bus_tec_E.ErrMgmt_ErrResVehHVIL =
    CtAp_HVSfty_ARID_DEF.Switch6_mfzw;

  /* Outport: '<Root>/RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus'
   */
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_DrvMotTempOvrLamp.ErrMgmt_MonStatMCUTempOvr
    = rtb_DataTypeConversion_jv3m;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_DrvMotTempOvrLamp.ErrMgmt_MonResMCUTempOvr =
    CtAp_HVSfty_ARID_DEF.Switch_dneb;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_DrvMotTempOvrLamp.ErrMgmt_ErrStatMCUTempOvr
    = CtAp_HVSfty_ARID_DEF.Switch8_owup;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_DrvMotTempOvrLamp.ErrMgmt_ErrResMCUTempOvr =
    CtAp_HVSfty_ARID_DEF.Switch6_l0hy;

  /* Outport: '<Root>/RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus'
   */
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_HvBattTempOvrLamp.ErrMgmt_MonStatBMSTempOvr
    = rtb_DataTypeConversion_lxs2;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_HvBattTempOvrLamp.ErrMgmt_MonResBMSTempOvr =
    CtAp_HVSfty_ARID_DEF.Switch_cl4f;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_HvBattTempOvrLamp.ErrMgmt_ErrStatBMSTempOvr
    = CtAp_HVSfty_ARID_DEF.Switch8_gb5s;
  CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_HvBattTempOvrLamp.ErrMgmt_ErrResBMSTempOvr =
    CtAp_HVSfty_ARID_DEF.Switch6_ac41;
  (void)Rte_Write_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus
    (&CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_InslaFlt_Bus_tec_);
  (void)Rte_Write_RTE_P_ErrMgmt_VCUHVILDTC_Bus_tec_ErrMgmt_VCUHVILDTC_Bus
    (&CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VCUHVILDTC_Bus_te);
  (void)Rte_Write_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus
    (&CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_VehHVIL_Bus_tec_E);
  (void)
    Rte_Write_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus
    (&CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_DrvMotTempOvrLamp);
  (void)
    Rte_Write_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus
    (&CtAp_HVSfty_ARID_DEF.RTE_P_ErrMgmt_HvBattTempOvrLamp);
}

#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_HVSfty_START_SEC_VAR_CONST_8
#include "CtAp_HVSfty_MemMap.h"

void R_HVSfty_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_HVSfty_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_HVSfty_T));
}

#define CtAp_HVSfty_STOP_SEC_VAR_CONST_8
#include "CtAp_HVSfty_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
