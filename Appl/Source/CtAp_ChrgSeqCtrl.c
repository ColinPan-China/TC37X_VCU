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
 *  Filename:           CtAp_ChrgSeqCtrl.c
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_ChrgSeqCtrl
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:03:55 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 11:02:45 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgSeqCtrl.h"
#include "rtwtypes.h"
#include "Rte_Type.h"
#include "CtAp_ChrgSeqCtrl_private.h"
#include "CtAp_ChrgSeqCtrl_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define CtAp_Chr_IN_DCChr_ChargingPhase ((uint8_T)1U)
#define CtAp_Chr_IN_DCChr_TmtTxBEMNoCEM ((uint8_T)3U)
#define CtAp_ChrgS_IN_DCChr_BEMRealyOFF ((uint8_T)2U)
#define CtAp_ChrgS_IN_DCChr_BSDRealyOFF ((uint8_T)2U)
#define CtAp_ChrgS_IN_DCChr_ChargeError ((uint8_T)2U)
#define CtAp_ChrgS_IN_DCChr_StopProcess ((uint8_T)3U)
#define CtAp_ChrgS_IN_DCChr_TxBSTAndBSD ((uint8_T)3U)
#define CtAp_ChrgSe_IN_DCChr_IRCheckOFF ((uint8_T)2U)
#define CtAp_ChrgSe_IN_DCChr_Preheating ((uint8_T)2U)
#define CtAp_ChrgSeqC_IN_DCChr_Charging ((uint8_T)1U)
#define CtAp_ChrgSeqCt_IN_DCChr_DcStart ((uint8_T)1U)
#define CtAp_ChrgSeqCtrl_IN_Charge     ((uint8_T)1U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBCL ((uint8_T)3U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBCP ((uint8_T)1U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBEM ((uint8_T)4U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBHM ((uint8_T)3U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBRM ((uint8_T)4U)
#define CtAp_ChrgSeqCtrl_IN_DCChr_TxBRO ((uint8_T)2U)
#define CtAp_ChrgSeqCtrl_IN_INIT       ((uint8_T)4U)
#define CtAp_ChrgSeq_IN_DCChr_HandShake ((uint8_T)2U)
#define CtAp_ChrgSeq_IN_DCChr_TxBRO0xAA ((uint8_T)3U)
#define CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_Chrg_IN_DCChr_BEMRealyCtrl ((uint8_T)1U)
#define CtAp_Chrg_IN_DCChr_BSDRealyCtrl ((uint8_T)1U)
#define IN_DCChr_ParameterConfiguration ((uint8_T)3U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgSeqCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

ARID_DEF_CtAp_ChrgSeqCtrl_T CtAp_ChrgSeqCtrl_ARID_DEF;

#define CtAp_ChrgSeqCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*  Declarations  */

