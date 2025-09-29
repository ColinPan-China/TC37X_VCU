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
 *  Filename:           CtAp_ChrgPreHeat.c
 *  File Creation Date: 27-May-2025
 *  Model Name:         CtAp_ChrgPreHeat
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue May 27 14:40:27 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 14:28:56 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgPreHeat.h"
#include "rtwtypes.h"
#include "Rte_Type.h"
#include "CtAp_ChrgPreHeat_private.h"
#include <math.h>
#include "CtAp_ChrgPreHeat_Cal.h"
#include "VCU_TempGlobal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/ChrMgmt_PreheatFlow' */
#define C_IN_Preheat_PreheatingPrepared ((uint8_T)7U)
#define CtA_IN_Preheat_DuringPreheating ((uint8_T)5U)
#define CtA_IN_Preheat_PreheatPreparing ((uint8_T)6U)
#define CtAp_Chr_IN_Preheat_KeepWarming ((uint8_T)1U)
#define CtAp_ChrgP_IN_Preheat_Nopreheat ((uint8_T)3U)
#define CtAp_ChrgPreHea_IN_KeepWarmFlow ((uint8_T)1U)
#define CtAp_ChrgPreHeat_IN_PreheatFlow ((uint8_T)2U)
#define CtAp_ChrgPre_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_IN_Preheat_PreheatComplete ((uint8_T)4U)
#define Ct_IN_Preheat_KeepwarmPreparing ((uint8_T)2U)
#define IN_Preheat_ACPreheatAndCha_kmh5 ((uint8_T)2U)
#define IN_Preheat_ACPreheatAndCharging ((uint8_T)1U)
#define IN_Preheat_DCPreheatAndCha_irmx ((uint8_T)4U)
#define IN_Preheat_DCPreheatAndCharging ((uint8_T)3U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgPreHeat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"

ARID_DEF_CtAp_ChrgPreHeat_T CtAp_ChrgPreHeat_ARID_DEF;

