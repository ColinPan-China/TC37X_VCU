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
 *  Filename:           CtAp_OBCStsMgmt.c
 *  File Creation Date: 04-Aug-2025
 *  Model Name:         CtAp_OBCStsMgmt
 *  Model Version:      1.007
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug  4 09:30:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 10:46:19 2025
 *
 *
 *******************************************************************************/
#include "CtAp_OBCStsMgmt.h"
#include "rtwtypes.h"
#include "CtAp_OBCStsMgmt_private.h"
#include "Rte_Type.h"
#include "CtAp_OBCStsMgmt_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/OBCMgmt_OBSSts_Flow' */
#define CtA_IN_OBC_PreheatingDisableOBC ((uint8_T)10U)
#define CtAp_OBCS_IN_OBC_OBCDischarging ((uint8_T)5U)
#define CtAp_OBCS_IN_OBC_OBCKeepWarmReq ((uint8_T)7U)
#define CtAp_OBCS_IN_OBC_OBCKeepWarming ((uint8_T)8U)
#define CtAp_OBCSt_IN_OBC_OBCACCharging ((uint8_T)3U)
#define CtAp_OBCStsM_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_OBCStsMg_IN_OBC_OBCDisabed ((uint8_T)1U)
#define CtAp_OBCStsMg_IN_OBC_OBCEndFlow ((uint8_T)2U)
#define CtAp_OBCStsMgm_IN_OBC_OBCEnable ((uint8_T)6U)
#define CtAp_OBCStsMgm_IN_OBC_StartFlow ((uint8_T)3U)
#define CtAp_OBCStsMgmt_IN_Init        ((uint8_T)1U)
#define CtAp_OBCSts_IN_OBC_OBCDisabling ((uint8_T)2U)
#define CtAp_OBC_IN_OBC_ChargePreparing ((uint8_T)1U)
#define CtAp_OBC_IN_OBC_OBCACPreheating ((uint8_T)4U)
#define CtAp__IN_OBC_DischargePreparing ((uint8_T)2U)
#define IN_OBC_OBCPreheating2ChargingWa ((uint8_T)9U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_OBCStsMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"

ARID_DEF_CtAp_OBCStsMgmt_T CtAp_OBCStsMgmt_ARID_DEF;

#define CtAp_OBCStsMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S6>/NoDTAndEn'
 *    '<S8>/NoDTAndEn'
 *    '<S12>/NoDTAndEn'
 */
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

