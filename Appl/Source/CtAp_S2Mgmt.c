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
 *  Filename:           CtAp_S2Mgmt.c
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_S2Mgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:46:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:45:06 2025
 *
 *
 *******************************************************************************/
#include "CtAp_S2Mgmt.h"
#include "rtwtypes.h"
#include "CtAp_S2Mgmt_private.h"
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "CtAp_S2Mgmt_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define CtAp_S2Mgmt_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_S2Mgmt_IN_S2Cls           ((uint8_T)1U)
#define CtAp_S2Mgmt_IN_S2Opn           ((uint8_T)2U)
#define CtAp_S2Mgmt_IN_S2_Init         ((uint8_T)3U)
#define CtAp_S2Mgmt_IN_S2_S2CloseErr   ((uint8_T)1U)
#define CtAp_S2Mgmt_IN_S2_S2Closed     ((uint8_T)2U)
#define CtAp_S2Mgmt_IN_S2_S2Closing    ((uint8_T)3U)
#define CtAp_S2Mgmt_IN_S2_S2OpenErr    ((uint8_T)1U)
#define CtAp_S2Mgmt_IN_S2_S2Opened     ((uint8_T)2U)
#define CtAp_S2Mgmt_IN_S2_S2Opening    ((uint8_T)3U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_S2Mgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"

ARID_DEF_CtAp_S2Mgmt_T CtAp_S2Mgmt_ARID_DEF;

