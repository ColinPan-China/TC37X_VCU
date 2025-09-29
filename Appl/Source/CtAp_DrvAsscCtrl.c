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
 *  Filename:           CtAp_DrvAsscCtrl.c
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvAsscCtrl.h"
#include "rtwtypes.h"
#include "CtAp_DrvAsscCtrl_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "look1_iflf_binlca.h"
#include "look2_iflf_binlca.h"
#include "CtAp_ChassisMgmt_Cal.h"
#include "CtAp_DrvAsscCtrl_Cal.h"
#include "CtAp_DrvAsscCtrl_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static boolean_T ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltInfo_Flg;/* '<S40>/Switch6' */

/* 0:PASS 1:FAULT */
static boolean_T ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltInfo_Flg;/* '<S47>/Switch6' */

/* 0:PASS 1:FAULT */
#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

ARID_DEF_CtAp_DrvAsscCtrl_T CtAp_DrvAsscCtrl_ARID_DEF;

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S15>/If'
 *    '<S24>/If'
 *    '<S20>/If'
 */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

real32_T CtAp_DrvAsscCtrl_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S16>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S16>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S21>/ATOM_RS_FF1'
 *    '<S23>/ATOM_RS_FF'
 */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void CtAp_DrvAsscCtr_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S25>/UnitDelay1' */
  CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S21>/ATOM_RS_FF1'
 *    '<S23>/ATOM_RS_FF'
 */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

boolean_T CtAp_DrvAsscCtrl_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S25>/LogOp2' incorporates:
   *  Logic: '<S25>/LogOp'
   *  Logic: '<S25>/LogOp4'
   *  UnitDelay: '<S25>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S ||
                        CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S25>/UnitDelay1' */
  CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S29>/ATOM_TimeCnt'
 *    '<S32>/ATOM_TimeCnt'
 */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

