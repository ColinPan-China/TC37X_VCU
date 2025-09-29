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
 *  Filename:           CtAp_FctSftyTorq.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyTorq.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyTorq_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "look1_iflf_binlca.h"
#include "look2_iflf_binlca.h"
#include "look2_iflf_linlca.h"
#include "CtAp_FctSftyTorq_Glb.h"
#include "CtAp_FctSftyTorq_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_FctSftyTorq_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"

ARID_DEF_CtAp_FctSftyTorq_T CtAp_FctSftyTorq_ARID_DEF;

#define CtAp_FctSftyTorq_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S12>/ATOM_TimeCnt'
 *    '<S22>/ATOM_TimeCnt'
 *    '<S31>/ATOM_TimeCnt'
 */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

boolean_T CtAp_FctSftyTorq_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T
  *CtAp_FctSftyTorq__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S14>/Add1' incorporates:
   *  DataTypeConversion: '<S14>/Data Type Conversion'
   *  DataTypeConversion: '<S14>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S14>/Switch' */
  if (rtu_In) {
    /* Sum: '<S14>/Add' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     *  UnitDelay: '<S14>/Delay'
     */
    CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S14>/Min' */
    if (rtb_Add1 <= CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S14>/Add' */
      CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S14>/Min' */
  } else {
    /* Sum: '<S14>/Add' incorporates:
     *  Constant: '<S14>/Constant'
     *  UnitDelay: '<S14>/Delay'
     */
    CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S14>/Relational Operator' incorporates:
   *  UnitDelay: '<S14>/Delay'
   */
  return CtAp_FctSftyTorq__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/* Output and update for atomic system: '<S12>/NoReset' */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

void CtAp_FctSftyTorq_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoReset_CtAp_FctSfty_T *CtAp_FctSftyTorq__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S15>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S15>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S16>/Constant4'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S16>/Switch' */

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S16>/Constant5'
     *  RelationalOperator: '<S16>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      uint16_T u0;

      /* Sum: '<S17>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S17>/Sum' incorporates:
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S17>/MinMax' */
      if (u0 <= CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S17>/Sum' */
        CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S17>/MinMax' */
    } else {
      /* Sum: '<S17>/Sum' incorporates:
       *  Constant: '<S16>/Constant37'
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S16>/Switch8' incorporates:
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S16>/DEBOUNCING'
     *  Constant: '<S16>/DEBOUNCING_F'
     *  RelationalOperator: '<S16>/Equal6'
     *  RelationalOperator: '<S17>/B_MiHold'
     *  Switch: '<S16>/Switch2'
     *  UnitDelay: '<S17>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
      /* Switch: '<S16>/Switch2' incorporates:
       *  Constant: '<S16>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)3U);
    }

    /* End of Switch: '<S16>/Switch8' */

    /* Switch: '<S16>/Switch6' incorporates:
     *  Constant: '<S16>/Constant30'
     *  Constant: '<S16>/Constant32'
     *  Delay: '<S16>/Delay1'
     *  RelationalOperator: '<S16>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else {
      *rty_ErrorRes = CtAp_FctSftyTorq__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S16>/Switch6' */

    /* Update for Delay: '<S16>/Delay1' */
    CtAp_FctSftyTorq__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S15>/ErrorHandleSysU16' */
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S13>/NoEnableAndReset'
 *    '<S23>/NoEnableAndReset'
 *    '<S32>/NoEnableAndReset'
 */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

void CtAp_FctSftyTo_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_FctSftyTorq__ARID_DEF_arg)
{
  boolean_T rtb_Equal2_ox3m;

  /* Constant: '<S18>/True' */
  *rty_MonStat = true;

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant4'
   */
  if (rtu_SetCondition) {
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S19>/Switch' */

  /* RelationalOperator: '<S19>/Equal2' incorporates:
   *  Constant: '<S19>/Constant5'
   */
  rtb_Equal2_ox3m = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S20>/Switch1' */
  if (rtb_Equal2_ox3m) {
    uint16_T u0;

    /* Sum: '<S20>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S20>/Sum' incorporates:
     *  UnitDelay: '<S20>/UnitDelay'
     */
    CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S20>/MinMax' */
    if (u0 <= CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S20>/Sum' */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S20>/MinMax' */
  } else {
    /* Sum: '<S20>/Sum' incorporates:
     *  Constant: '<S19>/Constant37'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S20>/Switch1' */

  /* RelationalOperator: '<S19>/Equal6' incorporates:
   *  Constant: '<S19>/Constant6'
   */
  rtb_Equal2_ox3m = (*rty_MonRes == ((uint8_T)2U));

  /* Switch: '<S19>/Switch8' incorporates:
   *  Constant: '<S19>/DEBOUNCING'
   *  Constant: '<S19>/DEBOUNCING_F'
   *  RelationalOperator: '<S20>/B_MiHold'
   *  Switch: '<S19>/Switch2'
   *  UnitDelay: '<S20>/UnitDelay'
   */
  if (rtb_Equal2_ox3m) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
  {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)3U);
  }

  /* End of Switch: '<S19>/Switch8' */

  /* RelationalOperator: '<S19>/Equal3' incorporates:
   *  Constant: '<S19>/Constant30'
   */
  rtb_Equal2_ox3m = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S19>/Switch6' incorporates:
   *  Constant: '<S19>/Constant32'
   *  Delay: '<S19>/Delay1'
   */
  if (rtb_Equal2_ox3m) {
    *rty_ErrorRes = true;
  } else {
    *rty_ErrorRes = CtAp_FctSftyTorq__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S19>/Switch6' */

  /* Update for Delay: '<S19>/Delay1' */
  CtAp_FctSftyTorq__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/* Output and update for atomic system: '<S22>/NoReset' */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

void CtAp_FctSftyTorq_NoReset_e10u(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Fc_nsaz_T *CtAp_FctSftyTorq__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S25>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S25>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S26>/Constant4'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S26>/Switch' */

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S26>/Constant5'
     *  RelationalOperator: '<S26>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      uint16_T u0;

      /* Sum: '<S27>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S27>/Sum' incorporates:
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S27>/MinMax' */
      if (u0 <= CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S27>/Sum' */
        CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S27>/MinMax' */
    } else {
      /* Sum: '<S27>/Sum' incorporates:
       *  Constant: '<S26>/Constant37'
       *  UnitDelay: '<S27>/UnitDelay'
       */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S27>/Switch1' */

    /* Switch: '<S26>/Switch8' incorporates:
     *  Constant: '<S26>/Constant6'
     *  Constant: '<S26>/DEBOUNCING'
     *  Constant: '<S26>/DEBOUNCING_F'
     *  RelationalOperator: '<S26>/Equal6'
     *  RelationalOperator: '<S27>/B_MiHold'
     *  Switch: '<S26>/Switch2'
     *  UnitDelay: '<S27>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
    {
      /* Switch: '<S26>/Switch2' incorporates:
       *  Constant: '<S26>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)3U);
    }

    /* End of Switch: '<S26>/Switch8' */

    /* Switch: '<S26>/Switch6' incorporates:
     *  Constant: '<S26>/Constant30'
     *  RelationalOperator: '<S26>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S26>/Switch6' incorporates:
       *  Constant: '<S26>/Constant32'
       */
      FctSftyMon_ErrResDesVehDecelSpdOverFltInfo_Flg = true;
    }

    /* End of Switch: '<S26>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S25>/ErrorHandleSysU16' */
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/* Output and update for atomic system: '<S31>/NoReset' */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

void CtAp_FctSftyTorq_NoReset_gcck(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_Fc_a3io_T *CtAp_FctSftyTorq__ARID_DEF_arg)
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
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S38>/MinMax' */
      if (u0 <= CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S38>/Sum' */
        CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S38>/MinMax' */
    } else {
      /* Sum: '<S38>/Sum' incorporates:
       *  Constant: '<S37>/Constant37'
       *  UnitDelay: '<S38>/UnitDelay'
       */
      CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
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
    } else if (CtAp_FctSftyTorq__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime)
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
      FctSftyMon_ErrResAccrPedlTqOverFltInfo_Flg = true;
    }

    /* End of Switch: '<S37>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S36>/ErrorHandleSysU16' */
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

void R_FctSftyTorq_Cyclic_10ms(void)
{
  /* local block i/o variables */
  dt_FctSftyMon_DesVehDecelSpdOverFltInfo
    FctSftyMon_DesVehDecelSpdOverFltInfo_Bus;
  dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo
    FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus;
  dt_FctSftyMon_CrpCtrlTqOverFltInfo FctSftyMon_CrpCtrlTqOverFltInfo_Bus;
  dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus;
  dt_FctSftyMon_AccrPedlTqOverFltInfo FctSftyMon_AccrPedlTqOverFltInfo_Bus;
  dt_FctSftyMon_AccrPedlTqOverFltDTCInfo FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus;
  uint8_T rtb_ModMgmt_HvSts_Enum;
  uint8_T rtb_Switch;
  uint8_T rtb_Switch8;
  boolean_T FctSftyMon_AccrPedlDesTqOverFltActv_Flg;
  boolean_T rtb_Switch6_dyiy;
  boolean_T rtb_FctSftyMon_AccrPedlDes_d0sz;
  boolean_T FctSftyMon_DesVehDecelSpdOverFltActv_Flg;
  boolean_T rtb_Switch6_hivv;
  boolean_T rtb_FctSftyMon_DesVehDecel_bbkg;
  boolean_T FctSftyMon_CrpDesTqOverFltActv_Flg;
  boolean_T rtb_Switch6_jhdx;
  boolean_T rtb_FctSftyMon_CrpDesTqOverFltE;
  boolean_T rtb_VehMot_VehStdl_Flg;
  boolean_T rtb_True;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  real32_T tmpRead_5;
  real32_T tmpRead_7;
  uint8_T tmpRead_3;
  uint8_T tmpRead_8;
  boolean_T tmpRead_2;
  boolean_T tmpRead_4;
  boolean_T tmpRead_6;

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_6);

  /* SignalConversion: '<S4>/SignalCopy9' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
    (&rtb_VehMot_VehStdl_Flg);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&tmpRead_5);

  /* SignalConversion: '<S4>/SignalCopy7' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_ModMgmt_HvSts_Enum);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyTorq_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_Torque_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S6>/Creep_Torque_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S7>/Creep_Torque_Monitoring_Limit'
   *
   * Block requirements for '<S7>/Creep_Torque_Monitoring_Limit':
   *  1. SWREQ_05498 FUSA creep torque Limit in Gear D
   *  2. SWREQ_05499 FUSA creep torque Limit in Gear R
   *  3. SWREQ_05500 FUSA creep torque Limit in Stop vehicle status
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/FctSftyTorq_GEAR_D'
   *  Constant: '<S10>/FctSftyTorq_GEAR_R'
   *  RelationalOperator: '<S10>/RelationalOperator'
   *  RelationalOperator: '<S10>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Switch: '<S10>/Switch1'
   */
  if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_D)) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Lookup_n-D: '<S10>/FctSftyMon_CrpCtrlLmtFwdTq_LUT'
     *  SignalConversion: '<S4>/SignalCopy8'
     */
    FctSftyMon_CrpCtrlLmtTq_Nm = look1_iflf_binlca(tmpRead_5,
      &FctSftyMon_CrpCtrlLmtFwdTqX_LUT[0], &FctSftyMon_CrpCtrlLmtFwdTq_LUT[0],
      6U);
  } else if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_R)) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Abs: '<S10>/Abs'
     *  Lookup_n-D: '<S10>/FctSftyMon_CrpCtrlLmtRvsTq_LUT'
     *  SignalConversion: '<S4>/SignalCopy8'
     *  Switch: '<S10>/Switch1'
     */
    FctSftyMon_CrpCtrlLmtTq_Nm = look1_iflf_binlca(fabsf(tmpRead_5),
      &FctSftyMon_CrpCtrlLmtRvsTqX_LUT[0], &FctSftyMon_CrpCtrlLmtRvsTq_LUT[0],
      6U);
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/FctSftyMon_CrpCtrlLmtTq_CFG'
     *  Switch: '<S10>/Switch1'
     */
    FctSftyMon_CrpCtrlLmtTq_Nm = FctSftyMon_CrpCtrlLmtTq_CFG;
  }

  /* End of Switch: '<S10>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/Creep_Torque_Monitoring_Limit' */

  /* RelationalOperator: '<S11>/RelationalOperator1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy2'
   */
  FctSftyMon_CrpDesTqOverFltActv_Flg = (tmpRead_0 > FctSftyMon_CrpCtrlLmtTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/Creep_Torque_Over_Fault_FUSA'
   *
   * Block requirements for '<S7>/Creep_Torque_Over_Fault_FUSA':
   *  1. SWREQ_05519 FUSA Cpeep torque over fault Set Conditon
   *  2. SWREQ_05520 FUSA Cpeep torque over fault Reset Conditon
   *  3. SWREQ_05525 FUSA Cpeep torque over fault Error mature time
   */
  /* Outputs for Atomic SubSystem: '<S13>/NoEnableAndReset' */
  /* Constant: '<S13>/FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S13>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTo_NoEnableAndReset(FctSftyMon_CrpDesTqOverFltActv_Flg,
    FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG, ((uint16_T)FctSftyTorq_Dt),
    &rtb_True, &rtb_Switch8, &rtb_Switch, &rtb_Switch6_jhdx,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoEnableAndReset_cxar);

  /* End of Outputs for SubSystem: '<S13>/NoEnableAndReset' */
  /* End of Outputs for SubSystem: '<S7>/Creep_Torque_Over_Fault_FUSA' */

  /* BusCreator: '<S7>/BusCreator' */
  FctSftyMon_CrpCtrlTqOverFltInfo_Bus.FctSftyMon_MonStatCrpCtrlTqOverFltInfo =
    rtb_True;
  FctSftyMon_CrpCtrlTqOverFltInfo_Bus.FctSftyMon_MonResCrpCtrlTqOverFltInfo =
    rtb_Switch8;
  FctSftyMon_CrpCtrlTqOverFltInfo_Bus.FctSftyMon_ErrStatCrpCtrlTqOverFltInfo =
    rtb_Switch;
  FctSftyMon_CrpCtrlTqOverFltInfo_Bus.FctSftyMon_ErrResCrpCtrlTqOverFltInfo =
    rtb_Switch6_jhdx;

  /* Outputs for Atomic SubSystem: '<S7>/Creep_Torque_Over_Fault_DTC'
   *
   * Block requirements for '<S7>/Creep_Torque_Over_Fault_DTC':
   *  1. SWREQ_05558 P116D05 Set Conditon
   *  2. SWREQ_05559 P116D05 Reset Conditon
   *  3. SWREQ_05560 P116D05 Enable Conditon
   *  4. SWREQ_05561 P116D05
   *  5. SWREQ_05562 P116D05
   *  6. SWREQ_05563 P116D05
   *  7. SWREQ_05564 P116D05
   */
  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt' */
  /* UnitDelay: '<S12>/OneDelay' incorporates:
   *  Constant: '<S12>/FctSftyMon_CrpDesTqOverFltEnaTim_CFG'
   *  Constant: '<S12>/FctSftyTorq_Dt1'
   */
  rtb_True = CtAp_FctSftyTorq_ATOM_TimeCnt
    (CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE_pwrv, ((uint16_T)FctSftyTorq_Dt),
     FctSftyMon_CrpDesTqOverFltEnaTim_CFG,
     &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_ATOM_TimeCnt_pbm3);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S6>/Driver_Torque_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/Acceleration_Pedal_Torque_Fault_DTC':
   *  1. SWREQ_05545 P116C05 Set Conditon
   *  2. SWREQ_05546 P116C05 Reset Conditon
   *  3. SWREQ_05547 P116C05 Enable Conditon
   *  4. SWREQ_05548 P116C05
   *  5. SWREQ_05549 P116C05
   *  6. SWREQ_05550 P116C05
   *  7. SWREQ_05551 P116C05 Error mature time
   *  8. SWREQ_05552 P116C05
   *  9. SWREQ_05553 P116C05
   */
  /* Outputs for Atomic SubSystem: '<S6>/Deceleration_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S8>/Deceleration_Over_Fault_DTC'
   *
   * Block requirements for '<S8>/Deceleration_Over_Fault_DTC':
   *  1. SWREQ_05571 P117205
   *  2. SWREQ_05572 P117205
   *  3. SWREQ_05573 P117205 Enable Conditon
   *  4. SWREQ_05574 P117205
   *  5. SWREQ_05575 P117205
   *  6. SWREQ_05576 P117205
   *  7. SWREQ_05577 P117205 Error mature time
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Logic: '<S22>/LogicalOperator1'
   *  Logic: '<S31>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy10'
   */
  tmpRead_6 = !tmpRead_6;

  /* End of Outputs for SubSystem: '<S8>/Deceleration_Over_Fault_DTC' */
  /* End of Outputs for SubSystem: '<S6>/Deceleration_Monitoring' */
  /* End of Outputs for SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_DTC' */
  /* End of Outputs for SubSystem: '<S6>/Driver_Torque_Monitoring' */

  /* Logic: '<S12>/LogicalOperator' incorporates:
   *  Logic: '<S12>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  rtb_FctSftyMon_CrpDesTqOverFltE = (rtb_True && tmpRead_4 && tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/NoReset' */
  /* Constant: '<S12>/FctSftyMon_CrpDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S12>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTorq_NoReset(rtb_FctSftyMon_CrpDesTqOverFltE,
    FctSftyMon_CrpDesTqOverFltActv_Flg, FctSftyMon_CrpDesTqOverFltMatureTim_CFG,
    ((uint16_T)FctSftyTorq_Dt), &rtb_True,
    &CtAp_FctSftyTorq_ARID_DEF.Switch_kkba,
    &CtAp_FctSftyTorq_ARID_DEF.Switch8_lwtu, &CtAp_FctSftyTorq_ARID_DEF.Switch6,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoReset_bhxx);

  /* End of Outputs for SubSystem: '<S12>/NoReset' */

  /* SignalConversion: '<S12>/SignalCopy' */
  FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus.FctSftyMon_ErrResCrpCtrlTqOverFltInfo =
    CtAp_FctSftyTorq_ARID_DEF.Switch6;

  /* Update for UnitDelay: '<S12>/OneDelay' incorporates:
   *  Constant: '<S12>/FctSftyTorq_ONE_CNT'
   */
  CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE_pwrv = FctSftyTorq_ONE_CNT;

  /* End of Outputs for SubSystem: '<S7>/Creep_Torque_Over_Fault_DTC' */

  /* BusCreator: '<S7>/BusCreator1' */
  FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus.FctSftyMon_MonStatCrpCtrlTqOverFltInfo =
    rtb_True;
  FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus.FctSftyMon_MonResCrpCtrlTqOverFltInfo =
    CtAp_FctSftyTorq_ARID_DEF.Switch_kkba;
  FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus.FctSftyMon_ErrStatCrpCtrlTqOverFltInfo =
    CtAp_FctSftyTorq_ARID_DEF.Switch8_lwtu;

  /* End of Outputs for SubSystem: '<S6>/Creep_Torque_Monitoring' */

  /* Outputs for Atomic SubSystem: '<S6>/Deceleration_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Logic: '<S21>/LogicalOperator' incorporates:
   *  Constant: '<S21>/FctSftyMon_DesVehDecelSpdLmtTq_CFG'
   *  RelationalOperator: '<S21>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  FctSftyMon_DesVehDecelSpdOverFltActv_Flg = (tmpRead_2 && (tmpRead_1 <
    FctSftyMon_DesVehDecelSpdLmtTq_CFG));

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/Deceleration_Over_Fault_FUSA'
   *
   * Block requirements for '<S8>/Deceleration_Over_Fault_FUSA':
   *  1. SWREQ_05538 FUSA Deceleration over fault Error mature time
   *  2. SWREQ_05532 FUSA Deceleration over fault Set Conditon
   *  3. SWREQ_05533 FUSA Deceleration over fault Reset Conditon
   */
  /* Outputs for Atomic SubSystem: '<S23>/NoEnableAndReset' */
  /* Constant: '<S23>/FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S23>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTo_NoEnableAndReset(FctSftyMon_DesVehDecelSpdOverFltActv_Flg,
    FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG, ((uint16_T)FctSftyTorq_Dt),
    &rtb_True, &rtb_Switch8, &rtb_Switch, &rtb_Switch6_hivv,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoEnableAndReset_mbvz);

  /* End of Outputs for SubSystem: '<S23>/NoEnableAndReset' */
  /* End of Outputs for SubSystem: '<S8>/Deceleration_Over_Fault_FUSA' */

  /* BusCreator: '<S8>/BusCreator' */
  FctSftyMon_DesVehDecelSpdOverFltInfo_Bus.FctSftyMon_MonStatDesVehDecelSpdOverFltInfo
    = rtb_True;
  FctSftyMon_DesVehDecelSpdOverFltInfo_Bus.FctSftyMon_MonResDesVehDecelSpdOverFltInfo
    = rtb_Switch8;
  FctSftyMon_DesVehDecelSpdOverFltInfo_Bus.FctSftyMon_ErrStatDesVehDecelSpdOverFltInfo
    = rtb_Switch;
  FctSftyMon_DesVehDecelSpdOverFltInfo_Bus.FctSftyMon_ErrResDesVehDecelSpdOverFltInfo
    = rtb_Switch6_hivv;

  /* Outputs for Atomic SubSystem: '<S8>/Deceleration_Over_Fault_DTC'
   *
   * Block requirements for '<S8>/Deceleration_Over_Fault_DTC':
   *  1. SWREQ_05571 P117205
   *  2. SWREQ_05572 P117205
   *  3. SWREQ_05573 P117205 Enable Conditon
   *  4. SWREQ_05574 P117205
   *  5. SWREQ_05575 P117205
   *  6. SWREQ_05576 P117205
   *  7. SWREQ_05577 P117205 Error mature time
   */
  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt' */
  /* UnitDelay: '<S22>/OneDelay' incorporates:
   *  Constant: '<S22>/FctSftyMon_DesVehDecelSpdOverFltEnaTim_CFG'
   *  Constant: '<S22>/FctSftyTorq_Dt1'
   */
  rtb_True = CtAp_FctSftyTorq_ATOM_TimeCnt
    (CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE_kulb, ((uint16_T)FctSftyTorq_Dt),
     FctSftyMon_DesVehDecelSpdOverFltEnaTim_CFG,
     &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  rtb_FctSftyMon_DesVehDecel_bbkg = (rtb_True && tmpRead_4 && tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S22>/NoReset' */
  /* Constant: '<S22>/FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S22>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTorq_NoReset_e10u(rtb_FctSftyMon_DesVehDecel_bbkg,
    FctSftyMon_DesVehDecelSpdOverFltActv_Flg,
    FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG, ((uint16_T)FctSftyTorq_Dt),
    &rtb_True, &CtAp_FctSftyTorq_ARID_DEF.Switch_gjro,
    &CtAp_FctSftyTorq_ARID_DEF.Switch8_g12k,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoReset_cl54);

  /* End of Outputs for SubSystem: '<S22>/NoReset' */

  /* SignalConversion: '<S22>/SignalCopy' */
  FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus.FctSftyMon_ErrResDesVehDecelSpdOverFltInfo
    = FctSftyMon_ErrResDesVehDecelSpdOverFltInfo_Flg;

  /* Update for UnitDelay: '<S22>/OneDelay' incorporates:
   *  Constant: '<S22>/FctSftyTorq_ONE_CNT'
   */
  CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE_kulb = FctSftyTorq_ONE_CNT;

  /* End of Outputs for SubSystem: '<S8>/Deceleration_Over_Fault_DTC' */

  /* BusCreator: '<S8>/BusCreator1' */
  FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus.FctSftyMon_MonStatDesVehDecelSpdOverFltInfo
    = rtb_True;
  FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus.FctSftyMon_MonResDesVehDecelSpdOverFltInfo
    = CtAp_FctSftyTorq_ARID_DEF.Switch_gjro;
  FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus.FctSftyMon_ErrStatDesVehDecelSpdOverFltInfo
    = CtAp_FctSftyTorq_ARID_DEF.Switch8_g12k;

  /* End of Outputs for SubSystem: '<S6>/Deceleration_Monitoring' */

  /* Outputs for Atomic SubSystem: '<S6>/Driver_Torque_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S9>/Driver_Torque_Monitoring_Limit'
   *
   * Block requirements for '<S9>/Driver_Torque_Monitoring_Limit':
   *  1. SWREQ_05496 FUSA  Accr Pedal torque Limit Gear D
   *  2. SWREQ_05497 FS  Accr Pedal torque Limit Gear R
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Switch: '<S34>/Switch5' incorporates:
   *  Constant: '<S34>/FctSftyTorq_GEAR_D1'
   *  Constant: '<S34>/FctSftyTorq_GEAR_R1'
   *  RelationalOperator: '<S34>/RelationalOperator5'
   *  RelationalOperator: '<S34>/RelationalOperator6'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Switch: '<S34>/Switch6'
   */
  if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_D)) {
    /* Switch: '<S34>/Switch5' incorporates:
     *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtFwdMinTq_LUT'
     *  SignalConversion: '<S4>/SignalCopy1'
     */
    FctSftyMon_AccrPedlLmtMinTq_Nm = look1_iflf_binlca(tmpRead_7,
      &FctSftyMon_AccrPedlLmtFwdMinTqX_LUT[0],
      &FctSftyMon_AccrPedlLmtFwdMinTq_LUT[0], 10U);
  } else if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_R)) {
    /* Switch: '<S34>/Switch5' incorporates:
     *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtRvsMinTq_LUT'
     *  SignalConversion: '<S4>/SignalCopy1'
     *  SignalConversion: '<S4>/SignalCopy8'
     *  Switch: '<S34>/Switch6'
     */
    FctSftyMon_AccrPedlLmtMinTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead_7,
      &FctSftyMon_AccrPedlLmtRvsTqY_MAP[0], &FctSftyMon_AccrPedlLmtRvsTqX_MAP[0],
      &FctSftyMon_AccrPedlLmtRvsMinTq_MAP[0],
      CtAp_FctSftyTorq_ConstP.FctSftyMon_AccrPedlLmtRvsMinTq_, 3U);
  } else {
    /* Switch: '<S34>/Switch5' incorporates:
     *  Constant: '<S34>/FctSftyMon_AccrPedlLmtMinTq_CFG'
     *  Switch: '<S34>/Switch6'
     */
    FctSftyMon_AccrPedlLmtMinTq_Nm = FctSftyMon_AccrPedlLmtMinTq_CFG;
  }

  /* End of Switch: '<S34>/Switch5' */

  /* Switch: '<S34>/Switch' incorporates:
   *  Constant: '<S34>/FctSftyTorq_GEAR_D'
   *  Constant: '<S34>/FctSftyTorq_GEAR_R'
   *  RelationalOperator: '<S34>/RelationalOperator'
   *  RelationalOperator: '<S34>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Switch: '<S34>/Switch1'
   */
  if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_D)) {
    /* Switch: '<S34>/Switch2' incorporates:
     *  Constant: '<S34>/FctSftyTorq_ECO'
     *  Constant: '<S34>/FctSftyTorq_NORMAL'
     *  Constant: '<S34>/FctSftyTorq_SPORT'
     *  RelationalOperator: '<S34>/RelationalOperator2'
     *  RelationalOperator: '<S34>/RelationalOperator3'
     *  RelationalOperator: '<S34>/RelationalOperator4'
     *  SignalConversion: '<S4>/SignalCopy11'
     *  Switch: '<S34>/Switch3'
     *  Switch: '<S34>/Switch4'
     */
    if (tmpRead_8 == ((uint8_T)FctSftyTorq_SPORT)) {
      /* Switch: '<S34>/Switch' incorporates:
       *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtFwdTqSpt_MAP'
       *  SignalConversion: '<S4>/SignalCopy1'
       *  SignalConversion: '<S4>/SignalCopy8'
       *  Switch: '<S34>/Switch2'
       */
      FctSftyMon_AccrPedlLmtMaxTq_Nm = look2_iflf_linlca(tmpRead_5, tmpRead_7,
        &FctSftyMon_AccrPedlLmtFwdTqY_MAP[0], &FctSftyMon_AccrPedlLmtFwdTqX_MAP
        [0], &FctSftyMon_AccrPedlLmtFwdTqSpt_MAP[0],
        CtAp_FctSftyTorq_ConstP.pooled1, 6U);
    } else if (tmpRead_8 == ((uint8_T)FctSftyTorq_NORMAL)) {
      /* Switch: '<S34>/Switch' incorporates:
       *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtFwdTqNor_MAP'
       *  SignalConversion: '<S4>/SignalCopy1'
       *  SignalConversion: '<S4>/SignalCopy8'
       *  Switch: '<S34>/Switch3'
       */
      FctSftyMon_AccrPedlLmtMaxTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead_7,
        &FctSftyMon_AccrPedlLmtFwdTqY_MAP[0], &FctSftyMon_AccrPedlLmtFwdTqX_MAP
        [0], &FctSftyMon_AccrPedlLmtFwdTqNor_MAP[0],
        CtAp_FctSftyTorq_ConstP.pooled1, 6U);
    } else if (tmpRead_8 == ((uint8_T)FctSftyTorq_ECO)) {
      /* Switch: '<S34>/Switch' incorporates:
       *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtFwdTqEco_MAP'
       *  SignalConversion: '<S4>/SignalCopy1'
       *  SignalConversion: '<S4>/SignalCopy8'
       *  Switch: '<S34>/Switch3'
       *  Switch: '<S34>/Switch4'
       */
      FctSftyMon_AccrPedlLmtMaxTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead_7,
        &FctSftyMon_AccrPedlLmtFwdTqY_MAP[0], &FctSftyMon_AccrPedlLmtFwdTqX_MAP
        [0], &FctSftyMon_AccrPedlLmtFwdTqEco_MAP[0],
        CtAp_FctSftyTorq_ConstP.pooled1, 6U);
    } else {
      /* Switch: '<S34>/Switch' incorporates:
       *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP'
       *  SignalConversion: '<S4>/SignalCopy1'
       *  SignalConversion: '<S4>/SignalCopy8'
       *  Switch: '<S34>/Switch3'
       *  Switch: '<S34>/Switch4'
       */
      FctSftyMon_AccrPedlLmtMaxTq_Nm = look2_iflf_binlca(tmpRead_5, tmpRead_7,
        &FctSftyMon_AccrPedlLmtFwdTqY_MAP[0], &FctSftyMon_AccrPedlLmtFwdTqX_MAP
        [0], &FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP[0],
        CtAp_FctSftyTorq_ConstP.pooled1, 6U);
    }

    /* End of Switch: '<S34>/Switch2' */
  } else if (tmpRead_3 == ((uint8_T)FctSftyTorq_GEAR_R)) {
    /* Switch: '<S34>/Switch' incorporates:
     *  Lookup_n-D: '<S34>/FctSftyMon_AccrPedlLmtRvsMaxTq_LUT'
     *  SignalConversion: '<S4>/SignalCopy1'
     *  Switch: '<S34>/Switch1'
     */
    FctSftyMon_AccrPedlLmtMaxTq_Nm = look1_iflf_binlca(tmpRead_7,
      &FctSftyMon_AccrPedlLmtRvsTqX_LUT[0], &FctSftyMon_AccrPedlLmtRvsMaxTq_LUT
      [0], 10U);
  } else {
    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S34>/FctSftyMon_AccrPedlLmtTq_CFG'
     *  Switch: '<S34>/Switch1'
     */
    FctSftyMon_AccrPedlLmtMaxTq_Nm = FctSftyMon_AccrPedlLmtMaxTq_CFG;
  }

  /* End of Switch: '<S34>/Switch' */
  /* End of Outputs for SubSystem: '<S9>/Driver_Torque_Monitoring_Limit' */

  /* Logic: '<S33>/LogicalOperator' incorporates:
   *  RelationalOperator: '<S33>/RelationalOperator2'
   *  RelationalOperator: '<S33>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  FctSftyMon_AccrPedlDesTqOverFltActv_Flg = ((tmpRead >
    FctSftyMon_AccrPedlLmtMaxTq_Nm) || (tmpRead < FctSftyMon_AccrPedlLmtMinTq_Nm));

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/Acceleration_Pedal_Torque_Fault_DTC':
   *  1. SWREQ_05545 P116C05 Set Conditon
   *  2. SWREQ_05546 P116C05 Reset Conditon
   *  3. SWREQ_05547 P116C05 Enable Conditon
   *  4. SWREQ_05548 P116C05
   *  5. SWREQ_05549 P116C05
   *  6. SWREQ_05550 P116C05
   *  7. SWREQ_05551 P116C05 Error mature time
   *  8. SWREQ_05552 P116C05
   *  9. SWREQ_05553 P116C05
   */
  /* Outputs for Atomic SubSystem: '<S31>/ATOM_TimeCnt' */
  /* UnitDelay: '<S31>/OneDelay' incorporates:
   *  Constant: '<S31>/FctSftyMon_AccrPedlDesTqOverFltEnaTim_CFG'
   *  Constant: '<S31>/FctSftyTorq_Dt1'
   */
  rtb_True = CtAp_FctSftyTorq_ATOM_TimeCnt
    (CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE, ((uint16_T)FctSftyTorq_Dt),
     FctSftyMon_AccrPedlDesTqOverFltEnaTim_CFG,
     &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S31>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Input'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Input':
   *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
   */
  /* Logic: '<S31>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  rtb_FctSftyMon_AccrPedlDes_d0sz = (rtb_True && tmpRead_4 && tmpRead_6);

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Input' */

  /* Outputs for Atomic SubSystem: '<S31>/NoReset' */
  /* Constant: '<S31>/FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S31>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTorq_NoReset_gcck(rtb_FctSftyMon_AccrPedlDes_d0sz,
    FctSftyMon_AccrPedlDesTqOverFltActv_Flg,
    FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG, ((uint16_T)FctSftyTorq_Dt),
    &rtb_True, &CtAp_FctSftyTorq_ARID_DEF.Switch,
    &CtAp_FctSftyTorq_ARID_DEF.Switch8,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoReset);

  /* End of Outputs for SubSystem: '<S31>/NoReset' */

  /* SignalConversion: '<S31>/SignalCopy' */
  FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus.FctSftyMon_ErrResAccrPedlTqOverFltInfo
    = FctSftyMon_ErrResAccrPedlTqOverFltInfo_Flg;

  /* Update for UnitDelay: '<S31>/OneDelay' incorporates:
   *  Constant: '<S31>/FctSftyTorq_ONE_CNT'
   */
  CtAp_FctSftyTorq_ARID_DEF.OneDelay_DSTATE = FctSftyTorq_ONE_CNT;

  /* End of Outputs for SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_DTC' */

  /* BusCreator: '<S9>/BusCreator' */
  FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus.FctSftyMon_MonStatAccrPedlTqOverFltInfo
    = rtb_True;
  FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus.FctSftyMon_MonResAccrPedlTqOverFltInfo
    = CtAp_FctSftyTorq_ARID_DEF.Switch;
  FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus.FctSftyMon_ErrStatAccrPedlTqOverFltInfo
    = CtAp_FctSftyTorq_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_FUSA'
   *
   * Block requirements for '<S9>/Acceleration_Pedal_Torque_Fault_FUSA':
   *  1. SWREQ_05506 FUSA Acceleration pedal torque over fault Set Conditon
   *  2. SWREQ_05507 FUSA Acceleration pedal torque over fault Reset Conditon
   *  3. SWREQ_05512 FUSA Acceleration pedal torque over fault Error mature time
   */
  /* Outputs for Atomic SubSystem: '<S32>/NoEnableAndReset' */
  /* Constant: '<S32>/FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S32>/FctSftyTorq_Dt'
   */
  CtAp_FctSftyTo_NoEnableAndReset(FctSftyMon_AccrPedlDesTqOverFltActv_Flg,
    FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG, ((uint16_T)FctSftyTorq_Dt),
    &rtb_True, &rtb_Switch, &rtb_Switch8, &rtb_Switch6_dyiy,
    &CtAp_FctSftyTorq_ARID_DEF.ARID_DEF_NoEnableAndReset);

  /* End of Outputs for SubSystem: '<S32>/NoEnableAndReset' */
  /* End of Outputs for SubSystem: '<S9>/Acceleration_Pedal_Torque_Fault_FUSA' */

  /* BusCreator: '<S9>/BusCreator1' */
  FctSftyMon_AccrPedlTqOverFltInfo_Bus.FctSftyMon_MonStatAccrPedlTqOverFltInfo =
    rtb_True;
  FctSftyMon_AccrPedlTqOverFltInfo_Bus.FctSftyMon_MonResAccrPedlTqOverFltInfo =
    rtb_Switch;
  FctSftyMon_AccrPedlTqOverFltInfo_Bus.FctSftyMon_ErrStatAccrPedlTqOverFltInfo =
    rtb_Switch8;
  FctSftyMon_AccrPedlTqOverFltInfo_Bus.FctSftyMon_ErrResAccrPedlTqOverFltInfo =
    rtb_Switch6_dyiy;

  /* End of Outputs for SubSystem: '<S6>/Driver_Torque_Monitoring' */
  /* End of Outputs for SubSystem: '<S2>/Function_Torque_Monitoring' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_FctSftyTorq_Output'
   *
   * Block requirements for '<S2>/CtAp_FctSftyTorq_Output':
   *  1. SWREQ_05492 The function of "CAN Input" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_AccrPedlTqOver =
    FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus;

  /* Outport: '<Root>/RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_AccrPedlT_otmn =
    FctSftyMon_AccrPedlTqOverFltInfo_Bus;

  /* Outport: '<Root>/RTE_P_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_CrpCtrlTqOverF =
    FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus;

  /* Outport: '<Root>/RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_CrpCtrlTq_ex2t =
    FctSftyMon_CrpCtrlTqOverFltInfo_Bus;

  /* Outport: '<Root>/RTE_P_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_DesVehDecelSpd =
    FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus;

  /* Outport: '<Root>/RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_DesVehDec_djf3 =
    FctSftyMon_DesVehDecelSpdOverFltInfo_Bus;

  /* End of Outputs for SubSystem: '<S2>/CtAp_FctSftyTorq_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyTorq_Cyclic_10ms_sys' */
  (void)
    Rte_Write_RTE_P_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_AccrPedlTqOver);
  (void)
    Rte_Write_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_AccrPedlT_otmn);
  (void)
    Rte_Write_RTE_P_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_CrpCtrlTqOverF);
  (void)
    Rte_Write_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_CrpCtrlTq_ex2t);
  (void)
    Rte_Write_RTE_P_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_DesVehDecelSpd);
  (void)
    Rte_Write_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
    (&CtAp_FctSftyTorq_ARID_DEF.RTE_P_FctSftyMon_DesVehDec_djf3);
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_FctSftyTorq_START_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

void R_FctSftyTorq_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  FctSftyMon_AccrPedlLmtMinTq_Nm = 0.0F;
  FctSftyMon_AccrPedlLmtMaxTq_Nm = 0.0F;
  FctSftyMon_CrpCtrlLmtTq_Nm = 0.0F;
  FctSftyMon_ErrResAccrPedlTqOverFltInfo_Flg = false;
  FctSftyMon_ErrResDesVehDecelSpdOverFltInfo_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_FctSftyTorq_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_FctSftyTorq_T));
}

#define CtAp_FctSftyTorq_STOP_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
