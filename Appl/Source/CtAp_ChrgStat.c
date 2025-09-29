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
 *  Filename:           CtAp_ChrgStat.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_ChrgStat
 *  Model Version:      1.014
 *  Model Author:       Mike Ni - Fri Aug 16 10:06:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 14:36:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Sep 11 14:35:06 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgStat.h"
#include "rtwtypes.h"
#include "CtAp_ChrgStat_private.h"
#include "Rte_Type.h"
#include "CtAp_ChrgStat_Cal.h"
#include "VCU_TempGlobal.h"

/*  Defines */

/* Named constants for Chart: '<S2>/ChrMgmt_ChrgStsFlow' */
#define CtAp_Chr_IN_ChrChargingComplete ((uint8_T)1U)
#define CtAp_ChrgS_IN_ChrACPlugDetected ((uint8_T)2U)
#define CtAp_ChrgS_IN_ChrDCPlugDetected ((uint8_T)2U)
#define CtAp_ChrgS_IN_ChrV2LDischarging ((uint8_T)1U)
#define CtAp_ChrgSt_IN_ChrChargingFault ((uint8_T)2U)
#define CtAp_ChrgSta_IN_ChrACPreheating ((uint8_T)3U)
#define CtAp_ChrgSta_IN_ChrDCPreheating ((uint8_T)3U)
#define CtAp_ChrgSta_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_ChrgStat_IN_ACFlow        ((uint8_T)1U)
#define CtAp_ChrgStat_IN_ChargeComplete ((uint8_T)2U)
#define CtAp_ChrgStat_IN_ChrACCharging ((uint8_T)1U)
#define CtAp_ChrgStat_IN_ChrDCCharging ((uint8_T)1U)
#define CtAp_ChrgStat_IN_ChrKeepWarm   ((uint8_T)4U)
#define CtAp_ChrgStat_IN_ChrOffPlug    ((uint8_T)1U)
#define CtAp_ChrgStat_IN_ChrV2LComplete ((uint8_T)1U)
#define CtAp_ChrgStat_IN_ChrV2LFault   ((uint8_T)2U)
#define CtAp_ChrgStat_IN_DCFlow        ((uint8_T)3U)
#define CtAp_ChrgStat_IN_INIT          ((uint8_T)2U)
#define CtAp_ChrgStat_IN_Nocharge      ((uint8_T)4U)
#define CtAp_ChrgStat_IN_V2LComplete   ((uint8_T)5U)
#define CtAp_ChrgStat_IN_V2LFlow       ((uint8_T)6U)
#define CtAp_Chrg_IN_ChrV2LPlugDetected ((uint8_T)2U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */

/*if not init use it */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChrMgmt_ACChCmplDCDCErr_Flg; /* '<S29>/If' */
boolean_T ChrMgmt_ACChCmplPlugStsErr_Flg;/* '<S30>/LogicalOperator' */
boolean_T ChrMgmt_ACChCmplPosRlyErr_Flg;/* '<S31>/LogicalOperator14' */
boolean_T ChrMgmt_ACChCmplStsErr_Flg;  /* '<S32>/LogicalOperator' */
boolean_T ChrMgmt_ACChCmplTCUErr_Flg;  /* '<S33>/If' */
boolean_T ChrMgmt_ACCmplDCDCErr_Flg;   /* '<S50>/LogicalOperator1' */
boolean_T ChrMgmt_ACCmplDTCErr_Flg;    /* '<S51>/LogicalOperator' */
boolean_T ChrMgmt_ACCmplPlugErr_Flg;   /* '<S52>/LogicalOperator' */
boolean_T ChrMgmt_ACCmplPrheatPosErr_Flg;/* '<S53>/LogicalOperator1' */
boolean_T ChrMgmt_ACCmplStsErr_Flg;    /* '<S54>/LogicalOperator' */
boolean_T ChrMgmt_ACCmplTCUErr_Flg;    /* '<S55>/LogicalOperator' */
boolean_T ChrMgmt_DCCmplDCDCErr_Flg;   /* '<S80>/If' */
boolean_T ChrMgmt_DCCmplDTCErr_Flg;    /* '<S81>/LogicalOperator1' */
boolean_T ChrMgmt_DCCmplRlyErr_Flg;    /* '<S83>/LogicalOperator' */
boolean_T ChrMgmt_DCCmplStsErr_Flg;    /* '<S84>/LogicalOperator5' */
boolean_T ChrMgmt_DCCmplTCUErr_Flg;    /* '<S85>/If' */

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"

