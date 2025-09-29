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
 *  Filename:           CtAp_WakeUpRsn.c
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 *******************************************************************************/
#include "CtAp_WakeUpRsn.h"
#include "rtwtypes.h"
#include "CtAp_WakeUpRsn_private.h"
#include "CtAp_WakeUpRsn_Glb.h"
#include "CtAp_WakeUpRsn_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S4>/ComM_BMSAWBFlow' */
#define CtAp_Wa_IN_ComM_BMSAWB_Inactive ((uint8_T)2U)
#define CtAp_Wa_IN_ComM_BMSAWB_Maintain ((uint8_T)4U)
#define CtAp_WakeUp_IN_ComM_BMSAWB_Init ((uint8_T)3U)
#define CtAp_Wake_IN_ComM_BMSAWB_Active ((uint8_T)1U)

/* Named constants for Chart: '<S4>/ComM_BMSPNC15Flow' */
#define CtAp_Wa_IN_ComM_BMSPNC15_Active ((uint8_T)1U)
#define CtAp_Wake_IN_ComM_BMSPNC15_Init ((uint8_T)3U)
#define CtAp__IN_ComM_BMSPNC15_Inactive ((uint8_T)2U)
#define CtAp__IN_ComM_BMSPNC15_Maintain ((uint8_T)4U)

/* Named constants for Chart: '<S4>/ComM_CGWAWBFlow' */
#define CtAp_Wa_IN_ComM_CGWAWB_Inactive ((uint8_T)2U)
#define CtAp_Wa_IN_ComM_CGWAWB_Maintain ((uint8_T)4U)
#define CtAp_WakeUp_IN_ComM_CGWAWB_Init ((uint8_T)3U)
#define CtAp_Wake_IN_ComM_CGWAWB_Active ((uint8_T)1U)

/* Named constants for Chart: '<S4>/ComM_CGWPNC15Flow' */
#define CtAp_Wa_IN_ComM_CGWPNC15_Active ((uint8_T)1U)
#define CtAp_Wake_IN_ComM_CGWPNC15_Init ((uint8_T)3U)
#define CtAp__IN_ComM_CGWPNC15_Inactive ((uint8_T)2U)
#define CtAp__IN_ComM_CGWPNC15_Maintain ((uint8_T)4U)

/* Named constants for Chart: '<S4>/Ecu_CHCANWakeStatusFlow' */
#define CtA_IN_CHCANWakeStatus_Inactive ((uint8_T)2U)
#define CtA_IN_CHCANWakeStatus_Maintain ((uint8_T)4U)
#define CtAp_Wa_IN_CHCANWakeStatus_Init ((uint8_T)3U)
#define CtAp__IN_CHCANWakeStatus_Active ((uint8_T)1U)

/* Named constants for Chart: '<S4>/Ecu_PTCANWakeStatusFlow' */
#define CtA_IN_PTCANWakeStatus_Inactive ((uint8_T)2U)
#define CtA_IN_PTCANWakeStatus_Maintain ((uint8_T)4U)
#define CtAp_Wa_IN_PTCANWakeStatus_Init ((uint8_T)3U)
#define CtAp__IN_PTCANWakeStatus_Active ((uint8_T)1U)

/* Named constants for Chart: '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
#define IN_LvMgmt_AppNMReqACChrgwa_hksj ((uint8_T)3U)
#define IN_LvMgmt_AppNMReqACChrgwa_m1af ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqACChrgwa_ongh ((uint8_T)6U)
#define IN_LvMgmt_AppNMReqACChrgwake_Cn ((uint8_T)1U)
#define IN_LvMgmt_AppNMReqACChrgwake_In ((uint8_T)4U)
#define IN_LvMgmt_AppNMReqACChrgwake_Re ((uint8_T)5U)

/* Named constants for Chart: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
#define IN_LvMgmt_AppNMReqACDisChr_cq0d ((uint8_T)6U)
#define IN_LvMgmt_AppNMReqACDisChr_fpia ((uint8_T)5U)
#define IN_LvMgmt_AppNMReqACDisChr_jgod ((uint8_T)3U)
#define IN_LvMgmt_AppNMReqACDisChr_kmf0 ((uint8_T)4U)
#define IN_LvMgmt_AppNMReqACDisChr_oc4b ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqACDisChrgwake ((uint8_T)1U)

/* Named constants for Chart: '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
#define C_IN_LvMgmt_AppNMReqDCwake_Init ((uint8_T)4U)
#define Ct_IN_LvMgmt_AppNMReqDCwake_Req ((uint8_T)6U)
#define IN_LvMgmt_AppNMReqDCwake_CntOne ((uint8_T)1U)
#define IN_LvMgmt_AppNMReqDCwake_CntThr ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqDCwake_CntTwo ((uint8_T)3U)
#define IN_LvMgmt_AppNMReqDCwake_Releas ((uint8_T)5U)

/* Named constants for Chart: '<S18>/LvMgmt_AppNMReqKeywakeFlow' */
#define C_IN_LvMgmt_AppNMReqKeywake_Req ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqKeywake_Init ((uint8_T)1U)

/* Named constants for Chart: '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */
#define IN_LvMgmt_AppNMReqLINUploa_c5bu ((uint8_T)3U)
#define IN_LvMgmt_AppNMReqLINUploa_j3s4 ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqLINUploadwake ((uint8_T)1U)

/* Named constants for Chart: '<S20>/LvMgmt_AppNMReqLINwakeFlow' */
#define C_IN_LvMgmt_AppNMReqLINwake_Req ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqLINwake_Init ((uint8_T)1U)
#define IN_LvMgmt_AppNMReqLINwake_SrcCh ((uint8_T)3U)

/* Named constants for Chart: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
#define IN_LvMgmt_AppNMReqSGWRemHV_gycj ((uint8_T)3U)
#define IN_LvMgmt_AppNMReqSGWRemHV_hmca ((uint8_T)2U)
#define IN_LvMgmt_AppNMReqSGWRemHVwake_ ((uint8_T)1U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_WakeUpRsn_START_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"

ARID_DEF_CtAp_WakeUpRsn_T CtAp_WakeUpRsn_ARID_DEF;

#define CtAp_WakeUpRsn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S4>/ATOM_U8BitSet' */
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

