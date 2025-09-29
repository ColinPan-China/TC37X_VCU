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
 *  Filename:           CtAp_MCUMgmt.c
 *  File Creation Date: 21-Aug-2025
 *  Model Name:         CtAp_MCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:17:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug 21 10:52:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Aug 21 10:37:51 2025
 *
 *
 *******************************************************************************/
#include "CtAp_MCUMgmt.h"
#include "rtwtypes.h"
#include "CtAp_MCUMgmt_private.h"
#include "Rte_Type.h"
#include "CtAp_MCUMgmt_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_MCUMgmt_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S9>/HvMgmt_MCUStsFlow' */
#define CtAp_IN_MCUSts_MCUReqActDischrg ((uint8_T)6U)
#define CtAp_IN_MCUSts_MCUReqPasDischrg ((uint8_T)8U)
#define CtAp_MCUMg_IN_MCUSts_MCUEnaCmpl ((uint8_T)2U)
#define CtAp_MCUMg_IN_MCUSts_MCUExitEna ((uint8_T)3U)
#define CtAp_MCUMgm_IN_MCUSts_MCUReqRdy ((uint8_T)9U)
#define CtAp_MCUMgm_IN_MCUSts_MCUReqTrq ((uint8_T)10U)
#define CtAp_MCUMgmt_IN_MCUSts_INIT    ((uint8_T)1U)
#define CtAp_MCU_IN_MCUSts_MCUReadyCmpl ((uint8_T)4U)
#define CtAp_MC_IN_MCUSts_MCUReadyGoing ((uint8_T)5U)
#define CtAp_MC_IN_MCUSts_MCUReqDischrg ((uint8_T)7U)
#define CtAp_M_IN_MCUSts_MCUStandbyCmpl ((uint8_T)11U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_MCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"

ARID_DEF_CtAp_MCUMgmt_T CtAp_MCUMgmt_ARID_DEF;

#define CtAp_MCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S10>/ATOM_TimeCnt5'
 *    '<S11>/ATOM_TimeCnt4'
 *    '<S12>/ATOM_TimeCnt3'
 *    '<S13>/ATOM_TimeCnt2'
 *    '<S14>/ATOM_TimeCnt1'
 *    '<S8>/ATOM_TimeCnt'
 *    '<S8>/ATOM_TimeCnt1'
 */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