void CtAp_OBCStsMgmt_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_OBCSt_T *CtAp_OBCStsMgmt__ARID_DEF_arg)
{
  boolean_T rtb_Equal2_iwcq;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Constant: '<S14>/True'
   */
  *rty_MonStat = true;

  /* Switch: '<S17>/Switch1' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant4'
   *  Switch: '<S17>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S17>/Switch1' */

  /* RelationalOperator: '<S17>/Equal2' incorporates:
   *  Constant: '<S17>/Constant5'
   */
  rtb_Equal2_iwcq = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S18>/Switch1' */
  if (rtb_Equal2_iwcq) {
    uint16_T u0;

    /* Sum: '<S18>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S18>/Sum' incorporates:
     *  UnitDelay: '<S18>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S18>/MinMax' */
    if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S18>/Sum' */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S18>/MinMax' */
  } else {
    /* Sum: '<S18>/Sum' incorporates:
     *  Constant: '<S17>/Constant37'
     *  UnitDelay: '<S18>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Switch: '<S17>/Switch8' incorporates:
   *  Constant: '<S17>/Constant6'
   *  Constant: '<S17>/DEBOUNCING'
   *  RelationalOperator: '<S17>/Equal6'
   *  RelationalOperator: '<S18>/B_MiHold'
   *  Switch: '<S17>/Switch2'
   *  Switch: '<S17>/Switch3'
   *  UnitDelay: '<S18>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S17>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2_iwcq) {
    /* Switch: '<S17>/Switch3' incorporates:
     *  Constant: '<S17>/DEBOUNCING_F'
     *  Switch: '<S17>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S17>/PASSED'
     *  Switch: '<S17>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S17>/Switch8' */

  /* Switch: '<S17>/Switch6' incorporates:
   *  Constant: '<S17>/Constant30'
   *  Constant: '<S17>/Constant31'
   *  Constant: '<S17>/Constant32'
   *  Delay: '<S17>/Delay1'
   *  RelationalOperator: '<S17>/Equal3'
   *  RelationalOperator: '<S17>/Equal4'
   *  Switch: '<S17>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S17>/Switch7' incorporates:
     *  Constant: '<S17>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S17>/Switch6' */

  /* Update for Delay: '<S17>/Delay1' */
  CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/NoDT'
 *    '<S9>/NoDT'
 *    '<S13>/NoDT'
 */
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

void CtAp_OBCStsMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_OBCStsMgmt_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S19>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2_apw1;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/Constant2'
     *  Constant: '<S23>/Constant4'
     *  Switch: '<S23>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S23>/Switch' incorporates:
       *  Constant: '<S23>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S23>/Switch1' */

    /* RelationalOperator: '<S23>/Equal2' incorporates:
     *  Constant: '<S23>/Constant5'
     */
    rtb_Equal2_apw1 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S24>/Switch1' */
    if (rtb_Equal2_apw1) {
      uint16_T u0;

      /* Sum: '<S24>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S24>/Sum' incorporates:
       *  UnitDelay: '<S24>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S24>/MinMax' */
      if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S24>/Sum' */
        CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S24>/MinMax' */
    } else {
      /* Sum: '<S24>/Sum' incorporates:
       *  Constant: '<S23>/Constant37'
       *  UnitDelay: '<S24>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S24>/Switch1' */

    /* Switch: '<S23>/Switch8' incorporates:
     *  Constant: '<S23>/Constant6'
     *  Constant: '<S23>/DEBOUNCING'
     *  RelationalOperator: '<S23>/Equal6'
     *  RelationalOperator: '<S24>/B_MiHold'
     *  Switch: '<S23>/Switch2'
     *  Switch: '<S23>/Switch3'
     *  UnitDelay: '<S24>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
      /* Switch: '<S23>/Switch2' incorporates:
       *  Constant: '<S23>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_apw1) {
      /* Switch: '<S23>/Switch3' incorporates:
       *  Constant: '<S23>/DEBOUNCING_F'
       *  Switch: '<S23>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      /* Switch: '<S23>/Switch2' incorporates:
       *  Constant: '<S23>/PASSED'
       *  Switch: '<S23>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S23>/Switch8' */

    /* Switch: '<S23>/Switch6' incorporates:
     *  Constant: '<S23>/Constant30'
     *  Constant: '<S23>/Constant31'
     *  Constant: '<S23>/Constant32'
     *  Delay: '<S23>/Delay1'
     *  RelationalOperator: '<S23>/Equal3'
     *  RelationalOperator: '<S23>/Equal4'
     *  Switch: '<S23>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S23>/Switch7' incorporates:
       *  Constant: '<S23>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S23>/Switch6' */

    /* Update for Delay: '<S23>/Delay1' */
    CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S19>/ErrorHandleSysU16' */
}

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S21>/ATOM_TimeCnt'
 *    '<S33>/ATOM_TimeCnt'
 *    '<S46>/ATOM_TimeCnt'
 *    '<S59>/ATOM_TimeCnt'
 */
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

boolean_T CtAp_OBCStsMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_OB_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S25>/Add1' incorporates:
   *  DataTypeConversion: '<S25>/Data Type Conversion'
   *  DataTypeConversion: '<S25>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S25>/Switch' */
  if (rtu_In) {
    /* Sum: '<S25>/Add' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S25>/Min' */
    if (rtb_Add1 <= CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S25>/Add' */
      CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S25>/Min' */
  } else {
    /* Sum: '<S25>/Add' incorporates:
     *  Constant: '<S25>/Constant'
     *  UnitDelay: '<S25>/Delay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S25>/Switch' */

  /* RelationalOperator: '<S25>/Relational Operator' incorporates:
   *  UnitDelay: '<S25>/Delay'
   */
  return CtAp_OBCStsMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

/* Output and update for atomic system: '<S10>/NoEnable' */
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

void CtAp_OBCStsMgmt_NoEnable(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnable_CtAp_OBCSts_T
  *CtAp_OBCStsMgmt__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2_eiki;

  /* Constant: '<S38>/True' */
  *rty_MonStat = true;

  /* Switch: '<S41>/Switch1' incorporates:
   *  Constant: '<S41>/Constant2'
   *  Constant: '<S41>/Constant4'
   *  Switch: '<S41>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S41>/Switch' incorporates:
     *  Constant: '<S41>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S41>/Switch1' */

  /* Switch: '<S43>/Switch1' incorporates:
   *  Constant: '<S41>/Constant3'
   *  RelationalOperator: '<S41>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S43>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S43>/Sum' incorporates:
     *  UnitDelay: '<S43>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S43>/MinMax' */
    if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S43>/Sum' */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S43>/MinMax' */
  } else {
    /* Sum: '<S43>/Sum' incorporates:
     *  Constant: '<S41>/Constant23'
     *  UnitDelay: '<S43>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S43>/Switch1' */

  /* RelationalOperator: '<S41>/Equal2' incorporates:
   *  Constant: '<S41>/Constant5'
   */
  rtb_Equal2_eiki = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S42>/Switch1' */
  if (rtb_Equal2_eiki) {
    /* Sum: '<S42>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S42>/Sum' incorporates:
     *  UnitDelay: '<S42>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz);

    /* MinMax: '<S42>/MinMax' */
    if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz) {
      /* Sum: '<S42>/Sum' */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz = u0;
    }

    /* End of MinMax: '<S42>/MinMax' */
  } else {
    /* Sum: '<S42>/Sum' incorporates:
     *  Constant: '<S41>/Constant37'
     *  UnitDelay: '<S42>/UnitDelay'
     */
    CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz = ((uint16_T)0U);
  }

  /* End of Switch: '<S42>/Switch1' */

  /* Switch: '<S41>/Switch8' incorporates:
   *  Constant: '<S41>/Constant6'
   *  Constant: '<S41>/DEBOUNCING'
   *  RelationalOperator: '<S41>/Equal6'
   *  RelationalOperator: '<S42>/B_MiHold'
   *  RelationalOperator: '<S43>/B_MiHold'
   *  Switch: '<S41>/Switch2'
   *  Switch: '<S41>/Switch3'
   *  Switch: '<S41>/Switch4'
   *  UnitDelay: '<S42>/UnitDelay'
   *  UnitDelay: '<S43>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_i3lz >
             rtu_MatureTime) {
    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S41>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2_eiki) {
    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/DEBOUNCING_F'
     *  Switch: '<S41>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
  {
    /* Switch: '<S41>/Switch4' incorporates:
     *  Constant: '<S41>/PASSED'
     *  Switch: '<S41>/Switch2'
     *  Switch: '<S41>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/DEBOUNCING_P'
     *  Switch: '<S41>/Switch2'
     *  Switch: '<S41>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S41>/Switch8' */

  /* Switch: '<S41>/Switch6' incorporates:
   *  Constant: '<S41>/Constant30'
   *  Constant: '<S41>/Constant31'
   *  Constant: '<S41>/Constant32'
   *  Delay: '<S41>/Delay1'
   *  RelationalOperator: '<S41>/Equal3'
   *  RelationalOperator: '<S41>/Equal4'
   *  Switch: '<S41>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S41>/Switch7' incorporates:
     *  Constant: '<S41>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S41>/Switch6' */

  /* Update for Delay: '<S41>/Delay1' */
  CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

/* Output and update for atomic system: '<S11>/ATOM_U16ErrorHandle' */
#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

void CtAp_OBCStsMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_OBCStsMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S44>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S44>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_odbx;

    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S48>/Constant2'
     *  Constant: '<S48>/Constant4'
     *  Switch: '<S48>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S48>/Switch' incorporates:
       *  Constant: '<S48>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S48>/Constant3'
     *  RelationalOperator: '<S48>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S50>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S50>/Sum' incorporates:
       *  UnitDelay: '<S50>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S50>/MinMax' */
      if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S50>/Sum' */
        CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S50>/MinMax' */
    } else {
      /* Sum: '<S50>/Sum' incorporates:
       *  Constant: '<S48>/Constant23'
       *  UnitDelay: '<S50>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S50>/Switch1' */

    /* RelationalOperator: '<S48>/Equal2' incorporates:
     *  Constant: '<S48>/Constant5'
     */
    rtb_Equal2_odbx = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S49>/Switch1' */
    if (rtb_Equal2_odbx) {
      /* Sum: '<S49>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S49>/Sum' incorporates:
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q);

      /* MinMax: '<S49>/MinMax' */
      if (u0 <= CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q) {
        /* Sum: '<S49>/Sum' */
        CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q = u0;
      }

      /* End of MinMax: '<S49>/MinMax' */
    } else {
      /* Sum: '<S49>/Sum' incorporates:
       *  Constant: '<S48>/Constant37'
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q = ((uint16_T)0U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S48>/Switch8' incorporates:
     *  Constant: '<S48>/Constant6'
     *  Constant: '<S48>/DEBOUNCING'
     *  RelationalOperator: '<S48>/Equal6'
     *  RelationalOperator: '<S49>/B_MiHold'
     *  RelationalOperator: '<S50>/B_MiHold'
     *  Switch: '<S48>/Switch2'
     *  Switch: '<S48>/Switch3'
     *  Switch: '<S48>/Switch4'
     *  UnitDelay: '<S49>/UnitDelay'
     *  UnitDelay: '<S50>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE_gw1q >
               rtu_MatureTime) {
      /* Switch: '<S48>/Switch2' incorporates:
       *  Constant: '<S48>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_odbx) {
      /* Switch: '<S48>/Switch3' incorporates:
       *  Constant: '<S48>/DEBOUNCING_F'
       *  Switch: '<S48>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_OBCStsMgmt__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S48>/Switch4' incorporates:
       *  Constant: '<S48>/PASSED'
       *  Switch: '<S48>/Switch2'
       *  Switch: '<S48>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S48>/Switch3' incorporates:
       *  Constant: '<S48>/DEBOUNCING_P'
       *  Switch: '<S48>/Switch2'
       *  Switch: '<S48>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S48>/Switch8' */

    /* Switch: '<S48>/Switch6' incorporates:
     *  Constant: '<S48>/Constant30'
     *  Constant: '<S48>/Constant31'
     *  Constant: '<S48>/Constant32'
     *  Delay: '<S48>/Delay1'
     *  RelationalOperator: '<S48>/Equal3'
     *  RelationalOperator: '<S48>/Equal4'
     *  Switch: '<S48>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S48>/Switch7' incorporates:
       *  Constant: '<S48>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S48>/Switch6' */

    /* Update for Delay: '<S48>/Delay1' */
    CtAp_OBCStsMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S44>/ErrorHandleSysU16' */
}

#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h"

/* Model step function */
void R_OBCStsMgmt_Cyclic_50ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch8;
  uint8_T rtb_Switch1_hczl;
  uint8_T rtb_Switch8_kf20;
  uint8_T rtb_Switch1_cxmj;
  uint8_T rtb_Switch8_f25d;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_OR;
  boolean_T rtb_LogicalOperator_ozmo;
  boolean_T rtb_LogicalOperator_aoa1;
  boolean_T rtb_Equal_px4u;
  boolean_T rtb_LogicalOperator_kqrc;
  boolean_T rtb_OR_o1cy;
  boolean_T rtb_LogicalOperator_a4yi;
  boolean_T rtb_LogicalOperator_clci;
  boolean_T rtb_Equal_ixqy;
  boolean_T rtb_LogicalOperator_kwhf;
  boolean_T rtb_Equal_lymt;
  boolean_T rtb_LogicalOperator_f2my;
  boolean_T rtb_LogicalOperator_khhm;
  boolean_T rtb_Equal_bizf;
  boolean_T rtb_LogicalOperator_pjrz;
  boolean_T rtb_OR_fos1;
  boolean_T rtb_LogicalOperator_iadi;
  boolean_T rtb_LogicalOperator_pieu;
  boolean_T rtb_Equal_melf;
  boolean_T rtb_Switch6;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_Switch6_cth3;
  boolean_T rtb_DataTypeConversion_b4b4;
  boolean_T rtb_DataTypeConversion_i333;
  boolean_T rtb_Switch6_mne4;
  boolean_T rtb_DataTypeConversion_esd0;
  boolean_T rtb_DataTypeConversion_fere;
  boolean_T rtb_DataTypeConversion_hlie;
  boolean_T rtb_DataTypeConversion_g25j;
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_OBCMgmt_AcChrgnSts_Enum;
  uint8_T rtb_TmpSignalConversionAtR_cwq2;
  uint8_T rtb_TmpSignalConversionAtR_kcdq;
  uint8_T rtb_TmpSignalConversionAtR_mucu;
  uint8_T tmpRead_1;
  boolean_T rtb_TmpSignalConversionAtR_gx5f;
  boolean_T rtb_TmpSignalConversionAtR_lsbv;
  boolean_T tmpRead;
  boolean_T tmpRead_0;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum
    (&rtb_TmpSignalConversionAtR_cwq2);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (&rtb_TmpSignalConversionAtR_kcdq);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_mucu);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_lsbv);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_gx5f);

  /* Outputs for Atomic SubSystem: '<Root>/R_OBCStsMgmt_Cyclic_50ms_sys' */
  /* Chart: '<S2>/OBCMgmt_OBSSts_Flow' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   *  Inport: '<Root>/RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg'
   *  Inport: '<Root>/RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg'
   *  Inport: '<Root>/RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum'
   *  Inport: '<Root>/RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum'
   */
  if ((uint32_T)CtAp_OBCStsMgmt_ARID_DEF.is_active_c1_CtAp_OBCStsMgmt == 0U) {
    CtAp_OBCStsMgmt_ARID_DEF.is_active_c1_CtAp_OBCStsMgmt = 1U;
    CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt = CtAp_OBCStsMgmt_IN_Init;
    CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
      OBCStsMgmt_OBCDisable);
    rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_Init);
  } else {
    (void)Rte_Read_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg
      (&tmpRead_0);
    switch (CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt) {
     case CtAp_OBCStsMgmt_IN_Init:
      CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
        OBCStsMgmt_OBCDisable);
      rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_Init);
      if (tmpRead_0 && ((rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)
             OBCStsMgmt_ChargeCtrlMod)) || (rtb_TmpSignalConversionAtR_cwq2 ==
            ((uint8_T)OBCStsMgmt_DischargeCtrlMod)))) {
        CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt =
          CtAp_OBCStsMgm_IN_OBC_StartFlow;
        if (rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)
             OBCStsMgmt_ChargeCtrlMod)) {
          CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
            CtAp_OBC_IN_OBC_ChargePreparing;
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_ChargePreparing);
        } else {
          CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
            CtAp__IN_OBC_DischargePreparing;
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_DischargePreparing);
        }
      }
      break;

     case CtAp_OBCStsMg_IN_OBC_OBCEndFlow:
      if ((uint32_T)CtAp_OBCStsMgmt_ARID_DEF.is_OBC_OBCEndFlow ==
          CtAp_OBCStsMg_IN_OBC_OBCDisabed) {
        rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDisabed);
        if (tmpRead_0 && ((rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)
               OBCStsMgmt_ChargeCtrlMod)) || (rtb_TmpSignalConversionAtR_cwq2 ==
              ((uint8_T)OBCStsMgmt_DischargeCtrlMod)))) {
          CtAp_OBCStsMgmt_ARID_DEF.is_OBC_OBCEndFlow =
            CtAp_OBCStsM_IN_NO_ACTIVE_CHILD;
          CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt =
            CtAp_OBCStsMgm_IN_OBC_StartFlow;
          if (rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)
               OBCStsMgmt_ChargeCtrlMod)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBC_IN_OBC_ChargePreparing;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_ChargePreparing);
          } else {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp__IN_OBC_DischargePreparing;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)
              OBCStsMgmt_DischargePreparing);
          }
        } else {
          (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
            (&tmpRead_1);
          if (tmpRead_1 == ((uint8_T)OBCStsMgmt_OffPlug)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_OBCEndFlow =
              CtAp_OBCStsM_IN_NO_ACTIVE_CHILD;
            CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt =
              CtAp_OBCStsMgmt_IN_Init;
            CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
              OBCStsMgmt_OBCDisable);
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_Init);
          }
        }
      } else {
        /* case IN_OBC_OBCDisabling: */
        CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
          OBCStsMgmt_OBCDisable);
        rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDisabling);
        if ((rtb_TmpSignalConversionAtR_mucu == ((uint8_T)OBCStsMgmt_Standby)) ||
            CtAp_OBCStsMgmt_ARID_DEF.Delay_4_DSTATE) {
          CtAp_OBCStsMgmt_ARID_DEF.is_OBC_OBCEndFlow =
            CtAp_OBCStsMg_IN_OBC_OBCDisabed;
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDisabed);
        }
      }
      break;

     default:
      /* case IN_OBC_StartFlow: */
      if (!tmpRead_0) {
        CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
          CtAp_OBCStsM_IN_NO_ACTIVE_CHILD;
        CtAp_OBCStsMgmt_ARID_DEF.is_c1_CtAp_OBCStsMgmt =
          CtAp_OBCStsMg_IN_OBC_OBCEndFlow;
        CtAp_OBCStsMgmt_ARID_DEF.is_OBC_OBCEndFlow =
          CtAp_OBCSts_IN_OBC_OBCDisabling;
        CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
          OBCStsMgmt_OBCDisable);
        rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDisabling);
      } else {
        switch (CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow) {
         case CtAp_OBC_IN_OBC_ChargePreparing:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_ChargePreparing);
          (void)
            Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum
            (&tmpRead_1);
          if (tmpRead_1 == ((uint8_T)OBCStsMgmt_S2Closed)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCStsMgm_IN_OBC_OBCEnable;
            CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
              OBCStsMgmt_OBCEnable);
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCEnabled);
          }
          break;

         case CtAp__IN_OBC_DischargePreparing:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_DischargePreparing);
          (void)
            Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum
            (&tmpRead_1);
          if (tmpRead_1 == ((uint8_T)OBCStsMgmt_EmLockLocked)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCStsMgm_IN_OBC_OBCEnable;
            CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
              OBCStsMgmt_OBCEnable);
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCEnabled);
          }
          break;

         case CtAp_OBCSt_IN_OBC_OBCACCharging:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCACCharging);
          CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
            OBCStsMgmt_OBCEnable);
          (void)Rte_Read_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg
            (&tmpRead);
          if (tmpRead && (rtb_TmpSignalConversionAtR_mucu == ((uint8_T)
                OBCStsMgmt_PreheatingMod))) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCS_IN_OBC_OBCKeepWarmReq;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCKeepWarmReq);
          }
          break;

         case CtAp_OBC_IN_OBC_OBCACPreheating:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCACPreheating);
          if (rtb_TmpSignalConversionAtR_kcdq == ((uint8_T)
               OBCStsMgmt_AcHeatAndChargePrepared)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtA_IN_OBC_PreheatingDisableOBC;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_PreheatingDiOBC);
            CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
              OBCStsMgmt_OBCDisable);
          }
          break;

         case CtAp_OBCS_IN_OBC_OBCDischarging:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDischarging);
          break;

         case CtAp_OBCStsMgm_IN_OBC_OBCEnable:
          CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
            OBCStsMgmt_OBCEnable);
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCEnabled);
          if (rtb_TmpSignalConversionAtR_kcdq == ((uint8_T)OBCStsMgmt_Preheating))
          {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBC_IN_OBC_OBCACPreheating;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCACPreheating);
          } else if ((rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)
                       OBCStsMgmt_ChargeCtrlMod)) &&
                     (rtb_TmpSignalConversionAtR_kcdq == ((uint8_T)
                       OBCStsMgmt_NoPreheat)) &&
                     (rtb_TmpSignalConversionAtR_mucu == ((uint8_T)
                       OBCStsMgmt_ChargingMode))) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCSt_IN_OBC_OBCACCharging;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCACCharging);
          } else if ((rtb_TmpSignalConversionAtR_mucu == ((uint8_T)
                       OBCStsMgmt_V2LMode)) && (rtb_TmpSignalConversionAtR_cwq2 ==
                      ((uint8_T)OBCStsMgmt_DischargeCtrlMod))) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCS_IN_OBC_OBCDischarging;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCDischarging);
          } else {
            /* no actions */
          }
          break;

         case CtAp_OBCS_IN_OBC_OBCKeepWarmReq:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCKeepWarmReq);
          if (rtb_TmpSignalConversionAtR_kcdq == ((uint8_T)
               OBCStsMgmt_KeepWarming)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCS_IN_OBC_OBCKeepWarming;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCKeepWarming);
          }
          break;

         case CtAp_OBCS_IN_OBC_OBCKeepWarming:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCKeepWarming);
          break;

         case IN_OBC_OBCPreheating2ChargingWa:
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)
            OBCStsMgmt_Preheat2ChargingWait);
          if (rtb_TmpSignalConversionAtR_kcdq == ((uint8_T)
               OBCStsMgmt_PreheatComplete)) {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              CtAp_OBCSt_IN_OBC_OBCACCharging;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_OBCACCharging);
            CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
              OBCStsMgmt_OBCEnable);
          }
          break;

         default:
          /* case IN_OBC_PreheatingDisableOBC: */
          rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)OBCStsMgmt_PreheatingDiOBC);
          CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum = ((uint8_T)
            OBCStsMgmt_OBCDisable);
          if (rtb_TmpSignalConversionAtR_mucu == ((uint8_T)OBCStsMgmt_Standby))
          {
            CtAp_OBCStsMgmt_ARID_DEF.is_OBC_StartFlow =
              IN_OBC_OBCPreheating2ChargingWa;
            rtb_OBCMgmt_AcChrgnSts_Enum = ((uint8_T)
              OBCStsMgmt_Preheat2ChargingWait);
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/OBCMgmt_OBSSts_Flow' */

  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/Define'
   *  Constant: '<S16>/Define1'
   *  Constant: '<S16>/Define2'
   *  Constant: '<S16>/Define3'
   *  RelationalOperator: '<S16>/Equal'
   *  RelationalOperator: '<S16>/Equal1'
   *  RelationalOperator: '<S16>/Equal2'
   *  RelationalOperator: '<S16>/Equal3'
   */
  rtb_LogicalOperator = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_kcdq ==
    ((uint8_T)OBCStsMgmt_NoPreheat)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_ChargingMode)) && (rtb_TmpSignalConversionAtR_cwq2 ==
    ((uint8_T)OBCStsMgmt_ChargeCtrlMod)));

  /* Logic: '<S15>/OR' incorporates:
   *  Constant: '<S15>/Define'
   *  Constant: '<S15>/Define1'
   *  RelationalOperator: '<S15>/Equal'
   *  RelationalOperator: '<S15>/Equal1'
   */
  rtb_OR = ((rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init)) ||
            (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_OBCDisabling)));

  /* Outputs for Atomic SubSystem: '<S6>/NoDTAndEn' */
  /* Constant: '<S6>/CAL' incorporates:
   *  Constant: '<S6>/Define1'
   *
   * Block requirements for '<S6>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3426
   */
  CtAp_OBCStsMgmt_NoDTAndEn(rtb_LogicalOperator, rtb_OR,
    OBCMgmt_OBCChrgReqTmt_CFG, ((uint16_T)OBCStsMgmt_dt50ms),
    &rtb_DataTypeConversion_i333, &rtb_Switch1_cxmj, &rtb_Switch8_f25d,
    &rtb_Switch6_mne4, &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDTAndEn_cv5h);

  /* End of Outputs for SubSystem: '<S6>/NoDTAndEn' */

  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  Constant: '<S22>/Define'
   *  Constant: '<S22>/Define1'
   *  Constant: '<S22>/Define2'
   *  Constant: '<S22>/Define3'
   *  RelationalOperator: '<S22>/Equal'
   *  RelationalOperator: '<S22>/Equal1'
   *  RelationalOperator: '<S22>/Equal2'
   *  RelationalOperator: '<S22>/Equal3'
   */
  rtb_LogicalOperator_ozmo = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_kcdq ==
    ((uint8_T)OBCStsMgmt_NoPreheat)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_ChargingMode)) && (rtb_TmpSignalConversionAtR_cwq2 ==
    ((uint8_T)OBCStsMgmt_ChargeCtrlMod)));

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_TimeCnt' */
  /* UnitDelay: '<S21>/OneDelay' incorporates:
   *  Constant: '<S21>/CAL'
   *  Constant: '<S21>/Define1'
   */
  rtb_DataTypeConversion_g25j = CtAp_OBCStsMgmt_ATOM_TimeCnt
    (CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE, ((uint16_T)OBCStsMgmt_dt50ms),
     OBCMgmt_OBCCtrlDTCEnaTim_CFG,
     &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of Outputs for SubSystem: '<S21>/ATOM_TimeCnt' */

  /* Logic: '<S21>/LogicalOperator' incorporates:
   *  Logic: '<S21>/NOT'
   *  Logic: '<S21>/NOT1'
   *  Logic: '<S33>/LogicalOperator'
   *  Logic: '<S46>/LogicalOperator'
   *  Logic: '<S59>/LogicalOperator'
   */
  rtb_TmpSignalConversionAtR_lsbv = (rtb_TmpSignalConversionAtR_lsbv &&
    !rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResEPTCANBusOffInfo &&
    !rtb_TmpSignalConversionAtR_gx5f);

  /* Logic: '<S21>/LogicalOperator' */
  rtb_LogicalOperator_aoa1 = (rtb_TmpSignalConversionAtR_lsbv &&
    rtb_DataTypeConversion_g25j);

  /* RelationalOperator: '<S20>/Equal' incorporates:
   *  Constant: '<S20>/Define'
   */
  rtb_Equal_px4u = (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init));

  /* Outputs for Atomic SubSystem: '<S7>/NoDT' */
  /* Constant: '<S7>/CAL' incorporates:
   *  Constant: '<S7>/Define1'
   *
   * Block requirements for '<S7>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3363
   */
  CtAp_OBCStsMgmt_NoDT(rtb_LogicalOperator_aoa1, rtb_LogicalOperator_ozmo,
                       rtb_Equal_px4u, OBCMgmt_OBCChrgReqTmt_CFG, ((uint16_T)
    OBCStsMgmt_dt50ms), &rtb_DataTypeConversion_b4b4,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch1_gngf,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch8_ombj,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch6_i2yg,
                       &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDT_pbm3);

  /* End of Outputs for SubSystem: '<S7>/NoDT' */

  /* Logic: '<S28>/LogicalOperator' incorporates:
   *  Constant: '<S28>/Define1'
   *  Constant: '<S28>/Define2'
   *  Constant: '<S28>/Define3'
   *  RelationalOperator: '<S28>/Equal'
   *  RelationalOperator: '<S28>/Equal1'
   *  RelationalOperator: '<S28>/Equal2'
   */
  rtb_LogicalOperator_kqrc = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_V2LMode)) && (rtb_TmpSignalConversionAtR_cwq2 ==
    ((uint8_T)OBCStsMgmt_DischargeCtrlMod)));

  /* Logic: '<S27>/OR' incorporates:
   *  Constant: '<S27>/Define'
   *  Constant: '<S27>/Define1'
   *  RelationalOperator: '<S27>/Equal'
   *  RelationalOperator: '<S27>/Equal1'
   */
  rtb_OR_o1cy = ((rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init)) ||
                 (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)
    OBCStsMgmt_OBCDisabling)));

  /* Outputs for Atomic SubSystem: '<S8>/NoDTAndEn' */
  /* Constant: '<S8>/CAL' incorporates:
   *  Constant: '<S8>/Define1'
   *
   * Block requirements for '<S8>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3477
   */
  CtAp_OBCStsMgmt_NoDTAndEn(rtb_LogicalOperator_kqrc, rtb_OR_o1cy,
    OBCMgmt_OBCCDchaTmt_CFG, ((uint16_T)OBCStsMgmt_dt50ms),
    &rtb_DataTypeConversion_g25j, &rtb_Switch1_hczl, &rtb_Switch8_kf20,
    &rtb_Switch6_cth3, &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDTAndEn_cxar);

  /* End of Outputs for SubSystem: '<S8>/NoDTAndEn' */

  /* Logic: '<S34>/LogicalOperator' incorporates:
   *  Constant: '<S34>/Define1'
   *  Constant: '<S34>/Define2'
   *  Constant: '<S34>/Define3'
   *  RelationalOperator: '<S34>/Equal'
   *  RelationalOperator: '<S34>/Equal1'
   *  RelationalOperator: '<S34>/Equal2'
   */
  rtb_LogicalOperator_a4yi = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_V2LMode)) && (rtb_TmpSignalConversionAtR_cwq2 ==
    ((uint8_T)OBCStsMgmt_DischargeCtrlMod)));

  /* Outputs for Atomic SubSystem: '<S33>/ATOM_TimeCnt' */
  /* UnitDelay: '<S33>/OneDelay' incorporates:
   *  Constant: '<S33>/CAL'
   *  Constant: '<S33>/Define1'
   */
  rtb_DataTypeConversion_hlie = CtAp_OBCStsMgmt_ATOM_TimeCnt
    (CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_erk3, ((uint16_T)OBCStsMgmt_dt50ms),
     OBCMgmt_OBCCtrlDTCEnaTim_CFG,
     &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cl54);

  /* End of Outputs for SubSystem: '<S33>/ATOM_TimeCnt' */

  /* Logic: '<S33>/LogicalOperator' */
  rtb_LogicalOperator_clci = (rtb_TmpSignalConversionAtR_lsbv &&
    rtb_DataTypeConversion_hlie);

  /* RelationalOperator: '<S32>/Equal' incorporates:
   *  Constant: '<S32>/Define'
   */
  rtb_Equal_ixqy = (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init));

  /* Outputs for Atomic SubSystem: '<S9>/NoDT' */
  /* Constant: '<S9>/CAL' incorporates:
   *  Constant: '<S9>/Define1'
   *
   * Block requirements for '<S9>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3413
   */
  CtAp_OBCStsMgmt_NoDT(rtb_LogicalOperator_clci, rtb_LogicalOperator_a4yi,
                       rtb_Equal_ixqy, OBCMgmt_OBCCDchaTmt_CFG, ((uint16_T)
    OBCStsMgmt_dt50ms), &rtb_DataTypeConversion,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch1_m2xi,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch8_lutl,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch6_jy1y,
                       &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDT_kkiq);

  /* End of Outputs for SubSystem: '<S9>/NoDT' */

  /* Logic: '<S40>/LogicalOperator' incorporates:
   *  Constant: '<S40>/Define1'
   *  Constant: '<S40>/Define2'
   *  RelationalOperator: '<S40>/Equal'
   *  RelationalOperator: '<S40>/Equal2'
   */
  rtb_LogicalOperator_kwhf = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCDisable)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_Standby)));

  /* RelationalOperator: '<S39>/Equal' incorporates:
   *  Constant: '<S39>/Define'
   */
  rtb_Equal_lymt = (rtb_TmpSignalConversionAtR_mucu == ((uint8_T)
    OBCStsMgmt_Standby));

  /* Outputs for Atomic SubSystem: '<S10>/NoEnable' */
  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus' incorporates:
   *  Constant: '<S10>/CAL'
   *  Constant: '<S10>/CAL1'
   *  Constant: '<S10>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S10>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3460
   *
   * Block requirements for '<S10>/CAL1':
   *  1. VCU_SW_Requirements_Specification.slreqx:3461
   */
  CtAp_OBCStsMgmt_NoEnable(rtb_LogicalOperator_kwhf, rtb_Equal_lymt,
    OBCMgmt_OBCDiTmt_CFG, OBCMgmt_OBCDiRecvy_CFG, ((uint16_T)OBCStsMgmt_dt50ms),
    &CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErr_Bus_tec_.OBCMgmt_MonStatOBCDiErr,
    &CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErr_Bus_tec_.OBCMgmt_MonResOBCDiErr,
    &CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErr_Bus_tec_.OBCMgmt_ErrStatOBCDiErr,
    &CtAp_OBCStsMgmt_ARID_DEF.Delay_4_DSTATE,
    &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoEnable);

  /* End of Outputs for SubSystem: '<S10>/NoEnable' */

  /* Logic: '<S47>/LogicalOperator' incorporates:
   *  Constant: '<S47>/Define1'
   *  Constant: '<S47>/Define2'
   *  RelationalOperator: '<S47>/Equal'
   *  RelationalOperator: '<S47>/Equal2'
   */
  rtb_LogicalOperator_f2my = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCDisable)) && (rtb_TmpSignalConversionAtR_mucu !=
    ((uint8_T)OBCStsMgmt_Standby)));

  /* Outputs for Atomic SubSystem: '<S46>/ATOM_TimeCnt' */
  /* UnitDelay: '<S46>/OneDelay' incorporates:
   *  Constant: '<S46>/CAL'
   *  Constant: '<S46>/Define1'
   */
  rtb_DataTypeConversion_fere = CtAp_OBCStsMgmt_ATOM_TimeCnt
    (CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_kulb, ((uint16_T)OBCStsMgmt_dt50ms),
     OBCMgmt_OBCCtrlDTCEnaTim_CFG,
     &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S46>/ATOM_TimeCnt' */

  /* Logic: '<S46>/LogicalOperator' */
  rtb_LogicalOperator_khhm = (rtb_TmpSignalConversionAtR_lsbv &&
    rtb_DataTypeConversion_fere);

  /* RelationalOperator: '<S45>/Equal' incorporates:
   *  Constant: '<S45>/Define'
   */
  rtb_Equal_bizf = (rtb_TmpSignalConversionAtR_mucu == ((uint8_T)
    OBCStsMgmt_Standby));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_U16ErrorHandle' */
  /* Constant: '<S11>/CAL' incorporates:
   *  Constant: '<S11>/CAL1'
   *  Constant: '<S11>/Define1'
   *
   * Block requirements for '<S11>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3396
   */
  CtAp_OBCStsMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator_khhm,
    rtb_LogicalOperator_f2my, rtb_Equal_bizf, OBCMgmt_OBCDiTmt_CFG,
    OBCMgmt_OBCDiRecvy_CFG, ((uint16_T)OBCStsMgmt_dt50ms),
    &rtb_DataTypeConversion_hlie, &CtAp_OBCStsMgmt_ARID_DEF.Switch1_pky0,
    &CtAp_OBCStsMgmt_ARID_DEF.Switch8_l03t,
    &CtAp_OBCStsMgmt_ARID_DEF.Switch6_naqh,
    &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S11>/ATOM_U16ErrorHandle' */

  /* Logic: '<S54>/LogicalOperator' incorporates:
   *  Constant: '<S54>/Define'
   *  Constant: '<S54>/Define1'
   *  Constant: '<S54>/Define2'
   *  Constant: '<S54>/Define3'
   *  RelationalOperator: '<S54>/Equal'
   *  RelationalOperator: '<S54>/Equal1'
   *  RelationalOperator: '<S54>/Equal2'
   *  RelationalOperator: '<S54>/Equal3'
   */
  rtb_LogicalOperator_pjrz = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_kcdq ==
    ((uint8_T)OBCStsMgmt_PreheatingPrepared)) &&
    (rtb_TmpSignalConversionAtR_mucu != ((uint8_T)OBCStsMgmt_PreheatingMod)) &&
    (rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)OBCStsMgmt_ChargeCtrlMod)));

  /* Logic: '<S53>/OR' incorporates:
   *  Constant: '<S53>/Define'
   *  Constant: '<S53>/Define1'
   *  RelationalOperator: '<S53>/Equal'
   *  RelationalOperator: '<S53>/Equal1'
   */
  rtb_OR_fos1 = ((rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init)) ||
                 (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)
    OBCStsMgmt_OBCDisabling)));

  /* Outputs for Atomic SubSystem: '<S12>/NoDTAndEn' */
  /* Constant: '<S12>/CAL' incorporates:
   *  Constant: '<S12>/Define1'
   *
   * Block requirements for '<S12>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3443
   */
  CtAp_OBCStsMgmt_NoDTAndEn(rtb_LogicalOperator_pjrz, rtb_OR_fos1,
    OBCMgmt_OBCCPreheatReqTmt_CFG, ((uint16_T)OBCStsMgmt_dt50ms),
    &rtb_DataTypeConversion_fere, &rtb_Switch1, &rtb_Switch8, &rtb_Switch6,
    &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDTAndEn);

  /* End of Outputs for SubSystem: '<S12>/NoDTAndEn' */

  /* Logic: '<S60>/LogicalOperator' incorporates:
   *  Constant: '<S60>/Define'
   *  Constant: '<S60>/Define1'
   *  Constant: '<S60>/Define2'
   *  Constant: '<S60>/Define3'
   *  RelationalOperator: '<S60>/Equal'
   *  RelationalOperator: '<S60>/Equal1'
   *  RelationalOperator: '<S60>/Equal2'
   *  RelationalOperator: '<S60>/Equal3'
   */
  rtb_LogicalOperator_iadi = ((CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum ==
    ((uint8_T)OBCStsMgmt_OBCEnable)) && (rtb_TmpSignalConversionAtR_kcdq ==
    ((uint8_T)OBCStsMgmt_PreheatingPrepared)) &&
    (rtb_TmpSignalConversionAtR_mucu != ((uint8_T)OBCStsMgmt_PreheatingMod)) &&
    (rtb_TmpSignalConversionAtR_cwq2 == ((uint8_T)OBCStsMgmt_ChargeCtrlMod)));

  /* Outputs for Atomic SubSystem: '<S59>/ATOM_TimeCnt' */
  /* UnitDelay: '<S59>/OneDelay' incorporates:
   *  Constant: '<S59>/CAL'
   *  Constant: '<S59>/Define1'
   */
  rtb_DataTypeConversion_esd0 = CtAp_OBCStsMgmt_ATOM_TimeCnt
    (CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_gh0p, ((uint16_T)OBCStsMgmt_dt50ms),
     OBCMgmt_OBCCtrlDTCEnaTim_CFG,
     &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S59>/ATOM_TimeCnt' */

  /* Logic: '<S59>/LogicalOperator' */
  rtb_LogicalOperator_pieu = (rtb_TmpSignalConversionAtR_lsbv &&
    rtb_DataTypeConversion_esd0);

  /* RelationalOperator: '<S58>/Equal' incorporates:
   *  Constant: '<S58>/Define'
   */
  rtb_Equal_melf = (rtb_OBCMgmt_AcChrgnSts_Enum == ((uint8_T)OBCStsMgmt_Init));

  /* Outputs for Atomic SubSystem: '<S13>/NoDT' */
  /* Constant: '<S13>/CAL' incorporates:
   *  Constant: '<S13>/Define1'
   *
   * Block requirements for '<S13>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:3380
   */
  CtAp_OBCStsMgmt_NoDT(rtb_LogicalOperator_pieu, rtb_LogicalOperator_iadi,
                       rtb_Equal_melf, OBCMgmt_OBCCPreheatReqTmt_CFG, ((uint16_T)
    OBCStsMgmt_dt50ms), &rtb_DataTypeConversion_esd0,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch1,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch8,
                       &CtAp_OBCStsMgmt_ARID_DEF.Switch6,
                       &CtAp_OBCStsMgmt_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S13>/NoDT' */

  /* Update for UnitDelay: '<S21>/OneDelay' incorporates:
   *  Constant: '<S21>/Define'
   */
  CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE = OBCStsMgmt_Active;

  /* Update for UnitDelay: '<S33>/OneDelay' incorporates:
   *  Constant: '<S33>/Define'
   */
  CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_erk3 = OBCStsMgmt_Active;

  /* Update for UnitDelay: '<S46>/OneDelay' incorporates:
   *  Constant: '<S46>/Define'
   */
  CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_kulb = OBCStsMgmt_Active;

  /* Update for UnitDelay: '<S59>/OneDelay' incorporates:
   *  Constant: '<S59>/Define'
   */
  CtAp_OBCStsMgmt_ARID_DEF.OneDelay_DSTATE_gh0p = OBCStsMgmt_Active;

  /* End of Outputs for SubSystem: '<Root>/R_OBCStsMgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum' */
  (void)Rte_Write_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
    (rtb_OBCMgmt_AcChrgnSts_Enum);

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErr_Bus.OBCMgmt_MonStatOBCChrgStsErr
    = rtb_DataTypeConversion_i333;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErr_Bus.OBCMgmt_MonResOBCChrgStsErr
    = rtb_Switch1_cxmj;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErr_Bus.OBCMgmt_ErrStatOBCChrgStsErr
    = rtb_Switch8_f25d;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErr_Bus.OBCMgmt_ErrResOBCChrgStsErr
    = rtb_Switch6_mne4;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErrDTC_.OBCMgmt_MonStatOBCChrgStsErrDTC
    = rtb_DataTypeConversion_b4b4;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErrDTC_.OBCMgmt_MonResOBCChrgStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch1_gngf;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErrDTC_.OBCMgmt_ErrStatOBCChrgStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch8_ombj;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErrDTC_.OBCMgmt_ErrResOBCChrgStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch6_i2yg;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErr_Bus.OBCMgmt_MonStatOBCDchaStsErr
    = rtb_DataTypeConversion_g25j;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErr_Bus.OBCMgmt_MonResOBCDchaStsErr
    = rtb_Switch1_hczl;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErr_Bus.OBCMgmt_ErrStatOBCDchaStsErr
    = rtb_Switch8_kf20;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErr_Bus.OBCMgmt_ErrResOBCDchaStsErr
    = rtb_Switch6_cth3;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErrDTC_.OBCMgmt_MonStatOBCDchaStsErrDTC
    = rtb_DataTypeConversion;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErrDTC_.OBCMgmt_MonResOBCDchaStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch1_m2xi;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErrDTC_.OBCMgmt_ErrStatOBCDchaStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch8_lutl;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErrDTC_.OBCMgmt_ErrResOBCDchaStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch6_jy1y;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErr_Bus_tec_.OBCMgmt_ErrResOBCDiErr
    = CtAp_OBCStsMgmt_ARID_DEF.Delay_4_DSTATE;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t.OBCMgmt_MonStatOBCDiErrDTC
    = rtb_DataTypeConversion_hlie;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t.OBCMgmt_MonResOBCDiErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch1_pky0;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t.OBCMgmt_ErrStatOBCDiErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch8_l03t;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t.OBCMgmt_ErrResOBCDiErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch6_naqh;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum' */
  (void)Rte_Write_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum
    (CtAp_OBCStsMgmt_ARID_DEF.OBCMgmt_OBCEnaCmd_Enum);

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErr_.OBCMgmt_MonStatOBCPreheatStsErr
    = rtb_DataTypeConversion_fere;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErr_.OBCMgmt_MonResOBCPreheatStsErr
    = rtb_Switch1;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErr_.OBCMgmt_ErrStatOBCPreheatStsErr
    = rtb_Switch8;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErr_.OBCMgmt_ErrResOBCPreheatStsErr
    = rtb_Switch6;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus'
   */
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErrD.OBCMgmt_MonStatOBCPreheatStsErrDTC
    = rtb_DataTypeConversion_esd0;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErrD.OBCMgmt_MonResOBCPreheatStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch1;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErrD.OBCMgmt_ErrStatOBCPreheatStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch8;
  CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErrD.OBCMgmt_ErrResOBCPreheatStsErrDTC
    = CtAp_OBCStsMgmt_ARID_DEF.Switch6;
  (void)Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(
    &CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErr_Bus);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCChrgStsErrDTC_);
  (void)Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(
    &CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErr_Bus);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDchaStsErrDTC_);
  (void)Rte_Write_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErr_Bus_tec_);
  (void)Rte_Write_RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErr_);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus
    (&CtAp_OBCStsMgmt_ARID_DEF.RTE_P_OBCMgmt_OBCPreheatStsErrD);
}

/* Model initialize function */
void R_OBCStsMgmt_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_OBCStsMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_OBCStsMgmt_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
