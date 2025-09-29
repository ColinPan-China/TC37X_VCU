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
 *  Filename:           CtAp_ElSSDiag.c
 *  File Creation Date: 16-Apr-2025
 *  Model Name:         CtAp_ElSSDiag
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:12:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Apr 16 17:57:25 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Apr 02 14:34:06 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ElSSDiag.h"
#include "rtwtypes.h"
#include "CtAp_ElSSDiag_private.h"
#include "Rte_Type.h"
#include "CtAp_ElSSDiag_Glb.h"
#include "CtAp_ElSSDiag_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S7>/LvMgmt_EISSDiag' */
#define CtAp_ElSSDiag_ElSSDiag_Active  (true)
#define CtAp_ElSSDiag_ElSSDiag_Inactive (false)
#define CtAp_ElSSDiag_ElSSDiag_Standby ((uint8_T)1U)
#define CtAp_ElSSDiag_IN_Initial       ((uint8_T)1U)
#define CtAp_ElSSDiag_IN_KL15Maintain  ((uint8_T)2U)
#define CtAp_ElSSDiag_IN_KL15on        ((uint8_T)3U)
#define CtAp_ElSSDiag_IN_SelfDiag      ((uint8_T)4U)

/* Named constants for Chart: '<S8>/LvMgmt_EISSDiagFlow' */
#define CtAp_E_IN_LvMgmt_ReqSystemSleep ((uint8_T)2U)
#define CtAp_ElSSD_IN_LvMgmt_SystemInit ((uint8_T)3U)
#define CtAp_ElSS_IN_LvMgmt_SystemSleep ((uint8_T)4U)
#define CtAp_El_IN_LvMgmt_KL15ActiveReq ((uint8_T)1U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ElSSDiag_START_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"

ARID_DEF_CtAp_ElSSDiag_T CtAp_ElSSDiag_ARID_DEF;

#define CtAp_ElSSDiag_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S11>/ATOM_TimeCnt2'
 *    '<S12>/ATOM_TimeCnt'
 *    '<S13>/ATOM_TimeCnt'
 */
#define CtAp_ElSSDiag_START_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