#define CtAp_S2Mgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S6>/ATOM_U16ErrorHandle'
 *    '<S8>/ATOM_U16ErrorHandle'
 *    '<S10>/ATOM_U16ErrorHandle'
 *    '<S12>/ATOM_U16ErrorHandle'
 */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void CtAp_S2Mgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_S2Mgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S14>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_ko5g;

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

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S17>/Constant3'
     *  RelationalOperator: '<S17>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S19>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S19>/Sum' incorporates:
       *  UnitDelay: '<S19>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S19>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S19>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S19>/MinMax' */
    } else {
      /* Sum: '<S19>/Sum' incorporates:
       *  Constant: '<S17>/Constant23'
       *  UnitDelay: '<S19>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S19>/Switch1' */

    /* RelationalOperator: '<S17>/Equal2' incorporates:
     *  Constant: '<S17>/Constant5'
     */
    rtb_Equal2_ko5g = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S18>/Switch1' */
    if (rtb_Equal2_ko5g) {
      /* Sum: '<S18>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S18>/Sum' incorporates:
       *  UnitDelay: '<S18>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v);

      /* MinMax: '<S18>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v) {
        /* Sum: '<S18>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v = u0;
      }

      /* End of MinMax: '<S18>/MinMax' */
    } else {
      /* Sum: '<S18>/Sum' incorporates:
       *  Constant: '<S17>/Constant37'
       *  UnitDelay: '<S18>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v = ((uint16_T)0U);
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Switch: '<S17>/Switch8' incorporates:
     *  Constant: '<S17>/Constant6'
     *  Constant: '<S17>/DEBOUNCING'
     *  RelationalOperator: '<S17>/Equal6'
     *  RelationalOperator: '<S18>/B_MiHold'
     *  RelationalOperator: '<S19>/B_MiHold'
     *  Switch: '<S17>/Switch2'
     *  Switch: '<S17>/Switch3'
     *  Switch: '<S17>/Switch4'
     *  UnitDelay: '<S18>/UnitDelay'
     *  UnitDelay: '<S19>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_gt5v > rtu_MatureTime)
    {
      /* Switch: '<S17>/Switch2' incorporates:
       *  Constant: '<S17>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_ko5g) {
      /* Switch: '<S17>/Switch3' incorporates:
       *  Constant: '<S17>/DEBOUNCING_F'
       *  Switch: '<S17>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S17>/Switch4' incorporates:
       *  Constant: '<S17>/PASSED'
       *  Switch: '<S17>/Switch2'
       *  Switch: '<S17>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S17>/Switch3' incorporates:
       *  Constant: '<S17>/DEBOUNCING_P'
       *  Switch: '<S17>/Switch2'
       *  Switch: '<S17>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
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
      *rty_ErrorRes = (0.0 != 0.0);
    } else {
      *rty_ErrorRes = CtAp_S2Mgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S17>/Switch6' */

    /* Update for Delay: '<S17>/Delay1' */
    CtAp_S2Mgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S14>/ErrorHandleSysU16' */
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Output and update for atomic system: '<S7>/ATOM_U16ErrorHandle' */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void CtAp_S2Mgmt_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_eg0u_T
  *CtAp_S2Mgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S20>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_prme;

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S24>/Constant2'
     *  Constant: '<S24>/Constant4'
     *  Switch: '<S24>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S24>/Switch' incorporates:
       *  Constant: '<S24>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S24>/Switch1' */

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S24>/Constant3'
     *  RelationalOperator: '<S24>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S26>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S26>/Sum' incorporates:
       *  UnitDelay: '<S26>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S26>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S26>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S26>/MinMax' */
    } else {
      /* Sum: '<S26>/Sum' incorporates:
       *  Constant: '<S24>/Constant23'
       *  UnitDelay: '<S26>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* RelationalOperator: '<S24>/Equal2' incorporates:
     *  Constant: '<S24>/Constant5'
     */
    rtb_Equal2_prme = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S25>/Switch1' */
    if (rtb_Equal2_prme) {
      /* Sum: '<S25>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S25>/Sum' incorporates:
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt);

      /* MinMax: '<S25>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt) {
        /* Sum: '<S25>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt = u0;
      }

      /* End of MinMax: '<S25>/MinMax' */
    } else {
      /* Sum: '<S25>/Sum' incorporates:
       *  Constant: '<S24>/Constant37'
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt = ((uint16_T)0U);
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Switch: '<S24>/Switch8' incorporates:
     *  Constant: '<S24>/Constant6'
     *  Constant: '<S24>/DEBOUNCING'
     *  RelationalOperator: '<S24>/Equal6'
     *  RelationalOperator: '<S25>/B_MiHold'
     *  RelationalOperator: '<S26>/B_MiHold'
     *  Switch: '<S24>/Switch2'
     *  Switch: '<S24>/Switch3'
     *  Switch: '<S24>/Switch4'
     *  UnitDelay: '<S25>/UnitDelay'
     *  UnitDelay: '<S26>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_nzrt > rtu_MatureTime)
    {
      /* Switch: '<S24>/Switch2' incorporates:
       *  Constant: '<S24>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_prme) {
      /* Switch: '<S24>/Switch3' incorporates:
       *  Constant: '<S24>/DEBOUNCING_F'
       *  Switch: '<S24>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S24>/Switch4' incorporates:
       *  Constant: '<S24>/PASSED'
       *  Switch: '<S24>/Switch2'
       *  Switch: '<S24>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S24>/Switch3' incorporates:
       *  Constant: '<S24>/DEBOUNCING_P'
       *  Switch: '<S24>/Switch2'
       *  Switch: '<S24>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S24>/Switch8' */

    /* Switch: '<S24>/Switch6' incorporates:
     *  Constant: '<S24>/Constant30'
     *  Constant: '<S24>/Constant31'
     *  RelationalOperator: '<S24>/Equal3'
     *  RelationalOperator: '<S24>/Equal4'
     *  Switch: '<S24>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S24>/Switch6' incorporates:
       *  Constant: '<S24>/Constant32'
       */
      OBCMgmt_ErrResCPStsJmpErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S24>/Switch7' incorporates:
       *  Constant: '<S24>/Constant11'
       *  Switch: '<S24>/Switch6'
       */
      OBCMgmt_ErrResCPStsJmpErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S24>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S20>/ErrorHandleSysU16' */
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/ATOM_TimeCnt'
 *    '<S36>/ATOM_TimeCnt'
 *    '<S50>/ATOM_TimeCnt'
 *    '<S64>/ATOM_TimeCnt'
 */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

boolean_T CtAp_S2Mgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_S2_T
  *CtAp_S2Mgmt__ARID_DEF_arg)
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
    CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S27>/Min' */
    if (rtb_Add1 <= CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S27>/Add' */
      CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S27>/Min' */
  } else {
    /* Sum: '<S27>/Add' incorporates:
     *  Constant: '<S27>/Constant'
     *  UnitDelay: '<S27>/Delay'
     */
    CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S27>/Switch' */

  /* RelationalOperator: '<S27>/Relational Operator' incorporates:
   *  UnitDelay: '<S27>/Delay'
   */
  return CtAp_S2Mgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Output and update for atomic system: '<S9>/ATOM_U16ErrorHandle' */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void CtAp_S_ATOM_U16ErrorHandle_jbhp(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_dcso_T
  *CtAp_S2Mgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S34>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_ibtz;

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/Constant2'
     *  Constant: '<S38>/Constant4'
     *  Switch: '<S38>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S38>/Switch' incorporates:
       *  Constant: '<S38>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S38>/Constant3'
     *  RelationalOperator: '<S38>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S40>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S40>/Sum' incorporates:
       *  UnitDelay: '<S40>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S40>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S40>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S40>/MinMax' */
    } else {
      /* Sum: '<S40>/Sum' incorporates:
       *  Constant: '<S38>/Constant23'
       *  UnitDelay: '<S40>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S40>/Switch1' */

    /* RelationalOperator: '<S38>/Equal2' incorporates:
     *  Constant: '<S38>/Constant5'
     */
    rtb_Equal2_ibtz = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S39>/Switch1' */
    if (rtb_Equal2_ibtz) {
      /* Sum: '<S39>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S39>/Sum' incorporates:
       *  UnitDelay: '<S39>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr);

      /* MinMax: '<S39>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr) {
        /* Sum: '<S39>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr = u0;
      }

      /* End of MinMax: '<S39>/MinMax' */
    } else {
      /* Sum: '<S39>/Sum' incorporates:
       *  Constant: '<S38>/Constant37'
       *  UnitDelay: '<S39>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr = ((uint16_T)0U);
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S38>/Switch8' incorporates:
     *  Constant: '<S38>/Constant6'
     *  Constant: '<S38>/DEBOUNCING'
     *  RelationalOperator: '<S38>/Equal6'
     *  RelationalOperator: '<S39>/B_MiHold'
     *  RelationalOperator: '<S40>/B_MiHold'
     *  Switch: '<S38>/Switch2'
     *  Switch: '<S38>/Switch3'
     *  Switch: '<S38>/Switch4'
     *  UnitDelay: '<S39>/UnitDelay'
     *  UnitDelay: '<S40>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_espr > rtu_MatureTime)
    {
      /* Switch: '<S38>/Switch2' incorporates:
       *  Constant: '<S38>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_ibtz) {
      /* Switch: '<S38>/Switch3' incorporates:
       *  Constant: '<S38>/DEBOUNCING_F'
       *  Switch: '<S38>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S38>/Switch4' incorporates:
       *  Constant: '<S38>/PASSED'
       *  Switch: '<S38>/Switch2'
       *  Switch: '<S38>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S38>/Switch3' incorporates:
       *  Constant: '<S38>/DEBOUNCING_P'
       *  Switch: '<S38>/Switch2'
       *  Switch: '<S38>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S38>/Switch8' */

    /* Switch: '<S38>/Switch6' incorporates:
     *  Constant: '<S38>/Constant30'
     *  Constant: '<S38>/Constant31'
     *  RelationalOperator: '<S38>/Equal3'
     *  RelationalOperator: '<S38>/Equal4'
     *  Switch: '<S38>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S38>/Switch6' incorporates:
       *  Constant: '<S38>/Constant32'
       */
      OBCMgmt_ErrResOBCInpUDcLoErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S38>/Switch7' incorporates:
       *  Constant: '<S38>/Constant11'
       *  Switch: '<S38>/Switch6'
       */
      OBCMgmt_ErrResOBCInpUDcLoErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S38>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S34>/ErrorHandleSysU16' */
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Output and update for atomic system: '<S11>/ATOM_U16ErrorHandle' */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void CtAp_S_ATOM_U16ErrorHandle_isn5(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_hg5k_T
  *CtAp_S2Mgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S48>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S48>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S52>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_e2tz;

    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S52>/Constant2'
     *  Constant: '<S52>/Constant4'
     *  Switch: '<S52>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S52>/Switch' incorporates:
       *  Constant: '<S52>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S52>/Constant3'
     *  RelationalOperator: '<S52>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S54>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S54>/Sum' incorporates:
       *  UnitDelay: '<S54>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S54>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S54>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S54>/MinMax' */
    } else {
      /* Sum: '<S54>/Sum' incorporates:
       *  Constant: '<S52>/Constant23'
       *  UnitDelay: '<S54>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S54>/Switch1' */

    /* RelationalOperator: '<S52>/Equal2' incorporates:
     *  Constant: '<S52>/Constant5'
     */
    rtb_Equal2_e2tz = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S53>/Switch1' */
    if (rtb_Equal2_e2tz) {
      /* Sum: '<S53>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S53>/Sum' incorporates:
       *  UnitDelay: '<S53>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230 = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230);

      /* MinMax: '<S53>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230) {
        /* Sum: '<S53>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230 = u0;
      }

      /* End of MinMax: '<S53>/MinMax' */
    } else {
      /* Sum: '<S53>/Sum' incorporates:
       *  Constant: '<S52>/Constant37'
       *  UnitDelay: '<S53>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230 = ((uint16_T)0U);
    }

    /* End of Switch: '<S53>/Switch1' */

    /* Switch: '<S52>/Switch8' incorporates:
     *  Constant: '<S52>/Constant6'
     *  Constant: '<S52>/DEBOUNCING'
     *  RelationalOperator: '<S52>/Equal6'
     *  RelationalOperator: '<S53>/B_MiHold'
     *  RelationalOperator: '<S54>/B_MiHold'
     *  Switch: '<S52>/Switch2'
     *  Switch: '<S52>/Switch3'
     *  Switch: '<S52>/Switch4'
     *  UnitDelay: '<S53>/UnitDelay'
     *  UnitDelay: '<S54>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_g230 > rtu_MatureTime)
    {
      /* Switch: '<S52>/Switch2' incorporates:
       *  Constant: '<S52>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_e2tz) {
      /* Switch: '<S52>/Switch3' incorporates:
       *  Constant: '<S52>/DEBOUNCING_F'
       *  Switch: '<S52>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S52>/Switch4' incorporates:
       *  Constant: '<S52>/PASSED'
       *  Switch: '<S52>/Switch2'
       *  Switch: '<S52>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S52>/Switch3' incorporates:
       *  Constant: '<S52>/DEBOUNCING_P'
       *  Switch: '<S52>/Switch2'
       *  Switch: '<S52>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S52>/Switch8' */

    /* Switch: '<S52>/Switch6' incorporates:
     *  Constant: '<S52>/Constant30'
     *  Constant: '<S52>/Constant31'
     *  RelationalOperator: '<S52>/Equal3'
     *  RelationalOperator: '<S52>/Equal4'
     *  Switch: '<S52>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S52>/Switch6' incorporates:
       *  Constant: '<S52>/Constant32'
       */
      OBCMgmt_ErrResS2SwtClsErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S52>/Switch7' incorporates:
       *  Constant: '<S52>/Constant11'
       *  Switch: '<S52>/Switch6'
       */
      OBCMgmt_ErrResS2SwtClsErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S52>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S48>/ErrorHandleSysU16' */
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Output and update for atomic system: '<S13>/ATOM_U16ErrorHandle' */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void CtAp_S_ATOM_U16ErrorHandle_gkze(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_inzr_T
  *CtAp_S2Mgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S62>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S62>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S66>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_fkgx;

    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S66>/Constant2'
     *  Constant: '<S66>/Constant4'
     *  Switch: '<S66>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S66>/Switch' incorporates:
       *  Constant: '<S66>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S66>/Constant3'
     *  RelationalOperator: '<S66>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S68>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S68>/Sum' incorporates:
       *  UnitDelay: '<S68>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S68>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S68>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S68>/MinMax' */
    } else {
      /* Sum: '<S68>/Sum' incorporates:
       *  Constant: '<S66>/Constant23'
       *  UnitDelay: '<S68>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S68>/Switch1' */

    /* RelationalOperator: '<S66>/Equal2' incorporates:
     *  Constant: '<S66>/Constant5'
     */
    rtb_Equal2_fkgx = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S67>/Switch1' */
    if (rtb_Equal2_fkgx) {
      /* Sum: '<S67>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S67>/Sum' incorporates:
       *  UnitDelay: '<S67>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb);

      /* MinMax: '<S67>/MinMax' */
      if (u0 <= CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb) {
        /* Sum: '<S67>/Sum' */
        CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb = u0;
      }

      /* End of MinMax: '<S67>/MinMax' */
    } else {
      /* Sum: '<S67>/Sum' incorporates:
       *  Constant: '<S66>/Constant37'
       *  UnitDelay: '<S67>/UnitDelay'
       */
      CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb = ((uint16_T)0U);
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S66>/Switch8' incorporates:
     *  Constant: '<S66>/Constant6'
     *  Constant: '<S66>/DEBOUNCING'
     *  RelationalOperator: '<S66>/Equal6'
     *  RelationalOperator: '<S67>/B_MiHold'
     *  RelationalOperator: '<S68>/B_MiHold'
     *  Switch: '<S66>/Switch2'
     *  Switch: '<S66>/Switch3'
     *  Switch: '<S66>/Switch4'
     *  UnitDelay: '<S67>/UnitDelay'
     *  UnitDelay: '<S68>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE_mpdb > rtu_MatureTime)
    {
      /* Switch: '<S66>/Switch2' incorporates:
       *  Constant: '<S66>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_fkgx) {
      /* Switch: '<S66>/Switch3' incorporates:
       *  Constant: '<S66>/DEBOUNCING_F'
       *  Switch: '<S66>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_S2Mgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime) {
      /* Switch: '<S66>/Switch4' incorporates:
       *  Constant: '<S66>/PASSED'
       *  Switch: '<S66>/Switch2'
       *  Switch: '<S66>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S66>/Switch3' incorporates:
       *  Constant: '<S66>/DEBOUNCING_P'
       *  Switch: '<S66>/Switch2'
       *  Switch: '<S66>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S66>/Switch8' */

    /* Switch: '<S66>/Switch6' incorporates:
     *  Constant: '<S66>/Constant30'
     *  Constant: '<S66>/Constant31'
     *  RelationalOperator: '<S66>/Equal3'
     *  RelationalOperator: '<S66>/Equal4'
     *  Switch: '<S66>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S66>/Switch6' incorporates:
       *  Constant: '<S66>/Constant32'
       */
      OBCMgmt_ErrResS2SwtOpenErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S66>/Switch7' incorporates:
       *  Constant: '<S66>/Constant11'
       *  Switch: '<S66>/Switch6'
       */
      OBCMgmt_ErrResS2SwtOpenErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S66>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S62>/ErrorHandleSysU16' */
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

void R_S2Mgmt_Cyclic_50ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_OBCMgmt_MonResS2SwtOpenErr;
  uint8_T rtb_OBCMgmt_ErrStatS2SwtOpenErr;
  uint8_T rtb_OBCMgmt_MonResS2SwtClsErr;
  uint8_T rtb_OBCMgmt_ErrStatS2SwtClsErr;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_OR;
  boolean_T rtb_LogicalOperator_c2s1;
  boolean_T rtb_LogicalOperator_ledi;
  boolean_T rtb_Equal_agwa;
  boolean_T rtb_LogicalOperator_bcue;
  boolean_T rtb_OR_j04a;
  boolean_T rtb_LogicalOperator_cjjs;
  boolean_T rtb_LogicalOperator_oaxk;
  boolean_T rtb_Equal_ee1e;
  boolean_T rtb_LogicalOperator_o044;
  boolean_T rtb_OR_d041;
  boolean_T rtb_LogicalOperator_hog5;
  boolean_T rtb_LogicalOperator_fwvz;
  boolean_T rtb_Equal_m5jb;
  boolean_T rtb_LogicalOperator_j22m;
  boolean_T rtb_OR_gofo;
  boolean_T rtb_LogicalOperator_olzw;
  boolean_T rtb_LogicalOperator_ovlf;
  boolean_T rtb_Equal_opnc;
  boolean_T rtb_DataTypeConversion_ddah;
  boolean_T rtb_DataTypeConversion_aucw;
  boolean_T rtb_DataTypeConversion_dyls;
  boolean_T rtb_DataTypeConversion_jfxw;
  boolean_T rtb_DataTypeConversion_h0s2;
  boolean_T rtb_DataTypeConversion_paiv;
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  real32_T rtb_TmpSignalConversionAtR_lgu2;
  uint8_T rtb_OBCMgmt_S2SwtCtrlSts_Enum;
  uint8_T rtb_TmpSignalConversionAtR_iqzg;
  uint8_T rtb_TmpSignalConversionAtR_jtsl;
  uint8_T rtb_TmpSignalConversionAtR_kkne;
  uint8_T rtb_TmpSignalConversionAtR_lx12;
  uint8_T tmpRead;
  boolean_T rtb_LogicalOperator_ledi_tmp;
  boolean_T rtb_LogicalOperator_ledi_tmp_0;
  boolean_T rtb_TmpSignalConversionAtR_my00;
  boolean_T rtb_TmpSignalConversionAtR_oh5p;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (&rtb_TmpSignalConversionAtR_lx12);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
    (&rtb_TmpSignalConversionAtR_jtsl);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V'
   */
  (void)Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V
    (&rtb_TmpSignalConversionAtR_lgu2);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum
    (&rtb_TmpSignalConversionAtR_kkne);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_my00);

  /* SignalConversion generated from: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_iqzg);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_oh5p);

  /* Outputs for Atomic SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  /* Delay generated from: '<S2>/Delay' */
  rtb_OBCMgmt_MonResS2SwtOpenErr = CtAp_S2Mgmt_ARID_DEF.Delay_2_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_OBCMgmt_ErrStatS2SwtOpenErr = CtAp_S2Mgmt_ARID_DEF.Delay_3_DSTATE;

  /* Delay generated from: '<S2>/Delay1' */
  rtb_OBCMgmt_MonResS2SwtClsErr = CtAp_S2Mgmt_ARID_DEF.Delay1_2_DSTATE;

  /* Delay generated from: '<S2>/Delay1' */
  rtb_OBCMgmt_ErrStatS2SwtClsErr = CtAp_S2Mgmt_ARID_DEF.Delay1_3_DSTATE;

  /* Chart: '<S2>/OBCMgmt_S2Ctrl_Flow' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  Delay generated from: '<S2>/Delay1'
   *  Delay: '<S2>/Delay2'
   *  Inport: '<Root>/RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum'
   */
  if ((uint32_T)CtAp_S2Mgmt_ARID_DEF.is_active_c1_CtAp_S2Mgmt == 0U) {
    CtAp_S2Mgmt_ARID_DEF.is_active_c1_CtAp_S2Mgmt = 1U;
    CtAp_S2Mgmt_ARID_DEF.is_c1_CtAp_S2Mgmt = CtAp_S2Mgmt_IN_S2_Init;
    rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_Init);
    CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)S2Mgmt_S2OpenReq);
  } else {
    switch (CtAp_S2Mgmt_ARID_DEF.is_c1_CtAp_S2Mgmt) {
     case CtAp_S2Mgmt_IN_S2Cls:
      if (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_OBCDisabed)) {
        CtAp_S2Mgmt_ARID_DEF.is_S2Cls = CtAp_S2Mgmt_IN_NO_ACTIVE_CHILD;
        CtAp_S2Mgmt_ARID_DEF.is_c1_CtAp_S2Mgmt = CtAp_S2Mgmt_IN_S2Opn;
        CtAp_S2Mgmt_ARID_DEF.is_S2Opn = CtAp_S2Mgmt_IN_S2_S2Opening;
        rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Opening);
        CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
          S2Mgmt_S2OpenReq);
      } else {
        switch (CtAp_S2Mgmt_ARID_DEF.is_S2Cls) {
         case CtAp_S2Mgmt_IN_S2_S2CloseErr:
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2CloseErr);
          break;

         case CtAp_S2Mgmt_IN_S2_S2Closed:
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Closed);
          break;

         default:
          /* case IN_S2_S2Closing: */
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Closing);
          CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
            S2Mgmt_CloseReq);
          if (CtAp_S2Mgmt_ARID_DEF.Delay1_4_DSTATE) {
            CtAp_S2Mgmt_ARID_DEF.is_S2Cls = CtAp_S2Mgmt_IN_S2_S2CloseErr;
            rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2CloseErr);
          } else if ((rtb_TmpSignalConversionAtR_lgu2 > (real32_T)
                      OBCMgmt_S2SwtCtrlChkUAc_CFG) &&
                     (rtb_TmpSignalConversionAtR_jtsl == ((uint8_T)
                       S2Mgmt_CP6VPWM)) && (rtb_TmpSignalConversionAtR_kkne ==
                      ((uint8_T)S2Mgmt_Closed))) {
            CtAp_S2Mgmt_ARID_DEF.is_S2Cls = CtAp_S2Mgmt_IN_S2_S2Closed;
            rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Closed);
          } else {
            /* no actions */
          }
          break;
        }
      }
      break;

     case CtAp_S2Mgmt_IN_S2Opn:
      if ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init)) ||
          (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_ChargePreparing)))
      {
        CtAp_S2Mgmt_ARID_DEF.is_S2Opn = CtAp_S2Mgmt_IN_NO_ACTIVE_CHILD;
        CtAp_S2Mgmt_ARID_DEF.is_c1_CtAp_S2Mgmt = CtAp_S2Mgmt_IN_S2_Init;
        rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_Init);
        CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
          S2Mgmt_S2OpenReq);
      } else {
        switch (CtAp_S2Mgmt_ARID_DEF.is_S2Opn) {
         case CtAp_S2Mgmt_IN_S2_S2OpenErr:
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2OpenErr);
          break;

         case CtAp_S2Mgmt_IN_S2_S2Opened:
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Opened);
          break;

         default:
          /* case IN_S2_S2Opening: */
          rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Opening);
          CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
            S2Mgmt_S2OpenReq);
          if (CtAp_S2Mgmt_ARID_DEF.Delay_4_DSTATE) {
            CtAp_S2Mgmt_ARID_DEF.is_S2Opn = CtAp_S2Mgmt_IN_S2_S2OpenErr;
            rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2OpenErr);
          } else if (rtb_TmpSignalConversionAtR_kkne == ((uint8_T)S2Mgmt_Opened))
          {
            CtAp_S2Mgmt_ARID_DEF.is_S2Opn = CtAp_S2Mgmt_IN_S2_S2Opened;
            rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Opened);
          } else {
            /* no actions */
          }
          break;
        }
      }
      break;

     default:
      /* case IN_S2_Init: */
      rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_Init);
      CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
        S2Mgmt_S2OpenReq);
      (void)
        Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum
        (&tmpRead);
      if ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_ChargePreparing))
          && (tmpRead == ((uint8_T)S2Mgmt_EmLockLockLocked)) &&
          (((rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)S2Mgmt_NoPreheat)) &&
            (CtAp_S2Mgmt_ARID_DEF.Delay2_DSTATE == ((uint8_T)S2Mgmt_NoPreheat)))
           || (rtb_TmpSignalConversionAtR_lx12 == ((uint8_T)
             S2Mgmt_PreheatPrepared)))) {
        CtAp_S2Mgmt_ARID_DEF.is_c1_CtAp_S2Mgmt = CtAp_S2Mgmt_IN_S2Cls;
        CtAp_S2Mgmt_ARID_DEF.is_S2Cls = CtAp_S2Mgmt_IN_S2_S2Closing;
        rtb_OBCMgmt_S2SwtCtrlSts_Enum = ((uint8_T)S2Mgmt_S2Closing);
        CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum = ((uint8_T)
          S2Mgmt_CloseReq);
      }
      break;
    }
  }

  /* End of Chart: '<S2>/OBCMgmt_S2Ctrl_Flow' */

  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/Define'
   *  Constant: '<S16>/Define1'
   *  RelationalOperator: '<S16>/Equal'
   *  RelationalOperator: '<S16>/Equal1'
   */
  rtb_LogicalOperator = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_jtsl != ((uint8_T)
    S2Mgmt_CP6VPWM)));

  /* Logic: '<S15>/OR' incorporates:
   *  Constant: '<S15>/Define'
   *  Constant: '<S15>/Define1'
   *  Constant: '<S15>/Define2'
   *  RelationalOperator: '<S15>/Equal'
   *  RelationalOperator: '<S15>/Equal1'
   *  RelationalOperator: '<S15>/Equal2'
   */
  rtb_OR = ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init)) ||
            (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_OBCDisabling)) ||
            (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_OBCDisabed)));

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S6>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03395 S2 Ctrl CP Status Error
   */
  /* Constant: '<S6>/Define' incorporates:
   *  Constant: '<S6>/CAL'
   *  Constant: '<S6>/Define1'
   *  Constant: '<S6>/Define2'
   *
   * Block requirements for '<S6>/CAL':
   *  1. SWREQ_03393 S2 Ctrl CP Status Error
   */
  CtAp_S2Mgmt_ATOM_U16ErrHnd(S2Mgmt_Active, rtb_LogicalOperator, rtb_OR,
    OBCMgmt_S2SwtCtrlCPStsChkTmt_CFG, ((uint16_T)S2Mgmt_U8ValueZero), ((uint16_T)
    S2Mgmt_dt50ms), &rtb_DataTypeConversion_dyls,
    &CtAp_S2Mgmt_ARID_DEF.Switch1_pfgz, &CtAp_S2Mgmt_ARID_DEF.Switch8_j4eq,
    &CtAp_S2Mgmt_ARID_DEF.Switch6_klig,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_g1sm);

  /* End of Outputs for SubSystem: '<S6>/ATOM_U16ErrorHandle' */

  /* Logic: '<S23>/LogicalOperator' incorporates:
   *  Constant: '<S23>/Define'
   *  Constant: '<S23>/Define1'
   *  RelationalOperator: '<S23>/Equal'
   *  RelationalOperator: '<S23>/Equal1'
   */
  rtb_LogicalOperator_c2s1 = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_jtsl != ((uint8_T)
    S2Mgmt_CP6VPWM)));

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt' */
  /* Constant: '<S22>/Define' incorporates:
   *  Constant: '<S22>/CAL'
   *  Constant: '<S22>/Define1'
   */
  rtb_DataTypeConversion_h0s2 = CtAp_S2Mgmt_ATOM_TimeCnt(S2Mgmt_Active,
    ((uint16_T)S2Mgmt_dt50ms), OBCMgmt_S2SwtCtrlDTCEnaTim_CFG,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_fqdq);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt' */

  /* Logic: '<S22>/NOT' incorporates:
   *  Logic: '<S36>/NOT'
   */
  rtb_LogicalOperator_ledi_tmp =
    !rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResEPTCANBusOffInfo;

  /* Logic: '<S22>/NOT1' incorporates:
   *  Logic: '<S36>/NOT1'
   */
  rtb_LogicalOperator_ledi_tmp_0 = !rtb_TmpSignalConversionAtR_oh5p;

  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  Logic: '<S22>/NOT'
   *  Logic: '<S22>/NOT1'
   *  Logic: '<S50>/LogicalOperator'
   *  Logic: '<S64>/LogicalOperator'
   */
  rtb_TmpSignalConversionAtR_oh5p = (rtb_LogicalOperator_ledi_tmp_0 &&
    rtb_TmpSignalConversionAtR_my00 && rtb_LogicalOperator_ledi_tmp);

  /* Logic: '<S22>/LogicalOperator' */
  rtb_LogicalOperator_ledi = (rtb_TmpSignalConversionAtR_oh5p &&
    rtb_DataTypeConversion_h0s2);

  /* RelationalOperator: '<S21>/Equal' incorporates:
   *  Constant: '<S21>/Define'
   */
  rtb_Equal_agwa = (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init));

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S7>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03331 S2 CP Status DTC
   *  2. SWREQ_03282 S2 Ctrl Vol DTC
   */
  /* Constant: '<S7>/CAL' incorporates:
   *  Constant: '<S7>/Define'
   *  Constant: '<S7>/Define1'
   *
   * Block requirements for '<S7>/CAL':
   *  1. SWREQ_03329 S2 CP Status DTC
   */
  CtAp_S2Mgmt_ATOM_U16ErrorHandle(rtb_LogicalOperator_ledi,
    rtb_LogicalOperator_c2s1, rtb_Equal_agwa, OBCMgmt_S2SwtCtrlCPStsChkTmt_CFG,
    ((uint16_T)S2Mgmt_U8ValueZero), ((uint16_T)S2Mgmt_dt50ms),
    &rtb_DataTypeConversion_aucw, &CtAp_S2Mgmt_ARID_DEF.Switch1_himi,
    &CtAp_S2Mgmt_ARID_DEF.Switch8_nl40,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_g2ml);

  /* End of Outputs for SubSystem: '<S7>/ATOM_U16ErrorHandle' */

  /* Logic: '<S30>/LogicalOperator' incorporates:
   *  Constant: '<S30>/CAL'
   *  Constant: '<S30>/Define'
   *  RelationalOperator: '<S30>/Equal'
   *  RelationalOperator: '<S30>/Equal1'
   */
  rtb_LogicalOperator_bcue = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_lgu2 <= (real32_T)
    OBCMgmt_S2SwtCtrlChkUAc_CFG));

  /* Logic: '<S29>/OR' incorporates:
   *  Constant: '<S29>/Define'
   *  Constant: '<S29>/Define1'
   *  Constant: '<S29>/Define2'
   *  RelationalOperator: '<S29>/Equal'
   *  RelationalOperator: '<S29>/Equal1'
   *  RelationalOperator: '<S29>/Equal2'
   */
  rtb_OR_j04a = ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init)) ||
                 (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)
    S2Mgmt_OBCDisabling)) || (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)
    S2Mgmt_OBCDisaed)));

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S8>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03347 S2 Ctrl Vol Error
   */
  /* Constant: '<S8>/Define' incorporates:
   *  Constant: '<S8>/CAL'
   *  Constant: '<S8>/Define1'
   *  Constant: '<S8>/Define2'
   *
   * Block requirements for '<S8>/CAL':
   *  1. SWREQ_03345 S2 Ctrl Vol Error
   */
  CtAp_S2Mgmt_ATOM_U16ErrHnd(S2Mgmt_Active, rtb_LogicalOperator_bcue,
    rtb_OR_j04a, OBCMgmt_S2SwtCtrlChkUAcTmt_CFG, ((uint16_T)S2Mgmt_U8ValueZero),
    ((uint16_T)S2Mgmt_dt50ms), &rtb_DataTypeConversion_h0s2,
    &CtAp_S2Mgmt_ARID_DEF.Switch1_iwxc, &CtAp_S2Mgmt_ARID_DEF.Switch8_jasf,
    &CtAp_S2Mgmt_ARID_DEF.Switch6_l2zd,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_cv5h);

  /* End of Outputs for SubSystem: '<S8>/ATOM_U16ErrorHandle' */

  /* Logic: '<S37>/LogicalOperator' incorporates:
   *  Constant: '<S37>/CAL'
   *  Constant: '<S37>/Define'
   *  RelationalOperator: '<S37>/Equal'
   *  RelationalOperator: '<S37>/Equal1'
   */
  rtb_LogicalOperator_cjjs = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_lgu2 <= (real32_T)
    OBCMgmt_S2SwtCtrlChkUAc_CFG));

  /* Outputs for Atomic SubSystem: '<S36>/ATOM_TimeCnt' */
  /* Constant: '<S36>/Define' incorporates:
   *  Constant: '<S36>/CAL'
   *  Constant: '<S36>/Define1'
   */
  rtb_DataTypeConversion_jfxw = CtAp_S2Mgmt_ATOM_TimeCnt(S2Mgmt_Active,
    ((uint16_T)S2Mgmt_dt50ms), OBCMgmt_S2SwtCtrlDTCEnaTim_CFG,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of Outputs for SubSystem: '<S36>/ATOM_TimeCnt' */

  /* Logic: '<S36>/LogicalOperator' */
  rtb_LogicalOperator_oaxk = (rtb_TmpSignalConversionAtR_my00 &&
    rtb_LogicalOperator_ledi_tmp && rtb_LogicalOperator_ledi_tmp_0 &&
    rtb_DataTypeConversion_jfxw);

  /* RelationalOperator: '<S35>/Equal' incorporates:
   *  Constant: '<S35>/Define'
   */
  rtb_Equal_ee1e = (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init));

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_U16ErrorHandle' */
  /* Constant: '<S9>/CAL' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *
   * Block requirements for '<S9>/CAL':
   *  1. SWREQ_03280 S2 Ctrl Vol DTC
   */
  CtAp_S_ATOM_U16ErrorHandle_jbhp(rtb_LogicalOperator_oaxk,
    rtb_LogicalOperator_cjjs, rtb_Equal_ee1e, OBCMgmt_S2SwtCtrlChkUAcTmt_CFG,
    ((uint16_T)S2Mgmt_U8ValueZero), ((uint16_T)S2Mgmt_dt50ms),
    &rtb_DataTypeConversion_ddah, &CtAp_S2Mgmt_ARID_DEF.Switch1_hve5,
    &CtAp_S2Mgmt_ARID_DEF.Switch8_ml0q,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_pbm3);

  /* End of Outputs for SubSystem: '<S9>/ATOM_U16ErrorHandle' */

  /* Logic: '<S44>/LogicalOperator' incorporates:
   *  Constant: '<S44>/Define'
   *  Constant: '<S44>/Define1'
   *  RelationalOperator: '<S44>/Equal'
   *  RelationalOperator: '<S44>/Equal1'
   */
  rtb_LogicalOperator_o044 = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_kkne != ((uint8_T)
    S2Mgmt_Closed)));

  /* Logic: '<S43>/OR' incorporates:
   *  Constant: '<S43>/Define'
   *  Constant: '<S43>/Define1'
   *  Constant: '<S43>/Define2'
   *  RelationalOperator: '<S43>/Equal'
   *  RelationalOperator: '<S43>/Equal1'
   *  RelationalOperator: '<S43>/Equal2'
   */
  rtb_OR_d041 = ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init)) ||
                 (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)
    S2Mgmt_OBCDisabling)) || (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)
    S2Mgmt_OBCDisabed)));

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S10>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03362 S2 Ctrl Cls Error
   */
  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus' incorporates:
   *  Constant: '<S10>/CAL'
   *  Constant: '<S10>/Define'
   *  Constant: '<S10>/Define1'
   *  Constant: '<S10>/Define2'
   *  Delay generated from: '<S2>/Delay1'
   *
   * Block requirements for '<S10>/CAL':
   *  1. SWREQ_03360 S2 Ctrl Cls Error
   */
  CtAp_S2Mgmt_ATOM_U16ErrHnd(S2Mgmt_Active, rtb_LogicalOperator_o044,
    rtb_OR_d041, OBCMgmt_S2SwtCtrlClsTmt_CFG, ((uint16_T)S2Mgmt_U8ValueZero),
    ((uint16_T)S2Mgmt_dt50ms),
    &CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErr_Bus_t.OBCMgmt_MonStatS2SwtClsErr,
    &CtAp_S2Mgmt_ARID_DEF.Delay1_2_DSTATE, &CtAp_S2Mgmt_ARID_DEF.Delay1_3_DSTATE,
    &CtAp_S2Mgmt_ARID_DEF.Delay1_4_DSTATE,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_cxar);

  /* End of Outputs for SubSystem: '<S10>/ATOM_U16ErrorHandle' */

  /* Logic: '<S51>/LogicalOperator' incorporates:
   *  Constant: '<S51>/Define'
   *  Constant: '<S51>/Define1'
   *  RelationalOperator: '<S51>/Equal'
   *  RelationalOperator: '<S51>/Equal1'
   */
  rtb_LogicalOperator_hog5 = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_CloseReq)) && (rtb_TmpSignalConversionAtR_kkne != ((uint8_T)
    S2Mgmt_Closed)));

  /* Outputs for Atomic SubSystem: '<S50>/ATOM_TimeCnt' */
  /* Constant: '<S50>/Define' incorporates:
   *  Constant: '<S50>/CAL'
   *  Constant: '<S50>/Define1'
   */
  rtb_DataTypeConversion_paiv = CtAp_S2Mgmt_ATOM_TimeCnt(S2Mgmt_Active,
    ((uint16_T)S2Mgmt_dt50ms), OBCMgmt_S2SwtCtrlDTCEnaTim_CFG,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cl54);

  /* End of Outputs for SubSystem: '<S50>/ATOM_TimeCnt' */

  /* Logic: '<S50>/LogicalOperator' */
  rtb_LogicalOperator_fwvz = (rtb_TmpSignalConversionAtR_oh5p &&
    rtb_DataTypeConversion_paiv);

  /* RelationalOperator: '<S49>/Equal' incorporates:
   *  Constant: '<S49>/Define'
   */
  rtb_Equal_m5jb = (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S11>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03298 S2 Cls DTC
   */
  /* Constant: '<S11>/CAL' incorporates:
   *  Constant: '<S11>/Define'
   *  Constant: '<S11>/Define1'
   *
   * Block requirements for '<S11>/CAL':
   *  1. SWREQ_03296 S2 Cls DTC
   */
  CtAp_S_ATOM_U16ErrorHandle_isn5(rtb_LogicalOperator_fwvz,
    rtb_LogicalOperator_hog5, rtb_Equal_m5jb, OBCMgmt_S2SwtCtrlClsTmt_CFG,
    ((uint16_T)S2Mgmt_U8ValueZero), ((uint16_T)S2Mgmt_dt50ms),
    &rtb_DataTypeConversion_jfxw, &CtAp_S2Mgmt_ARID_DEF.Switch1_gcxj,
    &CtAp_S2Mgmt_ARID_DEF.Switch8_c22b,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_kkiq);

  /* End of Outputs for SubSystem: '<S11>/ATOM_U16ErrorHandle' */

  /* Logic: '<S58>/LogicalOperator' incorporates:
   *  Constant: '<S58>/Define'
   *  Constant: '<S58>/Define1'
   *  RelationalOperator: '<S58>/Equal'
   *  RelationalOperator: '<S58>/Equal1'
   */
  rtb_LogicalOperator_j22m = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_S2OpenReq)) && (rtb_TmpSignalConversionAtR_kkne !=
    ((uint8_T)S2Mgmt_Opened)));

  /* Logic: '<S57>/OR' incorporates:
   *  Constant: '<S57>/Define'
   *  Constant: '<S57>/Define1'
   *  RelationalOperator: '<S57>/Equal'
   *  RelationalOperator: '<S57>/Equal1'
   */
  rtb_OR_gofo = ((rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init)) ||
                 (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)
    S2Mgmt_ChargePreparing)));

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S12>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03378 S2 Ctrl Open Error
   */
  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus' incorporates:
   *  Constant: '<S12>/CAL'
   *  Constant: '<S12>/Define'
   *  Constant: '<S12>/Define1'
   *  Constant: '<S12>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S12>/CAL':
   *  1. SWREQ_03376 S2 Ctrl Open Error
   */
  CtAp_S2Mgmt_ATOM_U16ErrHnd(S2Mgmt_Active, rtb_LogicalOperator_j22m,
    rtb_OR_gofo, OBCMgmt_S2SwtCtrlOpenTmt_CFG, ((uint16_T)S2Mgmt_U8ValueZero),
    ((uint16_T)S2Mgmt_dt50ms),
    &CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErr_Bus_.OBCMgmt_MonStatS2SwtOpenErr,
    &CtAp_S2Mgmt_ARID_DEF.Delay_2_DSTATE, &CtAp_S2Mgmt_ARID_DEF.Delay_3_DSTATE,
    &CtAp_S2Mgmt_ARID_DEF.Delay_4_DSTATE,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_mbvz);

  /* End of Outputs for SubSystem: '<S12>/ATOM_U16ErrorHandle' */

  /* Logic: '<S65>/LogicalOperator' incorporates:
   *  Constant: '<S65>/Define'
   *  Constant: '<S65>/Define1'
   *  RelationalOperator: '<S65>/Equal'
   *  RelationalOperator: '<S65>/Equal1'
   */
  rtb_LogicalOperator_olzw = ((CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum ==
    ((uint8_T)S2Mgmt_S2OpenReq)) && (rtb_TmpSignalConversionAtR_kkne !=
    ((uint8_T)S2Mgmt_Opened)));

  /* Outputs for Atomic SubSystem: '<S64>/ATOM_TimeCnt' */
  /* Constant: '<S64>/Define' incorporates:
   *  Constant: '<S64>/CAL'
   *  Constant: '<S64>/Define1'
   */
  rtb_DataTypeConversion_paiv = CtAp_S2Mgmt_ATOM_TimeCnt(S2Mgmt_Active,
    ((uint16_T)S2Mgmt_dt50ms), OBCMgmt_S2SwtCtrlDTCEnaTim_CFG,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S64>/ATOM_TimeCnt' */

  /* Logic: '<S64>/LogicalOperator' */
  rtb_LogicalOperator_ovlf = (rtb_TmpSignalConversionAtR_oh5p &&
    rtb_DataTypeConversion_paiv);

  /* RelationalOperator: '<S63>/Equal' incorporates:
   *  Constant: '<S63>/Define'
   */
  rtb_Equal_opnc = (rtb_TmpSignalConversionAtR_iqzg == ((uint8_T)S2Mgmt_Init));

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S13>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03314 S2 Open DTC
   */
  /* Constant: '<S13>/CAL' incorporates:
   *  Constant: '<S13>/Define'
   *  Constant: '<S13>/Define1'
   */
  CtAp_S_ATOM_U16ErrorHandle_gkze(rtb_LogicalOperator_ovlf,
    rtb_LogicalOperator_olzw, rtb_Equal_opnc, OBCMgmt_S2SwtCtrlOpenTmt_CFG,
    ((uint16_T)S2Mgmt_U8ValueZero), ((uint16_T)S2Mgmt_dt50ms),
    &rtb_DataTypeConversion_paiv, &CtAp_S2Mgmt_ARID_DEF.Switch1,
    &CtAp_S2Mgmt_ARID_DEF.Switch8,
    &CtAp_S2Mgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S13>/ATOM_U16ErrorHandle' */

  /* Update for Delay: '<S2>/Delay2' */
  CtAp_S2Mgmt_ARID_DEF.Delay2_DSTATE = rtb_TmpSignalConversionAtR_lx12;

  /* End of Outputs for SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErr_Bus_t.OBCMgmt_MonStatCPStsJmpErr
    = rtb_DataTypeConversion_dyls;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErr_Bus_t.OBCMgmt_MonResCPStsJmpErr
    = CtAp_S2Mgmt_ARID_DEF.Switch1_pfgz;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErr_Bus_t.OBCMgmt_ErrStatCPStsJmpErr
    = CtAp_S2Mgmt_ARID_DEF.Switch8_j4eq;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErr_Bus_t.OBCMgmt_ErrResCPStsJmpErr
    = CtAp_S2Mgmt_ARID_DEF.Switch6_klig;

  /* Outport: '<Root>/RTE_P_OBCMgmt_CPStsJmpErrDTC_Bus_tec_OBCMgmt_CPStsJmpErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_CPStsJmpErrDTC_Bus_tec_OBCMgmt_CPStsJmpErrDTC_Bus'
   *  DataTypeConversion: '<S7>/DataTypeConversion'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu.OBCMgmt_MonStatCPStsJmpErrDTC
    = rtb_DataTypeConversion_aucw;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu.OBCMgmt_MonResCPStsJmpErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch1_himi;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu.OBCMgmt_ErrStatCPStsJmpErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch8_nl40;

  /* Outputs for Atomic SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu.OBCMgmt_ErrResCPStsJmpErrDTC
    = OBCMgmt_ErrResCPStsJmpErrDTC;

  /* End of Outputs for SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu.OBCMgmt_MonStatOBCInpUDcLoErr
    = rtb_DataTypeConversion_h0s2;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu.OBCMgmt_MonResOBCInpUDcLoErr
    = CtAp_S2Mgmt_ARID_DEF.Switch1_iwxc;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu.OBCMgmt_ErrStatOBCInpUDcLoErr
    = CtAp_S2Mgmt_ARID_DEF.Switch8_jasf;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu.OBCMgmt_ErrResOBCInpUDcLoErr
    = CtAp_S2Mgmt_ARID_DEF.Switch6_l2zd;

  /* Outport: '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErrDTC_Bus_tec_OBCMgmt_OBCInpUDcLoErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErrDTC_Bus_tec_OBCMgmt_OBCInpUDcLoErrDTC_Bus'
   *  DataTypeConversion: '<S9>/DataTypeConversion'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErrDTC.OBCMgmt_MonStatOBCInpUDcLoErrDTC
    = rtb_DataTypeConversion_ddah;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErrDTC.OBCMgmt_MonResOBCInpUDcLoErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch1_hve5;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErrDTC.OBCMgmt_ErrStatOBCInpUDcLoErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch8_ml0q;

  /* Outputs for Atomic SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErrDTC.OBCMgmt_ErrResOBCInpUDcLoErrDTC
    = OBCMgmt_ErrResOBCInpUDcLoErrDTC;

  /* End of Outputs for SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus'
   *  Delay generated from: '<S2>/Delay1'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErr_Bus_t.OBCMgmt_MonResS2SwtClsErr
    = CtAp_S2Mgmt_ARID_DEF.Delay1_2_DSTATE;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErr_Bus_t.OBCMgmt_ErrStatS2SwtClsErr
    = CtAp_S2Mgmt_ARID_DEF.Delay1_3_DSTATE;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErr_Bus_t.OBCMgmt_ErrResS2SwtClsErr
    = CtAp_S2Mgmt_ARID_DEF.Delay1_4_DSTATE;

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtClsErrDTC_Bus_tec_OBCMgmt_S2SwtClsErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_S2SwtClsErrDTC_Bus_tec_OBCMgmt_S2SwtClsErrDTC_Bus'
   *  DataTypeConversion: '<S11>/DataTypeConversion'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu.OBCMgmt_MonStatS2SwtClsErrDTC
    = rtb_DataTypeConversion_jfxw;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu.OBCMgmt_MonResS2SwtClsErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch1_gcxj;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu.OBCMgmt_ErrStatS2SwtClsErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch8_c22b;

  /* Outputs for Atomic SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu.OBCMgmt_ErrResS2SwtClsErrDTC
    = OBCMgmt_ErrResS2SwtClsErrDTC;

  /* End of Outputs for SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum' */
  (void)Rte_Write_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum
    (CtAp_S2Mgmt_ARID_DEF.OBCMgmt_S2SwtCtrlCmd_Enum);

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum' */
  (void)Rte_Write_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum
    (rtb_OBCMgmt_S2SwtCtrlSts_Enum);

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErr_Bus_.OBCMgmt_MonResS2SwtOpenErr
    = CtAp_S2Mgmt_ARID_DEF.Delay_2_DSTATE;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErr_Bus_.OBCMgmt_ErrStatS2SwtOpenErr
    = CtAp_S2Mgmt_ARID_DEF.Delay_3_DSTATE;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErr_Bus_.OBCMgmt_ErrResS2SwtOpenErr
    = CtAp_S2Mgmt_ARID_DEF.Delay_4_DSTATE;

  /* Outport: '<Root>/RTE_P_OBCMgmt_S2SwtOpenErrDTC_Bus_tec_OBCMgmt_S2SwtOpenErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_S2SwtOpenErrDTC_Bus_tec_OBCMgmt_S2SwtOpenErrDTC_Bus'
   *  DataTypeConversion: '<S13>/DataTypeConversion'
   */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErrDTC_B.OBCMgmt_MonStatS2SwtOpenErrDTC
    = rtb_DataTypeConversion_paiv;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErrDTC_B.OBCMgmt_MonResS2SwtOpenErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch1;
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErrDTC_B.OBCMgmt_ErrStatS2SwtOpenErrDTC
    = CtAp_S2Mgmt_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErrDTC_B.OBCMgmt_ErrResS2SwtOpenErrDTC
    = OBCMgmt_ErrResS2SwtOpenErrDTC;

  /* End of Outputs for SubSystem: '<Root>/R_S2Mgmt_Cyclic_50ms_sys' */
  (void)Rte_Write_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErr_Bus_t);
  (void)
    Rte_Write_RTE_P_OBCMgmt_CPStsJmpErrDTC_Bus_tec_OBCMgmt_CPStsJmpErrDTC_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu);
  (void)
    Rte_Write_RTE_P_OBCMgmt_OBCInpUDcLoErrDTC_Bus_tec_OBCMgmt_OBCInpUDcLoErrDTC_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_OBCInpUDcLoErrDTC);
  (void)Rte_Write_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErr_Bus_t);
  (void)
    Rte_Write_RTE_P_OBCMgmt_S2SwtClsErrDTC_Bus_tec_OBCMgmt_S2SwtClsErrDTC_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu);
  (void)Rte_Write_RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus
    (&CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErr_Bus_);
  (void)
    Rte_Write_RTE_P_OBCMgmt_S2SwtOpenErrDTC_Bus_tec_OBCMgmt_S2SwtOpenErrDTC_Bus(
    &CtAp_S2Mgmt_ARID_DEF.RTE_P_OBCMgmt_S2SwtOpenErrDTC_B);
}

#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_S2Mgmt_START_SEC_VAR_CONST_8
#include "CtAp_S2Mgmt_MemMap.h"

void R_S2Mgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  OBCMgmt_ErrResS2SwtOpenErrDTC = false;
  OBCMgmt_ErrResS2SwtClsErrDTC = false;
  OBCMgmt_ErrResOBCInpUDcLoErrDTC = false;
  OBCMgmt_ErrResCPStsJmpErrDTC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_S2Mgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_S2Mgmt_T));
}

#define CtAp_S2Mgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_S2Mgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
