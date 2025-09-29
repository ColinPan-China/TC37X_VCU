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
 *  Filename:           CtAp_BrkMgmt.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_BrkMgmt
 *  Model Version:      1.144
 *  Model Author:       Mike Ni - Fri Aug 16 09:59:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 09:13:06 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Sep 10 14:51:20 2025
 *
 *
 *******************************************************************************/
#include "CtAp_BrkMgmt.h"
#include "rtwtypes.h"
#include "CtAp_BrkMgmt_private.h"
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "CtAp_BrkMgmt_Glb.h"
#include "CtAp_BrkMgmt_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static uint8_T BrkMgmt_PrevBrkCmpWarn_Enum;
                                   /* '<S13>/ChassisMgmt_PrevBrkCmpWarn_Enum' */

/* last cycle value ChassisMgmt_BrkCmpWarn_Enum */
static boolean_T BrkMgmt_PrevErrResIBSRbsDesTqOverFltInfo_Flg;
                       /* '<S6>/ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg' */

/* FUSA FAULT RESULT */
#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"

ARID_DEF_CtAp_BrkMgmt_T CtAp_BrkMgmt_ARID_DEF;

#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* System initialize for atomic system: '<S14>/ATOM_RS_FF' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

void CtAp_BrkMgmt_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T *CtAp_BrkMgmt__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Output and update for atomic system: '<S14>/ATOM_RS_FF' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

boolean_T CtAp_BrkMgmt_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T *CtAp_BrkMgmt__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S17>/LogOp2' incorporates:
   *  Logic: '<S17>/LogOp'
   *  Logic: '<S17>/LogOp4'
   *  UnitDelay: '<S17>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S || CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S15>/ATOM_TimeCnt'
 *    '<S16>/ATOM_TimeCnt'
 */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

