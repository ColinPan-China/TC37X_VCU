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
 *  Filename:           CtAp_DCFCMgmt.c
 *  File Creation Date: 07-Jul-2025
 *  Model Name:         CtAp_DCFCMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:50 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul  7 16:33:09 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 07 16:32:15 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCFCMgmt.h"
#include "rtwtypes.h"
#include "CtAp_DCFCMgmt_private.h"
#include "Rte_Type.h"
#include "CtAp_DCFCMgmt_Glb.h"
#include "CtAp_DCFCMgmt_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_DCFCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"

ARID_DEF_CtAp_DCFCMgmt_T CtAp_DCFCMgmt_ARID_DEF;

#define CtAp_DCFCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_TimeCnt1'
 *    '<S8>/ATOM_TimeCnt'
 *    '<S8>/ATOM_TimeCnt1'
 *    '<S8>/ATOM_TimeCnt2'
 *    '<S8>/ATOM_TimeCnt3'
 */
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

boolean_T CtAp_DCFCMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_DC_T
  *CtAp_DCFCMgmt__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S9>/Add1' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   *  DataTypeConversion: '<S9>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S9>/Switch' */
  if (rtu_In) {
    /* Sum: '<S9>/Add' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S9>/Min' */
    if (rtb_Add1 <= CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S9>/Add' */
      CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S9>/Min' */
  } else {
    /* Sum: '<S9>/Add' incorporates:
     *  Constant: '<S9>/Constant'
     *  UnitDelay: '<S9>/Delay'
     */
    CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S9>/Switch' */

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  UnitDelay: '<S9>/Delay'
   */
  return CtAp_DCFCMgmt__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

/* Output and update for atomic system: '<S7>/NoDT' */
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

void CtAp_DCFCMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_DCFCMgmt_T
  *CtAp_DCFCMgmt__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S15>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtu_EnableCondition) {
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

    /* RelationalOperator: '<S16>/Equal2' incorporates:
     *  Constant: '<S16>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S17>/Switch1' */
    if (rtb_Equal2) {
      uint16_T u0;

      /* Sum: '<S17>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S17>/Sum' incorporates:
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S17>/MinMax' */
      if (u0 <= CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S17>/Sum' */
        CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S17>/MinMax' */
    } else {
      /* Sum: '<S17>/Sum' incorporates:
       *  Constant: '<S16>/Constant37'
       *  UnitDelay: '<S17>/UnitDelay'
       */
      CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S16>/Switch8' incorporates:
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S16>/DEBOUNCING'
     *  RelationalOperator: '<S16>/Equal6'
     *  RelationalOperator: '<S17>/B_MiHold'
     *  Switch: '<S16>/Switch2'
     *  Switch: '<S16>/Switch3'
     *  UnitDelay: '<S17>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_DCFCMgmt__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
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
    } else {
      /* Switch: '<S16>/Switch2' incorporates:
       *  Constant: '<S16>/PASSED'
       *  Switch: '<S16>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
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
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_DCFCMgmt__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S16>/Switch6' */

    /* Update for Delay: '<S16>/Delay1' */
    CtAp_DCFCMgmt__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S15>/ErrorHandleSysU16' */
}

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

/* Output and update for atomic system: '<S8>/If' */
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

void CtAp_DCFCMgmt_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T rtu_else)
{
  /* Switch: '<S26>/Switch' */
  if (rtu_if) {
    /* Switch: '<S26>/Switch' */
    HvMgmt_DCFCReqSts_Flg = rtu_then;
  } else {
    /* Switch: '<S26>/Switch' */
    HvMgmt_DCFCReqSts_Flg = rtu_else;
  }

  /* End of Switch: '<S26>/Switch' */
}

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S8>/If1'
 *    '<S8>/If2'
 *    '<S8>/If3'
 *    '<S8>/If4'
 */
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

uint8_T CtAp_DCFCMgmt_If1(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S27>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S27>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DCFCMgmt_START_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

void R_DCFCMgmt_Cyclic_20ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_Switch;
  uint8_T rtb_Switch_f5hl;
  boolean_T rtb_NOT;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator5_blgu;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_Compare_fww0;
  boolean_T rtb_RelationalOperator_dztn;
  boolean_T rtb_DataTypeConversion;
  dt_ComM_EPTCANBusOffInfo tmpRead_1;
  uint8_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_2;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum' */
  (void)Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCFCMgmt_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_DCFCSts'
   *
   * Block requirements for '<S4>/HvMgmt_DCFCSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:361
   *  2. VCU_SW_Requirements_Specification.slreqx:362
   *  3. VCU_SW_Requirements_Specification.slreqx:363
   *  4. VCU_SW_Requirements_Specification.slreqx:364
   *  5. VCU_SW_Requirements_Specification.slreqx:365
   *  6. VCU_SW_Requirements_Specification.slreqx:366
   *  7. VCU_SW_Requirements_Specification.slreqx:367
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */
  /* Logic: '<S8>/NOT' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_NOT = !tmpRead_3;

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If'
   *
   * Block requirements for '<S8>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:361
   *  2. VCU_SW_Requirements_Specification.slreqx:362
   */
  /* Constant: '<S8>/Marco_Active' incorporates:
   *  Constant: '<S8>/Marco_Inactive'
   */
  CtAp_DCFCMgmt_If(rtb_NOT, DCFCMgmt_Active, DCFCMgmt_Inactive);

  /* End of Outputs for SubSystem: '<S8>/If' */

  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Logic: '<S8>/LogicalOperator5'
   */
  tmpRead_3 = !HvMgmt_DCFCReqSts_Flg;

  /* Logic: '<S8>/LogicalOperator2' */
  rtb_LogicalOperator2 = tmpRead_3;

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt1' */
  /* Constant: '<S8>/HvMgmt_RunStep1' incorporates:
   *  Constant: '<S8>/HvMgmt_DCFCRlyDTCSetTim_CFG1'
   */
  rtb_DataTypeConversion = CtAp_DCFCMgmt_ATOM_TimeCnt(rtb_LogicalOperator2,
    ((uint16_T)DCFCMgmt_HvMgmt_RunStep), HvMgmt_DCFCRlyDTCSetTim_CFG,
    &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator1' incorporates:
   *  Constant: '<S23>/Constant'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator1 = ((rtb_LogicalOperator2 != rtb_DataTypeConversion) &&
    (tmpRead_2 == ((uint8_T)DCFCMgmt_Opening)));

  /* Logic: '<S8>/LogicalOperator3' incorporates:
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator3 = ((tmpRead_2 != ((uint8_T)DCFCMgmt_Closing)) &&
    HvMgmt_DCFCReqSts_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt2' */
  /* Constant: '<S8>/HvMgmt_RunStep2' incorporates:
   *  Constant: '<S8>/HvMgmt_DCFCRlyDTCSetTim_CFG2'
   */
  rtb_DataTypeConversion = CtAp_DCFCMgmt_ATOM_TimeCnt(rtb_LogicalOperator3,
    ((uint16_T)DCFCMgmt_HvMgmt_RunStep), HvMgmt_DCFCRlyDTCSetTim_CFG,
    &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator4' incorporates:
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S25>/Compare'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator4 = ((tmpRead_2 != ((uint8_T)DCFCMgmt_Opening)) &&
    tmpRead_3);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt3' */
  /* Constant: '<S8>/HvMgmt_RunStep3' incorporates:
   *  Constant: '<S8>/HvMgmt_DCFCRlyDTCSetTim_CFG3'
   */
  rtb_RelationalOperator_dztn = CtAp_DCFCMgmt_ATOM_TimeCnt(rtb_LogicalOperator4,
    ((uint16_T)DCFCMgmt_HvMgmt_RunStep), HvMgmt_DCFCRlyDTCSetTim_CFG,
    &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt3);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt3' */

  /* Outputs for Atomic SubSystem: '<S8>/If4'
   *
   * Block requirements for '<S8>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:366
   */
  /* Constant: '<S8>/Marco_DCFCOpenFailed' incorporates:
   *  Delay: '<S8>/Delay'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:367
   */
  rtb_Switch_f5hl = CtAp_DCFCMgmt_If1(rtb_RelationalOperator_dztn, ((uint8_T)
    DCFCMgmt_DCFCOpenFailed), CtAp_DCFCMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S8>/If4' */

  /* Outputs for Atomic SubSystem: '<S8>/If3'
   *
   * Block requirements for '<S8>/If3':
   *  1. VCU_SW_Requirements_Specification.slreqx:365
   */
  /* Constant: '<S8>/Marco_DCFCClsFailed' */
  rtb_Switch = CtAp_DCFCMgmt_If1(rtb_DataTypeConversion, ((uint8_T)
    DCFCMgmt_DCFCClsFailed), rtb_Switch_f5hl);

  /* End of Outputs for SubSystem: '<S8>/If3' */

  /* Outputs for Atomic SubSystem: '<S8>/If2'
   *
   * Block requirements for '<S8>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:364
   */
  /* Constant: '<S8>/Marco_DCFCOpenCmpl' */
  rtb_Switch_f5hl = CtAp_DCFCMgmt_If1(rtb_LogicalOperator1, ((uint8_T)
    DCFCMgmt_DCFCOpenCmpl), rtb_Switch);

  /* End of Outputs for SubSystem: '<S8>/If2' */

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt' */
  /* Constant: '<S8>/HvMgmt_RunStep' incorporates:
   *  Constant: '<S8>/HvMgmt_DCFCRlyDTCSetTim_CFG'
   */
  rtb_DataTypeConversion = CtAp_DCFCMgmt_ATOM_TimeCnt(HvMgmt_DCFCReqSts_Flg,
    ((uint16_T)DCFCMgmt_HvMgmt_RunStep), HvMgmt_DCFCRlyDTCSetTim_CFG,
    &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S8>/RelationalOperator'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_LogicalOperator = ((HvMgmt_DCFCReqSts_Flg != rtb_DataTypeConversion) &&
    (tmpRead_2 == ((uint8_T)DCFCMgmt_Closing)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/If1'
   *
   * Block requirements for '<S8>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:363
   */
  /* Delay: '<S8>/Delay' incorporates:
   *  Constant: '<S8>/Marco_DCFCClsCmpl'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:367
   */
  CtAp_DCFCMgmt_ARID_DEF.Delay_DSTATE = CtAp_DCFCMgmt_If1(rtb_LogicalOperator,
    ((uint8_T)DCFCMgmt_DCFCClsCmpl), rtb_Switch_f5hl);

  /* End of Outputs for SubSystem: '<S8>/If1' */
  /* End of Outputs for SubSystem: '<S4>/HvMgmt_DCFCSts' */

  /* Outputs for Atomic SubSystem: '<S4>/HvMgmt_DCFCDTC'
   *
   * Block requirements for '<S4>/HvMgmt_DCFCDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:372
   *  2. VCU_SW_Requirements_Specification.slreqx:373
   *  3. VCU_SW_Requirements_Specification.slreqx:374
   *  4. VCU_SW_Requirements_Specification.slreqx:378
   *  5. VCU_SW_Requirements_Specification.slreqx:379
   *  6. VCU_SW_Requirements_Specification.slreqx:380
   */
  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt1' */
  /* Constant: '<S7>/Marco_Active' incorporates:
   *  Constant: '<S7>/HvMgmt_DCFCRlyClsDTCEnaSetTim_CFG'
   *  Constant: '<S7>/HvMgmt_RunStep'
   */
  rtb_RelationalOperator_dztn = CtAp_DCFCMgmt_ATOM_TimeCnt(DCFCMgmt_Active,
    ((uint16_T)DCFCMgmt_HvMgmt_RunStep), HvMgmt_DCFCRlyClsDTCEnaSetTim_CFG,
    &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_ATOM_TimeCnt1_mbvz);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */
  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Constant: '<S13>/Constant'
   *  RelationalOperator: '<S13>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  rtb_DataTypeConversion = (tmpRead_1.ComM_ErrResEPTCANBusOffInfo ==
    DCFCMgmt_Inactive);

  /* Logic: '<S7>/LogicalOperator5' incorporates:
   *  Logic: '<S7>/LogicalOperator1'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *
   * Block requirements for '<S7>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:374
   */
  rtb_LogicalOperator5_blgu = (rtb_RelationalOperator_dztn &&
    rtb_DataTypeConversion && tmpRead_4 && !tmpRead_5);

  /* Logic: '<S7>/LogicalOperator6' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S14>/Constant'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy3'
   *
   * Block requirements for '<S7>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:372
   */
  rtb_LogicalOperator6 = (HvMgmt_DCFCReqSts_Flg && (tmpRead_2 != ((uint8_T)
    DCFCMgmt_Closing)) && (tmpRead_0 == ((uint8_T)DCFCMgmt_DC_charge)) &&
    (tmpRead == ((uint8_T)DCFCMgmt_DC_Plug_Detected)));

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   *  SignalConversion: '<S5>/SignalCopy'
   */
  rtb_Compare_fww0 = (tmpRead == ((uint8_T)DCFCMgmt_Off_Plug));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/NoDT' */
  /* Constant: '<S7>/HvMgmt_DCFCRlyDTCSetTim_CFG' incorporates:
   *  Constant: '<S7>/HvMgmt_RunStep1'
   *
   * Block requirements for '<S7>/HvMgmt_DCFCRlyDTCSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:378
   */
  CtAp_DCFCMgmt_NoDT(rtb_LogicalOperator5_blgu, rtb_LogicalOperator6,
                     rtb_Compare_fww0, HvMgmt_DCFCRlyDTCSetTim_CFG, ((uint16_T)
    DCFCMgmt_HvMgmt_RunStep), &rtb_DataTypeConversion,
                     &CtAp_DCFCMgmt_ARID_DEF.Switch1,
                     &CtAp_DCFCMgmt_ARID_DEF.Switch8,
                     &CtAp_DCFCMgmt_ARID_DEF.Switch6,
                     &CtAp_DCFCMgmt_ARID_DEF.ARID_DEF_NoDT);

  /* End of Outputs for SubSystem: '<S7>/NoDT' */

  /* Outport: '<Root>/RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_tec_HvMgmt_DCFCRlyClsDTC_Bus' incorporates:
   *  BusCreator: '<S7>/Bus Creator1'
   */
  CtAp_DCFCMgmt_ARID_DEF.RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_.HvMgmt_MonStatDCFCRlyClsDTC
    = rtb_DataTypeConversion;
  CtAp_DCFCMgmt_ARID_DEF.RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_.HvMgmt_MonResDCFCRlyClsDTC
    = CtAp_DCFCMgmt_ARID_DEF.Switch1;
  CtAp_DCFCMgmt_ARID_DEF.RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_.HvMgmt_ErrStatDCFCRlyClsDTC
    = CtAp_DCFCMgmt_ARID_DEF.Switch8;
  CtAp_DCFCMgmt_ARID_DEF.RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_.HvMgmt_ErrResDCFCRlyClsDTC
    = CtAp_DCFCMgmt_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S4>/HvMgmt_DCFCDTC' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DCFCMgmt_Output' */
  /* Outport: '<Root>/RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum' incorporates:
   *  Delay: '<S8>/Delay'
   *  SignalConversion: '<S6>/SignalCopy1'
   *
   * Block requirements for '<S8>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:367
   */
  (void)
    Rte_Write_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
    (CtAp_DCFCMgmt_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DCFCMgmt_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_DCFCMgmt_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_tec_HvMgmt_DCFCRlyClsDTC_Bus
    (&CtAp_DCFCMgmt_ARID_DEF.RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_);
}

#define CtAp_DCFCMgmt_STOP_SEC_CODE
#include "CtAp_DCFCMgmt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DCFCMgmt_START_SEC_VAR_CONST_8
#include "CtAp_DCFCMgmt_MemMap.h"

void R_DCFCMgmt_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  HvMgmt_DCFCReqSts_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_DCFCMgmt_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_DCFCMgmt_T));
}

#define CtAp_DCFCMgmt_STOP_SEC_VAR_CONST_8
#include "CtAp_DCFCMgmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