/* Forward declaration for local functions */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgS_exit_internal_Charge(void);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void enter_atomic_DCChr_ChargeError(void);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgSeqCtrl_Charge(void);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgSeqC_enter_atomic_INIT(void);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/DCChrMgmt_DCChrgnErrResetCdn'
 *    '<S9>/Subsystem2'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T Ct_DCChrMgmt_DCChrgnErrResetCdn(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_)
{
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S11>/Define'
   *  Constant: '<S11>/Define1'
   *  RelationalOperator: '<S11>/Equal'
   *  RelationalOperator: '<S11>/Equal1'
   */
  return (rtu_DCChrMgmt_DCChrgnErrInpSig_ == ((uint8_T)ChrgSeqCtrl_Init)) ||
    (rtu_DCChrMgmt_DCChrgnErrInpSig_ == ((uint8_T)ChrgSeqCtrl_DCChargeComplete));
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/DCChrMgmt_DCChrgnErrSetCdn'
 *    '<S8>/DCChrMgmt_DCChrgnErrSetCdn'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T CtAp_DCChrMgmt_DCChrgnErrSetCdn(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_, uint8_T rtu_DCChrMgmt_DCChrgnErrIn_izsh)
{
  /* Logic: '<S12>/LogicalOperator' incorporates:
   *  Constant: '<S12>/Define'
   *  Constant: '<S12>/Define2'
   *  RelationalOperator: '<S12>/RelationalOperator'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   */
  return (rtu_DCChrMgmt_DCChrgnErrInpSig_ == ((uint8_T)ChrgSeqCtrl_IRCheckReqOFF))
    && (rtu_DCChrMgmt_DCChrgnErrIn_izsh != ((uint8_T)ChrgSeqCtrl_IRCheckStop));
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/NoDTAndEn'
 *    '<S9>/NoDTAndEn'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void CtAp_ChrgSeqCtrl_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_ChrgS_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  boolean_T rtb_Equal2;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Constant: '<S13>/True'
   */
  *rty_MonStat = true;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant4'
   *  Switch: '<S14>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S14>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S14>/Switch1' */

  /* RelationalOperator: '<S14>/Equal2' incorporates:
   *  Constant: '<S14>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S15>/Switch1' */
  if (rtb_Equal2) {
    uint16_T u0;

    /* Sum: '<S15>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S15>/Sum' incorporates:
     *  UnitDelay: '<S15>/UnitDelay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S15>/MinMax' */
    if (u0 <= CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S15>/Sum' */
      CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S15>/MinMax' */
  } else {
    /* Sum: '<S15>/Sum' incorporates:
     *  Constant: '<S14>/Constant37'
     *  UnitDelay: '<S15>/UnitDelay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Switch: '<S14>/Switch8' incorporates:
   *  Constant: '<S14>/Constant6'
   *  Constant: '<S14>/DEBOUNCING'
   *  RelationalOperator: '<S14>/Equal6'
   *  RelationalOperator: '<S15>/B_MiHold'
   *  Switch: '<S14>/Switch2'
   *  Switch: '<S14>/Switch3'
   *  UnitDelay: '<S15>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
  {
    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S14>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S14>/Switch3' incorporates:
     *  Constant: '<S14>/DEBOUNCING_F'
     *  Switch: '<S14>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S14>/PASSED'
     *  Switch: '<S14>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S14>/Switch8' */

  /* Switch: '<S14>/Switch6' incorporates:
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant31'
   *  Constant: '<S14>/Constant32'
   *  Delay: '<S14>/Delay1'
   *  RelationalOperator: '<S14>/Equal3'
   *  RelationalOperator: '<S14>/Equal4'
   *  Switch: '<S14>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S14>/Switch7' incorporates:
     *  Constant: '<S14>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S14>/Switch6' */

  /* Update for Delay: '<S14>/Delay1' */
  CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S16>/ATOM_TimeCnt'
 *    '<S28>/ATOM_TimeCnt'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T CtAp_ChrgSeqCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S20>/Add1' incorporates:
   *  DataTypeConversion: '<S20>/Data Type Conversion'
   *  DataTypeConversion: '<S20>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S20>/Switch' */
  if (rtu_In) {
    /* Sum: '<S20>/Add' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     *  UnitDelay: '<S20>/Delay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S20>/Min' */
    if (rtb_Add1 <= CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S20>/Add' */
      CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S20>/Min' */
  } else {
    /* Sum: '<S20>/Add' incorporates:
     *  Constant: '<S20>/Constant'
     *  UnitDelay: '<S20>/Delay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S20>/Switch' */

  /* RelationalOperator: '<S20>/Relational Operator' incorporates:
   *  UnitDelay: '<S20>/Delay'
   */
  return CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/DCChrMgmt_DCChrgnErrEnaCdn'
 *    '<S10>/DCChrMgmt_DCChrgnErrEnaCdn'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T CtAp_DCChrMgmt_DCChrgnErrEnaCdn(boolean_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_, const dt_ComM_EPTCANBusOffInfo
  *rtu_DCChrMgmt_DCChrgnErrIn_o435, boolean_T rtu_DCChrMgmt_DCChrgnErrIn_a5ib,
  ARID_DEF_DCChrMgmt_DCChr_o1k5_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_ij3o;
  boolean_T rty_DCChrMgmt_DCChrgnErrEnaCd_0;

  /* Outputs for Atomic SubSystem: '<S16>/ATOM_TimeCnt' */

  /* Constant: '<S16>/Define' incorporates:
   *  Constant: '<S16>/CAL'
   *  Constant: '<S16>/Define1'
   */
  rtb_RelationalOperator_ij3o = CtAp_ChrgSeqCtrl_ATOM_TimeCnt(ChrgSeqCtrl_Active,
    ((uint16_T)ChrgSeqCtrl_dt50ms), DCChrMgmt_ChrgSeqDTCEnaTim_CFG,
    &CtAp_ChrgSeqCtrl__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S16>/ATOM_TimeCnt' */

  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Logic: '<S16>/LogicalOperator1'
   *  Logic: '<S16>/LogicalOperator2'
   */
  rty_DCChrMgmt_DCChrgnErrEnaCd_0 = (!rtu_DCChrMgmt_DCChrgnErrInpSig_ &&
    !rtu_DCChrMgmt_DCChrgnErrIn_o435->ComM_ErrResEPTCANBusOffInfo &&
    rtu_DCChrMgmt_DCChrgnErrIn_a5ib && rtb_RelationalOperator_ij3o);
  return rty_DCChrMgmt_DCChrgnErrEnaCd_0;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/DCChrMgmt_DCChrgnErrResetCdn'
 *    '<S10>/DCChrMgmt_DCChrgnErrResetCdn'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T DCChrMgmt_DCChrgnErrResetC_m3ak(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_)
{
  /* RelationalOperator: '<S17>/Equal' incorporates:
   *  Constant: '<S17>/Define'
   */
  return rtu_DCChrMgmt_DCChrgnErrInpSig_ == ((uint8_T)ChrgSeqCtrl_OffPlug);
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/NoDT'
 *    '<S10>/NoDT'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void CtAp_ChrgSeqCtrl_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_ChrgSeqCtr_T
  *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S19>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  if (rtu_EnableCondition) {
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

    /* RelationalOperator: '<S21>/Equal2' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S22>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S22>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S22>/Sum' incorporates:
       *  UnitDelay: '<S22>/UnitDelay'
       */
      CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S22>/MinMax' */
      if (u0 <= CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S22>/Sum' */
        CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S22>/MinMax' */
    } else {
      /* Sum: '<S22>/Sum' incorporates:
       *  Constant: '<S21>/Constant37'
       *  UnitDelay: '<S22>/UnitDelay'
       */
      CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Switch: '<S21>/Switch8' incorporates:
     *  Constant: '<S21>/Constant6'
     *  Constant: '<S21>/DEBOUNCING'
     *  RelationalOperator: '<S21>/Equal6'
     *  RelationalOperator: '<S22>/B_MiHold'
     *  Switch: '<S21>/Switch2'
     *  Switch: '<S21>/Switch3'
     *  UnitDelay: '<S22>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
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
    } else {
      /* Switch: '<S21>/Switch2' incorporates:
       *  Constant: '<S21>/PASSED'
       *  Switch: '<S21>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
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
      *rty_ErrorRes = CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S21>/Switch6' */

    /* Update for Delay: '<S21>/Delay1' */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S19>/ErrorHandleSysU16' */
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/Subsystem1'
 *    '<S10>/DCChrMgmt_DCChrgnErrSetCdn'
 */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

boolean_T CtAp_ChrgSeqCtrl_Subsystem1(uint8_T rtu_DCChrMgmt_DCChrgnErrInpSig_,
  uint8_T rtu_DCChrMgmt_DCChrgnErrIn_h5dl)
{
  /* Logic: '<S24>/LogicalOperator' incorporates:
   *  Constant: '<S24>/Define'
   *  Constant: '<S24>/Define2'
   *  RelationalOperator: '<S24>/RelationalOperator'
   *  RelationalOperator: '<S24>/RelationalOperator1'
   */
  return (rtu_DCChrMgmt_DCChrgnErrInpSig_ == ((uint8_T)ChrgSeqCtrl_IRCheckReqOn))
    && (rtu_DCChrMgmt_DCChrgnErrIn_h5dl != ((uint8_T)ChrgSeqCtrl_IRCheckStart));
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* System initialize for atomic system: '<S5>/ATOM_OnDelay' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void CtAp_ChrgSeqC_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S35>/Sum' incorporates:
   *  UnitDelay: '<S35>/UnitDelay'
   */
  CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Output and update for atomic system: '<S5>/ATOM_OnDelay' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void CtAp_ChrgSeqCtrl_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, boolean_T *rty_y,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg)
{
  /* Switch: '<S35>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S35>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S35>/Sum' incorporates:
     *  UnitDelay: '<S35>/UnitDelay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S35>/MinMax' */
    if (u0 <= CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S35>/Sum' */
      CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S35>/MinMax' */
  } else {
    /* Sum: '<S35>/Sum' incorporates:
     *  UnitDelay: '<S35>/UnitDelay'
     */
    CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S35>/Switch1' */

  /* RelationalOperator: '<S35>/B_MiHold' incorporates:
   *  UnitDelay: '<S35>/UnitDelay'
   */
  *rty_y = (CtAp_ChrgSeqCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly);
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Function for Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgS_exit_internal_Charge(void)
{
  CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase =
    CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
  CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake = CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
  CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration =
    CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
  CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge = CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Function for Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void enter_atomic_DCChr_ChargeError(void)
{
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
    ChrgSeqCtrl_DCChargeError);
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Function for Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgSeqCtrl_Charge(void)
{
  uint8_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_2;
  boolean_T tmpRead_1;
  boolean_T tmpRead_3;

  /* Inport: '<Root>/RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum' */
  (void)Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
    (&tmpRead_2);
  if ((tmpRead_2 == ((uint8_T)ChrgSeqCtrl_ReconnectAllow)) || (tmpRead_2 ==
       ((uint8_T)ChrgSeqCtrl_ReconnectDisAllow))) {
    CtAp_ChrgS_exit_internal_Charge();
    CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
      CtAp_ChrgS_IN_DCChr_ChargeError;
    enter_atomic_DCChr_ChargeError();

    /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg' */
    (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(&tmpRead_1);
    if ((tmpRead_2 == ((uint8_T)ChrgSeqCtrl_ReconnectAllow)) && !tmpRead_1) {
      CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
        CtAp_Chr_IN_DCChr_TmtTxBEMNoCEM;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Active;
    } else {
      CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
        CtAp_ChrgSeqCtrl_IN_DCChr_TxBEM;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Active;
    }
  } else if ((CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM ==
              ((uint8_T)ChrgSeqCtrl_CharingFault)) ||
             (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM ==
              ((uint8_T)ChrgSeqCtrl_ChargingComplete))) {
    CtAp_ChrgS_exit_internal_Charge();
    CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
      CtAp_ChrgS_IN_DCChr_StopProcess;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
      ChrgSeqCtrl_DCChargeComplete);
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg = ChrgSeqCtrl_Inactive;
    CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess =
      CtAp_ChrgS_IN_DCChr_TxBSTAndBSD;
    CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg = ChrgSeqCtrl_Active;
  } else {
    /* Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' */
    (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
      (&tmpRead);
    switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge) {
     case CtAp_Chr_IN_DCChr_ChargingPhase:
      /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg' */
      (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(&tmpRead_1);
      switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase) {
       case CtAp_ChrgSeqC_IN_DCChr_Charging:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_DCDuringCharging);
        if (tmpRead_1) {
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Active;
        }
        break;

       case CtAp_ChrgSe_IN_DCChr_Preheating:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_DCDuringPreheating);
        if (tmpRead == ((uint8_T)ChrgSeqCtrl_PreheatComplete)) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase =
            CtAp_ChrgSeqC_IN_DCChr_Charging;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
            ChrgSeqCtrl_DCDuringCharging);
        } else if (tmpRead_1) {
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Active;
        } else {
          /* no actions */
        }
        break;

       default:
        /* case IN_DCChr_TxBCL: */
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Active;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Active;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_ChargingPhase);
        if (tmpRead == ((uint8_T)ChrgSeqCtrl_DuringPreheating)) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase =
            CtAp_ChrgSe_IN_DCChr_Preheating;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
            ChrgSeqCtrl_DCDuringPreheating);
        } else if ((tmpRead == ((uint8_T)ChrgSeqCtrl_Nopreheat)) || (tmpRead ==
                    ((uint8_T)ChrgSeqCtrl_PreheatComplete))) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase =
            CtAp_ChrgSeqC_IN_DCChr_Charging;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
            ChrgSeqCtrl_DCDuringCharging);
        } else if (tmpRead_1) {
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Active;
        } else {
          /* no actions */
        }
        break;
      }
      break;

     case CtAp_ChrgSeq_IN_DCChr_HandShake:
      /* Inport: '<Root>/RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum' */
      (void)Rte_Read_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum
        (&tmpRead_0);

      /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg' */
      (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(&tmpRead_1);
      switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake) {
       case CtAp_ChrgSeqCt_IN_DCChr_DcStart:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_handshake);
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg = ChrgSeqCtrl_Active;
        if (tmpRead_1 && (tmpRead_0 == ((uint8_T)ChrgSeqCtrl_Result0x00)) &&
            ((tmpRead == ((uint8_T)ChrgSeqCtrl_PreheatPrepared)) || (tmpRead ==
              ((uint8_T)ChrgSeqCtrl_Nopreheat)))) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBRM;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg =
            ChrgSeqCtrl_Inactive;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
            ChrgSeqCtrl_IRCheckReqOn);
        } else {
          /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg' */
          (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(&tmpRead_3);
          if (tmpRead_3 && ((tmpRead == ((uint8_T)ChrgSeqCtrl_PreheatPrepared)) ||
                            (tmpRead == ((uint8_T)ChrgSeqCtrl_Nopreheat)))) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
              CtAp_ChrgSe_IN_DCChr_IRCheckOFF;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
              ChrgSeqCtrl_IRCheckReqOFF);
          }
        }
        break;

       case CtAp_ChrgSe_IN_DCChr_IRCheckOFF:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
          ChrgSeqCtrl_IRCheckReqOFF);
        if (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM ==
            ((uint8_T)ChrgSeqCtrl_IRCheckStop)) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBHM;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Active;
        }
        break;

       case CtAp_ChrgSeqCtrl_IN_DCChr_TxBHM:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Active;
        if (tmpRead_1 && (tmpRead_0 == ((uint8_T)ChrgSeqCtrl_Result0x00))) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBRM;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg =
            ChrgSeqCtrl_Inactive;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
            ChrgSeqCtrl_IRCheckReqOn);
        }
        break;

       default:
        /* case IN_DCChr_TxBRM: */
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Active;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
          ChrgSeqCtrl_IRCheckReqOn);
        if (tmpRead_1 && (tmpRead_0 == ((uint8_T)ChrgSeqCtrl_Result0xAA))) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
            CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
          CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge = IN_DCChr_ParameterConfiguration;
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBCP;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg =
            ChrgSeqCtrl_Inactive;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
            ChrgSeqCtrl_ParConfig);
        }
        break;
      }
      break;

     default:
      /* case IN_DCChr_ParameterConfiguration: */
      switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration) {
       case CtAp_ChrgSeqCtrl_IN_DCChr_TxBCP:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Active;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_ParConfig);

        /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg' */
        (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(&tmpRead_1);

        /* Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg' */
        (void)
          Rte_Read_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg
          (&tmpRead_3);
        if (tmpRead_1 && tmpRead_3) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBRO;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg =
            ChrgSeqCtrl_Inactive;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_BROPrepFinshd_Enum = ((uint8_T)
            ChrgSeqCtrl_Result0x00);
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
            ChrgSeqCtrl_DCFCCls;
        }
        break;

       case CtAp_ChrgSeqCtrl_IN_DCChr_TxBRO:
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Active;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_BROPrepFinshd_Enum = ((uint8_T)
          ChrgSeqCtrl_Result0x00);
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg = ChrgSeqCtrl_DCFCCls;

        /* Inport: '<Root>/RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum' */
        (void)
          Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
          (&tmpRead_0);
        if (tmpRead_0 == ((uint8_T)ChrgSeqCtrl_DCFCClsCmpl)) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration =
            CtAp_ChrgSeq_IN_DCChr_TxBRO0xAA;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_BROPrepFinshd_Enum = ((uint8_T)
            ChrgSeqCtrl_Result0xAA);
        }
        break;

       default:
        /* case IN_DCChr_TxBRO0xAA: */
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_BROPrepFinshd_Enum = ((uint8_T)
          ChrgSeqCtrl_Result0xAA);

        /* Inport: '<Root>/RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum' */
        (void)Rte_Read_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum
          (&tmpRead_0);

        /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg' */
        (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(&tmpRead_1);
        if (tmpRead_1 && (tmpRead_0 == ((uint8_T)ChrgSeqCtrl_Result0xAA))) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ParameterConfiguration =
            CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
          CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge = CtAp_Chr_IN_DCChr_ChargingPhase;
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargingPhase =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBCL;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Active;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg =
            ChrgSeqCtrl_Inactive;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
            ChrgSeqCtrl_ChargingPhase);
        }
        break;
      }
      break;
    }
  }
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Function for Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