ARID_DEF_CtAp_ChrgStat_T CtAp_ChrgStat_ARID_DEF;

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * System initialize for atomic system:
 *    '<S18>/ATOM_OnDelay'
 *    '<S18>/ATOM_OnDelay1'
 *    '<S30>/ATOM_OnDelay1'
 *    '<S32>/ATOM_OnDelay2'
 *    '<S54>/ATOM_OnDelay'
 *    '<S23>/ATOM_OnDelay'
 *    '<S23>/ATOM_OnDelay1'
 *    '<S82>/ATOM_OnDelay'
 *    '<S108>/ATOM_OnDelay'
 *    '<S123>/ATOM_OnDelay1'
 *    ...
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S24>/Sum' incorporates:
   *  UnitDelay: '<S24>/UnitDelay'
   */
  CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S18>/ATOM_OnDelay'
 *    '<S18>/ATOM_OnDelay1'
 *    '<S30>/ATOM_OnDelay1'
 *    '<S32>/ATOM_OnDelay2'
 *    '<S54>/ATOM_OnDelay'
 *    '<S23>/ATOM_OnDelay'
 *    '<S23>/ATOM_OnDelay1'
 *    '<S82>/ATOM_OnDelay'
 *    '<S108>/ATOM_OnDelay'
 *    '<S123>/ATOM_OnDelay1'
 *    ...
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp_ChrgStat_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* Switch: '<S24>/Switch1' */
  if (rtu_x) {
    uint16_T u0;

    /* Sum: '<S24>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_tm_dly + (uint32_T)rtu_dt);

    /* Sum: '<S24>/Sum' incorporates:
     *  UnitDelay: '<S24>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
      + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S24>/MinMax' */
    if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S24>/Sum' */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S24>/MinMax' */
  } else {
    /* Sum: '<S24>/Sum' incorporates:
     *  UnitDelay: '<S24>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S24>/Switch1' */

  /* RelationalOperator: '<S24>/B_MiHold' incorporates:
   *  UnitDelay: '<S24>/UnitDelay'
   */
  return CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_tm_dly;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S18>/If'
 *    '<S18>/If1'
 *    '<S29>/If'
 *    '<S29>/If1'
 *    '<S29>/If2'
 *    '<S33>/If'
 *    '<S33>/If1'
 *    '<S33>/If2'
 *    '<S34>/If'
 *    '<S54>/If'
 *    ...
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp_ChrgStat_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S26>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S26>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S77>/If'
 *    '<S77>/If1'
 *    '<S77>/If2'
 *    '<S115>/If1'
 *    '<S115>/If2'
 *    '<S115>/If3'
 *    '<S133>/If'
 *    '<S133>/If1'
 *    '<S134>/If'
 *    '<S135>/If1'
 *    ...
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

uint8_T CtAp_ChrgStat_If_bdx1(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else)
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

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S123>/ATOM_U32DebAct'
 *    '<S120>/ATOM_U32DebAct1'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp_ChrgStat_ATOM_U32DebAct(boolean_T rtu_In, uint16_T rtu_RunStep,
  uint32_T rtu_CountOnOffMax_CFG, ARID_DEF_ATOM_U32DebAct_CtAp__T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  boolean_T rty_DebounceActive_0;
  uint32_T rtb_Add;

  /* Switch: '<S128>/Switch' incorporates:
   *  Constant: '<S128>/Constant1'
   *  DataTypeConversion: '<S128>/Data Type Conversion'
   *  Delay: '<S128>/Delay1'
   *  Logic: '<S128>/DebounceActive_AND'
   */
  if (rtu_In && CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE) {
    rtb_Add = (uint32_T)rtu_RunStep;
  } else {
    rtb_Add = 0U;
  }

  /* Sum: '<S128>/Add' incorporates:
   *  Delay: '<S128>/Delay'
   *  Switch: '<S128>/Switch'
   */
  rtb_Add += CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE;

  /* DataTypeConversion: '<S128>/Data Type Conversion1' incorporates:
   *  Delay: '<S128>/Delay'
   */
  CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = rtu_CountOnOffMax_CFG;

  /* RelationalOperator: '<S128>/RelationalOperator' incorporates:
   *  Delay: '<S128>/Delay'
   */
  rty_DebounceActive_0 = (rtb_Add > CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE);

  /* Logic: '<S128>/DebounceActive_NOT' incorporates:
   *  Delay: '<S128>/Delay1'
   */
  CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = !rty_DebounceActive_0;

  /* Switch: '<S128>/Switch1' incorporates:
   *  Constant: '<S128>/Constant'
   *  Delay: '<S128>/Delay'
   */
  if (rtu_In) {
    CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = rtb_Add;
  } else {
    CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = 0U;
  }

  /* End of Switch: '<S128>/Switch1' */
  return rty_DebounceActive_0;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S145>/If2'
 *    '<S145>/If'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

uint8_T CtAp_ChrgStat_If2(boolean_T rtu_if, uint8_T rtu_then, uint16_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S150>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (uint8_T)rtu_else;
  }

  /* End of Switch: '<S150>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S145>/If3'
 *    '<S145>/If1'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

uint16_T CtAp_ChrgStat_If3(boolean_T rtu_if, uint16_T rtu_then, uint8_T rtu_else)
{
  uint16_T rty_Out1_0;

  /* Switch: '<S151>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = (uint16_T)rtu_else;
  }

  /* End of Switch: '<S151>/Switch' */
  return rty_Out1_0;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S180>/ChrMgmt_ChrgStatErrSetCdn'
 *    '<S181>/ChrMgmt_ChrgStatErrSetCdn'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp__ChrMgmt_ChrgStatErrSetCdn(uint16_T rtu_ChrMgmt_ChrgSig_Bus)
{
  /* Logic: '<S188>/LogicalOperator' incorporates:
   *  Constant: '<S188>/CAL'
   *  Constant: '<S188>/CAL1'
   *  Constant: '<S188>/CAL2'
   *  Logic: '<S188>/LogicalOperator1'
   *  RelationalOperator: '<S188>/RelationalOperator'
   *  RelationalOperator: '<S188>/RelationalOperator1'
   *  RelationalOperator: '<S188>/RelationalOperator2'
   */
  return (rtu_ChrMgmt_ChrgSig_Bus < ChrMgmt_CC2ChkUDcNoConn_CFG) &&
    ((rtu_ChrMgmt_ChrgSig_Bus < ChrMgmt_CC2ChkActvUDcLowr_CFG) ||
     (rtu_ChrMgmt_ChrgSig_Bus > ChrMgmt_CC2ChkActvUDcUppr_CFG));
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S180>/NoEnAvoidMu' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_NoEnAvoidMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnAvoidMu_CtAp_Chr_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S189>/True' */
  *rty_MonStat = true;

  /* Switch: '<S190>/Switch1' incorporates:
   *  Constant: '<S190>/Constant2'
   *  DataTypeConversion: '<S190>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S190>/Switch1' */

  /* RelationalOperator: '<S190>/Equal2' incorporates:
   *  Constant: '<S190>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S191>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S191>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S191>/Sum' incorporates:
     *  UnitDelay: '<S191>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
      + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S191>/MinMax' */
    if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S191>/Sum' */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S191>/MinMax' */
  } else {
    /* Sum: '<S191>/Sum' incorporates:
     *  Constant: '<S190>/Constant37'
     *  UnitDelay: '<S191>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S191>/Switch1' */

  /* Switch: '<S192>/Switch1' incorporates:
   *  Constant: '<S190>/Constant3'
   *  RelationalOperator: '<S190>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S192>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S192>/Sum' incorporates:
     *  UnitDelay: '<S192>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1 = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1);

    /* MinMax: '<S192>/MinMax' */
    if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1) {
      /* Sum: '<S192>/Sum' */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1 = u0;
    }

    /* End of MinMax: '<S192>/MinMax' */
  } else {
    /* Sum: '<S192>/Sum' incorporates:
     *  Constant: '<S190>/Constant23'
     *  UnitDelay: '<S192>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1 = ((uint16_T)0U);
  }

  /* End of Switch: '<S192>/Switch1' */

  /* Switch: '<S190>/Switch2' incorporates:
   *  Constant: '<S190>/FAILED'
   *  RelationalOperator: '<S191>/B_MiHold'
   *  RelationalOperator: '<S192>/B_MiHold'
   *  Switch: '<S190>/Switch3'
   *  Switch: '<S190>/Switch4'
   *  UnitDelay: '<S191>/UnitDelay'
   *  UnitDelay: '<S192>/UnitDelay'
   */
  if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S190>/Switch3' incorporates:
     *  Constant: '<S190>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_bbg1 >
             rtu_Dematuretime) {
    /* Switch: '<S190>/Switch4' incorporates:
     *  Constant: '<S190>/PASSED'
     *  Switch: '<S190>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S190>/Switch3' incorporates:
     *  Constant: '<S190>/DEBOUNCING_P'
     *  Switch: '<S190>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S190>/Switch2' */

  /* Switch: '<S190>/Switch6' incorporates:
   *  Constant: '<S190>/Constant30'
   *  Constant: '<S190>/Constant31'
   *  Constant: '<S190>/Constant32'
   *  Delay: '<S190>/Delay1'
   *  RelationalOperator: '<S190>/Equal3'
   *  RelationalOperator: '<S190>/Equal4'
   *  Switch: '<S190>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S190>/Switch7' incorporates:
     *  Constant: '<S190>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S190>/Switch6' */

  /* Update for Delay: '<S190>/Delay1' */
  CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S181>/AvoidMu' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_AvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_ChrgSta_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S193>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S193>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S196>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S196>/Constant2'
     *  DataTypeConversion: '<S196>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S196>/Switch1' */

    /* RelationalOperator: '<S196>/Equal2' incorporates:
     *  Constant: '<S196>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S197>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S197>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S197>/Sum' incorporates:
       *  UnitDelay: '<S197>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S197>/MinMax' */
      if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S197>/Sum' */
        CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S197>/MinMax' */
    } else {
      /* Sum: '<S197>/Sum' incorporates:
       *  Constant: '<S196>/Constant37'
       *  UnitDelay: '<S197>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S197>/Switch1' */

    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S196>/Constant3'
     *  RelationalOperator: '<S196>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S198>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S198>/Sum' incorporates:
       *  UnitDelay: '<S198>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx);

      /* MinMax: '<S198>/MinMax' */
      if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx) {
        /* Sum: '<S198>/Sum' */
        CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx = u0;
      }

      /* End of MinMax: '<S198>/MinMax' */
    } else {
      /* Sum: '<S198>/Sum' incorporates:
       *  Constant: '<S196>/Constant23'
       *  UnitDelay: '<S198>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx = ((uint16_T)0U);
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Switch: '<S196>/Switch2' incorporates:
     *  Constant: '<S196>/FAILED'
     *  RelationalOperator: '<S197>/B_MiHold'
     *  RelationalOperator: '<S198>/B_MiHold'
     *  Switch: '<S196>/Switch3'
     *  Switch: '<S196>/Switch4'
     *  UnitDelay: '<S197>/UnitDelay'
     *  UnitDelay: '<S198>/UnitDelay'
     */
    if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S196>/Switch3' incorporates:
       *  Constant: '<S196>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE_p3cx >
               rtu_Dematuretime) {
      /* Switch: '<S196>/Switch4' incorporates:
       *  Constant: '<S196>/PASSED'
       *  Switch: '<S196>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S196>/Switch3' incorporates:
       *  Constant: '<S196>/DEBOUNCING_P'
       *  Switch: '<S196>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S196>/Switch2' */

    /* Switch: '<S196>/Switch6' incorporates:
     *  Constant: '<S196>/Constant30'
     *  Constant: '<S196>/Constant31'
     *  RelationalOperator: '<S196>/Equal3'
     *  RelationalOperator: '<S196>/Equal4'
     *  Switch: '<S196>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S196>/Switch6' incorporates:
       *  Constant: '<S196>/Constant32'
       */
      ChrMgmt_ErrResCC2UDcErrDTC = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S196>/Switch7' incorporates:
       *  Constant: '<S196>/Constant11'
       *  Switch: '<S196>/Switch6'
       */
      ChrMgmt_ErrResCC2UDcErrDTC = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S196>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S193>/ErrorHandleSysU16' */
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S194>/ATOM_TimeCnt'
 *    '<S205>/ATOM_TimeCnt'
 *    '<S217>/ATOM_TimeCnt'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp_ChrgStat_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S199>/Add1' incorporates:
   *  DataTypeConversion: '<S199>/Data Type Conversion'
   *  DataTypeConversion: '<S199>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S199>/Switch' */
  if (rtu_In) {
    /* Sum: '<S199>/Add' incorporates:
     *  DataTypeConversion: '<S199>/Data Type Conversion'
     *  UnitDelay: '<S199>/Delay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S199>/Min' */
    if (rtb_Add1 <= CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S199>/Add' */
      CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S199>/Min' */
  } else {
    /* Sum: '<S199>/Add' incorporates:
     *  Constant: '<S199>/Constant'
     *  UnitDelay: '<S199>/Delay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S199>/Switch' */

  /* RelationalOperator: '<S199>/Relational Operator' incorporates:
   *  UnitDelay: '<S199>/Delay'
   */
  return CtAp_ChrgStat__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S182>/ChrMgmt_ChrgStatResetCdn'
 *    '<S184>/ChrMgmt_ChrgStatResetCdn'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T CtAp_C_ChrMgmt_ChrgStatResetCdn(uint8_T rtu_ChrMgmt_ChrgSig_Bus)
{
  /* Logic: '<S201>/LogicalOperator' incorporates:
   *  Constant: '<S201>/Define'
   *  Constant: '<S201>/Define1'
   *  RelationalOperator: '<S201>/Equal'
   *  RelationalOperator: '<S201>/Equal1'
   */
  return (rtu_ChrMgmt_ChrgSig_Bus == ((uint8_T)ChrgStat_offplug)) ||
    (rtu_ChrMgmt_ChrgSig_Bus == ((uint8_T)ChrgStat_CharingFault));
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S182>/NoDTAndEn' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_ChrgS_T *CtAp_ChrgStat__ARID_DEF_arg)
{
  boolean_T rtb_Equal2;

  /* DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
   *  Constant: '<S202>/True'
   */
  *rty_MonStat = true;

  /* Switch: '<S203>/Switch1' incorporates:
   *  Constant: '<S203>/Constant2'
   *  Constant: '<S203>/Constant4'
   *  Switch: '<S203>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S203>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S203>/Switch1' */

  /* RelationalOperator: '<S203>/Equal2' incorporates:
   *  Constant: '<S203>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S204>/Switch1' */
  if (rtb_Equal2) {
    uint16_T u0;

    /* Sum: '<S204>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S204>/Sum' incorporates:
     *  UnitDelay: '<S204>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
      + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S204>/MinMax' */
    if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S204>/Sum' */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S204>/MinMax' */
  } else {
    /* Sum: '<S204>/Sum' incorporates:
     *  Constant: '<S203>/Constant37'
     *  UnitDelay: '<S204>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S204>/Switch1' */

  /* Switch: '<S203>/Switch8' incorporates:
   *  Constant: '<S203>/Constant6'
   *  Constant: '<S203>/DEBOUNCING'
   *  RelationalOperator: '<S203>/Equal6'
   *  RelationalOperator: '<S204>/B_MiHold'
   *  Switch: '<S203>/Switch2'
   *  Switch: '<S203>/Switch3'
   *  UnitDelay: '<S204>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    /* Switch: '<S203>/Switch2' incorporates:
     *  Constant: '<S203>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S203>/Switch3' incorporates:
     *  Constant: '<S203>/DEBOUNCING_F'
     *  Switch: '<S203>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    /* Switch: '<S203>/Switch2' incorporates:
     *  Constant: '<S203>/PASSED'
     *  Switch: '<S203>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S203>/Switch8' */

  /* Switch: '<S203>/Switch6' incorporates:
   *  Constant: '<S203>/Constant30'
   *  Constant: '<S203>/Constant31'
   *  Constant: '<S203>/Constant32'
   *  Delay: '<S203>/Delay1'
   *  RelationalOperator: '<S203>/Equal3'
   *  RelationalOperator: '<S203>/Equal4'
   *  Switch: '<S203>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S203>/Switch7' incorporates:
     *  Constant: '<S203>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S203>/Switch6' */

  /* Update for Delay: '<S203>/Delay1' */
  CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S183>/ChrMgmt_ChrgStatResetCdn'
 *    '<S185>/ChrMgmt_ChrgStatResetCdn'
 *    '<S187>/ChrMgmt_ChrgStatResetCdn'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T C_ChrMgmt_ChrgStatResetCdn_brpa(uint8_T rtu_ChrMgmt_ChrgSig_Bus)
{
  /* RelationalOperator: '<S207>/Equal' incorporates:
   *  Constant: '<S207>/Define'
   */
  return rtu_ChrMgmt_ChrgSig_Bus == ((uint8_T)ChrgStat_offplug);
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S183>/NoDT' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_ChrgStat_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S208>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S208>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S210>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;

    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S210>/Constant2'
     *  Constant: '<S210>/Constant4'
     *  Switch: '<S210>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S210>/Switch' incorporates:
       *  Constant: '<S210>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S210>/Switch1' */

    /* RelationalOperator: '<S210>/Equal2' incorporates:
     *  Constant: '<S210>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S211>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S211>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S211>/Sum' incorporates:
       *  UnitDelay: '<S211>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S211>/MinMax' */
      if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S211>/Sum' */
        CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S211>/MinMax' */
    } else {
      /* Sum: '<S211>/Sum' incorporates:
       *  Constant: '<S210>/Constant37'
       *  UnitDelay: '<S211>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Switch: '<S210>/Switch8' incorporates:
     *  Constant: '<S210>/Constant6'
     *  Constant: '<S210>/DEBOUNCING'
     *  RelationalOperator: '<S210>/Equal6'
     *  RelationalOperator: '<S211>/B_MiHold'
     *  Switch: '<S210>/Switch2'
     *  Switch: '<S210>/Switch3'
     *  UnitDelay: '<S211>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S210>/Switch2' incorporates:
       *  Constant: '<S210>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S210>/Switch3' incorporates:
       *  Constant: '<S210>/DEBOUNCING_F'
       *  Switch: '<S210>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      /* Switch: '<S210>/Switch2' incorporates:
       *  Constant: '<S210>/PASSED'
       *  Switch: '<S210>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S210>/Switch8' */

    /* Switch: '<S210>/Switch6' incorporates:
     *  Constant: '<S210>/Constant30'
     *  Constant: '<S210>/Constant31'
     *  Constant: '<S210>/Constant32'
     *  Delay: '<S210>/Delay1'
     *  RelationalOperator: '<S210>/Equal3'
     *  RelationalOperator: '<S210>/Equal4'
     *  Switch: '<S210>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S210>/Switch7' incorporates:
       *  Constant: '<S210>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S210>/Switch6' */

    /* Update for Delay: '<S210>/Delay1' */
    CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S208>/ErrorHandleSysU16' */
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S184>/ChrMgmt_ChrgStatErrSetCdn'
 *    '<S185>/ChrMgmt_ChrgStatErrSetCdn'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

boolean_T ChrMgmt_ChrgStatErrSetCdn_ao4q(uint8_T rtu_ChrMgmt_ChrgSig_Bus,
  boolean_T rtu_ChrMgmt_ChrgSig_Bus_mtzw)
{
  /* Logic: '<S212>/LogicalOperator' incorporates:
   *  Constant: '<S212>/Define1'
   *  RelationalOperator: '<S212>/RelationalOperator1'
   */
  return rtu_ChrMgmt_ChrgSig_Bus_mtzw && (rtu_ChrMgmt_ChrgSig_Bus == ((uint8_T)
    ChrgStat_DCPlugDetected));
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S184>/U32NoDTAndEn' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_U32NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint32_T rtu_MatureTime, uint32_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_U32NoDTAndEn_CtAp_Ch_T *CtAp_ChrgStat__ARID_DEF_arg)
{
  boolean_T rtb_Equal2;

  /* DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
   *  Constant: '<S214>/True'
   */
  *rty_MonStat = true;

  /* Switch: '<S215>/Switch1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Constant: '<S215>/Constant4'
   *  Switch: '<S215>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S215>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S215>/Switch1' */

  /* RelationalOperator: '<S215>/Equal2' incorporates:
   *  Constant: '<S215>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S216>/Switch1' */
  if (rtb_Equal2) {
    uint32_T u0;

    /* Sum: '<S216>/Sum1' */
    u0 = rtu_MatureTime + rtu_dt;

    /* Sum: '<S216>/Sum' incorporates:
     *  UnitDelay: '<S216>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE += rtu_dt;

    /* MinMax: '<S216>/MinMax' */
    if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S216>/Sum' */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S216>/MinMax' */
  } else {
    /* Sum: '<S216>/Sum' incorporates:
     *  Constant: '<S215>/Constant37'
     *  UnitDelay: '<S216>/UnitDelay'
     */
    CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = 0U;
  }

  /* End of Switch: '<S216>/Switch1' */

  /* Switch: '<S215>/Switch8' incorporates:
   *  Constant: '<S215>/Constant6'
   *  Constant: '<S215>/DEBOUNCING'
   *  RelationalOperator: '<S215>/Equal6'
   *  RelationalOperator: '<S216>/B_MiHold'
   *  Switch: '<S215>/Switch2'
   *  Switch: '<S215>/Switch3'
   *  UnitDelay: '<S216>/UnitDelay'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    /* Switch: '<S215>/Switch2' incorporates:
     *  Constant: '<S215>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S215>/Switch3' incorporates:
     *  Constant: '<S215>/DEBOUNCING_F'
     *  Switch: '<S215>/Switch2'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else {
    /* Switch: '<S215>/Switch2' incorporates:
     *  Constant: '<S215>/PASSED'
     *  Switch: '<S215>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S215>/Switch8' */

  /* Switch: '<S215>/Switch6' incorporates:
   *  Constant: '<S215>/Constant30'
   *  Constant: '<S215>/Constant31'
   *  Constant: '<S215>/Constant32'
   *  Delay: '<S215>/Delay1'
   *  RelationalOperator: '<S215>/Equal3'
   *  RelationalOperator: '<S215>/Equal4'
   *  Switch: '<S215>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S215>/Switch7' incorporates:
     *  Constant: '<S215>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S215>/Switch6' */

  /* Update for Delay: '<S215>/Delay1' */
  CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Output and update for atomic system: '<S185>/U32NoDTAvoidMu1' */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_U32NoDTAvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint32_T rtu_MatureTime,
  uint32_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_U32NoDTAvoidMu_CtAp__T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S220>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S220>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S222>/Enable'
   */
  if (rtu_EnableCondition) {
    boolean_T rtb_Equal2;
    boolean_T rtb_Equal6_forp;

    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant2'
     *  Constant: '<S222>/Constant4'
     *  Switch: '<S222>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S222>/Switch' incorporates:
       *  Constant: '<S222>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S222>/Switch1' */

    /* RelationalOperator: '<S222>/Equal2' incorporates:
     *  Constant: '<S222>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S223>/Switch1' */
    if (rtb_Equal2) {
      uint32_T u0;

      /* Sum: '<S223>/Sum1' */
      u0 = rtu_MatureTime + rtu_dt;

      /* Sum: '<S223>/Sum' incorporates:
       *  UnitDelay: '<S223>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE += rtu_dt;

      /* MinMax: '<S223>/MinMax' */
      if (u0 <= CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S223>/Sum' */
        CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S223>/MinMax' */
    } else {
      /* Sum: '<S223>/Sum' incorporates:
       *  Constant: '<S222>/Constant37'
       *  UnitDelay: '<S223>/UnitDelay'
       */
      CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE = 0U;
    }

    /* End of Switch: '<S223>/Switch1' */

    /* RelationalOperator: '<S222>/Equal6' incorporates:
     *  Constant: '<S222>/Constant6'
     */
    rtb_Equal6_forp = (*rty_MonRes == ((uint8_T)2U));

    /* Switch: '<S222>/Switch8' incorporates:
     *  Constant: '<S222>/DEBOUNCING'
     *  Constant: '<S222>/PASSED'
     *  RelationalOperator: '<S223>/B_MiHold'
     *  Switch: '<S222>/Switch2'
     *  Switch: '<S222>/Switch3'
     *  UnitDelay: '<S223>/UnitDelay'
     */
    if (rtb_Equal6_forp) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ChrgStat__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S222>/Switch2' incorporates:
       *  Constant: '<S222>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S222>/Switch3' incorporates:
       *  Constant: '<S222>/DEBOUNCING_F'
       *  Switch: '<S222>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S222>/Switch8' */

    /* RelationalOperator: '<S222>/Equal3' incorporates:
     *  Constant: '<S222>/Constant30'
     */
    rtb_Equal2 = (*rty_ErrStat == ((uint8_T)2U));

    /* Switch: '<S222>/Switch6' incorporates:
     *  Constant: '<S222>/Constant32'
     */
    if (rtb_Equal2) {
      *rty_ErrorRes = true;
    } else {
      /* RelationalOperator: '<S222>/Equal4' incorporates:
       *  Constant: '<S222>/Constant31'
       */
      rtb_Equal2 = (*rty_ErrStat == ((uint8_T)0U));

      /* Switch: '<S222>/Switch7' incorporates:
       *  Constant: '<S222>/Constant11'
       *  Delay: '<S222>/Delay1'
       */
      if (rtb_Equal2) {
        *rty_ErrorRes = false;
      } else {
        *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
      }

      /* End of Switch: '<S222>/Switch7' */
    }

    /* End of Switch: '<S222>/Switch6' */

    /* Update for Delay: '<S222>/Delay1' */
    CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S220>/ErrorHandleSysU16' */
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S186>/NoEnableAndTime'
 *    '<S187>/NoEnableAndTime'
 */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void CtAp_ChrgStat_NoEnableAndTime(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnableAndTime_CtAp_T
  *CtAp_ChrgStat__ARID_DEF_arg)
{
  /* Constant: '<S226>/True' */
  *rty_MonStat = true;

  /* Switch: '<S227>/Switch1' incorporates:
   *  Constant: '<S227>/Constant2'
   *  Constant: '<S227>/Constant4'
   *  Switch: '<S227>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S227>/Switch' incorporates:
     *  Constant: '<S227>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S227>/Switch1' */

  /* Switch: '<S227>/Switch8' incorporates:
   *  Constant: '<S227>/Constant5'
   *  Constant: '<S227>/Constant6'
   *  Constant: '<S227>/DEBOUNCING'
   *  Constant: '<S227>/DEBOUNCING_P'
   *  RelationalOperator: '<S227>/Equal2'
   *  RelationalOperator: '<S227>/Equal6'
   *  Switch: '<S227>/Switch3'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (*rty_MonRes == ((uint8_T)1U)) {
    /* Switch: '<S227>/Switch3' incorporates:
     *  Constant: '<S227>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S227>/Switch8' */

  /* Switch: '<S227>/Switch6' incorporates:
   *  Constant: '<S227>/Constant30'
   *  Constant: '<S227>/Constant31'
   *  Constant: '<S227>/Constant32'
   *  Delay: '<S227>/Delay1'
   *  RelationalOperator: '<S227>/Equal3'
   *  RelationalOperator: '<S227>/Equal4'
   *  Switch: '<S227>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S227>/Switch7' incorporates:
     *  Constant: '<S227>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S227>/Switch6' */

  /* Update for Delay: '<S227>/Delay1' */
  CtAp_ChrgStat__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

void R_ChrgStat_Cyclic_50ms(void)
{
  /* local block i/o variables */
  dt_Nv_ChrgStatInfo rtb_TmpSignalConversionAtRTE_RP;
  uint32_T rtb_DataTypeConversion1;
  uint32_T rtb_DataTypeConversion1_e0gz;
  uint16_T rtb_TmpSignalConversionAtR_dbds;
  uint16_T rtb_Switch;
  uint16_T rtb_Switch_p53t;
  uint8_T rtb_TmpSignalConversionAtR_lf0k;
  uint8_T rtb_TmpSignalConversionAtR_fhxm;
  uint8_T rtb_ChrMgmt_DchaAbortSOC_pct;
  uint8_T rtb_ChrMgmt_MonResCC2UDcErrDTC;
  uint8_T rtb_ChrMgmt_ErrStatCC2UDcErrDTC;
  uint8_T rtb_ChrMgmt_ChrgSts_Enum;
  uint8_T rtb_Switch1_eiji;
  uint8_T rtb_Switch8_nwof;
  uint8_T rtb_Switch8_erfa;
  uint8_T rtb_Switch8_b2v4;
  uint8_T rtb_Switch1_bkdw;
  uint8_T rtb_Switch2;
  uint8_T rtb_Delay;
  uint8_T rtb_Delay1;
  uint8_T rtb_Delay3;
  uint8_T rtb_Switch_nd4d;
  uint8_T rtb_Switch_ih5k;
  uint8_T rtb_Delay1_ipln;
  uint8_T rtb_Delay_gilt;
  uint8_T rtb_Switch8_fp2q;
  uint8_T rtb_Switch8_b3ia;
  uint8_T rtb_Switch_gqfl;
  uint8_T rtb_Switch_j0rz;
  boolean_T rtb_TmpSignalConversionAtR_dv1o;
  boolean_T rtb_ChrMgmt_DcChrgAllwd_Flg;
  boolean_T rtb_ChrMgmt_OBCEnaAllwd_Flg;
  boolean_T rtb_Switch6;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_True_gids;
  boolean_T rtb_Switch6_du20;
  boolean_T rtb_LogicalOperator_g5et;
  boolean_T rtb_LogicalOperator_kbp5;
  boolean_T rtb_DataTypeConversion_hncq;
  boolean_T rtb_LogicalOperator_ozng;
  boolean_T rtb_DataTypeConversion_fyk2;
  boolean_T rtb_Switch6_kxqx;
  boolean_T rtb_DataTypeConversion_awfo;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator_lvsx;
  boolean_T rtb_DataTypeConversion_igrz;
  boolean_T rtb_Switch6_a4bh;
  boolean_T rtb_LogicalOperator1_dsue;
  boolean_T rtb_LogicalOperator_ftgy;
  boolean_T rtb_LogicalOperator_khwh;
  boolean_T rtb_LogicalOperator_ocnv;
  boolean_T rtb_True_dtgp;
  boolean_T rtb_Switch6_hurk;
  boolean_T rtb_LogicalOperator_cnom;
  boolean_T rtb_RelationalOperator8;
  boolean_T rtb_LogicalOperator3_nitt;
  boolean_T rtb_RelationalOperator10;
  boolean_T rtb_RelationalOperator9;
  boolean_T rtb_LogicalOperator4_kpmp;
  boolean_T rtb_LogicalOperator5;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_LogicalOperator2_eriz;
  boolean_T rtb_LogicalOperator1_kd5j;
  boolean_T rtb_LogicalOperator_fz22;
  boolean_T rtb_LogicalOperator_c4yo;
  boolean_T rtb_LogicalOperator1_e51k;
  boolean_T rtb_RelationalOperator2_l5di;
  boolean_T rtb_RelationalOperator_jlxn;
  boolean_T rtb_LogicalOperator_h1si;
  boolean_T rtb_LogicalOperator1_j30t;
  boolean_T rtb_LogicalOperator2_d4pw;
  boolean_T rtb_LogicalOperator1_awho;
  boolean_T rtb_LogicalOperator4_ire5;
  boolean_T rtb_LogicalOperator1_cuqp;
  boolean_T rtb_LogicalOperator1_f0un;
  boolean_T rtb_RelationalOperator4_ol5m;
  boolean_T rtb_LogicalOperator1_fsxm;
  boolean_T rtb_LogicalOperator4_mncj;
  boolean_T rtb_LogicalOperator_dous;
  boolean_T rtb_LogicalOperator_g4q2;
  boolean_T rtb_LogicalOperator3_hcbn;
  boolean_T rtb_LogicalOperator1_d4am;
  boolean_T rtb_LogicalOperator2_gxzz;
  boolean_T rtb_LogicalOperator_mp5a;
  boolean_T rtb_LogicalOperator6_ov2m;
  boolean_T rtb_LogicalOperator4_a22b;
  boolean_T rtb_LogicalOperator1_cgrp;
  boolean_T rtb_LogicalOperator2_gk0s;
  boolean_T rtb_LogicalOperator_okvc;
  boolean_T rtb_LogicalOperator3_o0wf;
  boolean_T rtb_LogicalOperator1_jvtk;
  boolean_T rtb_RelationalOperator4_eszj;
  boolean_T rtb_LogicalOperator11;
  boolean_T rtb_RelationalOperator_ilth;
  boolean_T rtb_LogicalOperator1_euq4;
  boolean_T rtb_LogicalOperator3_ive3;
  boolean_T rtb_DataTypeConversion_p0ii;
  boolean_T rtb_RelationalOperator1_jdtt;
  boolean_T rtb_LogicalOperator_keoh;
  boolean_T rtb_LogicalOperator15;
  boolean_T rtb_LogicalOperator4_gg1g;
  boolean_T rtb_LogicalOperator11_awho;
  boolean_T rtb_LogicalOperator6_hwkd;
  boolean_T rtb_Switch_gjgv;
  boolean_T rtb_LogicalOperator3_esxm;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator8;
  boolean_T rtb_LogicalOperator15_gkxe;
  boolean_T rtb_LogicalOperator4_p1r2;
  boolean_T rtb_LogicalOperator11_iogs;
  boolean_T rtb_LogicalOperator2_jsuy;
  boolean_T rtb_Switch_lutr;
  boolean_T rtb_LogicalOperator3_fad3;
  boolean_T rtb_RelationalOperator_md0h;
  boolean_T rtb_LogicalOperator_dmrn;
  boolean_T rtb_LogicalOperator4_fzrc;
  boolean_T rtb_RelationalOperator13_d2hx;
  boolean_T rtb_LogicalOperator2_cdh3;
  boolean_T rtb_LogicalOperator_gnks;
  boolean_T rtb_RelationalOperator_fujh;
  boolean_T rtb_LogicalOperator_exe0;
  boolean_T rtb_RelationalOperator_bfoe;
  boolean_T rtb_RelationalOperator_jqtf;
  boolean_T rtb_LogicalOperator1_dkyg;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_LogicalOperator10_dckt;
  boolean_T rtb_LogicalOperator1_h2yv;
  boolean_T rtb_RelationalOperator15_hls3;
  boolean_T rtb_LogicalOperator8_hmby;
  boolean_T rtb_RelationalOperator5_ma11;
  boolean_T rtb_LogicalOperator12_cjen;
  boolean_T rtb_LogicalOperator11_prrx;
  boolean_T rtb_Switch_blxl;
  boolean_T rtb_LogicalOperator1_het5;
  boolean_T rtb_LogicalOperator1_o13x;
  boolean_T rtb_RelationalOperator15_ffl2;
  boolean_T rtb_LogicalOperator6_c0bt;
  boolean_T rtb_RelationalOperator2_gmrx;
  boolean_T rtb_LogicalOperator8_phdh;
  boolean_T rtb_LogicalOperator11_asue;
  boolean_T rtb_Switch_le5g;
  boolean_T rtb_LogicalOperator4_jrlb;
  boolean_T rtb_LogicalOperator5_iq3g;
  boolean_T rtb_LogicalOperator7_bc1n;
  boolean_T rtb_LogicalOperator_k5kz;
  boolean_T rtb_LogicalOperator1_hdrq;
  boolean_T rtb_LogicalOperator3_es2b;
  boolean_T rtb_LogicalOperator_mzsk;
  boolean_T rtb_LogicalOperator_cl3i;
  boolean_T rtb_B_MiHold;
  boolean_T rtb_LogicalOperator_nim5;
  boolean_T rtb_B_MiHold_ncd3;
  boolean_T rtb_B_MiHold_atek;
  boolean_T rtb_B_MiHold_fz3p;
  boolean_T rtb_Switch_dm1s;
  boolean_T rtb_RelationalOperator_osrn;
  boolean_T rtb_Switch_igl4;
  dt_ChrMgmt_AcPreheatUDcCtrlErr rtb_TmpSignalConversionAtR_ltls;
  dt_ChrMgmt_DcPreheatUDcCtrlErr tmpRead;
  dt_ChrMgmt_PreheatIRChkErr rtb_TmpSignalConversionAtR_cx5f;
  dt_ComM_EPTCANBusOffInfo rtb_TmpSignalConversionAtRTE_R_;
  dt_DCChrMgmt_DcPortTempErrLvl2 tmpRead_4;
  dt_DCChrMgmt_DcPortTempSnsrErr tmpRead_5;
  dt_DCChrMgmt_IRMeasDiErr tmpRead_6;
  dt_DCChrMgmt_IRMeasEnaErr tmpRead_7;
  dt_OBCMgmt_CPStsJmpErr tmpRead_b;
  dt_OBCMgmt_OBCChrgStsErr tmpRead_c;
  dt_OBCMgmt_OBCDchaStsErr tmpRead_d;
  dt_OBCMgmt_OBCDiErr tmpRead_e;
  dt_OBCMgmt_OBCInpUDcLoErr tmpRead_f;
  dt_OBCMgmt_OBCPreheatStsErr tmpRead_g;
  dt_OBCMgmt_S2SwtClsErr tmpRead_h;
  real32_T rtb_TmpSignalConversionAtR_cfs3;
  real32_T tmpRead_2;
  uint16_T tmpRead_0;
  uint8_T Delay_10_DSTATE;
  uint8_T Delay_12_DSTATE;
  uint8_T Delay_18_DSTATE;
  uint8_T Delay_19_DSTATE;
  uint8_T Delay_1_DSTATE;
  uint8_T Delay_20_DSTATE;
  uint8_T Delay_9_DSTATE;
  uint8_T rtb_TmpSignalConversionAtR_bbxu;
  uint8_T rtb_TmpSignalConversionAtR_cglx;
  uint8_T rtb_TmpSignalConversionAtR_cyj2;
  uint8_T rtb_TmpSignalConversionAtR_czpk;
  uint8_T rtb_TmpSignalConversionAtR_d3zf;
  uint8_T rtb_TmpSignalConversionAtR_da20;
  uint8_T rtb_TmpSignalConversionAtR_dgoi;
  uint8_T rtb_TmpSignalConversionAtR_e1zb;
  uint8_T rtb_TmpSignalConversionAtR_gb1h;
  uint8_T rtb_TmpSignalConversionAtR_hrah;
  uint8_T rtb_TmpSignalConversionAtR_i1wq;
  uint8_T rtb_TmpSignalConversionAtR_ifnz;
  uint8_T rtb_TmpSignalConversionAtR_ifvh;
  uint8_T rtb_TmpSignalConversionAtR_j520;
  uint8_T rtb_TmpSignalConversionAtR_jw4x;
  uint8_T rtb_TmpSignalConversionAtR_kfon;
  uint8_T rtb_TmpSignalConversionAtR_ljvg;
  uint8_T rtb_TmpSignalConversionAtR_lz0t;
  uint8_T rtb_TmpSignalConversionAtR_m4ee;
  uint8_T rtb_TmpSignalConversionAtR_nfug;
  uint8_T rtb_TmpSignalConversionAtR_nqpn;
  uint8_T rtb_TmpSignalConversionAtR_oak3;
  uint8_T rtb_TmpSignalConversionAtR_pjbk;
  uint8_T tmpRead_1;
  uint8_T tmpRead_3;
  uint8_T tmpRead_8;
  uint8_T tmpRead_9;
  uint8_T tmpRead_a;
  uint8_T tmpRead_i;
  boolean_T ChrMgmt_ACCmplStsErr_Flg_tmp;
  boolean_T ChrMgmt_ACCmplStsErr_Flg_tmp_tm;
  boolean_T Delay_2_DSTATE;
  boolean_T rtb_LogicalOperator3_aazt;
  boolean_T rtb_LogicalOperator3_es2b_tmp;
  boolean_T rtb_LogicalOperator3_es2b_tmp_0;
  boolean_T rtb_LogicalOperator4_aybt;
  boolean_T rtb_LogicalOperator4_p1r2_tmp;
  boolean_T rtb_LogicalOperator_gyaj;
  boolean_T rtb_TmpSignalConversionAtR_cdmk;
  boolean_T rtb_TmpSignalConversionAtR_cjff;
  boolean_T rtb_TmpSignalConversionAtR_d4fa;
  boolean_T rtb_TmpSignalConversionAtR_hpih;
  boolean_T rtb_TmpSignalConversionAtR_j3ke;
  boolean_T rtb_TmpSignalConversionAtR_jpoo;
  boolean_T rtb_TmpSignalConversionAtR_l1py;
  boolean_T rtb_TmpSignalConversionAtR_mnjr;
  boolean_T rtb_TmpSignalConversionAtR_n4nu;
  boolean_T rtb_TmpSignalConversionAtR_n4xx;
  boolean_T rtb_TmpSignalConversionAtR_oq4p;
  boolean_T rtb_TmpSignalConversionAtR_p4bp;
  boolean_T rtb_TmpSignalConversionAtUDS_Pw;

  /* SignalConversion generated from: '<Root>/RTE_RP_ChrgStatInfo_tec_ChrgStatInfo_read' incorporates:
   *  Inport: '<Root>/RTE_RP_ChrgStatInfo_tec_ChrgStatInfo_read'
   */
  (void)Rte_Read_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo
    (&rtb_TmpSignalConversionAtRTE_RP);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus'
   */
  (void)
    Rte_Read_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus
    (&rtb_TmpSignalConversionAtR_ltls);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus'
   */
  (void)
    Rte_Read_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus
    (&rtb_TmpSignalConversionAtR_cx5f);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
    (&rtb_TmpSignalConversionAtR_dgoi);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum
    (&rtb_TmpSignalConversionAtR_m4ee);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum
    (&rtb_TmpSignalConversionAtR_i1wq);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct'
   */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&rtb_TmpSignalConversionAtR_cfs3);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_nfug);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum
    (&rtb_TmpSignalConversionAtR_bbxu);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum
    (&rtb_TmpSignalConversionAtR_pjbk);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
    (&rtb_TmpSignalConversionAtR_hrah);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum
    (&rtb_TmpSignalConversionAtR_cglx);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum
    (&rtb_TmpSignalConversionAtR_da20);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct'
   */
  (void)Rte_Read_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct
    (&rtb_TmpSignalConversionAtR_lf0k);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum
    (&rtb_TmpSignalConversionAtR_fhxm);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_oq4p);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_l1py);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum
    (&rtb_TmpSignalConversionAtR_j520);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_gb1h);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
    (&rtb_TmpSignalConversionAtR_e1zb);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
    (&rtb_TmpSignalConversionAtR_ifnz);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
    (&rtb_TmpSignalConversionAtR_ljvg);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum
    (&rtb_TmpSignalConversionAtR_oak3);

  /* SignalConversion generated from: '<Root>/UDS_PwrCutRequest_PwrCutRequest' incorporates:
   *  Inport: '<Root>/UDS_PwrCutRequest_PwrCutRequest'
   */
  (void)Rte_Read_UDS_PwrCutRequest_PwrCutRequest
    (&rtb_TmpSignalConversionAtUDS_Pw);

  /* SignalConversion generated from: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
    (&rtb_TmpSignalConversionAtR_d3zf);

  /* SignalConversion generated from: '<Root>/RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg'
   */
  (void)Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
    (&rtb_TmpSignalConversionAtR_dv1o);

  /* SignalConversion generated from: '<Root>/RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg'
   */
  (void)Rte_Read_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg
    (&rtb_TmpSignalConversionAtR_jpoo);

  /* SignalConversion generated from: '<Root>/RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg'
   */
  (void)Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg
    (&rtb_TmpSignalConversionAtR_n4xx);

  /* SignalConversion generated from: '<Root>/RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg'
   */
  (void)Rte_Read_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg
    (&rtb_TmpSignalConversionAtR_hpih);

  /* SignalConversion generated from: '<Root>/RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg'
   */
  (void)Rte_Read_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg
    (&rtb_TmpSignalConversionAtR_n4nu);

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_TmpSignalConversionAtR_nqpn);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
    (&rtb_TmpSignalConversionAtR_ifvh);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
    (&rtb_TmpSignalConversionAtR_kfon);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg
    (&rtb_TmpSignalConversionAtR_j3ke);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
    (&rtb_TmpSignalConversionAtR_cyj2);

  /* SignalConversion generated from: '<Root>/RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV' incorporates:
   *  Inport: '<Root>/RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV'
   */
  (void)Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV
    (&rtb_TmpSignalConversionAtR_dbds);

  /* SignalConversion generated from: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_TmpSignalConversionAtR_mnjr);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_lz0t);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
    (&rtb_TmpSignalConversionAtR_d4fa);

  /* SignalConversion generated from: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_TmpSignalConversionAtR_cdmk);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct'
   */
  (void)Rte_Read_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct
    (&rtb_TmpSignalConversionAtR_czpk);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
    (&rtb_TmpSignalConversionAtR_p4bp);

  /* SignalConversion generated from: '<Root>/RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum'
   */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum
    (&rtb_TmpSignalConversionAtR_jw4x);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (&rtb_TmpSignalConversionAtR_cjff);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_DchaAbortSOC_pct = CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_MonResCC2UDcErrDTC = CtAp_ChrgStat_ARID_DEF.Delay_22_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_ErrStatCC2UDcErrDTC = CtAp_ChrgStat_ARID_DEF.Delay_23_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_DcChrgAllwd_Flg = CtAp_ChrgStat_ARID_DEF.Delay_7_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_OBCEnaAllwd_Flg = CtAp_ChrgStat_ARID_DEF.Delay_8_DSTATE;

  /* Delay generated from: '<S2>/Delay' */
  rtb_ChrMgmt_ChrgSts_Enum = CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_IVIMaxChrgSOC'
   *
   * Block requirements for '<S136>/ChrMgmt_IVIMaxChrgSOC':
   *  1. VCU_SW_Requirements_Specification.slreqx:1937
   *  2. VCU_SW_Requirements_Specification.slreqx:1938
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S143>/CAL'
   *  RelationalOperator: '<S143>/RelationalOperator2'
   */
  rtb_RelationalOperator_osrn = ((uint16_T)rtb_TmpSignalConversionAtR_lf0k >=
    ChrMgmt_ChrgSOCActvLowr_CFG);

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Constant: '<S143>/CAL1'
   *  RelationalOperator: '<S143>/RelationalOperator3'
   */
  rtb_B_MiHold_ncd3 = ((uint16_T)rtb_TmpSignalConversionAtR_lf0k <=
                       ChrMgmt_ChrgSOCActvUppr_CFG);

  /* Logic: '<S143>/LogicalOperator1'
   *
   * Block requirements for '<S143>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1937
   */
  rtb_LogicalOperator1_f0un = (rtb_RelationalOperator_osrn && rtb_B_MiHold_ncd3);

  /* Outputs for Atomic SubSystem: '<S143>/If'
   *
   * Block requirements for '<S143>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1938
   */
  /* Constant: '<S143>/Define14' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator1_f0un,
    rtb_TmpSignalConversionAtR_lf0k, ((uint8_T)ChrgStat_InitChrgValue));

  /* End of Outputs for SubSystem: '<S143>/If' */
  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_IVIMaxChrgSOC' */

  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_IVIMinDchaSOC'
   *
   * Block requirements for '<S136>/ChrMgmt_IVIMinDchaSOC':
   *  1. VCU_SW_Requirements_Specification.slreqx:1935
   *  2. VCU_SW_Requirements_Specification.slreqx:1945
   *  3. VCU_SW_Requirements_Specification.slreqx:1946
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S144>/CAL'
   *  RelationalOperator: '<S144>/RelationalOperator2'
   */
  rtb_RelationalOperator_osrn = ((uint16_T)rtb_TmpSignalConversionAtR_fhxm >=
    ChrMgmt_DchaSOCActvLowr_CFG);

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Constant: '<S144>/CAL1'
   *  RelationalOperator: '<S144>/RelationalOperator3'
   */
  rtb_B_MiHold_ncd3 = ((uint16_T)rtb_TmpSignalConversionAtR_fhxm <=
                       ChrMgmt_DchaSOCActvUppr_CFG);

  /* Logic: '<S144>/LogicalOperator1'
   *
   * Block requirements for '<S144>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1945
   */
  rtb_LogicalOperator1_cuqp = (rtb_RelationalOperator_osrn && rtb_B_MiHold_ncd3);

  /* Outputs for Atomic SubSystem: '<S144>/If'
   *
   * Block requirements for '<S144>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1946
   */
  /* Constant: '<S144>/Define14' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator1_cuqp,
    rtb_TmpSignalConversionAtR_fhxm, ((uint8_T)ChrgStat_InitDchaValue));

  /* End of Outputs for SubSystem: '<S144>/If' */
  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_IVIMinDchaSOC' */

  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S145>/Define'
   *  RelationalOperator: '<S145>/RelationalOperator'
   */
  rtb_RelationalOperator_osrn = (rtb_Switch_gqfl != ((uint8_T)
    ChrgStat_InitChrgValue));

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Delay: '<S145>/Delay'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_eenc;

  /* Logic: '<S145>/LogicalOperator3' incorporates:
   *  Delay: '<S145>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_eenc = (rtb_RelationalOperator_osrn ||
    rtb_B_MiHold_ncd3);

  /* Delay: '<S145>/Delay1' */
  rtb_Delay1 = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE;

  /* Switch: '<S145>/Switch' incorporates:
   *  Constant: '<S145>/CAL1'
   *  Delay: '<S145>/Delay'
   *  Delay: '<S145>/Delay1'
   *
   * Block requirements for '<S145>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   */
  if (rtb_RelationalOperator_osrn) {
    CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE = rtb_Switch_gqfl;
  } else {
    /* Logic: '<S145>/LogicalOperator1' incorporates:
     *  Constant: '<S145>/CAL'
     *  Constant: '<S145>/CAL1'
     *  RelationalOperator: '<S145>/RelationalOperator2'
     *  RelationalOperator: '<S145>/RelationalOperator3'
     */
    rtb_LogicalOperator1_awho = (((uint16_T)
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_ChrgTarSOC_pct <
      ChrMgmt_ChrgSOCActvLowr_CFG) || ((uint16_T)
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_ChrgTarSOC_pct >
      ChrMgmt_ChrgSOCActvUppr_CFG));

    /* Outputs for Atomic SubSystem: '<S145>/If1'
     *
     * Block requirements for '<S145>/If1':
     *  1. VCU_SW_Requirements_Specification.slreqx:1943
     */
    rtb_Switch = CtAp_ChrgStat_If3(rtb_LogicalOperator1_awho,
      ChrMgmt_ChrgSOCActvUppr_CFG,
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_ChrgTarSOC_pct);

    /* End of Outputs for SubSystem: '<S145>/If1' */

    /* Outputs for Atomic SubSystem: '<S145>/If'
     *
     * Block requirements for '<S145>/If':
     *  1. VCU_SW_Requirements_Specification.slreqx:1942
     */
    rtb_Switch_nd4d = CtAp_ChrgStat_If2(CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_eenc,
      rtb_Delay1, rtb_Switch);

    /* End of Outputs for SubSystem: '<S145>/If' */
    CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE = rtb_Switch_nd4d;
  }

  /* End of Switch: '<S145>/Switch' */

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S145>/Define3'
   *  RelationalOperator: '<S145>/RelationalOperator5'
   */
  rtb_RelationalOperator_osrn = (rtb_Switch_j0rz != ((uint8_T)
    ChrgStat_InitDchaValue));

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Delay: '<S145>/Delay2'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ARID_DEF.Delay2_DSTATE;

  /* Logic: '<S145>/LogicalOperator5' incorporates:
   *  Delay: '<S145>/Delay2'
   */
  CtAp_ChrgStat_ARID_DEF.Delay2_DSTATE = (rtb_RelationalOperator_osrn ||
    rtb_B_MiHold_ncd3);

  /* Delay: '<S145>/Delay3' */
  rtb_Delay3 = CtAp_ChrgStat_ARID_DEF.Delay3_DSTATE;

  /* Switch: '<S145>/Switch1' incorporates:
   *  Constant: '<S145>/CAL2'
   *  Delay: '<S145>/Delay2'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S145>/Switch1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1949
   */
  if (rtb_RelationalOperator_osrn) {
    CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE = rtb_Switch_j0rz;
  } else {
    /* Logic: '<S145>/LogicalOperator4' incorporates:
     *  Constant: '<S145>/CAL2'
     *  Constant: '<S145>/CAL3'
     *  RelationalOperator: '<S145>/RelationalOperator6'
     *  RelationalOperator: '<S145>/RelationalOperator7'
     */
    rtb_LogicalOperator4_ire5 = (((uint16_T)
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_DchaAbortSOC_pct >
      ChrMgmt_DchaSOCActvUppr_CFG) || ((uint16_T)
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_DchaAbortSOC_pct <
      ChrMgmt_DchaSOCActvLowr_CFG));

    /* Outputs for Atomic SubSystem: '<S145>/If3'
     *
     * Block requirements for '<S145>/If3':
     *  1. VCU_SW_Requirements_Specification.slreqx:1951
     */
    rtb_Switch_p53t = CtAp_ChrgStat_If3(rtb_LogicalOperator4_ire5,
      ChrMgmt_DchaSOCActvLowr_CFG,
      rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_DchaAbortSOC_pct);

    /* End of Outputs for SubSystem: '<S145>/If3' */

    /* Outputs for Atomic SubSystem: '<S145>/If2'
     *
     * Block requirements for '<S145>/If2':
     *  1. VCU_SW_Requirements_Specification.slreqx:1950
     */
    rtb_Switch_ih5k = CtAp_ChrgStat_If2(CtAp_ChrgStat_ARID_DEF.Delay2_DSTATE,
      rtb_Delay3, rtb_Switch_p53t);

    /* End of Outputs for SubSystem: '<S145>/If2' */
    CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE = rtb_Switch_ih5k;
  }

  /* End of Switch: '<S145>/Switch1' */
  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum
    (&tmpRead_i);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts' */
  (void)Rte_Read_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts
    (&rtb_LogicalOperator4_aybt);

  /* Inport: '<Root>/RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus
    (&tmpRead_h);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus' */
  (void)
    Rte_Read_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus
    (&tmpRead_g);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus
    (&tmpRead_d);

  /* Inport: '<Root>/RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus' */
  (void)Rte_Read_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum' */
  (void)Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus' */
  (void)Rte_Read_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus' */
  (void)Rte_Read_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus' */
  (void)
    Rte_Read_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus' */
  (void)
    Rte_Read_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum' */
  (void)Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min' */
  (void)Rte_Read_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus' */
  (void)
    Rte_Read_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* Update for Delay: '<S145>/Delay3' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay3_DSTATE = CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE;

  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */

  /* Outputs for Atomic SubSystem: '<S7>/AbortRsn'
   *
   * Block requirements for '<S7>/AbortRsn':
   *  1. VCU_SW_Requirements_Specification.slreqx:1960
   *  2. VCU_SW_Requirements_Specification.slreqx:1961
   *  3. VCU_SW_Requirements_Specification.slreqx:1962
   *  4. VCU_SW_Requirements_Specification.slreqx:1963
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S145>/Delay1'
   *  RelationalOperator: '<S133>/RelationalOperator3'
   */
  rtb_RelationalOperator_osrn = ((real32_T)CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE <=
    rtb_TmpSignalConversionAtR_cfs3);

  /* Logic: '<S133>/LogicalOperator' incorporates:
   *  Constant: '<S133>/Define'
   *  Constant: '<S133>/Define1'
   *  Constant: '<S133>/Define2'
   *  Logic: '<S133>/LogicalOperator1'
   *  RelationalOperator: '<S133>/RelationalOperator'
   *  RelationalOperator: '<S133>/RelationalOperator1'
   *  RelationalOperator: '<S133>/RelationalOperator2'
   *
   * Block requirements for '<S133>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1960
   */
  rtb_LogicalOperator_g4q2 = (((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ChargingFault)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ChargingComplete)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_KeepWarming))) && rtb_RelationalOperator_osrn);

  /* Outputs for Atomic SubSystem: '<S133>/If'
   *
   * Block requirements for '<S133>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1961
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S133>/Define3'
   *  Constant: '<S133>/Define4'
   */
  Delay_18_DSTATE = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator_g4q2, ((uint8_T)
    ChrgStat_ReachCutoffSOC), ((uint8_T)ChrgStat_NoDisplay));

  /* End of Outputs for SubSystem: '<S133>/If' */

  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  DataTypeConversion: '<S145>/Data Type Conversion'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S133>/RelationalOperator6'
   *
   * Block requirements for '<S145>/Data Type Conversion':
   *  1. VCU_SW_Requirements_Specification.slreqx:1952
   */
  rtb_RelationalOperator_osrn = (rtb_TmpSignalConversionAtR_cfs3 <= (real32_T)
    CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE);

  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */

  /* Logic: '<S133>/LogicalOperator3' incorporates:
   *  Constant: '<S133>/Define5'
   *  Constant: '<S133>/Define6'
   *  Logic: '<S133>/LogicalOperator2'
   *  RelationalOperator: '<S133>/RelationalOperator4'
   *  RelationalOperator: '<S133>/RelationalOperator5'
   */
  rtb_LogicalOperator3_hcbn = (rtb_RelationalOperator_osrn &&
    ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)ChrgStat_V2LComplete)) ||
     (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)ChrgStat_V2LFault))));

  /* Outputs for Atomic SubSystem: '<S133>/If1'
   *
   * Block requirements for '<S133>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1962
   *  2. VCU_SW_Requirements_Specification.slreqx:1963
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S133>/Define7'
   *  Constant: '<S133>/Define8'
   */
  Delay_19_DSTATE = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator3_hcbn, ((uint8_T)
    ChrgStat_ReachCutoffSOC), ((uint8_T)ChrgStat_NoDisplay));

  /* End of Outputs for SubSystem: '<S133>/If1' */
  /* End of Outputs for SubSystem: '<S7>/AbortRsn' */

  /* Outputs for Atomic SubSystem: '<S7>/ChrgProcCmt'
   *
   * Block requirements for '<S7>/ChrgProcCmt':
   *  1. VCU_SW_Requirements_Specification.slreqx:1980
   *  2. VCU_SW_Requirements_Specification.slreqx:1981
   */
  /* Logic: '<S134>/LogicalOperator' incorporates:
   *  Constant: '<S134>/Define'
   *  Constant: '<S134>/Define1'
   *  Constant: '<S134>/Define2'
   *  Constant: '<S134>/Define3'
   *  Constant: '<S134>/Define4'
   *  Logic: '<S134>/LogicalOperator1'
   *  RelationalOperator: '<S134>/RelationalOperator'
   *  RelationalOperator: '<S134>/RelationalOperator1'
   *  RelationalOperator: '<S134>/RelationalOperator2'
   *  RelationalOperator: '<S134>/RelationalOperator3'
   *  RelationalOperator: '<S134>/RelationalOperator4'
   *
   * Block requirements for '<S134>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1980
   */
  rtb_LogicalOperator_dous = (((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACCharging)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPreheating)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCPreheating)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCCharging))) && (tmpRead_8 == ((uint8_T)ChrgStat_FaultLevel2)));

  /* Outputs for Atomic SubSystem: '<S134>/If'
   *
   * Block requirements for '<S134>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1981
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S134>/Define5'
   *  Constant: '<S134>/Define6'
   */
  Delay_20_DSTATE = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator_dous, ((uint8_T)
    ChrgStat_ChargeFaultAndSlow), ((uint8_T)ChrgStat_NoComment));

  /* End of Outputs for SubSystem: '<S134>/If' */
  /* End of Outputs for SubSystem: '<S7>/ChrgProcCmt' */

  /* Outputs for Atomic SubSystem: '<S7>/MEMFLT'
   *
   * Block requirements for '<S7>/MEMFLT':
   *  1. VCU_SW_Requirements_Specification.slreqx:1953
   *  2. VCU_SW_Requirements_Specification.slreqx:1954
   *  3. VCU_SW_Requirements_Specification.slreqx:1955
   *  4. VCU_SW_Requirements_Specification.slreqx:1956
   *  5. VCU_SW_Requirements_Specification.slreqx:1957
   *  6. VCU_SW_Requirements_Specification.slreqx:1958
   */
  /* RelationalOperator: '<S135>/RelationalOperator4' incorporates:
   *  Constant: '<S135>/Define4'
   */
  rtb_RelationalOperator4_ol5m = (rtb_TmpSignalConversionAtR_ifnz == ((uint8_T)
    ChrgStat_LocalON));

  /* Outputs for Atomic SubSystem: '<S135>/ATOM_OnDelay' */
  /* Constant: '<S135>/CAL' incorporates:
   *  Constant: '<S135>/Define5'
   *  Constant: '<S135>/Define6'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ATOM_OnDelay
    (rtb_RelationalOperator4_ol5m, ChrMgmt_MemFltContnsTim_CFG, ((uint16_T)
      ChrgStat_dt), ((uint16_T)ChrgStat_U16Zero),
     &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_fqdq);

  /* End of Outputs for SubSystem: '<S135>/ATOM_OnDelay' */

  /* Logic: '<S135>/LogicalOperator1' incorporates:
   *  Constant: '<S135>/Define'
   *  Constant: '<S135>/Define1'
   *  Constant: '<S135>/Define2'
   *  Constant: '<S135>/Define3'
   *  Logic: '<S135>/LogicalOperator'
   *  RelationalOperator: '<S135>/RelationalOperator'
   *  RelationalOperator: '<S135>/RelationalOperator1'
   *  RelationalOperator: '<S135>/RelationalOperator2'
   *  RelationalOperator: '<S135>/RelationalOperator3'
   *
   * Block requirements for '<S135>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1955
   *
   * Block requirements for '<S135>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1954
   */
  rtb_LogicalOperator1_fsxm = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACCharging)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCCharging)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPreheating)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCPreheating)) || rtb_RelationalOperator_osrn);

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S135>/Define7'
   *  RelationalOperator: '<S135>/RelationalOperator5'
   *
   * Block requirements for '<S135>/RelationalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:1953
   *  2. VCU_SW_Requirements_Specification.slreqx:1956
   */
  rtb_RelationalOperator_osrn =
    (rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_ChrgMemFlt_Flg == ((uint8_T)
      ChrgStat_MemFlt));

  /* Logic: '<S135>/LogicalOperator4' incorporates:
   *  Constant: '<S135>/Define10'
   *  Constant: '<S135>/Define8'
   *  Logic: '<S135>/LogicalOperator6'
   *  RelationalOperator: '<S135>/RelationalOperator6'
   *  RelationalOperator: '<S135>/RelationalOperator8'
   *
   * Block requirements for '<S135>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:1957
   */
  rtb_LogicalOperator4_mncj = (((rtb_TmpSignalConversionAtR_ifnz == ((uint8_T)
    ChrgStat_OFFPOWERMODE)) && (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ChargingFault))) || rtb_RelationalOperator_osrn);

  /* Outputs for Atomic SubSystem: '<S135>/If2' */
  /* Constant: '<S135>/Define9' */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_If(rtb_LogicalOperator1_fsxm,
    ChrgStat_Inactive, rtb_LogicalOperator4_mncj);

  /* End of Outputs for SubSystem: '<S135>/If2' */

  /* Outputs for Atomic SubSystem: '<S135>/If1' */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S135>/Define11'
   *  Constant: '<S135>/Define12'
   */
  Delay_12_DSTATE = CtAp_ChrgStat_If_bdx1(rtb_RelationalOperator_osrn, ((uint8_T)
    ChrgStat_MemFlt), ((uint8_T)ChrgStat_NoMemFlt));

  /* End of Outputs for SubSystem: '<S135>/If1' */
  /* End of Outputs for SubSystem: '<S7>/MEMFLT' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_ACChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_ACChrgPreSts'
   *
   * Block requirements for '<S10>/ChrMgmt_ACChrgPreSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1982
   *  2. VCU_SW_Requirements_Specification.slreqx:1983
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S13>/RelationalOperator'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cfs3 < (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_V2LProcActv'
   *
   * Block requirements for '<S12>/ChrMgmt_V2LProcActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2017
   *  2. VCU_SW_Requirements_Specification.slreqx:2018
   */
  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_DCChrgProcActv'
   *
   * Block requirements for '<S11>/ChrMgmt_DCChrgProcActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2001
   *  2. VCU_SW_Requirements_Specification.slreqx:2002
   */
  /* Logic: '<S13>/LogicalOperator2' incorporates:
   *  Logic: '<S103>/LogicalOperator2'
   *  Logic: '<S70>/LogicalOperator2'
   */
  rtb_LogicalOperator3_es2b_tmp = !rtb_TmpSignalConversionAtUDS_Pw;

  /* Logic: '<S13>/LogicalOperator4' incorporates:
   *  Logic: '<S103>/LogicalOperator4'
   *  Logic: '<S70>/LogicalOperator4'
   */
  rtb_LogicalOperator3_es2b_tmp_0 = !rtb_TmpSignalConversionAtR_j3ke;

  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_DCChrgProcActv' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_V2LProcActv' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */

  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_ACChrgProcActv'
   *
   * Block requirements for '<S10>/ChrMgmt_ACChrgProcActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:1984
   *  2. VCU_SW_Requirements_Specification.slreqx:1985
   *  3. VCU_SW_Requirements_Specification.slreqx:1986
   *  4. VCU_SW_Requirements_Specification.slreqx:1987
   */
  /* Logic: '<S14>/LogicalOperator3' incorporates:
   *  Constant: '<S13>/CAL'
   *  Constant: '<S13>/Define1'
   *  Constant: '<S13>/Define2'
   *  Constant: '<S13>/Define3'
   *  Constant: '<S13>/Define4'
   *  Constant: '<S13>/Define5'
   *  Constant: '<S13>/Define6'
   *  Constant: '<S13>/Define7'
   *  Constant: '<S13>/Define8'
   *  Constant: '<S13>/Define9'
   *  Constant: '<S14>/Define'
   *  Constant: '<S14>/Define1'
   *  Constant: '<S14>/Define2'
   *  Constant: '<S14>/Define3'
   *  Logic: '<S13>/LogicalOperator'
   *  Logic: '<S13>/LogicalOperator1'
   *  Logic: '<S13>/LogicalOperator2'
   *  Logic: '<S13>/LogicalOperator3'
   *  Logic: '<S13>/LogicalOperator4'
   *  Logic: '<S14>/LogicalOperator'
   *  Logic: '<S14>/LogicalOperator1'
   *  Logic: '<S14>/LogicalOperator2'
   *  RelationalOperator: '<S13>/RelationalOperator1'
   *  RelationalOperator: '<S13>/RelationalOperator10'
   *  RelationalOperator: '<S13>/RelationalOperator2'
   *  RelationalOperator: '<S13>/RelationalOperator3'
   *  RelationalOperator: '<S13>/RelationalOperator4'
   *  RelationalOperator: '<S13>/RelationalOperator5'
   *  RelationalOperator: '<S13>/RelationalOperator6'
   *  RelationalOperator: '<S13>/RelationalOperator7'
   *  RelationalOperator: '<S13>/RelationalOperator8'
   *  RelationalOperator: '<S13>/RelationalOperator9'
   *  RelationalOperator: '<S14>/RelationalOperator'
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  RelationalOperator: '<S14>/RelationalOperator2'
   *  RelationalOperator: '<S14>/RelationalOperator3'
   *
   * Block requirements for '<S14>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:1984
   *
   * Block requirements for '<S13>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:1982
   *  2. VCU_SW_Requirements_Specification.slreqx:1983
   *
   * Block requirements for '<S14>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1986
   *
   * Block requirements for '<S14>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:1987
   *  2. VCU_SW_Requirements_Specification.slreqx:1988
   *  3. VCU_SW_Requirements_Specification.slreqx:1989
   *  4. VCU_SW_Requirements_Specification.slreqx:1990
   *
   * Block requirements for '<S14>/RelationalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1985
   */
  rtb_LogicalOperator3_es2b = (((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_1500Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_680Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_220Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_100Ohm))) && rtb_Switch_igl4 && rtb_TmpSignalConversionAtR_d4fa &&
    (rtb_TmpSignalConversionAtR_nqpn == ((uint8_T)ChrgStat_GearP)) &&
    (rtb_TmpSignalConversionAtR_oq4p == ChrgStat_passed) &&
    (rtb_TmpSignalConversionAtR_l1py == ChrgStat_passed) &&
    (rtb_TmpSignalConversionAtR_lz0t == ((uint8_T)ChrgStat_HvReady)) &&
    !rtb_TmpSignalConversionAtR_jpoo && (rtb_TmpSignalConversionAtR_dbds >=
    ChrMgmt_CC2ChkUDcNoConn_CFG) && (rtb_TmpSignalConversionAtR_e1zb ==
    ((uint8_T)ChrgStat_CP9VPWM)) && rtb_LogicalOperator3_es2b_tmp &&
    rtb_LogicalOperator3_es2b_tmp_0 && ((rtb_TmpSignalConversionAtR_m4ee ==
    ((uint8_T)ChrgStat_ChargeImmediately)) || ((rtb_TmpSignalConversionAtR_m4ee ==
    ((uint8_T)ChrgStat_ChargeAppointment)) && ((rtb_TmpSignalConversionAtR_cglx ==
    ((uint8_T)ChrgStat_ChargeOn)) || (rtb_TmpSignalConversionAtR_oak3 ==
    ((uint8_T)ChrgStat_ChargeOn))))));

  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_ACChrgProcActv' */
  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_ACChrgPreSts' */

  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_ACCmpl' */
  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACPlugAbNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACPlugAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1997
   */
  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplDCDCErr' */
  /* Logic: '<S50>/LogicalOperator1' incorporates:
   *  Constant: '<S50>/Define1'
   *  Constant: '<S50>/Define6'
   *  Constant: '<S50>/Define8'
   *  Constant: '<S50>/Define9'
   *  Constant: '<S57>/Constant'
   *  Logic: '<S50>/LogicalOperator2'
   *  Logic: '<S50>/LogicalOperator3'
   *  Logic: '<S50>/LogicalOperator4'
   *  RelationalOperator: '<S50>/RelationalOperator1'
   *  RelationalOperator: '<S50>/RelationalOperator12'
   *  RelationalOperator: '<S50>/RelationalOperator14'
   *  RelationalOperator: '<S50>/RelationalOperator15'
   *  RelationalOperator: '<S57>/Compare'
   */
  ChrMgmt_ACCmplDCDCErr_Flg = (((rtb_TmpSignalConversionAtR_kfon == ((uint8_T)
    ChrgStat_DCDCDisableFailed)) && (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatPreparing))) || ((rtb_TmpSignalConversionAtR_kfon ==
    ((uint8_T)ChrgStat_DCDCBuckFailed)) && ((rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatingPrepared)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatComplete)))));

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplDCDCErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplDTCErr' */
  /* Logic: '<S51>/LogicalOperator' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S51>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2000
   */
  ChrMgmt_ACCmplDTCErr_Flg =
    (rtb_TmpSignalConversionAtR_cx5f.ChrMgmt_ErrResPreheatIRChkErr ||
     rtb_TmpSignalConversionAtR_ltls.ChrMgmt_ErrResAcPreheatUDcCtrlErr ||
     tmpRead_c.OBCMgmt_ErrResOBCChrgStsErr ||
     tmpRead_g.OBCMgmt_ErrResOBCPreheatStsErr ||
     tmpRead_f.OBCMgmt_ErrResOBCInpUDcLoErr ||
     tmpRead_h.OBCMgmt_ErrResS2SwtClsErr || tmpRead_b.OBCMgmt_ErrResCPStsJmpErr ||
     CtAp_ChrgStat_ARID_DEF.Delay_32_DSTATE);

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplDTCErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplPlugErr' */
  /* Logic: '<S52>/LogicalOperator' incorporates:
   *  Constant: '<S52>/CAL'
   *  Constant: '<S52>/CAL1'
   *  Constant: '<S52>/Define2'
   *  Constant: '<S52>/Define3'
   *  Logic: '<S52>/LogicalOperator11'
   *  RelationalOperator: '<S52>/RelationalOperator1'
   *  RelationalOperator: '<S52>/RelationalOperator2'
   *  RelationalOperator: '<S52>/RelationalOperator3'
   *  RelationalOperator: '<S52>/RelationalOperator4'
   */
  ChrMgmt_ACCmplPlugErr_Flg = (((rtb_TmpSignalConversionAtR_dbds >
    ChrMgmt_CC2ChkActvUDcLowr_CFG) && (rtb_TmpSignalConversionAtR_dbds <
    ChrMgmt_CC2ChkActvUDcUppr_CFG)) || (rtb_TmpSignalConversionAtR_j520 ==
    ((uint8_T)ChrgStat_CC_2000Ohm)) || (rtb_TmpSignalConversionAtR_j520 ==
    ((uint8_T)ChrgStat_CC_2700Ohm)));

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplPlugErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplPrheatPosErr' */
  /* Logic: '<S53>/LogicalOperator1' incorporates:
   *  Constant: '<S53>/Define1'
   *  Constant: '<S53>/Define4'
   *  Constant: '<S53>/Define5'
   *  Logic: '<S53>/LogicalOperator'
   *  RelationalOperator: '<S53>/RelationalOperator1'
   *  RelationalOperator: '<S53>/RelationalOperator11'
   *  RelationalOperator: '<S53>/RelationalOperator5'
   */
  ChrMgmt_ACCmplPrheatPosErr_Flg = (((rtb_TmpSignalConversionAtR_jw4x ==
    ((uint8_T)ChrgStat_PreheatNegRlyClsFail)) ||
    (rtb_TmpSignalConversionAtR_ifvh == ((uint8_T)ChrgStat_PreheatPosRlyOpenFail)))
    && (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)ChrgStat_PreheatingPrepared)));

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplPrheatPosErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplStsErr' */
  /* Logic: '<S54>/LogicalOperator10' incorporates:
   *  Constant: '<S54>/Define'
   *  Constant: '<S54>/Define15'
   *  RelationalOperator: '<S54>/RelationalOperator'
   *  RelationalOperator: '<S54>/RelationalOperator21'
   */
  rtb_LogicalOperator10 = ((rtb_TmpSignalConversionAtR_nqpn != ((uint8_T)
    ChrgStat_GearP)) && (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPlugDetected)));

  /* Outputs for Atomic SubSystem: '<S54>/ATOM_OnDelay' */
  /* Constant: '<S54>/CAL2' incorporates:
   *  Constant: '<S54>/Define16'
   *  Constant: '<S54>/Define17'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator10,
    ChrMgmt_ACGearPWaitTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_guug);

  /* End of Outputs for SubSystem: '<S54>/ATOM_OnDelay' */

  /* Outputs for Atomic SubSystem: '<S54>/If' */
  /* Constant: '<S54>/Define1' incorporates:
   *  Constant: '<S54>/Define2'
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_Switch_dm1s, ChrgStat_Active,
    ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S54>/If' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
  /* Outputs for Atomic SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */
  /* Outputs for Atomic SubSystem: '<S104>/ChrMgmt_V2LCmplStsErr'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LCmplStsErr':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  /* Logic: '<S54>/LogicalOperator7' incorporates:
   *  Logic: '<S107>/LogicalOperator'
   */
  ChrMgmt_ACCmplStsErr_Flg_tmp_tm = !rtb_TmpSignalConversionAtR_d4fa;

  /* End of Outputs for SubSystem: '<S104>/ChrMgmt_V2LCmplStsErr' */
  /* End of Outputs for SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl'
   *
   * Block requirements for '<S71>/ChrMgmt_ChrgnDCAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2010
   *  2. VCU_SW_Requirements_Specification.slreqx:2011
   */
  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplStsErr' */
  /* Logic: '<S54>/LogicalOperator1' incorporates:
   *  Logic: '<S54>/LogicalOperator7'
   *  Logic: '<S84>/LogicalOperator6'
   */
  ChrMgmt_ACCmplStsErr_Flg_tmp = (ChrMgmt_ACCmplStsErr_Flg_tmp_tm &&
    rtb_TmpSignalConversionAtR_cjff);

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplStsErr' */
  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */

  /* Logic: '<S54>/LogicalOperator' incorporates:
   *  Constant: '<S54>/Define14'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S54>/LogicalOperator1'
   *  Logic: '<S54>/LogicalOperator2'
   *  RelationalOperator: '<S54>/RelationalOperator20'
   */
  ChrMgmt_ACCmplStsErr_Flg = (rtb_Switch_igl4 ||
    (rtb_TmpSignalConversionAtR_j3ke && CtAp_ChrgStat_ARID_DEF.Delay_6_DSTATE) ||
    rtb_TmpSignalConversionAtR_jpoo || (rtb_TmpSignalConversionAtR_ljvg ==
    ((uint8_T)ChrgStat_RelayError)) || ChrMgmt_ACCmplStsErr_Flg_tmp ||
    rtb_TmpSignalConversionAtR_oq4p || rtb_TmpSignalConversionAtR_l1py);

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplStsErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplTCUErr' */
  /* Logic: '<S55>/LogicalOperator' incorporates:
   *  Constant: '<S55>/Define1'
   *  Constant: '<S55>/Define10'
   *  Constant: '<S55>/Define12'
   *  Constant: '<S55>/Define13'
   *  Constant: '<S60>/Constant'
   *  Logic: '<S55>/LogicalOperator1'
   *  Logic: '<S55>/LogicalOperator4'
   *  Logic: '<S55>/LogicalOperator6'
   *  RelationalOperator: '<S55>/RelationalOperator1'
   *  RelationalOperator: '<S55>/RelationalOperator16'
   *  RelationalOperator: '<S55>/RelationalOperator18'
   *  RelationalOperator: '<S55>/RelationalOperator19'
   *  RelationalOperator: '<S60>/Compare'
   */
  ChrMgmt_ACCmplTCUErr_Flg = (((rtb_TmpSignalConversionAtR_cyj2 == ((uint8_T)
    ChrgStat_TCUDisableFailed)) && (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_PreheatPreparing))) || ((rtb_TmpSignalConversionAtR_cyj2 ==
    ((uint8_T)ChrgStat_TCUEnaFailed)) && ((rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatingPrepared)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatComplete)))));

  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACCmplTCUErr' */

  /* Outputs for Atomic SubSystem: '<S21>/ChrMgmt_ACPlugAbNormCmpl' */
  /* RelationalOperator: '<S56>/RelationalOperator' incorporates:
   *  Constant: '<S56>/Define'
   */
  rtb_RelationalOperator_jqtf = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPlugDetected));

  /* Logic: '<S56>/LogicalOperator1' */
  rtb_LogicalOperator1_dkyg = (ChrMgmt_ACCmplStsErr_Flg ||
    ChrMgmt_ACCmplDTCErr_Flg || ChrMgmt_ACCmplPlugErr_Flg ||
    ChrMgmt_ACCmplPrheatPosErr_Flg || ChrMgmt_ACCmplDCDCErr_Flg ||
    ChrMgmt_ACCmplTCUErr_Flg);

  /* Outputs for Atomic SubSystem: '<S56>/If' */
  /* Constant: '<S56>/Define1' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_RelationalOperator_jqtf,
    rtb_LogicalOperator1_dkyg, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S56>/If' */
  /* End of Outputs for SubSystem: '<S21>/ChrMgmt_ACPlugAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACPlugAbNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACPChrgnAbNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACPChrgnAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1998
   */
  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplDCDCErr' */
  /* RelationalOperator: '<S29>/RelationalOperator15' incorporates:
   *  Constant: '<S29>/Define9'
   */
  rtb_RelationalOperator15_ffl2 = (rtb_ChrMgmt_ChrgSts_Enum != ((uint8_T)
    ChrgStat_ACCharging));

  /* Outputs for Atomic SubSystem: '<S29>/If1' */
  /* Constant: '<S29>/Define4' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_RelationalOperator15_ffl2,
    rtb_TmpSignalConversionAtR_dv1o, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S29>/If1' */

  /* Logic: '<S29>/LogicalOperator6' incorporates:
   *  Constant: '<S29>/Define28'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Logic: '<S29>/LogicalOperator7'
   *  RelationalOperator: '<S29>/RelationalOperator30'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  rtb_LogicalOperator6_c0bt = ((rtb_Switch_dm1s ||
    (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_ACPreheatAndChargingPre)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_KeepwarmPreparing))) && (rtb_TmpSignalConversionAtR_kfon ==
    ((uint8_T)ChrgStat_DCDCDisableFailed)));

  /* RelationalOperator: '<S29>/RelationalOperator2' incorporates:
   *  Constant: '<S29>/Define2'
   */
  rtb_RelationalOperator2_gmrx = (rtb_ChrMgmt_ChrgSts_Enum != ((uint8_T)
    ChrgStat_ACCharging));

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplTCUErr' */
  /* Logic: '<S29>/LogicalOperator8' incorporates:
   *  Logic: '<S33>/LogicalOperator12'
   */
  rtb_LogicalOperator_gyaj = !rtb_TmpSignalConversionAtR_dv1o;

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplTCUErr' */

  /* Logic: '<S29>/LogicalOperator8' */
  rtb_LogicalOperator8_phdh = rtb_LogicalOperator_gyaj;

  /* Outputs for Atomic SubSystem: '<S29>/If2' */
  /* Constant: '<S29>/Define5' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_RelationalOperator2_gmrx,
    rtb_LogicalOperator8_phdh, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S29>/If2' */

  /* Logic: '<S29>/LogicalOperator11' incorporates:
   *  Constant: '<S29>/Define1'
   *  Constant: '<S37>/Constant'
   *  Logic: '<S29>/LogicalOperator10'
   *  RelationalOperator: '<S29>/RelationalOperator1'
   *  RelationalOperator: '<S37>/Compare'
   */
  rtb_LogicalOperator11_asue = ((rtb_TmpSignalConversionAtR_kfon == ((uint8_T)
    ChrgStat_DCDCBuckFailed)) && (rtb_Switch_dm1s ||
    (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)ChrgStat_PreheatKeepWarming))));

  /* Outputs for Atomic SubSystem: '<S29>/If' */
  /* Constant: '<S29>/Define3' */
  rtb_Switch_le5g = CtAp_ChrgStat_If(rtb_LogicalOperator6_c0bt, ChrgStat_Active,
    rtb_LogicalOperator11_asue);

  /* End of Outputs for SubSystem: '<S29>/If' */

  /* SignalConversion generated from: '<S29>/If' */
  ChrMgmt_ACChCmplDCDCErr_Flg = rtb_Switch_le5g;

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplDCDCErr' */

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplPlugStsErr' */
  /* Logic: '<S30>/LogicalOperator1' incorporates:
   *  Constant: '<S30>/Define17'
   *  Constant: '<S30>/Define4'
   *  RelationalOperator: '<S30>/RelationalOperator5'
   *  RelationalOperator: '<S30>/RelationalOperator9'
   */
  rtb_LogicalOperator1_o13x = ((rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CPFault)) || (rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CPUnecooect)));

  /* Outputs for Atomic SubSystem: '<S30>/ATOM_OnDelay1' */
  /* Constant: '<S30>/Define16' incorporates:
   *  Constant: '<S30>/Define18'
   *  Constant: '<S30>/Define5'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_o13x,
    ((uint16_T)ChrgStat_CPCheckTim), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_dham);

  /* End of Outputs for SubSystem: '<S30>/ATOM_OnDelay1' */

  /* Logic: '<S30>/LogicalOperator' incorporates:
   *  Constant: '<S30>/CAL'
   *  Constant: '<S30>/CAL1'
   *  Constant: '<S30>/Define1'
   *  Constant: '<S30>/Define2'
   *  Constant: '<S30>/Define20'
   *  Constant: '<S30>/Define21'
   *  Constant: '<S30>/Define3'
   *  Logic: '<S30>/LogicalOperator11'
   *  Logic: '<S30>/LogicalOperator12'
   *  Logic: '<S30>/LogicalOperator2'
   *  RelationalOperator: '<S30>/RelationalOperator1'
   *  RelationalOperator: '<S30>/RelationalOperator10'
   *  RelationalOperator: '<S30>/RelationalOperator2'
   *  RelationalOperator: '<S30>/RelationalOperator21'
   *  RelationalOperator: '<S30>/RelationalOperator3'
   *  RelationalOperator: '<S30>/RelationalOperator4'
   *  RelationalOperator: '<S30>/RelationalOperator6'
   */
  ChrMgmt_ACChCmplPlugStsErr_Flg = ((rtb_TmpSignalConversionAtR_hrah ==
    ((uint8_T)ChrgStat_Unlocked)) || (rtb_TmpSignalConversionAtR_hrah ==
    ((uint8_T)ChrgStat_EmlockErr)) || rtb_Switch_dm1s ||
    ((rtb_TmpSignalConversionAtR_dbds > ChrMgmt_CC2ChkActvUDcLowr_CFG) &&
     (rtb_TmpSignalConversionAtR_dbds < ChrMgmt_CC2ChkActvUDcUppr_CFG)) ||
    ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CCUnconnect)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_2000Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_2700Ohm))));

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplPlugStsErr' */

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplPosRlyErr' */
  /* Logic: '<S31>/LogicalOperator14' incorporates:
   *  Constant: '<S31>/Define1'
   *  Constant: '<S31>/Define25'
   *  Constant: '<S31>/Define26'
   *  Logic: '<S31>/LogicalOperator2'
   *  RelationalOperator: '<S31>/RelationalOperator1'
   *  RelationalOperator: '<S31>/RelationalOperator27'
   *  RelationalOperator: '<S31>/RelationalOperator28'
   */
  ChrMgmt_ACChCmplPosRlyErr_Flg = ((rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_KeepwarmPreparing)) && ((rtb_TmpSignalConversionAtR_ifvh ==
    ((uint8_T)ChrgStat_PreheatPosRlyOpenFail)) ||
    (rtb_TmpSignalConversionAtR_jw4x == ((uint8_T)ChrgStat_PreheatNegRlyClsFail))));

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplPosRlyErr' */

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplStsErr' */
  /* Logic: '<S32>/LogicalOperator1' incorporates:
   *  Constant: '<S32>/Define4'
   *  Constant: '<S32>/Define5'
   *  RelationalOperator: '<S32>/RelationalOperator2'
   *  RelationalOperator: '<S32>/RelationalOperator3'
   */
  rtb_LogicalOperator1_het5 = ((rtb_TmpSignalConversionAtR_czpk > ((uint8_T)
    ChrgStat_CPPwmUpper)) || (rtb_TmpSignalConversionAtR_czpk < ((uint8_T)
    ChrgStat_CPPwmLower)));

  /* Outputs for Atomic SubSystem: '<S32>/ATOM_OnDelay2' */
  /* Constant: '<S32>/Define8' incorporates:
   *  Constant: '<S32>/Define6'
   *  Constant: '<S32>/Define7'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_het5,
    ((uint16_T)ChrgStat_CPPwmTimeout), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_ldqo);

  /* End of Outputs for SubSystem: '<S32>/ATOM_OnDelay2' */

  /* Logic: '<S32>/LogicalOperator' incorporates:
   *  Constant: '<S32>/Define14'
   *  Constant: '<S32>/Define15'
   *  Constant: '<S32>/Define22'
   *  Constant: '<S32>/Define23'
   *  Constant: '<S32>/Define24'
   *  Logic: '<S32>/LogicalOperator13'
   *  Logic: '<S32>/LogicalOperator7'
   *  RelationalOperator: '<S32>/RelationalOperator1'
   *  RelationalOperator: '<S32>/RelationalOperator20'
   *  RelationalOperator: '<S32>/RelationalOperator21'
   *  RelationalOperator: '<S32>/RelationalOperator24'
   *  RelationalOperator: '<S32>/RelationalOperator25'
   *  RelationalOperator: '<S32>/RelationalOperator26'
   */
  ChrMgmt_ACChCmplStsErr_Flg = ((rtb_TmpSignalConversionAtR_nqpn != ((uint8_T)
    ChrgStat_GearP)) || rtb_TmpSignalConversionAtR_j3ke ||
    rtb_TmpSignalConversionAtR_jpoo || (rtb_TmpSignalConversionAtR_ljvg ==
    ((uint8_T)ChrgStat_RelayError)) || (rtb_TmpSignalConversionAtR_d4fa !=
    rtb_TmpSignalConversionAtR_cjff) || rtb_TmpSignalConversionAtR_oq4p ||
    rtb_TmpSignalConversionAtR_l1py || ((rtb_TmpSignalConversionAtR_nfug !=
    ((uint8_T)ChrgStat_ChargeAndAcHeat)) && (rtb_TmpSignalConversionAtR_lz0t ==
    ((uint8_T)ChrgStat_HvReady)) && (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_DuringPreheating))) || rtb_Switch_dm1s);

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplStsErr' */

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplTCUErr' */
  /* RelationalOperator: '<S33>/RelationalOperator15' incorporates:
   *  Constant: '<S33>/Define9'
   */
  rtb_RelationalOperator15_hls3 = (rtb_ChrMgmt_ChrgSts_Enum != ((uint8_T)
    ChrgStat_ACCharging));

  /* Outputs for Atomic SubSystem: '<S33>/If1' */
  /* Constant: '<S33>/Define1' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_RelationalOperator15_hls3,
    rtb_TmpSignalConversionAtR_dv1o, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S33>/If1' */

  /* Logic: '<S33>/LogicalOperator8' incorporates:
   *  Constant: '<S33>/Define28'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Logic: '<S33>/LogicalOperator9'
   *  RelationalOperator: '<S33>/RelationalOperator30'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   */
  rtb_LogicalOperator8_hmby = ((rtb_Switch_dm1s ||
    (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_ACPreheatAndChargingPre)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_KeepwarmPreparing))) && (rtb_TmpSignalConversionAtR_cyj2 ==
    ((uint8_T)ChrgStat_TCUDisableFailed)));

  /* RelationalOperator: '<S33>/RelationalOperator5' incorporates:
   *  Constant: '<S33>/Define5'
   */
  rtb_RelationalOperator5_ma11 = (rtb_ChrMgmt_ChrgSts_Enum != ((uint8_T)
    ChrgStat_ACCharging));

  /* Logic: '<S33>/LogicalOperator12' */
  rtb_LogicalOperator12_cjen = rtb_LogicalOperator_gyaj;

  /* Outputs for Atomic SubSystem: '<S33>/If2' */
  /* Constant: '<S33>/Define2' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_RelationalOperator5_ma11,
    rtb_LogicalOperator12_cjen, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S33>/If2' */

  /* Logic: '<S33>/LogicalOperator11' incorporates:
   *  Constant: '<S33>/Define4'
   *  Constant: '<S45>/Constant'
   *  Logic: '<S33>/LogicalOperator10'
   *  RelationalOperator: '<S33>/RelationalOperator4'
   *  RelationalOperator: '<S45>/Compare'
   */
  rtb_LogicalOperator11_prrx = ((rtb_TmpSignalConversionAtR_cyj2 == ((uint8_T)
    ChrgStat_TCUEnaFailed)) && (rtb_Switch_dm1s ||
    (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)ChrgStat_PreheatKeepWarming))));

  /* Outputs for Atomic SubSystem: '<S33>/If' */
  /* Constant: '<S33>/Define3' */
  rtb_Switch_blxl = CtAp_ChrgStat_If(rtb_LogicalOperator8_hmby, ChrgStat_Active,
    rtb_LogicalOperator11_prrx);

  /* End of Outputs for SubSystem: '<S33>/If' */

  /* SignalConversion generated from: '<S33>/If' */
  ChrMgmt_ACChCmplTCUErr_Flg = rtb_Switch_blxl;

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACCmplTCUErr' */

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACPChrgnAbNormCmpl' */
  /* Logic: '<S34>/LogicalOperator10' incorporates:
   *  Constant: '<S34>/Define'
   *  Constant: '<S34>/Define16'
   *  Constant: '<S34>/Define19'
   *  RelationalOperator: '<S34>/RelationalOperator'
   *  RelationalOperator: '<S34>/RelationalOperator7'
   *  RelationalOperator: '<S34>/RelationalOperator8'
   */
  rtb_LogicalOperator10_dckt = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACCharging)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPreheating)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_KeepWarming)));

  /* Outputs for Atomic SubSystem: '<S20>/ChrMgmt_ACChrgnCmplDTCErr' */
  /* Logic: '<S34>/LogicalOperator1' incorporates:
   *  Logic: '<S28>/LogicalOperator'
   */
  rtb_LogicalOperator1_h2yv = (ChrMgmt_ACChCmplStsErr_Flg ||
    ChrMgmt_ACChCmplPlugStsErr_Flg || ChrMgmt_ACChCmplPosRlyErr_Flg ||
    ChrMgmt_ACChCmplDCDCErr_Flg || ChrMgmt_ACChCmplTCUErr_Flg ||
    (rtb_TmpSignalConversionAtR_ltls.ChrMgmt_ErrResAcPreheatUDcCtrlErr ||
     tmpRead_e.OBCMgmt_ErrResOBCDiErr));

  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACChrgnCmplDTCErr' */

  /* Outputs for Atomic SubSystem: '<S34>/If' */
  /* Constant: '<S34>/Define1' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_LogicalOperator10_dckt,
    rtb_LogicalOperator1_h2yv, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S34>/If' */
  /* End of Outputs for SubSystem: '<S20>/ChrMgmt_ACPChrgnAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACPChrgnAbNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACAbNormCmpl' */
  /* Logic: '<S17>/LogicalOperator' */
  rtb_TmpSignalConversionAtR_jpoo = (rtb_Switch_igl4 || rtb_Switch_dm1s);

  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACAbNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACChrgnNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACChrgnNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1994
   */
  /* Logic: '<S18>/LogicalOperator4' incorporates:
   *  Constant: '<S18>/Define10'
   *  Constant: '<S18>/Define8'
   *  Constant: '<S18>/Define9'
   *  RelationalOperator: '<S18>/RelationalOperator10'
   *  RelationalOperator: '<S18>/RelationalOperator11'
   *  RelationalOperator: '<S18>/RelationalOperator12'
   */
  rtb_LogicalOperator4_jrlb = ((rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP9V)) || (rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP9VPWM)) || (rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP6V)));

  /* Outputs for Atomic SubSystem: '<S18>/ATOM_OnDelay' */
  /* Constant: '<S18>/Define13' incorporates:
   *  Constant: '<S18>/Define14'
   *  Constant: '<S18>/Define15'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator4_jrlb,
    ((uint16_T)ChrgStat_CPCheckTim), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_lxo5);

  /* End of Outputs for SubSystem: '<S18>/ATOM_OnDelay' */

  /* Logic: '<S18>/LogicalOperator5' incorporates:
   *  Constant: '<S18>/Standby'
   *  Constant: '<S18>/Standby1'
   *  RelationalOperator: '<S18>/RelationalOperator13'
   *  RelationalOperator: '<S18>/RelationalOperator14'
   */
  rtb_LogicalOperator5_iq3g = ((tmpRead_i == ((uint8_T)ChrgStat_OBCEnable)) &&
    (rtb_TmpSignalConversionAtR_gb1h == ((uint8_T)ChrgStat_Standby)));

  /* Outputs for Atomic SubSystem: '<S18>/ATOM_OnDelay1' */
  /* Constant: '<S18>/Define16' incorporates:
   *  Constant: '<S18>/Define17'
   *  Constant: '<S18>/Define18'
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator5_iq3g,
    ((uint16_T)ChrgStat_OBCCStsheckTim), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_dype);

  /* End of Outputs for SubSystem: '<S18>/ATOM_OnDelay1' */

  /* Logic: '<S18>/LogicalOperator7' */
  rtb_LogicalOperator7_bc1n = (rtb_Switch_igl4 || rtb_Switch_dm1s);

  /* Outputs for Atomic SubSystem: '<S18>/If1' */
  /* Constant: '<S18>/Define19' incorporates:
   *  Constant: '<S18>/Define20'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_LogicalOperator7_bc1n, ChrgStat_Active,
    ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S18>/If1' */

  /* Switch: '<S109>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S18>/RelationalOperator4'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cfs3 >= (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Switch: '<S118>/Switch' incorporates:
   *  Delay: '<S18>/Delay'
   */
  rtb_Switch_j0rz = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_c3kl;

  /* Logic: '<S18>/LogicalOperator' incorporates:
   *  Constant: '<S18>/Define1'
   *  Constant: '<S18>/Define11'
   *  Constant: '<S18>/Define2'
   *  Constant: '<S18>/Define3'
   *  Constant: '<S18>/Define4'
   *  Constant: '<S18>/Define6'
   *  Constant: '<S18>/Define7'
   *  Logic: '<S18>/LogicalOperator2'
   *  Logic: '<S18>/LogicalOperator3'
   *  Logic: '<S18>/LogicalOperator6'
   *  RelationalOperator: '<S18>/RelationalOperator1'
   *  RelationalOperator: '<S18>/RelationalOperator2'
   *  RelationalOperator: '<S18>/RelationalOperator3'
   *  RelationalOperator: '<S18>/RelationalOperator5'
   *  RelationalOperator: '<S18>/RelationalOperator7'
   *  RelationalOperator: '<S18>/RelationalOperator8'
   *  RelationalOperator: '<S18>/RelationalOperator9'
   */
  rtb_LogicalOperator_k5kz = ((rtb_Switch_igl4 &&
    ((rtb_TmpSignalConversionAtR_bbxu == ((uint8_T)ChrgStat_NoReq)) ||
     (rtb_TmpSignalConversionAtR_pjbk != ((uint8_T)ChrgStat_WarmOn)))) ||
    (rtb_TmpSignalConversionAtR_cglx == ((uint8_T)ChrgStat_ChargeOff)) ||
    (rtb_TmpSignalConversionAtR_oak3 == ((uint8_T)ChrgStat_ChargeOff)) ||
    ((rtb_TmpSignalConversionAtR_m4ee == ((uint8_T)ChrgStat_ChargeAppointment)) &&
     (rtb_Switch_j0rz == ((uint8_T)ChrgStat_ChargeImmediately))) ||
    (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_HalfConnect)) ||
    rtb_TmpSignalConversionAtUDS_Pw || rtb_Switch_dm1s);

  /* Logic: '<S18>/LogicalOperator1' incorporates:
   *  Constant: '<S18>/Define'
   *  Constant: '<S18>/Define5'
   *  RelationalOperator: '<S18>/RelationalOperator'
   *  RelationalOperator: '<S18>/RelationalOperator6'
   */
  rtb_LogicalOperator1_hdrq = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPreheating)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACCharging)));

  /* Outputs for Atomic SubSystem: '<S18>/If' */
  /* Constant: '<S18>/Define12' */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_If(rtb_LogicalOperator1_hdrq,
    rtb_LogicalOperator_k5kz, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S18>/If' */

  /* Update for Delay: '<S18>/Delay' */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_c3kl = rtb_TmpSignalConversionAtR_m4ee;

  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACChrgnNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACPlugNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACPlugNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1993
   */
  /* Switch: '<S118>/Switch' incorporates:
   *  Delay: '<S22>/Delay1'
   */
  rtb_Switch_j0rz = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_f5jc;

  /* Switch: '<S109>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S22>/RelationalOperator4'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cfs3 >= (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  Constant: '<S22>/Define1'
   *  Constant: '<S22>/Define2'
   *  Constant: '<S22>/Define4'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S63>/Constant'
   *  Logic: '<S22>/LogicalOperator1'
   *  RelationalOperator: '<S22>/RelationalOperator1'
   *  RelationalOperator: '<S22>/RelationalOperator2'
   *  RelationalOperator: '<S22>/RelationalOperator5'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   */
  rtb_LogicalOperator_exe0 = (rtb_TmpSignalConversionAtUDS_Pw ||
    (rtb_TmpSignalConversionAtR_cglx == ((uint8_T)ChrgStat_ChargeOff)) ||
    (rtb_TmpSignalConversionAtR_oak3 == ((uint8_T)ChrgStat_ChargeOff)) ||
    ((rtb_TmpSignalConversionAtR_m4ee == ((uint8_T)ChrgStat_ChargeAppointment)) &&
     (rtb_Switch_j0rz == ((uint8_T)ChrgStat_ChargeImmediately))) ||
    rtb_Switch_igl4 || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_HalfConnect)));

  /* RelationalOperator: '<S22>/RelationalOperator' incorporates:
   *  Constant: '<S22>/Define'
   */
  rtb_RelationalOperator_bfoe = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPlugDetected));

  /* Outputs for Atomic SubSystem: '<S22>/If' */
  /* Constant: '<S22>/Define5' */
  rtb_B_MiHold_atek = CtAp_ChrgStat_If(rtb_RelationalOperator_bfoe,
    rtb_LogicalOperator_exe0, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S22>/If' */

  /* Update for Delay: '<S22>/Delay1' */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_f5jc = rtb_TmpSignalConversionAtR_m4ee;

  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACPlugNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACWarmNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACWarmNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1995
   */
  /* Logic: '<S23>/LogicalOperator4' incorporates:
   *  Constant: '<S23>/Define10'
   *  Constant: '<S23>/Define8'
   *  Constant: '<S23>/Define9'
   *  RelationalOperator: '<S23>/RelationalOperator10'
   *  RelationalOperator: '<S23>/RelationalOperator11'
   *  RelationalOperator: '<S23>/RelationalOperator12'
   */
  rtb_LogicalOperator4_fzrc = ((rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP9V)) || (rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP9VPWM)) || (rtb_TmpSignalConversionAtR_e1zb == ((uint8_T)
    ChrgStat_CP6V)));

  /* Outputs for Atomic SubSystem: '<S23>/ATOM_OnDelay' */
  /* Constant: '<S23>/Define13' incorporates:
   *  Constant: '<S23>/Define14'
   *  Constant: '<S23>/Define15'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator4_fzrc,
    ((uint16_T)ChrgStat_CPCheckTim), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_dhmr);

  /* End of Outputs for SubSystem: '<S23>/ATOM_OnDelay' */

  /* RelationalOperator: '<S23>/RelationalOperator13' incorporates:
   *  Constant: '<S23>/Standby'
   */
  rtb_RelationalOperator13_d2hx = (rtb_TmpSignalConversionAtR_gb1h == ((uint8_T)
    ChrgStat_Standby));

  /* Outputs for Atomic SubSystem: '<S23>/ATOM_OnDelay1' */
  /* Constant: '<S23>/Define16' incorporates:
   *  Constant: '<S23>/Define17'
   *  Constant: '<S23>/Define18'
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_ATOM_OnDelay(rtb_RelationalOperator13_d2hx,
    ((uint16_T)ChrgStat_OBCCStsheckTim), ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_jwzv);

  /* End of Outputs for SubSystem: '<S23>/ATOM_OnDelay1' */

  /* Logic: '<S23>/LogicalOperator2' */
  rtb_LogicalOperator2_cdh3 = (rtb_Switch_dm1s || rtb_Switch_igl4);

  /* Outputs for Atomic SubSystem: '<S23>/If1' */
  /* Constant: '<S23>/Define19' incorporates:
   *  Constant: '<S23>/Define20'
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_LogicalOperator2_cdh3, ChrgStat_Active,
    ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S23>/If1' */

  /* Switch: '<S118>/Switch' incorporates:
   *  Delay: '<S23>/Delay'
   */
  rtb_Switch_j0rz = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_pzph;

  /* Logic: '<S23>/LogicalOperator' incorporates:
   *  Constant: '<S23>/CAL'
   *  Constant: '<S23>/Define1'
   *  Constant: '<S23>/Define2'
   *  Constant: '<S23>/Define6'
   *  Logic: '<S23>/LogicalOperator1'
   *  RelationalOperator: '<S23>/RelationalOperator1'
   *  RelationalOperator: '<S23>/RelationalOperator2'
   *  RelationalOperator: '<S23>/RelationalOperator3'
   *  RelationalOperator: '<S23>/RelationalOperator4'
   *  RelationalOperator: '<S23>/RelationalOperator8'
   */
  rtb_LogicalOperator_gnks = (rtb_TmpSignalConversionAtUDS_Pw ||
    (rtb_TmpSignalConversionAtR_pjbk == ((uint8_T)ChrgStat_WarmOff)) ||
    (tmpRead_0 >= ChrMgmt_KeepWrmTimAllow_CFG) ||
    ((rtb_TmpSignalConversionAtR_i1wq == ((uint8_T)ChrgStat_DISARMED)) &&
     (rtb_Switch_j0rz != rtb_TmpSignalConversionAtR_i1wq)) ||
    (rtb_TmpSignalConversionAtR_bbxu == ((uint8_T)ChrgStat_NoReq)) ||
    rtb_Switch_igl4);

  /* RelationalOperator: '<S23>/RelationalOperator' incorporates:
   *  Constant: '<S23>/Define'
   */
  rtb_RelationalOperator_fujh = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_KeepWarming));

  /* Outputs for Atomic SubSystem: '<S23>/If' */
  /* Constant: '<S23>/Define3' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_RelationalOperator_fujh,
    rtb_LogicalOperator_gnks, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S23>/If' */

  /* Update for Delay: '<S23>/Delay' */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_pzph = rtb_TmpSignalConversionAtR_i1wq;

  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACWarmNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S15>/ChrMgmt_ACNormCmpl' */
  /* Logic: '<S19>/LogicalOperator'
   *
   * Block requirements for '<S19>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1996
   */
  rtb_LogicalOperator_gyaj = (rtb_B_MiHold_atek || rtb_RelationalOperator_osrn ||
    rtb_Switch_igl4);

  /* End of Outputs for SubSystem: '<S15>/ChrMgmt_ACNormCmpl' */
  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_ACCmpl' */

  /* Outputs for Atomic SubSystem: '<S10>/ChrMgmt_KeepWrm'
   *
   * Block requirements for '<S10>/ChrMgmt_KeepWrm':
   *  1. VCU_SW_Requirements_Specification.slreqx:1991
   *  2. VCU_SW_Requirements_Specification.slreqx:1992
   */
  /* RelationalOperator: '<S16>/RelationalOperator' incorporates:
   *  Constant: '<S16>/Define'
   */
  rtb_RelationalOperator_md0h = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACCharging));

  /* Switch: '<S109>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cfs3 >= (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/Define1'
   *  Constant: '<S16>/Define2'
   *  Constant: '<S16>/Define3'
   *  RelationalOperator: '<S16>/RelationalOperator2'
   *  RelationalOperator: '<S16>/RelationalOperator3'
   *  RelationalOperator: '<S16>/RelationalOperator4'
   *
   * Block requirements for '<S16>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:1991
   *  2. VCU_SW_Requirements_Specification.slreqx:1992
   */
  rtb_LogicalOperator_dmrn = (rtb_Switch_igl4 && (tmpRead_1 == ((uint8_T)
    ChrgStat_NormalCompletion)) && (rtb_TmpSignalConversionAtR_pjbk == ((uint8_T)
    ChrgStat_WarmOn)) && (rtb_TmpSignalConversionAtR_bbxu == ((uint8_T)
    ChrgStat_WarmReq)));

  /* Outputs for Atomic SubSystem: '<S16>/If' */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S16>/Define4'
   */
  Delay_2_DSTATE = CtAp_ChrgStat_If(rtb_RelationalOperator_md0h,
    rtb_LogicalOperator_dmrn, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S16>/If' */
  /* End of Outputs for SubSystem: '<S10>/ChrMgmt_KeepWrm' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_ACChrgStsManage' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_DCChrgProcActv'
   *
   * Block requirements for '<S11>/ChrMgmt_DCChrgProcActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2001
   *  2. VCU_SW_Requirements_Specification.slreqx:2002
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S70>/RelationalOperator'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cfs3 < (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Logic: '<S70>/LogicalOperator3' incorporates:
   *  Constant: '<S70>/CAL'
   *  Constant: '<S70>/CAL1'
   *  Constant: '<S70>/Define1'
   *  Constant: '<S70>/Define2'
   *  Constant: '<S70>/Define3'
   *  Constant: '<S70>/Define4'
   *  Constant: '<S70>/Define5'
   *  Constant: '<S72>/Constant'
   *  Logic: '<S70>/LogicalOperator'
   *  Logic: '<S70>/LogicalOperator1'
   *  RelationalOperator: '<S70>/RelationalOperator1'
   *  RelationalOperator: '<S70>/RelationalOperator11'
   *  RelationalOperator: '<S70>/RelationalOperator2'
   *  RelationalOperator: '<S70>/RelationalOperator3'
   *  RelationalOperator: '<S70>/RelationalOperator7'
   *  RelationalOperator: '<S70>/RelationalOperator8'
   *  RelationalOperator: '<S70>/RelationalOperator9'
   *  RelationalOperator: '<S72>/Compare'
   *
   * Block requirements for '<S70>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2001
   *  2. VCU_SW_Requirements_Specification.slreqx:2002
   */
  rtb_LogicalOperator3_aazt = (rtb_Switch_igl4 &&
    (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CCUnconnect)) &&
    rtb_TmpSignalConversionAtR_d4fa && (rtb_TmpSignalConversionAtR_nqpn ==
    ((uint8_T)ChrgStat_GearP)) && (rtb_TmpSignalConversionAtR_oq4p ==
    ChrgStat_passed) && (rtb_TmpSignalConversionAtR_l1py == ChrgStat_passed) &&
    (rtb_TmpSignalConversionAtR_lz0t == ((uint8_T)ChrgStat_HvReady)) &&
    !rtb_TmpSignalConversionAtR_hpih && ((rtb_TmpSignalConversionAtR_dbds <=
    ChrMgmt_CC2ChkActvUDcUppr_CFG) && (rtb_TmpSignalConversionAtR_dbds >=
    ChrMgmt_CC2ChkActvUDcLowr_CFG)) && rtb_LogicalOperator3_es2b_tmp &&
    (rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)ChrgStat_Init)) &&
    rtb_LogicalOperator3_es2b_tmp_0);

  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_DCChrgProcActv' */

  /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_DCChrgFlwActv'
   *
   * Block requirements for '<S71>/ChrMgmt_DCChrgFlwActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2003
   *  2. VCU_SW_Requirements_Specification.slreqx:2004
   *  3. VCU_SW_Requirements_Specification.slreqx:2005
   *  4. VCU_SW_Requirements_Specification.slreqx:2006
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Delay: '<S75>/Delay'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi;

  /* DataTypeConversion: '<S75>/DataTypeConversion' */
  rtb_DataTypeConversion_p0ii = rtb_Switch_igl4;

  /* RelationalOperator: '<S75>/RelationalOperator1' incorporates:
   *  Constant: '<S75>/Define2'
   *
   * Block requirements for '<S75>/RelationalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2004
   */
  rtb_RelationalOperator1_jdtt = (rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)
    ChrgStat_Handshake));

  /* Outputs for Atomic SubSystem: '<S75>/If1' */
  /* Constant: '<S75>/Define3' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_RelationalOperator1_jdtt,
    ChrgStat_Active, rtb_DataTypeConversion_p0ii);

  /* End of Outputs for SubSystem: '<S75>/If1' */

  /* Logic: '<S75>/LogicalOperator' incorporates:
   *  Constant: '<S75>/Define'
   *  Constant: '<S75>/Define4'
   *  Constant: '<S75>/Define5'
   *  RelationalOperator: '<S75>/RelationalOperator'
   *  RelationalOperator: '<S75>/RelationalOperator2'
   *  RelationalOperator: '<S75>/RelationalOperator3'
   *
   * Block requirements for '<S75>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2005
   *
   * Block requirements for '<S75>/RelationalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2003
   */
  rtb_LogicalOperator_keoh = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ChargingComplete)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_CharingFault)) || (rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)
    ChrgStat_Init)));

  /* Outputs for Atomic SubSystem: '<S75>/If' */
  /* Delay: '<S75>/Delay' incorporates:
   *  Constant: '<S75>/Define1'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi = CtAp_ChrgStat_If
    (rtb_LogicalOperator_keoh, ChrgStat_Inactive, rtb_Switch_igl4);

  /* End of Outputs for SubSystem: '<S75>/If' */
  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_DCChrgFlwActv' */

  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl'
   *
   * Block requirements for '<S71>/ChrMgmt_ChrgnDCAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2010
   *  2. VCU_SW_Requirements_Specification.slreqx:2011
   */
  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */
  /* Logic: '<S82>/LogicalOperator3' incorporates:
   *  Constant: '<S82>/CAL'
   *  Constant: '<S82>/CAL1'
   *  RelationalOperator: '<S82>/RelationalOperator8'
   *  RelationalOperator: '<S82>/RelationalOperator9'
   */
  rtb_LogicalOperator3_esxm = ((rtb_TmpSignalConversionAtR_dbds >
    ChrMgmt_CC2ChkActvUDcUppr_CFG) || (rtb_TmpSignalConversionAtR_dbds <
    ChrMgmt_CC2ChkActvUDcLowr_CFG));

  /* Outputs for Atomic SubSystem: '<S82>/ATOM_OnDelay' */
  /* Constant: '<S82>/CAL2' incorporates:
   *  Constant: '<S82>/Define12'
   *  Constant: '<S82>/Define13'
   */
  rtb_B_MiHold_atek = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator3_esxm,
    ChrMgmt_CC2ChkInvldCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_llw0);

  /* End of Outputs for SubSystem: '<S82>/ATOM_OnDelay' */
  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplDTCErr' */
  /* Logic: '<S81>/LogicalOperator7' incorporates:
   *  Constant: '<S81>/Define14'
   *  Constant: '<S81>/Define15'
   *  RelationalOperator: '<S81>/RelationalOperator10'
   *  RelationalOperator: '<S81>/RelationalOperator11'
   */
  rtb_LogicalOperator7 = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCCharging)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_DCPreheating)));

  /* Logic: '<S81>/LogicalOperator8' */
  rtb_LogicalOperator8 = (tmpRead_4.DCChrMgmt_ErrResDcPortTempErrLvl2 ||
    tmpRead_5.DCChrMgmt_ErrResDcPortTempSnsrErr);

  /* Outputs for Atomic SubSystem: '<S81>/If' */
  /* Constant: '<S81>/Define1' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_LogicalOperator7, rtb_LogicalOperator8,
    ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S81>/If' */

  /* Logic: '<S81>/LogicalOperator1' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S81>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2009
   */
  ChrMgmt_DCCmplDTCErr_Flg = (rtb_Switch_igl4 ||
    rtb_TmpSignalConversionAtR_cx5f.ChrMgmt_ErrResPreheatIRChkErr ||
    tmpRead.ChrMgmt_ErrResDcPreheatUDcCtrlErr ||
    tmpRead_7.DCChrMgmt_ErrResIRMeasEnaErr ||
    tmpRead_6.DCChrMgmt_ErrResIRMeasDiErr ||
    CtAp_ChrgStat_ARID_DEF.Delay_32_DSTATE);

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplDTCErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplRlyErr' */
  /* Switch: '<S109>/Switch' incorporates:
   *  Constant: '<S83>/Define2'
   *  RelationalOperator: '<S83>/RelationalOperator2'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_jw4x == ((uint8_T)
    ChrgStat_PreheatNegRlyClsFail));

  /* Logic: '<S83>/LogicalOperator' incorporates:
   *  Constant: '<S83>/Define1'
   *  Constant: '<S83>/Define17'
   *  Constant: '<S83>/Define18'
   *  Constant: '<S83>/Define19'
   *  Constant: '<S83>/Define20'
   *  Logic: '<S83>/LogicalOperator1'
   *  Logic: '<S83>/LogicalOperator12'
   *  Logic: '<S83>/LogicalOperator13'
   *  Logic: '<S83>/LogicalOperator2'
   *  RelationalOperator: '<S83>/RelationalOperator1'
   *  RelationalOperator: '<S83>/RelationalOperator17'
   *  RelationalOperator: '<S83>/RelationalOperator18'
   *  RelationalOperator: '<S83>/RelationalOperator19'
   *  RelationalOperator: '<S83>/RelationalOperator20'
   */
  ChrMgmt_DCCmplRlyErr_Flg = ((tmpRead_9 == ((uint8_T)ChrgStat_PosRlyClsFail)) ||
    ((rtb_Switch_igl4 || (rtb_TmpSignalConversionAtR_ifvh == ((uint8_T)
    ChrgStat_PosRlyClsFail))) && (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_DCPreheatAndChrgnPrepd))) || ((rtb_Switch_igl4 ||
    (rtb_TmpSignalConversionAtR_ifvh == ((uint8_T)ChrgStat_PreheatPosRlyOpenFail)))
    && (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)ChrgStat_PreheatingPrepared))));

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplRlyErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplDCDCErr' */
  /* Switch: '<S109>/Switch' incorporates:
   *  Constant: '<S80>/Define27'
   *  RelationalOperator: '<S80>/RelationalOperator29'
   */
  rtb_Switch_igl4 = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)ChrgStat_DCPreheating));

  /* Logic: '<S80>/LogicalOperator15' incorporates:
   *  Constant: '<S80>/Define28'
   *  Constant: '<S87>/Constant'
   *  Logic: '<S80>/LogicalOperator'
   *  RelationalOperator: '<S80>/RelationalOperator30'
   *  RelationalOperator: '<S87>/Compare'
   */
  rtb_LogicalOperator15_gkxe = (rtb_Switch_igl4 &&
    (rtb_TmpSignalConversionAtR_kfon == ((uint8_T)ChrgStat_DCDCDisableFailed)) &&
    ((rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgPreHeat_DCPreheatAndChargingPre)) || rtb_TmpSignalConversionAtR_n4xx));

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplTCUErr' */
  /* Logic: '<S80>/LogicalOperator9' incorporates:
   *  Logic: '<S85>/LogicalOperator9'
   */
  rtb_LogicalOperator4_p1r2_tmp = !rtb_TmpSignalConversionAtR_n4xx;

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplTCUErr' */

  /* Logic: '<S80>/LogicalOperator4' incorporates:
   *  Constant: '<S80>/Define7'
   *  Logic: '<S80>/LogicalOperator9'
   *  RelationalOperator: '<S80>/RelationalOperator13'
   */
  rtb_LogicalOperator4_p1r2 = (rtb_Switch_igl4 && rtb_LogicalOperator4_p1r2_tmp &&
    (rtb_TmpSignalConversionAtR_kfon == ((uint8_T)ChrgStat_DCDCBuckFailed)));

  /* Logic: '<S80>/LogicalOperator11' incorporates:
   *  Constant: '<S80>/Define11'
   *  Constant: '<S80>/Define16'
   *  Constant: '<S80>/Define3'
   *  Logic: '<S80>/LogicalOperator3'
   *  RelationalOperator: '<S80>/RelationalOperator12'
   *  RelationalOperator: '<S80>/RelationalOperator16'
   *  RelationalOperator: '<S80>/RelationalOperator3'
   */
  rtb_LogicalOperator11_iogs = ((rtb_TmpSignalConversionAtR_kfon == ((uint8_T)
    ChrgStat_DCDCBuckFailed)) && ((rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_PreheatingPrepared)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatComplete))));

  /* Logic: '<S80>/LogicalOperator2' incorporates:
   *  Constant: '<S80>/Define1'
   *  Constant: '<S80>/Define2'
   *  RelationalOperator: '<S80>/RelationalOperator1'
   *  RelationalOperator: '<S80>/RelationalOperator2'
   */
  rtb_LogicalOperator2_jsuy = ((rtb_TmpSignalConversionAtR_kfon == ((uint8_T)
    ChrgStat_DCDCDisableFailed)) && (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatPreparing)));

  /* Outputs for Atomic SubSystem: '<S80>/If2' */
  /* Constant: '<S80>/Define6' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_LogicalOperator11_iogs, ChrgStat_Active,
    rtb_LogicalOperator2_jsuy);

  /* End of Outputs for SubSystem: '<S80>/If2' */

  /* Outputs for Atomic SubSystem: '<S80>/If1' */
  /* Constant: '<S80>/Define5' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_LogicalOperator4_p1r2, ChrgStat_Active,
    rtb_Switch_igl4);

  /* End of Outputs for SubSystem: '<S80>/If1' */

  /* Outputs for Atomic SubSystem: '<S80>/If' */
  /* Constant: '<S80>/Define4' */
  rtb_Switch_lutr = CtAp_ChrgStat_If(rtb_LogicalOperator15_gkxe, ChrgStat_Active,
    rtb_Switch_dm1s);

  /* End of Outputs for SubSystem: '<S80>/If' */

  /* SignalConversion generated from: '<S80>/If' */
  ChrMgmt_DCCmplDCDCErr_Flg = rtb_Switch_lutr;

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplDCDCErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplTCUErr' */
  /* Switch: '<S109>/Switch' incorporates:
   *  Constant: '<S85>/Define27'
   *  RelationalOperator: '<S85>/RelationalOperator29'
   */
  rtb_Switch_igl4 = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)ChrgStat_DCPreheating));

  /* Logic: '<S85>/LogicalOperator15' incorporates:
   *  Constant: '<S85>/Define29'
   *  Constant: '<S93>/Constant'
   *  Logic: '<S85>/LogicalOperator'
   *  RelationalOperator: '<S85>/RelationalOperator31'
   *  RelationalOperator: '<S93>/Compare'
   */
  rtb_LogicalOperator15 = (rtb_Switch_igl4 && (rtb_TmpSignalConversionAtR_cyj2 ==
    ((uint8_T)ChrgStat_TCUDisableFailed)) && ((rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgPreHeat_DCPreheatAndChargingPre)) ||
    rtb_TmpSignalConversionAtR_n4xx));

  /* Logic: '<S85>/LogicalOperator4' incorporates:
   *  Constant: '<S85>/Define6'
   *  RelationalOperator: '<S85>/RelationalOperator14'
   */
  rtb_LogicalOperator4_gg1g = (rtb_Switch_igl4 && rtb_LogicalOperator4_p1r2_tmp &&
    (rtb_TmpSignalConversionAtR_cyj2 == ((uint8_T)ChrgStat_TCUEnaFailed)));

  /* Logic: '<S85>/LogicalOperator11' incorporates:
   *  Constant: '<S85>/Define10'
   *  Constant: '<S85>/Define16'
   *  Constant: '<S85>/Define3'
   *  Logic: '<S85>/LogicalOperator2'
   *  RelationalOperator: '<S85>/RelationalOperator15'
   *  RelationalOperator: '<S85>/RelationalOperator16'
   *  RelationalOperator: '<S85>/RelationalOperator3'
   */
  rtb_LogicalOperator11_awho = ((rtb_TmpSignalConversionAtR_cyj2 == ((uint8_T)
    ChrgStat_TCUEnaFailed)) && ((rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_PreheatingPrepared)) || (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_PreheatComplete))));

  /* Logic: '<S85>/LogicalOperator6' incorporates:
   *  Constant: '<S85>/Define1'
   *  Constant: '<S85>/Define11'
   *  RelationalOperator: '<S85>/RelationalOperator1'
   *  RelationalOperator: '<S85>/RelationalOperator17'
   */
  rtb_LogicalOperator6_hwkd = ((rtb_TmpSignalConversionAtR_cyj2 == ((uint8_T)
    ChrgStat_TCUDisableFailed)) && (rtb_TmpSignalConversionAtR_dgoi == ((uint8_T)
    ChrgStat_PreheatPreparing)));

  /* Outputs for Atomic SubSystem: '<S85>/If2' */
  /* Constant: '<S85>/Define5' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_LogicalOperator11_awho, ChrgStat_Active,
    rtb_LogicalOperator6_hwkd);

  /* End of Outputs for SubSystem: '<S85>/If2' */

  /* Outputs for Atomic SubSystem: '<S85>/If1' */
  /* Constant: '<S85>/Define4' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_LogicalOperator4_gg1g, ChrgStat_Active,
    rtb_Switch_igl4);

  /* End of Outputs for SubSystem: '<S85>/If1' */

  /* Outputs for Atomic SubSystem: '<S85>/If' */
  /* Constant: '<S85>/Define2' */
  rtb_Switch_gjgv = CtAp_ChrgStat_If(rtb_LogicalOperator15, ChrgStat_Active,
    rtb_Switch_dm1s);

  /* End of Outputs for SubSystem: '<S85>/If' */

  /* SignalConversion generated from: '<S85>/If' */
  ChrMgmt_DCCmplTCUErr_Flg = rtb_Switch_gjgv;

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplTCUErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplStsErr' */
  /* Logic: '<S84>/LogicalOperator3' incorporates:
   *  Constant: '<S84>/Define'
   *  Constant: '<S84>/Define22'
   *  Constant: '<S84>/Define23'
   *  Constant: '<S84>/Define24'
   *  Logic: '<S84>/LogicalOperator'
   *  Logic: '<S84>/LogicalOperator13'
   *  Logic: '<S84>/LogicalOperator2'
   *  RelationalOperator: '<S84>/RelationalOperator'
   *  RelationalOperator: '<S84>/RelationalOperator24'
   *  RelationalOperator: '<S84>/RelationalOperator25'
   *  RelationalOperator: '<S84>/RelationalOperator26'
   *
   * Block requirements for '<S84>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2010
   */
  rtb_TmpSignalConversionAtR_hpih = (((rtb_TmpSignalConversionAtR_nfug !=
    ((uint8_T)ChrgStat_ChargeAndDcHeat)) && (rtb_TmpSignalConversionAtR_lz0t ==
    ((uint8_T)ChrgStat_HvReady)) && (rtb_TmpSignalConversionAtR_dgoi ==
    ((uint8_T)ChrgStat_DuringPreheating))) || (rtb_TmpSignalConversionAtR_nqpn
    != ((uint8_T)ChrgStat_GearP)) || ChrMgmt_ACCmplStsErr_Flg_tmp ||
    rtb_TmpSignalConversionAtR_hpih || (rtb_TmpSignalConversionAtR_j3ke ||
    rtb_TmpSignalConversionAtR_oq4p || rtb_TmpSignalConversionAtR_l1py));

  /* Logic: '<S84>/LogicalOperator5' incorporates:
   *  Constant: '<S84>/Define1'
   *  RelationalOperator: '<S84>/RelationalOperator1'
   *
   * Block requirements for '<S84>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:2010
   */
  ChrMgmt_DCCmplStsErr_Flg = (rtb_TmpSignalConversionAtR_hpih ||
    rtb_LogicalOperator4_aybt || (rtb_TmpSignalConversionAtR_ljvg == ((uint8_T)
    ChrgStat_RelayError)));

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplStsErr' */

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_ChrgnDCAbNormCmpl' */
  /* Switch: '<S109>/Switch' incorporates:
   *  Logic: '<S79>/LogicalOperator1'
   */
  rtb_Switch_igl4 = (ChrMgmt_DCCmplTCUErr_Flg || ChrMgmt_DCCmplDTCErr_Flg ||
                     ChrMgmt_DCCmplRlyErr_Flg || ChrMgmt_DCCmplDCDCErr_Flg);

  /* Outputs for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */
  /* Logic: '<S79>/LogicalOperator4' incorporates:
   *  Constant: '<S79>/Define'
   *  Constant: '<S82>/Define2'
   *  Constant: '<S82>/Define3'
   *  Constant: '<S82>/Define4'
   *  Constant: '<S82>/Define5'
   *  Constant: '<S82>/Define8'
   *  Constant: '<S82>/Define9'
   *  Logic: '<S82>/LogicalOperator'
   *  Logic: '<S82>/LogicalOperator14'
   *  RelationalOperator: '<S79>/RelationalOperator'
   *  RelationalOperator: '<S82>/RelationalOperator2'
   *  RelationalOperator: '<S82>/RelationalOperator3'
   *  RelationalOperator: '<S82>/RelationalOperator4'
   *  RelationalOperator: '<S82>/RelationalOperator5'
   *  RelationalOperator: '<S82>/RelationalOperator6'
   *  RelationalOperator: '<S82>/RelationalOperator7'
   */
  rtb_LogicalOperator4_aybt = (rtb_Switch_igl4 || ChrMgmt_DCCmplStsErr_Flg ||
    ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_1500Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_680Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_220Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_100Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_2000Ohm)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_2700Ohm)) ||
     rtb_B_MiHold_atek) || (tmpRead_3 == ((uint8_T)ChrgStat_ReconnectDisallow)));

  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */

  /* Logic: '<S79>/LogicalOperator3' */
  rtb_LogicalOperator3_fad3 = (rtb_TmpSignalConversionAtR_hpih ||
    rtb_Switch_igl4);

  /* Outputs for Atomic SubSystem: '<S79>/If' */
  /* Delay: '<S75>/Delay' incorporates:
   *  Constant: '<S79>/Define1'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  rtb_B_MiHold_atek = CtAp_ChrgStat_If(CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi,
    rtb_LogicalOperator3_fad3, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S79>/If' */

  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_DCAbNormCmpl' */
  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_PreDCAbNormCmpl'
   *
   * Block requirements for '<S71>/ChrMgmt_PreDCAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2009
   */
  /* Logic: '<S74>/LogicalOperator' incorporates:
   *  Constant: '<S78>/Define3'
   *  Delay: '<S75>/Delay'
   *  Logic: '<S78>/LogicalOperator'
   *  Logic: '<S78>/LogicalOperator1'
   *  Logic: '<S78>/LogicalOperator2'
   *  Logic: '<S78>/LogicalOperator3'
   *  Logic: '<S79>/LogicalOperator5'
   *  RelationalOperator: '<S78>/RelationalOperator2'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   *
   * Block requirements for '<S79>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:2011
   */
  rtb_TmpSignalConversionAtR_hpih = ((!CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi &&
    (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)ChrgStat_DCPlugDetected)) &&
    (rtb_TmpSignalConversionAtR_oq4p || rtb_TmpSignalConversionAtR_l1py)) ||
    (rtb_LogicalOperator4_aybt && CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi));

  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_PreDCAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_DCAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S73>/ChrMgmt_ChrgnDCAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_DCNormCmpl'
   *
   * Block requirements for '<S71>/ChrMgmt_DCNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2007
   *  2. VCU_SW_Requirements_Specification.slreqx:2008
   *  3. VCU_SW_Requirements_Specification.slreqx:2012
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Constant: '<S76>/Define1'
   *  RelationalOperator: '<S76>/RelationalOperator3'
   */
  rtb_Switch_igl4 = (rtb_TmpSignalConversionAtR_cglx == ((uint8_T)
    ChrgStat_ChargeOff));

  /* Switch: '<S111>/Switch' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S76>/RelationalOperator1'
   */
  rtb_Switch_dm1s = (rtb_TmpSignalConversionAtR_cfs3 >= (real32_T)
                     CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE);

  /* Logic: '<S76>/LogicalOperator' incorporates:
   *  Delay: '<S75>/Delay'
   *  Logic: '<S76>/LogicalOperator1'
   *
   * Block requirements for '<S76>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2007
   *  2. VCU_SW_Requirements_Specification.slreqx:2008
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  rtb_LogicalOperator4_aybt = (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi &&
    (rtb_TmpSignalConversionAtR_p4bp || rtb_Switch_dm1s || rtb_Switch_igl4));

  /* Logic: '<S76>/LogicalOperator3' incorporates:
   *  Constant: '<S76>/Define4'
   *  Constant: '<S76>/Define5'
   *  Logic: '<S76>/LogicalOperator2'
   *  Logic: '<S76>/LogicalOperator4'
   *  Logic: '<S76>/LogicalOperator5'
   *  RelationalOperator: '<S76>/RelationalOperator2'
   *  RelationalOperator: '<S76>/RelationalOperator4'
   */
  rtb_LogicalOperator3_ive3 = (rtb_Switch_igl4 || ((rtb_ChrMgmt_ChrgSts_Enum !=
    ((uint8_T)ChrgStat_ChargingComplete)) && (rtb_ChrMgmt_ChrgSts_Enum !=
    ((uint8_T)ChrgStat_CharingFault)) && rtb_TmpSignalConversionAtR_p4bp));

  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_DCNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_DcChrgCmplSts'
   *
   * Block requirements for '<S71>/ChrMgmt_DcChrgCmplSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:2012
   *  2. VCU_SW_Requirements_Specification.slreqx:2013
   *  3. VCU_SW_Requirements_Specification.slreqx:2014
   *  4. VCU_SW_Requirements_Specification.slreqx:2015
   *  5. VCU_SW_Requirements_Specification.slreqx:2016
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Delay: '<S77>/Delay1'
   */
  rtb_Switch_igl4 = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_et4p;

  /* Logic: '<S77>/LogicalOperator' incorporates:
   *  Constant: '<S77>/Define4'
   *  Constant: '<S77>/Define5'
   *  Delay: '<S75>/Delay'
   *  Delay: '<S77>/Delay1'
   *  Logic: '<S77>/LogicalOperator2'
   *  Logic: '<S77>/LogicalOperator3'
   *  RelationalOperator: '<S77>/RelationalOperator2'
   *  RelationalOperator: '<S77>/RelationalOperator3'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_et4p =
    (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi || (((rtb_ChrMgmt_ChrgSts_Enum ==
        ((uint8_T)ChrgStat_ChargingComplete)) || (rtb_ChrMgmt_ChrgSts_Enum ==
        ((uint8_T)ChrgStat_CharingFault))) && rtb_Switch_igl4));

  /* Delay: '<S77>/Delay' */
  rtb_Delay_gilt = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_owxx;

  /* Outputs for Atomic SubSystem: '<S77>/If2'
   *
   * Block requirements for '<S77>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:2016
   */
  /* Constant: '<S77>/Define2' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold_atek, ((uint8_T)
    ChrgStat_Faultother), rtb_Delay_gilt);

  /* End of Outputs for SubSystem: '<S77>/If2' */

  /* Outputs for Atomic SubSystem: '<S77>/If1'
   *
   * Block requirements for '<S77>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2013
   *  2. VCU_SW_Requirements_Specification.slreqx:2014
   */
  /* Constant: '<S77>/Define1' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator3_ive3, ((uint8_T)
    ChrgStat_ManOperate), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S77>/If1' */

  /* Outputs for Atomic SubSystem: '<S77>/If'
   *
   * Block requirements for '<S77>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:2012
   *  2. VCU_SW_Requirements_Specification.slreqx:2015
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S77>/Define'
   *  Delay: '<S77>/Delay1'
   */
  Delay_1_DSTATE = CtAp_ChrgStat_If_bdx1
    (CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_et4p, rtb_Switch_gqfl, ((uint8_T)
      ChrgStat_Init));

  /* End of Outputs for SubSystem: '<S77>/If' */

  /* Update for Delay: '<S77>/Delay' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_owxx = Delay_1_DSTATE;

  /* End of Outputs for SubSystem: '<S71>/ChrMgmt_DcChrgCmplSts' */
  /* End of Outputs for SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */

  /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
  /* Outputs for Atomic SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */
  /* Outputs for Atomic SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LPlugStsErr':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  /* Logic: '<S108>/LogicalOperator11' incorporates:
   *  Constant: '<S108>/CAL'
   *  Constant: '<S108>/CAL1'
   *  RelationalOperator: '<S108>/RelationalOperator5'
   *  RelationalOperator: '<S108>/RelationalOperator6'
   */
  rtb_LogicalOperator11 = ((rtb_TmpSignalConversionAtR_dbds >
    ChrMgmt_CC2ChkActvUDcLowr_CFG) && (rtb_TmpSignalConversionAtR_dbds <
    ChrMgmt_CC2ChkActvUDcUppr_CFG));

  /* Outputs for Atomic SubSystem: '<S108>/ATOM_OnDelay' */
  /* Constant: '<S108>/CAL2' incorporates:
   *  Constant: '<S108>/Define16'
   *  Constant: '<S108>/Define17'
   */
  rtb_Switch_dm1s = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator11,
    ChrMgmt_CC2ChkActvCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_ppxr);

  /* End of Outputs for SubSystem: '<S108>/ATOM_OnDelay' */
  /* End of Outputs for SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr' */

  /* Outputs for Atomic SubSystem: '<S104>/ChrMgmt_V2LAbNormCmpl'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2021
   */
  /* RelationalOperator: '<S106>/RelationalOperator' incorporates:
   *  Constant: '<S106>/Define'
   */
  rtb_RelationalOperator_ilth = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_V2LDischarging));

  /* Outputs for Atomic SubSystem: '<S104>/ChrMgmt_V2LCmplStsErr'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LCmplStsErr':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  /* Outputs for Atomic SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LPlugStsErr':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  /* Logic: '<S106>/LogicalOperator1' incorporates:
   *  Constant: '<S107>/Define1'
   *  Constant: '<S107>/Define2'
   *  Constant: '<S108>/Define1'
   *  Constant: '<S108>/Define2'
   *  Constant: '<S108>/Define3'
   *  Constant: '<S108>/Define4'
   *  Logic: '<S107>/LogicalOperator1'
   *  Logic: '<S107>/LogicalOperator3'
   *  Logic: '<S108>/LogicalOperator1'
   *  Logic: '<S108>/LogicalOperator2'
   *  Logic: '<S108>/LogicalOperator3'
   *  RelationalOperator: '<S107>/RelationalOperator1'
   *  RelationalOperator: '<S107>/RelationalOperator2'
   *  RelationalOperator: '<S108>/RelationalOperator1'
   *  RelationalOperator: '<S108>/RelationalOperator2'
   *  RelationalOperator: '<S108>/RelationalOperator3'
   *  RelationalOperator: '<S108>/RelationalOperator4'
   *
   * Block requirements for '<S106>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  rtb_LogicalOperator1_euq4 = ((rtb_TmpSignalConversionAtR_nqpn != ((uint8_T)
    ChrgStat_GearP)) || (rtb_TmpSignalConversionAtR_cjff &&
    ChrMgmt_ACCmplStsErr_Flg_tmp_tm) || (rtb_TmpSignalConversionAtR_lz0t !=
    ((uint8_T)ChrgStat_HvReady)) || rtb_TmpSignalConversionAtR_n4nu ||
    rtb_TmpSignalConversionAtR_j3ke || (rtb_Switch_dm1s ||
    ((rtb_TmpSignalConversionAtR_hrah == ((uint8_T)ChrgStat_Unlocked)) ||
     (rtb_TmpSignalConversionAtR_hrah == ((uint8_T)ChrgStat_EmLockErr))) ||
    ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CCUnconnect)) ||
     (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)ChrgStat_CC_Fault)))));

  /* End of Outputs for SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr' */
  /* End of Outputs for SubSystem: '<S104>/ChrMgmt_V2LCmplStsErr' */

  /* Outputs for Atomic SubSystem: '<S106>/If' */
  /* Constant: '<S106>/Define1' */
  rtb_Switch_igl4 = CtAp_ChrgStat_If(rtb_RelationalOperator_ilth,
    rtb_LogicalOperator1_euq4, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S106>/If' */

  /* Logic: '<S106>/LogicalOperator2'
   *
   * Block requirements for '<S106>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:2023
   */
  rtb_TmpSignalConversionAtR_j3ke = (rtb_Switch_igl4 ||
    rtb_TmpSignalConversionAtR_oq4p || rtb_TmpSignalConversionAtR_l1py ||
    tmpRead_d.OBCMgmt_ErrResOBCDchaStsErr);

  /* End of Outputs for SubSystem: '<S104>/ChrMgmt_V2LAbNormCmpl' */
  /* End of Outputs for SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S102>/ChrMgmt_V2LNormCmpl'
   *
   * Block requirements for '<S102>/ChrMgmt_V2LNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2019
   *  2. VCU_SW_Requirements_Specification.slreqx:2020
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  RelationalOperator: '<S105>/RelationalOperator2'
   */
  rtb_B_MiHold_atek = (rtb_TmpSignalConversionAtR_cfs3 <= (real32_T)
                       rtb_TmpSignalConversionAtRTE_RP.ChrMgmt_DchaAbortSOC_pct);

  /* Logic: '<S105>/LogicalOperator1' incorporates:
   *  Constant: '<S105>/Define'
   *  Constant: '<S105>/Define1'
   *  Constant: '<S105>/Define2'
   *  RelationalOperator: '<S105>/RelationalOperator'
   *  RelationalOperator: '<S105>/RelationalOperator1'
   *  RelationalOperator: '<S105>/RelationalOperator3'
   */
  rtb_LogicalOperator1_jvtk = ((rtb_TmpSignalConversionAtR_gb1h == ((uint8_T)
    ChrgStat_Standby)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_HalfConnect)) || rtb_B_MiHold_atek ||
    (rtb_TmpSignalConversionAtR_da20 == ((uint8_T)ChrgStat_DischargeOFF)));

  /* RelationalOperator: '<S105>/RelationalOperator4' incorporates:
   *  Constant: '<S105>/Define3'
   */
  rtb_RelationalOperator4_eszj = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_V2LDischarging));

  /* Outputs for Atomic SubSystem: '<S105>/If' */
  /* Constant: '<S105>/Define4' */
  rtb_Switch_dm1s = CtAp_ChrgStat_If(rtb_RelationalOperator4_eszj,
    rtb_LogicalOperator1_jvtk, ChrgStat_Inactive);

  /* End of Outputs for SubSystem: '<S105>/If' */
  /* End of Outputs for SubSystem: '<S102>/ChrMgmt_V2LNormCmpl' */
  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */

  /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_V2LProcActv'
   *
   * Block requirements for '<S12>/ChrMgmt_V2LProcActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2017
   *  2. VCU_SW_Requirements_Specification.slreqx:2018
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S103>/RelationalOperator'
   */
  rtb_B_MiHold_atek = (rtb_TmpSignalConversionAtR_cfs3 > (real32_T)
                       CtAp_ChrgStat_ARID_DEF.Delay_16_DSTATE);

  /* Logic: '<S103>/LogicalOperator3' incorporates:
   *  Constant: '<S103>/CAL'
   *  Constant: '<S103>/Define'
   *  Constant: '<S103>/Define1'
   *  Constant: '<S103>/Define2'
   *  Constant: '<S103>/Define3'
   *  Constant: '<S103>/Define4'
   *  Constant: '<S103>/Define7'
   *  Constant: '<S103>/Define8'
   *  Logic: '<S103>/LogicalOperator'
   *  Logic: '<S103>/LogicalOperator1'
   *  RelationalOperator: '<S103>/RelationalOperator1'
   *  RelationalOperator: '<S103>/RelationalOperator2'
   *  RelationalOperator: '<S103>/RelationalOperator3'
   *  RelationalOperator: '<S103>/RelationalOperator5'
   *  RelationalOperator: '<S103>/RelationalOperator6'
   *  RelationalOperator: '<S103>/RelationalOperator7'
   *  RelationalOperator: '<S103>/RelationalOperator8'
   *  RelationalOperator: '<S103>/RelationalOperator9'
   *
   * Block requirements for '<S103>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2017
   *  2. VCU_SW_Requirements_Specification.slreqx:2018
   */
  rtb_LogicalOperator3_o0wf = (((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_2700Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_2000Ohm))) && rtb_TmpSignalConversionAtR_d4fa &&
    rtb_B_MiHold_atek && (rtb_TmpSignalConversionAtR_nqpn == ((uint8_T)
    ChrgStat_GearP)) && (rtb_TmpSignalConversionAtR_oq4p == ChrgStat_passed) &&
    (rtb_TmpSignalConversionAtR_l1py == ChrgStat_passed) &&
    (rtb_TmpSignalConversionAtR_lz0t == ((uint8_T)ChrgStat_HvReady)) &&
    !rtb_TmpSignalConversionAtR_n4nu && (rtb_TmpSignalConversionAtR_dbds >=
    ChrMgmt_CC2ChkUDcNoConn_CFG) && (rtb_TmpSignalConversionAtR_da20 ==
    ((uint8_T)ChrgStat_DischargeOn)) && rtb_LogicalOperator3_es2b_tmp &&
    rtb_LogicalOperator3_es2b_tmp_0);

  /* End of Outputs for SubSystem: '<S12>/ChrMgmt_V2LProcActv' */
  /* End of Outputs for SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */

  /* Outputs for Atomic SubSystem: '<S2>/ErrorHandler' */
  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_CC2UDcErr' */
  /* Outputs for Atomic SubSystem: '<S180>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S180>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2139
   */
  rtb_LogicalOperator_cnom = CtAp__ChrMgmt_ChrgStatErrSetCdn
    (rtb_TmpSignalConversionAtR_dbds);

  /* End of Outputs for SubSystem: '<S180>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Logic: '<S180>/LogicalOperator'
   *
   * Block requirements for '<S180>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2141
   */
  rtb_LogicalOperator_ocnv = !rtb_LogicalOperator_cnom;

  /* Outputs for Atomic SubSystem: '<S180>/NoEnAvoidMu' */
  /* Constant: '<S180>/CAL' incorporates:
   *  Constant: '<S180>/CAL1'
   *  Constant: '<S180>/Define1'
   *
   * Block requirements for '<S180>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:2148
   *
   * Block requirements for '<S180>/CAL1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2149
   */
  CtAp_ChrgStat_NoEnAvoidMu(rtb_LogicalOperator_cnom, rtb_LogicalOperator_ocnv,
    ChrMgmt_CC2ErrEnaTim_CFG, ChrMgmt_CC2ErrDematureTim_CFG, ((uint16_T)
    ChrgStat_dt), &rtb_True_dtgp, &rtb_Switch1_bkdw, &rtb_Switch2,
    &rtb_Switch6_hurk, &CtAp_ChrgStat_ARID_DEF.ARID_DEF_NoEnAvoidMu);

  /* End of Outputs for SubSystem: '<S180>/NoEnAvoidMu' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_CC2UDcErr' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_CC2UDcErrDTC' */
  /* Outputs for Atomic SubSystem: '<S181>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S181>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2109
   */
  /* Outputs for Atomic SubSystem: '<S194>/ATOM_TimeCnt' */
  /* Constant: '<S194>/Define' incorporates:
   *  Constant: '<S194>/CAL'
   *  Constant: '<S194>/Define1'
   */
  rtb_LogicalOperator_mzsk = CtAp_ChrgStat_ATOM_TimeCnt(ChrgStat_Active,
    ((uint16_T)ChrgStat_dt), ChrMgmt_ChrgStsDTCEnaTim_CFG,
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S194>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S185>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2194
   */
  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S183>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S183>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2177
   */
  /* Logic: '<S194>/LogicalOperator1' incorporates:
   *  Logic: '<S205>/LogicalOperator2'
   *  Logic: '<S217>/LogicalOperator2'
   */
  rtb_TmpSignalConversionAtR_cdmk = !rtb_TmpSignalConversionAtR_cdmk;

  /* End of Outputs for SubSystem: '<S183>/ChrMgmt_ChrgStatErrEnaCdn' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErrDTC' */
  /* End of Outputs for SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */

  /* Logic: '<S194>/LogicalOperator' incorporates:
   *  Logic: '<S194>/LogicalOperator1'
   */
  rtb_LogicalOperator_khwh = (rtb_TmpSignalConversionAtR_mnjr &&
    rtb_TmpSignalConversionAtR_cdmk && rtb_LogicalOperator_mzsk);

  /* End of Outputs for SubSystem: '<S181>/ChrMgmt_ChrgStatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S181>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S181>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2105
   */
  rtb_LogicalOperator_mzsk = CtAp__ChrMgmt_ChrgStatErrSetCdn
    (rtb_TmpSignalConversionAtR_dbds);

  /* End of Outputs for SubSystem: '<S181>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Logic: '<S181>/LogicalOperator' */
  rtb_LogicalOperator_ftgy = !rtb_LogicalOperator_mzsk;

  /* Outputs for Atomic SubSystem: '<S181>/AvoidMu' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus' incorporates:
   *  Constant: '<S181>/CAL'
   *  Constant: '<S181>/CAL1'
   *  Constant: '<S181>/Define1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S181>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:2114
   *
   * Block requirements for '<S181>/CAL1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2115
   */
  CtAp_ChrgStat_AvoidMu(rtb_LogicalOperator_khwh, rtb_LogicalOperator_mzsk,
                        rtb_LogicalOperator_ftgy, ChrMgmt_CC2ErrEnaTim_CFG,
                        ChrMgmt_CC2ErrDematureTim_CFG, ((uint16_T)ChrgStat_dt),
                        &CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec.ChrMgmt_MonStatCC2UDcErrDTC,
                        &CtAp_ChrgStat_ARID_DEF.Delay_22_DSTATE,
                        &CtAp_ChrgStat_ARID_DEF.Delay_23_DSTATE,
                        &CtAp_ChrgStat_ARID_DEF.ARID_DEF_AvoidMu);

  /* End of Outputs for SubSystem: '<S181>/AvoidMu' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_CC2UDcErrDTC' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErr' */
  /* Outputs for Atomic SubSystem: '<S182>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S182>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2207
   */
  /* Logic: '<S212>/LogicalOperator' incorporates:
   *  Constant: '<S200>/Define'
   *  RelationalOperator: '<S200>/RelationalOperator'
   */
  rtb_LogicalOperator_cl3i = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPlugDetected));

  /* Logic: '<S218>/LogicalOperator' incorporates:
   *  Delay: '<S200>/Delay'
   */
  rtb_LogicalOperator_nim5 = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_pukt;

  /* Logic: '<S200>/LogicalOperator3' incorporates:
   *  Delay: '<S200>/Delay'
   *  Logic: '<S200>/LogicalOperator4'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_pukt = ((rtb_LogicalOperator_nim5 &&
    rtb_LogicalOperator_cl3i) || rtb_LogicalOperator3_es2b);

  /* Logic: '<S200>/LogicalOperator1' incorporates:
   *  Delay: '<S200>/Delay'
   */
  rtb_LogicalOperator1_dsue = (rtb_LogicalOperator_cl3i &&
    CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_pukt);

  /* End of Outputs for SubSystem: '<S182>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S182>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S182>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2209
   */
  rtb_LogicalOperator_cl3i = CtAp_C_ChrMgmt_ChrgStatResetCdn
    (rtb_ChrMgmt_ChrgSts_Enum);

  /* End of Outputs for SubSystem: '<S182>/ChrMgmt_ChrgStatResetCdn' */

  /* Outputs for Atomic SubSystem: '<S182>/NoDTAndEn' */
  /* Constant: '<S182>/CAL' incorporates:
   *  Constant: '<S182>/Define1'
   *
   * Block requirements for '<S182>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:2216
   */
  CtAp_ChrgStat_NoDTAndEn(rtb_LogicalOperator1_dsue, rtb_LogicalOperator_cl3i,
    ChrMgmt_AcChrgWaitTim_CFG, ((uint16_T)ChrgStat_dt),
    &rtb_DataTypeConversion_igrz, &rtb_Switch8_fp2q, &rtb_Switch8_b2v4,
    &rtb_Switch6_a4bh, &CtAp_ChrgStat_ARID_DEF.ARID_DEF_NoDTAndEn);

  /* End of Outputs for SubSystem: '<S182>/NoDTAndEn' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErr' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErr' */
  /* Outputs for Atomic SubSystem: '<S184>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S184>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2224
   */
  /* Delay generated from: '<S2>/Delay' */
  rtb_LogicalOperator_cl3i = ChrMgmt_ChrgStatErrSetCdn_ao4q
    (rtb_ChrMgmt_ChrgSts_Enum, CtAp_ChrgStat_ARID_DEF.Delay_3_DSTATE);

  /* End of Outputs for SubSystem: '<S184>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S184>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S184>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2226
   */
  rtb_LogicalOperator_nim5 = CtAp_C_ChrMgmt_ChrgStatResetCdn
    (rtb_ChrMgmt_ChrgSts_Enum);

  /* End of Outputs for SubSystem: '<S184>/ChrMgmt_ChrgStatResetCdn' */

  /* DataTypeConversion: '<S184>/DataTypeConversion1' incorporates:
   *  Constant: '<S184>/Define1'
   */
  rtb_DataTypeConversion1_e0gz = (uint32_T)((uint16_T)ChrgStat_dt);

  /* Outputs for Atomic SubSystem: '<S184>/U32NoDTAndEn' */
  /* Constant: '<S184>/CAL'
   *
   * Block requirements for '<S184>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:2233
   */
  CtAp_ChrgStat_U32NoDTAndEn(rtb_LogicalOperator_cl3i, rtb_LogicalOperator_nim5,
    ChrMgmt_DcChrgWaitTim_CFG, rtb_DataTypeConversion1_e0gz,
    &rtb_DataTypeConversion_fyk2, &rtb_Switch8_b3ia, &rtb_Switch8_erfa,
    &rtb_Switch6_kxqx, &CtAp_ChrgStat_ARID_DEF.ARID_DEF_U32NoDTAndEn);

  /* End of Outputs for SubSystem: '<S184>/U32NoDTAndEn' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErr' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErr' */
  /* Outputs for Atomic SubSystem: '<S186>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S186>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2156
   */
  /* Logic: '<S224>/LogicalOperator' */
  rtb_LogicalOperator_kbp5 = (rtb_Switch6_a4bh || rtb_Switch6_kxqx);

  /* End of Outputs for SubSystem: '<S186>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S186>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S186>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2158
   */
  /* Logic: '<S225>/LogicalOperator' incorporates:
   *  Constant: '<S225>/Define'
   *  Constant: '<S225>/Define2'
   *  RelationalOperator: '<S225>/Equal'
   *  RelationalOperator: '<S225>/Equal1'
   */
  rtb_LogicalOperator_g5et = ((rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_offplug)) || (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_CharingFault)));

  /* End of Outputs for SubSystem: '<S186>/ChrMgmt_ChrgStatResetCdn' */

  /* Outputs for Atomic SubSystem: '<S186>/NoEnableAndTime' */
  CtAp_ChrgStat_NoEnableAndTime(rtb_LogicalOperator_kbp5,
    rtb_LogicalOperator_g5et, &rtb_True_gids, &rtb_Switch1_eiji,
    &rtb_Switch8_nwof, &rtb_Switch6_du20,
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_NoEnableAndTime_mbvz);

  /* End of Outputs for SubSystem: '<S186>/NoEnableAndTime' */

  /* DataTypeConversion: '<S186>/DataTypeConversion3' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_32_DSTATE = rtb_Switch6_du20;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErr' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S183>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S183>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2177
   */
  /* Outputs for Atomic SubSystem: '<S205>/ATOM_TimeCnt' */
  /* Constant: '<S205>/Define' incorporates:
   *  Constant: '<S205>/CAL'
   *  Constant: '<S205>/Define1'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_TimeCnt(ChrgStat_Active, ((uint16_T)
    ChrgStat_dt), ChrMgmt_ChrgStsDTCEnaTim_CFG,
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cl54);

  /* End of Outputs for SubSystem: '<S205>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S185>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2194
   */
  /* Logic: '<S205>/LogicalOperator1' incorporates:
   *  Logic: '<S217>/LogicalOperator1'
   */
  rtb_TmpSignalConversionAtR_oq4p =
    !rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResEPTCANBusOffInfo;

  /* End of Outputs for SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */

  /* Logic: '<S218>/LogicalOperator' incorporates:
   *  Logic: '<S205>/LogicalOperator1'
   */
  rtb_LogicalOperator_nim5 = rtb_TmpSignalConversionAtR_oq4p;

  /* Logic: '<S205>/LogicalOperator' */
  rtb_LogicalOperator_lvsx = (rtb_TmpSignalConversionAtR_mnjr &&
    rtb_LogicalOperator_nim5 && rtb_TmpSignalConversionAtR_cdmk &&
    rtb_B_MiHold_fz3p);

  /* End of Outputs for SubSystem: '<S183>/ChrMgmt_ChrgStatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S183>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S183>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2173
   */
  /* Logic: '<S218>/LogicalOperator' incorporates:
   *  Constant: '<S206>/Define'
   *  RelationalOperator: '<S206>/RelationalOperator'
   */
  rtb_LogicalOperator_nim5 = (rtb_ChrMgmt_ChrgSts_Enum == ((uint8_T)
    ChrgStat_ACPlugDetected));

  /* RelationalOperator: '<S127>/B_MiHold' incorporates:
   *  Delay: '<S206>/Delay'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_k5td;

  /* Logic: '<S206>/LogicalOperator3' incorporates:
   *  Delay: '<S206>/Delay'
   *  Logic: '<S206>/LogicalOperator4'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_k5td = ((rtb_B_MiHold_fz3p &&
    rtb_LogicalOperator_nim5) || rtb_LogicalOperator3_es2b);

  /* Logic: '<S206>/LogicalOperator1' incorporates:
   *  Delay: '<S206>/Delay'
   */
  rtb_LogicalOperator1 = (rtb_LogicalOperator_nim5 &&
    CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_k5td);

  /* End of Outputs for SubSystem: '<S183>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S183>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S183>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2175
   */
  rtb_LogicalOperator_nim5 = C_ChrMgmt_ChrgStatResetCdn_brpa
    (rtb_ChrMgmt_ChrgSts_Enum);

  /* End of Outputs for SubSystem: '<S183>/ChrMgmt_ChrgStatResetCdn' */

  /* Outputs for Atomic SubSystem: '<S183>/NoDT' */
  /* Constant: '<S183>/CAL' incorporates:
   *  Constant: '<S183>/Define1'
   *
   * Block requirements for '<S183>/CAL':
   *  1. VCU_SW_Requirements_Specification.slreqx:2182
   */
  CtAp_ChrgStat_NoDT(rtb_LogicalOperator_lvsx, rtb_LogicalOperator1,
                     rtb_LogicalOperator_nim5, ChrMgmt_AcChrgWaitTim_CFG,
                     ((uint16_T)ChrgStat_dt), &rtb_DataTypeConversion_awfo,
                     &rtb_Switch8_b3ia, &rtb_Switch8_fp2q,
                     &CtAp_ChrgStat_ARID_DEF.Switch6_fmpv,
                     &CtAp_ChrgStat_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S183>/NoDT' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgAcStsJmpErrDTC' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn'
   *
   * Block requirements for '<S185>/ChrMgmt_ChrgStatErrEnaCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2194
   */
  /* Outputs for Atomic SubSystem: '<S217>/ATOM_TimeCnt' */
  /* UnitDelay: '<S217>/OneDelay' incorporates:
   *  Constant: '<S217>/CAL'
   *  Constant: '<S217>/Define1'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_TimeCnt
    (CtAp_ChrgStat_ARID_DEF.OneDelay_DSTATE, ((uint16_T)ChrgStat_dt),
     ChrMgmt_ChrgStsDTCEnaTim_CFG, &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S217>/ATOM_TimeCnt' */

  /* Logic: '<S218>/LogicalOperator' incorporates:
   *  Logic: '<S217>/LogicalOperator1'
   */
  rtb_LogicalOperator_nim5 = rtb_TmpSignalConversionAtR_oq4p;

  /* Logic: '<S217>/LogicalOperator' */
  rtb_LogicalOperator_ozng = (rtb_TmpSignalConversionAtR_mnjr &&
    rtb_LogicalOperator_nim5 && rtb_TmpSignalConversionAtR_cdmk &&
    rtb_B_MiHold_fz3p);

  /* Update for UnitDelay: '<S217>/OneDelay' incorporates:
   *  Constant: '<S217>/Define'
   */
  CtAp_ChrgStat_ARID_DEF.OneDelay_DSTATE = ChrgStat_Active;

  /* End of Outputs for SubSystem: '<S185>/ChrMgmt_ChrgStatErrEnaCdn' */

  /* Outputs for Atomic SubSystem: '<S185>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S185>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2190
   */
  /* Delay generated from: '<S2>/Delay' */
  rtb_LogicalOperator_nim5 = ChrMgmt_ChrgStatErrSetCdn_ao4q
    (rtb_ChrMgmt_ChrgSts_Enum, CtAp_ChrgStat_ARID_DEF.Delay_3_DSTATE);

  /* End of Outputs for SubSystem: '<S185>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S185>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S185>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2192
   */
  rtb_B_MiHold_fz3p = C_ChrMgmt_ChrgStatResetCdn_brpa(rtb_ChrMgmt_ChrgSts_Enum);

  /* End of Outputs for SubSystem: '<S185>/ChrMgmt_ChrgStatResetCdn' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErr' */
  /* DataTypeConversion: '<S185>/DataTypeConversion1' incorporates:
   *  Constant: '<S184>/Define1'
   *  DataTypeConversion: '<S184>/DataTypeConversion1'
   */
  rtb_DataTypeConversion1 = (uint32_T)((uint16_T)ChrgStat_dt);

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErr' */

  /* Outputs for Atomic SubSystem: '<S185>/U32NoDTAvoidMu1' */
  /* Constant: '<S185>/CAL' */
  CtAp_ChrgStat_U32NoDTAvoidMu(rtb_LogicalOperator_ozng,
    rtb_LogicalOperator_nim5, rtb_B_MiHold_fz3p, ChrMgmt_DcChrgWaitTim_CFG,
    rtb_DataTypeConversion1, &rtb_DataTypeConversion_hncq, &rtb_Switch8_b3ia,
    &rtb_Switch8_b3ia, &CtAp_ChrgStat_ARID_DEF.Switch6,
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_U32NoDTAvoidMu1);

  /* End of Outputs for SubSystem: '<S185>/U32NoDTAvoidMu1' */
  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgDcStsJmpErrDTC' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErrDTC' */
  /* Outputs for Atomic SubSystem: '<S187>/ChrMgmt_ChrgStatErrSetCdn'
   *
   * Block requirements for '<S187>/ChrMgmt_ChrgStatErrSetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2122
   */
  /* Logic: '<S228>/LogicalOperator' */
  rtb_LogicalOperator = (CtAp_ChrgStat_ARID_DEF.Switch6_fmpv ||
    CtAp_ChrgStat_ARID_DEF.Switch6);

  /* End of Outputs for SubSystem: '<S187>/ChrMgmt_ChrgStatErrSetCdn' */

  /* Outputs for Atomic SubSystem: '<S187>/ChrMgmt_ChrgStatResetCdn'
   *
   * Block requirements for '<S187>/ChrMgmt_ChrgStatResetCdn':
   *  1. VCU_SW_Requirements_Specification.slreqx:2124
   */
  rtb_B_MiHold_fz3p = C_ChrMgmt_ChrgStatResetCdn_brpa(rtb_ChrMgmt_ChrgSts_Enum);

  /* End of Outputs for SubSystem: '<S187>/ChrMgmt_ChrgStatResetCdn' */

  /* Outputs for Atomic SubSystem: '<S187>/NoEnableAndTime' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus' */
  CtAp_ChrgStat_NoEnableAndTime(rtb_LogicalOperator, rtb_B_MiHold_fz3p,
    &CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus.ChrMgmt_MonStatChrgStsJmpErrDTC,
    &CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus.ChrMgmt_MonResChrgStsJmpErrDTC,
    &CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus.ChrMgmt_ErrStatChrgStsJmpErrDTC,
    &rtb_Switch6, &CtAp_ChrgStat_ARID_DEF.ARID_DEF_NoEnableAndTime);

  /* End of Outputs for SubSystem: '<S187>/NoEnableAndTime' */

  /* SignalConversion generated from: '<S187>/NoEnableAndTime' */
  ChrMgmt_ErrResChrgStsJmpErrDTC = rtb_Switch6;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErrDTC' */
  /* End of Outputs for SubSystem: '<S2>/ErrorHandler' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_PlugStsManage' */
  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_ACPlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_ACPlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1968
   *  2. VCU_SW_Requirements_Specification.slreqx:1969
   *  3. VCU_SW_Requirements_Specification.slreqx:1970
   *  4. VCU_SW_Requirements_Specification.slreqx:1971
   *  5. VCU_SW_Requirements_Specification.slreqx:1972
   */
  /* RelationalOperator: '<S152>/RelationalOperator' incorporates:
   *  Constant: '<S152>/Define'
   */
  rtb_RelationalOperator_jlxn = (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_Fault));

  /* Outputs for Atomic SubSystem: '<S152>/ATOM_OnDelay' */
  /* Constant: '<S152>/CAL2' incorporates:
   *  Constant: '<S152>/Define1'
   *  Constant: '<S152>/Define2'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ATOM_OnDelay
    (rtb_RelationalOperator_jlxn, ChrMgmt_CCChkFltCfmTim_CFG, ((uint16_T)
      ChrgStat_dt), ((uint16_T)ChrgStat_U16Zero),
     &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_cv5h);

  /* End of Outputs for SubSystem: '<S152>/ATOM_OnDelay' */

  /* Logic: '<S152>/LogicalOperator' incorporates:
   *  Constant: '<S152>/Define5'
   *  Constant: '<S152>/Define6'
   *  Constant: '<S152>/Define7'
   *  Constant: '<S152>/Define8'
   *  RelationalOperator: '<S152>/RelationalOperator2'
   *  RelationalOperator: '<S152>/RelationalOperator3'
   *  RelationalOperator: '<S152>/RelationalOperator4'
   *  RelationalOperator: '<S152>/RelationalOperator5'
   */
  rtb_LogicalOperator_h1si = ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_1500Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_680Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_220Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_100Ohm)));

  /* Outputs for Atomic SubSystem: '<S152>/ATOM_OnDelay1' */
  /* Constant: '<S152>/CAL1' incorporates:
   *  Constant: '<S152>/Define10'
   *  Constant: '<S152>/Define9'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator_h1si,
    ChrMgmt_CCChkActvCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_pbm3);

  /* End of Outputs for SubSystem: '<S152>/ATOM_OnDelay1' */

  /* Logic: '<S152>/LogicalOperator1' incorporates:
   *  Constant: '<S152>/Define12'
   *  Constant: '<S152>/Define13'
   *  RelationalOperator: '<S152>/RelationalOperator6'
   *  RelationalOperator: '<S152>/RelationalOperator7'
   */
  rtb_LogicalOperator1_j30t = ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_2000Ohm)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CC_2700Ohm)));

  /* Outputs for Atomic SubSystem: '<S152>/ATOM_OnDelay2' */
  /* Constant: '<S152>/CAL3' incorporates:
   *  Constant: '<S152>/Define14'
   *  Constant: '<S152>/Define15'
   */
  rtb_B_MiHold = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_j30t,
    ChrMgmt_CCChkActvCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_bhxx);

  /* End of Outputs for SubSystem: '<S152>/ATOM_OnDelay2' */

  /* Logic: '<S152>/LogicalOperator2' incorporates:
   *  Constant: '<S152>/Define17'
   *  Constant: '<S152>/Define4'
   *  RelationalOperator: '<S152>/RelationalOperator1'
   *  RelationalOperator: '<S152>/RelationalOperator8'
   */
  rtb_LogicalOperator2_d4pw = ((rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_CCUnconnect)) || (rtb_TmpSignalConversionAtR_j520 == ((uint8_T)
    ChrgStat_HalfConnect)));

  /* Outputs for Atomic SubSystem: '<S152>/ATOM_OnDelay3' */
  /* Constant: '<S152>/CAL4' incorporates:
   *  Constant: '<S152>/Define18'
   *  Constant: '<S152>/Define19'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator2_d4pw,
    ChrMgmt_CCChkInvldCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay3);

  /* End of Outputs for SubSystem: '<S152>/ATOM_OnDelay3' */

  /* Outputs for Atomic SubSystem: '<S152>/If3'
   *
   * Block requirements for '<S152>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:1971
   */
  /* Constant: '<S152>/Define20' incorporates:
   *  Delay: '<S152>/Delay'
   */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold_ncd3, ((uint8_T)
    ChrgStat_ACPlugInactive), CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz);

  /* End of Outputs for SubSystem: '<S152>/If3' */

  /* Outputs for Atomic SubSystem: '<S152>/If2'
   *
   * Block requirements for '<S152>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:1970
   */
  /* Constant: '<S152>/Define16' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold, ((uint8_T)
    ChrgStat_V2LPlugActive), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S152>/If2' */

  /* Outputs for Atomic SubSystem: '<S152>/If1'
   *
   * Block requirements for '<S152>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1969
   */
  /* Constant: '<S152>/Define11' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold_fz3p, ((uint8_T)
    ChrgStat_ACPlugActive), rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S152>/If1' */

  /* Outputs for Atomic SubSystem: '<S152>/If'
   *
   * Block requirements for '<S152>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1968
   */
  /* Delay: '<S152>/Delay' incorporates:
   *  Constant: '<S152>/Define3'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz = CtAp_ChrgStat_If_bdx1
    (rtb_RelationalOperator_osrn, ((uint8_T)ChrgStat_ACPlugFault),
     rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S152>/If' */
  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_ACPlugSts' */

  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_DCPlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_DCPlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1964
   *  2. VCU_SW_Requirements_Specification.slreqx:1965
   *  3. VCU_SW_Requirements_Specification.slreqx:1966
   *  4. VCU_SW_Requirements_Specification.slreqx:1967
   */
  /* Logic: '<S153>/LogicalOperator' incorporates:
   *  Constant: '<S153>/CAL'
   *  Constant: '<S153>/CAL1'
   *  RelationalOperator: '<S153>/RelationalOperator'
   *  RelationalOperator: '<S153>/RelationalOperator1'
   */
  rtb_LogicalOperator_c4yo = ((rtb_TmpSignalConversionAtR_dbds >=
    ChrMgmt_CC2ChkActvUDcLowr_CFG) && (rtb_TmpSignalConversionAtR_dbds <=
    ChrMgmt_CC2ChkActvUDcUppr_CFG));

  /* Logic: '<S153>/LogicalOperator1' incorporates:
   *  Constant: '<S153>/CAL5'
   *  Logic: '<S153>/LogicalOperator2'
   *  RelationalOperator: '<S153>/RelationalOperator3'
   */
  rtb_LogicalOperator1_e51k = ((rtb_TmpSignalConversionAtR_dbds <
    ChrMgmt_CC2ChkUDcNoConn_CFG) && !rtb_LogicalOperator_c4yo);

  /* Outputs for Atomic SubSystem: '<S153>/ATOM_OnDelay2' */
  /* Constant: '<S153>/CAL6' incorporates:
   *  Constant: '<S153>/Define4'
   *  Constant: '<S153>/Define5'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_e51k,
    ChrMgmt_CC2ChkInvldCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_cxar);

  /* End of Outputs for SubSystem: '<S153>/ATOM_OnDelay2' */

  /* Outputs for Atomic SubSystem: '<S153>/ATOM_OnDelay' */
  /* Constant: '<S153>/CAL2' incorporates:
   *  Constant: '<S153>/Define1'
   *  Constant: '<S153>/Define2'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator_c4yo,
    ChrMgmt_CC2ChkActvCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of Outputs for SubSystem: '<S153>/ATOM_OnDelay' */

  /* RelationalOperator: '<S153>/RelationalOperator2' incorporates:
   *  Constant: '<S153>/CAL3'
   */
  rtb_RelationalOperator2_l5di = (rtb_TmpSignalConversionAtR_dbds >=
    ChrMgmt_CC2ChkUDcNoConn_CFG);

  /* Outputs for Atomic SubSystem: '<S153>/ATOM_OnDelay1' */
  /* Constant: '<S153>/CAL4' incorporates:
   *  Constant: '<S153>/Define7'
   *  Constant: '<S153>/Define8'
   */
  rtb_B_MiHold = CtAp_ChrgStat_ATOM_OnDelay(rtb_RelationalOperator2_l5di,
    ChrMgmt_CC2ChkActvCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of Outputs for SubSystem: '<S153>/ATOM_OnDelay1' */

  /* Outputs for Atomic SubSystem: '<S153>/If2'
   *
   * Block requirements for '<S153>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:1966
   */
  /* Constant: '<S153>/Define6' incorporates:
   *  Delay: '<S153>/Delay'
   */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold, ((uint8_T)
    ChrgStat_DCPlugInactive), CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50);

  /* End of Outputs for SubSystem: '<S153>/If2' */

  /* Outputs for Atomic SubSystem: '<S153>/If1'
   *
   * Block requirements for '<S153>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1965
   */
  /* Constant: '<S153>/Define3' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_B_MiHold_ncd3, ((uint8_T)
    ChrgStat_DCPlugActive), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S153>/If1' */

  /* Outputs for Atomic SubSystem: '<S153>/If'
   *
   * Block requirements for '<S153>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1964
   */
  /* Delay: '<S153>/Delay' incorporates:
   *  Constant: '<S153>/Define'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50 = CtAp_ChrgStat_If_bdx1
    (rtb_B_MiHold_fz3p, ((uint8_T)ChrgStat_DCPlugFault), rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S153>/If' */
  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_DCPlugSts' */

  /* Outputs for Atomic SubSystem: '<S8>/ChrMgmt_PlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_PlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1973
   *  2. VCU_SW_Requirements_Specification.slreqx:1974
   *  3. VCU_SW_Requirements_Specification.slreqx:1975
   *  4. VCU_SW_Requirements_Specification.slreqx:1976
   *  5. VCU_SW_Requirements_Specification.slreqx:1977
   *  6. VCU_SW_Requirements_Specification.slreqx:1978
   *  7. VCU_SW_Requirements_Specification.slreqx:1979
   *  8. VCU_SW_Requirements_Specification.slreqx:13232
   */
  /* RelationalOperator: '<S154>/RelationalOperator8' incorporates:
   *  Constant: '<S154>/Define12'
   */
  rtb_RelationalOperator8 = (rtb_TmpSignalConversionAtR_hrah == ((uint8_T)
    ChrgStat_Unlocked));

  /* Outputs for Atomic SubSystem: '<S154>/ATOM_OnDelay2' */
  /* Constant: '<S154>/CAL3' incorporates:
   *  Constant: '<S154>/Define14'
   *  Constant: '<S154>/Define15'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_RelationalOperator8,
    ChrMgmt_CCChkElectcLockCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2);

  /* End of Outputs for SubSystem: '<S154>/ATOM_OnDelay2' */

  /* Logic: '<S154>/LogicalOperator3' incorporates:
   *  Constant: '<S154>/Define11'
   *  Delay: '<S152>/Delay'
   *  RelationalOperator: '<S154>/RelationalOperator7'
   */
  rtb_LogicalOperator3_nitt = ((CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz ==
    ((uint8_T)ChrgStat_ACPlugActive)) && rtb_B_MiHold_fz3p);

  /* RelationalOperator: '<S154>/RelationalOperator10' incorporates:
   *  Constant: '<S154>/Define27'
   */
  rtb_RelationalOperator10 = (rtb_TmpSignalConversionAtR_hrah == ((uint8_T)
    ChrgStat_Locked));

  /* Outputs for Atomic SubSystem: '<S154>/ATOM_OnDelay5' */
  /* Constant: '<S154>/CAL5' incorporates:
   *  Constant: '<S154>/Define28'
   *  Constant: '<S154>/Define29'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_RelationalOperator10,
    ChrMgmt_CCChkElectcLockCfmTim_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay5);

  /* End of Outputs for SubSystem: '<S154>/ATOM_OnDelay5' */

  /* RelationalOperator: '<S154>/RelationalOperator9' incorporates:
   *  Constant: '<S154>/Define16'
   *  Delay: '<S152>/Delay'
   */
  rtb_RelationalOperator9 = (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz ==
    ((uint8_T)ChrgStat_ACPlugActive));

  /* Logic: '<S154>/LogicalOperator4' */
  rtb_LogicalOperator4_kpmp = (rtb_B_MiHold_fz3p && rtb_RelationalOperator9);

  /* Delay: '<S154>/Delay' */
  rtb_Delay = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE;

  /* Logic: '<S154>/LogicalOperator5' incorporates:
   *  Constant: '<S154>/Define20'
   *  Constant: '<S154>/Define21'
   *  Delay: '<S152>/Delay'
   *  Delay: '<S153>/Delay'
   *  RelationalOperator: '<S154>/RelationalOperator11'
   *  RelationalOperator: '<S154>/RelationalOperator12'
   */
  rtb_LogicalOperator5 = ((CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz == ((uint8_T)
    ChrgStat_ACPlugInactive)) && (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50 ==
    ((uint8_T)ChrgStat_DCPlugInactive)));

  /* Outputs for Atomic SubSystem: '<S154>/If7'
   *
   * Block requirements for '<S154>/If7':
   *  1. VCU_SW_Requirements_Specification.slreqx:13232
   */
  /* Constant: '<S154>/Define19' incorporates:
   *  Constant: '<S154>/Define18'
   *
   * Block requirements for '<S154>/Define19':
   *  1. VCU_SW_Requirements_Specification.slreqx:1979
   *
   * Block requirements for '<S154>/Define18':
   *  1. VCU_SW_Requirements_Specification.slreqx:1979
   */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator5, ((uint8_T)
    ChrgStat_NoPlug), ((uint8_T)ChrgStat_Init));

  /* End of Outputs for SubSystem: '<S154>/If7' */

  /* Outputs for Atomic SubSystem: '<S154>/If6' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_RelationalOperator9, rtb_Delay,
    rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S154>/If6' */

  /* Outputs for Atomic SubSystem: '<S154>/If5'
   *
   * Block requirements for '<S154>/If5':
   *  1. VCU_SW_Requirements_Specification.slreqx:1978
   */
  /* Constant: '<S154>/Define17' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator4_kpmp, ((uint8_T)
    ChrgStat_ACPlugLocked), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S154>/If5' */

  /* Outputs for Atomic SubSystem: '<S154>/If4'
   *
   * Block requirements for '<S154>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:1977
   */
  /* Constant: '<S154>/Define13' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator3_nitt, ((uint8_T)
    ChrgStat_ACPlugUnlocked), rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S154>/If4' */

  /* RelationalOperator: '<S154>/RelationalOperator6' incorporates:
   *  Constant: '<S154>/Define9'
   *  Delay: '<S152>/Delay'
   */
  rtb_RelationalOperator6 = (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz ==
    ((uint8_T)ChrgStat_V2LPlugActive));

  /* Outputs for Atomic SubSystem: '<S154>/If3'
   *
   * Block requirements for '<S154>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:1976
   */
  /* Constant: '<S154>/Define10' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_RelationalOperator6, ((uint8_T)
    ChrgStat_V2Plug), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S154>/If3' */

  /* RelationalOperator: '<S154>/RelationalOperator5' incorporates:
   *  Constant: '<S154>/Define7'
   *  Delay: '<S153>/Delay'
   */
  rtb_RelationalOperator5 = (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50 ==
    ((uint8_T)ChrgStat_DCPlugActive));

  /* Outputs for Atomic SubSystem: '<S154>/If2'
   *
   * Block requirements for '<S154>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:1975
   */
  /* Constant: '<S154>/Define8' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_RelationalOperator5, ((uint8_T)
    ChrgStat_DCPlug), rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S154>/If2' */

  /* Logic: '<S154>/LogicalOperator2' incorporates:
   *  Constant: '<S154>/Define22'
   *  Constant: '<S154>/Define4'
   *  RelationalOperator: '<S154>/RelationalOperator3'
   *  RelationalOperator: '<S154>/RelationalOperator4'
   */
  rtb_LogicalOperator2_eriz = ((rtb_TmpSignalConversionAtR_j520 != ((uint8_T)
    ChrgStat_CC_Fault)) && (rtb_TmpSignalConversionAtR_j520 != ((uint8_T)
    ChrgStat_CCUnconnect)));

  /* Outputs for Atomic SubSystem: '<S154>/ATOM_OnDelay4' */
  /* Constant: '<S154>/Define26' incorporates:
   *  Constant: '<S154>/Define23'
   *  Constant: '<S154>/Define24'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator2_eriz,
    ((uint16_T)ChrgStat_ACPlugUntrustableTim), ((uint16_T)ChrgStat_dt),
    ((uint16_T)ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay4);

  /* End of Outputs for SubSystem: '<S154>/ATOM_OnDelay4' */

  /* Logic: '<S154>/LogicalOperator1' incorporates:
   *  Constant: '<S154>/Define3'
   *  Delay: '<S153>/Delay'
   *  RelationalOperator: '<S154>/RelationalOperator2'
   */
  rtb_LogicalOperator1_kd5j = ((CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50 ==
    ((uint8_T)ChrgStat_DCPlugActive)) && rtb_B_MiHold_fz3p);

  /* Outputs for Atomic SubSystem: '<S154>/If1'
   *
   * Block requirements for '<S154>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1974
   */
  /* Constant: '<S154>/Define6' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator1_kd5j, ((uint8_T)
    ChrgStat_ACandDCPlug), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S154>/If1' */

  /* Logic: '<S154>/LogicalOperator' incorporates:
   *  Constant: '<S154>/Define'
   *  Constant: '<S154>/Define1'
   *  Delay: '<S152>/Delay'
   *  Delay: '<S153>/Delay'
   *  RelationalOperator: '<S154>/RelationalOperator'
   *  RelationalOperator: '<S154>/RelationalOperator1'
   */
  rtb_LogicalOperator_fz22 = ((CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ow50 ==
    ((uint8_T)ChrgStat_DCPlugFault)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_hkbz == ((uint8_T)ChrgStat_ACPlugFault)));

  /* Outputs for Atomic SubSystem: '<S154>/If'
   *
   * Block requirements for '<S154>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:1973
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S154>/Define2'
   */
  Delay_10_DSTATE = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator_fz22, ((uint8_T)
    ChrgStat_PlugFault), rtb_Switch_gqfl);

  /* End of Outputs for SubSystem: '<S154>/If' */

  /* Update for Delay: '<S154>/Delay' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE = Delay_10_DSTATE;

  /* End of Outputs for SubSystem: '<S8>/ChrMgmt_PlugSts' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_PlugStsManage' */

  /* Chart: '<S2>/ChrMgmt_ChrgStsFlow' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *  Inport: '<Root>/RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A'
   *  Inport: '<Root>/RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A'
   *  Inport: '<Root>/RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum'
   *  Logic: '<S105>/LogicalOperator2'
   *  Logic: '<S76>/LogicalOperator6'
   */
  if ((uint32_T)CtAp_ChrgStat_ARID_DEF.is_active_c1_CtAp_ChrgStat == 0U) {
    CtAp_ChrgStat_ARID_DEF.is_active_c1_CtAp_ChrgStat = 1U;
    CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_Nocharge;
    if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
      CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
      CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
    } else {
      CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
      CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
      CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)ChrgStat_U8dt);
    }
  } else {
    (void)Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
      (&tmpRead_a);
    switch (CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat) {
     case CtAp_ChrgStat_IN_ACFlow:
      if (rtb_TmpSignalConversionAtR_jpoo || rtb_LogicalOperator_gyaj) {
        CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat =
          CtAp_ChrgStat_IN_ChargeComplete;
        if (rtb_TmpSignalConversionAtR_jpoo || rtb_TmpSignalConversionAtR_hpih)
        {
          CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
            CtAp_ChrgSt_IN_ChrChargingFault;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_CharingFault);
        } else {
          CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
            CtAp_Chr_IN_ChrChargingComplete;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_ChargingComplete);
        }
      } else {
        switch (CtAp_ChrgStat_ARID_DEF.is_ACFlow) {
         case CtAp_ChrgStat_IN_ChrACCharging:
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_ACCharging);
          if (tmpRead_a == ((uint8_T)ChrgStat_OBCKeepWarming)) {
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgStat_IN_ChrKeepWarm;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_KeepWarming);
          }
          break;

         case CtAp_ChrgS_IN_ChrACPlugDetected:
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_ACPlugDetected);
          (void)Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A
            (&tmpRead_2);
          if ((tmpRead_a == ((uint8_T)ChrgStat_OBCACPreheating)) && (tmpRead_2 >
               ChrMgmt_OBCOutpActvIDc_CFG)) {
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgSta_IN_ChrACPreheating;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_ACPreheating);
          } else if ((tmpRead_a == ((uint8_T)ChrgStat_OBCACCharging)) &&
                     (tmpRead_2 > ChrMgmt_OBCOutpActvIDc_CFG)) {
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgStat_IN_ChrACCharging;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_ACCharging);
          } else if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
            CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat =
              CtAp_ChrgStat_IN_Nocharge;
            if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
              CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
              CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
            } else {
              CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
              CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
              CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)
                ChrgStat_U8dt);
            }
          } else {
            /* no actions */
          }
          break;

         case CtAp_ChrgSta_IN_ChrACPreheating:
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_ACPreheating);
          if (tmpRead_a == ((uint8_T)ChrgStat_Preheat2ChargingWait)) {
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgS_IN_ChrACPlugDetected;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_ACPlugDetected);
          }
          break;

         default:
          /* case IN_ChrKeepWarm: */
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_KeepWarming);
          break;
        }
      }
      break;

     case CtAp_ChrgStat_IN_ChargeComplete:
      if (rtb_LogicalOperator3_es2b) {
        CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
          CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_ACFlow;
        CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgS_IN_ChrACPlugDetected;
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_ACPlugDetected);
      } else if (rtb_LogicalOperator3_aazt) {
        CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
          CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_DCFlow;
        CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgS_IN_ChrDCPlugDetected;
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_DCPlugDetected);
      } else if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
        CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
          CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_Nocharge;
        if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
        } else {
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
          CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)
            ChrgStat_U8dt);
        }
      } else if ((uint32_T)CtAp_ChrgStat_ARID_DEF.is_ChargeComplete ==
                 CtAp_Chr_IN_ChrChargingComplete) {
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_ChargingComplete);
      } else {
        /* case IN_ChrChargingFault: */
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_CharingFault);
      }
      break;

     case CtAp_ChrgStat_IN_DCFlow:
      /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
      /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
      /* Outputs for Atomic SubSystem: '<S11>/ChrMgmt_DCCmpl' */
      /* Outputs for Atomic SubSystem: '<S71>/ChrMgmt_DCNormCmpl'
       *
       * Block requirements for '<S71>/ChrMgmt_DCNormCmpl':
       *  1. VCU_SW_Requirements_Specification.slreqx:2007
       *  2. VCU_SW_Requirements_Specification.slreqx:2008
       *  3. VCU_SW_Requirements_Specification.slreqx:2012
       */
      if (rtb_TmpSignalConversionAtR_hpih || (rtb_TmpSignalConversionAtUDS_Pw ||
           rtb_LogicalOperator4_aybt)) {
        CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat =
          CtAp_ChrgStat_IN_ChargeComplete;
        if (rtb_TmpSignalConversionAtR_jpoo || rtb_TmpSignalConversionAtR_hpih)
        {
          CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
            CtAp_ChrgSt_IN_ChrChargingFault;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_CharingFault);
        } else {
          CtAp_ChrgStat_ARID_DEF.is_ChargeComplete =
            CtAp_Chr_IN_ChrChargingComplete;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_ChargingComplete);
        }
      } else {
        switch (CtAp_ChrgStat_ARID_DEF.is_DCFlow) {
         case CtAp_ChrgStat_IN_ChrDCCharging:
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_DCCharging);
          break;

         case CtAp_ChrgS_IN_ChrDCPlugDetected:
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_DCPlugDetected);
          (void)
            Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
            (&tmpRead_2);
          if ((rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)
                ChrgStat_DCDuringPreheating)) && (tmpRead_2 >
               ChrMgmt_DcChrgrOutpActvIDc_CFG)) {
            CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgSta_IN_ChrDCPreheating;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_DCPreheating);
          } else if ((rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)
                       ChrgStat_DCDuringCharging)) && (tmpRead_2 >
                      ChrMgmt_DcChrgrOutpActvIDc_CFG)) {
            CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgStat_IN_ChrDCCharging;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_DCCharging);
          } else if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
            CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
            CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat =
              CtAp_ChrgStat_IN_Nocharge;
            if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
              CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
              CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
            } else {
              CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
              CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
              CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)
                ChrgStat_U8dt);
            }
          } else {
            /* no actions */
          }
          break;

         default:
          /* case IN_ChrDCPreheating: */
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_DCPreheating);
          if (rtb_TmpSignalConversionAtR_d3zf == ((uint8_T)
               ChrgStat_DCDuringCharging)) {
            CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgStat_IN_ChrDCCharging;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_DCCharging);
          }
          break;
        }
      }

      /* End of Outputs for SubSystem: '<S71>/ChrMgmt_DCNormCmpl' */
      /* End of Outputs for SubSystem: '<S11>/ChrMgmt_DCCmpl' */
      /* End of Outputs for SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
      /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
      break;

     case CtAp_ChrgStat_IN_Nocharge:
      if ((uint32_T)CtAp_ChrgStat_ARID_DEF.is_Nocharge ==
          CtAp_ChrgStat_IN_ChrOffPlug) {
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
        switch (Delay_10_DSTATE) {
         case ((uint8_T)ChrgStat_V2Plug):
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
          CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_V2LFlow;
          CtAp_ChrgStat_ARID_DEF.is_V2LFlow = CtAp_Chrg_IN_ChrV2LPlugDetected;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_V2LPlugDetected);
          break;

         case ((uint8_T)ChrgStat_DCPlug):
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
          CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_DCFlow;
          CtAp_ChrgStat_ARID_DEF.is_DCFlow = CtAp_ChrgS_IN_ChrDCPlugDetected;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_DCPlugDetected);
          break;

         default:
          if ((Delay_10_DSTATE == ((uint8_T)ChrgStat_ACPlugUnlocked)) ||
              (Delay_10_DSTATE == ((uint8_T)ChrgStat_ACPlugLocked))) {
            CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
            CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_ACFlow;
            CtAp_ChrgStat_ARID_DEF.is_ACFlow = CtAp_ChrgS_IN_ChrACPlugDetected;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
              ChrgStat_ACPlugDetected);
          }
          break;
        }
      } else {
        /* case IN_INIT: */
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
        if (CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim >= ((uint8_T)
             ChrgStat_ChrgInitKeepTim)) {
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
        } else {
          CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim += ((uint8_T)
            ChrgStat_U8dt);
        }
      }
      break;

     case CtAp_ChrgStat_IN_V2LComplete:
      if (rtb_LogicalOperator3_o0wf) {
        CtAp_ChrgStat_ARID_DEF.is_V2LComplete = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_V2LFlow;
        CtAp_ChrgStat_ARID_DEF.is_V2LFlow = CtAp_Chrg_IN_ChrV2LPlugDetected;
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_V2LPlugDetected);
      } else if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
        CtAp_ChrgStat_ARID_DEF.is_V2LComplete = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_Nocharge;
        if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
        } else {
          CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
          CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)
            ChrgStat_U8dt);
        }
      } else if ((uint32_T)CtAp_ChrgStat_ARID_DEF.is_V2LComplete ==
                 CtAp_ChrgStat_IN_ChrV2LComplete) {
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_V2LComplete);
      } else {
        /* case IN_ChrV2LFault: */
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_V2LFault);
      }
      break;

     default:
      /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
      /* Outputs for Atomic SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
      /* Outputs for Atomic SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
      /* Outputs for Atomic SubSystem: '<S102>/ChrMgmt_V2LNormCmpl'
       *
       * Block requirements for '<S102>/ChrMgmt_V2LNormCmpl':
       *  1. VCU_SW_Requirements_Specification.slreqx:2019
       *  2. VCU_SW_Requirements_Specification.slreqx:2020
       */
      /* case IN_V2LFlow: */
      if (rtb_TmpSignalConversionAtR_j3ke || (rtb_TmpSignalConversionAtUDS_Pw ||
           rtb_Switch_dm1s)) {
        CtAp_ChrgStat_ARID_DEF.is_V2LFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
        CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat =
          CtAp_ChrgStat_IN_V2LComplete;
        if (rtb_TmpSignalConversionAtR_j3ke) {
          CtAp_ChrgStat_ARID_DEF.is_V2LComplete = CtAp_ChrgStat_IN_ChrV2LFault;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_V2LFault);
        } else {
          CtAp_ChrgStat_ARID_DEF.is_V2LComplete =
            CtAp_ChrgStat_IN_ChrV2LComplete;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_V2LComplete);
        }
      } else if ((uint32_T)CtAp_ChrgStat_ARID_DEF.is_V2LFlow ==
                 CtAp_ChrgS_IN_ChrV2LDischarging) {
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_V2LDischarging);
      } else {
        /* case IN_ChrV2LPlugDetected: */
        CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
          ChrgStat_V2LPlugDetected);
        if (tmpRead_a == ((uint8_T)ChrgStat_OBCDischrging)) {
          CtAp_ChrgStat_ARID_DEF.is_V2LFlow = CtAp_ChrgS_IN_ChrV2LDischarging;
          CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)
            ChrgStat_V2LDischarging);
        } else if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
          CtAp_ChrgStat_ARID_DEF.is_V2LFlow = CtAp_ChrgSta_IN_NO_ACTIVE_CHILD;
          CtAp_ChrgStat_ARID_DEF.is_c1_CtAp_ChrgStat = CtAp_ChrgStat_IN_Nocharge;
          if (Delay_10_DSTATE == ((uint8_T)ChrgStat_NoPlug)) {
            CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_ChrOffPlug;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_offplug);
          } else {
            CtAp_ChrgStat_ARID_DEF.is_Nocharge = CtAp_ChrgStat_IN_INIT;
            CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE = ((uint8_T)ChrgStat_Init);
            CtAp_ChrgStat_ARID_DEF.ChrMgmt_ChrgStayInIntTim = ((uint8_T)
              ChrgStat_U8dt);
          }
        } else {
          /* no actions */
        }
      }

      /* End of Outputs for SubSystem: '<S102>/ChrMgmt_V2LNormCmpl' */
      /* End of Outputs for SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
      /* End of Outputs for SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
      /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
      break;
    }
  }

  /* End of Chart: '<S2>/ChrMgmt_ChrgStsFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_ChrgManage' */
  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_ChrgAllwd' */
  /* Outputs for Atomic SubSystem: '<S112>/ChrMgmt_DcChrgAllwd'
   *
   * Block requirements for '<S112>/ChrMgmt_DcChrgAllwd':
   *  1. VCU_SW_Requirements_Specification.slreqx:2093
   *  2. VCU_SW_Requirements_Specification.slreqx:2094
   *  3. VCU_SW_Requirements_Specification.slreqx:2095
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  Delay: '<S114>/Delay'
   *
   * Block requirements for '<S114>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2095
   */
  rtb_B_MiHold_atek = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_invi;

  /* Logic: '<S114>/LogicalOperator3' incorporates:
   *  Constant: '<S114>/Define1'
   *  Constant: '<S114>/Define2'
   *  Constant: '<S114>/Define5'
   *  Constant: '<S114>/Define6'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S114>/LogicalOperator1'
   *  Logic: '<S114>/LogicalOperator2'
   *  Logic: '<S114>/LogicalOperator4'
   *  Logic: '<S114>/LogicalOperator6'
   *  RelationalOperator: '<S114>/RelationalOperator1'
   *  RelationalOperator: '<S114>/RelationalOperator2'
   *  RelationalOperator: '<S114>/RelationalOperator3'
   *  RelationalOperator: '<S114>/RelationalOperator4'
   *
   * Block requirements for '<S114>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2093
   *
   * Block requirements for '<S114>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:2094
   */
  CtAp_ChrgStat_ARID_DEF.Delay_7_DSTATE =
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)
       ChrgStat_ChargingComplete)) && (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE !=
      ((uint8_T)ChrgStat_CharingFault)) &&
     (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)ChrgStat_offplug)) &&
     (((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
         ChrgStat_DCPlugDetected)) && rtb_LogicalOperator3_aazt) ||
      rtb_B_MiHold_atek));

  /* Update for Delay: '<S114>/Delay' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S114>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2095
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_invi =
    CtAp_ChrgStat_ARID_DEF.Delay_7_DSTATE;

  /* End of Outputs for SubSystem: '<S112>/ChrMgmt_DcChrgAllwd' */

  /* Outputs for Atomic SubSystem: '<S112>/ChrMgmt_OBCEnaAllwd'
   *
   * Block requirements for '<S112>/ChrMgmt_OBCEnaAllwd':
   *  1. VCU_SW_Requirements_Specification.slreqx:2096
   *  2. VCU_SW_Requirements_Specification.slreqx:2097
   *  3. VCU_SW_Requirements_Specification.slreqx:2098
   *  4. VCU_SW_Requirements_Specification.slreqx:2099
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  Delay: '<S115>/Delay'
   *
   * Block requirements for '<S115>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2099
   */
  rtb_B_MiHold_atek = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_iqlh;

  /* Logic: '<S115>/LogicalOperator3' incorporates:
   *  Constant: '<S115>/Define1'
   *  Constant: '<S115>/Define10'
   *  Constant: '<S115>/Define2'
   *  Constant: '<S115>/Define3'
   *  Constant: '<S115>/Define4'
   *  Constant: '<S115>/Define5'
   *  Constant: '<S115>/Define6'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S115>/LogicalOperator'
   *  Logic: '<S115>/LogicalOperator1'
   *  Logic: '<S115>/LogicalOperator2'
   *  Logic: '<S115>/LogicalOperator4'
   *  Logic: '<S115>/LogicalOperator5'
   *  RelationalOperator: '<S115>/RelationalOperator1'
   *  RelationalOperator: '<S115>/RelationalOperator2'
   *  RelationalOperator: '<S115>/RelationalOperator3'
   *  RelationalOperator: '<S115>/RelationalOperator4'
   *  RelationalOperator: '<S115>/RelationalOperator5'
   *  RelationalOperator: '<S115>/RelationalOperator6'
   *  RelationalOperator: '<S115>/RelationalOperator7'
   *
   * Block requirements for '<S115>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2096
   *
   * Block requirements for '<S115>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:2097
   *  2. VCU_SW_Requirements_Specification.slreqx:2098
   */
  CtAp_ChrgStat_ARID_DEF.Delay_8_DSTATE =
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)
       ChrgStat_ChargingComplete)) && (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE !=
      ((uint8_T)ChrgStat_CharingFault)) &&
     (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)ChrgStat_V2LComplete)) &&
     (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)ChrgStat_V2LFault)) &&
     (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE != ((uint8_T)ChrgStat_offplug)) &&
     (((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
         ChrgStat_ACPlugDetected)) && rtb_LogicalOperator3_es2b) ||
      ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
         ChrgStat_V2LPlugDetected)) && rtb_LogicalOperator3_o0wf) ||
      rtb_B_MiHold_atek));

  /* Delay: '<S115>/Delay1' */
  rtb_Delay1_ipln = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_exvf;

  /* Outputs for Atomic SubSystem: '<S115>/If3' */
  /* Constant: '<S115>/Define9' */
  rtb_Switch_j0rz = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator3_es2b, ((uint8_T)
    ChrgStat_ChargingReq), rtb_Delay1_ipln);

  /* End of Outputs for SubSystem: '<S115>/If3' */

  /* Outputs for Atomic SubSystem: '<S115>/If2' */
  /* Constant: '<S115>/Define8' */
  rtb_Switch_gqfl = CtAp_ChrgStat_If_bdx1(rtb_LogicalOperator3_o0wf, ((uint8_T)
    ChrgStat_DischargingReq), rtb_Switch_j0rz);

  /* End of Outputs for SubSystem: '<S115>/If2' */

  /* Outputs for Atomic SubSystem: '<S115>/If1'
   *
   * Block requirements for '<S115>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:2096
   */
  /* Delay generated from: '<S2>/Delay' incorporates:
   *  Constant: '<S115>/Define7'
   */
  Delay_9_DSTATE = CtAp_ChrgStat_If_bdx1(CtAp_ChrgStat_ARID_DEF.Delay_8_DSTATE,
    rtb_Switch_gqfl, ((uint8_T)ChrgStat_Init));

  /* End of Outputs for SubSystem: '<S115>/If1' */

  /* Update for Delay: '<S115>/Delay' incorporates:
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S115>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2099
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_iqlh =
    CtAp_ChrgStat_ARID_DEF.Delay_8_DSTATE;

  /* Update for Delay: '<S115>/Delay1' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_exvf = Delay_9_DSTATE;

  /* End of Outputs for SubSystem: '<S112>/ChrMgmt_OBCEnaAllwd' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_ChrgAllwd' */

  /* Outputs for Atomic SubSystem: '<S5>/ChrMgmt_ReqLvAndHv' */
  /* Outputs for Atomic SubSystem: '<S113>/ChrMgmt_ReqHvRdy' */
  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_ACReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_ACReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19144
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  Constant: '<S121>/Define10'
   *  Constant: '<S121>/Define9'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S121>/LogicalOperator2'
   *  RelationalOperator: '<S121>/RelationalOperator4'
   *  RelationalOperator: '<S121>/RelationalOperator5'
   */
  rtb_B_MiHold_atek = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
    ChrgStat_ChargingComplete)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_CharingFault)));

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S121>/Delay'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_f50r;

  /* Logic: '<S121>/LogicalOperator6' */
  rtb_TmpSignalConversionAtUDS_Pw = (rtb_RelationalOperator_osrn &&
    rtb_B_MiHold_atek);

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S121>/Delay1'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_l1pq;

  /* Logic: '<S121>/LogicalOperator1' incorporates:
   *  Delay: '<S121>/Delay1'
   *  Logic: '<S121>/LogicalOperator4'
   *
   * Block requirements for '<S121>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:19144
   */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_l1pq = (rtb_TmpSignalConversionAtUDS_Pw ||
    (rtb_B_MiHold_atek && rtb_RelationalOperator_osrn));

  /* Logic: '<S121>/LogicalOperator' incorporates:
   *  Constant: '<S121>/Define'
   *  Constant: '<S121>/Define1'
   *  Constant: '<S121>/Define2'
   *  Constant: '<S121>/Define3'
   *  Delay: '<S121>/Delay'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S121>/RelationalOperator'
   *  RelationalOperator: '<S121>/RelationalOperator1'
   *  RelationalOperator: '<S121>/RelationalOperator2'
   *  RelationalOperator: '<S121>/RelationalOperator3'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_f50r =
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_ACPlugDetected))
     || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_ACCharging))
     || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
       ChrgStat_ACPreheating)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
      ((uint8_T)ChrgStat_KeepWarming)));

  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_ACReqHvDown' */

  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_DCReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_DCReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19143
   */
  /* RelationalOperator: '<S126>/B_MiHold' incorporates:
   *  Constant: '<S122>/Define10'
   *  Constant: '<S122>/Define9'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S122>/LogicalOperator2'
   *  RelationalOperator: '<S122>/RelationalOperator4'
   *  RelationalOperator: '<S122>/RelationalOperator5'
   */
  rtb_B_MiHold_atek = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
    ChrgStat_ChargingComplete)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_CharingFault)));

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S122>/Delay'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_mh1q;

  /* Logic: '<S122>/LogicalOperator6' */
  rtb_TmpSignalConversionAtUDS_Pw = (rtb_RelationalOperator_osrn &&
    rtb_B_MiHold_atek);

  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S122>/Delay1'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_kdsg;

  /* Logic: '<S122>/LogicalOperator1' incorporates:
   *  Delay: '<S122>/Delay1'
   *  Logic: '<S122>/LogicalOperator4'
   *
   * Block requirements for '<S122>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:19143
   */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_kdsg = (rtb_TmpSignalConversionAtUDS_Pw ||
    (rtb_B_MiHold_atek && rtb_RelationalOperator_osrn));

  /* Logic: '<S122>/LogicalOperator' incorporates:
   *  Constant: '<S122>/Define'
   *  Constant: '<S122>/Define1'
   *  Constant: '<S122>/Define2'
   *  Delay: '<S122>/Delay'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S122>/RelationalOperator'
   *  RelationalOperator: '<S122>/RelationalOperator1'
   *  RelationalOperator: '<S122>/RelationalOperator2'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_mh1q =
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_DCPlugDetected))
     || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_DCCharging))
     || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
       ChrgStat_DCPreheating)));

  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_DCReqHvDown' */

  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_PlugStsReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   */
  /* Logic: '<S123>/LogicalOperator1' incorporates:
   *  Constant: '<S123>/Define5'
   *  Constant: '<S123>/Define6'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S123>/RelationalOperator3'
   *  RelationalOperator: '<S123>/RelationalOperator4'
   */
  rtb_LogicalOperator1_cgrp = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_Init)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_offplug)));

  /* Outputs for Atomic SubSystem: '<S123>/ATOM_OnDelay1' */
  /* Constant: '<S123>/CAL1' incorporates:
   *  Constant: '<S123>/Define7'
   *  Constant: '<S123>/Define8'
   */
  rtb_B_MiHold_atek = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_cgrp,
    ChrMgmt_ChrgOffPlugHvOffReq_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_nz4o);

  /* End of Outputs for SubSystem: '<S123>/ATOM_OnDelay1' */

  /* Logic: '<S123>/LogicalOperator2' incorporates:
   *  Constant: '<S123>/Define10'
   *  Constant: '<S123>/Define13'
   *  Constant: '<S123>/Define14'
   *  Constant: '<S123>/Define9'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S123>/RelationalOperator5'
   *  RelationalOperator: '<S123>/RelationalOperator6'
   *  RelationalOperator: '<S123>/RelationalOperator7'
   *  RelationalOperator: '<S123>/RelationalOperator8'
   */
  rtb_LogicalOperator2_gk0s = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_ChargingComplete)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_CharingFault)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_V2LComplete)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_V2LFault)));

  /* Outputs for Atomic SubSystem: '<S123>/ATOM_OnDelay2' */
  /* Constant: '<S123>/CAL2' incorporates:
   *  Constant: '<S123>/Define11'
   *  Constant: '<S123>/Define12'
   */
  rtb_B_MiHold_fz3p = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator2_gk0s,
    ChrMgmt_ChrgCmplHvOffReq_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_merl);

  /* End of Outputs for SubSystem: '<S123>/ATOM_OnDelay2' */

  /* Logic: '<S123>/LogicalOperator' incorporates:
   *  Constant: '<S123>/Define'
   *  Constant: '<S123>/Define1'
   *  Constant: '<S123>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S123>/RelationalOperator'
   *  RelationalOperator: '<S123>/RelationalOperator1'
   *  RelationalOperator: '<S123>/RelationalOperator2'
   *
   * Block requirements for '<S123>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   */
  rtb_LogicalOperator_okvc = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_ACPlugDetected)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_DCPlugDetected))
    || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
    ChrgStat_V2LPlugDetected)));

  /* Outputs for Atomic SubSystem: '<S123>/ATOM_U32DebAct' */
  /* Constant: '<S123>/Define3' incorporates:
   *  Constant: '<S123>/CAL'
   */
  rtb_B_MiHold = CtAp_ChrgStat_ATOM_U32DebAct(rtb_LogicalOperator_okvc,
    ((uint16_T)ChrgStat_dt), ChrMgmt_ChrgPlugNoChrgnTmt_CFG,
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_U32DebAct);

  /* End of Outputs for SubSystem: '<S123>/ATOM_U32DebAct' */
  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown' */

  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_V2LReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_V2LReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19145
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Constant: '<S125>/Define10'
   *  Constant: '<S125>/Define9'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S125>/LogicalOperator2'
   *  RelationalOperator: '<S125>/RelationalOperator4'
   *  RelationalOperator: '<S125>/RelationalOperator5'
   */
  rtb_RelationalOperator_osrn = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_V2LComplete)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_V2LFault)));

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Delay: '<S125>/Delay'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ecu1;

  /* Logic: '<S125>/LogicalOperator6' */
  rtb_LogicalOperator6_ov2m = (rtb_B_MiHold_ncd3 && rtb_RelationalOperator_osrn);

  /* RelationalOperator: '<S131>/B_MiHold' incorporates:
   *  Delay: '<S125>/Delay1'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_pjre;

  /* Logic: '<S125>/LogicalOperator4' */
  rtb_LogicalOperator4_a22b = (rtb_RelationalOperator_osrn && rtb_B_MiHold_ncd3);

  /* Outputs for Atomic SubSystem: '<S125>/If' */
  /* Delay: '<S125>/Delay1' incorporates:
   *  Constant: '<S125>/Define2'
   */
  CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_pjre = CtAp_ChrgStat_If
    (rtb_LogicalOperator6_ov2m, ChrgStat_Active, rtb_LogicalOperator4_a22b);

  /* End of Outputs for SubSystem: '<S125>/If' */

  /* Logic: '<S125>/LogicalOperator' incorporates:
   *  Constant: '<S125>/Define'
   *  Constant: '<S125>/Define1'
   *  Delay: '<S125>/Delay'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S125>/RelationalOperator'
   *  RelationalOperator: '<S125>/RelationalOperator1'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_ecu1 =
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
       ChrgStat_V2LPlugDetected)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
      ((uint8_T)ChrgStat_V2LDischarging)));

  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_V2LReqHvDown' */

  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_ReqHvRdy'
   *
   * Block requirements for '<S119>/ChrMgmt_ReqHvRdy':
   *  1. VCU_SW_Requirements_Specification.slreqx:2088
   */
  /* RelationalOperator: '<S132>/RelationalOperator' incorporates:
   *  Delay: '<S124>/Delay'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_jyba;

  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_PlugStsReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   */
  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_DCReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_DCReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19143
   */
  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_ACReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_ACReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19144
   */
  /* Outputs for Atomic SubSystem: '<S119>/ChrMgmt_V2LReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_V2LReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:19145
   */
  /* Logic: '<S124>/LogicalOperator5' incorporates:
   *  Constant: '<S121>/Define4'
   *  Constant: '<S122>/Define4'
   *  Constant: '<S124>/Define'
   *  Constant: '<S124>/Define1'
   *  Constant: '<S124>/Define2'
   *  Constant: '<S125>/Define4'
   *  Delay: '<S121>/Delay1'
   *  Delay: '<S122>/Delay1'
   *  Delay: '<S125>/Delay1'
   *  Delay generated from: '<S2>/Delay'
   *  Logic: '<S121>/LogicalOperator3'
   *  Logic: '<S122>/LogicalOperator3'
   *  Logic: '<S123>/LogicalOperator3'
   *  Logic: '<S124>/LogicalOperator'
   *  Logic: '<S124>/LogicalOperator1'
   *  Logic: '<S124>/LogicalOperator2'
   *  Logic: '<S124>/LogicalOperator6'
   *  Logic: '<S125>/LogicalOperator3'
   *  RelationalOperator: '<S121>/RelationalOperator6'
   *  RelationalOperator: '<S122>/RelationalOperator6'
   *  RelationalOperator: '<S124>/RelationalOperator'
   *  RelationalOperator: '<S124>/RelationalOperator1'
   *  RelationalOperator: '<S124>/RelationalOperator2'
   *  RelationalOperator: '<S125>/RelationalOperator6'
   *
   * Block requirements for '<S124>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:2086
   *  2. VCU_SW_Requirements_Specification.slreqx:2089
   *
   * Block requirements for '<S123>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   *
   * Block requirements for '<S124>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   *
   * Block requirements for '<S124>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:2088
   */
  CtAp_ChrgStat_ARID_DEF.Delay_6_DSTATE = ((rtb_RelationalOperator_osrn ||
    ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_ACPlugDetected))
     || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
    ChrgStat_DCPlugDetected)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_V2LPlugDetected)))) && (!rtb_B_MiHold &&
    !rtb_B_MiHold_atek && !rtb_B_MiHold_fz3p &&
    (!CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_kdsg ||
     (rtb_TmpSignalConversionAtR_ljvg != ((uint8_T)ChrgStat_RelayOpen))) &&
    (!CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_l1pq ||
     (rtb_TmpSignalConversionAtR_gb1h != ((uint8_T)ChrgStat_Standby))) &&
    (!CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE_pjre ||
     (rtb_TmpSignalConversionAtR_gb1h != ((uint8_T)ChrgStat_Standby)))));

  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_V2LReqHvDown' */
  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_ACReqHvDown' */
  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_DCReqHvDown' */
  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown' */

  /* Update for Delay: '<S124>/Delay' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_jyba =
    CtAp_ChrgStat_ARID_DEF.Delay_6_DSTATE;

  /* End of Outputs for SubSystem: '<S119>/ChrMgmt_ReqHvRdy' */
  /* End of Outputs for SubSystem: '<S113>/ChrMgmt_ReqHvRdy' */

  /* Outputs for Atomic SubSystem: '<S113>/ChrMgmt_ReqLvActv'
   *
   * Block requirements for '<S113>/ChrMgmt_ReqLvActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2090
   *  2. VCU_SW_Requirements_Specification.slreqx:2091
   *  3. VCU_SW_Requirements_Specification.slreqx:2092
   */
  /* Logic: '<S120>/LogicalOperator1' incorporates:
   *  Constant: '<S120>/Define5'
   *  Constant: '<S120>/Define6'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S120>/RelationalOperator3'
   *  RelationalOperator: '<S120>/RelationalOperator4'
   */
  rtb_LogicalOperator1_d4am = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_Init)) || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_offplug)));

  /* Outputs for Atomic SubSystem: '<S120>/ATOM_OnDelay1' */
  /* Constant: '<S120>/CAL1' incorporates:
   *  Constant: '<S120>/Define7'
   *  Constant: '<S120>/Define8'
   */
  rtb_B_MiHold = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator1_d4am,
    ChrMgmt_ChrgOffPlugHvOffReq_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_g1sm);

  /* End of Outputs for SubSystem: '<S120>/ATOM_OnDelay1' */

  /* Logic: '<S120>/LogicalOperator2' incorporates:
   *  Constant: '<S120>/Define10'
   *  Constant: '<S120>/Define13'
   *  Constant: '<S120>/Define14'
   *  Constant: '<S120>/Define9'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S120>/RelationalOperator5'
   *  RelationalOperator: '<S120>/RelationalOperator6'
   *  RelationalOperator: '<S120>/RelationalOperator7'
   *  RelationalOperator: '<S120>/RelationalOperator8'
   */
  rtb_LogicalOperator2_gxzz = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_ChargingComplete)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_CharingFault)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_V2LComplete)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_V2LFault)));

  /* Outputs for Atomic SubSystem: '<S120>/ATOM_OnDelay2' */
  /* Constant: '<S120>/CAL2' incorporates:
   *  Constant: '<S120>/Define11'
   *  Constant: '<S120>/Define12'
   */
  rtb_B_MiHold_ncd3 = CtAp_ChrgStat_ATOM_OnDelay(rtb_LogicalOperator2_gxzz,
    ChrMgmt_ChrgCmplHvOffReq_CFG, ((uint16_T)ChrgStat_dt), ((uint16_T)
    ChrgStat_U16Zero), &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_g2ml);

  /* End of Outputs for SubSystem: '<S120>/ATOM_OnDelay2' */

  /* Logic: '<S120>/LogicalOperator' incorporates:
   *  Constant: '<S120>/Define'
   *  Constant: '<S120>/Define1'
   *  Constant: '<S120>/Define2'
   *  Delay generated from: '<S2>/Delay'
   *  RelationalOperator: '<S120>/RelationalOperator'
   *  RelationalOperator: '<S120>/RelationalOperator1'
   *  RelationalOperator: '<S120>/RelationalOperator2'
   */
  rtb_LogicalOperator_mp5a = ((CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE ==
    ((uint8_T)ChrgStat_ACPlugDetected)) ||
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)ChrgStat_DCPlugDetected))
    || (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE == ((uint8_T)
    ChrgStat_V2LPlugDetected)));

  /* Outputs for Atomic SubSystem: '<S120>/ATOM_U32DebAct1' */
  /* Constant: '<S120>/Define3' incorporates:
   *  Constant: '<S120>/CAL'
   */
  rtb_RelationalOperator_osrn = CtAp_ChrgStat_ATOM_U32DebAct
    (rtb_LogicalOperator_mp5a, ((uint16_T)ChrgStat_dt),
     ChrMgmt_ChrgPlugNoChrgnTmt_CFG,
     &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_U32DebAct1);

  /* End of Outputs for SubSystem: '<S120>/ATOM_U32DebAct1' */

  /* Delay: '<S120>/Delay' incorporates:
   *  Constant: '<S120>/Define15'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S120>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2090
   */
  if (CtAp_ChrgStat_ARID_DEF.icLoad) {
    CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_g2ro = ChrgStat_Active;
  }

  rtb_TmpSignalConversionAtUDS_Pw = CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_g2ro;

  /* End of Delay: '<S120>/Delay' */

  /* Update for Delay: '<S120>/Delay' incorporates:
   *  Logic: '<S120>/LogicalOperator3'
   *  Logic: '<S120>/LogicalOperator4'
   *
   * Block requirements for '<S120>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2090
   *
   * Block requirements for '<S120>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:2091
   *  2. VCU_SW_Requirements_Specification.slreqx:2092
   */
  CtAp_ChrgStat_ARID_DEF.icLoad = false;
  CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_g2ro = (!rtb_RelationalOperator_osrn &&
    !rtb_B_MiHold && !rtb_B_MiHold_ncd3);

  /* End of Outputs for SubSystem: '<S113>/ChrMgmt_ReqLvActv' */
  /* End of Outputs for SubSystem: '<S5>/ChrMgmt_ReqLvAndHv' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_ChrgManage' */

  /* Update for Delay generated from: '<S2>/Delay' incorporates:
   *  Delay: '<S145>/Delay1'
   */
  CtAp_ChrgStat_ARID_DEF.Delay_15_DSTATE = CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* Update for Delay generated from: '<S2>/Delay' incorporates:
   *  DataTypeConversion: '<S145>/Data Type Conversion'
   *
   * Block requirements for '<S145>/Data Type Conversion':
   *  1. VCU_SW_Requirements_Specification.slreqx:1952
   */
  CtAp_ChrgStat_ARID_DEF.Delay_16_DSTATE =
    CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE;

  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */

  /* Update for Delay generated from: '<S2>/Delay' incorporates:
   *  Delay: '<S75>/Delay'
   *
   * Block requirements for '<S75>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2006
   */
  CtAp_ChrgStat_ARID_DEF.Delay_3_DSTATE =
    CtAp_ChrgStat_ARID_DEF.Delay_DSTATE_avpi;

  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum
    (Delay_19_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus'
   *  DataTypeConversion: '<S181>/DataTypeConversion'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec.ChrMgmt_MonResCC2UDcErrDTC
    = CtAp_ChrgStat_ARID_DEF.Delay_22_DSTATE;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec.ChrMgmt_ErrStatCC2UDcErrDTC
    = CtAp_ChrgStat_ARID_DEF.Delay_23_DSTATE;

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ErrorHandler' */
  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_CC2UDcErrDTC' */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec.ChrMgmt_ErrResCC2UDcErrDTC
    = ChrMgmt_ErrResCC2UDcErrDTC;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_CC2UDcErrDTC' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_CC2UDcErr' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus' incorporates:
   *  DataTypeConversion: '<S180>/DataTypeConversion'
   *  DataTypeConversion: '<S180>/DataTypeConversion1'
   *  DataTypeConversion: '<S180>/DataTypeConversion2'
   *  DataTypeConversion: '<S180>/DataTypeConversion3'
   */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcErr_Bus_tec.ChrMgmt_MonStatCC2UDcErr
    = rtb_True_dtgp;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcErr_Bus_tec.ChrMgmt_MonResCC2UDcErr
    = rtb_Switch1_bkdw;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcErr_Bus_tec.ChrMgmt_ErrStatCC2UDcErr
    = rtb_Switch2;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcErr_Bus_tec.ChrMgmt_ErrResCC2UDcErr
    = rtb_Switch6_hurk;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_CC2UDcErr' */
  /* End of Outputs for SubSystem: '<S2>/ErrorHandler' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum
    (Delay_18_DSTATE);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/MEMFLT'
   *
   * Block requirements for '<S7>/MEMFLT':
   *  1. VCU_SW_Requirements_Specification.slreqx:1953
   *  2. VCU_SW_Requirements_Specification.slreqx:1954
   *  3. VCU_SW_Requirements_Specification.slreqx:1955
   *  4. VCU_SW_Requirements_Specification.slreqx:1956
   *  5. VCU_SW_Requirements_Specification.slreqx:1957
   *  6. VCU_SW_Requirements_Specification.slreqx:1958
   */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg' incorporates:
   *  DataTypeConversion: '<S135>/Data Type Conversion'
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg
    (Delay_12_DSTATE != 0U);

  /* End of Outputs for SubSystem: '<S7>/MEMFLT' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum
    (Delay_20_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (CtAp_ChrgStat_ARID_DEF.Delay_4_DSTATE);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ErrorHandler' */
  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErrDTC' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus' incorporates:
   *  DataTypeConversion: '<S187>/DataTypeConversion'
   */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus.ChrMgmt_ErrResChrgStsJmpErrDTC
    = ChrMgmt_ErrResChrgStsJmpErrDTC;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErrDTC' */

  /* Outputs for Atomic SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErr' */
  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus'
   *  DataTypeConversion: '<S186>/DataTypeConversion'
   *  DataTypeConversion: '<S186>/DataTypeConversion1'
   *  DataTypeConversion: '<S186>/DataTypeConversion2'
   *  Delay generated from: '<S2>/Delay'
   */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpErr_Bus.ChrMgmt_MonStatChrgStsJmpErr
    = rtb_True_gids;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpErr_Bus.ChrMgmt_MonResChrgStsJmpErr
    = rtb_Switch1_eiji;
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpErr_Bus.ChrMgmt_ErrStatChrgStsJmpErr
    = rtb_Switch8_nwof;

  /* End of Outputs for SubSystem: '<S9>/ChrMgmt_ChrgStsJmpErr' */
  /* End of Outputs for SubSystem: '<S2>/ErrorHandler' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpErr_Bus.ChrMgmt_ErrResChrgStsJmpErr
    = CtAp_ChrgStat_ARID_DEF.Delay_32_DSTATE;

  /* Outport: '<Root>/RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct' incorporates:
   *  Delay: '<S145>/Delay1'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct
    (CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg
    (CtAp_ChrgStat_ARID_DEF.Delay_7_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum
    (Delay_1_DSTATE);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* Outport: '<Root>/RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct' incorporates:
   *  DataTypeConversion: '<S145>/Data Type Conversion'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S145>/Data Type Conversion':
   *  1. VCU_SW_Requirements_Specification.slreqx:1952
   */
  (void)Rte_Write_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct
    (CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE);

  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */

  /* Outport: '<Root>/RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg
    (Delay_2_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)
    Rte_Write_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum
    (Delay_9_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg
    (CtAp_ChrgStat_ARID_DEF.Delay_8_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum
    (Delay_10_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg
    (CtAp_ChrgStat_ARID_DEF.Delay_6_DSTATE);

  /* Outport: '<Root>/RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg' incorporates:
   *  Delay generated from: '<S2>/Delay'
   */
  (void)Rte_Write_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg
    (rtb_TmpSignalConversionAtUDS_Pw);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* Outputs for Atomic SubSystem: '<S7>/SOC' */
  /* Outputs for Atomic SubSystem: '<S136>/ChrMgmt_SOCSet'
   *
   * Block requirements for '<S136>/ChrMgmt_SOCSet':
   *  1. VCU_SW_Requirements_Specification.slreqx:1941
   *  2. VCU_SW_Requirements_Specification.slreqx:1942
   *  3. VCU_SW_Requirements_Specification.slreqx:1943
   *  4. VCU_SW_Requirements_Specification.slreqx:1944
   *  5. VCU_SW_Requirements_Specification.slreqx:1949
   *  6. VCU_SW_Requirements_Specification.slreqx:1950
   *  7. VCU_SW_Requirements_Specification.slreqx:1951
   *  8. VCU_SW_Requirements_Specification.slreqx:1952
   */
  /* Outport: '<Root>/RTE_RP_ChrgStatInfo_tec_ChrgStatInfo_write' incorporates:
   *  BusCreator generated from: '<Root>/RTE_RP_ChrgStatInfo_tec_ChrgStatInfo_write'
   *  Constant: '<S7>/Define'
   *  DataTypeConversion: '<S145>/Data Type Conversion1'
   *  Delay: '<S145>/Delay1'
   *  Delay generated from: '<S2>/Delay'
   *
   * Block requirements for '<S145>/Data Type Conversion1':
   *  1. VCU_SW_Requirements_Specification.slreqx:1944
   */
  CtAp_ChrgStat_ARID_DEF.RTE_RP_ChrgStatInfo_tec_ChrgSta.ChrMgmt_ChrgTarSOC_pct =
    CtAp_ChrgStat_ARID_DEF.Delay1_DSTATE;

  /* End of Outputs for SubSystem: '<S136>/ChrMgmt_SOCSet' */
  /* End of Outputs for SubSystem: '<S7>/SOC' */
  /* End of Outputs for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  CtAp_ChrgStat_ARID_DEF.RTE_RP_ChrgStatInfo_tec_ChrgSta.ChrMgmt_ChrgMemFlt_Flg =
    Delay_12_DSTATE;
  CtAp_ChrgStat_ARID_DEF.RTE_RP_ChrgStatInfo_tec_ChrgSta.ChrMgmt_DchaAbortSOC_pct
    = CtAp_ChrgStat_ARID_DEF.Delay_13_DSTATE;
  CtAp_ChrgStat_ARID_DEF.RTE_RP_ChrgStatInfo_tec_ChrgSta.ChrMgmt_FillAddress =
    ((uint8_T)ChrgStat_NoDisplay);
  (void)Rte_Write_RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus
    (&CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec);
  (void)Rte_Write_RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus
    (&CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_CC2UDcErr_Bus_tec);
  (void)
    Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus
    (&CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus);
  (void)Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus(
    &CtAp_ChrgStat_ARID_DEF.RTE_P_ChrMgmt_ChrgStsJmpErr_Bus);
  (void)Rte_Write_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo
    (&CtAp_ChrgStat_ARID_DEF.RTE_RP_ChrgStatInfo_tec_ChrgSta);
}

#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgStat_START_SEC_VAR_CONST_8
#include "CtAp_ChrgStat_MemMap.h"

void R_ChrgStat_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChrMgmt_ErrResChrgStsJmpErrDTC = false;
  ChrMgmt_DCCmplTCUErr_Flg = false;
  ChrMgmt_DCCmplStsErr_Flg = false;
  ChrMgmt_DCCmplRlyErr_Flg = false;
  ChrMgmt_DCCmplDTCErr_Flg = false;
  ChrMgmt_DCCmplDCDCErr_Flg = false;
  ChrMgmt_ACCmplTCUErr_Flg = false;
  ChrMgmt_ACCmplStsErr_Flg = false;
  ChrMgmt_ACCmplPrheatPosErr_Flg = false;
  ChrMgmt_ACCmplPlugErr_Flg = false;
  ChrMgmt_ACCmplDTCErr_Flg = false;
  ChrMgmt_ACCmplDCDCErr_Flg = false;
  ChrMgmt_ACChCmplTCUErr_Flg = false;
  ChrMgmt_ACChCmplStsErr_Flg = false;
  ChrMgmt_ACChCmplPosRlyErr_Flg = false;
  ChrMgmt_ACChCmplPlugStsErr_Flg = false;
  ChrMgmt_ACChCmplDCDCErr_Flg = false;
  ChrMgmt_ErrResCC2UDcErrDTC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ChrgStat_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ChrgStat_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_NVMStsManage' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/MEMFLT'
   *
   * Block requirements for '<S7>/MEMFLT':
   *  1. VCU_SW_Requirements_Specification.slreqx:1953
   *  2. VCU_SW_Requirements_Specification.slreqx:1954
   *  3. VCU_SW_Requirements_Specification.slreqx:1955
   *  4. VCU_SW_Requirements_Specification.slreqx:1956
   *  5. VCU_SW_Requirements_Specification.slreqx:1957
   *  6. VCU_SW_Requirements_Specification.slreqx:1958
   */
  /* SystemInitialize for Atomic SubSystem: '<S135>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_fqdq);

  /* End of SystemInitialize for SubSystem: '<S135>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S7>/MEMFLT' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_NVMStsManage' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/ChrMgmt_ACChrgStsManage' */
  /* SystemInitialize for Atomic SubSystem: '<S10>/ChrMgmt_ACCmpl' */
  /* SystemInitialize for Atomic SubSystem: '<S15>/ChrMgmt_ACPlugAbNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACPlugAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1997
   */
  /* SystemInitialize for Atomic SubSystem: '<S21>/ChrMgmt_ACCmplStsErr' */
  /* SystemInitialize for Atomic SubSystem: '<S54>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_guug);

  /* End of SystemInitialize for SubSystem: '<S54>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S21>/ChrMgmt_ACCmplStsErr' */
  /* End of SystemInitialize for SubSystem: '<S15>/ChrMgmt_ACPlugAbNormCmpl' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChrMgmt_ACPChrgnAbNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACPChrgnAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1998
   */
  /* SystemInitialize for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplPlugStsErr' */
  /* SystemInitialize for Atomic SubSystem: '<S30>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_dham);

  /* End of SystemInitialize for SubSystem: '<S30>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S20>/ChrMgmt_ACCmplPlugStsErr' */

  /* SystemInitialize for Atomic SubSystem: '<S20>/ChrMgmt_ACCmplStsErr' */
  /* SystemInitialize for Atomic SubSystem: '<S32>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_ldqo);

  /* End of SystemInitialize for SubSystem: '<S32>/ATOM_OnDelay2' */
  /* End of SystemInitialize for SubSystem: '<S20>/ChrMgmt_ACCmplStsErr' */
  /* End of SystemInitialize for SubSystem: '<S15>/ChrMgmt_ACPChrgnAbNormCmpl' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChrMgmt_ACChrgnNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACChrgnNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1994
   */
  /* SystemInitialize for Atomic SubSystem: '<S18>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_lxo5);

  /* End of SystemInitialize for SubSystem: '<S18>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S18>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_dype);

  /* End of SystemInitialize for SubSystem: '<S18>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S15>/ChrMgmt_ACChrgnNormCmpl' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChrMgmt_ACWarmNormCmpl'
   *
   * Block requirements for '<S15>/ChrMgmt_ACWarmNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:1995
   */
  /* SystemInitialize for Atomic SubSystem: '<S23>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_dhmr);

  /* End of SystemInitialize for SubSystem: '<S23>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S23>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_jwzv);

  /* End of SystemInitialize for SubSystem: '<S23>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S15>/ChrMgmt_ACWarmNormCmpl' */
  /* End of SystemInitialize for SubSystem: '<S10>/ChrMgmt_ACCmpl' */
  /* End of SystemInitialize for SubSystem: '<S4>/ChrMgmt_ACChrgStsManage' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */
  /* SystemInitialize for Atomic SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* SystemInitialize for Atomic SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl'
   *
   * Block requirements for '<S71>/ChrMgmt_ChrgnDCAbNormCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:2010
   *  2. VCU_SW_Requirements_Specification.slreqx:2011
   */
  /* SystemInitialize for Atomic SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */
  /* SystemInitialize for Atomic SubSystem: '<S82>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_llw0);

  /* End of SystemInitialize for SubSystem: '<S82>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S73>/ChrMgmt_DCCmplPlugErr' */
  /* End of SystemInitialize for SubSystem: '<S71>/ChrMgmt_ChrgnDCAbNormCmpl' */
  /* End of SystemInitialize for SubSystem: '<S11>/ChrMgmt_DCCmpl' */
  /* End of SystemInitialize for SubSystem: '<S4>/ChrMgmt_DCChrgStsManage' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* SystemInitialize for Atomic SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
  /* SystemInitialize for Atomic SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */
  /* SystemInitialize for Atomic SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr'
   *
   * Block requirements for '<S104>/ChrMgmt_V2LPlugStsErr':
   *  1. VCU_SW_Requirements_Specification.slreqx:2022
   */
  /* SystemInitialize for Atomic SubSystem: '<S108>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_ppxr);

  /* End of SystemInitialize for SubSystem: '<S108>/ATOM_OnDelay' */
  /* End of SystemInitialize for SubSystem: '<S104>/ChrMgmt_V2LPlugStsErr' */
  /* End of SystemInitialize for SubSystem: '<S102>/ChrMgmt_V2LAbNormCmpl' */
  /* End of SystemInitialize for SubSystem: '<S12>/ChrMgmt_V2LNormCmpl' */
  /* End of SystemInitialize for SubSystem: '<S4>/ChrMgmt_V2lChrgStsManage' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_ChrgCtrlManage' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_PlugStsManage' */
  /* SystemInitialize for Atomic SubSystem: '<S8>/ChrMgmt_ACPlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_ACPlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1968
   *  2. VCU_SW_Requirements_Specification.slreqx:1969
   *  3. VCU_SW_Requirements_Specification.slreqx:1970
   *  4. VCU_SW_Requirements_Specification.slreqx:1971
   *  5. VCU_SW_Requirements_Specification.slreqx:1972
   */
  /* SystemInitialize for Atomic SubSystem: '<S152>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay_cv5h);

  /* End of SystemInitialize for SubSystem: '<S152>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S152>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_pbm3);

  /* End of SystemInitialize for SubSystem: '<S152>/ATOM_OnDelay1' */

  /* SystemInitialize for Atomic SubSystem: '<S152>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_bhxx);

  /* End of SystemInitialize for SubSystem: '<S152>/ATOM_OnDelay2' */

  /* SystemInitialize for Atomic SubSystem: '<S152>/ATOM_OnDelay3' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay3);

  /* End of SystemInitialize for SubSystem: '<S152>/ATOM_OnDelay3' */
  /* End of SystemInitialize for SubSystem: '<S8>/ChrMgmt_ACPlugSts' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/ChrMgmt_DCPlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_DCPlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1964
   *  2. VCU_SW_Requirements_Specification.slreqx:1965
   *  3. VCU_SW_Requirements_Specification.slreqx:1966
   *  4. VCU_SW_Requirements_Specification.slreqx:1967
   */
  /* SystemInitialize for Atomic SubSystem: '<S153>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_cxar);

  /* End of SystemInitialize for SubSystem: '<S153>/ATOM_OnDelay2' */

  /* SystemInitialize for Atomic SubSystem: '<S153>/ATOM_OnDelay' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay);

  /* End of SystemInitialize for SubSystem: '<S153>/ATOM_OnDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S153>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1);

  /* End of SystemInitialize for SubSystem: '<S153>/ATOM_OnDelay1' */
  /* End of SystemInitialize for SubSystem: '<S8>/ChrMgmt_DCPlugSts' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/ChrMgmt_PlugSts'
   *
   * Block requirements for '<S8>/ChrMgmt_PlugSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:1973
   *  2. VCU_SW_Requirements_Specification.slreqx:1974
   *  3. VCU_SW_Requirements_Specification.slreqx:1975
   *  4. VCU_SW_Requirements_Specification.slreqx:1976
   *  5. VCU_SW_Requirements_Specification.slreqx:1977
   *  6. VCU_SW_Requirements_Specification.slreqx:1978
   *  7. VCU_SW_Requirements_Specification.slreqx:1979
   *  8. VCU_SW_Requirements_Specification.slreqx:13232
   */
  /* SystemInitialize for Atomic SubSystem: '<S154>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2);

  /* End of SystemInitialize for SubSystem: '<S154>/ATOM_OnDelay2' */

  /* SystemInitialize for Atomic SubSystem: '<S154>/ATOM_OnDelay5' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay5);

  /* End of SystemInitialize for SubSystem: '<S154>/ATOM_OnDelay5' */

  /* SystemInitialize for Atomic SubSystem: '<S154>/ATOM_OnDelay4' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay4);

  /* End of SystemInitialize for SubSystem: '<S154>/ATOM_OnDelay4' */
  /* End of SystemInitialize for SubSystem: '<S8>/ChrMgmt_PlugSts' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_PlugStsManage' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/ChrMgmt_ChrgManage' */
  /* SystemInitialize for Atomic SubSystem: '<S5>/ChrMgmt_ReqLvAndHv' */
  /* SystemInitialize for Atomic SubSystem: '<S113>/ChrMgmt_ReqHvRdy' */
  /* SystemInitialize for Atomic SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown'
   *
   * Block requirements for '<S119>/ChrMgmt_PlugStsReqHvDown':
   *  1. VCU_SW_Requirements_Specification.slreqx:2087
   */
  /* SystemInitialize for Atomic SubSystem: '<S123>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_nz4o);

  /* End of SystemInitialize for SubSystem: '<S123>/ATOM_OnDelay1' */

  /* SystemInitialize for Atomic SubSystem: '<S123>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_merl);

  /* End of SystemInitialize for SubSystem: '<S123>/ATOM_OnDelay2' */
  /* End of SystemInitialize for SubSystem: '<S119>/ChrMgmt_PlugStsReqHvDown' */
  /* End of SystemInitialize for SubSystem: '<S113>/ChrMgmt_ReqHvRdy' */

  /* SystemInitialize for Atomic SubSystem: '<S113>/ChrMgmt_ReqLvActv'
   *
   * Block requirements for '<S113>/ChrMgmt_ReqLvActv':
   *  1. VCU_SW_Requirements_Specification.slreqx:2090
   *  2. VCU_SW_Requirements_Specification.slreqx:2091
   *  3. VCU_SW_Requirements_Specification.slreqx:2092
   */
  /* InitializeConditions for Delay: '<S120>/Delay'
   *
   * Block requirements for '<S120>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:2090
   */
  CtAp_ChrgStat_ARID_DEF.icLoad = true;

  /* SystemInitialize for Atomic SubSystem: '<S120>/ATOM_OnDelay1' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay1_g1sm);

  /* End of SystemInitialize for SubSystem: '<S120>/ATOM_OnDelay1' */

  /* SystemInitialize for Atomic SubSystem: '<S120>/ATOM_OnDelay2' */
  CtAp_ChrgStat_ATOM_OnDelay_Init(((uint16_T)0U),
    &CtAp_ChrgStat_ARID_DEF.ARID_DEF_ATOM_OnDelay2_g2ml);

  /* End of SystemInitialize for SubSystem: '<S120>/ATOM_OnDelay2' */
  /* End of SystemInitialize for SubSystem: '<S113>/ChrMgmt_ReqLvActv' */
  /* End of SystemInitialize for SubSystem: '<S5>/ChrMgmt_ReqLvAndHv' */
  /* End of SystemInitialize for SubSystem: '<S2>/ChrMgmt_ChrgManage' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ChrgStat_Cyclic_50ms_sys' */
}

#define CtAp_ChrgStat_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgStat_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
