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
 *  Filename:           CtAp_ComMErr.c
 *  File Creation Date: 21-May-2025
 *  Model Name:         CtAp_ComMErr
 *  Model Version:      3.0.0
 *  Model Author:       Mike Ni - Fri Aug 16 09:50:02 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed May 21 17:16:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed May 21 17:16:38 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ComMErr.h"
#include "rtwtypes.h"
#include "CtAp_ComMErr_private.h"
#include "Rte_Type.h"
#include "CtAp_ComMErr_Cal.h"
#include "CtAp_ComMErr_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_ComMErr_START_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"

ARID_DEF_CtAp_ComMErr_T CtAp_ComMErr_ARID_DEF;

#define CtAp_ComMErr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S4>/ATOM_TimeCnt' */
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

boolean_T CtAp_ComMErr_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Co_T
  *CtAp_ComMErr__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S7>/Add1' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   *  DataTypeConversion: '<S7>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S7>/Switch' */
  if (rtu_In) {
    /* Sum: '<S7>/Add' incorporates:
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     *  UnitDelay: '<S7>/Delay'
     */
    CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S7>/Min' */
    if (rtb_Add1 <= CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S7>/Add' */
      CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S7>/Min' */
  } else {
    /* Sum: '<S7>/Add' incorporates:
     *  Constant: '<S7>/Constant'
     *  UnitDelay: '<S7>/Delay'
     */
    CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S7>/Switch' */

  /* RelationalOperator: '<S7>/Relational Operator' incorporates:
   *  UnitDelay: '<S7>/Delay'
   */
  return CtAp_ComMErr__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S4>/NoEnTimMonR1'
 *    '<S4>/NoEnTimMonR2'
 *    '<S4>/NoEnTimMonR3'
 */
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

void CtAp_ComMErr_NoEnTimMonR(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes)
{
  /* Constant: '<S8>/True' */
  *rty_MonStat = true;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   *  DataTypeConversion: '<S14>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S14>/Switch3' incorporates:
   *  Constant: '<S14>/Constant5'
   *  Constant: '<S14>/F'
   *  Constant: '<S14>/P'
   *  RelationalOperator: '<S14>/Equal2'
   */
  if (*rty_MonRes == ((uint8_T)1U)) {
    *rty_ErrStat = ((uint8_T)2U);
  } else {
    *rty_ErrStat = ((uint8_T)0U);
  }

  /* End of Switch: '<S14>/Switch3' */

  /* Switch: '<S14>/Switch6' incorporates:
   *  Constant: '<S14>/Constant11'
   *  Constant: '<S14>/Constant30'
   *  Constant: '<S14>/Constant32'
   *  RelationalOperator: '<S14>/Equal3'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    *rty_ErrorRes = true;
  } else {
    *rty_ErrorRes = (0.0 != 0.0);
  }

  /* End of Switch: '<S14>/Switch6' */
}

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S4>/NoTiAndMonR1'
 *    '<S4>/NoTiAndMonR2'
 *    '<S4>/NoTiAndMonR3'
 */
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

void CtAp_ComMErr_NoTiAndMonR(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, boolean_T *rty_MonStat,
  uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes)
{
  /* DataTypeConversion: '<S11>/DataTypeConversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S11>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (rtu_EnableCondition) {
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S17>/Constant2'
     *  DataTypeConversion: '<S17>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S17>/Switch3' incorporates:
     *  Constant: '<S17>/Constant5'
     *  Constant: '<S17>/F'
     *  Constant: '<S17>/P'
     *  RelationalOperator: '<S17>/Equal2'
     */
    if (*rty_MonRes == ((uint8_T)1U)) {
      *rty_ErrStat = ((uint8_T)2U);
    } else {
      *rty_ErrStat = ((uint8_T)0U);
    }

    /* End of Switch: '<S17>/Switch3' */

    /* Switch: '<S17>/Switch6' incorporates:
     *  Constant: '<S17>/Constant11'
     *  Constant: '<S17>/Constant30'
     *  Constant: '<S17>/Constant32'
     *  RelationalOperator: '<S17>/Equal3'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else {
      *rty_ErrorRes = (0.0 != 0.0);
    }

    /* End of Switch: '<S17>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S11>/ErrorHandleSysU16' */
}

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

void R_ComMErr_Cyclic_10ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch3;
  uint8_T rtb_Switch1_i4fh;
  uint8_T rtb_Switch3_mhp2;
  uint8_T rtb_Switch1_av4w;
  uint8_T rtb_Switch3_fom0;
  boolean_T rtb_TmpSignalConversionAtCHCAN_;
  boolean_T rtb_TmpSignalConversionAtPTCAN_;
  boolean_T rtb_TmpSignalConversionAtRTE_R_;
  boolean_T rtb_DataTypeConversion3;
  boolean_T rtb_LogicalOperator4_ahcf;
  boolean_T rtb_LogicalOperator2_kd0q;
  boolean_T rtb_LogicalOperator3_o2js;
  boolean_T rtb_LogicalOperator7_ag3b;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator6_cuce;
  boolean_T rtb_DataTypeConversion_c0dh;
  boolean_T rtb_DataTypeConversion_ikrx;
  boolean_T rtb_DataTypeConversion_izwl;
  boolean_T rtb_True;
  boolean_T rtb_Switch6;
  boolean_T rtb_True_fvpn;
  boolean_T rtb_Switch6_pinz;
  boolean_T rtb_True_edpc;
  boolean_T rtb_Switch6_ppxa;
  boolean_T rtb_RelationalOperator;
  dt_ComM_ACU01CRCDTCInfo tmpRead;
  dt_ComM_ACU01TimeoutDTCInfo tmpRead_0;
  dt_ComM_ACU02CRCDTCInfo tmpRead_1;
  dt_ComM_ACU02TimeoutDTCInfo tmpRead_2;
  dt_ComM_ACUInfoCRCDTCInfo tmpRead_2c;
  dt_ComM_ACUInfoTimeoutDTCInfo tmpRead_3;
  dt_ComM_ACUInfoTimeoutInfo tmpRead_4;
  dt_ComM_ADCUACC02CRCDTCInfo tmpRead_5;
  dt_ComM_ADCUACC02TimeoutDTCInfo tmpRead_6;
  dt_ComM_ADCUACC02TimeoutInfo tmpRead_7;
  dt_ComM_ADCUAEB01CRCDTCInfo tmpRead_20;
  dt_ComM_ADCUAEB01TimeoutDTCInfo tmpRead_21;
  dt_ComM_ADCUAPS01CRCDTCInfo tmpRead_22;
  dt_ComM_ADCUAPS01TimeoutDTCInfo tmpRead_23;
  dt_ComM_ADCUDACRCDTCInfo tmpRead_24;
  dt_ComM_ADCUDATimeoutDTCInfo tmpRead_25;
  dt_ComM_APTCTCUTimeoutDTCInfo tmpRead_8;
  dt_ComM_APTCTCUTimeoutInfo tmpRead_9;
  dt_ComM_BCM05CRCDTCInfo tmpRead_1u;
  dt_ComM_BCM05TimeoutDTCInfo tmpRead_1v;
  dt_ComM_BCM06CRCDTCInfo tmpRead_a;
  dt_ComM_BCM06TimeoutDTCInfo tmpRead_b;
  dt_ComM_BCM06TimeoutInfo tmpRead_c;
  dt_ComM_BMSSts01CRCDTCInfo tmpRead_d;
  dt_ComM_BMSSts01TimeoutDTCInfo tmpRead_e;
  dt_ComM_BMSSts02TimeoutDTCInfo tmpRead_f;
  dt_ComM_BMSSts02TimeoutInfo tmpRead_g;
  dt_ComM_CBM03TimeoutDTCInfo tmpRead_h;
  dt_ComM_CGW01CRCDTCInfo tmpRead_2d;
  dt_ComM_CGW01TimeoutDTCInfo tmpRead_i;
  dt_ComM_CGW01TimeoutInfo tmpRead_j;
  dt_ComM_DCMFL02CRCDTCInfo tmpRead_k;
  dt_ComM_DCMFL02TimeoutDTCInfo tmpRead_l;
  dt_ComM_DCMFL02TimeoutInfo tmpRead_m;
  dt_ComM_DCMFRTimeoutDTCInfo tmpRead_2e;
  dt_ComM_DCMFRTimeoutInfo tmpRead_1w;
  dt_ComM_DCMRLTimeoutDTCInfo tmpRead_2f;
  dt_ComM_DCMRLTimeoutInfo tmpRead_1x;
  dt_ComM_DCMRRTimeoutDTCInfo tmpRead_2g;
  dt_ComM_DCMRRTimeoutInfo tmpRead_1y;
  dt_ComM_EVCOMSts01TimeoutDTCInfo tmpRead_n;
  dt_ComM_EVCOMSts01TimeoutInfo tmpRead_o;
  dt_ComM_IBSACCCRCDTCInfo tmpRead_p;
  dt_ComM_IBSACCTimeoutDTCInfo tmpRead_q;
  dt_ComM_IBSAPSCRCDTCInfo tmpRead_26;
  dt_ComM_IBSAPSTimeoutDTCInfo tmpRead_27;
  dt_ComM_IBSSts01CRCDTCInfo tmpRead_r;
  dt_ComM_IBSSts01TimeoutDTCInfo tmpRead_s;
  dt_ComM_IBSSts02CRCDTCInfo tmpRead_t;
  dt_ComM_IBSSts02TimeoutDTCInfo tmpRead_u;
  dt_ComM_IBSSts03CRCDTCInfo tmpRead_v;
  dt_ComM_IBSSts03TimeoutDTCInfo tmpRead_w;
  dt_ComM_IBSSts04CRCDTCInfo tmpRead_x;
  dt_ComM_IBSSts04TimeoutDTCInfo tmpRead_y;
  dt_ComM_IBSSts05CRCDTCInfo tmpRead_z;
  dt_ComM_IBSSts05TimeoutDTCInfo tmpRead_10;
  dt_ComM_IBSSts05TimeoutInfo tmpRead_11;
  dt_ComM_IBSSts06CRCDTCInfo tmpRead_12;
  dt_ComM_IBSSts06TimeoutDTCInfo tmpRead_13;
  dt_ComM_IBSTqCRCDTCInfo tmpRead_14;
  dt_ComM_IBSTqTimeoutDTCInfo tmpRead_15;
  dt_ComM_IBSVCUMotCtrlCRCDTCInfo tmpRead_16;
  dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo tmpRead_17;
  dt_ComM_IBSVCUMotCtrlTimeoutInfo tmpRead_18;
  dt_ComM_IBSWhlSpd01CRCDTCInfo tmpRead_19;
  dt_ComM_IBSWhlSpd01TimeoutInfo tmpRead_1a;
  dt_ComM_IBSWhlSpd02CRCDTCInfo tmpRead_1b;
  dt_ComM_IBSWhlSpd02TimeoutInfo tmpRead_1c;
  dt_ComM_MCU01CRCDTCInfo tmpRead_1d;
  dt_ComM_MCU01TimeoutDTCInfo tmpRead_1e;
  dt_ComM_MCU01TimeoutInfo tmpRead_1f;
  dt_ComM_MCUFailrCodCRCDTCInfo tmpRead_1g;
  dt_ComM_MCUFailrCodTimeoutDTCInfo tmpRead_1h;
  dt_ComM_PODDCDC01TimeoutDTCInfo tmpRead_1i;
  dt_ComM_PODDCDC01TimeoutInfo tmpRead_1j;
  dt_ComM_PODOBCChrgStatTimeoutDTCInfo tmpRead_1k;
  dt_ComM_PODOBCChrgStatTimeoutInfo tmpRead_1l;
  dt_ComM_PRNDCRCDTCInfo tmpRead_1m;
  dt_ComM_PRNDTimeoutDTCInfo tmpRead_1n;
  dt_ComM_PRNDTimeoutInfo tmpRead_1o;
  dt_ComM_SGW16TimeoutDTCInfo tmpRead_28;
  dt_ComM_SGW16TimeoutInfo tmpRead_29;
  dt_ComM_SGW17TimeoutDTCInfo tmpRead_2a;
  dt_ComM_SGW17TimeoutInfo tmpRead_2b;
  dt_ComM_SGWTimTimeoutDTCInfo tmpRead_1p;
  dt_ComM_SGWTimTimeoutInfo tmpRead_1q;
  dt_ComM_TCU01TimeoutDTCInfo tmpRead_1r;
  dt_ComM_TCU01TimeoutInfo tmpRead_1s;
  boolean_T rtb_LogicalOperator2_kd0q_tmp;
  boolean_T tmpRead_1t;
  boolean_T tmpRead_1z;

  /* Inport: '<Root>/RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus
    (&tmpRead_2g);

  /* Inport: '<Root>/RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus
    (&tmpRead_2f);

  /* Inport: '<Root>/RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus
    (&tmpRead_2e);

  /* Inport: '<Root>/RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus
    (&tmpRead_2d);

  /* Inport: '<Root>/RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus
    (&tmpRead_2c);

  /* Inport: '<Root>/RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus
    (&tmpRead_2b);

  /* Inport: '<Root>/RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus
    (&tmpRead_2a);

  /* Inport: '<Root>/RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus
    (&tmpRead_29);

  /* Inport: '<Root>/RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus
    (&tmpRead_28);

  /* Inport: '<Root>/RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus
    (&tmpRead_27);

  /* Inport: '<Root>/RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus
    (&tmpRead_26);

  /* Inport: '<Root>/RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus
    (&tmpRead_25);

  /* Inport: '<Root>/RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus
    (&tmpRead_24);

  /* Inport: '<Root>/RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus
    (&tmpRead_23);

  /* Inport: '<Root>/RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus
    (&tmpRead_22);

  /* Inport: '<Root>/RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus
    (&tmpRead_21);

  /* Inport: '<Root>/RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus
    (&tmpRead_20);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_1z);

  /* Inport: '<Root>/RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus
    (&tmpRead_1y);

  /* Inport: '<Root>/RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus
    (&tmpRead_1x);

  /* Inport: '<Root>/RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus
    (&tmpRead_1w);

  /* Inport: '<Root>/RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus
    (&tmpRead_1v);

  /* Inport: '<Root>/RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus
    (&tmpRead_1u);

  /* Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&tmpRead_1t);

  /* Inport: '<Root>/RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus
    (&tmpRead_1s);

  /* Inport: '<Root>/RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus
    (&tmpRead_1r);

  /* Inport: '<Root>/RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(
    &tmpRead_1q);

  /* Inport: '<Root>/RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus
    (&tmpRead_1p);

  /* Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus
    (&tmpRead_1o);

  /* Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus
    (&tmpRead_1n);

  /* Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus
    (&tmpRead_1m);

  /* Inport: '<Root>/RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus
    (&tmpRead_1l);

  /* Inport: '<Root>/RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus
    (&tmpRead_1k);

  /* Inport: '<Root>/RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus
    (&tmpRead_1j);

  /* Inport: '<Root>/RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus
    (&tmpRead_1i);

  /* Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus
    (&tmpRead_1h);

  /* Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus
    (&tmpRead_1g);

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus
    (&tmpRead_1f);

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus
    (&tmpRead_1e);

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus
    (&tmpRead_1d);

  /* Inport: '<Root>/RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus
    (&tmpRead_1c);

  /* Inport: '<Root>/RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus
    (&tmpRead_1b);

  /* Inport: '<Root>/RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus
    (&tmpRead_1a);

  /* Inport: '<Root>/RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus
    (&tmpRead_19);

  /* Inport: '<Root>/RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus
    (&tmpRead_18);

  /* Inport: '<Root>/RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus
    (&tmpRead_17);

  /* Inport: '<Root>/RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus
    (&tmpRead_16);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus
    (&tmpRead_15);

  /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus
    (&tmpRead_14);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus
    (&tmpRead_13);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus
    (&tmpRead_12);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(
    &tmpRead_11);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus
    (&tmpRead_10);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus
    (&tmpRead_z);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus
    (&tmpRead_y);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus
    (&tmpRead_x);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus
    (&tmpRead_w);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus
    (&tmpRead_v);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus
    (&tmpRead_u);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus
    (&tmpRead_t);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus
    (&tmpRead_s);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus
    (&tmpRead_r);

  /* Inport: '<Root>/RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus
    (&tmpRead_q);

  /* Inport: '<Root>/RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus
    (&tmpRead_p);

  /* Inport: '<Root>/RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus
    (&tmpRead_o);

  /* Inport: '<Root>/RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus
    (&tmpRead_n);

  /* Inport: '<Root>/RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus
    (&tmpRead_m);

  /* Inport: '<Root>/RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus
    (&tmpRead_l);

  /* Inport: '<Root>/RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus
    (&tmpRead_k);

  /* Inport: '<Root>/RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus
    (&tmpRead_j);

  /* Inport: '<Root>/RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus
    (&tmpRead_i);

  /* Inport: '<Root>/RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(
    &tmpRead_g);

  /* Inport: '<Root>/RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus
    (&tmpRead_f);

  /* Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(
    &tmpRead_e);

  /* Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(
    &tmpRead_d);

  /* Inport: '<Root>/RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus
    (&tmpRead_a);

  /* Inport: '<Root>/RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus
    (&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/CHCAN_BusoffStatus_BusoffStatus' incorporates:
   *  Inport: '<Root>/CHCAN_BusoffStatus_BusoffStatus'
   */
  (void)Rte_Read_CHCAN_BusoffStatus_BusoffStatus
    (&rtb_TmpSignalConversionAtCHCAN_);

  /* SignalConversion generated from: '<Root>/PTCAN_BusoffStatus_BusoffStatus' incorporates:
   *  Inport: '<Root>/PTCAN_BusoffStatus_BusoffStatus'
   */
  (void)Rte_Read_PTCAN_BusoffStatus_BusoffStatus
    (&rtb_TmpSignalConversionAtPTCAN_);

  /* SignalConversion generated from: '<Root>/RTE_R_DCCAN_BusoffStatus_BusoffStatus_tec_DCCAN_BusoffStatus_BusoffStatus' incorporates:
   *  Inport: '<Root>/RTE_R_DCCAN_BusoffStatus_BusoffStatus_tec_DCCAN_BusoffStatus_BusoffStatus'
   */
  (void)
    Rte_Read_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* Outputs for Atomic SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/ComM_BusOffSys'
   *
   * Block requirements for '<S2>/ComM_BusOffSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:4039
   *  2. VCU_SW_Requirements_Specification.slreqx:4040
   *  3. VCU_SW_Requirements_Specification.slreqx:4041
   *  4. VCU_SW_Requirements_Specification.slreqx:4052
   *  5. VCU_SW_Requirements_Specification.slreqx:4053
   *  6. VCU_SW_Requirements_Specification.slreqx:4054
   *  7. VCU_SW_Requirements_Specification.slreqx:4065
   *  8. VCU_SW_Requirements_Specification.slreqx:4066
   *  9. VCU_SW_Requirements_Specification.slreqx:4073
   *  10. VCU_SW_Requirements_Specification.slreqx:4078
   *  11. VCU_SW_Requirements_Specification.slreqx:4079
   *  12. VCU_SW_Requirements_Specification.slreqx:74185
   *  13. VCU_SW_Requirements_Specification.slreqx:74186
   *  14. VCU_SW_Requirements_Specification.slreqx:74187
   *  15. VCU_SW_Requirements_Specification.slreqx:74193
   *  16. VCU_SW_Requirements_Specification.slreqx:74224
   *  17. VCU_SW_Requirements_Specification.slreqx:74225
   *  18. VCU_SW_Requirements_Specification.slreqx:74232
   */
  /* Logic: '<S4>/LogicalOperator4' incorporates:
   *  Logic: '<S4>/LogicalOperator5'
   */
  rtb_LogicalOperator4_ahcf = (tmpRead_1t && !tmpRead_1z);

  /* Outputs for Atomic SubSystem: '<S4>/ATOM_TimeCnt' */
  /* Constant: '<S4>/Constant12' incorporates:
   *  Constant: '<S4>/CAL3'
   */
  rtb_RelationalOperator = CtAp_ComMErr_ATOM_TimeCnt(rtb_LogicalOperator4_ahcf,
    ((uint16_T)ComMErr_Cycle), ComMErr_WkpCfmPreEnaTim_CFG,
    &CtAp_ComMErr_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S4>/ATOM_TimeCnt' */

  /* Logic: '<S4>/LogicalOperator2' incorporates:
   *  Logic: '<S4>/LogicalOperator'
   *
   * Block requirements for '<S4>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:4040
   *
   * Block requirements for '<S4>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:4066
   */
  rtb_LogicalOperator2_kd0q_tmp = !rtb_TmpSignalConversionAtCHCAN_;

  /* Logic: '<S4>/LogicalOperator2'
   *
   * Block requirements for '<S4>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:4040
   */
  rtb_LogicalOperator2_kd0q = rtb_LogicalOperator2_kd0q_tmp;

  /* Outputs for Atomic SubSystem: '<S4>/NoTiAndMonR1' */
  CtAp_ComMErr_NoTiAndMonR(rtb_RelationalOperator,
    rtb_TmpSignalConversionAtCHCAN_, rtb_LogicalOperator2_kd0q,
    &rtb_DataTypeConversion_izwl, &CtAp_ComMErr_ARID_DEF.Switch1_ixdl,
    &CtAp_ComMErr_ARID_DEF.Switch3_hnp2, &CtAp_ComMErr_ARID_DEF.Switch6_fhr2);

  /* End of Outputs for SubSystem: '<S4>/NoTiAndMonR1' */

  /* Logic: '<S4>/LogicalOperator3' incorporates:
   *  Logic: '<S4>/LogicalOperator1'
   *
   * Block requirements for '<S4>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:4053
   *
   * Block requirements for '<S4>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:4079
   */
  tmpRead_1t = !rtb_TmpSignalConversionAtPTCAN_;

  /* Logic: '<S4>/LogicalOperator3'
   *
   * Block requirements for '<S4>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:4053
   */
  rtb_LogicalOperator3_o2js = tmpRead_1t;

  /* Outputs for Atomic SubSystem: '<S4>/NoTiAndMonR2' */
  CtAp_ComMErr_NoTiAndMonR(rtb_RelationalOperator,
    rtb_TmpSignalConversionAtPTCAN_, rtb_LogicalOperator3_o2js,
    &rtb_DataTypeConversion_ikrx, &CtAp_ComMErr_ARID_DEF.Switch1_mlrk,
    &CtAp_ComMErr_ARID_DEF.Switch3_mqb0, &CtAp_ComMErr_ARID_DEF.Switch6_o0ha);

  /* End of Outputs for SubSystem: '<S4>/NoTiAndMonR2' */

  /* Logic: '<S4>/LogicalOperator7' incorporates:
   *  Logic: '<S4>/LogicalOperator6'
   *
   * Block requirements for '<S4>/LogicalOperator7':
   *  1. VCU_SW_Requirements_Specification.slreqx:74186
   *
   * Block requirements for '<S4>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:74225
   */
  tmpRead_1z = !rtb_TmpSignalConversionAtRTE_R_;

  /* Logic: '<S4>/LogicalOperator7'
   *
   * Block requirements for '<S4>/LogicalOperator7':
   *  1. VCU_SW_Requirements_Specification.slreqx:74186
   */
  rtb_LogicalOperator7_ag3b = tmpRead_1z;

  /* Outputs for Atomic SubSystem: '<S4>/NoTiAndMonR3' */
  CtAp_ComMErr_NoTiAndMonR(rtb_RelationalOperator,
    rtb_TmpSignalConversionAtRTE_R_, rtb_LogicalOperator7_ag3b,
    &rtb_DataTypeConversion_c0dh, &CtAp_ComMErr_ARID_DEF.Switch1,
    &CtAp_ComMErr_ARID_DEF.Switch3, &CtAp_ComMErr_ARID_DEF.Switch6);

  /* End of Outputs for SubSystem: '<S4>/NoTiAndMonR3' */

  /* Logic: '<S4>/LogicalOperator'
   *
   * Block requirements for '<S4>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:4066
   */
  rtb_LogicalOperator = rtb_LogicalOperator2_kd0q_tmp;

  /* Outputs for Atomic SubSystem: '<S4>/NoEnTimMonR1' */
  CtAp_ComMErr_NoEnTimMonR(rtb_TmpSignalConversionAtCHCAN_, rtb_LogicalOperator,
    &rtb_True_edpc, &rtb_Switch1_av4w, &rtb_Switch3_fom0, &rtb_Switch6_ppxa);

  /* End of Outputs for SubSystem: '<S4>/NoEnTimMonR1' */

  /* Logic: '<S4>/LogicalOperator1'
   *
   * Block requirements for '<S4>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:4079
   */
  rtb_LogicalOperator1 = tmpRead_1t;

  /* Outputs for Atomic SubSystem: '<S4>/NoEnTimMonR2' */
  CtAp_ComMErr_NoEnTimMonR(rtb_TmpSignalConversionAtPTCAN_, rtb_LogicalOperator1,
    &rtb_True_fvpn, &rtb_Switch1_i4fh, &rtb_Switch3_mhp2, &rtb_Switch6_pinz);

  /* End of Outputs for SubSystem: '<S4>/NoEnTimMonR2' */

  /* Logic: '<S4>/LogicalOperator6'
   *
   * Block requirements for '<S4>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:74225
   */
  rtb_LogicalOperator6_cuce = tmpRead_1z;

  /* Outputs for Atomic SubSystem: '<S4>/NoEnTimMonR3' */
  CtAp_ComMErr_NoEnTimMonR(rtb_TmpSignalConversionAtRTE_R_,
    rtb_LogicalOperator6_cuce, &rtb_True, &rtb_Switch1, &rtb_Switch3,
    &rtb_Switch6);

  /* End of Outputs for SubSystem: '<S4>/NoEnTimMonR3' */
  /* End of Outputs for SubSystem: '<S2>/ComM_BusOffSys' */

  /* DataTypeConversion: '<S5>/DataTypeConversion3' */
  rtb_DataTypeConversion3 = tmpRead_h.ComM_ErrResCBM03TimeoutDTCErrorInfo;

  /* Outputs for Atomic SubSystem: '<S2>/ComM_COMLostSys'
   *
   * Block requirements for '<S2>/ComM_COMLostSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:4017
   *  2. VCU_SW_Requirements_Specification.slreqx:4018
   *  3. VCU_SW_Requirements_Specification.slreqx:4019
   *  4. VCU_SW_Requirements_Specification.slreqx:4020
   *  5. VCU_SW_Requirements_Specification.slreqx:4021
   *  6. VCU_SW_Requirements_Specification.slreqx:4022
   *  7. VCU_SW_Requirements_Specification.slreqx:4023
   *  8. VCU_SW_Requirements_Specification.slreqx:15285
   *  9. VCU_SW_Requirements_Specification.slreqx:15286
   *  10. VCU_SW_Requirements_Specification.slreqx:15287
   *  11. VCU_SW_Requirements_Specification.slreqx:4024
   *  12. VCU_SW_Requirements_Specification.slreqx:4025
   *  13. VCU_SW_Requirements_Specification.slreqx:4026
   *  14. VCU_SW_Requirements_Specification.slreqx:4027
   *  15. VCU_SW_Requirements_Specification.slreqx:4028
   *  16. VCU_SW_Requirements_Specification.slreqx:4029
   *  17. VCU_SW_Requirements_Specification.slreqx:4030
   *  18. VCU_SW_Requirements_Specification.slreqx:4031
   *  19. VCU_SW_Requirements_Specification.slreqx:4032
   *  20. VCU_SW_Requirements_Specification.slreqx:4033
   *  21. VCU_SW_Requirements_Specification.slreqx:4034
   *  22. VCU_SW_Requirements_Specification.slreqx:74152
   */
  /* SignalConversion generated from: '<S6>/SGWCHNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/SGWCHNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:74152
   */
  ComM_SGWCHNodComFailr_Flg = tmpRead_2b.ComM_ErrResSGW17TimeoutInfo;

  /* SignalConversion: '<S6>/Signal Copy' */
  ComM_APTCNodComFailr_Flg = tmpRead_9.ComM_ErrResAPTCTCUTimeoutInfo;

  /* SignalConversion: '<S6>/Signal Copy1' */
  ComM_EVCOMNodComFailr_Flg = tmpRead_o.ComM_ErrResEVCOMSts01TimeoutInfo;

  /* SignalConversion: '<S6>/Signal Copy2' */
  ComM_EPTIBSNodComFailr_Flg = tmpRead_11.ComM_ErrResIBSSts05TimeoutInfo;

  /* End of Outputs for SubSystem: '<S2>/ComM_COMLostSys' */
  /* End of Outputs for SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_Bus_te.ComM_MonStatCHCANBusOffDTCInfo
    = rtb_DataTypeConversion_izwl;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_Bus_te.ComM_MonResCHCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch1_ixdl;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_Bus_te.ComM_ErrStatCHCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch3_hnp2;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_Bus_te.ComM_ErrResCHCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch6_fhr2;

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_j3yp.ComM_MonStatCHCANBusOffInfo
    = rtb_True_edpc;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_j3yp.ComM_MonResCHCANBusOffInfo
    = rtb_Switch1_av4w;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_j3yp.ComM_ErrStatCHCANBusOffInfo
    = rtb_Switch3_fom0;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_j3yp.ComM_ErrResCHCANBusOffInfo
    = rtb_Switch6_ppxa;

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_p4x0.ComM_MonStatEPTCANBusOffDTCInfo
    = rtb_DataTypeConversion_ikrx;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_p4x0.ComM_MonResEPTCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch1_mlrk;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_p4x0.ComM_ErrStatEPTCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch3_mqb0;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_p4x0.ComM_ErrResEPTCANBusOffDTCInfo
    = CtAp_ComMErr_ARID_DEF.Switch6_o0ha;

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_fuxn.ComM_MonStatEPTCANBusOffInfo
    = rtb_True_fvpn;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_fuxn.ComM_MonResEPTCANBusOffInfo
    = rtb_Switch1_i4fh;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_fuxn.ComM_ErrStatEPTCANBusOffInfo
    = rtb_Switch3_mhp2;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_fuxn.ComM_ErrResEPTCANBusOffInfo
    = rtb_Switch6_pinz;

  /* Outputs for Atomic SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */
  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator3'
   *
   * Block requirements for '<S5>/LogicalOperator3':
   *  1. VCU_SW_Requirements_Specification.slreqx:4000
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg
    (tmpRead.ComM_ErrResACU01CRCDTCErrorInfo ||
     tmpRead_1.ComM_ErrResACU02CRCDTCErrorInfo ||
     tmpRead_2c.ComM_ErrResACUInfoCRCDTCErrorInfo ||
     tmpRead_0.ComM_ErrResACU01TimeoutDTCInfo ||
     tmpRead_2.ComM_ErrResACU02TimeoutDTCInfo ||
     tmpRead_3.ComM_ErrResACUInfoTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator4'
   *
   * Block requirements for '<S5>/LogicalOperator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:4001
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg
    (tmpRead_5.ComM_ErrResADCUACC02CRCDTCErrorInfo ||
     tmpRead_20.ComM_ErrResADCUAEB01CRCDTCErrorInfo ||
     tmpRead_22.ComM_ErrResADCUAPS01CRCDTCErrorInfo ||
     tmpRead_24.ComM_ErrResADCUDACRCDTCErrorInfo ||
     tmpRead_6.ComM_ErrResADCUACC02TimeoutDTCErrorInfo ||
     tmpRead_21.ComM_ErrResADCUAEB01TimeoutDTCErrorInfo ||
     tmpRead_23.ComM_ErrResADCUAPS01TimeoutDTCErrorInfo ||
     tmpRead_25.ComM_ErrResADCUDATimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion5'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg
    (tmpRead_8.ComM_ErrResAPTCTCUTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator11'
   *
   * Block requirements for '<S5>/LogicalOperator11':
   *  1. VCU_SW_Requirements_Specification.slreqx:4011
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg
    (tmpRead_a.ComM_ErrResBCM06CRCDTCErrorInfo ||
     tmpRead_1u.ComM_ErrResBCM05CRCDTCErrorInfo ||
     tmpRead_b.ComM_ErrResBCM06TimeoutDTCErrorInfo ||
     tmpRead_1v.ComM_ErrResBCM05TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator6'
   *
   * Block requirements for '<S5>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:4004
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg
    (tmpRead_d.ComM_ErrResBMSSts01CRCDTCErrorInfo ||
     tmpRead_e.ComM_ErrResBMSSts01TimeoutDTCErrorInfo ||
     tmpRead_f.ComM_ErrResBMSSts02TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator7'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg
    (tmpRead_2d.ComM_ErrResCGW01ACRCDTCErrorInfo ||
     tmpRead_i.ComM_ErrResCGW01TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator'
   *  Logic: '<S5>/LogicalOperator1'
   *  Logic: '<S5>/LogicalOperator2'
   *
   * Block requirements for '<S5>/LogicalOperator2':
   *  1. VCU_SW_Requirements_Specification.slreqx:3999
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg
    (tmpRead_p.ComM_ErrResIBSACCCRCDTCErrorInfo ||
     tmpRead_r.ComM_ErrResIBSSts01CRCDTCErrorInfo ||
     tmpRead_t.ComM_ErrResIBSSts02CRCDTCErrorInfo ||
     tmpRead_v.ComM_ErrResIBSSts03CRCDTCErrorInfo ||
     tmpRead_x.ComM_ErrResIBSSts04CRCDTCErrorInfo ||
     tmpRead_12.ComM_ErrResIBSSts06CRCDTCErrorInfo ||
     tmpRead_14.ComM_ErrResIBSTqCRCDTCErrorInfo ||
     tmpRead_16.ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo ||
     tmpRead_19.ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo ||
     tmpRead_1b.ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo ||
     tmpRead_26.ComM_ErrResIBSAPSCRCDTCErrorInfo ||
     (tmpRead_q.ComM_ErrResIBSACCTimeoutDTCErrorInfo ||
      tmpRead_s.ComM_ErrResIBSSts01TimeoutDTCErrorInfo ||
      tmpRead_u.ComM_ErrResIBSSts02TimeoutDTCErrorInfo ||
      tmpRead_w.ComM_ErrResIBSSts03TimeoutDTCErrorInfo ||
      tmpRead_y.ComM_ErrResIBSSts04TimeoutDTCErrorInfo ||
      tmpRead_13.ComM_ErrResIBSSts06TimeoutDTCErrorInfo ||
      tmpRead_15.ComM_ErrResIBSTqTimeoutDTCErrorInfo ||
      tmpRead_17.ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo ||
      tmpRead_1a.ComM_ErrResIBSWhlSpd01TimeoutInfo ||
      tmpRead_1c.ComM_ErrResIBSWhlSpd02TimeoutInfo ||
      tmpRead_27.ComM_ErrResIBSAPSTimeoutDTCErrorInfo));

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion7'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg
    (tmpRead_1i.ComM_ErrResPODDCDC01TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator10'
   *
   * Block requirements for '<S5>/LogicalOperator10':
   *  1. VCU_SW_Requirements_Specification.slreqx:4010
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg
    (tmpRead_z.ComM_ErrResIBSSts05CRCDTCErrorInfo ||
     tmpRead_10.ComM_ErrResIBSSts05TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion6'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg
    (tmpRead_n.ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S5>/BusSelector14'
   *
   * Block requirements for SignalConversion generated from '<S5>/BusSelector14':
   *  1. VCU_SW_Requirements_Specification.slreqx:4007
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg
    (tmpRead_28.ComM_ErrResSGW16TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator5'
   *
   * Block requirements for '<S5>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:4003
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg
    (tmpRead_1d.ComM_ErrResMCU01CRCDTCErrorInfo ||
     tmpRead_1g.ComM_ErrResMCUFailrCodCRCDTCErrorInfo ||
     tmpRead_1e.ComM_ErrResMCU01TimeoutDTCErrorInfo ||
     tmpRead_1h.ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion1'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg
    (tmpRead_1k.ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator8'
   *
   * Block requirements for '<S5>/LogicalOperator8':
   *  1. VCU_SW_Requirements_Specification.slreqx:4008
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg
    (tmpRead_1m.ComM_ErrResPRNDCRCDTCErrorInfo ||
     tmpRead_1n.ComM_ErrResPRNDTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion2'
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg
    (tmpRead_1p.ComM_ErrResSGWTimTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion'
   *
   * Block requirements for '<S5>/DataTypeConversion':
   *  1. VCU_SW_Requirements_Specification.slreqx:4002
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg
    (tmpRead_1r.ComM_ErrResTCU01TimeoutDTCErrorInfo);

  /* Outputs for Atomic SubSystem: '<S2>/ComM_COMLostSys'
   *
   * Block requirements for '<S2>/ComM_COMLostSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:4017
   *  2. VCU_SW_Requirements_Specification.slreqx:4018
   *  3. VCU_SW_Requirements_Specification.slreqx:4019
   *  4. VCU_SW_Requirements_Specification.slreqx:4020
   *  5. VCU_SW_Requirements_Specification.slreqx:4021
   *  6. VCU_SW_Requirements_Specification.slreqx:4022
   *  7. VCU_SW_Requirements_Specification.slreqx:4023
   *  8. VCU_SW_Requirements_Specification.slreqx:15285
   *  9. VCU_SW_Requirements_Specification.slreqx:15286
   *  10. VCU_SW_Requirements_Specification.slreqx:15287
   *  11. VCU_SW_Requirements_Specification.slreqx:4024
   *  12. VCU_SW_Requirements_Specification.slreqx:4025
   *  13. VCU_SW_Requirements_Specification.slreqx:4026
   *  14. VCU_SW_Requirements_Specification.slreqx:4027
   *  15. VCU_SW_Requirements_Specification.slreqx:4028
   *  16. VCU_SW_Requirements_Specification.slreqx:4029
   *  17. VCU_SW_Requirements_Specification.slreqx:4030
   *  18. VCU_SW_Requirements_Specification.slreqx:4031
   *  19. VCU_SW_Requirements_Specification.slreqx:4032
   *  20. VCU_SW_Requirements_Specification.slreqx:4033
   *  21. VCU_SW_Requirements_Specification.slreqx:4034
   *  22. VCU_SW_Requirements_Specification.slreqx:74152
   */
  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_ACUNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_ACUNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4017
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
    (tmpRead_4.ComM_ErrResACUInfoTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_ADCUNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_ADCUNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4018
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg
    (tmpRead_7.ComM_ErrResADCUACC02TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg' incorporates:
   *  SignalConversion: '<S6>/Signal Copy3'
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg
    (ComM_APTCNodComFailr_Flg);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_BCMNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_BCMNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4020
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
    (tmpRead_c.ComM_ErrResBCM06TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_BMSNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_BMSNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4021
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
    (tmpRead_g.ComM_ErrResBMSSts02TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_CGWNodComFailr'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_CGWNodComFailr':
   *  1. VCU_SW_Requirements_Specification.slreqx:4034
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg
    (tmpRead_j.ComM_ErrResCGW01TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_CHIBSNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_CHIBSNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4026
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
    (tmpRead_18.ComM_ErrResIBSVCUMotCtrlTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_DCDCNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_DCDCNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4028
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg
    (tmpRead_1j.ComM_ErrResPODDCDC01TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_DCMFLNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_DCMFLNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4023
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg
    (tmpRead_m.ComM_ErrResDCMFL02TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg' incorporates:
   *  SignalConversion: '<S6>/Signal Copy5'
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg
    (ComM_EPTIBSNodComFailr_Flg);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg' incorporates:
   *  SignalConversion: '<S6>/Signal Copy4'
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg
    (ComM_EVCOMNodComFailr_Flg);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_IVINodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_IVINodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4031
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
    (tmpRead_29.ComM_ErrResSGW16TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_MCUNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_MCUNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4027
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
    (tmpRead_1f.ComM_ErrResMCU01TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_OBCNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_OBCNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4029
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
    (tmpRead_1l.ComM_ErrResPODOBCChrgStatTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_PRNDNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_PRNDNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4030
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg
    (tmpRead_1o.ComM_ErrResPRNDTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_SGWNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_SGWNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4032
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg
    (tmpRead_1q.ComM_ErrResSGWTimTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_TCUNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_TCUNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:4033
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg
    (tmpRead_1s.ComM_ErrResTCU01TimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_DCMFRNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_DCMFRNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:15285
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg
    (tmpRead_1w.ComM_ErrResDCMFRTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_DCMRLNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_DCMRLNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:15286
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg
    (tmpRead_1x.ComM_ErrResDCMRLTimeoutInfo);

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S6>/ComM_DCMRRNodComFailr_Flg'
   *
   * Block requirements for SignalConversion generated from '<S6>/ComM_DCMRRNodComFailr_Flg':
   *  1. VCU_SW_Requirements_Specification.slreqx:15287
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg
    (tmpRead_1y.ComM_ErrResDCMRRTimeoutInfo);

  /* End of Outputs for SubSystem: '<S2>/ComM_COMLostSys' */
  /* End of Outputs for SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_dmwg.ComM_MonStatDCCANDTCBusOffInfo
    = rtb_DataTypeConversion_c0dh;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_dmwg.ComM_MonResDCCANDTCBusOffInfo
    = CtAp_ComMErr_ARID_DEF.Switch1;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_dmwg.ComM_ErrStatDCCANDTCBusOffInfo
    = CtAp_ComMErr_ARID_DEF.Switch3;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_dmwg.ComM_ErrResDCCANDTCBusOffInfo
    = CtAp_ComMErr_ARID_DEF.Switch6;

  /* Outport: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus'
   */
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_mak1.ComM_MonStatDCCANBusOffInfo
    = rtb_True;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_mak1.ComM_MonResDCCANBusOffInfo
    = rtb_Switch1;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_mak1.ComM_ErrStatDCCANBusOffInfo
    = rtb_Switch3;
  CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_mak1.ComM_ErrResDCCANBusOffInfo
    = rtb_Switch6;

  /* Outputs for Atomic SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */
  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg' incorporates:
   *  Logic: '<S5>/LogicalOperator9'
   *
   * Block requirements for '<S5>/LogicalOperator9':
   *  1. VCU_SW_Requirements_Specification.slreqx:4009
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg
    (tmpRead_k.ComM_ErrResDCMFL02CRCDTCErrorInfo ||
     tmpRead_l.ComM_ErrResDCMFL02TimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S5>/BusSelector28'
   *
   * Block requirements for SignalConversion generated from '<S5>/BusSelector28':
   *  1. VCU_SW_Requirements_Specification.slreqx:74122
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg
    (tmpRead_2e.ComM_ErrResDCMFRTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S5>/BusSelector29'
   *
   * Block requirements for SignalConversion generated from '<S5>/BusSelector29':
   *  1. VCU_SW_Requirements_Specification.slreqx:74123
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg
    (tmpRead_2f.ComM_ErrResDCMRLTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S5>/BusSelector30'
   *
   * Block requirements for SignalConversion generated from '<S5>/BusSelector30':
   *  1. VCU_SW_Requirements_Specification.slreqx:74124
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg
    (tmpRead_2g.ComM_ErrResDCMRRTimeoutDTCErrorInfo);

  /* Outport: '<Root>/RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg' incorporates:
   *  SignalConversion generated from: '<S5>/BusSelector31'
   *
   * Block requirements for SignalConversion generated from '<S5>/BusSelector31':
   *  1. VCU_SW_Requirements_Specification.slreqx:74132
   */
  (void)Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg
    (tmpRead_2a.ComM_ErrResSGW17TimeoutDTCErrorInfo);

  /* End of Outputs for SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg' */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg(false);

  /* Outputs for Atomic SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */
  /* Outport: '<Root>/RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg' incorporates:
   *  SignalConversion: '<S2>/Signal Copy'
   */
  (void)Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg
    (ComM_SGWCHNodComFailr_Flg);

  /* End of Outputs for SubSystem: '<Root>/R_ComMErr_Cyclic_10ms_sys' */
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus
    (&CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_Bus_te);
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus
    (&CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_j3yp);
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus(
    &CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_p4x0);
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
    (&CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_fuxn);
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus
    (&CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_dmwg);
  (void)Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus
    (&CtAp_ComMErr_ARID_DEF.RTE_P_ComM_CANBusOffInfo_B_mak1);
}

#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ComMErr_START_SEC_VAR_CONST_8
#include "CtAp_ComMErr_MemMap.h"

void R_ComMErr_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ComM_SGWCHNodComFailr_Flg = false;
  ComM_APTCNodComFailr_Flg = false;
  ComM_EVCOMNodComFailr_Flg = false;
  ComM_EPTIBSNodComFailr_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_ComMErr_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_ComMErr_T));
}

#define CtAp_ComMErr_STOP_SEC_VAR_CONST_8
#include "CtAp_ComMErr_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