static void CtAp_ChrgSeqC_enter_atomic_INIT(void)
{
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
    ChrgSeqCtrl_Init);
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg = ChrgSeqCtrl_DCFCOpn;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
    ChrgSeqCtrl_IRCheckReqOn);
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Inactive;
  CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg = ChrgSeqCtrl_Inactive;
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void R_ChrgSeqCtrl_Cyclic_50ms(void)
{
  /* local block i/o variables */
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch8;
  uint8_T rtb_Switch1_gawc;
  uint8_T rtb_Switch8_bvua;
  boolean_T rtb_TmpSignalConversionAtR_ngiu;
  boolean_T rtb_TmpSignalConversionAtR_nqxl;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_LogicalOperator_mxzq;
  boolean_T rtb_LogicalOperator_bb5t;
  boolean_T rtb_LogicalOperator_ednh;
  boolean_T rtb_Switch6;
  boolean_T rtb_DataTypeConversion_biqs;
  boolean_T rtb_LogicalOperator_owxt;
  boolean_T rtb_DataTypeConversion_f2nh;
  boolean_T rtb_Switch6_frmt;
  boolean_T rtb_LogicalOperator_ccbm;
  boolean_T rtb_Equal;
  boolean_T rtb_DataTypeConversion_nzlc;
  boolean_T rtb_LogicalOperator_aiff;
  real32_T tmpRead_0;
  uint8_T tmpRead_3;
  uint8_T tmpRead_4;
  boolean_T tmpRead;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum
    (&CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_ngiu);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_nqxl);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgSeqCtrl_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ChrgStopRlyCtrlAllow' */
  /* Logic: '<S5>/LogicalOperator' incorporates:
   *  Constant: '<S5>/Define'
   *  Constant: '<S5>/Define1'
   *  RelationalOperator: '<S5>/RelationalOperator'
   *  RelationalOperator: '<S5>/RelationalOperator1'
   */
  rtb_LogicalOperator =
    ((CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM == ((uint8_T)
       ChrgSeqCtrl_CharingFault)) ||
     (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM == ((uint8_T)
       ChrgSeqCtrl_ChargingComplete)));

  /* Outputs for Atomic SubSystem: '<S5>/ATOM_OnDelay' */
  /* Constant: '<S5>/CAL' incorporates:
   *  Constant: '<S5>/Define2'
   *  Constant: '<S5>/Define3'
   */
  CtAp_ChrgSeqCtrl_ATOM_OnDelay(rtb_LogicalOperator, DCChrMgmt_DCFCOpnTimLmt_CFG,
    ((uint16_T)ChrgSeqCtrl_dt50ms), ((uint16_T)ChrgSeqCtrl_U16Zero),
    &CtAp_ChrgSeqCtrl_ARID_DEF.B_MiHold,
    &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S5>/ATOM_OnDelay' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ChrgStopRlyCtrlAllow' */

  /* Chart: '<S2>/DCChrMgmt_DCCharging_Flow' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg'
   *  Inport: '<Root>/RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A'
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg'
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg'
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg'
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum'
   *  Inport: '<Root>/RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum'
   */
  if ((uint32_T)CtAp_ChrgSeqCtrl_ARID_DEF.is_active_c1_CtAp_ChrgSeqCtrl == 0U) {
    CtAp_ChrgSeqCtrl_ARID_DEF.is_active_c1_CtAp_ChrgSeqCtrl = 1U;
    CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl = CtAp_ChrgSeqCtrl_IN_INIT;
    CtAp_ChrgSeqC_enter_atomic_INIT();
  } else {
    (void)
      Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A
      (&tmpRead_0);
    (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(&tmpRead_1);
    (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(&tmpRead_2);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
      (&tmpRead_3);
    (void)
      Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
      (&tmpRead_4);
    switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl) {
     case CtAp_ChrgSeqCtrl_IN_Charge:
      CtAp_ChrgSeqCtrl_Charge();
      break;

     case CtAp_ChrgS_IN_DCChr_ChargeError:
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
        ChrgSeqCtrl_DCChargeError);
      if (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM == ((uint8_T)
           ChrgSeqCtrl_OffPlug)) {
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
          CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
          CtAp_ChrgSeqCtrl_IN_INIT;
        CtAp_ChrgSeqC_enter_atomic_INIT();
      } else if ((tmpRead_3 != ((uint8_T)ChrgSeqCtrl_ReconnectDisAllow)) &&
                 tmpRead_2) {
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
          CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
          CtAp_ChrgSeqCtrl_IN_Charge;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge = CtAp_ChrgSeq_IN_DCChr_HandShake;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
          CtAp_ChrgSeqCt_IN_DCChr_DcStart;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_handshake);
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg = ChrgSeqCtrl_Active;
      } else {
        switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError) {
         case CtAp_Chrg_IN_DCChr_BEMRealyCtrl:
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
            ChrgSeqCtrl_DCFCOpn;
          if ((tmpRead_4 == ((uint8_T)ChrgSeqCtrl_DCFCOpenCmpl)) || (tmpRead_4 ==
               ((uint8_T)ChrgSeqCtrl_DCFCOpenFailed))) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
              CtAp_ChrgS_IN_DCChr_BEMRealyOFF;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg =
              ChrgSeqCtrl_Inactive;
          }
          break;

         case CtAp_ChrgS_IN_DCChr_BEMRealyOFF:
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg =
            ChrgSeqCtrl_Inactive;
          break;

         case CtAp_Chr_IN_DCChr_TmtTxBEMNoCEM:
          if (tmpRead_0 < DCChrMgmt_DCFCOpnIDCLmt_CFG) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
              CtAp_Chrg_IN_DCChr_BEMRealyCtrl;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
              ChrgSeqCtrl_DCFCOpn;
          }
          break;

         default:
          /* case IN_DCChr_TxBEM: */
          if ((tmpRead_0 < DCChrMgmt_DCFCOpnIDCLmt_CFG) ||
              CtAp_ChrgSeqCtrl_ARID_DEF.B_MiHold) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
              CtAp_Chrg_IN_DCChr_BEMRealyCtrl;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
              ChrgSeqCtrl_DCFCOpn;
          }
          break;
        }
      }
      break;

     case CtAp_ChrgS_IN_DCChr_StopProcess:
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
        ChrgSeqCtrl_DCChargeComplete);
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
      if ((CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM ==
           ((uint8_T)ChrgSeqCtrl_OffPlug)) || tmpRead_2 || tmpRead_1) {
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess =
          CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
          CtAp_ChrgSeqCtrl_IN_INIT;
        CtAp_ChrgSeqC_enter_atomic_INIT();
      } else if (tmpRead_3 == ((uint8_T)ChrgSeqCtrl_ReconnectDisAllow)) {
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess =
          CtAp_ChrgSeq_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
          CtAp_ChrgS_IN_DCChr_ChargeError;
        enter_atomic_DCChr_ChargeError();
        (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(&tmpRead);
        if ((tmpRead_3 == ((uint8_T)ChrgSeqCtrl_ReconnectAllow)) && !tmpRead) {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
            CtAp_Chr_IN_DCChr_TmtTxBEMNoCEM;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Active;
        } else {
          CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_ChargeError =
            CtAp_ChrgSeqCtrl_IN_DCChr_TxBEM;
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Active;
        }
      } else {
        switch (CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess) {
         case CtAp_Chrg_IN_DCChr_BSDRealyCtrl:
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
            ChrgSeqCtrl_DCFCOpn;
          if ((tmpRead_4 == ((uint8_T)ChrgSeqCtrl_DCFCOpenCmpl)) || (tmpRead_4 ==
               ((uint8_T)ChrgSeqCtrl_DCFCOpenFailed))) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess =
              CtAp_ChrgS_IN_DCChr_BSDRealyOFF;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg =
              ChrgSeqCtrl_Inactive;
          }
          break;

         case CtAp_ChrgS_IN_DCChr_BSDRealyOFF:
          CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg =
            ChrgSeqCtrl_Inactive;
          break;

         default:
          /* case IN_DCChr_TxBSTAndBSD: */
          if (((tmpRead_0 < DCChrMgmt_DCFCOpnIDCLmt_CFG) ||
               CtAp_ChrgSeqCtrl_ARID_DEF.B_MiHold) &&
              CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg) {
            CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_StopProcess =
              CtAp_Chrg_IN_DCChr_BSDRealyCtrl;
            CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg =
              ChrgSeqCtrl_DCFCOpn;
          } else {
            (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(&tmpRead);
            if (tmpRead) {
              CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg =
                ChrgSeqCtrl_Inactive;
              CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg =
                ChrgSeqCtrl_Active;
            }
          }
          break;
        }
      }
      break;

     default:
      /* case IN_INIT: */
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
        ChrgSeqCtrl_Init);
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg = ChrgSeqCtrl_DCFCOpn;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum = ((uint8_T)
        ChrgSeqCtrl_IRCheckReqOn);
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg = ChrgSeqCtrl_Inactive;
      CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg = ChrgSeqCtrl_Inactive;
      (void)Rte_Read_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg
        (&tmpRead);
      if (tmpRead && (tmpRead_1 || tmpRead_2)) {
        CtAp_ChrgSeqCtrl_ARID_DEF.is_c1_CtAp_ChrgSeqCtrl =
          CtAp_ChrgSeqCtrl_IN_Charge;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_Charge = CtAp_ChrgSeq_IN_DCChr_HandShake;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg = ChrgSeqCtrl_Inactive;
        CtAp_ChrgSeqCtrl_ARID_DEF.is_DCChr_HandShake =
          CtAp_ChrgSeqCt_IN_DCChr_DcStart;
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum = ((uint8_T)
          ChrgSeqCtrl_handshake);
        CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg = ChrgSeqCtrl_Active;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/DCChrMgmt_DCCharging_Flow' */

  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ChrgSeqCtrlErrorhandle' */
  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasDiErr' */
  /* Outputs for Atomic SubSystem: '<S7>/DCChrMgmt_DCChrgnErrResetCdn'
   *
   * Block requirements for '<S7>/DCChrMgmt_DCChrgnErrResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3126
   */
  rtb_LogicalOperator_aiff = Ct_DCChrMgmt_DCChrgnErrResetCdn
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum);

  /* End of Outputs for SubSystem: '<S7>/DCChrMgmt_DCChrgnErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S7>/DCChrMgmt_DCChrgnErrSetCdn'
   *
   * Block requirements for '<S7>/DCChrMgmt_DCChrgnErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3124
   */
  rtb_LogicalOperator_ccbm = CtAp_DCChrMgmt_DCChrgnErrSetCdn
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum,
     CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM);

  /* End of Outputs for SubSystem: '<S7>/DCChrMgmt_DCChrgnErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S7>/NoDTAndEn' */
  /* Constant: '<S7>/CAL' incorporates:
   *  Constant: '<S7>/Define1'
   *
   * Block requirements for '<S7>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3133
   */
  CtAp_ChrgSeqCtrl_NoDTAndEn(rtb_LogicalOperator_ccbm, rtb_LogicalOperator_aiff,
    DCChrMgmt_IRCheckOffTimLmt_CFG, ((uint16_T)ChrgSeqCtrl_dt50ms),
    &rtb_DataTypeConversion_f2nh, &rtb_Switch1_gawc, &rtb_Switch8_bvua,
    &rtb_Switch6_frmt, &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_NoDTAndEn_kkiq);

  /* End of Outputs for SubSystem: '<S7>/NoDTAndEn' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasDiErr' */

  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasDiErrDTC' */
  /* Outputs for Atomic SubSystem: '<S8>/DCChrMgmt_DCChrgnErrEnaCdn'
   *
   * Block requirements for '<S8>/DCChrMgmt_DCChrgnErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3094
   */
  rtb_LogicalOperator_owxt = CtAp_DCChrMgmt_DCChrgnErrEnaCdn
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtRTE_R_,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_DCChrMgmt_DCChrgn_cl54);

  /* End of Outputs for SubSystem: '<S8>/DCChrMgmt_DCChrgnErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/DCChrMgmt_DCChrgnErrResetCdn'
   *
   * Block requirements for '<S8>/DCChrMgmt_DCChrgnErrResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3092
   */
  rtb_DataTypeConversion_nzlc = DCChrMgmt_DCChrgnErrResetC_m3ak
    (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM);

  /* End of Outputs for SubSystem: '<S8>/DCChrMgmt_DCChrgnErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/DCChrMgmt_DCChrgnErrSetCdn'
   *
   * Block requirements for '<S8>/DCChrMgmt_DCChrgnErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3090
   */
  rtb_LogicalOperator_aiff = CtAp_DCChrMgmt_DCChrgnErrSetCdn
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum,
     CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM);

  /* End of Outputs for SubSystem: '<S8>/DCChrMgmt_DCChrgnErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/NoDT' */
  /* Constant: '<S8>/CAL' incorporates:
   *  Constant: '<S8>/Define1'
   *
   * Block requirements for '<S8>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3099
   */
  CtAp_ChrgSeqCtrl_NoDT(rtb_LogicalOperator_owxt, rtb_LogicalOperator_aiff,
                        rtb_DataTypeConversion_nzlc,
                        DCChrMgmt_IRCheckOffTimLmt_CFG, ((uint16_T)
    ChrgSeqCtrl_dt50ms), &rtb_DataTypeConversion_biqs,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch1_n441,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch8_nyp5,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch6_mabn,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_NoDT_mbvz);

  /* End of Outputs for SubSystem: '<S8>/NoDT' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasDiErrDTC' */

  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasEnaErr' */
  /* Outputs for Atomic SubSystem: '<S9>/Subsystem1'
   *
   * Block requirements for '<S9>/Subsystem1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3141
   */
  rtb_LogicalOperator_ednh = CtAp_ChrgSeqCtrl_Subsystem1
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum,
     CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM);

  /* End of Outputs for SubSystem: '<S9>/Subsystem1' */

  /* Outputs for Atomic SubSystem: '<S9>/Subsystem2'
   *
   * Block requirements for '<S9>/Subsystem2':
   *  1. VCU_SW_Requirements_Specification.slreqx:3143
   */
  rtb_Equal = Ct_DCChrMgmt_DCChrgnErrResetCdn
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum);

  /* End of Outputs for SubSystem: '<S9>/Subsystem2' */

  /* Outputs for Atomic SubSystem: '<S9>/NoDTAndEn' */
  /* Constant: '<S9>/CAL' incorporates:
   *  Constant: '<S9>/Define1'
   *
   * Block requirements for '<S9>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3150
   */
  CtAp_ChrgSeqCtrl_NoDTAndEn(rtb_LogicalOperator_ednh, rtb_Equal,
    DCChrMgmt_IRCheckOnTimLmt_CFG, ((uint16_T)ChrgSeqCtrl_dt50ms),
    &rtb_DataTypeConversion_nzlc, &rtb_Switch1, &rtb_Switch8, &rtb_Switch6,
    &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_NoDTAndEn);

  /* End of Outputs for SubSystem: '<S9>/NoDTAndEn' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasEnaErr' */

  /* Outputs for Atomic SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasEnaErrDTC' */
  /* Outputs for Atomic SubSystem: '<S10>/DCChrMgmt_DCChrgnErrEnaCdn'
   *
   * Block requirements for '<S10>/DCChrMgmt_DCChrgnErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3111
   */
  rtb_LogicalOperator_bb5t = CtAp_DCChrMgmt_DCChrgnErrEnaCdn
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtRTE_R_,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_DCChrMgmt_DCChrgnErrE);

  /* End of Outputs for SubSystem: '<S10>/DCChrMgmt_DCChrgnErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/DCChrMgmt_DCChrgnErrResetCdn'
   *
   * Block requirements for '<S10>/DCChrMgmt_DCChrgnErrResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3109
   */
  rtb_Equal = DCChrMgmt_DCChrgnErrResetC_m3ak
    (CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ChrM);

  /* End of Outputs for SubSystem: '<S10>/DCChrMgmt_DCChrgnErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/DCChrMgmt_DCChrgnErrSetCdn'
   *
   * Block requirements for '<S10>/DCChrMgmt_DCChrgnErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:3107
   */
  rtb_LogicalOperator_mxzq = CtAp_ChrgSeqCtrl_Subsystem1
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum,
     CtAp_ChrgSeqCtrl_ARID_DEF.TmpSignalConversionAtRTE_R_ComM);

  /* End of Outputs for SubSystem: '<S10>/DCChrMgmt_DCChrgnErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/NoDT' */
  /* Constant: '<S10>/CAL' incorporates:
   *  Constant: '<S10>/Define1'
   *
   * Block requirements for '<S10>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3116
   */
  CtAp_ChrgSeqCtrl_NoDT(rtb_LogicalOperator_bb5t, rtb_LogicalOperator_mxzq,
                        rtb_Equal, DCChrMgmt_IRCheckOnTimLmt_CFG, ((uint16_T)
    ChrgSeqCtrl_dt50ms), &rtb_DataTypeConversion,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch1,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch8,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.Switch6,
                        &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S10>/NoDT' */
  /* End of Outputs for SubSystem: '<S4>/DCChrMgmt_ErrResIRMeasEnaErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ChrgSeqCtrlErrorhandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgSeqCtrl_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_BROPrepFinshd_Enum);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum' */
  (void)Rte_Write_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgnSts_Enum);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DcChrgStrt_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_DCFCClsReq_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus'
   */
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErr_Bus.DCChrMgmt_MonStatIRMeasDiErr
    = rtb_DataTypeConversion_f2nh;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErr_Bus.DCChrMgmt_MonResIRMeasDiErr
    = rtb_Switch1_gawc;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErr_Bus.DCChrMgmt_ErrStatIRMeasDiErr
    = rtb_Switch8_bvua;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErr_Bus.DCChrMgmt_ErrResIRMeasDiErr
    = rtb_Switch6_frmt;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus'
   */
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErrDTC_.DCChrMgmt_MonStatIRMeasDiErrDTC
    = rtb_DataTypeConversion_biqs;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErrDTC_.DCChrMgmt_MonResIRMeasDiErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch1_n441;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErrDTC_.DCChrMgmt_ErrStatIRMeasDiErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch8_nyp5;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErrDTC_.DCChrMgmt_ErrResIRMeasDiErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch6_mabn;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus'
   */
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErr_Bu.DCChrMgmt_MonStatIRMeasEnaErr
    = rtb_DataTypeConversion_nzlc;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErr_Bu.DCChrMgmt_MonResIRMeasEnaErr
    = rtb_Switch1;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErr_Bu.DCChrMgmt_ErrStatIRMeasEnaErr
    = rtb_Switch8;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErr_Bu.DCChrMgmt_ErrResIRMeasEnaErr
    = rtb_Switch6;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus'
   */
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErrDTC.DCChrMgmt_MonStatIRMeasEnaErrDTC
    = rtb_DataTypeConversion;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErrDTC.DCChrMgmt_MonResIRMeasEnaErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch1;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErrDTC.DCChrMgmt_ErrStatIRMeasEnaErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch8;
  CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErrDTC.DCChrMgmt_ErrResIRMeasEnaErrDTC
    = CtAp_ChrgSeqCtrl_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_IRMeasSwtCtrl_Enum);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCLSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCPSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBCSSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBEMSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBHMSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBRMSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBROSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSDSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSMSts_Flg);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg' */
  (void)Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
    (CtAp_ChrgSeqCtrl_ARID_DEF.DCChrMgmt_TxBSTSts_Flg);
  (void)Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(
    &CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErr_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus
    (&CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasDiErrDTC_);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus
    (&CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErr_Bu);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus
    (&CtAp_ChrgSeqCtrl_ARID_DEF.RTE_P_DCChrMgmt_IRMeasEnaErrDTC);
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgSeqCtrl_START_SEC_VAR_CONST_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

void R_ChrgSeqCtrl_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgSeqCtrl_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgSeqCtrl_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgSeqCtrl_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/DCChrMgmt_ChrgStopRlyCtrlAllow' */
  /* SystemInitialize for Atomic SubSystem: '<S5>/ATOM_OnDelay' */
  CtAp_ChrgSeqC_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgSeqCtrl_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S5>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S2>/DCChrMgmt_ChrgStopRlyCtrlAllow' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgSeqCtrl_Cyclic_50ms_sys' */
}

#define CtAp_ChrgSeqCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
