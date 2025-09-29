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
 *  Filename:           CtAp_BMSMgmt.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:26:58 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:26:09 2025
 *
 *
 *******************************************************************************/
#include "CtAp_BMSMgmt.h"
#include "rtwtypes.h"
#include "CtAp_BMSMgmt_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_BMSMgmt_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_BMSMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"

ARID_DEF_CtAp_BMSMgmt_T CtAp_BMSMgmt_ARID_DEF;

#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S17>/ATOM_TimeCnt3'
 *    '<S18>/ATOM_TimeCnt2'
 *    '<S19>/ATOM_TimeCnt1'
 *    '<S20>/ATOM_TimeCnt4'
 *    '<S21>/ATOM_TimeCnt4'
 *    '<S21>/ATOM_TimeCnt5'
 *    '<S22>/ATOM_TimeCnt6'
 *    '<S8>/ATOM_TimeCnt1'
 *    '<S8>/ATOM_TimeCnt2'
 *    '<S8>/ATOM_TimeCnt4'
 *    ...
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

boolean_T CtAp_BMSMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_BM_T
  *CtAp_BMSMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1_ov1i;

  /* Sum: '<S23>/Add1' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion'
   *  DataTypeConversion: '<S23>/Data Type Conversion1'
   */
  rtb_Add1_ov1i = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S23>/Switch' */
  if (rtu_In) {
    /* Sum: '<S23>/Add' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  UnitDelay: '<S23>/Delay'
     */
    CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S23>/Min' */
    if (rtb_Add1_ov1i <= CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S23>/Add' */
      CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_ov1i;
    }

    /* End of MinMax: '<S23>/Min' */
  } else {
    /* Sum: '<S23>/Add' incorporates:
     *  Constant: '<S23>/Constant'
     *  UnitDelay: '<S23>/Delay'
     */
    CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S23>/Switch' */

  /* RelationalOperator: '<S23>/Relational Operator' incorporates:
   *  UnitDelay: '<S23>/Delay'
   */
  return CtAp_BMSMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_ov1i;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S17>/NoTiAndMonR'
 *    '<S21>/NoTiAndMonR'
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes)
{
  /* DataTypeConversion: '<S25>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S25>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant2'
     *  DataTypeConversion: '<S26>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Switch: '<S26>/Switch3' incorporates:
     *  Constant: '<S26>/Constant5'
     *  Constant: '<S26>/F'
     *  Constant: '<S26>/P'
     *  RelationalOperator: '<S26>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S26>/Switch3' */

    /* Switch: '<S26>/Switch6' incorporates:
     *  Constant: '<S26>/Constant11'
     *  Constant: '<S26>/Constant30'
     *  Constant: '<S26>/Constant32'
     *  RelationalOperator: '<S26>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else {
      *rty_ErrorRes = false;
    }

    /* End of Switch: '<S26>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S25>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* System initialize for atomic system: '<S18>/NoDT' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoDT_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S33>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S34>/Switch1' incorporates:
   *  Outport: '<S34>/MonRes'
   */
  HvMgmt_MonResBMSRlyClsDTCOne = ((uint8_T)0U);

  /* SystemInitialize for Switch: '<S34>/Switch8' incorporates:
   *  Outport: '<S34>/ErrStat'
   */
  HvMgmt_ErrStatBMSRlyClsDTCOne = ((uint8_T)0U);

  /* SystemInitialize for Switch: '<S34>/Switch6' incorporates:
   *  Outport: '<S34>/ErrorRes'
   */
  HvMgmt_ErrResBMSRlyClsDTCOne = false;

  /* End of SystemInitialize for SubSystem: '<S33>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Output and update for atomic system: '<S18>/NoDT' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T rtu_SetCondition,
  boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt,
  boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_BMSMgmt_T
  *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S33>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S34>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2_oj3p;

    /* Switch: '<S34>/Switch1' incorporates:
     *  Switch: '<S34>/Switch'
     */
    if (rtu_ResetCondition) {
      /* Switch: '<S34>/Switch1' incorporates:
       *  Constant: '<S34>/Constant2'
       */
      HvMgmt_MonResBMSRlyClsDTCOne = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S34>/Switch' incorporates:
       *  Constant: '<S34>/Constant'
       *  Switch: '<S34>/Switch1'
       */
      HvMgmt_MonResBMSRlyClsDTCOne = ((uint8_T)1U);
    } else {
      /* Switch: '<S34>/Switch1' incorporates:
       *  Constant: '<S34>/Constant4'
       *  Switch: '<S34>/Switch'
       */
      HvMgmt_MonResBMSRlyClsDTCOne = ((uint8_T)2U);
    }

    /* End of Switch: '<S34>/Switch1' */

    /* RelationalOperator: '<S34>/Equal2' incorporates:
     *  Constant: '<S34>/Constant5'
     */
    rtb_Equal2_oj3p = (HvMgmt_MonResBMSRlyClsDTCOne == ((uint8_T)1U));

    /* Switch: '<S35>/Switch1' */
    if (rtb_Equal2_oj3p) {
      uint16_T u0;

      /* Sum: '<S35>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S35>/Sum' incorporates:
       *  UnitDelay: '<S35>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S35>/MinMax' */
      if (u0 <= CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S35>/Sum' */
        CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S35>/MinMax' */
    } else {
      /* Sum: '<S35>/Sum' incorporates:
       *  Constant: '<S34>/Constant37'
       *  UnitDelay: '<S35>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S35>/Switch1' */

    /* Switch: '<S34>/Switch8' incorporates:
     *  Constant: '<S34>/Constant6'
     *  RelationalOperator: '<S34>/Equal6'
     *  RelationalOperator: '<S35>/B_MiHold'
     *  Switch: '<S34>/Switch2'
     *  Switch: '<S34>/Switch3'
     *  UnitDelay: '<S35>/UnitDelay'
     */
    if (HvMgmt_MonResBMSRlyClsDTCOne == ((uint8_T)2U)) {
      /* Switch: '<S34>/Switch8' incorporates:
       *  Constant: '<S34>/DEBOUNCING'
       */
      HvMgmt_ErrStatBMSRlyClsDTCOne = ((uint8_T)4U);
    } else if (CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S34>/Switch2' incorporates:
       *  Constant: '<S34>/FAILED'
       *  Switch: '<S34>/Switch8'
       */
      HvMgmt_ErrStatBMSRlyClsDTCOne = ((uint8_T)2U);
    } else if (rtb_Equal2_oj3p) {
      /* Switch: '<S34>/Switch3' incorporates:
       *  Constant: '<S34>/DEBOUNCING_F'
       *  Switch: '<S34>/Switch2'
       *  Switch: '<S34>/Switch8'
       */
      HvMgmt_ErrStatBMSRlyClsDTCOne = ((uint8_T)3U);
    } else {
      /* Switch: '<S34>/Switch8' incorporates:
       *  Constant: '<S34>/PASSED'
       *  Switch: '<S34>/Switch2'
       *  Switch: '<S34>/Switch3'
       */
      HvMgmt_ErrStatBMSRlyClsDTCOne = ((uint8_T)0U);
    }

    /* End of Switch: '<S34>/Switch8' */

    /* Switch: '<S34>/Switch6' incorporates:
     *  Constant: '<S34>/Constant30'
     *  Constant: '<S34>/Constant31'
     *  RelationalOperator: '<S34>/Equal3'
     *  RelationalOperator: '<S34>/Equal4'
     *  Switch: '<S34>/Switch7'
     */
    if (HvMgmt_ErrStatBMSRlyClsDTCOne == ((uint8_T)2U)) {
      /* Switch: '<S34>/Switch6' incorporates:
       *  Constant: '<S34>/Constant32'
       */
      HvMgmt_ErrResBMSRlyClsDTCOne = true;
    } else if (HvMgmt_ErrStatBMSRlyClsDTCOne == ((uint8_T)0U)) {
      /* Switch: '<S34>/Switch7' incorporates:
       *  Constant: '<S34>/Constant11'
       *  Switch: '<S34>/Switch6'
       */
      HvMgmt_ErrResBMSRlyClsDTCOne = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S34>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S33>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* System initialize for atomic system: '<S19>/NoDT' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoDT_bf2p_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S47>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S48>/Switch1' incorporates:
   *  Outport: '<S48>/MonRes'
   */
  HvMgmt_MonResBMSRlyClsDTCTwo = ((uint8_T)0U);

  /* SystemInitialize for Switch: '<S48>/Switch8' incorporates:
   *  Outport: '<S48>/ErrStat'
   */
  HvMgmt_ErrStatBMSRlyClsDTCTwo = ((uint8_T)0U);

  /* SystemInitialize for Switch: '<S48>/Switch6' incorporates:
   *  Outport: '<S48>/ErrorRes'
   */
  HvMgmt_ErrResBMSRlyClsDTCTwo = false;

  /* End of SystemInitialize for SubSystem: '<S47>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Output and update for atomic system: '<S19>/NoDT' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoDT_pjnp(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_BMSMg_holk_T
  *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S47>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S47>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2_ajfo;

    /* Switch: '<S48>/Switch1' incorporates:
     *  Switch: '<S48>/Switch'
     */
    if (rtu_ResetCondition) {
      /* Switch: '<S48>/Switch1' incorporates:
       *  Constant: '<S48>/Constant2'
       */
      HvMgmt_MonResBMSRlyClsDTCTwo = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S48>/Switch' incorporates:
       *  Constant: '<S48>/Constant'
       *  Switch: '<S48>/Switch1'
       */
      HvMgmt_MonResBMSRlyClsDTCTwo = ((uint8_T)1U);
    } else {
      /* Switch: '<S48>/Switch1' incorporates:
       *  Constant: '<S48>/Constant4'
       *  Switch: '<S48>/Switch'
       */
      HvMgmt_MonResBMSRlyClsDTCTwo = ((uint8_T)2U);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* RelationalOperator: '<S48>/Equal2' incorporates:
     *  Constant: '<S48>/Constant5'
     */
    rtb_Equal2_ajfo = (HvMgmt_MonResBMSRlyClsDTCTwo == ((uint8_T)1U));

    /* Switch: '<S49>/Switch1' */
    if (rtb_Equal2_ajfo) {
      uint16_T u0;

      /* Sum: '<S49>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S49>/Sum' incorporates:
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S49>/MinMax' */
      if (u0 <= CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S49>/Sum' */
        CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S49>/MinMax' */
    } else {
      /* Sum: '<S49>/Sum' incorporates:
       *  Constant: '<S48>/Constant37'
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S48>/Switch8' incorporates:
     *  Constant: '<S48>/Constant6'
     *  RelationalOperator: '<S48>/Equal6'
     *  RelationalOperator: '<S49>/B_MiHold'
     *  Switch: '<S48>/Switch2'
     *  Switch: '<S48>/Switch3'
     *  UnitDelay: '<S49>/UnitDelay'
     */
    if (HvMgmt_MonResBMSRlyClsDTCTwo == ((uint8_T)2U)) {
      /* Switch: '<S48>/Switch8' incorporates:
       *  Constant: '<S48>/DEBOUNCING'
       */
      HvMgmt_ErrStatBMSRlyClsDTCTwo = ((uint8_T)4U);
    } else if (CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S48>/Switch2' incorporates:
       *  Constant: '<S48>/FAILED'
       *  Switch: '<S48>/Switch8'
       */
      HvMgmt_ErrStatBMSRlyClsDTCTwo = ((uint8_T)2U);
    } else if (rtb_Equal2_ajfo) {
      /* Switch: '<S48>/Switch3' incorporates:
       *  Constant: '<S48>/DEBOUNCING_F'
       *  Switch: '<S48>/Switch2'
       *  Switch: '<S48>/Switch8'
       */
      HvMgmt_ErrStatBMSRlyClsDTCTwo = ((uint8_T)3U);
    } else {
      /* Switch: '<S48>/Switch8' incorporates:
       *  Constant: '<S48>/PASSED'
       *  Switch: '<S48>/Switch2'
       *  Switch: '<S48>/Switch3'
       */
      HvMgmt_ErrStatBMSRlyClsDTCTwo = ((uint8_T)0U);
    }

    /* End of Switch: '<S48>/Switch8' */

    /* Switch: '<S48>/Switch6' incorporates:
     *  Constant: '<S48>/Constant30'
     *  Constant: '<S48>/Constant31'
     *  RelationalOperator: '<S48>/Equal3'
     *  RelationalOperator: '<S48>/Equal4'
     *  Switch: '<S48>/Switch7'
     */
    if (HvMgmt_ErrStatBMSRlyClsDTCTwo == ((uint8_T)2U)) {
      /* Switch: '<S48>/Switch6' incorporates:
       *  Constant: '<S48>/Constant32'
       */
      HvMgmt_ErrResBMSRlyClsDTCTwo = true;
    } else if (HvMgmt_ErrStatBMSRlyClsDTCTwo == ((uint8_T)0U)) {
      /* Switch: '<S48>/Switch7' incorporates:
       *  Constant: '<S48>/Constant11'
       *  Switch: '<S48>/Switch6'
       */
      HvMgmt_ErrResBMSRlyClsDTCTwo = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S48>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S47>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Output and update for atomic system: '<S20>/ATOM_U16ErrorHandle' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S51>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S51>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_hhel;

    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S56>/Constant2'
     *  Constant: '<S56>/Constant4'
     *  Switch: '<S56>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S56>/Switch' incorporates:
       *  Constant: '<S56>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S56>/Switch1' */

    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S56>/Constant3'
     *  RelationalOperator: '<S56>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S58>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S58>/Sum' incorporates:
       *  UnitDelay: '<S58>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S58>/MinMax' */
      if (u0 <= CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S58>/Sum' */
        CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S58>/MinMax' */
    } else {
      /* Sum: '<S58>/Sum' incorporates:
       *  Constant: '<S56>/Constant23'
       *  UnitDelay: '<S58>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S58>/Switch1' */

    /* RelationalOperator: '<S56>/Equal2' incorporates:
     *  Constant: '<S56>/Constant5'
     */
    rtb_Equal2_hhel = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S57>/Switch1' */
    if (rtb_Equal2_hhel) {
      /* Sum: '<S57>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S57>/Sum' incorporates:
       *  UnitDelay: '<S57>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z);

      /* MinMax: '<S57>/MinMax' */
      if (u0 <= CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z) {
        /* Sum: '<S57>/Sum' */
        CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z = u0;
      }

      /* End of MinMax: '<S57>/MinMax' */
    } else {
      /* Sum: '<S57>/Sum' incorporates:
       *  Constant: '<S56>/Constant37'
       *  UnitDelay: '<S57>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z = ((uint16_T)0U);
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Switch: '<S56>/Switch8' incorporates:
     *  Constant: '<S56>/Constant6'
     *  Constant: '<S56>/DEBOUNCING'
     *  RelationalOperator: '<S56>/Equal6'
     *  RelationalOperator: '<S57>/B_MiHold'
     *  RelationalOperator: '<S58>/B_MiHold'
     *  Switch: '<S56>/Switch2'
     *  Switch: '<S56>/Switch3'
     *  Switch: '<S56>/Switch4'
     *  UnitDelay: '<S57>/UnitDelay'
     *  UnitDelay: '<S58>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE_lr4z >
               rtu_MatureTime) {
      /* Switch: '<S56>/Switch2' incorporates:
       *  Constant: '<S56>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_hhel) {
      /* Switch: '<S56>/Switch3' incorporates:
       *  Constant: '<S56>/DEBOUNCING_F'
       *  Switch: '<S56>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S56>/Switch4' incorporates:
       *  Constant: '<S56>/PASSED'
       *  Switch: '<S56>/Switch2'
       *  Switch: '<S56>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S56>/Switch3' incorporates:
       *  Constant: '<S56>/DEBOUNCING_P'
       *  Switch: '<S56>/Switch2'
       *  Switch: '<S56>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S56>/Switch8' */

    /* Switch: '<S56>/Switch6' incorporates:
     *  Constant: '<S56>/Constant30'
     *  Constant: '<S56>/Constant31'
     *  Constant: '<S56>/Constant32'
     *  Delay: '<S56>/Delay1'
     *  RelationalOperator: '<S56>/Equal3'
     *  RelationalOperator: '<S56>/Equal4'
     *  Switch: '<S56>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S56>/Switch7' incorporates:
       *  Constant: '<S56>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_BMSMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S56>/Switch6' */

    /* Update for Delay: '<S56>/Delay1' */
    CtAp_BMSMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S51>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Output and update for atomic system: '<S22>/NoDT' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_NoDT_lspv(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_BMSMg_b2ky_T
  *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S77>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S77>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S78>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2_nodp;

    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S78>/Constant2'
     *  Constant: '<S78>/Constant4'
     *  Switch: '<S78>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S78>/Switch' incorporates:
       *  Constant: '<S78>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S78>/Switch1' */

    /* RelationalOperator: '<S78>/Equal2' incorporates:
     *  Constant: '<S78>/Constant5'
     */
    rtb_Equal2_nodp = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S79>/Switch1' */
    if (rtb_Equal2_nodp) {
      uint16_T u0;

      /* Sum: '<S79>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S79>/Sum' incorporates:
       *  UnitDelay: '<S79>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S79>/MinMax' */
      if (u0 <= CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S79>/Sum' */
        CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S79>/MinMax' */
    } else {
      /* Sum: '<S79>/Sum' incorporates:
       *  Constant: '<S78>/Constant37'
       *  UnitDelay: '<S79>/UnitDelay'
       */
      CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S79>/Switch1' */

    /* Switch: '<S78>/Switch8' incorporates:
     *  Constant: '<S78>/Constant6'
     *  Constant: '<S78>/DEBOUNCING'
     *  RelationalOperator: '<S78>/Equal6'
     *  RelationalOperator: '<S79>/B_MiHold'
     *  Switch: '<S78>/Switch2'
     *  Switch: '<S78>/Switch3'
     *  UnitDelay: '<S79>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S78>/Switch2' incorporates:
       *  Constant: '<S78>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_nodp) {
      /* Switch: '<S78>/Switch3' incorporates:
       *  Constant: '<S78>/DEBOUNCING_F'
       *  Switch: '<S78>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      /* Switch: '<S78>/Switch2' incorporates:
       *  Constant: '<S78>/PASSED'
       *  Switch: '<S78>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S78>/Switch8' */

    /* Switch: '<S78>/Switch6' incorporates:
     *  Constant: '<S78>/Constant30'
     *  Constant: '<S78>/Constant31'
     *  Constant: '<S78>/Constant32'
     *  Delay: '<S78>/Delay1'
     *  RelationalOperator: '<S78>/Equal3'
     *  RelationalOperator: '<S78>/Equal4'
     *  Switch: '<S78>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S78>/Switch7' incorporates:
       *  Constant: '<S78>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_BMSMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S78>/Switch6' */

    /* Update for Delay: '<S78>/Delay1' */
    CtAp_BMSMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S77>/ErrorHandleSysU16' */
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/If'
 *    '<S8>/If1'
 *    '<S8>/If3'
 *    '<S8>/If4'
 *    '<S8>/If5'
 *    '<S9>/If'
 *    '<S9>/If1'
 *    '<S9>/If3'
 *    '<S9>/If4'
 *    '<S9>/If5'
 *    ...
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

uint8_T CtAp_BMSMgmt_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S99>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S99>/Switch' */
  return rty_Out1_0;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/If'
 *    '<S11>/If1'
 *    '<S12>/If2'
 *    '<S13>/If'
 *    '<S184>/If3'
 *    '<S185>/If'
 *    '<S14>/If'
 *    '<S14>/If1'
 *    '<S15>/If'
 *    '<S15>/If1'
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

boolean_T CtAp_BMSMgmt_If_lssa(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S148>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S148>/Switch' */
  return rty_Out1_0;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S185>/ATOM_OnDelay'
 *    '<S185>/ATOM_OnDelay1'
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void CtAp_BMSMgmt_ATOM_OnDelay_Init(real32_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_BM_T *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S214>/UnitDelay' */
  CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S185>/ATOM_OnDelay'
 *    '<S185>/ATOM_OnDelay1'
 */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

boolean_T CtAp_BMSMgmt_ATOM_OnDelay(boolean_T rtu_x, real32_T rtu_tm_dly,
  real32_T rtu_dt, real32_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_BM_T
  *CtAp_BMSMgmt__ARID_DEF_arg)
{
  /* Switch: '<S214>/Switch1' incorporates:
   *  MinMax: '<S214>/MinMax'
   *  Sum: '<S214>/Sum'
   *  Sum: '<S214>/Sum1'
   *  UnitDelay: '<S214>/UnitDelay'
   */
  if (rtu_x) {
    CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = fminf(rtu_tm_dly + rtu_dt,
      rtu_dt + CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE);
  } else {
    CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S214>/Switch1' */

  /* RelationalOperator: '<S214>/B_MiHold' incorporates:
   *  UnitDelay: '<S214>/UnitDelay'
   */
  return CtAp_BMSMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Output and update for atomic system: '<S14>/If3' */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

real32_T CtAp_BMSMgmt_If3(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S194>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S194>/Switch' */
  return rty_Out1_0;
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_BMSMgmt_START_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

void R_BMSMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  real32_T rtb_ComM_BSBattSOC_pct;
  uint16_T rtb_Add;
  uint16_T rtb_Add1_lhgb;
  uint16_T rtb_Add2;
  uint16_T rtb_Add2_jhkw;
  uint16_T rtb_Add1_otaa;
  uint16_T rtb_Add3;
  uint8_T rtb_MinMax;
  uint8_T rtb_Delay2;
  uint8_T rtb_Switch_kheb;
  boolean_T rtb_LogicalOperator18;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator2_h12h;
  boolean_T rtb_LogicalOperator_nroe;
  boolean_T rtb_LogicalOperator9_ir1r;
  boolean_T rtb_LogicalOperator1_egfb;
  boolean_T rtb_LogicalOperator18_ndpg;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_Compare_g0ut;
  boolean_T rtb_LogicalOperator_bjsu;
  boolean_T rtb_Compare_aqtd;
  boolean_T rtb_Compare_oa0f;
  boolean_T rtb_Compare_esuk;
  boolean_T rtb_Compare_jqnk;
  boolean_T rtb_LogicalOperator_hwt0;
  boolean_T rtb_Compare_c3hq;
  boolean_T rtb_LogicalOperator5_olwm;
  boolean_T rtb_LogicalOperator_c2we;
  boolean_T rtb_LogicalOperator1_jaye;
  boolean_T rtb_Compare_dnt3;
  boolean_T rtb_LogicalOperator_ey5r;
  boolean_T rtb_LogicalOperator8_fzrd;
  boolean_T rtb_LogicalOperator2_apgd;
  boolean_T rtb_Compare_izix;
  boolean_T rtb_LogicalOperator6_ln51;
  boolean_T rtb_LogicalOperator3_ejxm;
  boolean_T rtb_LogicalOperator1_b1xk;
  boolean_T rtb_LogicalOperator3_gaau;
  boolean_T rtb_LogicalOperator_dfbr;
  boolean_T rtb_Compare_fmvq;
  boolean_T rtb_LogicalOperator2_l3w4;
  boolean_T rtb_Compare_myqq;
  boolean_T rtb_LogicalOperator9_bnou;
  boolean_T rtb_LogicalOperator8_mz2f;
  boolean_T rtb_Compare_bwkv;
  boolean_T rtb_LogicalOperator7_kv3q;
  boolean_T rtb_Compare_lk0g;
  boolean_T rtb_LogicalOperator4_cqxz;
  boolean_T rtb_Compare_mjeb;
  boolean_T rtb_LogicalOperator6_naet;
  boolean_T rtb_LogicalOperator3_mff1;
  boolean_T rtb_LogicalOperator2_d1l2;
  boolean_T rtb_Compare_dwgc;
  boolean_T rtb_LogicalOperator_c4yo;
  boolean_T rtb_Compare_bjyp;
  boolean_T rtb_Compare_mqzc;
  boolean_T rtb_LogicalOperator9_hv2s;
  boolean_T rtb_Compare_lszm;
  boolean_T rtb_Compare_g22w;
  boolean_T rtb_LogicalOperator6_olnx;
  boolean_T rtb_LogicalOperator3_ffjp;
  boolean_T rtb_LogicalOperator15;
  boolean_T rtb_LogicalOperator20;
  boolean_T rtb_Compare_aqxj;
  boolean_T rtb_Compare_ochl;
  boolean_T rtb_LogicalOperator14;
  boolean_T rtb_LogicalOperator13;
  boolean_T rtb_Compare_gxtr;
  boolean_T rtb_LogicalOperator10_amqa;
  boolean_T rtb_LogicalOperator11;
  boolean_T rtb_Compare_hbu0;
  boolean_T rtb_LogicalOperator2_bt5g;
  boolean_T rtb_LogicalOperator3_k04z;
  boolean_T rtb_Compare_in2a;
  boolean_T rtb_DataTypeConversion_j5c0;
  boolean_T rtb_LogicalOperator_f2aw;
  boolean_T rtb_LogicalOperator1_m2hu;
  boolean_T rtb_Compare_jfyx;
  boolean_T rtb_DataTypeConversion_ol5q;
  boolean_T rtb_LogicalOperator5_csv4;
  boolean_T rtb_LogicalOperator6_ob5q;
  boolean_T rtb_LogicalOperator9_lrey;
  boolean_T rtb_DataTypeConversion_p2xw;
  boolean_T rtb_DataTypeConversion_jumr;
  boolean_T rtb_DataTypeConversion_mnsd;
  boolean_T rtb_DataTypeConversion_haip;
  boolean_T rtb_RelationalOperator_kriu;
  boolean_T rtb_Switch_hvhw;
  dt_ComM_EPTCANBusOffInfo tmpRead_6;
  real32_T tmpRead_1;
  uint16_T rtb_Add1_otaa_tmp;
  uint16_T rtb_Add2_jhkw_tmp;
  uint16_T rtb_Add3_tmp;
  uint8_T tmpRead;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_5;
  uint8_T tmpRead_7;
  uint8_T tmpRead_c;
  uint8_T tmpRead_d;
  uint8_T tmpRead_e;
  uint8_T tmpRead_i;
  uint8_T tmpRead_j;
  uint8_T tmpRead_l;
  uint8_T tmpRead_n;
  uint8_T tmpRead_s;
  uint8_T tmpRead_t;
  boolean_T HvMgmt_HvRelayFaultPwrOffReq_tm;
  boolean_T tmpRead_0;
  boolean_T tmpRead_4;
  boolean_T tmpRead_8;
  boolean_T tmpRead_9;
  boolean_T tmpRead_a;
  boolean_T tmpRead_b;
  boolean_T tmpRead_f;
  boolean_T tmpRead_g;
  boolean_T tmpRead_h;
  boolean_T tmpRead_k;
  boolean_T tmpRead_m;
  boolean_T tmpRead_o;
  boolean_T tmpRead_p;
  boolean_T tmpRead_q;
  boolean_T tmpRead_r;
  boolean_T tmpRead_u;
  boolean_T tmpRead_v;

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_v);

  /* Inport: '<Root>/RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff' */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff
    (&tmpRead_u);

  /* Inport: '<Root>/RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo' */
  (void)Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(&tmpRead_t);

  /* Inport: '<Root>/RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum
    (&tmpRead_s);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_r);

  /* Inport: '<Root>/RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo' */
  (void)Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
    (&tmpRead_q);

  /* Inport: '<Root>/UDS_PwrCutRequest_PwrCutRequest' */
  (void)Rte_Read_UDS_PwrCutRequest_PwrCutRequest(&tmpRead_p);

  /* Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(&tmpRead_o);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_n);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_m);

  /* Inport: '<Root>/RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
    (&tmpRead_l);

  /* Inport: '<Root>/RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg' */
  (void)Rte_Read_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg(&tmpRead_k);

  /* Inport: '<Root>/RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
    (&tmpRead_j);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_i);

  /* Inport: '<Root>/RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(&tmpRead_h);

  /* Inport: '<Root>/RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum' */
  (void)Rte_Read_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum
    (&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum' */
  (void)Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_6);

  /* SignalConversion: '<S5>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct'
   */
  (void)Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct
    (&rtb_ComM_BSBattSOC_pct);

  /* Inport: '<Root>/RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg' */
  (void)Rte_Read_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg' */
  (void)Rte_Read_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_BMSMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSNegRlyActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSNegRlyActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:255
   *  2. VCU_SW_Requirements_Specification.slreqx:256
   *  3. VCU_SW_Requirements_Specification.slreqx:257
   *  4. VCU_SW_Requirements_Specification.slreqx:258
   *  5. VCU_SW_Requirements_Specification.slreqx:259
   *  6. VCU_SW_Requirements_Specification.slreqx:260
   *  7. VCU_SW_Requirements_Specification.slreqx:261
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Constant: '<S86>/Constant'
   *  Constant: '<S96>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S96>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator2_d1l2 = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)) && (tmpRead_2 != ((uint8_T)BMSMgmt_Opened)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt1' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep1' incorporates:
   *  Constant: '<S8>/HvMgmt_BMSHVPowerOff_CFG'
   */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator2_d1l2, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_BMSHVPowerOff_CFG,
     &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_nz4o);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt1' */

  /* RelationalOperator: '<S97>/Compare' incorporates:
   *  Constant: '<S97>/Constant'
   *  Delay: '<S4>/Delay'
   */
  rtb_Compare_dwgc = (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive));

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSPosRlyActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:246
   *  2. VCU_SW_Requirements_Specification.slreqx:247
   *  3. VCU_SW_Requirements_Specification.slreqx:249
   *  4. VCU_SW_Requirements_Specification.slreqx:250
   *  5. VCU_SW_Requirements_Specification.slreqx:252
   *  6. VCU_SW_Requirements_Specification.slreqx:253
   *  7. VCU_SW_Requirements_Specification.slreqx:251
   *  8. VCU_SW_Requirements_Specification.slreqx:254
   */
  /* Sum: '<S8>/Add2' incorporates:
   *  Constant: '<S8>/HvMgmt_BMSHVPowerOff_CFG1'
   *  Constant: '<S8>/HvMgmt_RunStep'
   *  Sum: '<S9>/Add'
   */
  rtb_Add2_jhkw_tmp = (uint16_T)((uint32_T)((uint16_T)BMSMgmt_HvMgmt_RunStep) +
    (uint32_T)HvMgmt_BMSHVPowerOff_CFG);

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts' */

  /* Sum: '<S8>/Add2' */
  rtb_Add2_jhkw = rtb_Add2_jhkw_tmp;

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt2' */
  /* Constant: '<S8>/HvMgmt_RunStep' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_dwgc, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), rtb_Add2_jhkw,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_merl);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S98>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S8>/LogicalOperator1'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S98>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator_c4yo = ((tmpRead_2 == ((uint8_T)BMSMgmt_Opened)) &&
    !rtb_Switch_hvhw && (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)));

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S92>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_bjyp = (tmpRead_s != ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSPosRlyActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:246
   *  2. VCU_SW_Requirements_Specification.slreqx:247
   *  3. VCU_SW_Requirements_Specification.slreqx:249
   *  4. VCU_SW_Requirements_Specification.slreqx:250
   *  5. VCU_SW_Requirements_Specification.slreqx:252
   *  6. VCU_SW_Requirements_Specification.slreqx:253
   *  7. VCU_SW_Requirements_Specification.slreqx:251
   *  8. VCU_SW_Requirements_Specification.slreqx:254
   */
  /* Sum: '<S8>/Add1' incorporates:
   *  Constant: '<S8>/HvMgmt_PreheatPosRlyClsDTCSetTim1'
   *  Constant: '<S8>/Marco_HvMgmt_RunStep4'
   *  Sum: '<S9>/Add2'
   */
  rtb_Add1_otaa_tmp = (uint16_T)((uint32_T)((uint16_T)BMSMgmt_HvMgmt_RunStep) +
    (uint32_T)((uint16_T)HvMgmt_PreheatPosRlyClsDTCSetTim));

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts' */

  /* Sum: '<S8>/Add1' */
  rtb_Add1_otaa = rtb_Add1_otaa_tmp;

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt6' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep4' */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_bjyp,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), rtb_Add1_otaa,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt6_fqdq);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt6' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S91>/Compare' incorporates:
   *  Constant: '<S91>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_mqzc = (tmpRead_s == ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSPosRlyActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:246
   *  2. VCU_SW_Requirements_Specification.slreqx:247
   *  3. VCU_SW_Requirements_Specification.slreqx:249
   *  4. VCU_SW_Requirements_Specification.slreqx:250
   *  5. VCU_SW_Requirements_Specification.slreqx:252
   *  6. VCU_SW_Requirements_Specification.slreqx:253
   *  7. VCU_SW_Requirements_Specification.slreqx:251
   *  8. VCU_SW_Requirements_Specification.slreqx:254
   */
  /* Sum: '<S8>/Add3' incorporates:
   *  Constant: '<S8>/HvMgmt_PreheatPosRlyOpenDTCSetTim1'
   *  Constant: '<S8>/Marco_HvMgmt_RunStep5'
   *  Sum: '<S9>/Add1'
   */
  rtb_Add3_tmp = (uint16_T)((uint32_T)((uint16_T)BMSMgmt_HvMgmt_RunStep) +
    (uint32_T)((uint16_T)HvMgmt_PreheatPosRlyOpenDTCSetTim));

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts' */

  /* Sum: '<S8>/Add3' */
  rtb_Add3 = rtb_Add3_tmp;

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt7' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep5' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_mqzc, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), rtb_Add3,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt7);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt7' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator9' incorporates:
   *  Constant: '<S89>/Constant'
   *  Constant: '<S95>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S8>/LogicalOperator5'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S95>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator9_hv2s = ((tmpRead_2 == ((uint8_T)BMSMgmt_Closed)) &&
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)BMSMgmt_U8Active)) &&
    (rtb_RelationalOperator_kriu || rtb_Switch_hvhw));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If5'
   *
   * Block requirements for '<S8>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:260
   */
  /* Constant: '<S8>/Marco_NegRlyClsCmpl' incorporates:
   *  Delay: '<S8>/Delay'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:261
   */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator9_hv2s, ((uint8_T)
    BMSMgmt_NegRlyClsCmpl), CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pogi);

  /* End of Outputs for SubSystem: '<S8>/If5' */

  /* Outputs for Atomic SubSystem: '<S8>/If4'
   *
   * Block requirements for '<S8>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:259
   */
  /* Constant: '<S8>/Marco_NegRlyOpenCmpl' */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator_c4yo, ((uint8_T)
    BMSMgmt_NegRlyOpenCmpl), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S8>/If4' */

  /* Outputs for Atomic SubSystem: '<S8>/If3'
   *
   * Block requirements for '<S8>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:258
   */
  /* Constant: '<S8>/Marco_NegRlyOpenFail' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_DataTypeConversion_haip, ((uint8_T)
    BMSMgmt_NegRlyOpenFail), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S8>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_lszm = (tmpRead_s != ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt4' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep2' incorporates:
   *  Constant: '<S8>/HvMgmt_PreheatPosRlyClsDTCSetTim'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_lszm,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)
    HvMgmt_PreheatPosRlyClsDTCSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4_g1sm);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S90>/Compare' incorporates:
   *  Constant: '<S90>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_g22w = (tmpRead_s == ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt5' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep3' incorporates:
   *  Constant: '<S8>/HvMgmt_PreheatPosRlyOpenDTCSetTim'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_g22w, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_PreheatPosRlyOpenDTCSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5_g2ml);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator6' incorporates:
   *  Constant: '<S88>/Constant'
   *  Constant: '<S94>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S8>/LogicalOperator4'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S94>/Compare'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_LogicalOperator6_olnx = ((rtb_RelationalOperator_kriu || rtb_Switch_hvhw) &&
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)BMSMgmt_U8Active)) &&
    (tmpRead_2 != ((uint8_T)BMSMgmt_Closed)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If1'
   *
   * Block requirements for '<S8>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:256
   */
  /* Constant: '<S8>/Marco_NegRlyClsFail' */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator6_olnx, ((uint8_T)
    BMSMgmt_NegRlyClsFail), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S8>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator3' incorporates:
   *  Constant: '<S104>/Constant'
   *  Constant: '<S105>/Constant'
   *  RelationalOperator: '<S104>/Compare'
   *  RelationalOperator: '<S105>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator3_ffjp = ((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) ||
    (tmpRead_n == ((uint8_T)BMSMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:255
   */
  /* Delay: '<S8>/Delay' incorporates:
   *  Constant: '<S8>/Marco_INIT'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:261
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pogi = CtAp_BMSMgmt_If
    (rtb_LogicalOperator3_ffjp, ((uint8_T)BMSMgmt_INIT), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSNegRlyActSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSPosRlyActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:246
   *  2. VCU_SW_Requirements_Specification.slreqx:247
   *  3. VCU_SW_Requirements_Specification.slreqx:249
   *  4. VCU_SW_Requirements_Specification.slreqx:250
   *  5. VCU_SW_Requirements_Specification.slreqx:252
   *  6. VCU_SW_Requirements_Specification.slreqx:253
   *  7. VCU_SW_Requirements_Specification.slreqx:251
   *  8. VCU_SW_Requirements_Specification.slreqx:254
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator2' incorporates:
   *  Constant: '<S112>/Constant'
   *  Constant: '<S124>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S112>/Compare'
   *  RelationalOperator: '<S124>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator2_l3w4 = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)) && (tmpRead_3 != ((uint8_T)BMSMgmt_Opened)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt1' */
  /* Constant: '<S9>/Marco_HvMgmt_RunStep1' incorporates:
   *  Constant: '<S9>/HvMgmt_BMSHVPowerOff_CFG'
   */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator2_l3w4, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_BMSHVPowerOff_CFG,
     &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_cv5h);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt1' */

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Delay: '<S4>/Delay'
   */
  rtb_Compare_myqq = (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive));

  /* Sum: '<S9>/Add' */
  rtb_Add = rtb_Add2_jhkw_tmp;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt2' */
  /* Constant: '<S9>/HvMgmt_RunStep' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_myqq, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), rtb_Add,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_pbm3);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator9' incorporates:
   *  Constant: '<S113>/Constant'
   *  Constant: '<S129>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S9>/LogicalOperator1'
   *  RelationalOperator: '<S113>/Compare'
   *  RelationalOperator: '<S129>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator9_bnou = ((tmpRead_3 == ((uint8_T)BMSMgmt_Opened)) &&
    !rtb_Switch_hvhw && (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)));

  /* Logic: '<S9>/LogicalOperator8' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S118>/Constant'
   *  Constant: '<S127>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S114>/Compare'
   *  RelationalOperator: '<S118>/Compare'
   *  RelationalOperator: '<S127>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator8_mz2f = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && (tmpRead_3 != ((uint8_T)BMSMgmt_Opened)) && (tmpRead_s
    == ((uint8_T)BMSMgmt_ReqOpen)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt3' */
  /* Constant: '<S9>/Marco_HvMgmt_RunStep2' incorporates:
   *  Constant: '<S9>/HvMgmt_PreheatPosRlyOpenDTCSetTim'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator8_mz2f, ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)
      HvMgmt_PreheatPosRlyOpenDTCSetTim),
     &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_bwkv = (tmpRead_s == ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Sum: '<S9>/Add1' */
  rtb_Add1_lhgb = rtb_Add3_tmp;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt4' */
  /* Constant: '<S9>/HvMgmt_RunStep1' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_bwkv, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), rtb_Add1_lhgb,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4_bhxx);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator7' incorporates:
   *  Constant: '<S115>/Constant'
   *  Constant: '<S120>/Constant'
   *  Constant: '<S128>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S9>/LogicalOperator10'
   *  RelationalOperator: '<S115>/Compare'
   *  RelationalOperator: '<S120>/Compare'
   *  RelationalOperator: '<S128>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator7_kv3q = ((tmpRead_3 == ((uint8_T)BMSMgmt_Opened)) &&
    !rtb_Switch_hvhw && (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && (tmpRead_s == ((uint8_T)BMSMgmt_ReqOpen)));

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_lk0g = (tmpRead_s != ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Sum: '<S9>/Add2' */
  rtb_Add2 = rtb_Add1_otaa_tmp;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt6' */
  /* Constant: '<S9>/HvMgmt_RunStep2' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_lk0g, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), rtb_Add2,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt6);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt6' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator4' incorporates:
   *  Constant: '<S116>/Constant'
   *  Constant: '<S126>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S116>/Compare'
   *  RelationalOperator: '<S126>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator4_cqxz = (rtb_Switch_hvhw &&
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)BMSMgmt_U8Active)) &&
    (tmpRead_3 == ((uint8_T)BMSMgmt_Closed)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If5'
   *
   * Block requirements for '<S9>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:251
   */
  /* Constant: '<S9>/Marco_PosRlyClsCmpl' incorporates:
   *  Delay: '<S9>/Delay'
   *
   * Block requirements for '<S9>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:254
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator4_cqxz, ((uint8_T)
    BMSMgmt_PosRlyClsCmpl), CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_ampo);

  /* End of Outputs for SubSystem: '<S9>/If5' */

  /* Outputs for Atomic SubSystem: '<S9>/If7'
   *
   * Block requirements for '<S9>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:253
   */
  /* Constant: '<S9>/Marco_PreheatPosRlyOpenCmpl' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator7_kv3q, ((uint8_T)
    BMSMgmt_PreheatPosRlyOpenCmpl), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S9>/If7' */

  /* Outputs for Atomic SubSystem: '<S9>/If6'
   *
   * Block requirements for '<S9>/If6':
   *  1. VCU_SW_Requirements_Specification.slreqx:252
   */
  /* Constant: '<S9>/Marco_PreheatPosRlyOpenFail' */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_RelationalOperator_kriu, ((uint8_T)
    BMSMgmt_PreheatPosRlyOpenFail), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S9>/If6' */

  /* Outputs for Atomic SubSystem: '<S9>/If4'
   *
   * Block requirements for '<S9>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:250
   */
  /* Constant: '<S9>/Marco_PosRlyOpenCmpl1' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator9_bnou, ((uint8_T)
    BMSMgmt_PosRlyOpenCmpl), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S9>/If4' */

  /* Outputs for Atomic SubSystem: '<S9>/If3'
   *
   * Block requirements for '<S9>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:249
   */
  /* Constant: '<S9>/Marco_PosRlyOpenFail' */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_DataTypeConversion_haip, ((uint8_T)
    BMSMgmt_PosRlyOpenFail), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S9>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_mjeb = (tmpRead_s != ((uint8_T)BMSMgmt_ReqOpen));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt5' */
  /* Constant: '<S9>/Marco_HvMgmt_RunStep3' incorporates:
   *  Constant: '<S9>/HvMgmt_PreheatPosRlyClsDTCSetTim'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_mjeb, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_PreheatPosRlyClsDTCSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator6' incorporates:
   *  Constant: '<S117>/Constant'
   *  Constant: '<S123>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S117>/Compare'
   *  RelationalOperator: '<S123>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_LogicalOperator6_naet = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && (tmpRead_3 != ((uint8_T)BMSMgmt_Closed)) &&
    rtb_Switch_hvhw);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If1'
   *
   * Block requirements for '<S9>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:247
   */
  /* Constant: '<S9>/Marco_PosRlyClsFail' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator6_naet, ((uint8_T)
    BMSMgmt_PosRlyClsFail), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S9>/LogicalOperator3' incorporates:
   *  Constant: '<S137>/Constant'
   *  Constant: '<S138>/Constant'
   *  RelationalOperator: '<S137>/Compare'
   *  RelationalOperator: '<S138>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator3_mff1 = ((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) ||
    (tmpRead_n == ((uint8_T)BMSMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:246
   */
  /* Delay: '<S9>/Delay' incorporates:
   *  Constant: '<S9>/Marco_INIT'
   *
   * Block requirements for '<S9>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:254
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_ampo = CtAp_BMSMgmt_If
    (rtb_LogicalOperator3_mff1, ((uint8_T)BMSMgmt_INIT), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSPosRlyActSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSRlyClsFlt'
   *
   * Block requirements for '<S4>/HvMgmt_BMSRlyClsFlt':
   *  1. VCU_SW_Requirements_Specification.slreqx:228
   *  2. VCU_SW_Requirements_Specification.slreqx:229
   *  3. VCU_SW_Requirements_Specification.slreqx:230
   */
  /* Delay: '<S19>/Delay2' incorporates:
   *  Delay: '<S11>/Delay1'
   */
  rtb_Delay2 = CtAp_BMSMgmt_ARID_DEF.Delay1_DSTATE_jilv;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator1' incorporates:
   *  Constant: '<S141>/Constant'
   *  Constant: '<S146>/Constant'
   *  Constant: '<S151>/Constant'
   *  RelationalOperator: '<S141>/Compare'
   *  RelationalOperator: '<S146>/Compare'
   *  RelationalOperator: '<S151>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator1_b1xk = ((rtb_Delay2 == ((uint8_T)BMSMgmt_U8Active)) &&
    (tmpRead_n == ((uint8_T)BMSMgmt_Standby)) && (tmpRead_5 != ((uint8_T)
    BMSMgmt_Running)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt' */
  /* Constant: '<S11>/Marco_HvMgmt_RunStep' incorporates:
   *  Constant: '<S11>/HvMgmt_BMSHVPowerOn_CFG'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator1_b1xk, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_BMSHVPowerOn_CFG, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cxar);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt' */

  /* Delay: '<S19>/Delay2' incorporates:
   *  Delay: '<S11>/Delay2'
   */
  rtb_Delay2 = CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE_dpzs;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator3' incorporates:
   *  Constant: '<S142>/Constant'
   *  Constant: '<S143>/Constant'
   *  Constant: '<S144>/Constant'
   *  Constant: '<S145>/Constant'
   *  Constant: '<S147>/Constant'
   *  Constant: '<S150>/Constant'
   *  Constant: '<S152>/Constant'
   *  Constant: '<S154>/Constant'
   *  Logic: '<S11>/LogicalOperator18'
   *  Logic: '<S11>/LogicalOperator4'
   *  RelationalOperator: '<S142>/Compare'
   *  RelationalOperator: '<S143>/Compare'
   *  RelationalOperator: '<S144>/Compare'
   *  RelationalOperator: '<S145>/Compare'
   *  RelationalOperator: '<S147>/Compare'
   *  RelationalOperator: '<S150>/Compare'
   *  RelationalOperator: '<S152>/Compare'
   *  RelationalOperator: '<S154>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator3_gaau = ((tmpRead_5 != ((uint8_T)BMSMgmt_Running)) &&
    (tmpRead_5 != ((uint8_T)BMSMgmt_AC_Charge)) && (tmpRead_5 != ((uint8_T)
    BMSMgmt_DC_Charge)) && (tmpRead_5 != ((uint8_T)BMSMgmt_DisCharge)) &&
    ((tmpRead_n == ((uint8_T)BMSMgmt_HvReady)) || (tmpRead_n == ((uint8_T)
    BMSMgmt_DrvReady)) || (tmpRead_n == ((uint8_T)BMSMgmt_PreHeating))) &&
    (rtb_Delay2 == ((uint8_T)BMSMgmt_U8Active)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt1' */
  /* Constant: '<S11>/Marco_HvMgmt_RunStep1' incorporates:
   *  Constant: '<S11>/HvMgmt_BMSHvFaultCheckTim'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_LogicalOperator3_gaau,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_BMSHvFaultCheckTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_kkiq);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt1' */

  /* Logic: '<S11>/LogicalOperator'
   *
   * Block requirements for '<S11>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:228
   */
  rtb_LogicalOperator_dfbr = (rtb_RelationalOperator_kriu || rtb_Switch_hvhw);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S153>/Compare' incorporates:
   *  Constant: '<S153>/Constant'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_Compare_fmvq = (tmpRead_n == ((uint8_T)BMSMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/If1'
   *
   * Block requirements for '<S11>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:229
   */
  /* Constant: '<S11>/Marco_Inactive' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_If_lssa(rtb_Compare_fmvq, BMSMgmt_Inactive,
    HvMgmt_BMSRlyClsFlt_Flg);

  /* End of Outputs for SubSystem: '<S11>/If1' */

  /* Outputs for Atomic SubSystem: '<S11>/If' */
  /* Constant: '<S11>/Marco_Active' */
  HvMgmt_BMSRlyClsFlt_Flg = CtAp_BMSMgmt_If_lssa(rtb_LogicalOperator_dfbr,
    BMSMgmt_Active, rtb_Switch_hvhw);

  /* End of Outputs for SubSystem: '<S11>/If' */

  /* Update for Delay: '<S11>/Delay1' incorporates:
   *  Delay: '<S4>/Delay'
   */
  CtAp_BMSMgmt_ARID_DEF.Delay1_DSTATE_jilv = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE;

  /* Update for Delay: '<S11>/Delay2' incorporates:
   *  Delay: '<S4>/Delay'
   */
  CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE_dpzs = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSRlyClsFlt' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSWrkModActSts'
   *
   * Block requirements for '<S4>/HvMgmt_BMSWrkModActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:262
   *  2. VCU_SW_Requirements_Specification.slreqx:263
   *  3. VCU_SW_Requirements_Specification.slreqx:264
   *  4. VCU_SW_Requirements_Specification.slreqx:265
   *  5. VCU_SW_Requirements_Specification.slreqx:266
   *  6. VCU_SW_Requirements_Specification.slreqx:267
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Constant: '<S161>/Constant'
   *  Constant: '<S166>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S161>/Compare'
   *  RelationalOperator: '<S166>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator1_jaye = ((tmpRead_5 == ((uint8_T)BMSMgmt_Standby)) &&
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)BMSMgmt_U8Inactive)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt1' */
  /* Constant: '<S12>/HvMgmt_RunStep2' incorporates:
   *  Constant: '<S12>/HvMgmt_BMSHVPowerOff_CFG'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator1_jaye, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_BMSHVPowerOff_CFG,
     &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_cl54);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt1' */

  /* RelationalOperator: '<S164>/Compare' incorporates:
   *  Constant: '<S164>/Constant'
   *  Delay: '<S4>/Delay'
   */
  rtb_Compare_dnt3 = (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive));

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt2' */
  /* Constant: '<S12>/HvMgmt_RunStep' incorporates:
   *  Constant: '<S12>/HvMgmt_BMSHVPwrOffRsv_CFG'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_dnt3, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), HvMgmt_BMSHVPwrOffRsv_CFG,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_mbvz);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator' incorporates:
   *  Constant: '<S159>/Constant'
   *  Constant: '<S165>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S12>/LogicalOperator4'
   *  Logic: '<S12>/LogicalOperator9'
   *  RelationalOperator: '<S159>/Compare'
   *  RelationalOperator: '<S165>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator_ey5r = (((tmpRead_5 == ((uint8_T)BMSMgmt_Standby)) &&
    !rtb_Switch_hvhw && (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive))) || rtb_RelationalOperator_kriu);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Logic: '<S12>/LogicalOperator8' incorporates:
   *  Constant: '<S167>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S167>/Compare'
   */
  rtb_LogicalOperator8_fzrd = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && HvMgmt_BMSRlyClsFlt_Flg);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator2' incorporates:
   *  Constant: '<S160>/Constant'
   *  Constant: '<S163>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S160>/Compare'
   *  RelationalOperator: '<S163>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator2_apgd = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)) && (tmpRead_5 != ((uint8_T)BMSMgmt_Standby)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt4' */
  /* Constant: '<S12>/HvMgmt_RunStep1' incorporates:
   *  Constant: '<S12>/HvMgmt_BMSHVPowerOff_CFG1'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator2_apgd, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_BMSHVPowerOff_CFG, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt4' */

  /* RelationalOperator: '<S168>/Compare' incorporates:
   *  Constant: '<S168>/Constant'
   *  Delay: '<S4>/Delay'
   */
  rtb_Compare_izix = (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive));

  /* Outputs for Atomic SubSystem: '<S12>/If2' */
  /* Constant: '<S12>/Marco_Inactive' */
  rtb_Switch_hvhw = CtAp_BMSMgmt_If_lssa(rtb_Compare_izix,
    rtb_RelationalOperator_kriu, BMSMgmt_Inactive);

  /* End of Outputs for SubSystem: '<S12>/If2' */

  /* Outputs for Atomic SubSystem: '<S12>/If7'
   *
   * Block requirements for '<S12>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:266
   */
  /* Constant: '<S12>/Marco_BMSInactiveFail' incorporates:
   *  Delay: '<S12>/Delay'
   *
   * Block requirements for '<S12>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:267
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_Switch_hvhw, ((uint8_T)
    BMSMgmt_BMSInactiveFail), CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_lvnm);

  /* End of Outputs for SubSystem: '<S12>/If7' */

  /* Outputs for Atomic SubSystem: '<S12>/If6'
   *
   * Block requirements for '<S12>/If6':
   *  1. VCU_SW_Requirements_Specification.slreqx:265
   */
  /* Constant: '<S12>/Marco_BMSActiveFail' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator8_fzrd, ((uint8_T)
    BMSMgmt_BMSActiveFail), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S12>/If6' */

  /* Outputs for Atomic SubSystem: '<S12>/If4'
   *
   * Block requirements for '<S12>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:264
   */
  /* Constant: '<S12>/Marco_BMSInctiveCmpl' */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator_ey5r, ((uint8_T)
    BMSMgmt_BMSInctiveCmpl), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S12>/If4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator6' incorporates:
   *  Constant: '<S158>/Constant'
   *  Constant: '<S162>/Constant'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S12>/LogicalOperator5'
   *  RelationalOperator: '<S158>/Compare'
   *  RelationalOperator: '<S162>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator6_ln51 = ((tmpRead_5 == ((uint8_T)BMSMgmt_Running)) &&
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)BMSMgmt_U8Active)) &&
    !HvMgmt_BMSRlyClsFlt_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/If1'
   *
   * Block requirements for '<S12>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:263
   */
  /* Constant: '<S12>/Marco_BMSActiveCmpl' */
  rtb_Delay2 = CtAp_BMSMgmt_If(rtb_LogicalOperator6_ln51, ((uint8_T)
    BMSMgmt_BMSActiveCmpl), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S12>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S12>/LogicalOperator3' incorporates:
   *  Constant: '<S175>/Constant'
   *  Constant: '<S176>/Constant'
   *  RelationalOperator: '<S175>/Compare'
   *  RelationalOperator: '<S176>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator3_ejxm = ((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) ||
    (tmpRead_n == ((uint8_T)BMSMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/If'
   *
   * Block requirements for '<S12>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:262
   */
  /* Delay: '<S12>/Delay' incorporates:
   *  Constant: '<S12>/Marco_BMSWrkModInit'
   *
   * Block requirements for '<S12>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:267
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_lvnm = CtAp_BMSMgmt_If
    (rtb_LogicalOperator3_ejxm, ((uint8_T)BMSMgmt_BMSWrkModInit), rtb_Delay2);

  /* End of Outputs for SubSystem: '<S12>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSWrkModActSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_HVPowerRequest'
   *
   * Block requirements for '<S4>/HvMgmt_HVPowerRequest':
   *  1. VCU_SW_Requirements_Specification.slreqx:231
   *  2. VCU_SW_Requirements_Specification.slreqx:232
   *  3. VCU_SW_Requirements_Specification.slreqx:233
   */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveTwo' */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveSix' */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveSeven' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S188>/LogicalOperator2' incorporates:
   *  Logic: '<S189>/LogicalOperator2'
   *  Logic: '<S191>/LogicalOperator'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  HvMgmt_HvRelayFaultPwrOffReq_tm = !tmpRead_0;

  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveSix' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveTwo' */

  /* Logic: '<S188>/LogicalOperator' incorporates:
   *  Constant: '<S223>/Constant'
   *  Constant: '<S224>/Constant'
   *  Logic: '<S188>/LogicalOperator2'
   *  RelationalOperator: '<S223>/Compare'
   *  RelationalOperator: '<S224>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  HvMgmt_HvRelayFaultPwrOffReq = (HvMgmt_HvRelayFaultPwrOffReq_tm && (tmpRead_3
    != ((uint8_T)BMSMgmt_Closed)) && (tmpRead_n == ((uint8_T)BMSMgmt_PreHeating)));

  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveSeven' */

  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveSix' */
  /* Logic: '<S189>/LogicalOperator' incorporates:
   *  Logic: '<S189>/LogicalOperator1'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy28'
   */
  HvMgmt_HvFaultPwrOffReq = (HvMgmt_HvRelayFaultPwrOffReq_tm && (tmpRead_h ||
    tmpRead_9 || tmpRead_a || tmpRead_k || tmpRead_p || HvMgmt_BMSRlyClsFlt_Flg));

  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveSix' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Switch: '<S241>/Switch' incorporates:
   *  Delay: '<S14>/Delay2'
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S14>/LogicalOperator9' incorporates:
   *  Constant: '<S197>/Constant'
   *  Constant: '<S198>/Constant'
   *  RelationalOperator: '<S197>/Compare'
   *  RelationalOperator: '<S198>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator9_ir1r = ((tmpRead_n == ((uint8_T)BMSMgmt_Standby)) &&
    (rtb_Switch_kheb == ((uint8_T)BMSMgmt_INIT)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/If3' */
  /* Delay: '<S14>/Delay3' */
  CtAp_BMSMgmt_ARID_DEF.Delay3_DSTATE = CtAp_BMSMgmt_If3
    (rtb_LogicalOperator9_ir1r, rtb_ComM_BSBattSOC_pct,
     CtAp_BMSMgmt_ARID_DEF.Delay3_DSTATE);

  /* End of Outputs for SubSystem: '<S14>/If3' */

  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveFive' */
  /* RelationalOperator: '<S185>/RelationalOperator' incorporates:
   *  Constant: '<S185>/pect_One'
   *  Delay: '<S14>/Delay3'
   *  Sum: '<S185>/Add1'
   */
  rtb_RelationalOperator = (rtb_ComM_BSBattSOC_pct <
    (CtAp_BMSMgmt_ARID_DEF.Delay3_DSTATE + BMSMgmt_SOCPectOne));

  /* Outputs for Atomic SubSystem: '<S185>/ATOM_OnDelay' */
  /* Constant: '<S185>/HvMgmt_SmtPwrKeepTmr_CFG' incorporates:
   *  Constant: '<S185>/BMSMgmt_ClearValue_Single1'
   *  Constant: '<S185>/HvRunStep_Single'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_OnDelay(rtb_RelationalOperator,
    HvMgmt_SmtPwrKeepTmr_CFG, BMSMgmt_HvRunStep_Single,
    BMSMgmt_ClearValue_Single, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S185>/ATOM_OnDelay' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S218>/Compare' incorporates:
   *  Constant: '<S218>/Constant'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  rtb_Compare_g0ut = (tmpRead_7 == ((uint8_T)BMSMgmt_Buck));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S185>/ATOM_OnDelay1' */
  /* Constant: '<S185>/HvMgmt_SmtPwrCompTmr_CFG' incorporates:
   *  Constant: '<S185>/BMSMgmt_ClearValue_Single'
   *  Constant: '<S185>/HvRunStep_Single1'
   */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_ATOM_OnDelay(rtb_Compare_g0ut,
    HvMgmt_SmtPwrCompTmr_CFG, BMSMgmt_HvRunStep_Single,
    BMSMgmt_ClearValue_Single, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of Outputs for SubSystem: '<S185>/ATOM_OnDelay1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S185>/LogicalOperator' incorporates:
   *  Constant: '<S216>/Constant'
   *  Constant: '<S217>/Constant'
   *  RelationalOperator: '<S216>/Compare'
   *  RelationalOperator: '<S217>/Compare'
   *  SignalConversion: '<S5>/SignalCopy29'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator_bjsu = ((tmpRead_1 < HvMgmt_BMSBattEnaSOC_CFG) ||
    (rtb_ComM_BSBattSOC_pct >= HvMgmt_BSBattChrgEndSOC_CFG) || tmpRead_q ||
    rtb_DataTypeConversion_haip || rtb_RelationalOperator_kriu);

  /* RelationalOperator: '<S220>/Compare' incorporates:
   *  Constant: '<S220>/Constant'
   *  SignalConversion: '<S5>/SignalCopy31'
   */
  rtb_Compare_aqtd = (tmpRead_t != ((uint8_T)BMSMgmt_U8AppNMTwo));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S185>/If' */
  /* Constant: '<S185>/Marco_Active' */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_If_lssa(rtb_Compare_aqtd,
    BMSMgmt_Active, rtb_LogicalOperator_bjsu);

  /* End of Outputs for SubSystem: '<S185>/If' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveFive' */

  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveOne' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveTwo' */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveThree' */
  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveFour' */
  /* Logic: '<S14>/LogicalOperator2' incorporates:
   *  Constant: '<S221>/Constant'
   *  Constant: '<S222>/Constant'
   *  Constant: '<S225>/Constant'
   *  Logic: '<S186>/LogicalOperator'
   *  Logic: '<S186>/LogicalOperator1'
   *  Logic: '<S187>/LogicalOperator'
   *  Logic: '<S190>/LogicalOperator'
   *  RelationalOperator: '<S221>/Compare'
   *  RelationalOperator: '<S222>/Compare'
   *  RelationalOperator: '<S225>/Compare'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy14'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy17'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  HvMgmt_HvNormalPwrOffReq = (((tmpRead_c == ((uint8_T)BMSMgmt_PowerMode_Off)) ||
    tmpRead_8) && HvMgmt_HvRelayFaultPwrOffReq_tm && ((tmpRead_e != ((uint8_T)
    BMSMgmt_SGWHvOn)) || tmpRead_b) && (!tmpRead_4 || (tmpRead_1 <
    HvMgmt_BMSBattEnaSOC_CFG)) && rtb_DataTypeConversion_haip);

  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveFour' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveThree' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveTwo' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReqInactiveOne' */

  /* Logic: '<S14>/LogicalOperator1' incorporates:
   *  Constant: '<S182>/Constant'
   *  Constant: '<S195>/Constant'
   *  Constant: '<S196>/Constant'
   *  Constant: '<S199>/Constant'
   *  Logic: '<S14>/LogicalOperator3'
   *  Logic: '<S14>/LogicalOperator4'
   *  Logic: '<S14>/LogicalOperator5'
   *  RelationalOperator: '<S182>/Compare'
   *  RelationalOperator: '<S195>/Compare'
   *  RelationalOperator: '<S196>/Compare'
   *  RelationalOperator: '<S199>/Compare'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy32'
   */
  rtb_LogicalOperator1_egfb = (HvMgmt_HvNormalPwrOffReq || (tmpRead_f ||
    (tmpRead_d == ((uint8_T)BMSMgmt_Falut_two)) || tmpRead_u) ||
    HvMgmt_HvFaultPwrOffReq || HvMgmt_HvRelayFaultPwrOffReq || ((tmpRead_n ==
    ((uint8_T)BMSMgmt_INIT)) || (tmpRead_n == ((uint8_T)BMSMgmt_Sleep))) ||
    ((tmpRead_n == ((uint8_T)BMSMgmt_Standby)) && tmpRead_g));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/HvPwrOnReq'
   *
   * Block requirements for '<S14>/HvPwrOnReq':
   *  1. VCU_SW_Requirements_Specification.slreqx:234
   */
  /* RelationalOperator: '<S204>/Compare' incorporates:
   *  Constant: '<S204>/Constant'
   */
  rtb_Compare_oa0f = (rtb_ComM_BSBattSOC_pct <= HvMgmt_BSBattChrgStartSOC_CFG);

  /* Outputs for Atomic SubSystem: '<S184>/ATOM_TimeCnt1' */
  /* Constant: '<S184>/HvMgmt_RunStep1' incorporates:
   *  Constant: '<S184>/HvMgmt_BSBattReqChrgSOCTmr'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_oa0f, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_BSBattReqChrgSOCTmr),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S184>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S202>/Compare' incorporates:
   *  Constant: '<S202>/Constant'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_Compare_esuk = (tmpRead_1 >= HvMgmt_BMSBattEnaSOC_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S184>/ATOM_TimeCnt2' */
  /* Constant: '<S184>/HvMgmt_RunStep' incorporates:
   *  Constant: '<S184>/HvMgmt_BMSBattEnableSOCTmr'
   */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_esuk,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_BMSBattEnableSOCTmr),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S184>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S213>/Compare' incorporates:
   *  Constant: '<S213>/Constant'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_Compare_jqnk = (tmpRead_n == ((uint8_T)BMSMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Switch: '<S241>/Switch' incorporates:
   *  Delay: '<S184>/Delay'
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_ltmh;

  /* Logic: '<S184>/LogicalOperator' incorporates:
   *  Constant: '<S208>/Constant'
   *  Constant: '<S209>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S208>/Compare'
   *  RelationalOperator: '<S209>/Compare'
   */
  rtb_LogicalOperator_hwt0 = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && (rtb_Switch_kheb == ((uint8_T)BMSMgmt_U8Inactive)));

  /* Switch: '<S241>/Switch' incorporates:
   *  Constant: '<S184>/Marco_U8Active'
   *  Sum: '<S184>/Add'
   */
  rtb_Switch_kheb = (uint8_T)((uint32_T)((uint8_T)BMSMgmt_U8Active) + (uint32_T)
    HvMgmt_BMSHvOnCnt_Enum);

  /* MinMax: '<S184>/MinMax' incorporates:
   *  Constant: '<S184>/Marco_U8Max'
   */
  tmpRead_t = rtb_Switch_kheb;
  if (tmpRead_t <= ((uint8_T)BMSMgmt_U8Max)) {
    /* MinMax: '<S184>/MinMax' */
    rtb_MinMax = tmpRead_t;
  } else {
    /* MinMax: '<S184>/MinMax' */
    rtb_MinMax = ((uint8_T)BMSMgmt_U8Max);
  }

  /* End of MinMax: '<S184>/MinMax' */

  /* Outputs for Atomic SubSystem: '<S184>/If2'
   *
   * Block requirements for '<S184>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:234
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator_hwt0, rtb_MinMax,
    HvMgmt_BMSHvOnCnt_Enum);

  /* End of Outputs for SubSystem: '<S184>/If2' */

  /* Outputs for Atomic SubSystem: '<S184>/If1'
   *
   * Block requirements for '<S184>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:234
   */
  /* Constant: '<S184>/Marco_U8Inactive' */
  HvMgmt_BMSHvOnCnt_Enum = CtAp_BMSMgmt_If(rtb_Compare_jqnk, ((uint8_T)
    BMSMgmt_U8Inactive), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S184>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S203>/Compare' incorporates:
   *  Constant: '<S203>/Constant'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_Compare_c3hq = (tmpRead_1 >= HvMgmt_HVBattRemoteEnSOC_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Logic: '<S184>/LogicalOperator5' incorporates:
   *  Constant: '<S184>/HvMgmt_EnHVBattRemoteEnSOC_CFG'
   */
  rtb_LogicalOperator5_olwm = !HvMgmt_EnHVBattRemoteEnSOC_CFG;

  /* Outputs for Atomic SubSystem: '<S184>/If3' */
  /* Constant: '<S184>/Marco_Active' */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_If_lssa(rtb_LogicalOperator5_olwm,
    rtb_Compare_c3hq, BMSMgmt_Active);

  /* End of Outputs for SubSystem: '<S184>/If3' */

  /* Update for Delay: '<S184>/Delay' incorporates:
   *  Delay: '<S4>/Delay'
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_ltmh = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S14>/LogicalOperator18' incorporates:
   *  Constant: '<S183>/Constant'
   *  Constant: '<S205>/Constant'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S207>/Constant'
   *  Logic: '<S14>/LogicalOperator19'
   *  Logic: '<S14>/LogicalOperator22'
   *  Logic: '<S14>/LogicalOperator23'
   *  Logic: '<S14>/LogicalOperator24'
   *  Logic: '<S14>/LogicalOperator25'
   *  Logic: '<S14>/LogicalOperator26'
   *  Logic: '<S184>/LogicalOperator1'
   *  Logic: '<S184>/LogicalOperator2'
   *  Logic: '<S184>/LogicalOperator3'
   *  Logic: '<S184>/LogicalOperator4'
   *  RelationalOperator: '<S183>/Compare'
   *  RelationalOperator: '<S205>/Compare'
   *  RelationalOperator: '<S206>/Compare'
   *  RelationalOperator: '<S207>/Compare'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy17'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy28'
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  rtb_LogicalOperator18_ndpg = (((tmpRead_c == ((uint8_T)BMSMgmt_PowerMode_On)) ||
    tmpRead_0 || ((tmpRead_e == ((uint8_T)BMSMgmt_SGWHvOn)) &&
                  rtb_RelationalOperator_kriu) || (tmpRead_4 && rtb_Compare_esuk)
    || (rtb_DataTypeConversion_haip && rtb_Switch_hvhw &&
        (HvMgmt_BMSHvOnCnt_Enum < ((uint8_T)HvMgmt_BMSHvOnCnt)))) && !tmpRead_g &&
    !tmpRead_9 && !tmpRead_a && !tmpRead_k && !tmpRead_p && (tmpRead_d !=
    ((uint8_T)BMSMgmt_Falut_two)) && !HvMgmt_BMSRlyClsFlt_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* End of Outputs for SubSystem: '<S14>/HvPwrOnReq' */

  /* Outputs for Atomic SubSystem: '<S14>/If1'
   *
   * Block requirements for '<S14>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:232
   */
  /* Constant: '<S14>/Marco_Active' */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_If_lssa(rtb_LogicalOperator18_ndpg,
    BMSMgmt_Active, HvMgmt_HvPwrOnReq_Flg);

  /* End of Outputs for SubSystem: '<S14>/If1' */

  /* Outputs for Atomic SubSystem: '<S14>/If'
   *
   * Block requirements for '<S14>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:231
   */
  /* Constant: '<S14>/Marco_Inactive' */
  HvMgmt_HvPwrOnReq_Flg = CtAp_BMSMgmt_If_lssa(rtb_LogicalOperator1_egfb,
    BMSMgmt_Inactive, rtb_DataTypeConversion_haip);

  /* End of Outputs for SubSystem: '<S14>/If' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Update for Delay: '<S14>/Delay2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE = tmpRead_n;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_HVPowerRequest' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_HvPwrOffReqChrgDwn'
   *
   * Block requirements for '<S4>/HvMgmt_HvPwrOffReqChrgDwn':
   *  1. VCU_SW_Requirements_Specification.slreqx:235
   *  2. VCU_SW_Requirements_Specification.slreqx:236
   *  3. VCU_SW_Requirements_Specification.slreqx:28759
   */
  /* Logic: '<S15>/LogicalOperator2' incorporates:
   *  Constant: '<S228>/Constant'
   *  Constant: '<S232>/Constant'
   *  Constant: '<S233>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S228>/Compare'
   *  RelationalOperator: '<S232>/Compare'
   *  RelationalOperator: '<S233>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator2_h12h = ((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) ||
    (tmpRead_n == ((uint8_T)BMSMgmt_Sleep)) || (tmpRead_n == ((uint8_T)
    BMSMgmt_Standby)) || (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE != 0U));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/If'
   *
   * Block requirements for '<S15>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:235
   *  2. VCU_SW_Requirements_Specification.slreqx:236
   */
  /* Constant: '<S15>/Marco_Inactive' incorporates:
   *  Delay: '<S15>/Delay'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:28759
   */
  rtb_DataTypeConversion_haip = CtAp_BMSMgmt_If_lssa(rtb_LogicalOperator2_h12h,
    BMSMgmt_Inactive, CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_iyx5);

  /* End of Outputs for SubSystem: '<S15>/If' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S15>/LogicalOperator' incorporates:
   *  Constant: '<S229>/Constant'
   *  Constant: '<S230>/Constant'
   *  Constant: '<S231>/Constant'
   *  Logic: '<S15>/LogicalOperator3'
   *  RelationalOperator: '<S229>/Compare'
   *  RelationalOperator: '<S230>/Compare'
   *  RelationalOperator: '<S231>/Compare'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator_nroe = (HvMgmt_BMSRlyClsFlt_Flg ||
    (HvMgmt_HvNormalPwrOffReq && (tmpRead_n != ((uint8_T)BMSMgmt_Standby)) &&
     (tmpRead_n != ((uint8_T)BMSMgmt_INIT)) && (tmpRead_n != ((uint8_T)
    BMSMgmt_Sleep))) || tmpRead_f || tmpRead_h || tmpRead_9 || tmpRead_a ||
    tmpRead_k);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/If1' */
  /* Delay: '<S15>/Delay' incorporates:
   *  Constant: '<S15>/Marco_Active'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:28759
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_iyx5 = CtAp_BMSMgmt_If_lssa
    (rtb_LogicalOperator_nroe, BMSMgmt_Active, rtb_DataTypeConversion_haip);

  /* End of Outputs for SubSystem: '<S15>/If1' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_HvPwrOffReqChrgDwn' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_ReqModBMS'
   *
   * Block requirements for '<S4>/HvMgmt_ReqModBMS':
   *  1. VCU_SW_Requirements_Specification.slreqx:237
   *  2. VCU_SW_Requirements_Specification.slreqx:238
   *  3. VCU_SW_Requirements_Specification.slreqx:239
   *  4. VCU_SW_Requirements_Specification.slreqx:240
   *  5. VCU_SW_Requirements_Specification.slreqx:241
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S16>/LogicalOperator18' incorporates:
   *  Constant: '<S234>/Constant'
   *  Constant: '<S235>/Constant'
   *  Constant: '<S247>/Constant'
   *  Logic: '<S16>/LogicalOperator10'
   *  RelationalOperator: '<S234>/Compare'
   *  RelationalOperator: '<S235>/Compare'
   *  RelationalOperator: '<S247>/Compare'
   *  SignalConversion: '<S5>/SignalCopy21'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy27'
   */
  rtb_LogicalOperator18 = (HvMgmt_HvPwrOnReq_Flg && (tmpRead_n == ((uint8_T)
    BMSMgmt_Standby)) && tmpRead_o && ((tmpRead_i == ((uint8_T)BMSMgmt_Gear_P)) ||
    (tmpRead_i == ((uint8_T)BMSMgmt_Gear_N))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S16>/If1'
   *
   * Block requirements for '<S16>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:240
   */
  /* Constant: '<S16>/Marco_Active' incorporates:
   *  Delay: '<S16>/Delay'
   *
   * Block requirements for '<S16>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:241
   */
  rtb_Switch_kheb = CtAp_BMSMgmt_If(rtb_LogicalOperator18, ((uint8_T)
    BMSMgmt_U8Active), CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pldv);

  /* End of Outputs for SubSystem: '<S16>/If1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Outputs for Atomic SubSystem: '<S16>/ReqModBMSInactive' */
  /* Logic: '<S16>/LogicalOperator1' incorporates:
   *  Constant: '<S236>/Constant'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S238>/Constant'
   *  Constant: '<S239>/Constant'
   *  Constant: '<S242>/Constant'
   *  Constant: '<S243>/Constant'
   *  Constant: '<S244>/Constant'
   *  Constant: '<S245>/Constant'
   *  Constant: '<S246>/Constant'
   *  Logic: '<S16>/LogicalOperator'
   *  Logic: '<S16>/LogicalOperator2'
   *  Logic: '<S16>/LogicalOperator3'
   *  Logic: '<S16>/LogicalOperator4'
   *  Logic: '<S16>/LogicalOperator5'
   *  Logic: '<S16>/LogicalOperator6'
   *  Logic: '<S16>/LogicalOperator7'
   *  Logic: '<S16>/LogicalOperator8'
   *  Logic: '<S16>/LogicalOperator9'
   *  Logic: '<S248>/LogicalOperator'
   *  Logic: '<S248>/LogicalOperator9'
   *  RelationalOperator: '<S236>/Compare'
   *  RelationalOperator: '<S237>/Compare'
   *  RelationalOperator: '<S238>/Compare'
   *  RelationalOperator: '<S239>/Compare'
   *  RelationalOperator: '<S242>/Compare'
   *  RelationalOperator: '<S243>/Compare'
   *  RelationalOperator: '<S244>/Compare'
   *  RelationalOperator: '<S245>/Compare'
   *  RelationalOperator: '<S246>/Compare'
   *  SignalConversion: '<S5>/SignalCopy18'
   *  SignalConversion: '<S5>/SignalCopy20'
   *  SignalConversion: '<S5>/SignalCopy22'
   *  SignalConversion: '<S5>/SignalCopy23'
   *  SignalConversion: '<S5>/SignalCopy24'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy27'
   *  SignalConversion: '<S5>/SignalCopy33'
   */
  rtb_LogicalOperator1 = ((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) || (tmpRead_n ==
    ((uint8_T)BMSMgmt_Sleep)) || ((tmpRead_n == ((uint8_T)BMSMgmt_Standby)) && (
    !HvMgmt_HvPwrOnReq_Flg || HvMgmt_BMSRlyClsFlt_Flg || tmpRead_k)) ||
    (((tmpRead_n == ((uint8_T)BMSMgmt_HvReady)) || (tmpRead_n == ((uint8_T)
    BMSMgmt_PreHeating))) && ((tmpRead_j == ((uint8_T)BMSMgmt_DCDCDisableCmpl)) ||
    (tmpRead_j == ((uint8_T)BMSMgmt_DCDCDisableFailed))) && ((tmpRead_l ==
    ((uint8_T)BMSMgmt_TCUDiableCmpl)) || (tmpRead_l == ((uint8_T)
    BMSMgmt_TCUDisableFailed))) && !HvMgmt_HvPwrOnReq_Flg && (tmpRead_f ||
    tmpRead_h || !tmpRead_o || tmpRead_v)));

  /* End of Outputs for SubSystem: '<S16>/ReqModBMSInactive' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S16>/If'
   *
   * Block requirements for '<S16>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:237
   *  2. VCU_SW_Requirements_Specification.slreqx:238
   *  3. VCU_SW_Requirements_Specification.slreqx:239
   */
  /* Delay: '<S16>/Delay' incorporates:
   *  Constant: '<S16>/Marco_Inactive'
   *
   * Block requirements for '<S16>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:241
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pldv = CtAp_BMSMgmt_If(rtb_LogicalOperator1,
    ((uint8_T)BMSMgmt_U8Inactive), rtb_Switch_kheb);

  /* End of Outputs for SubSystem: '<S16>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_ReqModBMS' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCOne':
   *  1. VCU_SW_Requirements_Specification.slreqx:274
   *  2. VCU_SW_Requirements_Specification.slreqx:275
   *  3. VCU_SW_Requirements_Specification.slreqx:276
   *  4. VCU_SW_Requirements_Specification.slreqx:280
   *  5. VCU_SW_Requirements_Specification.slreqx:281
   *  6. VCU_SW_Requirements_Specification.slreqx:282
   *  7. VCU_SW_Requirements_Specification.slreqx:283
   */
  /* Outputs for Atomic SubSystem: '<S18>/ATOM_TimeCnt2' */
  /* Constant: '<S18>/Marco_Active' incorporates:
   *  Constant: '<S18>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S18>/HvMgmt_RunStep'
   */
  rtb_DataTypeConversion_mnsd = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2_dype);

  /* End of Outputs for SubSystem: '<S18>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Constant: '<S29>/Constant'
   *  RelationalOperator: '<S29>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_DataTypeConversion_jumr = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo ==
    BMSMgmt_Inactive);

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:326
   *  2. VCU_SW_Requirements_Specification.slreqx:327
   *  3. VCU_SW_Requirements_Specification.slreqx:328
   *  4. VCU_SW_Requirements_Specification.slreqx:332
   *  5. VCU_SW_Requirements_Specification.slreqx:333
   *  6. VCU_SW_Requirements_Specification.slreqx:334
   */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:339
   *  2. VCU_SW_Requirements_Specification.slreqx:340
   *  3. VCU_SW_Requirements_Specification.slreqx:341
   *  4. VCU_SW_Requirements_Specification.slreqx:345
   *  5. VCU_SW_Requirements_Specification.slreqx:346
   *  6. VCU_SW_Requirements_Specification.slreqx:347
   */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:313
   *  2. VCU_SW_Requirements_Specification.slreqx:314
   *  3. VCU_SW_Requirements_Specification.slreqx:315
   *  4. VCU_SW_Requirements_Specification.slreqx:319
   *  5. VCU_SW_Requirements_Specification.slreqx:320
   *  6. VCU_SW_Requirements_Specification.slreqx:321
   */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:300
   *  2. VCU_SW_Requirements_Specification.slreqx:301
   *  3. VCU_SW_Requirements_Specification.slreqx:302
   *  4. VCU_SW_Requirements_Specification.slreqx:306
   *  5. VCU_SW_Requirements_Specification.slreqx:307
   *  6. VCU_SW_Requirements_Specification.slreqx:308
   *  7. VCU_SW_Requirements_Specification.slreqx:309
   */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   *  2. VCU_SW_Requirements_Specification.slreqx:288
   *  3. VCU_SW_Requirements_Specification.slreqx:289
   *  4. VCU_SW_Requirements_Specification.slreqx:293
   *  5. VCU_SW_Requirements_Specification.slreqx:294
   *  6. VCU_SW_Requirements_Specification.slreqx:295
   *  7. VCU_SW_Requirements_Specification.slreqx:296
   */
  /* Logic: '<S18>/LogicalOperator2' incorporates:
   *  Logic: '<S17>/LogicalOperator2'
   *  Logic: '<S19>/LogicalOperator1'
   *  Logic: '<S20>/LogicalOperator1'
   *  Logic: '<S21>/LogicalOperator1'
   *  Logic: '<S22>/LogicalOperator1'
   *  SignalConversion: '<S5>/SignalCopy30'
   */
  tmpRead_r = !tmpRead_r;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC' */

  /* Logic: '<S18>/LogicalOperator' incorporates:
   *  Logic: '<S18>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S18>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:276
   */
  rtb_LogicalOperator_f2aw = (rtb_DataTypeConversion_mnsd &&
    rtb_DataTypeConversion_jumr && tmpRead_r && tmpRead_m);

  /* Logic: '<S18>/LogicalOperator1' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S31>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S18>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:274
   */
  rtb_LogicalOperator1_m2hu = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Active)) && (tmpRead_n == ((uint8_T)BMSMgmt_Standby)) &&
    (tmpRead_5 != ((uint8_T)BMSMgmt_Running)));

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_Compare_jfyx = (tmpRead_n == ((uint8_T)BMSMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S18>/NoDT' */
  /* Constant: '<S18>/HvMgmt_BMSHVPowerOn_CFG' incorporates:
   *  Constant: '<S18>/HvMgmt_RunStep1'
   *
   * Block requirements for '<S18>/HvMgmt_BMSHVPowerOn_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:280
   */
  CtAp_BMSMgmt_NoDT(rtb_LogicalOperator_f2aw, rtb_LogicalOperator1_m2hu,
                    rtb_Compare_jfyx, HvMgmt_BMSHVPowerOn_CFG, ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion_ol5q,
                    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_NoDT_dham);

  /* End of Outputs for SubSystem: '<S18>/NoDT' */

  /* SignalConversion generated from: '<S18>/NoDT' */
  HvMgmt_MonStatBMSRlyClsDTCOne = rtb_DataTypeConversion_ol5q;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   *  2. VCU_SW_Requirements_Specification.slreqx:288
   *  3. VCU_SW_Requirements_Specification.slreqx:289
   *  4. VCU_SW_Requirements_Specification.slreqx:293
   *  5. VCU_SW_Requirements_Specification.slreqx:294
   *  6. VCU_SW_Requirements_Specification.slreqx:295
   *  7. VCU_SW_Requirements_Specification.slreqx:296
   */
  /* Outputs for Atomic SubSystem: '<S19>/ATOM_TimeCnt1' */
  /* Constant: '<S19>/Marco_Active' incorporates:
   *  Constant: '<S19>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S19>/HvMgmt_RunStep1'
   */
  rtb_DataTypeConversion_mnsd = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_ldqo);

  /* End of Outputs for SubSystem: '<S19>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S41>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_DataTypeConversion_jumr = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo ==
    BMSMgmt_Inactive);

  /* Logic: '<S19>/LogicalOperator2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S19>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:289
   */
  rtb_LogicalOperator2_bt5g = (rtb_DataTypeConversion_mnsd &&
    rtb_DataTypeConversion_jumr && tmpRead_r && tmpRead_m);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Delay: '<S19>/Delay2' */
  rtb_Delay2 = CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE_bf2l;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S19>/LogicalOperator3' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S46>/Constant'
   *  Logic: '<S19>/LogicalOperator18'
   *  Logic: '<S19>/LogicalOperator4'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  SignalConversion: '<S5>/SignalCopy26'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S19>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   */
  rtb_LogicalOperator3_k04z = ((tmpRead_5 != ((uint8_T)BMSMgmt_Running)) &&
    (tmpRead_5 != ((uint8_T)BMSMgmt_AC_Charge)) && (tmpRead_5 != ((uint8_T)
    BMSMgmt_DC_Charge)) && (tmpRead_5 != ((uint8_T)BMSMgmt_DisCharge)) &&
    ((tmpRead_n == ((uint8_T)BMSMgmt_HvReady)) || (tmpRead_n == ((uint8_T)
    BMSMgmt_DrvReady)) || (tmpRead_n == ((uint8_T)BMSMgmt_PreHeating))) &&
    (rtb_Delay2 == ((uint8_T)BMSMgmt_U8Active)));

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_Compare_in2a = (tmpRead_n == ((uint8_T)BMSMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S19>/NoDT' */
  /* Constant: '<S19>/HvMgmt_BMSHvFaultCheckTim' incorporates:
   *  Constant: '<S19>/HvMgmt_RunStep'
   *
   * Block requirements for '<S19>/HvMgmt_BMSHvFaultCheckTim':
   *  1. VCU_SW_Requirements_Specification.slreqx:293
   */
  CtAp_BMSMgmt_NoDT_pjnp(rtb_LogicalOperator2_bt5g, rtb_LogicalOperator3_k04z,
    rtb_Compare_in2a, ((uint16_T)HvMgmt_BMSHvFaultCheckTim), ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion_j5c0,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_NoDT_guug);

  /* End of Outputs for SubSystem: '<S19>/NoDT' */

  /* SignalConversion generated from: '<S19>/NoDT' */
  HvMgmt_MonStatBMSRlyClsDTCTwo = rtb_DataTypeConversion_j5c0;

  /* Update for Delay: '<S19>/Delay2' incorporates:
   *  Delay: '<S4>/Delay'
   */
  CtAp_BMSMgmt_ARID_DEF.Delay2_DSTATE_bf2l = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:300
   *  2. VCU_SW_Requirements_Specification.slreqx:301
   *  3. VCU_SW_Requirements_Specification.slreqx:302
   *  4. VCU_SW_Requirements_Specification.slreqx:306
   *  5. VCU_SW_Requirements_Specification.slreqx:307
   *  6. VCU_SW_Requirements_Specification.slreqx:308
   *  7. VCU_SW_Requirements_Specification.slreqx:309
   */
  /* Outputs for Atomic SubSystem: '<S17>/ATOM_TimeCnt3' */
  /* Constant: '<S17>/Marco_Active' incorporates:
   *  Constant: '<S17>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S17>/HvMgmt_RunStep'
   */
  rtb_DataTypeConversion_p2xw = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3_lxo5);

  /* End of Outputs for SubSystem: '<S17>/ATOM_TimeCnt3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_DataTypeConversion_jumr = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo ==
    BMSMgmt_Inactive);

  /* Logic: '<S17>/LogicalOperator5' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S17>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:302
   */
  rtb_LogicalOperator5_csv4 = (rtb_DataTypeConversion_p2xw &&
    rtb_DataTypeConversion_jumr && tmpRead_r && tmpRead_m);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCOne':
   *  1. VCU_SW_Requirements_Specification.slreqx:274
   *  2. VCU_SW_Requirements_Specification.slreqx:275
   *  3. VCU_SW_Requirements_Specification.slreqx:276
   *  4. VCU_SW_Requirements_Specification.slreqx:280
   *  5. VCU_SW_Requirements_Specification.slreqx:281
   *  6. VCU_SW_Requirements_Specification.slreqx:282
   *  7. VCU_SW_Requirements_Specification.slreqx:283
   */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   *  2. VCU_SW_Requirements_Specification.slreqx:288
   *  3. VCU_SW_Requirements_Specification.slreqx:289
   *  4. VCU_SW_Requirements_Specification.slreqx:293
   *  5. VCU_SW_Requirements_Specification.slreqx:294
   *  6. VCU_SW_Requirements_Specification.slreqx:295
   *  7. VCU_SW_Requirements_Specification.slreqx:296
   */
  /* Logic: '<S17>/LogicalOperator6' incorporates:
   *  BusCreator: '<S18>/Bus Creator1'
   *  BusCreator: '<S19>/Bus Creator2'
   *
   * Block requirements for '<S17>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:300
   */
  rtb_LogicalOperator6_ob5q = (HvMgmt_ErrResBMSRlyClsDTCOne ||
    HvMgmt_ErrResBMSRlyClsDTCTwo);

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne' */

  /* Logic: '<S17>/LogicalOperator9' */
  rtb_LogicalOperator9_lrey = !rtb_LogicalOperator6_ob5q;

  /* Outputs for Atomic SubSystem: '<S17>/NoTiAndMonR' */
  CtAp_BMSMgmt_NoTiAndMonR(rtb_LogicalOperator5_csv4, rtb_LogicalOperator6_ob5q,
    rtb_LogicalOperator9_lrey, &rtb_DataTypeConversion_p2xw,
    &CtAp_BMSMgmt_ARID_DEF.Switch1_bcyu, &CtAp_BMSMgmt_ARID_DEF.Switch3_jy1y,
    &CtAp_BMSMgmt_ARID_DEF.Switch6_bm43);

  /* End of Outputs for SubSystem: '<S17>/NoTiAndMonR' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:313
   *  2. VCU_SW_Requirements_Specification.slreqx:314
   *  3. VCU_SW_Requirements_Specification.slreqx:315
   *  4. VCU_SW_Requirements_Specification.slreqx:319
   *  5. VCU_SW_Requirements_Specification.slreqx:320
   *  6. VCU_SW_Requirements_Specification.slreqx:321
   */
  /* Outputs for Atomic SubSystem: '<S20>/ATOM_TimeCnt4' */
  /* Constant: '<S20>/Marco_Active' incorporates:
   *  Constant: '<S20>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S20>/HvMgmt_RunStep1'
   */
  rtb_DataTypeConversion_jumr = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4_dhmr);

  /* End of Outputs for SubSystem: '<S20>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* DataTypeConversion: '<S67>/DataTypeConversion' incorporates:
   *  Constant: '<S54>/Constant'
   *  RelationalOperator: '<S54>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_DataTypeConversion_mnsd = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo ==
    BMSMgmt_Inactive);

  /* Logic: '<S20>/LogicalOperator10' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S20>/LogicalOperator10':
   *  1. VCU_SW_Requirements_Specification.slreqx:315
   */
  rtb_LogicalOperator10_amqa = (rtb_DataTypeConversion_jumr &&
    rtb_DataTypeConversion_mnsd && tmpRead_r && tmpRead_m);

  /* Logic: '<S20>/LogicalOperator11' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S55>/Constant'
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S20>/LogicalOperator11':
   *  1. VCU_SW_Requirements_Specification.slreqx:313
   */
  rtb_LogicalOperator11 = ((CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE == ((uint8_T)
    BMSMgmt_U8Inactive)) && (tmpRead_5 != ((uint8_T)BMSMgmt_Standby)));

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_Compare_hbu0 = (tmpRead_5 == ((uint8_T)BMSMgmt_Standby));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S20>/ATOM_U16ErrorHandle' */
  /* Constant: '<S20>/HvMgmt_BMSHVPowerOff_CFG' incorporates:
   *  Constant: '<S20>/HvMgmt_BMSRlyOpenDTCResetTim'
   *  Constant: '<S20>/HvMgmt_RunStep'
   *
   * Block requirements for '<S20>/HvMgmt_BMSHVPowerOff_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:319
   *
   * Block requirements for '<S20>/HvMgmt_BMSRlyOpenDTCResetTim':
   *  1. VCU_SW_Requirements_Specification.slreqx:320
   */
  CtAp_BMSMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator10_amqa, rtb_LogicalOperator11,
    rtb_Compare_hbu0, HvMgmt_BMSHVPowerOff_CFG, ((uint16_T)
    HvMgmt_BMSRlyOpenDTCResetTim), ((uint16_T)BMSMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion_jumr, &CtAp_BMSMgmt_ARID_DEF.Switch1_capj,
    &CtAp_BMSMgmt_ARID_DEF.Switch8_cp0x, &CtAp_BMSMgmt_ARID_DEF.Switch6_a4q1,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S20>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:339
   *  2. VCU_SW_Requirements_Specification.slreqx:340
   *  3. VCU_SW_Requirements_Specification.slreqx:341
   *  4. VCU_SW_Requirements_Specification.slreqx:345
   *  5. VCU_SW_Requirements_Specification.slreqx:346
   *  6. VCU_SW_Requirements_Specification.slreqx:347
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  rtb_Compare_ochl = (tmpRead_s == ((uint8_T)BMSMgmt_ReqClose));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_TimeCnt4' */
  /* Constant: '<S21>/Marco_HvMgmt_RunStep2' incorporates:
   *  Constant: '<S21>/HvMgmt_PreheatPosRlyClsDTCSetTim1'
   */
  rtb_DataTypeConversion_mnsd = CtAp_BMSMgmt_ATOM_TimeCnt(rtb_Compare_ochl,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)
    HvMgmt_PreheatPosRlyClsDTCSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4_jwzv);

  /* End of Outputs for SubSystem: '<S21>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S21>/LogicalOperator14' incorporates:
   *  Constant: '<S61>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Logic: '<S21>/LogicalOperator12'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S21>/LogicalOperator14':
   *  1. VCU_SW_Requirements_Specification.slreqx:339
   */
  rtb_LogicalOperator14 = (((tmpRead_3 != ((uint8_T)BMSMgmt_Closed)) ||
    (tmpRead_2 != ((uint8_T)BMSMgmt_Closed))) && (tmpRead == ((uint8_T)
    BMSMgmt_DC_preheating)) && rtb_DataTypeConversion_mnsd);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_TimeCnt5' */
  /* Constant: '<S21>/Marco_Active' incorporates:
   *  Constant: '<S21>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S21>/HvMgmt_RunStep1'
   */
  rtb_DataTypeConversion_mnsd = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5_llw0);

  /* End of Outputs for SubSystem: '<S21>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Switch: '<S179>/Switch' incorporates:
   *  Constant: '<S66>/Constant'
   *  RelationalOperator: '<S66>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_Switch_hvhw = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo == BMSMgmt_Inactive);

  /* Logic: '<S21>/LogicalOperator13' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S21>/LogicalOperator13':
   *  1. VCU_SW_Requirements_Specification.slreqx:341
   */
  rtb_LogicalOperator13 = (rtb_DataTypeConversion_mnsd && rtb_Switch_hvhw &&
    tmpRead_r && tmpRead_m);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_Compare_gxtr = (tmpRead == ((uint8_T)BMSMgmt_Off_Plug));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S21>/NoTiAndMonR' */
  CtAp_BMSMgmt_NoTiAndMonR(rtb_LogicalOperator13, rtb_LogicalOperator14,
    rtb_Compare_gxtr, &rtb_DataTypeConversion_mnsd,
    &CtAp_BMSMgmt_ARID_DEF.Switch1_knqc, &CtAp_BMSMgmt_ARID_DEF.Switch3,
    &CtAp_BMSMgmt_ARID_DEF.Switch6_lkhq);

  /* End of Outputs for SubSystem: '<S21>/NoTiAndMonR' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:326
   *  2. VCU_SW_Requirements_Specification.slreqx:327
   *  3. VCU_SW_Requirements_Specification.slreqx:328
   *  4. VCU_SW_Requirements_Specification.slreqx:332
   *  5. VCU_SW_Requirements_Specification.slreqx:333
   *  6. VCU_SW_Requirements_Specification.slreqx:334
   */
  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt6' */
  /* Constant: '<S22>/Marco_Active' incorporates:
   *  Constant: '<S22>/HvMgmt_DTCEnaSetTim'
   *  Constant: '<S22>/HvMgmt_RunStep1'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt(BMSMgmt_Active,
    ((uint16_T)BMSMgmt_HvMgmt_RunStep), ((uint16_T)HvMgmt_DTCEnaSetTim),
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt6_ppxr);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt6' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Switch: '<S179>/Switch' incorporates:
   *  Constant: '<S76>/Constant'
   *  RelationalOperator: '<S76>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  rtb_Switch_hvhw = (tmpRead_6.ComM_ErrResEPTCANBusOffInfo == BMSMgmt_Inactive);

  /* Logic: '<S22>/LogicalOperator15' incorporates:
   *  SignalConversion: '<S5>/SignalCopy25'
   *
   * Block requirements for '<S22>/LogicalOperator15':
   *  1. VCU_SW_Requirements_Specification.slreqx:328
   */
  rtb_LogicalOperator15 = (rtb_RelationalOperator_kriu && rtb_Switch_hvhw &&
    tmpRead_r && tmpRead_m);

  /* Logic: '<S22>/LogicalOperator20' incorporates:
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S73>/Constant'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  Logic: '<S22>/LogicalOperator16'
   *  Logic: '<S22>/LogicalOperator21'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S22>/LogicalOperator20':
   *  1. VCU_SW_Requirements_Specification.slreqx:326
   */
  rtb_LogicalOperator20 = (((tmpRead_3 != ((uint8_T)BMSMgmt_Opened)) ||
    (tmpRead_2 != ((uint8_T)BMSMgmt_Closed))) && (tmpRead_s == ((uint8_T)
    BMSMgmt_ReqOpen)) && ((tmpRead == ((uint8_T)BMSMgmt_AC_Plug_Detected)) ||
    (tmpRead == ((uint8_T)BMSMgmt_DC_Plug_Detected))));

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_Compare_aqxj = (tmpRead == ((uint8_T)BMSMgmt_Off_Plug));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S22>/NoDT' */
  /* Constant: '<S22>/HvMgmt_PreheatPosRlyOpenDTCSetTim' incorporates:
   *  Constant: '<S22>/HvMgmt_RunStep'
   *
   * Block requirements for '<S22>/HvMgmt_PreheatPosRlyOpenDTCSetTim':
   *  1. VCU_SW_Requirements_Specification.slreqx:332
   */
  CtAp_BMSMgmt_NoDT_lspv(rtb_LogicalOperator15, rtb_LogicalOperator20,
    rtb_Compare_aqxj, ((uint16_T)HvMgmt_PreheatPosRlyOpenDTCSetTim), ((uint16_T)
    BMSMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion_haip,
    &CtAp_BMSMgmt_ARID_DEF.Switch1, &CtAp_BMSMgmt_ARID_DEF.Switch8,
    &CtAp_BMSMgmt_ARID_DEF.Switch6, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S22>/NoDT' */
  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSDTC' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_HVConnFlt'
   *
   * Block requirements for '<S4>/HvMgmt_HVConnFlt':
   *  1. VCU_SW_Requirements_Specification.slreqx:268
   *  2. VCU_SW_Requirements_Specification.slreqx:269
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Input' */
  /* Logic: '<S13>/LogicalOperator' incorporates:
   *  Constant: '<S178>/Constant'
   *  Constant: '<S180>/Constant'
   *  Constant: '<S181>/Constant'
   *  Logic: '<S13>/LogicalOperator1'
   *  RelationalOperator: '<S178>/Compare'
   *  RelationalOperator: '<S180>/Compare'
   *  RelationalOperator: '<S181>/Compare'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy26'
   */
  rtb_LogicalOperator_c2we = (((tmpRead_n == ((uint8_T)BMSMgmt_INIT)) ||
    (tmpRead_n == ((uint8_T)BMSMgmt_Standby))) && (tmpRead_c == ((uint8_T)
    BMSMgmt_PowerMode_On)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_TimeCnt' */
  /* Constant: '<S13>/Marco_HvMgmt_RunStep' incorporates:
   *  Constant: '<S13>/HvMgmt_LocalHVFailTmr_CFG'
   */
  rtb_RelationalOperator_kriu = CtAp_BMSMgmt_ATOM_TimeCnt
    (rtb_LogicalOperator_c2we, ((uint16_T)BMSMgmt_HvMgmt_RunStep),
     HvMgmt_LocalHVFailTmr_CFG, &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S13>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S13>/If'
   *
   * Block requirements for '<S13>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:268
   *  2. VCU_SW_Requirements_Specification.slreqx:269
   */
  /* Constant: '<S13>/Marco_Active' incorporates:
   *  Constant: '<S13>/Marco_Inactive'
   */
  rtb_Switch_hvhw = CtAp_BMSMgmt_If_lssa(rtb_RelationalOperator_kriu,
    BMSMgmt_Active, BMSMgmt_Inactive);

  /* End of Outputs for SubSystem: '<S13>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_HVConnFlt' */

  /* Update for Delay: '<S4>/Delay' incorporates:
   *  Delay: '<S16>/Delay'
   *
   * Block requirements for '<S16>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:241
   */
  CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE = CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pldv;

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:300
   *  2. VCU_SW_Requirements_Specification.slreqx:301
   *  3. VCU_SW_Requirements_Specification.slreqx:302
   *  4. VCU_SW_Requirements_Specification.slreqx:306
   *  5. VCU_SW_Requirements_Specification.slreqx:307
   *  6. VCU_SW_Requirements_Specification.slreqx:308
   *  7. VCU_SW_Requirements_Specification.slreqx:309
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus' incorporates:
   *  BusCreator: '<S17>/Bus Creator3'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t.HvMgmt_MonStatBMSRlyClsDTC
    = rtb_DataTypeConversion_p2xw;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t.HvMgmt_MonResBMSRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch1_bcyu;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t.HvMgmt_ErrStatBMSRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch3_jy1y;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t.HvMgmt_ErrResBMSRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch6_bm43;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTC' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCOne':
   *  1. VCU_SW_Requirements_Specification.slreqx:274
   *  2. VCU_SW_Requirements_Specification.slreqx:275
   *  3. VCU_SW_Requirements_Specification.slreqx:276
   *  4. VCU_SW_Requirements_Specification.slreqx:280
   *  5. VCU_SW_Requirements_Specification.slreqx:281
   *  6. VCU_SW_Requirements_Specification.slreqx:282
   *  7. VCU_SW_Requirements_Specification.slreqx:283
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus' incorporates:
   *  BusCreator: '<S18>/Bus Creator1'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu.HvMgmt_MonStatBMSRlyClsDTCOne
    = HvMgmt_MonStatBMSRlyClsDTCOne;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu.HvMgmt_MonResBMSRlyClsDTCOne
    = HvMgmt_MonResBMSRlyClsDTCOne;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu.HvMgmt_ErrStatBMSRlyClsDTCOne
    = HvMgmt_ErrStatBMSRlyClsDTCOne;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu.HvMgmt_ErrResBMSRlyClsDTCOne
    = HvMgmt_ErrResBMSRlyClsDTCOne;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   *  2. VCU_SW_Requirements_Specification.slreqx:288
   *  3. VCU_SW_Requirements_Specification.slreqx:289
   *  4. VCU_SW_Requirements_Specification.slreqx:293
   *  5. VCU_SW_Requirements_Specification.slreqx:294
   *  6. VCU_SW_Requirements_Specification.slreqx:295
   *  7. VCU_SW_Requirements_Specification.slreqx:296
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus' incorporates:
   *  BusCreator: '<S19>/Bus Creator2'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu.HvMgmt_MonStatBMSRlyClsDTCTwo
    = HvMgmt_MonStatBMSRlyClsDTCTwo;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu.HvMgmt_MonResBMSRlyClsDTCTwo
    = HvMgmt_MonResBMSRlyClsDTCTwo;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu.HvMgmt_ErrStatBMSRlyClsDTCTwo
    = HvMgmt_ErrStatBMSRlyClsDTCTwo;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu.HvMgmt_ErrResBMSRlyClsDTCTwo
    = HvMgmt_ErrResBMSRlyClsDTCTwo;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum' incorporates:
   *  Delay: '<S8>/Delay'
   *  SignalConversion: '<S6>/SignalCopy3'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:261
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pogi);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:313
   *  2. VCU_SW_Requirements_Specification.slreqx:314
   *  3. VCU_SW_Requirements_Specification.slreqx:315
   *  4. VCU_SW_Requirements_Specification.slreqx:319
   *  5. VCU_SW_Requirements_Specification.slreqx:320
   *  6. VCU_SW_Requirements_Specification.slreqx:321
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus' incorporates:
   *  BusCreator: '<S20>/Bus Creator4'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_.HvMgmt_MonStatBMSRlyOpenDTC
    = rtb_DataTypeConversion_jumr;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_.HvMgmt_MonResBMSRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch1_capj;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_.HvMgmt_ErrStatBMSRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch8_cp0x;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_.HvMgmt_ErrResBMSRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch6_a4q1;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_BMSRlyOpenDTC' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum' incorporates:
   *  Delay: '<S9>/Delay'
   *  SignalConversion: '<S6>/SignalCopy5'
   *
   * Block requirements for '<S9>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:254
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_ampo);

  /* Outport: '<Root>/RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum' incorporates:
   *  Delay: '<S12>/Delay'
   *  SignalConversion: '<S6>/SignalCopy6'
   *
   * Block requirements for '<S12>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:267
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_lvnm);

  /* Outport: '<Root>/RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy7'
   */
  (void)Rte_Write_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg
    (rtb_Switch_hvhw);

  /* Outport: '<Root>/RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg' incorporates:
   *  Delay: '<S15>/Delay'
   *  SignalConversion: '<S6>/SignalCopy8'
   *
   * Block requirements for '<S15>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:28759
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_iyx5);

  /* Outport: '<Root>/RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy9'
   */
  (void)Rte_Write_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
    (HvMgmt_HvPwrOnReq_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyClsDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:339
   *  2. VCU_SW_Requirements_Specification.slreqx:340
   *  3. VCU_SW_Requirements_Specification.slreqx:341
   *  4. VCU_SW_Requirements_Specification.slreqx:345
   *  5. VCU_SW_Requirements_Specification.slreqx:346
   *  6. VCU_SW_Requirements_Specification.slreqx:347
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus' incorporates:
   *  BusCreator: '<S21>/Bus Creator5'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyClsDT.HvMgmt_MonStatPreheatPosRlyClsDTC
    = rtb_DataTypeConversion_mnsd;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyClsDT.HvMgmt_MonResPreheatPosRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch1_knqc;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyClsDT.HvMgmt_ErrStatPreheatPosRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch3;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyClsDT.HvMgmt_ErrResPreheatPosRlyClsDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch6_lkhq;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyClsDTC' */

  /* Outputs for Atomic SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC'
   *
   * Block requirements for '<S7>/HvMgmt_PreheatPosRlyOpenDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:326
   *  2. VCU_SW_Requirements_Specification.slreqx:327
   *  3. VCU_SW_Requirements_Specification.slreqx:328
   *  4. VCU_SW_Requirements_Specification.slreqx:332
   *  5. VCU_SW_Requirements_Specification.slreqx:333
   *  6. VCU_SW_Requirements_Specification.slreqx:334
   */
  /* Outport: '<Root>/RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus' incorporates:
   *  BusCreator: '<S22>/Bus Creator6'
   */
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyOpenD.HvMgmt_MonStatPreheatPosRlyOpenDTC
    = rtb_DataTypeConversion_haip;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyOpenD.HvMgmt_MonResPreheatPosRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch1;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyOpenD.HvMgmt_ErrStatPreheatPosRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch8;
  CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyOpenD.HvMgmt_ErrResPreheatPosRlyOpenDTC
    = CtAp_BMSMgmt_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S7>/HvMgmt_PreheatPosRlyOpenDTC' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum' incorporates:
   *  Delay: '<S16>/Delay'
   *  SignalConversion: '<S6>/SignalCopy12'
   *
   * Block requirements for '<S16>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:241
   */
  (void)Rte_Write_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum
    (CtAp_BMSMgmt_ARID_DEF.Delay_DSTATE_pldv);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BMSMgmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_BMSMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t);
  (void)
    Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu);
  (void)
    Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu);
  (void)Rte_Write_RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_);
  (void)
    Rte_Write_RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyClsDT);
  (void)
    Rte_Write_RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus
    (&CtAp_BMSMgmt_ARID_DEF.RTE_P_HvMgmt_PreheatPosRlyOpenD);
}

#define CtAp_BMSMgmt_STOP_SEC_CODE
#include "CtAp_BMSMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_BMSMgmt_START_SEC_VAR_CONST_8
#include "CtAp_BMSMgmt_MemMap.h"

void R_BMSMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  HvMgmt_BMSHvOnCnt_Enum = 0U;
  HvMgmt_HvNormalPwrOffReq = false;
  HvMgmt_HvPwrOnReq_Flg = false;
  HvMgmt_HvFaultPwrOffReq = false;
  HvMgmt_HvRelayFaultPwrOffReq = false;
  HvMgmt_BMSRlyClsFlt_Flg = false;
  HvMgmt_MonStatBMSRlyClsDTCTwo = false;
  HvMgmt_MonStatBMSRlyClsDTCOne = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_BMSMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_BMSMgmt_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_BMSMgmt_Cyclic_20ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_BMSMgmt_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/HvMgmt_HVPowerRequest'
   *
   * Block requirements for '<S4>/HvMgmt_HVPowerRequest':
   *  1. VCU_SW_Requirements_Specification.slreqx:231
   *  2. VCU_SW_Requirements_Specification.slreqx:232
   *  3. VCU_SW_Requirements_Specification.slreqx:233
   */
  /* SystemInitialize for Atomic SubSystem: '<S14>/HvPwrOnReqInactiveFive' */
  /* SystemInitialize for Atomic SubSystem: '<S185>/ATOM_OnDelay' */
  CtAp_BMSMgmt_ATOM_OnDelay_Init(0.0F,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S185>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S185>/ATOM_OnDelay1' */
  CtAp_BMSMgmt_ATOM_OnDelay_Init(0.0F,
    &CtAp_BMSMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of SystemInitialize for SubSystem: '<S185>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S14>/HvPwrOnReqInactiveFive' */
  /* End of SystemInitialize for SubSystem: '<S4>/HvMgmt_HVPowerRequest' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCOne':
   *  1. VCU_SW_Requirements_Specification.slreqx:274
   *  2. VCU_SW_Requirements_Specification.slreqx:275
   *  3. VCU_SW_Requirements_Specification.slreqx:276
   *  4. VCU_SW_Requirements_Specification.slreqx:280
   *  5. VCU_SW_Requirements_Specification.slreqx:281
   *  6. VCU_SW_Requirements_Specification.slreqx:282
   *  7. VCU_SW_Requirements_Specification.slreqx:283
   */
  /* SystemInitialize for Atomic SubSystem: '<S18>/NoDT' */
  CtAp_BMSMgmt_NoDT_Init();

  /* End of SystemInitialize for SubSystem: '<S18>/NoDT' */
  /* End of SystemInitialize for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCOne' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo'
   *
   * Block requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
   *  1. VCU_SW_Requirements_Specification.slreqx:287
   *  2. VCU_SW_Requirements_Specification.slreqx:288
   *  3. VCU_SW_Requirements_Specification.slreqx:289
   *  4. VCU_SW_Requirements_Specification.slreqx:293
   *  5. VCU_SW_Requirements_Specification.slreqx:294
   *  6. VCU_SW_Requirements_Specification.slreqx:295
   *  7. VCU_SW_Requirements_Specification.slreqx:296
   */
  /* SystemInitialize for Atomic SubSystem: '<S19>/NoDT' */
  CtAp_BMSMgmt_NoDT_bf2p_Init();

  /* End of SystemInitialize for SubSystem: '<S19>/NoDT' */
  /* End of SystemInitialize for SubSystem: '<S7>/HvMgmt_BMSRlyClsDTCTwo' */
  /* End of SystemInitialize for SubSystem: '<S4>/HvMgmt_BMSDTC' */
  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_BMSMgmt_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_BMSMgmt_Cyclic_20ms_sys' */
}

#define CtAp_BMSMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_BMSMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
