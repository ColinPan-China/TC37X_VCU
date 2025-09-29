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
 *  Filename:           CtAp_ChrgComM.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ChrgComM
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Fri Aug 16 10:03:51 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:24:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 03 10:23:17 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgComM.h"
#include "rtwtypes.h"
#include "Rte_Type.h"
#include "CtAp_ChrgComM_private.h"
#include "VCU_TempGlobal.h"
#include "CtAp_ChrgComM_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgComM_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"

ARID_DEF_CtAp_ChrgComM_T CtAp_ChrgComM_ARID_DEF;

#define CtAp_ChrgComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S6>/If1'
 *    '<S6>/If10'
 *    '<S6>/If2'
 *    '<S6>/If21'
 *    '<S6>/If22'
 *    '<S6>/If3'
 *    '<S6>/If4'
 *    '<S6>/If5'
 *    '<S6>/If6'
 *    '<S6>/If7'
 *    ...
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

uint8_T CtAp_ChrgComM_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S11>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S11>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/If'
 *    '<S9>/If1'
 *    '<S9>/If2'
 *    '<S9>/If3'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

real32_T CtAp_ChrgComM_If_c2bu(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S63>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S63>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* System initialize for atomic system: '<S67>/ATOM_OnDelay' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_ChrgComM_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S70>/Sum' incorporates:
   *  UnitDelay: '<S70>/UnitDelay'
   */
  CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S67>/ATOM_OnDelay' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T CtAp_ChrgComM_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* Switch: '<S70>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S70>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S70>/Sum' incorporates:
     *  UnitDelay: '<S70>/UnitDelay'
     */
    CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
      + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S70>/MinMax' */
    if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S70>/Sum' */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S70>/MinMax' */
  } else {
    /* Sum: '<S70>/Sum' incorporates:
     *  UnitDelay: '<S70>/UnitDelay'
     */
    CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S70>/Switch1' */

  /* RelationalOperator: '<S70>/B_MiHold' incorporates:
   *  UnitDelay: '<S70>/UnitDelay'
   */
  return CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S76>/ATOM_U16ErrorHandle'
 *    '<S78>/ATOM_U16ErrorHandle'
 *    '<S80>/ATOM_U16ErrorHandle'
 *    '<S82>/ATOM_U16ErrorHandle'
 *    '<S83>/ATOM_U16ErrorHandle'
 *    '<S85>/ATOM_U16ErrorHandle'
 *    '<S87>/ATOM_U16ErrorHandle'
 *    '<S89>/ATOM_U16ErrorHandle'
 *    '<S91>/ATOM_U16ErrorHandle'
 *    '<S93>/ATOM_U16ErrorHandle'
 *    '<S95>/ATOM_U16ErrorHandle'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_ChrgComM_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S98>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S98>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S101>/Constant2'
     *  Constant: '<S101>/Constant4'
     *  Switch: '<S101>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S101>/Switch' incorporates:
       *  Constant: '<S101>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S101>/Switch1' */

    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S101>/Constant3'
     *  RelationalOperator: '<S101>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S103>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S103>/Sum' incorporates:
       *  UnitDelay: '<S103>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S103>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S103>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S103>/MinMax' */
    } else {
      /* Sum: '<S103>/Sum' incorporates:
       *  Constant: '<S101>/Constant23'
       *  UnitDelay: '<S103>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S103>/Switch1' */

    /* RelationalOperator: '<S101>/Equal2' incorporates:
     *  Constant: '<S101>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S102>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S102>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S102>/Sum' incorporates:
       *  UnitDelay: '<S102>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo);

      /* MinMax: '<S102>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo) {
        /* Sum: '<S102>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo = u0;
      }

      /* End of MinMax: '<S102>/MinMax' */
    } else {
      /* Sum: '<S102>/Sum' incorporates:
       *  Constant: '<S101>/Constant37'
       *  UnitDelay: '<S102>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo = ((uint16_T)0U);
    }

    /* End of Switch: '<S102>/Switch1' */

    /* Switch: '<S101>/Switch8' incorporates:
     *  Constant: '<S101>/Constant6'
     *  Constant: '<S101>/DEBOUNCING'
     *  RelationalOperator: '<S101>/Equal6'
     *  RelationalOperator: '<S102>/B_MiHold'
     *  RelationalOperator: '<S103>/B_MiHold'
     *  Switch: '<S101>/Switch2'
     *  Switch: '<S101>/Switch3'
     *  Switch: '<S101>/Switch4'
     *  UnitDelay: '<S102>/UnitDelay'
     *  UnitDelay: '<S103>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_ogmo >
               rtu_MatureTime) {
      /* Switch: '<S101>/Switch2' incorporates:
       *  Constant: '<S101>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S101>/Switch3' incorporates:
       *  Constant: '<S101>/DEBOUNCING_F'
       *  Switch: '<S101>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S101>/Switch4' incorporates:
       *  Constant: '<S101>/PASSED'
       *  Switch: '<S101>/Switch2'
       *  Switch: '<S101>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S101>/Switch3' incorporates:
       *  Constant: '<S101>/DEBOUNCING_P'
       *  Switch: '<S101>/Switch2'
       *  Switch: '<S101>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S101>/Switch8' */

    /* Switch: '<S101>/Switch6' incorporates:
     *  Constant: '<S101>/Constant30'
     *  Constant: '<S101>/Constant31'
     *  Constant: '<S101>/Constant32'
     *  Delay: '<S101>/Delay1'
     *  RelationalOperator: '<S101>/Equal3'
     *  RelationalOperator: '<S101>/Equal4'
     *  Switch: '<S101>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S101>/Switch7' incorporates:
       *  Constant: '<S101>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_ChrgComM__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S101>/Switch6' */

    /* Update for Delay: '<S101>/Delay1' */
    CtAp_ChrgComM__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S98>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S76>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S78>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S83>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S85>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrResetCdn(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_kbhr,
  uint8_T rtu_DCChrMgmt_BEMTxReqSts_Enum)
{
  /* Logic: '<S99>/LogicalOperator' incorporates:
   *  Constant: '<S99>/Define'
   *  Constant: '<S99>/Define1'
   *  Logic: '<S99>/LogicalOperator1'
   *  RelationalOperator: '<S99>/Equal'
   *  RelationalOperator: '<S99>/Equal1'
   */
  return (rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_Init)) ||
    (rtu_DCChrMgmt_DcChrgCommIn_kbhr && (rtu_DCChrMgmt_BEMTxReqSts_Enum ==
      ((uint8_T)ChrgComM_ReconnectAllow)));
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S76>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S77>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T C_DCChrMgmt_DcChrgCommErrSetCdn(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_bo2q)
{
  /* Logic: '<S100>/LogicalOperator' incorporates:
   *  Logic: '<S100>/LogicalOperator1'
   */
  return rtu_DCChrMgmt_DcChrgCommIn_bo2q && !rtu_DCChrMgmt_DcChrgCommInpSig_;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S77>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_ChrgCo_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_jjfm_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S104>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S104>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S108>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S108>/Switch1' incorporates:
     *  Constant: '<S108>/Constant2'
     *  Constant: '<S108>/Constant4'
     *  Switch: '<S108>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S108>/Switch' incorporates:
       *  Constant: '<S108>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S108>/Switch1' */

    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S108>/Constant3'
     *  RelationalOperator: '<S108>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S110>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S110>/Sum' incorporates:
       *  UnitDelay: '<S110>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S110>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S110>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S110>/MinMax' */
    } else {
      /* Sum: '<S110>/Sum' incorporates:
       *  Constant: '<S108>/Constant23'
       *  UnitDelay: '<S110>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S110>/Switch1' */

    /* RelationalOperator: '<S108>/Equal2' incorporates:
     *  Constant: '<S108>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S109>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S109>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S109>/Sum' incorporates:
       *  UnitDelay: '<S109>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c);

      /* MinMax: '<S109>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c) {
        /* Sum: '<S109>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c = u0;
      }

      /* End of MinMax: '<S109>/MinMax' */
    } else {
      /* Sum: '<S109>/Sum' incorporates:
       *  Constant: '<S108>/Constant37'
       *  UnitDelay: '<S109>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c = ((uint16_T)0U);
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Switch: '<S108>/Switch8' incorporates:
     *  Constant: '<S108>/Constant6'
     *  Constant: '<S108>/DEBOUNCING'
     *  RelationalOperator: '<S108>/Equal6'
     *  RelationalOperator: '<S109>/B_MiHold'
     *  RelationalOperator: '<S110>/B_MiHold'
     *  Switch: '<S108>/Switch2'
     *  Switch: '<S108>/Switch3'
     *  Switch: '<S108>/Switch4'
     *  UnitDelay: '<S109>/UnitDelay'
     *  UnitDelay: '<S110>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_da2c >
               rtu_MatureTime) {
      /* Switch: '<S108>/Switch2' incorporates:
       *  Constant: '<S108>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S108>/Switch3' incorporates:
       *  Constant: '<S108>/DEBOUNCING_F'
       *  Switch: '<S108>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S108>/Switch4' incorporates:
       *  Constant: '<S108>/PASSED'
       *  Switch: '<S108>/Switch2'
       *  Switch: '<S108>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S108>/Switch3' incorporates:
       *  Constant: '<S108>/DEBOUNCING_P'
       *  Switch: '<S108>/Switch2'
       *  Switch: '<S108>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S108>/Switch8' */

    /* Switch: '<S108>/Switch6' incorporates:
     *  Constant: '<S108>/Constant30'
     *  Constant: '<S108>/Constant31'
     *  RelationalOperator: '<S108>/Equal3'
     *  RelationalOperator: '<S108>/Equal4'
     *  Switch: '<S108>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S108>/Switch6' incorporates:
       *  Constant: '<S108>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCCSTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S108>/Switch7' incorporates:
       *  Constant: '<S108>/Constant11'
       *  Switch: '<S108>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCCSTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S108>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S104>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S105>/ATOM_TimeCnt'
 *    '<S119>/ATOM_TimeCnt'
 *    '<S133>/ATOM_TimeCnt'
 *    '<S153>/ATOM_TimeCnt'
 *    '<S167>/ATOM_TimeCnt'
 *    '<S181>/ATOM_TimeCnt'
 *    '<S195>/ATOM_TimeCnt'
 *    '<S209>/ATOM_TimeCnt'
 *    '<S223>/ATOM_TimeCnt'
 *    '<S237>/ATOM_TimeCnt'
 *    '<S245>/ATOM_TimeCnt'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T CtAp_ChrgComM_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S111>/Add1' incorporates:
   *  DataTypeConversion: '<S111>/Data Type Conversion'
   *  DataTypeConversion: '<S111>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S111>/Switch' */
  if (rtu_In) {
    /* Sum: '<S111>/Add' incorporates:
     *  DataTypeConversion: '<S111>/Data Type Conversion'
     *  UnitDelay: '<S111>/Delay'
     */
    CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S111>/Min' */
    if (rtb_Add1 <= CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S111>/Add' */
      CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S111>/Min' */
  } else {
    /* Sum: '<S111>/Add' incorporates:
     *  Constant: '<S111>/Constant'
     *  UnitDelay: '<S111>/Delay'
     */
    CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S111>/Switch' */

  /* RelationalOperator: '<S111>/Relational Operator' incorporates:
   *  UnitDelay: '<S111>/Delay'
   */
  return CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn'
 *    '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn'
 *    '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn'
 *    '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T C_DCChrMgmt_DcChrgCommErrEnaCdn(const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_ablb,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_fwd1, ARID_DEF_DCChrMgmt_DcChr_kiod_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_eib4;
  boolean_T rty_DCChrMgmt_DcChrgCommErrEn_0;

  /* Outputs for Atomic SubSystem: '<S105>/ATOM_TimeCnt' */

  /* Constant: '<S105>/Define' incorporates:
   *  Constant: '<S105>/CAL'
   *  Constant: '<S105>/Define1'
   */
  rtb_RelationalOperator_eib4 = CtAp_ChrgComM_ATOM_TimeCnt(ChrgComM_Active,
    ((uint16_T)ChrgComM_dt50ms), DCChrMgmt_ChrgCommDTCEnaTim_CFG,
    &CtAp_ChrgComM__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S105>/ATOM_TimeCnt' */

  /* Logic: '<S105>/LogicalOperator' incorporates:
   *  Logic: '<S105>/LogicalOperator1'
   *  Logic: '<S105>/LogicalOperator2'
   */
  rty_DCChrMgmt_DcChrgCommErrEn_0 =
    (!rtu_DCChrMgmt_DcChrgCommInpSig_->ComM_ErrResDCCANBusOffInfo &&
     !rtu_DCChrMgmt_DcChrgCommIn_ablb && rtu_DCChrMgmt_DcChrgCommIn_fwd1 &&
     rtb_RelationalOperator_eib4);
  return rty_DCChrMgmt_DcChrgCommErrEn_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S77>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S79>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 *    '<S81>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 *    '<S84>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 *    '<S86>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 *    '<S88>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S90>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S97>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrRes_cc2d(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_)
{
  /* RelationalOperator: '<S106>/Equal' incorporates:
   *  Constant: '<S106>/Define'
   */
  return rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_OffPlug);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S78>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S79>/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_prcs(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_)
{
  /* SignalConversion generated from: '<S114>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' */
  return rtu_DCChrMgmt_DcChrgCommInpSig_;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S79>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_pcua(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_fkx5_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S118>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S118>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S122>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S122>/Switch1' incorporates:
     *  Constant: '<S122>/Constant2'
     *  Constant: '<S122>/Constant4'
     *  Switch: '<S122>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S122>/Switch' incorporates:
       *  Constant: '<S122>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S122>/Switch1' */

    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S122>/Constant3'
     *  RelationalOperator: '<S122>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S124>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S124>/Sum' incorporates:
       *  UnitDelay: '<S124>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S124>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S124>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S124>/MinMax' */
    } else {
      /* Sum: '<S124>/Sum' incorporates:
       *  Constant: '<S122>/Constant23'
       *  UnitDelay: '<S124>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S124>/Switch1' */

    /* RelationalOperator: '<S122>/Equal2' incorporates:
     *  Constant: '<S122>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S123>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S123>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S123>/Sum' incorporates:
       *  UnitDelay: '<S123>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns);

      /* MinMax: '<S123>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns) {
        /* Sum: '<S123>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns = u0;
      }

      /* End of MinMax: '<S123>/MinMax' */
    } else {
      /* Sum: '<S123>/Sum' incorporates:
       *  Constant: '<S122>/Constant37'
       *  UnitDelay: '<S123>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns = ((uint16_T)0U);
    }

    /* End of Switch: '<S123>/Switch1' */

    /* Switch: '<S122>/Switch8' incorporates:
     *  Constant: '<S122>/Constant6'
     *  Constant: '<S122>/DEBOUNCING'
     *  RelationalOperator: '<S122>/Equal6'
     *  RelationalOperator: '<S123>/B_MiHold'
     *  RelationalOperator: '<S124>/B_MiHold'
     *  Switch: '<S122>/Switch2'
     *  Switch: '<S122>/Switch3'
     *  Switch: '<S122>/Switch4'
     *  UnitDelay: '<S123>/UnitDelay'
     *  UnitDelay: '<S124>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_elns >
               rtu_MatureTime) {
      /* Switch: '<S122>/Switch2' incorporates:
       *  Constant: '<S122>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S122>/Switch3' incorporates:
       *  Constant: '<S122>/DEBOUNCING_F'
       *  Switch: '<S122>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S122>/Switch4' incorporates:
       *  Constant: '<S122>/PASSED'
       *  Switch: '<S122>/Switch2'
       *  Switch: '<S122>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S122>/Switch3' incorporates:
       *  Constant: '<S122>/DEBOUNCING_P'
       *  Switch: '<S122>/Switch2'
       *  Switch: '<S122>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S122>/Switch8' */

    /* Switch: '<S122>/Switch6' incorporates:
     *  Constant: '<S122>/Constant30'
     *  Constant: '<S122>/Constant31'
     *  RelationalOperator: '<S122>/Equal3'
     *  RelationalOperator: '<S122>/Equal4'
     *  Switch: '<S122>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S122>/Switch6' incorporates:
       *  Constant: '<S122>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCMLTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S122>/Switch7' incorporates:
       *  Constant: '<S122>/Constant11'
       *  Switch: '<S122>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCMLTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S122>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S118>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
 *    '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrEnaCdn_F(const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_a2of,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_eiyx, ARID_DEF_DCChrMgmt_DcChr_mju5_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_eno4;
  boolean_T rty_DCChrMgmt_DcChrgCommErrEn_0;

  /* Outputs for Atomic SubSystem: '<S119>/ATOM_TimeCnt' */

  /* Constant: '<S119>/Define' incorporates:
   *  Constant: '<S119>/CAL'
   *  Constant: '<S119>/Define1'
   */
  rtb_RelationalOperator_eno4 = CtAp_ChrgComM_ATOM_TimeCnt(ChrgComM_Active,
    ((uint16_T)ChrgComM_dt50ms), DCChrMgmt_ChrgCommDTCEnaTim_CFG,
    &CtAp_ChrgComM__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S119>/ATOM_TimeCnt' */

  /* Logic: '<S119>/LogicalOperator' incorporates:
   *  Logic: '<S119>/LogicalOperator1'
   *  Logic: '<S119>/LogicalOperator2'
   */
  rty_DCChrMgmt_DcChrgCommErrEn_0 =
    (!rtu_DCChrMgmt_DcChrgCommInpSig_->ComM_ErrResDCCANBusOffInfo &&
     rtu_DCChrMgmt_DcChrgCommIn_eiyx && !rtu_DCChrMgmt_DcChrgCommIn_a2of &&
     rtb_RelationalOperator_eno4);
  return rty_DCChrMgmt_DcChrgCommErrEn_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S80>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S82>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S87>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S89>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrRes_aodf(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_)
{
  /* RelationalOperator: '<S127>/Equal' incorporates:
   *  Constant: '<S127>/Define'
   */
  return rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_Init);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S80>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S81>/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_jmra(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_)
{
  /* SignalConversion generated from: '<S128>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' */
  return rtu_DCChrMgmt_DcChrgCommInpSig_;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S81>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_k3s2(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_gu3w_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S132>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S132>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S136>/Constant2'
     *  Constant: '<S136>/Constant4'
     *  Switch: '<S136>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S136>/Switch' incorporates:
       *  Constant: '<S136>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S136>/Constant3'
     *  RelationalOperator: '<S136>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S138>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S138>/Sum' incorporates:
       *  UnitDelay: '<S138>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S138>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S138>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S138>/MinMax' */
    } else {
      /* Sum: '<S138>/Sum' incorporates:
       *  Constant: '<S136>/Constant23'
       *  UnitDelay: '<S138>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S138>/Switch1' */

    /* RelationalOperator: '<S136>/Equal2' incorporates:
     *  Constant: '<S136>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S137>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S137>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S137>/Sum' incorporates:
       *  UnitDelay: '<S137>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf);

      /* MinMax: '<S137>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf) {
        /* Sum: '<S137>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf = u0;
      }

      /* End of MinMax: '<S137>/MinMax' */
    } else {
      /* Sum: '<S137>/Sum' incorporates:
       *  Constant: '<S136>/Constant37'
       *  UnitDelay: '<S137>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf = ((uint16_T)0U);
    }

    /* End of Switch: '<S137>/Switch1' */

    /* Switch: '<S136>/Switch8' incorporates:
     *  Constant: '<S136>/Constant6'
     *  Constant: '<S136>/DEBOUNCING'
     *  RelationalOperator: '<S136>/Equal6'
     *  RelationalOperator: '<S137>/B_MiHold'
     *  RelationalOperator: '<S138>/B_MiHold'
     *  Switch: '<S136>/Switch2'
     *  Switch: '<S136>/Switch3'
     *  Switch: '<S136>/Switch4'
     *  UnitDelay: '<S137>/UnitDelay'
     *  UnitDelay: '<S138>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_daqf >
               rtu_MatureTime) {
      /* Switch: '<S136>/Switch2' incorporates:
       *  Constant: '<S136>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S136>/Switch3' incorporates:
       *  Constant: '<S136>/DEBOUNCING_F'
       *  Switch: '<S136>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S136>/Switch4' incorporates:
       *  Constant: '<S136>/PASSED'
       *  Switch: '<S136>/Switch2'
       *  Switch: '<S136>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S136>/Switch3' incorporates:
       *  Constant: '<S136>/DEBOUNCING_P'
       *  Switch: '<S136>/Switch2'
       *  Switch: '<S136>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S136>/Switch8' */

    /* Switch: '<S136>/Switch6' incorporates:
     *  Constant: '<S136>/Constant30'
     *  Constant: '<S136>/Constant31'
     *  RelationalOperator: '<S136>/Equal3'
     *  RelationalOperator: '<S136>/Equal4'
     *  Switch: '<S136>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S136>/Switch6' incorporates:
       *  Constant: '<S136>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S136>/Switch7' incorporates:
       *  Constant: '<S136>/Constant11'
       *  Switch: '<S136>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S136>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S132>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
 *    '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrEna_ejoe(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommIn_brpj, boolean_T rtu_DCChrMgmt_DcChrgCommIn_lhcf,
  ARID_DEF_DCChrMgmt_DcChr_kfub_T *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_b20x;
  boolean_T rty_DCChrMgmt_DcChrgCommErrEn_0;

  /* Outputs for Atomic SubSystem: '<S133>/ATOM_TimeCnt' */

  /* Constant: '<S133>/Define' incorporates:
   *  Constant: '<S133>/CAL'
   *  Constant: '<S133>/Define1'
   */
  rtb_RelationalOperator_b20x = CtAp_ChrgComM_ATOM_TimeCnt(ChrgComM_Active,
    ((uint16_T)ChrgComM_dt50ms), DCChrMgmt_ChrgCommDTCEnaTim_CFG,
    &CtAp_ChrgComM__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S133>/ATOM_TimeCnt' */

  /* Logic: '<S133>/LogicalOperator' incorporates:
   *  Logic: '<S133>/LogicalOperator1'
   *  Logic: '<S133>/LogicalOperator2'
   */
  rty_DCChrMgmt_DcChrgCommErrEn_0 = (rtu_DCChrMgmt_DcChrgCommIn_lhcf &&
    !rtu_DCChrMgmt_DcChrgCommInpSig_ &&
    !rtu_DCChrMgmt_DcChrgCommIn_brpj->ComM_ErrResDCCANBusOffInfo &&
    rtb_RelationalOperator_b20x);
  return rty_DCChrMgmt_DcChrgCommErrEn_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S82>/CChrMgmt_DcChrgCommErrSetCdn'
 *    '<S97>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T Ct_CChrMgmt_DcChrgCommErrSetCdn(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_)
{
  /* SignalConversion generated from: '<S141>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' */
  return rtu_DCChrMgmt_DcChrgCommInpSig_;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S83>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S84>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_cx0e(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_gkii)
{
  /* Logic: '<S148>/LogicalOperator1' incorporates:
   *  Constant: '<S148>/Define'
   *  RelationalOperator: '<S148>/Equal'
   */
  return rtu_DCChrMgmt_DcChrgCommIn_gkii && (rtu_DCChrMgmt_DcChrgCommInpSig_ ==
    ((uint8_T)ChrgComM_Result0xAA));
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S84>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_buk3(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_iae2_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S152>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S152>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S156>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S156>/Constant2'
     *  Constant: '<S156>/Constant4'
     *  Switch: '<S156>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S156>/Switch' incorporates:
       *  Constant: '<S156>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S156>/Constant3'
     *  RelationalOperator: '<S156>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S158>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S158>/Sum' incorporates:
       *  UnitDelay: '<S158>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S158>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S158>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S158>/MinMax' */
    } else {
      /* Sum: '<S158>/Sum' incorporates:
       *  Constant: '<S156>/Constant23'
       *  UnitDelay: '<S158>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S158>/Switch1' */

    /* RelationalOperator: '<S156>/Equal2' incorporates:
     *  Constant: '<S156>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S157>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S157>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S157>/Sum' incorporates:
       *  UnitDelay: '<S157>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx);

      /* MinMax: '<S157>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx) {
        /* Sum: '<S157>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx = u0;
      }

      /* End of MinMax: '<S157>/MinMax' */
    } else {
      /* Sum: '<S157>/Sum' incorporates:
       *  Constant: '<S156>/Constant37'
       *  UnitDelay: '<S157>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx = ((uint16_T)0U);
    }

    /* End of Switch: '<S157>/Switch1' */

    /* Switch: '<S156>/Switch8' incorporates:
     *  Constant: '<S156>/Constant6'
     *  Constant: '<S156>/DEBOUNCING'
     *  RelationalOperator: '<S156>/Equal6'
     *  RelationalOperator: '<S157>/B_MiHold'
     *  RelationalOperator: '<S158>/B_MiHold'
     *  Switch: '<S156>/Switch2'
     *  Switch: '<S156>/Switch3'
     *  Switch: '<S156>/Switch4'
     *  UnitDelay: '<S157>/UnitDelay'
     *  UnitDelay: '<S158>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hdcx >
               rtu_MatureTime) {
      /* Switch: '<S156>/Switch2' incorporates:
       *  Constant: '<S156>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S156>/Switch3' incorporates:
       *  Constant: '<S156>/DEBOUNCING_F'
       *  Switch: '<S156>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S156>/Switch4' incorporates:
       *  Constant: '<S156>/PASSED'
       *  Switch: '<S156>/Switch2'
       *  Switch: '<S156>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S156>/Switch3' incorporates:
       *  Constant: '<S156>/DEBOUNCING_P'
       *  Switch: '<S156>/Switch2'
       *  Switch: '<S156>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S156>/Switch8' */

    /* Switch: '<S156>/Switch6' incorporates:
     *  Constant: '<S156>/Constant30'
     *  Constant: '<S156>/Constant31'
     *  RelationalOperator: '<S156>/Equal3'
     *  RelationalOperator: '<S156>/Equal4'
     *  Switch: '<S156>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S156>/Switch6' incorporates:
       *  Constant: '<S156>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S156>/Switch7' incorporates:
       *  Constant: '<S156>/Constant11'
       *  Switch: '<S156>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S156>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S152>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S85>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S86>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_dlmy(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_dfxg,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_pai4, ARID_DEF_DCChrMgmt_DcChr_glkg_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  boolean_T rty_DCChrMgmt_DcChrgCommErrSe_0;

  /* Logic: '<S162>/LogicalOperator1' incorporates:
   *  Constant: '<S162>/Define'
   *  RelationalOperator: '<S162>/Equal'
   */
  rty_DCChrMgmt_DcChrgCommErrSe_0 = (rtu_DCChrMgmt_DcChrgCommIn_dfxg &&
    (rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_Result0xAA)));

  /* Logic: '<S162>/LogicalOperator4' incorporates:
   *  Delay: '<S162>/Delay'
   *  Logic: '<S162>/LogicalOperator6'
   */
  CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE =
    ((CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE &&
      rty_DCChrMgmt_DcChrgCommErrSe_0) || rtu_DCChrMgmt_DcChrgCommIn_pai4);

  /* Logic: '<S162>/LogicalOperator2' incorporates:
   *  Delay: '<S162>/Delay'
   *  Logic: '<S162>/LogicalOperator5'
   */
  return rty_DCChrMgmt_DcChrgCommErrSe_0 &&
    !CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S86>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_avlu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_nybi_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S166>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S166>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S170>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant2'
     *  Constant: '<S170>/Constant4'
     *  Switch: '<S170>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S170>/Switch' incorporates:
       *  Constant: '<S170>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S170>/Switch1' */

    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S170>/Constant3'
     *  RelationalOperator: '<S170>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S172>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S172>/Sum' incorporates:
       *  UnitDelay: '<S172>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S172>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S172>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S172>/MinMax' */
    } else {
      /* Sum: '<S172>/Sum' incorporates:
       *  Constant: '<S170>/Constant23'
       *  UnitDelay: '<S172>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S172>/Switch1' */

    /* RelationalOperator: '<S170>/Equal2' incorporates:
     *  Constant: '<S170>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S171>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S171>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S171>/Sum' incorporates:
       *  UnitDelay: '<S171>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji);

      /* MinMax: '<S171>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji) {
        /* Sum: '<S171>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji = u0;
      }

      /* End of MinMax: '<S171>/MinMax' */
    } else {
      /* Sum: '<S171>/Sum' incorporates:
       *  Constant: '<S170>/Constant37'
       *  UnitDelay: '<S171>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji = ((uint16_T)0U);
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Switch: '<S170>/Switch8' incorporates:
     *  Constant: '<S170>/Constant6'
     *  Constant: '<S170>/DEBOUNCING'
     *  RelationalOperator: '<S170>/Equal6'
     *  RelationalOperator: '<S171>/B_MiHold'
     *  RelationalOperator: '<S172>/B_MiHold'
     *  Switch: '<S170>/Switch2'
     *  Switch: '<S170>/Switch3'
     *  Switch: '<S170>/Switch4'
     *  UnitDelay: '<S171>/UnitDelay'
     *  UnitDelay: '<S172>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_moji >
               rtu_MatureTime) {
      /* Switch: '<S170>/Switch2' incorporates:
       *  Constant: '<S170>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S170>/Switch3' incorporates:
       *  Constant: '<S170>/DEBOUNCING_F'
       *  Switch: '<S170>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S170>/Switch4' incorporates:
       *  Constant: '<S170>/PASSED'
       *  Switch: '<S170>/Switch2'
       *  Switch: '<S170>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S170>/Switch3' incorporates:
       *  Constant: '<S170>/DEBOUNCING_P'
       *  Switch: '<S170>/Switch2'
       *  Switch: '<S170>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S170>/Switch8' */

    /* Switch: '<S170>/Switch6' incorporates:
     *  Constant: '<S170>/Constant30'
     *  Constant: '<S170>/Constant31'
     *  RelationalOperator: '<S170>/Equal3'
     *  RelationalOperator: '<S170>/Equal4'
     *  Switch: '<S170>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S170>/Switch6' incorporates:
       *  Constant: '<S170>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCROTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S170>/Switch7' incorporates:
       *  Constant: '<S170>/Constant11'
       *  Switch: '<S170>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCROTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S170>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S166>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S87>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S88>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_fn0l(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_lsl3,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_oxto, ARID_DEF_DCChrMgmt_DcChr_mynw_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  boolean_T rty_DCChrMgmt_DcChrgCommErrSe_0;

  /* Logic: '<S176>/LogicalOperator2' */
  rty_DCChrMgmt_DcChrgCommErrSe_0 = (rtu_DCChrMgmt_DcChrgCommInpSig_ ||
    rtu_DCChrMgmt_DcChrgCommIn_lsl3);

  /* Logic: '<S176>/LogicalOperator3' incorporates:
   *  Delay: '<S176>/Delay'
   *  Logic: '<S176>/LogicalOperator5'
   */
  CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE =
    ((CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE &&
      rty_DCChrMgmt_DcChrgCommErrSe_0) || rtu_DCChrMgmt_DcChrgCommIn_oxto);

  /* Logic: '<S176>/LogicalOperator1' incorporates:
   *  Delay: '<S176>/Delay'
   *  Logic: '<S176>/LogicalOperator4'
   */
  return rty_DCChrMgmt_DcChrgCommErrSe_0 &&
    !CtAp_ChrgComM__ARID_DEF_arg->Delay_DSTATE;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S88>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_pbqj(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_ovjg_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S180>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S180>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S184>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S184>/Constant2'
     *  Constant: '<S184>/Constant4'
     *  Switch: '<S184>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S184>/Switch' incorporates:
       *  Constant: '<S184>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S184>/Constant3'
     *  RelationalOperator: '<S184>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S186>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S186>/Sum' incorporates:
       *  UnitDelay: '<S186>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S186>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S186>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S186>/MinMax' */
    } else {
      /* Sum: '<S186>/Sum' incorporates:
       *  Constant: '<S184>/Constant23'
       *  UnitDelay: '<S186>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S186>/Switch1' */

    /* RelationalOperator: '<S184>/Equal2' incorporates:
     *  Constant: '<S184>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S185>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S185>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S185>/Sum' incorporates:
       *  UnitDelay: '<S185>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd);

      /* MinMax: '<S185>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd) {
        /* Sum: '<S185>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd = u0;
      }

      /* End of MinMax: '<S185>/MinMax' */
    } else {
      /* Sum: '<S185>/Sum' incorporates:
       *  Constant: '<S184>/Constant37'
       *  UnitDelay: '<S185>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd = ((uint16_T)0U);
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Switch: '<S184>/Switch8' incorporates:
     *  Constant: '<S184>/Constant6'
     *  Constant: '<S184>/DEBOUNCING'
     *  RelationalOperator: '<S184>/Equal6'
     *  RelationalOperator: '<S185>/B_MiHold'
     *  RelationalOperator: '<S186>/B_MiHold'
     *  Switch: '<S184>/Switch2'
     *  Switch: '<S184>/Switch3'
     *  Switch: '<S184>/Switch4'
     *  UnitDelay: '<S185>/UnitDelay'
     *  UnitDelay: '<S186>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_e0bd >
               rtu_MatureTime) {
      /* Switch: '<S184>/Switch2' incorporates:
       *  Constant: '<S184>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S184>/Switch3' incorporates:
       *  Constant: '<S184>/DEBOUNCING_F'
       *  Switch: '<S184>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S184>/Switch4' incorporates:
       *  Constant: '<S184>/PASSED'
       *  Switch: '<S184>/Switch2'
       *  Switch: '<S184>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S184>/Switch3' incorporates:
       *  Constant: '<S184>/DEBOUNCING_P'
       *  Switch: '<S184>/Switch2'
       *  Switch: '<S184>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S184>/Switch8' */

    /* Switch: '<S184>/Switch6' incorporates:
     *  Constant: '<S184>/Constant30'
     *  Constant: '<S184>/Constant31'
     *  RelationalOperator: '<S184>/Equal3'
     *  RelationalOperator: '<S184>/Equal4'
     *  Switch: '<S184>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S184>/Switch6' incorporates:
       *  Constant: '<S184>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCSDTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S184>/Switch7' incorporates:
       *  Constant: '<S184>/Constant11'
       *  Switch: '<S184>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCSDTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S184>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S180>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S89>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S90>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_olfk(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_alfi)
{
  /* Logic: '<S190>/LogicalOperator1' incorporates:
   *  Logic: '<S190>/LogicalOperator'
   */
  return rtu_DCChrMgmt_DcChrgCommIn_alfi && !rtu_DCChrMgmt_DcChrgCommInpSig_;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S90>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_mel0(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_hu4v_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S194>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S194>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S198>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S198>/Constant2'
     *  Constant: '<S198>/Constant4'
     *  Switch: '<S198>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S198>/Switch' incorporates:
       *  Constant: '<S198>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S198>/Constant3'
     *  RelationalOperator: '<S198>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S200>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S200>/Sum' incorporates:
       *  UnitDelay: '<S200>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S200>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S200>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S200>/MinMax' */
    } else {
      /* Sum: '<S200>/Sum' incorporates:
       *  Constant: '<S198>/Constant23'
       *  UnitDelay: '<S200>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S200>/Switch1' */

    /* RelationalOperator: '<S198>/Equal2' incorporates:
     *  Constant: '<S198>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S199>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S199>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S199>/Sum' incorporates:
       *  UnitDelay: '<S199>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp);

      /* MinMax: '<S199>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp) {
        /* Sum: '<S199>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp = u0;
      }

      /* End of MinMax: '<S199>/MinMax' */
    } else {
      /* Sum: '<S199>/Sum' incorporates:
       *  Constant: '<S198>/Constant37'
       *  UnitDelay: '<S199>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp = ((uint16_T)0U);
    }

    /* End of Switch: '<S199>/Switch1' */

    /* Switch: '<S198>/Switch8' incorporates:
     *  Constant: '<S198>/Constant6'
     *  Constant: '<S198>/DEBOUNCING'
     *  RelationalOperator: '<S198>/Equal6'
     *  RelationalOperator: '<S199>/B_MiHold'
     *  RelationalOperator: '<S200>/B_MiHold'
     *  Switch: '<S198>/Switch2'
     *  Switch: '<S198>/Switch3'
     *  Switch: '<S198>/Switch4'
     *  UnitDelay: '<S199>/UnitDelay'
     *  UnitDelay: '<S200>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_cinp >
               rtu_MatureTime) {
      /* Switch: '<S198>/Switch2' incorporates:
       *  Constant: '<S198>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S198>/Switch3' incorporates:
       *  Constant: '<S198>/DEBOUNCING_F'
       *  Switch: '<S198>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S198>/Switch4' incorporates:
       *  Constant: '<S198>/PASSED'
       *  Switch: '<S198>/Switch2'
       *  Switch: '<S198>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S198>/Switch3' incorporates:
       *  Constant: '<S198>/DEBOUNCING_P'
       *  Switch: '<S198>/Switch2'
       *  Switch: '<S198>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S198>/Switch8' */

    /* Switch: '<S198>/Switch6' incorporates:
     *  Constant: '<S198>/Constant30'
     *  Constant: '<S198>/Constant31'
     *  RelationalOperator: '<S198>/Equal3'
     *  RelationalOperator: '<S198>/Equal4'
     *  Switch: '<S198>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S198>/Switch6' incorporates:
       *  Constant: '<S198>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCSTTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S198>/Switch7' incorporates:
       *  Constant: '<S198>/Constant11'
       *  Switch: '<S198>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCSTTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S198>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S194>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S91>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S92>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrRes_cjom(int8_T rtu_DCChrMgmt_DcChrgCommInpSig_,
  int8_T rtu_DCChrMgmt_DcChrgCommIn_kfrl)
{
  /* Logic: '<S203>/LogicalOperator' incorporates:
   *  Constant: '<S203>/CAL1'
   *  Constant: '<S203>/CAL2'
   *  RelationalOperator: '<S203>/Equal'
   *  RelationalOperator: '<S203>/Equal1'
   */
  return (rtu_DCChrMgmt_DcChrgCommIn_kfrl < DCChrMgmt_DcPortErrRelsTempLv1_CFG) &&
    (rtu_DCChrMgmt_DcChrgCommInpSig_ < DCChrMgmt_DcPortErrRelsTempLv1_CFG);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S91>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S92>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_fbfu(int8_T rtu_DCChrMgmt_DcChrgCommInpSig_,
  int8_T rtu_DCChrMgmt_DcChrgCommIn_nco5)
{
  /* Logic: '<S204>/LogicalOperator1' incorporates:
   *  Constant: '<S204>/CAL'
   *  Constant: '<S204>/CAL1'
   *  Constant: '<S204>/CAL2'
   *  Constant: '<S204>/CAL3'
   *  Logic: '<S204>/LogicalOperator'
   *  Logic: '<S204>/LogicalOperator2'
   *  RelationalOperator: '<S204>/RelationalOperator'
   *  RelationalOperator: '<S204>/RelationalOperator1'
   *  RelationalOperator: '<S204>/RelationalOperator4'
   *  RelationalOperator: '<S204>/RelationalOperator5'
   */
  return ((rtu_DCChrMgmt_DcChrgCommInpSig_ >= DCChrMgmt_DcPortErrTempLv1_CFG) &&
          (rtu_DCChrMgmt_DcChrgCommInpSig_ < DCChrMgmt_DcPortErrTemplv2_CFG)) ||
    ((rtu_DCChrMgmt_DcChrgCommIn_nco5 >= DCChrMgmt_DcPortErrTempLv1_CFG) &&
     (rtu_DCChrMgmt_DcChrgCommIn_nco5 < DCChrMgmt_DcPortErrTemplv2_CFG));
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S92>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_ir2s(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_dc2b_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S208>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S208>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S212>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S212>/Constant2'
     *  Constant: '<S212>/Constant4'
     *  Switch: '<S212>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S212>/Switch' incorporates:
       *  Constant: '<S212>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S212>/Switch1' */

    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S212>/Constant3'
     *  RelationalOperator: '<S212>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S214>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S214>/Sum' incorporates:
       *  UnitDelay: '<S214>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S214>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S214>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S214>/MinMax' */
    } else {
      /* Sum: '<S214>/Sum' incorporates:
       *  Constant: '<S212>/Constant23'
       *  UnitDelay: '<S214>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S214>/Switch1' */

    /* RelationalOperator: '<S212>/Equal2' incorporates:
     *  Constant: '<S212>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S213>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S213>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S213>/Sum' incorporates:
       *  UnitDelay: '<S213>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n);

      /* MinMax: '<S213>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n) {
        /* Sum: '<S213>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n = u0;
      }

      /* End of MinMax: '<S213>/MinMax' */
    } else {
      /* Sum: '<S213>/Sum' incorporates:
       *  Constant: '<S212>/Constant37'
       *  UnitDelay: '<S213>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n = ((uint16_T)0U);
    }

    /* End of Switch: '<S213>/Switch1' */

    /* Switch: '<S212>/Switch8' incorporates:
     *  Constant: '<S212>/Constant6'
     *  Constant: '<S212>/DEBOUNCING'
     *  RelationalOperator: '<S212>/Equal6'
     *  RelationalOperator: '<S213>/B_MiHold'
     *  RelationalOperator: '<S214>/B_MiHold'
     *  Switch: '<S212>/Switch2'
     *  Switch: '<S212>/Switch3'
     *  Switch: '<S212>/Switch4'
     *  UnitDelay: '<S213>/UnitDelay'
     *  UnitDelay: '<S214>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_hb5n >
               rtu_MatureTime) {
      /* Switch: '<S212>/Switch2' incorporates:
       *  Constant: '<S212>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S212>/Switch3' incorporates:
       *  Constant: '<S212>/DEBOUNCING_F'
       *  Switch: '<S212>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S212>/Switch4' incorporates:
       *  Constant: '<S212>/PASSED'
       *  Switch: '<S212>/Switch2'
       *  Switch: '<S212>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S212>/Switch3' incorporates:
       *  Constant: '<S212>/DEBOUNCING_P'
       *  Switch: '<S212>/Switch2'
       *  Switch: '<S212>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S212>/Switch8' */

    /* Switch: '<S212>/Switch6' incorporates:
     *  Constant: '<S212>/Constant30'
     *  Constant: '<S212>/Constant31'
     *  RelationalOperator: '<S212>/Equal3'
     *  RelationalOperator: '<S212>/Equal4'
     *  Switch: '<S212>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S212>/Switch6' incorporates:
       *  Constant: '<S212>/Constant32'
       */
      DCChrMgmt_ErrResDcPortTempErrLvl1DTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S212>/Switch7' incorporates:
       *  Constant: '<S212>/Constant11'
       *  Switch: '<S212>/Switch6'
       */
      DCChrMgmt_ErrResDcPortTempErrLvl1DTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S212>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S208>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn'
 *    '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn'
 *    '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrEna_lgvq(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, const dt_ComM_EPTCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommIn_lroc, boolean_T rtu_DCChrMgmt_DcChrgCommIn_ncb0,
  ARID_DEF_DCChrMgmt_DcChr_dpik_T *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator_mcf4;
  boolean_T rty_DCChrMgmt_DcChrgCommErrEn_0;

  /* Outputs for Atomic SubSystem: '<S209>/ATOM_TimeCnt' */

  /* Constant: '<S209>/Define' incorporates:
   *  Constant: '<S209>/CAL'
   *  Constant: '<S209>/Define1'
   */
  rtb_RelationalOperator_mcf4 = CtAp_ChrgComM_ATOM_TimeCnt(ChrgComM_Active,
    ((uint16_T)ChrgComM_dt50ms), DCChrMgmt_ChrgCommDTCEnaTim_CFG,
    &CtAp_ChrgComM__ARID_DEF_arg->ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S209>/ATOM_TimeCnt' */

  /* Logic: '<S209>/LogicalOperator' incorporates:
   *  Logic: '<S209>/LogicalOperator1'
   *  Logic: '<S209>/LogicalOperator2'
   */
  rty_DCChrMgmt_DcChrgCommErrEn_0 = (!rtu_DCChrMgmt_DcChrgCommInpSig_ &&
    !rtu_DCChrMgmt_DcChrgCommIn_lroc->ComM_ErrResEPTCANBusOffInfo &&
    rtu_DCChrMgmt_DcChrgCommIn_ncb0 && rtb_RelationalOperator_mcf4);
  return rty_DCChrMgmt_DcChrgCommErrEn_0;
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S93>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S94>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrRes_bd3r(int8_T rtu_DCChrMgmt_DcChrgCommInpSig_,
  int8_T rtu_DCChrMgmt_DcChrgCommIn_blpx)
{
  /* Logic: '<S217>/LogicalOperator' incorporates:
   *  Constant: '<S217>/CAL1'
   *  Constant: '<S217>/CAL2'
   *  RelationalOperator: '<S217>/Equal'
   *  RelationalOperator: '<S217>/Equal1'
   */
  return ((int16_T)rtu_DCChrMgmt_DcChrgCommIn_blpx <
          DCChrMgmt_DcPortErrRelsTempLv2_CFG) && ((int16_T)
    rtu_DCChrMgmt_DcChrgCommInpSig_ < DCChrMgmt_DcPortErrRelsTempLv2_CFG);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S93>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S94>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_krin(int8_T rtu_DCChrMgmt_DcChrgCommInpSig_,
  int8_T rtu_DCChrMgmt_DcChrgCommIn_myk4)
{
  /* Logic: '<S218>/LogicalOperator1' incorporates:
   *  Constant: '<S218>/CAL1'
   *  Constant: '<S218>/CAL4'
   *  RelationalOperator: '<S218>/RelationalOperator'
   *  RelationalOperator: '<S218>/RelationalOperator1'
   */
  return (rtu_DCChrMgmt_DcChrgCommIn_myk4 >= DCChrMgmt_DcPortErrTemplv2_CFG) ||
    (rtu_DCChrMgmt_DcChrgCommInpSig_ >= DCChrMgmt_DcPortErrTemplv2_CFG);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S94>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_mhbx(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_dizy_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S222>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S222>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S226>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant2'
     *  Constant: '<S226>/Constant4'
     *  Switch: '<S226>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S226>/Switch' incorporates:
       *  Constant: '<S226>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S226>/Constant3'
     *  RelationalOperator: '<S226>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S228>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S228>/Sum' incorporates:
       *  UnitDelay: '<S228>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S228>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S228>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S228>/MinMax' */
    } else {
      /* Sum: '<S228>/Sum' incorporates:
       *  Constant: '<S226>/Constant23'
       *  UnitDelay: '<S228>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S228>/Switch1' */

    /* RelationalOperator: '<S226>/Equal2' incorporates:
     *  Constant: '<S226>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S227>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S227>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S227>/Sum' incorporates:
       *  UnitDelay: '<S227>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i);

      /* MinMax: '<S227>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i) {
        /* Sum: '<S227>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i = u0;
      }

      /* End of MinMax: '<S227>/MinMax' */
    } else {
      /* Sum: '<S227>/Sum' incorporates:
       *  Constant: '<S226>/Constant37'
       *  UnitDelay: '<S227>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i = ((uint16_T)0U);
    }

    /* End of Switch: '<S227>/Switch1' */

    /* Switch: '<S226>/Switch8' incorporates:
     *  Constant: '<S226>/Constant6'
     *  Constant: '<S226>/DEBOUNCING'
     *  RelationalOperator: '<S226>/Equal6'
     *  RelationalOperator: '<S227>/B_MiHold'
     *  RelationalOperator: '<S228>/B_MiHold'
     *  Switch: '<S226>/Switch2'
     *  Switch: '<S226>/Switch3'
     *  Switch: '<S226>/Switch4'
     *  UnitDelay: '<S227>/UnitDelay'
     *  UnitDelay: '<S228>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_he4i >
               rtu_MatureTime) {
      /* Switch: '<S226>/Switch2' incorporates:
       *  Constant: '<S226>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S226>/Switch3' incorporates:
       *  Constant: '<S226>/DEBOUNCING_F'
       *  Switch: '<S226>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S226>/Switch4' incorporates:
       *  Constant: '<S226>/PASSED'
       *  Switch: '<S226>/Switch2'
       *  Switch: '<S226>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S226>/Switch3' incorporates:
       *  Constant: '<S226>/DEBOUNCING_P'
       *  Switch: '<S226>/Switch2'
       *  Switch: '<S226>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S226>/Switch8' */

    /* Switch: '<S226>/Switch6' incorporates:
     *  Constant: '<S226>/Constant30'
     *  Constant: '<S226>/Constant31'
     *  RelationalOperator: '<S226>/Equal3'
     *  RelationalOperator: '<S226>/Equal4'
     *  Switch: '<S226>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S226>/Switch6' incorporates:
       *  Constant: '<S226>/Constant32'
       */
      DCChrMgmt_ErrResDcPortTempErrLvl2DTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S226>/Switch7' incorporates:
       *  Constant: '<S226>/Constant11'
       *  Switch: '<S226>/Switch6'
       */
      DCChrMgmt_ErrResDcPortTempErrLvl2DTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S226>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S222>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S95>/DCChrMgmt_DcChrgCommErrResetCdn'
 *    '<S96>/DCChrMgmt_DcChrgCommErrResetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrRes_nx2o(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, uint8_T rtu_DCChrMgmt_DcChrgCommIn_lmks)
{
  /* Logic: '<S231>/LogicalOperator' incorporates:
   *  Constant: '<S231>/Define'
   *  Constant: '<S231>/Define1'
   *  RelationalOperator: '<S231>/Equal'
   *  RelationalOperator: '<S231>/Equal1'
   */
  return (rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_SensorNormal)) &&
    (rtu_DCChrMgmt_DcChrgCommIn_lmks == ((uint8_T)ChrgComM_SensorNormal));
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S95>/DCChrMgmt_DcChrgCommErrSetCdn'
 *    '<S96>/DCChrMgmt_DcChrgCommErrSetCdn'
 */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

boolean_T DCChrMgmt_DcChrgCommErrSet_gq3a(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, uint8_T rtu_DCChrMgmt_DcChrgCommIn_kbnd)
{
  /* Logic: '<S232>/LogicalOperator1' incorporates:
   *  Constant: '<S232>/Define'
   *  Constant: '<S232>/Define1'
   *  Constant: '<S232>/Define2'
   *  Constant: '<S232>/Define3'
   *  RelationalOperator: '<S232>/RelationalOperator'
   *  RelationalOperator: '<S232>/RelationalOperator1'
   *  RelationalOperator: '<S232>/RelationalOperator2'
   *  RelationalOperator: '<S232>/RelationalOperator3'
   */
  return (rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_Damage)) ||
    (rtu_DCChrMgmt_DcChrgCommInpSig_ == ((uint8_T)ChrgComM_ShortCircuit)) ||
    (rtu_DCChrMgmt_DcChrgCommIn_kbnd == ((uint8_T)ChrgComM_Damage)) ||
    (rtu_DCChrMgmt_DcChrgCommIn_kbnd == ((uint8_T)ChrgComM_ShortCircuit));
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S96>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_p2j0(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_hr3b_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S236>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S236>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S240>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S240>/Constant2'
     *  Constant: '<S240>/Constant4'
     *  Switch: '<S240>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S240>/Switch' incorporates:
       *  Constant: '<S240>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S240>/Constant3'
     *  RelationalOperator: '<S240>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S242>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S242>/Sum' incorporates:
       *  UnitDelay: '<S242>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S242>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S242>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S242>/MinMax' */
    } else {
      /* Sum: '<S242>/Sum' incorporates:
       *  Constant: '<S240>/Constant23'
       *  UnitDelay: '<S242>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S242>/Switch1' */

    /* RelationalOperator: '<S240>/Equal2' incorporates:
     *  Constant: '<S240>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S241>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S241>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S241>/Sum' incorporates:
       *  UnitDelay: '<S241>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b);

      /* MinMax: '<S241>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b) {
        /* Sum: '<S241>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b = u0;
      }

      /* End of MinMax: '<S241>/MinMax' */
    } else {
      /* Sum: '<S241>/Sum' incorporates:
       *  Constant: '<S240>/Constant37'
       *  UnitDelay: '<S241>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b = ((uint16_T)0U);
    }

    /* End of Switch: '<S241>/Switch1' */

    /* Switch: '<S240>/Switch8' incorporates:
     *  Constant: '<S240>/Constant6'
     *  Constant: '<S240>/DEBOUNCING'
     *  RelationalOperator: '<S240>/Equal6'
     *  RelationalOperator: '<S241>/B_MiHold'
     *  RelationalOperator: '<S242>/B_MiHold'
     *  Switch: '<S240>/Switch2'
     *  Switch: '<S240>/Switch3'
     *  Switch: '<S240>/Switch4'
     *  UnitDelay: '<S241>/UnitDelay'
     *  UnitDelay: '<S242>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_iz4b >
               rtu_MatureTime) {
      /* Switch: '<S240>/Switch2' incorporates:
       *  Constant: '<S240>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S240>/Switch3' incorporates:
       *  Constant: '<S240>/DEBOUNCING_F'
       *  Switch: '<S240>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S240>/Switch4' incorporates:
       *  Constant: '<S240>/PASSED'
       *  Switch: '<S240>/Switch2'
       *  Switch: '<S240>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S240>/Switch3' incorporates:
       *  Constant: '<S240>/DEBOUNCING_P'
       *  Switch: '<S240>/Switch2'
       *  Switch: '<S240>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S240>/Switch8' */

    /* Switch: '<S240>/Switch6' incorporates:
     *  Constant: '<S240>/Constant30'
     *  Constant: '<S240>/Constant31'
     *  RelationalOperator: '<S240>/Equal3'
     *  RelationalOperator: '<S240>/Equal4'
     *  Switch: '<S240>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S240>/Switch6' incorporates:
       *  Constant: '<S240>/Constant32'
       */
      DCChrMgmt_ErrResDcPortTempSnsrErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S240>/Switch7' incorporates:
       *  Constant: '<S240>/Constant11'
       *  Switch: '<S240>/Switch6'
       */
      DCChrMgmt_ErrResDcPortTempSnsrErrDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S240>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S236>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Output and update for atomic system: '<S97>/ATOM_U16ErrorHandle' */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void CtAp_C_ATOM_U16ErrorHandle_nctk(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_ATOM_U16ErrHnd_jb3c_T
  *CtAp_ChrgComM__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S244>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S244>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S248>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S248>/Constant2'
     *  Constant: '<S248>/Constant4'
     *  Switch: '<S248>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S248>/Switch' incorporates:
       *  Constant: '<S248>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S248>/Switch1' */

    /* Switch: '<S250>/Switch1' incorporates:
     *  Constant: '<S248>/Constant3'
     *  RelationalOperator: '<S248>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S250>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S250>/Sum' incorporates:
       *  UnitDelay: '<S250>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S250>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S250>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S250>/MinMax' */
    } else {
      /* Sum: '<S250>/Sum' incorporates:
       *  Constant: '<S248>/Constant23'
       *  UnitDelay: '<S250>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S250>/Switch1' */

    /* RelationalOperator: '<S248>/Equal2' incorporates:
     *  Constant: '<S248>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S249>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S249>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S249>/Sum' incorporates:
       *  UnitDelay: '<S249>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw);

      /* MinMax: '<S249>/MinMax' */
      if (u0 <= CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw) {
        /* Sum: '<S249>/Sum' */
        CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw = u0;
      }

      /* End of MinMax: '<S249>/MinMax' */
    } else {
      /* Sum: '<S249>/Sum' incorporates:
       *  Constant: '<S248>/Constant37'
       *  UnitDelay: '<S249>/UnitDelay'
       */
      CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw = ((uint16_T)0U);
    }

    /* End of Switch: '<S249>/Switch1' */

    /* Switch: '<S248>/Switch8' incorporates:
     *  Constant: '<S248>/Constant6'
     *  Constant: '<S248>/DEBOUNCING'
     *  RelationalOperator: '<S248>/Equal6'
     *  RelationalOperator: '<S249>/B_MiHold'
     *  RelationalOperator: '<S250>/B_MiHold'
     *  Switch: '<S248>/Switch2'
     *  Switch: '<S248>/Switch3'
     *  Switch: '<S248>/Switch4'
     *  UnitDelay: '<S249>/UnitDelay'
     *  UnitDelay: '<S250>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE_bfnw >
               rtu_MatureTime) {
      /* Switch: '<S248>/Switch2' incorporates:
       *  Constant: '<S248>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S248>/Switch3' incorporates:
       *  Constant: '<S248>/DEBOUNCING_F'
       *  Switch: '<S248>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgComM__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S248>/Switch4' incorporates:
       *  Constant: '<S248>/PASSED'
       *  Switch: '<S248>/Switch2'
       *  Switch: '<S248>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S248>/Switch3' incorporates:
       *  Constant: '<S248>/DEBOUNCING_P'
       *  Switch: '<S248>/Switch2'
       *  Switch: '<S248>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S248>/Switch8' */

    /* Switch: '<S248>/Switch6' incorporates:
     *  Constant: '<S248>/Constant30'
     *  Constant: '<S248>/Constant31'
     *  RelationalOperator: '<S248>/Equal3'
     *  RelationalOperator: '<S248>/Equal4'
     *  Switch: '<S248>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S248>/Switch6' incorporates:
       *  Constant: '<S248>/Constant32'
       */
      DCChrMgmt_ErrResBEMRxCRMTmtDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S248>/Switch7' incorporates:
       *  Constant: '<S248>/Constant11'
       *  Switch: '<S248>/Switch6'
       */
      DCChrMgmt_ErrResBEMRxCRMTmtDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S248>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S244>/ErrorHandleSysU16' */
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

void R_ChrgComM_Cyclic_50ms(void)
{
  /* local block i/o variables */
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  dt_ComM_DCCANBusOffInfo rtb_TmpSignalConversionAtR_oxnd;
  dt_ComM_BMSErrInfoTimeoutInfo rtb_TmpSignalConversionAtR_hd5t;
  real32_T rtb_TmpSignalConversionAtR_hguz;
  real32_T rtb_TmpSignalConversionAtR_fl4h;
  uint8_T rtb_TmpSignalConversionAtR_icdi;
  uint8_T rtb_TmpSignalConversionAtR_flqm;
  uint8_T rtb_TmpSignalConversionAtR_cplx;
  uint8_T rtb_TmpSignalConversionAtR_hyx0;
  uint8_T rtb_TmpSignalConversionAtR_gbe1;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCMLTmt;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCMLTm;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCROTmt;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCROTm;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCROPre;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCROPr;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCRMTmt;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCCSTmt;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCCSTm;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCSTTmt;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCSTTm;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCRMTm;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCSDTmt;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCSDTm;
  uint8_T rtb_DCChrMgmt_MonResDcPortTempE;
  uint8_T rtb_DCChrMgmt_ErrStatDcPortTemp;
  uint8_T rtb_DCChrMgmt_MonResDcPort_gbqz;
  uint8_T rtb_DCChrMgmt_ErrStatDcPor_m0g3;
  uint8_T rtb_DCChrMgmt_MonResDcPortTempS;
  uint8_T rtb_DCChrMgmt_ErrStatDcPor_csku;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_ov4s;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_bhwa;
  uint8_T rtb_DCChrMgmt_MonResBEMRxCRMPre;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRxCRMPr;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_kmgb;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_bazf;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_outh;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_iowb;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_pjxr;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_fcxc;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_b5qd;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_at2r;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_c2p1;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_jteg;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_adjg;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_krdu;
  uint8_T rtb_DCChrMgmt_MonResBEMRxC_ovvz;
  uint8_T rtb_DCChrMgmt_ErrStatBEMRx_dnjt;
  uint8_T rtb_DCChrMgmt_MonResDcPort_ihg0;
  uint8_T rtb_DCChrMgmt_MonResDcPort_abff;
  uint8_T rtb_DCChrMgmt_ErrStatDcPor_jb42;
  uint8_T rtb_DCChrMgmt_MonResDcPort_amdm;
  uint8_T rtb_DCChrMgmt_ErrStatDcPor_polm;
  uint8_T rtb_Add;
  uint8_T rtb_Switch_e053;
  uint8_T rtb_Switch_ms35;
  uint8_T rtb_Switch_f0r2;
  int8_T rtb_TmpSignalConversionAtR_moco;
  int8_T rtb_TmpSignalConversionAtR_cglv;
  boolean_T rtb_TmpSignalConversionAtR_ehzt;
  boolean_T rtb_TmpSignalConversionAtR_jq21;
  boolean_T rtb_TmpSignalConversionAtR_mnwc;
  boolean_T rtb_TmpSignalConversionAtR_auq0;
  boolean_T rtb_TmpSignalConversionAtR_cpib;
  boolean_T rtb_TmpSignalConversionAtR_b3gc;
  boolean_T rtb_TmpSignalConversionAtR_mr4g;
  boolean_T rtb_TmpSignalConversionAtR_i3ti;
  boolean_T rtb_TmpSignalConversionAtR_od3c;
  boolean_T rtb_TmpSignalConversionAtR_kduh;
  boolean_T rtb_TmpSignalConversionAtR_pbns;
  boolean_T rtb_TmpSignalConversionAtR_fdv0;
  boolean_T rtb_TmpSignalConversionAtR_ngiu;
  boolean_T rtb_TmpSignalConversionAtR_nqxl;
  boolean_T rtb_DCChrMgmt_ErrResDcPort_aspv;
  boolean_T rtb_DCChrMgmt_ErrResDcPort_kob1;
  boolean_T rtb_DCChrMgmt_ErrResDcPort_fpsl;
  boolean_T rtb_BufferToMakeInportVirtual_I;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator_jufh;
  boolean_T rtb_LogicalOperator_f3cp;
  boolean_T rtb_LogicalOperator_kty5;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator_bdhx;
  boolean_T rtb_LogicalOperator_homh;
  boolean_T rtb_LogicalOperator_fhrh;
  boolean_T rtb_LogicalOperator_nn3l;
  boolean_T rtb_LogicalOperator_npq2;
  boolean_T rtb_LogicalOperator_nv4n;
  boolean_T rtb_LogicalOperator_hvyh;
  boolean_T rtb_LogicalOperator_bsdv;
  boolean_T rtb_LogicalOperator1_ni55;
  boolean_T rtb_LogicalOperator4_c1gq;
  boolean_T rtb_RelationalOperator3;
  boolean_T rtb_LogicalOperator_dlfu;
  boolean_T rtb_LogicalOperator1_hv3c;
  boolean_T rtb_RelationalOperator2_n4tr;
  boolean_T rtb_RelationalOperator3_ajl4;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator4;
  boolean_T rtb_RelationalOperator7;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator8;
  boolean_T rtb_RelationalOperator24;
  boolean_T rtb_RelationalOperator9;
  boolean_T rtb_LogicalOperator2_gkqs;
  boolean_T rtb_RelationalOperator15;
  boolean_T rtb_RelationalOperator14;
  boolean_T rtb_LogicalOperator3_pjok;
  boolean_T rtb_RelationalOperator19;
  boolean_T rtb_RelationalOperator18;
  boolean_T rtb_LogicalOperator4_agah;
  boolean_T rtb_RelationalOperator23;
  boolean_T rtb_RelationalOperator22;
  boolean_T rtb_RelationalOperator26;
  boolean_T rtb_RelationalOperator25;
  boolean_T rtb_RelationalOperator26_m5ih;
  boolean_T rtb_RelationalOperator25_h5ez;
  boolean_T rtb_RelationalOperator2_lvtd;
  boolean_T rtb_RelationalOperator1_eoum;
  boolean_T rtb_RelationalOperator3_ggkw;
  boolean_T rtb_RelationalOperator5_l2rg;
  boolean_T rtb_RelationalOperator7_czmj;
  boolean_T rtb_LogicalOperator_dz14;
  boolean_T rtb_Equal;
  boolean_T rtb_LogicalOperator1_dfrc;
  boolean_T rtb_LogicalOperator1_ongz;
  boolean_T rtb_LogicalOperator1_cxf3;
  boolean_T rtb_LogicalOperator1_ecvr;
  boolean_T rtb_LogicalOperator1_lnli;
  boolean_T rtb_DataTypeConversion_a52x;
  boolean_T rtb_LogicalOperator1_fikc;
  boolean_T rtb_LogicalOperator1_ffxt;
  boolean_T rtb_LogicalOperator1_hl21;
  boolean_T rtb_LogicalOperator1_jkja;
  boolean_T rtb_LogicalOperator1_p4tw;
  boolean_T rtb_BufferToMakeInportVirt_e0ps;
  boolean_T rtb_BufferToMakeInportVir_e0psv;
  boolean_T rtb_BufferToMakeInportVi_e0psve;
  boolean_T rtb_BufferToMakeInportV_e0psve5;
  boolean_T rtb_BufferToMakeInport_e0psve5s;
  boolean_T rtb_LogicalOperator_ikax;
  boolean_T rtb_LogicalOperator1_ftla;
  boolean_T rtb_LogicalOperator2_bzbt;
  boolean_T rtb_LogicalOperator2_mwje;
  boolean_T rtb_LogicalOperator_dqfx;
  dt_ComM_BMSSts01TimeoutInfo tmpRead_3;
  dt_ComM_PODSts01TimeoutInfo tmpRead_9;
  real32_T tmpRead_5;
  real32_T tmpRead_6;
  real32_T tmpWrite_i;
  real32_T tmpWrite_j;
  real32_T tmpWrite_k;
  real32_T tmpWrite_l;
  uint16_T rtb_TmpSignalConversionAtR_fx3c;
  uint8_T rtb_TmpSignalConversionAtR_bqoe;
  uint8_T rtb_TmpSignalConversionAtR_ccw3;
  uint8_T rtb_TmpSignalConversionAtR_demb;
  uint8_T rtb_TmpSignalConversionAtR_f0e0;
  uint8_T rtb_TmpSignalConversionAtR_fmht;
  uint8_T rtb_TmpSignalConversionAtR_knhn;
  uint8_T rtb_TmpSignalConversionAtR_n1kb;
  uint8_T rtb_TmpSignalConversionAtR_o31c;
  uint8_T rtb_TmpSignalConversionAtR_oo4k;
  uint8_T rtb_TmpSignalConversionAtR_oodq;
  uint8_T rtb_TmpSignalConversionAtR_oyb3;
  uint8_T tmpRead;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  uint8_T tmpRead_4;
  uint8_T tmpRead_7;
  uint8_T tmpRead_8;
  uint8_T tmpWrite;
  uint8_T tmpWrite_0;
  uint8_T tmpWrite_1;
  uint8_T tmpWrite_2;
  uint8_T tmpWrite_3;
  uint8_T tmpWrite_4;
  uint8_T tmpWrite_5;
  uint8_T tmpWrite_6;
  uint8_T tmpWrite_7;
  uint8_T tmpWrite_8;
  uint8_T tmpWrite_9;
  uint8_T tmpWrite_a;
  uint8_T tmpWrite_b;
  uint8_T tmpWrite_c;
  uint8_T tmpWrite_d;
  uint8_T tmpWrite_e;
  uint8_T tmpWrite_f;
  uint8_T tmpWrite_g;
  uint8_T tmpWrite_h;
  boolean_T rtb_DCChrMgmt_BSTTxReqSts;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator_m1a1;
  boolean_T rtb_TmpSignalConversionAtR_bcmu;
  boolean_T tmpRead_0;

  /* Inport: '<Root>/RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg
    (&rtb_DCChrMgmt_BSTTxReqSts);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
    (&rtb_LogicalOperator2);

  /* Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg
    (&rtb_LogicalOperator_m1a1);

  /* Inport: '<Root>/RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V' */
  (void)Rte_Read_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A' */
  (void)Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_icdi);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum
    (&rtb_TmpSignalConversionAtR_bqoe);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum
    (&rtb_TmpSignalConversionAtR_ccw3);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum
    (&rtb_TmpSignalConversionAtR_oo4k);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum
    (&rtb_TmpSignalConversionAtR_fmht);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum
    (&rtb_TmpSignalConversionAtR_knhn);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus'
   */
  (void)
    Rte_Read_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus
    (&rtb_TmpSignalConversionAtR_hd5t);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum
    (&rtb_TmpSignalConversionAtR_n1kb);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_oodq);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum
    (&rtb_TmpSignalConversionAtR_o31c);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum'
   */
  (void)
    Rte_Read_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum
    (&rtb_TmpSignalConversionAtR_demb);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum'
   */
  (void)
    Rte_Read_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum
    (&rtb_TmpSignalConversionAtR_oyb3);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A'
   */
  (void)Rte_Read_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A
    (&rtb_TmpSignalConversionAtR_hguz);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V'
   */
  (void)Rte_Read_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V
    (&rtb_TmpSignalConversionAtR_fl4h);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum
    (&rtb_TmpSignalConversionAtR_flqm);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C'
   */
  (void)Rte_Read_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C
    (&rtb_TmpSignalConversionAtR_moco);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum
    (&rtb_TmpSignalConversionAtR_cplx);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C'
   */
  (void)Rte_Read_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C
    (&rtb_TmpSignalConversionAtR_cglv);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
    (&rtb_TmpSignalConversionAtR_f0e0);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg
    (&rtb_TmpSignalConversionAtR_ehzt);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg
    (&rtb_TmpSignalConversionAtR_bcmu);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg
    (&rtb_TmpSignalConversionAtR_jq21);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg
    (&rtb_TmpSignalConversionAtR_mnwc);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg
    (&rtb_TmpSignalConversionAtR_auq0);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
    (&rtb_TmpSignalConversionAtR_cpib);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_hyx0);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg
    (&rtb_TmpSignalConversionAtR_b3gc);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
    (&rtb_TmpSignalConversionAtR_mr4g);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
    (&rtb_TmpSignalConversionAtR_i3ti);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
    (&rtb_TmpSignalConversionAtR_od3c);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
    (&rtb_TmpSignalConversionAtR_kduh);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
    (&rtb_TmpSignalConversionAtR_pbns);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
    (&rtb_TmpSignalConversionAtR_fdv0);

  /* SignalConversion generated from: '<Root>/RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV' incorporates:
   *  Inport: '<Root>/RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV'
   */
  (void)Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV
    (&rtb_TmpSignalConversionAtR_fx3c);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_ngiu);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum'
   */
  (void)
    Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
    (&rtb_TmpSignalConversionAtR_gbe1);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_nqxl);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtR_oxnd);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCMLTmt = CtAp_ChrgComM_ARID_DEF.Delay_10_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCMLTm = CtAp_ChrgComM_ARID_DEF.Delay_11_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCROTmt = CtAp_ChrgComM_ARID_DEF.Delay_14_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCROTm = CtAp_ChrgComM_ARID_DEF.Delay_15_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCROPre = CtAp_ChrgComM_ARID_DEF.Delay_18_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCROPr = CtAp_ChrgComM_ARID_DEF.Delay_19_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCRMTmt = CtAp_ChrgComM_ARID_DEF.Delay_2_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCCSTmt = CtAp_ChrgComM_ARID_DEF.Delay_22_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCCSTm = CtAp_ChrgComM_ARID_DEF.Delay_23_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCSTTmt = CtAp_ChrgComM_ARID_DEF.Delay_26_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCSTTm = CtAp_ChrgComM_ARID_DEF.Delay_27_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCRMTm = CtAp_ChrgComM_ARID_DEF.Delay_3_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCSDTmt = CtAp_ChrgComM_ARID_DEF.Delay_30_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCSDTm = CtAp_ChrgComM_ARID_DEF.Delay_31_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPortTempE = CtAp_ChrgComM_ARID_DEF.Delay_34_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatDcPortTemp = CtAp_ChrgComM_ARID_DEF.Delay_35_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPort_gbqz = CtAp_ChrgComM_ARID_DEF.Delay_38_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatDcPor_m0g3 = CtAp_ChrgComM_ARID_DEF.Delay_39_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPortTempS = CtAp_ChrgComM_ARID_DEF.Delay_42_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatDcPor_csku = CtAp_ChrgComM_ARID_DEF.Delay_43_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_ov4s = CtAp_ChrgComM_ARID_DEF.Delay_46_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_bhwa = CtAp_ChrgComM_ARID_DEF.Delay_47_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxCRMPre = CtAp_ChrgComM_ARID_DEF.Delay_50_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRxCRMPr = CtAp_ChrgComM_ARID_DEF.Delay_51_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_kmgb = CtAp_ChrgComM_ARID_DEF.Delay_54_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_bazf = CtAp_ChrgComM_ARID_DEF.Delay_55_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_outh = CtAp_ChrgComM_ARID_DEF.Delay_58_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_iowb = CtAp_ChrgComM_ARID_DEF.Delay_59_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_pjxr = CtAp_ChrgComM_ARID_DEF.Delay_6_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_fcxc = CtAp_ChrgComM_ARID_DEF.Delay_62_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_b5qd = CtAp_ChrgComM_ARID_DEF.Delay_63_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_at2r = CtAp_ChrgComM_ARID_DEF.Delay_66_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_c2p1 = CtAp_ChrgComM_ARID_DEF.Delay_67_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_jteg = CtAp_ChrgComM_ARID_DEF.Delay_7_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_adjg = CtAp_ChrgComM_ARID_DEF.Delay_70_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_krdu = CtAp_ChrgComM_ARID_DEF.Delay_71_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResBEMRxC_ovvz = CtAp_ChrgComM_ARID_DEF.Delay_74_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatBEMRx_dnjt = CtAp_ChrgComM_ARID_DEF.Delay_75_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPort_ihg0 = CtAp_ChrgComM_ARID_DEF.Delay_78_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrResDcPort_aspv = CtAp_ChrgComM_ARID_DEF.Delay_80_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPort_abff = CtAp_ChrgComM_ARID_DEF.Delay_82_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatDcPor_jb42 = CtAp_ChrgComM_ARID_DEF.Delay_83_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrResDcPort_kob1 = CtAp_ChrgComM_ARID_DEF.Delay_84_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_MonResDcPort_amdm = CtAp_ChrgComM_ARID_DEF.Delay_86_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrStatDcPor_polm = CtAp_ChrgComM_ARID_DEF.Delay_87_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_DCChrMgmt_ErrResDcPort_fpsl = CtAp_ChrgComM_ARID_DEF.Delay_88_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* Outputs for Atomic SubSystem: '<S4>/BSM'
   *
   * Block requirements for '<S4>/BSM':
   *  1. SWREQ_02663 BSM
   *  2. SWREQ_02664 BSM
   *  3. SWREQ_02665 BSM
   *  4. SWREQ_02666 BSM
   *  5. SWREQ_02667 BSM
   *  6. SWREQ_02668 BSM
   *  7. SWREQ_02669 BSM
   *  8. SWREQ_02670 BSM
   *  9. SWREQ_02671 BSM
   *  10. SWREQ_02672 BSM
   *  11. SWREQ_02673 BSM
   *  12. SWREQ_02674 BSM
   *  13. SWREQ_02675 BSM
   *  14. SWREQ_02676 BSM
   *  15. SWREQ_02677 BSM
   *  16. SWREQ_02678 BSM
   *  17. SWREQ_02679 BSM
   *  18. SWREQ_02680 BSM
   */
  /* RelationalOperator: '<S6>/RelationalOperator26' incorporates:
   *  Constant: '<S6>/Define1'
   */
  rtb_RelationalOperator26_m5ih = (tmpRead_8 == ((uint8_T)ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If22'
   *
   * Block requirements for '<S6>/If22':
   *  1. SWREQ_02664 BSM
   */
  /* Constant: '<S6>/Define57' incorporates:
   *  Constant: '<S6>/Define53'
   *
   * Block requirements for '<S6>/Define53':
   *  1. SWREQ_02665 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(rtb_RelationalOperator26_m5ih, ((uint8_T)
    ChrgComM_BSMUnderVoltage), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If22' */

  /* RelationalOperator: '<S6>/RelationalOperator25' incorporates:
   *  Constant: '<S6>/Define55'
   */
  rtb_RelationalOperator25_h5ez = (tmpRead_7 == ((uint8_T)ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If21'
   *
   * Block requirements for '<S6>/If21':
   *  1. SWREQ_02663 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define54'
   */
  tmpWrite_0 = CtAp_ChrgComM_If(rtb_RelationalOperator25_h5ez, ((uint8_T)
    ChrgComM_BSMOverVoltage), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If21' */

  /* RelationalOperator: '<S6>/RelationalOperator2' incorporates:
   *  Constant: '<S6>/Define2'
   */
  rtb_RelationalOperator2_lvtd = (tmpRead_2 == ((uint8_T)ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If2'
   *
   * Block requirements for '<S6>/If2':
   *  1. SWREQ_02667 BSM
   */
  /* Constant: '<S6>/Define6' incorporates:
   *  Constant: '<S6>/Define3'
   *
   * Block requirements for '<S6>/Define3':
   *  1. SWREQ_02668 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(rtb_RelationalOperator2_lvtd, ((uint8_T)
    ChrgComM_BSMLoSOC), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If2' */

  /* RelationalOperator: '<S6>/RelationalOperator1' incorporates:
   *  Constant: '<S6>/Define5'
   */
  rtb_RelationalOperator1_eoum = (tmpRead_1 == ((uint8_T)ChrgComM_SOCHiErr));

  /* Outputs for Atomic SubSystem: '<S6>/If1'
   *
   * Block requirements for '<S6>/If1':
   *  1. SWREQ_02666 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define4'
   */
  tmpWrite_4 = CtAp_ChrgComM_If(rtb_RelationalOperator1_eoum, ((uint8_T)
    ChrgComM_BSMHiSOC), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If1' */

  /* RelationalOperator: '<S6>/RelationalOperator3' incorporates:
   *  Constant: '<S6>/Define10'
   */
  rtb_RelationalOperator3_ggkw = (tmpRead_4 == ((uint8_T)ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If4'
   *
   * Block requirements for '<S6>/If4':
   *  1. SWREQ_02670 BSM
   */
  /* Constant: '<S6>/Define11' incorporates:
   *  Constant: '<S6>/Define8'
   *
   * Block requirements for '<S6>/Define8':
   *  1. SWREQ_02671 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If
    (rtb_TmpSignalConversionAtR_hd5t.ComM_ErrResBMSErrInfoTimeoutInfo, ((uint8_T)
      ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If4' */

  /* Outputs for Atomic SubSystem: '<S6>/If3'
   *
   * Block requirements for '<S6>/If3':
   *  1. SWREQ_02669 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define9'
   */
  tmpWrite_1 = CtAp_ChrgComM_If(rtb_RelationalOperator3_ggkw, ((uint8_T)
    ChrgComM_BSMError), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If3' */

  /* RelationalOperator: '<S6>/RelationalOperator5' incorporates:
   *  Constant: '<S6>/Define12'
   */
  rtb_RelationalOperator5_l2rg = (tmpRead == ((uint8_T)ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If6'
   *
   * Block requirements for '<S6>/If6':
   *  1. SWREQ_02673 BSM
   */
  /* Constant: '<S6>/Define13' incorporates:
   *  Constant: '<S6>/Define15'
   *
   * Block requirements for '<S6>/Define15':
   *  1. SWREQ_02674 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If
    (rtb_TmpSignalConversionAtR_hd5t.ComM_ErrResBMSErrInfoTimeoutInfo, ((uint8_T)
      ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If6' */

  /* Outputs for Atomic SubSystem: '<S6>/If5'
   *
   * Block requirements for '<S6>/If5':
   *  1. SWREQ_02672 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define16'
   */
  tmpWrite = CtAp_ChrgComM_If(rtb_RelationalOperator5_l2rg, ((uint8_T)
    ChrgComM_BSMError), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If5' */

  /* RelationalOperator: '<S6>/RelationalOperator7' incorporates:
   *  Constant: '<S6>/Define17'
   */
  rtb_RelationalOperator7_czmj = (rtb_TmpSignalConversionAtR_oodq == ((uint8_T)
    ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S6>/If8'
   *
   * Block requirements for '<S6>/If8':
   *  1. SWREQ_02676 BSM
   */
  /* Constant: '<S6>/Define18' incorporates:
   *  Constant: '<S6>/Define20'
   *
   * Block requirements for '<S6>/Define20':
   *  1. SWREQ_02677 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If
    (rtb_TmpSignalConversionAtR_hd5t.ComM_ErrResBMSErrInfoTimeoutInfo, ((uint8_T)
      ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If8' */

  /* Outputs for Atomic SubSystem: '<S6>/If7'
   *
   * Block requirements for '<S6>/If7':
   *  1. SWREQ_02675 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define21'
   */
  tmpWrite_2 = CtAp_ChrgComM_If(rtb_RelationalOperator7_czmj, ((uint8_T)
    ChrgComM_BSMError), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If7' */

  /* Logic: '<S6>/LogicalOperator' incorporates:
   *  Constant: '<S6>/Define22'
   *  RelationalOperator: '<S6>/RelationalOperator9'
   */
  rtb_LogicalOperator_dz14 = ((tmpRead_0 == ChrgComM_Active) ||
    rtb_DCChrMgmt_BSTTxReqSts);

  /* Outputs for Atomic SubSystem: '<S6>/If10'
   *
   * Block requirements for '<S6>/If10':
   *  1. SWREQ_02679 BSM
   */
  /* Constant: '<S6>/Define23' incorporates:
   *  Constant: '<S6>/Define25'
   *
   * Block requirements for '<S6>/Define25':
   *  1. SWREQ_02680 BSM
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(tmpRead_3.ComM_ErrResBMSSts01TimeoutInfo,
    ((uint8_T)ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S6>/If10' */

  /* Outputs for Atomic SubSystem: '<S6>/If9'
   *
   * Block requirements for '<S6>/If9':
   *  1. SWREQ_02678 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum' incorporates:
   *  Constant: '<S6>/Define26'
   */
  tmpWrite_3 = CtAp_ChrgComM_If(rtb_LogicalOperator_dz14, ((uint8_T)
    ChrgComM_BSMError), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S6>/If9' */
  /* End of Outputs for SubSystem: '<S4>/BSM' */

  /* Outputs for Atomic SubSystem: '<S4>/BST'
   *
   * Block requirements for '<S4>/BST':
   *  1. SWREQ_02626 BST
   *  2. SWREQ_02627 BST
   *  3. SWREQ_02628 BST
   *  4. SWREQ_02629 BST
   *  5. SWREQ_02630 BST
   *  6. SWREQ_02631 BST
   *  7. SWREQ_02632 BST
   *  8. SWREQ_02633 BST
   *  9. SWREQ_02634 BST
   *  10. SWREQ_02635 BST
   *  11. SWREQ_02636 BST
   *  12. SWREQ_02637 BST
   *  13. SWREQ_02638 BST
   *  14. SWREQ_02639 BST
   *  15. SWREQ_02640 BST
   *  16. SWREQ_02641 BST
   *  17. SWREQ_02642 BST
   *  18. SWREQ_02643 BST
   *  19. SWREQ_02644 BST
   *  20. SWREQ_02645 BST
   *  21. SWREQ_02646 BST
   *  22. SWREQ_02647 BST
   *  23. SWREQ_02648 BST
   *  24. SWREQ_02649 BST
   *  25. SWREQ_02650 BST
   *  26. SWREQ_02651 BST
   *  27. SWREQ_02652 BST
   *  28. SWREQ_02653 BST
   *  29. SWREQ_02654 BST
   *  30. SWREQ_02655 BST
   *  31. SWREQ_02656 BST
   *  32. SWREQ_02657 BST
   *  33. SWREQ_02658 BST
   *  34. SWREQ_02659 BST
   *  35. SWREQ_02660 BST
   *  36. SWREQ_02661 BST
   *  37. SWREQ_02662 BST
   */
  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Constant: '<S7>/CAL'
   *  Constant: '<S7>/CAL1'
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   */
  rtb_LogicalOperator1_hv3c = ((rtb_TmpSignalConversionAtR_fl4h >
    DCChrMgmt_MaxChrgUDc_CFG) || (rtb_TmpSignalConversionAtR_hguz >=
    ChrgComM_MinErrCurrent));

  /* Outputs for Atomic SubSystem: '<S7>/If' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum' incorporates:
   *  Constant: '<S7>/Define'
   *  Constant: '<S7>/Define1'
   *
   * Block requirements for '<S7>/Define1':
   *  1. SWREQ_02627 BST
   */
  tmpWrite_7 = CtAp_ChrgComM_If(rtb_LogicalOperator1_hv3c, ((uint8_T)
    ChrgComM_PrmFailed), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If' */

  /* RelationalOperator: '<S7>/RelationalOperator2' incorporates:
   *  Constant: '<S7>/Define2'
   */
  rtb_RelationalOperator2_n4tr = (rtb_TmpSignalConversionAtR_o31c == ((uint8_T)
    ChrgComM_Reached));

  /* RelationalOperator: '<S7>/RelationalOperator3' incorporates:
   *  Constant: '<S7>/Define3'
   */
  rtb_RelationalOperator3_ajl4 = (rtb_TmpSignalConversionAtR_o31c == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If2'
   *
   * Block requirements for '<S7>/If2':
   *  1. SWREQ_02629 BST
   */
  /* Constant: '<S7>/Define4' incorporates:
   *  Constant: '<S7>/Define5'
   *
   * Block requirements for '<S7>/Define5':
   *  1. SWREQ_02630 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator3_ajl4, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If2' */

  /* Outputs for Atomic SubSystem: '<S7>/If1'
   *
   * Block requirements for '<S7>/If1':
   *  1. SWREQ_02628 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum' incorporates:
   *  Constant: '<S7>/Define6'
   */
  tmpWrite_f = CtAp_ChrgComM_If(rtb_RelationalOperator2_n4tr, ((uint8_T)
    ChrgComM_Reached), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If1' */

  /* RelationalOperator: '<S7>/RelationalOperator5' incorporates:
   *  Constant: '<S7>/Define8'
   */
  rtb_RelationalOperator5 = (rtb_TmpSignalConversionAtR_oyb3 == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If4'
   *
   * Block requirements for '<S7>/If4':
   *  1. SWREQ_02632 BST
   */
  /* Constant: '<S7>/Define9' incorporates:
   *  Constant: '<S7>/Define10'
   *
   * Block requirements for '<S7>/Define10':
   *  1. SWREQ_02633 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator5, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If4' */

  /* RelationalOperator: '<S7>/RelationalOperator4' incorporates:
   *  Constant: '<S7>/Define7'
   */
  rtb_RelationalOperator4 = (rtb_TmpSignalConversionAtR_oyb3 == ((uint8_T)
    ChrgComM_Reached));

  /* Outputs for Atomic SubSystem: '<S7>/If3'
   *
   * Block requirements for '<S7>/If3':
   *  1. SWREQ_02631 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum' incorporates:
   *  Constant: '<S7>/Define11'
   */
  tmpWrite_g = CtAp_ChrgComM_If(rtb_RelationalOperator4, ((uint8_T)
    ChrgComM_Reached), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If3' */

  /* RelationalOperator: '<S7>/RelationalOperator7' incorporates:
   *  Constant: '<S7>/Define15'
   */
  rtb_RelationalOperator7 = (rtb_TmpSignalConversionAtR_demb == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If6'
   *
   * Block requirements for '<S7>/If6':
   *  1. SWREQ_02635 BST
   */
  /* Constant: '<S7>/Define16' incorporates:
   *  Constant: '<S7>/Define12'
   *
   * Block requirements for '<S7>/Define12':
   *  1. SWREQ_02636 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator7, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If6' */

  /* RelationalOperator: '<S7>/RelationalOperator6' incorporates:
   *  Constant: '<S7>/Define14'
   */
  rtb_RelationalOperator6 = (rtb_TmpSignalConversionAtR_demb == ((uint8_T)
    ChrgComM_Reached));

  /* Outputs for Atomic SubSystem: '<S7>/If5'
   *
   * Block requirements for '<S7>/If5':
   *  1. SWREQ_02634 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum' incorporates:
   *  Constant: '<S7>/Define13'
   */
  tmpWrite_e = CtAp_ChrgComM_If(rtb_RelationalOperator6, ((uint8_T)
    ChrgComM_Reached), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If5' */

  /* RelationalOperator: '<S7>/RelationalOperator8' incorporates:
   *  Constant: '<S7>/Define17'
   */
  rtb_RelationalOperator8 = (rtb_TmpSignalConversionAtR_bqoe == ((uint8_T)
    ChrgComM_ManOprate));

  /* Outputs for Atomic SubSystem: '<S7>/If7'
   *
   * Block requirements for '<S7>/If7':
   *  1. SWREQ_02637 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum' incorporates:
   *  Constant: '<S7>/Define18'
   *  Constant: '<S7>/Define19'
   *
   * Block requirements for '<S7>/Define19':
   *  1. SWREQ_02638 BST
   */
  tmpWrite_8 = CtAp_ChrgComM_If(rtb_RelationalOperator8, ((uint8_T)
    ChrgComM_Operate), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If7' */

  /* RelationalOperator: '<S7>/RelationalOperator24' incorporates:
   *  Constant: '<S7>/Define52'
   */
  rtb_RelationalOperator24 = (rtb_TmpSignalConversionAtR_bqoe == ((uint8_T)
    ChrgComM_FaultOther));

  /* Outputs for Atomic SubSystem: '<S7>/If20'
   *
   * Block requirements for '<S7>/If20':
   *  1. SWREQ_02658 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum' incorporates:
   *  Constant: '<S7>/Define50'
   *  Constant: '<S7>/Define51'
   *
   * Block requirements for '<S7>/Define51':
   *  1. SWREQ_02659 BST
   */
  tmpWrite_c = CtAp_ChrgComM_If(rtb_RelationalOperator24, ((uint8_T)
    ChrgComM_BSTFaultOther), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If20' */

  /* Outputs for Atomic SubSystem: '<S7>/If9'
   *
   * Block requirements for '<S7>/If9':
   *  1. SWREQ_02640 BST
   */
  /* Constant: '<S7>/Define24' incorporates:
   *  Constant: '<S7>/Define20'
   *
   * Block requirements for '<S7>/Define20':
   *  1. SWREQ_02641 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If
    (rtb_TmpSignalConversionAtR_hd5t.ComM_ErrResBMSErrInfoTimeoutInfo, ((uint8_T)
      ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If9' */

  /* RelationalOperator: '<S7>/RelationalOperator9' incorporates:
   *  Constant: '<S7>/Define22'
   */
  rtb_RelationalOperator9 = (rtb_TmpSignalConversionAtR_oodq == ((uint8_T)
    ChrgComM_Level3));

  /* Outputs for Atomic SubSystem: '<S7>/If8'
   *
   * Block requirements for '<S7>/If8':
   *  1. SWREQ_02639 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum' incorporates:
   *  Constant: '<S7>/Define21'
   */
  tmpWrite_b = CtAp_ChrgComM_If(rtb_RelationalOperator9, ((uint8_T)
    ChrgComM_Failed), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If8' */

  /* Logic: '<S7>/LogicalOperator2' incorporates:
   *  Constant: '<S7>/CAL2'
   *  Constant: '<S7>/CAL3'
   *  RelationalOperator: '<S7>/RelationalOperator11'
   *  RelationalOperator: '<S7>/RelationalOperator12'
   */
  rtb_LogicalOperator2_gkqs = ((rtb_TmpSignalConversionAtR_moco >=
    DCChrMgmt_DcPortErrTemplv2_CFG) || (rtb_TmpSignalConversionAtR_cglv >=
    DCChrMgmt_DcPortErrTemplv2_CFG));

  /* Outputs for Atomic SubSystem: '<S7>/If11'
   *
   * Block requirements for '<S7>/If11':
   *  1. SWREQ_02643 BST
   */
  /* Constant: '<S7>/Define27' incorporates:
   *  Constant: '<S7>/Define28'
   *
   * Block requirements for '<S7>/Define28':
   *  1. SWREQ_02644 BST
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(tmpRead_9.ComM_ErrResPODSts01TimeoutInfo,
    ((uint8_T)ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If11' */

  /* Outputs for Atomic SubSystem: '<S7>/If10'
   *
   * Block requirements for '<S7>/If10':
   *  1. SWREQ_02642 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum' incorporates:
   *  Constant: '<S7>/Define25'
   */
  tmpWrite_d = CtAp_ChrgComM_If(rtb_LogicalOperator2_gkqs, ((uint8_T)
    ChrgComM_Failed), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S7>/If10' */

  /* RelationalOperator: '<S7>/RelationalOperator15' incorporates:
   *  Constant: '<S7>/Define32'
   */
  rtb_RelationalOperator15 = (rtb_TmpSignalConversionAtR_knhn == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If13'
   *
   * Block requirements for '<S7>/If13':
   *  1. SWREQ_02646 BST
   */
  /* Constant: '<S7>/Define33' incorporates:
   *  Constant: '<S7>/Define29'
   *
   * Block requirements for '<S7>/Define29':
   *  1. SWREQ_02647 BST
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(rtb_RelationalOperator15, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If13' */

  /* RelationalOperator: '<S7>/RelationalOperator14' incorporates:
   *  Constant: '<S7>/Define31'
   */
  rtb_RelationalOperator14 = (rtb_TmpSignalConversionAtR_knhn == ((uint8_T)
    ChrgComM_OverTemp));

  /* Outputs for Atomic SubSystem: '<S7>/If12'
   *
   * Block requirements for '<S7>/If12':
   *  1. SWREQ_02645 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum' incorporates:
   *  Constant: '<S7>/Define30'
   */
  tmpWrite_6 = CtAp_ChrgComM_If(rtb_RelationalOperator14, ((uint8_T)
    ChrgComM_OverTemp), rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S7>/If12' */

  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  Constant: '<S7>/CAL4'
   *  Constant: '<S7>/CAL5'
   *  RelationalOperator: '<S7>/RelationalOperator16'
   *  RelationalOperator: '<S7>/RelationalOperator17'
   */
  rtb_LogicalOperator3_pjok = ((rtb_TmpSignalConversionAtR_fx3c <
    DCChrMgmt_CC2ActvValLowr_CFG) || (rtb_TmpSignalConversionAtR_fx3c >
    DCChrMgmt_CC2ActvValUppr_CFG));

  /* Outputs for Atomic SubSystem: '<S7>/If14'
   *
   * Block requirements for '<S7>/If14':
   *  1. SWREQ_02648 BST
   */
  /* Constant: '<S7>/Define34' incorporates:
   *  Constant: '<S7>/Define35'
   *
   * Block requirements for '<S7>/Define35':
   *  1. SWREQ_02649 BST
   */
  rtb_Switch_f0r2 = CtAp_ChrgComM_If(rtb_LogicalOperator3_pjok, ((uint8_T)
    ChrgComM_CnctFault), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If14' */

  /* RelationalOperator: '<S7>/RelationalOperator19' incorporates:
   *  Constant: '<S7>/Define39'
   */
  rtb_RelationalOperator19 = (rtb_TmpSignalConversionAtR_fmht == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If16'
   *
   * Block requirements for '<S7>/If16':
   *  1. SWREQ_02651 BST
   */
  /* Constant: '<S7>/Define40' incorporates:
   *  Constant: '<S7>/Define36'
   *
   * Block requirements for '<S7>/Define36':
   *  1. SWREQ_02652 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator19, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If16' */

  /* RelationalOperator: '<S7>/RelationalOperator18' incorporates:
   *  Constant: '<S7>/Define38'
   */
  rtb_RelationalOperator18 = (rtb_TmpSignalConversionAtR_fmht == ((uint8_T)
    ChrgComM_OverTemp));

  /* Outputs for Atomic SubSystem: '<S7>/If15'
   *
   * Block requirements for '<S7>/If15':
   *  1. SWREQ_02650 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum' incorporates:
   *  Constant: '<S7>/Define37'
   */
  tmpWrite_5 = CtAp_ChrgComM_If(rtb_RelationalOperator18, ((uint8_T)
    ChrgComM_OverTemp), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If15' */

  /* Logic: '<S7>/LogicalOperator4' incorporates:
   *  Constant: '<S7>/Define43'
   *  Constant: '<S7>/Define44'
   *  RelationalOperator: '<S7>/RelationalOperator20'
   *  RelationalOperator: '<S7>/RelationalOperator21'
   */
  rtb_LogicalOperator4_agah = ((rtb_TmpSignalConversionAtR_n1kb == ((uint8_T)
    ChrgComM_BMSRlyErr)) || (rtb_TmpSignalConversionAtR_f0e0 == ((uint8_T)
    ChrgComM_PODRlyErr)));

  /* Outputs for Atomic SubSystem: '<S7>/If17'
   *
   * Block requirements for '<S7>/If17':
   *  1. SWREQ_02653 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum' incorporates:
   *  Constant: '<S7>/Define41'
   *  Constant: '<S7>/Define42'
   *
   * Block requirements for '<S7>/Define42':
   *  1. SWREQ_02654 BST
   */
  tmpWrite_9 = CtAp_ChrgComM_If(rtb_LogicalOperator4_agah, ((uint8_T)
    ChrgComM_BSTRealyFault), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If17' */

  /* RelationalOperator: '<S7>/RelationalOperator23' incorporates:
   *  Constant: '<S7>/Define48'
   */
  rtb_RelationalOperator23 = (rtb_TmpSignalConversionAtR_ccw3 == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If19'
   *
   * Block requirements for '<S7>/If19':
   *  1. SWREQ_02656 BST
   */
  /* Constant: '<S7>/Define49' incorporates:
   *  Constant: '<S7>/Define45'
   *
   * Block requirements for '<S7>/Define45':
   *  1. SWREQ_02657 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator23, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If19' */

  /* RelationalOperator: '<S7>/RelationalOperator22' incorporates:
   *  Constant: '<S7>/Define47'
   */
  rtb_RelationalOperator22 = (rtb_TmpSignalConversionAtR_ccw3 == ((uint8_T)
    ChrgComM_OverCurrent));

  /* Outputs for Atomic SubSystem: '<S7>/If18'
   *
   * Block requirements for '<S7>/If18':
   *  1. SWREQ_02655 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum' incorporates:
   *  Constant: '<S7>/Define46'
   */
  tmpWrite_a = CtAp_ChrgComM_If(rtb_RelationalOperator22, ((uint8_T)
    ChrgComM_OverCurrent), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If18' */

  /* RelationalOperator: '<S7>/RelationalOperator26' incorporates:
   *  Constant: '<S7>/Define56'
   */
  rtb_RelationalOperator26 = (rtb_TmpSignalConversionAtR_oo4k == ((uint8_T)
    ChrgComM_Untrustable));

  /* Outputs for Atomic SubSystem: '<S7>/If22'
   *
   * Block requirements for '<S7>/If22':
   *  1. SWREQ_02661 BST
   */
  /* Constant: '<S7>/Define57' incorporates:
   *  Constant: '<S7>/Define53'
   *
   * Block requirements for '<S7>/Define53':
   *  1. SWREQ_02662 BST
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator26, ((uint8_T)
    ChrgComM_Untrustable), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S7>/If22' */

  /* RelationalOperator: '<S7>/RelationalOperator25' incorporates:
   *  Constant: '<S7>/Define55'
   */
  rtb_RelationalOperator25 = (rtb_TmpSignalConversionAtR_oo4k == ((uint8_T)
    ChrgComM_OverVoltage));

  /* Outputs for Atomic SubSystem: '<S7>/If21'
   *
   * Block requirements for '<S7>/If21':
   *  1. SWREQ_02660 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum' incorporates:
   *  Constant: '<S7>/Define54'
   */
  tmpWrite_h = CtAp_ChrgComM_If(rtb_RelationalOperator25, ((uint8_T)
    ChrgComM_OverVoltage), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S7>/If21' */
  /* End of Outputs for SubSystem: '<S4>/BST' */

  /* Outputs for Atomic SubSystem: '<S4>/BSTTxSts'
   *
   * Block requirements for '<S4>/BSTTxSts':
   *  1. SWREQ_06477 BST Req DC Stop
   *  2. SWREQ_06478 BST Req DC Stop
   */
  /* Logic: '<S100>/LogicalOperator' incorporates:
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S46>/Compare'
   */
  rtb_LogicalOperator_dqfx = (rtb_TmpSignalConversionAtR_o31c != ((uint8_T)
    ChrgComM_Init));

  /* Logic: '<S107>/LogicalOperator' incorporates:
   *  Constant: '<S47>/Constant'
   *  RelationalOperator: '<S47>/Compare'
   */
  rtb_LogicalOperator_ikax = (rtb_TmpSignalConversionAtR_demb != ((uint8_T)
    ChrgComM_Init));

  /* SignalConversion generated from: '<S114>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' incorporates:
   *  Constant: '<S48>/Constant'
   *  RelationalOperator: '<S48>/Compare'
   */
  rtb_BufferToMakeInport_e0psve5s = (rtb_TmpSignalConversionAtR_oo4k !=
    ((uint8_T)ChrgComM_Init));

  /* SignalConversion generated from: '<S121>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' incorporates:
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S52>/Compare'
   */
  rtb_BufferToMakeInportV_e0psve5 = (rtb_TmpSignalConversionAtR_oyb3 !=
    ((uint8_T)ChrgComM_Init));

  /* SignalConversion generated from: '<S128>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' incorporates:
   *  Constant: '<S53>/Constant'
   *  RelationalOperator: '<S53>/Compare'
   */
  rtb_BufferToMakeInportVi_e0psve = (rtb_TmpSignalConversionAtR_oodq ==
    ((uint8_T)ChrgComM_Level3));

  /* SignalConversion generated from: '<S135>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' incorporates:
   *  Constant: '<S54>/Constant'
   *  RelationalOperator: '<S54>/Compare'
   */
  rtb_BufferToMakeInportVir_e0psv = (rtb_TmpSignalConversionAtR_moco >=
    DCChrMgmt_DcPortErrTemplv2_CFG);

  /* SignalConversion generated from: '<S141>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' incorporates:
   *  Constant: '<S55>/Constant'
   *  RelationalOperator: '<S55>/Compare'
   */
  rtb_BufferToMakeInportVirt_e0ps = (rtb_TmpSignalConversionAtR_cglv >=
    DCChrMgmt_DcPortErrTemplv2_CFG);

  /* Logic: '<S148>/LogicalOperator1' incorporates:
   *  Constant: '<S56>/Constant'
   *  RelationalOperator: '<S56>/Compare'
   */
  rtb_LogicalOperator1_p4tw = (rtb_TmpSignalConversionAtR_fmht != ((uint8_T)
    ChrgComM_Init));

  /* Logic: '<S155>/LogicalOperator1' incorporates:
   *  Constant: '<S57>/Constant'
   *  RelationalOperator: '<S57>/Compare'
   */
  rtb_LogicalOperator1_jkja = (rtb_TmpSignalConversionAtR_n1kb == ((uint8_T)
    ChrgComM_BMSRlyErr));

  /* Logic: '<S162>/LogicalOperator2' incorporates:
   *  Constant: '<S58>/Constant'
   *  RelationalOperator: '<S58>/Compare'
   */
  rtb_LogicalOperator2_mwje = (rtb_TmpSignalConversionAtR_f0e0 == ((uint8_T)
    ChrgComM_PODRlyErr));

  /* Logic: '<S169>/LogicalOperator2' incorporates:
   *  Constant: '<S59>/Constant'
   *  RelationalOperator: '<S59>/Compare'
   */
  rtb_LogicalOperator2_bzbt = (rtb_TmpSignalConversionAtR_ccw3 != ((uint8_T)
    ChrgComM_Init));

  /* Logic: '<S176>/LogicalOperator1' incorporates:
   *  Constant: '<S49>/Constant'
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  Logic: '<S8>/LogicalOperator1'
   *  Logic: '<S8>/LogicalOperator2'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   */
  rtb_LogicalOperator1_ftla = (((rtb_TmpSignalConversionAtR_hguz >=
    ChrgComM_MinErrCurrent) || (rtb_TmpSignalConversionAtR_hguz <
    DCChrMgmt_MaxChrgIDc_CFG) || (rtb_TmpSignalConversionAtR_fl4h >
    DCChrMgmt_MaxChrgUDc_CFG)) && rtb_TmpSignalConversionAtR_bcmu);

  /* Logic: '<S8>/LogicalOperator' */
  rtb_DCChrMgmt_BSTTxReqSts = (rtb_LogicalOperator_dqfx ||
    rtb_LogicalOperator_ikax || rtb_BufferToMakeInportV_e0psve5 ||
    rtb_BufferToMakeInportVi_e0psve ||
    rtb_TmpSignalConversionAtR_hd5t.ComM_ErrResBMSErrInfoTimeoutInfo ||
    rtb_BufferToMakeInportVir_e0psv || rtb_BufferToMakeInportVirt_e0ps ||
    rtb_LogicalOperator1_p4tw || rtb_LogicalOperator1_jkja ||
    rtb_LogicalOperator2_mwje || rtb_LogicalOperator2_bzbt ||
    rtb_BufferToMakeInport_e0psve5s || rtb_LogicalOperator1_ftla);

  /* End of Outputs for SubSystem: '<S4>/BSTTxSts' */

  /* Outputs for Atomic SubSystem: '<S4>/CML'
   *
   * Block requirements for '<S4>/CML':
   *  1. SWREQ_02622 CML
   *  2. SWREQ_02623 CML
   *  3. SWREQ_02624 CML
   *  4. SWREQ_02625 CML
   */
  /* Logic: '<S100>/LogicalOperator' incorporates:
   *  Delay: '<S9>/Delay'
   */
  rtb_LogicalOperator_dqfx = CtAp_ChrgComM_ARID_DEF.Delay_DSTATE_nvy0;

  /* Logic: '<S9>/LogicalOperator' incorporates:
   *  Constant: '<S9>/Define'
   *  Constant: '<S9>/Define1'
   *  Constant: '<S9>/Define2'
   *  RelationalOperator: '<S9>/RelationalOperator'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  RelationalOperator: '<S9>/RelationalOperator2'
   */
  rtb_LogicalOperator_dlfu = ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgComM_DCPlugDetected)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgComM_DCCharging)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    ChrgComM_DCPreheating)));

  /* Logic: '<S9>/LogicalOperator3' incorporates:
   *  Constant: '<S60>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  Delay: '<S9>/Delay'
   *  Logic: '<S9>/LogicalOperator1'
   *  Logic: '<S9>/LogicalOperator2'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *
   * Block requirements for '<S9>/LogicalOperator3':
   *  1. SWREQ_02624 CML
   *  2. SWREQ_02625 CML
   */
  CtAp_ChrgComM_ARID_DEF.Delay_DSTATE_nvy0 = (rtb_LogicalOperator_dlfu &&
    (((rtb_TmpSignalConversionAtR_fl4h <= DCChrMgmt_MaxChrgUDc_CFG) &&
      (rtb_TmpSignalConversionAtR_hguz >= DCChrMgmt_MaxChrgIDc_CFG) &&
      (rtb_TmpSignalConversionAtR_hguz < ChrgComM_MinErrCurrent) &&
      rtb_TmpSignalConversionAtR_bcmu) || rtb_LogicalOperator_dqfx));

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. SWREQ_02622 CML
   *  2. SWREQ_02623 CML
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V' incorporates:
   *  Constant: '<S9>/Define3'
   */
  tmpWrite_j = CtAp_ChrgComM_If_c2bu(rtb_LogicalOperator_dlfu, tmpRead_6,
    ChrgComM_SignleValueZero);

  /* End of Outputs for SubSystem: '<S9>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/If1' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A' incorporates:
   *  Constant: '<S9>/Define4'
   */
  tmpWrite_i = CtAp_ChrgComM_If_c2bu(rtb_LogicalOperator_dlfu, tmpRead_5,
    ChrgComM_SignleValueZero);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S9>/If2' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V' incorporates:
   *  Constant: '<S9>/Define5'
   */
  tmpWrite_l = CtAp_ChrgComM_If_c2bu(rtb_LogicalOperator_dlfu,
    rtb_TmpSignalConversionAtR_fl4h, ChrgComM_SignleValueZero);

  /* End of Outputs for SubSystem: '<S9>/If2' */

  /* Outputs for Atomic SubSystem: '<S9>/If3' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A' incorporates:
   *  Constant: '<S9>/Define6'
   */
  tmpWrite_k = CtAp_ChrgComM_If_c2bu(rtb_LogicalOperator_dlfu,
    rtb_TmpSignalConversionAtR_hguz, ChrgComM_SignleValueZero);

  /* End of Outputs for SubSystem: '<S9>/If3' */
  /* End of Outputs for SubSystem: '<S4>/CML' */

  /* Outputs for Atomic SubSystem: '<S4>/Tmt' */
  /* Outputs for Atomic SubSystem: '<S67>/ATOM_OnDelay' */
  /* Constant: '<S67>/CAL' incorporates:
   *  Constant: '<S67>/Define'
   *  Constant: '<S67>/Define1'
   */
  rtb_LogicalOperator_dqfx = CtAp_ChrgComM_ATOM_OnDelay(rtb_LogicalOperator2,
    DCChrMgmt_ChrgErrWaitConnTim_CFG, ((uint16_T)ChrgComM_dt50ms), ((uint16_T)
    ChrgComM_U16Zero), &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S67>/ATOM_OnDelay' */

  /* Outputs for Atomic SubSystem: '<S10>/DCChrMgmt_DCTmtCnt'
   *
   * Block requirements for '<S10>/DCChrMgmt_DCTmtCnt':
   *  1. SWREQ_02686 BEM
   *  2. SWREQ_02687 BEM count
   *  3. SWREQ_02688 BEM count
   */
  /* Sum: '<S69>/Add' incorporates:
   *  Constant: '<S69>/Define3'
   *  Delay: '<S69>/Delay1'
   */
  rtb_Add = (uint8_T)((uint32_T)((uint8_T)ChrgComM_TimeOne) + (uint32_T)
                      CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE);

  /* Switch: '<S72>/Switch' incorporates:
   *  Delay: '<S69>/Delay'
   */
  rtb_Switch_e053 = CtAp_ChrgComM_ARID_DEF.Delay_DSTATE_jrfd;

  /* Logic: '<S69>/LogicalOperator4' incorporates:
   *  Constant: '<S69>/Define1'
   *  Constant: '<S69>/Define2'
   *  RelationalOperator: '<S69>/RelationalOperator1'
   *  RelationalOperator: '<S69>/RelationalOperator2'
   */
  rtb_LogicalOperator4_c1gq = ((rtb_Switch_e053 != ((uint8_T)
    ChrgComM_ChargeError)) && (rtb_TmpSignalConversionAtR_hyx0 == ((uint8_T)
    ChrgComM_ChargeError)));

  /* Outputs for Atomic SubSystem: '<S69>/If1'
   *
   * Block requirements for '<S69>/If1':
   *  1. SWREQ_02686 BEM
   *  2. SWREQ_02688 BEM count
   */
  /* Delay: '<S69>/Delay1' */
  rtb_Switch_e053 = CtAp_ChrgComM_If(rtb_LogicalOperator4_c1gq, rtb_Add,
    CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE);

  /* End of Outputs for SubSystem: '<S69>/If1' */

  /* RelationalOperator: '<S69>/RelationalOperator3' incorporates:
   *  Constant: '<S69>/Init'
   */
  rtb_RelationalOperator3 = (rtb_TmpSignalConversionAtR_hyx0 == ((uint8_T)
    ChrgComM_Init));

  /* Outputs for Atomic SubSystem: '<S69>/If'
   *
   * Block requirements for '<S69>/If':
   *  1. SWREQ_02687 BEM count
   */
  /* Constant: '<S69>/Define' */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_RelationalOperator3, ((uint8_T)
    ChrgComM_U8Zero), rtb_Switch_e053);

  /* End of Outputs for SubSystem: '<S69>/If' */

  /* DataTypeConversion: '<S69>/Data Type Conversion' incorporates:
   *  Delay: '<S69>/Delay1'
   */
  CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE = rtb_Switch_ms35;

  /* Update for Delay: '<S69>/Delay' */
  CtAp_ChrgComM_ARID_DEF.Delay_DSTATE_jrfd = rtb_TmpSignalConversionAtR_hyx0;

  /* End of Outputs for SubSystem: '<S10>/DCChrMgmt_DCTmtCnt' */

  /* Logic: '<S67>/LogicalOperator' incorporates:
   *  Constant: '<S71>/Constant'
   *  Delay generated from: '<S2>/Delay'
   *  Delay: '<S69>/Delay1'
   *  RelationalOperator: '<S71>/Compare'
   *
   * Block requirements for '<S67>/LogicalOperator':
   *  1. SWREQ_02689 BEM reconnect
   */
  rtb_LogicalOperator_bsdv = (rtb_LogicalOperator_dqfx ||
    (CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE > ((uint8_T)ChrgComM_TimeThree)) ||
    CtAp_ChrgComM_ARID_DEF.Delay_48_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_52_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_72_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_76_DSTATE);

  /* Logic: '<S100>/LogicalOperator' incorporates:
   *  Constant: '<S68>/Define'
   *  RelationalOperator: '<S68>/RelationalOperator'
   */
  rtb_LogicalOperator_dqfx = (rtb_TmpSignalConversionAtR_hyx0 != ((uint8_T)
    ChrgComM_Init));

  /* Logic: '<S68>/LogicalOperator'
   *
   * Block requirements for '<S68>/LogicalOperator':
   *  1. SWREQ_02681 CEM
   */
  rtb_LogicalOperator_m1a1 = (rtb_LogicalOperator_m1a1 &&
    rtb_LogicalOperator_dqfx);

  /* Logic: '<S68>/LogicalOperator2' */
  rtb_LogicalOperator2 = !rtb_LogicalOperator_dqfx;

  /* Switch: '<S72>/Switch' incorporates:
   *  Delay: '<S68>/Delay'
   */
  rtb_Switch_e053 = CtAp_ChrgComM_ARID_DEF.Delay_DSTATE;

  /* Logic: '<S100>/LogicalOperator' incorporates:
   *  Delay: '<S68>/Delay1'
   */
  rtb_LogicalOperator_dqfx = CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE_er0d;

  /* Logic: '<S68>/LogicalOperator1' incorporates:
   *  Constant: '<S68>/Define1'
   *  Constant: '<S68>/Define2'
   *  Delay: '<S68>/Delay1'
   *  Logic: '<S68>/LogicalOperator3'
   *  Logic: '<S68>/LogicalOperator4'
   *  Logic: '<S68>/LogicalOperator5'
   *  Logic: '<S68>/LogicalOperator6'
   *  RelationalOperator: '<S68>/RelationalOperator1'
   *  RelationalOperator: '<S68>/RelationalOperator2'
   *
   * Block requirements for '<S68>/LogicalOperator3':
   *  1. SWREQ_02682 CEM
   *
   * Block requirements for '<S68>/LogicalOperator4':
   *  1. SWREQ_02683 CEM
   *
   * Block requirements for '<S68>/LogicalOperator5':
   *  1. SWREQ_02684 CEM
   */
  CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE_er0d = (rtb_LogicalOperator_m1a1 ||
    (!rtb_LogicalOperator2 && ((rtb_Switch_e053 != ((uint8_T)
    ChrgComM_ChargeError)) || (rtb_TmpSignalConversionAtR_hyx0 != ((uint8_T)
    ChrgComM_handshake))) && rtb_LogicalOperator_dqfx));

  /* Logic: '<S67>/LogicalOperator1' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  Delay: '<S68>/Delay1'
   */
  rtb_LogicalOperator1_ni55 = (CtAp_ChrgComM_ARID_DEF.Delay1_DSTATE_er0d ||
    CtAp_ChrgComM_ARID_DEF.Delay_56_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_60_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_64_DSTATE ||
    CtAp_ChrgComM_ARID_DEF.Delay_68_DSTATE);

  /* Outputs for Atomic SubSystem: '<S67>/If1'
   *
   * Block requirements for '<S67>/If1':
   *  1. SWREQ_02690 BEM reconnect
   */
  /* Constant: '<S67>/Define3' incorporates:
   *  Constant: '<S67>/Define4'
   *
   * Block requirements for '<S67>/Define4':
   *  1. SWREQ_02691 BEM reconnect
   */
  rtb_Switch_ms35 = CtAp_ChrgComM_If(rtb_LogicalOperator1_ni55, ((uint8_T)
    ChrgComM_ReconnectAllow), ((uint8_T)ChrgComM_Init));

  /* End of Outputs for SubSystem: '<S67>/If1' */

  /* Outputs for Atomic SubSystem: '<S67>/If' */
  /* Constant: '<S67>/Define2' */
  rtb_Switch_e053 = CtAp_ChrgComM_If(rtb_LogicalOperator_bsdv, ((uint8_T)
    ChrgComM_ReconnectDisallow), rtb_Switch_ms35);

  /* End of Outputs for SubSystem: '<S67>/If' */

  /* Update for Delay: '<S68>/Delay' */
  CtAp_ChrgComM_ARID_DEF.Delay_DSTATE = rtb_TmpSignalConversionAtR_hyx0;

  /* End of Outputs for SubSystem: '<S4>/Tmt' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_Communication' */

  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmt' */
  /* Outputs for Atomic SubSystem: '<S76>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S76>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02969 ccs Tmt Error
   */
  rtb_LogicalOperator_dqfx = C_DCChrMgmt_DcChrgCommErrSetCdn
    (rtb_TmpSignalConversionAtR_ehzt, rtb_TmpSignalConversionAtR_b3gc);

  /* End of Outputs for SubSystem: '<S76>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S76>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S76>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02971 ccs Tmt Error
   */
  rtb_LogicalOperator_ikax = DCChrMgmt_DcChrgCommErrResetCdn
    (rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_jq21,
     rtb_Switch_e053);

  /* End of Outputs for SubSystem: '<S76>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S76>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S76>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02980 ccs Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus' incorporates:
   *  Constant: '<S76>/CAL'
   *  Constant: '<S76>/Define'
   *  Constant: '<S76>/Define1'
   *  Constant: '<S76>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator_dqfx,
    rtb_LogicalOperator_ikax, DCChrMgmt_RxCCSTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus.DCChrMgmt_MonStatBEMRxCCSTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_66_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_67_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_68_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_ju13);

  /* End of Outputs for SubSystem: '<S76>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02786 CCS Tmt DTC
   */
  rtb_LogicalOperator_hvyh = C_DCChrMgmt_DcChrgCommErrEnaCdn
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_fdin);

  /* End of Outputs for SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S77>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02782 CCS Tmt DTC
   */
  rtb_LogicalOperator_ikax = C_DCChrMgmt_DcChrgCommErrSetCdn
    (rtb_TmpSignalConversionAtR_ehzt, rtb_TmpSignalConversionAtR_b3gc);

  /* End of Outputs for SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S77>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02784 CCS Tmt DTC
   */
  rtb_BufferToMakeInport_e0psve5s = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S77>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S77>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S77>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02793 CCS Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus' incorporates:
   *  Constant: '<S77>/CAL'
   *  Constant: '<S77>/Define1'
   *  Constant: '<S77>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S77>/CAL':
   *  1. SWREQ_02791 CCS Tmt DTC
   */
  CtAp_ChrgCo_ATOM_U16ErrorHandle(rtb_LogicalOperator_hvyh,
    rtb_LogicalOperator_ikax, rtb_BufferToMakeInport_e0psve5s,
    DCChrMgmt_RxCCSTmt_CFG, ((uint16_T)ChrgComM_U16Zero), ((uint16_T)
    ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_.DCChrMgmt_MonStatBEMRxCCSTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_22_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_23_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_al00);

  /* End of Outputs for SubSystem: '<S77>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmt' */
  /* Outputs for Atomic SubSystem: '<S78>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S78>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02918 CML Tmt Error
   */
  rtb_BufferToMakeInport_e0psve5s = DCChrMgmt_DcChrgCommErrSet_prcs
    (rtb_TmpSignalConversionAtR_mr4g);

  /* End of Outputs for SubSystem: '<S78>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S78>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S78>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02920 CML Tmt Error
   */
  rtb_BufferToMakeInportV_e0psve5 = DCChrMgmt_DcChrgCommErrResetCdn
    (rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_jq21,
     rtb_Switch_e053);

  /* End of Outputs for SubSystem: '<S78>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S78>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S78>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02929 CML Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus' incorporates:
   *  Constant: '<S78>/CAL'
   *  Constant: '<S78>/Define'
   *  Constant: '<S78>/Define1'
   *  Constant: '<S78>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_BufferToMakeInport_e0psve5s,
    rtb_BufferToMakeInportV_e0psve5, DCChrMgmt_RxCMLTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus.DCChrMgmt_MonStatBEMRxCMLTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_54_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_55_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_56_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_jzx3);

  /* End of Outputs for SubSystem: '<S78>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
   *
   * Block requirements for '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg':
   *  1. SWREQ_02735 CML Tmt DTC
   */
  rtb_LogicalOperator_nv4n = DCChrMgmt_DcChrgCommErrEnaCdn_F
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_ezql);

  /* End of Outputs for SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
   *
   * Block requirements for '<S79>/DCChrMgmt_DcChrgCommErrSetCdn_Flg':
   *  1. SWREQ_02731 CML Tmt DTC
   */
  rtb_BufferToMakeInportV_e0psve5 = DCChrMgmt_DcChrgCommErrSet_prcs
    (rtb_TmpSignalConversionAtR_mr4g);

  /* End of Outputs for SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
   *
   * Block requirements for '<S79>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
   *  1. SWREQ_02716 CRM 0xAA Tmt DTC
   */
  rtb_BufferToMakeInportVi_e0psve = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S79>/DCChrMgmt_DcChrgCommErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S79>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S79>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02742 CML Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus' incorporates:
   *  Constant: '<S79>/CAL'
   *  Constant: '<S79>/Define1'
   *  Constant: '<S79>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S79>/CAL':
   *  1. SWREQ_02740 CML Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_pcua(rtb_LogicalOperator_nv4n,
    rtb_BufferToMakeInportV_e0psve5, rtb_BufferToMakeInportVi_e0psve,
    DCChrMgmt_RxCMLTmt_CFG, ((uint16_T)ChrgComM_U16Zero), ((uint16_T)
    ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_.DCChrMgmt_MonStatBEMRxCMLTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_10_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_11_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_bjvj);

  /* End of Outputs for SubSystem: '<S79>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmt' */
  /* Outputs for Atomic SubSystem: '<S80>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S80>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02901 CRM OxAA Error
   */
  rtb_BufferToMakeInportVi_e0psve = DCChrMgmt_DcChrgCommErrSet_jmra
    (rtb_TmpSignalConversionAtR_od3c);

  /* End of Outputs for SubSystem: '<S80>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S80>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S80>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02903 CRM OxAA Error
   */
  rtb_BufferToMakeInportVir_e0psv = DCChrMgmt_DcChrgCommErrRes_aodf
    (rtb_TmpSignalConversionAtR_hyx0);

  /* End of Outputs for SubSystem: '<S80>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S80>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S80>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02912 CRM OxAA Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus' incorporates:
   *  Constant: '<S80>/CAL'
   *  Constant: '<S80>/Define'
   *  Constant: '<S80>/Define1'
   *  Constant: '<S80>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_BufferToMakeInportVi_e0psve,
    rtb_BufferToMakeInportVir_e0psv, DCChrMgmt_RxCRMPrepdTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPrepdTm.DCChrMgmt_MonStatBEMRxCRMPrepdTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_50_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_51_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_52_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_dapv);

  /* End of Outputs for SubSystem: '<S80>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
   *
   * Block requirements for '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg':
   *  1. SWREQ_02718 CRM 0xAA Tmt DTC
   */
  rtb_LogicalOperator_npq2 = DCChrMgmt_DcChrgCommErrEna_ejoe
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtR_oxnd,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_hv2h);

  /* End of Outputs for SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
   *
   * Block requirements for '<S81>/DCChrMgmt_DcChrgCommErrSetCdn_Flg':
   *  1. SWREQ_02714 CRM 0xAA Tmt DTC
   */
  rtb_BufferToMakeInportVir_e0psv = DCChrMgmt_DcChrgCommErrSet_jmra
    (rtb_TmpSignalConversionAtR_od3c);

  /* End of Outputs for SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
   *
   * Block requirements for '<S81>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
   *  1. SWREQ_02716 CRM 0xAA Tmt DTC
   */
  rtb_BufferToMakeInportVirt_e0ps = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S81>/DCChrMgmt_DcChrgCommErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S81>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S81>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02725 CRM 0xAA Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus' incorporates:
   *  Constant: '<S81>/CAL'
   *  Constant: '<S81>/Define1'
   *  Constant: '<S81>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S81>/CAL':
   *  1. SWREQ_02723 CRM 0xAA Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_k3s2(rtb_LogicalOperator_npq2,
    rtb_BufferToMakeInportVir_e0psv, rtb_BufferToMakeInportVirt_e0ps,
    DCChrMgmt_RxCRMPrepdTmt_CFG, ((uint16_T)ChrgComM_U16Zero), ((uint16_T)
    ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx.DCChrMgmt_MonStatBEMRxCRMPrepdTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_6_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_7_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_bnly);

  /* End of Outputs for SubSystem: '<S81>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCRMTmt' */
  /* Outputs for Atomic SubSystem: '<S82>/CChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S82>/CChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02884 CRM Tmt Error
   */
  rtb_BufferToMakeInportVirt_e0ps = Ct_CChrMgmt_DcChrgCommErrSetCdn
    (rtb_TmpSignalConversionAtR_i3ti);

  /* End of Outputs for SubSystem: '<S82>/CChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S82>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S82>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02886 CRM Tmt Error
   */
  rtb_LogicalOperator1_p4tw = DCChrMgmt_DcChrgCommErrRes_aodf
    (rtb_TmpSignalConversionAtR_hyx0);

  /* End of Outputs for SubSystem: '<S82>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S82>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S82>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02895 CRM Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus' incorporates:
   *  Constant: '<S82>/CAL'
   *  Constant: '<S82>/Define'
   *  Constant: '<S82>/Define1'
   *  Constant: '<S82>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_BufferToMakeInportVirt_e0ps,
    rtb_LogicalOperator1_p4tw, DCChrMgmt_RxCRMTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus.DCChrMgmt_MonStatBEMRxCRMTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_46_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_47_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_48_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_lnjd);

  /* End of Outputs for SubSystem: '<S82>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCRMTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmt' */
  /* Outputs for Atomic SubSystem: '<S83>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S83>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02952 CRO 0xAA Tmt Error
   */
  rtb_LogicalOperator1_p4tw = DCChrMgmt_DcChrgCommErrSet_cx0e
    (rtb_TmpSignalConversionAtR_gbe1, rtb_TmpSignalConversionAtR_kduh);

  /* End of Outputs for SubSystem: '<S83>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S83>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S83>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02954 CRO 0xAA Tmt Error
   */
  rtb_LogicalOperator1_jkja = DCChrMgmt_DcChrgCommErrResetCdn
    (rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_jq21,
     rtb_Switch_e053);

  /* End of Outputs for SubSystem: '<S83>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S83>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S83>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02963 CRO 0xAA Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus' incorporates:
   *  Constant: '<S83>/CAL'
   *  Constant: '<S83>/Define'
   *  Constant: '<S83>/Define1'
   *  Constant: '<S83>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1_p4tw,
    rtb_LogicalOperator1_jkja, DCChrMgmt_RxCROPrepdTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPrepdTm.DCChrMgmt_MonStatBEMRxCROPrepdTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_62_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_63_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_64_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_bsqw);

  /* End of Outputs for SubSystem: '<S83>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02769 CRO 0xAA Tmt DTC
   */
  rtb_LogicalOperator_nn3l = C_DCChrMgmt_DcChrgCommErrEnaCdn
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_bjbg);

  /* End of Outputs for SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S84>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02765 CRO 0xAA Tmt DTC
   */
  rtb_LogicalOperator1_jkja = DCChrMgmt_DcChrgCommErrSet_cx0e
    (rtb_TmpSignalConversionAtR_gbe1, rtb_TmpSignalConversionAtR_kduh);

  /* End of Outputs for SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
   *
   * Block requirements for '<S84>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
   *  1. SWREQ_02716 CRM 0xAA Tmt DTC
   */
  rtb_LogicalOperator2_mwje = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S84>/DCChrMgmt_DcChrgCommErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S84>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S84>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02776 CRO 0xAA Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus' incorporates:
   *  Constant: '<S84>/CAL'
   *  Constant: '<S84>/Define1'
   *  Constant: '<S84>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S84>/CAL':
   *  1. SWREQ_02774 CRO 0xAA Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_buk3(rtb_LogicalOperator_nn3l,
    rtb_LogicalOperator1_jkja, rtb_LogicalOperator2_mwje,
    DCChrMgmt_RxCROPrepdTmt_CFG, ((uint16_T)ChrgComM_U16Zero), ((uint16_T)
    ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPr_cskl.DCChrMgmt_MonStatBEMRxCROPrepdTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_18_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_19_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_nueb);

  /* End of Outputs for SubSystem: '<S84>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmt' */
  /* Outputs for Atomic SubSystem: '<S85>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S85>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02935 CRO  Tmt Error
   */
  rtb_LogicalOperator2_mwje = DCChrMgmt_DcChrgCommErrSet_dlmy
    (rtb_TmpSignalConversionAtR_gbe1, rtb_TmpSignalConversionAtR_kduh,
     rtb_TmpSignalConversionAtR_mnwc,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_lxo5);

  /* End of Outputs for SubSystem: '<S85>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S85>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S85>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02937 CRO  Tmt Error
   */
  rtb_LogicalOperator2_bzbt = DCChrMgmt_DcChrgCommErrResetCdn
    (rtb_TmpSignalConversionAtR_hyx0, rtb_TmpSignalConversionAtR_jq21,
     rtb_Switch_e053);

  /* End of Outputs for SubSystem: '<S85>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S85>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S85>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02946 CRO  Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus' incorporates:
   *  Constant: '<S85>/CAL'
   *  Constant: '<S85>/Define'
   *  Constant: '<S85>/Define1'
   *  Constant: '<S85>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator2_mwje,
    rtb_LogicalOperator2_bzbt, DCChrMgmt_RxCROTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmt_Bus.DCChrMgmt_MonStatBEMRxCROTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_58_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_59_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_60_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_owjr);

  /* End of Outputs for SubSystem: '<S85>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02752 CRO Tmt DTC
   */
  rtb_LogicalOperator_fhrh = DCChrMgmt_DcChrgCommErrEnaCdn_F
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_dham);

  /* End of Outputs for SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S86>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02748 CRO Tmt DTC
   */
  rtb_LogicalOperator2_bzbt = DCChrMgmt_DcChrgCommErrSet_dlmy
    (rtb_TmpSignalConversionAtR_gbe1, rtb_TmpSignalConversionAtR_kduh,
     rtb_TmpSignalConversionAtR_mnwc,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_ldqo);

  /* End of Outputs for SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
   *
   * Block requirements for '<S86>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
   *  1. SWREQ_02716 CRM 0xAA Tmt DTC
   */
  rtb_LogicalOperator1_ftla = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S86>/DCChrMgmt_DcChrgCommErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S86>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S86>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02759 CRO Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus' incorporates:
   *  Constant: '<S86>/CAL'
   *  Constant: '<S86>/Define1'
   *  Constant: '<S86>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S86>/CAL':
   *  1. SWREQ_02757 CRO Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_avlu(rtb_LogicalOperator_fhrh,
    rtb_LogicalOperator2_bzbt, rtb_LogicalOperator1_ftla, DCChrMgmt_RxCROTmt_CFG,
    ((uint16_T)ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmtDTC_.DCChrMgmt_MonStatBEMRxCROTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_14_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_15_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_dype);

  /* End of Outputs for SubSystem: '<S86>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmt' */
  /* Outputs for Atomic SubSystem: '<S87>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S87>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_03003 CSD Tmt Error
   */
  rtb_LogicalOperator1_ftla = DCChrMgmt_DcChrgCommErrSet_fn0l
    (rtb_TmpSignalConversionAtR_fdv0, rtb_TmpSignalConversionAtR_pbns,
     rtb_TmpSignalConversionAtR_auq0,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_dhmr);

  /* End of Outputs for SubSystem: '<S87>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S87>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S87>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_03005 CSD Tmt Error
   */
  rtb_LogicalOperator1_hl21 = DCChrMgmt_DcChrgCommErrRes_aodf
    (rtb_TmpSignalConversionAtR_hyx0);

  /* End of Outputs for SubSystem: '<S87>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S87>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S87>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03014 CSD Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus' incorporates:
   *  Constant: '<S87>/CAL'
   *  Constant: '<S87>/Define'
   *  Constant: '<S87>/Define1'
   *  Constant: '<S87>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1_ftla,
    rtb_LogicalOperator1_hl21, DCChrMgmt_RxCSDTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus.DCChrMgmt_MonStatBEMRxCSDTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_74_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_75_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_76_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_guug);

  /* End of Outputs for SubSystem: '<S87>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02820 CSD Tmt DTC
   */
  rtb_LogicalOperator_homh = C_DCChrMgmt_DcChrgCommErrEnaCdn
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_llw0);

  /* End of Outputs for SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S88>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02816 CSD Tmt DTC
   */
  rtb_LogicalOperator1_hl21 = DCChrMgmt_DcChrgCommErrSet_fn0l
    (rtb_TmpSignalConversionAtR_fdv0, rtb_TmpSignalConversionAtR_pbns,
     rtb_TmpSignalConversionAtR_auq0,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_ppxr);

  /* End of Outputs for SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S88>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02818 CSD Tmt DTC
   */
  rtb_LogicalOperator1_ffxt = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S88>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S88>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S88>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02827 CSD Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus' incorporates:
   *  Constant: '<S88>/CAL'
   *  Constant: '<S88>/Define1'
   *  Constant: '<S88>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S88>/CAL':
   *  1. SWREQ_02825 CSD Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_pbqj(rtb_LogicalOperator_homh,
    rtb_LogicalOperator1_hl21, rtb_LogicalOperator1_ffxt, DCChrMgmt_RxCSDTmt_CFG,
    ((uint16_T)ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_.DCChrMgmt_MonStatBEMRxCSDTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_30_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_31_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_jwzv);

  /* End of Outputs for SubSystem: '<S88>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmt' */
  /* Outputs for Atomic SubSystem: '<S89>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S89>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02986 CST Tmt Error
   */
  rtb_LogicalOperator1_ffxt = DCChrMgmt_DcChrgCommErrSet_olfk
    (rtb_TmpSignalConversionAtR_cpib, rtb_TmpSignalConversionAtR_fdv0);

  /* End of Outputs for SubSystem: '<S89>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S89>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S89>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02988 CST Tmt Error
   */
  rtb_LogicalOperator1_fikc = DCChrMgmt_DcChrgCommErrRes_aodf
    (rtb_TmpSignalConversionAtR_hyx0);

  /* End of Outputs for SubSystem: '<S89>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S89>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S89>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02997 CST Tmt Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus' incorporates:
   *  Constant: '<S89>/CAL'
   *  Constant: '<S89>/Define'
   *  Constant: '<S89>/Define1'
   *  Constant: '<S89>/Define2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1_ffxt,
    rtb_LogicalOperator1_fikc, DCChrMgmt_RxCSTTmt_CFG, ((uint16_T)
    ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus.DCChrMgmt_MonStatBEMRxCSTTmt,
    &CtAp_ChrgComM_ARID_DEF.Delay_70_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_71_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_72_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_nz4o);

  /* End of Outputs for SubSystem: '<S89>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmt' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02803 CST Tmt DTC
   */
  rtb_LogicalOperator_bdhx = C_DCChrMgmt_DcChrgCommErrEnaCdn
    (&rtb_TmpSignalConversionAtR_oxnd, rtb_TmpSignalConversionAtR_nqxl,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_g1sm);

  /* End of Outputs for SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S90>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02799 CST Tmt DTC
   */
  rtb_LogicalOperator1_fikc = DCChrMgmt_DcChrgCommErrSet_olfk
    (rtb_TmpSignalConversionAtR_cpib, rtb_TmpSignalConversionAtR_fdv0);

  /* End of Outputs for SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S90>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02801 CST Tmt DTC
   */
  rtb_DataTypeConversion_a52x = DCChrMgmt_DcChrgCommErrRes_cc2d
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S90>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S90>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S90>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02810 CST Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus' incorporates:
   *  Constant: '<S90>/CAL'
   *  Constant: '<S90>/Define1'
   *  Constant: '<S90>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S90>/CAL':
   *  1. SWREQ_02808 CST Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_mel0(rtb_LogicalOperator_bdhx,
    rtb_LogicalOperator1_fikc, rtb_DataTypeConversion_a52x,
    DCChrMgmt_RxCSTTmt_CFG, ((uint16_T)ChrgComM_U16Zero), ((uint16_T)
    ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_.DCChrMgmt_MonStatBEMRxCSTTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_26_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_27_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_merl);

  /* End of Outputs for SubSystem: '<S90>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmtDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */
  /* Outputs for Atomic SubSystem: '<S91>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S91>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_03020 Port temp lv1 Error
   */
  rtb_LogicalOperator1 = DCChrMgmt_DcChrgCommErrSet_fbfu
    (rtb_TmpSignalConversionAtR_moco, rtb_TmpSignalConversionAtR_cglv);

  /* End of Outputs for SubSystem: '<S91>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S91>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S91>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_03022 Port temp lv1 Error
   */
  rtb_LogicalOperator1_lnli = DCChrMgmt_DcChrgCommErrRes_cjom
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S91>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S91>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S91>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03031 Port temp lv1 Error
   */
  /* Constant: '<S91>/Define' incorporates:
   *  Constant: '<S91>/CAL'
   *  Constant: '<S91>/CAL1'
   *  Constant: '<S91>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S91>/CAL1':
   *  1. SWREQ_03030 Port temp lv1 Error
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1,
    rtb_LogicalOperator1_lnli, DCChrMgmt_DcPortTempErrLv1CfmTim_CFG,
    DCChrMgmt_DcPortErrLv1TempRelsTim_CFG, ((uint16_T)ChrgComM_dt50ms),
    &rtb_DataTypeConversion_a52x, &CtAp_ChrgComM_ARID_DEF.Delay_78_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Switch8_nmza,
    &CtAp_ChrgComM_ARID_DEF.Delay_80_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_g2ml);

  /* End of Outputs for SubSystem: '<S91>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1DTC' */
  /* Outputs for Atomic SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02837 Port Temp lv1 DTC
   */
  rtb_LogicalOperator_kty5 = DCChrMgmt_DcChrgCommErrEna_lgvq
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtRTE_R_,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_cv5h);

  /* End of Outputs for SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S92>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02833 Port Temp lv1 DTC
   */
  rtb_LogicalOperator1_lnli = DCChrMgmt_DcChrgCommErrSet_fbfu
    (rtb_TmpSignalConversionAtR_moco, rtb_TmpSignalConversionAtR_cglv);

  /* End of Outputs for SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S92>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02835 Port Temp lv1 DTC
   */
  rtb_LogicalOperator1_ecvr = DCChrMgmt_DcChrgCommErrRes_cjom
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S92>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S92>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S92>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02844 Port Temp lv1 DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus' incorporates:
   *  Constant: '<S92>/CAL'
   *  Constant: '<S92>/CAL1'
   *  Constant: '<S92>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S92>/CAL':
   *  1. SWREQ_02842 Port Temp lv1 DTC
   *
   * Block requirements for '<S92>/CAL1':
   *  1. SWREQ_02843 Port Temp lv1 DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_ir2s(rtb_LogicalOperator_kty5,
    rtb_LogicalOperator1_lnli, rtb_LogicalOperator1_ecvr,
    DCChrMgmt_DcPortTempErrLv1CfmTim_CFG, DCChrMgmt_DcPortErrLv1TempRelsTim_CFG,
    ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_ofxn.DCChrMgmt_MonStatDcPortTempErrLvl1DTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_34_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_35_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_fqdq);

  /* End of Outputs for SubSystem: '<S92>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1DTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2' */
  /* Outputs for Atomic SubSystem: '<S93>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S93>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_03037 Port temp lv2 Error
   */
  rtb_LogicalOperator1_ecvr = DCChrMgmt_DcChrgCommErrSet_krin
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S93>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S93>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S93>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_03039 Port temp lv2 Error
   */
  rtb_LogicalOperator1_cxf3 = DCChrMgmt_DcChrgCommErrRes_bd3r
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S93>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S93>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S93>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03048 Port temp lv2 Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus' incorporates:
   *  Constant: '<S93>/CAL'
   *  Constant: '<S93>/CAL1'
   *  Constant: '<S93>/Define'
   *  Constant: '<S93>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S93>/CAL1':
   *  1. SWREQ_03047 Port temp lv2 Error
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1_ecvr,
    rtb_LogicalOperator1_cxf3, DCChrMgmt_DcPortTempErrLv2CfmTim_CFG,
    DCChrMgmt_DcPortErrLv2TempRelsTim_CFG, ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_gege.DCChrMgmt_MonStatDcPortTempErrLvl2,
    &CtAp_ChrgComM_ARID_DEF.Delay_82_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_83_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_84_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_pbm3);

  /* End of Outputs for SubSystem: '<S93>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2DTC' */
  /* Outputs for Atomic SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02854 Port Temp lv2 DTC
   */
  rtb_LogicalOperator_f3cp = DCChrMgmt_DcChrgCommErrEna_lgvq
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtRTE_R_,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_cxar);

  /* End of Outputs for SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S94>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02850 Port Temp lv2 DTC
   */
  rtb_LogicalOperator1_cxf3 = DCChrMgmt_DcChrgCommErrSet_krin
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S94>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02852 Port Temp lv2 DTC
   */
  rtb_LogicalOperator1_ongz = DCChrMgmt_DcChrgCommErrRes_bd3r
    (rtb_TmpSignalConversionAtR_cglv, rtb_TmpSignalConversionAtR_moco);

  /* End of Outputs for SubSystem: '<S94>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S94>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S94>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02861 Port Temp lv2 DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus' incorporates:
   *  Constant: '<S94>/CAL'
   *  Constant: '<S94>/CAL1'
   *  Constant: '<S94>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S94>/CAL':
   *  1. SWREQ_02859 Port Temp lv2 DTC
   *
   * Block requirements for '<S94>/CAL1':
   *  1. SWREQ_02860 Port Temp lv2 DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_mhbx(rtb_LogicalOperator_f3cp,
    rtb_LogicalOperator1_cxf3, rtb_LogicalOperator1_ongz,
    DCChrMgmt_DcPortTempErrLv2CfmTim_CFG, DCChrMgmt_DcPortErrLv2TempRelsTim_CFG,
    ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_fnpo.DCChrMgmt_MonStatDcPortTempErrLvl2DTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_38_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_39_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_bhxx);

  /* End of Outputs for SubSystem: '<S94>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2DTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErr' */
  /* Outputs for Atomic SubSystem: '<S95>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S95>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_03054 Port temp sense Error
   */
  rtb_LogicalOperator1_ongz = DCChrMgmt_DcChrgCommErrSet_gq3a
    (rtb_TmpSignalConversionAtR_flqm, rtb_TmpSignalConversionAtR_cplx);

  /* End of Outputs for SubSystem: '<S95>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S95>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S95>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_03056 Port temp sense Error
   */
  rtb_LogicalOperator1_dfrc = DCChrMgmt_DcChrgCommErrRes_nx2o
    (rtb_TmpSignalConversionAtR_flqm, rtb_TmpSignalConversionAtR_cplx);

  /* End of Outputs for SubSystem: '<S95>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S95>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S95>/ATOM_U16ErrorHandle':
   *  1. SWREQ_03065 Port temp sense Error
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus' incorporates:
   *  Constant: '<S95>/CAL'
   *  Constant: '<S95>/CAL1'
   *  Constant: '<S95>/Define'
   *  Constant: '<S95>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S95>/CAL1':
   *  1. SWREQ_03064 Port temp sense Error
   */
  CtAp_ChrgComM_ATOM_U16ErrHnd(ChrgComM_Active, rtb_LogicalOperator1_ongz,
    rtb_LogicalOperator1_dfrc, DCChrMgmt_DcPortSnsrErrCfmTim_CFG,
    DCChrMgmt_DcPortSnsrErrRelsTim_CFG, ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempSnsrE.DCChrMgmt_MonStatDcPortTempSnsrErr,
    &CtAp_ChrgComM_ARID_DEF.Delay_86_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_87_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_88_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_kkiq);

  /* End of Outputs for SubSystem: '<S95>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErr' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErrDTC' */
  /* Outputs for Atomic SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02871 Port Temp sense DTC
   */
  rtb_LogicalOperator_jufh = DCChrMgmt_DcChrgCommErrEna_lgvq
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtRTE_R_,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgC_mbvz);

  /* End of Outputs for SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S96>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02867 Port Temp sense DTC
   */
  rtb_LogicalOperator1_dfrc = DCChrMgmt_DcChrgCommErrSet_gq3a
    (rtb_TmpSignalConversionAtR_flqm, rtb_TmpSignalConversionAtR_cplx);

  /* End of Outputs for SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S96>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02869 Port Temp sense DTC
   */
  rtb_Equal = DCChrMgmt_DcChrgCommErrRes_nx2o(rtb_TmpSignalConversionAtR_flqm,
    rtb_TmpSignalConversionAtR_cplx);

  /* End of Outputs for SubSystem: '<S96>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S96>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S96>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02878 Port Temp sense DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus' incorporates:
   *  Constant: '<S96>/CAL'
   *  Constant: '<S96>/CAL1'
   *  Constant: '<S96>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S96>/CAL':
   *  1. SWREQ_02876 Port Temp sense DTC
   *
   * Block requirements for '<S96>/CAL1':
   *  1. SWREQ_02877 Port Temp sense DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_p2j0(rtb_LogicalOperator_jufh,
    rtb_LogicalOperator1_dfrc, rtb_Equal, DCChrMgmt_DcPortSnsrErrCfmTim_CFG,
    DCChrMgmt_DcPortSnsrErrRelsTim_CFG, ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_oldb.DCChrMgmt_MonStatDcPortTempSnsrErrDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_42_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_43_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHand_cl54);

  /* End of Outputs for SubSystem: '<S96>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErrDTC' */

  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_ErrResBEMRxCRMTmtDTC' */
  /* Outputs for Atomic SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn'
   *
   * Block requirements for '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn':
   *  1. SWREQ_02701 CRM Tmt DTC
   */
  rtb_LogicalOperator = DCChrMgmt_DcChrgCommErrEna_ejoe
    (rtb_TmpSignalConversionAtR_nqxl, &rtb_TmpSignalConversionAtR_oxnd,
     rtb_TmpSignalConversionAtR_ngiu,
     &CtAp_ChrgComM_ARID_DEF.ARID_DEF_DCChrMgmt_DcChrgCommE);

  /* End of Outputs for SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrSetCdn'
   *
   * Block requirements for '<S97>/DCChrMgmt_DcChrgCommErrSetCdn':
   *  1. SWREQ_02697 CRM Tmt DTC
   */
  rtb_BufferToMakeInportVirtual_I = Ct_CChrMgmt_DcChrgCommErrSetCdn
    (rtb_TmpSignalConversionAtR_i3ti);

  /* End of Outputs for SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrResetCdn'
   *
   * Block requirements for '<S97>/DCChrMgmt_DcChrgCommErrResetCdn':
   *  1. SWREQ_02699 CRM Tmt DTC
   */
  rtb_Equal = DCChrMgmt_DcChrgCommErrRes_cc2d(rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S97>/DCChrMgmt_DcChrgCommErrResetCdn' */

  /* Outputs for Atomic SubSystem: '<S97>/ATOM_U16ErrorHandle'
   *
   * Block requirements for '<S97>/ATOM_U16ErrorHandle':
   *  1. SWREQ_02708 CRM Tmt DTC
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus' incorporates:
   *  Constant: '<S97>/CAL'
   *  Constant: '<S97>/Define1'
   *  Constant: '<S97>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S97>/CAL':
   *  1. SWREQ_02706 CRM Tmt DTC
   */
  CtAp_C_ATOM_U16ErrorHandle_nctk(rtb_LogicalOperator,
    rtb_BufferToMakeInportVirtual_I, rtb_Equal, DCChrMgmt_RxCRMTmt_CFG,
    ((uint16_T)ChrgComM_U16Zero), ((uint16_T)ChrgComM_dt50ms),
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_.DCChrMgmt_MonStatBEMRxCRMTmtDTC,
    &CtAp_ChrgComM_ARID_DEF.Delay_2_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.Delay_3_DSTATE,
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S97>/ATOM_U16ErrorHandle' */
  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_ErrResBEMRxCRMTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus.DCChrMgmt_MonResBEMRxCCSTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_66_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus.DCChrMgmt_ErrStatBEMRxCCSTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_67_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus.DCChrMgmt_ErrResBEMRxCCSTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_68_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus'
   *  DataTypeConversion: '<S77>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_.DCChrMgmt_MonResBEMRxCCSTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_22_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_.DCChrMgmt_ErrStatBEMRxCCSTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_23_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_.DCChrMgmt_ErrResBEMRxCCSTmtDTC
    = DCChrMgmt_ErrResBEMRxCCSTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCCSTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus.DCChrMgmt_MonResBEMRxCMLTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_54_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus.DCChrMgmt_ErrStatBEMRxCMLTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_55_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus.DCChrMgmt_ErrResBEMRxCMLTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_56_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus'
   *  DataTypeConversion: '<S79>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_.DCChrMgmt_MonResBEMRxCMLTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_10_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_.DCChrMgmt_ErrStatBEMRxCMLTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_11_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_.DCChrMgmt_ErrResBEMRxCMLTmtDTC
    = DCChrMgmt_ErrResBEMRxCMLTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCMLTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPrepdTm.DCChrMgmt_MonResBEMRxCRMPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_50_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPrepdTm.DCChrMgmt_ErrStatBEMRxCRMPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_51_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPrepdTm.DCChrMgmt_ErrResBEMRxCRMPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_52_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus'
   *  DataTypeConversion: '<S81>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx.DCChrMgmt_MonResBEMRxCRMPrepdTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_6_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx.DCChrMgmt_ErrStatBEMRxCRMPrepdTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_7_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx.DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC
    = DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCRMPrepdTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus.DCChrMgmt_MonResBEMRxCRMTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_46_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus.DCChrMgmt_ErrStatBEMRxCRMTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_47_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus.DCChrMgmt_ErrResBEMRxCRMTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_48_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus'
   *  DataTypeConversion: '<S97>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_.DCChrMgmt_MonResBEMRxCRMTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_2_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_.DCChrMgmt_ErrStatBEMRxCRMTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_3_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_ErrResBEMRxCRMTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_.DCChrMgmt_ErrResBEMRxCRMTmtDTC
    = DCChrMgmt_ErrResBEMRxCRMTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_ErrResBEMRxCRMTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPrepdTm.DCChrMgmt_MonResBEMRxCROPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_62_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPrepdTm.DCChrMgmt_ErrStatBEMRxCROPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_63_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPrepdTm.DCChrMgmt_ErrResBEMRxCROPrepdTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_64_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus'
   *  DataTypeConversion: '<S84>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPr_cskl.DCChrMgmt_MonResBEMRxCROPrepdTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_18_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPr_cskl.DCChrMgmt_ErrStatBEMRxCROPrepdTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_19_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPr_cskl.DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC
    = DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROPrepdTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmt_Bus.DCChrMgmt_MonResBEMRxCROTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_58_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmt_Bus.DCChrMgmt_ErrStatBEMRxCROTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_59_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmt_Bus.DCChrMgmt_ErrResBEMRxCROTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_60_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus'
   *  DataTypeConversion: '<S86>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmtDTC_.DCChrMgmt_MonResBEMRxCROTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_14_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmtDTC_.DCChrMgmt_ErrStatBEMRxCROTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_15_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmtDTC_.DCChrMgmt_ErrResBEMRxCROTmtDTC
    = DCChrMgmt_ErrResBEMRxCROTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCROTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus.DCChrMgmt_MonResBEMRxCSDTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_74_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus.DCChrMgmt_ErrStatBEMRxCSDTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_75_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus.DCChrMgmt_ErrResBEMRxCSDTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_76_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus'
   *  DataTypeConversion: '<S88>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_.DCChrMgmt_MonResBEMRxCSDTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_30_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_.DCChrMgmt_ErrStatBEMRxCSDTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_31_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_.DCChrMgmt_ErrResBEMRxCSDTmtDTC
    = DCChrMgmt_ErrResBEMRxCSDTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSDTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus.DCChrMgmt_MonResBEMRxCSTTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_70_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus.DCChrMgmt_ErrStatBEMRxCSTTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_71_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus.DCChrMgmt_ErrResBEMRxCSTTmt
    = CtAp_ChrgComM_ARID_DEF.Delay_72_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus'
   *  DataTypeConversion: '<S90>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_.DCChrMgmt_MonResBEMRxCSTTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_26_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_.DCChrMgmt_ErrStatBEMRxCSTTmtDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_27_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmtDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_.DCChrMgmt_ErrResBEMRxCSTTmtDTC
    = DCChrMgmt_ErrResBEMRxCSTTmtDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_BEMRxCSTTmtDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
    (rtb_Switch_e053);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* Outputs for Atomic SubSystem: '<S4>/BSM'
   *
   * Block requirements for '<S4>/BSM':
   *  1. SWREQ_02663 BSM
   *  2. SWREQ_02664 BSM
   *  3. SWREQ_02665 BSM
   *  4. SWREQ_02666 BSM
   *  5. SWREQ_02667 BSM
   *  6. SWREQ_02668 BSM
   *  7. SWREQ_02669 BSM
   *  8. SWREQ_02670 BSM
   *  9. SWREQ_02671 BSM
   *  10. SWREQ_02672 BSM
   *  11. SWREQ_02673 BSM
   *  12. SWREQ_02674 BSM
   *  13. SWREQ_02675 BSM
   *  14. SWREQ_02676 BSM
   *  15. SWREQ_02677 BSM
   *  16. SWREQ_02678 BSM
   *  17. SWREQ_02679 BSM
   *  18. SWREQ_02680 BSM
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg' incorporates:
   *  Constant: '<S6>/Define'
   */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg
    (ChrgComM_Active);

  /* End of Outputs for SubSystem: '<S4>/BSM' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum
    (rtb_Switch_f0r2);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* Outputs for Atomic SubSystem: '<S4>/BST'
   *
   * Block requirements for '<S4>/BST':
   *  1. SWREQ_02626 BST
   *  2. SWREQ_02627 BST
   *  3. SWREQ_02628 BST
   *  4. SWREQ_02629 BST
   *  5. SWREQ_02630 BST
   *  6. SWREQ_02631 BST
   *  7. SWREQ_02632 BST
   *  8. SWREQ_02633 BST
   *  9. SWREQ_02634 BST
   *  10. SWREQ_02635 BST
   *  11. SWREQ_02636 BST
   *  12. SWREQ_02637 BST
   *  13. SWREQ_02638 BST
   *  14. SWREQ_02639 BST
   *  15. SWREQ_02640 BST
   *  16. SWREQ_02641 BST
   *  17. SWREQ_02642 BST
   *  18. SWREQ_02643 BST
   *  19. SWREQ_02644 BST
   *  20. SWREQ_02645 BST
   *  21. SWREQ_02646 BST
   *  22. SWREQ_02647 BST
   *  23. SWREQ_02648 BST
   *  24. SWREQ_02649 BST
   *  25. SWREQ_02650 BST
   *  26. SWREQ_02651 BST
   *  27. SWREQ_02652 BST
   *  28. SWREQ_02653 BST
   *  29. SWREQ_02654 BST
   *  30. SWREQ_02655 BST
   *  31. SWREQ_02656 BST
   *  32. SWREQ_02657 BST
   *  33. SWREQ_02658 BST
   *  34. SWREQ_02659 BST
   *  35. SWREQ_02660 BST
   *  36. SWREQ_02661 BST
   *  37. SWREQ_02662 BST
   */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion'
   */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum
    (rtb_Switch_f0r2);

  /* End of Outputs for SubSystem: '<S4>/BST' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg' incorporates:
   *  Delay: '<S9>/Delay'
   */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg
    (CtAp_ChrgComM_ARID_DEF.Delay_DSTATE_nvy0);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus'
   *  DataTypeConversion: '<S91>/Data Type Conversion'
   *  DataTypeConversion: '<S91>/Data Type Conversion1'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempErrLv.DCChrMgmt_MonStatDcPortTempErrLvl1
    = rtb_DataTypeConversion_a52x;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempErrLv.DCChrMgmt_MonResDcPortTempErrLvl1
    = CtAp_ChrgComM_ARID_DEF.Delay_78_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempErrLv.DCChrMgmt_ErrStatDcPortTempErrLvl1
    = CtAp_ChrgComM_ARID_DEF.Switch8_nmza;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempErrLv.DCChrMgmt_ErrResDcPortTempErrLvl1
    = CtAp_ChrgComM_ARID_DEF.Delay_80_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus'
   *  DataTypeConversion: '<S92>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_ofxn.DCChrMgmt_MonResDcPortTempErrLvl1DTC
    = CtAp_ChrgComM_ARID_DEF.Delay_34_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_ofxn.DCChrMgmt_ErrStatDcPortTempErrLvl1DTC
    = CtAp_ChrgComM_ARID_DEF.Delay_35_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1DTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_ofxn.DCChrMgmt_ErrResDcPortTempErrLvl1DTC
    = DCChrMgmt_ErrResDcPortTempErrLvl1DTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl1DTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_gege.DCChrMgmt_MonResDcPortTempErrLvl2
    = CtAp_ChrgComM_ARID_DEF.Delay_82_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_gege.DCChrMgmt_ErrStatDcPortTempErrLvl2
    = CtAp_ChrgComM_ARID_DEF.Delay_83_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_gege.DCChrMgmt_ErrResDcPortTempErrLvl2
    = CtAp_ChrgComM_ARID_DEF.Delay_84_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus'
   *  DataTypeConversion: '<S94>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_fnpo.DCChrMgmt_MonResDcPortTempErrLvl2DTC
    = CtAp_ChrgComM_ARID_DEF.Delay_38_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_fnpo.DCChrMgmt_ErrStatDcPortTempErrLvl2DTC
    = CtAp_ChrgComM_ARID_DEF.Delay_39_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2DTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_fnpo.DCChrMgmt_ErrResDcPortTempErrLvl2DTC
    = DCChrMgmt_ErrResDcPortTempErrLvl2DTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempErrLvl2DTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempSnsrE.DCChrMgmt_MonResDcPortTempSnsrErr
    = CtAp_ChrgComM_ARID_DEF.Delay_86_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempSnsrE.DCChrMgmt_ErrStatDcPortTempSnsrErr
    = CtAp_ChrgComM_ARID_DEF.Delay_87_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempSnsrE.DCChrMgmt_ErrResDcPortTempSnsrErr
    = CtAp_ChrgComM_ARID_DEF.Delay_88_DSTATE;

  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus'
   *  DataTypeConversion: '<S96>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_oldb.DCChrMgmt_MonResDcPortTempSnsrErrDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_42_DSTATE;
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_oldb.DCChrMgmt_ErrStatDcPortTempSnsrErrDTC
    = CtAp_ChrgComM_ARID_DEF.Delay_43_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* Outputs for Atomic SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErrDTC' */
  CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_oldb.DCChrMgmt_ErrResDcPortTempSnsrErrDTC
    = DCChrMgmt_ErrResDcPortTempSnsrErrDTC;

  /* End of Outputs for SubSystem: '<S5>/DCChrMgmt_DcPortTempSnsrErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/DCChrMgmt_ErrolHandle' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts' */
  (void)Rte_Write_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts
    (rtb_DCChrMgmt_BSTTxReqSts);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum
    (tmpWrite);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum
    (tmpWrite_0);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum
    (tmpWrite_1);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum
    (tmpWrite_2);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum
    (tmpWrite_3);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum
    (tmpWrite_4);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum
    (tmpWrite_5);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum
    (tmpWrite_6);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum
    (tmpWrite_7);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum
    (tmpWrite_8);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum
    (tmpWrite_9);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum
    (tmpWrite_a);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum
    (tmpWrite_b);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum
    (tmpWrite_c);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum
    (tmpWrite_d);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum
    (tmpWrite_e);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum
    (tmpWrite_f);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum
    (tmpWrite_g);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum' */
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum
    (tmpWrite_h);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A' */
  (void)Rte_Write_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A
    (tmpWrite_i);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V' */
  (void)Rte_Write_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V
    (tmpWrite_j);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A' */
  (void)Rte_Write_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A
    (tmpWrite_k);

  /* Outport: '<Root>/RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V' */
  (void)Rte_Write_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V
    (tmpWrite_l);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPrepdTm);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPrepdTm);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROPr_cskl);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCROTmtDTC_);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_);
  (void)Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(
    &CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempErrLv);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_ofxn);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_gege);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_fnpo);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTempSnsrE);
  (void)
    Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus
    (&CtAp_ChrgComM_ARID_DEF.RTE_P_DCChrMgmt_DcPortTemp_oldb);
}

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgComM_START_SEC_VAR_CONST_8
#include "CtAp_ChrgComM_MemMap.h"

void R_ChrgComM_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  DCChrMgmt_ErrResBEMRxCRMTmtDTC = false;
  DCChrMgmt_ErrResDcPortTempSnsrErrDTC = false;
  DCChrMgmt_ErrResDcPortTempErrLvl2DTC = false;
  DCChrMgmt_ErrResDcPortTempErrLvl1DTC = false;
  DCChrMgmt_ErrResBEMRxCSTTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCSDTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCROTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCMLTmtDTC = false;
  DCChrMgmt_ErrResBEMRxCCSTmtDTC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgComM_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgComM_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/Tmt' */
  /* SystemInitialize for Atomic SubSystem: '<S67>/ATOM_OnDelay' */
  CtAp_ChrgComM_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgComM_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S67>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S4>/Tmt' */
  /* End of SystemInitialize for SubSystem: '<S2>/DCChrMgmt_Communication' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgComM_Cyclic_50ms_sys' */
}

#define CtAp_ChrgComM_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgComM_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