#define CtAp_ChrgPreHeat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_U16ErrorHandle'
 *    '<S9>/ATOM_U16ErrorHandle'
 *    '<S11>/ATOM_U16ErrorHandle'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void CtAp_ChrgPreHeat_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S13>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S16>/Constant2'
     *  Constant: '<S16>/Constant4'
     *  Switch: '<S16>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S16>/Switch' incorporates:
       *  Constant: '<S16>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S16>/Switch1' */

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
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S18>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S18>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S18>/MinMax' */
    } else {
      /* Sum: '<S18>/Sum' incorporates:
       *  Constant: '<S16>/Constant23'
       *  UnitDelay: '<S18>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
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
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf);

      /* MinMax: '<S17>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf) {
        /* Sum: '<S17>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf = u0;
      }

      /* End of MinMax: '<S17>/MinMax' */
    } else {
      /* Sum: '<S17>/Sum' incorporates:
       *  Constant: '<S16>/Constant37'
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf = ((uint16_T)0U);
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S16>/Switch8' incorporates:
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S16>/DEBOUNCING'
     *  RelationalOperator: '<S16>/Equal6'
     *  RelationalOperator: '<S17>/B_MiHold'
     *  RelationalOperator: '<S18>/B_MiHold'
     *  Switch: '<S16>/Switch2'
     *  Switch: '<S16>/Switch3'
     *  Switch: '<S16>/Switch4'
     *  UnitDelay: '<S17>/UnitDelay'
     *  UnitDelay: '<S18>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_guvf >
               rtu_MatureTime) {
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
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S16>/Switch4' incorporates:
       *  Constant: '<S16>/PASSED'
       *  Switch: '<S16>/Switch2'
       *  Switch: '<S16>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S16>/Switch3' incorporates:
       *  Constant: '<S16>/DEBOUNCING_P'
       *  Switch: '<S16>/Switch2'
       *  Switch: '<S16>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
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
      *rty_ErrorRes = CtAp_ChrgPreHeat__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S16>/Switch6' */

    /* Update for Delay: '<S16>/Delay1' */
    CtAp_ChrgPreHeat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S13>/ErrorHandleSysU16' */
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/ChrMgmt_PreheatErrResetCdn'
 *    '<S9>/ChrMgmt_PreheatErrResetCdn'
 *    '<S11>/ChrMgmt_PreheatErrResetCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_ChrMgmt_PreheatErrResetCdn(uint8_T rtu_ChrMgmt_PreheatErrSig_Bus)
{
  /* Logic: '<S14>/LogicalOperator' incorporates:
   *  Constant: '<S14>/Define'
   *  Constant: '<S14>/Define1'
   *  RelationalOperator: '<S14>/Equal'
   *  RelationalOperator: '<S14>/Equal1'
   */
  return (rtu_ChrMgmt_PreheatErrSig_Bus == ((uint8_T)ChrgPreHeat_OffPlug)) ||
    (rtu_ChrMgmt_PreheatErrSig_Bus == ((uint8_T)ChrgPreHeat_CharingFault));
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/ChrMgmt_PreheatErrSetCdn'
 *    '<S8>/ChrMgmt_PreheatErrSetCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_C_ChrMgmt_PreheatErrSetCdn(real32_T rtu_ChrMgmt_PreheatErrSig_Bus,
  real32_T rtu_ChrMgmt_PreheatErrSig__jxkw, uint8_T
  rtu_ChrMgmt_PreheatErrSig__fns1, uint8_T rtu_ChrMgmt_PreheatErrSig__dnlf,
  uint8_T rtu_ChrMgmt_PreheatErrSig__hpeu)
{
  /* Logic: '<S15>/LogicalOperator' incorporates:
   *  Abs: '<S15>/Abs'
   *  Constant: '<S15>/CAL'
   *  Constant: '<S15>/Define'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  RelationalOperator: '<S15>/RelationalOperator'
   *  RelationalOperator: '<S15>/RelationalOperator1'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  Sum: '<S15>/Add'
   */
  return (rtu_ChrMgmt_PreheatErrSig__hpeu == ((uint8_T)ChrgPreHeat_PreheatingMod))
    && (fabsf(rtu_ChrMgmt_PreheatErrSig_Bus - rtu_ChrMgmt_PreheatErrSig__jxkw) >
        ChrMgmt_PosRlyCtrlUDcDe_CFG) && (rtu_ChrMgmt_PreheatErrSig__fns1 ==
    ((uint8_T)ChrgPreHeat_HeatReqOnly)) && (rtu_ChrMgmt_PreheatErrSig__dnlf ==
    ((uint8_T)ChrgPreHeat_HvReady));
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/* Output and update for atomic system: '<S8>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void CtAp_ChrgPr_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_nsaz_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S21>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S21>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S25>/Constant2'
     *  Constant: '<S25>/Constant4'
     *  Switch: '<S25>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S25>/Switch' incorporates:
       *  Constant: '<S25>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S25>/Constant3'
     *  RelationalOperator: '<S25>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S27>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S27>/Sum' incorporates:
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S27>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S27>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S27>/MinMax' */
    } else {
      /* Sum: '<S27>/Sum' incorporates:
       *  Constant: '<S25>/Constant23'
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S27>/Switch1' */

    /* RelationalOperator: '<S25>/Equal2' incorporates:
     *  Constant: '<S25>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S26>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S26>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S26>/Sum' incorporates:
       *  UnitDelay: '<S26>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m);

      /* MinMax: '<S26>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m) {
        /* Sum: '<S26>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m = u0;
      }

      /* End of MinMax: '<S26>/MinMax' */
    } else {
      /* Sum: '<S26>/Sum' incorporates:
       *  Constant: '<S25>/Constant37'
       *  UnitDelay: '<S26>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m = ((uint16_T)0U);
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Switch: '<S25>/Switch8' incorporates:
     *  Constant: '<S25>/Constant6'
     *  Constant: '<S25>/DEBOUNCING'
     *  RelationalOperator: '<S25>/Equal6'
     *  RelationalOperator: '<S26>/B_MiHold'
     *  RelationalOperator: '<S27>/B_MiHold'
     *  Switch: '<S25>/Switch2'
     *  Switch: '<S25>/Switch3'
     *  Switch: '<S25>/Switch4'
     *  UnitDelay: '<S26>/UnitDelay'
     *  UnitDelay: '<S27>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_g05m >
               rtu_MatureTime) {
      /* Switch: '<S25>/Switch2' incorporates:
       *  Constant: '<S25>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S25>/Switch3' incorporates:
       *  Constant: '<S25>/DEBOUNCING_F'
       *  Switch: '<S25>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S25>/Switch4' incorporates:
       *  Constant: '<S25>/PASSED'
       *  Switch: '<S25>/Switch2'
       *  Switch: '<S25>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S25>/Switch3' incorporates:
       *  Constant: '<S25>/DEBOUNCING_P'
       *  Switch: '<S25>/Switch2'
       *  Switch: '<S25>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S25>/Switch8' */

    /* Switch: '<S25>/Switch6' incorporates:
     *  Constant: '<S25>/Constant30'
     *  Constant: '<S25>/Constant31'
     *  RelationalOperator: '<S25>/Equal3'
     *  RelationalOperator: '<S25>/Equal4'
     *  Switch: '<S25>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S25>/Switch6' incorporates:
       *  Constant: '<S25>/Constant32'
       */
      ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S25>/Switch7' incorporates:
       *  Constant: '<S25>/Constant11'
       *  Switch: '<S25>/Switch6'
       */
      ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S25>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S21>/ErrorHandleSysU16' */
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/ATOM_TimeCnt'
 *    '<S44>/ATOM_TimeCnt'
 *    '<S65>/ATOM_TimeCnt'
 *    '<S82>/ATOM_TimeCnt'
 *    '<S78>/ATOM_TimeCnt'
 *    '<S160>/ATOM_TimeCnt'
 *    '<S180>/ATOM_TimeCnt'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_ChrgPreHeat_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  uint16_T rtb_Add1_mvqb;

  /* Sum: '<S28>/Add1' incorporates:
   *  DataTypeConversion: '<S28>/Data Type Conversion'
   *  DataTypeConversion: '<S28>/Data Type Conversion1'
   */
  rtb_Add1_mvqb = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S28>/Switch' */
  if (rtu_In) {
    /* Sum: '<S28>/Add' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     *  UnitDelay: '<S28>/Delay'
     */
    CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S28>/Min' */
    if (rtb_Add1_mvqb <= CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S28>/Add' */
      CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_mvqb;
    }

    /* End of MinMax: '<S28>/Min' */
  } else {
    /* Sum: '<S28>/Add' incorporates:
     *  Constant: '<S28>/Constant'
     *  UnitDelay: '<S28>/Delay'
     */
    CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S28>/Switch' */

  /* RelationalOperator: '<S28>/Relational Operator' incorporates:
   *  UnitDelay: '<S28>/Delay'
   */
  return CtAp_ChrgPreHeat__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_mvqb;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/ChrMgmt_PreheatErrEnaCdn'
 *    '<S10>/ChrMgmt_PreheatErrEnaCdn'
 *    '<S12>/ChrMgmt_PreheatErrEnaCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_C_ChrMgmt_PreheatErrEnaCdn(const dt_ComM_EPTCANBusOffInfo
  *rtu_ChrMgmt_PreheatErrSig_Bus, boolean_T rtu_ChrMgmt_PreheatErrSig__i1ry,
  boolean_T rtu_ChrMgmt_PreheatErrSig__dud3, ARID_DEF_ChrMgmt_PreheatErrEn_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_pvku;
  boolean_T rty_ChrMgmt_PreheatErrEnaCdn__0;

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt' */

  /* Constant: '<S22>/Define' incorporates:
   *  Constant: '<S22>/CAL'
   *  Constant: '<S22>/Define1'
   */
  rtb_RelationalOperator_pvku = CtAp_ChrgPreHeat_ATOM_TimeCnt(ChrgPreHeat_Active,
    ((uint16_T)ChrgPreHeat_dt), ChrMgmt_PreheatlDTCEnaTim_CFG,
    &CtAp_ChrgPreHeat__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt' */

  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  Logic: '<S22>/LogicalOperator1'
   *  Logic: '<S22>/LogicalOperator2'
   */
  rty_ChrMgmt_PreheatErrEnaCdn__0 =
    (!rtu_ChrMgmt_PreheatErrSig_Bus->ComM_ErrResEPTCANBusOffInfo &&
     rtu_ChrMgmt_PreheatErrSig__dud3 && !rtu_ChrMgmt_PreheatErrSig__i1ry &&
     rtb_RelationalOperator_pvku);
  return rty_ChrMgmt_PreheatErrEnaCdn__0;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/ChrMgmt_PreheatErrResetCdn'
 *    '<S10>/ChrMgmt_PreheatErrResetCdn'
 *    '<S12>/ChrMgmt_PreheatErrResetCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T ChrMgmt_PreheatErrResetCdn_lwla(uint8_T rtu_ChrMgmt_PreheatErrSig_Bus)
{
  /* RelationalOperator: '<S23>/Equal' incorporates:
   *  Constant: '<S23>/Define'
   */
  return rtu_ChrMgmt_PreheatErrSig_Bus == ((uint8_T)ChrgPreHeat_OffPlug);
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/ChrMgmt_PreheatErrSetCdn'
 *    '<S10>/ChrMgmt_PreheatErrSetCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T C_ChrMgmt_PreheatErrSetCdn_hrm4(real32_T rtu_ChrMgmt_PreheatErrSig_Bus,
  real32_T rtu_ChrMgmt_PreheatErrSig__aar2, uint8_T
  rtu_ChrMgmt_PreheatErrSig__ag4m, uint8_T rtu_ChrMgmt_PreheatErrSig__nrym,
  uint8_T rtu_ChrMgmt_PreheatErrSig__mesg)
{
  /* Logic: '<S33>/LogicalOperator4' incorporates:
   *  Abs: '<S33>/Abs'
   *  Constant: '<S33>/CAL'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Logic: '<S33>/LogicalOperator1'
   *  Logic: '<S33>/LogicalOperator2'
   *  Logic: '<S33>/LogicalOperator3'
   *  RelationalOperator: '<S33>/RelationalOperator1'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  Sum: '<S33>/Add'
   */
  return ((rtu_ChrMgmt_PreheatErrSig__ag4m == ((uint8_T)
            ChrgPreHeat_DCDuringPreheat)) || (rtu_ChrMgmt_PreheatErrSig__ag4m ==
           ((uint8_T)ChrgPreHeat_ChargingPhase)) ||
          (rtu_ChrMgmt_PreheatErrSig__ag4m == ((uint8_T)
            ChrgPreHeat_DCDuringCharging))) && ((rtu_ChrMgmt_PreheatErrSig__nrym
    == ((uint8_T)ChrgPreHeat_HeatAndCharge)) ||
    ((rtu_ChrMgmt_PreheatErrSig__nrym == ((uint8_T)ChrgPreHeat_HeatReqOnly)) &&
     (rtu_ChrMgmt_PreheatErrSig__mesg == ((uint8_T)ChrgPreHeat_HvReady)))) &&
    (fabsf(rtu_ChrMgmt_PreheatErrSig_Bus - rtu_ChrMgmt_PreheatErrSig__aar2) >
     ChrMgmt_PosRlyCtrlUDcDe_CFG);
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/* Output and update for atomic system: '<S10>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_a5xe(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_orqs_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S43>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S43>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S47>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S47>/Constant2'
     *  Constant: '<S47>/Constant4'
     *  Switch: '<S47>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S47>/Switch' incorporates:
       *  Constant: '<S47>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S47>/Constant3'
     *  RelationalOperator: '<S47>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S49>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S49>/Sum' incorporates:
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S49>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S49>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S49>/MinMax' */
    } else {
      /* Sum: '<S49>/Sum' incorporates:
       *  Constant: '<S47>/Constant23'
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* RelationalOperator: '<S47>/Equal2' incorporates:
     *  Constant: '<S47>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S48>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S48>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S48>/Sum' incorporates:
       *  UnitDelay: '<S48>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh);

      /* MinMax: '<S48>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh) {
        /* Sum: '<S48>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh = u0;
      }

      /* End of MinMax: '<S48>/MinMax' */
    } else {
      /* Sum: '<S48>/Sum' incorporates:
       *  Constant: '<S47>/Constant37'
       *  UnitDelay: '<S48>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh = ((uint16_T)0U);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S47>/Switch8' incorporates:
     *  Constant: '<S47>/Constant6'
     *  Constant: '<S47>/DEBOUNCING'
     *  RelationalOperator: '<S47>/Equal6'
     *  RelationalOperator: '<S48>/B_MiHold'
     *  RelationalOperator: '<S49>/B_MiHold'
     *  Switch: '<S47>/Switch2'
     *  Switch: '<S47>/Switch3'
     *  Switch: '<S47>/Switch4'
     *  UnitDelay: '<S48>/UnitDelay'
     *  UnitDelay: '<S49>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_anqh >
               rtu_MatureTime) {
      /* Switch: '<S47>/Switch2' incorporates:
       *  Constant: '<S47>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S47>/Switch3' incorporates:
       *  Constant: '<S47>/DEBOUNCING_F'
       *  Switch: '<S47>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S47>/Switch4' incorporates:
       *  Constant: '<S47>/PASSED'
       *  Switch: '<S47>/Switch2'
       *  Switch: '<S47>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S47>/Switch3' incorporates:
       *  Constant: '<S47>/DEBOUNCING_P'
       *  Switch: '<S47>/Switch2'
       *  Switch: '<S47>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S47>/Switch8' */

    /* Switch: '<S47>/Switch6' incorporates:
     *  Constant: '<S47>/Constant30'
     *  Constant: '<S47>/Constant31'
     *  RelationalOperator: '<S47>/Equal3'
     *  RelationalOperator: '<S47>/Equal4'
     *  Switch: '<S47>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S47>/Switch6' incorporates:
       *  Constant: '<S47>/Constant32'
       */
      ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S47>/Switch7' incorporates:
       *  Constant: '<S47>/Constant11'
       *  Switch: '<S47>/Switch6'
       */
      ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S47>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S43>/ErrorHandleSysU16' */
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/ChrMgmt_PreheatErrSetCdn'
 *    '<S12>/ChrMgmt_PreheatErrSetCdn'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T C_ChrMgmt_PreheatErrSetCdn_kot2(uint16_T rtu_ChrMgmt_PreheatErrSig_Bus,
  uint8_T rtu_ChrMgmt_PreheatErrSig__k3dq, uint8_T
  rtu_ChrMgmt_PreheatErrSig__jc4c, uint8_T rtu_ChrMgmt_PreheatErrSig__a3gc)
{
  boolean_T rtb_LogicalOperator1_loa3;

  /* Logic: '<S59>/LogicalOperator1' incorporates:
   *  Constant: '<S59>/CAL'
   *  Constant: '<S59>/Define2'
   *  RelationalOperator: '<S59>/RelationalOperator1'
   *  RelationalOperator: '<S59>/RelationalOperator3'
   */
  rtb_LogicalOperator1_loa3 = ((rtu_ChrMgmt_PreheatErrSig_Bus == ((uint16_T)
    ChrgPreHeat_0xFFFF)) || (rtu_ChrMgmt_PreheatErrSig_Bus <=
    ChrMgmt_PosRlyCtrlIRValLmt_CFG));

  /* Logic: '<S59>/LogicalOperator' incorporates:
   *  Constant: '<S59>/Define'
   *  Constant: '<S59>/Define1'
   *  Constant: '<S63>/Constant'
   *  Logic: '<S59>/LogicalOperator2'
   *  Logic: '<S59>/LogicalOperator3'
   *  Logic: '<S59>/LogicalOperator4'
   *  RelationalOperator: '<S59>/RelationalOperator'
   *  RelationalOperator: '<S59>/RelationalOperator2'
   *  RelationalOperator: '<S63>/Compare'
   */
  return (rtu_ChrMgmt_PreheatErrSig__a3gc == ((uint8_T)
           ChrgPreHeat_PreheatingPrepared)) &&
    (((rtu_ChrMgmt_PreheatErrSig__k3dq == ((uint8_T)ChrgPreHeat_ChargingPhase)) &&
      rtb_LogicalOperator1_loa3) || (rtb_LogicalOperator1_loa3 &&
      (rtu_ChrMgmt_PreheatErrSig__jc4c == ((uint8_T)ChrgPreHeat_PreheatingMod))));
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/* Output and update for atomic system: '<S12>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_haia(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_iqzv_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S64>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S64>/ErrorHandleSysU16' incorporates:
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
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S70>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S70>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S70>/MinMax' */
    } else {
      /* Sum: '<S70>/Sum' incorporates:
       *  Constant: '<S68>/Constant23'
       *  UnitDelay: '<S70>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
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
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1 = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1);

      /* MinMax: '<S69>/MinMax' */
      if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1) {
        /* Sum: '<S69>/Sum' */
        CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1 = u0;
      }

      /* End of MinMax: '<S69>/MinMax' */
    } else {
      /* Sum: '<S69>/Sum' incorporates:
       *  Constant: '<S68>/Constant37'
       *  UnitDelay: '<S69>/UnitDelay'
       */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1 = ((uint16_T)0U);
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
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE_lki1 >
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
    } else if (CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
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
     *  RelationalOperator: '<S68>/Equal3'
     *  RelationalOperator: '<S68>/Equal4'
     *  Switch: '<S68>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S68>/Switch6' incorporates:
       *  Constant: '<S68>/Constant32'
       */
      ChrMgmt_ErrResPreheatIRChkErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S68>/Switch7' incorporates:
       *  Constant: '<S68>/Constant11'
       *  Switch: '<S68>/Switch6'
       */
      ChrMgmt_ErrResPreheatIRChkErrDTC = (0.0 != 0.0);
    } else {
      /* no actions */
    }

    /* End of Switch: '<S68>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S64>/ErrorHandleSysU16' */
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S82>/If'
 *    '<S82>/If1'
 *    '<S78>/If'
 *    '<S78>/If1'
 *    '<S160>/If'
 *    '<S160>/If1'
 *    '<S180>/If'
 *    '<S180>/If1'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_ChrgPreHeat_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S96>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S96>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S105>/ATOM_OnDelay'
 *    '<S106>/ATOM_OnDelay'
 *    '<S107>/ATOM_OnDelay'
 *    '<S107>/ATOM_OnDelay1'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void CtAp_ChrgPreH_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S110>/Sum' incorporates:
   *  UnitDelay: '<S110>/UnitDelay'
   */
  CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S105>/ATOM_OnDelay'
 *    '<S106>/ATOM_OnDelay'
 *    '<S107>/ATOM_OnDelay'
 *    '<S107>/ATOM_OnDelay1'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

boolean_T CtAp_ChrgPreHeat_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg)
{
  /* Switch: '<S110>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S110>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S110>/Sum' incorporates:
     *  UnitDelay: '<S110>/UnitDelay'
     */
    CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S110>/MinMax' */
    if (u0 <= CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S110>/Sum' */
      CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S110>/MinMax' */
  } else {
    /* Sum: '<S110>/Sum' incorporates:
     *  UnitDelay: '<S110>/UnitDelay'
     */
    CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S110>/Switch1' */

  /* RelationalOperator: '<S110>/B_MiHold' incorporates:
   *  UnitDelay: '<S110>/UnitDelay'
   */
  return CtAp_ChrgPreHeat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S105>/If'
 *    '<S105>/If1'
 *    '<S106>/If'
 *    '<S106>/If1'
 *    '<S107>/If'
 *    '<S107>/If1'
 *    '<S107>/If2'
 *    '<S109>/If'
 *    '<S109>/If1'
 *    '<S109>/If2'
 */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

uint8_T CtAp_ChrgPreHeat_If_epk1(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S115>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S115>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

void R_ChrgPreHeat_Cyclic_50ms(void)
{
  /* local block i/o variables */
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  real32_T rtb_TmpSignalConversionAtR_fucb;
  real32_T rtb_TmpSignalConversionAtR_ddai;
  real32_T rtb_TmpSignalConversionAtR_ewa1;
  uint16_T rtb_TmpSignalConversionAtR_jk05;
  uint8_T rtb_TmpSignalConversionAtR_icdi;
  uint8_T rtb_TmpSignalConversionAtR_c4vr;
  uint8_T rtb_TmpSignalConversionAtR_ausn;
  uint8_T rtb_TmpSignalConversionAtR_hyx0;
  uint8_T rtb_TmpSignalConversionAtR_cu2e;
  uint8_T rtb_Switch_jpyc;
  uint8_T rtb_ChrMgmt_PreheatSts_Enum;
  uint8_T rtb_Switch_fuzt;
  uint8_T rtb_Switch_mrr2;
  uint8_T rtb_Switch_lzjt;
  boolean_T rtb_TmpSignalConversionAtR_ngiu;
  boolean_T rtb_TmpSignalConversionAtR_nqxl;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator_mz1n;
  boolean_T rtb_LogicalOperator7_gzvd;
  boolean_T rtb_LogicalOperator4_o5e3;
  boolean_T rtb_LogicalOperator1_cwi2;
  boolean_T rtb_Compare_fq1g;
  boolean_T rtb_LogicalOperator_et5e;
  boolean_T rtb_LogicalOperator2_lqhw;
  boolean_T rtb_Compare_cbld;
  boolean_T rtb_LogicalOperator1_px5l;
  boolean_T rtb_LogicalOperator_dgv5;
  boolean_T rtb_Compare_m1av;
  boolean_T rtb_Compare_howl;
  boolean_T rtb_LogicalOperator1_i0re;
  boolean_T rtb_LogicalOperator2_k3nd;
  boolean_T rtb_Compare_p1cm;
  boolean_T rtb_LogicalOperator1_juoq;
  boolean_T rtb_RelationalOperator6_jeoe;
  boolean_T rtb_LogicalOperator7_fdlo;
  boolean_T rtb_LogicalOperator_ij2q;
  boolean_T rtb_LogicalOperator7_kxvl;
  boolean_T rtb_LogicalOperator4_ojdi;
  boolean_T rtb_LogicalOperator_osnl;
  boolean_T rtb_LogicalOperator_lu2w;
  boolean_T rtb_LogicalOperator_bmcu;
  boolean_T rtb_LogicalOperator4_nzce;
  boolean_T rtb_LogicalOperator_erts;
  boolean_T rtb_LogicalOperator4_lhkp;
  boolean_T rtb_LogicalOperator_eqwq;
  boolean_T rtb_LogicalOperator_ivzb;
  boolean_T rtb_LogicalOperator_oddt;
  boolean_T rtb_DataTypeConversion_amfb;
  boolean_T rtb_DataTypeConversion_jqjg;
  boolean_T rtb_DataTypeConversion_ar2g;
  boolean_T rtb_DataTypeConversion_m5oz;
  boolean_T rtb_DataTypeConversion_ail2;
  boolean_T rtb_DataTypeConversion_bhyr;
  boolean_T rtb_Switch_ifqt;
  boolean_T rtb_Switch_kyqb;
  real32_T rtb_LogicalOperator2_lqhw_tmp;
  real32_T tmpRead;
  real32_T tmpRead_4;
  uint8_T rtb_TmpSignalConversionAtR_cxvf;
  uint8_T rtb_TmpSignalConversionAtR_hb2q;
  uint8_T rtb_TmpSignalConversionAtR_l0cy;
  uint8_T rtb_TmpSignalConversionAtR_o501;
  uint8_T tmpRead_0;
  uint8_T tmpRead_3;
  uint8_T tmpRead_5;
  uint8_T tmpWrite;
  boolean_T rtb_LogicalOperator1_eu3w;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_icdi);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V
    (&rtb_TmpSignalConversionAtR_fucb);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
    (&rtb_TmpSignalConversionAtR_c4vr);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_ausn);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V
    (&rtb_TmpSignalConversionAtR_ddai);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V
    (&rtb_TmpSignalConversionAtR_ewa1);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm'
   */
  (void)Rte_Read_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm
    (&rtb_TmpSignalConversionAtR_jk05);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_hyx0);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
    (&rtb_TmpSignalConversionAtR_o501);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
    (&rtb_TmpSignalConversionAtR_hb2q);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_ngiu);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_cu2e);

  /* SignalConversion generated from: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_l0cy);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_nqxl);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo'
   */
  (void)Rte_Read_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo
    (&rtb_TmpSignalConversionAtR_cxvf);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Chart: '<S2>/ChrMgmt_PreheatFlow' incorporates:
   *  Delay: '<S2>/Delay'
   *  Inport: '<Root>/RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum'
   */
  if ((uint32_T)CtAp_ChrgPreHeat_ARID_DEF.is_active_c1_CtAp_ChrgPreHeat == 0U) {
    CtAp_ChrgPreHeat_ARID_DEF.is_active_c1_CtAp_ChrgPreHeat = 1U;
    CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
      CtAp_ChrgP_IN_Preheat_Nopreheat;
    rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_Nopreheat);
  } else {
    switch (CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat) {
     case CtAp_ChrgPreHea_IN_KeepWarmFlow:
      if ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_CharingFault))
          || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
            ChrgPreHeat_ChargingComplete)) || (rtb_TmpSignalConversionAtR_icdi ==
           ((uint8_T)ChrgPreHeat_OffPlug))) {
        CtAp_ChrgPreHeat_ARID_DEF.is_KeepWarmFlow =
          CtAp_ChrgPre_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgP_IN_Preheat_Nopreheat;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_Nopreheat);
      } else if ((uint32_T)CtAp_ChrgPreHeat_ARID_DEF.is_KeepWarmFlow ==
                 CtAp_Chr_IN_Preheat_KeepWarming) {
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_KeepWarming);
      } else {
        /* case IN_Preheat_KeepwarmPreparing: */
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_KeepwarmPreparing);
        if (rtb_TmpSignalConversionAtR_cu2e == ((uint8_T)ChrgPreHeat_Preheating))
        {
          CtAp_ChrgPreHeat_ARID_DEF.is_KeepWarmFlow =
            CtAp_Chr_IN_Preheat_KeepWarming;
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_KeepWarming);
        }
      }
      break;

     case CtAp_ChrgPreHeat_IN_PreheatFlow:
      if ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_CharingFault))
          || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
            ChrgPreHeat_ChargingComplete)) || (rtb_TmpSignalConversionAtR_icdi ==
           ((uint8_T)ChrgPreHeat_OffPlug))) {
        CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
          CtAp_ChrgPre_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgP_IN_Preheat_Nopreheat;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_Nopreheat);
      } else {
        switch (CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow) {
         case IN_Preheat_ACPreheatAndCharging:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
            ChrgPreHeat_ACPreheatAndChargingPre);
          if ((rtb_TmpSignalConversionAtR_hb2q == ((uint8_T)
                ChrgPreHeat_TCUDisableCmpl)) && (rtb_TmpSignalConversionAtR_o501
               == ((uint8_T)ChrgPreHeat_DCDCDisableCmpl)) &&
              (rtb_TmpSignalConversionAtR_cxvf == ((uint8_T)
                ChrgPreHeat_PTCRlyOpened))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              IN_Preheat_ACPreheatAndCha_kmh5;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
              ChrgPreHeat_ACPreheatAndChrgnPrepd);
          }
          break;

         case IN_Preheat_ACPreheatAndCha_kmh5:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
            ChrgPreHeat_ACPreheatAndChrgnPrepd);
          if (rtb_TmpSignalConversionAtR_cu2e == ((uint8_T)ChrgPreHeat_HvReady))
          {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              CtAp_ChrgPre_IN_NO_ACTIVE_CHILD;
            CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
              CtAp_IN_Preheat_PreheatComplete;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatComplete);
          }
          break;

         case IN_Preheat_DCPreheatAndCharging:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
            ChrgPreHeat_DCPreheatAndChargingPre);
          if ((rtb_TmpSignalConversionAtR_hb2q == ((uint8_T)
                ChrgPreHeat_TCUDisableCmpl)) && (rtb_TmpSignalConversionAtR_o501
               == ((uint8_T)ChrgPreHeat_DCDCDisableCmpl))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              IN_Preheat_DCPreheatAndCha_irmx;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
              ChrgPreHeat_DCPreheatAndChrgnPrepd);
          }
          break;

         case IN_Preheat_DCPreheatAndCha_irmx:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
            ChrgPreHeat_DCPreheatAndChrgnPrepd);
          (void)Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum
            (&tmpRead_0);
          if ((rtb_TmpSignalConversionAtR_cu2e == ((uint8_T)ChrgPreHeat_HvReady))
              && (tmpRead_0 == ((uint8_T)ChrgPreHeat_HeatAndDCCharge))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              CtAp_ChrgPre_IN_NO_ACTIVE_CHILD;
            CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
              CtAp_IN_Preheat_PreheatComplete;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatComplete);
          }
          break;

         case CtA_IN_Preheat_DuringPreheating:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_DuringPreheating);
          if ((rtb_TmpSignalConversionAtR_c4vr == ((uint8_T)
                ChrgPreHeat_HeatAndCharge)) && (rtb_TmpSignalConversionAtR_icdi ==
               ((uint8_T)ChrgPreHeat_DCPreheating))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              IN_Preheat_DCPreheatAndCharging;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
              ChrgPreHeat_DCPreheatAndChargingPre);
          } else if ((rtb_TmpSignalConversionAtR_c4vr == ((uint8_T)
                       ChrgPreHeat_HeatAndCharge)) &&
                     (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
                       ChrgPreHeat_ACPreheating))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              IN_Preheat_ACPreheatAndCharging;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
              ChrgPreHeat_ACPreheatAndChargingPre);
          } else {
            /* no actions */
          }
          break;

         case CtA_IN_Preheat_PreheatPreparing:
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatPreparing);
          if ((rtb_TmpSignalConversionAtR_hb2q == ((uint8_T)
                ChrgPreHeat_TCUDisableCmpl)) && (rtb_TmpSignalConversionAtR_o501
               == ((uint8_T)ChrgPreHeat_DCDCDisableCmpl)) &&
              CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_nrxa) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              C_IN_Preheat_PreheatingPrepared;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)
              ChrgPreHeat_PreheatingPrepared);
          }
          break;

         default:
          /* case IN_Preheat_PreheatingPrepared: */
          rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatingPrepared);
          if ((rtb_TmpSignalConversionAtR_cu2e == ((uint8_T)
                ChrgPreHeat_Preheating)) && (rtb_TmpSignalConversionAtR_o501 ==
               ((uint8_T)ChrgPreHeat_DCDCBuckCmpl)) &&
              (rtb_TmpSignalConversionAtR_hb2q == ((uint8_T)
                ChrgPreHeat_TCUEnaCmpl))) {
            CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
              CtA_IN_Preheat_DuringPreheating;
            rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_DuringPreheating);
          }
          break;
        }
      }
      break;

     case CtAp_ChrgP_IN_Preheat_Nopreheat:
      rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_Nopreheat);
      if ((rtb_TmpSignalConversionAtR_c4vr == ((uint8_T)ChrgPreHeat_HeatReqOnly))
          && ((rtb_TmpSignalConversionAtR_l0cy == ((uint8_T)
             ChrgPreHeat_ChargePreparing)) || (rtb_TmpSignalConversionAtR_hyx0 ==
            ((uint8_T)ChrgPreHeat_HandShake)))) {
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgPreHeat_IN_PreheatFlow;
        CtAp_ChrgPreHeat_ARID_DEF.is_PreheatFlow =
          CtA_IN_Preheat_PreheatPreparing;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatPreparing);
      } else if (rtb_TmpSignalConversionAtR_l0cy == ((uint8_T)
                  ChrgPreHeat_OBCKeepWarmReq)) {
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgPreHea_IN_KeepWarmFlow;
        CtAp_ChrgPreHeat_ARID_DEF.is_KeepWarmFlow =
          Ct_IN_Preheat_KeepwarmPreparing;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_KeepwarmPreparing);
      } else {
        /* no actions */
      }
      break;

     default:
      /* case IN_Preheat_PreheatComplete: */
      rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_PreheatComplete);
      if (rtb_TmpSignalConversionAtR_l0cy == ((uint8_T)
           ChrgPreHeat_OBCKeepWarmReq)) {
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgPreHea_IN_KeepWarmFlow;
        CtAp_ChrgPreHeat_ARID_DEF.is_KeepWarmFlow =
          Ct_IN_Preheat_KeepwarmPreparing;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_KeepwarmPreparing);
      } else if ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
                   ChrgPreHeat_CharingFault)) ||
                 (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
                   ChrgPreHeat_ChargingComplete)) ||
                 (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
                   ChrgPreHeat_OffPlug))) {
        CtAp_ChrgPreHeat_ARID_DEF.is_c1_CtAp_ChrgPreHeat =
          CtAp_ChrgP_IN_Preheat_Nopreheat;
        rtb_ChrMgmt_PreheatSts_Enum = ((uint8_T)ChrgPreHeat_Nopreheat);
      } else {
        /* no actions */
      }
      break;
    }
  }

  /* End of Chart: '<S2>/ChrMgmt_PreheatFlow' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V' */
  (void)Rte_Read_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum' */
  (void)Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErr' */
  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S7>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02512 AC Preheat Vol Error
   */
  rtb_LogicalOperator_oddt = CtAp_C_ChrMgmt_PreheatErrSetCdn
    (rtb_TmpSignalConversionAtR_ddai, rtb_TmpSignalConversionAtR_fucb,
     rtb_TmpSignalConversionAtR_c4vr, rtb_TmpSignalConversionAtR_cu2e,
     rtb_TmpSignalConversionAtR_ausn);

  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S7>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S7>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02514 AC Preheat Vol Error
   */
  rtb_DataTypeConversion_bhyr = CtAp_ChrMgmt_PreheatErrResetCdn
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S7>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S7>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02523 AC Preheat Vol Error
   */
  /* Constant: '<S7>/Define2' incorporates:
   *  Constant: '<S7>/CAL'
   *  Constant: '<S7>/Define1'
   *  Constant: '<S7>/Define3'
   */
  CtAp_ChrgPreHeat_ATOM_U16ErrHnd(ChrgPreHeat_Active, rtb_LogicalOperator_oddt,
    rtb_DataTypeConversion_bhyr, ChrMgmt_PosRlyCtrlUDcDeTim_CFG, ((uint16_T)
    ChrgPreHeat_U16Zero), ((uint16_T)ChrgPreHeat_dt),
    &rtb_DataTypeConversion_amfb, &CtAp_ChrgPreHeat_ARID_DEF.Switch1_meg5,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8_lrht,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch6_mxll,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_nz4o);

  /* End of Outputs for SubSystem: '<S7>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErr' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErrDTC' */
  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_PreheatErrEnaCdn'
   *
   * Block requirements for '<S8>/ChrMgmt_PreheatErrEnaCdn':
   *  1. SWREQ_02465 AC Preheat Vol DTC
   */
  rtb_LogicalOperator_ivzb = CtAp_C_ChrMgmt_PreheatErrEnaCdn
    (&rtb_TmpSignalConversionAtRTE_R_, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ChrMgmt_PreheatEr_g1sm);

  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_PreheatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S8>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02461 AC Preheat Vol DTC
   */
  rtb_LogicalOperator_eqwq = CtAp_C_ChrMgmt_PreheatErrSetCdn
    (rtb_TmpSignalConversionAtR_ddai, rtb_TmpSignalConversionAtR_fucb,
     rtb_TmpSignalConversionAtR_c4vr, rtb_TmpSignalConversionAtR_cu2e,
     rtb_TmpSignalConversionAtR_ausn);

  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S8>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02463 AC Preheat Vol DTC
   */
  rtb_DataTypeConversion_ail2 = ChrMgmt_PreheatErrResetCdn_lwla
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S8>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02472 AC Preheat Vol DTC
   */
  /* Constant: '<S8>/CAL' incorporates:
   *  Constant: '<S8>/Define1'
   *  Constant: '<S8>/Define2'
   *
   * Block requirements for '<S8>/CAL':
   *  1. SWREQ_02470 AC Preheat Vol DTC
   */
  CtAp_ChrgPr_ATOM_U16ErrorHandle(rtb_LogicalOperator_ivzb,
    rtb_LogicalOperator_eqwq, rtb_DataTypeConversion_ail2,
    ChrMgmt_PosRlyCtrlUDcDeTim_CFG, ((uint16_T)ChrgPreHeat_U16Zero), ((uint16_T)
    ChrgPreHeat_dt), &rtb_DataTypeConversion_bhyr,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch1_ph2d,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8_lw2i,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_merl);

  /* End of Outputs for SubSystem: '<S8>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErrDTC' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErr' */
  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S9>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02529 DC Preheat Vol Error
   */
  rtb_LogicalOperator4_lhkp = C_ChrMgmt_PreheatErrSetCdn_hrm4
    (rtb_TmpSignalConversionAtR_ewa1, rtb_TmpSignalConversionAtR_fucb,
     rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_c4vr,
     rtb_TmpSignalConversionAtR_cu2e);

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S9>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02531 DC Preheat Vol Error
   */
  rtb_DataTypeConversion_m5oz = CtAp_ChrMgmt_PreheatErrResetCdn
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S9>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02540 DC Preheat Vol Error
   */
  /* Constant: '<S9>/Define2' incorporates:
   *  Constant: '<S9>/CAL'
   *  Constant: '<S9>/Define1'
   *  Constant: '<S9>/Define3'
   */
  CtAp_ChrgPreHeat_ATOM_U16ErrHnd(ChrgPreHeat_Active, rtb_LogicalOperator4_lhkp,
    rtb_DataTypeConversion_m5oz, ChrMgmt_PosRlyCtrlUDcDeTim_CFG, ((uint16_T)
    ChrgPreHeat_U16Zero), ((uint16_T)ChrgPreHeat_dt),
    &rtb_DataTypeConversion_ail2, &CtAp_ChrgPreHeat_ARID_DEF.Switch1_owxy,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8_gip4,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch6_daje,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_g2ml);

  /* End of Outputs for SubSystem: '<S9>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErr' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErrDTC' */
  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_PreheatErrEnaCdn' */
  rtb_LogicalOperator_erts = CtAp_C_ChrMgmt_PreheatErrEnaCdn
    (&rtb_TmpSignalConversionAtRTE_R_, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ChrMgmt_PreheatEr_cv5h);

  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_PreheatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S10>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02478 DC Preheat Vol DTC
   */
  rtb_LogicalOperator4_nzce = C_ChrMgmt_PreheatErrSetCdn_hrm4
    (rtb_TmpSignalConversionAtR_ewa1, rtb_TmpSignalConversionAtR_fucb,
     rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_c4vr,
     rtb_TmpSignalConversionAtR_cu2e);

  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S10>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02480 DC Preheat Vol DTC
   */
  rtb_DataTypeConversion_ar2g = ChrMgmt_PreheatErrResetCdn_lwla
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S10>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02489 DC Preheat Vol DTC
   */
  /* Constant: '<S10>/CAL' incorporates:
   *  Constant: '<S10>/Define1'
   *  Constant: '<S10>/Define2'
   */
  CtAp_C_ATOM_U16ErrorHandle_a5xe(rtb_LogicalOperator_erts,
    rtb_LogicalOperator4_nzce, rtb_DataTypeConversion_ar2g,
    ChrMgmt_PosRlyCtrlUDcDeTim_CFG, ((uint16_T)ChrgPreHeat_U16Zero), ((uint16_T)
    ChrgPreHeat_dt), &rtb_DataTypeConversion_m5oz,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch1_obqj,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8_dcta,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_fqdq);

  /* End of Outputs for SubSystem: '<S10>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErrDTC' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_PreheatIRChkErr' */
  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S11>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02495 Preheat IR Error
   */
  rtb_LogicalOperator_bmcu = C_ChrMgmt_PreheatErrSetCdn_kot2
    (rtb_TmpSignalConversionAtR_jk05, rtb_TmpSignalConversionAtR_hyx0,
     rtb_TmpSignalConversionAtR_ausn, rtb_ChrMgmt_PreheatSts_Enum);

  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S11>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02497 Preheat IR Error
   */
  rtb_DataTypeConversion_jqjg = CtAp_ChrMgmt_PreheatErrResetCdn
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S11>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02506 Preheat IR Error
   */
  /* Constant: '<S11>/Define2' incorporates:
   *  Constant: '<S11>/CAL'
   *  Constant: '<S11>/Define1'
   *  Constant: '<S11>/Define3'
   */
  CtAp_ChrgPreHeat_ATOM_U16ErrHnd(ChrgPreHeat_Active, rtb_LogicalOperator_bmcu,
    rtb_DataTypeConversion_jqjg, ChrMgmt_PosRlyCtrlIRTimLmt_CFG, ((uint16_T)
    ChrgPreHeat_U16Zero), ((uint16_T)ChrgPreHeat_dt),
    &rtb_DataTypeConversion_ar2g, &CtAp_ChrgPreHeat_ARID_DEF.Switch1_b25x,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8_fvgz, &CtAp_ChrgPreHeat_ARID_DEF.Switch6,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_pbm3);

  /* End of Outputs for SubSystem: '<S11>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_PreheatIRChkErr' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_PreheatIRChkErrDTC' */
  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_PreheatErrEnaCdn'
   *
   * Block requirements for '<S12>/ChrMgmt_PreheatErrEnaCdn':
   *  1. SWREQ_02448 IR Check DTC
   */
  rtb_LogicalOperator_lu2w = CtAp_C_ChrMgmt_PreheatErrEnaCdn
    (&rtb_TmpSignalConversionAtRTE_R_, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ChrMgmt_PreheatErrEna);

  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_PreheatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_PreheatErrSetCdn'
   *
   * Block requirements for '<S12>/ChrMgmt_PreheatErrSetCdn':
   *  1. SWREQ_02444 IR Check DTC
   */
  rtb_LogicalOperator_osnl = C_ChrMgmt_PreheatErrSetCdn_kot2
    (rtb_TmpSignalConversionAtR_jk05, rtb_TmpSignalConversionAtR_hyx0,
     rtb_TmpSignalConversionAtR_ausn, rtb_ChrMgmt_PreheatSts_Enum);

  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_PreheatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_PreheatErrResetCdn'
   *
   * Block requirements for '<S12>/ChrMgmt_PreheatErrResetCdn':
   *  1. SWREQ_02446 IR Check DTC
   */
  rtb_Switch_kyqb = ChrMgmt_PreheatErrResetCdn_lwla
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_PreheatErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S12>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02455 IR Check DTC
   */
  /* Constant: '<S12>/CAL' incorporates:
   *  Constant: '<S12>/Define1'
   *  Constant: '<S12>/Define2'
   *
   * Block requirements for '<S12>/CAL':
   *  1. SWREQ_02453 IR Check DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_haia(rtb_LogicalOperator_lu2w,
    rtb_LogicalOperator_osnl, rtb_Switch_kyqb, ChrMgmt_PosRlyCtrlIRTimLmt_CFG,
    ((uint16_T)ChrgPreHeat_U16Zero), ((uint16_T)ChrgPreHeat_dt),
    &rtb_DataTypeConversion_jqjg, &CtAp_ChrgPreHeat_ARID_DEF.Switch1,
    &CtAp_ChrgPreHeat_ARID_DEF.Switch8,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S12>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_PreheatIRChkErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatDTC' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_PackPTCCtrl'
   *
   * Block requirements for '<S6>/ChrMgmt_PackPTCCtrl':
   *  1. SWREQ_06005 Pack PTC Allow Init
   *  2. SWREQ_06006 Pack PTC Req Open
   *  3. SWREQ_06007 Pack PTC Req close
   *  4. SWREQ_06008 Pack PTC Req mantain
   *  5. SWREQ_06460 Pack PTC Req Open
   */
  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_AcheatReqPckPTC' */
  /* Outputs for Atomic SubSystem: '<S77>/ChrMgmt_AcKeepWarmReqPckPTC'
   *
   * Block requirements for '<S77>/ChrMgmt_AcKeepWarmReqPckPTC':
   *  1. SWREQ_06702 AC keep warm req PackPTC Init
   *  2. SWREQ_06703 AC keep warm req PackPTC Open
   *  3. SWREQ_06704 AC keep warm req PackPTC Close
   *  4. SWREQ_06705 AC keep warm req PackPTC Matian
   */
  /* Switch: '<S191>/Switch' incorporates:
   *  Delay: '<S80>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_apcg;

  /* Logic: '<S80>/LogicalOperator4' incorporates:
   *  Abs: '<S80>/Abs'
   *  Constant: '<S80>/Define'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Delay: '<S80>/Delay'
   *  Logic: '<S80>/LogicalOperator'
   *  Logic: '<S80>/LogicalOperator1'
   *  Logic: '<S80>/LogicalOperator2'
   *  Logic: '<S80>/LogicalOperator3'
   *  Logic: '<S80>/LogicalOperator5'
   *  RelationalOperator: '<S80>/RelationalOperator'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  Sum: '<S80>/Add'
   *
   * Block requirements for '<S80>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S80>/LogicalOperator5':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_apcg = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && ((rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_KeepwarmPreparing)) || (((rtb_ChrMgmt_PreheatSts_Enum
    != ((uint8_T)ChrgPreHeat_KeepWarming)) || (ChrgPreHeat_DiffVolPrheatOutp <
    0.0F)) && rtb_Switch_kyqb)));

  /* End of Outputs for SubSystem: '<S77>/ChrMgmt_AcKeepWarmReqPckPTC' */

  /* Outputs for Atomic SubSystem: '<S77>/ChrMgmt_AcPreheat2ChrgnReqPckPTC'
   *
   * Block requirements for '<S77>/ChrMgmt_AcPreheat2ChrgnReqPckPTC':
   *  1. SWREQ_06698 AC preheat 2 charge req PackPTC Init
   *  2. SWREQ_06699 AC preheat 2 charge req PackPTC Open
   *  3. SWREQ_06700 AC preheat 2 charge req PackPTC Close
   *  4. SWREQ_06701 AC preheat 2 charge req PackPTC Matian
   */
  /* Switch: '<S191>/Switch' incorporates:
   *  Delay: '<S81>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_e04d;

  /* Logic: '<S81>/LogicalOperator5' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S90>/Constant'
   *  Delay: '<S81>/Delay'
   *  Logic: '<S81>/LogicalOperator1'
   *  Logic: '<S81>/LogicalOperator13'
   *  Logic: '<S81>/LogicalOperator2'
   *  Logic: '<S81>/LogicalOperator3'
   *  Logic: '<S81>/LogicalOperator4'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   *
   * Block requirements for '<S81>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S81>/LogicalOperator4':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_e04d = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && ((rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_ACPreheatAndChargingPre)) ||
    (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)ChrgPreHeat_ACPreheatAndChrgnPrepd))
    || ((rtb_TmpSignalConversionAtR_icdi != ((uint8_T)ChrgPreHeat_ACCharging)) &&
        rtb_Switch_kyqb)));

  /* End of Outputs for SubSystem: '<S77>/ChrMgmt_AcPreheat2ChrgnReqPckPTC' */

  /* Outputs for Atomic SubSystem: '<S77>/ChrMgmt_AcPreheatPreJumpReqPckPTC'
   *
   * Block requirements for '<S77>/ChrMgmt_AcPreheatPreJumpReqPckPTC':
   *  1. SWREQ_06694 AC preheat pre req PackPTC Init
   *  2. SWREQ_06695 AC preheat pre req PackPTC Open
   *  3. SWREQ_06696 AC preheat pre req PackPTC Close
   *  4. SWREQ_06697 AC preheat pre req PackPTC Matian
   */
  /* Logic: '<S82>/LogicalOperator7' incorporates:
   *  Constant: '<S82>/CAL1'
   *  Constant: '<S82>/Define6'
   *  Constant: '<S93>/Constant'
   *  RelationalOperator: '<S82>/RelationalOperator6'
   *  RelationalOperator: '<S82>/RelationalOperator9'
   *  RelationalOperator: '<S93>/Compare'
   */
  rtb_LogicalOperator7_kxvl = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && (rtb_TmpSignalConversionAtR_cu2e ==
    ((uint8_T)ChrgPreHeat_Preheating)) && (rtb_TmpSignalConversionAtR_ddai >
    ChrMgmt_DCDCEnaUDcLmt_CFG));

  /* Outputs for Atomic SubSystem: '<S82>/ATOM_TimeCnt' */
  /* Constant: '<S82>/Define12' incorporates:
   *  Constant: '<S82>/CAL2'
   */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_ATOM_TimeCnt(rtb_LogicalOperator7_kxvl,
    ((uint16_T)ChrgPreHeat_dt), ChrMgmt_PODEnaDly_CFG,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of Outputs for SubSystem: '<S82>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S82>/If1' */
  /* Constant: '<S82>/Define1' incorporates:
   *  Delay: '<S82>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_If(rtb_Switch_ifqt, ChrgPreHeat_Inactive,
    CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_oqjg);

  /* End of Outputs for SubSystem: '<S82>/If1' */

  /* Logic: '<S82>/LogicalOperator4' incorporates:
   *  Constant: '<S94>/Constant'
   *  Constant: '<S95>/Constant'
   *  RelationalOperator: '<S94>/Compare'
   *  RelationalOperator: '<S95>/Compare'
   *
   * Block requirements for '<S82>/LogicalOperator4':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  rtb_LogicalOperator4_ojdi = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatPreparing)) && (rtb_TmpSignalConversionAtR_l0cy ==
    ((uint8_T)ChrgPreHeat_ChargePreparing)));

  /* Outputs for Atomic SubSystem: '<S82>/If' */
  /* Constant: '<S82>/Define9' */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_If(rtb_LogicalOperator4_ojdi,
    ChrgPreHeat_Active, rtb_Switch_kyqb);

  /* End of Outputs for SubSystem: '<S82>/If' */

  /* Logic: '<S82>/LogicalOperator1' incorporates:
   *  Constant: '<S92>/Constant'
   *  Delay: '<S82>/Delay'
   *  Logic: '<S82>/LogicalOperator2'
   *  RelationalOperator: '<S92>/Compare'
   *
   * Block requirements for '<S82>/LogicalOperator1':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S82>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_oqjg = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && rtb_Switch_ifqt);

  /* End of Outputs for SubSystem: '<S77>/ChrMgmt_AcPreheatPreJumpReqPckPTC' */
  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_AcheatReqPckPTC' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DcPreheatPreJumpReqPOD'
   *
   * Block requirements for '<S73>/ChrMgmt_DcPreheatPreJumpReqPOD':
   *  1. SWREQ_06706 DC preheat pre req PackPTC Init
   *  2. SWREQ_06707 DC preheat pre req PackPTC Open
   *  3. SWREQ_06708 DC preheat pre req PackPTC Close
   *  4. SWREQ_06709 DC preheat pre req PackPTC Matian
   */
  /* Logic: '<S78>/LogicalOperator7' incorporates:
   *  Constant: '<S101>/Constant'
   *  Constant: '<S78>/CAL1'
   *  Constant: '<S78>/Define6'
   *  RelationalOperator: '<S101>/Compare'
   *  RelationalOperator: '<S78>/RelationalOperator6'
   *  RelationalOperator: '<S78>/RelationalOperator9'
   */
  rtb_LogicalOperator7_fdlo = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && (rtb_TmpSignalConversionAtR_cu2e ==
    ((uint8_T)ChrgPreHeat_Preheating)) && (rtb_TmpSignalConversionAtR_ewa1 >
    ChrMgmt_DCDCEnaUDcLmt_CFG));

  /* Outputs for Atomic SubSystem: '<S78>/ATOM_TimeCnt' */
  /* Constant: '<S78>/Define12' incorporates:
   *  Constant: '<S78>/CAL2'
   */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_ATOM_TimeCnt(rtb_LogicalOperator7_fdlo,
    ((uint16_T)ChrgPreHeat_dt), ChrMgmt_PODEnaDly_CFG,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cxar);

  /* End of Outputs for SubSystem: '<S78>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S78>/If1' */
  /* Constant: '<S78>/Define1' incorporates:
   *  Delay: '<S78>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_If(rtb_Switch_ifqt, ChrgPreHeat_Inactive,
    CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ekva);

  /* End of Outputs for SubSystem: '<S78>/If1' */

  /* Logic: '<S78>/LogicalOperator' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S102>/Constant'
   *  RelationalOperator: '<S100>/Compare'
   *  RelationalOperator: '<S102>/Compare'
   */
  rtb_LogicalOperator_ij2q = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatPreparing)) && (rtb_TmpSignalConversionAtR_hyx0 ==
    ((uint8_T)ChrgPreHeat_HandShake)));

  /* Outputs for Atomic SubSystem: '<S78>/If' */
  /* Constant: '<S78>/Define9' */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_If(rtb_LogicalOperator_ij2q,
    ChrgPreHeat_Active, rtb_Switch_kyqb);

  /* End of Outputs for SubSystem: '<S78>/If' */

  /* Logic: '<S78>/LogicalOperator1' incorporates:
   *  Constant: '<S99>/Constant'
   *  Delay: '<S78>/Delay'
   *  Logic: '<S78>/LogicalOperator2'
   *  RelationalOperator: '<S99>/Compare'
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ekva = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && rtb_Switch_ifqt);

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DcPreheatPreJumpReqPOD' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_PackPTCCtrl' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_PosRlyOpenReq' */
  /* Outputs for Atomic SubSystem: '<S74>/ChrMgmt_PosRlyCtrlUDcActv' */
  /* Sum: '<S108>/Add' incorporates:
   *  Constant: '<S108>/CAL2'
   *  Sum: '<S108>/Add1'
   */
  rtb_LogicalOperator2_lqhw_tmp = rtb_TmpSignalConversionAtR_fucb -
    ChrMgmt_PosRlyCtrlUDcDe_CFG;

  /* Logic: '<S108>/LogicalOperator2' incorporates:
   *  Constant: '<S108>/CAL3'
   *  RelationalOperator: '<S108>/RelationalOperator5'
   *  RelationalOperator: '<S108>/RelationalOperator6'
   *  Sum: '<S108>/Add'
   *  Sum: '<S108>/Add2'
   *
   * Block requirements for '<S108>/LogicalOperator2':
   *  1. SWREQ_02413 MainRelay Ctrl DC Open
   */
  rtb_LogicalOperator2_lqhw = ((rtb_LogicalOperator2_lqhw_tmp <
    rtb_TmpSignalConversionAtR_ewa1) && (rtb_TmpSignalConversionAtR_fucb >
    (rtb_TmpSignalConversionAtR_ewa1 - ChrMgmt_PosRlyCtrlUDcDe_CFG)));

  /* Logic: '<S108>/LogicalOperator1' incorporates:
   *  Constant: '<S108>/CAL4'
   *  RelationalOperator: '<S108>/RelationalOperator1'
   *  RelationalOperator: '<S108>/RelationalOperator2'
   *  Sum: '<S108>/Add3'
   *
   * Block requirements for '<S108>/LogicalOperator1':
   *  1. SWREQ_02412 MainRelay Ctrl AC open
   */
  rtb_LogicalOperator1_eu3w = ((rtb_LogicalOperator2_lqhw_tmp <
    rtb_TmpSignalConversionAtR_ddai) && (rtb_TmpSignalConversionAtR_fucb >
    (rtb_TmpSignalConversionAtR_ddai - ChrMgmt_PosRlyCtrlUDcDe_CFG)));

  /* End of Outputs for SubSystem: '<S74>/ChrMgmt_PosRlyCtrlUDcActv' */

  /* Outputs for Atomic SubSystem: '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq':
   *  1. SWREQ_02416 MainRelay Ctrl keep warm
   */
  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   */
  rtb_Compare_p1cm = (rtb_TmpSignalConversionAtR_ausn == ((uint8_T)
    ChrgPreHeat_PreheatingMod));

  /* Outputs for Atomic SubSystem: '<S105>/ATOM_OnDelay' */
  /* Constant: '<S105>/Define1' incorporates:
   *  Constant: '<S105>/Define5'
   *  Constant: '<S105>/Define6'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ATOM_OnDelay(rtb_Compare_p1cm, ((uint16_T)
    ChrgPreHeat_WarmPODStsCfmTim), ((uint16_T)ChrgPreHeat_dt), ((uint16_T)
    ChrgPreHeat_U16Zero), &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay_kkiq);

  /* End of Outputs for SubSystem: '<S105>/ATOM_OnDelay' */

  /* Logic: '<S105>/LogicalOperator1' incorporates:
   *  Abs: '<S105>/Abs'
   *  Constant: '<S105>/CAL'
   *  Constant: '<S105>/Define3'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S112>/Constant'
   *  Constant: '<S113>/Constant'
   *  RelationalOperator: '<S105>/RelationalOperator2'
   *  RelationalOperator: '<S105>/RelationalOperator3'
   *  RelationalOperator: '<S111>/Compare'
   *  RelationalOperator: '<S112>/Compare'
   *  RelationalOperator: '<S113>/Compare'
   */
  rtb_LogicalOperator1_juoq = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_KeepwarmPreparing)) && (fabsf(tmpRead) <
    ChrMgmt_PosRlyCtrlIDcDe_CFG) && rtb_LogicalOperator1_eu3w && rtb_Switch_kyqb
    && (rtb_TmpSignalConversionAtR_hb2q == ((uint8_T)ChrgPreHeat_TCUDisableCmpl))
    && (rtb_TmpSignalConversionAtR_o501 == ((uint8_T)ChrgPreHeat_DCDCDisableCmpl))
    && (rtb_TmpSignalConversionAtR_cxvf == ((uint8_T)ChrgPreHeat_PTCRlyOpened)));

  /* Outputs for Atomic SubSystem: '<S105>/If'
   *
   * Block requirements for '<S105>/If':
   *  1. SWREQ_02417 MainRelay Ctrl maintain
   */
  /* Constant: '<S105>/Define' incorporates:
   *  Delay: '<S105>/Delay'
   */
  rtb_Switch_mrr2 = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator1_juoq,
    ((uint8_T)ChrgPreHeat_Open), CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_phvg);

  /* End of Outputs for SubSystem: '<S105>/If' */

  /* RelationalOperator: '<S105>/RelationalOperator6' incorporates:
   *  Constant: '<S105>/Define8'
   */
  rtb_RelationalOperator6_jeoe = (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_Nopreheat));

  /* Outputs for Atomic SubSystem: '<S105>/If1'
   *
   * Block requirements for '<S105>/If1':
   *  1. SWREQ_02416 MainRelay Ctrl keep warm
   */
  /* Constant: '<S105>/Define7' */
  rtb_Switch_jpyc = CtAp_ChrgPreHeat_If_epk1(rtb_RelationalOperator6_jeoe,
    ((uint8_T)ChrgPreHeat_Invalid), rtb_Switch_mrr2);

  /* End of Outputs for SubSystem: '<S105>/If1' */

  /* DataTypeConversion: '<S105>/DataTypeConversion' incorporates:
   *  Delay: '<S105>/Delay'
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_phvg = rtb_Switch_jpyc;

  /* End of Outputs for SubSystem: '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq' */

  /* Outputs for Atomic SubSystem: '<S74>/ChrMgmt_ACPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_ACPosRlyOpenReq':
   *  1. SWREQ_02412 MainRelay Ctrl AC open
   *  2. SWREQ_02414 MainRelay Ctrl AC Close
   *  3. SWREQ_06461 AC Invlid
   *  4. SWREQ_06463 No preheat to Invalid
   */
  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   */
  rtb_Compare_howl = (rtb_TmpSignalConversionAtR_l0cy == ((uint8_T)
    ChrgPreHeat_OBCEnabled));

  /* Outputs for Atomic SubSystem: '<S106>/ATOM_OnDelay' */
  /* Constant: '<S106>/CAL1' incorporates:
   *  Constant: '<S106>/Define5'
   *  Constant: '<S106>/Define6'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ATOM_OnDelay(rtb_Compare_howl,
    ChrMgmt_PosRlyCtrlTimDly_CFG, ((uint16_T)ChrgPreHeat_dt), ((uint16_T)
    ChrgPreHeat_U16Zero), &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay_cl54);

  /* End of Outputs for SubSystem: '<S106>/ATOM_OnDelay' */

  /* Logic: '<S106>/LogicalOperator1' incorporates:
   *  Constant: '<S121>/Constant'
   *  Constant: '<S123>/Constant'
   *  Constant: '<S124>/Constant'
   *  Constant: '<S125>/Constant'
   *  Logic: '<S106>/LogicalOperator4'
   *  RelationalOperator: '<S121>/Compare'
   *  RelationalOperator: '<S123>/Compare'
   *  RelationalOperator: '<S124>/Compare'
   *  RelationalOperator: '<S125>/Compare'
   */
  rtb_LogicalOperator1_i0re = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && ((rtb_TmpSignalConversionAtR_jk05 !=
    ((uint16_T)ChrgPreHeat_0xFFFF)) && (rtb_TmpSignalConversionAtR_jk05 >
    ChrMgmt_PosRlyCtrlIRValLmt_CFG)) && (rtb_TmpSignalConversionAtR_ausn ==
    ((uint8_T)ChrgPreHeat_PreheatingMod)) && rtb_LogicalOperator1_eu3w &&
    rtb_Switch_kyqb);

  /* Outputs for Atomic SubSystem: '<S106>/If'
   *
   * Block requirements for '<S106>/If':
   *  1. SWREQ_02414 MainRelay Ctrl AC Close
   */
  /* Constant: '<S106>/Define' incorporates:
   *  Delay: '<S106>/Delay'
   */
  rtb_Switch_lzjt = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator1_i0re,
    ((uint8_T)ChrgPreHeat_Open), CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_btov);

  /* End of Outputs for SubSystem: '<S106>/If' */

  /* Logic: '<S106>/LogicalOperator2' incorporates:
   *  Constant: '<S118>/Constant'
   *  Constant: '<S119>/Constant'
   *  Constant: '<S120>/Constant'
   *  Logic: '<S106>/LogicalOperator3'
   *  RelationalOperator: '<S118>/Compare'
   *  RelationalOperator: '<S119>/Compare'
   *  RelationalOperator: '<S120>/Compare'
   */
  rtb_LogicalOperator2_k3nd = (((rtb_TmpSignalConversionAtR_cu2e == ((uint8_T)
    ChrgPreHeat_HvStandby)) && (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_ACPreheatAndChrgnPrepd))) || (rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_Nopreheat)));

  /* Outputs for Atomic SubSystem: '<S106>/If1'
   *
   * Block requirements for '<S106>/If1':
   *  1. SWREQ_02412 MainRelay Ctrl AC open
   */
  /* Constant: '<S106>/Define7' */
  rtb_Switch_mrr2 = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator2_k3nd,
    ((uint8_T)ChrgPreHeat_Invalid), rtb_Switch_lzjt);

  /* End of Outputs for SubSystem: '<S106>/If1' */

  /* DataTypeConversion: '<S106>/DataTypeConversion' incorporates:
   *  Delay: '<S106>/Delay'
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_btov = rtb_Switch_mrr2;

  /* End of Outputs for SubSystem: '<S74>/ChrMgmt_ACPosRlyOpenReq' */

  /* Outputs for Atomic SubSystem: '<S74>/ChrMgmt_DCPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_DCPosRlyOpenReq':
   *  1. SWREQ_02413 MainRelay Ctrl DC Open
   *  2. SWREQ_02415 MainRelay Ctrl DC Close
   */
  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
   */
  rtb_Compare_cbld = (rtb_TmpSignalConversionAtR_hyx0 == ((uint8_T)
    ChrgPreHeat_ChargingPhase));

  /* Outputs for Atomic SubSystem: '<S107>/ATOM_OnDelay' */
  /* Constant: '<S107>/CAL1' incorporates:
   *  Constant: '<S107>/Define5'
   *  Constant: '<S107>/Define6'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ATOM_OnDelay(rtb_Compare_cbld,
    ChrMgmt_PosRlyCtrlTimDly_CFG, ((uint16_T)ChrgPreHeat_dt), ((uint16_T)
    ChrgPreHeat_U16Zero), &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S107>/ATOM_OnDelay' */

  /* Logic: '<S107>/LogicalOperator1' incorporates:
   *  Constant: '<S107>/CAL'
   *  Constant: '<S107>/Define3'
   *  Constant: '<S134>/Constant'
   *  Logic: '<S107>/LogicalOperator4'
   *  RelationalOperator: '<S107>/RelationalOperator1'
   *  RelationalOperator: '<S107>/RelationalOperator3'
   *  RelationalOperator: '<S134>/Compare'
   */
  rtb_LogicalOperator1_px5l = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && ((rtb_TmpSignalConversionAtR_jk05 !=
    ((uint16_T)ChrgPreHeat_0xFFFF)) && (rtb_TmpSignalConversionAtR_jk05 >
    ChrMgmt_PosRlyCtrlIRValLmt_CFG)) && rtb_LogicalOperator2_lqhw &&
    rtb_Switch_kyqb);

  /* Outputs for Atomic SubSystem: '<S107>/If' */
  /* Constant: '<S107>/Define' incorporates:
   *  Delay: '<S107>/Delay'
   */
  rtb_Switch_fuzt = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator1_px5l,
    ((uint8_T)ChrgPreHeat_Open), CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S107>/If' */

  /* Outputs for Atomic SubSystem: '<S107>/ATOM_OnDelay1' */
  /* Constant: '<S107>/CAL2' incorporates:
   *  Constant: '<S107>/Define1'
   *  Constant: '<S107>/Define2'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ATOM_OnDelay(rtb_LogicalOperator2_lqhw,
    ChrMgmt_PosRlyClsTimDly_CFG, ((uint16_T)ChrgPreHeat_dt), ((uint16_T)
    ChrgPreHeat_U16Zero), &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of Outputs for SubSystem: '<S107>/ATOM_OnDelay1' */

  /* Logic: '<S107>/LogicalOperator' incorporates:
   *  Constant: '<S131>/Constant'
   *  Constant: '<S132>/Constant'
   *  RelationalOperator: '<S131>/Compare'
   *  RelationalOperator: '<S132>/Compare'
   */
  rtb_LogicalOperator_dgv5 = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_DCPreheatAndChrgnPrepd)) && rtb_Switch_kyqb &&
    (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_DCPreheating)));

  /* Outputs for Atomic SubSystem: '<S107>/If1' */
  /* Constant: '<S107>/Define7' */
  rtb_Switch_lzjt = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator_dgv5, ((uint8_T)
    ChrgPreHeat_Close), rtb_Switch_fuzt);

  /* End of Outputs for SubSystem: '<S107>/If1' */

  /* RelationalOperator: '<S133>/Compare' incorporates:
   *  Constant: '<S133>/Constant'
   */
  rtb_Compare_m1av = (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_Nopreheat));

  /* Outputs for Atomic SubSystem: '<S107>/If2' */
  /* Delay: '<S107>/Delay' incorporates:
   *  Constant: '<S107>/Define4'
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE = CtAp_ChrgPreHeat_If_epk1
    (rtb_Compare_m1av, ((uint8_T)ChrgPreHeat_Invalid), rtb_Switch_lzjt);

  /* End of Outputs for SubSystem: '<S107>/If2' */
  /* End of Outputs for SubSystem: '<S74>/ChrMgmt_DCPosRlyOpenReq' */

  /* Outputs for Atomic SubSystem: '<S74>/ChrMgmt_PosRlyOpenReq' */
  /* Logic: '<S109>/LogicalOperator1' incorporates:
   *  Constant: '<S138>/Constant'
   *  Constant: '<S139>/Constant'
   *  Constant: '<S144>/Constant'
   *  Constant: '<S145>/Constant'
   *  Constant: '<S146>/Constant'
   *  Constant: '<S147>/Constant'
   *  Constant: '<S148>/Constant'
   *  Constant: '<S149>/Constant'
   *  Constant: '<S150>/Constant'
   *  RelationalOperator: '<S138>/Compare'
   *  RelationalOperator: '<S139>/Compare'
   *  RelationalOperator: '<S144>/Compare'
   *  RelationalOperator: '<S145>/Compare'
   *  RelationalOperator: '<S146>/Compare'
   *  RelationalOperator: '<S147>/Compare'
   *  RelationalOperator: '<S148>/Compare'
   *  RelationalOperator: '<S149>/Compare'
   *  RelationalOperator: '<S150>/Compare'
   *
   * Block requirements for '<S109>/LogicalOperator1':
   *  1. SWREQ_02411 MainRelay Ctrl
   */
  rtb_LogicalOperator1_cwi2 = ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgPreHeat_Init)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgPreHeat_OffPlug)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgPreHeat_DCCharging)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgPreHeat_ChargingComplete)) || (rtb_TmpSignalConversionAtR_icdi ==
    ((uint8_T)ChrgPreHeat_CharingFault)) || (rtb_TmpSignalConversionAtR_icdi ==
    ((uint8_T)ChrgPreHeat_V2LPlugDetected)) || (rtb_TmpSignalConversionAtR_icdi ==
    ((uint8_T)ChrgPreHeat_V2LDischarging)) || (rtb_TmpSignalConversionAtR_icdi ==
    ((uint8_T)ChrgPreHeat_V2LComplete)) || (rtb_TmpSignalConversionAtR_icdi ==
    ((uint8_T)ChrgPreHeat_V2LFault)));

  /* RelationalOperator: '<S143>/Compare' incorporates:
   *  Constant: '<S143>/Constant'
   *  Delay: '<S107>/Delay'
   */
  rtb_Compare_fq1g = (CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE == ((uint8_T)
    ChrgPreHeat_Close));

  /* Logic: '<S109>/LogicalOperator' incorporates:
   *  Constant: '<S140>/Constant'
   *  Constant: '<S141>/Constant'
   *  Constant: '<S142>/Constant'
   *  Delay: '<S105>/Delay'
   *  Delay: '<S106>/Delay'
   *  Delay: '<S107>/Delay'
   *  RelationalOperator: '<S140>/Compare'
   *  RelationalOperator: '<S141>/Compare'
   *  RelationalOperator: '<S142>/Compare'
   */
  rtb_LogicalOperator_et5e = ((CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE ==
    ((uint8_T)ChrgPreHeat_Open)) || (CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_btov
    == ((uint8_T)ChrgPreHeat_Open)) ||
    (CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_phvg == ((uint8_T)ChrgPreHeat_Open)));

  /* Outputs for Atomic SubSystem: '<S109>/If2' */
  /* Constant: '<S109>/Define2' incorporates:
   *  Constant: '<S109>/Define3'
   */
  rtb_Switch_fuzt = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator_et5e, ((uint8_T)
    ChrgPreHeat_Open), ((uint8_T)ChrgPreHeat_Invalid));

  /* End of Outputs for SubSystem: '<S109>/If2' */

  /* Outputs for Atomic SubSystem: '<S109>/If1' */
  /* Constant: '<S109>/Define1' */
  rtb_Switch_lzjt = CtAp_ChrgPreHeat_If_epk1(rtb_Compare_fq1g, ((uint8_T)
    ChrgPreHeat_Close), rtb_Switch_fuzt);

  /* End of Outputs for SubSystem: '<S109>/If1' */

  /* Outputs for Atomic SubSystem: '<S109>/If' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum' incorporates:
   *  Constant: '<S109>/Define'
   */
  tmpWrite = CtAp_ChrgPreHeat_If_epk1(rtb_LogicalOperator1_cwi2, ((uint8_T)
    ChrgPreHeat_Invalid), rtb_Switch_lzjt);

  /* End of Outputs for SubSystem: '<S109>/If' */
  /* End of Outputs for SubSystem: '<S74>/ChrMgmt_PosRlyOpenReq' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_PosRlyOpenReq' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_PreheatPODDiReq'
   *
   * Block requirements for '<S6>/ChrMgmt_PreheatPODDiReq':
   *  1. SWREQ_02403 DCDC&TCU Ctrl disable due to AC Pause
   *  2. SWREQ_02404 DCDC&TCU Ctrl disable
     due to DC Pause
   *  3. SWREQ_02405 DCDC&TCU Ctrl disable recover
   *  4. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *  5. SWREQ_02407 DCDC&TCU Ctrl no req
   *  6. SWREQ_02408 DCDC&TCU
   *  7. SWREQ_02409 DCDC&TCU Ctrl Active
   *  8. SWREQ_02410 DCDC&TCU Ctrl Inactive
   *  9. SWREQ_06003 Preheat Req POD Inactive
   *  10. SWREQ_06458 DCDC&TCU Ctrl disable due to ChargCapacibilityError
   *  11. SWREQ_06459 DCDC&TCU Ctrl disable due to jump to  Heat and chargereq
   */
  /* Outputs for Atomic SubSystem: '<S75>/ChrMgmt_AcheatReqPOD' */
  /* Outputs for Atomic SubSystem: '<S154>/ChrMgmt_AcKeepWarmReqPOD'
   *
   * Block requirements for '<S154>/ChrMgmt_AcKeepWarmReqPOD':
   *  1. SWREQ_06680 KeepWarmReq POD Init
   *  2. SWREQ_06681 AC KeepWarmReq POD Disable
   *  3. SWREQ_06682 AC KeepWarmReq POD Enable
   *  4. SWREQ_06683 AC KeepWarmReq POD Matain
   */
  /* Switch: '<S191>/Switch' incorporates:
   *  Delay: '<S157>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_cfbu;

  /* Logic: '<S157>/LogicalOperator4' incorporates:
   *  Abs: '<S157>/Abs'
   *  Constant: '<S157>/Define'
   *  Constant: '<S162>/Constant'
   *  Constant: '<S163>/Constant'
   *  Constant: '<S164>/Constant'
   *  Delay: '<S157>/Delay'
   *  Logic: '<S157>/LogicalOperator'
   *  Logic: '<S157>/LogicalOperator1'
   *  Logic: '<S157>/LogicalOperator2'
   *  Logic: '<S157>/LogicalOperator3'
   *  Logic: '<S157>/LogicalOperator5'
   *  RelationalOperator: '<S157>/RelationalOperator'
   *  RelationalOperator: '<S162>/Compare'
   *  RelationalOperator: '<S163>/Compare'
   *  RelationalOperator: '<S164>/Compare'
   *  Sum: '<S157>/Add'
   *
   * Block requirements for '<S157>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S157>/LogicalOperator5':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_cfbu = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && ((rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_KeepwarmPreparing)) || (((rtb_ChrMgmt_PreheatSts_Enum
    != ((uint8_T)ChrgPreHeat_KeepWarming)) || (fabsf
    (rtb_TmpSignalConversionAtR_ddai - tmpRead_4) >
    ChrgPreHeat_DiffVolPrheatOutp)) && rtb_Switch_kyqb)));

  /* End of Outputs for SubSystem: '<S154>/ChrMgmt_AcKeepWarmReqPOD' */

  /* Outputs for Atomic SubSystem: '<S154>/ChrMgmt_AcPreheat2ChrgnReqPOD'
   *
   * Block requirements for '<S154>/ChrMgmt_AcPreheat2ChrgnReqPOD':
   *  1. SWREQ_06676 AC Preheat2ChargeReq POD Init
   *  2. SWREQ_06677 AC Preheat2ChargeReq POD Disable
   *  3. SWREQ_06678 AC Preheat2ChargeReq POD Enable
   *  4. SWREQ_06679 AC Preheat2ChargeReq POD Matain
   */
  /* Switch: '<S191>/Switch' incorporates:
   *  Delay: '<S158>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_k1ip;

  /* Logic: '<S158>/LogicalOperator5' incorporates:
   *  Constant: '<S165>/Constant'
   *  Constant: '<S166>/Constant'
   *  Constant: '<S167>/Constant'
   *  Constant: '<S168>/Constant'
   *  Delay: '<S158>/Delay'
   *  Logic: '<S158>/LogicalOperator1'
   *  Logic: '<S158>/LogicalOperator13'
   *  Logic: '<S158>/LogicalOperator2'
   *  Logic: '<S158>/LogicalOperator3'
   *  Logic: '<S158>/LogicalOperator4'
   *  RelationalOperator: '<S165>/Compare'
   *  RelationalOperator: '<S166>/Compare'
   *  RelationalOperator: '<S167>/Compare'
   *  RelationalOperator: '<S168>/Compare'
   *
   * Block requirements for '<S158>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S158>/LogicalOperator4':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_k1ip = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && ((rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_ACPreheatAndChargingPre)) ||
    (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)ChrgPreHeat_ACPreheatAndChrgnPrepd))
    || ((rtb_ChrMgmt_PreheatSts_Enum != ((uint8_T)ChrgPreHeat_PreheatComplete)) &&
        rtb_Switch_kyqb)));

  /* End of Outputs for SubSystem: '<S154>/ChrMgmt_AcPreheat2ChrgnReqPOD' */

  /* Outputs for Atomic SubSystem: '<S154>/ChrMgmt_AcPreheatPreJumpReqPOD'
   *
   * Block requirements for '<S154>/ChrMgmt_AcPreheatPreJumpReqPOD':
   *  1. SWREQ_06672 AC preheat pre jump Req Init
   *  2. SWREQ_06673 AC preheat pre jump Req POD Disable
   *  3. SWREQ_06674 AC preheat pre jump Req POD Enable
   *  4. SWREQ_06675 AC preheat pre jump Req POD Matain
   */
  /* Logic: '<S160>/LogicalOperator7' incorporates:
   *  Constant: '<S160>/CAL1'
   *  Constant: '<S160>/Define6'
   *  Constant: '<S173>/Constant'
   *  RelationalOperator: '<S160>/RelationalOperator6'
   *  RelationalOperator: '<S160>/RelationalOperator9'
   *  RelationalOperator: '<S173>/Compare'
   */
  rtb_LogicalOperator7_gzvd = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && (rtb_TmpSignalConversionAtR_cu2e ==
    ((uint8_T)ChrgPreHeat_Preheating)) && (rtb_TmpSignalConversionAtR_ddai >
    ChrMgmt_DCDCEnaUDcLmt_CFG));

  /* Outputs for Atomic SubSystem: '<S160>/ATOM_TimeCnt' */
  /* Constant: '<S160>/Define12' incorporates:
   *  Constant: '<S160>/CAL2'
   */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_ATOM_TimeCnt(rtb_LogicalOperator7_gzvd,
    ((uint16_T)ChrgPreHeat_dt), ChrMgmt_PODEnaDly_CFG,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S160>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S160>/If1' */
  /* Constant: '<S160>/Define1' incorporates:
   *  Delay: '<S160>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_If(rtb_Switch_ifqt, ChrgPreHeat_Inactive,
    CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_iyx5);

  /* End of Outputs for SubSystem: '<S160>/If1' */

  /* Logic: '<S160>/LogicalOperator4' incorporates:
   *  Constant: '<S172>/Constant'
   *  Constant: '<S174>/Constant'
   *  Constant: '<S175>/Constant'
   *  RelationalOperator: '<S172>/Compare'
   *  RelationalOperator: '<S174>/Compare'
   *  RelationalOperator: '<S175>/Compare'
   *
   * Block requirements for '<S160>/LogicalOperator4':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  rtb_LogicalOperator4_o5e3 = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatPreparing)) && (rtb_TmpSignalConversionAtR_l0cy ==
    ((uint8_T)ChrgPreHeat_ChargePreparing)) && (tmpRead_5 == ((uint8_T)
    ChrgPreHeat_Locked)));

  /* Outputs for Atomic SubSystem: '<S160>/If' */
  /* Constant: '<S160>/Define9' */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_If(rtb_LogicalOperator4_o5e3,
    ChrgPreHeat_Active, rtb_Switch_kyqb);

  /* End of Outputs for SubSystem: '<S160>/If' */

  /* Logic: '<S160>/LogicalOperator1' incorporates:
   *  Constant: '<S171>/Constant'
   *  Delay: '<S160>/Delay'
   *  Logic: '<S160>/LogicalOperator2'
   *  RelationalOperator: '<S171>/Compare'
   *
   * Block requirements for '<S160>/LogicalOperator1':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S160>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_iyx5 = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && rtb_Switch_ifqt);

  /* End of Outputs for SubSystem: '<S154>/ChrMgmt_AcPreheatPreJumpReqPOD' */
  /* End of Outputs for SubSystem: '<S75>/ChrMgmt_AcheatReqPOD' */

  /* Outputs for Atomic SubSystem: '<S75>/ChrMgmt_DcheatReqPOD' */
  /* Outputs for Atomic SubSystem: '<S155>/ChrMgmt_DcPreheat2ChrgnReqPOD'
   *
   * Block requirements for '<S155>/ChrMgmt_DcPreheat2ChrgnReqPOD':
   *  1. SWREQ_06690 DC Preheat2ChargeReq POD Init
   *  2. SWREQ_06691 DC Preheat2ChargeReq POD Disable
   *  3. SWREQ_06692 DC Preheat2ChargeReq POD Enable
   *  4. SWREQ_06693 DC Preheat2ChargeReq POD Matain
   */
  /* Switch: '<S191>/Switch' incorporates:
   *  Delay: '<S178>/Delay'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_b4bk;

  /* Logic: '<S178>/LogicalOperator5' incorporates:
   *  Constant: '<S182>/Constant'
   *  Constant: '<S183>/Constant'
   *  Constant: '<S184>/Constant'
   *  Constant: '<S185>/Constant'
   *  Delay: '<S178>/Delay'
   *  Logic: '<S178>/LogicalOperator1'
   *  Logic: '<S178>/LogicalOperator13'
   *  Logic: '<S178>/LogicalOperator2'
   *  Logic: '<S178>/LogicalOperator3'
   *  Logic: '<S178>/LogicalOperator4'
   *  RelationalOperator: '<S182>/Compare'
   *  RelationalOperator: '<S183>/Compare'
   *  RelationalOperator: '<S184>/Compare'
   *  RelationalOperator: '<S185>/Compare'
   *
   * Block requirements for '<S178>/LogicalOperator2':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   *
   * Block requirements for '<S178>/LogicalOperator4':
   *  1. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_b4bk = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && ((rtb_ChrMgmt_PreheatSts_Enum ==
    ((uint8_T)ChrgPreHeat_DCPreheatAndChargingPre)) ||
    (rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)ChrgPreHeat_DCPreheatAndChrgnPrepd))
    || ((rtb_ChrMgmt_PreheatSts_Enum != ((uint8_T)ChrgPreHeat_PreheatComplete)) &&
        rtb_Switch_kyqb)));

  /* End of Outputs for SubSystem: '<S155>/ChrMgmt_DcPreheat2ChrgnReqPOD' */

  /* Outputs for Atomic SubSystem: '<S155>/ChrMgmt_DcPreheatPreJumpReqPOD'
   *
   * Block requirements for '<S155>/ChrMgmt_DcPreheatPreJumpReqPOD':
   *  1. SWREQ_06686 DC preheat pre jump Req Init
   *  2. SWREQ_06687 DC preheat pre jump Req POD Disable
   *  3. SWREQ_06688 DC preheat pre jump Req POD Enable
   *  4. SWREQ_06689 DC preheat pre jump Req POD Matain
   */
  /* Logic: '<S180>/LogicalOperator7' incorporates:
   *  Constant: '<S180>/CAL1'
   *  Constant: '<S180>/Define6'
   *  Constant: '<S189>/Constant'
   *  RelationalOperator: '<S180>/RelationalOperator6'
   *  RelationalOperator: '<S180>/RelationalOperator9'
   *  RelationalOperator: '<S189>/Compare'
   */
  rtb_LogicalOperator7 = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatingPrepared)) && (rtb_TmpSignalConversionAtR_cu2e ==
    ((uint8_T)ChrgPreHeat_Preheating)) && (rtb_TmpSignalConversionAtR_ewa1 >
    ChrMgmt_DCDCEnaUDcLmt_CFG));

  /* Outputs for Atomic SubSystem: '<S180>/ATOM_TimeCnt' */
  /* Constant: '<S180>/Define12' incorporates:
   *  Constant: '<S180>/CAL2'
   */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_ATOM_TimeCnt(rtb_LogicalOperator7,
    ((uint16_T)ChrgPreHeat_dt), ChrMgmt_PODEnaDly_CFG,
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S180>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S180>/If1' */
  /* Constant: '<S180>/Define1' incorporates:
   *  Delay: '<S180>/Delay'
   */
  rtb_Switch_ifqt = CtAp_ChrgPreHeat_If(rtb_Switch_kyqb, ChrgPreHeat_Inactive,
    CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ezdd);

  /* End of Outputs for SubSystem: '<S180>/If1' */

  /* Logic: '<S180>/LogicalOperator' incorporates:
   *  Constant: '<S188>/Constant'
   *  Constant: '<S190>/Constant'
   *  RelationalOperator: '<S188>/Compare'
   *  RelationalOperator: '<S190>/Compare'
   */
  rtb_LogicalOperator_mz1n = ((rtb_ChrMgmt_PreheatSts_Enum == ((uint8_T)
    ChrgPreHeat_PreheatPreparing)) && (rtb_TmpSignalConversionAtR_hyx0 ==
    ((uint8_T)ChrgPreHeat_HandShake)));

  /* Outputs for Atomic SubSystem: '<S180>/If' */
  /* Constant: '<S180>/Define9' */
  rtb_Switch_kyqb = CtAp_ChrgPreHeat_If(rtb_LogicalOperator_mz1n,
    ChrgPreHeat_Active, rtb_Switch_ifqt);

  /* End of Outputs for SubSystem: '<S180>/If' */

  /* Logic: '<S180>/LogicalOperator1' incorporates:
   *  Constant: '<S187>/Constant'
   *  Delay: '<S180>/Delay'
   *  Logic: '<S180>/LogicalOperator2'
   *  RelationalOperator: '<S187>/Compare'
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ezdd = ((rtb_ChrMgmt_PreheatSts_Enum !=
    ((uint8_T)ChrgPreHeat_Nopreheat)) && rtb_Switch_kyqb);

  /* End of Outputs for SubSystem: '<S155>/ChrMgmt_DcPreheatPreJumpReqPOD' */

  /* Outputs for Atomic SubSystem: '<S75>/ChrMgmt_PreheatPODDiReq' */
  /* Outputs for Atomic SubSystem: '<S75>/ChrMgmt_AcheatReqPOD' */
  /* Outputs for Atomic SubSystem: '<S154>/ChrMgmt_AcheatReqPODMerge' */
  /* Outputs for Atomic SubSystem: '<S154>/ChrMgmt_AcPreheatPausePODDiReq'
   *
   * Block requirements for '<S154>/ChrMgmt_AcPreheatPausePODDiReq':
   *  1. SWREQ_06670 AC Error Req POD
   *  2. SWREQ_06671 AC Error Req POD
   */
  /* Outputs for Atomic SubSystem: '<S155>/ChrMgmt_DcheatReqPODMerge' */
  /* Outputs for Atomic SubSystem: '<S155>/ChrMgmt_DcPreheatPausePODDiReq'
   *
   * Block requirements for '<S155>/ChrMgmt_DcPreheatPausePODDiReq':
   *  1. SWREQ_06684 DC Pause Req POD
   *  2. SWREQ_06685 DC Pause Req POD
   */
  /* Logic: '<S156>/LogicalOperator' incorporates:
   *  Constant: '<S159>/Define'
   *  Constant: '<S159>/Define1'
   *  Constant: '<S169>/Constant'
   *  Constant: '<S179>/Define2'
   *  Delay: '<S157>/Delay'
   *  Delay: '<S158>/Delay'
   *  Delay: '<S160>/Delay'
   *  Delay: '<S178>/Delay'
   *  Delay: '<S180>/Delay'
   *  Delay: '<S2>/Delay'
   *  Logic: '<S159>/LogicalOperator'
   *  Logic: '<S159>/LogicalOperator1'
   *  Logic: '<S159>/LogicalOperator12'
   *  Logic: '<S161>/LogicalOperator'
   *  Logic: '<S179>/LogicalOperator2'
   *  Logic: '<S181>/LogicalOperator'
   *  RelationalOperator: '<S159>/RelationalOperator'
   *  RelationalOperator: '<S159>/RelationalOperator1'
   *  RelationalOperator: '<S169>/Compare'
   *  RelationalOperator: '<S179>/RelationalOperator2'
   *
   * Block requirements for '<S159>/LogicalOperator1':
   *  1. SWREQ_02404 DCDC&TCU Ctrl disable
     due to DC Pause
   */
  CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_nrxa =
    ((((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_ACPreheating)) ||
       (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_KeepWarm))) &&
      (tmpRead_1 || (tmpRead_3 == ((uint8_T)ChrgPreHeat_CapacibilityError)))) ||
     CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_iyx5 ||
     CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_k1ip ||
     CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_cfbu || ((tmpRead_2 &&
       (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)ChrgPreHeat_DCPreheating)))
      || CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ezdd ||
      CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_b4bk));

  /* End of Outputs for SubSystem: '<S155>/ChrMgmt_DcPreheatPausePODDiReq' */
  /* End of Outputs for SubSystem: '<S155>/ChrMgmt_DcheatReqPODMerge' */
  /* End of Outputs for SubSystem: '<S154>/ChrMgmt_AcPreheatPausePODDiReq' */
  /* End of Outputs for SubSystem: '<S154>/ChrMgmt_AcheatReqPODMerge' */
  /* End of Outputs for SubSystem: '<S75>/ChrMgmt_AcheatReqPOD' */
  /* End of Outputs for SubSystem: '<S75>/ChrMgmt_PreheatPODDiReq' */
  /* End of Outputs for SubSystem: '<S75>/ChrMgmt_DcheatReqPOD' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_PreheatPODDiReq' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDcCtrlE.ChrMgmt_MonStatAcPreheatUDcCtrlErr
    = rtb_DataTypeConversion_amfb;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDcCtrlE.ChrMgmt_MonResAcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1_meg5;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDcCtrlE.ChrMgmt_ErrStatAcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8_lrht;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDcCtrlE.ChrMgmt_ErrResAcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch6_mxll;

  /* Outport: '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus'
   *  DataTypeConversion: '<S8>/DataTypeConversion'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDc_hxrd.ChrMgmt_MonStatAcPreheatUDcCtrlErrDTC
    = rtb_DataTypeConversion_bhyr;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDc_hxrd.ChrMgmt_MonResAcPreheatUDcCtrlErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1_ph2d;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDc_hxrd.ChrMgmt_ErrStatAcPreheatUDcCtrlErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8_lw2i;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErrDTC' */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDc_hxrd.ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC
    = ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC;

  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_AcPreheatUDcCtrlErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDcCtrlE.ChrMgmt_MonStatDcPreheatUDcCtrlErr
    = rtb_DataTypeConversion_ail2;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDcCtrlE.ChrMgmt_MonResDcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1_owxy;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDcCtrlE.ChrMgmt_ErrStatDcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8_gip4;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDcCtrlE.ChrMgmt_ErrResDcPreheatUDcCtrlErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch6_daje;

  /* Outport: '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus'
   *  DataTypeConversion: '<S10>/DataTypeConversion'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDc_eosp.ChrMgmt_MonStatDcPreheatUDcCtrlErrDTC
    = rtb_DataTypeConversion_m5oz;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDc_eosp.ChrMgmt_MonResDcPreheatUDcCtrlErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1_obqj;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDc_eosp.ChrMgmt_ErrStatDcPreheatUDcCtrlErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8_dcta;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErrDTC' */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDc_eosp.ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC
    = ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC;

  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DcPreheatUDcCtrlErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErr_B.ChrMgmt_MonStatPreheatIRChkErr
    = rtb_DataTypeConversion_ar2g;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErr_B.ChrMgmt_MonResPreheatIRChkErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1_b25x;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErr_B.ChrMgmt_ErrStatPreheatIRChkErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8_fvgz;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErr_B.ChrMgmt_ErrResPreheatIRChkErr
    = CtAp_ChrgPreHeat_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus'
   *  DataTypeConversion: '<S12>/DataTypeConversion'
   */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErrDT.ChrMgmt_MonStatPreheatIRChkErrDTC
    = rtb_DataTypeConversion_jqjg;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErrDT.ChrMgmt_MonResPreheatIRChkErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch1;
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErrDT.ChrMgmt_ErrStatPreheatIRChkErrDTC
    = CtAp_ChrgPreHeat_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_PreheatIRChkErrDTC' */
  CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErrDT.ChrMgmt_ErrResPreheatIRChkErrDTC
    = ChrMgmt_ErrResPreheatIRChkErrDTC;

  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_PreheatIRChkErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatDTC' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg' incorporates:
   *  Delay: '<S2>/Delay'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg
    (CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_nrxa);

  /* Outport: '<Root>/RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' */
  (void)Rte_Write_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (rtb_ChrMgmt_PreheatSts_Enum);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_PackPTCCtrl'
   *
   * Block requirements for '<S6>/ChrMgmt_PackPTCCtrl':
   *  1. SWREQ_06005 Pack PTC Allow Init
   *  2. SWREQ_06006 Pack PTC Req Open
   *  3. SWREQ_06007 Pack PTC Req close
   *  4. SWREQ_06008 Pack PTC Req mantain
   *  5. SWREQ_06460 Pack PTC Req Open
   */
  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_PckPTCAllwbl' */
  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_AcheatReqPckPTC' */
  /* Outputs for Atomic SubSystem: '<S77>/ChrMgmt_AcheatReqPckPTCMerge' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg' incorporates:
   *  Delay: '<S78>/Delay'
   *  Delay: '<S80>/Delay'
   *  Delay: '<S81>/Delay'
   *  Delay: '<S82>/Delay'
   *  Logic: '<S79>/LogicalOperator'
   *  Logic: '<S79>/LogicalOperator1'
   *  Logic: '<S83>/LogicalOperator'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg
    (!CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_oqjg &&
     !CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_e04d &&
     !CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_apcg &&
     !CtAp_ChrgPreHeat_ARID_DEF.Delay_DSTATE_ekva);

  /* End of Outputs for SubSystem: '<S77>/ChrMgmt_AcheatReqPckPTCMerge' */
  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_AcheatReqPckPTC' */
  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_PckPTCAllwbl' */
  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_PackPTCCtrl' */

  /* Outputs for Atomic SubSystem: '<S6>/ChrMgmt_PreheatReqHv'
   *
   * Block requirements for '<S6>/ChrMgmt_PreheatReqHv':
   *  1. SWREQ_06462 Preheat Req HvOff
   *  2. SWREQ_06464 Preheat Req HvOn
   */
  /* Outport: '<Root>/RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff' incorporates:
   *  Constant: '<S193>/Constant'
   *  Constant: '<S194>/Constant'
   *  Constant: '<S195>/Constant'
   *  Logic: '<S76>/LogicalOperator'
   *  RelationalOperator: '<S193>/Compare'
   *  RelationalOperator: '<S194>/Compare'
   *  RelationalOperator: '<S195>/Compare'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff
    ((rtb_TmpSignalConversionAtR_l0cy == ((uint8_T)
       ChrgPreHeat_OBCPreheat2ChargingWait)) && (rtb_TmpSignalConversionAtR_cu2e
      != ((uint8_T)ChrgPreHeat_HvStandby)) && (rtb_ChrMgmt_PreheatSts_Enum ==
      ((uint8_T)ChrgPreHeat_ACPreheatAndChrgnPrepd)));

  /* End of Outputs for SubSystem: '<S6>/ChrMgmt_PreheatReqHv' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum' */
  (void)Rte_Write_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum
    (tmpWrite);
  (void)
    Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus
    (&CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDcCtrlE);
  (void)
    Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus
    (&CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_AcPreheatUDc_hxrd);
  (void)
    Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus
    (&CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDcCtrlE);
  (void)
    Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus
    (&CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_DcPreheatUDc_eosp);
  (void)
    Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(
    &CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErr_B);
  (void)
    Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus
    (&CtAp_ChrgPreHeat_ARID_DEF.RTE_P_ChrMgmt_PreheatIRChkErrDT);
}

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgPreHeat_START_SEC_VAR_CONST_8
#include "CtAp_ChrgPreHeat_MemMap.h"