uint8_T CtAp_WakeUpRsn_ATOM_U8BitSet(boolean_T rtu_Bit0, boolean_T rtu_Bit1,
  boolean_T rtu_Bit2, boolean_T rtu_Bit3, boolean_T rtu_Bit4, boolean_T rtu_Bit5,
  boolean_T rtu_Bit6, boolean_T rtu_Bit7)
{
  uint8_T rty_State_0;
  uint8_T tmp;

  /* Switch: '<S7>/Switch' */
  if (rtu_Bit0) {
    /* ArithShift: '<S23>/Shift Arithmetic' incorporates:
     *  Constant: '<S23>/Constant1'
     *  Constant: '<S23>/Constant2'
     */
    if (((uint8_T)0U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)0U));
    }

    /* Switch: '<S7>/Switch' incorporates:
     *  ArithShift: '<S23>/Shift Arithmetic'
     *  Constant: '<S7>/Input'
     *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator'
     */
    rty_State_0 = (uint8_T)(((uint8_T)0U) | tmp);
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Input'
     */
    rty_State_0 = ((uint8_T)0U);
  }

  /* End of Switch: '<S7>/Switch' */

  /* Switch: '<S7>/Switch1' */
  if (rtu_Bit1) {
    /* ArithShift: '<S24>/Shift Arithmetic' incorporates:
     *  Constant: '<S24>/Constant1'
     *  Constant: '<S24>/Constant2'
     */
    if (((uint8_T)1U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)1U));
    }

    /* Switch: '<S7>/Switch1' incorporates:
     *  ArithShift: '<S24>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Switch: '<S7>/Switch2' */
  if (rtu_Bit2) {
    /* ArithShift: '<S25>/Shift Arithmetic' incorporates:
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S25>/Constant2'
     */
    if (((uint8_T)2U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)2U));
    }

    /* Switch: '<S7>/Switch2' incorporates:
     *  ArithShift: '<S25>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S7>/Switch3' */
  if (rtu_Bit3) {
    /* ArithShift: '<S26>/Shift Arithmetic' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant2'
     */
    if (((uint8_T)3U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)3U));
    }

    /* Switch: '<S7>/Switch3' incorporates:
     *  ArithShift: '<S26>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch3' */

  /* Switch: '<S7>/Switch4' */
  if (rtu_Bit4) {
    /* ArithShift: '<S27>/Shift Arithmetic' incorporates:
     *  Constant: '<S27>/Constant1'
     *  Constant: '<S27>/Constant2'
     */
    if (((uint8_T)4U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)4U));
    }

    /* Switch: '<S7>/Switch4' incorporates:
     *  ArithShift: '<S27>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch4' */

  /* Switch: '<S7>/Switch5' */
  if (rtu_Bit5) {
    /* ArithShift: '<S28>/Shift Arithmetic' incorporates:
     *  Constant: '<S28>/Constant1'
     *  Constant: '<S28>/Constant2'
     */
    if (((uint8_T)5U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)5U));
    }

    /* Switch: '<S7>/Switch5' incorporates:
     *  ArithShift: '<S28>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch5' */

  /* Switch: '<S7>/Switch6' */
  if (rtu_Bit6) {
    /* ArithShift: '<S29>/Shift Arithmetic' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant2'
     */
    if (((uint8_T)6U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)6U));
    }

    /* Switch: '<S7>/Switch6' incorporates:
     *  ArithShift: '<S29>/Shift Arithmetic'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator3'
     */
    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch6' */

  /* Switch: '<S7>/Switch7' incorporates:
   *  ArithShift: '<S30>/Shift Arithmetic'
   *  S-Function (sfix_bitop): '<S30>/FixPt Bitwise Operator'
   */
  if (rtu_Bit7) {
    /* ArithShift: '<S30>/Shift Arithmetic' incorporates:
     *  Constant: '<S30>/Constant1'
     *  Constant: '<S30>/Constant2'
     */
    if (((uint8_T)7U) > 31U) {
      tmp = 0U;
    } else {
      tmp = (uint8_T)(((uint8_T)1U) << (uint32_T)((uint8_T)7U));
    }

    rty_State_0 |= tmp;
  }

  /* End of Switch: '<S7>/Switch7' */
  return rty_State_0;
}

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S54>/ATOM_TimeCnt'
 *    '<S61>/ATOM_TimeCnt'
 */
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

