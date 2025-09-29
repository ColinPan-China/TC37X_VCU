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
 *  Filename:           CtAp_DrvMod.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:57:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:56:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvMod.h"
#include "rtwtypes.h"
#include "CtAp_DrvMod_private.h"
#include "Rte_Type.h"
#include "CtAp_DrvMod_Cal.h"
#include "CtAp_DrvMod_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_DrvMod_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"

ARID_DEF_CtAp_DrvMod_T CtAp_DrvMod_ARID_DEF;

#define CtAp_DrvMod_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S7>/If'
 *    '<S7>/If1'
 *    '<S7>/If2'
 *    '<S7>/If3'
 *    '<S7>/If4'
 *    '<S7>/If5'
 *    '<S8>/If'
 *    '<S8>/If1'
 *    '<S8>/If2'
 *    '<S8>/If3'
 *    ...
 */
#define CtAp_DrvMod_START_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

uint8_T CtAp_DrvMod_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T rtu_else)
{
  uint8_T rty_Out1_0;

  /* Switch: '<S20>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S20>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DrvMod_STOP_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/ATOM_TimeCnt'
 *    '<S9>/ATOM_TimeCnt1'
 */
#define CtAp_DrvMod_START_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

boolean_T CtAp_DrvMod_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T
  *CtAp_DrvMod__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S52>/Add1' incorporates:
   *  DataTypeConversion: '<S52>/Data Type Conversion'
   *  DataTypeConversion: '<S52>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S52>/Switch' */
  if (rtu_In) {
    /* Sum: '<S52>/Add' incorporates:
     *  DataTypeConversion: '<S52>/Data Type Conversion'
     *  UnitDelay: '<S52>/Delay'
     */
    CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S52>/Min' */
    if (rtb_Add1 <= CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S52>/Add' */
      CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S52>/Min' */
  } else {
    /* Sum: '<S52>/Add' incorporates:
     *  Constant: '<S52>/Constant'
     *  UnitDelay: '<S52>/Delay'
     */
    CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S52>/Switch' */

  /* RelationalOperator: '<S52>/Relational Operator' incorporates:
   *  UnitDelay: '<S52>/Delay'
   */
  return CtAp_DrvMod__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_DrvMod_STOP_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S9>/NoEnableAndTime'
 *    '<S9>/NoEnableAndTime1'
 *    '<S9>/NoEnableAndTime2'
 */
#define CtAp_DrvMod_START_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

void CtAp_DrvMod_NoEnableAndTime(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoEnableAndTime_CtAp_T
  *CtAp_DrvMod__ARID_DEF_arg)
{
  /* Constant: '<S89>/True' */
  *rty_MonStat = true;

  /* Switch: '<S92>/Switch1' incorporates:
   *  Constant: '<S92>/Constant2'
   *  Constant: '<S92>/Constant4'
   *  Switch: '<S92>/Switch'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else if (rtu_SetCondition) {
    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S92>/Constant'
     */
    *rty_MonRes = ((uint8_T)1U);
  } else {
    *rty_MonRes = ((uint8_T)2U);
  }

  /* End of Switch: '<S92>/Switch1' */

  /* Switch: '<S92>/Switch8' incorporates:
   *  Constant: '<S92>/Constant5'
   *  Constant: '<S92>/Constant6'
   *  Constant: '<S92>/DEBOUNCING'
   *  Constant: '<S92>/DEBOUNCING_P'
   *  RelationalOperator: '<S92>/Equal2'
   *  RelationalOperator: '<S92>/Equal6'
   *  Switch: '<S92>/Switch3'
   */
  if (*rty_MonRes == ((uint8_T)2U)) {
    *rty_ErrStat = ((uint8_T)4U);
  } else if (*rty_MonRes == ((uint8_T)1U)) {
    /* Switch: '<S92>/Switch3' incorporates:
     *  Constant: '<S92>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S92>/Switch8' */

  /* Switch: '<S92>/Switch6' incorporates:
   *  Constant: '<S92>/Constant30'
   *  Constant: '<S92>/Constant31'
   *  Constant: '<S92>/Constant32'
   *  Delay: '<S92>/Delay1'
   *  RelationalOperator: '<S92>/Equal3'
   *  RelationalOperator: '<S92>/Equal4'
   *  Switch: '<S92>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S92>/Switch7' incorporates:
     *  Constant: '<S92>/Constant11'
     */
    *rty_ErrorRes = false;
  } else {
    *rty_ErrorRes = CtAp_DrvMod__ARID_DEF_arg->Delay1_DSTATE;
  }

  /* End of Switch: '<S92>/Switch6' */

  /* Update for Delay: '<S92>/Delay1' */
  CtAp_DrvMod__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
}

#define CtAp_DrvMod_STOP_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DrvMod_START_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

void R_DrvMod_Cyclic_20ms(void)
{
  /* local block i/o variables */
  dt_Nv_ModMgmtInfo rtb_ModMgmtInfo_read;
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch1_b5vt;
  uint8_T rtb_Switch1_jw0e;
  uint8_T rtb_Delay;
  uint8_T rtb_Delay_mfbw;
  uint8_T rtb_Switch8;
  uint8_T rtb_Switch;
  uint8_T rtb_Switch8_coji;
  uint8_T rtb_Switch_prdc;
  uint8_T rtb_Switch_e5fv;
  uint8_T rtb_Switch8_m5ua;
  boolean_T rtb_ComM_IVINodComFailr_Flg;
  boolean_T rtb_DiagApp_DisableDCMReqInfo;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator11;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator9;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_True;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_Compare_bdiw;
  boolean_T rtb_Compare_nab2;
  boolean_T rtb_Compare_my30;
  boolean_T rtb_LogicalOperator4_ihdv;
  boolean_T rtb_LogicalOperator1_msmw;
  boolean_T rtb_LogicalOperator_p3r2;
  boolean_T rtb_LogicalOperator8;
  boolean_T rtb_LogicalOperator7_gbn5;
  boolean_T rtb_LogicalOperator6_m2pg;
  boolean_T rtb_True_mav3;
  boolean_T rtb_True_cks0;
  real32_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  uint8_T tmpRead_5;
  uint8_T tmpRead_6;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_6);

  /* SignalConversion: '<S5>/SignalCopy10' incorporates:
   *  Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo'
   */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&rtb_DiagApp_DisableDCMReqInfo);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_5);

  /* SignalConversion: '<S5>/SignalCopy6' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
    (&rtb_ComM_IVINodComFailr_Flg);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum' */
  (void)Rte_Read_RTE_R_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum' */
  (void)Rte_Read_RTE_R_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&tmpRead);

  /* SignalConversion: '<S5>/SignalCopy9' incorporates:
   *  Inport: '<Root>/RTE_RP_ModMgmtInfo_tec_ModMgmtInfo_read'
   *  SignalConversion generated from: '<Root>/RTE_RP_ModMgmtInfo_tec_ModMgmtInfo_read'
   */
  (void)Rte_Read_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo(&rtb_ModMgmtInfo_read);

  /* Outputs for Atomic SubSystem: '<Root>/R_DrvMod_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/ModMgmt_ActDrvMod'
   *
   * Block requirements for '<S4>/ModMgmt_ActDrvMod':
   *  1. VCU_SW_Requirements_Specification.slreqx:830
   *  2. VCU_SW_Requirements_Specification.slreqx:831
   *  3. VCU_SW_Requirements_Specification.slreqx:832
   *  4. VCU_SW_Requirements_Specification.slreqx:833
   *  5. VCU_SW_Requirements_Specification.slreqx:834
   */
  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S89>/True'
   */
  rtb_True_cks0 = (rtb_ModMgmtInfo_read.ModMgmt_DrvModMemInfo_Enum <= ((uint8_T)
    DrvMod_OnePedal));

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S90>/True'
   */
  rtb_True_mav3 = (rtb_ModMgmtInfo_read.ModMgmt_DrvModMemInfo_Enum >= ((uint8_T)
    DrvMod_ECO));

  /* Logic: '<S7>/LogicalOperator1' */
  rtb_LogicalOperator1_msmw = (rtb_True_cks0 && rtb_True_mav3);

  /* Outputs for Atomic SubSystem: '<S7>/If4' */
  /* Constant: '<S7>/Marco_NORMAL1' */
  rtb_Switch_e5fv = CtAp_DrvMod_If(rtb_LogicalOperator1_msmw,
    rtb_ModMgmtInfo_read.ModMgmt_DrvModMemInfo_Enum, ((uint8_T)DrvMod_NORMAL));

  /* End of Outputs for SubSystem: '<S7>/If4' */

  /* Delay: '<S7>/Delay'
   *
   * Block requirements for '<S7>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   */
  if (CtAp_DrvMod_ARID_DEF.icLoad_adij) {
    CtAp_DrvMod_ARID_DEF.Delay_DSTATE_pcmp = rtb_Switch_e5fv;
  }

  /* Delay: '<S7>/Delay'
   *
   * Block requirements for '<S7>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   */
  rtb_Delay_mfbw = CtAp_DrvMod_ARID_DEF.Delay_DSTATE_pcmp;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S7>/LogicalOperator' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Logic: '<S7>/LogicalOperator2'
   *  Logic: '<S7>/LogicalOperator3'
   *  Logic: '<S7>/LogicalOperator4'
   *  Logic: '<S7>/LogicalOperator5'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:830
   */
  rtb_LogicalOperator_p3r2 = (((tmpRead_1 == ((uint8_T)DrvMod_NORMAL)) &&
    (tmpRead_5 != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)
    DrvMod_Sleep))) || ((tmpRead_5 != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 !=
    ((uint8_T)DrvMod_Sleep)) && (((tmpRead_0 == ((uint8_T)DrvMod_Not_Avaliable))
    && (tmpRead_4 == DrvMod_Passed)) || tmpRead_4) && (rtb_Delay_mfbw ==
    ((uint8_T)DrvMod_OnePedal))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If' */
  /* Constant: '<S7>/Marco_NORMAL' */
  rtb_Switch_prdc = CtAp_DrvMod_If(rtb_LogicalOperator_p3r2, ((uint8_T)
    DrvMod_NORMAL), rtb_Delay_mfbw);

  /* End of Outputs for SubSystem: '<S7>/If' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S7>/LogicalOperator8' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator8':
   *  1. VCU_SW_Requirements_Specification.slreqx:833
   */
  rtb_LogicalOperator8 = ((tmpRead_1 == ((uint8_T)DrvMod_OnePedal)) &&
    (tmpRead_5 != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)
    DrvMod_Sleep)) && (tmpRead_6 == ((uint8_T)DrvMod_Gear_P)) && (tmpRead_0 ==
    ((uint8_T)DrvMod_Avaliable)) && (tmpRead_4 == DrvMod_Passed));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If3' */
  /* Constant: '<S7>/Marco_OnePedal' */
  rtb_Switch = CtAp_DrvMod_If(rtb_LogicalOperator8, ((uint8_T)DrvMod_OnePedal),
    rtb_Switch_prdc);

  /* End of Outputs for SubSystem: '<S7>/If3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S7>/LogicalOperator7' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator7':
   *  1. VCU_SW_Requirements_Specification.slreqx:832
   */
  rtb_LogicalOperator7_gbn5 = ((tmpRead_1 == ((uint8_T)DrvMod_SPORT)) &&
    (tmpRead_5 != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)
    DrvMod_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If2' */
  /* Constant: '<S7>/Marco_SPORT' */
  rtb_Switch_prdc = CtAp_DrvMod_If(rtb_LogicalOperator7_gbn5, ((uint8_T)
    DrvMod_SPORT), rtb_Switch);

  /* End of Outputs for SubSystem: '<S7>/If2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S7>/LogicalOperator6' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S7>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:831
   */
  rtb_LogicalOperator6_m2pg = ((tmpRead_1 == ((uint8_T)DrvMod_ECO)) &&
    (tmpRead_5 != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)
    DrvMod_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/If1' */
  /* Constant: '<S7>/Marco_ECO' */
  rtb_Switch8_m5ua = CtAp_DrvMod_If(rtb_LogicalOperator6_m2pg, ((uint8_T)
    DrvMod_ECO), rtb_Switch_prdc);

  /* End of Outputs for SubSystem: '<S7>/If1' */

  /* Outputs for Atomic SubSystem: '<S7>/If5' */
  /* Constant: '<S7>/ModMgmt_ActDrvMod_Enum_CtrlCFG' incorporates:
   *  Constant: '<S7>/ModMgmt_ActDrvMod_Enum_ValueCFG'
   *
   * Block requirements for '<S7>/ModMgmt_ActDrvMod_Enum_CtrlCFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:870
   *
   * Block requirements for '<S7>/ModMgmt_ActDrvMod_Enum_ValueCFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:870
   */
  rtb_Switch = CtAp_DrvMod_If(ModMgmt_ActDrvMod_Enum_CtrlCFG,
    ModMgmt_ActDrvMod_Enum_ValueCFG, rtb_Switch8_m5ua);

  /* End of Outputs for SubSystem: '<S7>/If5' */

  /* Update for Delay: '<S7>/Delay'
   *
   * Block requirements for '<S7>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   */
  CtAp_DrvMod_ARID_DEF.icLoad_adij = false;
  CtAp_DrvMod_ARID_DEF.Delay_DSTATE_pcmp = rtb_Switch8_m5ua;

  /* End of Outputs for SubSystem: '<S4>/ModMgmt_ActDrvMod' */

  /* Outputs for Atomic SubSystem: '<S4>/ModMgmt_ActRgnSts'
   *
   * Block requirements for '<S4>/ModMgmt_ActRgnSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:841
   *  2. VCU_SW_Requirements_Specification.slreqx:842
   *  3. VCU_SW_Requirements_Specification.slreqx:843
   *  4. VCU_SW_Requirements_Specification.slreqx:844
   *  5. VCU_SW_Requirements_Specification.slreqx:845
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S49>/Constant'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S49>/Compare'
   *  SignalConversion: '<S5>/SignalCopy3'
   *
   * Block requirements for '<S8>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:841
   */
  rtb_LogicalOperator = ((rtb_Switch == ((uint8_T)DrvMod_OnePedal)) ||
    (tmpRead_2 == ((uint8_T)DrvMod_Strong)));

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_Compare_bdiw = (tmpRead_2 == ((uint8_T)DrvMod_Off));

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_Compare_nab2 = (tmpRead_2 == ((uint8_T)DrvMod_Weak));

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  rtb_Compare_my30 = (tmpRead_2 == ((uint8_T)DrvMod_Medium));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S89>/True'
   */
  rtb_True_cks0 = (rtb_ModMgmtInfo_read.ModMgmt_ActRgnStsMemInfo_Enum <=
                   ((uint8_T)DrvMod_Strong));

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Constant: '<S90>/True'
   */
  rtb_True_mav3 = (rtb_ModMgmtInfo_read.ModMgmt_ActRgnStsMemInfo_Enum >=
                   ((uint8_T)DrvMod_Off));

  /* Logic: '<S8>/LogicalOperator4' */
  rtb_LogicalOperator4_ihdv = (rtb_True_cks0 && rtb_True_mav3);

  /* Outputs for Atomic SubSystem: '<S8>/If4'
   *
   * Block requirements for '<S8>/If4':
   *  1. VCU_SW_Requirements_Specification.slreqx:846
   */
  /* Constant: '<S8>/Marco_Medium1' */
  rtb_Switch_prdc = CtAp_DrvMod_If(rtb_LogicalOperator4_ihdv,
    rtb_ModMgmtInfo_read.ModMgmt_ActRgnStsMemInfo_Enum, ((uint8_T)DrvMod_Medium));

  /* End of Outputs for SubSystem: '<S8>/If4' */

  /* Delay: '<S8>/Delay' */
  if (CtAp_DrvMod_ARID_DEF.icLoad) {
    CtAp_DrvMod_ARID_DEF.Delay_DSTATE = rtb_Switch_prdc;
  }

  /* Delay: '<S8>/Delay' */
  rtb_Delay = CtAp_DrvMod_ARID_DEF.Delay_DSTATE;

  /* Outputs for Atomic SubSystem: '<S8>/If3' */
  /* Constant: '<S8>/Marco_Medium' */
  rtb_Switch_e5fv = CtAp_DrvMod_If(rtb_Compare_my30, ((uint8_T)DrvMod_Medium),
    rtb_Delay);

  /* End of Outputs for SubSystem: '<S8>/If3' */

  /* Outputs for Atomic SubSystem: '<S8>/If2' */
  /* Constant: '<S8>/Marco_Weak' */
  rtb_Switch8_m5ua = CtAp_DrvMod_If(rtb_Compare_nab2, ((uint8_T)DrvMod_Weak),
    rtb_Switch_e5fv);

  /* End of Outputs for SubSystem: '<S8>/If2' */

  /* Outputs for Atomic SubSystem: '<S8>/If1' */
  /* Constant: '<S8>/Marco_Off' */
  rtb_Switch_e5fv = CtAp_DrvMod_If(rtb_Compare_bdiw, ((uint8_T)DrvMod_Off),
    rtb_Switch8_m5ua);

  /* End of Outputs for SubSystem: '<S8>/If1' */

  /* Outputs for Atomic SubSystem: '<S8>/If' */
  /* Constant: '<S8>/Marco_Strong' */
  rtb_Switch8_m5ua = CtAp_DrvMod_If(rtb_LogicalOperator, ((uint8_T)DrvMod_Strong),
    rtb_Switch_e5fv);

  /* End of Outputs for SubSystem: '<S8>/If' */

  /* Outputs for Atomic SubSystem: '<S8>/If5' */
  /* Constant: '<S8>/ModMgmt_ActRgnSts_Enum_CtrlCFG' incorporates:
   *  Constant: '<S8>/ModMgmt_ActRgnSts_Enum_ValueCFG'
   *
   * Block requirements for '<S8>/ModMgmt_ActRgnSts_Enum_CtrlCFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:870
   *
   * Block requirements for '<S8>/ModMgmt_ActRgnSts_Enum_ValueCFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:870
   */
  rtb_Switch_e5fv = CtAp_DrvMod_If(ModMgmt_ActRgnSts_Enum_CtrlCFG,
    ModMgmt_ActRgnSts_Enum_ValueCFG, rtb_Switch8_m5ua);

  /* End of Outputs for SubSystem: '<S8>/If5' */

  /* Update for Delay: '<S8>/Delay' */
  CtAp_DrvMod_ARID_DEF.icLoad = false;
  CtAp_DrvMod_ARID_DEF.Delay_DSTATE = rtb_Switch8_m5ua;

  /* End of Outputs for SubSystem: '<S4>/ModMgmt_ActRgnSts' */

  /* Outputs for Atomic SubSystem: '<S4>/ModMgmt_NVM'
   *
   * Block requirements for '<S4>/ModMgmt_NVM':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   *  2. VCU_SW_Requirements_Specification.slreqx:846
   */
  /* Switch: '<S93>/Switch8' incorporates:
   *  DataTypeConversion: '<S10>/DataTypeConversion'
   */
  rtb_Switch8 = rtb_Switch;

  /* Switch: '<S94>/Switch8' incorporates:
   *  DataTypeConversion: '<S10>/DataTypeConversion1'
   */
  rtb_Switch8_coji = rtb_Switch_e5fv;

  /* Outport: '<Root>/RTE_RP_ModMgmtInfo_tec_ModMgmtInfo_write' incorporates:
   *  BusCreator: '<S10>/Bus Creator'
   *
   * Block requirements for '<S10>/Bus Creator':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   */
  CtAp_DrvMod_ARID_DEF.RTE_RP_ModMgmtInfo_tec_ModMgmtI.ModMgmt_DrvModMemInfo_Enum
    = rtb_Switch8;
  CtAp_DrvMod_ARID_DEF.RTE_RP_ModMgmtInfo_tec_ModMgmtI.ModMgmt_ActRgnStsMemInfo_Enum
    = rtb_Switch8_coji;

  /* End of Outputs for SubSystem: '<S4>/ModMgmt_NVM' */

  /* Outputs for Atomic SubSystem: '<S4>/ModMgmt_DrvModSwtWarn'
   *
   * Block requirements for '<S4>/ModMgmt_DrvModSwtWarn':
   *  1. VCU_SW_Requirements_Specification.slreqx:837
   *  2. VCU_SW_Requirements_Specification.slreqx:838
   *  3. VCU_SW_Requirements_Specification.slreqx:839
   *  4. VCU_SW_Requirements_Specification.slreqx:840
   *  5. VCU_SW_Requirements_Specification.slreqx:851
   *  6. VCU_SW_Requirements_Specification.slreqx:852
   *  7. VCU_SW_Requirements_Specification.slreqx:859
   *  8. VCU_SW_Requirements_Specification.slreqx:860
   *  9. VCU_SW_Requirements_Specification.slreqx:864
   *  10. VCU_SW_Requirements_Specification.slreqx:865
   *  11. VCU_SW_Requirements_Specification.slreqx:872
   *  12. VCU_SW_Requirements_Specification.slreqx:873
   *  13. VCU_SW_Requirements_Specification.slreqx:877
   *  14. VCU_SW_Requirements_Specification.slreqx:878
   *  15. VCU_SW_Requirements_Specification.slreqx:885
   *  16. VCU_SW_Requirements_Specification.slreqx:886
   */
  /* Outputs for Atomic SubSystem: '<S9>/If2'
   *
   * Block requirements for '<S9>/If2':
   *  1. VCU_SW_Requirements_Specification.slreqx:839
   *  2. VCU_SW_Requirements_Specification.slreqx:840
   */
  /* Constant: '<S9>/Marco_Warning_one' incorporates:
   *  Constant: '<S9>/Marco_No_Waring'
   */
  rtb_Switch8_m5ua = CtAp_DrvMod_If(ModMgmt_ErrResSptModWarnLoSOC, ((uint8_T)
    DrvMod_WarningLvlOne), ((uint8_T)DrvMod_NoWaring));

  /* End of Outputs for SubSystem: '<S9>/If2' */

  /* Outputs for Atomic SubSystem: '<S9>/If1'
   *
   * Block requirements for '<S9>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:838
   */
  /* Constant: '<S9>/Marco_Warning_two' */
  rtb_Switch8_coji = CtAp_DrvMod_If(ModMgmt_ErrResOnePedlWarnVehFaild, ((uint8_T)
    DrvMod_WarningLvlTwo), rtb_Switch8_m5ua);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S9>/If'
   *
   * Block requirements for '<S9>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:837
   */
  /* Constant: '<S9>/Marco_Warning_three' */
  rtb_Switch_prdc = CtAp_DrvMod_If(ModMgmt_ErrResOnePedlWarnHiSpd, ((uint8_T)
    DrvMod_WarningLvlThree), rtb_Switch8_coji);

  /* End of Outputs for SubSystem: '<S9>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt1' */
  /* Constant: '<S9>/ModMgmt_RunStep3' incorporates:
   *  Constant: '<S9>/ModMgmt_DrvModWarn2SetTmr_CFG'
   */
  rtb_True_cks0 = CtAp_DrvMod_ATOM_TimeCnt(ModMgmt_ErrResOnePedlWarnVehFaild,
    ((uint16_T)DrvMod_ModMgmt_RunStep), ModMgmt_DrvModWarn2SetTmr_CFG,
    &CtAp_DrvMod_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S9>/LogicalOperator12' incorporates:
   *  Constant: '<S62>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Logic: '<S9>/LogicalOperator16'
   *  Logic: '<S9>/LogicalOperator17'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator12':
   *  1. VCU_SW_Requirements_Specification.slreqx:878
   */
  rtb_LogicalOperator12 = (((tmpRead_1 == ((uint8_T)DrvMod_OnePedal)) &&
    (tmpRead_6 == ((uint8_T)DrvMod_Gear_P))) || (tmpRead_5 == ((uint8_T)
    DrvMod_INIT)) || (tmpRead_5 == ((uint8_T)DrvMod_Sleep)) || rtb_True_cks0 ||
    ((tmpRead_1 == ((uint8_T)DrvMod_ECO)) || (tmpRead_1 == ((uint8_T)
    DrvMod_NORMAL)) || (tmpRead_1 == ((uint8_T)DrvMod_SPORT))));

  /* Logic: '<S9>/LogicalOperator11' incorporates:
   *  Constant: '<S61>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator11':
   *  1. VCU_SW_Requirements_Specification.slreqx:877
   */
  rtb_LogicalOperator11 = ((tmpRead_1 == ((uint8_T)DrvMod_OnePedal)) &&
    (tmpRead_6 != ((uint8_T)DrvMod_Gear_P)) && (tmpRead_5 != ((uint8_T)
    DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)DrvMod_Sleep)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/NoEnableAndTime1' */
  CtAp_DrvMod_NoEnableAndTime(rtb_LogicalOperator11, rtb_LogicalOperator12,
    &rtb_True_mav3, &rtb_Switch1_b5vt, &rtb_Switch8,
    &ModMgmt_ErrResOnePedlWarnVehFaild,
    &CtAp_DrvMod_ARID_DEF.ARID_DEF_NoEnableAndTime1);

  /* End of Outputs for SubSystem: '<S9>/NoEnableAndTime1' */

  /* SignalConversion generated from: '<S9>/NoEnableAndTime1' */
  ModMgmt_MonResOnePedlWarnVehFaild = rtb_Switch1_b5vt;

  /* Outputs for Atomic SubSystem: '<S9>/ATOM_TimeCnt' */
  /* Constant: '<S9>/ModMgmt_RunStep1' incorporates:
   *  Constant: '<S9>/ModMgmt_DrvModWarn3SetTmr_CFG'
   */
  rtb_True_cks0 = CtAp_DrvMod_ATOM_TimeCnt(ModMgmt_ErrResOnePedlWarnHiSpd,
    ((uint16_T)DrvMod_ModMgmt_RunStep), ModMgmt_DrvModWarn3SetTmr_CFG,
    &CtAp_DrvMod_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S9>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S9>/LogicalOperator4' incorporates:
   *  Constant: '<S59>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  Logic: '<S9>/LogicalOperator14'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:865
   */
  rtb_LogicalOperator4 = ((tmpRead_0 == ((uint8_T)DrvMod_Avaliable)) ||
    (tmpRead_5 == ((uint8_T)DrvMod_INIT)) || (tmpRead_5 == ((uint8_T)
    DrvMod_Sleep)) || rtb_True_cks0 || ((tmpRead_1 == ((uint8_T)DrvMod_ECO)) ||
    (tmpRead_1 == ((uint8_T)DrvMod_NORMAL)) || (tmpRead_1 == ((uint8_T)
    DrvMod_SPORT))));

  /* Logic: '<S9>/LogicalOperator3' incorporates:
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Logic: '<S9>/LogicalOperator1'
   *  Logic: '<S9>/LogicalOperator5'
   *  Logic: '<S9>/LogicalOperator6'
   *  Logic: '<S9>/LogicalOperator7'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:864
   */
  rtb_LogicalOperator3 = (((rtb_Switch == ((uint8_T)DrvMod_OnePedal)) ||
    (tmpRead_1 == ((uint8_T)DrvMod_OnePedal))) && ((tmpRead_5 != ((uint8_T)
    DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)DrvMod_Sleep))) && (((tmpRead_0 ==
    ((uint8_T)DrvMod_Not_Avaliable)) && (tmpRead_4 == DrvMod_Passed)) ||
    tmpRead_4));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/NoEnableAndTime' */
  CtAp_DrvMod_NoEnableAndTime(rtb_LogicalOperator3, rtb_LogicalOperator4,
    &rtb_True_cks0, &rtb_Switch1_jw0e, &rtb_Switch8_m5ua,
    &ModMgmt_ErrResOnePedlWarnHiSpd,
    &CtAp_DrvMod_ARID_DEF.ARID_DEF_NoEnableAndTime);

  /* End of Outputs for SubSystem: '<S9>/NoEnableAndTime' */

  /* SignalConversion generated from: '<S9>/NoEnableAndTime' */
  ModMgmt_MonResOnePedlWarnHiSpd = rtb_Switch1_jw0e;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Input' */
  /* Logic: '<S9>/LogicalOperator9' incorporates:
   *  Constant: '<S54>/Constant'
   *  Constant: '<S56>/Constant'
   *  Constant: '<S75>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  RelationalOperator: '<S54>/Compare'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator9':
   *  1. VCU_SW_Requirements_Specification.slreqx:851
   */
  rtb_LogicalOperator9 = ((rtb_Switch == ((uint8_T)DrvMod_SPORT)) && (tmpRead <=
    ModMgmt_BMSDispSOCSetThd_CFG) && (tmpRead_3 == DrvMod_Passed) && (tmpRead_5
    != ((uint8_T)DrvMod_INIT)) && (tmpRead_5 != ((uint8_T)DrvMod_Sleep)));

  /* Logic: '<S9>/LogicalOperator10' incorporates:
   *  Constant: '<S55>/Constant'
   *  Constant: '<S76>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   *  RelationalOperator: '<S55>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy7'
   *
   * Block requirements for '<S9>/LogicalOperator10':
   *  1. VCU_SW_Requirements_Specification.slreqx:852
   */
  rtb_LogicalOperator10 = ((tmpRead > ModMgmt_BMSDispSOCRstThd_CFG) || tmpRead_3
    || (tmpRead_5 == ((uint8_T)DrvMod_INIT)) || (tmpRead_5 == ((uint8_T)
    DrvMod_Sleep)) || (rtb_Switch != ((uint8_T)DrvMod_SPORT)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Input' */

  /* Outputs for Atomic SubSystem: '<S9>/NoEnableAndTime2' */
  CtAp_DrvMod_NoEnableAndTime(rtb_LogicalOperator9, rtb_LogicalOperator10,
    &rtb_True, &rtb_Switch1, &rtb_Switch8_coji, &ModMgmt_ErrResSptModWarnLoSOC,
    &CtAp_DrvMod_ARID_DEF.ARID_DEF_NoEnableAndTime2);

  /* End of Outputs for SubSystem: '<S9>/NoEnableAndTime2' */

  /* SignalConversion generated from: '<S9>/NoEnableAndTime2' */
  ModMgmt_MonResSptModWarnLoSOC = rtb_Switch1;

  /* End of Outputs for SubSystem: '<S4>/ModMgmt_DrvModSwtWarn' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Output' */
  /* Outport: '<Root>/RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (rtb_Switch);

  /* Outport: '<Root>/RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum
    (rtb_Switch_e5fv);

  /* Outport: '<Root>/RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy2'
   */
  (void)
    Rte_Write_RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum
    (rtb_Switch_prdc);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvMod_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/ModMgmt_DrvModSwtWarn'
   *
   * Block requirements for '<S4>/ModMgmt_DrvModSwtWarn':
   *  1. VCU_SW_Requirements_Specification.slreqx:837
   *  2. VCU_SW_Requirements_Specification.slreqx:838
   *  3. VCU_SW_Requirements_Specification.slreqx:839
   *  4. VCU_SW_Requirements_Specification.slreqx:840
   *  5. VCU_SW_Requirements_Specification.slreqx:851
   *  6. VCU_SW_Requirements_Specification.slreqx:852
   *  7. VCU_SW_Requirements_Specification.slreqx:859
   *  8. VCU_SW_Requirements_Specification.slreqx:860
   *  9. VCU_SW_Requirements_Specification.slreqx:864
   *  10. VCU_SW_Requirements_Specification.slreqx:865
   *  11. VCU_SW_Requirements_Specification.slreqx:872
   *  12. VCU_SW_Requirements_Specification.slreqx:873
   *  13. VCU_SW_Requirements_Specification.slreqx:877
   *  14. VCU_SW_Requirements_Specification.slreqx:878
   *  15. VCU_SW_Requirements_Specification.slreqx:885
   *  16. VCU_SW_Requirements_Specification.slreqx:886
   */
  /* Outport: '<Root>/RTE_P_ModMgmt_OnePedlWarnHiSpd_Bus_tec_ModMgmt_OnePedlWarnHiSpd_Bus' incorporates:
   *  BusCreator: '<S9>/Bus Creator'
   */
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnHiSpd_.ModMgmt_MonStatOnePedlWarnHiSpd
    = rtb_True_cks0;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnHiSpd_.ModMgmt_MonResOnePedlWarnHiSpd
    = ModMgmt_MonResOnePedlWarnHiSpd;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnHiSpd_.ModMgmt_ErrStatOnePedlWarnHiSpd
    = rtb_Switch8_m5ua;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnHiSpd_.ModMgmt_ErrResOnePedlWarnHiSpd
    = ModMgmt_ErrResOnePedlWarnHiSpd;

  /* Outport: '<Root>/RTE_P_ModMgmt_OnePedlWarnVehFaild_Bus_tec_ModMgmt_OnePedlWarnVehFaild_Bus' incorporates:
   *  BusCreator: '<S9>/Bus Creator1'
   */
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnVehFai.ModMgmt_MonStatOnePedlWarnVehFaild
    = rtb_True_mav3;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnVehFai.ModMgmt_MonResOnePedlWarnVehFaild
    = ModMgmt_MonResOnePedlWarnVehFaild;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnVehFai.ModMgmt_ErrStatOnePedlWarnVehFaild
    = rtb_Switch8;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnVehFai.ModMgmt_ErrResOnePedlWarnVehFaild
    = ModMgmt_ErrResOnePedlWarnVehFaild;

  /* Outport: '<Root>/RTE_P_ModMgmt_SptModWarnLoSOC_Bus_tec_ModMgmt_SptModWarnLoSOC_Bus' incorporates:
   *  BusCreator: '<S9>/Bus Creator2'
   */
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_SptModWarnLoSOC_B.ModMgmt_MonStatSptModWarnLoSOC
    = rtb_True;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_SptModWarnLoSOC_B.ModMgmt_MonResSptModWarnLoSOC
    = ModMgmt_MonResSptModWarnLoSOC;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_SptModWarnLoSOC_B.ModMgmt_ErrStatSptModWarnLoSOC
    = rtb_Switch8_coji;
  CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_SptModWarnLoSOC_B.ModMgmt_ErrResSptModWarnLoSOC
    = ModMgmt_ErrResSptModWarnLoSOC;

  /* End of Outputs for SubSystem: '<S4>/ModMgmt_DrvModSwtWarn' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvMod_Function' */
  /* End of Outputs for SubSystem: '<Root>/R_DrvMod_Cyclic_20ms_sys' */
  (void)
    Rte_Write_RTE_P_ModMgmt_OnePedlWarnHiSpd_Bus_tec_ModMgmt_OnePedlWarnHiSpd_Bus
    (&CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnHiSpd_);
  (void)
    Rte_Write_RTE_P_ModMgmt_OnePedlWarnVehFaild_Bus_tec_ModMgmt_OnePedlWarnVehFaild_Bus
    (&CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_OnePedlWarnVehFai);
  (void)
    Rte_Write_RTE_P_ModMgmt_SptModWarnLoSOC_Bus_tec_ModMgmt_SptModWarnLoSOC_Bus(
    &CtAp_DrvMod_ARID_DEF.RTE_P_ModMgmt_SptModWarnLoSOC_B);
  (void)Rte_Write_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo
    (&CtAp_DrvMod_ARID_DEF.RTE_RP_ModMgmtInfo_tec_ModMgmtI);
}

#define CtAp_DrvMod_STOP_SEC_CODE
#include "CtAp_DrvMod_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DrvMod_START_SEC_VAR_CONST_8
#include "CtAp_DrvMod_MemMap.h"

void R_DrvMod_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ModMgmt_MonResOnePedlWarnVehFaild = ((uint8_T)0U);
  ModMgmt_MonResOnePedlWarnHiSpd = ((uint8_T)0U);
  ModMgmt_MonResSptModWarnLoSOC = ((uint8_T)0U);
  ModMgmt_ErrResOnePedlWarnVehFaild = false;
  ModMgmt_ErrResOnePedlWarnHiSpd = false;
  ModMgmt_ErrResSptModWarnLoSOC = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_DrvMod_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_DrvMod_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_DrvMod_Cyclic_20ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_DrvMod_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/ModMgmt_ActDrvMod'
   *
   * Block requirements for '<S4>/ModMgmt_ActDrvMod':
   *  1. VCU_SW_Requirements_Specification.slreqx:830
   *  2. VCU_SW_Requirements_Specification.slreqx:831
   *  3. VCU_SW_Requirements_Specification.slreqx:832
   *  4. VCU_SW_Requirements_Specification.slreqx:833
   *  5. VCU_SW_Requirements_Specification.slreqx:834
   */
  /* InitializeConditions for Delay: '<S7>/Delay'
   *
   * Block requirements for '<S7>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:835
   */
  CtAp_DrvMod_ARID_DEF.icLoad_adij = true;

  /* End of SystemInitialize for SubSystem: '<S4>/ModMgmt_ActDrvMod' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/ModMgmt_ActRgnSts'
   *
   * Block requirements for '<S4>/ModMgmt_ActRgnSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:841
   *  2. VCU_SW_Requirements_Specification.slreqx:842
   *  3. VCU_SW_Requirements_Specification.slreqx:843
   *  4. VCU_SW_Requirements_Specification.slreqx:844
   *  5. VCU_SW_Requirements_Specification.slreqx:845
   */
  /* InitializeConditions for Delay: '<S8>/Delay' */
  CtAp_DrvMod_ARID_DEF.icLoad = true;

  /* End of SystemInitialize for SubSystem: '<S4>/ModMgmt_ActRgnSts' */
  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_DrvMod_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_DrvMod_Cyclic_20ms_sys' */
}

#define CtAp_DrvMod_STOP_SEC_VAR_CONST_8
#include "CtAp_DrvMod_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