boolean_T CtAp_ElSSDiag_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_El_T
  *CtAp_ElSSDiag__ARID_DEF_arg)
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
    CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S14>/Min' */
    if (rtb_Add1 <= CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S14>/Add' */
      CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S14>/Min' */
  } else {
    /* Sum: '<S14>/Add' incorporates:
     *  Constant: '<S14>/Constant'
     *  UnitDelay: '<S14>/Delay'
     */
    CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S14>/Relational Operator' incorporates:
   *  UnitDelay: '<S14>/Delay'
   */
  return CtAp_ElSSDiag__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_ElSSDiag_STOP_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/ATOM_U16ErrorHandle2'
 *    '<S12>/ATOM_U16ErrorHandle'
 *    '<S13>/ATOM_U16ErrorHandle1'
 */
#define CtAp_ElSSDiag_START_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

void CtAp_ElSSDiag_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_ElSSDiag__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S15>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S19>/Constant2'
     *  Constant: '<S19>/Constant4'
     *  Switch: '<S19>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S19>/Switch' incorporates:
       *  Constant: '<S19>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S19>/Constant3'
     *  RelationalOperator: '<S19>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S21>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S21>/Sum' incorporates:
       *  UnitDelay: '<S21>/UnitDelay'
       */
      CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S21>/MinMax' */
      if (u0 <= CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S21>/Sum' */
        CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S21>/MinMax' */
    } else {
      /* Sum: '<S21>/Sum' incorporates:
       *  Constant: '<S19>/Constant23'
       *  UnitDelay: '<S21>/UnitDelay'
       */
      CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S21>/Switch1' */

    /* RelationalOperator: '<S19>/Equal2' incorporates:
     *  Constant: '<S19>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S20>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S20>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S20>/Sum' incorporates:
       *  UnitDelay: '<S20>/UnitDelay'
       */
      CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm);

      /* MinMax: '<S20>/MinMax' */
      if (u0 <= CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm) {
        /* Sum: '<S20>/Sum' */
        CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm = u0;
      }

      /* End of MinMax: '<S20>/MinMax' */
    } else {
      /* Sum: '<S20>/Sum' incorporates:
       *  Constant: '<S19>/Constant37'
       *  UnitDelay: '<S20>/UnitDelay'
       */
      CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm = ((uint16_T)0U);
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Switch: '<S19>/Switch8' incorporates:
     *  Constant: '<S19>/Constant6'
     *  Constant: '<S19>/DEBOUNCING'
     *  RelationalOperator: '<S19>/Equal6'
     *  RelationalOperator: '<S20>/B_MiHold'
     *  RelationalOperator: '<S21>/B_MiHold'
     *  Switch: '<S19>/Switch2'
     *  Switch: '<S19>/Switch3'
     *  Switch: '<S19>/Switch4'
     *  UnitDelay: '<S20>/UnitDelay'
     *  UnitDelay: '<S21>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE_hzzm >
               rtu_MatureTime) {
      /* Switch: '<S19>/Switch2' incorporates:
       *  Constant: '<S19>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S19>/Switch3' incorporates:
       *  Constant: '<S19>/DEBOUNCING_F'
       *  Switch: '<S19>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_ElSSDiag__ARID_DEF_arg->UnitDelay_DSTATE > rtu_Dematuretime)
    {
      /* Switch: '<S19>/Switch4' incorporates:
       *  Constant: '<S19>/PASSED'
       *  Switch: '<S19>/Switch2'
       *  Switch: '<S19>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S19>/Switch3' incorporates:
       *  Constant: '<S19>/DEBOUNCING_P'
       *  Switch: '<S19>/Switch2'
       *  Switch: '<S19>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S19>/Switch8' */

    /* Switch: '<S19>/Switch6' incorporates:
     *  Constant: '<S19>/Constant30'
     *  Constant: '<S19>/Constant31'
     *  Constant: '<S19>/Constant32'
     *  Delay: '<S19>/Delay1'
     *  RelationalOperator: '<S19>/Equal3'
     *  RelationalOperator: '<S19>/Equal4'
     *  Switch: '<S19>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S19>/Switch7' incorporates:
       *  Constant: '<S19>/Constant11'
       */
      *rty_ErrorRes = (0.0 != 0.0);
    } else {
      *rty_ErrorRes = CtAp_ElSSDiag__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S19>/Switch6' */

    /* Update for Delay: '<S19>/Delay1' */
    CtAp_ElSSDiag__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S15>/ErrorHandleSysU16' */
}

#define CtAp_ElSSDiag_STOP_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ElSSDiag_START_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