boolean_T CtAp_WakeUpRsn_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Wa_T
  *CtAp_WakeUpRsn__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S55>/Add1' incorporates:
   *  DataTypeConversion: '<S55>/Data Type Conversion'
   *  DataTypeConversion: '<S55>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S55>/Switch' */
  if (rtu_In) {
    /* Sum: '<S55>/Add' incorporates:
     *  DataTypeConversion: '<S55>/Data Type Conversion'
     *  UnitDelay: '<S55>/Delay'
     */
    CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S55>/Min' */
    if (rtb_Add1 <= CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S55>/Add' */
      CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S55>/Min' */
  } else {
    /* Sum: '<S55>/Add' incorporates:
     *  Constant: '<S55>/Constant'
     *  UnitDelay: '<S55>/Delay'
     */
    CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S55>/Switch' */

  /* RelationalOperator: '<S55>/Relational Operator' incorporates:
   *  UnitDelay: '<S55>/Delay'
   */
  return CtAp_WakeUpRsn__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/ATOM_U8BitDecode'
 *    '<S22>/ATOM_U8BitDecode1'
 *    '<S22>/ATOM_U8BitDecode2'
 *    '<S22>/ATOM_U8BitDecode3'
 */
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

boolean_T CtAp_WakeUpRsn_ATOM_U8BitDecode(uint8_T rtu_BitInp, uint8_T rtu_Bitx)
{
  /* DataTypeConversion: '<S68>/DataTypeConversion' incorporates:
   *  ArithShift: '<S68>/ShiftArithmetic'
   *  Constant: '<S68>/Constant'
   *  S-Function (sfix_bitop): '<S68>/BitwiseOperator'
   */
  return ((int32_T)((uint8_T)1U) & (int32_T)((uint32_T)((uint32_T)rtu_BitInp >>
            (uint32_T)rtu_Bitx))) != 0;
}

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/If'
 *    '<S22>/If1'
 */
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

boolean_T CtAp_WakeUpRsn_If(boolean_T rtu_if, boolean_T rtu_then, boolean_T
  rtu_else)
{
  boolean_T rty_Out1_0;

  /* Switch: '<S87>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S87>/Switch' */
  return rty_Out1_0;
}

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_WakeUpRsn_START_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

void R_WakeUpRsn_Cyclic_10ms(void)
{
  /* local block i/o variables */
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_LogicalOperator4_oyl3;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_Switch;
  boolean_T rtb_LvMgmt_AppNMReqSGWRemHVwake;
  boolean_T rtb_LvMgmt_AppNMReqKeywake_Flg;
  boolean_T rtb_LvMgmt_AppNMReqDCwake_Flg;
  boolean_T rtb_LvMgmt_AppNMReqACDisChrgwak;
  boolean_T rtb_LvMgmt_AppNMReqACChrgwake_F;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_ih2u;
  int32_T tmp;
  uint32_T qY;
  uint8_T tmpRead;
  uint8_T tmpRead_5;
  uint8_T tmpRead_6;
  uint8_T tmpRead_a;
  boolean_T rtb_LogicalOperator1_n3st;
  boolean_T rtb_LogicalOperator_pp0v;
  boolean_T tmpRead_0;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_7;
  boolean_T tmpRead_8;
  boolean_T tmpRead_9;
  boolean_T tmpRead_b;
  boolean_T tmpRead_c;

  /* Inport: '<Root>/RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake' */
  (void)
    Rte_Read_RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake
    (&tmpRead_c);

  /* Inport: '<Root>/RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo
    (&tmpRead_b);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_a);

  /* Inport: '<Root>/RTE_R_Ecu_PTCANWakeStatus_PTCANwake' */
  (void)Rte_Read_RTE_R_Ecu_PTCANWakeStatus_PTCANwake(&rtb_LogicalOperator1_n3st);

  /* Inport: '<Root>/RTE_R_Ecu_LinWakeStatus_Linwake' */
  (void)Rte_Read_RTE_R_Ecu_LinWakeStatus_Linwake(&rtb_LogicalOperator_pp0v);

  /* Inport: '<Root>/RTE_R_Ecu_KeyWakeStatus_Keywake' */
  (void)Rte_Read_RTE_R_Ecu_KeyWakeStatus_Keywake(&tmpRead_9);

  /* Inport: '<Root>/RTE_R_Ecu_CHCANWakeStatus_CHCANwake' */
  (void)Rte_Read_RTE_R_Ecu_CHCANWakeStatus_CHCANwake(&tmpRead_8);

  /* Inport: '<Root>/RTE_R_Ecu_AccWakeStatus_Accwake' */
  (void)Rte_Read_RTE_R_Ecu_AccWakeStatus_Accwake(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum' */
  (void)Rte_Read_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15' */
  (void)Rte_Read_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB' */
  (void)Rte_Read_RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15' */
  (void)Rte_Read_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB' */
  (void)Rte_Read_RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg' */
  (void)Rte_Read_RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_WakeUpRsn_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Function' */
  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqKeywake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqKeywake':
   *  1. VCU_SW_Requirements_Specification.slreqx:28
   *  2. VCU_SW_Requirements_Specification.slreqx:29
   *  3. VCU_SW_Requirements_Specification.slreqx:11110
   *  4. VCU_SW_Requirements_Specification.slreqx:11111
   */
  /* Chart: '<S18>/LvMgmt_AppNMReqKeywakeFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy19'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c4_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c4_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c4_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqKeywake_Init;
    rtb_LvMgmt_AppNMReqKeywake_Flg = WakeUpRsn_Inactive;
  } else if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_c4_CtAp_WakeUpRsn ==
             IN_LvMgmt_AppNMReqKeywake_Init) {
    rtb_LvMgmt_AppNMReqKeywake_Flg = WakeUpRsn_Inactive;

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
    if (tmpRead_9 && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep))) {
      CtAp_WakeUpRsn_ARID_DEF.is_c4_CtAp_WakeUpRsn =
        C_IN_LvMgmt_AppNMReqKeywake_Req;
      rtb_LvMgmt_AppNMReqKeywake_Flg = WakeUpRsn_Active;
    }

    /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  } else {
    /* case IN_LvMgmt_AppNMReqKeywake_Req: */
    rtb_LvMgmt_AppNMReqKeywake_Flg = WakeUpRsn_Active;

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
    if (tmpRead_9 == WakeUpRsn_Inactive) {
      CtAp_WakeUpRsn_ARID_DEF.is_c4_CtAp_WakeUpRsn =
        IN_LvMgmt_AppNMReqKeywake_Init;
      rtb_LvMgmt_AppNMReqKeywake_Flg = WakeUpRsn_Inactive;
    }

    /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  }

  /* End of Chart: '<S18>/LvMgmt_AppNMReqKeywakeFlow' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqKeywake' */

  /* Chart: '<S4>/ComM_BMSPNC15Flow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c13_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c13_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
      CtAp_Wake_IN_ComM_BMSPNC15_Init;
    ComM_BMSPNC15Deal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn) {
     case CtAp_Wa_IN_ComM_BMSPNC15_Active:
      ComM_BMSPNC15Deal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_2 == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
          CtAp__IN_ComM_BMSPNC15_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp__IN_ComM_BMSPNC15_Inactive:
      ComM_BMSPNC15Deal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_2) {
        CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_BMSPNC15_Active;
        ComM_BMSPNC15Deal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wake_IN_ComM_BMSPNC15_Init:
      ComM_BMSPNC15Deal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_2) {
        CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_BMSPNC15_Active;
        ComM_BMSPNC15Deal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_ComM_BMSPNC15_Maintain: */
      ComM_BMSPNC15Deal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_2) {
        CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_BMSPNC15_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c13_CtAp_WakeUpRsn =
          CtAp__IN_ComM_BMSPNC15_Inactive;
        ComM_BMSPNC15Deal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq54 = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/ComM_BMSPNC15Flow' */

  /* Chart: '<S4>/ComM_CGWPNC15Flow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c15_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c15_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
      CtAp_Wake_IN_ComM_CGWPNC15_Init;
    ComM_CGWPNC15Deal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn) {
     case CtAp_Wa_IN_ComM_CGWPNC15_Active:
      ComM_CGWPNC15Deal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_4 == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
          CtAp__IN_ComM_CGWPNC15_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp__IN_ComM_CGWPNC15_Inactive:
      ComM_CGWPNC15Deal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_4) {
        CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_CGWPNC15_Active;
        ComM_CGWPNC15Deal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wake_IN_ComM_CGWPNC15_Init:
      ComM_CGWPNC15Deal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_4) {
        CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_CGWPNC15_Active;
        ComM_CGWPNC15Deal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_ComM_CGWPNC15_Maintain: */
      ComM_CGWPNC15Deal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_4) {
        CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_CGWPNC15_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c15_CtAp_WakeUpRsn =
          CtAp__IN_ComM_CGWPNC15_Inactive;
        ComM_CGWPNC15Deal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_f34w = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/ComM_CGWPNC15Flow' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqLINwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqLINwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:30
   *  2. VCU_SW_Requirements_Specification.slreqx:31
   *  3. VCU_SW_Requirements_Specification.slreqx:11114
   */
  /* DataTypeConversion: '<S70>/DataTypeConversion' incorporates:
   *  Delay: '<S20>/Delay'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_migq;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S20>/Logical Operator' incorporates:
   *  Logic: '<S20>/Logical Operator1'
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  Ecu_LinWakeStatus_CntReset = (rtb_LogicalOperator_pp0v &&
    !rtb_DataTypeConversion_ih2u);

  /* Switch: '<S61>/Switch1' incorporates:
   *  Constant: '<S61>/WakeUpRsn_Inactive'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Delay: '<S20>/Delay1'
   *  Delay: '<S61>/Delay'
   *  Delay: '<S61>/Delay1'
   *  Logic: '<S61>/Logical Operator'
   *  Logic: '<S61>/Logical Operator2'
   *  Logic: '<S61>/Logical Operator3'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  Switch: '<S61>/Switch'
   */
  if (((tmpRead_a == ((uint8_T)WakeUpRsn_Standby)) &&
       (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_k1og != ((uint8_T)WakeUpRsn_Standby)))
      || ((tmpRead_a != ((uint8_T)WakeUpRsn_INIT)) && (tmpRead_a != ((uint8_T)
         WakeUpRsn_Standby)))) {
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nqae = WakeUpRsn_Inactive;
  } else if (CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE) {
    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S61>/WakeUpRsn_Active'
     *  Delay: '<S61>/Delay1'
     */
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nqae = WakeUpRsn_Active;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S61>/Switch1' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Outputs for Atomic SubSystem: '<S61>/ATOM_TimeCnt' */
  /* Delay: '<S61>/Delay1' incorporates:
   *  Constant: '<S61>/LvMgmt_StayLVExpiredTmr_CFG'
   *  Constant: '<S61>/WakeUpRsn_LvMgmt_RunStep'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ATOM_TimeCnt
    (CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nqae, ((uint16_T)
      WakeUpRsn_LvMgmt_RunStep), LvMgmt_StayLVExpiredTmr_CFG,
     &CtAp_WakeUpRsn_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S61>/ATOM_TimeCnt' */

  /* Chart: '<S20>/LvMgmt_AppNMReqLINwakeFlow' incorporates:
   *  Delay: '<S20>/Delay1'
   *  Delay: '<S4>/Delay'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy16'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c3_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c3_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqLINwake_Init;
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqLINwake_Init:
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (Ecu_LinWakeStatus_CntReset && ((tmpRead_a == ((uint8_T)WakeUpRsn_INIT))
           || (tmpRead_a == ((uint8_T)WakeUpRsn_Sleep)))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINwake_SrcCh;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case C_IN_LvMgmt_AppNMReqLINwake_Req:
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Active;
      if (rtb_DataTypeConversion_ih2u || (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE
           != ((uint8_T)WakeUpRsn_U8AppNMBitTwo))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINwake_Init;
        CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }
      break;

     default:
      /* case IN_LvMgmt_AppNMReqLINwake_SrcCheck: */
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead_9 == WakeUpRsn_Inactive) && (tmpRead_7 == WakeUpRsn_Inactive)
          && (ComM_CGWPNC15Deal == WakeUpRsn_Inactive) && (ComM_BMSPNC15Deal ==
           WakeUpRsn_Inactive) && (tmpRead_5 == ((uint8_T)WakeUpRsn_CCUnconnect))
          && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE == ((uint8_T)
            WakeUpRsn_U8AppNMBitZero)) && ((tmpRead_a == ((uint8_T)
             WakeUpRsn_INIT)) || (tmpRead_a == ((uint8_T)WakeUpRsn_Sleep))) &&
          rtb_LogicalOperator_pp0v &&
          (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt >=
           LvMgmt_LINMsgCycTmr_CFG)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn =
          C_IN_LvMgmt_AppNMReqLINwake_Req;
        CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (tmpRead_9 || tmpRead_7 || ComM_CGWPNC15Deal ||
                 ComM_BMSPNC15Deal || (tmpRead_5 != ((uint8_T)
                   WakeUpRsn_CCUnconnect)) ||
                 (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE != ((uint8_T)
                   WakeUpRsn_U8AppNMBitZero)) || ((tmpRead_a != ((uint8_T)
                    WakeUpRsn_INIT)) && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep)))
                 || (rtb_LogicalOperator_pp0v == WakeUpRsn_Inactive)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c3_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINwake_Init;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINWakeMsgTmrCnt = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S20>/LvMgmt_AppNMReqLINwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S20>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_migq = rtb_LogicalOperator_pp0v;

  /* Update for Delay: '<S61>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy19'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_k1og = tmpRead_a;

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqLINwake' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqDCwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqDCwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:32
   *  2. VCU_SW_Requirements_Specification.slreqx:33
   *  3. VCU_SW_Requirements_Specification.slreqx:11117
   *  4. VCU_SW_Requirements_Specification.slreqx:11118
   */
  /* DataTypeConversion: '<S70>/DataTypeConversion' incorporates:
   *  Delay: '<S17>/Delay'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_fbj3;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S17>/Logical Operator' incorporates:
   *  Logic: '<S17>/Logical Operator1'
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  rtb_LogicalOperator_pp0v = (tmpRead_7 && !rtb_DataTypeConversion_ih2u);

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Chart: '<S17>/LvMgmt_AppNMReqDCwakeFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy19'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c5_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c5_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
      C_IN_LvMgmt_AppNMReqDCwake_Init;
    rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt = WakeUpRsn_U32Count_Zero;
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqDCwake_CntOne:
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt >=
          LvMgmt_DCOffPlugEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_Releas;
        rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_Init)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_OffPlug))) || rtb_LogicalOperator_pp0v) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          Ct_IN_LvMgmt_AppNMReqDCwake_Req;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqDCwake_CntThr:
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt >=
          LvMgmt_DCTimeoutEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_Releas;
        rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if ((tmpRead != ((uint8_T)WakeUpRsn_DCPlug_detected)) ||
                 rtb_LogicalOperator_pp0v) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          Ct_IN_LvMgmt_AppNMReqDCwake_Req;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        qY = CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt + /*MW:OvSatOk*/
          WakeUpRsn_U32RunStep;
        if (qY < CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt) {
          qY = MAX_uint32_T;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt = qY;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqDCwake_CntTwo:
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt >=
          LvMgmt_DCCompleteEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_Releas;
        rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_ChrgComplete)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_ChrgFault))) || rtb_LogicalOperator_pp0v)
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          Ct_IN_LvMgmt_AppNMReqDCwake_Req;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case C_IN_LvMgmt_AppNMReqDCwake_Init:
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_7 && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          Ct_IN_LvMgmt_AppNMReqDCwake_Req;
        rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case IN_LvMgmt_AppNMReqDCwake_Releas:
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Inactive;
      if (rtb_LogicalOperator_pp0v) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          C_IN_LvMgmt_AppNMReqDCwake_Init;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }
      break;

     default:
      /* case IN_LvMgmt_AppNMReqDCwake_Req: */
      rtb_LvMgmt_AppNMReqDCwake_Flg = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead == ((uint8_T)WakeUpRsn_Init)) || (tmpRead == ((uint8_T)
            WakeUpRsn_OffPlug))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_CntOne;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if ((tmpRead == ((uint8_T)WakeUpRsn_ChrgComplete)) || (tmpRead ==
                  ((uint8_T)WakeUpRsn_ChrgFault))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_CntTwo;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (tmpRead == ((uint8_T)WakeUpRsn_DCPlug_detected)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c5_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqDCwake_CntThr;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_DCTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S17>/LvMgmt_AppNMReqDCwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S17>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_fbj3 = tmpRead_7;

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqDCwake' */

  /* Chart: '<S4>/Ecu_PTCANWakeStatusFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy17'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c25_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c25_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
      CtAp_Wa_IN_PTCANWakeStatus_Init;
    Ecu_PTCANWakeStatusDeal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn) {
     case CtAp__IN_PTCANWakeStatus_Active:
      Ecu_PTCANWakeStatusDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (rtb_LogicalOperator1_n3st == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
          CtA_IN_PTCANWakeStatus_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtA_IN_PTCANWakeStatus_Inactive:
      Ecu_PTCANWakeStatusDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
          CtAp__IN_PTCANWakeStatus_Active;
        Ecu_PTCANWakeStatusDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wa_IN_PTCANWakeStatus_Init:
      Ecu_PTCANWakeStatusDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
          CtAp__IN_PTCANWakeStatus_Active;
        Ecu_PTCANWakeStatusDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_PTCANWakeStatus_Maintain: */
      Ecu_PTCANWakeStatusDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
          CtAp__IN_PTCANWakeStatus_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c25_CtAp_WakeUpRsn =
          CtA_IN_PTCANWakeStatus_Inactive;
        Ecu_PTCANWakeStatusDeal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/Ecu_PTCANWakeStatusFlow' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqACChrgwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqACChrgwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:34
   *  2. VCU_SW_Requirements_Specification.slreqx:35
   *  3. VCU_SW_Requirements_Specification.slreqx:11121
   *  4. VCU_SW_Requirements_Specification.slreqx:11122
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S31>/Logical Operator1' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Delay: '<S14>/Delay'
   *  Logic: '<S31>/Logical Operator2'
   *  Logic: '<S31>/Logical Operator3'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator1_n3st = (((tmpRead_5 == ((uint8_T)WakeUpRsn_1500Ohm)) ||
    (tmpRead_5 == ((uint8_T)WakeUpRsn_680Ohm)) || (tmpRead_5 == ((uint8_T)
    WakeUpRsn_220Ohm)) || (tmpRead_5 == ((uint8_T)WakeUpRsn_100Ohm))) &&
    ((CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ox4e != ((uint8_T)WakeUpRsn_1500Ohm))
     && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ox4e != ((uint8_T)WakeUpRsn_680Ohm))
     && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ox4e != ((uint8_T)WakeUpRsn_220Ohm))
     && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ox4e != ((uint8_T)WakeUpRsn_100Ohm))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Chart: '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c6_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c6_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqACChrgwake_In;
    rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
      WakeUpRsn_U32Count_Zero;
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqACChrgwake_Cn:
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt >=
          LvMgmt_ACChgOffPlugEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwake_Re;
        rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_Init)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_OffPlug))) || rtb_LogicalOperator1_n3st)
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_ongh;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACChrgwa_m1af:
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt >=
          LvMgmt_ACChgTimeoutEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwake_Re;
        rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if ((tmpRead != ((uint8_T)WakeUpRsn_ACPlug_detected)) ||
                 rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_ongh;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        qY = CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt +
          /*MW:OvSatOk*/ WakeUpRsn_U32RunStep;
        if (qY < CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt) {
          qY = MAX_uint32_T;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt = qY;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACChrgwa_hksj:
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt >=
          LvMgmt_ACChgCompleteEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwake_Re;
        rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_ChrgComplete)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_ChrgFault))) || rtb_LogicalOperator1_n3st)
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_ongh;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACChrgwake_In:
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (Ecu_PTCANWakeStatusDeal && ((tmpRead_5 == ((uint8_T)WakeUpRsn_1500Ohm))
           || (tmpRead_5 == ((uint8_T)WakeUpRsn_680Ohm)) || (tmpRead_5 ==
            ((uint8_T)WakeUpRsn_220Ohm)) || (tmpRead_5 == ((uint8_T)
             WakeUpRsn_100Ohm))) && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_ongh;
        rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case IN_LvMgmt_AppNMReqACChrgwake_Re:
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Inactive;
      if (rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwake_In;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }
      break;

     default:
      /* case IN_LvMgmt_AppNMReqACChrgwake_Req: */
      rtb_LvMgmt_AppNMReqACChrgwake_F = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead == ((uint8_T)WakeUpRsn_Init)) || (tmpRead == ((uint8_T)
            WakeUpRsn_OffPlug))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwake_Cn;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if ((tmpRead == ((uint8_T)WakeUpRsn_ChrgComplete)) || (tmpRead ==
                  ((uint8_T)WakeUpRsn_ChrgFault))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_hksj;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgCompleteEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (tmpRead == ((uint8_T)WakeUpRsn_ACPlug_detected)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c6_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACChrgwa_m1af;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S14>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ox4e = tmpRead_5;

  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqACChrgwake' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqACDisChrgwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqACDisChrgwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:11123
   *  2. VCU_SW_Requirements_Specification.slreqx:36
   *  3. VCU_SW_Requirements_Specification.slreqx:11125
   *  4. VCU_SW_Requirements_Specification.slreqx:37
   */
  /* Logic: '<S41>/Logical Operator1' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S50>/Constant'
   *  Delay: '<S15>/Delay'
   *  Logic: '<S41>/Logical Operator2'
   *  Logic: '<S41>/Logical Operator3'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S50>/Compare'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator1_n3st = (((tmpRead_5 == ((uint8_T)WakeUpRsn_2000Ohm)) ||
    (tmpRead_5 == ((uint8_T)WakeUpRsn_2700Ohm)) || (tmpRead_5 == ((uint8_T)
    WakeUpRsn_1000Ohm)) || (tmpRead_5 == ((uint8_T)WakeUpRsn_470Ohm))) &&
    ((CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_kplk != ((uint8_T)WakeUpRsn_2000Ohm))
     && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_kplk != ((uint8_T)
    WakeUpRsn_2700Ohm)) && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_kplk !=
    ((uint8_T)WakeUpRsn_1000Ohm)) && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_kplk
    != ((uint8_T)WakeUpRsn_470Ohm))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Chart: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c7_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c7_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqACDisChr_kmf0;
    rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
      WakeUpRsn_Count_Zero);
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
      WakeUpRsn_U32Count_Zero;
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqACDisChrgwake:
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt >=
          LvMgmt_ACDisChgOffPlugEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_fpia;
        rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_Init)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_OffPlug))) || rtb_LogicalOperator1_n3st)
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_cq0d;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACDisChr_oc4b:
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt >=
          LvMgmt_ACDisChgTimeoutEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_fpia;
        rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if ((tmpRead != ((uint8_T)WakeUpRsn_V2LPlug_Detected)) ||
                 rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_cq0d;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        qY = CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt +
          /*MW:OvSatOk*/ WakeUpRsn_U32RunStep;
        if (qY < CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt) {
          qY = MAX_uint32_T;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt = qY;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACDisChr_jgod:
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Active;
      if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn >=
          LvMgmt_ACDisChgCompleteEndTmrCnt_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_fpia;
        rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      } else if (((tmpRead != ((uint8_T)WakeUpRsn_V2Lcompleted)) && (tmpRead !=
                   ((uint8_T)WakeUpRsn_V2LFault))) || rtb_LogicalOperator1_n3st)
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_cq0d;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = (uint16_T)tmp;

        /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      }
      break;

     case IN_LvMgmt_AppNMReqACDisChr_kmf0:
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (Ecu_PTCANWakeStatusDeal && ((tmpRead_5 == ((uint8_T)WakeUpRsn_2000Ohm))
           || (tmpRead_5 == ((uint8_T)WakeUpRsn_2700Ohm)) || (tmpRead_5 ==
            ((uint8_T)WakeUpRsn_1000Ohm)) || (tmpRead_5 == ((uint8_T)
             WakeUpRsn_470Ohm))) && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_cq0d;
        rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case IN_LvMgmt_AppNMReqACDisChr_fpia:
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Inactive;
      if (rtb_LogicalOperator1_n3st) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_kmf0;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      }
      break;

     default:
      /* case IN_LvMgmt_AppNMReqACDisChrgwake_Req: */
      rtb_LvMgmt_AppNMReqACDisChrgwak = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead == ((uint8_T)WakeUpRsn_Init)) || (tmpRead == ((uint8_T)
            WakeUpRsn_OffPlug))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChrgwake;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgOffPlugEndTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if ((tmpRead == ((uint8_T)WakeUpRsn_V2Lcompleted)) || (tmpRead ==
                  ((uint8_T)WakeUpRsn_V2LFault))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_jgod;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgCompleteEndTmrCn = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (tmpRead == ((uint8_T)WakeUpRsn_V2LPlug_Detected)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c7_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqACDisChr_oc4b;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_ACDisChgTimeoutEndTmrCnt =
          WakeUpRsn_U32Count_Zero;
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S15>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_kplk = tmpRead_5;

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqACDisChrgwake' */

  /* Chart: '<S4>/ComM_CGWAWBFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c23_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c23_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
      CtAp_WakeUp_IN_ComM_CGWAWB_Init;
    ComM_CGWAWBDeal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn) {
     case CtAp_Wake_IN_ComM_CGWAWB_Active:
      ComM_CGWAWBDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_3 == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_CGWAWB_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wa_IN_ComM_CGWAWB_Inactive:
      ComM_CGWAWBDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_3) {
        CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_CGWAWB_Active;
        ComM_CGWAWBDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_WakeUp_IN_ComM_CGWAWB_Init:
      ComM_CGWAWBDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_3) {
        CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_CGWAWB_Active;
        ComM_CGWAWBDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_ComM_CGWAWB_Maintain: */
      ComM_CGWAWBDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_3) {
        CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_CGWAWB_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c23_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_CGWAWB_Inactive;
        ComM_CGWAWBDeal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_aq4p = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/ComM_CGWAWBFlow' */

  /* Chart: '<S4>/Ecu_CHCANWakeStatusFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c24_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c24_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
      CtAp_Wa_IN_CHCANWakeStatus_Init;
    Ecu_CHCANWakeStatusDeal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn) {
     case CtAp__IN_CHCANWakeStatus_Active:
      Ecu_CHCANWakeStatusDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_8 == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
          CtA_IN_CHCANWakeStatus_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtA_IN_CHCANWakeStatus_Inactive:
      Ecu_CHCANWakeStatusDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_8) {
        CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
          CtAp__IN_CHCANWakeStatus_Active;
        Ecu_CHCANWakeStatusDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wa_IN_CHCANWakeStatus_Init:
      Ecu_CHCANWakeStatusDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_8) {
        CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
          CtAp__IN_CHCANWakeStatus_Active;
        Ecu_CHCANWakeStatusDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_CHCANWakeStatus_Maintain: */
      Ecu_CHCANWakeStatusDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_8) {
        CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
          CtAp__IN_CHCANWakeStatus_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c24_CtAp_WakeUpRsn =
          CtA_IN_CHCANWakeStatus_Inactive;
        Ecu_CHCANWakeStatusDeal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_pqgt = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/Ecu_CHCANWakeStatusFlow' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqSGWRemHVwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqSGWRemHVwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:38
   *  2. VCU_SW_Requirements_Specification.slreqx:39
   *  3. VCU_SW_Requirements_Specification.slreqx:11129
   *  4. VCU_SW_Requirements_Specification.slreqx:11130
   */
  /* Chart: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' incorporates:
   *  Delay: '<S21>/Delay'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c8_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c8_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c8_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqSGWRemHVwake_;
    rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Inactive;
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c8_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqSGWRemHVwake_:
      rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (Ecu_CHCANWakeStatusDeal && ComM_CGWAWBDeal && ComM_CGWPNC15Deal &&
          (tmpRead_6 == ((uint8_T)WakeUpRsn_SGWHVOn)) && ((tmpRead_a ==
            ((uint8_T)WakeUpRsn_HVReady)) || (tmpRead_a == ((uint8_T)
             WakeUpRsn_DrvReady)))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c8_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqSGWRemHV_gycj;
        rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Active;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case IN_LvMgmt_AppNMReqSGWRemHV_hmca:
      rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead_6 == ((uint8_T)WakeUpRsn_SGWHVOn)) && ((tmpRead_a ==
            ((uint8_T)WakeUpRsn_HVReady)) || (tmpRead_a == ((uint8_T)
             WakeUpRsn_DrvReady))) &&
          ((CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_k2v1 != ((uint8_T)
             WakeUpRsn_HVReady)) && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_k2v1
            != ((uint8_T)WakeUpRsn_DrvReady)))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c8_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqSGWRemHV_gycj;
        rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Active;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_LvMgmt_AppNMReqSGWRemHVwake_Req: */
      rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead_6 != ((uint8_T)WakeUpRsn_SGWHVOn)) || ((tmpRead_a !=
            ((uint8_T)WakeUpRsn_HVReady)) && (tmpRead_a != ((uint8_T)
             WakeUpRsn_DrvReady)))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c8_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqSGWRemHV_hmca;
        rtb_LvMgmt_AppNMReqSGWRemHVwake = WakeUpRsn_Inactive;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S21>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy19'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_k2v1 = tmpRead_a;

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqSGWRemHVwake' */

  /* Outputs for Atomic SubSystem: '<S4>/LvMgmt_AppNMReqLINUploadwake'
   *
   * Block requirements for '<S4>/LvMgmt_AppNMReqLINUploadwake':
   *  1. VCU_SW_Requirements_Specification.slreqx:69772
   *  2. VCU_SW_Requirements_Specification.slreqx:69773
   *  3. VCU_SW_Requirements_Specification.slreqx:69774
   */
  /* DataTypeConversion: '<S70>/DataTypeConversion' incorporates:
   *  Delay: '<S19>/Delay'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_enqt;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S19>/Logical Operator' incorporates:
   *  Logic: '<S19>/Logical Operator1'
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  Ecu_SelfWakeStatus_CntReset = (tmpRead_c && !rtb_DataTypeConversion_ih2u);

  /* Switch: '<S54>/Switch1' incorporates:
   *  Constant: '<S54>/WakeUpRsn_Inactive'
   *  Constant: '<S56>/Constant'
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Delay: '<S19>/Delay1'
   *  Delay: '<S54>/Delay'
   *  Delay: '<S54>/Delay1'
   *  Logic: '<S54>/Logical Operator'
   *  Logic: '<S54>/Logical Operator2'
   *  Logic: '<S54>/Logical Operator3'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  Switch: '<S54>/Switch'
   */
  if (((tmpRead_a == ((uint8_T)WakeUpRsn_Standby)) &&
       (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_p0at != ((uint8_T)WakeUpRsn_Standby)))
      || ((tmpRead_a != ((uint8_T)WakeUpRsn_INIT)) && (tmpRead_a != ((uint8_T)
         WakeUpRsn_Standby)))) {
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nvmp = WakeUpRsn_Inactive;
  } else if (CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts) {
    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S54>/WakeUpRsn_Active'
     *  Delay: '<S54>/Delay1'
     */
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nvmp = WakeUpRsn_Active;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S54>/Switch1' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Outputs for Atomic SubSystem: '<S54>/ATOM_TimeCnt' */
  /* Delay: '<S54>/Delay1' incorporates:
   *  Constant: '<S54>/LvMgmt_StayLVExpiredTmr_CFG'
   *  Constant: '<S54>/WakeUpRsn_LvMgmt_RunStep'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ATOM_TimeCnt
    (CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_nvmp, ((uint16_T)
      WakeUpRsn_LvMgmt_RunStep), LvMgmt_StayLVExpiredTmr_CFG,
     &CtAp_WakeUpRsn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S54>/ATOM_TimeCnt' */

  /* Chart: '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' incorporates:
   *  Delay: '<S19>/Delay1'
   *  Delay: '<S4>/Delay'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy19'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c16_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c16_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn =
      IN_LvMgmt_AppNMReqLINUploadwake;
    CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn) {
     case IN_LvMgmt_AppNMReqLINUploadwake:
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (Ecu_SelfWakeStatus_CntReset && ((tmpRead_a == ((uint8_T)WakeUpRsn_INIT))
           || (tmpRead_a == ((uint8_T)WakeUpRsn_Sleep)))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINUploa_c5bu;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case IN_LvMgmt_AppNMReqLINUploa_j3s4:
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Active;
      if (rtb_DataTypeConversion_ih2u || (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE
           != ((uint8_T)WakeUpRsn_U8AppNMSixFour))) {
        CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINUploadwake;
        CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }
      break;

     default:
      /* case IN_LvMgmt_AppNMReqLINUploadwake_SrcCheck: */
      CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if ((tmpRead_9 == WakeUpRsn_Inactive) && (tmpRead_7 == WakeUpRsn_Inactive)
          && (ComM_CGWPNC15Deal == WakeUpRsn_Inactive) && (ComM_BMSPNC15Deal ==
           WakeUpRsn_Inactive) && (tmpRead_5 == ((uint8_T)WakeUpRsn_CCUnconnect))
          && (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE == ((uint8_T)
            WakeUpRsn_U8AppNMBitZero)) && ((tmpRead_a == ((uint8_T)
             WakeUpRsn_INIT)) || (tmpRead_a == ((uint8_T)WakeUpRsn_Sleep))) &&
          (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt >=
           LvMgmt_LINMsgCycTmr_CFG)) {
        CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINUploa_j3s4;
        CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (tmpRead_9 || tmpRead_7 || ComM_CGWPNC15Deal ||
                 ComM_BMSPNC15Deal || (tmpRead_5 != ((uint8_T)
                   WakeUpRsn_CCUnconnect)) ||
                 (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE != ((uint8_T)
                   WakeUpRsn_U8AppNMBitZero)) || ((tmpRead_a != ((uint8_T)
                    WakeUpRsn_INIT)) && (tmpRead_a != ((uint8_T)WakeUpRsn_Sleep))))
      {
        CtAp_WakeUpRsn_ARID_DEF.is_c16_CtAp_WakeUpRsn =
          IN_LvMgmt_AppNMReqLINUploadwake;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_LINUploadMsgTmrCnt = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Update for Delay: '<S19>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_enqt = tmpRead_c;

  /* Update for Delay: '<S54>/Delay' incorporates:
   *  SignalConversion: '<S5>/SignalCopy19'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_p0at = tmpRead_a;

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* End of Outputs for SubSystem: '<S4>/LvMgmt_AppNMReqLINUploadwake' */

  /* Chart: '<S4>/ComM_BMSAWBFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  if ((uint32_T)CtAp_WakeUpRsn_ARID_DEF.is_active_c1_CtAp_WakeUpRsn == 0U) {
    CtAp_WakeUpRsn_ARID_DEF.is_active_c1_CtAp_WakeUpRsn = 1U;
    CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
      CtAp_WakeUp_IN_ComM_BMSAWB_Init;
    ComM_BMSAWBDeal = WakeUpRsn_Inactive;
    CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
      WakeUpRsn_Count_Zero);
  } else {
    switch (CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn) {
     case CtAp_Wake_IN_ComM_BMSAWB_Active:
      ComM_BMSAWBDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_1 == WakeUpRsn_Inactive) {
        CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_BMSAWB_Maintain;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_Wa_IN_ComM_BMSAWB_Inactive:
      ComM_BMSAWBDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_1) {
        CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_BMSAWB_Active;
        ComM_BMSAWBDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     case CtAp_WakeUp_IN_ComM_BMSAWB_Init:
      ComM_BMSAWBDeal = WakeUpRsn_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_1) {
        CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_BMSAWB_Active;
        ComM_BMSAWBDeal = WakeUpRsn_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;

     default:
      /* case IN_ComM_BMSAWB_Maintain: */
      ComM_BMSAWBDeal = WakeUpRsn_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      if (tmpRead_1) {
        CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
          CtAp_Wake_IN_ComM_BMSAWB_Active;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else if (CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 >=
                 LvMgmt_NMInterfaceTmr_CFG) {
        CtAp_WakeUpRsn_ARID_DEF.is_c1_CtAp_WakeUpRsn =
          CtAp_Wa_IN_ComM_BMSAWB_Inactive;
        ComM_BMSAWBDeal = WakeUpRsn_Inactive;
        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = ((uint16_T)
          WakeUpRsn_Count_Zero);
      } else {
        tmp = (int32_T)CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 +
          (int32_T)((uint16_T)WakeUpRsn_LvMgmt_RunStep);
        if (tmp > 65535) {
          tmp = 65535;
        }

        CtAp_WakeUpRsn_ARID_DEF.LvMgmt_NMInterfaceTmrCnt_i3q2 = (uint16_T)tmp;
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
      break;
    }
  }

  /* End of Chart: '<S4>/ComM_BMSAWBFlow' */

  /* Logic: '<S16>/Logical Operator1' incorporates:
   *  Logic: '<S22>/Logical Operator1'
   */
  tmpRead_1 = (ComM_CGWAWBDeal && ComM_CGWPNC15Deal);

  /* Logic: '<S16>/Logical Operator' incorporates:
   *  Logic: '<S22>/Logical Operator'
   */
  tmpRead_c = (ComM_BMSAWBDeal && ComM_BMSPNC15Deal);

  /* Logic: '<S16>/Logical Operator4' incorporates:
   *  Logic: '<S16>/Logical Operator'
   *  Logic: '<S16>/Logical Operator1'
   *
   * Block requirements for '<S16>/Logical Operator4':
   *  1. VCU_SW_Requirements_Specification.slreqx:40
   *  2. VCU_SW_Requirements_Specification.slreqx:41
   */
  rtb_LogicalOperator4 = ((tmpRead_1 && Ecu_CHCANWakeStatusDeal) || (tmpRead_c &&
    Ecu_PTCANWakeStatusDeal));

  /* Outputs for Atomic SubSystem: '<S4>/ATOM_U8BitSet' */
  /* Delay: '<S4>/Delay' incorporates:
   *  Constant: '<S22>/Macro_WakeUpRsn_U8AppNMBitOne'
   *  Constant: '<S22>/Macro_WakeUpRsn_U8AppNMBitSix'
   *  Delay: '<S19>/Delay1'
   *  Delay: '<S20>/Delay1'
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE = CtAp_WakeUpRsn_ATOM_U8BitSet
    (rtb_LvMgmt_AppNMReqKeywake_Flg, CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE,
     rtb_LvMgmt_AppNMReqDCwake_Flg, rtb_LvMgmt_AppNMReqACChrgwake_F,
     rtb_LvMgmt_AppNMReqACDisChrgwak, rtb_LvMgmt_AppNMReqSGWRemHVwake,
     CtAp_WakeUpRsn_ARID_DEF.Delay1_DSTATE_mdts, rtb_LogicalOperator4);

  /* End of Outputs for SubSystem: '<S4>/ATOM_U8BitSet' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_U8BitDecode' */
  rtb_DataTypeConversion = CtAp_WakeUpRsn_ATOM_U8BitDecode
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE, ((uint8_T)WakeUpRsn_U8AppNMBitOne));

  /* End of Outputs for SubSystem: '<S22>/ATOM_U8BitDecode' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_U8BitDecode1' */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ATOM_U8BitDecode
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE, ((uint8_T)WakeUpRsn_U8AppNMBitSix));

  /* End of Outputs for SubSystem: '<S22>/ATOM_U8BitDecode1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S22>/Logical Operator4' incorporates:
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  Constant: '<S80>/Constant'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Logic: '<S22>/Logical Operator2'
   *  Logic: '<S22>/Logical Operator3'
   *  Logic: '<S22>/Logical Operator5'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy11'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_LogicalOperator4_oyl3 = (rtb_DataTypeConversion ||
    rtb_DataTypeConversion_ih2u || tmpRead_9 || tmpRead_1 || tmpRead_c ||
    (tmpRead_7 && tmpRead_0) || (tmpRead_0 && ((tmpRead_5 == ((uint8_T)
    WakeUpRsn_1500Ohm)) || (tmpRead_5 == ((uint8_T)WakeUpRsn_680Ohm)) ||
    (tmpRead_5 == ((uint8_T)WakeUpRsn_220Ohm)) || (tmpRead_5 == ((uint8_T)
    WakeUpRsn_100Ohm)) || (tmpRead_5 == ((uint8_T)WakeUpRsn_2000Ohm)) ||
    (tmpRead_5 == ((uint8_T)WakeUpRsn_2700Ohm)) || (tmpRead_5 == ((uint8_T)
    WakeUpRsn_1000Ohm)) || (tmpRead_5 == ((uint8_T)WakeUpRsn_470Ohm)))));

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Outputs for Atomic SubSystem: '<S22>/If1'
   *
   * Block requirements for '<S22>/If1':
   *  1. VCU_SW_Requirements_Specification.slreqx:42
   */
  /* Constant: '<S22>/Macro_Active' incorporates:
   *  Delay: '<S22>/Delay'
   *
   * Block requirements for '<S22>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:69779
   */
  rtb_Switch = CtAp_WakeUpRsn_If(rtb_LogicalOperator4_oyl3, WakeUpRsn_Active,
    CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ieip);

  /* End of Outputs for SubSystem: '<S22>/If1' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_U8BitDecode2' */
  /* Delay: '<S4>/Delay' incorporates:
   *  Constant: '<S22>/Macro_WakeUpRsn_U8AppNMBitOne1'
   *  Constant: '<S22>/Macro_WakeUpRsn_U8AppNMBitSix1'
   */
  rtb_DataTypeConversion_ih2u = CtAp_WakeUpRsn_ATOM_U8BitDecode
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE, ((uint8_T)WakeUpRsn_U8AppNMBitOne));

  /* End of Outputs for SubSystem: '<S22>/ATOM_U8BitDecode2' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_U8BitDecode3' */
  rtb_DataTypeConversion = CtAp_WakeUpRsn_ATOM_U8BitDecode
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE, ((uint8_T)WakeUpRsn_U8AppNMBitSix));

  /* End of Outputs for SubSystem: '<S22>/ATOM_U8BitDecode3' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */
  /* Logic: '<S22>/Logical Operator10' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  Constant: '<S76>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S81>/Constant'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy15'
   *  SignalConversion: '<S5>/SignalCopy7'
   */
  rtb_LogicalOperator10 = ((rtb_DataTypeConversion_ih2u == WakeUpRsn_Inactive) &&
    (rtb_DataTypeConversion == WakeUpRsn_Inactive) && (tmpRead_9 ==
    WakeUpRsn_Inactive) && (ComM_CGWPNC15Deal == WakeUpRsn_Inactive) &&
    (ComM_BMSPNC15Deal == WakeUpRsn_Inactive) && (tmpRead_0 ==
    WakeUpRsn_Inactive) && (tmpRead_b == WakeUpRsn_Inactive));

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Input' */

  /* Outputs for Atomic SubSystem: '<S22>/If'
   *
   * Block requirements for '<S22>/If':
   *  1. VCU_SW_Requirements_Specification.slreqx:43
   */
  /* Delay: '<S22>/Delay' incorporates:
   *  Constant: '<S22>/Macro_Inactive'
   *
   * Block requirements for '<S22>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:69779
   */
  CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ieip = CtAp_WakeUpRsn_If
    (rtb_LogicalOperator10, WakeUpRsn_Inactive, rtb_Switch);

  /* End of Outputs for SubSystem: '<S22>/If' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Output' */
  /* Outport: '<Root>/RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo' incorporates:
   *  Delay: '<S4>/Delay'
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE);

  /* Outport: '<Root>/RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg' incorporates:
   *  Delay: '<S22>/Delay'
   *  SignalConversion: '<S6>/SignalCopy1'
   *
   * Block requirements for '<S22>/Delay':
   *  1. VCU_SW_Requirements_Specification.slreqx:69779
   */
  (void)Rte_Write_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg
    (CtAp_WakeUpRsn_ARID_DEF.Delay_DSTATE_ieip);

  /* End of Outputs for SubSystem: '<S2>/CtAp_WakeUpRsn_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_WakeUpRsn_Cyclic_10ms_sys' */
}

