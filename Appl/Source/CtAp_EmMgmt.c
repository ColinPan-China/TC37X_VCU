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
 *  Filename:           CtAp_EmMgmt.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_EmMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:03 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 09:47:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Fri Jun 27 09:46:22 2025
 *
 *
 *******************************************************************************/
#include "CtAp_EmMgmt.h"
#include "rtwtypes.h"
#include "CtAp_EmMgmt_private.h"
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "CtAp_EmMgmt_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define CtA_IN_ElectcLock_EmLockReqLock ((uint8_T)3U)
#define CtAp_EmMgmt_IN_ElectcLock_Init ((uint8_T)1U)
#define CtAp_EmMgmt_IN_EmlockLocking   ((uint8_T)2U)
#define CtAp_EmMgmt_IN_EmlockUnlocking ((uint8_T)3U)
#define CtAp_EmMgmt_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_Em_IN_ElectcLock_UnlockReq ((uint8_T)3U)
#define CtAp_IN_ElectcLock_EmLockLocked ((uint8_T)2U)
#define IN_ElectcLock_EmLockLockFailed ((uint8_T)1U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */

/*if not init use it */
#define CtAp_EmMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T OBCMgmt_ErrResElectcLockClsErr_Flg;/* '<S21>/NoDTAndEn' */
boolean_T OBCMgmt_ErrResElectcLockOpenErr_Flg;/* '<S23>/NoDTAndEn' */

#define CtAp_EmMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_EmMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"

ARID_DEF_CtAp_EmMgmt_T CtAp_EmMgmt_ARID_DEF;