boolean_T CtAp_MCUMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_MC_T
  *CtAp_MCUMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S15>/Add1' incorporates:
   *  DataTypeConversion: '<S15>/Data Type Conversion'
   *  DataTypeConversion: '<S15>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S15>/Switch' */
  if (rtu_In) {
    /* Sum: '<S15>/Add' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     *  UnitDelay: '<S15>/Delay'
     */
    CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S15>/Min' */
    if (rtb_Add1 <= CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S15>/Add' */
      CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S15>/Min' */
  } else {
    /* Sum: '<S15>/Add' incorporates:
     *  Constant: '<S15>/Constant'
     *  UnitDelay: '<S15>/Delay'
     */
    CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S15>/Switch' */

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  UnitDelay: '<S15>/Delay'
   */
  return CtAp_MCUMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Output and update for atomic system: '<S10>/ATOM_U16ErrorHandle5' */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void CtAp_MCUMgmt_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_MCUMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S16>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

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
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S26>/MinMax' */
      if (u0 <= CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S26>/Sum' */
        CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S26>/MinMax' */
    } else {
      /* Sum: '<S26>/Sum' incorporates:
       *  Constant: '<S24>/Constant23'
       *  UnitDelay: '<S26>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* RelationalOperator: '<S24>/Equal2' incorporates:
     *  Constant: '<S24>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S25>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S25>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S25>/Sum' incorporates:
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt);

      /* MinMax: '<S25>/MinMax' */
      if (u0 <= CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt) {
        /* Sum: '<S25>/Sum' */
        CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt = u0;
      }

      /* End of MinMax: '<S25>/MinMax' */
    } else {
      /* Sum: '<S25>/Sum' incorporates:
       *  Constant: '<S24>/Constant37'
       *  UnitDelay: '<S25>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt = ((uint16_T)0U);
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
    } else if (CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE_akqt >
               rtu_MatureTime) {
      /* Switch: '<S24>/Switch2' incorporates:
       *  Constant: '<S24>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S24>/Switch3' incorporates:
       *  Constant: '<S24>/DEBOUNCING_F'
       *  Switch: '<S24>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
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
      *rty_ErrorRes = CtAp_MCUMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S24>/Switch6' */

    /* Update for Delay: '<S24>/Delay1' */
    CtAp_MCUMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S16>/ErrorHandleSysU16' */
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Output and update for atomic system: '<S11>/NoDT' */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void CtAp_MCUMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T rtu_SetCondition,
  boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt,
  boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDT_CtAp_MCUMgmt_T *CtAp_MCUMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S33>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S34>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S34>/Constant2'
     *  Constant: '<S34>/Constant4'
     *  Switch: '<S34>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S34>/Switch' incorporates:
       *  Constant: '<S34>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S34>/Switch1' */

    /* RelationalOperator: '<S34>/Equal2' incorporates:
     *  Constant: '<S34>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S35>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S35>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S35>/Sum' incorporates:
       *  UnitDelay: '<S35>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S35>/MinMax' */
      if (u0 <= CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S35>/Sum' */
        CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S35>/MinMax' */
    } else {
      /* Sum: '<S35>/Sum' incorporates:
       *  Constant: '<S34>/Constant37'
       *  UnitDelay: '<S35>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S35>/Switch1' */

    /* Switch: '<S34>/Switch8' incorporates:
     *  Constant: '<S34>/Constant6'
     *  Constant: '<S34>/DEBOUNCING'
     *  RelationalOperator: '<S34>/Equal6'
     *  RelationalOperator: '<S35>/B_MiHold'
     *  Switch: '<S34>/Switch2'
     *  Switch: '<S34>/Switch3'
     *  UnitDelay: '<S35>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S34>/Switch2' incorporates:
       *  Constant: '<S34>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S34>/Switch3' incorporates:
       *  Constant: '<S34>/DEBOUNCING_F'
       *  Switch: '<S34>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      /* Switch: '<S34>/Switch2' incorporates:
       *  Constant: '<S34>/PASSED'
       *  Switch: '<S34>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S34>/Switch8' */

    /* Switch: '<S34>/Switch6' incorporates:
     *  Constant: '<S34>/Constant30'
     *  Constant: '<S34>/Constant31'
     *  Constant: '<S34>/Constant32'
     *  Delay: '<S34>/Delay1'
     *  RelationalOperator: '<S34>/Equal3'
     *  RelationalOperator: '<S34>/Equal4'
     *  Switch: '<S34>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S34>/Switch7' incorporates:
       *  Constant: '<S34>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_MCUMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S34>/Switch6' */

    /* Update for Delay: '<S34>/Delay1' */
    CtAp_MCUMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S33>/ErrorHandleSysU16' */
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Output and update for atomic system: '<S12>/NoTiAndMonR' */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void CtAp_MCUMgmt_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes)
{
  /* DataTypeConversion: '<S38>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S38>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S39>/Constant2'
     *  DataTypeConversion: '<S39>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch3' incorporates:
     *  Constant: '<S39>/Constant5'
     *  Constant: '<S39>/F'
     *  Constant: '<S39>/P'
     *  RelationalOperator: '<S39>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S39>/Switch3' */

    /* Switch: '<S39>/Switch6' incorporates:
     *  Constant: '<S39>/Constant11'
     *  Constant: '<S39>/Constant30'
     *  Constant: '<S39>/Constant32'
     *  RelationalOperator: '<S39>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else {
      *rty_ErrorRes = false;
    }

    /* End of Switch: '<S39>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S38>/ErrorHandleSysU16' */
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Output and update for atomic system: '<S13>/NoDT' */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void CtAp_MCUMgmt_NoDT_g31q(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_MCUMg_kac5_T
  *CtAp_MCUMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S48>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S48>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S49>/Switch1' incorporates:
     *  Switch: '<S49>/Switch'
     */
    if (rtu_ResetCondition) {
      /* Switch: '<S49>/Switch1' incorporates:
       *  Constant: '<S49>/Constant2'
       */
      HvMgmt_MonResMCURdyFltDTCOne = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S49>/Switch' incorporates:
       *  Constant: '<S49>/Constant'
       *  Switch: '<S49>/Switch1'
       */
      HvMgmt_MonResMCURdyFltDTCOne = ((uint8_T)1U);
    } else {
      /* Switch: '<S49>/Switch1' incorporates:
       *  Constant: '<S49>/Constant4'
       *  Switch: '<S49>/Switch'
       */
      HvMgmt_MonResMCURdyFltDTCOne = ((uint8_T)2U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* RelationalOperator: '<S49>/Equal2' incorporates:
     *  Constant: '<S49>/Constant5'
     */
    rtb_Equal2 = (HvMgmt_MonResMCURdyFltDTCOne == ((uint8_T)1U));

    /* Switch: '<S50>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S50>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S50>/Sum' incorporates:
       *  UnitDelay: '<S50>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S50>/MinMax' */
      if (u0 <= CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S50>/Sum' */
        CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S50>/MinMax' */
    } else {
      /* Sum: '<S50>/Sum' incorporates:
       *  Constant: '<S49>/Constant37'
       *  UnitDelay: '<S50>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S50>/Switch1' */

    /* Switch: '<S49>/Switch8' incorporates:
     *  Constant: '<S49>/Constant6'
     *  RelationalOperator: '<S49>/Equal6'
     *  RelationalOperator: '<S50>/B_MiHold'
     *  Switch: '<S49>/Switch2'
     *  Switch: '<S49>/Switch3'
     *  UnitDelay: '<S50>/UnitDelay'
     */
    if (HvMgmt_MonResMCURdyFltDTCOne == ((uint8_T)2U)) {
      /* Switch: '<S49>/Switch8' incorporates:
       *  Constant: '<S49>/DEBOUNCING'
       */
      HvMgmt_ErrStatMCURdyFltDTCOne = ((uint8_T)4U);
    } else if (CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S49>/Switch2' incorporates:
       *  Constant: '<S49>/FAILED'
       *  Switch: '<S49>/Switch8'
       */
      HvMgmt_ErrStatMCURdyFltDTCOne = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S49>/Switch3' incorporates:
       *  Constant: '<S49>/DEBOUNCING_F'
       *  Switch: '<S49>/Switch2'
       *  Switch: '<S49>/Switch8'
       */
      HvMgmt_ErrStatMCURdyFltDTCOne = ((uint8_T)3U);
    } else {
      /* Switch: '<S49>/Switch8' incorporates:
       *  Constant: '<S49>/PASSED'
       *  Switch: '<S49>/Switch2'
       *  Switch: '<S49>/Switch3'
       */
      HvMgmt_ErrStatMCURdyFltDTCOne = ((uint8_T)0U);
    }

    /* End of Switch: '<S49>/Switch8' */

    /* Switch: '<S49>/Switch6' incorporates:
     *  Constant: '<S49>/Constant30'
     *  Constant: '<S49>/Constant31'
     *  RelationalOperator: '<S49>/Equal3'
     *  RelationalOperator: '<S49>/Equal4'
     *  Switch: '<S49>/Switch7'
     */
    if (HvMgmt_ErrStatMCURdyFltDTCOne == ((uint8_T)2U)) {
      /* Switch: '<S49>/Switch6' incorporates:
       *  Constant: '<S49>/Constant32'
       */
      HvMgmt_ErrResMCURdyFltDTCOne = true;
    } else if (HvMgmt_ErrStatMCURdyFltDTCOne == ((uint8_T)0U)) {
      /* Switch: '<S49>/Switch7' incorporates:
       *  Constant: '<S49>/Constant11'
       *  Switch: '<S49>/Switch6'
       */
      HvMgmt_ErrResMCURdyFltDTCOne = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S49>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S48>/ErrorHandleSysU16' */
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Output and update for atomic system: '<S14>/NoDT' */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void CtAp_MCUMgmt_NoDT_gb4d(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, ARID_DEF_NoDT_CtAp_MCUMg_awov_T
  *CtAp_MCUMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S59>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S59>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S60>/Switch1' incorporates:
     *  Switch: '<S60>/Switch'
     */
    if (rtu_ResetCondition) {
      /* Switch: '<S60>/Switch1' incorporates:
       *  Constant: '<S60>/Constant2'
       */
      HvMgmt_MonResMCURdyFltDTCTwo = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S60>/Switch' incorporates:
       *  Constant: '<S60>/Constant'
       *  Switch: '<S60>/Switch1'
       */
      HvMgmt_MonResMCURdyFltDTCTwo = ((uint8_T)1U);
    } else {
      /* Switch: '<S60>/Switch1' incorporates:
       *  Constant: '<S60>/Constant4'
       *  Switch: '<S60>/Switch'
       */
      HvMgmt_MonResMCURdyFltDTCTwo = ((uint8_T)2U);
    }

    /* End of Switch: '<S60>/Switch1' */

    /* RelationalOperator: '<S60>/Equal2' incorporates:
     *  Constant: '<S60>/Constant5'
     */
    rtb_Equal2 = (HvMgmt_MonResMCURdyFltDTCTwo == ((uint8_T)1U));

    /* Switch: '<S61>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S61>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S61>/Sum' incorporates:
       *  UnitDelay: '<S61>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S61>/MinMax' */
      if (u0 <= CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S61>/Sum' */
        CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S61>/MinMax' */
    } else {
      /* Sum: '<S61>/Sum' incorporates:
       *  Constant: '<S60>/Constant37'
       *  UnitDelay: '<S61>/UnitDelay'
       */
      CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S61>/Switch1' */

    /* Switch: '<S60>/Switch8' incorporates:
     *  Constant: '<S60>/Constant6'
     *  RelationalOperator: '<S60>/Equal6'
     *  RelationalOperator: '<S61>/B_MiHold'
     *  Switch: '<S60>/Switch2'
     *  Switch: '<S60>/Switch3'
     *  UnitDelay: '<S61>/UnitDelay'
     */
    if (HvMgmt_MonResMCURdyFltDTCTwo == ((uint8_T)2U)) {
      /* Switch: '<S60>/Switch8' incorporates:
       *  Constant: '<S60>/DEBOUNCING'
       */
      HvMgmt_ErrStatMCURdyFltDTCTwo = ((uint8_T)4U);
    } else if (CtAp_MCUMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S60>/Switch2' incorporates:
       *  Constant: '<S60>/FAILED'
       *  Switch: '<S60>/Switch8'
       */
      HvMgmt_ErrStatMCURdyFltDTCTwo = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S60>/Switch3' incorporates:
       *  Constant: '<S60>/DEBOUNCING_F'
       *  Switch: '<S60>/Switch2'
       *  Switch: '<S60>/Switch8'
       */
      HvMgmt_ErrStatMCURdyFltDTCTwo = ((uint8_T)3U);
    } else {
      /* Switch: '<S60>/Switch8' incorporates:
       *  Constant: '<S60>/PASSED'
       *  Switch: '<S60>/Switch2'
       *  Switch: '<S60>/Switch3'
       */
      HvMgmt_ErrStatMCURdyFltDTCTwo = ((uint8_T)0U);
    }

    /* End of Switch: '<S60>/Switch8' */

    /* Switch: '<S60>/Switch6' incorporates:
     *  Constant: '<S60>/Constant30'
     *  Constant: '<S60>/Constant31'
     *  RelationalOperator: '<S60>/Equal3'
     *  RelationalOperator: '<S60>/Equal4'
     *  Switch: '<S60>/Switch7'
     */
    if (HvMgmt_ErrStatMCURdyFltDTCTwo == ((uint8_T)2U)) {
      /* Switch: '<S60>/Switch6' incorporates:
       *  Constant: '<S60>/Constant32'
       */
      HvMgmt_ErrResMCURdyFltDTCTwo = true;
    } else if (HvMgmt_ErrStatMCURdyFltDTCTwo == ((uint8_T)0U)) {
      /* Switch: '<S60>/Switch7' incorporates:
       *  Constant: '<S60>/Constant11'
       *  Switch: '<S60>/Switch6'
       */
      HvMgmt_ErrResMCURdyFltDTCTwo = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S60>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S59>/ErrorHandleSysU16' */
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/If'
 *    '<S8>/If1'
 */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

boolean_T CtAp_MCUMgmt_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S69>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S69>/Switch' */
  return rty_Out1_0;
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_MCUMgmt_START_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

void R_MCUMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_Compare_mum0;
  boolean_T rtb_LogicalOperator13;
  boolean_T rtb_LogicalOperator14;
  boolean_T rtb_LogicalOperator1_nxz3;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_LogicalOperator11;
  boolean_T rtb_LogicalOperator1_mskf;
  boolean_T rtb_LogicalOperator5_o1ti;
  boolean_T rtb_LogicalOperator_puu1;
  boolean_T rtb_LogicalOperator1_bcaa;
  boolean_T rtb_Compare_n1a2;
  boolean_T rtb_LogicalOperator2_pasg;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_Compare_aaig;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_DataTypeConversion_nry1;
  boolean_T rtb_DataTypeConversion_m2bo;
  boolean_T rtb_DataTypeConversion_gcpp;
  boolean_T rtb_DataTypeConversion_d21u;
  boolean_T rtb_DataTypeConversion_pobq;
  boolean_T rtb_Switch_g2d2;
  boolean_T rtb_RelationalOperator;
  dt_ComM_EPTCANBusOffInfo tmpRead_1;
  real32_T tmpRead_2;
  real32_T tmpRead_4;
  uint8_T rtb_HvMgmt_MCUWrkModActSts_Enum;
  uint8_T tmpRead;
  uint8_T tmpRead_3;
  uint8_T tmpRead_6;
  uint8_T tmpRead_9;
  uint8_T tmpRead_a;
  uint8_T tmpRead_d;
  uint8_T tmpRead_g;
  boolean_T tmpRead_0;
  boolean_T tmpRead_5;
  boolean_T tmpRead_7;
  boolean_T tmpRead_8;
  boolean_T tmpRead_b;
  boolean_T tmpRead_c;
  boolean_T tmpRead_e;
  boolean_T tmpRead_f;

  /* Inport: '<Root>/RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq' */
  (void)Rte_Read_RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_d);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg' */
  (void)Rte_Read_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V' */
  (void)Rte_Read_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_MCUMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_MCUSts'
   *
   * Block requirements for '<S4>/HvMgmt_MCUSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:397
   *  2. VCU_SW_Requirements_Specification.slreqx:398
   *  3. VCU_SW_Requirements_Specification.slreqx:399
   *  4. VCU_SW_Requirements_Specification.slreqx:400
   *  5. VCU_SW_Requirements_Specification.slreqx:401
   *  6. VCU_SW_Requirements_Specification.slreqx:402
   *  7. VCU_SW_Requirements_Specification.slreqx:403
   *  8. VCU_SW_Requirements_Specification.slreqx:404
   *  9. VCU_SW_Requirements_Specification.slreqx:405
   *  10. VCU_SW_Requirements_Specification.slreqx:406
   *  11. VCU_SW_Requirements_Specification.slreqx:407
   *  12. VCU_SW_Requirements_Specification.slreqx:408
   *  13. VCU_SW_Requirements_Specification.slreqx:409
   *  14. VCU_SW_Requirements_Specification.slreqx:410
   *  15. VCU_SW_Requirements_Specification.slreqx:411
   *  16. VCU_SW_Requirements_Specification.slreqx:412
   */
  /* Chart: '<S9>/HvMgmt_MCUStsFlow' incorporates:
   *  Delay: '<S9>/Delay'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy10'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy8'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  if ((uint32_T)CtAp_MCUMgmt_ARID_DEF.is_active_c2_CtAp_MCUMgmt == 0U) {
    CtAp_MCUMgmt_ARID_DEF.is_active_c2_CtAp_MCUMgmt = 1U;
    CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt = CtAp_MCUMgmt_IN_MCUSts_INIT;
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)MCUMgmt_MCUReq_Ready);
    rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_INIT);
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt = ((uint16_T)MCUMgmt_Count_Zero);
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = ((uint16_T)MCUMgmt_Count_Zero);
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)MCUMgmt_Count_Zero);
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)MCUMgmt_Count_Zero);
  } else {
    switch (CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt) {
     case CtAp_MCUMgmt_IN_MCUSts_INIT:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Ready);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_INIT);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if (tmpRead_b && (tmpRead_a == ((uint8_T)MCUMgmt_BMSActiveCmpl))) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_MC_IN_MCUSts_MCUReadyGoing;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCURdyGoing);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_MCUMg_IN_MCUSts_MCUEnaCmpl:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_TrqCtrl);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUEnaCmpl);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if ((tmpRead_b == MCUMgmt_Inactive) || (tmpRead_6 == ((uint8_T)
            MCUMgmt_PowerMode_Off)) || tmpRead_5 || ((tmpRead != ((uint8_T)
             MCUMgmt_Init)) && (tmpRead != ((uint8_T)MCUMgmt_Off_Plug))) ||
          (tmpRead_0 && HvMgmt_EnableBCMImmoSts_CFG && (tmpRead_9 == ((uint8_T)
             MCUMgmt_Gear_P))) || ((tmpRead_4 <= HvMgmt_MotActTqUp_CFG) &&
           (tmpRead_4 >= HvMgmt_MotActTqDwn_CFG) && (tmpRead_3 == ((uint8_T)
             MCUMgmt_MCUSts_Fault)))) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_MCUMg_IN_MCUSts_MCUExitEna;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUExitEna);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_MCUMg_IN_MCUSts_MCUExitEna:
      {
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUExitEna);

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
        if (((tmpRead_4 <= HvMgmt_MotActTqUp_CFG) && (tmpRead_4 >=
              HvMgmt_MotActTqDwn_CFG)) ||
            (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt >=
             HvMgmt_MotActTqFltSetTim_CFG) ||
            ((CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt >=
              HvMgmt_MCUClsFltDTCSetTim_CFG) && (tmpRead_7 || tmpRead_8))) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MCUMgm_IN_MCUSts_MCUReqRdy;
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
            MCUMgmt_MCUReq_Ready);
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqRdy);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = (uint16_T)tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      }
      break;

     case CtAp_MCU_IN_MCUSts_MCUReadyCmpl:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Ready);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReadyCmpl);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if ((tmpRead_a == ((uint8_T)MCUMgmt_BMSInctiveCmpl)) || (tmpRead_a ==
           ((uint8_T)MCUMgmt_BMSInactiveFail))) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_MC_IN_MCUSts_MCUReqDischrg;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqDischrg);

        /*   */
      } else if (tmpRead_b && (tmpRead_6 == ((uint8_T)MCUMgmt_PowerMode_On)) &&
                 ((tmpRead == ((uint8_T)MCUMgmt_Init)) || (tmpRead == ((uint8_T)
                    MCUMgmt_Off_Plug))) && (((tmpRead_0 == MCUMgmt_Inactive) &&
                   HvMgmt_EnableBCMImmoSts_CFG) || (HvMgmt_EnableBCMImmoSts_CFG ==
        MCUMgmt_Inactive)) && ((tmpRead_g == ((uint8_T)MCUMgmt_U8Active)) ||
                  (((tmpRead_9 == ((uint8_T)MCUMgmt_Gear_R)) || (tmpRead_9 ==
          ((uint8_T)MCUMgmt_Gear_D))) && ((CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE ==
        ((uint8_T)MCUMgmt_Gear_P)) || (CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE ==
          ((uint8_T)MCUMgmt_Gear_N)))))) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_MCUMgm_IN_MCUSts_MCUReqTrq;
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_TrqCtrl);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqTrq);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_MC_IN_MCUSts_MCUReadyGoing:
      {
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_Ready);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCURdyGoing);

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
        if (((tmpRead_3 == ((uint8_T)MCUMgmt_MCUSts_Rdy)) || (tmpRead_3 ==
              ((uint8_T)MCUMgmt_MCUSts_Fault))) &&
            (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt <=
             HvMgmt_MCURdyFltSetTim_CFG)) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MCU_IN_MCUSts_MCUReadyCmpl;
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReadyCmpl);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
        } else if (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt >
                   HvMgmt_MCURdyFltSetTim_CFG) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MC_IN_MCUSts_MCUReqDischrg;
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqDischrg);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      }
      break;

     case CtAp_IN_MCUSts_MCUReqActDischrg:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Dischrg);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqActDischrg);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if ((tmpRead_2 < MCUMgmt_MCUStandbyUDC) || tmpRead_e) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_M_IN_MCUSts_MCUStandbyCmpl;
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_Ready);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUStandbyCmpl);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_MC_IN_MCUSts_MCUReqDischrg:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Ready);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqDischrg);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      switch (tmpRead_a) {
       case ((uint8_T)MCUMgmt_BMSInactiveFail):
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_IN_MCUSts_MCUReqPasDischrg;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqPasDischrg);
        break;

       case ((uint8_T)MCUMgmt_BMSInctiveCmpl):
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_IN_MCUSts_MCUReqActDischrg;
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_Dischrg);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqActDischrg);
        break;

       default:
        /* no actions */
        break;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_IN_MCUSts_MCUReqPasDischrg:
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Ready);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqPasDischrg);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if ((tmpRead_2 < MCUMgmt_MCUStandbyUDC) || tmpRead_e) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
          CtAp_M_IN_MCUSts_MCUStandbyCmpl;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUStandbyCmpl);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;

     case CtAp_MCUMgm_IN_MCUSts_MCUReqRdy:
      {
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_Ready);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqRdy);

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
        if ((tmpRead_3 == ((uint8_T)MCUMgmt_MCUSts_Rdy)) ||
            (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt >=
             HvMgmt_MotActTqFltSetTim_CFG) ||
            ((CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt >=
              HvMgmt_MCUClsFltDTCSetTim_CFG) && (tmpRead_7 || tmpRead_8))) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MCU_IN_MCUSts_MCUReadyCmpl;
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReadyCmpl);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = (uint16_T)tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      }
      break;

     case CtAp_MCUMgm_IN_MCUSts_MCUReqTrq:
      {
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
          MCUMgmt_MCUReq_TrqCtrl);
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUReqTrq);

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
        if ((CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt <=
             HvMgmt_MCUEnaFltDTCSetTim_CFG) && (tmpRead_3 == ((uint8_T)
              MCUMgmt_MCUSts_TrqCtrl))) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MCUMg_IN_MCUSts_MCUEnaCmpl;
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUEnaCmpl);
        } else if (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt >
                   HvMgmt_MCUEnaFltDTCSetTim_CFG) {
          CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt =
            CtAp_MCUMg_IN_MCUSts_MCUExitEna;
          rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUExitEna);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
            MCUMgmt_Count_Zero);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt + (int32_T)
            ((uint16_T)MCUMgmt_HvMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      }
      break;

     default:
      /* case IN_MCUSts_MCUStandbyCmpl: */
      CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum = ((uint8_T)
        MCUMgmt_MCUReq_Ready);
      rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_MCUStandbyCmpl);

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      if ((tmpRead_d == ((uint8_T)MCUMgmt_INIT)) || (tmpRead_d == ((uint8_T)
            MCUMgmt_Standby)) || (tmpRead_d == ((uint8_T)MCUMgmt_Sleep))) {
        CtAp_MCUMgmt_ARID_DEF.is_c2_CtAp_MCUMgmt = CtAp_MCUMgmt_IN_MCUSts_INIT;
        rtb_HvMgmt_MCUWrkModActSts_Enum = ((uint8_T)MCUMgmt_INIT);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCURdyFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUEnaFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUClsFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
        CtAp_MCUMgmt_ARID_DEF.HvMgmt_MotActTqFltCnt = ((uint16_T)
          MCUMgmt_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
      break;
    }
  }

  /* End of Chart: '<S9>/HvMgmt_MCUStsFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* Update for Delay: '<S9>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE = tmpRead_9;

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_MCUSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_MCUDTC' */
  /* Outputs for Atomic SubSystem: '<S10>/ATOM_TimeCnt5' */
  /* Constant: '<S10>/Marco_Active4' incorporates:
   *  Constant: '<S10>/HvMgmt_MCUClsFltDTCEnaSetTim_CFG'
   *  Constant: '<S10>/HvMgmt_RunStep8'
   */
  rtb_DataTypeConversion_pobq = CtAp_MCUMgmt_ATOM_TimeCnt(MCUMgmt_Active,
    ((uint16_T)MCUMgmt_HvMgmt_RunStep), HvMgmt_MCUClsFltDTCEnaSetTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt5);

  /* End of Outputs for SubSystem: '<S10>/ATOM_TimeCnt5' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S17>/Constant'
   *  RelationalOperator: '<S17>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_RelationalOperator = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    MCUMgmt_Inactive);

  /* Logic: '<S10>/LogicalOperator2' incorporates:
   *  Logic: '<S11>/LogicalOperator2'
   *  Logic: '<S12>/LogicalOperator2'
   *  Logic: '<S13>/LogicalOperator2'
   *  Logic: '<S14>/LogicalOperator1'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  tmpRead_f = !tmpRead_f;

  /* Logic: '<S10>/LogicalOperator13' incorporates:
   *  Logic: '<S10>/LogicalOperator2'
   *  SignalConversion: '<S5>/SignalCopy14'
   *
   * Block requirements for '<S10>/LogicalOperator13':
   *  1. VCU_SW_Requirements_Specification.slreqx:471
   */
  rtb_LogicalOperator13 = (rtb_DataTypeConversion_pobq && rtb_RelationalOperator
    && tmpRead_c && tmpRead_f);

  /* Logic: '<S10>/LogicalOperator14' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S10>/LogicalOperator14':
   *  1. VCU_SW_Requirements_Specification.slreqx:469
   */
  rtb_LogicalOperator14 = ((tmpRead_d == ((uint8_T)MCUMgmt_DrvReady)) &&
    (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum == ((uint8_T)
    MCUMgmt_MCUReq_Ready)) && (tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Rdy)) &&
    (tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Fault)));

  /* Logic: '<S10>/LogicalOperator1' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S21>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S10>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:469
   */
  rtb_LogicalOperator1_nxz3 = ((tmpRead_3 == ((uint8_T)MCUMgmt_MCUSts_Rdy)) ||
    (tmpRead_3 == ((uint8_T)MCUMgmt_MCUSts_Fault)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_U16ErrorHandle5' */
  /* Constant: '<S10>/HvMgmt_MCUClsFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S10>/HvMgmt_MCUClsFltDTCResetTim_CFG'
   *  Constant: '<S10>/HvMgmt_RunStep9'
   *
   * Block requirements for '<S10>/HvMgmt_MCUClsFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:475
   *
   * Block requirements for '<S10>/HvMgmt_MCUClsFltDTCResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:476
   */
  CtAp_MCUMgmt_ATOM_U16ErrHnd(rtb_LogicalOperator13, rtb_LogicalOperator14,
    rtb_LogicalOperator1_nxz3, HvMgmt_MCUClsFltDTCSetTim_CFG,
    HvMgmt_MCUClsFltDTCResetTim_CFG, ((uint16_T)MCUMgmt_HvMgmt_RunStep),
    &rtb_DataTypeConversion_pobq, &CtAp_MCUMgmt_ARID_DEF.Switch1_psmu,
    &CtAp_MCUMgmt_ARID_DEF.Switch8_a2wu, &CtAp_MCUMgmt_ARID_DEF.Switch6_o5hj,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle5);

  /* End of Outputs for SubSystem: '<S10>/ATOM_U16ErrorHandle5' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt4' */
  /* Constant: '<S11>/Marco_Active3' incorporates:
   *  Constant: '<S11>/HvMgmt_MCUEnaFltDTCEnaSetTim_CFG'
   *  Constant: '<S11>/HvMgmt_RunStep6'
   */
  rtb_DataTypeConversion_d21u = CtAp_MCUMgmt_ATOM_TimeCnt(MCUMgmt_Active,
    ((uint16_T)MCUMgmt_HvMgmt_RunStep), HvMgmt_MCUEnaFltDTCEnaSetTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt4);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt4' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S28>/Constant'
   *  RelationalOperator: '<S28>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_RelationalOperator = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    MCUMgmt_Inactive);

  /* Logic: '<S11>/LogicalOperator10' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   *
   * Block requirements for '<S11>/LogicalOperator10':
   *  1. VCU_SW_Requirements_Specification.slreqx:458
   */
  rtb_LogicalOperator10 = (rtb_DataTypeConversion_d21u && rtb_RelationalOperator
    && tmpRead_c && tmpRead_f);

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S30>/Constant'
   *  RelationalOperator: '<S30>/Compare'
   */
  rtb_RelationalOperator = (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum ==
    ((uint8_T)MCUMgmt_MCUReq_TrqCtrl));

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* Logic: '<S11>/LogicalOperator11' incorporates:
   *  Constant: '<S29>/Constant'
   *  RelationalOperator: '<S29>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S11>/LogicalOperator11':
   *  1. VCU_SW_Requirements_Specification.slreqx:456
   */
  rtb_LogicalOperator11 = ((tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_TrqCtrl)) &&
    rtb_RelationalOperator);

  /* Logic: '<S11>/LogicalOperator1' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Delay: '<S11>/Delay'
   *  Logic: '<S11>/LogicalOperator12'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  SignalConversion: '<S5>/SignalCopy15'
   *
   * Block requirements for '<S11>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:457
   */
  rtb_LogicalOperator1_mskf = ((rtb_RelationalOperator &&
    (CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE_k1og == ((uint8_T)MCUMgmt_MCUReq_Ready)))
    || (tmpRead_d == ((uint8_T)MCUMgmt_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/NoDT' */
  /* Constant: '<S11>/HvMgmt_MCUEnaFltDTCSetTim_CFG' incorporates:
   *  Constant: '<S11>/HvMgmt_RunStep7'
   *
   * Block requirements for '<S11>/HvMgmt_MCUEnaFltDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:462
   */
  CtAp_MCUMgmt_NoDT(rtb_LogicalOperator10, rtb_LogicalOperator11,
                    rtb_LogicalOperator1_mskf, HvMgmt_MCUEnaFltDTCSetTim_CFG,
                    ((uint16_T)MCUMgmt_HvMgmt_RunStep),
                    &rtb_DataTypeConversion_d21u,
                    &CtAp_MCUMgmt_ARID_DEF.Switch1_iias,
                    &CtAp_MCUMgmt_ARID_DEF.Switch8,
                    &CtAp_MCUMgmt_ARID_DEF.Switch6_pv4q,
                    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_NoDT_kkiq);

  /* End of Outputs for SubSystem: '<S11>/NoDT' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt3' */
  /* Constant: '<S12>/Marco_Active2' incorporates:
   *  Constant: '<S12>/HvMgmt_MCURdyFltDTCEnaSetTim_CFG2'
   *  Constant: '<S12>/HvMgmt_RunStep4'
   */
  rtb_DataTypeConversion_gcpp = CtAp_MCUMgmt_ATOM_TimeCnt(MCUMgmt_Active,
    ((uint16_T)MCUMgmt_HvMgmt_RunStep), HvMgmt_MCURdyFltDTCEnaSetTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S37>/Constant'
   *  RelationalOperator: '<S37>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_RelationalOperator = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    MCUMgmt_Inactive);

  /* Logic: '<S12>/LogicalOperator5' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   *
   * Block requirements for '<S12>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:445
   */
  rtb_LogicalOperator5_o1ti = (rtb_DataTypeConversion_gcpp &&
    rtb_RelationalOperator && tmpRead_c && tmpRead_f);

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_TimeCnt2' */
  /* Constant: '<S13>/Marco_Active' incorporates:
   *  Constant: '<S13>/HvMgmt_MCURdyFltDTCEnaSetTim_CFG'
   *  Constant: '<S13>/HvMgmt_RunStep'
   */
  rtb_Switch_g2d2 = CtAp_MCUMgmt_ATOM_TimeCnt(MCUMgmt_Active, ((uint16_T)
    MCUMgmt_HvMgmt_RunStep), HvMgmt_MCURdyFltDTCEnaSetTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S13>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S41>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_RelationalOperator = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    MCUMgmt_Inactive);

  /* Logic: '<S13>/LogicalOperator' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   *
   * Block requirements for '<S13>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:419
   */
  rtb_LogicalOperator_puu1 = (rtb_Switch_g2d2 && rtb_RelationalOperator &&
    tmpRead_c && tmpRead_f);

  /* Logic: '<S13>/LogicalOperator1' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  SignalConversion: '<S5>/SignalCopy12'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S13>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:417
   */
  rtb_LogicalOperator1_bcaa = ((CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum ==
    ((uint8_T)MCUMgmt_MCUReq_Ready)) && (tmpRead_a == ((uint8_T)
    MCUMgmt_BMSActiveCmpl)) && tmpRead_b && (tmpRead_d == ((uint8_T)
    MCUMgmt_Standby)) && (tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Rdy)) &&
    (tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Fault)));

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_n1a2 = (tmpRead_d == ((uint8_T)MCUMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S13>/NoDT' */
  /* Constant: '<S13>/HvMgmt_MCUHVPowerOnTim_CFG' incorporates:
   *  Constant: '<S13>/HvMgmt_RunStep1'
   *
   * Block requirements for '<S13>/HvMgmt_MCUHVPowerOnTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:423
   */
  CtAp_MCUMgmt_NoDT_g31q(rtb_LogicalOperator_puu1, rtb_LogicalOperator1_bcaa,
    rtb_Compare_n1a2, HvMgmt_MCUHVPowerOnTim_CFG, ((uint16_T)
    MCUMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion_m2bo,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_NoDT_cl54);

  /* End of Outputs for SubSystem: '<S13>/NoDT' */

  /* SignalConversion generated from: '<S13>/NoDT' */
  HvMgmt_MonStatMCURdyFltDTCOne = rtb_DataTypeConversion_m2bo;

  /* Outputs for Atomic SubSystem: '<S14>/ATOM_TimeCnt1' */
  /* Constant: '<S14>/Marco_Active1' incorporates:
   *  Constant: '<S14>/HvMgmt_MCURdyFltDTCEnaSetTim_CFG1'
   *  Constant: '<S14>/HvMgmt_RunStep2'
   */
  rtb_Switch_g2d2 = CtAp_MCUMgmt_ATOM_TimeCnt(MCUMgmt_Active, ((uint16_T)
    MCUMgmt_HvMgmt_RunStep), HvMgmt_MCURdyFltDTCEnaSetTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_mbvz);

  /* End of Outputs for SubSystem: '<S14>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  Constant: '<S53>/Constant'
   *  RelationalOperator: '<S53>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_RelationalOperator = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    MCUMgmt_Inactive);

  /* Logic: '<S14>/LogicalOperator2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   *
   * Block requirements for '<S14>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:432
   */
  rtb_LogicalOperator2_pasg = (rtb_Switch_g2d2 && rtb_RelationalOperator &&
    tmpRead_c && tmpRead_f);

  /* Logic: '<S14>/LogicalOperator3' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S54>/Constant'
   *  Constant: '<S55>/Constant'
   *  Constant: '<S56>/Constant'
   *  Constant: '<S57>/Constant'
   *  Logic: '<S14>/LogicalOperator5'
   *  RelationalOperator: '<S52>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy5'
   *
   * Block requirements for '<S14>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:430
   *
   * Block requirements for '<S14>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:432
   */
  rtb_LogicalOperator3 = ((CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum ==
    ((uint8_T)MCUMgmt_MCUReq_Ready)) && (tmpRead_3 != ((uint8_T)
    MCUMgmt_MCUSts_Fault)) && (tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Rdy)) &&
    ((tmpRead == ((uint8_T)MCUMgmt_Off_Plug)) && (tmpRead_d == ((uint8_T)
    MCUMgmt_HvReady))));

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_aaig = (tmpRead_d == ((uint8_T)MCUMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/NoDT' */
  /* Constant: '<S14>/HvMgmt_MCURdyFltCheckTim_CFG' incorporates:
   *  Constant: '<S14>/HvMgmt_RunStep3'
   *
   * Block requirements for '<S14>/HvMgmt_MCURdyFltCheckTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:436
   */
  CtAp_MCUMgmt_NoDT_gb4d(rtb_LogicalOperator2_pasg, rtb_LogicalOperator3,
    rtb_Compare_aaig, HvMgmt_MCURdyFltCheckTim_CFG, ((uint16_T)
    MCUMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion_nry1,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S14>/NoDT' */

  /* SignalConversion generated from: '<S14>/NoDT' */
  HvMgmt_MonStatMCURdyFltDTCTwo = rtb_DataTypeConversion_nry1;

  /* Logic: '<S12>/LogicalOperator6' incorporates:
   *  BusCreator: '<S13>/Bus Creator1'
   *  BusCreator: '<S14>/Bus Creator2'
   *
   * Block requirements for '<S12>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:443
   */
  rtb_LogicalOperator6 = (HvMgmt_ErrResMCURdyFltDTCOne ||
    HvMgmt_ErrResMCURdyFltDTCTwo);

  /* RelationalOperator: '<S62>/Relational Operator' incorporates:
   *  BusCreator: '<S14>/Bus Creator2'
   *  Logic: '<S12>/LogicalOperator8'
   */
  rtb_RelationalOperator = !HvMgmt_ErrResMCURdyFltDTCTwo;

  /* Switch: '<S70>/Switch' incorporates:
   *  BusCreator: '<S13>/Bus Creator1'
   *  Logic: '<S12>/LogicalOperator9'
   */
  rtb_Switch_g2d2 = !HvMgmt_ErrResMCURdyFltDTCOne;

  /* Logic: '<S12>/LogicalOperator7'
   *
   * Block requirements for '<S12>/LogicalOperator7':
   *  1. VCU_SW_Requirements_Specification.slreqx:444
   */
  rtb_LogicalOperator7 = (rtb_RelationalOperator && rtb_Switch_g2d2);

  /* Outputs for Atomic SubSystem: '<S12>/NoTiAndMonR' */
  CtAp_MCUMgmt_NoTiAndMonR(rtb_LogicalOperator5_o1ti, rtb_LogicalOperator6,
    rtb_LogicalOperator7, &rtb_DataTypeConversion_gcpp,
    &CtAp_MCUMgmt_ARID_DEF.Switch1, &CtAp_MCUMgmt_ARID_DEF.Switch3,
    &CtAp_MCUMgmt_ARID_DEF.Switch6);

  /* End of Outputs for SubSystem: '<S12>/NoTiAndMonR' */

  /* Update for Delay: '<S11>/Delay' */
  CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE_k1og =
    CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_MCUDTC' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_MCURdyFlt'
   *
   * Block requirements for '<S4>/HvMgmt_MCURdyFlt':
   *  1. VCU_SW_Requirements_Specification.slreqx:394
   *  2. VCU_SW_Requirements_Specification.slreqx:395
   *  3. VCU_SW_Requirements_Specification.slreqx:396
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* Switch: '<S70>/Switch' incorporates:
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Logic: '<S8>/LogicalOperator4'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  rtb_Switch_g2d2 = ((tmpRead_3 != ((uint8_T)MCUMgmt_MCUSts_Rdy)) && (tmpRead_3
    != ((uint8_T)MCUMgmt_MCUSts_Fault)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S68>/Constant'
   *  RelationalOperator: '<S68>/Compare'
   */
  rtb_LogicalOperator1 = ((rtb_HvMgmt_MCUWrkModActSts_Enum == ((uint8_T)
    MCUMgmt_MCURdyGoing)) && rtb_Switch_g2d2);

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep' incorporates:
   *  Constant: '<S8>/HvMgmt_MCUHVPowerOnTim_CFG'
   */
  rtb_RelationalOperator = CtAp_MCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator1,
    ((uint16_T)MCUMgmt_HvMgmt_RunStep), HvMgmt_MCUHVPowerOnTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S67>/Constant'
   *  Constant: '<S71>/Constant'
   *  Logic: '<S8>/LogicalOperator5'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_LogicalOperator2 = (rtb_Switch_g2d2 && ((tmpRead_d == ((uint8_T)
    MCUMgmt_HvReady)) && (tmpRead == ((uint8_T)MCUMgmt_Off_Plug))) &&
    (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum == ((uint8_T)
    MCUMgmt_MCUReq_Ready)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt1' */
  /* Constant: '<S8>/Marco_HvMgmt_RunStep1' incorporates:
   *  Constant: '<S8>/HvMgmt_MCURdyFltCheckTim_CFG'
   */
  rtb_Switch_g2d2 = CtAp_MCUMgmt_ATOM_TimeCnt(rtb_LogicalOperator2, ((uint16_T)
    MCUMgmt_HvMgmt_RunStep), HvMgmt_MCURdyFltCheckTim_CFG,
    &CtAp_MCUMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt1' */

  /* Logic: '<S8>/LogicalOperator' */
  rtb_LogicalOperator = (rtb_RelationalOperator || rtb_Switch_g2d2);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Input' */
  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  rtb_Compare_mum0 = (tmpRead_d == ((uint8_T)MCUMgmt_Sleep));

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If1' */
  /* Constant: '<S8>/MCUMgmt_Inactive' incorporates:
   *  Delay: '<S8>/Delay'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:396
   */
  rtb_Switch_g2d2 = CtAp_MCUMgmt_If(rtb_Compare_mum0, MCUMgmt_Inactive,
    CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE_c1yd);

  /* End of Outputs for SubSystem: '<S8>/If1' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:394
   *  2. VCU_SW_Requirements_Specification.slreqx:395
   */
  /* Delay: '<S8>/Delay' incorporates:
   *  Constant: '<S8>/Marco_Active'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:396
   */
  CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE_c1yd = CtAp_MCUMgmt_If(rtb_LogicalOperator,
    MCUMgmt_Active, rtb_Switch_g2d2);

  /* End of Outputs for SubSystem: '<S8>/If' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_MCURdyFlt' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_MCUDTC' */
  /* Outport: '<Root>/RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus' incorporates:
   *  BusCreator: '<S10>/Bus Creator5'
   */
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUClsFltDTC_Bus_t.HvMgmt_MonStatMCUClsFltDTC
    = rtb_DataTypeConversion_pobq;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUClsFltDTC_Bus_t.HvMgmt_MonResMCUClsFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch1_psmu;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUClsFltDTC_Bus_t.HvMgmt_ErrStatMCUClsFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch8_a2wu;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUClsFltDTC_Bus_t.HvMgmt_ErrResMCUClsFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch6_o5hj;

  /* Outport: '<Root>/RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus' incorporates:
   *  BusCreator: '<S11>/Bus Creator4'
   */
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t.HvMgmt_MonStatMCUEnaFltDTC
    = rtb_DataTypeConversion_d21u;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t.HvMgmt_MonResMCUEnaFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch1_iias;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t.HvMgmt_ErrStatMCUEnaFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch8;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t.HvMgmt_ErrResMCUEnaFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch6_pv4q;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_MCUDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg' incorporates:
   *  Delay: '<S8>/Delay'
   *  SignalConversion: '<S6>/SignalCopy2'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:396
   */
  (void)Rte_Write_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg
    (CtAp_MCUMgmt_ARID_DEF.Delay_DSTATE_c1yd);

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_MCUDTC' */
  /* Outport: '<Root>/RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus' incorporates:
   *  BusCreator: '<S12>/Bus Creator3'
   */
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTC_Bus_t.HvMgmt_MonStatMCURdyFltDTC
    = rtb_DataTypeConversion_gcpp;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTC_Bus_t.HvMgmt_MonResMCURdyFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch1;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTC_Bus_t.HvMgmt_ErrStatMCURdyFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch3;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTC_Bus_t.HvMgmt_ErrResMCURdyFltDTC
    = CtAp_MCUMgmt_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus' incorporates:
   *  BusCreator: '<S13>/Bus Creator1'
   */
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCOne_Bu.HvMgmt_MonStatMCURdyFltDTCOne
    = HvMgmt_MonStatMCURdyFltDTCOne;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCOne_Bu.HvMgmt_MonResMCURdyFltDTCOne
    = HvMgmt_MonResMCURdyFltDTCOne;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCOne_Bu.HvMgmt_ErrStatMCURdyFltDTCOne
    = HvMgmt_ErrStatMCURdyFltDTCOne;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCOne_Bu.HvMgmt_ErrResMCURdyFltDTCOne
    = HvMgmt_ErrResMCURdyFltDTCOne;

  /* Outport: '<Root>/RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus' incorporates:
   *  BusCreator: '<S14>/Bus Creator2'
   */
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu.HvMgmt_MonStatMCURdyFltDTCTwo
    = HvMgmt_MonStatMCURdyFltDTCTwo;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu.HvMgmt_MonResMCURdyFltDTCTwo
    = HvMgmt_MonResMCURdyFltDTCTwo;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu.HvMgmt_ErrStatMCURdyFltDTCTwo
    = HvMgmt_ErrStatMCURdyFltDTCTwo;
  CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu.HvMgmt_ErrResMCURdyFltDTCTwo
    = HvMgmt_ErrResMCURdyFltDTCTwo;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_MCUDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_MCUMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy6'
   */
  (void)Rte_Write_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum
    (CtAp_MCUMgmt_ARID_DEF.HvMgmt_MCUReqSts_Enum);

  /* Outport: '<Root>/RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy7'
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum
    (rtb_HvMgmt_MCUWrkModActSts_Enum);

  /* End of Outputs for SubSystem: '<S2>/CtAp_MCUMgmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_MCUMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus
    (&CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUClsFltDTC_Bus_t);
  (void)Rte_Write_RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus
    (&CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t);
  (void)Rte_Write_RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus
    (&CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTC_Bus_t);
  (void)
    Rte_Write_RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus
    (&CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCOne_Bu);
  (void)
    Rte_Write_RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus
    (&CtAp_MCUMgmt_ARID_DEF.RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu);
}

#define CtAp_MCUMgmt_STOP_SEC_CODE
#include "CtAp_MCUMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_MCUMgmt_START_SEC_VAR_CONST_8
#include "CtAp_MCUMgmt_MemMap.h"

void R_MCUMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  HvMgmt_MonStatMCURdyFltDTCOne = false;
  HvMgmt_MonStatMCURdyFltDTCTwo = false;
  HvMgmt_MonResMCURdyFltDTCTwo = 0U;
  HvMgmt_ErrStatMCURdyFltDTCTwo = 0U;
  HvMgmt_ErrResMCURdyFltDTCTwo = false;
  HvMgmt_MonResMCURdyFltDTCOne = 0U;
  HvMgmt_ErrStatMCURdyFltDTCOne = 0U;
  HvMgmt_ErrResMCURdyFltDTCOne = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_MCUMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_MCUMgmt_T));
}

#define CtAp_MCUMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_MCUMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