void R_ChrgPreHeat_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChrMgmt_ErrResPreheatIRChkErrDTC = false;
  ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC = false;
  ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgPreHeat_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgPreHeat_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/ChrMgmt_PosRlyOpenReq' */
  /* SystemInitialize for Atomic SubSystem: '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq':
   *  1. SWREQ_02416 MainRelay Ctrl keep warm
   */
  /* SystemInitialize for Atomic SubSystem: '<S105>/ATOM_OnDelay' */
  CtAp_ChrgPreH_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay_kkiq);

  /* End of SystemInitialize for SubSystem: '<S105>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq' */

  /* SystemInitialize for Atomic SubSystem: '<S74>/ChrMgmt_ACPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_ACPosRlyOpenReq':
   *  1. SWREQ_02412 MainRelay Ctrl AC open
   *  2. SWREQ_02414 MainRelay Ctrl AC Close
   *  3. SWREQ_06461 AC Invlid
   *  4. SWREQ_06463 No preheat to Invalid
   */
  /* SystemInitialize for Atomic SubSystem: '<S106>/ATOM_OnDelay' */
  CtAp_ChrgPreH_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay_cl54);

  /* End of SystemInitialize for SubSystem: '<S106>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S74>/ChrMgmt_ACPosRlyOpenReq' */

  /* SystemInitialize for Atomic SubSystem: '<S74>/ChrMgmt_DCPosRlyOpenReq'
   *
   * Block requirements for '<S74>/ChrMgmt_DCPosRlyOpenReq':
   *  1. SWREQ_02413 MainRelay Ctrl DC Open
   *  2. SWREQ_02415 MainRelay Ctrl DC Close
   */
  /* SystemInitialize for Atomic SubSystem: '<S107>/ATOM_OnDelay' */
  CtAp_ChrgPreH_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S107>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S107>/ATOM_OnDelay1' */
  CtAp_ChrgPreH_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgPreHeat_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of SystemInitialize for SubSystem: '<S107>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S74>/ChrMgmt_DCPosRlyOpenReq' */
  /* End of SystemInitialize for SubSystem: '<S6>/ChrMgmt_PosRlyOpenReq' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_PreheatHvCtrl' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgPreHeat_Cyclic_50ms_sys' */
}

#define CtAp_ChrgPreHeat_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgPreHeat_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