boolean_T CtAp_DrvAsscCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S35>/Add1' incorporates:
   *  DataTypeConversion: '<S35>/Data Type Conversion'
   *  DataTypeConversion: '<S35>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)((uint16_T)rtu_MaxTime_C) + (uint32_T)
                        rtu_RunStep_C);

  /* Switch: '<S35>/Switch' */
  if (rtu_In) {
    /* Sum: '<S35>/Add' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     *  UnitDelay: '<S35>/Delay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S35>/Min' */
    if (rtb_Add1 <= CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S35>/Add' */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S35>/Min' */
  } else {
    /* Sum: '<S35>/Add' incorporates:
     *  Constant: '<S35>/Constant'
     *  UnitDelay: '<S35>/Delay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S35>/Switch' */

  /* RelationalOperator: '<S35>/Relational Operator' incorporates:
   *  UnitDelay: '<S35>/Delay'
   */
  return CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Output and update for atomic system: '<S29>/NoReset' */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void CtAp_DrvAsscCtrl_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_DrvAssc_T *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S36>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S36>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S37>/Constant'
     *  Constant: '<S37>/Constant4'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S37>/Switch' */

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S37>/Constant5'
     *  RelationalOperator: '<S37>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      uint16_T u0;

      /* Sum: '<S38>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S38>/Sum' incorporates:
       *  UnitDelay: '<S38>/UnitDelay'
       */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S38>/MinMax' */
      if (u0 <= CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S38>/Sum' */
        CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S38>/MinMax' */
    } else {
      /* Sum: '<S38>/Sum' incorporates:
       *  Constant: '<S37>/Constant37'
       *  UnitDelay: '<S38>/UnitDelay'
       */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S37>/Switch8' incorporates:
     *  Constant: '<S37>/Constant6'
     *  Constant: '<S37>/DEBOUNCING'
     *  Constant: '<S37>/DEBOUNCING_F'
     *  RelationalOperator: '<S37>/Equal6'
     *  RelationalOperator: '<S38>/B_MiHold'
     *  Switch: '<S37>/Switch2'
     *  UnitDelay: '<S38>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
      /* Switch: '<S37>/Switch2' incorporates:
       *  Constant: '<S37>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)3U);
    }

    /* End of Switch: '<S37>/Switch8' */

    /* Switch: '<S37>/Switch6' incorporates:
     *  Constant: '<S37>/Constant30'
     *  RelationalOperator: '<S37>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S37>/Switch6' incorporates:
       *  Constant: '<S37>/Constant32'
       */
      ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo_Flg = true;
    }

    /* End of Switch: '<S37>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S36>/ErrorHandleSysU16' */
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Output and update for atomic system: '<S30>/NoEnableAndReset' */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void CtAp_DrvAsscCt_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  boolean_T rtb_Equal2_jmuc;

  /* Constant: '<S39>/True' */
  *rty_MonStat = true;

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S40>/Constant4'
   */
  if (rtu_SetCondition) {
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S40>/Switch' */

  /* RelationalOperator: '<S40>/Equal2' incorporates:
   *  Constant: '<S40>/Constant5'
   */
  rtb_Equal2_jmuc = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S41>/Switch1' */
  if (rtb_Equal2_jmuc) {
    uint16_T u0;

    /* Sum: '<S41>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S41>/Sum' incorporates:
     *  UnitDelay: '<S41>/UnitDelay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S41>/MinMax' */
    if (u0 <= CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S41>/Sum' */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S41>/MinMax' */
  } else {
    /* Sum: '<S41>/Sum' incorporates:
     *  Constant: '<S40>/Constant37'
     *  UnitDelay: '<S41>/UnitDelay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S41>/Switch1' */

  /* RelationalOperator: '<S40>/Equal6' incorporates:
   *  Constant: '<S40>/Constant6'
   */
  rtb_Equal2_jmuc = (*rty_MonRes == ((uint8_T)2U));

  /* Switch: '<S40>/Switch8' incorporates:
   *  Constant: '<S40>/DEBOUNCING'
   *  Constant: '<S40>/DEBOUNCING_F'
   *  RelationalOperator: '<S41>/B_MiHold'
   *  Switch: '<S40>/Switch2'
   *  UnitDelay: '<S41>/UnitDelay'
   */
  if (rtb_Equal2_jmuc) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
  {
    /* Switch: '<S40>/Switch2' incorporates:
     *  Constant: '<S40>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)3U);
  }

  /* End of Switch: '<S40>/Switch8' */

  /* RelationalOperator: '<S40>/Equal3' incorporates:
   *  Constant: '<S40>/Constant30'
   */
  rtb_Equal2_jmuc = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S40>/Switch6' */
  if (rtb_Equal2_jmuc) {
    /* Switch: '<S40>/Switch6' incorporates:
     *  Constant: '<S40>/Constant32'
     */
    ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltInfo_Flg = true;
  } else {
    /* Switch: '<S40>/Switch6' incorporates:
     *  Delay: '<S40>/Delay1'
     */
    ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltInfo_Flg =
      CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S40>/Switch6' */

  /* Update for Delay: '<S40>/Delay1' */
  CtAp_DrvAsscCtrl__ARID_DEF_arg->Delay1_DSTATE =
    ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltInfo_Flg;
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Output and update for atomic system: '<S32>/NoReset' */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void CtAp_DrvAsscCtrl_NoReset_hsrm(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Dr_fn1j_T *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S43>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S43>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S44>/Constant'
     *  Constant: '<S44>/Constant4'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S44>/Switch' */

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S44>/Constant5'
     *  RelationalOperator: '<S44>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      uint16_T u0;

      /* Sum: '<S45>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S45>/Sum' incorporates:
       *  UnitDelay: '<S45>/UnitDelay'
       */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S45>/MinMax' */
      if (u0 <= CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S45>/Sum' */
        CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S45>/MinMax' */
    } else {
      /* Sum: '<S45>/Sum' incorporates:
       *  Constant: '<S44>/Constant37'
       *  UnitDelay: '<S45>/UnitDelay'
       */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S44>/Switch8' incorporates:
     *  Constant: '<S44>/Constant6'
     *  Constant: '<S44>/DEBOUNCING'
     *  Constant: '<S44>/DEBOUNCING_F'
     *  RelationalOperator: '<S44>/Equal6'
     *  RelationalOperator: '<S45>/B_MiHold'
     *  Switch: '<S44>/Switch2'
     *  UnitDelay: '<S45>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
      /* Switch: '<S44>/Switch2' incorporates:
       *  Constant: '<S44>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)3U);
    }

    /* End of Switch: '<S44>/Switch8' */

    /* Switch: '<S44>/Switch6' incorporates:
     *  Constant: '<S44>/Constant30'
     *  RelationalOperator: '<S44>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S44>/Switch6' incorporates:
       *  Constant: '<S44>/Constant32'
       */
      ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo_Flg = true;
    }

    /* End of Switch: '<S44>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S43>/ErrorHandleSysU16' */
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Output and update for atomic system: '<S33>/NoEnableAndReset' */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void CtAp_DrvA_NoEnableAndReset_khyu(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndRese_plgt_T
  *CtAp_DrvAsscCtrl__ARID_DEF_arg)
{
  boolean_T rtb_Equal2_a1qk;

  /* Constant: '<S46>/True' */
  *rty_MonStat = true;

  /* Switch: '<S47>/Switch' incorporates:
   *  Constant: '<S47>/Constant'
   *  Constant: '<S47>/Constant4'
   */
  if (rtu_SetCondition) {
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S47>/Switch' */

  /* RelationalOperator: '<S47>/Equal2' incorporates:
   *  Constant: '<S47>/Constant5'
   */
  rtb_Equal2_a1qk = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S48>/Switch1' */
  if (rtb_Equal2_a1qk) {
    uint16_T u0;

    /* Sum: '<S48>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S48>/Sum' incorporates:
     *  UnitDelay: '<S48>/UnitDelay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S48>/MinMax' */
    if (u0 <= CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S48>/Sum' */
      CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S48>/MinMax' */
  } else {
    /* Sum: '<S48>/Sum' incorporates:
     *  Constant: '<S47>/Constant37'
     *  UnitDelay: '<S48>/UnitDelay'
     */
    CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S48>/Switch1' */

  /* RelationalOperator: '<S47>/Equal6' incorporates:
   *  Constant: '<S47>/Constant6'
   */
  rtb_Equal2_a1qk = (*rty_MonRes == ((uint8_T)2U));

  /* Switch: '<S47>/Switch8' incorporates:
   *  Constant: '<S47>/DEBOUNCING'
   *  Constant: '<S47>/DEBOUNCING_F'
   *  RelationalOperator: '<S48>/B_MiHold'
   *  Switch: '<S47>/Switch2'
   *  UnitDelay: '<S48>/UnitDelay'
   */
  if (rtb_Equal2_a1qk) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_DrvAsscCtrl__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
  {
    /* Switch: '<S47>/Switch2' incorporates:
     *  Constant: '<S47>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)3U);
  }

  /* End of Switch: '<S47>/Switch8' */

  /* RelationalOperator: '<S47>/Equal3' incorporates:
   *  Constant: '<S47>/Constant30'
   */
  rtb_Equal2_a1qk = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S47>/Switch6' */
  if (rtb_Equal2_a1qk) {
    /* Switch: '<S47>/Switch6' incorporates:
     *  Constant: '<S47>/Constant32'
     */
    ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltInfo_Flg = true;
  }

  /* End of Switch: '<S47>/Switch6' */
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DrvAsscCtrl_START_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

void R_DrvAsscCtrl_Cyclic_10ms(void)
{
  /* local block i/o variables */
  dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo
    ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus;
  dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo
    ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus;
  real32_T rtb_ChassisMgmt_IBSVlcReqMotTq_;
  real32_T rtb_Switch;
  real32_T ChassisMgmt_VirtAccrPedlPosn_pct;
  real32_T rtb_Switch_meni;
  real32_T rtb_Switch_jadk;
  real32_T rtb_ChassisMgmt_IBSApsReqMotTq_;
  real32_T rtb_Switch_obib;
  uint8_T rtb_ModMgmt_ActDrvMod_Enum;
  uint8_T rtb_Switch8;
  boolean_T rtb_ChassisMgmt_IBSApsCtrl_hqdy;
  boolean_T rtb_True;
  boolean_T rtb_ChassisMgmt_IBSVlcCtrl_b2u1;
  boolean_T rtb_True_n1ti;
  boolean_T ChassisMgmt_IBSVlcReqTqCmnActv_Flg;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_LogicalOperator1_nu1g;
  boolean_T rtb_RelationalOperator2_f3w4;
  boolean_T rtb_RelationalOperator1_ni5i;
  boolean_T rtb_LogOp2;
  boolean_T rtb_LogOp2_kvjn;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_hgpr;
  dt_ComM_IBSACCCRCInfo tmpRead_0;
  dt_ComM_IBSACCE2ETimeoutInfo tmpRead_1;
  dt_ComM_IBSTqCRCInfo tmpRead_5;
  dt_ComM_IBSTqE2ETimeoutInfo tmpRead_6;
  real32_T rtb_ChassisMgmt_IBSVlcReqMotT_0;
  real32_T tmpRead_2;
  real32_T tmpRead_8;
  real32_T tmpRead_h;
  real32_T tmpRead_l;
  real32_T tmpRead_m;
  uint8_T tmpRead;
  uint8_T tmpRead_3;
  uint8_T tmpRead_e;
  uint8_T tmpRead_g;
  boolean_T rtb_ChassisMgmt_IBSVlcReqTqCdn_;
  boolean_T tmpRead_4;
  boolean_T tmpRead_7;
  boolean_T tmpRead_9;
  boolean_T tmpRead_a;
  boolean_T tmpRead_b;
  boolean_T tmpRead_c;
  boolean_T tmpRead_d;
  boolean_T tmpRead_f;
  boolean_T tmpRead_i;
  boolean_T tmpRead_j;
  boolean_T tmpRead_k;

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
    (&tmpRead_m);

  /* SignalConversion: '<S4>/SignalCopy24' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&rtb_ModMgmt_ActDrvMod_Enum);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead_l);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_k);

  /* Inport: '<Root>/RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo' */
  (void)Rte_Read_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(&tmpRead_j);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_i);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&tmpRead_h);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_g);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_e);

  /* Inport: '<Root>/RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg' */
  (void)
    Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg' */
  (void)
    Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg
    (&rtb_ChassisMgmt_IBSVlcReqTqCdn_);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_DrvAsscCtrl_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S6>/APS_Req_Motor_Torque'
   *
   * Block requirements for '<S6>/APS_Req_Motor_Torque':
   *  1. SWREQ_01468 APS Motor Torque
   */
  /* Outputs for Atomic SubSystem: '<S6>/VLC_Req_Motor_Torque'
   *
   * Block requirements for '<S6>/VLC_Req_Motor_Torque':
   *  1. SWREQ_06018 VLC Motor Torque
   */
  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/ChassisMgmt_VehRednRat_CFG'
   *  Constant: '<S10>/ChassisMgmt_VehTrsmEff_CFG'
   *  Product: '<S7>/Product'
   */
  rtb_ChassisMgmt_IBSVlcReqMotT_0 = ChassisMgmt_VehRednRat_CFG *
    ChassisMgmt_VehTrsmEff_CFG;

  /* End of Outputs for SubSystem: '<S6>/APS_Req_Motor_Torque' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Product: '<S10>/Divide' incorporates:
   *  Product: '<S10>/Product'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  rtb_ChassisMgmt_IBSVlcReqMotTq_ = tmpRead_8 / rtb_ChassisMgmt_IBSVlcReqMotT_0;

  /* End of Outputs for SubSystem: '<S6>/VLC_Req_Motor_Torque' */

  /* Outputs for Atomic SubSystem: '<S6>/APS_Req_Motor_Torque'
   *
   * Block requirements for '<S6>/APS_Req_Motor_Torque':
   *  1. SWREQ_01468 APS Motor Torque
   */
  /* Product: '<S7>/Divide' incorporates:
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  rtb_ChassisMgmt_IBSApsReqMotTq_ = tmpRead_2 / rtb_ChassisMgmt_IBSVlcReqMotT_0;

  /* End of Outputs for SubSystem: '<S6>/APS_Req_Motor_Torque' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S6>/DriveAssistanceControl_SafetyMonitoring' */
  /* Outputs for Atomic SubSystem: '<S29>/ATOM_TimeCnt' */
  /* UnitDelay: '<S29>/OneDelay' incorporates:
   *  Constant: '<S29>/ChassisMgmt_IBSApsCtrlDesTqOverFltEnaTim_CFG'
   *  Constant: '<S29>/DrvAsscCtl_SAMPLE_TIME'
   *
   * Block requirements for '<S29>/ChassisMgmt_IBSApsCtrlDesTqOverFltEnaTim_CFG':
   *  1. SWREQ_01495 DTC P117405 Error mature time
   */
  rtb_DataTypeConversion = CtAp_DrvAsscCtrl_ATOM_TimeCnt
    (CtAp_DrvAsscCtrl_ARID_DEF.OneDelay_DSTATE, ((uint16_T)
      DrvAsscCtl_SAMPLE_TIME), ChassisMgmt_IBSApsCtrlDesTqOverFltEnaTim_CFG,
     &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S29>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S9>/VLC_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/VLC_Torque_Fault_DTC':
   *  1. SWREQ_01477 DTC P117305 Reset Conditon
   *  2. SWREQ_01478 DTC P117305 Enable Conditon
   *  3. SWREQ_01510 VLC torque over limit Limp-in action
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S29>/LogicalOperator1' incorporates:
   *  Logic: '<S32>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy25'
   */
  tmpRead_k = !tmpRead_k;

  /* End of Outputs for SubSystem: '<S9>/VLC_Torque_Fault_DTC' */

  /* Logic: '<S29>/LogicalOperator' incorporates:
   *  Logic: '<S29>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy17'
   */
  rtb_ChassisMgmt_IBSApsCtrl_hqdy = (rtb_DataTypeConversion && tmpRead_f &&
    tmpRead_k);

  /* Outputs for Atomic SubSystem: '<S9>/APS_Torque_Overfault_condition'
   *
   * Block requirements for '<S9>/APS_Torque_Overfault_condition':
   *  1. SWREQ_01489 DTC P117405 Set Conditon
   */
  /* Logic: '<S31>/LogicalOperator' incorporates:
   *  Constant: '<S31>/ChassisMgmt_IBSApsCtrlFwdMaxLmtTq_CFG'
   *  Constant: '<S31>/ChassisMgmt_IBSApsCtrlFwdMinLmtTq_CFG'
   *  Constant: '<S31>/ChassisMgmt_IBSApsCtrlRvsMaxLmtTq_CFG'
   *  Constant: '<S31>/ChassisMgmt_IBSApsCtrlRvsMinLmtTq_CFG'
   *  Constant: '<S31>/DrvAsscCtl_GEAR_D'
   *  Constant: '<S31>/DrvAsscCtl_GEAR_R'
   *  Logic: '<S31>/LogicalOperator1'
   *  Logic: '<S31>/LogicalOperator2'
   *  Logic: '<S31>/LogicalOperator3'
   *  Logic: '<S31>/LogicalOperator4'
   *  Logic: '<S31>/LogicalOperator5'
   *  RelationalOperator: '<S31>/Relational Operator1'
   *  RelationalOperator: '<S31>/RelationalOperator'
   *  RelationalOperator: '<S31>/RelationalOperator1'
   *  RelationalOperator: '<S31>/RelationalOperator2'
   *  RelationalOperator: '<S31>/RelationalOperator3'
   *  RelationalOperator: '<S31>/RelationalOperator4'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  ChassisMgmt_IBSApsCtrlDesTqOverFltActv_Flg = ((((tmpRead_e == ((uint8_T)
    DrvAsscCtl_GEAR_D)) && ((rtb_ChassisMgmt_IBSApsReqMotTq_ >
    ChassisMgmt_IBSApsCtrlFwdMaxLmtTq_CFG) || (rtb_ChassisMgmt_IBSApsReqMotTq_ <
    ChassisMgmt_IBSApsCtrlFwdMinLmtTq_CFG))) || ((tmpRead_e == ((uint8_T)
    DrvAsscCtl_GEAR_R)) && ((rtb_ChassisMgmt_IBSApsReqMotTq_ <
    ChassisMgmt_IBSApsCtrlRvsMinLmtTq_CFG) || (rtb_ChassisMgmt_IBSApsReqMotTq_ >
    ChassisMgmt_IBSApsCtrlRvsMaxLmtTq_CFG)))) && tmpRead_4);

  /* End of Outputs for SubSystem: '<S9>/APS_Torque_Overfault_condition' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S29>/NoReset' */
  /* Constant: '<S29>/ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S29>/DrvAsscCtl_SAMPLE_TIME1'
   */
  CtAp_DrvAsscCtrl_NoReset(rtb_ChassisMgmt_IBSApsCtrl_hqdy,
    ChassisMgmt_IBSApsCtrlDesTqOverFltActv_Flg,
    ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG, ((uint16_T)
    DrvAsscCtl_SAMPLE_TIME), &rtb_DataTypeConversion,
    &CtAp_DrvAsscCtrl_ARID_DEF.Switch_bx3a,
    &CtAp_DrvAsscCtrl_ARID_DEF.Switch8_h0jb,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_NoReset_cl54);

  /* End of Outputs for SubSystem: '<S29>/NoReset' */

  /* DataTypeConversion: '<S43>/DataTypeConversion' incorporates:
   *  SignalConversion: '<S29>/SignalCopy'
   */
  rtb_DataTypeConversion_hgpr =
    ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo_Flg;

  /* BusCreator: '<S9>/BusCreator4' */
  ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_MonStatIBSApsCtrlDesTqOverFltDTCInfo
    = rtb_DataTypeConversion;
  ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_MonResIBSApsCtrlDesTqOverFltDTCInfo
    = CtAp_DrvAsscCtrl_ARID_DEF.Switch_bx3a;
  ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_ErrStatIBSApsCtrlDesTqOverFltDTCInfo
    = CtAp_DrvAsscCtrl_ARID_DEF.Switch8_h0jb;
  ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo
    = rtb_DataTypeConversion_hgpr;

  /* Outputs for Atomic SubSystem: '<S30>/NoEnableAndReset' */
  /* Constant: '<S30>/ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S30>/DrvAsscCtl_SAMPLE_TIME'
   *
   * Block requirements for '<S30>/ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG':
   *  1. SWREQ_01521 APS torque over limit Error mature time
   */
  CtAp_DrvAsscCt_NoEnableAndReset(ChassisMgmt_IBSApsCtrlDesTqOverFltActv_Flg,
    ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG, ((uint16_T)
    DrvAsscCtl_SAMPLE_TIME), &rtb_True_n1ti, &rtb_Switch8, &rtb_Switch8,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_NoEnableAndReset_mbvz);

  /* End of Outputs for SubSystem: '<S30>/NoEnableAndReset' */

  /* Outputs for Atomic SubSystem: '<S9>/VLC_Torque_Overfault_condition'
   *
   * Block requirements for '<S9>/VLC_Torque_Overfault_condition':
   *  1. SWREQ_01476 DTC P117305 Set Conditon
   *  2. SWREQ_01502 VLC torque over limit Set Conditon
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Switch: '<S28>/Switch' incorporates:
   *  Abs: '<S34>/Abs'
   *  Lookup_n-D: '<S34>/ChassisMgmt_IBSVlcCtrlMaxLmtTq_LUT'
   *  SignalConversion: '<S4>/SignalCopy19'
   */
  rtb_Switch_obib = fabsf(tmpRead_h);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */
  rtb_Switch_obib = look1_iflf_binlca(rtb_Switch_obib,
    &ChassisMgmt_IBSVlcCtrlMaxLmtTqX_LUT[0],
    &ChassisMgmt_IBSVlcCtrlMaxLmtTq_LUT[0], 3U);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S34>/LogicalOperator' incorporates:
   *  Constant: '<S34>/ChassisMgmt_IBSVlcCtrlMinLmtTq_CFG'
   *  Logic: '<S34>/LogicalOperator1'
   *  RelationalOperator: '<S34>/RelationalOperator'
   *  RelationalOperator: '<S34>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  ChassisMgmt_IBSVlcCtrlDesTqOverFltActv_Flg = (tmpRead_7 &&
    ((rtb_ChassisMgmt_IBSVlcReqMotTq_ > rtb_Switch_obib) ||
     (rtb_ChassisMgmt_IBSVlcReqMotTq_ < ChassisMgmt_IBSVlcCtrlMinLmtTq_CFG)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */
  /* End of Outputs for SubSystem: '<S9>/VLC_Torque_Overfault_condition' */

  /* Outputs for Atomic SubSystem: '<S9>/VLC_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/VLC_Torque_Fault_DTC':
   *  1. SWREQ_01477 DTC P117305 Reset Conditon
   *  2. SWREQ_01478 DTC P117305 Enable Conditon
   *  3. SWREQ_01510 VLC torque over limit Limp-in action
   */
  /* Outputs for Atomic SubSystem: '<S32>/ATOM_TimeCnt' */
  /* UnitDelay: '<S32>/OneDelay1' incorporates:
   *  Constant: '<S32>/ChassisMgmt_IBSVlcCtrlDesTqOverFltEnaTim_CFG'
   *  Constant: '<S32>/DrvAsscCtl_SAMPLE_TIME'
   *
   * Block requirements for '<S32>/ChassisMgmt_IBSVlcCtrlDesTqOverFltEnaTim_CFG':
   *  1. SWREQ_01508 VLC torque over limit Error mature time
   */
  rtb_DataTypeConversion_hgpr = CtAp_DrvAsscCtrl_ATOM_TimeCnt
    (CtAp_DrvAsscCtrl_ARID_DEF.OneDelay1_DSTATE, ((uint16_T)
      DrvAsscCtl_SAMPLE_TIME), ChassisMgmt_IBSVlcCtrlDesTqOverFltEnaTim_CFG,
     &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S32>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S32>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy17'
   */
  rtb_ChassisMgmt_IBSVlcCtrl_b2u1 = (rtb_DataTypeConversion_hgpr && tmpRead_f &&
    tmpRead_k);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S32>/NoReset' */
  /* Constant: '<S32>/ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S32>/DrvAsscCtl_SAMPLE_TIME1'
   *
   * Block requirements for '<S32>/ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG':
   *  1. SWREQ_01482 DTC P117305 Error mature time
   */
  CtAp_DrvAsscCtrl_NoReset_hsrm(rtb_ChassisMgmt_IBSVlcCtrl_b2u1,
    ChassisMgmt_IBSVlcCtrlDesTqOverFltActv_Flg,
    ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG, ((uint16_T)
    DrvAsscCtl_SAMPLE_TIME), &rtb_DataTypeConversion_hgpr,
    &CtAp_DrvAsscCtrl_ARID_DEF.Switch, &CtAp_DrvAsscCtrl_ARID_DEF.Switch8,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_NoReset);

  /* End of Outputs for SubSystem: '<S32>/NoReset' */

  /* DataTypeConversion: '<S32>/Data Type Conversion1' */
  ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo
    = ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo_Flg;

  /* Update for UnitDelay: '<S32>/OneDelay1' incorporates:
   *  Constant: '<S32>/DrvAsscCtl_ACTIVE'
   */
  CtAp_DrvAsscCtrl_ARID_DEF.OneDelay1_DSTATE = DrvAsscCtl_ACTIVE;

  /* End of Outputs for SubSystem: '<S9>/VLC_Torque_Fault_DTC' */

  /* BusCreator: '<S9>/BusCreator2' */
  ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_MonStatIBSVlcCtrlDesTqOverFltDTCInfo
    = rtb_DataTypeConversion_hgpr;
  ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_MonResIBSVlcCtrlDesTqOverFltDTCInfo
    = CtAp_DrvAsscCtrl_ARID_DEF.Switch;
  ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus.ChassisMgmt_ErrStatIBSVlcCtrlDesTqOverFltDTCInfo
    = CtAp_DrvAsscCtrl_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<S9>/VLC_Torque_Fault_FUSA'
   *
   * Block requirements for '<S9>/VLC_Torque_Fault_FUSA':
   *  1. SWREQ_01503 VLC torque over limit Reset Conditon
   *  2. SWREQ_01502 VLC torque over limit Set Conditon
   */
  /* Outputs for Atomic SubSystem: '<S33>/NoEnableAndReset' */
  /* Constant: '<S33>/ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S33>/DrvAsscCtl_SAMPLE_TIME'
   */
  CtAp_DrvA_NoEnableAndReset_khyu(ChassisMgmt_IBSVlcCtrlDesTqOverFltActv_Flg,
    ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG, ((uint16_T)
    DrvAsscCtl_SAMPLE_TIME), &rtb_True, &rtb_Switch8, &rtb_Switch8,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_NoEnableAndReset);

  /* End of Outputs for SubSystem: '<S33>/NoEnableAndReset' */
  /* End of Outputs for SubSystem: '<S9>/VLC_Torque_Fault_FUSA' */

  /* Update for UnitDelay: '<S29>/OneDelay' incorporates:
   *  Constant: '<S29>/DrvAsscCtl_ACTIVE'
   */
  CtAp_DrvAsscCtrl_ARID_DEF.OneDelay_DSTATE = DrvAsscCtl_ACTIVE;

  /* End of Outputs for SubSystem: '<S6>/DriveAssistanceControl_SafetyMonitoring' */

  /* Outputs for Atomic SubSystem: '<S6>/DriveAssistanceControl' */
  /* Outputs for Atomic SubSystem: '<S8>/DriveAssistanceControlCommonConditionStatus'
   *
   * Block requirements for '<S8>/DriveAssistanceControlCommonConditionStatus':
   *  1. SWREQ_05660 Drive Assistance Control Common Condition Active Status
   *  2. SWREQ_05661 Drive Assistance Control Common Condition Inactive Status
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S11>/LogicalOperator' incorporates:
   *  Constant: '<S11>/DrvAsscCtl_DRIVEREADY '
   *  Constant: '<S11>/DrvAsscCtl_INVALID'
   *  Logic: '<S11>/LogicalOperator1'
   *  Logic: '<S11>/LogicalOperator2'
   *  Logic: '<S11>/LogicalOperator3'
   *  Logic: '<S11>/LogicalOperator4'
   *  Logic: '<S11>/LogicalOperator5'
   *  RelationalOperator: '<S11>/RelationalOperator'
   *  RelationalOperator: '<S11>/RelationalOperator2'
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy11'
   *  SignalConversion: '<S4>/SignalCopy12'
   *  SignalConversion: '<S4>/SignalCopy13'
   *  SignalConversion: '<S4>/SignalCopy14'
   *  SignalConversion: '<S4>/SignalCopy15'
   *  SignalConversion: '<S4>/SignalCopy18'
   */
  ChassisMgmt_DrvAsscCtrlCmnAvl_Flg = ((tmpRead_g == ((uint8_T)
    DrvAsscCtl_DRIVEREADY)) && (tmpRead != ((uint8_T)DrvAsscCtl_INVALID)) &&
    !tmpRead_c && !tmpRead_d && !tmpRead_b && !tmpRead_9 && !tmpRead_a);

  /* End of Outputs for SubSystem: '<S8>/DriveAssistanceControlCommonConditionStatus' */

  /* Outputs for Atomic SubSystem: '<S8>/DriveAssistanceControl_APS' */
  /* Outputs for Atomic SubSystem: '<S12>/DriveAssistanceControl_APS_Status'
   *
   * Block requirements for '<S12>/DriveAssistanceControl_APS_Status':
   *  1. SWREQ_01464 APS available
   *  2. SWREQ_01465 APS available
   */
  /* Logic: '<S14>/LogicalOperator' incorporates:
   *  Constant: '<S14>/DrvAsscCtl_GEAR_D'
   *  Constant: '<S14>/DrvAsscCtl_GEAR_R'
   *  Logic: '<S14>/LogicalOperator1'
   *  Logic: '<S14>/LogicalOperator2'
   *  Logic: '<S14>/LogicalOperator3'
   *  Logic: '<S14>/LogicalOperator4'
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  RelationalOperator: '<S14>/RelationalOperator2'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  SignalConversion generated from: '<S4>/BusSelector7'
   *  SignalConversion generated from: '<S4>/BusSelector8'
   */
  ChassisMgmt_IBSApsReqTqAvl_Flg = (ChassisMgmt_DrvAsscCtrlCmnAvl_Flg &&
    ((tmpRead_e == ((uint8_T)DrvAsscCtl_GEAR_D)) || (tmpRead_e == ((uint8_T)
    DrvAsscCtl_GEAR_R))) && !ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltInfo_Flg &&
    !tmpRead_5.ComM_ErrResIBSTqCRCErrorInfo &&
    !tmpRead_6.ComM_ErrResIBSTqE2ETimeoutInfo);

  /* End of Outputs for SubSystem: '<S12>/DriveAssistanceControl_APS_Status' */

  /* Outputs for Atomic SubSystem: '<S12>/DriveAssistanceControl_APS_Torque'
   *
   * Block requirements for '<S12>/DriveAssistanceControl_APS_Torque':
   *  1. SWREQ_01466 APS active torque
   *  2. SWREQ_01467 APS  inactive toruqe
   *  3. SWREQ_01469 APS Motor Torque Limit
   */
  /* Logic: '<S15>/LogicalOperator' incorporates:
   *  Constant: '<S15>/DrvAsscCtl_VALID'
   *  RelationalOperator: '<S15>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  ChassisMgmt_IBSApsReqTqActv_Flg = (ChassisMgmt_IBSApsReqTqAvl_Flg && tmpRead_4
    && (tmpRead_3 == ((uint8_T)DrvAsscCtl_VALID)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S15>/If' */
  /* Constant: '<S15>/DrvAsscCtl_ZERO_TORQUE' */
  rtb_Switch_jadk = CtAp_DrvAsscCtrl_If(ChassisMgmt_IBSApsReqTqActv_Flg,
    rtb_ChassisMgmt_IBSApsReqMotTq_, DrvAsscCtl_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S15>/If' */

  /* SignalConversion generated from: '<S15>/If' */
  ChassisMgmt_IBSApsDesTq_Nm = rtb_Switch_jadk;

  /* End of Outputs for SubSystem: '<S12>/DriveAssistanceControl_APS_Torque' */
  /* End of Outputs for SubSystem: '<S8>/DriveAssistanceControl_APS' */

  /* Outputs for Atomic SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* Outputs for Atomic SubSystem: '<S13>/DriveAssistanceControl_VLC_Status'
   *
   * Block requirements for '<S13>/DriveAssistanceControl_VLC_Status':
   *  1. SWREQ_01460 VLC Avaiable Active
   *  2. SWREQ_01461 VLC Avaiable Inactive
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S17>/LogicalOperator' incorporates:
   *  Constant: '<S17>/DrvAsscCtl_GEAR_D'
   *  Logic: '<S17>/LogicalOperator1'
   *  Logic: '<S17>/LogicalOperator2'
   *  Logic: '<S17>/LogicalOperator3'
   *  RelationalOperator: '<S17>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  SignalConversion generated from: '<S4>/BusSelector1'
   *  SignalConversion generated from: '<S4>/BusSelector2'
   */
  ChassisMgmt_IBSVlcReqTqAvl_Flg = (ChassisMgmt_DrvAsscCtrlCmnAvl_Flg &&
    (tmpRead_e == ((uint8_T)DrvAsscCtl_GEAR_D)) &&
    !ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltInfo_Flg &&
    !tmpRead_0.ComM_ErrResIBSACCCRCErrorInfo &&
    !tmpRead_1.ComM_ErrResIBSACCE2ETimeoutInfo);

  /* End of Outputs for SubSystem: '<S13>/DriveAssistanceControl_VLC_Status' */

  /* Outputs for Atomic SubSystem: '<S13>/VLC_CDD_Common_Condition'
   *
   * Block requirements for '<S13>/VLC_CDD_Common_Condition':
   *  1. SWREQ_06016 VLC/CDD Common Conditon Active
   *  2. SWREQ_06017 VLC/CDD Common Conditon Inactive
   */
  /* Logic: '<S19>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy20'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  ChassisMgmt_IBSVlcReqTqCmnActv_Flg = (ChassisMgmt_IBSVlcReqTqAvl_Flg &&
    tmpRead_7 && tmpRead_i);

  /* End of Outputs for SubSystem: '<S13>/VLC_CDD_Common_Condition' */

  /* Outputs for Atomic SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */
  /* Logic: '<S21>/LogicalOperator10' incorporates:
   *  Constant: '<S21>/ChassisMgmt_IBSCddAccrPedlPosnOvrdOff_CFG'
   *  Constant: '<S21>/ChassisMgmt_IBSCddAccrPedlTqOvrdOff_CFG'
   *  RelationalOperator: '<S21>/RelationalOperator2'
   *  RelationalOperator: '<S21>/RelationalOperator6'
   *  SignalConversion: '<S4>/SignalCopy23'
   *  SignalConversion: '<S4>/SignalCopy26'
   */
  rtb_LogicalOperator10 = ((tmpRead_l < ChassisMgmt_IBSCddAccrPedlTqOvrdOff_CFG)
    || (tmpRead_m < ChassisMgmt_IBSCddAccrPedlPosnOvrdOff_CFG));

  /* Logic: '<S21>/LogicalOperator1' incorporates:
   *  Constant: '<S21>/ChassisMgmt_IBSCddAccrPedlPosnOvrdOn_CFG'
   *  Constant: '<S21>/ChassisMgmt_IBSCddAccrPedlTqOvrdOn_CFG'
   *  RelationalOperator: '<S21>/RelationalOperator1'
   *  RelationalOperator: '<S21>/RelationalOperator4'
   *  SignalConversion: '<S4>/SignalCopy23'
   *  SignalConversion: '<S4>/SignalCopy26'
   */
  rtb_LogicalOperator1_nu1g = ((tmpRead_m >=
    ChassisMgmt_IBSCddAccrPedlPosnOvrdOn_CFG) && (tmpRead_l >=
    ChassisMgmt_IBSCddAccrPedlTqOvrdOn_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_RS_FF1' */
  rtb_LogOp2_kvjn = CtAp_DrvAsscCtrl_ATOM_RS_FF(rtb_LogicalOperator10,
    rtb_LogicalOperator1_nu1g, &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF1);

  /* End of Outputs for SubSystem: '<S21>/ATOM_RS_FF1' */

  /* Outputs for Atomic SubSystem: '<S18>/VLC_TorqueActiveStatus'
   *
   * Block requirements for '<S18>/VLC_TorqueActiveStatus':
   *  1. SWREQ_01462 VLC torque request Active
   *  2. SWREQ_01463 VLC torque request InActive
   *  3. SWREQ_01470 VLC Motor Torque Limit
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S24>/LogicalOperator2' incorporates:
   *  SignalConversion: '<S4>/SignalCopy10'
   */
  rtb_ChassisMgmt_IBSVlcReqTqCdn_ = (ChassisMgmt_IBSVlcReqTqCmnActv_Flg &&
    rtb_ChassisMgmt_IBSVlcReqTqCdn_);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Logic: '<S24>/LogicalOperator1' incorporates:
   *  Logic: '<S24>/LogicalOperator'
   *  UnitDelay: '<S13>/OneDelay'
   */
  ChassisMgmt_IBSVlcReqTqActv_Flg = (rtb_ChassisMgmt_IBSVlcReqTqCdn_ &&
    !CtAp_DrvAsscCtrl_ARID_DEF.OneDelay_DSTATE_bk00);

  /* Outputs for Atomic SubSystem: '<S24>/If' */
  /* Constant: '<S24>/DrvAsscCtl_ZERO_TORQUE' */
  rtb_Switch_meni = CtAp_DrvAsscCtrl_If(ChassisMgmt_IBSVlcReqTqActv_Flg,
    rtb_ChassisMgmt_IBSVlcReqMotTq_, DrvAsscCtl_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S24>/If' */

  /* SignalConversion generated from: '<S24>/If' */
  ChassisMgmt_IBSVlcDesTq_Nm = rtb_Switch_meni;

  /* End of Outputs for SubSystem: '<S18>/VLC_TorqueActiveStatus' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* RelationalOperator: '<S23>/RelationalOperator2' incorporates:
   *  Constant: '<S23>/ChassisMgmt_IBSVlcAccrPedlTqOvrdOffThd_CFG'
   *  SignalConversion: '<S4>/SignalCopy23'
   *  Sum: '<S23>/Subtract'
   */
  rtb_RelationalOperator2_f3w4 = (tmpRead_l < (rtb_ChassisMgmt_IBSVlcReqMotTq_ -
    ChassisMgmt_IBSVlcAccrPedlTqOvrdOffThd_CFG));

  /* RelationalOperator: '<S23>/RelationalOperator1' incorporates:
   *  Constant: '<S23>/ChassisMgmt_IBSVlcAccrPedlTqOvrdOnThd_CFG'
   *  SignalConversion: '<S4>/SignalCopy23'
   *  Sum: '<S23>/Add'
   */
  rtb_RelationalOperator1_ni5i = (tmpRead_l >= (rtb_ChassisMgmt_IBSVlcReqMotTq_
    + ChassisMgmt_IBSVlcAccrPedlTqOvrdOnThd_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */

  /* Outputs for Atomic SubSystem: '<S23>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_DrvAsscCtrl_ATOM_RS_FF(rtb_RelationalOperator2_f3w4,
    rtb_RelationalOperator1_ni5i, &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S23>/ATOM_RS_FF' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Logic: '<S23>/LogicalOperator1' incorporates:
   *  Constant: '<S23>/ChassisMgmt_IBSVlcAccrPedlPosnOvrdOff_CFG'
   *  RelationalOperator: '<S23>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy26'
   *  UnitDelay: '<S13>/OneDelay'
   */
  CtAp_DrvAsscCtrl_ARID_DEF.OneDelay_DSTATE_bk00 =
    (rtb_ChassisMgmt_IBSVlcReqTqCdn_ && (tmpRead_m >=
      ChassisMgmt_IBSVlcAccrPedlPosnOvrdOn_CFG) && rtb_LogOp2);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */
  /* End of Outputs for SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */

  /* Outputs for Atomic SubSystem: '<S13>/VirtualPedal '
   *
   * Block requirements for '<S13>/VirtualPedal ':
   *  1. SWREQ_05888 VLC Virtual Pedal
   *  2. SWREQ_05889 VLC Virtual Pedal
   */
  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/ChassisMgmt_VirtAccrPedlPosnSw_CFG'
   */
  if (ChassisMgmt_VirtAccrPedlPosnSw_CFG) {
    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/ChassisMgmt_DrvAsscModMotMaxTq_CFG1'
     *  Constant: '<S20>/DrvAsscCtl_NUM2PERCENT'
     *  Product: '<S20>/Divide1'
     *  Product: '<S20>/Product'
     */
    rtb_Switch = (rtb_ChassisMgmt_IBSVlcReqMotTq_ /
                  ChassisMgmt_DrvAsscModMotMaxTq_CFG) * DrvAsscCtl_NUM2PERCENT;
  } else {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
     *
     * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
     *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
     */
    /* Switch: '<S20>/Switch' incorporates:
     *  Lookup_n-D: '<S20>/2D_LookupTable'
     *  Product: '<S10>/Divide'
     *  SignalConversion: '<S4>/SignalCopy19'
     */
    rtb_Switch = look2_iflf_binlca(rtb_ChassisMgmt_IBSVlcReqMotTq_, tmpRead_h,
      &ChassisMgmt_VirtAccrPedlPosnX_MAP[0], &ChassisMgmt_VirtAccrPedlPosnY_MAP
      [0], &ChassisMgmt_VirtAccrPedlPosn_MAP[0],
      CtAp_DrvAsscCtrl_ConstP.uD_LookupTable_maxIndex, 11U);

    /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */
  }

  /* End of Switch: '<S20>/Switch' */

  /* Outputs for Atomic SubSystem: '<S20>/If' */
  /* Constant: '<S20>/ChassisMgmt_MaxVirtAccrPedlPosn_CFG' */
  rtb_Switch_obib = CtAp_DrvAsscCtrl_If(ChassisMgmt_IBSVlcReqTqActv_Flg,
    rtb_Switch, ChassisMgmt_MinVirtAccrPedlPosn_CFG);

  /* End of Outputs for SubSystem: '<S20>/If' */

  /* Saturate: '<S20>/Saturation' */
  ChassisMgmt_VirtAccrPedlPosn_pct = rtb_Switch_obib;
  if (ChassisMgmt_VirtAccrPedlPosn_pct > ChassisMgmt_MaxVirtAccrPedlPosn_CFG) {
    /* Saturate: '<S20>/Saturation' */
    ChassisMgmt_VirtAccrPedlPosn_pct = ChassisMgmt_MaxVirtAccrPedlPosn_CFG;
  } else if (ChassisMgmt_VirtAccrPedlPosn_pct <
             ChassisMgmt_MinVirtAccrPedlPosn_CFG) {
    /* Saturate: '<S20>/Saturation' */
    ChassisMgmt_VirtAccrPedlPosn_pct = ChassisMgmt_MinVirtAccrPedlPosn_CFG;
  } else {
    /* no actions */
  }

  /* End of Saturate: '<S20>/Saturation' */
  /* End of Outputs for SubSystem: '<S13>/VirtualPedal ' */
  /* End of Outputs for SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* End of Outputs for SubSystem: '<S6>/DriveAssistanceControl' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Output':
   *  1. SWREQ_01456 The function of "Drive assist Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  CtAp_DrvAsscCtrl_ARID_DEF.RTE_P_ChassisMgmt_IBSApsCtrlDes =
    ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
    (ChassisMgmt_IBSApsReqTqActv_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg
    (ChassisMgmt_IBSApsReqTqAvl_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  CtAp_DrvAsscCtrl_ARID_DEF.RTE_P_ChassisMgmt_IBSVlcCtrlDes =
    ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
    (ChassisMgmt_IBSVlcReqTqActv_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg
    (ChassisMgmt_IBSVlcReqTqAvl_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo
    (ChassisMgmt_VirtAccrPedlPosn_pct);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Output' */

  /* Outputs for Atomic SubSystem: '<S6>/DriveAssistanceControl' */
  /* Outputs for Atomic SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* Outputs for Atomic SubSystem: '<S13>/VirtualPedal '
   *
   * Block requirements for '<S13>/VirtualPedal ':
   *  1. SWREQ_05888 VLC Virtual Pedal
   *  2. SWREQ_05889 VLC Virtual Pedal
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo' incorporates:
   *  SignalConversion: '<S20>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo
    (ChassisMgmt_IBSVlcReqTqActv_Flg);

  /* End of Outputs for SubSystem: '<S13>/VirtualPedal ' */

  /* Outputs for Atomic SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */
  /* Outputs for Atomic SubSystem: '<S18>/OverrideStatus'
   *
   * Block requirements for '<S18>/OverrideStatus':
   *  1. SWREQ_06024 ADAS Torque Override On
   *  2. SWREQ_06025 ADAS Torque Override Off
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
   *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg' incorporates:
   *  Logic: '<S21>/LogicalOperator8'
   *  Logic: '<S22>/LogicalOperator'
   *  SignalConversion: '<S4>/SignalCopy22'
   *  UnitDelay: '<S13>/OneDelay'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg
    (CtAp_DrvAsscCtrl_ARID_DEF.OneDelay_DSTATE_bk00 ||
     (ChassisMgmt_IBSVlcReqTqCmnActv_Flg && tmpRead_j && rtb_LogOp2_kvjn));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Input' */
  /* End of Outputs for SubSystem: '<S18>/OverrideStatus' */
  /* End of Outputs for SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */
  /* End of Outputs for SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* End of Outputs for SubSystem: '<S6>/DriveAssistanceControl' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvAsscCtrl_Output'
   *
   * Block requirements for '<S2>/CtAp_DrvAsscCtrl_Output':
   *  1. SWREQ_01456 The function of "Drive assist Control" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm
    (ChassisMgmt_IBSApsDesTq_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm
    (ChassisMgmt_IBSVlcDesTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvAsscCtrl_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_DrvAsscCtrl_Cyclic_10ms_sys' */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus
    (&CtAp_DrvAsscCtrl_ARID_DEF.RTE_P_ChassisMgmt_IBSApsCtrlDes);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus
    (&CtAp_DrvAsscCtrl_ARID_DEF.RTE_P_ChassisMgmt_IBSVlcCtrlDes);
}

#define CtAp_DrvAsscCtrl_STOP_SEC_CODE
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_CONST_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

void R_DrvAsscCtrl_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_IBSVlcDesTq_Nm = 0.0F;
  ChassisMgmt_IBSApsDesTq_Nm = 0.0F;
  ChassisMgmt_IBSVlcCtrlDesTqOverFltActv_Flg = false;
  ChassisMgmt_IBSApsCtrlDesTqOverFltActv_Flg = false;
  ChassisMgmt_IBSVlcReqTqActv_Flg = false;
  ChassisMgmt_IBSVlcReqTqAvl_Flg = false;
  ChassisMgmt_IBSApsReqTqActv_Flg = false;
  ChassisMgmt_IBSApsReqTqAvl_Flg = false;
  ChassisMgmt_DrvAsscCtrlCmnAvl_Flg = false;
  ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo_Flg = false;
  ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_DrvAsscCtrl_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_DrvAsscCtrl_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_DrvAsscCtrl_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/DriveAssistanceControl' */
  /* SystemInitialize for Atomic SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* SystemInitialize for Atomic SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */
  /* SystemInitialize for Atomic SubSystem: '<S21>/ATOM_RS_FF1' */
  CtAp_DrvAsscCtr_ATOM_RS_FF_Init(false,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF1);

  /* End of SystemInitialize for SubSystem: '<S21>/ATOM_RS_FF1' */

  /* SystemInitialize for Atomic SubSystem: '<S23>/ATOM_RS_FF' */
  CtAp_DrvAsscCtr_ATOM_RS_FF_Init(false,
    &CtAp_DrvAsscCtrl_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S23>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S13>/DriveAssistanceControl_VLC_Torque' */
  /* End of SystemInitialize for SubSystem: '<S8>/DriveAssistanceControl_VLC' */
  /* End of SystemInitialize for SubSystem: '<S6>/DriveAssistanceControl' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_DrvAsscCtrl_Cyclic_10ms_sys' */
}

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