#define CtAp_EmMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * System initialize for atomic system:
 *    '<S9>/ATOM_OnDelay1'
 *    '<S11>/ATOM_OnDelay'
 *    '<S11>/ATOM_OnDelay1'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void CtAp_EmMgmt_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Em_T *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S15>/Sum' incorporates:
   *  UnitDelay: '<S15>/UnitDelay'
   */
  CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/ATOM_OnDelay1'
 *    '<S11>/ATOM_OnDelay'
 *    '<S11>/ATOM_OnDelay1'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T CtAp_EmMgmt_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Em_T
  *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* Switch: '<S15>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S15>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S15>/Sum' incorporates:
     *  UnitDelay: '<S15>/UnitDelay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S15>/MinMax' */
    if (u0 <= CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S15>/Sum' */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S15>/MinMax' */
  } else {
    /* Sum: '<S15>/Sum' incorporates:
     *  UnitDelay: '<S15>/UnitDelay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S15>/Switch1' */

  /* RelationalOperator: '<S15>/B_MiHold' incorporates:
   *  UnitDelay: '<S15>/UnitDelay'
   */
  return CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* System initialize for atomic system: '<S12>/ATOM_OffDelay' */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void CtAp_EmMgmt_ATOM_OffDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OffDelay_CtAp_E_T *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S20>/Sum1' incorporates:
   *  UnitDelay: '<S20>/UnitDelay'
   */
  CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* Output and update for atomic system: '<S12>/ATOM_OffDelay' */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T CtAp_EmMgmt_ATOM_OffDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OffDelay_CtAp_E_T
  *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* Switch: '<S20>/Switch1' incorporates:
   *  Logic: '<S20>/NOT'
   */
  if (!rtu_x) {
    uint32_T tmp;

    /* Sum: '<S20>/Sum' incorporates:
     *  UnitDelay: '<S20>/UnitDelay'
     */
    tmp = (uint32_T)rtu_dt + (uint32_T)
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    /* Sum: '<S20>/Sum1' */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_tm_dly + (uint32_T)rtu_dt);

    /* MinMax: '<S20>/MinMax' incorporates:
     *  Sum: '<S20>/Sum'
     */
    if (CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE > (uint16_T)tmp) {
      /* Sum: '<S20>/Sum1' */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)tmp;
    }

    /* End of MinMax: '<S20>/MinMax' */
  } else {
    /* Sum: '<S20>/Sum1' incorporates:
     *  UnitDelay: '<S20>/UnitDelay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* RelationalOperator: '<S20>/RelationalOperator1' incorporates:
   *  UnitDelay: '<S20>/UnitDelay'
   */
  return CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE <= rtu_tm_dly;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S21>/NoDTAndEn'
 *    '<S23>/NoDTAndEn'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void CtAp_EmMgmt_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_EmMgm_T *CtAp_EmMgmt__ARID_DEF_arg)
{
  boolean_T rtb_Equal2;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Constant: '<S25>/True'
   */
  *rty_MonStat = true;

  /* Switch: '<S28>/Switch1' incorporates:
   *  Constant: '<S28>/Constant2'
   *  Constant: '<S28>/Constant4'
   *  Switch: '<S28>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S28>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S28>/Switch1' */

  /* RelationalOperator: '<S28>/Equal2' incorporates:
   *  Constant: '<S28>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S29>/Switch1' */
  if (rtb_Equal2) {
    uint16_T u0;

    /* Sum: '<S29>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S29>/Sum' incorporates:
     *  UnitDelay: '<S29>/UnitDelay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S29>/MinMax' */
    if (u0 <= CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S29>/Sum' */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S29>/MinMax' */
  } else {
    /* Sum: '<S29>/Sum' incorporates:
     *  Constant: '<S28>/Constant37'
     *  UnitDelay: '<S29>/UnitDelay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S29>/Switch1' */

  /* Switch: '<S28>/Switch8' incorporates:
   *  Constant: '<S28>/Constant6'
   *  Constant: '<S28>/DEBOUNCING'
   *  RelationalOperator: '<S28>/Equal6'
   *  RelationalOperator: '<S29>/B_MiHold'
   *  Switch: '<S28>/Switch2'
   *  Switch: '<S28>/Switch3'
   *  UnitDelay: '<S29>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S28>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S28>/Switch3' incorporates:
     *  Constant: '<S28>/DEBOUNCING_F'
     *  Switch: '<S28>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S28>/PASSED'
     *  Switch: '<S28>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S28>/Switch8' */

  /* Switch: '<S28>/Switch6' incorporates:
   *  Constant: '<S28>/Constant30'
   *  Constant: '<S28>/Constant31'
   *  Constant: '<S28>/Constant32'
   *  Delay: '<S28>/Delay1'
   *  RelationalOperator: '<S28>/Equal3'
   *  RelationalOperator: '<S28>/Equal4'
   *  Switch: '<S28>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S28>/Switch7' incorporates:
     *  Constant: '<S28>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_EmMgmt__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S28>/Switch6' */

  /* Update for Delay: '<S28>/Delay1' */
  CtAp_EmMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S21>/OBCMgmt_ElectcLockErrSetCdn_Flg'
 *    '<S22>/OBCMgmt_ElectcLockErrSetCdn_Flg'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T OBCMgmt_ElectcLockErrSetCdn_Flg(uint8_T rtu_OBCMgmt_EmLckErrInpSigBus,
  uint8_T rtu_OBCMgmt_EmLckErrInpSig_fqcn)
{
  /* Logic: '<S27>/LogicalOperator' incorporates:
   *  Constant: '<S27>/Define'
   *  Constant: '<S27>/Define1'
   *  RelationalOperator: '<S27>/RelationalOperator'
   *  RelationalOperator: '<S27>/RelationalOperator1'
   */
  return (rtu_OBCMgmt_EmLckErrInpSigBus == ((uint8_T)EmMgmt_LockReq)) &&
    (rtu_OBCMgmt_EmLckErrInpSig_fqcn != ((uint8_T)EmMgmt_Locked));
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* Output and update for atomic system: '<S22>/NoDT' */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void CtAp_EmMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T rtu_SetCondition,
                      boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
                      uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
                      *rty_MonRes, uint8_T *rty_ErrStat,
                      ARID_DEF_NoDT_CtAp_EmMgmt_T *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S30>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S30>/ErrorHandleSysU16' incorporates:
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
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S35>/MinMax' */
      if (u0 <= CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S35>/Sum' */
        CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S35>/MinMax' */
    } else {
      /* Sum: '<S35>/Sum' incorporates:
       *  Constant: '<S34>/Constant37'
       *  UnitDelay: '<S35>/UnitDelay'
       */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
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
    } else if (CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
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
     *  RelationalOperator: '<S34>/Equal3'
     *  RelationalOperator: '<S34>/Equal4'
     *  Switch: '<S34>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S34>/Switch6' incorporates:
       *  Constant: '<S34>/Constant32'
       */
      OBCMgmt_ErrResElectcLockClsErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S34>/Switch7' incorporates:
       *  Constant: '<S34>/Constant11'
       *  Switch: '<S34>/Switch6'
       */
      OBCMgmt_ErrResElectcLockClsErrDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S34>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S30>/ErrorHandleSysU16' */
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S31>/ATOM_TimeCnt'
 *    '<S43>/ATOM_TimeCnt'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T CtAp_EmMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Em_T
  *CtAp_EmMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S36>/Add1' incorporates:
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   *  DataTypeConversion: '<S36>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S36>/Switch' */
  if (rtu_In) {
    /* Sum: '<S36>/Add' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     *  UnitDelay: '<S36>/Delay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S36>/Min' */
    if (rtb_Add1 <= CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S36>/Add' */
      CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S36>/Min' */
  } else {
    /* Sum: '<S36>/Add' incorporates:
     *  Constant: '<S36>/Constant'
     *  UnitDelay: '<S36>/Delay'
     */
    CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S36>/Switch' */

  /* RelationalOperator: '<S36>/Relational Operator' incorporates:
   *  UnitDelay: '<S36>/Delay'
   */
  return CtAp_EmMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/OBCMgmt_ElectcLockErrResetCdn_Flg'
 *    '<S24>/OBCMgmt_ElectcLockErrResetCdn_Flg'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T OBCMgmt_ElectcLockErrResetCdn_F(uint8_T rtu_OBCMgmt_EmLckErrInpSigBus)
{
  /* RelationalOperator: '<S32>/Equal' incorporates:
   *  Constant: '<S32>/Define'
   */
  return rtu_OBCMgmt_EmLckErrInpSigBus == ((uint8_T)EmMgmt_OffPlug);
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S23>/OBCMgmt_ElectcLockErrSetCdn_Flg'
 *    '<S24>/OBCMgmt_ElectcLockErrSetCdn_Flg'
 */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

boolean_T OBCMgmt_ElectcLockErrSetCd_jojc(uint8_T rtu_OBCMgmt_EmLckErrInpSigBus,
  uint8_T rtu_OBCMgmt_EmLckErrInpSig_eyxu)
{
  /* Logic: '<S39>/LogicalOperator' incorporates:
   *  Constant: '<S39>/Define'
   *  Constant: '<S39>/Define1'
   *  RelationalOperator: '<S39>/RelationalOperator'
   *  RelationalOperator: '<S39>/RelationalOperator1'
   */
  return (rtu_OBCMgmt_EmLckErrInpSigBus == ((uint8_T)EmMgmt_UnLockReq)) &&
    (rtu_OBCMgmt_EmLckErrInpSig_eyxu != ((uint8_T)EmMgmt_Unlocked));
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* Output and update for atomic system: '<S24>/NoDT' */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void CtAp_EmMgmt_NoDT_hokd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoDT_CtAp_EmMgm_kiod_T *CtAp_EmMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S42>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S42>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/Constant2'
     *  Constant: '<S46>/Constant4'
     *  Switch: '<S46>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S46>/Switch' incorporates:
       *  Constant: '<S46>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S46>/Switch1' */

    /* RelationalOperator: '<S46>/Equal2' incorporates:
     *  Constant: '<S46>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S47>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S47>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S47>/Sum' incorporates:
       *  UnitDelay: '<S47>/UnitDelay'
       */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S47>/MinMax' */
      if (u0 <= CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S47>/Sum' */
        CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S47>/MinMax' */
    } else {
      /* Sum: '<S47>/Sum' incorporates:
       *  Constant: '<S46>/Constant37'
       *  UnitDelay: '<S47>/UnitDelay'
       */
      CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Switch: '<S46>/Switch8' incorporates:
     *  Constant: '<S46>/Constant6'
     *  Constant: '<S46>/DEBOUNCING'
     *  RelationalOperator: '<S46>/Equal6'
     *  RelationalOperator: '<S47>/B_MiHold'
     *  Switch: '<S46>/Switch2'
     *  Switch: '<S46>/Switch3'
     *  UnitDelay: '<S47>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_EmMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S46>/Switch2' incorporates:
       *  Constant: '<S46>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S46>/Switch3' incorporates:
       *  Constant: '<S46>/DEBOUNCING_F'
       *  Switch: '<S46>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      /* Switch: '<S46>/Switch2' incorporates:
       *  Constant: '<S46>/PASSED'
       *  Switch: '<S46>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S46>/Switch8' */

    /* Switch: '<S46>/Switch6' incorporates:
     *  Constant: '<S46>/Constant30'
     *  Constant: '<S46>/Constant31'
     *  RelationalOperator: '<S46>/Equal3'
     *  RelationalOperator: '<S46>/Equal4'
     *  Switch: '<S46>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S46>/Switch6' incorporates:
       *  Constant: '<S46>/Constant32'
       */
      OBCMgmt_ErrResElectcLockOpenErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S46>/Switch7' incorporates:
       *  Constant: '<S46>/Constant11'
       *  Switch: '<S46>/Switch6'
       */
      OBCMgmt_ErrResElectcLockOpenErrDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S46>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S42>/ErrorHandleSysU16' */
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

void R_EmMgmt_Cyclic_50ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_TmpSignalConversionAtR_icdi;
  uint8_T rtb_TmpSignalConversionAtR_paaf;
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch8;
  uint8_T rtb_Switch1_gvr5;
  uint8_T rtb_Switch8_e3hd;
  boolean_T rtb_LogicalOperator_mg3a;
  boolean_T rtb_DataTypeConversion_idob;
  boolean_T rtb_LogicalOperator_eatd;
  boolean_T rtb_Equal;
  boolean_T rtb_Switch6;
  boolean_T rtb_LogicalOperator_jarc;
  boolean_T rtb_Equal_k2eh;
  boolean_T rtb_Switch6_pa3y;
  boolean_T rtb_LogicalOperator3_hm3j;
  boolean_T rtb_RelationalOperator1_osdh;
  boolean_T rtb_Compare;
  boolean_T rtb_RelationalOperator8_hwel;
  boolean_T rtb_LogicalOperator_ofvl;
  boolean_T rtb_DataTypeConversion_hazj;
  boolean_T rtb_LogicalOperator_p1uc;
  boolean_T rtb_Delay;
  boolean_T rtb_DataTypeConversion_lsdo;
  boolean_T rtb_LogicalOperator_ip4t;
  boolean_T rtb_DataTypeConversion_h0a2;
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_TmpSignalConversionAtR_b20t;
  uint8_T rtb_TmpSignalConversionAtR_dhru;
  uint8_T rtb_TmpSignalConversionAtR_jj5v;
  uint8_T rtb_TmpSignalConversionAtR_n0al;
  uint8_T rtb_TmpSignalConversionAtR_obrc;
  uint8_T rtb_TmpSignalConversionAtR_oz23;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator_nw5u;
  boolean_T rtb_LogicalOperator_p4tw;
  boolean_T rtb_TmpSignalConversionAtR_hh1o;
  boolean_T rtb_TmpSignalConversionAtR_o053;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_icdi);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum
    (&rtb_TmpSignalConversionAtR_jj5v);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
    (&rtb_TmpSignalConversionAtR_paaf);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum
    (&rtb_TmpSignalConversionAtR_dhru);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum
    (&rtb_TmpSignalConversionAtR_obrc);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_oz23);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
    (&rtb_TmpSignalConversionAtR_n0al);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_hh1o);

  /* SignalConversion generated from: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_b20t);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_o053);

  /* Outputs for Atomic SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S8>/Define'
   *  Constant: '<S8>/Define1'
   *  Constant: '<S8>/Define2'
   *  Constant: '<S8>/Define3'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  RelationalOperator: '<S8>/RelationalOperator2'
   *  RelationalOperator: '<S8>/RelationalOperator3'
   *  RelationalOperator: '<S8>/RelationalOperator4'
   */
  rtb_LogicalOperator1 = ((rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_1500Ohm)) || (rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_680Ohm)) || (rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_220Ohm)) || (rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_100Ohm)));

  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_ACChrgnReqEmlock':
   *  1. SWREQ_03578 charge  req Lock
   *  2. SWREQ_03584 charge  req Unlock
   */
  /* RelationalOperator: '<S9>/RelationalOperator8' incorporates:
   *  Constant: '<S9>/Define8'
   */
  rtb_RelationalOperator8_hwel = (rtb_TmpSignalConversionAtR_n0al == ((uint8_T)
    EmMgmt_CP9VPWM));

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_OnDelay1' */
  /* Constant: '<S9>/CAL1' incorporates:
   *  Constant: '<S9>/Define11'
   *  Constant: '<S9>/Define12'
   */
  rtb_LogicalOperator_ip4t = CtAp_EmMgmt_ATOM_OnDelay
    (rtb_RelationalOperator8_hwel, OBCMgmt_CPInvldCfmTim_CFG, ((uint16_T)
      EmMgmt_dt50ms), ((uint16_T)EmMgmt_U16Zero),
     &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1_cxar);

  /* End of Outputs for SubSystem: '<S9>/ATOM_OnDelay1' */
  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock' */

  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Constant: '<S8>/Define4'
   *  Constant: '<S8>/Define5'
   *  RelationalOperator: '<S8>/RelationalOperator5'
   *  RelationalOperator: '<S8>/RelationalOperator6'
   */
  rtb_LogicalOperator2 = ((rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_2000Ohm)) || (rtb_TmpSignalConversionAtR_obrc == ((uint8_T)
    EmMgmt_2700Ohm)));

  /* Logic: '<S8>/LogicalOperator3' */
  rtb_LogicalOperator3 = (rtb_LogicalOperator1 || rtb_LogicalOperator2);

  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_AcChrgnSts'
   *
   * Block requirements for '<S4>/OBCMgmt_AcChrgnSts':
   *  1. SWREQ_03582 charge status for no Charge complete
   *  2. SWREQ_03583 charge status for no Charge complete
   *  3. SWREQ_03580 charge status for no charging
   *  4. SWREQ_03581 charge status for no charging
   */
  /* Logic: '<S10>/LogicalOperator' incorporates:
   *  Constant: '<S10>/Define'
   *  Constant: '<S10>/Define1'
   *  Constant: '<S10>/Define2'
   *  Constant: '<S10>/Define3'
   *  Constant: '<S10>/Define4'
   *  Constant: '<S10>/Define5'
   *  RelationalOperator: '<S10>/RelationalOperator'
   *  RelationalOperator: '<S10>/RelationalOperator1'
   *  RelationalOperator: '<S10>/RelationalOperator2'
   *  RelationalOperator: '<S10>/RelationalOperator3'
   *  RelationalOperator: '<S10>/RelationalOperator5'
   *  RelationalOperator: '<S10>/RelationalOperator6'
   *
   * Block requirements for '<S10>/LogicalOperator':
   *  1. SWREQ_03583 charge status for no Charge complete
   */
  rtb_LogicalOperator_p4tw = ((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_ChargingComplete)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_ChargingFault)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_V2LComplete)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_V2LFault)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_ACPlugDetected)) || (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
    EmMgmt_V2LPlugDetected)));

  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_AcChrgnSts' */

  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_BCMReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_BCMReqEmlock':
   *  1. SWREQ_03576 BCM Req Lock
   *  2. SWREQ_03586 BCM Req Unlock
   */
  /* RelationalOperator: '<S11>/RelationalOperator1' incorporates:
   *  Constant: '<S11>/Define1'
   */
  rtb_RelationalOperator1_osdh = (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)
    EmMgmt_ARMED));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_OnDelay' */
  /* Constant: '<S11>/CAL' incorporates:
   *  Constant: '<S11>/Define2'
   *  Constant: '<S11>/Define3'
   */
  rtb_DataTypeConversion_hazj = CtAp_EmMgmt_ATOM_OnDelay
    (rtb_RelationalOperator1_osdh, OBCMgmt_BCMAntithftStsCfmTim_CFG, ((uint16_T)
      EmMgmt_dt50ms), ((uint16_T)EmMgmt_U16Zero),
     &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S11>/ATOM_OnDelay' */

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  rtb_Compare = (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)EmMgmt_DISARMED));

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Delay: '<S11>/Delay'
   */
  rtb_DataTypeConversion_h0a2 = CtAp_EmMgmt_ARID_DEF.Delay_DSTATE_ksjy;

  /* Logic: '<S11>/LogicalOperator' */
  rtb_LogicalOperator_nw5u = (rtb_DataTypeConversion_h0a2 && rtb_Compare);

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Delay: '<S11>/Delay2'
   */
  rtb_DataTypeConversion_h0a2 = CtAp_EmMgmt_ARID_DEF.Delay2_DSTATE;

  /* Logic: '<S27>/LogicalOperator' incorporates:
   *  Delay: '<S11>/Delay1'
   */
  rtb_LogicalOperator_p1uc = CtAp_EmMgmt_ARID_DEF.Delay1_DSTATE;

  /* Logic: '<S11>/LogicalOperator2' incorporates:
   *  Delay: '<S11>/Delay2'
   *  Logic: '<S11>/LogicalOperator5'
   *  Logic: '<S11>/LogicalOperator6'
   */
  CtAp_EmMgmt_ARID_DEF.Delay2_DSTATE = (rtb_LogicalOperator_nw5u || (rtb_Compare
    && !rtb_LogicalOperator_p1uc && rtb_DataTypeConversion_h0a2));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_OnDelay1' */
  /* Constant: '<S11>/CAL1' incorporates:
   *  Constant: '<S11>/Define11'
   *  Constant: '<S11>/Define12'
   */
  rtb_DataTypeConversion_h0a2 = CtAp_EmMgmt_ATOM_OnDelay(rtb_Compare,
    OBCMgmt_BCMAntithftStsCfmTim_CFG, ((uint16_T)EmMgmt_dt50ms), ((uint16_T)
    EmMgmt_U16Zero), &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of Outputs for SubSystem: '<S11>/ATOM_OnDelay1' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Define5'
   *  Delay: '<S11>/Delay1'
   *  Delay: '<S11>/Delay2'
   */
  if (rtb_DataTypeConversion_h0a2) {
    CtAp_EmMgmt_ARID_DEF.Delay1_DSTATE = CtAp_EmMgmt_ARID_DEF.Delay2_DSTATE;
  } else {
    CtAp_EmMgmt_ARID_DEF.Delay1_DSTATE = EmMgmt_Inactive;
  }

  /* End of Switch: '<S11>/Switch' */

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  Delay: '<S11>/Delay'
   */
  CtAp_EmMgmt_ARID_DEF.Delay_DSTATE_ksjy = (rtb_TmpSignalConversionAtR_jj5v ==
    ((uint8_T)EmMgmt_ARMED));

  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_BCMReqEmlock' */

  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_HMIReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_HMIReqEmlock':
   *  1. SWREQ_03577 IVI Req Lock
   *  2. SWREQ_03585 IVI Req Unlock
   */
  /* Logic: '<S12>/LogicalOperator3' incorporates:
   *  Constant: '<S12>/Define1'
   *  Constant: '<S12>/Define4'
   *  Constant: '<S12>/Define7'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   *  RelationalOperator: '<S12>/RelationalOperator2'
   *  RelationalOperator: '<S12>/RelationalOperator5'
   */
  rtb_LogicalOperator3_hm3j = ((rtb_TmpSignalConversionAtR_dhru == ((uint8_T)
    EmMgmt_IVILock)) && (rtb_TmpSignalConversionAtR_n0al != ((uint8_T)
    EmMgmt_CPUnconnect)) && (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)
    EmMgmt_Unlocked)) && rtb_LogicalOperator3 && rtb_LogicalOperator_p4tw);

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_OffDelay' */
  /* Constant: '<S12>/Define5' incorporates:
   *  Constant: '<S12>/Define11'
   *  Constant: '<S12>/Define9'
   */
  rtb_DataTypeConversion_h0a2 = CtAp_EmMgmt_ATOM_OffDelay
    (rtb_LogicalOperator3_hm3j, ((uint16_T)EmMgmt_dt50ms), ((uint16_T)
      EmMgmt_dt50ms), ((uint16_T)EmMgmt_U16Zero),
     &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OffDelay);

  /* End of Outputs for SubSystem: '<S12>/ATOM_OffDelay' */
  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_HMIReqEmlock' */

  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_ReqEmlock' */
  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_BCMReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_BCMReqEmlock':
   *  1. SWREQ_03576 BCM Req Lock
   *  2. SWREQ_03586 BCM Req Unlock
   */
  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_V2LReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_V2LReqEmlock':
   *  1. SWREQ_05915 discharge req Lock
   *  2. SWREQ_06494 V2L Req Unlock
   */
  /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_ACChrgnReqEmlock':
   *  1. SWREQ_03578 charge  req Lock
   *  2. SWREQ_03584 charge  req Unlock
   */
  /* Logic: '<S13>/LogicalOperator' incorporates:
   *  Constant: '<S11>/Define9'
   *  Constant: '<S14>/Define1'
   *  Constant: '<S14>/Define6'
   *  Constant: '<S9>/Define1'
   *  Constant: '<S9>/Define6'
   *  Logic: '<S11>/LogicalOperator1'
   *  Logic: '<S14>/LogicalOperator3'
   *  Logic: '<S9>/LogicalOperator3'
   *  RelationalOperator: '<S11>/RelationalOperator8'
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  RelationalOperator: '<S14>/RelationalOperator4'
   *  RelationalOperator: '<S9>/RelationalOperator1'
   *  RelationalOperator: '<S9>/RelationalOperator4'
   */
  rtb_LogicalOperator1 = ((rtb_LogicalOperator3 && rtb_DataTypeConversion_hazj &&
    (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)EmMgmt_Unlocked)) &&
    rtb_LogicalOperator_p4tw) || rtb_DataTypeConversion_h0a2 ||
    ((rtb_TmpSignalConversionAtR_b20t == ((uint8_T)EmMgmt_DischargePreparing)) &&
     rtb_LogicalOperator2 && (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)
    EmMgmt_Unlocked))) || ((rtb_TmpSignalConversionAtR_b20t == ((uint8_T)
    EmMgmt_ChargePreparing)) && rtb_LogicalOperator1 &&
    (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)EmMgmt_Unlocked)) &&
    rtb_LogicalOperator_ip4t));

  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock' */
  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_V2LReqEmlock' */
  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_BCMReqEmlock' */
  /* End of Outputs for SubSystem: '<S4>/OBCMgmt_ReqEmlock' */

  /* Chart: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' incorporates:
   *  Constant: '<S11>/Define4'
   *  Constant: '<S11>/Define6'
   *  Constant: '<S11>/Define7'
   *  Constant: '<S11>/Define8'
   *  Constant: '<S12>/Define10'
   *  Constant: '<S12>/Define2'
   *  Constant: '<S12>/Define3'
   *  Constant: '<S12>/Define6'
   *  Constant: '<S12>/Define8'
   *  Constant: '<S14>/Define2'
   *  Constant: '<S14>/Define3'
   *  Constant: '<S14>/Define4'
   *  Constant: '<S14>/Define5'
   *  Constant: '<S9>/Define2'
   *  Constant: '<S9>/Define3'
   *  Constant: '<S9>/Define4'
   *  Constant: '<S9>/Define5'
   *  Constant: '<S9>/Define7'
   *  Delay: '<S11>/Delay1'
   *  Delay generated from: '<S2>/Delay1'
   *  Delay generated from: '<S2>/Delay2'
   *  Logic: '<S11>/LogicalOperator3'
   *  Logic: '<S11>/LogicalOperator4'
   *  Logic: '<S12>/LogicalOperator1'
   *  Logic: '<S12>/LogicalOperator4'
   *  Logic: '<S13>/LogicalOperator1'
   *  Logic: '<S14>/LogicalOperator'
   *  Logic: '<S14>/LogicalOperator1'
   *  Logic: '<S9>/LogicalOperator'
   *  Logic: '<S9>/LogicalOperator1'
   *  RelationalOperator: '<S11>/RelationalOperator4'
   *  RelationalOperator: '<S11>/RelationalOperator5'
   *  RelationalOperator: '<S11>/RelationalOperator6'
   *  RelationalOperator: '<S11>/RelationalOperator7'
   *  RelationalOperator: '<S12>/RelationalOperator3'
   *  RelationalOperator: '<S12>/RelationalOperator4'
   *  RelationalOperator: '<S12>/RelationalOperator6'
   *  RelationalOperator: '<S12>/RelationalOperator7'
   *  RelationalOperator: '<S12>/RelationalOperator8'
   *  RelationalOperator: '<S14>/RelationalOperator2'
   *  RelationalOperator: '<S14>/RelationalOperator3'
   *  RelationalOperator: '<S14>/RelationalOperator5'
   *  RelationalOperator: '<S14>/RelationalOperator6'
   *  RelationalOperator: '<S9>/RelationalOperator2'
   *  RelationalOperator: '<S9>/RelationalOperator3'
   *  RelationalOperator: '<S9>/RelationalOperator5'
   *  RelationalOperator: '<S9>/RelationalOperator6'
   *  RelationalOperator: '<S9>/RelationalOperator7'
   */
  if ((uint32_T)CtAp_EmMgmt_ARID_DEF.is_active_c1_CtAp_EmMgmt == 0U) {
    CtAp_EmMgmt_ARID_DEF.is_active_c1_CtAp_EmMgmt = 1U;
    CtAp_EmMgmt_ARID_DEF.is_c1_CtAp_EmMgmt = CtAp_EmMgmt_IN_ElectcLock_Init;
    CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
      EmMgmt_UnLockReq);
    rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_Init);
  } else {
    switch (CtAp_EmMgmt_ARID_DEF.is_c1_CtAp_EmMgmt) {
     case CtAp_EmMgmt_IN_ElectcLock_Init:
      CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
        EmMgmt_UnLockReq);
      rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_Init);
      if (rtb_LogicalOperator1) {
        CtAp_EmMgmt_ARID_DEF.is_c1_CtAp_EmMgmt = CtAp_EmMgmt_IN_EmlockLocking;
        CtAp_EmMgmt_ARID_DEF.is_EmlockLocking = CtA_IN_ElectcLock_EmLockReqLock;
        CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
          EmMgmt_LockReq);
        rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockReqLock);
      }
      break;

     case CtAp_EmMgmt_IN_EmlockLocking:
      /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_ReqEmlock' */
      /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_BCMReqEmlock'
       *
       * Block requirements for '<S4>/OBCMgmt_BCMReqEmlock':
       *  1. SWREQ_03576 BCM Req Lock
       *  2. SWREQ_03586 BCM Req Unlock
       */
      /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_HMIReqEmlock'
       *
       * Block requirements for '<S4>/OBCMgmt_HMIReqEmlock':
       *  1. SWREQ_03577 IVI Req Lock
       *  2. SWREQ_03585 IVI Req Unlock
       */
      /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_V2LReqEmlock'
       *
       * Block requirements for '<S4>/OBCMgmt_V2LReqEmlock':
       *  1. SWREQ_05915 discharge req Lock
       *  2. SWREQ_06494 V2L Req Unlock
       */
      /* Outputs for Atomic SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock'
       *
       * Block requirements for '<S4>/OBCMgmt_ACChrgnReqEmlock':
       *  1. SWREQ_03578 charge  req Lock
       *  2. SWREQ_03584 charge  req Unlock
       */
      if ((rtb_LogicalOperator_p4tw && CtAp_EmMgmt_ARID_DEF.Delay1_DSTATE &&
           rtb_LogicalOperator3 && ((rtb_TmpSignalConversionAtR_n0al ==
             ((uint8_T)EmMgmt_CPUnconnect)) || (rtb_TmpSignalConversionAtR_n0al ==
             ((uint8_T)EmMgmt_CP9V)) || (rtb_TmpSignalConversionAtR_n0al ==
             ((uint8_T)EmMgmt_CPFault)) || (rtb_TmpSignalConversionAtR_n0al ==
             ((uint8_T)EmMgmt_CP6V)))) || (rtb_LogicalOperator_p4tw &&
           (rtb_TmpSignalConversionAtR_dhru == ((uint8_T)EmMgmt_IVIUnLock)) &&
           ((rtb_TmpSignalConversionAtR_n0al == ((uint8_T)EmMgmt_CPUnconnect)) ||
            (rtb_TmpSignalConversionAtR_n0al == ((uint8_T)EmMgmt_CP9V)) ||
            (rtb_TmpSignalConversionAtR_n0al == ((uint8_T)EmMgmt_CPFault)) ||
            (rtb_TmpSignalConversionAtR_n0al == ((uint8_T)EmMgmt_CP6V)))) ||
          (((rtb_TmpSignalConversionAtR_icdi == ((uint8_T)EmMgmt_V2LComplete)) ||
            (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)EmMgmt_V2LFault))) &&
           (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)EmMgmt_DISARMED)) &&
           (rtb_TmpSignalConversionAtR_oz23 == ((uint8_T)EmMgmt_Standby))) ||
          (((rtb_TmpSignalConversionAtR_obrc == ((uint8_T)EmMgmt_HalfConnecct)) ||
            (rtb_TmpSignalConversionAtR_icdi == ((uint8_T)
              EmMgmt_ChargingComplete)) || (rtb_TmpSignalConversionAtR_icdi ==
             ((uint8_T)EmMgmt_ChargingFault))) &&
           (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)EmMgmt_DISARMED)) &&
           (rtb_TmpSignalConversionAtR_oz23 == ((uint8_T)EmMgmt_Standby)))) {
        CtAp_EmMgmt_ARID_DEF.is_EmlockLocking = CtAp_EmMgmt_IN_NO_ACTIVE_CHILD;
        CtAp_EmMgmt_ARID_DEF.is_c1_CtAp_EmMgmt = CtAp_EmMgmt_IN_EmlockUnlocking;
        CtAp_EmMgmt_ARID_DEF.is_EmlockUnlocking =
          CtAp_Em_IN_ElectcLock_UnlockReq;
        CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
          EmMgmt_UnLockReq);
        rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockReqUnLock);
      } else {
        switch (CtAp_EmMgmt_ARID_DEF.is_EmlockLocking) {
         case IN_ElectcLock_EmLockLockFailed:
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLockFailed);
          break;

         case CtAp_IN_ElectcLock_EmLockLocked:
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLocked);
          break;

         default:
          /* case IN_ElectcLock_EmLockReqLock: */
          CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
            EmMgmt_LockReq);
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockReqLock);
          if (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)EmMgmt_Locked)) {
            CtAp_EmMgmt_ARID_DEF.is_EmlockLocking =
              CtAp_IN_ElectcLock_EmLockLocked;
            rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLocked);
          } else if (CtAp_EmMgmt_ARID_DEF.Delay2_4_DSTATE) {
            CtAp_EmMgmt_ARID_DEF.is_EmlockLocking =
              IN_ElectcLock_EmLockLockFailed;
            rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLockFailed);
          } else {
            /* no actions */
          }
          break;
        }
      }

      /* End of Outputs for SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock' */
      /* End of Outputs for SubSystem: '<S4>/OBCMgmt_V2LReqEmlock' */
      /* End of Outputs for SubSystem: '<S4>/OBCMgmt_HMIReqEmlock' */
      /* End of Outputs for SubSystem: '<S4>/OBCMgmt_BCMReqEmlock' */
      /* End of Outputs for SubSystem: '<S4>/OBCMgmt_ReqEmlock' */
      break;

     default:
      /* case IN_EmlockUnlocking: */
      if (rtb_LogicalOperator1) {
        CtAp_EmMgmt_ARID_DEF.is_EmlockUnlocking = CtAp_EmMgmt_IN_NO_ACTIVE_CHILD;
        CtAp_EmMgmt_ARID_DEF.is_c1_CtAp_EmMgmt = CtAp_EmMgmt_IN_ElectcLock_Init;
        CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
          EmMgmt_UnLockReq);
        rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_Init);
      } else {
        switch (CtAp_EmMgmt_ARID_DEF.is_EmlockUnlocking) {
         case IN_ElectcLock_EmLockLockFailed:
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)
            EmMgmt_EmLockLocUnLockFailed);
          break;

         case CtAp_IN_ElectcLock_EmLockLocked:
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLocUnLocked);
          break;

         default:
          /* case IN_ElectcLock_UnlockReq: */
          CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum = ((uint8_T)
            EmMgmt_UnLockReq);
          rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockReqUnLock);
          if (rtb_TmpSignalConversionAtR_paaf == ((uint8_T)EmMgmt_Unlocked)) {
            CtAp_EmMgmt_ARID_DEF.is_EmlockUnlocking =
              CtAp_IN_ElectcLock_EmLockLocked;
            rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)EmMgmt_EmLockLocUnLocked);
          } else if (CtAp_EmMgmt_ARID_DEF.Delay1_4_DSTATE) {
            CtAp_EmMgmt_ARID_DEF.is_EmlockUnlocking =
              IN_ElectcLock_EmLockLockFailed;
            rtb_TmpSignalConversionAtR_jj5v = ((uint8_T)
              EmMgmt_EmLockLocUnLockFailed);
          } else {
            /* no actions */
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */

  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErr' */
  /* Outputs for Atomic SubSystem: '<S21>/OBCMgmt_ElectcLockErrSetCdn_Flg'
   *
   * Block requirements for '<S21>/OBCMgmt_ElectcLockErrSetCdn_Flg':
   *  1. SWREQ_03648 em lock cls error
   */
  rtb_LogicalOperator_p1uc = OBCMgmt_ElectcLockErrSetCdn_Flg
    (CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum,
     rtb_TmpSignalConversionAtR_paaf);

  /* End of Outputs for SubSystem: '<S21>/OBCMgmt_ElectcLockErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S21>/OBCMgmt_ElectcLockErrResetCdn_Flg'
   *
   * Block requirements for '<S21>/OBCMgmt_ElectcLockErrResetCdn_Flg':
   *  1. SWREQ_03650 em lock cls error
   */
  /* RelationalOperator: '<S26>/Equal' incorporates:
   *  Constant: '<S26>/Define'
   */
  rtb_Equal_k2eh = (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)
    EmMgmt_EmLockReqUnLock));

  /* End of Outputs for SubSystem: '<S21>/OBCMgmt_ElectcLockErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S21>/NoDTAndEn' */
  /* Constant: '<S21>/CAL' incorporates:
   *  Constant: '<S21>/Define1'
   *
   * Block requirements for '<S21>/CAL':
   *  1. SWREQ_03657 em lock cls error
   */
  CtAp_EmMgmt_NoDTAndEn(rtb_LogicalOperator_p1uc, rtb_Equal_k2eh,
                        OBCMgmt_ElectcLockLockTmt_CFG, ((uint16_T)EmMgmt_dt50ms),
                        &rtb_DataTypeConversion_h0a2, &rtb_Switch1_gvr5,
                        &rtb_Switch8_e3hd, &rtb_Switch6_pa3y,
                        &CtAp_EmMgmt_ARID_DEF.ARID_DEF_NoDTAndEn_kkiq);

  /* End of Outputs for SubSystem: '<S21>/NoDTAndEn' */

  /* SignalConversion generated from: '<S21>/NoDTAndEn' */
  OBCMgmt_ErrResElectcLockClsErr_Flg = rtb_Switch6_pa3y;

  /* DataTypeConversion: '<S21>/DataTypeConversion3' incorporates:
   *  Delay generated from: '<S2>/Delay2'
   */
  CtAp_EmMgmt_ARID_DEF.Delay2_4_DSTATE = OBCMgmt_ErrResElectcLockClsErr_Flg;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErr' */

  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErrDTC' */
  /* Outputs for Atomic SubSystem: '<S22>/OBCMgmt_ElectcLockErrEnaCdn_Flg'
   *
   * Block requirements for '<S22>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
   *  1. SWREQ_03618 em lock cls DTC
   */
  /* Outputs for Atomic SubSystem: '<S31>/ATOM_TimeCnt' */
  /* UnitDelay: '<S31>/Unit Delay' incorporates:
   *  Constant: '<S31>/CAL'
   *  Constant: '<S31>/Define1'
   */
  rtb_DataTypeConversion_lsdo = CtAp_EmMgmt_ATOM_TimeCnt
    (CtAp_EmMgmt_ARID_DEF.UnitDelay_DSTATE, ((uint16_T)EmMgmt_dt50ms),
     OBCMgmt_ElectcLockDTCEnaTim_CFG,
     &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S31>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  /* Outputs for Atomic SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg'
   *
   * Block requirements for '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
   *  1. SWREQ_03635 em lock Open DTC
   */
  /* Logic: '<S31>/LogicalOperator1' incorporates:
   *  Logic: '<S43>/LogicalOperator1'
   */
  rtb_LogicalOperator3 =
    !rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResEPTCANBusOffInfo;

  /* End of Outputs for SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg' */
  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */

  /* Logic: '<S33>/LogicalOperator' incorporates:
   *  Logic: '<S31>/LogicalOperator1'
   */
  rtb_LogicalOperator_ip4t = rtb_LogicalOperator3;

  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  /* Outputs for Atomic SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg'
   *
   * Block requirements for '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
   *  1. SWREQ_03635 em lock Open DTC
   */
  /* Logic: '<S31>/LogicalOperator2' incorporates:
   *  Logic: '<S43>/LogicalOperator2'
   */
  rtb_TmpSignalConversionAtR_o053 = !rtb_TmpSignalConversionAtR_o053;

  /* End of Outputs for SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg' */
  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */

  /* Logic: '<S31>/LogicalOperator' incorporates:
   *  Logic: '<S31>/LogicalOperator2'
   */
  rtb_LogicalOperator_jarc = (rtb_LogicalOperator_ip4t &&
    rtb_TmpSignalConversionAtR_hh1o && rtb_TmpSignalConversionAtR_o053 &&
    rtb_DataTypeConversion_lsdo);

  /* Update for UnitDelay: '<S31>/Unit Delay' incorporates:
   *  Constant: '<S31>/Define'
   */
  CtAp_EmMgmt_ARID_DEF.UnitDelay_DSTATE = EmMgmt_Active;

  /* End of Outputs for SubSystem: '<S22>/OBCMgmt_ElectcLockErrEnaCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S22>/OBCMgmt_ElectcLockErrSetCdn_Flg'
   *
   * Block requirements for '<S22>/OBCMgmt_ElectcLockErrSetCdn_Flg':
   *  1. SWREQ_03614 em lock cls DTC
   */
  rtb_LogicalOperator_ip4t = OBCMgmt_ElectcLockErrSetCdn_Flg
    (CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum,
     rtb_TmpSignalConversionAtR_paaf);

  /* End of Outputs for SubSystem: '<S22>/OBCMgmt_ElectcLockErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S22>/OBCMgmt_ElectcLockErrResetCdn_Flg'
   *
   * Block requirements for '<S22>/OBCMgmt_ElectcLockErrResetCdn_Flg':
   *  1. SWREQ_03616 em lock cls DTC
   */
  rtb_DataTypeConversion_lsdo = OBCMgmt_ElectcLockErrResetCdn_F
    (rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S22>/OBCMgmt_ElectcLockErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S22>/NoDT' */
  /* Constant: '<S22>/CAL' incorporates:
   *  Constant: '<S22>/Define1'
   *
   * Block requirements for '<S22>/CAL':
   *  1. SWREQ_03623 em lock cls DTC
   */
  CtAp_EmMgmt_NoDT(rtb_LogicalOperator_jarc, rtb_LogicalOperator_ip4t,
                   rtb_DataTypeConversion_lsdo, OBCMgmt_ElectcLockLockTmt_CFG,
                   ((uint16_T)EmMgmt_dt50ms), &rtb_DataTypeConversion_hazj,
                   &CtAp_EmMgmt_ARID_DEF.Switch1_apyq,
                   &CtAp_EmMgmt_ARID_DEF.Switch8_ewzj,
                   &CtAp_EmMgmt_ARID_DEF.ARID_DEF_NoDT_cl54);

  /* End of Outputs for SubSystem: '<S22>/NoDT' */
  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErrDTC' */

  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErr' */
  /* Outputs for Atomic SubSystem: '<S23>/OBCMgmt_ElectcLockErrSetCdn_Flg'
   *
   * Block requirements for '<S23>/OBCMgmt_ElectcLockErrSetCdn_Flg':
   *  1. SWREQ_03665 em lock open error
   */
  rtb_LogicalOperator_eatd = OBCMgmt_ElectcLockErrSetCd_jojc
    (CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum,
     rtb_TmpSignalConversionAtR_paaf);

  /* End of Outputs for SubSystem: '<S23>/OBCMgmt_ElectcLockErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S23>/OBCMgmt_ElectcLockErrResetCdn_Flg'
   *
   * Block requirements for '<S23>/OBCMgmt_ElectcLockErrResetCdn_Flg':
   *  1. SWREQ_03667 em lock open error
   */
  /* RelationalOperator: '<S38>/Equal' incorporates:
   *  Constant: '<S38>/Define'
   */
  rtb_Equal = (rtb_TmpSignalConversionAtR_jj5v == ((uint8_T)EmMgmt_Init));

  /* End of Outputs for SubSystem: '<S23>/OBCMgmt_ElectcLockErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S23>/NoDTAndEn' */
  /* Constant: '<S23>/CAL' incorporates:
   *  Constant: '<S23>/Define1'
   *
   * Block requirements for '<S23>/CAL':
   *  1. SWREQ_03674 em lock open error
   */
  CtAp_EmMgmt_NoDTAndEn(rtb_LogicalOperator_eatd, rtb_Equal,
                        OBCMgmt_ElectcLockUnlckTmt_CFG, ((uint16_T)EmMgmt_dt50ms),
                        &rtb_DataTypeConversion_lsdo, &rtb_Switch1, &rtb_Switch8,
                        &rtb_Switch6, &CtAp_EmMgmt_ARID_DEF.ARID_DEF_NoDTAndEn);

  /* End of Outputs for SubSystem: '<S23>/NoDTAndEn' */

  /* SignalConversion generated from: '<S23>/NoDTAndEn' */
  OBCMgmt_ErrResElectcLockOpenErr_Flg = rtb_Switch6;

  /* DataTypeConversion: '<S23>/DataTypeConversion3' incorporates:
   *  Delay generated from: '<S2>/Delay1'
   */
  CtAp_EmMgmt_ARID_DEF.Delay1_4_DSTATE = OBCMgmt_ErrResElectcLockOpenErr_Flg;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErr' */

  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  /* Outputs for Atomic SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg'
   *
   * Block requirements for '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
   *  1. SWREQ_03635 em lock Open DTC
   */
  /* Outputs for Atomic SubSystem: '<S43>/ATOM_TimeCnt' */
  /* Constant: '<S43>/Define' incorporates:
   *  Constant: '<S43>/CAL'
   *  Constant: '<S43>/Define1'
   */
  rtb_Delay = CtAp_EmMgmt_ATOM_TimeCnt(EmMgmt_Active, ((uint16_T)EmMgmt_dt50ms),
    OBCMgmt_ElectcLockDTCEnaTim_CFG, &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S43>/ATOM_TimeCnt' */

  /* Logic: '<S45>/LogicalOperator' incorporates:
   *  Logic: '<S43>/LogicalOperator1'
   */
  rtb_LogicalOperator_ofvl = rtb_LogicalOperator3;

  /* Logic: '<S43>/LogicalOperator' */
  rtb_LogicalOperator_mg3a = (rtb_LogicalOperator_ofvl &&
    rtb_TmpSignalConversionAtR_hh1o && rtb_TmpSignalConversionAtR_o053 &&
    rtb_Delay);

  /* End of Outputs for SubSystem: '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S24>/OBCMgmt_ElectcLockErrSetCdn_Flg'
   *
   * Block requirements for '<S24>/OBCMgmt_ElectcLockErrSetCdn_Flg':
   *  1. SWREQ_03631 em lock Open DTC
   */
  rtb_LogicalOperator_ofvl = OBCMgmt_ElectcLockErrSetCd_jojc
    (CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum,
     rtb_TmpSignalConversionAtR_paaf);

  /* End of Outputs for SubSystem: '<S24>/OBCMgmt_ElectcLockErrSetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S24>/OBCMgmt_ElectcLockErrResetCdn_Flg'
   *
   * Block requirements for '<S24>/OBCMgmt_ElectcLockErrResetCdn_Flg':
   *  1. SWREQ_03633 em lock Open DTC
   */
  rtb_Delay = OBCMgmt_ElectcLockErrResetCdn_F(rtb_TmpSignalConversionAtR_icdi);

  /* End of Outputs for SubSystem: '<S24>/OBCMgmt_ElectcLockErrResetCdn_Flg' */

  /* Outputs for Atomic SubSystem: '<S24>/NoDT' */
  /* Constant: '<S24>/CAL' incorporates:
   *  Constant: '<S24>/Define1'
   *
   * Block requirements for '<S24>/CAL':
   *  1. SWREQ_03640 em lock Open DTC
   */
  CtAp_EmMgmt_NoDT_hokd(rtb_LogicalOperator_mg3a, rtb_LogicalOperator_ofvl,
                        rtb_Delay, OBCMgmt_ElectcLockUnlckTmt_CFG, ((uint16_T)
    EmMgmt_dt50ms), &rtb_DataTypeConversion_idob, &CtAp_EmMgmt_ARID_DEF.Switch1,
                        &CtAp_EmMgmt_ARID_DEF.Switch8,
                        &CtAp_EmMgmt_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S24>/NoDT' */
  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */

  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_MnyUnlckCtrl'
   *
   * Block requirements for '<S2>/OBCMgmt_MnyUnlckCtrl':
   *  1. SWREQ_03606 manual unlock
   *  2. SWREQ_03607 manual unlock
   *  3. SWREQ_03608 manual unlock
   */
  /* Delay: '<S7>/Delay'
   *
   * Block requirements for '<S7>/Delay':
   *  1. SWREQ_03608 manual unlock
   */
  rtb_Delay = CtAp_EmMgmt_ARID_DEF.Delay_DSTATE;

  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Constant: '<S7>/Define'
   *  Constant: '<S7>/Define2'
   *  Delay generated from: '<S2>/Delay1'
   *  Logic: '<S7>/LogicalOperator'
   *  Logic: '<S7>/LogicalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *
   * Block requirements for '<S7>/LogicalOperator':
   *  1. SWREQ_03608 manual unlock
   *  2. SWREQ_03607 manual unlock
   *
   * Block requirements for '<S7>/RelationalOperator1':
   *  1. SWREQ_03606 manual unlock
   */
  CtAp_EmMgmt_ARID_DEF.Delay_DSTATE = ((rtb_TmpSignalConversionAtR_obrc !=
    ((uint8_T)EmMgmt_CCUnconnect)) && ((rtb_TmpSignalConversionAtR_paaf ==
    ((uint8_T)EmMgmt_EmLockErr)) || CtAp_EmMgmt_ARID_DEF.Delay1_4_DSTATE ||
    rtb_Delay));

  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_MnyUnlckCtrl' */

  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErr' */
  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockClsErr_Bus_tec_OBCMgmt_ElectcLockClsErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_ElectcLockClsErr_Bus_tec_OBCMgmt_ElectcLockClsErr_Bus'
   *  DataTypeConversion: '<S21>/DataTypeConversion'
   *  DataTypeConversion: '<S21>/DataTypeConversion1'
   *  DataTypeConversion: '<S21>/DataTypeConversion2'
   *  Delay generated from: '<S2>/Delay2'
   */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErr_.OBCMgmt_MonStatElectcLockClsErr
    = rtb_DataTypeConversion_h0a2;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErr_.OBCMgmt_MonResElectcLockClsErr
    = rtb_Switch1_gvr5;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErr_.OBCMgmt_ErrStatElectcLockClsErr
    = rtb_Switch8_e3hd;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErr' */
  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* End of Outputs for SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErr_.OBCMgmt_ErrResElectcLockClsErr
    = CtAp_EmMgmt_ARID_DEF.Delay2_4_DSTATE;

  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockClsErrDTC_Bus_tec_OBCMgmt_ElectcLockClsErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_ElectcLockClsErrDTC_Bus_tec_OBCMgmt_ElectcLockClsErrDTC_Bus'
   *  DataTypeConversion: '<S22>/DataTypeConversion'
   */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErrD.OBCMgmt_MonStatElectcLockClsErrDTC
    = rtb_DataTypeConversion_hazj;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErrD.OBCMgmt_MonResElectcLockClsErrDTC
    = CtAp_EmMgmt_ARID_DEF.Switch1_apyq;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErrD.OBCMgmt_ErrStatElectcLockClsErrDTC
    = CtAp_EmMgmt_ARID_DEF.Switch8_ewzj;

  /* Outputs for Atomic SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErrDTC' */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErrD.OBCMgmt_ErrResElectcLockClsErrDTC
    = OBCMgmt_ErrResElectcLockClsErrDTC;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockClsErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* End of Outputs for SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum' */
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum
    (CtAp_EmMgmt_ARID_DEF.OBCMgmt_ElectcLockCtrlCmd_Enum);

  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum' */
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum
    (rtb_TmpSignalConversionAtR_jj5v);

  /* Outputs for Atomic SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErr' */
  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErr_Bus_tec_OBCMgmt_ElectcLockOpenErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErr_Bus_tec_OBCMgmt_ElectcLockOpenErr_Bus'
   *  DataTypeConversion: '<S23>/DataTypeConversion'
   *  DataTypeConversion: '<S23>/DataTypeConversion1'
   *  DataTypeConversion: '<S23>/DataTypeConversion2'
   *  Delay generated from: '<S2>/Delay1'
   */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOpenErr.OBCMgmt_MonStatElectcLockOpenErr
    = rtb_DataTypeConversion_lsdo;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOpenErr.OBCMgmt_MonResElectcLockOpenErr
    = rtb_Switch1;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOpenErr.OBCMgmt_ErrStatElectcLockOpenErr
    = rtb_Switch8;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErr' */
  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* End of Outputs for SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOpenErr.OBCMgmt_ErrResElectcLockOpenErr
    = CtAp_EmMgmt_ARID_DEF.Delay1_4_DSTATE;

  /* Outport: '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErrDTC_Bus_tec_OBCMgmt_ElectcLockOpenErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErrDTC_Bus_tec_OBCMgmt_ElectcLockOpenErrDTC_Bus'
   *  DataTypeConversion: '<S24>/DataTypeConversion'
   */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOp_djf3.OBCMgmt_MonStatElectcLockOpenErrDTC
    = rtb_DataTypeConversion_idob;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOp_djf3.OBCMgmt_MonResElectcLockOpenErrDTC
    = CtAp_EmMgmt_ARID_DEF.Switch1;
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOp_djf3.OBCMgmt_ErrStatElectcLockOpenErrDTC
    = CtAp_EmMgmt_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */
  /* Outputs for Atomic SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOp_djf3.OBCMgmt_ErrResElectcLockOpenErrDTC
    = OBCMgmt_ErrResElectcLockOpenErrDTC;

  /* End of Outputs for SubSystem: '<S6>/OBCMgmt_ErrResElectcLockOpenErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_ErrResElectcLockErrHandler' */

  /* Outputs for Atomic SubSystem: '<S2>/OBCMgmt_MnyUnlckCtrl'
   *
   * Block requirements for '<S2>/OBCMgmt_MnyUnlckCtrl':
   *  1. SWREQ_03606 manual unlock
   *  2. SWREQ_03607 manual unlock
   *  3. SWREQ_03608 manual unlock
   */
  /* Outport: '<Root>/RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   */
  (void)Rte_Write_RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum
    ((uint8_T)CtAp_EmMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/OBCMgmt_MnyUnlckCtrl' */
  /* End of Outputs for SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockClsErr_Bus_tec_OBCMgmt_ElectcLockClsErr_Bus
    (&CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErr_);
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockClsErrDTC_Bus_tec_OBCMgmt_ElectcLockClsErrDTC_Bus
    (&CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockClsErrD);
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockOpenErr_Bus_tec_OBCMgmt_ElectcLockOpenErr_Bus
    (&CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOpenErr);
  (void)
    Rte_Write_RTE_P_OBCMgmt_ElectcLockOpenErrDTC_Bus_tec_OBCMgmt_ElectcLockOpenErrDTC_Bus
    (&CtAp_EmMgmt_ARID_DEF.RTE_P_OBCMgmt_ElectcLockOp_djf3);
}

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_EmMgmt_START_SEC_VAR_CONST_8
#include "CtAp_EmMgmt_MemMap.h"

void R_EmMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  OBCMgmt_ErrResElectcLockOpenErr_Flg = false;
  OBCMgmt_ErrResElectcLockClsErr_Flg = false;
  OBCMgmt_ErrResElectcLockOpenErrDTC = false;
  OBCMgmt_ErrResElectcLockClsErrDTC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_EmMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_EmMgmt_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_ACChrgnReqEmlock':
   *  1. SWREQ_03578 charge  req Lock
   *  2. SWREQ_03584 charge  req Unlock
   */
  /* SystemInitialize for Atomic SubSystem: '<S9>/ATOM_OnDelay1' */
  CtAp_EmMgmt_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1_cxar);

  /* End of SystemInitialize for SubSystem: '<S9>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S4>/OBCMgmt_ACChrgnReqEmlock' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/OBCMgmt_BCMReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_BCMReqEmlock':
   *  1. SWREQ_03576 BCM Req Lock
   *  2. SWREQ_03586 BCM Req Unlock
   */
  /* SystemInitialize for Atomic SubSystem: '<S11>/ATOM_OnDelay' */
  CtAp_EmMgmt_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S11>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S11>/ATOM_OnDelay1' */
  CtAp_EmMgmt_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of SystemInitialize for SubSystem: '<S11>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S4>/OBCMgmt_BCMReqEmlock' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/OBCMgmt_HMIReqEmlock'
   *
   * Block requirements for '<S4>/OBCMgmt_HMIReqEmlock':
   *  1. SWREQ_03577 IVI Req Lock
   *  2. SWREQ_03585 IVI Req Unlock
   */
  /* SystemInitialize for Atomic SubSystem: '<S12>/ATOM_OffDelay' */
  CtAp_EmMgmt_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_EmMgmt_ARID_DEF.ARID_DEF_ATOM_OffDelay);

  /* End of SystemInitialize for SubSystem: '<S12>/ATOM_OffDelay' */
  /* End of SystemInitialize for SubSystem: '<S4>/OBCMgmt_HMIReqEmlock' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_EmMgmt_Cyclic_50ms_sys' */
}

#define CtAp_EmMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_EmMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