void R_ElSSDiag_Cyclic_20ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_LogicalOperator9;
  boolean_T rtb_LogicalOperator11;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_LogicalOperator2_dxid;
  boolean_T rtb_LogicalOperator3_f2bt;
  boolean_T rtb_LogicalOperator4_jq00;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_l3ss;
  boolean_T rtb_DataTypeConversion_plz4;
  dt_ComM_EPTCANBusOffInfo tmpRead_0;
  uint8_T tmpRead;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_7;
  uint8_T tmpRead_9;
  boolean_T rtb_LvMgmt_KL15ActSts_Flg;
  boolean_T rtb_LvMgmt_KL15CtrlReq_Flg;
  boolean_T rtb_LvMgmt_LvPwrDwn_Flg;
  boolean_T rtb_LvMgmt_SelfChkSts_Flg;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;
  boolean_T tmpRead_6;
  boolean_T tmpRead_8;

  /* Inport: '<Root>/RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo' */
  (void)Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo' */
  (void)Rte_Read_RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo
    (&rtb_LvMgmt_KL15ActSts_Flg);

  /* Inport: '<Root>/RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg' */
  (void)Rte_Read_RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg
    (&rtb_LvMgmt_SelfChkSts_Flg);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg' */
  (void)Rte_Read_RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum' */
  (void)Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_ElSSDiag_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_StayInRun'
   *
   * Block requirements for '<S4>/LvMgmt_StayInRun':
   *  1. VCU_SW_Requirements_Specification.slreqx:79
   *  2. VCU_SW_Requirements_Specification.slreqx:80
   *  3. VCU_SW_Requirements_Specification.slreqx:81
   *  4. VCU_SW_Requirements_Specification.slreqx:82
   *  5. VCU_SW_Requirements_Specification.slreqx:83
   *  6. VCU_SW_Requirements_Specification.slreqx:84
   *  7. VCU_SW_Requirements_Specification.slreqx:85
   */
  /* Chart: '<S8>/LvMgmt_EISSDiagFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy13'
   *  SignalConversion: '<S5>/SignalCopy14'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  if ((uint32_T)CtAp_ElSSDiag_ARID_DEF.is_active_c1_CtAp_ElSSDiag == 0U) {
    CtAp_ElSSDiag_ARID_DEF.is_active_c1_CtAp_ElSSDiag = 1U;
    CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag = CtAp_ElSSD_IN_LvMgmt_SystemInit;
    rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Inactive;
    rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Inactive;
    LvMgmt_StayInRun_Flg = ElSSDiag_Active;
  } else {
    switch (CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag) {
     case CtAp_El_IN_LvMgmt_KL15ActiveReq:
      rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Active;
      rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Inactive;
      LvMgmt_StayInRun_Flg = ElSSDiag_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if ((rtb_LvMgmt_SelfChkSts_Flg && (tmpRead_6 == ElSSDiag_Inactive)) ||
          (tmpRead_9 == ((uint8_T)ElSSDiag_U8AppNMSixFour))) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_E_IN_LvMgmt_ReqSystemSleep;
        rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Inactive;
        rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Active;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;

     case CtAp_E_IN_LvMgmt_ReqSystemSleep:
      rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Inactive;
      rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Active;
      LvMgmt_StayInRun_Flg = ElSSDiag_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if (tmpRead_6) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_ElSSD_IN_LvMgmt_SystemInit;
        rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Inactive;
      } else if ((tmpRead_7 == ((uint8_T)ElSSDiag_Sleep)) &&
                 rtb_LvMgmt_KL15ActSts_Flg) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_ElSS_IN_LvMgmt_SystemSleep;
        LvMgmt_StayInRun_Flg = ElSSDiag_Inactive;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;

     case CtAp_ElSSD_IN_LvMgmt_SystemInit:
      rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Inactive;
      rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Inactive;
      LvMgmt_StayInRun_Flg = ElSSDiag_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if (tmpRead_6 && (tmpRead_9 != ((uint8_T)ElSSDiag_U8AppNMSixFour))) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_El_IN_LvMgmt_KL15ActiveReq;
        rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Active;
      } else if (tmpRead_6 == ElSSDiag_Inactive) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_E_IN_LvMgmt_ReqSystemSleep;
        rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Active;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;

     default:
      /* case IN_LvMgmt_SystemSleep: */
      LvMgmt_StayInRun_Flg = ElSSDiag_Inactive;
      rtb_LvMgmt_KL15CtrlReq_Flg = ElSSDiag_Inactive;
      rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if (tmpRead_6) {
        CtAp_ElSSDiag_ARID_DEF.is_c1_CtAp_ElSSDiag =
          CtAp_ElSSD_IN_LvMgmt_SystemInit;
        rtb_LvMgmt_LvPwrDwn_Flg = ElSSDiag_Inactive;
        LvMgmt_StayInRun_Flg = ElSSDiag_Active;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;
    }
  }

  /* End of Chart: '<S8>/LvMgmt_EISSDiagFlow' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_StayInRun' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_KL15ActSts'
   *
   * Block requirements for '<S4>/LvMgmt_KL15ActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:86
   *  2. VCU_SW_Requirements_Specification.slreqx:87
   *  3. VCU_SW_Requirements_Specification.slreqx:88
   *  4. VCU_SW_Requirements_Specification.slreqx:89
   *  5. VCU_SW_Requirements_Specification.slreqx:90
   *  6. VCU_SW_Requirements_Specification.slreqx:91
   */
  /* Chart: '<S7>/LvMgmt_EISSDiag' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy8'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  if ((uint32_T)CtAp_ElSSDiag_ARID_DEF.is_active_c2_CtAp_ElSSDiag == 0U) {
    CtAp_ElSSDiag_ARID_DEF.is_active_c2_CtAp_ElSSDiag = 1U;
    CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag = CtAp_ElSSDiag_IN_Initial;
    rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
    rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
  } else {
    switch (CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag) {
     case CtAp_ElSSDiag_IN_Initial:
      rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
      rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if (tmpRead_4 && rtb_LvMgmt_KL15CtrlReq_Flg) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag = CtAp_ElSSDiag_IN_KL15on;
        rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;

     case CtAp_ElSSDiag_IN_KL15Maintain:
      rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;
      rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      if (!tmpRead_4) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag = CtAp_ElSSDiag_IN_Initial;
        rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
      } else if (rtb_LvMgmt_KL15CtrlReq_Flg) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag = CtAp_ElSSDiag_IN_KL15on;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      break;

     case CtAp_ElSSDiag_IN_KL15on:
      rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;
      rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
      if (!rtb_LvMgmt_KL15CtrlReq_Flg) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag =
          CtAp_ElSSDiag_IN_KL15Maintain;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      } else if (((uint32_T)tmpRead_1 == CtAp_ElSSDiag_ElSSDiag_Standby) &&
                 ((uint32_T)tmpRead_2 == CtAp_ElSSDiag_ElSSDiag_Standby) &&
                 ((uint32_T)tmpRead_3 == CtAp_ElSSDiag_ElSSDiag_Standby) &&
                 ((uint32_T)tmpRead == CtAp_ElSSDiag_ElSSDiag_Standby)) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag = CtAp_ElSSDiag_IN_SelfDiag;
        rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;

        /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
      } else {
        /* no actions */
      }
      break;

     default:
      /* case IN_SelfDiag: */
      rtb_LvMgmt_KL15ActSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;
      rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Active;
      if (!rtb_LvMgmt_KL15CtrlReq_Flg) {
        CtAp_ElSSDiag_ARID_DEF.is_c2_CtAp_ElSSDiag =
          CtAp_ElSSDiag_IN_KL15Maintain;
        rtb_LvMgmt_SelfChkSts_Flg = CtAp_ElSSDiag_ElSSDiag_Inactive;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/LvMgmt_EISSDiag' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
  /* Logic: '<S11>/LogicalOperator10' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  SignalConversion: '<S5>/SignalCopy13'
   *
   * Block requirements for '<S11>/LogicalOperator10':
   *  1. VCU_SW_Requirements_Specification.slreqx:122
   */
  rtb_LogicalOperator10 = ((tmpRead_7 == ((uint8_T)ElSSDiag_INIT)) &&
    (rtb_LvMgmt_SelfChkSts_Flg == ElSSDiag_Inactive) &&
    rtb_LvMgmt_KL15CtrlReq_Flg && rtb_LvMgmt_KL15ActSts_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_TimeCnt2' */
  /* Constant: '<S11>/Marco_Active' incorporates:
   *  Constant: '<S11>/LvMgmt_ECUsDiagDTCEnaSetTim_CFG'
   *  Constant: '<S11>/LvMgmt_RunStep'
   */
  rtb_DataTypeConversion_l3ss = CtAp_ElSSDiag_ATOM_TimeCnt(ElSSDiag_Active,
    ((uint16_T)ElSSDiag_LvMgmt_RunStep), LvMgmt_ECUsDiagDTCEnaSetTim_CFG,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_TimeCnt2);

  /* End of Outputs for SubSystem: '<S11>/ATOM_TimeCnt2' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Logic: '<S11>/LogicalOperator8'
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  rtb_DataTypeConversion_plz4 = !tmpRead_0.ComM_ErrResEPTCANBusOffInfo;

  /* Logic: '<S11>/LogicalOperator5' incorporates:
   *  Logic: '<S12>/LogicalOperator1'
   *  Logic: '<S13>/LogicalOperator1'
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  tmpRead_8 = !tmpRead_8;

  /* Logic: '<S11>/LogicalOperator9' incorporates:
   *  Logic: '<S11>/LogicalOperator5'
   *  SignalConversion: '<S5>/SignalCopy10'
   *
   * Block requirements for '<S11>/LogicalOperator9':
   *  1. VCU_SW_Requirements_Specification.slreqx:124
   */
  rtb_LogicalOperator9 = (tmpRead_8 && tmpRead_5 && rtb_DataTypeConversion_l3ss &&
    rtb_DataTypeConversion_plz4);

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */

  /* Logic: '<S11>/LogicalOperator11' incorporates:
   *  Constant: '<S18>/Constant'
   *  RelationalOperator: '<S18>/Compare'
   *
   * Block requirements for '<S11>/LogicalOperator11':
   *  1. VCU_SW_Requirements_Specification.slreqx:123
   */
  rtb_LogicalOperator11 = (rtb_LvMgmt_KL15ActSts_Flg &&
    (rtb_LvMgmt_SelfChkSts_Flg == ElSSDiag_Active));

  /* Outputs for Atomic SubSystem: '<S11>/ATOM_U16ErrorHandle2' */
  /* Constant: '<S11>/LvMgmt_ECUsDiagFbSetTim_CFG' incorporates:
   *  Constant: '<S11>/LvMgmt_ECUsDiagFbResetTim_CFG'
   *  Constant: '<S11>/LvMgmt_RunStep1'
   *
   * Block requirements for '<S11>/LvMgmt_ECUsDiagFbSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:128
   *
   * Block requirements for '<S11>/LvMgmt_ECUsDiagFbResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:129
   */
  CtAp_ElSSDiag_ATOM_U16ErrHnd(rtb_LogicalOperator9, rtb_LogicalOperator10,
    rtb_LogicalOperator11, LvMgmt_ECUsDiagFbSetTim_CFG,
    LvMgmt_ECUsDiagFbResetTim_CFG, ((uint16_T)ElSSDiag_LvMgmt_RunStep),
    &rtb_DataTypeConversion_l3ss, &CtAp_ElSSDiag_ARID_DEF.Switch1_bhtm,
    &CtAp_ElSSDiag_ARID_DEF.Switch8_d5yc, &CtAp_ElSSDiag_ARID_DEF.Switch6_d5bd,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle2);

  /* End of Outputs for SubSystem: '<S11>/ATOM_U16ErrorHandle2' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_TimeCnt' */
  /* Constant: '<S12>/Marco_Active1' incorporates:
   *  Constant: '<S12>/LvMgmt_KL15eDTCEnaSetTim_CFG'
   *  Constant: '<S12>/LvMgmt_RunStep1'
   */
  rtb_DataTypeConversion = CtAp_ElSSDiag_ATOM_TimeCnt(ElSSDiag_Active,
    ((uint16_T)ElSSDiag_LvMgmt_RunStep), LvMgmt_KL15eDTCEnaSetTim_CFG,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S12>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
  /* Logic: '<S12>/LogicalOperator2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy10'
   *
   * Block requirements for '<S12>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:111
   */
  rtb_LogicalOperator2 = (rtb_DataTypeConversion && tmpRead_8 && tmpRead_5);

  /* Logic: '<S12>/LogicalOperator3' incorporates:
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S25>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   *
   * Block requirements for '<S12>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:109
   */
  rtb_LogicalOperator3 = (tmpRead_4 && (rtb_LvMgmt_KL15CtrlReq_Flg ==
    ElSSDiag_Inactive));

  /* Logic: '<S12>/LogicalOperator4' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S26>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   *
   * Block requirements for '<S12>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:110
   */
  rtb_LogicalOperator4 = ((tmpRead_4 == ElSSDiag_Inactive) &&
    (rtb_LvMgmt_KL15CtrlReq_Flg == ElSSDiag_Inactive));

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */

  /* Outputs for Atomic SubSystem: '<S12>/ATOM_U16ErrorHandle' */
  /* Constant: '<S12>/LvMgmt_KL15eFbSetTim_CFG' incorporates:
   *  Constant: '<S12>/LvMgmt_KL15eFbResetTim_CFG'
   *  Constant: '<S12>/LvMgmt_RunStep'
   *
   * Block requirements for '<S12>/LvMgmt_KL15eFbSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:115
   *
   * Block requirements for '<S12>/LvMgmt_KL15eFbResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:116
   */
  CtAp_ElSSDiag_ATOM_U16ErrHnd(rtb_LogicalOperator2, rtb_LogicalOperator3,
    rtb_LogicalOperator4, LvMgmt_KL15eFbSetTim_CFG, LvMgmt_KL15eFbResetTim_CFG,
    ((uint16_T)ElSSDiag_LvMgmt_RunStep), &rtb_DataTypeConversion,
    &CtAp_ElSSDiag_ARID_DEF.Switch1_pwus, &CtAp_ElSSDiag_ARID_DEF.Switch8_k1iu,
    &CtAp_ElSSDiag_ARID_DEF.Switch6_et5r,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle);

  /* End of Outputs for SubSystem: '<S12>/ATOM_U16ErrorHandle' */

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_TimeCnt' */
  /* Constant: '<S13>/Marco_Active' incorporates:
   *  Constant: '<S13>/LvMgmt_KL15eDTCEnaSetTim_CFG'
   *  Constant: '<S13>/LvMgmt_RunStep1'
   */
  rtb_DataTypeConversion_plz4 = CtAp_ElSSDiag_ATOM_TimeCnt(ElSSDiag_Active,
    ((uint16_T)ElSSDiag_LvMgmt_RunStep), LvMgmt_KL15eDTCEnaSetTim_CFG,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S13>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Input' */
  /* Logic: '<S13>/LogicalOperator2' incorporates:
   *  SignalConversion: '<S5>/SignalCopy10'
   *
   * Block requirements for '<S13>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:98
   */
  rtb_LogicalOperator2_dxid = (rtb_DataTypeConversion_plz4 && tmpRead_8 &&
    tmpRead_5);

  /* Logic: '<S13>/LogicalOperator3' incorporates:
   *  Constant: '<S32>/Constant'
   *  RelationalOperator: '<S32>/Compare'
   *  SignalConversion: '<S5>/SignalCopy9'
   *
   * Block requirements for '<S13>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:96
   */
  rtb_LogicalOperator3_f2bt = ((tmpRead_4 == ElSSDiag_Inactive) &&
    rtb_LvMgmt_KL15CtrlReq_Flg);

  /* Logic: '<S13>/LogicalOperator4' incorporates:
   *  SignalConversion: '<S5>/SignalCopy9'
   *
   * Block requirements for '<S13>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:97
   */
  rtb_LogicalOperator4_jq00 = (tmpRead_4 && rtb_LvMgmt_KL15CtrlReq_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Input' */

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_U16ErrorHandle1' */
  /* Constant: '<S13>/LvMgmt_KL15eFbSetTim_CFG' incorporates:
   *  Constant: '<S13>/LvMgmt_KL15eFbResetTim_CFG'
   *  Constant: '<S13>/LvMgmt_RunStep'
   *
   * Block requirements for '<S13>/LvMgmt_KL15eFbSetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:102
   *
   * Block requirements for '<S13>/LvMgmt_KL15eFbResetTim_CFG':
   *  1. VCU_SW_Requirements_Specification.slreqx:103
   */
  CtAp_ElSSDiag_ATOM_U16ErrHnd(rtb_LogicalOperator2_dxid,
    rtb_LogicalOperator3_f2bt, rtb_LogicalOperator4_jq00,
    LvMgmt_KL15eFbSetTim_CFG, LvMgmt_KL15eFbResetTim_CFG, ((uint16_T)
    ElSSDiag_LvMgmt_RunStep), &rtb_DataTypeConversion_plz4,
    &CtAp_ElSSDiag_ARID_DEF.Switch1, &CtAp_ElSSDiag_ARID_DEF.Switch8,
    &CtAp_ElSSDiag_ARID_DEF.Switch6,
    &CtAp_ElSSDiag_ARID_DEF.ARID_DEF_ATOM_U16ErrorHandle1);

  /* End of Outputs for SubSystem: '<S13>/ATOM_U16ErrorHandle1' */

  /* Outport: '<Root>/RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus' incorporates:
   *  BusCreator: '<S11>/Bus Creator2'
   */
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_ECUsDiagDTC_Bus_te.LvMgmt_MonStatECUsDiagDTC
    = rtb_DataTypeConversion_l3ss;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_ECUsDiagDTC_Bus_te.LvMgmt_MonResECUsDiagDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch1_bhtm;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_ECUsDiagDTC_Bus_te.LvMgmt_ErrStatECUsDiagDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch8_d5yc;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_ECUsDiagDTC_Bus_te.LvMgmt_ErrResECUsDiagDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch6_d5bd;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_KL15ActSts' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Output' */
  /* Outport: '<Root>/RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg
    (rtb_LvMgmt_KL15ActSts_Flg);

  /* Outport: '<Root>/RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy2'
   */
  (void)Rte_Write_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg
    (rtb_LvMgmt_KL15CtrlReq_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_KL15ActSts'
   *
   * Block requirements for '<S4>/LvMgmt_KL15ActSts':
   *  1. VCU_SW_Requirements_Specification.slreqx:86
   *  2. VCU_SW_Requirements_Specification.slreqx:87
   *  3. VCU_SW_Requirements_Specification.slreqx:88
   *  4. VCU_SW_Requirements_Specification.slreqx:89
   *  5. VCU_SW_Requirements_Specification.slreqx:90
   *  6. VCU_SW_Requirements_Specification.slreqx:91
   */
  /* Outport: '<Root>/RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus' incorporates:
   *  BusCreator: '<S12>/Bus Creator'
   */
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOffDTC_Bus_te.LvMgmt_MonStatKL15eOffDTC
    = rtb_DataTypeConversion;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOffDTC_Bus_te.LvMgmt_MonResKL15eOffDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch1_pwus;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOffDTC_Bus_te.LvMgmt_ErrStatKL15eOffDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch8_k1iu;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOffDTC_Bus_te.LvMgmt_ErrResKL15eOffDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch6_et5r;

  /* Outport: '<Root>/RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus' incorporates:
   *  BusCreator: '<S13>/Bus Creator1'
   */
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOnDTC_Bus_tec.LvMgmt_MonStatKL15eOnDTC
    = rtb_DataTypeConversion_plz4;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOnDTC_Bus_tec.LvMgmt_MonResKL15eOnDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch1;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOnDTC_Bus_tec.LvMgmt_ErrStatKL15eOnDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch8;
  CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOnDTC_Bus_tec.LvMgmt_ErrResKL15eOnDTC
    = CtAp_ElSSDiag_ARID_DEF.Switch6;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_KL15ActSts' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Output' */
  /* Outport: '<Root>/RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy5'
   */
  (void)Rte_Write_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg
    (rtb_LvMgmt_LvPwrDwn_Flg);

  /* Outport: '<Root>/RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy7'
   */
  (void)Rte_Write_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg
    (rtb_LvMgmt_SelfChkSts_Flg);

  /* Outport: '<Root>/RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy8'
   */
  (void)Rte_Write_RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg
    (LvMgmt_StayInRun_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_ElSSDiag_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_ElSSDiag_Cyclic_20ms_sys' */
  (void)Rte_Write_RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus
    (&CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_ECUsDiagDTC_Bus_te);
  (void)Rte_Write_RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus
    (&CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOffDTC_Bus_te);
  (void)Rte_Write_RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus
    (&CtAp_ElSSDiag_ARID_DEF.RTE_P_LvMgmt_KL15eOnDTC_Bus_tec);
}

#define CtAp_ElSSDiag_STOP_SEC_CODE
#include "CtAp_ElSSDiag_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ElSSDiag_START_SEC_VAR_CONST_8
#include "CtAp_ElSSDiag_MemMap.h"

void R_ElSSDiag_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  LvMgmt_StayInRun_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ElSSDiag_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ElSSDiag_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_ElSSDiag_Cyclic_20ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_ElSSDiag_Function' */
  /* SystemInitialize for Atomic SubSystem: '<S4>/LvMgmt_StayInRun'
   *
   * Block requirements for '<S4>/LvMgmt_StayInRun':
   *  1. VCU_SW_Requirements_Specification.slreqx:79
   *  2. VCU_SW_Requirements_Specification.slreqx:80
   *  3. VCU_SW_Requirements_Specification.slreqx:81
   *  4. VCU_SW_Requirements_Specification.slreqx:82
   *  5. VCU_SW_Requirements_Specification.slreqx:83
   *  6. VCU_SW_Requirements_Specification.slreqx:84
   *  7. VCU_SW_Requirements_Specification.slreqx:85
   */
  /* SystemInitialize for Chart: '<S8>/LvMgmt_EISSDiagFlow' */
  LvMgmt_StayInRun_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S4>/LvMgmt_StayInRun' */
  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_ElSSDiag_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_ElSSDiag_Cyclic_20ms_sys' */
}

#define CtAp_ElSSDiag_STOP_SEC_VAR_CONST_8
#include "CtAp_ElSSDiag_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