#define CtAp_WakeUpRsn_STOP_SEC_CODE
#include "CtAp_WakeUpRsn_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_WakeUpRsn_START_SEC_VAR_CONST_8
#include "CtAp_WakeUpRsn_MemMap.h"

void R_WakeUpRsn_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  Ecu_LinWakeStatus_CntReset = false;
  Ecu_SelfWakeStatus_CntReset = false;
  Ecu_PTCANWakeStatusDeal = false;
  Ecu_CHCANWakeStatusDeal = false;
  ComM_CGWPNC15Deal = false;
  ComM_CGWAWBDeal = false;
  ComM_BMSPNC15Deal = false;
  ComM_BMSAWBDeal = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_WakeUpRsn_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_WakeUpRsn_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_WakeUpRsn_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/CtAp_WakeUpRsn_Function' */
  /* SystemInitialize for Chart: '<S4>/ComM_BMSPNC15Flow' */
  ComM_BMSPNC15Deal = false;

  /* SystemInitialize for Chart: '<S4>/ComM_CGWPNC15Flow' */
  ComM_CGWPNC15Deal = false;

  /* SystemInitialize for Chart: '<S4>/Ecu_PTCANWakeStatusFlow' */
  Ecu_PTCANWakeStatusDeal = false;

  /* SystemInitialize for Chart: '<S4>/ComM_CGWAWBFlow' */
  ComM_CGWAWBDeal = false;

  /* SystemInitialize for Chart: '<S4>/Ecu_CHCANWakeStatusFlow' */
  Ecu_CHCANWakeStatusDeal = false;

  /* SystemInitialize for Chart: '<S4>/ComM_BMSAWBFlow' */
  ComM_BMSAWBDeal = false;

  /* End of SystemInitialize for SubSystem: '<S2>/CtAp_WakeUpRsn_Function' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_WakeUpRsn_Cyclic_10ms_sys' */
}

#define CtAp_WakeUpRsn_STOP_SEC_VAR_CONST_8
#include "CtAp_WakeUpRsn_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
