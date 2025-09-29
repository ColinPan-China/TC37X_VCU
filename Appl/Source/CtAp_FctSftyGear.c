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
 *  Filename:           CtAp_FctSftyGear.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.2
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:36:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:35:37 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FctSftyGear.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyGear_private.h"
#include "Rte_Type.h"
#include "CtAp_FctSftyGear_Cal.h"
#include "CtAp_FctSftyGear_Glb.h"

/*  Defines */

/* Named constants for Chart: '<S9>/FctSftyMon_EPBPrk' */
#define CtAp_FctSftyGe_IN_EPBPrkSuccess ((uint8_T)2U)
#define CtAp_FctSftyGea_IN_EPBPrkFailed ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_EPBPrkWait ((uint8_T)3U)
#define CtAp_FctSfty_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp__IN_FctSftyMon_EPBPrk_Init ((uint8_T)4U)

/* Named constants for Chart: '<S9>/FctSftyMon_EPBRels' */
#define CtAp_FctSftyG_IN_EPBRelsSuccess ((uint8_T)2U)
#define CtAp_FctSftyGe_IN_EPBRelsFailed ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_EPBRelsWait ((uint8_T)3U)
#define CtAp_Fct_IN_FctSftyMon_EPB_Init ((uint8_T)4U)

/* Named constants for Chart: '<S9>/GearMgmt_EPBReqCmpl' */
#define CtAp_FctSftyGear_IN_EPBActive  ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_EPBInactive ((uint8_T)2U)

/* Named constants for Chart: '<S10>/EPBReqCnt' */
#define CtAp_FctSftyGear_IN_Count      ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_EPBPrkReq  ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_EPBRelsReq ((uint8_T)2U)
#define CtAp_FctSftyGear_IN_Init       ((uint8_T)2U)

/* Named constants for Chart: '<S7>/GearMgmt_GearShift' */
#define CtAp_FctSftyGea_IN_ActualGear_D ((uint8_T)1U)
#define CtAp_FctSftyGea_IN_ActualGear_N ((uint8_T)2U)
#define CtAp_FctSftyGea_IN_ActualGear_P ((uint8_T)3U)
#define CtAp_FctSftyGea_IN_ActualGear_R ((uint8_T)4U)
#define CtAp_FctSftyGear_IN_Init_dfzf  ((uint8_T)1U)
#define CtAp_FctSftyGear_IN_Normal     ((uint8_T)2U)

/* Named constants for Chart: '<S8>/GearMgmt_WakeUp' */
#define CtAp_FctSft_IN_WakeUp_EPBActive ((uint8_T)4U)
#define CtAp_FctSftyGear_IN_WakeUp_Cfm ((uint8_T)3U)
#define CtAp_FctSftyGear_IN_WakeUp_Init ((uint8_T)6U)
#define CtAp_FctSfty_IN_WakeUp_EPBDelay ((uint8_T)5U)
#define CtAp_Fct_IN_WakeUp_ActualGear_N ((uint8_T)1U)
#define CtAp_Fct_IN_WakeUp_ActualGear_P ((uint8_T)2U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"

ARID_DEF_CtAp_FctSftyGear_T CtAp_FctSftyGear_ARID_DEF;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S5>/ATOM_TimeCnt'
 *    '<S8>/ATOM_TimeCnt'
 */
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