boolean_T CtAp_BrkMgmt_ATOM_TimeCnt(boolean_T rtu_In, real32_T rtu_RunStep_C,
  real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Br_T
  *CtAp_BrkMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S18>/Add1' incorporates:
   *  DataTypeConversion: '<S18>/Data Type Conversion'
   *  DataTypeConversion: '<S18>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)((uint16_T)rtu_MaxTime_C) + (uint32_T)
                        ((uint16_T)rtu_RunStep_C));

  /* Switch: '<S18>/Switch' */
  if (rtu_In) {
    /* Sum: '<S18>/Add' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     *  UnitDelay: '<S18>/Delay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)((uint16_T)
      rtu_RunStep_C) + (uint32_T)CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S18>/Min' */
    if (rtb_Add1 <= CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S18>/Add' */
      CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S18>/Min' */
  } else {
    /* Sum: '<S18>/Add' incorporates:
     *  Constant: '<S18>/Constant'
     *  UnitDelay: '<S18>/Delay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S18>/Switch' */

  /* RelationalOperator: '<S18>/Relational Operator' incorporates:
   *  UnitDelay: '<S18>/Delay'
   */
  return CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S23>/If'
 *    '<S23>/If1'
 */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

real32_T CtAp_BrkMgmt_If(boolean_T rtu_if, real32_T rtu_then, real32_T rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S28>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S28>/Switch' */
  return rty_Out1_0;
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Output and update for atomic system: '<S31>/ATOM_TimeCnt' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

boolean_T CtAp_BrkMgmt_ATOM_TimeCnt_dw0o(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_Ct_ihho_T
  *CtAp_BrkMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S33>/Add1' incorporates:
   *  DataTypeConversion: '<S33>/Data Type Conversion'
   *  DataTypeConversion: '<S33>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S33>/Switch' */
  if (rtu_In) {
    /* Sum: '<S33>/Add' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     *  UnitDelay: '<S33>/Delay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S33>/Min' */
    if (rtb_Add1 <= CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S33>/Add' */
      CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S33>/Min' */
  } else {
    /* Sum: '<S33>/Add' incorporates:
     *  Constant: '<S33>/Constant'
     *  UnitDelay: '<S33>/Delay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S33>/Switch' */

  /* RelationalOperator: '<S33>/Relational Operator' incorporates:
   *  UnitDelay: '<S33>/Delay'
   */
  return CtAp_BrkMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* System initialize for atomic system: '<S31>/NoReset' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

void CtAp_BrkMgmt_NoReset_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S34>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S35>/Switch6' incorporates:
   *  Outport: '<S35>/ErrorRes'
   */
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_ErrResIBSRbsDesTqOverFlt_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S34>/ErrorHandleSysU16' */
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Output and update for atomic system: '<S31>/NoReset' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

void CtAp_BrkMgmt_NoReset(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_NoReset_CtAp_BrkMgmt_T *CtAp_BrkMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S34>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S34>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     *  Constant: '<S35>/Constant4'
     */
    if (rtu_SetCondition) {
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S35>/Switch' */

    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S35>/Constant5'
     *  RelationalOperator: '<S35>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      uint16_T u0;

      /* Sum: '<S36>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S36>/Sum' incorporates:
       *  UnitDelay: '<S36>/UnitDelay'
       */
      CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S36>/MinMax' */
      if (u0 <= CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S36>/Sum' */
        CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S36>/MinMax' */
    } else {
      /* Sum: '<S36>/Sum' incorporates:
       *  Constant: '<S35>/Constant37'
       *  UnitDelay: '<S36>/UnitDelay'
       */
      CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Switch: '<S35>/Switch8' incorporates:
     *  Constant: '<S35>/Constant6'
     *  Constant: '<S35>/DEBOUNCING'
     *  Constant: '<S35>/DEBOUNCING_F'
     *  RelationalOperator: '<S35>/Equal6'
     *  RelationalOperator: '<S36>/B_MiHold'
     *  Switch: '<S35>/Switch2'
     *  UnitDelay: '<S36>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      /* Switch: '<S35>/Switch2' incorporates:
       *  Constant: '<S35>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)3U);
    }

    /* End of Switch: '<S35>/Switch8' */

    /* Switch: '<S35>/Switch6' incorporates:
     *  Constant: '<S35>/Constant30'
     *  RelationalOperator: '<S35>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S35>/Switch6' incorporates:
       *  Constant: '<S35>/Constant32'
       */
      Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_ErrResIBSRbsDesTqOverFlt_Flg = true;
    }

    /* End of Switch: '<S35>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S34>/ErrorHandleSysU16' */
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Output and update for atomic system: '<S32>/NoEnableAndReset' */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

void CtAp_BrkMgmt_NoEnableAndReset(boolean_T rtu_SetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes,
  uint8_T *rty_ErrStat, ARID_DEF_NoEnableAndReset_CtA_T
  *CtAp_BrkMgmt__ARID_DEF_arg)
{
  boolean_T rtb_Equal2_oaqz;

  /* Constant: '<S37>/True' */
  *rty_MonStat = true;

  /* Switch: '<S38>/Switch' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S38>/Constant4'
   */
  if (rtu_SetCondition) {
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S38>/Switch' */

  /* RelationalOperator: '<S38>/Equal2' incorporates:
   *  Constant: '<S38>/Constant5'
   */
  rtb_Equal2_oaqz = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S39>/Switch1' */
  if (rtb_Equal2_oaqz) {
    uint16_T u0;

    /* Sum: '<S39>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S39>/Sum' incorporates:
     *  UnitDelay: '<S39>/UnitDelay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S39>/MinMax' */
    if (u0 <= CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S39>/Sum' */
      CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S39>/MinMax' */
  } else {
    /* Sum: '<S39>/Sum' incorporates:
     *  Constant: '<S38>/Constant37'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S39>/Switch1' */

  /* RelationalOperator: '<S38>/Equal6' incorporates:
   *  Constant: '<S38>/Constant6'
   */
  rtb_Equal2_oaqz = (*rty_MonRes == ((uint8_T)2U));

  /* Switch: '<S38>/Switch8' incorporates:
   *  Constant: '<S38>/DEBOUNCING'
   *  Constant: '<S38>/DEBOUNCING_F'
   *  RelationalOperator: '<S39>/B_MiHold'
   *  Switch: '<S38>/Switch2'
   *  UnitDelay: '<S39>/UnitDelay'
   */
  if (rtb_Equal2_oaqz) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (CtAp_BrkMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    /* Switch: '<S38>/Switch2' incorporates:
     *  Constant: '<S38>/FAILED'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)3U);
  }

  /* End of Switch: '<S38>/Switch8' */

  /* RelationalOperator: '<S38>/Equal3' incorporates:
   *  Constant: '<S38>/Constant30'
   */
  rtb_Equal2_oaqz = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S38>/Switch6' */
  if (rtb_Equal2_oaqz) {
    /* Switch: '<S38>/Switch6' incorporates:
     *  Constant: '<S38>/Constant32'
     */
    ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg = true;
  }

  /* End of Switch: '<S38>/Switch6' */
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_BrkMgmt_START_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

void R_BrkMgmt_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_BrkMgmt_IBSDesRgnMotTq_Nm;
  real32_T rtb_BrkMgmt_IBSRgnTqAddDrvrTq_N;
  real32_T rtb_Switch;
  real32_T rtb_Switch_hccn;
  uint8_T BrkMgmt_IVIBrkCmpSts_Enum;
  uint8_T BrkMgmt_BrkCmpWarn_Enum;
  uint8_T rtb_Switch8;
  boolean_T BrkMgmt_BrkCmpCmnCdn_Flg;
  boolean_T rtb_RelationalOperator_drgx;
  boolean_T rtb_RelationalOperator_aopc;
  boolean_T BrkMgmt_BrkCmpWarnCdn1_Flg;
  boolean_T BrkMgmt_BrkCmpWarnActv_Flg;
  boolean_T rtb_True;
  boolean_T rtb_ChassisMgmt_IBSRbsDesT_edzs;
  boolean_T rtb_RelationalOperator_c55m;
  boolean_T rtb_LogOp2;
  boolean_T rtb_ComM_IVINodComFailr_Flg;
  boolean_T rtb_ComM_IBSVlcActv_Flg;
  dt_ComM_IBSTqCRCInfo tmpRead_4;
  dt_ComM_IBSTqE2ETimeoutInfo tmpRead_5;
  dt_Nv_ChassisMgmtInfo rtb_TmpSignalConversionAtRTE_RP;
  real32_T rtb_RelationalOperator_drgx_tmp;
  real32_T tmpRead;
  real32_T tmpRead_1;
  real32_T tmpRead_c;
  uint8_T tmpRead_0;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_6;
  uint8_T tmpRead_8;
  uint8_T tmpRead_a;
  uint8_T tmpRead_b;
  boolean_T rtb_ChassisMgmt_FctsftyRgnTqVld;
  boolean_T tmpRead_7;
  boolean_T tmpRead_9;
  boolean_T tmpRead_d;

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_d);

  /* SignalConversion: '<S4>/SignalCopy17' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
    (&rtb_ComM_IBSVlcActv_Flg);

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
    (&tmpRead_7);

  /* SignalConversion: '<S4>/SignalCopy10' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
    (&rtb_ComM_IVINodComFailr_Flg);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
    (&rtb_ChassisMgmt_FctsftyRgnTqVld);

  /* Inport: '<Root>/RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo_read' incorporates:
   *  Inport: '<Root>/RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo_read'
   */
  (void)Rte_Read_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo
    (&rtb_TmpSignalConversionAtRTE_RP);

  /* Outputs for Atomic SubSystem: '<Root>/R_BrkMgmt_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_BrakeMangement' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S12>/LogicalOperator1' incorporates:
   *  Constant: '<S12>/BrkMgmt_AVAILABLE'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  BrkMgmt_BrkCmpCmnCdn_Flg = ((tmpRead_0 == ((uint8_T)BrkMgmt_NOTAVAILABLE)) ||
    rtb_ChassisMgmt_FctsftyRgnTqVld);

  /* Switch: '<S12>/Switch3' incorporates:
   *  Constant: '<S12>/BrkMgmt_IVI_BRK_CMP_OFF'
   *  Constant: '<S12>/BrkMgmt_ON1'
   *  RelationalOperator: '<S12>/RelationalOperator'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  Switch: '<S12>/Switch'
   */
  if (tmpRead_6 == ((uint8_T)BrkMgmt_ON)) {
    /* Switch: '<S12>/Switch3' incorporates:
     *  Constant: '<S12>/BrkMgmt_ON2'
     */
    BrkMgmt_IVIBrkCmpSts_Enum = ((uint8_T)BrkMgmt_ON);
  } else if (tmpRead_6 == ((uint8_T)BrkMgmt_IVI_BRK_CMP_OFF)) {
    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/BrkMgmt_IVI_BRK_CMP_OFF1'
     *  Switch: '<S12>/Switch3'
     */
    BrkMgmt_IVIBrkCmpSts_Enum = ((uint8_T)BrkMgmt_IVI_BRK_CMP_OFF);
  } else {
    /* Switch: '<S12>/Switch3' incorporates:
     *  UnitDelay: '<S12>/ChassisMgmt_PrevBrkCmpSts_Enum'
     */
    BrkMgmt_IVIBrkCmpSts_Enum = CtAp_BrkMgmt_ARID_DEF.BrkMgmt_PrevBrkCmpSts_Enum;
  }

  /* End of Switch: '<S12>/Switch3' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Switch: '<S12>/Switch4'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  if (CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
     *
     * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
     *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
     */
    /* Switch: '<S12>/Switch2' incorporates:
     *  SignalConversion: '<S4>/SignalCopy18'
     */
    ChassisMgmt_BrkCmpSts_Enum =
      rtb_TmpSignalConversionAtRTE_RP.ChassisMgmt_BrkCmpStsInfo;

    /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
  } else if (BrkMgmt_BrkCmpCmnCdn_Flg) {
    /* Switch: '<S12>/Switch4' incorporates:
     *  Constant: '<S12>/BrkMgmt_IVI_BRK_CMP_OFF2'
     *  Switch: '<S12>/Switch2'
     */
    ChassisMgmt_BrkCmpSts_Enum = ((uint8_T)BrkMgmt_IVI_BRK_CMP_OFF);
  } else {
    /* Switch: '<S12>/Switch2' incorporates:
     *  Switch: '<S12>/Switch4'
     */
    ChassisMgmt_BrkCmpSts_Enum = BrkMgmt_IVIBrkCmpSts_Enum;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition':
   *  1. SWREQ_01376 Brake Regeneration Control  Common Condition
   *  2. SWREQ_01377 Brake Regeneration Control Capability  Condition3
   *  3. SWREQ_05656 Brake Regeneration Control   Common Condition
   *  4. SWREQ_05779 Brake Regeneration Control Capability  Condition2
   *  5. SWREQ_05657 Brake Regeneration Control Capability  Condition2
   *  6. SWREQ_05658 Brake Regeneration Control Capability Condition3
   *  7. SWREQ_06010 Brake Regeneration Control Capability  Condition4
   *  8. SWREQ_05659 Brake Regeneration Control Capability Condition4
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Sum: '<S15>/Subtract' incorporates:
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy16'
   *  Sum: '<S16>/Subtract'
   *  Sum: '<S21>/Subtract'
   */
  rtb_RelationalOperator_drgx_tmp = tmpRead_c - tmpRead;

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition' */

  /* RelationalOperator: '<S15>/RelationalOperator' incorporates:
   *  Constant: '<S15>/ChassisMgmt_BrkCmpDecelReqTqOffTar_CFG'
   *  Sum: '<S15>/Subtract'
   */
  rtb_RelationalOperator_drgx = (rtb_RelationalOperator_drgx_tmp <
    ChassisMgmt_BrkCmpDecelReqTqOffTar_CFG);

  /* Outputs for Atomic SubSystem: '<S15>/ATOM_TimeCnt' */
  /* UnitDelay: '<S12>/OneDelay1' incorporates:
   *  Constant: '<S15>/BrkMgmt_ACCUMULATE_TIME'
   *  Constant: '<S15>/ChassisMgmt_BrkCmpDecelReqOffTim_CFG'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE = CtAp_BrkMgmt_ATOM_TimeCnt
    (rtb_RelationalOperator_drgx, BrkMgmt_ACCUMULATE_TIME,
     ChassisMgmt_BrkCmpDecelReqOffTim_CFG,
     &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cl54);

  /* End of Outputs for SubSystem: '<S15>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S15>/LogicalOperator' incorporates:
   *  Constant: '<S15>/BrkMgmt_ON'
   *  Constant: '<S15>/BrkMgmt_ZERO_TORQUE'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  RelationalOperator: '<S15>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  ChassisMgmt_BrkCmpDecelReqStsOff_Flg = ((ChassisMgmt_BrkCmpSts_Enum ==
    ((uint8_T)BrkMgmt_ON)) && CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE && (tmpRead
    < BrkMgmt_ZERO_TORQUE));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* RelationalOperator: '<S16>/RelationalOperator' incorporates:
   *  Constant: '<S16>/ChassisMgmt_BrkCmpDecelReqTqOnTar_CFG'
   */
  rtb_RelationalOperator_aopc = (rtb_RelationalOperator_drgx_tmp >=
    ChassisMgmt_BrkCmpDecelReqTqOnTar_CFG);

  /* Outputs for Atomic SubSystem: '<S16>/ATOM_TimeCnt' */
  /* UnitDelay: '<S12>/OneDelay1' incorporates:
   *  Constant: '<S16>/BrkMgmt_ACCUMULATE_TIME'
   *  Constant: '<S16>/ChassisMgmt_BrkCmpDecelReqOnTim_CFG'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE = CtAp_BrkMgmt_ATOM_TimeCnt
    (rtb_RelationalOperator_aopc, BrkMgmt_ACCUMULATE_TIME,
     ChassisMgmt_BrkCmpDecelReqOnTim_CFG,
     &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S16>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S16>/BrkMgmt_ON'
   *  Constant: '<S16>/BrkMgmt_ZERO_TORQUE'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  ChassisMgmt_BrkCmpDecelReqStsOn_Flg = ((ChassisMgmt_BrkCmpSts_Enum ==
    ((uint8_T)BrkMgmt_ON)) && CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE && (tmpRead
    < BrkMgmt_ZERO_TORQUE));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_BrkMgmt_ATOM_RS_FF(ChassisMgmt_BrkCmpDecelReqStsOff_Flg,
    ChassisMgmt_BrkCmpDecelReqStsOn_Flg,
    &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S14>/ATOM_RS_FF' */

  /* SignalConversion generated from: '<S14>/ATOM_RS_FF' */
  ChassisMgmt_BrkCmpDecelReqActv_Flg = rtb_LogOp2;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S13>/LogicalOperator5' incorporates:
   *  Constant: '<S13>/BrkMgmt_NOTAVAILABLE'
   *  RelationalOperator: '<S13>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  BrkMgmt_BrkCmpWarnCdn1_Flg = ((tmpRead_0 == ((uint8_T)BrkMgmt_NOTAVAILABLE)) ||
    rtb_ChassisMgmt_FctsftyRgnTqVld);

  /* Logic: '<S13>/LogicalOperator1' incorporates:
   *  Constant: '<S13>/BrkMgmt_ON'
   *  RelationalOperator: '<S13>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  BrkMgmt_BrkCmpWarnActv_Flg = ((tmpRead_6 == ((uint8_T)BrkMgmt_ON)) &&
    BrkMgmt_BrkCmpWarnCdn1_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/BrkMgmt_AVAILABLE'
   *  Logic: '<S13>/LogicalOperator2'
   *  Logic: '<S13>/LogicalOperator4'
   *  RelationalOperator: '<S13>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy9'
   *  Switch: '<S13>/Switch1'
   */
  if (BrkMgmt_BrkCmpWarnActv_Flg) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/BrkMgmt_WARNING'
     */
    BrkMgmt_BrkCmpWarn_Enum = ((uint8_T)BrkMgmt_WARNING);

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
     *
     * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
     *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
     */
  } else if ((tmpRead_0 == ((uint8_T)BrkMgmt_AVAILABLE)) &&
             !rtb_ChassisMgmt_FctsftyRgnTqVld) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/BrkMgmt_NO_DISPLAY'
     *  Switch: '<S13>/Switch'
     */
    BrkMgmt_BrkCmpWarn_Enum = ((uint8_T)BrkMgmt_NO_DISPLAY);
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  UnitDelay: '<S13>/ChassisMgmt_PrevBrkCmpWarn_Enum'
     */
    BrkMgmt_BrkCmpWarn_Enum = BrkMgmt_PrevBrkCmpWarn_Enum;

    /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
  }

  /* End of Switch: '<S13>/Switch' */

  /* UnitDelay: '<S6>/ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg' incorporates:
   *  UnitDelay: '<S12>/OneDelay1'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE =
    BrkMgmt_PrevErrResIBSRbsDesTqOverFltInfo_Flg;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S25>/LogicalOperator6' incorporates:
   *  Logic: '<S25>/LogicalOperator2'
   *  Logic: '<S25>/LogicalOperator3'
   *  Logic: '<S25>/LogicalOperator4'
   *  SignalConversion generated from: '<S4>/BusSelector1'
   *  SignalConversion generated from: '<S4>/BusSelector'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  rtb_ChassisMgmt_FctsftyRgnTqVld = (!tmpRead_5.ComM_ErrResIBSTqE2ETimeoutInfo &&
    !tmpRead_4.ComM_ErrResIBSTqCRCErrorInfo &&
    !CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE);

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Status'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Status':
   *  1. SWREQ_01381 Brake Regeneration Control Status ON
   *  2. SWREQ_01382 Brake Regeneration Control Status OFF
   */
  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition':
   *  1. SWREQ_01376 Brake Regeneration Control  Common Condition
   *  2. SWREQ_01377 Brake Regeneration Control Capability  Condition3
   *  3. SWREQ_05656 Brake Regeneration Control   Common Condition
   *  4. SWREQ_05779 Brake Regeneration Control Capability  Condition2
   *  5. SWREQ_05657 Brake Regeneration Control Capability  Condition2
   *  6. SWREQ_05658 Brake Regeneration Control Capability Condition3
   *  7. SWREQ_06010 Brake Regeneration Control Capability  Condition4
   *  8. SWREQ_05659 Brake Regeneration Control Capability Condition4
   */
  /* Logic: '<S21>/LogicalOperator1' incorporates:
   *  Logic: '<S22>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy11'
   */
  tmpRead_7 = !tmpRead_7;

  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Status' */

  /* Logic: '<S21>/LogicalOperator' incorporates:
   *  Constant: '<S21>/BrkMgmt_DRIVEREADY'
   *  Constant: '<S21>/BrkMgmt_GEAR_D'
   *  Logic: '<S21>/LogicalOperator1'
   *  RelationalOperator: '<S21>/RelationalOperator'
   *  RelationalOperator: '<S21>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy12'
   *  SignalConversion: '<S4>/SignalCopy15'
   */
  ChassisMgmt_RgnTqCapVldEna_Flg = ((tmpRead_8 == ((uint8_T)BrkMgmt_GEAR_D)) &&
    (tmpRead_b == ((uint8_T)BrkMgmt_DRIVEREADY)) && tmpRead_7);

  /* Logic: '<S21>/LogicalOperator5' incorporates:
   *  Constant: '<S21>/BrkMgmt_ONEPEDAL'
   *  RelationalOperator: '<S21>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy14'
   */
  ChassisMgmt_RgnTqCapVldEna2_Flg = (rtb_ComM_IBSVlcActv_Flg || (tmpRead_a ==
    ((uint8_T)BrkMgmt_ONEPEDAL)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Switch: '<S29>/Switch' incorporates:
   *  Sum: '<S21>/Subtract'
   */
  rtb_Switch_hccn = rtb_RelationalOperator_drgx_tmp;

  /* RelationalOperator: '<S21>/RelationalOperator5' incorporates:
   *  Constant: '<S21>/BrkMgmt_OFF1'
   */
  ChassisMgmt_RgnTqCapVldEna3_Flg = (rtb_Switch_hccn < BrkMgmt_ZERO_TORQUE);

  /* Product: '<S21>/Product1' incorporates:
   *  Constant: '<S21>/ChassisMgmt_VehRednRat_CFG'
   *  Constant: '<S21>/ChassisMgmt_VehTrsmEff_CFG'
   *  Product: '<S21>/Product'
   */
  ChassisMgmt_RgnTqCapDiffWhlTq_Nm = (rtb_Switch_hccn *
    ChassisMgmt_VehRednRat_CFG) * ChassisMgmt_VehTrsmEff_CFG;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* RelationalOperator: '<S21>/RelationalOperator6' incorporates:
   *  Constant: '<S21>/BrkMgmt_OFF2'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  ChassisMgmt_RgnTqCapVldEna4_Flg = (tmpRead >= BrkMgmt_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Capability_Valid':
   *  1. SWREQ_06013 Brake Regeneration Control  Valid
   *  2. SWREQ_06014 Brake Regeneration Control  inValid
   */
  /* Logic: '<S20>/LogicalOperator' incorporates:
   *  DataTypeConversion: '<S21>/Data Type Conversion'
   *  Logic: '<S20>/LogicalOperator1'
   */
  ChassisMgmt_RgnTqCapVld_Flg = ((ChassisMgmt_RgnTqCapVldEna2_Flg ||
    ChassisMgmt_RgnTqCapVldEna4_Flg || ChassisMgmt_RgnTqCapVldEna3_Flg) &&
    ChassisMgmt_RgnTqCapVldEna_Flg && rtb_ChassisMgmt_FctsftyRgnTqVld);

  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid' */
  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition' */

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Torque_Capability'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Torque_Capability':
   *  1. SWREQ_01378 Brake Regeneration Control Capability
   *  2. SWREQ_01380 Brake Regeneration Control Capability
   *  3. SWREQ_01379 Brake Regeneration Control Capability
   */
  /* Switch: '<S24>/Switch4' */
  if (ChassisMgmt_RgnTqCapVldEna_Flg) {
    /* Switch: '<S24>/Switch6' incorporates:
     *  Logic: '<S24>/LogicalOperator'
     *  Switch: '<S24>/Switch1'
     */
    if (ChassisMgmt_RgnTqCapVldEna4_Flg || ChassisMgmt_RgnTqCapVldEna2_Flg) {
      /* Outputs for Atomic SubSystem: '<S8>/Wheel_Min_Torque'
       *
       * Block requirements for '<S8>/Wheel_Min_Torque':
       *  1. SWREQ_01378 Brake Regeneration Control Capability
       */
      /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
       *
       * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
       *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
       */
      /* Switch: '<S24>/Switch4' incorporates:
       *  Constant: '<S26>/ChassisMgmt_VehRednRat_CFG'
       *  Constant: '<S26>/ChassisMgmt_VehTrsmEff_CFG'
       *  Product: '<S26>/Product'
       *  SignalConversion: '<S4>/SignalCopy16'
       *  Switch: '<S24>/Switch6'
       */
      ChassisMgmt_RgnTqCap_Nm = (tmpRead_c * ChassisMgmt_VehRednRat_CFG) *
        ChassisMgmt_VehTrsmEff_CFG;

      /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
      /* End of Outputs for SubSystem: '<S8>/Wheel_Min_Torque' */
    } else if (ChassisMgmt_RgnTqCapVldEna3_Flg) {
      /* Switch: '<S24>/Switch1' incorporates:
       *  Switch: '<S24>/Switch4'
       *  Switch: '<S24>/Switch6'
       */
      ChassisMgmt_RgnTqCap_Nm = ChassisMgmt_RgnTqCapDiffWhlTq_Nm;
    } else {
      /* Switch: '<S24>/Switch4' incorporates:
       *  Constant: '<S24>/BrkMgmt_ZERO_TORQUE1'
       *  Switch: '<S24>/Switch1'
       *  Switch: '<S24>/Switch6'
       */
      ChassisMgmt_RgnTqCap_Nm = BrkMgmt_ZERO_TORQUE;
    }

    /* End of Switch: '<S24>/Switch6' */
  } else {
    /* Switch: '<S24>/Switch4' incorporates:
     *  Constant: '<S24>/BrkMgmt_ZERO_TORQUE'
     */
    ChassisMgmt_RgnTqCap_Nm = BrkMgmt_ZERO_TORQUE;
  }

  /* End of Switch: '<S24>/Switch4' */
  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Torque_Capability' */

  /* Outputs for Atomic SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */
  /* Outputs for Atomic SubSystem: '<S9>/RBS_DesTorque_Overfault_condition'
   *
   * Block requirements for '<S9>/RBS_DesTorque_Overfault_condition':
   *  1. SWREQ_01389 DTC P116E05 Set Conditon
   *  2. SWREQ_01402 RBS torque over limit Set Conditon
   *  3. SWREQ_01390 DTC P116E05 Reset Conditon
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S30>/LogicalOperator' incorporates:
   *  Constant: '<S30>/BrkMgmt_ACTIVE'
   *  Constant: '<S30>/ChassisMgmt_IBSRbsDesTqOverFltThd_CFG'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  RelationalOperator: '<S30>/Relational Operator1'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy5'
   *  Sum: '<S30>/Subtract'
   */
  ChassisMgmt_IBSRbsDesTqOverFltActv_Flg = ((tmpRead_3 == ((uint8_T)
    BrkMgmt_ACTIVE)) && (tmpRead_1 < (ChassisMgmt_RgnTqCap_Nm -
    ChassisMgmt_IBSRbsDesTqOverFltThd_CFG)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
  /* End of Outputs for SubSystem: '<S9>/RBS_DesTorque_Overfault_condition' */

  /* Outputs for Atomic SubSystem: '<S9>/RBS_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/RBS_Torque_Fault_DTC':
   *  1. SWREQ_01391 DTC P116E05 Enable Conditon
   *  2. SWREQ_01390 DTC P116E05 Reset Conditon
   */
  /* Outputs for Atomic SubSystem: '<S31>/ATOM_TimeCnt' */
  /* UnitDelay: '<S12>/OneDelay1' incorporates:
   *  Constant: '<S31>/BrkMgmt_SAMPLE_TIME1'
   *  Constant: '<S31>/ChassisMgmt_IBSRbsDesTqOverFltEnaTim_CFG'
   *  UnitDelay: '<S31>/OneDelay'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE = CtAp_BrkMgmt_ATOM_TimeCnt_dw0o
    (CtAp_BrkMgmt_ARID_DEF.OneDelay_DSTATE, ((uint16_T)BrkMgmt_SAMPLE_TIME),
     ChassisMgmt_IBSRbsDesTqOverFltEnaTim_CFG,
     &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S31>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S31>/LogicalOperator' incorporates:
   *  Logic: '<S31>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy13'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  rtb_ChassisMgmt_IBSRbsDesT_edzs = (CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE &&
    !tmpRead_d && tmpRead_9);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S31>/NoReset' */
  /* Constant: '<S31>/ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S31>/BrkMgmt_SAMPLE_TIME'
   *  UnitDelay: '<S12>/OneDelay1'
   *
   * Block requirements for '<S31>/ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG':
   *  1. SWREQ_01408 RBS torque over limit Error mature time
   */
  CtAp_BrkMgmt_NoReset(rtb_ChassisMgmt_IBSRbsDesT_edzs,
                       ChassisMgmt_IBSRbsDesTqOverFltActv_Flg,
                       ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG, ((uint16_T)
    BrkMgmt_SAMPLE_TIME), &CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE,
                       &CtAp_BrkMgmt_ARID_DEF.Switch,
                       &CtAp_BrkMgmt_ARID_DEF.Switch8,
                       &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_NoReset);

  /* End of Outputs for SubSystem: '<S31>/NoReset' */

  /* Update for UnitDelay: '<S31>/OneDelay' incorporates:
   *  Constant: '<S31>/BrkMgmt_TRUE'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay_DSTATE = BrkMgmt_TRUE;

  /* End of Outputs for SubSystem: '<S9>/RBS_Torque_Fault_DTC' */

  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus' incorporates:
   *  BusCreator: '<S9>/BusCreator2'
   *  UnitDelay: '<S12>/OneDelay1'
   */
  CtAp_BrkMgmt_ARID_DEF.RTE_P_ChassisMgmt_IBSRbsDesTqOv.ChassisMgmt_MonStatIBSRbsDesTqOverFltDTCInfo
    = CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE;

  /* Outputs for Atomic SubSystem: '<S9>/RBS_Torque_Fault_FUSA'
   *
   * Block requirements for '<S9>/RBS_Torque_Fault_FUSA':
   *  1. SWREQ_01403 RBS torque over limit Reset Conditon
   */
  /* Outputs for Atomic SubSystem: '<S32>/NoEnableAndReset' */
  /* Constant: '<S32>/ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG' incorporates:
   *  Constant: '<S32>/BrkMgmt_SAMPLE_TIME'
   *
   * Block requirements for '<S32>/ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG':
   *  1. SWREQ_01395 DTC P116E05 Error mature time
   */
  CtAp_BrkMgmt_NoEnableAndReset(ChassisMgmt_IBSRbsDesTqOverFltActv_Flg,
    ChassisMgmt_IBSRbsDesTqOverFltMatureTim_CFG, ((uint16_T)BrkMgmt_SAMPLE_TIME),
    &rtb_True, &rtb_Switch8, &rtb_Switch8,
    &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_NoEnableAndReset);

  /* End of Outputs for SubSystem: '<S32>/NoEnableAndReset' */
  /* End of Outputs for SubSystem: '<S9>/RBS_Torque_Fault_FUSA' */
  /* End of Outputs for SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Status'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Status':
   *  1. SWREQ_01381 Brake Regeneration Control Status ON
   *  2. SWREQ_01382 Brake Regeneration Control Status OFF
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* Logic: '<S22>/LogicalOperator' incorporates:
   *  Constant: '<S22>/BrkMgmt_ACTIVE'
   *  Constant: '<S22>/BrkMgmt_GEAR_D'
   *  Constant: '<S22>/BrkMgmt_NORMAL'
   *  Constant: '<S22>/Drive ready'
   *  RelationalOperator: '<S22>/RelationalOperator'
   *  RelationalOperator: '<S22>/RelationalOperator1'
   *  RelationalOperator: '<S22>/RelationalOperator2'
   *  RelationalOperator: '<S22>/RelationalOperator3'
   *  SignalConversion: '<S4>/SignalCopy12'
   *  SignalConversion: '<S4>/SignalCopy15'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  ChassisMgmt_BrkRgnActv_Flg = ((tmpRead_8 == ((uint8_T)BrkMgmt_GEAR_D)) &&
    (tmpRead_b == ((uint8_T)BrkMgmt_DRIVEREADY)) && (tmpRead_2 == ((uint8_T)
    BrkMgmt_NORMAL)) && (tmpRead_3 == ((uint8_T)BrkMgmt_ACTIVE)) && tmpRead_7 &&
    rtb_ChassisMgmt_FctsftyRgnTqVld);

  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Status' */

  /* Outputs for Atomic SubSystem: '<S8>/Brake_Regeneration_Control_Torque'
   *
   * Block requirements for '<S8>/Brake_Regeneration_Control_Torque':
   *  1. SWREQ_01383 Brake  Requst Torque Onepedal and Vlc
   *  2. SWREQ_01384 Brake  Requst Torque
   *  3. SWREQ_05780 Brake Torque Requst Torque
   *  4. SWREQ_06727 Brake Torque Requst Inactive Torque
   */
  /* Product: '<S23>/Divide1' incorporates:
   *  Constant: '<S23>/ChassisMgmt_VehRednRat_CFG'
   *  Constant: '<S23>/ChassisMgmt_VehTrsmEff_CFG'
   *  Product: '<S23>/Divide'
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  rtb_BrkMgmt_IBSDesRgnMotTq_Nm = (tmpRead_1 / ChassisMgmt_VehRednRat_CFG) /
    ChassisMgmt_VehTrsmEff_CFG;

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S27>/Constant'
   *  RelationalOperator: '<S27>/Compare'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  if (tmpRead < BrkMgmt_ZERO_TORQUE) {
    /* Switch: '<S29>/Switch' */
    rtb_Switch_hccn = tmpRead;
  } else {
    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S23>/BrkMgmt_ZERO_TORQUE1'
     */
    rtb_Switch_hccn = BrkMgmt_ZERO_TORQUE;
  }

  /* End of Switch: '<S23>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */

  /* Sum: '<S23>/Add' */
  rtb_BrkMgmt_IBSRgnTqAddDrvrTq_N = rtb_BrkMgmt_IBSDesRgnMotTq_Nm +
    rtb_Switch_hccn;

  /* Outputs for Atomic SubSystem: '<S23>/If1' */
  rtb_Switch_hccn = CtAp_BrkMgmt_If(rtb_ComM_IBSVlcActv_Flg,
    rtb_BrkMgmt_IBSDesRgnMotTq_Nm, rtb_BrkMgmt_IBSRgnTqAddDrvrTq_N);

  /* End of Outputs for SubSystem: '<S23>/If1' */

  /* Outputs for Atomic SubSystem: '<S23>/If' */
  /* Constant: '<S23>/BrkMgmt_ZERO_TORQUE' */
  rtb_Switch = CtAp_BrkMgmt_If(ChassisMgmt_BrkRgnActv_Flg, rtb_Switch_hccn,
    BrkMgmt_ZERO_TORQUE);

  /* End of Outputs for SubSystem: '<S23>/If' */

  /* SignalConversion generated from: '<S23>/If' */
  ChassisMgmt_BrkRgnTq_Nm = rtb_Switch;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Input'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Input':
   *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
   */
  /* RelationalOperator: '<S23>/RelationalOperator' incorporates:
   *  Constant: '<S23>/BrkMgmt_ONEPEDAL'
   *  SignalConversion: '<S4>/SignalCopy14'
   */
  rtb_RelationalOperator_c55m = (tmpRead_a == ((uint8_T)BrkMgmt_ONEPEDAL));

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Input' */
  /* End of Outputs for SubSystem: '<S8>/Brake_Regeneration_Control_Torque' */

  /* Update for UnitDelay: '<S12>/ChassisMgmt_PrevBrkCmpSts_Enum' */
  CtAp_BrkMgmt_ARID_DEF.BrkMgmt_PrevBrkCmpSts_Enum = ChassisMgmt_BrkCmpSts_Enum;

  /* Update for UnitDelay: '<S12>/OneDelay1' incorporates:
   *  Constant: '<S12>/BrkMgmt_FALSE'
   */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE = BrkMgmt_FALSE;

  /* Update for UnitDelay: '<S13>/ChassisMgmt_PrevBrkCmpWarn_Enum' */
  BrkMgmt_PrevBrkCmpWarn_Enum = BrkMgmt_BrkCmpWarn_Enum;

  /* Update for UnitDelay: '<S6>/ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg' */
  BrkMgmt_PrevErrResIBSRbsDesTqOverFltInfo_Flg =
    ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg;

  /* End of Outputs for SubSystem: '<S2>/Function_BrakeMangement' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Output'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Output':
   *  1. SWREQ_01362 The function of "Brake management" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg
    (ChassisMgmt_BrkCmpDecelReqActv_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum
    (ChassisMgmt_BrkCmpSts_Enum);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum
    (BrkMgmt_BrkCmpWarn_Enum);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg
    (ChassisMgmt_BrkRgnActv_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  (void)Rte_Write_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm
    (ChassisMgmt_BrkRgnTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/Function_BrakeMangement' */
  /* Outputs for Atomic SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus' incorporates:
   *  BusCreator: '<S9>/BusCreator2'
   *  DataTypeConversion: '<S31>/Data Type Conversion1'
   */
  CtAp_BrkMgmt_ARID_DEF.RTE_P_ChassisMgmt_IBSRbsDesTqOv.ChassisMgmt_MonResIBSRbsDesTqOverFltDTCInfo
    = CtAp_BrkMgmt_ARID_DEF.Switch;
  CtAp_BrkMgmt_ARID_DEF.RTE_P_ChassisMgmt_IBSRbsDesTqOv.ChassisMgmt_ErrStatIBSRbsDesTqOverFltDTCInfo
    = CtAp_BrkMgmt_ARID_DEF.Switch8;

  /* Outputs for Atomic SubSystem: '<S9>/RBS_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/RBS_Torque_Fault_DTC':
   *  1. SWREQ_01391 DTC P116E05 Enable Conditon
   *  2. SWREQ_01390 DTC P116E05 Reset Conditon
   */
  CtAp_BrkMgmt_ARID_DEF.RTE_P_ChassisMgmt_IBSRbsDesTqOv.ChassisMgmt_ErrResIBSRbsDesTqOverFltDTCInfo
    = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_ErrResIBSRbsDesTqOverFlt_Flg;

  /* End of Outputs for SubSystem: '<S9>/RBS_Torque_Fault_DTC' */
  /* End of Outputs for SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */
  /* End of Outputs for SubSystem: '<S2>/Function_BrakeMangement' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_BrkMgmt_Output'
   *
   * Block requirements for '<S2>/CtAp_BrkMgmt_Output':
   *  1. SWREQ_01362 The function of "Brake management" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  (void)Rte_Write_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm
    (ChassisMgmt_RgnTqCap_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg
    (ChassisMgmt_RgnTqCapVld_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_BrkMgmt_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/Function_BrakeMangement' */
  /* Outport: '<Root>/RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo_write' incorporates:
   *  BusCreator: '<S12>/BusCreator'
   *  Constant: '<S12>/BrkMgmt_MAX_BYTE'
   */
  CtAp_BrkMgmt_ARID_DEF.RTE_RP_ChassisMgmtInfo_tec_Chas.ChassisMgmt_BrkCmpStsInfo
    = ChassisMgmt_BrkCmpSts_Enum;
  CtAp_BrkMgmt_ARID_DEF.RTE_RP_ChassisMgmtInfo_tec_Chas.ChassisMgmt_FillAdressInfo
    = ((uint8_T)BrkMgmt_MAX_BYTE);

  /* End of Outputs for SubSystem: '<S2>/Function_BrakeMangement' */
  /* End of Outputs for SubSystem: '<Root>/R_BrkMgmt_Cyclic_10ms_sys' */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus
    (&CtAp_BrkMgmt_ARID_DEF.RTE_P_ChassisMgmt_IBSRbsDesTqOv);
  (void)Rte_Write_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo
    (&CtAp_BrkMgmt_ARID_DEF.RTE_RP_ChassisMgmtInfo_tec_Chas);
}

#define CtAp_BrkMgmt_STOP_SEC_CODE
#include "CtAp_BrkMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_BrkMgmt_START_SEC_VAR_CONST_8
#include "CtAp_BrkMgmt_MemMap.h"

void R_BrkMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_RgnTqCap_Nm = 0.0F;
  ChassisMgmt_BrkRgnTq_Nm = 0.0F;
  ChassisMgmt_RgnTqCapDiffWhlTq_Nm = 0.0F;
  ChassisMgmt_BrkCmpSts_Enum = 0U;
  ChassisMgmt_BrkCmpDecelReqStsOff_Flg = false;
  ChassisMgmt_BrkCmpDecelReqStsOn_Flg = false;
  ChassisMgmt_BrkCmpDecelReqActv_Flg = false;
  ChassisMgmt_IBSRbsDesTqOverFltActv_Flg = false;
  ChassisMgmt_BrkRgnActv_Flg = false;
  ChassisMgmt_RgnTqCapVldEna_Flg = false;
  ChassisMgmt_RgnTqCapVldEna2_Flg = false;
  ChassisMgmt_RgnTqCapVldEna3_Flg = false;
  ChassisMgmt_RgnTqCapVldEna4_Flg = false;
  ChassisMgmt_RgnTqCapVld_Flg = false;
  ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_BrkMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_BrkMgmt_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_BrkMgmt_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Function_BrakeMangement' */
  /* InitializeConditions for UnitDelay: '<S12>/ChassisMgmt_PrevBrkCmpSts_Enum' */
  CtAp_BrkMgmt_ARID_DEF.BrkMgmt_PrevBrkCmpSts_Enum = ((uint8_T)
    BrkMgmt_IVI_BRK_CMP_OFF);

  /* InitializeConditions for UnitDelay: '<S12>/OneDelay1' */
  CtAp_BrkMgmt_ARID_DEF.OneDelay1_DSTATE = true;

  /* SystemInitialize for Atomic SubSystem: '<S14>/ATOM_RS_FF' */
  CtAp_BrkMgmt_ATOM_RS_FF_Init(false, &CtAp_BrkMgmt_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S14>/ATOM_RS_FF' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */
  /* SystemInitialize for Atomic SubSystem: '<S9>/RBS_Torque_Fault_DTC'
   *
   * Block requirements for '<S9>/RBS_Torque_Fault_DTC':
   *  1. SWREQ_01391 DTC P116E05 Enable Conditon
   *  2. SWREQ_01390 DTC P116E05 Reset Conditon
   */
  /* SystemInitialize for Atomic SubSystem: '<S31>/NoReset' */
  CtAp_BrkMgmt_NoReset_Init();

  /* End of SystemInitialize for SubSystem: '<S31>/NoReset' */
  /* End of SystemInitialize for SubSystem: '<S9>/RBS_Torque_Fault_DTC' */
  /* End of SystemInitialize for SubSystem: '<S6>/Brake_Regeneration_Torque_Monitoring' */
  /* End of SystemInitialize for SubSystem: '<S2>/Function_BrakeMangement' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_BrkMgmt_Cyclic_10ms_sys' */
}

#define CtAp_BrkMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_BrkMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