boolean_T CtAp_FctSftyGear_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T
  *CtAp_FctSftyGear__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S49>/Add1' incorporates:
   *  DataTypeConversion: '<S49>/Data Type Conversion'
   *  DataTypeConversion: '<S49>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S49>/Switch' */
  if (rtu_In) {
    /* Sum: '<S49>/Add' incorporates:
     *  DataTypeConversion: '<S49>/Data Type Conversion'
     *  UnitDelay: '<S49>/Delay'
     */
    CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S49>/Min' */
    if (rtb_Add1 <= CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S49>/Add' */
      CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S49>/Min' */
  } else {
    /* Sum: '<S49>/Add' incorporates:
     *  Constant: '<S49>/Constant'
     *  UnitDelay: '<S49>/Delay'
     */
    CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S49>/Switch' */

  /* RelationalOperator: '<S49>/Relational Operator' incorporates:
   *  UnitDelay: '<S49>/Delay'
   */
  return CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

/* Output and update for atomic system: '<S5>/ATOM_U16ErrHnd' */
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

void CtAp_FctSftyGear_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_FctSftyGear__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S50>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S50>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S51>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S51>/Constant2'
     *  Constant: '<S51>/Constant4'
     *  Switch: '<S51>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S51>/Switch' incorporates:
       *  Constant: '<S51>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S51>/Switch1' */

    /* Switch: '<S53>/Switch1' incorporates:
     *  Constant: '<S51>/Constant3'
     *  RelationalOperator: '<S51>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S53>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S53>/Sum' incorporates:
       *  UnitDelay: '<S53>/UnitDelay'
       */
      CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S53>/MinMax' */
      if (u0 <= CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S53>/Sum' */
        CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S53>/MinMax' */
    } else {
      /* Sum: '<S53>/Sum' incorporates:
       *  Constant: '<S51>/Constant23'
       *  UnitDelay: '<S53>/UnitDelay'
       */
      CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S53>/Switch1' */

    /* RelationalOperator: '<S51>/Equal2' incorporates:
     *  Constant: '<S51>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S52>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S52>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S52>/Sum' incorporates:
       *  UnitDelay: '<S52>/UnitDelay'
       */
      CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui);

      /* MinMax: '<S52>/MinMax' */
      if (u0 <= CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui) {
        /* Sum: '<S52>/Sum' */
        CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui = u0;
      }

      /* End of MinMax: '<S52>/MinMax' */
    } else {
      /* Sum: '<S52>/Sum' incorporates:
       *  Constant: '<S51>/Constant37'
       *  UnitDelay: '<S52>/UnitDelay'
       */
      CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui = ((uint16_T)0U);
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Switch: '<S51>/Switch8' incorporates:
     *  Constant: '<S51>/Constant6'
     *  Constant: '<S51>/DEBOUNCING'
     *  RelationalOperator: '<S51>/Equal6'
     *  RelationalOperator: '<S52>/B_MiHold'
     *  RelationalOperator: '<S53>/B_MiHold'
     *  Switch: '<S51>/Switch2'
     *  Switch: '<S51>/Switch3'
     *  Switch: '<S51>/Switch4'
     *  UnitDelay: '<S52>/UnitDelay'
     *  UnitDelay: '<S53>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE_liui >
               rtu_MatureTime) {
      /* Switch: '<S51>/Switch2' incorporates:
       *  Constant: '<S51>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S51>/Switch3' incorporates:
       *  Constant: '<S51>/DEBOUNCING_F'
       *  Switch: '<S51>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_FctSftyGear__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S51>/Switch4' incorporates:
       *  Constant: '<S51>/PASSED'
       *  Switch: '<S51>/Switch2'
       *  Switch: '<S51>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S51>/Switch3' incorporates:
       *  Constant: '<S51>/DEBOUNCING_P'
       *  Switch: '<S51>/Switch2'
       *  Switch: '<S51>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S51>/Switch8' */

    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S51>/Constant30'
     *  Constant: '<S51>/Constant31'
     *  Constant: '<S51>/Constant32'
     *  Delay: '<S51>/Delay1'
     *  RelationalOperator: '<S51>/Equal3'
     *  RelationalOperator: '<S51>/Equal4'
     *  Switch: '<S51>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S51>/Switch7' incorporates:
       *  Constant: '<S51>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_FctSftyGear__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S51>/Switch6' */

    /* Update for Delay: '<S51>/Delay1' */
    CtAp_FctSftyGear__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S50>/ErrorHandleSysU16' */
}

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

/* Output and update for atomic system: '<S6>/DetectIncrease' */
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

boolean_T CtAp_FctSftyGear_DetectIncrease(boolean_T rtu_U,
  ARID_DEF_DetectIncrease_CtAp__T *CtAp_FctSftyGear__ARID_DEF_arg)
{
  boolean_T rty_Y_0;

  /* RelationalOperator: '<S63>/FixPt Relational Operator' incorporates:
   *  Delay: '<S63>/Delay'
   */
  rty_Y_0 = ((int32_T)(rtu_U ? 1 : 0) > (int32_T)
             (CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE ? 1 : 0));

  /* Update for Delay: '<S63>/Delay' */
  CtAp_FctSftyGear__ARID_DEF_arg->Delay_DSTATE = rtu_U;
  return rty_Y_0;
}

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_FctSftyGear_START_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

void R_FctSftyGear_Cyclic_20ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_UnitDelay1;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_LogicalOperator7;
  boolean_T rtb_LogicalOperator_id00;
  boolean_T rtb_LogicalOperator1_osr4;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_RelationalOperator_hqas;
  dt_ComM_IBSSts02CRCInfo tmpRead_1;
  dt_ComM_IBSSts02E2ETimeoutInfo tmpRead_2;
  dt_ComM_IBSSts05CRCInfo tmpRead_3;
  dt_ComM_IBSSts05E2ETimeoutInfo tmpRead_4;
  dt_ComM_IBSTqCRCInfo tmpRead_6;
  dt_ComM_IBSTqE2ETimeoutInfo tmpRead_7;
  dt_ComM_IVI01CRCInfo tmpRead_8;
  dt_ComM_IVI01E2ETimeoutInfo tmpRead_9;
  dt_ComM_PRNDCRCInfo tmpRead_a;
  dt_ComM_PRNDE2ETimeoutInfo tmpRead_b;
  dt_Nv_GearMgmtInfo rtb_TmpSignalConversionAtRTE_RP;
  int32_T tmp;
  real32_T tmpRead_d;
  uint8_T rtb_Switch;
  uint8_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_TmpSignalConversionAtR_agr3;
  uint8_T rtb_TmpSignalConversionAtR_gbnp;
  uint8_T rtb_TmpSignalConversionAtR_hu3h;
  uint8_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_5;
  boolean_T rtb_Compare_frri;
  boolean_T rtb_LogicalOperator26;
  boolean_T rtb_LogicalOperator28;
  boolean_T rtb_LogicalOperator2_mxnu;
  boolean_T rtb_LogicalOperator4_jjnp;
  boolean_T rtb_LogicalOperator5_pivf;
  boolean_T rtb_LogicalOperator_cn4k;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_TmpSignalConversionAtR_l1be;
  boolean_T rtb_TmpSignalConversionAtR_negd;
  boolean_T tmpRead_c;
  boolean_T tmpRead_e;

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&rtb_LogicalOperator5_pivf);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_c);

  /* SignalConversion generated from: '<Root>/RTE_RP_GearMgmtInfo_tec_GearMgmtInfo_read' incorporates:
   *  Inport: '<Root>/RTE_RP_GearMgmtInfo_tec_GearMgmtInfo_read'
   */
  (void)Rte_Read_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo
    (&rtb_TmpSignalConversionAtRTE_RP);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts'
   */
  (void)Rte_Read_RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum
    (&rtb_TmpSignalConversionAtR_gbnp);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum
    (&rtb_TmpSignalConversionAtR_hu3h);

  /* SignalConversion generated from: '<Root>/RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld' incorporates:
   *  Inport: '<Root>/RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld'
   */
  (void)Rte_Read_RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld
    (&rtb_TmpSignalConversionAtR_l1be);

  /* SignalConversion generated from: '<Root>/RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum'
   */
  (void)
    Rte_Read_RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum
    (&rtb_TmpSignalConversionAtR_agr3);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
    (&rtb_TmpSignalConversionAtR_negd);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* UnitDelay: '<S1>/Unit Delay1' */
  rtb_UnitDelay1 = CtAp_FctSftyGear_ARID_DEF.UnitDelay1_DSTATE;

  /* Outputs for Atomic SubSystem: '<S1>/Fusa_CheckDTC'
   *
   * Block requirements for '<S1>/Fusa_CheckDTC':
   *  1. VCU_SW_Requirements_Specification.slreqx:768
   *  2. VCU_SW_Requirements_Specification.slreqx:5531
   *  3. VCU_SW_Requirements_Specification.slreqx:5532
   *  4. VCU_SW_Requirements_Specification.slreqx:5536
   *  5. VCU_SW_Requirements_Specification.slreqx:5537
   *  6. VCU_SW_Requirements_Specification.slreqx:5538
   */
  /* Outputs for Atomic SubSystem: '<S5>/ATOM_TimeCnt' */
  /* Constant: '<S5>/Constant' incorporates:
   *  Constant: '<S5>/CAL'
   *  Constant: '<S5>/Constant1'
   */
  rtb_DataTypeConversion = CtAp_FctSftyGear_ATOM_TimeCnt(FctSftyMon_True,
    ((uint16_T)FctSftyMon_Cycle), FctSftyMon_DTCCfmPreEnaTim_CFG,
    &CtAp_FctSftyGear_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S5>/ATOM_TimeCnt' */

  /* Logic: '<S5>/LogicalOperator' incorporates:
   *  Logic: '<S5>/LogicalOperator2'
   */
  rtb_LogicalOperator_id00 = (rtb_DataTypeConversion &&
    rtb_LogicalOperator5_pivf && !tmpRead_c);

  /* Logic: '<S5>/LogicalOperator1' */
  rtb_LogicalOperator1_osr4 = !rtb_UnitDelay1;

  /* Outputs for Atomic SubSystem: '<S5>/ATOM_U16ErrHnd' */
  /* Constant: '<S5>/CAL3' incorporates:
   *  Constant: '<S5>/CAL4'
   *  Constant: '<S5>/Constant2'
   */
  CtAp_FctSftyGear_ATOM_U16ErrHnd(rtb_LogicalOperator_id00, rtb_UnitDelay1,
    rtb_LogicalOperator1_osr4, FctSftyMon_ActGearCfmFailMatureTim_CFG,
    FctSftyMon_ActGearCfmFailDematureTim_CFG, ((uint16_T)FctSftyMon_Cycle),
    &rtb_DataTypeConversion, &CtAp_FctSftyGear_ARID_DEF.Switch1,
    &CtAp_FctSftyGear_ARID_DEF.Switch8, &CtAp_FctSftyGear_ARID_DEF.Switch6,
    &CtAp_FctSftyGear_ARID_DEF.ARID_DEF_ATOM_U16ErrHnd);

  /* End of Outputs for SubSystem: '<S5>/ATOM_U16ErrHnd' */
  /* End of Outputs for SubSystem: '<S1>/Fusa_CheckDTC' */

  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Target'
   *
   * Block requirements for '<S1>/Fusa_Target':
   *  1. VCU_SW_Requirements_Specification.slreqx:11054
   *  2. VCU_SW_Requirements_Specification.slreqx:11055
   *  3. VCU_SW_Requirements_Specification.slreqx:11056
   *  4. VCU_SW_Requirements_Specification.slreqx:11057
   */
  /* Outputs for Atomic SubSystem: '<S6>/DetectIncrease' */
  rtb_RelationalOperator_hqas = CtAp_FctSftyGear_DetectIncrease(rtb_UnitDelay1,
    &CtAp_FctSftyGear_ARID_DEF.ARID_DEF_DetectIncrease);

  /* End of Outputs for SubSystem: '<S6>/DetectIncrease' */

  /* Switch: '<S6>/Switch3' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg'
   *  Inport: '<Root>/RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum'
   *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus'
   *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus'
   *
   * Block requirements for '<S6>/Switch3':
   *  1. VCU_SW_Requirements_Specification.slreqx:11057
   */
  if (rtb_RelationalOperator_hqas) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant1'
     *
     * Block requirements for '<S6>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:11057
     */
    FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_Default);
  } else {
    (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus
      (&tmpRead_b);
    (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
      (&tmpRead_a);
    (void)Rte_Read_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg
      (&rtb_LogicalOperator4_jjnp);
    (void)Rte_Read_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum
      (&tmpRead_0);

    /* MultiPortSwitch: '<S6>/MultiportSwitch' incorporates:
     *  Inport: '<Root>/RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg'
     *  Inport: '<Root>/RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum'
     *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus'
     *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus'
     */
    switch (tmpRead_0) {
     case 0:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant2'
       *
       * Block requirements for '<S6>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:11054
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_Default);
      break;

     case 1:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant4'
       *
       * Block requirements for '<S6>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:11054
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_R);
      break;

     case 2:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant5'
       *
       * Block requirements for '<S6>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:11054
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_N);
      break;

     case 3:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant6'
       *
       * Block requirements for '<S6>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:11054
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_D);
      break;

     default:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant3'
       *
       * Block requirements for '<S6>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:11054
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_Default);
      break;
    }

    /* End of MultiPortSwitch: '<S6>/MultiportSwitch' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S54>/Constant'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S60>/Constant'
     *  Logic: '<S6>/LogicalOperator'
     *  Logic: '<S6>/LogicalOperator1'
     *  Logic: '<S6>/LogicalOperator2'
     *  Logic: '<S6>/LogicalOperator3'
     *  Logic: '<S6>/LogicalOperator4'
     *  RelationalOperator: '<S54>/Compare'
     *  RelationalOperator: '<S55>/Compare'
     *  RelationalOperator: '<S60>/Compare'
     *
     * Block requirements for '<S6>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:11054
     */
    if (tmpRead_b.ComM_ErrResPRNDE2ETimeoutInfo ||
        tmpRead_a.ComM_ErrResPRNDCRCErrorInfo || rtb_LogicalOperator4_jjnp ||
        ((FctSftyMon_FUSATarGear_Enum != ((uint8_T)FctSftyMon_D)) &&
         (FctSftyMon_FUSATarGear_Enum != ((uint8_T)FctSftyMon_R)) &&
         (FctSftyMon_FUSATarGear_Enum != ((uint8_T)FctSftyMon_N)))) {
      /* Switch: '<S6>/Switch1' incorporates:
       *  Constant: '<S56>/Constant'
       *  Constant: '<S57>/Constant'
       *  Constant: '<S61>/Constant'
       *  Constant: '<S6>/Constant7'
       *  Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus'
       *  Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus'
       *  Logic: '<S6>/LogicalOperator5'
       *  Logic: '<S6>/LogicalOperator8'
       *  RelationalOperator: '<S56>/Compare'
       *  RelationalOperator: '<S57>/Compare'
       *  RelationalOperator: '<S61>/Compare'
       *
       * Block requirements for '<S6>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:11055
       */
      if (FctSftyMon_True && ((rtb_TmpSignalConversionAtR_hu3h == ((uint8_T)
             FctSftyMon_D)) || (rtb_TmpSignalConversionAtR_hu3h == ((uint8_T)
             FctSftyMon_R)) || (rtb_TmpSignalConversionAtR_hu3h == ((uint8_T)
             FctSftyMon_N)))) {
        /* Switch: '<S6>/Switch' incorporates:
         *  Switch: '<S6>/Switch1'
         *
         * Block requirements for '<S6>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:11054
         *
         * Block requirements for '<S6>/Switch1':
         *  1. VCU_SW_Requirements_Specification.slreqx:11055
         */
        FctSftyMon_FUSATarGear_Enum = rtb_TmpSignalConversionAtR_hu3h;
      } else {
        (void)
          Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
          (&tmpRead_7);
        (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(
          &tmpRead_6);

        /* Switch: '<S6>/Switch2' incorporates:
         *  Constant: '<S58>/Constant'
         *  Constant: '<S59>/Constant'
         *  Constant: '<S62>/Constant'
         *  Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus'
         *  Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus'
         *  Logic: '<S6>/LogicalOperator10'
         *  Logic: '<S6>/LogicalOperator11'
         *  Logic: '<S6>/LogicalOperator12'
         *  Logic: '<S6>/LogicalOperator9'
         *  RelationalOperator: '<S58>/Compare'
         *  RelationalOperator: '<S59>/Compare'
         *  RelationalOperator: '<S62>/Compare'
         *
         * Block requirements for '<S6>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:11056
         */
        if (!tmpRead_7.ComM_ErrResIBSTqE2ETimeoutInfo &&
            !tmpRead_6.ComM_ErrResIBSTqCRCErrorInfo &&
            ((rtb_TmpSignalConversionAtR_gbnp == ((uint8_T)FctSftyMon_D)) ||
             (rtb_TmpSignalConversionAtR_gbnp == ((uint8_T)FctSftyMon_R)) ||
             (rtb_TmpSignalConversionAtR_gbnp == ((uint8_T)FctSftyMon_N)))) {
          /* Switch: '<S6>/Switch' incorporates:
           *  Switch: '<S6>/Switch1'
           *
           * Block requirements for '<S6>/Switch':
           *  1. VCU_SW_Requirements_Specification.slreqx:11054
           *
           * Block requirements for '<S6>/Switch1':
           *  1. VCU_SW_Requirements_Specification.slreqx:11055
           */
          FctSftyMon_FUSATarGear_Enum = rtb_TmpSignalConversionAtR_gbnp;
        } else {
          /* Switch: '<S6>/Switch' incorporates:
           *  Constant: '<S6>/Constant'
           *  Switch: '<S6>/Switch1'
           *
           * Block requirements for '<S6>/Switch':
           *  1. VCU_SW_Requirements_Specification.slreqx:11054
           *
           * Block requirements for '<S6>/Switch1':
           *  1. VCU_SW_Requirements_Specification.slreqx:11055
           */
          FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_Default);
        }

        /* End of Switch: '<S6>/Switch2' */
      }

      /* End of Switch: '<S6>/Switch1' */
    }

    /* End of Switch: '<S6>/Switch' */

    /* Switch: '<S6>/Switch4' */
    if (FctSftyMon_FUSATarGear_Enum == 0U) {
      /* Switch: '<S6>/Switch3' incorporates:
       *  Constant: '<S6>/Constant9'
       *
       * Block requirements for '<S6>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:11057
       */
      FctSftyMon_FUSATarGear_Enum = ((uint8_T)FctSftyMon_Default);
    }

    /* End of Switch: '<S6>/Switch4' */
  }

  /* End of Switch: '<S6>/Switch3' */
  /* End of Outputs for SubSystem: '<S1>/Fusa_Target' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
    (&tmpRead_8);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Target'
   *
   * Block requirements for '<S1>/Fusa_Target':
   *  1. VCU_SW_Requirements_Specification.slreqx:11054
   *  2. VCU_SW_Requirements_Specification.slreqx:11055
   *  3. VCU_SW_Requirements_Specification.slreqx:11056
   *  4. VCU_SW_Requirements_Specification.slreqx:11057
   */
  /* Logic: '<S6>/LogicalOperator6' */
  rtb_LogicalOperator6 = !tmpRead_9.ComM_ErrResIVI01E2ETimeoutInfo;

  /* Logic: '<S6>/LogicalOperator7' */
  rtb_LogicalOperator7 = !tmpRead_8.ComM_ErrResIVI01CRCErrorInfo;

  /* End of Outputs for SubSystem: '<S1>/Fusa_Target' */

  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Check'
   *
   * Block requirements for '<S1>/Fusa_Check':
   *  1. VCU_SW_Requirements_Specification.slreqx:76011
   *  2. VCU_SW_Requirements_Specification.slreqx:5521
   *  3. VCU_SW_Requirements_Specification.slreqx:76010
   *  4. VCU_SW_Requirements_Specification.slreqx:76012
   *  5. VCU_SW_Requirements_Specification.slreqx:76013
   *  6. VCU_SW_Requirements_Specification.slreqx:76014
   *  7. VCU_SW_Requirements_Specification.slreqx:76015
   *  8. VCU_SW_Requirements_Specification.slreqx:5522
   *  9. VCU_SW_Requirements_Specification.slreqx:5523
   *  10. VCU_SW_Requirements_Specification.slreqx:76025
   *  11. VCU_SW_Requirements_Specification.slreqx:5524
   */
  /* Logic: '<S4>/LogicalOperator4' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:76014
   */
  rtb_LogicalOperator4_jjnp =
    ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
       FctSftyMon_D)) && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
       FctSftyMon_R)));

  /* Logic: '<S4>/LogicalOperator5' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:76015
   */
  rtb_LogicalOperator5_pivf =
    ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
       FctSftyMon_R)) && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
       FctSftyMon_D)));

  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Target'
   *
   * Block requirements for '<S1>/Fusa_Target':
   *  1. VCU_SW_Requirements_Specification.slreqx:11054
   *  2. VCU_SW_Requirements_Specification.slreqx:11055
   *  3. VCU_SW_Requirements_Specification.slreqx:11056
   *  4. VCU_SW_Requirements_Specification.slreqx:11057
   */
  /* RelationalOperator: '<S4>/RelationalOperator' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  rtb_RelationalOperator = (rtb_TmpSignalConversionAtR_agr3 !=
    FctSftyMon_FUSATarGear_Enum);

  /* End of Outputs for SubSystem: '<S1>/Fusa_Target' */

  /* Logic: '<S4>/LogicalOperator18' incorporates:
   *  Logic: '<S4>/LogicalOperator10'
   *  Logic: '<S4>/LogicalOperator11'
   *  Logic: '<S4>/LogicalOperator25'
   *  Logic: '<S4>/LogicalOperator27'
   */
  tmpRead_c = !rtb_RelationalOperator;

  /* Switch: '<S4>/Switch2' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S46>/Constant'
   *  Constant: '<S47>/Constant'
   *  Logic: '<S4>/LogicalOperator14'
   *  Logic: '<S4>/LogicalOperator15'
   *  Logic: '<S4>/LogicalOperator16'
   *  Logic: '<S4>/LogicalOperator17'
   *  Logic: '<S4>/LogicalOperator18'
   *  Logic: '<S4>/LogicalOperator19'
   *  Logic: '<S4>/LogicalOperator2'
   *  Logic: '<S4>/LogicalOperator20'
   *  Logic: '<S4>/LogicalOperator6'
   *  Logic: '<S4>/LogicalOperator9'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S48>/FixPt Relational Operator'
   *  Switch: '<S4>/Switch3'
   *  UnitDelay: '<S48>/Delay Input1'
   *
   * Block description for '<S48>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block requirements for '<S4>/Switch2':
   *  1. VCU_SW_Requirements_Specification.slreqx:5522
   *  2. VCU_SW_Requirements_Specification.slreqx:5523
   *  3. VCU_SW_Requirements_Specification.slreqx:76025
   *
   * Block requirements for '<S4>/Switch3':
   *  1. VCU_SW_Requirements_Specification.slreqx:5524
   */
  if ((rtb_TmpSignalConversionAtR_agr3 !=
       CtAp_FctSftyGear_ARID_DEF.DelayInput1_DSTATE) &&
      ((rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_R)) ||
       (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_D)) ||
       (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_N))) &&
      tmpRead_c) {
    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S4>/Constant2'
     *
     * Block requirements for '<S4>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:5522
     *  2. VCU_SW_Requirements_Specification.slreqx:5523
     *  3. VCU_SW_Requirements_Specification.slreqx:76025
     */
    FctSftyMon_ActGearCfmFailDTC_Flg = FctSftyMon_False;
  } else if (rtb_RelationalOperator &&
             ((((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
      FctSftyMon_N)) || (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum ==
                         ((uint8_T)FctSftyMon_P))) &&
               ((rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_D)) ||
                (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_R)))) ||
              rtb_LogicalOperator5_pivf ||
              ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
      FctSftyMon_P)) && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
      FctSftyMon_N))) || rtb_LogicalOperator4_jjnp)) {
    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Switch: '<S4>/Switch2'
     *
     * Block requirements for '<S4>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:5524
     *
     * Block requirements for '<S4>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:5522
     *  2. VCU_SW_Requirements_Specification.slreqx:5523
     *  3. VCU_SW_Requirements_Specification.slreqx:76025
     */
    FctSftyMon_ActGearCfmFailDTC_Flg = FctSftyMon_True;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S4>/Switch2' */
  /* End of Outputs for SubSystem: '<S1>/Fusa_Check' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_e);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(&tmpRead_d);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Check'
   *
   * Block requirements for '<S1>/Fusa_Check':
   *  1. VCU_SW_Requirements_Specification.slreqx:76011
   *  2. VCU_SW_Requirements_Specification.slreqx:5521
   *  3. VCU_SW_Requirements_Specification.slreqx:76010
   *  4. VCU_SW_Requirements_Specification.slreqx:76012
   *  5. VCU_SW_Requirements_Specification.slreqx:76013
   *  6. VCU_SW_Requirements_Specification.slreqx:76014
   *  7. VCU_SW_Requirements_Specification.slreqx:76015
   *  8. VCU_SW_Requirements_Specification.slreqx:5522
   *  9. VCU_SW_Requirements_Specification.slreqx:5523
   *  10. VCU_SW_Requirements_Specification.slreqx:76025
   *  11. VCU_SW_Requirements_Specification.slreqx:5524
   */
  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  rtb_Compare_frri = (tmpRead == ((uint8_T)FctSftyMon_BrkPress));

  /* Switch: '<S4>/Switch6' incorporates:
   *  Switch: '<S4>/Switch7'
   */
  if (rtb_TmpSignalConversionAtR_l1be) {
    /* RelationalOperator: '<S65>/Relational Operator' incorporates:
     *  Constant: '<S4>/Constant6'
     */
    rtb_RelationalOperator_hqas = FctSftyMon_True;
  } else if (rtb_TmpSignalConversionAtR_negd) {
    /* Switch: '<S4>/Switch7' incorporates:
     *  RelationalOperator: '<S65>/Relational Operator'
     */
    rtb_RelationalOperator_hqas = rtb_Compare_frri;
  } else {
    /* RelationalOperator: '<S65>/Relational Operator' incorporates:
     *  Constant: '<S4>/Constant7'
     *  Switch: '<S4>/Switch7'
     */
    rtb_RelationalOperator_hqas = FctSftyMon_True;
  }

  /* End of Switch: '<S4>/Switch6' */

  /* Logic: '<S4>/LogicalOperator26' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Logic: '<S4>/LogicalOperator24'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator26':
   *  1. VCU_SW_Requirements_Specification.slreqx:76013
   *
   * Block requirements for '<S4>/LogicalOperator24':
   *  1. VCU_SW_Requirements_Specification.slreqx:76013
   */
  rtb_LogicalOperator26 = ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum ==
    ((uint8_T)FctSftyMon_N)) && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
    FctSftyMon_D)) && tmpRead_c && rtb_RelationalOperator_hqas);

  /* Logic: '<S4>/LogicalOperator28' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Logic: '<S4>/LogicalOperator23'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator28':
   *  1. VCU_SW_Requirements_Specification.slreqx:76012
   *
   * Block requirements for '<S4>/LogicalOperator23':
   *  1. VCU_SW_Requirements_Specification.slreqx:76012
   */
  rtb_LogicalOperator28 = (rtb_RelationalOperator_hqas &&
    ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
    FctSftyMon_N)) && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_R)))
    && tmpRead_c);

  /* RelationalOperator: '<S65>/Relational Operator' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  Constant: '<S31>/Constant'
   *  Logic: '<S4>/LogicalOperator12'
   *  Logic: '<S4>/LogicalOperator7'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S31>/Compare'
   */
  rtb_RelationalOperator_hqas =
    ((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
       FctSftyMon_P)) && ((rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
        FctSftyMon_N)) || (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
        FctSftyMon_R)) || (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)
        FctSftyMon_D))));

  /* Switch: '<S4>/Switch4' incorporates:
   *  Switch: '<S4>/Switch'
   *
   * Block requirements for '<S4>/Switch4':
   *  1. VCU_SW_Requirements_Specification.slreqx:5521
   *
   * Block requirements for '<S4>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:76011
   */
  if (rtb_RelationalOperator_hqas) {
    /* Switch: '<S4>/Switch5' */
    if (rtb_Compare_frri) {
      /* Switch: '<S4>/Switch4' incorporates:
       *  Constant: '<S4>/Constant4'
       *
       * Block requirements for '<S4>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:5521
       */
      FctSftyMon_BrkPressChkPass = FctSftyMon_True;
    } else {
      /* Switch: '<S4>/Switch4' incorporates:
       *  Constant: '<S4>/Constant5'
       *
       * Block requirements for '<S4>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:5521
       */
      FctSftyMon_BrkPressChkPass = FctSftyMon_False;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Switch: '<S4>/Switch1' */
    if (rtb_RelationalOperator) {
      /* Switch: '<S4>/Switch' incorporates:
       *  Constant: '<S4>/Constant'
       *
       * Block requirements for '<S4>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76011
       */
      FctSftyMon_FusaTargetChkPass = FctSftyMon_False;
    } else {
      /* Switch: '<S4>/Switch' incorporates:
       *  Constant: '<S4>/Constant1'
       *
       * Block requirements for '<S4>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76011
       */
      FctSftyMon_FusaTargetChkPass = FctSftyMon_True;
    }

    /* End of Switch: '<S4>/Switch1' */
  }

  /* End of Switch: '<S4>/Switch4' */
  /* End of Outputs for SubSystem: '<S1>/Fusa_Check' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Inport: '<Root>/RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels' */
  (void)Rte_Read_RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels
    (&rtb_LogicalOperator2_mxnu);

  /* Inport: '<Root>/RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk' */
  (void)Rte_Read_RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk
    (&rtb_LogicalOperator_cn4k);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Check'
   *
   * Block requirements for '<S1>/Fusa_Check':
   *  1. VCU_SW_Requirements_Specification.slreqx:76011
   *  2. VCU_SW_Requirements_Specification.slreqx:5521
   *  3. VCU_SW_Requirements_Specification.slreqx:76010
   *  4. VCU_SW_Requirements_Specification.slreqx:76012
   *  5. VCU_SW_Requirements_Specification.slreqx:76013
   *  6. VCU_SW_Requirements_Specification.slreqx:76014
   *  7. VCU_SW_Requirements_Specification.slreqx:76015
   *  8. VCU_SW_Requirements_Specification.slreqx:5522
   *  9. VCU_SW_Requirements_Specification.slreqx:5523
   *  10. VCU_SW_Requirements_Specification.slreqx:76025
   *  11. VCU_SW_Requirements_Specification.slreqx:5524
   */
  /* Logic: '<S4>/LogicalOperator22' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S36>/Constant'
   *  Logic: '<S4>/LogicalOperator21'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *
   * Block requirements for '<S4>/LogicalOperator22':
   *  1. VCU_SW_Requirements_Specification.slreqx:76010
   */
  rtb_RelationalOperator = (((CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum ==
    ((uint8_T)FctSftyMon_D)) ||
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)FctSftyMon_R)))
    && (rtb_TmpSignalConversionAtR_agr3 == ((uint8_T)FctSftyMon_N)));

  /* Update for UnitDelay: '<S48>/Delay Input1'
   *
   * Block description for '<S48>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_FctSftyGear_ARID_DEF.DelayInput1_DSTATE = rtb_TmpSignalConversionAtR_agr3;

  /* End of Outputs for SubSystem: '<S1>/Fusa_Check' */

  /* Outputs for Atomic SubSystem: '<S1>/EPBStCfm' */
  /* Logic: '<S3>/LogicalOperator' incorporates:
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  rtb_LogicalOperator_cn4k = (rtb_LogicalOperator_cn4k ||
    CtAp_FctSftyGear_ARID_DEF.UnitDelay2_DSTATE);

  /* Switch: '<S3>/Switch' */
  if (rtb_TmpSignalConversionAtR_l1be) {
    /* Switch: '<S3>/Switch' incorporates:
     *  Logic: '<S3>/LogicalOperator1'
     *  Logic: '<S3>/LogicalOperator3'
     */
    rtb_TmpSignalConversionAtR_l1be = (rtb_LogicalOperator2_mxnu &&
      FctSftyMon_FusaTargetChkPass && rtb_TmpSignalConversionAtR_negd);
  } else {
    /* Switch: '<S3>/Switch' incorporates:
     *  Logic: '<S3>/LogicalOperator1'
     *  Logic: '<S3>/LogicalOperator2'
     */
    rtb_TmpSignalConversionAtR_l1be = (rtb_LogicalOperator2_mxnu &&
      FctSftyMon_FusaTargetChkPass && FctSftyMon_BrkPressChkPass);
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outputs for Atomic SubSystem: '<S3>/EPBOutPutSystem'
   *
   * Block requirements for '<S3>/EPBOutPutSystem':
   *  1. VCU_SW_Requirements_Specification.slreqx:75987
   *  2. VCU_SW_Requirements_Specification.slreqx:75988
   *  3. VCU_SW_Requirements_Specification.slreqx:75989
   *  4. VCU_SW_Requirements_Specification.slreqx:75990
   *  5. VCU_SW_Requirements_Specification.slreqx:75991
   *  6. VCU_SW_Requirements_Specification.slreqx:75992
   */
  /* Switch: '<S10>/Switch' incorporates:
   *  Switch: '<S10>/Switch1'
   *
   * Block requirements for '<S10>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:75987
   */
  if (rtb_LogicalOperator_cn4k) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/Constant'
     *
     * Block requirements for '<S10>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75987
     */
    rtb_TmpSignalConversionAtR_gbnp = ((uint8_T)FctSftyMon_ApplyRequest);
  } else if (rtb_TmpSignalConversionAtR_l1be) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Switch: '<S10>/Switch'
     *
     * Block requirements for '<S10>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75987
     */
    rtb_TmpSignalConversionAtR_gbnp = ((uint8_T)FctSftyMon_ReleaseRequest);
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Switch: '<S10>/Switch1'
     *
     * Block requirements for '<S10>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75987
     */
    rtb_TmpSignalConversionAtR_gbnp = ((uint8_T)FctSftyMon_NoRequest);
  }

  /* End of Switch: '<S10>/Switch' */

  /* Chart: '<S10>/EPBReqCnt'
   *
   * Block requirements for '<S10>/EPBReqCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:75987
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c6_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c6_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c6_CtAp_FctSftyGear = CtAp_FctSftyGear_IN_Init;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
      FctSftyMon_NoRequest);
  } else if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_c6_CtAp_FctSftyGear ==
             CtAp_FctSftyGear_IN_Count) {
    if (rtb_TmpSignalConversionAtR_gbnp != 0U) {
      CtAp_FctSftyGear_ARID_DEF.EPBCnt = FctSftyMon_EPBWaitTime_CFG;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
        FctSftyMon_NoRequest);
      if (rtb_TmpSignalConversionAtR_gbnp == ((uint8_T)FctSftyMon_ApplyRequest))
      {
        CtAp_FctSftyGear_ARID_DEF.is_Count = CtAp_FctSftyGear_IN_EPBPrkReq;
      } else {
        CtAp_FctSftyGear_ARID_DEF.is_Count = CtAp_FctSftyGear_IN_EPBRelsReq;
      }
    } else if (CtAp_FctSftyGear_ARID_DEF.EPBCnt == ((uint16_T)FctSftyMon_U16Zero))
    {
      CtAp_FctSftyGear_ARID_DEF.is_Count = CtAp_FctSfty_IN_NO_ACTIVE_CHILD;
      CtAp_FctSftyGear_ARID_DEF.is_c6_CtAp_FctSftyGear =
        CtAp_FctSftyGear_IN_Init;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
        FctSftyMon_NoRequest);
    } else {
      CtAp_FctSftyGear_ARID_DEF.EPBCnt -= ((uint16_T)FctSftyMon_Cycle);
      if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_Count ==
          CtAp_FctSftyGear_IN_EPBPrkReq) {
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
          FctSftyMon_ApplyRequest);
      } else {
        /* case IN_EPBRelsReq: */
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
          FctSftyMon_ReleaseRequest);
      }
    }

    /* case IN_Init: */
  } else if (rtb_TmpSignalConversionAtR_gbnp != 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_c6_CtAp_FctSftyGear = CtAp_FctSftyGear_IN_Count;
    CtAp_FctSftyGear_ARID_DEF.EPBCnt = FctSftyMon_EPBWaitTime_CFG;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum = ((uint8_T)
      FctSftyMon_NoRequest);
    if (rtb_TmpSignalConversionAtR_gbnp == ((uint8_T)FctSftyMon_ApplyRequest)) {
      CtAp_FctSftyGear_ARID_DEF.is_Count = CtAp_FctSftyGear_IN_EPBPrkReq;
    } else {
      CtAp_FctSftyGear_ARID_DEF.is_Count = CtAp_FctSftyGear_IN_EPBRelsReq;
    }
  } else {
    /* no actions */
  }

  /* End of Chart: '<S10>/EPBReqCnt' */
  /* End of Outputs for SubSystem: '<S3>/EPBOutPutSystem' */
  /* End of Outputs for SubSystem: '<S1>/EPBStCfm' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(
    &tmpRead_1);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/EPBStCfm' */
  /* RelationalOperator: '<S65>/Relational Operator' incorporates:
   *  Logic: '<S11>/LogicalOperator'
   */
  rtb_RelationalOperator_hqas = !tmpRead_1.ComM_ErrResIBSSts02CRCErrorInfo;

  /* Logic: '<S11>/LogicalOperator2' incorporates:
   *  Logic: '<S11>/LogicalOperator1'
   *
   * Block requirements for '<S11>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:75985
   */
  rtb_LogicalOperator2_mxnu = (rtb_RelationalOperator_hqas &&
    !tmpRead_2.ComM_ErrResIBSSts02E2ETimeoutInfo);

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  Inport: '<Root>/RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts'
   *  Inport: '<Root>/RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts'
   *  Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus'
   *  Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus'
   *  Logic: '<S11>/LogicalOperator6'
   *  RelationalOperator: '<S19>/Compare'
   *
   * Block requirements for '<S11>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:75985
   */
  if ((rtb_TmpSignalConversionAtRTE_R_ == ((uint8_T)FctSftyMon_MasterMode)) &&
      rtb_LogicalOperator2_mxnu) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Inport: '<Root>/RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum'
     */
    (void)Rte_Read_RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum(&rtb_Switch);
  } else {
    (void)Rte_Read_RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts
      (&rtb_Switch);
    (void)
      Rte_Read_RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts
      (&tmpRead_5);
    (void)
      Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus
      (&tmpRead_4);
    (void)
      Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus
      (&tmpRead_3);

    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Inport: '<Root>/RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts'
     *  Inport: '<Root>/RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts'
     *  Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus'
     *  Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus'
     *  Logic: '<S11>/LogicalOperator3'
     *  Logic: '<S11>/LogicalOperator4'
     *  Logic: '<S11>/LogicalOperator5'
     *  Logic: '<S11>/LogicalOperator7'
     *  Logic: '<S11>/LogicalOperator8'
     *  Logic: '<S11>/LogicalOperator9'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S21>/Compare'
     *
     * Block requirements for '<S11>/LogicalOperator5':
     *  1. VCU_SW_Requirements_Specification.slreqx:75986
     *
     * Block requirements for '<S11>/LogicalOperator9':
     *  1. VCU_SW_Requirements_Specification.slreqx:75986
     */
    if (((rtb_TmpSignalConversionAtRTE_R_ != ((uint8_T)FctSftyMon_SlaveMode)) &&
         rtb_LogicalOperator2_mxnu) || (tmpRead_5 != ((uint8_T)
          FctSftyMon_SlaveMode)) || (tmpRead_3.ComM_ErrResIBSSts05CRCErrorInfo ||
         tmpRead_4.ComM_ErrResIBSSts05E2ETimeoutInfo)) {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/Constant'
       */
      rtb_Switch = ((uint8_T)FctSftyMon_Unknown);
    }

    /* End of Switch: '<S11>/Switch1' */
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S3>/Switch1' */
  if (rtb_TmpSignalConversionAtR_agr3 != 0U) {
    /* Switch: '<S3>/Switch1' */
    GearMgmt_UnCfmdActGearDly_Enum = rtb_TmpSignalConversionAtR_agr3;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S3>/EPBLinkerSystem'
   *
   * Block requirements for '<S3>/EPBLinkerSystem':
   *  1. VCU_SW_Requirements_Specification.slreqx:75987
   *  2. VCU_SW_Requirements_Specification.slreqx:75988
   *  3. VCU_SW_Requirements_Specification.slreqx:75989
   *  4. VCU_SW_Requirements_Specification.slreqx:75990
   *  5. VCU_SW_Requirements_Specification.slreqx:75991
   *  6. VCU_SW_Requirements_Specification.slreqx:75992
   *  7. VCU_SW_Requirements_Specification.slreqx:75993
   *  8. VCU_SW_Requirements_Specification.slreqx:75994
   */
  /* Chart: '<S9>/FctSftyMon_EPBPrk'
   *
   * Block requirements for '<S9>/FctSftyMon_EPBPrk':
   *  1. VCU_SW_Requirements_Specification.slreqx:75987
   *  2. VCU_SW_Requirements_Specification.slreqx:75988
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c2_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c2_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
      CtAp__IN_FctSftyMon_EPBPrk_Init;
    rtb_LogicalOperator2_mxnu = FctSftyMon_True;
  } else {
    switch (CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear) {
     case CtAp_FctSftyGea_IN_EPBPrkFailed:
      rtb_LogicalOperator2_mxnu = FctSftyMon_True;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg = FctSftyMon_False;
      if (rtb_LogicalOperator_cn4k) {
        CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBPrkWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg = FctSftyMon_False;
        rtb_LogicalOperator2_mxnu = FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg =
          FctSftyMon_True;
      } else {
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg =
          FctSftyMon_False;
      }
      break;

     case CtAp_FctSftyGe_IN_EPBPrkSuccess:
      rtb_LogicalOperator2_mxnu = FctSftyMon_True;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg = FctSftyMon_False;
      if (rtb_LogicalOperator_cn4k) {
        CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBPrkWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg = FctSftyMon_False;
        rtb_LogicalOperator2_mxnu = FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg =
          FctSftyMon_True;
      } else {
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg = FctSftyMon_False;
      }
      break;

     case CtAp_FctSftyGear_IN_EPBPrkWait:
      rtb_LogicalOperator2_mxnu = FctSftyMon_False;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg = FctSftyMon_True;
      if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn == ((uint16_T)
           FctSftyMon_U16Zero)) {
        CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
          CtAp_FctSftyGea_IN_EPBPrkFailed;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg = FctSftyMon_True;
        rtb_LogicalOperator2_mxnu = FctSftyMon_True;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg =
          FctSftyMon_False;
      } else if (rtb_Switch == ((uint8_T)FctSftyMon_APPLIED)) {
        CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
          CtAp_FctSftyGe_IN_EPBPrkSuccess;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg = FctSftyMon_True;
        rtb_LogicalOperator2_mxnu = FctSftyMon_True;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg =
          FctSftyMon_False;
      } else {
        tmp = (int32_T)CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn
          - (int32_T)((uint16_T)FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn = (uint16_T)tmp;
      }
      break;

     default:
      /* case IN_FctSftyMon_EPBPrk_Init: */
      rtb_LogicalOperator2_mxnu = FctSftyMon_True;
      if (rtb_LogicalOperator_cn4k == FctSftyMon_True) {
        CtAp_FctSftyGear_ARID_DEF.is_c2_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBPrkWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt_npjn = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg = FctSftyMon_False;
        rtb_LogicalOperator2_mxnu = FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg =
          FctSftyMon_True;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/FctSftyMon_EPBPrk' */

  /* Chart: '<S9>/FctSftyMon_EPBRels'
   *
   * Block requirements for '<S9>/FctSftyMon_EPBRels':
   *  1. VCU_SW_Requirements_Specification.slreqx:75990
   *  2. VCU_SW_Requirements_Specification.slreqx:75991
   *  3. VCU_SW_Requirements_Specification.slreqx:75992
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c4_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c4_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
      CtAp_Fct_IN_FctSftyMon_EPB_Init;
    rtb_LogicalOperator_cn4k = FctSftyMon_True;
  } else {
    switch (CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear) {
     case CtAp_FctSftyGe_IN_EPBRelsFailed:
      rtb_LogicalOperator_cn4k = FctSftyMon_True;
      if (rtb_TmpSignalConversionAtR_l1be) {
        CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBRelsWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg = FctSftyMon_False;
        rtb_LogicalOperator_cn4k = FctSftyMon_False;
      } else {
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg =
          FctSftyMon_False;
      }
      break;

     case CtAp_FctSftyG_IN_EPBRelsSuccess:
      rtb_LogicalOperator_cn4k = FctSftyMon_True;
      if (rtb_TmpSignalConversionAtR_l1be) {
        CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBRelsWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg = FctSftyMon_False;
        rtb_LogicalOperator_cn4k = FctSftyMon_False;
      } else {
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg = FctSftyMon_False;
      }
      break;

     case CtAp_FctSftyGear_IN_EPBRelsWait:
      rtb_LogicalOperator_cn4k = FctSftyMon_False;
      if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt == ((uint16_T)
           FctSftyMon_U16Zero)) {
        CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
          CtAp_FctSftyGe_IN_EPBRelsFailed;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg =
          FctSftyMon_True;
        rtb_LogicalOperator_cn4k = FctSftyMon_True;
      } else if (rtb_Switch == ((uint8_T)FctSftyMon_RELEASED)) {
        CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
          CtAp_FctSftyG_IN_EPBRelsSuccess;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg = FctSftyMon_True;
        rtb_LogicalOperator_cn4k = FctSftyMon_True;
      } else {
        tmp = (int32_T)CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt -
          (int32_T)((uint16_T)FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt = (uint16_T)tmp;
      }
      break;

     default:
      /* case IN_FctSftyMon_EPB_Init: */
      rtb_LogicalOperator_cn4k = FctSftyMon_True;
      if (rtb_TmpSignalConversionAtR_l1be) {
        CtAp_FctSftyGear_ARID_DEF.is_c4_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_EPBRelsWait;
        tmp = (int32_T)FctSftyMon_EPBWaitTime_CFG - (int32_T)((uint16_T)
          FctSftyMon_Cycle);
        if (tmp < 0) {
          tmp = 0;
        }

        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBWaitTimeCnt = (uint16_T)tmp;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg =
          FctSftyMon_False;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg = FctSftyMon_False;
        rtb_LogicalOperator_cn4k = FctSftyMon_False;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/FctSftyMon_EPBRels' */

  /* Chart: '<S9>/GearMgmt_EPBReqCmpl'
   *
   * Block requirements for '<S9>/GearMgmt_EPBReqCmpl':
   *  1. VCU_SW_Requirements_Specification.slreqx:75988
   *  2. VCU_SW_Requirements_Specification.slreqx:75990
   *  3. VCU_SW_Requirements_Specification.slreqx:75991
   *  4. VCU_SW_Requirements_Specification.slreqx:75992
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c5_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c5_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c5_CtAp_FctSftyGear =
      CtAp_FctSftyGear_IN_EPBInactive;
    rtb_TmpSignalConversionAtR_l1be = FctSftyMon_True;
  } else if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_c5_CtAp_FctSftyGear ==
             CtAp_FctSftyGear_IN_EPBActive) {
    rtb_TmpSignalConversionAtR_l1be = FctSftyMon_False;
    if ((rtb_LogicalOperator2_mxnu == FctSftyMon_True) &&
        (rtb_LogicalOperator_cn4k == FctSftyMon_True)) {
      CtAp_FctSftyGear_ARID_DEF.is_c5_CtAp_FctSftyGear =
        CtAp_FctSftyGear_IN_EPBInactive;
      rtb_TmpSignalConversionAtR_l1be = FctSftyMon_True;
    }
  } else {
    /* case IN_EPBInactive: */
    rtb_TmpSignalConversionAtR_l1be = FctSftyMon_True;
    if ((rtb_LogicalOperator2_mxnu == FctSftyMon_False) ||
        (rtb_LogicalOperator_cn4k == FctSftyMon_False)) {
      CtAp_FctSftyGear_ARID_DEF.is_c5_CtAp_FctSftyGear =
        CtAp_FctSftyGear_IN_EPBActive;
      rtb_TmpSignalConversionAtR_l1be = FctSftyMon_False;
    }
  }

  /* End of Chart: '<S9>/GearMgmt_EPBReqCmpl' */

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Logic: '<S9>/LogicalOperator'
   *  Logic: '<S9>/LogicalOperator1'
   *  Logic: '<S9>/LogicalOperator2'
   *  Logic: '<S9>/LogicalOperator3'
   *  Logic: '<S9>/LogicalOperator4'
   *  Logic: '<S9>/LogicalOperator5'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch2'
   *  Switch: '<S9>/Switch3'
   *  Switch: '<S9>/Switch4'
   *  Switch: '<S9>/Switch5'
   *
   * Block requirements for '<S9>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:75989
   *
   * Block requirements for '<S9>/Switch1':
   *  1. VCU_SW_Requirements_Specification.slreqx:75988
   *
   * Block requirements for '<S9>/Switch2':
   *  1. VCU_SW_Requirements_Specification.slreqx:75992
   *
   * Block requirements for '<S9>/Switch3':
   *  1. VCU_SW_Requirements_Specification.slreqx:75991
   *
   * Block requirements for '<S9>/Switch4':
   *  1. VCU_SW_Requirements_Specification.slreqx:75994
   *
   * Block requirements for '<S9>/Switch5':
   *  1. VCU_SW_Requirements_Specification.slreqx:75993
   */
  if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_Allow2P_Flg) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     */
    FctSftyMon_ActualGearEPB = ((uint8_T)FctSftyMon_P);
  } else if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Switch: '<S9>/Switch1'
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     *
     * Block requirements for '<S9>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:75988
     */
    FctSftyMon_ActualGearEPB = ((uint8_T)FctSftyMon_N);
  } else if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_AllowOutP_Flg) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     *
     * Block requirements for '<S9>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:75988
     *
     * Block requirements for '<S9>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75992
     */
    FctSftyMon_ActualGearEPB = GearMgmt_UnCfmdActGearDly_Enum;
  } else if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     *
     * Block requirements for '<S9>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:75988
     *
     * Block requirements for '<S9>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75992
     *
     * Block requirements for '<S9>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:75991
     */
    FctSftyMon_ActualGearEPB = ((uint8_T)FctSftyMon_P);
  } else if (CtAp_FctSftyGear_ARID_DEF.UnitDelay3_DSTATE &&
             (rtb_TmpSignalConversionAtR_l1be && ((rtb_Switch == ((uint8_T)
      FctSftyMon_RELEASED)) || (rtb_Switch == ((uint8_T)
      FctSftyMon_COMPLETELYRELEASED))))) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant3'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     *  Switch: '<S9>/Switch4'
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     *
     * Block requirements for '<S9>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:75988
     *
     * Block requirements for '<S9>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75992
     *
     * Block requirements for '<S9>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:75991
     *
     * Block requirements for '<S9>/Switch4':
     *  1. VCU_SW_Requirements_Specification.slreqx:75994
     */
    FctSftyMon_ActualGearEPB = ((uint8_T)FctSftyMon_N);
  } else if (rtb_TmpSignalConversionAtR_l1be && (rtb_Switch == ((uint8_T)
               FctSftyMon_APPLIED)) && rtb_TmpSignalConversionAtR_negd &&
             CtAp_FctSftyGear_ARID_DEF.UnitDelay3_DSTATE) {
    /* Switch: '<S9>/Switch5' incorporates:
     *  Constant: '<S9>/Constant4'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     *  Switch: '<S9>/Switch4'
     *
     * Block requirements for '<S9>/Switch5':
     *  1. VCU_SW_Requirements_Specification.slreqx:75993
     *
     * Block requirements for '<S9>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:75989
     *
     * Block requirements for '<S9>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:75988
     *
     * Block requirements for '<S9>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75992
     *
     * Block requirements for '<S9>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:75991
     *
     * Block requirements for '<S9>/Switch4':
     *  1. VCU_SW_Requirements_Specification.slreqx:75994
     */
    FctSftyMon_ActualGearEPB = ((uint8_T)FctSftyMon_P);
  } else {
    /* no actions */
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S3>/EPBLinkerSystem' */
  /* End of Outputs for SubSystem: '<S1>/EPBStCfm' */

  /* Outputs for Atomic SubSystem: '<S1>/WakeUp' */
  /* Outputs for Atomic SubSystem: '<S8>/ATOM_TimeCnt' */
  /* Constant: '<S8>/Constant' incorporates:
   *  Constant: '<S8>/CAL1'
   *  Constant: '<S8>/Constant1'
   */
  rtb_RelationalOperator_hqas = CtAp_FctSftyGear_ATOM_TimeCnt(FctSftyMon_True,
    ((uint16_T)FctSftyMon_Cycle), FctSftyMon_WakeupTim_CFG,
    &CtAp_FctSftyGear_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S8>/ATOM_TimeCnt' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S66>/Constant'
   *  RelationalOperator: '<S66>/Compare'
   *
   * Block requirements for '<S8>/Switch2':
   *  1. VCU_SW_Requirements_Specification.slreqx:75995
   */
  if (rtb_TmpSignalConversionAtRTE_RP.GearMgmt_GearMemInfo_Enum == ((uint8_T)
       FctSftyMon_P)) {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant3'
     *
     * Block requirements for '<S8>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75995
     */
    Nvm_MemGearCfm_Enum = ((uint8_T)FctSftyMon_P);
  } else {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant4'
     *
     * Block requirements for '<S8>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:75995
     */
    Nvm_MemGearCfm_Enum = ((uint8_T)FctSftyMon_N);
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Chart: '<S8>/GearMgmt_WakeUp'
   *
   * Block requirements for '<S8>/GearMgmt_WakeUp':
   *  1. VCU_SW_Requirements_Specification.slreqx:75996
   *  2. VCU_SW_Requirements_Specification.slreqx:75997
   *  3. VCU_SW_Requirements_Specification.slreqx:75998
   *  4. VCU_SW_Requirements_Specification.slreqx:75999
   *  5. VCU_SW_Requirements_Specification.slreqx:76000
   *  6. VCU_SW_Requirements_Specification.slreqx:76001
   *  7. VCU_SW_Requirements_Specification.slreqx:76002
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c3_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c3_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
      CtAp_FctSftyGear_IN_WakeUp_Init;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum =
      Nvm_MemGearCfm_Enum;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_False;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk = FctSftyMon_False;
  } else {
    boolean_T guard1 = false;
    guard1 = false;
    switch (CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear) {
     case CtAp_Fct_IN_WakeUp_ActualGear_N:
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
      break;

     case CtAp_Fct_IN_WakeUp_ActualGear_P:
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
      break;

     case CtAp_FctSftyGear_IN_WakeUp_Cfm:
      if (rtb_TmpSignalConversionAtR_negd == FctSftyMon_False) {
        guard1 = true;
      } else if (rtb_Switch == ((uint8_T)FctSftyMon_Unknown)) {
        if (Nvm_MemGearCfm_Enum == ((uint8_T)FctSftyMon_P)) {
          CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
            CtAp_Fct_IN_WakeUp_ActualGear_P;
          CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
            FctSftyMon_P);
          CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg =
            FctSftyMon_True;
        } else {
          /* unconditional branch */
          guard1 = true;
        }
      } else {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_FctSft_IN_WakeUp_EPBActive;
      }
      break;

     case CtAp_FctSft_IN_WakeUp_EPBActive:
      if (rtb_Switch == ((uint8_T)FctSftyMon_APPLIED)) {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_Fct_IN_WakeUp_ActualGear_P;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
          FctSftyMon_P);
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
      } else {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_FctSfty_IN_WakeUp_EPBDelay;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
          FctSftyMon_N);
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk = FctSftyMon_True;
      }
      break;

     case CtAp_FctSfty_IN_WakeUp_EPBDelay:
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk = FctSftyMon_True;
      if (FctSftyMon_ActualGearEPB == ((uint8_T)FctSftyMon_P)) {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_Fct_IN_WakeUp_ActualGear_P;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
          FctSftyMon_P);
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
      } else if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg) {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_Fct_IN_WakeUp_ActualGear_N;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
          FctSftyMon_N);
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
      } else {
        /* no actions */
      }
      break;

     default:
      /* case IN_WakeUp_Init: */
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_False;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk = FctSftyMon_False;
      if (rtb_RelationalOperator_hqas) {
        CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
          CtAp_FctSftyGear_IN_WakeUp_Cfm;
      }
      break;
    }

    if (guard1) {
      CtAp_FctSftyGear_ARID_DEF.is_c3_CtAp_FctSftyGear =
        CtAp_Fct_IN_WakeUp_ActualGear_N;
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum = ((uint8_T)
        FctSftyMon_N);
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg = FctSftyMon_True;
    }
  }

  /* End of Chart: '<S8>/GearMgmt_WakeUp' */

  /* RelationalOperator: '<S67>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S1>/Unit Delay2'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_FctSftyGear_ARID_DEF.UnitDelay2_DSTATE = ((int32_T)
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk ? 1 : 0) > (int32_T)
    (CtAp_FctSftyGear_ARID_DEF.DelayInput1_DSTATE_ppmg ? 1 : 0));

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_FctSftyGear_ARID_DEF.DelayInput1_DSTATE_ppmg =
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrk;

  /* End of Outputs for SubSystem: '<S1>/WakeUp' */

  /* Chart: '<S7>/GearMgmt_GearShift' incorporates:
   *  Constant: '<S33>/Constant'
   *  Logic: '<S4>/LogicalOperator1'
   *  Logic: '<S4>/LogicalOperator13'
   *  Logic: '<S4>/LogicalOperator3'
   *  RelationalOperator: '<S33>/Compare'
   *
   * Block requirements for '<S7>/GearMgmt_GearShift':
   *  1. VCU_SW_Requirements_Specification.slreqx:76009
   *  2. VCU_SW_Requirements_Specification.slreqx:76010
   *  3. VCU_SW_Requirements_Specification.slreqx:76012
   *  4. VCU_SW_Requirements_Specification.slreqx:76013
   *  5. VCU_SW_Requirements_Specification.slreqx:76014
   *  6. VCU_SW_Requirements_Specification.slreqx:76015
   *
   * Block requirements for '<S4>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:76014
   *
   * Block requirements for '<S4>/LogicalOperator13':
   *  1. VCU_SW_Requirements_Specification.slreqx:76015
   */
  if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_active_c7_CtAp_FctSftyGear == 0U) {
    CtAp_FctSftyGear_ARID_DEF.is_active_c7_CtAp_FctSftyGear = 1U;
    CtAp_FctSftyGear_ARID_DEF.is_c7_CtAp_FctSftyGear =
      CtAp_FctSftyGear_IN_Init_dfzf;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum =
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum;
  } else if ((uint32_T)CtAp_FctSftyGear_ARID_DEF.is_c7_CtAp_FctSftyGear ==
             CtAp_FctSftyGear_IN_Init_dfzf) {
    if (CtAp_FctSftyGear_ARID_DEF.UnitDelay3_DSTATE) {
      CtAp_FctSftyGear_ARID_DEF.is_c7_CtAp_FctSftyGear =
        CtAp_FctSftyGear_IN_Normal;
      if (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum == ((uint8_T)
           FctSftyMon_N)) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_N;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_N);
      } else {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_P;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_P);
      }
    } else {
      CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum =
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeupActGear_Enum;
    }

    /* case IN_Normal: */
  } else if (FctSftyMon_ActualGearEPB == ((uint8_T)FctSftyMon_P)) {
    CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_P;
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)FctSftyMon_P);
  } else {
    switch (CtAp_FctSftyGear_ARID_DEF.is_Normal) {
     case CtAp_FctSftyGea_IN_ActualGear_D:
      if (rtb_RelationalOperator ||
          CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_N;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_N);

        /* Outputs for Atomic SubSystem: '<S1>/Fusa_Check'
         *
         * Block requirements for '<S1>/Fusa_Check':
         *  1. VCU_SW_Requirements_Specification.slreqx:76011
         *  2. VCU_SW_Requirements_Specification.slreqx:5521
         *  3. VCU_SW_Requirements_Specification.slreqx:76010
         *  4. VCU_SW_Requirements_Specification.slreqx:76012
         *  5. VCU_SW_Requirements_Specification.slreqx:76013
         *  6. VCU_SW_Requirements_Specification.slreqx:76014
         *  7. VCU_SW_Requirements_Specification.slreqx:76015
         *  8. VCU_SW_Requirements_Specification.slreqx:5522
         *  9. VCU_SW_Requirements_Specification.slreqx:5523
         *  10. VCU_SW_Requirements_Specification.slreqx:76025
         *  11. VCU_SW_Requirements_Specification.slreqx:5524
         */
      } else if (rtb_LogicalOperator4_jjnp && (tmpRead_e && (tmpRead_d <=
                   FctSftyMon_AllowD2RVehSpdCfm_CFG)) && tmpRead_c) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_R;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_R);

        /* End of Outputs for SubSystem: '<S1>/Fusa_Check' */
      } else {
        /* no actions */
      }
      break;

     case CtAp_FctSftyGea_IN_ActualGear_N:
      if (rtb_LogicalOperator28) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_R;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_R);
      } else if (rtb_LogicalOperator26) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_D;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_D);
      } else {
        /* no actions */
      }
      break;

     case CtAp_FctSftyGea_IN_ActualGear_P:
      switch (FctSftyMon_ActualGearEPB) {
       case ((uint8_T)FctSftyMon_N):
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_N;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_N);
        break;

       case ((uint8_T)FctSftyMon_R):
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_R;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_R);
        break;

       case ((uint8_T)FctSftyMon_D):
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_D;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_D);
        break;

       default:
        /* no actions */
        break;
      }
      break;

     default:
      /* case IN_ActualGear_R: */
      if (rtb_RelationalOperator ||
          CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_N;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_N);

        /* Outputs for Atomic SubSystem: '<S1>/Fusa_Check'
         *
         * Block requirements for '<S1>/Fusa_Check':
         *  1. VCU_SW_Requirements_Specification.slreqx:76011
         *  2. VCU_SW_Requirements_Specification.slreqx:5521
         *  3. VCU_SW_Requirements_Specification.slreqx:76010
         *  4. VCU_SW_Requirements_Specification.slreqx:76012
         *  5. VCU_SW_Requirements_Specification.slreqx:76013
         *  6. VCU_SW_Requirements_Specification.slreqx:76014
         *  7. VCU_SW_Requirements_Specification.slreqx:76015
         *  8. VCU_SW_Requirements_Specification.slreqx:5522
         *  9. VCU_SW_Requirements_Specification.slreqx:5523
         *  10. VCU_SW_Requirements_Specification.slreqx:76025
         *  11. VCU_SW_Requirements_Specification.slreqx:5524
         */
      } else if (rtb_LogicalOperator5_pivf && tmpRead_c) {
        CtAp_FctSftyGear_ARID_DEF.is_Normal = CtAp_FctSftyGea_IN_ActualGear_D;
        CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum = ((uint8_T)
          FctSftyMon_D);

        /* End of Outputs for SubSystem: '<S1>/Fusa_Check' */
      } else {
        /* no actions */
      }
      break;
    }
  }

  /* End of Chart: '<S7>/GearMgmt_GearShift' */

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  CtAp_FctSftyGear_ARID_DEF.UnitDelay1_DSTATE = FctSftyMon_ActGearCfmFailDTC_Flg;

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  CtAp_FctSftyGear_ARID_DEF.UnitDelay3_DSTATE =
    CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg;

  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Outport: '<Root>/RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Write_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum);

  /* Outport: '<Root>/RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus'
   */
  CtAp_FctSftyGear_ARID_DEF.RTE_P_FctSftyMon_ActGearCfmFail.FctSftyMon_MonStatActGearCfmFail
    = rtb_DataTypeConversion;
  CtAp_FctSftyGear_ARID_DEF.RTE_P_FctSftyMon_ActGearCfmFail.FctSftyMon_MonResActGearCfmFail
    = CtAp_FctSftyGear_ARID_DEF.Switch1;
  CtAp_FctSftyGear_ARID_DEF.RTE_P_FctSftyMon_ActGearCfmFail.FctSftyMon_ErrStatActGearCfmFail
    = CtAp_FctSftyGear_ARID_DEF.Switch8;
  CtAp_FctSftyGear_ARID_DEF.RTE_P_FctSftyMon_ActGearCfmFail.FctSftyMon_ErrResActGearCfmFail
    = CtAp_FctSftyGear_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail' */
  (void)Rte_Write_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBPrkReqFail_Flg);

  /* Outport: '<Root>/RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail' */
  (void)Rte_Write_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBRelsReqFail_Flg);

  /* Outport: '<Root>/RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq' */
  (void)Rte_Write_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_EPBReq_Enum);

  /* Outport: '<Root>/RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl' */
  (void)Rte_Write_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl
    (rtb_TmpSignalConversionAtR_l1be);

  /* Outport: '<Root>/RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts' */
  (void)Rte_Write_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts(rtb_Switch);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/Fusa_Target'
   *
   * Block requirements for '<S1>/Fusa_Target':
   *  1. VCU_SW_Requirements_Specification.slreqx:11054
   *  2. VCU_SW_Requirements_Specification.slreqx:11055
   *  3. VCU_SW_Requirements_Specification.slreqx:11056
   *  4. VCU_SW_Requirements_Specification.slreqx:11057
   */
  /* Outport: '<Root>/RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  (void)
    Rte_Write_RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum
    (FctSftyMon_FUSATarGear_Enum);

  /* End of Outputs for SubSystem: '<S1>/Fusa_Target' */
  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */

  /* Outport: '<Root>/RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq' */
  (void)Rte_Write_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_TarGearPInhbTq_Flg);

  /* Outport: '<Root>/RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish' */
  (void)Rte_Write_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish
    (CtAp_FctSftyGear_ARID_DEF.FctSftyMon_WakeUpFinish_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  /* Outport: '<Root>/RTE_RP_GearMgmtInfo_tec_GearMgmtInfo_write' incorporates:
   *  BusCreator generated from: '<Root>/RTE_RP_GearMgmtInfo_tec_GearMgmtInfo_write'
   *  Constant: '<S1>/Constant'
   *  DataTypeConversion: '<S1>/DataTypeConversion'
   */
  CtAp_FctSftyGear_ARID_DEF.RTE_RP_GearMgmtInfo_tec_GearMgm.GearMgmt_GearMemInfo_Enum
    = CtAp_FctSftyGear_ARID_DEF.FctSftyMon_ActGear_Enum;

  /* End of Outputs for SubSystem: '<Root>/R_FctSftyGear_Cyclic_20ms_sys' */
  CtAp_FctSftyGear_ARID_DEF.RTE_RP_GearMgmtInfo_tec_GearMgm.GearMgmt_FillAddress
    = ((uint8_T)FctSftyMon_U8Zero);
  (void)
    Rte_Write_RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus
    (&CtAp_FctSftyGear_ARID_DEF.RTE_P_FctSftyMon_ActGearCfmFail);
  (void)Rte_Write_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo
    (&CtAp_FctSftyGear_ARID_DEF.RTE_RP_GearMgmtInfo_tec_GearMgm);
}

#define CtAp_FctSftyGear_STOP_SEC_CODE
#include "CtAp_FctSftyGear_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_FctSftyGear_START_SEC_VAR_CONST_8
#include "CtAp_FctSftyGear_MemMap.h"

void R_FctSftyGear_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  Nvm_MemGearCfm_Enum = 0U;
  FctSftyMon_FUSATarGear_Enum = 0U;
  GearMgmt_UnCfmdActGearDly_Enum = 0U;
  FctSftyMon_ActualGearEPB = 0U;
  FctSftyMon_ActGearCfmFailDTC_Flg = false;
  FctSftyMon_BrkPressChkPass = false;
  FctSftyMon_FusaTargetChkPass = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_FctSftyGear_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_FctSftyGear_T));
}

#define CtAp_FctSftyGear_STOP_SEC_VAR_CONST_8
#include "CtAp_FctSftyGear_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
