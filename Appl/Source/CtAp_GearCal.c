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
 *  Filename:           CtAp_GearCal.c
 *  File Creation Date: 04-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul  4 18:52:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jul 04 18:51:54 2025
 *
 *
 *******************************************************************************/
#include "CtAp_GearCal.h"
#include "rtwtypes.h"
#include "CtAp_GearCal_private.h"
#include "Rte_Type.h"
#include "CtAp_GearCal_Glb.h"
#include "CtAp_GearCal_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S11>/ATOM_Chart' */
#define CtAp_GearCal_IN_Init           ((uint8_T)1U)
#define CtAp_GearCal_IN_SWFail         ((uint8_T)2U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
ARID_DEF_CtAp_GearCal_T CtAp_GearCal_ARID_DEF;

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * System initialize for atomic system:
 *    '<S16>/DetectChange'
 *    '<S17>/DetectChange'
 *    '<S18>/DetectChange'
 *    '<S19>/DetectChange'
 *    '<S119>/DetectChange'
 *    '<S120>/DetectChange'
 *    '<S121>/DetectChange'
 *    '<S122>/DetectChange'
 *    '<S162>/DetectChange'
 *    '<S163>/DetectChange'
 *    ...
 */
void CtAp_GearCal_DetectChange_Init(ARID_DEF_DetectChange_CtAp_Ge_T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S22>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = ((uint8_T)0U);
}

/*
 * System reset for atomic system:
 *    '<S16>/DetectChange'
 *    '<S17>/DetectChange'
 *    '<S18>/DetectChange'
 *    '<S19>/DetectChange'
 *    '<S119>/DetectChange'
 *    '<S120>/DetectChange'
 *    '<S121>/DetectChange'
 *    '<S122>/DetectChange'
 *    '<S162>/DetectChange'
 *    '<S163>/DetectChange'
 *    ...
 */
void CtAp_GearCal_DetectChange_Reset(ARID_DEF_DetectChange_CtAp_Ge_T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S22>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = ((uint8_T)0U);
}

/*
 * Output and update for atomic system:
 *    '<S16>/DetectChange'
 *    '<S17>/DetectChange'
 *    '<S18>/DetectChange'
 *    '<S19>/DetectChange'
 *    '<S119>/DetectChange'
 *    '<S120>/DetectChange'
 *    '<S121>/DetectChange'
 *    '<S122>/DetectChange'
 *    '<S162>/DetectChange'
 *    '<S163>/DetectChange'
 *    ...
 */
boolean_T CtAp_GearCal_DetectChange(uint8_T rtu_U,
  ARID_DEF_DetectChange_CtAp_Ge_T *CtAp_GearCal__ARID_DEF_arg)
{
  boolean_T rty_Y_0;

  /* RelationalOperator: '<S22>/FixPt Relational Operator' incorporates:
   *  Delay: '<S22>/Delay'
   */
  rty_Y_0 = (rtu_U != CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE);

  /* Update for Delay: '<S22>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = rtu_U;
  return rty_Y_0;
}

/*
 * System initialize for atomic system:
 *    '<S7>/ChangeNotZero1'
 *    '<S7>/ChangeNotZero2'
 *    '<S7>/ChangeNotZero3'
 *    '<S7>/ChangeNotZero4'
 *    '<S15>/ChangeNotZero'
 *    '<S15>/ChangeNotZero1'
 *    '<S15>/ChangeNotZero2'
 *    '<S15>/ChangeNotZero3'
 */
void CtAp_GearCa_ChangeNotZero1_Init(ARID_DEF_ChangeNotZero1_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* SystemInitialize for Atomic SubSystem: '<S16>/DetectChange' */
  CtAp_GearCal_DetectChange_Init
    (&CtAp_GearCal__ARID_DEF_arg->ARID_DEF_DetectChange);

  /* End of SystemInitialize for SubSystem: '<S16>/DetectChange' */
}

/*
 * System reset for atomic system:
 *    '<S7>/ChangeNotZero1'
 *    '<S7>/ChangeNotZero2'
 *    '<S7>/ChangeNotZero3'
 *    '<S7>/ChangeNotZero4'
 *    '<S15>/ChangeNotZero'
 *    '<S15>/ChangeNotZero1'
 *    '<S15>/ChangeNotZero2'
 *    '<S15>/ChangeNotZero3'
 */
void CtAp_GearC_ChangeNotZero1_Reset(ARID_DEF_ChangeNotZero1_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* SystemReset for Atomic SubSystem: '<S16>/DetectChange' */
  CtAp_GearCal_DetectChange_Reset
    (&CtAp_GearCal__ARID_DEF_arg->ARID_DEF_DetectChange);

  /* End of SystemReset for SubSystem: '<S16>/DetectChange' */
}

/*
 * Output and update for atomic system:
 *    '<S7>/ChangeNotZero1'
 *    '<S7>/ChangeNotZero2'
 *    '<S7>/ChangeNotZero3'
 *    '<S7>/ChangeNotZero4'
 *    '<S15>/ChangeNotZero'
 *    '<S15>/ChangeNotZero1'
 *    '<S15>/ChangeNotZero2'
 *    '<S15>/ChangeNotZero3'
 */
boolean_T CtAp_GearCal_ChangeNotZero1(uint8_T rtu_In,
  ARID_DEF_ChangeNotZero1_CtAp__T *CtAp_GearCal__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_FixPtRelationalOperato_bznq;
  boolean_T rty_Out_0;

  /* Outputs for Atomic SubSystem: '<S16>/DetectChange' */
  rtb_FixPtRelationalOperato_bznq = CtAp_GearCal_DetectChange(rtu_In,
    &CtAp_GearCal__ARID_DEF_arg->ARID_DEF_DetectChange);

  /* End of Outputs for SubSystem: '<S16>/DetectChange' */

  /* Logic: '<S16>/LogicalOperator' incorporates:
   *  Constant: '<S21>/Constant'
   *  RelationalOperator: '<S21>/Compare'
   */
  rty_Out_0 = (rtb_FixPtRelationalOperato_bznq && ((real_T)rtu_In != 0.0));
  return rty_Out_0;
}

/*
 * System initialize for atomic system:
 *    '<S8>/DetectIncrease1'
 *    '<S8>/DetectIncrease2'
 *    '<S15>/DetectIncrease'
 *    '<S15>/DetectIncrease1'
 *    '<S15>/DetectIncrease2'
 */
void CtAp_GearCa_DetectIncrease_Init(ARID_DEF_DetectIncrease_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S33>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = false;
}

/*
 * System reset for atomic system:
 *    '<S8>/DetectIncrease1'
 *    '<S8>/DetectIncrease2'
 *    '<S15>/DetectIncrease'
 *    '<S15>/DetectIncrease1'
 *    '<S15>/DetectIncrease2'
 */
void CtAp_GearC_DetectIncrease_Reset(ARID_DEF_DetectIncrease_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S33>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = false;
}

/*
 * Output and update for atomic system:
 *    '<S8>/DetectIncrease1'
 *    '<S8>/DetectIncrease2'
 *    '<S15>/DetectIncrease'
 *    '<S15>/DetectIncrease1'
 *    '<S15>/DetectIncrease2'
 */
boolean_T CtAp_GearCal_DetectIncrease(boolean_T rtu_U,
  ARID_DEF_DetectIncrease_CtAp__T *CtAp_GearCal__ARID_DEF_arg)
{
  boolean_T rty_Y_0;

  /* RelationalOperator: '<S33>/FixPt Relational Operator' incorporates:
   *  Delay: '<S33>/Delay'
   */
  rty_Y_0 = ((int32_T)(rtu_U ? 1 : 0) > (int32_T)
             (CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE ? 1 : 0));

  /* Update for Delay: '<S33>/Delay' */
  CtAp_GearCal__ARID_DEF_arg->Delay_DSTATE = rtu_U;
  return rty_Y_0;
}

/*
 * Output and update for atomic system:
 *    '<S14>/ADASCfm'
 *    '<S14>/IVICfm'
 */
boolean_T CtAp_GearCal_ADASCfm(uint8_T rtu_In)
{
  /* Logic: '<S131>/LogicalOperator' incorporates:
   *  Constant: '<S144>/Constant'
   *  Constant: '<S145>/Constant'
   *  Constant: '<S146>/Constant'
   *  Constant: '<S147>/Constant'
   *  RelationalOperator: '<S144>/Compare'
   *  RelationalOperator: '<S145>/Compare'
   *  RelationalOperator: '<S146>/Compare'
   *  RelationalOperator: '<S147>/Compare'
   */
  return (rtu_In == ((uint8_T)GearCal_GearP)) || (rtu_In == ((uint8_T)
    GearCal_GearN)) || (rtu_In == ((uint8_T)GearCal_GearR)) || (rtu_In ==
    ((uint8_T)GearCal_GearD));
}

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_GearCal_START_SEC_CODE
#include "CtAp_GearCal_MemMap.h"

void R_GearCal_Cyclic_20ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_TmpSignalConversionAtR_lpz0;
  uint8_T rtb_TmpSignalConversionAtR_biia;
  uint8_T rtb_TmpSignalConversionAtR_kvav;
  uint8_T rtb_Switch_kkwy;
  uint8_T rtb_Switch3_orst;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator4;
  boolean_T rtb_FixPtRelationalOperato_budn;
  boolean_T rtb_LogicalOperator_ip2f;
  boolean_T rtb_LogicalOperator_fevx;
  boolean_T rtb_FixPtRelationalOperato_crjc;
  boolean_T rtb_FixPtRelationalOperato_kobn;
  boolean_T rtb_LogicalOperator37;
  boolean_T rtb_LogicalOperator9_jijx;
  boolean_T rtb_FixPtRelationalOperato_hekw;
  boolean_T rtb_LogicalOperator_j4oo;
  boolean_T rtb_LogicalOperator_fnbh;
  boolean_T rtb_LogicalOperator_nr1d;
  boolean_T rtb_FixPtRelationalOperato_hcs0;
  boolean_T rtb_FixPtRelationalOperato_ptyq;
  boolean_T rtb_LogicalOperator_pfis;
  boolean_T rtb_LogicalOperator_orbu;
  boolean_T rtb_LogicalOperator_metj;
  boolean_T rtb_FixPtRelationalOperato_giam;
  dt_ComM_IBSTqE2ETimeoutInfo tmpRead_7;
  dt_ComM_IVI01CRCInfo tmpRead_1;
  dt_ComM_IVI01E2ETimeoutInfo tmpRead_2;
  dt_ComM_PRNDCRCInfo rtb_TmpSignalConversionAtR_k4u1;
  dt_ComM_PRNDE2ETimeoutInfo rtb_TmpSignalConversionAtRTE_R_;
  real32_T rtb_TmpSignalConversionAtR_o1nm;
  real32_T tmpRead;
  uint8_T rtb_Switch_bqjc;
  uint8_T rtb_TmpSignalConversionAtR_acd3;
  uint8_T rtb_TmpSignalConversionAtR_ccpq;
  uint8_T rtb_TmpSignalConversionAtR_dbge;
  uint8_T rtb_TmpSignalConversionAtR_fmeh;
  uint8_T rtb_TmpSignalConversionAtR_gnv2;
  uint8_T rtb_TmpSignalConversionAtR_k55r;
  uint8_T rtb_TmpSignalConversionAtR_kc02;
  uint8_T rtb_TmpSignalConversionAtR_kued;
  uint8_T rtb_TmpSignalConversionAtR_m31l;
  uint8_T rtb_TmpSignalConversionAtR_orpr;
  uint8_T tmpRead_0;
  boolean_T rtb_Compare_ildv;
  boolean_T rtb_Compare_k2lg;
  boolean_T rtb_FixPtRelationalOperato_h0x1;
  boolean_T rtb_GearCal_ChrgInPlug_Flg;
  boolean_T rtb_LogicalOperator5_c0cg;
  boolean_T rtb_LogicalOperator_argh;
  boolean_T rtb_TmpSignalConversionAtR_jgqc;
  boolean_T rtb_TmpSignalConversionAtR_lqi4;
  boolean_T rtb_TmpSignalConversionAtR_negd;
  boolean_T rtb_TmpSignalConversionAtR_owp5;
  boolean_T rtb_TmpSignalConversionAtR_pgwn;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;
  boolean_T tmpRead_6;

  /* SignalConversion generated from: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (&rtb_TmpSignalConversionAtR_m31l);

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_acd3);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum
    (&rtb_TmpSignalConversionAtR_dbge);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod'
   */
  (void)Rte_Read_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod
    (&rtb_TmpSignalConversionAtR_kued);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod'
   */
  (void)Rte_Read_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod
    (&rtb_TmpSignalConversionAtR_fmeh);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod'
   */
  (void)Rte_Read_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod
    (&rtb_TmpSignalConversionAtR_gnv2);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum
    (&rtb_TmpSignalConversionAtR_orpr);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg
    (&rtb_TmpSignalConversionAtR_jgqc);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum
    (&rtb_TmpSignalConversionAtR_kc02);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg
    (&rtb_TmpSignalConversionAtR_lqi4);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum
    (&rtb_TmpSignalConversionAtR_lpz0);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum
    (&rtb_TmpSignalConversionAtR_biia);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_owp5);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
    (&rtb_TmpSignalConversionAtR_k4u1);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus'
   */
  (void)Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_TmpSignalConversionAtR_kvav);

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl
    (&rtb_TmpSignalConversionAtR_pgwn);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_k55r);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum'
   */
  (void)Rte_Read_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum
    (&rtb_TmpSignalConversionAtR_ccpq);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
    (&rtb_TmpSignalConversionAtR_o1nm);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
    (&rtb_TmpSignalConversionAtR_negd);

  /* Outputs for Atomic SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */
  /* Logic: '<S2>/LogicalOperator' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  rtb_GearCal_ChrgInPlug_Flg = ((rtb_TmpSignalConversionAtR_acd3 != ((uint8_T)
    GearCal_Init)) && (rtb_TmpSignalConversionAtR_acd3 != ((uint8_T)GearCal_Off)));

  /* End of Outputs for SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */

  /* Inport: '<Root>/RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish' */
  (void)Rte_Read_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish
    (&tmpRead_5);

  /* Outputs for Atomic SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */
  /* Outputs for Enabled SubSystem: '<S2>/GearMgmt_ManSftGear' incorporates:
   *  EnablePort: '<S6>/Enable'
   *
   * Block requirements for '<S6>/Enable':
   *  1. VCU_SW_Requirements_Specification.slreqx:76167
   */
  if (tmpRead_5) {
    uint8_T rtb_Switch7;
    uint8_T rtb_Switch8;
    boolean_T GearMgmt_BrkNotPress_Flg_tmp;
    boolean_T rtb_Compare_dn2t;
    boolean_T rtb_Compare_g1ml;
    boolean_T rtb_Compare_hy0g;
    boolean_T rtb_Compare_jnb5;
    boolean_T rtb_Compare_l0lt;
    boolean_T rtb_Compare_mctn;
    boolean_T rtb_Compare_pfou;
    boolean_T rtb_FixPtRelationalOperato_jyan;
    boolean_T rtb_FixPtRelationalOperato_nw5m;
    boolean_T rtb_LogicalOperator10_adpu;
    boolean_T rtb_LogicalOperator11_mli5;
    boolean_T rtb_LogicalOperator12_bzem;
    boolean_T rtb_LogicalOperator1_d3qc;
    boolean_T rtb_LogicalOperator2_jugb;
    boolean_T rtb_LogicalOperator31;
    boolean_T rtb_LogicalOperator3_atad;
    boolean_T rtb_LogicalOperator4_kuol;
    boolean_T rtb_LogicalOperator5_m1uk;
    boolean_T rtb_LogicalOperator6_nzui;
    boolean_T rtb_LogicalOperator7_dm3p;
    boolean_T rtb_LogicalOperator8_mcgz;
    boolean_T rtb_LogicalOperator9_e4sv;
    boolean_T rtb_LogicalOperator_a3jk;
    boolean_T rtb_Switch1_mgjq;
    if (!CtAp_GearCal_ARID_DEF.GearMgmt_ManSftGear_MODE) {
      /* InitializeConditions for UnitDelay: '<S72>/Delay Input1'
       *
       * Block description for '<S72>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE = ((uint8_T)0U);

      /* InitializeConditions for UnitDelay: '<S73>/Delay Input1'
       *
       * Block description for '<S73>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hmqb = ((uint8_T)0U);

      /* InitializeConditions for UnitDelay: '<S11>/OneDelay' */
      CtAp_GearCal_ARID_DEF.OneDelay_DSTATE = ((uint8_T)0U);

      /* InitializeConditions for UnitDelay: '<S71>/Delay Input1'
       *
       * Block description for '<S71>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_gfsw = ((uint8_T)0U);

      /* SystemReset for Atomic SubSystem: '<S6>/AutoPTrig'
       *
       * Block requirements for '<S6>/AutoPTrig':
       *  1. VCU_SW_Requirements_Specification.slreqx:76168
       *  2. VCU_SW_Requirements_Specification.slreqx:76169
       */
      /* InitializeConditions for Delay: '<S9>/Delay' */
      CtAp_GearCal_ARID_DEF.Delay_DSTATE_hd5t = false;

      /* End of SystemReset for SubSystem: '<S6>/AutoPTrig' */

      /* SystemReset for Atomic SubSystem: '<S6>/Gear_TarSys'
       *
       * Block requirements for '<S6>/Gear_TarSys':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       *  2. VCU_SW_Requirements_Specification.slreqx:76175
       *  3. VCU_SW_Requirements_Specification.slreqx:76176
       *  4. VCU_SW_Requirements_Specification.slreqx:76177
       *  5. VCU_SW_Requirements_Specification.slreqx:76178
       *  6. VCU_SW_Requirements_Specification.slreqx:76179
       *  7. VCU_SW_Requirements_Specification.slreqx:76180
       *  8. VCU_SW_Requirements_Specification.slreqx:76181
       *  9. VCU_SW_Requirements_Specification.slreqx:76182
       */
      /* SystemReset for Atomic SubSystem: '<S14>/ADASTargetCfm' */
      /* InitializeConditions for UnitDelay: '<S148>/Delay Input1'
       *
       * Block description for '<S148>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_omis = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S14>/ADASTargetCfm' */

      /* SystemReset for Atomic SubSystem: '<S14>/IVITargetCfm' */
      /* InitializeConditions for UnitDelay: '<S153>/Delay Input1'
       *
       * Block description for '<S153>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_f0r3 = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S14>/IVITargetCfm' */

      /* SystemReset for Atomic SubSystem: '<S14>/PButtonTargetCfm' */
      /* InitializeConditions for UnitDelay: '<S156>/Delay Input1'
       *
       * Block description for '<S156>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_li0g = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S14>/PButtonTargetCfm' */

      /* SystemReset for Atomic SubSystem: '<S14>/RNDButtonTargetCfm' */
      /* InitializeConditions for UnitDelay: '<S157>/Delay Input1'
       *
       * Block description for '<S157>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_o1pd = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S14>/RNDButtonTargetCfm' */

      /* SystemReset for Atomic SubSystem: '<S14>/Subsystem6' */
      /* InitializeConditions for UnitDelay: '<S161>/Delay Input1'
       *
       * Block description for '<S161>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_dnch = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S14>/Subsystem6' */
      /* End of SystemReset for SubSystem: '<S6>/Gear_TarSys' */

      /* SystemReset for Atomic SubSystem: '<S6>/GearCal_SWCdn_Sys' */
      /* SystemReset for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
       *
       * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
       *  1. VCU_SW_Requirements_Specification.slreqx:76183
       *  2. VCU_SW_Requirements_Specification.slreqx:76184
       *  3. VCU_SW_Requirements_Specification.slreqx:76185
       *  4. VCU_SW_Requirements_Specification.slreqx:76186
       *  5. VCU_SW_Requirements_Specification.slreqx:76187
       *  6. VCU_SW_Requirements_Specification.slreqx:76188
       *  7. VCU_SW_Requirements_Specification.slreqx:76189
       *  8. VCU_SW_Requirements_Specification.slreqx:76190
       *  9. VCU_SW_Requirements_Specification.slreqx:76191
       *  10. VCU_SW_Requirements_Specification.slreqx:76192
       *  11. VCU_SW_Requirements_Specification.slreqx:76193
       *  12. VCU_SW_Requirements_Specification.slreqx:76194
       */
      /* InitializeConditions for UnitDelay: '<S77>/Unit Delay' */
      CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */

      /* SystemReset for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys'
       *
       * Block requirements for '<S12>/GearMgmt_ManunlGearVaildSys':
       *  1. VCU_SW_Requirements_Specification.slreqx:76195
       *  2. VCU_SW_Requirements_Specification.slreqx:76196
       *  3. VCU_SW_Requirements_Specification.slreqx:76197
       *  4. VCU_SW_Requirements_Specification.slreqx:76198
       *  5. VCU_SW_Requirements_Specification.slreqx:76199
       *  6. VCU_SW_Requirements_Specification.slreqx:76200
       *  7. VCU_SW_Requirements_Specification.slreqx:76201
       *  8. VCU_SW_Requirements_Specification.slreqx:76202
       *  9. VCU_SW_Requirements_Specification.slreqx:76203
       *  10. VCU_SW_Requirements_Specification.slreqx:76204
       *  11. VCU_SW_Requirements_Specification.slreqx:76205
       *  12. VCU_SW_Requirements_Specification.slreqx:76206
       *  13. VCU_SW_Requirements_Specification.slreqx:76207
       */
      /* InitializeConditions for UnitDelay: '<S86>/Delay Input1'
       *
       * Block description for '<S86>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hy5a = ((uint8_T)0U);

      /* InitializeConditions for UnitDelay: '<S87>/Delay Input1'
       *
       * Block description for '<S87>/Delay Input1':
       *
       *  Store in Global RAM
       */
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_krvn = ((uint8_T)0U);

      /* End of SystemReset for SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys' */
      /* End of SystemReset for SubSystem: '<S6>/GearCal_SWCdn_Sys' */

      /* SystemReset for Chart: '<S11>/ATOM_Chart'
       *
       * Block requirements for '<S11>/ATOM_Chart':
       *  1. VCU_SW_Requirements_Specification.slreqx:76224
       *  2. VCU_SW_Requirements_Specification.slreqx:76225
       */
      CtAp_GearCal_ARID_DEF.GearCal_InvldGearSelCnt = 0U;

      /* Chart: '<S11>/ATOM_Chart'
       *
       * Block requirements for '<S11>/ATOM_Chart':
       *  1. VCU_SW_Requirements_Specification.slreqx:76224
       *  2. VCU_SW_Requirements_Specification.slreqx:76225
       */
      CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal = CtAp_GearCal_IN_Init;
      CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum = GearCal_False ?
        ((uint8_T)1) : ((uint8_T)0);

      /* SystemReset for Atomic SubSystem: '<S8>/DetectIncrease2' */
      CtAp_GearC_DetectIncrease_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2_cxar);

      /* End of SystemReset for SubSystem: '<S8>/DetectIncrease2' */

      /* SystemReset for Atomic SubSystem: '<S8>/DetectIncrease1' */
      CtAp_GearC_DetectIncrease_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1_bhxx);

      /* End of SystemReset for SubSystem: '<S8>/DetectIncrease1' */

      /* SystemReset for Atomic SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger'
       *
       * Block requirements for '<S6>/UnCfmdActGearCfm_EPBTrigger':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       *  3. VCU_SW_Requirements_Specification.slreqx:76173
       *  4. VCU_SW_Requirements_Specification.slreqx:76179
       *  5. VCU_SW_Requirements_Specification.slreqx:76180
       *  6. VCU_SW_Requirements_Specification.slreqx:76181
       *  7. VCU_SW_Requirements_Specification.slreqx:76183
       *  8. VCU_SW_Requirements_Specification.slreqx:76184
       *  9. VCU_SW_Requirements_Specification.slreqx:76185
       *  10. VCU_SW_Requirements_Specification.slreqx:76186
       *  11. VCU_SW_Requirements_Specification.slreqx:76187
       *  12. VCU_SW_Requirements_Specification.slreqx:76188
       *  13. VCU_SW_Requirements_Specification.slreqx:76189
       *  14. VCU_SW_Requirements_Specification.slreqx:76190
       *  15. VCU_SW_Requirements_Specification.slreqx:76191
       *  16. VCU_SW_Requirements_Specification.slreqx:76192
       *  17. VCU_SW_Requirements_Specification.slreqx:76193
       *  18. VCU_SW_Requirements_Specification.slreqx:76194
       */
      /* SystemReset for Atomic SubSystem: '<S15>/ChangeNotZero' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero);

      /* End of SystemReset for SubSystem: '<S15>/ChangeNotZero' */

      /* SystemReset for Atomic SubSystem: '<S15>/DetectIncrease1' */
      CtAp_GearC_DetectIncrease_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1);

      /* End of SystemReset for SubSystem: '<S15>/DetectIncrease1' */

      /* SystemReset for Atomic SubSystem: '<S15>/ChangeNotZero1' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1);

      /* End of SystemReset for SubSystem: '<S15>/ChangeNotZero1' */

      /* SystemReset for Atomic SubSystem: '<S15>/ChangeNotZero2' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2);

      /* End of SystemReset for SubSystem: '<S15>/ChangeNotZero2' */

      /* SystemReset for Atomic SubSystem: '<S15>/ChangeNotZero3' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3);

      /* End of SystemReset for SubSystem: '<S15>/ChangeNotZero3' */

      /* SystemReset for Atomic SubSystem: '<S15>/DetectIncrease2' */
      CtAp_GearC_DetectIncrease_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2);

      /* End of SystemReset for SubSystem: '<S15>/DetectIncrease2' */

      /* SystemReset for Atomic SubSystem: '<S15>/DetectIncrease' */
      CtAp_GearC_DetectIncrease_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease);

      /* End of SystemReset for SubSystem: '<S15>/DetectIncrease' */
      /* End of SystemReset for SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger' */

      /* SystemReset for Atomic SubSystem: '<S6>/ADASVld'
       *
       * Block requirements for '<S6>/ADASVld':
       *  1. VCU_SW_Requirements_Specification.slreqx:76228
       *  2. VCU_SW_Requirements_Specification.slreqx:76170
       *  3. VCU_SW_Requirements_Specification.slreqx:76171
       *  4. VCU_SW_Requirements_Specification.slreqx:76173
       *  5. VCU_SW_Requirements_Specification.slreqx:76174
       *  6. VCU_SW_Requirements_Specification.slreqx:76175
       *  7. VCU_SW_Requirements_Specification.slreqx:76176
       *  8. VCU_SW_Requirements_Specification.slreqx:76179
       *  9. VCU_SW_Requirements_Specification.slreqx:76180
       *  10. VCU_SW_Requirements_Specification.slreqx:76181
       */
      /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
      CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE_hdye = false;

      /* SystemReset for Atomic SubSystem: '<S7>/ChangeNotZero1' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1_fqdq);

      /* End of SystemReset for SubSystem: '<S7>/ChangeNotZero1' */

      /* SystemReset for Atomic SubSystem: '<S7>/ChangeNotZero3' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3_pbm3);

      /* End of SystemReset for SubSystem: '<S7>/ChangeNotZero3' */

      /* SystemReset for Atomic SubSystem: '<S7>/ChangeNotZero2' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2_cv5h);

      /* End of SystemReset for SubSystem: '<S7>/ChangeNotZero2' */

      /* SystemReset for Atomic SubSystem: '<S7>/ChangeNotZero4' */
      CtAp_GearC_ChangeNotZero1_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero4);

      /* End of SystemReset for SubSystem: '<S7>/ChangeNotZero4' */
      /* End of SystemReset for SubSystem: '<S6>/ADASVld' */

      /* SystemReset for Atomic SubSystem: '<S6>/GearCal_TragerGearSWSys'
       *
       * Block requirements for '<S6>/GearCal_TragerGearSWSys':
       *  1. VCU_SW_Requirements_Specification.slreqx:76226
       *  2. VCU_SW_Requirements_Specification.slreqx:76227
       */
      /* InitializeConditions for Delay: '<S13>/Delay' */
      CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)0U);

      /* SystemReset for Atomic SubSystem: '<S13>/ChangeNotZero' */
      /* SystemReset for Atomic SubSystem: '<S119>/DetectChange' */
      CtAp_GearCal_DetectChange_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_kkiq);

      /* End of SystemReset for SubSystem: '<S119>/DetectChange' */
      /* End of SystemReset for SubSystem: '<S13>/ChangeNotZero' */

      /* SystemReset for Atomic SubSystem: '<S13>/ChangeNotZero1' */
      /* SystemReset for Atomic SubSystem: '<S120>/DetectChange' */
      CtAp_GearCal_DetectChange_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_cl54);

      /* End of SystemReset for SubSystem: '<S120>/DetectChange' */
      /* End of SystemReset for SubSystem: '<S13>/ChangeNotZero1' */

      /* SystemReset for Atomic SubSystem: '<S13>/ChangeNotZero2' */
      /* SystemReset for Atomic SubSystem: '<S121>/DetectChange' */
      CtAp_GearCal_DetectChange_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_mbvz);

      /* End of SystemReset for SubSystem: '<S121>/DetectChange' */
      /* End of SystemReset for SubSystem: '<S13>/ChangeNotZero2' */

      /* SystemReset for Atomic SubSystem: '<S13>/ChangeNotZero3' */
      /* SystemReset for Atomic SubSystem: '<S122>/DetectChange' */
      CtAp_GearCal_DetectChange_Reset
        (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange);

      /* End of SystemReset for SubSystem: '<S122>/DetectChange' */
      /* End of SystemReset for SubSystem: '<S13>/ChangeNotZero3' */
      /* End of SystemReset for SubSystem: '<S6>/GearCal_TragerGearSWSys' */
      CtAp_GearCal_ARID_DEF.GearMgmt_ManSftGear_MODE = true;
    }

    /* Inport: '<Root>/RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum' */
    (void)Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
      (&rtb_Switch_bqjc);

    /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg' */
    (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg
      (&rtb_Compare_ildv);

    /* Outputs for Atomic SubSystem: '<S6>/AutoPTrig'
     *
     * Block requirements for '<S6>/AutoPTrig':
     *  1. VCU_SW_Requirements_Specification.slreqx:76168
     *  2. VCU_SW_Requirements_Specification.slreqx:76169
     */
    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Delay: '<S9>/Delay'
     */
    rtb_FixPtRelationalOperato_giam = CtAp_GearCal_ARID_DEF.Delay_DSTATE_hd5t;

    /* Switch: '<S9>/Switch' */
    if (rtb_FixPtRelationalOperato_giam) {
      /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
       *  Constant: '<S9>/Constant'
       */
      rtb_FixPtRelationalOperato_giam = GearCal_True;
    } else {
      /* RelationalOperator: '<S124>/FixPt Relational Operator' */
      rtb_FixPtRelationalOperato_giam = rtb_TmpSignalConversionAtR_pgwn;
    }

    /* End of Switch: '<S9>/Switch' */

    /* Logic: '<S9>/LogicalOperator2' incorporates:
     *  Constant: '<S35>/Constant'
     *  Logic: '<S9>/LogicalOperator'
     *  Logic: '<S9>/LogicalOperator1'
     *  Logic: '<S9>/LogicalOperator3'
     *  Logic: '<S9>/LogicalOperator4'
     *  RelationalOperator: '<S35>/Compare'
     *
     * Block requirements for '<S9>/LogicalOperator2':
     *  1. VCU_SW_Requirements_Specification.slreqx:76168
     *  2. VCU_SW_Requirements_Specification.slreqx:76169
     */
    GearCal_AutoPEPBPrkWait_Flg = (rtb_FixPtRelationalOperato_giam &&
      ((rtb_TmpSignalConversionAtR_negd && rtb_GearCal_ChrgInPlug_Flg) ||
       ((rtb_Switch_bqjc == ((uint8_T)GearCal_PEPSOFF)) &&
        !rtb_TmpSignalConversionAtR_owp5)));

    /* Update for Delay: '<S9>/Delay' */
    CtAp_GearCal_ARID_DEF.Delay_DSTATE_hd5t = GearCal_AutoPEPBPrkWait_Flg;

    /* End of Outputs for SubSystem: '<S6>/AutoPTrig' */

    /* Outputs for Atomic SubSystem: '<S6>/Gear_TarSys'
     *
     * Block requirements for '<S6>/Gear_TarSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76174
     *  2. VCU_SW_Requirements_Specification.slreqx:76175
     *  3. VCU_SW_Requirements_Specification.slreqx:76176
     *  4. VCU_SW_Requirements_Specification.slreqx:76177
     *  5. VCU_SW_Requirements_Specification.slreqx:76178
     *  6. VCU_SW_Requirements_Specification.slreqx:76179
     *  7. VCU_SW_Requirements_Specification.slreqx:76180
     *  8. VCU_SW_Requirements_Specification.slreqx:76181
     *  9. VCU_SW_Requirements_Specification.slreqx:76182
     */
    /* Outputs for Atomic SubSystem: '<S14>/ADASCfm' */
    rtb_LogicalOperator_pfis = CtAp_GearCal_ADASCfm
      (rtb_TmpSignalConversionAtR_lpz0);

    /* End of Outputs for SubSystem: '<S14>/ADASCfm' */

    /* Logic: '<S14>/LogicalOperator1' incorporates:
     *  Logic: '<S8>/LogicalOperator5'
     */
    tmpRead_5 = !GearCal_AutoPEPBPrkWait_Flg;

    /* Logic: '<S14>/LogicalOperator' incorporates:
     *  Logic: '<S14>/LogicalOperator1'
     */
    rtb_LogicalOperator_a3jk = (rtb_TmpSignalConversionAtR_pgwn && tmpRead_5);

    /* Logic: '<S14>/LogicalOperator9' incorporates:
     *  Logic: '<S14>/LogicalOperator12'
     *  Logic: '<S14>/LogicalOperator2'
     *  Switch: '<S14>/Switch'
     *
     * Block requirements for '<S14>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:76174
     */
    rtb_FixPtRelationalOperato_nw5m = (!rtb_Compare_ildv &&
      rtb_LogicalOperator_a3jk);

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S133>/Constant'
     *  Constant: '<S134>/Constant'
     *  Constant: '<S158>/Constant'
     *  Constant: '<S159>/Constant'
     *  Constant: '<S160>/Constant'
     *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
     *  Logic: '<S142>/LogicalOperator'
     *  Logic: '<S14>/LogicalOperator10'
     *  Logic: '<S14>/LogicalOperator11'
     *  Logic: '<S14>/LogicalOperator12'
     *  Logic: '<S14>/LogicalOperator5'
     *  Logic: '<S14>/LogicalOperator8'
     *  Logic: '<S14>/LogicalOperator9'
     *  RelationalOperator: '<S133>/Compare'
     *  RelationalOperator: '<S134>/Compare'
     *  RelationalOperator: '<S158>/Compare'
     *  RelationalOperator: '<S159>/Compare'
     *  RelationalOperator: '<S160>/Compare'
     *  Switch: '<S14>/Switch1'
     *
     * Block requirements for '<S14>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:76174
     *
     * Block requirements for '<S14>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:76175
     */
    if (rtb_FixPtRelationalOperato_nw5m && !rtb_TmpSignalConversionAtR_jgqc &&
        ((rtb_TmpSignalConversionAtR_orpr == ((uint8_T)GearCal_Pressed)) ||
         (rtb_TmpSignalConversionAtR_orpr == ((uint8_T)GearCal_Held)))) {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/Constant16'
       *
       * Block requirements for '<S14>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       */
      rtb_Switch_bqjc = ((uint8_T)GearCal_PBtn);

      /* Outputs for Atomic SubSystem: '<S14>/RNDCfm' */
    } else if (rtb_FixPtRelationalOperato_nw5m &&
               (!rtb_TmpSignalConversionAtR_lqi4 &&
                ((rtb_TmpSignalConversionAtR_kc02 == ((uint8_T)GearCal_RNDR)) ||
                 (rtb_TmpSignalConversionAtR_kc02 == ((uint8_T)GearCal_RNDN)) ||
                 (rtb_TmpSignalConversionAtR_kc02 == ((uint8_T)GearCal_RNDD)))))
    {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/Constant17'
       *  Switch: '<S14>/Switch1'
       *
       * Block requirements for '<S14>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       *
       * Block requirements for '<S14>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:76175
       */
      rtb_Switch_bqjc = ((uint8_T)GearCal_RNDBtn);
    } else {
      (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
        (&rtb_LogicalOperator_argh);

      /* Outputs for Atomic SubSystem: '<S14>/IVICfm' */
      /* Switch: '<S14>/Switch1' incorporates:
       *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg'
       *
       * Block requirements for '<S14>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:76175
       */
      rtb_LogicalOperator_fevx = CtAp_GearCal_ADASCfm
        (rtb_TmpSignalConversionAtR_biia);

      /* End of Outputs for SubSystem: '<S14>/IVICfm' */

      /* Switch: '<S14>/Switch2' incorporates:
       *  Logic: '<S14>/LogicalOperator13'
       *  Logic: '<S14>/LogicalOperator17'
       *  Switch: '<S14>/Switch1'
       *
       * Block requirements for '<S14>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76176
       *
       * Block requirements for '<S14>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:76175
       */
      if (rtb_LogicalOperator_a3jk && !rtb_LogicalOperator_argh &&
          rtb_LogicalOperator_fevx) {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S14>/Constant18'
         *  Switch: '<S14>/Switch1'
         *
         * Block requirements for '<S14>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76174
         *
         * Block requirements for '<S14>/Switch1':
         *  1. VCU_SW_Requirements_Specification.slreqx:76175
         */
        rtb_Switch_bqjc = ((uint8_T)GearCal_IVIBtn);
      } else {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S14>/Constant1'
         *  Switch: '<S14>/Switch1'
         *
         * Block requirements for '<S14>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76174
         *
         * Block requirements for '<S14>/Switch1':
         *  1. VCU_SW_Requirements_Specification.slreqx:76175
         */
        rtb_Switch_bqjc = ((uint8_T)GearCal_GearDefault);
      }

      /* End of Switch: '<S14>/Switch2' */

      /* End of Outputs for SubSystem: '<S14>/RNDCfm' */
    }

    /* End of Outputs for SubSystem: '<S6>/Gear_TarSys' */

    /* Inport: '<Root>/RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus' */
    (void)
      Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
      (&tmpRead_7);

    /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg' */
    (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
      (&rtb_FixPtRelationalOperato_h0x1);

    /* Outputs for Atomic SubSystem: '<S6>/Gear_TarSys'
     *
     * Block requirements for '<S6>/Gear_TarSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76174
     *  2. VCU_SW_Requirements_Specification.slreqx:76175
     *  3. VCU_SW_Requirements_Specification.slreqx:76176
     *  4. VCU_SW_Requirements_Specification.slreqx:76177
     *  5. VCU_SW_Requirements_Specification.slreqx:76178
     *  6. VCU_SW_Requirements_Specification.slreqx:76179
     *  7. VCU_SW_Requirements_Specification.slreqx:76180
     *  8. VCU_SW_Requirements_Specification.slreqx:76181
     *  9. VCU_SW_Requirements_Specification.slreqx:76182
     */
    /* DataTypeConversion: '<S14>/DataTypeConversion' */
    GearCal_ManualGearTarTrig_Enum = (rtb_Switch_bqjc != 0U);

    /* Logic: '<S162>/LogicalOperator' incorporates:
     *  Constant: '<S137>/Constant'
     *  RelationalOperator: '<S137>/Compare'
     */
    rtb_LogicalOperator_metj = ((GearCal_ManualGearTarTrig_Enum ? ((uint8_T)1) :
      ((uint8_T)0)) == ((uint8_T)GearCal_GearDefault));

    /* Logic: '<S163>/LogicalOperator' incorporates:
     *  Logic: '<S14>/LogicalOperator3'
     */
    rtb_LogicalOperator_orbu = !tmpRead_7.ComM_ErrResIBSTqE2ETimeoutInfo;

    /* Logic: '<S14>/LogicalOperator23' incorporates:
     *  Constant: '<S135>/Constant'
     *  Constant: '<S136>/Constant'
     *  Logic: '<S14>/LogicalOperator18'
     *  Logic: '<S14>/LogicalOperator22'
     *  Logic: '<S14>/LogicalOperator4'
     *  RelationalOperator: '<S135>/Compare'
     *  RelationalOperator: '<S136>/Compare'
     */
    GearCalTest1 = (rtb_TmpSignalConversionAtR_negd && rtb_LogicalOperator_metj &&
                    rtb_LogicalOperator_a3jk &&
                    (!rtb_FixPtRelationalOperato_h0x1 &&
                     rtb_LogicalOperator_orbu) && rtb_LogicalOperator_pfis &&
                    ((rtb_TmpSignalConversionAtR_k55r == ((uint8_T)
      GearCal_DrvReady)) || (rtb_TmpSignalConversionAtR_k55r == ((uint8_T)
      GearCal_HvReady))));

    /* Outputs for Atomic SubSystem: '<S14>/ADASTargetCfm' */
    /* RelationalOperator: '<S148>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S148>/Delay Input1'
     *
     * Block description for '<S148>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperato_h0x1 = (rtb_TmpSignalConversionAtR_lpz0 !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_omis);

    /* Update for UnitDelay: '<S148>/Delay Input1'
     *
     * Block description for '<S148>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_omis =
      rtb_TmpSignalConversionAtR_lpz0;

    /* End of Outputs for SubSystem: '<S14>/ADASTargetCfm' */

    /* Switch: '<S14>/Switch3'
     *
     * Block requirements for '<S14>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *  4. VCU_SW_Requirements_Specification.slreqx:76182
     */
    if (GearCalTest1) {
      /* Outputs for Atomic SubSystem: '<S14>/ADASTargetCfm' */
      /* Switch: '<S132>/Switch9' */
      if (rtb_FixPtRelationalOperato_h0x1) {
        /* UnitDelay: '<S87>/Delay Input1'
         *
         * Block description for '<S87>/Delay Input1':
         *
         *  Store in Global RAM
         */
        rtb_TmpSignalConversionAtR_acd3 = rtb_TmpSignalConversionAtR_lpz0;
      } else {
        /* UnitDelay: '<S87>/Delay Input1' incorporates:
         *  Constant: '<S132>/Constant14'
         *
         * Block description for '<S87>/Delay Input1':
         *
         *  Store in Global RAM
         */
        rtb_TmpSignalConversionAtR_acd3 = ((uint8_T)GearCal_GearDefault);
      }

      /* End of Switch: '<S132>/Switch9' */
      /* End of Outputs for SubSystem: '<S14>/ADASTargetCfm' */
    } else {
      /* UnitDelay: '<S87>/Delay Input1' incorporates:
       *  Constant: '<S14>/Constant2'
       *
       * Block description for '<S87>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtb_TmpSignalConversionAtR_acd3 = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S14>/Switch3' */

    /* Switch: '<S14>/Switch5' */
    if (rtb_TmpSignalConversionAtR_acd3 == 0U) {
      /* Switch: '<S14>/Switch5' incorporates:
       *  Constant: '<S14>/Constant4'
       */
      rtb_TmpSignalConversionAtR_acd3 = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S14>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S14>/IVITargetCfm' */
    /* RelationalOperator: '<S153>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S153>/Delay Input1'
     *
     * Block description for '<S153>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperato_h0x1 = (rtb_TmpSignalConversionAtR_biia !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_f0r3);

    /* Update for UnitDelay: '<S153>/Delay Input1'
     *
     * Block description for '<S153>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_f0r3 =
      rtb_TmpSignalConversionAtR_biia;

    /* End of Outputs for SubSystem: '<S14>/IVITargetCfm' */

    /* Outputs for Atomic SubSystem: '<S14>/PButtonTargetCfm' */
    /* Switch: '<S140>/Switch7' incorporates:
     *  RelationalOperator: '<S156>/FixPt Relational Operator'
     *  UnitDelay: '<S156>/Delay Input1'
     *
     * Block description for '<S156>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (rtb_TmpSignalConversionAtR_orpr !=
        CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_li0g) {
      /* Switch: '<S140>/Switch11' incorporates:
       *  Constant: '<S154>/Constant'
       *  Constant: '<S155>/Constant'
       *  Logic: '<S140>/LogicalOperator24'
       *  Logic: '<S140>/LogicalOperator7'
       *  RelationalOperator: '<S154>/Compare'
       *  RelationalOperator: '<S155>/Compare'
       */
      if ((rtb_TmpSignalConversionAtR_negd && (rtb_TmpSignalConversionAtR_orpr ==
            ((uint8_T)GearCal_Held))) || (rtb_TmpSignalConversionAtR_orpr ==
           ((uint8_T)GearCal_Pressed))) {
        /* Switch: '<S140>/Switch7' incorporates:
         *  Constant: '<S140>/Constant21'
         */
        rtb_Switch7 = ((uint8_T)GearCal_GearP);
      } else {
        /* Switch: '<S140>/Switch7' incorporates:
         *  Constant: '<S140>/Constant22'
         */
        rtb_Switch7 = ((uint8_T)GearCal_GearDefault);
      }

      /* End of Switch: '<S140>/Switch11' */
    } else {
      /* Switch: '<S140>/Switch7' incorporates:
       *  Constant: '<S140>/Constant13'
       */
      rtb_Switch7 = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S140>/Switch7' */

    /* Update for UnitDelay: '<S156>/Delay Input1'
     *
     * Block description for '<S156>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_li0g =
      rtb_TmpSignalConversionAtR_orpr;

    /* End of Outputs for SubSystem: '<S14>/PButtonTargetCfm' */

    /* Outputs for Atomic SubSystem: '<S14>/RNDButtonTargetCfm' */
    /* Switch: '<S141>/Switch8' incorporates:
     *  RelationalOperator: '<S157>/FixPt Relational Operator'
     *  UnitDelay: '<S157>/Delay Input1'
     *
     * Block description for '<S157>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (rtb_TmpSignalConversionAtR_kc02 !=
        CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_o1pd) {
      /* MultiPortSwitch: '<S141>/MultiportSwitch' */
      switch (rtb_TmpSignalConversionAtR_kc02) {
       case 0:
        /* Switch: '<S141>/Switch8' incorporates:
         *  Constant: '<S141>/Constant8'
         *  MultiPortSwitch: '<S141>/MultiportSwitch'
         */
        rtb_Switch8 = ((uint8_T)GearCal_GearDefault);
        break;

       case 1:
        /* Switch: '<S141>/Switch8' incorporates:
         *  Constant: '<S141>/Constant5'
         *  MultiPortSwitch: '<S141>/MultiportSwitch'
         */
        rtb_Switch8 = ((uint8_T)GearCal_GearR);
        break;

       case 2:
        /* Switch: '<S141>/Switch8' incorporates:
         *  Constant: '<S141>/Constant6'
         *  MultiPortSwitch: '<S141>/MultiportSwitch'
         */
        rtb_Switch8 = ((uint8_T)GearCal_GearN);
        break;

       case 3:
        /* Switch: '<S141>/Switch8' incorporates:
         *  Constant: '<S141>/Constant7'
         *  MultiPortSwitch: '<S141>/MultiportSwitch'
         */
        rtb_Switch8 = ((uint8_T)GearCal_GearD);
        break;

       default:
        /* Switch: '<S141>/Switch8' incorporates:
         *  Constant: '<S141>/Constant9'
         *  MultiPortSwitch: '<S141>/MultiportSwitch'
         */
        rtb_Switch8 = ((uint8_T)GearCal_GearDefault);
        break;
      }

      /* End of MultiPortSwitch: '<S141>/MultiportSwitch' */
    } else {
      /* Switch: '<S141>/Switch8' incorporates:
       *  Constant: '<S141>/Constant12'
       */
      rtb_Switch8 = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S141>/Switch8' */

    /* Update for UnitDelay: '<S157>/Delay Input1'
     *
     * Block description for '<S157>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_o1pd =
      rtb_TmpSignalConversionAtR_kc02;

    /* End of Outputs for SubSystem: '<S14>/RNDButtonTargetCfm' */

    /* Outputs for Atomic SubSystem: '<S14>/Subsystem6' */
    /* RelationalOperator: '<S161>/FixPt Relational Operator' incorporates:
     *  Constant: '<S14>/Constant11'
     *  UnitDelay: '<S161>/Delay Input1'
     *
     * Block description for '<S161>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_LogicalOperator_a3jk = (GearCal_CALVAL !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_dnch);

    /* Update for UnitDelay: '<S161>/Delay Input1' incorporates:
     *  Constant: '<S14>/Constant11'
     *
     * Block description for '<S161>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_dnch = GearCal_CALVAL;

    /* End of Outputs for SubSystem: '<S14>/Subsystem6' */

    /* Switch: '<S14>/Switch6' incorporates:
     *  Constant: '<S14>/Constant10'
     *
     * Block requirements for '<S14>/Switch6':
     *  1. VCU_SW_Requirements_Specification.slreqx:76177
     */
    if (GearCal_CAL) {
      /* Outputs for Atomic SubSystem: '<S14>/Subsystem6' */
      /* Switch: '<S143>/Switch' */
      if (rtb_LogicalOperator_a3jk) {
        /* Switch: '<S14>/Switch6' incorporates:
         *  Constant: '<S14>/Constant11'
         *
         * Block requirements for '<S14>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76177
         */
        GearCal_ManualGearTar_Enum = GearCal_CALVAL;
      } else {
        /* Switch: '<S14>/Switch6' incorporates:
         *  Constant: '<S143>/Constant'
         *
         * Block requirements for '<S14>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76177
         */
        GearCal_ManualGearTar_Enum = ((uint8_T)GearCal_GearDefault);
      }

      /* End of Switch: '<S143>/Switch' */
      /* End of Outputs for SubSystem: '<S14>/Subsystem6' */
    } else {
      /* MultiPortSwitch: '<S14>/MultiportSwitch1' */
      switch (rtb_Switch_bqjc) {
       case 0:
        /* MultiPortSwitch: '<S14>/MultiportSwitch1' incorporates:
         *  Constant: '<S14>/Constant19'
         */
        rtb_Switch7 = ((uint8_T)GearCal_GearDefault);
        break;

       case 1:
        break;

       case 2:
        /* MultiPortSwitch: '<S14>/MultiportSwitch1' */
        rtb_Switch7 = rtb_Switch8;
        break;

       case 3:
        /* Outputs for Atomic SubSystem: '<S14>/IVITargetCfm' */
        /* Switch: '<S139>/Switch9' */
        if (rtb_FixPtRelationalOperato_h0x1) {
          /* MultiPortSwitch: '<S14>/MultiportSwitch1' */
          rtb_Switch7 = rtb_TmpSignalConversionAtR_biia;
        } else {
          /* MultiPortSwitch: '<S14>/MultiportSwitch1' incorporates:
           *  Constant: '<S139>/Constant14'
           */
          rtb_Switch7 = ((uint8_T)GearCal_GearDefault);
        }

        /* End of Switch: '<S139>/Switch9' */
        /* End of Outputs for SubSystem: '<S14>/IVITargetCfm' */
        break;

       default:
        /* MultiPortSwitch: '<S14>/MultiportSwitch1' incorporates:
         *  Constant: '<S14>/Constant20'
         */
        rtb_Switch7 = ((uint8_T)GearCal_GearDefault);
        break;
      }

      /* End of MultiPortSwitch: '<S14>/MultiportSwitch1' */

      /* Switch: '<S14>/Switch4'
       *
       * Block requirements for '<S14>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:76178
       */
      if (rtb_Switch7 != 0U) {
        /* Switch: '<S14>/Switch6'
         *
         * Block requirements for '<S14>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76177
         */
        GearCal_ManualGearTar_Enum = rtb_Switch7;
      } else {
        /* Switch: '<S14>/Switch6' incorporates:
         *  Constant: '<S14>/Constant3'
         *
         * Block requirements for '<S14>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76177
         */
        GearCal_ManualGearTar_Enum = ((uint8_T)GearCal_GearDefault);
      }

      /* End of Switch: '<S14>/Switch4' */
    }

    /* End of Switch: '<S14>/Switch6' */
    /* End of Outputs for SubSystem: '<S6>/Gear_TarSys' */

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_ADASGearShiftSys'
     *
     * Block requirements for '<S6>/GearCal_ADASGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *  4. VCU_SW_Requirements_Specification.slreqx:76182
     */
    /* Logic: '<S10>/LogicalOperator14' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S48>/Constant'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     */
    GearCalTest5 = ((rtb_TmpSignalConversionAtR_kued == ((uint8_T)
      GearCal_ADCUDAMod_Active)) || (rtb_TmpSignalConversionAtR_kued ==
      ((uint8_T)GearCal_ADCUDAMod_OverrideLongitudinal)) ||
                    (rtb_TmpSignalConversionAtR_kued == ((uint8_T)
      GearCal_ADCUDAMod_OverrideLateral)));

    /* Switch: '<S10>/Switch7' incorporates:
     *  Constant: '<S10>/CAL'
     *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg'
     *
     * Block requirements for '<S10>/Switch7':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *  4. VCU_SW_Requirements_Specification.slreqx:76182
     */
    if (GearCal_EnableADASChk_CFG) {
      (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg
        (&rtb_Compare_k2lg);

      /* Switch: '<S10>/Switch2' incorporates:
       *  Inport: '<Root>/RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt'
       *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg'
       *  Logic: '<S10>/LogicalOperator19'
       *
       * Block requirements for '<S10>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *  4. VCU_SW_Requirements_Specification.slreqx:76182
       */
      if (!rtb_Compare_k2lg) {
        (void)Rte_Read_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(&tmpRead_0);

        /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
         *  Constant: '<S39>/Constant'
         *  Constant: '<S40>/Constant'
         *  Constant: '<S41>/Constant'
         *  Constant: '<S42>/Constant'
         *  Constant: '<S43>/Constant'
         *  Constant: '<S44>/Constant'
         *  Constant: '<S49>/Constant'
         *  Constant: '<S50>/Constant'
         *  Constant: '<S51>/Constant'
         *  Constant: '<S52>/Constant'
         *  Constant: '<S53>/Constant'
         *  Inport: '<Root>/RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt'
         *  Logic: '<S10>/LogicalOperator20'
         *  Logic: '<S10>/LogicalOperator6'
         *  Logic: '<S10>/LogicalOperator7'
         *  Logic: '<S10>/LogicalOperator8'
         *  RelationalOperator: '<S39>/Compare'
         *  RelationalOperator: '<S40>/Compare'
         *  RelationalOperator: '<S41>/Compare'
         *  RelationalOperator: '<S42>/Compare'
         *  RelationalOperator: '<S43>/Compare'
         *  RelationalOperator: '<S44>/Compare'
         *  RelationalOperator: '<S49>/Compare'
         *  RelationalOperator: '<S50>/Compare'
         *  RelationalOperator: '<S51>/Compare'
         *  RelationalOperator: '<S52>/Compare'
         *  RelationalOperator: '<S53>/Compare'
         *  Switch: '<S10>/Switch2'
         *
         * Block requirements for '<S10>/LogicalOperator20':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *  4. VCU_SW_Requirements_Specification.slreqx:76182
         *
         * Block requirements for '<S10>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *  4. VCU_SW_Requirements_Specification.slreqx:76182
         */
        rtb_FixPtRelationalOperato_giam = ((rtb_TmpSignalConversionAtR_gnv2 ==
          ((uint8_T)GearCal_RemoteParkMod_Moving)) ||
          (rtb_TmpSignalConversionAtR_gnv2 == ((uint8_T)
          GearCal_RemoteParkMod_VoluntarilyExit)) ||
          (rtb_TmpSignalConversionAtR_gnv2 == ((uint8_T)
          GearCal_RemoteParkMod_PassiveExit)) ||
          (rtb_TmpSignalConversionAtR_gnv2 == ((uint8_T)
          GearCal_RemoteParkMod_Failure)) || ((rtb_TmpSignalConversionAtR_fmeh ==
          ((uint8_T)GearCal_ADCUPrkMod_GuidanceActive)) ||
          (rtb_TmpSignalConversionAtR_fmeh == ((uint8_T)
          GearCal_ADCUPrkMod_Failure)) || (rtb_TmpSignalConversionAtR_fmeh ==
          ((uint8_T)GearCal_ADCUPrkMod_Terminated))) || (tmpRead_0 == ((uint8_T)
          GearCal_ADCUAEBSt_Active)) || ((rtb_TmpSignalConversionAtR_dbge ==
          ((uint8_T)GearCal_ADCUACCMod_ActiveState)) ||
          (rtb_TmpSignalConversionAtR_dbge == ((uint8_T)
          GearCal_ADCUACCMod_OverrideState)) || (rtb_TmpSignalConversionAtR_dbge
          == ((uint8_T)GearCal_ADCUACCMod_ShutOffState))) || GearCalTest5);
      } else {
        /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
         *  Constant: '<S10>/Constant2'
         *  Switch: '<S10>/Switch2'
         *
         * Block requirements for '<S10>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *  4. VCU_SW_Requirements_Specification.slreqx:76182
         */
        rtb_FixPtRelationalOperato_giam = false;
      }

      /* End of Switch: '<S10>/Switch2' */
    } else {
      /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
       *  Constant: '<S10>/Constant8'
       */
      rtb_FixPtRelationalOperato_giam = true;
    }

    /* End of Switch: '<S10>/Switch7' */

    /* Logic: '<S10>/LogicalOperator2' incorporates:
     *  Constant: '<S58>/Constant'
     *  Constant: '<S59>/Constant'
     *  Constant: '<S60>/Constant'
     *  RelationalOperator: '<S58>/Compare'
     *  RelationalOperator: '<S59>/Compare'
     *  RelationalOperator: '<S60>/Compare'
     */
    GearCalTest8 = ((rtb_TmpSignalConversionAtR_kvav == ((uint8_T)GearCal_GearN))
                    || (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearR)) || (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearD)));

    /* RelationalOperator: '<S10>/RelationalOperator' */
    GearCalTest6 = (rtb_TmpSignalConversionAtR_kvav !=
                    rtb_TmpSignalConversionAtR_acd3);

    /* Logic: '<S10>/LogicalOperator3' incorporates:
     *  Constant: '<S61>/Constant'
     *  Constant: '<S62>/Constant'
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S61>/Compare'
     *  RelationalOperator: '<S62>/Compare'
     *  RelationalOperator: '<S63>/Compare'
     */
    GearCalTest9 = ((rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)GearCal_GearN))
                    || (rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)
      GearCal_GearR)) || (rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)
      GearCal_GearD)));

    /* Logic: '<S10>/LogicalOperator4' */
    GearCalTest3 = (GearCalTest8 && GearCalTest6 && GearCalTest9 &&
                    rtb_FixPtRelationalOperato_giam);

    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/CAL1'
     */
    if (GearCal_EnableImmoChk_CFG) {
      /* Switch: '<S10>/Switch3' incorporates:
       *  Inport: '<Root>/RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg'
       *  Logic: '<S10>/LogicalOperator24'
       */
      if (!rtb_TmpSignalConversionAtR_owp5) {
        (void)Rte_Read_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg
          (&rtb_LogicalOperator5_c0cg);

        /* Switch: '<S10>/Switch1' incorporates:
         *  Inport: '<Root>/RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg'
         *  Logic: '<S10>/LogicalOperator11'
         *  Switch: '<S10>/Switch3'
         */
        rtb_Switch1_mgjq = !rtb_LogicalOperator5_c0cg;
      } else {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S10>/Constant3'
         *  Switch: '<S10>/Switch3'
         */
        rtb_Switch1_mgjq = false;
      }

      /* End of Switch: '<S10>/Switch3' */
    } else {
      /* Switch: '<S10>/Switch1' incorporates:
       *  Constant: '<S10>/Constant1'
       */
      rtb_Switch1_mgjq = true;
    }

    /* End of Switch: '<S10>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_ADASGearShiftSys' */

    /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
    (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
      (&tmpRead_6);

    /* Inport: '<Root>/RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus' */
    (void)
      Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
      (&tmpRead_2);

    /* Inport: '<Root>/RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus' */
    (void)Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
      (&tmpRead_1);

    /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo' */
    (void)
      Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
      (&tmpRead);

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_ADASGearShiftSys'
     *
     * Block requirements for '<S6>/GearCal_ADASGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *  4. VCU_SW_Requirements_Specification.slreqx:76182
     */
    /* Logic: '<S10>/LogicalOperator1' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S57>/Constant'
     *  Logic: '<S10>/LogicalOperator'
     *  RelationalOperator: '<S36>/Compare'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S47>/Compare'
     *  RelationalOperator: '<S57>/Compare'
     */
    rtb_TmpSignalConversionAtR_owp5 = (((rtb_TmpSignalConversionAtR_acd3 ==
      ((uint8_T)GearCal_GearN)) || (rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)
      GearCal_GearD)) || (rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)
      GearCal_GearR))) && (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearP)) && rtb_FixPtRelationalOperato_giam && rtb_Switch1_mgjq);

    /* Logic: '<S10>/LogicalOperator5' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S54>/Constant'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S56>/Constant'
     *  Logic: '<S10>/LogicalOperator9'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S54>/Compare'
     *  RelationalOperator: '<S55>/Compare'
     *  RelationalOperator: '<S56>/Compare'
     */
    rtb_LogicalOperator5_c0cg = ((rtb_TmpSignalConversionAtR_acd3 == ((uint8_T)
      GearCal_GearP)) && ((rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearN)) || (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearR)) || (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearD))) && rtb_FixPtRelationalOperato_giam);

    /* Switch: '<S10>/Switch' incorporates:
     *  Logic: '<S10>/LogicalOperator10'
     *
     * Block requirements for '<S10>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *  4. VCU_SW_Requirements_Specification.slreqx:76182
     */
    if (rtb_TmpSignalConversionAtR_owp5 || GearCalTest3 ||
        rtb_LogicalOperator5_c0cg) {
      /* Switch: '<S10>/Switch'
       *
       * Block requirements for '<S10>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *  4. VCU_SW_Requirements_Specification.slreqx:76182
       */
      GearCal_ADASGearTar_Enum = rtb_TmpSignalConversionAtR_acd3;
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant'
       *
       * Block requirements for '<S10>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *  4. VCU_SW_Requirements_Specification.slreqx:76182
       */
      GearCal_ADASGearTar_Enum = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S10>/Switch' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_ADASGearShiftSys' */

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_SWCdn_Sys' */
    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
     *
     * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* RelationalOperator: '<S88>/Compare' incorporates:
     *  Constant: '<S88>/Constant'
     */
    rtb_Compare_g1ml = (rtb_TmpSignalConversionAtR_m31l == ((uint8_T)
      GearCal_BrkPress));

    /* RelationalOperator: '<S100>/Compare' incorporates:
     *  Constant: '<S100>/Constant'
     */
    rtb_Compare_l0lt = (rtb_TmpSignalConversionAtR_o1nm <=
                        GearCal_VehStillCfm_CFG);

    /* RelationalOperator: '<S107>/Compare' incorporates:
     *  Constant: '<S107>/Constant'
     */
    rtb_Compare_k2lg = (rtb_TmpSignalConversionAtR_o1nm <=
                        GearCal_AllowDorR2NVehSpdCfm_CFG);

    /* RelationalOperator: '<S117>/Compare' incorporates:
     *  Constant: '<S117>/Constant'
     */
    rtb_FixPtRelationalOperato_h0x1 = (rtb_TmpSignalConversionAtR_o1nm <=
      GearCal_AllowR2DVehSpdCfm_CFG);

    /* RelationalOperator: '<S118>/Compare' incorporates:
     *  Constant: '<S118>/Constant'
     */
    rtb_LogicalOperator_a3jk = (rtb_TmpSignalConversionAtR_o1nm <=
      GearCal_AllowD2RVehSpdCfm_CFG);

    /* Logic: '<S77>/LogicalOperator' incorporates:
     *  Constant: '<S111>/Constant'
     *  Constant: '<S113>/Constant'
     *  RelationalOperator: '<S111>/Compare'
     *  RelationalOperator: '<S113>/Compare'
     */
    rtb_LogicalOperator_argh = ((rtb_TmpSignalConversionAtR_k55r == ((uint8_T)
      GearCal_HvReady)) || (rtb_TmpSignalConversionAtR_k55r == ((uint8_T)
      GearCal_DrvReady)));

    /* RelationalOperator: '<S114>/Compare' incorporates:
     *  Constant: '<S114>/Constant'
     */
    rtb_Compare_ildv = (rtb_TmpSignalConversionAtR_ccpq == ((uint8_T)
      GearCal_BackWard));

    /* RelationalOperator: '<S115>/Compare' incorporates:
     *  Constant: '<S115>/Constant'
     */
    rtb_Compare_mctn = (rtb_TmpSignalConversionAtR_ccpq == ((uint8_T)
      GearCal_ForWard));

    /* RelationalOperator: '<S116>/Compare' incorporates:
     *  Constant: '<S116>/Constant'
     */
    rtb_Compare_pfou = (tmpRead <= GearCal_GearSWAccrCfm_CFG);

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S90>/Compare'
     */
    rtb_FixPtRelationalOperato_giam = (rtb_TmpSignalConversionAtR_kvav ==
      ((uint8_T)GearCal_GearP));

    /* Logic: '<S77>/LogicalOperator1' incorporates:
     *  Constant: '<S91>/Constant'
     *  RelationalOperator: '<S91>/Compare'
     */
    rtb_LogicalOperator1_d3qc = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearN)));

    /* Logic: '<S77>/LogicalOperator2' incorporates:
     *  Constant: '<S92>/Constant'
     *  RelationalOperator: '<S92>/Compare'
     */
    rtb_LogicalOperator2_jugb = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearD)));

    /* Logic: '<S77>/LogicalOperator3' incorporates:
     *  Constant: '<S93>/Constant'
     *  RelationalOperator: '<S93>/Compare'
     */
    rtb_LogicalOperator3_atad = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearR)));

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Constant: '<S94>/Constant'
     *  RelationalOperator: '<S94>/Compare'
     */
    rtb_FixPtRelationalOperato_giam = (rtb_TmpSignalConversionAtR_kvav ==
      ((uint8_T)GearCal_GearN));

    /* Logic: '<S77>/LogicalOperator4' incorporates:
     *  Constant: '<S95>/Constant'
     *  RelationalOperator: '<S95>/Compare'
     */
    rtb_LogicalOperator4_kuol = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearP)));

    /* Logic: '<S77>/LogicalOperator5' incorporates:
     *  Constant: '<S96>/Constant'
     *  RelationalOperator: '<S96>/Compare'
     */
    rtb_LogicalOperator5_m1uk = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearD)));

    /* Logic: '<S77>/LogicalOperator6' incorporates:
     *  Constant: '<S97>/Constant'
     *  RelationalOperator: '<S97>/Compare'
     */
    rtb_LogicalOperator6_nzui = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearR)));

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Constant: '<S98>/Constant'
     *  RelationalOperator: '<S98>/Compare'
     */
    rtb_FixPtRelationalOperato_giam = (rtb_TmpSignalConversionAtR_kvav ==
      ((uint8_T)GearCal_GearD));

    /* Logic: '<S77>/LogicalOperator7' incorporates:
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S99>/Compare'
     */
    rtb_LogicalOperator7_dm3p = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearP)));

    /* Logic: '<S77>/LogicalOperator8' incorporates:
     *  Constant: '<S101>/Constant'
     *  RelationalOperator: '<S101>/Compare'
     */
    rtb_LogicalOperator8_mcgz = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearN)));

    /* Logic: '<S77>/LogicalOperator9' incorporates:
     *  Constant: '<S102>/Constant'
     *  RelationalOperator: '<S102>/Compare'
     */
    rtb_LogicalOperator9_e4sv = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearR)));

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Constant: '<S103>/Constant'
     *  RelationalOperator: '<S103>/Compare'
     */
    rtb_FixPtRelationalOperato_giam = (rtb_TmpSignalConversionAtR_kvav ==
      ((uint8_T)GearCal_GearR));

    /* Logic: '<S77>/LogicalOperator10' incorporates:
     *  Constant: '<S104>/Constant'
     *  RelationalOperator: '<S104>/Compare'
     */
    rtb_LogicalOperator10_adpu = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearP)));

    /* Logic: '<S77>/LogicalOperator11' incorporates:
     *  Constant: '<S105>/Constant'
     *  RelationalOperator: '<S105>/Compare'
     */
    rtb_LogicalOperator11_mli5 = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearN)));

    /* Logic: '<S77>/LogicalOperator12' incorporates:
     *  Constant: '<S106>/Constant'
     *  RelationalOperator: '<S106>/Compare'
     */
    rtb_LogicalOperator12_bzem = (rtb_FixPtRelationalOperato_giam &&
      (GearCal_ManualGearTar_Enum == ((uint8_T)GearCal_GearD)));

    /* RelationalOperator: '<S108>/Compare' incorporates:
     *  Constant: '<S108>/Constant'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_Compare_jnb5 = (CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE == ((uint8_T)
      GearCal_GearN));

    /* RelationalOperator: '<S109>/Compare' incorporates:
     *  Constant: '<S109>/Constant'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_Compare_hy0g = (CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE == ((uint8_T)
      GearCal_GearD));

    /* RelationalOperator: '<S110>/Compare' incorporates:
     *  Constant: '<S110>/Constant'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_Compare_dn2t = (CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE == ((uint8_T)
      GearCal_GearR));

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE = rtb_TmpSignalConversionAtR_kvav;

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearVaildSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76195
     *  2. VCU_SW_Requirements_Specification.slreqx:76196
     *  3. VCU_SW_Requirements_Specification.slreqx:76197
     *  4. VCU_SW_Requirements_Specification.slreqx:76198
     *  5. VCU_SW_Requirements_Specification.slreqx:76199
     *  6. VCU_SW_Requirements_Specification.slreqx:76200
     *  7. VCU_SW_Requirements_Specification.slreqx:76201
     *  8. VCU_SW_Requirements_Specification.slreqx:76202
     *  9. VCU_SW_Requirements_Specification.slreqx:76203
     *  10. VCU_SW_Requirements_Specification.slreqx:76204
     *  11. VCU_SW_Requirements_Specification.slreqx:76205
     *  12. VCU_SW_Requirements_Specification.slreqx:76206
     *  13. VCU_SW_Requirements_Specification.slreqx:76207
     */
    /* RelationalOperator: '<S86>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S86>/Delay Input1'
     *
     * Block description for '<S86>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperato_nw5m = (rtb_TmpSignalConversionAtR_kc02 !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hy5a);

    /* RelationalOperator: '<S87>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S87>/Delay Input1'
     *
     * Block description for '<S87>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperato_jyan = (rtb_TmpSignalConversionAtR_biia !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_krvn);

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Logic: '<S76>/LogicalOperator27'
     */
    rtb_FixPtRelationalOperato_giam = (rtb_TmpSignalConversionAtR_jgqc ||
      rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResPRNDE2ETimeoutInfo ||
      rtb_TmpSignalConversionAtR_k4u1.ComM_ErrResPRNDCRCErrorInfo);

    /* Logic: '<S76>/LogicalOperator29' incorporates:
     *  Constant: '<S82>/Constant'
     *  Constant: '<S83>/Constant'
     *  Logic: '<S76>/LogicalOperator28'
     *  RelationalOperator: '<S82>/Compare'
     *  RelationalOperator: '<S83>/Compare'
     */
    rtb_TmpSignalConversionAtR_jgqc = (rtb_FixPtRelationalOperato_giam &&
      ((rtb_TmpSignalConversionAtR_orpr == ((uint8_T)GearCal_Pressed)) ||
       (rtb_TmpSignalConversionAtR_orpr == ((uint8_T)GearCal_Held))));

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Logic: '<S76>/LogicalOperator30'
     */
    rtb_FixPtRelationalOperato_giam =
      (rtb_TmpSignalConversionAtR_k4u1.ComM_ErrResPRNDCRCErrorInfo ||
       rtb_TmpSignalConversionAtRTE_R_.ComM_ErrResPRNDE2ETimeoutInfo ||
       rtb_TmpSignalConversionAtR_lqi4);

    /* Logic: '<S76>/LogicalOperator31' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S84>/Compare'
     */
    rtb_LogicalOperator31 = (rtb_FixPtRelationalOperato_giam &&
      (rtb_TmpSignalConversionAtR_kc02 != ((uint8_T)GearCal_GearDefault)));

    /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
     *  Logic: '<S76>/LogicalOperator36'
     */
    rtb_FixPtRelationalOperato_giam = (tmpRead_2.ComM_ErrResIVI01E2ETimeoutInfo ||
      tmpRead_1.ComM_ErrResIVI01CRCErrorInfo);

    /* Logic: '<S76>/LogicalOperator37' incorporates:
     *  Constant: '<S85>/Constant'
     *  RelationalOperator: '<S85>/Compare'
     *
     * Block requirements for '<S76>/LogicalOperator37':
     *  1. VCU_SW_Requirements_Specification.slreqx:76203
     */
    rtb_LogicalOperator37 = (rtb_FixPtRelationalOperato_giam &&
      (rtb_TmpSignalConversionAtR_biia != ((uint8_T)GearCal_GearDefault)));

    /* Update for UnitDelay: '<S86>/Delay Input1'
     *
     * Block description for '<S86>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hy5a =
      rtb_TmpSignalConversionAtR_kc02;

    /* Update for UnitDelay: '<S87>/Delay Input1'
     *
     * Block description for '<S87>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_krvn =
      rtb_TmpSignalConversionAtR_biia;

    /* Logic: '<S76>/LogicalOperator' incorporates:
     *  Logic: '<S76>/LogicalOperator56'
     */
    GearMgmt_BrkNotPress_Flg_tmp = (rtb_LogicalOperator1_d3qc ||
      rtb_LogicalOperator2_jugb || rtb_LogicalOperator3_atad);

    /* DataTypeConversion: '<S12>/DataTypeConversion' incorporates:
     *  Logic: '<S76>/LogicalOperator'
     *  Logic: '<S76>/LogicalOperator1'
     *  Logic: '<S76>/LogicalOperator2'
     *  Logic: '<S76>/LogicalOperator58'
     *  Logic: '<S76>/LogicalOperator59'
     *
     * Block requirements for '<S76>/LogicalOperator1':
     *  1. VCU_SW_Requirements_Specification.slreqx:76195
     */
    GearMgmt_BrkNotPress_Flg = ((GearMgmt_BrkNotPress_Flg_tmp ||
      (rtb_LogicalOperator5_m1uk && rtb_Compare_l0lt) || (rtb_Compare_l0lt &&
      rtb_LogicalOperator6_nzui)) && !rtb_Compare_g1ml);

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Logic: '<S76>/LogicalOperator3' incorporates:
     *  Logic: '<S75>/LogicalOperator12'
     *  Logic: '<S75>/LogicalOperator17'
     *  Logic: '<S76>/LogicalOperator12'
     *  Logic: '<S76>/LogicalOperator14'
     *  Logic: '<S76>/LogicalOperator21'
     *  Logic: '<S76>/LogicalOperator47'
     *  Logic: '<S76>/LogicalOperator5'
     *  Switch: '<S75>/Switch3'
     */
    rtb_TmpSignalConversionAtR_lqi4 = !rtb_Compare_l0lt;

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */

    /* DataTypeConversion: '<S12>/DataTypeConversion1' incorporates:
     *  Logic: '<S76>/LogicalOperator10'
     *  Logic: '<S76>/LogicalOperator3'
     *  Logic: '<S76>/LogicalOperator4'
     *  Logic: '<S76>/LogicalOperator6'
     *  Logic: '<S76>/LogicalOperator7'
     *  Logic: '<S76>/LogicalOperator8'
     *  Logic: '<S76>/LogicalOperator9'
     *
     * Block requirements for '<S76>/LogicalOperator8':
     *  1. VCU_SW_Requirements_Specification.slreqx:76196
     */
    GearMgmt_SpdTooHigh2D_Flg = ((rtb_LogicalOperator2_jugb &&
      rtb_TmpSignalConversionAtR_lqi4) || (rtb_LogicalOperator5_m1uk &&
      rtb_TmpSignalConversionAtR_lqi4 && !rtb_Compare_mctn) ||
      (rtb_LogicalOperator12_bzem && !rtb_FixPtRelationalOperato_h0x1));

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
     *
     * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* DataTypeConversion: '<S12>/DataTypeConversion10' incorporates:
     *  Constant: '<S112>/Constant'
     *  Logic: '<S76>/LogicalOperator55'
     *  Logic: '<S77>/LogicalOperator13'
     *  Logic: '<S77>/LogicalOperator14'
     *  RelationalOperator: '<S112>/Compare'
     *
     * Block requirements for '<S76>/LogicalOperator55':
     *  1. VCU_SW_Requirements_Specification.slreqx:76206
     */
    GearMgmt_AutoP_Flg = ((rtb_Compare_jnb5 || rtb_Compare_hy0g ||
      rtb_Compare_dn2t) && (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearP)) && rtb_Compare_l0lt && rtb_GearCal_ChrgInPlug_Flg);

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */

    /* DataTypeConversion: '<S12>/DataTypeConversion11' incorporates:
     *  Logic: '<S76>/LogicalOperator54'
     *  Logic: '<S76>/LogicalOperator57'
     *
     * Block requirements for '<S76>/LogicalOperator54':
     *  1. VCU_SW_Requirements_Specification.slreqx:76207
     */
    GearMgmt_ImmoEnable_Flg = (GearMgmt_BrkNotPress_Flg_tmp && !rtb_Switch1_mgjq);

    /* DataTypeConversion: '<S12>/DataTypeConversion2' incorporates:
     *  Logic: '<S76>/LogicalOperator11'
     *  Logic: '<S76>/LogicalOperator13'
     *  Logic: '<S76>/LogicalOperator15'
     *  Logic: '<S76>/LogicalOperator16'
     *  Logic: '<S76>/LogicalOperator17'
     *  Logic: '<S76>/LogicalOperator18'
     *
     * Block requirements for '<S76>/LogicalOperator17':
     *  1. VCU_SW_Requirements_Specification.slreqx:76197
     */
    GearMgmt_SpdTooHigh2R_Flg = ((rtb_LogicalOperator3_atad &&
      rtb_TmpSignalConversionAtR_lqi4) || (rtb_LogicalOperator6_nzui &&
      rtb_TmpSignalConversionAtR_lqi4 && !rtb_Compare_ildv) ||
      (rtb_LogicalOperator9_e4sv && !rtb_LogicalOperator_a3jk));

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Logic: '<S76>/LogicalOperator19' incorporates:
     *  Logic: '<S75>/LogicalOperator10'
     */
    rtb_LogicalOperator4_kuol = (rtb_LogicalOperator4_kuol ||
      rtb_LogicalOperator7_dm3p || rtb_LogicalOperator10_adpu);

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */

    /* DataTypeConversion: '<S12>/DataTypeConversion3' incorporates:
     *  Logic: '<S76>/LogicalOperator19'
     *  Logic: '<S76>/LogicalOperator20'
     *
     * Block requirements for '<S76>/LogicalOperator20':
     *  1. VCU_SW_Requirements_Specification.slreqx:76198
     */
    GearMgmt_SpdTooHigh2P_Flg = (rtb_LogicalOperator4_kuol &&
      rtb_TmpSignalConversionAtR_lqi4);

    /* DataTypeConversion: '<S12>/DataTypeConversion4' incorporates:
     *  Logic: '<S76>/LogicalOperator22'
     *  Logic: '<S76>/LogicalOperator23'
     *  Logic: '<S76>/LogicalOperator24'
     *
     * Block requirements for '<S76>/LogicalOperator23':
     *  1. VCU_SW_Requirements_Specification.slreqx:76199
     */
    GearMgmt_AcclrTooLrg_Flg = ((rtb_LogicalOperator9_e4sv ||
      rtb_LogicalOperator12_bzem) && !rtb_Compare_pfou);

    /* DataTypeConversion: '<S12>/DataTypeConversion5' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S80>/Constant'
     *  Constant: '<S81>/Constant'
     *  Logic: '<S76>/LogicalOperator25'
     *  Logic: '<S76>/LogicalOperator26'
     *  Logic: '<S76>/LogicalOperator48'
     *  Logic: '<S76>/LogicalOperator49'
     *  Logic: '<S76>/LogicalOperator50'
     *  RelationalOperator: '<S78>/Compare'
     *  RelationalOperator: '<S79>/Compare'
     *  RelationalOperator: '<S80>/Compare'
     *  RelationalOperator: '<S81>/Compare'
     *
     * Block requirements for '<S76>/LogicalOperator26':
     *  1. VCU_SW_Requirements_Specification.slreqx:76200
     */
    GearMgmt_ChrgInDetdErr_Flg = (((rtb_FixPtRelationalOperato_nw5m &&
      (rtb_TmpSignalConversionAtR_kc02 != ((uint8_T)GearCal_GearDefault))) ||
      (((rtb_TmpSignalConversionAtR_biia == ((uint8_T)GearCal_GearN)) ||
        (rtb_TmpSignalConversionAtR_biia == ((uint8_T)GearCal_GearD)) ||
        (rtb_TmpSignalConversionAtR_biia == ((uint8_T)GearCal_GearR))) &&
       rtb_FixPtRelationalOperato_jyan)) && rtb_GearCal_ChrgInPlug_Flg);

    /* DataTypeConversion: '<S12>/DataTypeConversion6' incorporates:
     *  Logic: '<S76>/LogicalOperator32'
     *
     * Block requirements for '<S76>/LogicalOperator32':
     *  1. VCU_SW_Requirements_Specification.slreqx:76201
     */
    GearMgmt_PRNDFail_Flg = (rtb_TmpSignalConversionAtR_jgqc ||
      rtb_LogicalOperator31);

    /* Logic: '<S76>/LogicalOperator33' incorporates:
     *  Logic: '<S76>/LogicalOperator38'
     *  Logic: '<S76>/LogicalOperator41'
     */
    rtb_TmpSignalConversionAtR_jgqc = (rtb_LogicalOperator2_jugb ||
      rtb_LogicalOperator3_atad || rtb_LogicalOperator5_m1uk ||
      rtb_LogicalOperator6_nzui);

    /* DataTypeConversion: '<S12>/DataTypeConversion7' incorporates:
     *  Logic: '<S76>/LogicalOperator33'
     *  Logic: '<S76>/LogicalOperator34'
     *  Logic: '<S76>/LogicalOperator35'
     *
     * Block requirements for '<S76>/LogicalOperator35':
     *  1. VCU_SW_Requirements_Specification.slreqx:76202
     */
    GearMgmt_VehNotRdy_Flg = (rtb_TmpSignalConversionAtR_jgqc &&
      !rtb_LogicalOperator_argh);

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
     *
     * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Logic: '<S76>/LogicalOperator39' incorporates:
     *  Logic: '<S75>/LogicalOperator1'
     *  Logic: '<S75>/LogicalOperator22'
     *  SignalConversion generated from: '<S77>/VehMot_VehSpdVld_Flg'
     *  Switch: '<S75>/Switch3'
     *  Switch: '<S75>/Switch4'
     */
    rtb_GearCal_ChrgInPlug_Flg = !tmpRead_6;

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */

    /* DataTypeConversion: '<S12>/DataTypeConversion8' incorporates:
     *  Constant: '<S89>/Constant'
     *  Logic: '<S76>/LogicalOperator38'
     *  Logic: '<S76>/LogicalOperator39'
     *  Logic: '<S76>/LogicalOperator40'
     *  Logic: '<S76>/LogicalOperator43'
     *  Logic: '<S76>/LogicalOperator44'
     *  RelationalOperator: '<S89>/Compare'
     *
     * Block requirements for '<S76>/LogicalOperator44':
     *  1. VCU_SW_Requirements_Specification.slreqx:76204
     */
    GearMgmt_FltDetd_Flg = (((rtb_TmpSignalConversionAtR_jgqc ||
      rtb_LogicalOperator9_e4sv || rtb_LogicalOperator12_bzem) &&
      rtb_GearCal_ChrgInPlug_Flg) || (rtb_TmpSignalConversionAtR_jgqc &&
      (rtb_TmpSignalConversionAtR_m31l == ((uint8_T)GearCal_BrkInvaild))));

    /* DataTypeConversion: '<S12>/DataTypeConversion9' incorporates:
     *  Logic: '<S76>/LogicalOperator42'
     *  Logic: '<S76>/LogicalOperator45'
     *  Logic: '<S76>/LogicalOperator46'
     *  Logic: '<S76>/LogicalOperator51'
     *  Logic: '<S76>/LogicalOperator52'
     *  Logic: '<S76>/LogicalOperator53'
     *  SignalConversion generated from: '<S77>/VehMot_VehSpdVld_Flg'
     *
     * Block requirements for '<S76>/LogicalOperator46':
     *  1. VCU_SW_Requirements_Specification.slreqx:76205
     */
    GearMgmt_SpdTooHigh2N_Flg = (((rtb_LogicalOperator1_d3qc &&
      rtb_TmpSignalConversionAtR_lqi4) || ((rtb_LogicalOperator8_mcgz ||
      rtb_LogicalOperator11_mli5) && !rtb_Compare_k2lg)) && tmpRead_6);

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */
    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys' */

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Logic: '<S75>/LogicalOperator' incorporates:
     *  Logic: '<S75>/LogicalOperator6'
     */
    rtb_FixPtRelationalOperato_nw5m = (rtb_GearCal_ChrgInPlug_Flg ||
      rtb_Compare_l0lt);

    /* Switch: '<S75>/Switch' incorporates:
     *  Logic: '<S75>/LogicalOperator'
     *  Logic: '<S75>/LogicalOperator3'
     *  Logic: '<S75>/LogicalOperator4'
     *  Logic: '<S75>/LogicalOperator5'
     *  SignalConversion generated from: '<S77>/VehMot_VehSpdVld_Flg'
     *  Switch: '<S75>/Switch1'
     *  Switch: '<S75>/Switch2'
     *
     * Block requirements for '<S75>/LogicalOperator3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *
     * Block requirements for '<S75>/LogicalOperator4':
     *  1. VCU_SW_Requirements_Specification.slreqx:76184
     *
     * Block requirements for '<S75>/LogicalOperator5':
     *  1. VCU_SW_Requirements_Specification.slreqx:76185
     */
    if (rtb_LogicalOperator1_d3qc && rtb_Compare_g1ml && rtb_Switch1_mgjq &&
        rtb_FixPtRelationalOperato_nw5m) {
      /* Switch: '<S75>/Switch' incorporates:
       *  Constant: '<S75>/Constant'
       */
      rtb_Switch_kkwy = ((uint8_T)GearCal_GearN);

      /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
       *
       * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
       *  1. VCU_SW_Requirements_Specification.slreqx:76183
       *  2. VCU_SW_Requirements_Specification.slreqx:76184
       *  3. VCU_SW_Requirements_Specification.slreqx:76185
       *  4. VCU_SW_Requirements_Specification.slreqx:76186
       *  5. VCU_SW_Requirements_Specification.slreqx:76187
       *  6. VCU_SW_Requirements_Specification.slreqx:76188
       *  7. VCU_SW_Requirements_Specification.slreqx:76189
       *  8. VCU_SW_Requirements_Specification.slreqx:76190
       *  9. VCU_SW_Requirements_Specification.slreqx:76191
       *  10. VCU_SW_Requirements_Specification.slreqx:76192
       *  11. VCU_SW_Requirements_Specification.slreqx:76193
       *  12. VCU_SW_Requirements_Specification.slreqx:76194
       */
    } else if (rtb_LogicalOperator3_atad && rtb_Compare_g1ml && tmpRead_6 &&
               rtb_Compare_l0lt && rtb_LogicalOperator_argh && rtb_Switch1_mgjq)
    {
      /* Switch: '<S75>/Switch1' incorporates:
       *  Constant: '<S75>/Constant1'
       *  Switch: '<S75>/Switch'
       */
      rtb_Switch_kkwy = ((uint8_T)GearCal_GearR);
    } else if (rtb_LogicalOperator2_jugb && rtb_Compare_g1ml && tmpRead_6 &&
               rtb_Compare_l0lt && rtb_LogicalOperator_argh && rtb_Switch1_mgjq)
    {
      /* Switch: '<S75>/Switch2' incorporates:
       *  Constant: '<S75>/Constant2'
       *  Switch: '<S75>/Switch'
       *  Switch: '<S75>/Switch1'
       */
      rtb_Switch_kkwy = ((uint8_T)GearCal_GearD);
    } else {
      /* Switch: '<S75>/Switch' incorporates:
       *  Constant: '<S75>/Constant10'
       *  Switch: '<S75>/Switch1'
       *  Switch: '<S75>/Switch2'
       */
      rtb_Switch_kkwy = ((uint8_T)GearCal_GearDefault);

      /* End of Outputs for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */
    }

    /* End of Switch: '<S75>/Switch' */

    /* Logic: '<S75>/LogicalOperator11' incorporates:
     *  Logic: '<S75>/LogicalOperator16'
     *  Switch: '<S75>/Switch3'
     */
    rtb_TmpSignalConversionAtR_jgqc = (rtb_Compare_g1ml && rtb_Compare_l0lt);

    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
     *
     * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Switch: '<S75>/Switch3' incorporates:
     *  Logic: '<S75>/LogicalOperator11'
     *  Logic: '<S75>/LogicalOperator13'
     *  Logic: '<S75>/LogicalOperator14'
     *  Logic: '<S75>/LogicalOperator15'
     *  Logic: '<S75>/LogicalOperator18'
     *  Logic: '<S75>/LogicalOperator19'
     *  Logic: '<S75>/LogicalOperator20'
     *  SignalConversion generated from: '<S77>/VehMot_VehSpdVld_Flg'
     *  Switch: '<S75>/Switch4'
     *
     * Block requirements for '<S75>/LogicalOperator15':
     *  1. VCU_SW_Requirements_Specification.slreqx:76187
     *
     * Block requirements for '<S75>/LogicalOperator20':
     *  1. VCU_SW_Requirements_Specification.slreqx:76188
     */
    if (rtb_LogicalOperator6_nzui && tmpRead_6 && rtb_LogicalOperator_argh &&
        (rtb_TmpSignalConversionAtR_jgqc || (rtb_TmpSignalConversionAtR_lqi4 &&
          rtb_Compare_ildv))) {
      /* Switch: '<S75>/Switch3' incorporates:
       *  Constant: '<S75>/Constant3'
       */
      rtb_Switch3_orst = ((uint8_T)GearCal_GearR);
    } else if (rtb_LogicalOperator5_m1uk && tmpRead_6 &&
               rtb_LogicalOperator_argh && (rtb_TmpSignalConversionAtR_jgqc ||
                (rtb_TmpSignalConversionAtR_lqi4 && rtb_Compare_mctn))) {
      /* Switch: '<S75>/Switch4' incorporates:
       *  Constant: '<S75>/Constant4'
       *  Switch: '<S75>/Switch3'
       */
      rtb_Switch3_orst = ((uint8_T)GearCal_GearD);
    } else {
      /* Logic: '<S75>/LogicalOperator21' incorporates:
       *  Logic: '<S75>/LogicalOperator25'
       *  Switch: '<S75>/Switch4'
       *  Switch: '<S75>/Switch5'
       */
      rtb_TmpSignalConversionAtR_jgqc = (rtb_GearCal_ChrgInPlug_Flg ||
        rtb_Compare_k2lg);

      /* Switch: '<S75>/Switch5' incorporates:
       *  Logic: '<S75>/LogicalOperator21'
       *  Logic: '<S75>/LogicalOperator24'
       *  Logic: '<S75>/LogicalOperator28'
       *  Logic: '<S75>/LogicalOperator29'
       *  Logic: '<S75>/LogicalOperator30'
       *  Switch: '<S75>/Switch4'
       *  Switch: '<S75>/Switch6'
       *  Switch: '<S75>/Switch7'
       *  Switch: '<S75>/Switch8'
       *
       * Block requirements for '<S75>/LogicalOperator24':
       *  1. VCU_SW_Requirements_Specification.slreqx:76190
       *
       * Block requirements for '<S75>/LogicalOperator28':
       *  1. VCU_SW_Requirements_Specification.slreqx:76193
       *
       * Block requirements for '<S75>/LogicalOperator29':
       *  1. VCU_SW_Requirements_Specification.slreqx:76191
       *
       * Block requirements for '<S75>/LogicalOperator30':
       *  1. VCU_SW_Requirements_Specification.slreqx:76194
       */
      if (rtb_LogicalOperator11_mli5 && rtb_TmpSignalConversionAtR_jgqc) {
        /* Switch: '<S75>/Switch3' incorporates:
         *  Constant: '<S75>/Constant5'
         *  Switch: '<S75>/Switch5'
         */
        rtb_Switch3_orst = ((uint8_T)GearCal_GearN);
      } else if (rtb_LogicalOperator8_mcgz && rtb_TmpSignalConversionAtR_jgqc) {
        /* Switch: '<S75>/Switch6' incorporates:
         *  Constant: '<S75>/Constant6'
         *  Switch: '<S75>/Switch3'
         *  Switch: '<S75>/Switch5'
         */
        rtb_Switch3_orst = ((uint8_T)GearCal_GearN);
      } else if (rtb_LogicalOperator12_bzem && tmpRead_6 && rtb_Compare_pfou &&
                 rtb_FixPtRelationalOperato_h0x1) {
        /* Switch: '<S75>/Switch7' incorporates:
         *  Constant: '<S75>/Constant7'
         *  Switch: '<S75>/Switch3'
         *  Switch: '<S75>/Switch6'
         */
        rtb_Switch3_orst = ((uint8_T)GearCal_GearD);
      } else if (rtb_LogicalOperator9_e4sv && tmpRead_6 && rtb_Compare_pfou &&
                 rtb_LogicalOperator_a3jk) {
        /* Switch: '<S75>/Switch8' incorporates:
         *  Constant: '<S75>/Constant8'
         *  Switch: '<S75>/Switch3'
         *  Switch: '<S75>/Switch6'
         *  Switch: '<S75>/Switch7'
         */
        rtb_Switch3_orst = ((uint8_T)GearCal_GearR);
      } else {
        /* Switch: '<S75>/Switch3' incorporates:
         *  Constant: '<S75>/Constant9'
         *  Switch: '<S75>/Switch6'
         *  Switch: '<S75>/Switch7'
         *  Switch: '<S75>/Switch8'
         */
        rtb_Switch3_orst = ((uint8_T)GearCal_GearDefault);
      }
    }

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */
    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_SWCdn_Sys' */

    /* Inport: '<Root>/RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail' */
    (void)Rte_Read_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail
      (&tmpRead_4);

    /* Inport: '<Root>/RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail' */
    (void)Rte_Read_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail
      (&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_SWCdn_Sys' */
    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Logic: '<S75>/LogicalOperator9'
     *
     * Block requirements for '<S75>/LogicalOperator9':
     *  1. VCU_SW_Requirements_Specification.slreqx:76186
     *  2. VCU_SW_Requirements_Specification.slreqx:76189
     *  3. VCU_SW_Requirements_Specification.slreqx:76192
     */
    rtb_LogicalOperator9_jijx = (rtb_LogicalOperator4_kuol &&
      rtb_FixPtRelationalOperato_nw5m);

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_SWCdn_Sys' */

    /* Chart: '<S11>/GearCal' incorporates:
     *  Constant: '<S11>/Constant'
     *
     * Block requirements for '<S11>/GearCal':
     *  1. VCU_SW_Requirements_Specification.slreqx:76208
     *  2. VCU_SW_Requirements_Specification.slreqx:76209
     *  3. VCU_SW_Requirements_Specification.slreqx:76210
     *  4. VCU_SW_Requirements_Specification.slreqx:76211
     *  5. VCU_SW_Requirements_Specification.slreqx:76212
     *  6. VCU_SW_Requirements_Specification.slreqx:76213
     *  7. VCU_SW_Requirements_Specification.slreqx:76214
     *  8. VCU_SW_Requirements_Specification.slreqx:76215
     *  9. VCU_SW_Requirements_Specification.slreqx:76216
     *  10. VCU_SW_Requirements_Specification.slreqx:76217
     *  11. VCU_SW_Requirements_Specification.slreqx:76218
     *  12. VCU_SW_Requirements_Specification.slreqx:76219
     *  13. VCU_SW_Requirements_Specification.slreqx:76220
     *  14. VCU_SW_Requirements_Specification.slreqx:76221
     *  15. VCU_SW_Requirements_Specification.slreqx:76222
     *  16. VCU_SW_Requirements_Specification.slreqx:76223
     */
    if (GearMgmt_FltDetd_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_FltDetd);
    } else if (GearMgmt_ChrgInDetdErr_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_PlugDetd);
    } else if (GearMgmt_VehNotRdy_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_VehNotReady);
    } else if (GearMgmt_PRNDFail_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_PRNDFail);
    } else if (GearMgmt_ImmoEnable_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_ImmoForbid);
    } else if (GearMgmt_SpdTooHigh2D_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_VehSpdHigh2D);
    } else if (GearMgmt_SpdTooHigh2R_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_VehSpdHigh2R);
    } else if (GearMgmt_SpdTooHigh2P_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_VehSpdHigh2P);
    } else if (GearMgmt_SpdTooHigh2N_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_VehSpdHigh2N);
    } else if (GearMgmt_BrkNotPress_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_BrkNotPress);
    } else if (tmpRead_3) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_EPBPrkFail);
    } else if (tmpRead_4) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_EPBRelsFail);
    } else if (((uint8_T)GearCal_U8GearZero) != 0U) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_SWPFail);
    } else if (GearMgmt_AcclrTooLrg_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_AcclrTooLrg);
    } else if (GearMgmt_AutoP_Flg) {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_AutoPTrigger);
    } else {
      rtb_TmpSignalConversionAtR_m31l = ((uint8_T)GearCal_Normal);
    }

    /* End of Chart: '<S11>/GearCal' */

    /* Logic: '<S11>/LogicalOperator1' incorporates:
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S68>/Compare'
     *  RelationalOperator: '<S72>/FixPt Relational Operator'
     *  UnitDelay: '<S72>/Delay Input1'
     *
     * Block description for '<S72>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_GearCal_ChrgInPlug_Flg = ((rtb_TmpSignalConversionAtR_m31l !=
      CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE) &&
      (rtb_TmpSignalConversionAtR_m31l != ((uint8_T)GearCal_U8GearZero)));

    /* Chart: '<S11>/ATOM_Chart' incorporates:
     *  Constant: '<S11>/CAL'
     *  Switch: '<S11>/Switch'
     *
     * Block requirements for '<S11>/ATOM_Chart':
     *  1. VCU_SW_Requirements_Specification.slreqx:76224
     *  2. VCU_SW_Requirements_Specification.slreqx:76225
     */
    if ((uint32_T)CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal ==
        CtAp_GearCal_IN_Init) {
      if (rtb_GearCal_ChrgInPlug_Flg) {
        CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal = CtAp_GearCal_IN_SWFail;
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum =
          rtb_TmpSignalConversionAtR_m31l;
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSelCnt = GearCal_InvldTim_CFG;
      }
    } else {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S65>/Constant'
       *  Constant: '<S66>/Constant'
       *  Constant: '<S67>/Constant'
       *  Constant: '<S69>/Constant'
       *  Constant: '<S70>/Constant'
       *  Logic: '<S11>/LogicalOperator'
       *  Logic: '<S11>/LogicalOperator2'
       *  Logic: '<S11>/LogicalOperator3'
       *  RelationalOperator: '<S65>/Compare'
       *  RelationalOperator: '<S66>/Compare'
       *  RelationalOperator: '<S67>/Compare'
       *  RelationalOperator: '<S69>/Compare'
       *  RelationalOperator: '<S70>/Compare'
       *  RelationalOperator: '<S71>/FixPt Relational Operator'
       *  RelationalOperator: '<S73>/FixPt Relational Operator'
       *  UnitDelay: '<S11>/OneDelay'
       *  UnitDelay: '<S71>/Delay Input1'
       *  UnitDelay: '<S73>/Delay Input1'
       *
       * Block description for '<S71>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S73>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block requirements for '<S11>/LogicalOperator':
       *  1. VCU_SW_Requirements_Specification.slreqx:76224
       *
       * Block requirements for '<S11>/LogicalOperator2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76225
       */
      /* case IN_SWFail: */
      if (CtAp_GearCal_ARID_DEF.OneDelay_DSTATE == ((uint8_T)GearCal_EPBPrkFail))
      {
        rtb_FixPtRelationalOperato_nw5m = ((rtb_TmpSignalConversionAtR_kvav !=
          CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hmqb) &&
          ((rtb_TmpSignalConversionAtR_kvav == ((uint8_T)GearCal_GearP)) ||
           (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)GearCal_GearD)) ||
           (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)GearCal_GearR))));
      } else {
        rtb_FixPtRelationalOperato_nw5m = ((rtb_TmpSignalConversionAtR_kvav !=
          CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_gfsw) &&
          (rtb_TmpSignalConversionAtR_kvav != ((uint8_T)GearCal_U8GearZero)));
      }

      if (rtb_FixPtRelationalOperato_nw5m ||
          (CtAp_GearCal_ARID_DEF.GearCal_InvldGearSelCnt == ((uint16_T)
            GearCal_U16TimeCntZero))) {
        CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal = CtAp_GearCal_IN_Init;
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum = GearCal_False ?
          ((uint8_T)1) : ((uint8_T)0);
      } else if (rtb_GearCal_ChrgInPlug_Flg) {
        CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal = CtAp_GearCal_IN_SWFail;
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum =
          rtb_TmpSignalConversionAtR_m31l;
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSelCnt = GearCal_InvldTim_CFG;
      } else {
        CtAp_GearCal_ARID_DEF.GearCal_InvldGearSelCnt -= (uint16_T)((uint8_T)
          GearCal_Cycle);
      }
    }

    /* Logic: '<S8>/LogicalOperator1' incorporates:
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Logic: '<S8>/LogicalOperator'
     *  Logic: '<S8>/LogicalOperator2'
     *  RelationalOperator: '<S29>/Compare'
     *  RelationalOperator: '<S30>/Compare'
     *  RelationalOperator: '<S31>/Compare'
     */
    rtb_LogicalOperator1 = (((rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearR)) || (rtb_TmpSignalConversionAtR_kvav == ((uint8_T)
      GearCal_GearD))) && (rtb_TmpSignalConversionAtR_pgwn &&
      (rtb_TmpSignalConversionAtR_k55r == ((uint8_T)GearCal_StandBy)) &&
      tmpRead_5));

    /* Outputs for Atomic SubSystem: '<S8>/DetectIncrease2' */
    rtb_FixPtRelationalOperato_giam = CtAp_GearCal_DetectIncrease
      (rtb_LogicalOperator1,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2_cxar);

    /* End of Outputs for SubSystem: '<S8>/DetectIncrease2' */

    /* Switch: '<S8>/Switch3'
     *
     * Block requirements for '<S8>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76173
     */
    if (rtb_FixPtRelationalOperato_giam) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant4'
       *
       * Block requirements for '<S8>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       */
      GearCal_AutoNGearTar_Enum = ((uint8_T)GearCal_GearN);
    } else {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant5'
       *
       * Block requirements for '<S8>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       */
      GearCal_AutoNGearTar_Enum = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S8>/Switch3' */

    /* RelationalOperator: '<S168>/FixPt Relational Operator' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S32>/Compare'
     */
    rtb_FixPtRelationalOperato_hcs0 = (rtb_TmpSignalConversionAtR_kvav !=
      ((uint8_T)GearCal_GearP));

    /* Logic: '<S8>/LogicalOperator3'
     *
     * Block requirements for '<S8>/LogicalOperator3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     */
    rtb_LogicalOperator3 = (GearCal_AutoPEPBPrkWait_Flg &&
      rtb_FixPtRelationalOperato_hcs0 && rtb_TmpSignalConversionAtR_negd);

    /* Outputs for Atomic SubSystem: '<S8>/DetectIncrease1' */
    rtb_FixPtRelationalOperato_hekw = CtAp_GearCal_DetectIncrease
      (rtb_LogicalOperator3,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1_bhxx);

    /* End of Outputs for SubSystem: '<S8>/DetectIncrease1' */

    /* Logic: '<S8>/LogicalOperator4' incorporates:
     *  Logic: '<S8>/LogicalOperator6'
     *
     * Block requirements for '<S8>/LogicalOperator4':
     *  1. VCU_SW_Requirements_Specification.slreqx:76171
     */
    rtb_LogicalOperator4 = (!rtb_TmpSignalConversionAtR_negd &&
      rtb_FixPtRelationalOperato_hcs0 && GearCal_AutoPEPBPrkWait_Flg);

    /* Outputs for Atomic SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger'
     *
     * Block requirements for '<S6>/UnCfmdActGearCfm_EPBTrigger':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     *  2. VCU_SW_Requirements_Specification.slreqx:76171
     *  3. VCU_SW_Requirements_Specification.slreqx:76173
     *  4. VCU_SW_Requirements_Specification.slreqx:76179
     *  5. VCU_SW_Requirements_Specification.slreqx:76180
     *  6. VCU_SW_Requirements_Specification.slreqx:76181
     *  7. VCU_SW_Requirements_Specification.slreqx:76183
     *  8. VCU_SW_Requirements_Specification.slreqx:76184
     *  9. VCU_SW_Requirements_Specification.slreqx:76185
     *  10. VCU_SW_Requirements_Specification.slreqx:76186
     *  11. VCU_SW_Requirements_Specification.slreqx:76187
     *  12. VCU_SW_Requirements_Specification.slreqx:76188
     *  13. VCU_SW_Requirements_Specification.slreqx:76189
     *  14. VCU_SW_Requirements_Specification.slreqx:76190
     *  15. VCU_SW_Requirements_Specification.slreqx:76191
     *  16. VCU_SW_Requirements_Specification.slreqx:76192
     *  17. VCU_SW_Requirements_Specification.slreqx:76193
     *  18. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Outputs for Atomic SubSystem: '<S15>/ChangeNotZero' */
    rtb_LogicalOperator_metj = CtAp_GearCal_ChangeNotZero1
      (GearCal_AutoNGearTar_Enum, &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero);

    /* End of Outputs for SubSystem: '<S15>/ChangeNotZero' */

    /* Outputs for Atomic SubSystem: '<S15>/DetectIncrease1' */
    rtb_FixPtRelationalOperato_budn = CtAp_GearCal_DetectIncrease
      (rtb_LogicalOperator4, &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1);

    /* End of Outputs for SubSystem: '<S15>/DetectIncrease1' */

    /* Outputs for Atomic SubSystem: '<S15>/ChangeNotZero1' */
    rtb_LogicalOperator_orbu = CtAp_GearCal_ChangeNotZero1
      (GearCal_ADASGearTar_Enum, &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1);

    /* End of Outputs for SubSystem: '<S15>/ChangeNotZero1' */

    /* Outputs for Atomic SubSystem: '<S15>/ChangeNotZero2' */
    rtb_LogicalOperator_pfis = CtAp_GearCal_ChangeNotZero1(rtb_Switch_kkwy,
      &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2);

    /* End of Outputs for SubSystem: '<S15>/ChangeNotZero2' */

    /* Outputs for Atomic SubSystem: '<S15>/ChangeNotZero3' */
    rtb_LogicalOperator_ip2f = CtAp_GearCal_ChangeNotZero1(rtb_Switch3_orst,
      &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3);

    /* End of Outputs for SubSystem: '<S15>/ChangeNotZero3' */

    /* Outputs for Atomic SubSystem: '<S15>/DetectIncrease2' */
    rtb_FixPtRelationalOperato_hcs0 = CtAp_GearCal_DetectIncrease
      (rtb_LogicalOperator9_jijx,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2);

    /* End of Outputs for SubSystem: '<S15>/DetectIncrease2' */

    /* Outputs for Atomic SubSystem: '<S15>/DetectIncrease' */
    rtb_FixPtRelationalOperato_ptyq = CtAp_GearCal_DetectIncrease
      (rtb_FixPtRelationalOperato_hekw,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease);

    /* End of Outputs for SubSystem: '<S15>/DetectIncrease' */

    /* Switch: '<S15>/Switch1' incorporates:
     *  Switch: '<S15>/Switch'
     *  Switch: '<S15>/Switch2'
     *  Switch: '<S15>/Switch3'
     *  Switch: '<S15>/Switch4'
     *  Switch: '<S15>/Switch5'
     *  Switch: '<S15>/Switch6'
     *
     * Block requirements for '<S15>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     *  2. VCU_SW_Requirements_Specification.slreqx:76171
     *
     * Block requirements for '<S15>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:76173
     *
     * Block requirements for '<S15>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:76171
     *
     * Block requirements for '<S15>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *
     * Block requirements for '<S15>/Switch4':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *
     * Block requirements for '<S15>/Switch5':
     *  1. VCU_SW_Requirements_Specification.slreqx:76187
     *  2. VCU_SW_Requirements_Specification.slreqx:76188
     *  3. VCU_SW_Requirements_Specification.slreqx:76190
     *  4. VCU_SW_Requirements_Specification.slreqx:76191
     *  5. VCU_SW_Requirements_Specification.slreqx:76193
     *  6. VCU_SW_Requirements_Specification.slreqx:76194
     *
     * Block requirements for '<S15>/Switch6':
     *  1. VCU_SW_Requirements_Specification.slreqx:76186
     *  2. VCU_SW_Requirements_Specification.slreqx:76189
     *  3. VCU_SW_Requirements_Specification.slreqx:76192
     */
    if (rtb_FixPtRelationalOperato_ptyq) {
      /* Outport: '<Root>/RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum' incorporates:
       *  Constant: '<S15>/Constant'
       */
      (void)
        Rte_Write_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum
        (((uint8_T)GearCal_GearP));
    } else {
      if (rtb_LogicalOperator_metj) {
        /* Switch: '<S15>/Switch'
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         */
        rtb_TmpSignalConversionAtR_k55r = GearCal_AutoNGearTar_Enum;
      } else if (rtb_FixPtRelationalOperato_budn) {
        /* Switch: '<S15>/Switch2' incorporates:
         *  Constant: '<S15>/Constant1'
         *  Switch: '<S15>/Switch'
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         */
        rtb_TmpSignalConversionAtR_k55r = ((uint8_T)GearCal_GearN);
      } else if (rtb_LogicalOperator_orbu) {
        /* Switch: '<S15>/Switch3' incorporates:
         *  Switch: '<S15>/Switch'
         *  Switch: '<S15>/Switch2'
         *
         * Block requirements for '<S15>/Switch3':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         */
        rtb_TmpSignalConversionAtR_k55r = GearCal_ADASGearTar_Enum;
      } else if (rtb_LogicalOperator_pfis) {
        /* Switch: '<S15>/Switch4' incorporates:
         *  Switch: '<S15>/Switch'
         *  Switch: '<S15>/Switch2'
         *  Switch: '<S15>/Switch3'
         *
         * Block requirements for '<S15>/Switch4':
         *  1. VCU_SW_Requirements_Specification.slreqx:76183
         *  2. VCU_SW_Requirements_Specification.slreqx:76184
         *  3. VCU_SW_Requirements_Specification.slreqx:76185
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         *
         * Block requirements for '<S15>/Switch3':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         */
        rtb_TmpSignalConversionAtR_k55r = rtb_Switch_kkwy;
      } else if (rtb_LogicalOperator_ip2f) {
        /* Switch: '<S15>/Switch5' incorporates:
         *  Switch: '<S15>/Switch'
         *  Switch: '<S15>/Switch2'
         *  Switch: '<S15>/Switch3'
         *  Switch: '<S15>/Switch4'
         *
         * Block requirements for '<S15>/Switch5':
         *  1. VCU_SW_Requirements_Specification.slreqx:76187
         *  2. VCU_SW_Requirements_Specification.slreqx:76188
         *  3. VCU_SW_Requirements_Specification.slreqx:76190
         *  4. VCU_SW_Requirements_Specification.slreqx:76191
         *  5. VCU_SW_Requirements_Specification.slreqx:76193
         *  6. VCU_SW_Requirements_Specification.slreqx:76194
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         *
         * Block requirements for '<S15>/Switch3':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *
         * Block requirements for '<S15>/Switch4':
         *  1. VCU_SW_Requirements_Specification.slreqx:76183
         *  2. VCU_SW_Requirements_Specification.slreqx:76184
         *  3. VCU_SW_Requirements_Specification.slreqx:76185
         */
        rtb_TmpSignalConversionAtR_k55r = rtb_Switch3_orst;
      } else if (rtb_FixPtRelationalOperato_hcs0) {
        /* Switch: '<S15>/Switch6' incorporates:
         *  Constant: '<S15>/Constant2'
         *  Switch: '<S15>/Switch'
         *  Switch: '<S15>/Switch2'
         *  Switch: '<S15>/Switch3'
         *  Switch: '<S15>/Switch4'
         *  Switch: '<S15>/Switch5'
         *
         * Block requirements for '<S15>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76186
         *  2. VCU_SW_Requirements_Specification.slreqx:76189
         *  3. VCU_SW_Requirements_Specification.slreqx:76192
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         *
         * Block requirements for '<S15>/Switch3':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *
         * Block requirements for '<S15>/Switch4':
         *  1. VCU_SW_Requirements_Specification.slreqx:76183
         *  2. VCU_SW_Requirements_Specification.slreqx:76184
         *  3. VCU_SW_Requirements_Specification.slreqx:76185
         *
         * Block requirements for '<S15>/Switch5':
         *  1. VCU_SW_Requirements_Specification.slreqx:76187
         *  2. VCU_SW_Requirements_Specification.slreqx:76188
         *  3. VCU_SW_Requirements_Specification.slreqx:76190
         *  4. VCU_SW_Requirements_Specification.slreqx:76191
         *  5. VCU_SW_Requirements_Specification.slreqx:76193
         *  6. VCU_SW_Requirements_Specification.slreqx:76194
         */
        rtb_TmpSignalConversionAtR_k55r = ((uint8_T)GearCal_GearP);
      } else {
        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S15>/Constant3'
         *  Switch: '<S15>/Switch2'
         *  Switch: '<S15>/Switch3'
         *  Switch: '<S15>/Switch4'
         *  Switch: '<S15>/Switch5'
         *  Switch: '<S15>/Switch6'
         *
         * Block requirements for '<S15>/Switch':
         *  1. VCU_SW_Requirements_Specification.slreqx:76173
         *
         * Block requirements for '<S15>/Switch2':
         *  1. VCU_SW_Requirements_Specification.slreqx:76171
         *
         * Block requirements for '<S15>/Switch3':
         *  1. VCU_SW_Requirements_Specification.slreqx:76179
         *  2. VCU_SW_Requirements_Specification.slreqx:76180
         *  3. VCU_SW_Requirements_Specification.slreqx:76181
         *
         * Block requirements for '<S15>/Switch4':
         *  1. VCU_SW_Requirements_Specification.slreqx:76183
         *  2. VCU_SW_Requirements_Specification.slreqx:76184
         *  3. VCU_SW_Requirements_Specification.slreqx:76185
         *
         * Block requirements for '<S15>/Switch5':
         *  1. VCU_SW_Requirements_Specification.slreqx:76187
         *  2. VCU_SW_Requirements_Specification.slreqx:76188
         *  3. VCU_SW_Requirements_Specification.slreqx:76190
         *  4. VCU_SW_Requirements_Specification.slreqx:76191
         *  5. VCU_SW_Requirements_Specification.slreqx:76193
         *  6. VCU_SW_Requirements_Specification.slreqx:76194
         *
         * Block requirements for '<S15>/Switch6':
         *  1. VCU_SW_Requirements_Specification.slreqx:76186
         *  2. VCU_SW_Requirements_Specification.slreqx:76189
         *  3. VCU_SW_Requirements_Specification.slreqx:76192
         */
        rtb_TmpSignalConversionAtR_k55r = ((uint8_T)GearCal_GearDefault);
      }

      /* Outport: '<Root>/RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum' incorporates:
       *  Switch: '<S15>/Switch'
       *  Switch: '<S15>/Switch2'
       *  Switch: '<S15>/Switch3'
       *  Switch: '<S15>/Switch4'
       *  Switch: '<S15>/Switch5'
       *  Switch: '<S15>/Switch6'
       *
       * Block requirements for '<S15>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       *
       * Block requirements for '<S15>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76171
       *
       * Block requirements for '<S15>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *
       * Block requirements for '<S15>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:76183
       *  2. VCU_SW_Requirements_Specification.slreqx:76184
       *  3. VCU_SW_Requirements_Specification.slreqx:76185
       *
       * Block requirements for '<S15>/Switch5':
       *  1. VCU_SW_Requirements_Specification.slreqx:76187
       *  2. VCU_SW_Requirements_Specification.slreqx:76188
       *  3. VCU_SW_Requirements_Specification.slreqx:76190
       *  4. VCU_SW_Requirements_Specification.slreqx:76191
       *  5. VCU_SW_Requirements_Specification.slreqx:76193
       *  6. VCU_SW_Requirements_Specification.slreqx:76194
       *
       * Block requirements for '<S15>/Switch6':
       *  1. VCU_SW_Requirements_Specification.slreqx:76186
       *  2. VCU_SW_Requirements_Specification.slreqx:76189
       *  3. VCU_SW_Requirements_Specification.slreqx:76192
       */
      (void)
        Rte_Write_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum
        (rtb_TmpSignalConversionAtR_k55r);
    }

    /* End of Switch: '<S15>/Switch1' */

    /* Outport: '<Root>/RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk' incorporates:
     *  Logic: '<S15>/LogicalOperator1'
     *
     * Block requirements for '<S15>/LogicalOperator1':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76186
     *  4. VCU_SW_Requirements_Specification.slreqx:76189
     *  5. VCU_SW_Requirements_Specification.slreqx:76192
     */
    (void)Rte_Write_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk
      (rtb_FixPtRelationalOperato_hekw || rtb_LogicalOperator5_c0cg ||
       rtb_LogicalOperator9_jijx);

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_SWCdn_Sys' */
    /* Outputs for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys'
     *
     * Block requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76186
     *  5. VCU_SW_Requirements_Specification.slreqx:76187
     *  6. VCU_SW_Requirements_Specification.slreqx:76188
     *  7. VCU_SW_Requirements_Specification.slreqx:76189
     *  8. VCU_SW_Requirements_Specification.slreqx:76190
     *  9. VCU_SW_Requirements_Specification.slreqx:76191
     *  10. VCU_SW_Requirements_Specification.slreqx:76192
     *  11. VCU_SW_Requirements_Specification.slreqx:76193
     *  12. VCU_SW_Requirements_Specification.slreqx:76194
     */
    /* Outport: '<Root>/RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels' incorporates:
     *  DataTypeConversion: '<S75>/DataTypeConversion'
     *  Logic: '<S15>/LogicalOperator'
     *
     * Block requirements for '<S15>/LogicalOperator':
     *  1. VCU_SW_Requirements_Specification.slreqx:76183
     *  2. VCU_SW_Requirements_Specification.slreqx:76184
     *  3. VCU_SW_Requirements_Specification.slreqx:76185
     *  4. VCU_SW_Requirements_Specification.slreqx:76179
     */
    (void)Rte_Write_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels
      (rtb_TmpSignalConversionAtR_owp5 || (rtb_Switch_kkwy != 0U));

    /* End of Outputs for SubSystem: '<S12>/GearMgmt_ManunlGearShiftSys' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_SWCdn_Sys' */
    /* End of Outputs for SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger' */

    /* Switch: '<S8>/Switch2'
     *
     * Block requirements for '<S8>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     *  2. VCU_SW_Requirements_Specification.slreqx:76172
     */
    if (GearCal_AutoPEPBPrkWait_Flg) {
      /* Switch: '<S8>/Switch2' incorporates:
       *  Constant: '<S8>/Constant2'
       *
       * Block requirements for '<S8>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76172
       */
      GearCal_AutoPGearTar_Enum = ((uint8_T)GearCal_GearP);
    } else {
      /* Switch: '<S8>/Switch2' incorporates:
       *  Constant: '<S8>/Constant3'
       *
       * Block requirements for '<S8>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76172
       */
      GearCal_AutoPGearTar_Enum = ((uint8_T)GearCal_GearDefault);
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S6>/ADASVld'
     *
     * Block requirements for '<S6>/ADASVld':
     *  1. VCU_SW_Requirements_Specification.slreqx:76228
     *  2. VCU_SW_Requirements_Specification.slreqx:76170
     *  3. VCU_SW_Requirements_Specification.slreqx:76171
     *  4. VCU_SW_Requirements_Specification.slreqx:76173
     *  5. VCU_SW_Requirements_Specification.slreqx:76174
     *  6. VCU_SW_Requirements_Specification.slreqx:76175
     *  7. VCU_SW_Requirements_Specification.slreqx:76176
     *  8. VCU_SW_Requirements_Specification.slreqx:76179
     *  9. VCU_SW_Requirements_Specification.slreqx:76180
     *  10. VCU_SW_Requirements_Specification.slreqx:76181
     */
    /* Outputs for Atomic SubSystem: '<S7>/ChangeNotZero1' */
    rtb_LogicalOperator_nr1d = CtAp_GearCal_ChangeNotZero1
      (rtb_TmpSignalConversionAtR_kvav,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1_fqdq);

    /* End of Outputs for SubSystem: '<S7>/ChangeNotZero1' */

    /* Outputs for Atomic SubSystem: '<S7>/ChangeNotZero3' */
    rtb_LogicalOperator_j4oo = CtAp_GearCal_ChangeNotZero1
      (GearCal_ManualGearTar_Enum,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3_pbm3);

    /* End of Outputs for SubSystem: '<S7>/ChangeNotZero3' */

    /* Outputs for Atomic SubSystem: '<S7>/ChangeNotZero2' */
    rtb_LogicalOperator_fnbh = CtAp_GearCal_ChangeNotZero1
      (GearCal_AutoNGearTar_Enum,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2_cv5h);

    /* End of Outputs for SubSystem: '<S7>/ChangeNotZero2' */

    /* Outputs for Atomic SubSystem: '<S7>/ChangeNotZero4' */
    rtb_FixPtRelationalOperato_giam = CtAp_GearCal_ChangeNotZero1
      (GearCal_ADASGearTar_Enum, &CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero4);

    /* End of Outputs for SubSystem: '<S7>/ChangeNotZero4' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S20>/Constant'
     *  RelationalOperator: '<S20>/Compare'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch2'
     *  Switch: '<S7>/Switch3'
     *  Switch: '<S7>/Switch4'
     *
     * Block requirements for '<S7>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:76179
     *  2. VCU_SW_Requirements_Specification.slreqx:76180
     *  3. VCU_SW_Requirements_Specification.slreqx:76181
     *
     * Block requirements for '<S7>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:76228
     *
     * Block requirements for '<S7>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:76170
     *  2. VCU_SW_Requirements_Specification.slreqx:76171
     *
     * Block requirements for '<S7>/Switch3':
     *  1. VCU_SW_Requirements_Specification.slreqx:76173
     *
     * Block requirements for '<S7>/Switch4':
     *  1. VCU_SW_Requirements_Specification.slreqx:76174
     *  2. VCU_SW_Requirements_Specification.slreqx:76175
     *  3. VCU_SW_Requirements_Specification.slreqx:76176
     */
    if (rtb_FixPtRelationalOperato_giam) {
      /* Switch: '<S7>/Switch' incorporates:
       *  Constant: '<S7>/Constant'
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx = GearCal_True;
    } else if (GearCal_AutoPGearTar_Enum == ((uint8_T)GearCal_GearP)) {
      /* Switch: '<S7>/Switch2' incorporates:
       *  Constant: '<S7>/Constant2'
       *  Switch: '<S7>/Switch'
       *
       * Block requirements for '<S7>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx = GearCal_False;
    } else if (rtb_LogicalOperator_fnbh) {
      /* Switch: '<S7>/Switch3' incorporates:
       *  Constant: '<S7>/Constant3'
       *  Switch: '<S7>/Switch'
       *  Switch: '<S7>/Switch2'
       *
       * Block requirements for '<S7>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *
       * Block requirements for '<S7>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx = GearCal_False;
    } else if (rtb_LogicalOperator_j4oo) {
      /* Switch: '<S7>/Switch4' incorporates:
       *  Constant: '<S7>/Constant4'
       *  Switch: '<S7>/Switch'
       *  Switch: '<S7>/Switch2'
       *  Switch: '<S7>/Switch3'
       *
       * Block requirements for '<S7>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       *  2. VCU_SW_Requirements_Specification.slreqx:76175
       *  3. VCU_SW_Requirements_Specification.slreqx:76176
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *
       * Block requirements for '<S7>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       *
       * Block requirements for '<S7>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx = GearCal_False;
    } else if (rtb_LogicalOperator_nr1d) {
      /* Switch: '<S7>/Switch1' incorporates:
       *  Constant: '<S7>/Constant1'
       *  Switch: '<S7>/Switch'
       *  Switch: '<S7>/Switch2'
       *  Switch: '<S7>/Switch3'
       *  Switch: '<S7>/Switch4'
       *
       * Block requirements for '<S7>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:76228
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *
       * Block requirements for '<S7>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       *
       * Block requirements for '<S7>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       *
       * Block requirements for '<S7>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       *  2. VCU_SW_Requirements_Specification.slreqx:76175
       *  3. VCU_SW_Requirements_Specification.slreqx:76176
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx = GearCal_False;
    } else {
      /* Switch: '<S7>/Switch' incorporates:
       *  Switch: '<S7>/Switch2'
       *  Switch: '<S7>/Switch3'
       *  Switch: '<S7>/Switch4'
       *  UnitDelay: '<S7>/Unit Delay'
       *
       * Block requirements for '<S7>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:76179
       *  2. VCU_SW_Requirements_Specification.slreqx:76180
       *  3. VCU_SW_Requirements_Specification.slreqx:76181
       *
       * Block requirements for '<S7>/Switch2':
       *  1. VCU_SW_Requirements_Specification.slreqx:76170
       *  2. VCU_SW_Requirements_Specification.slreqx:76171
       *
       * Block requirements for '<S7>/Switch3':
       *  1. VCU_SW_Requirements_Specification.slreqx:76173
       *
       * Block requirements for '<S7>/Switch4':
       *  1. VCU_SW_Requirements_Specification.slreqx:76174
       *  2. VCU_SW_Requirements_Specification.slreqx:76175
       *  3. VCU_SW_Requirements_Specification.slreqx:76176
       */
      CtAp_GearCal_ARID_DEF.Switch_jykx =
        CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE_hdye;
    }

    /* End of Switch: '<S7>/Switch' */

    /* Update for UnitDelay: '<S7>/Unit Delay' */
    CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE_hdye =
      CtAp_GearCal_ARID_DEF.Switch_jykx;

    /* End of Outputs for SubSystem: '<S6>/ADASVld' */

    /* Outputs for Atomic SubSystem: '<S6>/GearCal_TragerGearSWSys'
     *
     * Block requirements for '<S6>/GearCal_TragerGearSWSys':
     *  1. VCU_SW_Requirements_Specification.slreqx:76226
     *  2. VCU_SW_Requirements_Specification.slreqx:76227
     */
    /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero' */
    /* Outputs for Atomic SubSystem: '<S119>/DetectChange' */
    rtb_FixPtRelationalOperato_giam = CtAp_GearCal_DetectChange
      (GearCal_AutoPGearTar_Enum,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_kkiq);

    /* End of Outputs for SubSystem: '<S119>/DetectChange' */
    /* End of Outputs for SubSystem: '<S13>/ChangeNotZero' */

    /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero1' */
    /* Outputs for Atomic SubSystem: '<S120>/DetectChange' */
    rtb_FixPtRelationalOperato_kobn = CtAp_GearCal_DetectChange
      (GearCal_AutoNGearTar_Enum,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_cl54);

    /* End of Outputs for SubSystem: '<S120>/DetectChange' */
    /* End of Outputs for SubSystem: '<S13>/ChangeNotZero1' */

    /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero2' */
    /* Outputs for Atomic SubSystem: '<S121>/DetectChange' */
    rtb_FixPtRelationalOperato_crjc = CtAp_GearCal_DetectChange
      (GearCal_ADASGearTar_Enum,
       &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_mbvz);

    /* End of Outputs for SubSystem: '<S121>/DetectChange' */
    /* End of Outputs for SubSystem: '<S13>/ChangeNotZero2' */

    /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero3' */
    /* Outputs for Atomic SubSystem: '<S122>/DetectChange' */
    rtb_FixPtRelationalOperato_ptyq = CtAp_GearCal_DetectChange
      (GearCal_ManualGearTar_Enum, &CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange);

    /* End of Outputs for SubSystem: '<S122>/DetectChange' */
    /* End of Outputs for SubSystem: '<S13>/ChangeNotZero3' */

    /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero' */
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S123>/Constant'
     *  Constant: '<S125>/Constant'
     *  Constant: '<S127>/Constant'
     *  Constant: '<S129>/Constant'
     *  Constant: '<S13>/Constant2'
     *  Delay: '<S13>/Delay'
     *  Logic: '<S119>/LogicalOperator'
     *  Logic: '<S120>/LogicalOperator'
     *  Logic: '<S121>/LogicalOperator'
     *  Logic: '<S122>/LogicalOperator'
     *  RelationalOperator: '<S123>/Compare'
     *  RelationalOperator: '<S125>/Compare'
     *  RelationalOperator: '<S127>/Compare'
     *  RelationalOperator: '<S129>/Compare'
     *  Switch: '<S13>/Switch1'
     *  Switch: '<S13>/Switch2'
     *  Switch: '<S13>/Switch3'
     */
    if (rtb_FixPtRelationalOperato_giam && (GearCal_AutoPGearTar_Enum !=
         ((uint8_T)GearCal_U8TarGearZero))) {
      CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)GearCal_AutoPTar);

      /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero1' */
    } else if (rtb_FixPtRelationalOperato_kobn && (GearCal_AutoNGearTar_Enum !=
                ((uint8_T)GearCal_U8TarGearZero))) {
      /* Delay: '<S13>/Delay' incorporates:
       *  Constant: '<S13>/Constant1'
       *  Switch: '<S13>/Switch1'
       */
      CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)GearCal_AutoNTar);

      /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero2' */
    } else if (rtb_FixPtRelationalOperato_crjc && (GearCal_ADASGearTar_Enum !=
                ((uint8_T)GearCal_U8TarGearZero))) {
      /* Delay: '<S13>/Delay' incorporates:
       *  Constant: '<S13>/Constant'
       *  Switch: '<S13>/Switch1'
       *  Switch: '<S13>/Switch2'
       */
      CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)GearCal_ADASTar);

      /* Outputs for Atomic SubSystem: '<S13>/ChangeNotZero3' */
    } else if (rtb_FixPtRelationalOperato_ptyq && (GearCal_ManualGearTar_Enum !=
                ((uint8_T)GearCal_U8TarGearZero))) {
      /* Switch: '<S13>/Switch3' incorporates:
       *  Constant: '<S13>/Constant3'
       *  Delay: '<S13>/Delay'
       *  Switch: '<S13>/Switch1'
       *  Switch: '<S13>/Switch2'
       */
      CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)GearCal_ManualTar);

      /* End of Outputs for SubSystem: '<S13>/ChangeNotZero3' */
      /* End of Outputs for SubSystem: '<S13>/ChangeNotZero2' */
      /* End of Outputs for SubSystem: '<S13>/ChangeNotZero1' */
    } else {
      /* no actions */
    }

    /* End of Switch: '<S13>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/ChangeNotZero' */

    /* MultiPortSwitch: '<S13>/MultiportSwitch' incorporates:
     *  Delay: '<S13>/Delay'
     */
    switch (CtAp_GearCal_ARID_DEF.Delay_DSTATE) {
     case 0:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' incorporates:
       *  Constant: '<S13>/Constant5'
       */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (((uint8_T)GearCal_U8TarGearZero));
      break;

     case 1:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (GearCal_AutoPGearTar_Enum);
      break;

     case 2:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (GearCal_AutoNGearTar_Enum);
      break;

     case 3:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (GearCal_ADASGearTar_Enum);
      break;

     case 4:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (GearCal_ManualGearTar_Enum);
      break;

     default:
      /* Outport: '<Root>/RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum' incorporates:
       *  Constant: '<S13>/Constant4'
       */
      (void)Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
        (((uint8_T)GearCal_U8TarGearZero));
      break;
    }

    /* End of MultiPortSwitch: '<S13>/MultiportSwitch' */
    /* End of Outputs for SubSystem: '<S6>/GearCal_TragerGearSWSys' */

    /* Update for UnitDelay: '<S72>/Delay Input1'
     *
     * Block description for '<S72>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE = rtb_TmpSignalConversionAtR_m31l;

    /* Update for UnitDelay: '<S73>/Delay Input1'
     *
     * Block description for '<S73>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hmqb =
      rtb_TmpSignalConversionAtR_kvav;

    /* Update for UnitDelay: '<S11>/OneDelay' */
    CtAp_GearCal_ARID_DEF.OneDelay_DSTATE =
      CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum;

    /* Update for UnitDelay: '<S71>/Delay Input1'
     *
     * Block description for '<S71>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_gfsw =
      rtb_TmpSignalConversionAtR_kvav;
  } else {
    CtAp_GearCal_ARID_DEF.GearMgmt_ManSftGear_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S2>/GearMgmt_ManSftGear' */
  /* End of Outputs for SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */

  /* Outport: '<Root>/RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld' */
  (void)Rte_Write_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld
    (CtAp_GearCal_ARID_DEF.Switch_jykx);

  /* Outport: '<Root>/RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum' */
  (void)
    Rte_Write_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum
    (CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum);
}

#define CtAp_GearCal_STOP_SEC_CODE
#include "CtAp_GearCal_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_GearCal_START_SEC_VAR_CONST_8
#include "CtAp_GearCal_MemMap.h"

void R_GearCal_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  GearCal_AutoNGearTar_Enum = 0U;
  GearCal_AutoPGearTar_Enum = 0U;
  GearCal_ManualGearTar_Enum = 0U;
  GearCal_ADASGearTar_Enum = 0U;
  GearCal_ManualGearTarTrig_Enum = false;
  GearCalTest1 = false;
  GearMgmt_BrkNotPress_Flg = false;
  GearMgmt_SpdTooHigh2D_Flg = false;
  GearMgmt_AutoP_Flg = false;
  GearMgmt_ImmoEnable_Flg = false;
  GearMgmt_SpdTooHigh2R_Flg = false;
  GearMgmt_SpdTooHigh2P_Flg = false;
  GearMgmt_AcclrTooLrg_Flg = false;
  GearMgmt_ChrgInDetdErr_Flg = false;
  GearMgmt_PRNDFail_Flg = false;
  GearMgmt_VehNotRdy_Flg = false;
  GearMgmt_FltDetd_Flg = false;
  GearMgmt_SpdTooHigh2N_Flg = false;
  GearCalTest5 = false;
  GearCalTest8 = false;
  GearCalTest6 = false;
  GearCalTest9 = false;
  GearCalTest3 = false;
  GearCal_AutoPEPBPrkWait_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_GearCal_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_GearCal_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */
  /* SystemInitialize for Enabled SubSystem: '<S2>/GearMgmt_ManSftGear' */
  /* InitializeConditions for UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hmqb = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S11>/OneDelay' */
  CtAp_GearCal_ARID_DEF.OneDelay_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S71>/Delay Input1'
   *
   * Block description for '<S71>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_gfsw = ((uint8_T)0U);

  /* SystemInitialize for Atomic SubSystem: '<S6>/AutoPTrig'
   *
   * Block requirements for '<S6>/AutoPTrig':
   *  1. VCU_SW_Requirements_Specification.slreqx:76168
   *  2. VCU_SW_Requirements_Specification.slreqx:76169
   */
  /* InitializeConditions for Delay: '<S9>/Delay' */
  CtAp_GearCal_ARID_DEF.Delay_DSTATE_hd5t = false;

  /* End of SystemInitialize for SubSystem: '<S6>/AutoPTrig' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/Gear_TarSys'
   *
   * Block requirements for '<S6>/Gear_TarSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:76174
   *  2. VCU_SW_Requirements_Specification.slreqx:76175
   *  3. VCU_SW_Requirements_Specification.slreqx:76176
   *  4. VCU_SW_Requirements_Specification.slreqx:76177
   *  5. VCU_SW_Requirements_Specification.slreqx:76178
   *  6. VCU_SW_Requirements_Specification.slreqx:76179
   *  7. VCU_SW_Requirements_Specification.slreqx:76180
   *  8. VCU_SW_Requirements_Specification.slreqx:76181
   *  9. VCU_SW_Requirements_Specification.slreqx:76182
   */
  /* SystemInitialize for Atomic SubSystem: '<S14>/ADASTargetCfm' */
  /* InitializeConditions for UnitDelay: '<S148>/Delay Input1'
   *
   * Block description for '<S148>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_omis = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S14>/ADASTargetCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/IVITargetCfm' */
  /* InitializeConditions for UnitDelay: '<S153>/Delay Input1'
   *
   * Block description for '<S153>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_f0r3 = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S14>/IVITargetCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/PButtonTargetCfm' */
  /* InitializeConditions for UnitDelay: '<S156>/Delay Input1'
   *
   * Block description for '<S156>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_li0g = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S14>/PButtonTargetCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/RNDButtonTargetCfm' */
  /* InitializeConditions for UnitDelay: '<S157>/Delay Input1'
   *
   * Block description for '<S157>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_o1pd = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S14>/RNDButtonTargetCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/Subsystem6' */
  /* InitializeConditions for UnitDelay: '<S161>/Delay Input1'
   *
   * Block description for '<S161>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_dnch = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S14>/Subsystem6' */
  /* End of SystemInitialize for SubSystem: '<S6>/Gear_TarSys' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/GearCal_SWCdn_Sys' */
  /* SystemInitialize for Atomic SubSystem: '<S12>/GearMgmt_SWCdn_Sys'
   *
   * Block requirements for '<S12>/GearMgmt_SWCdn_Sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:76183
   *  2. VCU_SW_Requirements_Specification.slreqx:76184
   *  3. VCU_SW_Requirements_Specification.slreqx:76185
   *  4. VCU_SW_Requirements_Specification.slreqx:76186
   *  5. VCU_SW_Requirements_Specification.slreqx:76187
   *  6. VCU_SW_Requirements_Specification.slreqx:76188
   *  7. VCU_SW_Requirements_Specification.slreqx:76189
   *  8. VCU_SW_Requirements_Specification.slreqx:76190
   *  9. VCU_SW_Requirements_Specification.slreqx:76191
   *  10. VCU_SW_Requirements_Specification.slreqx:76192
   *  11. VCU_SW_Requirements_Specification.slreqx:76193
   *  12. VCU_SW_Requirements_Specification.slreqx:76194
   */
  /* InitializeConditions for UnitDelay: '<S77>/Unit Delay' */
  CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S12>/GearMgmt_SWCdn_Sys' */

  /* SystemInitialize for Atomic SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys'
   *
   * Block requirements for '<S12>/GearMgmt_ManunlGearVaildSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:76195
   *  2. VCU_SW_Requirements_Specification.slreqx:76196
   *  3. VCU_SW_Requirements_Specification.slreqx:76197
   *  4. VCU_SW_Requirements_Specification.slreqx:76198
   *  5. VCU_SW_Requirements_Specification.slreqx:76199
   *  6. VCU_SW_Requirements_Specification.slreqx:76200
   *  7. VCU_SW_Requirements_Specification.slreqx:76201
   *  8. VCU_SW_Requirements_Specification.slreqx:76202
   *  9. VCU_SW_Requirements_Specification.slreqx:76203
   *  10. VCU_SW_Requirements_Specification.slreqx:76204
   *  11. VCU_SW_Requirements_Specification.slreqx:76205
   *  12. VCU_SW_Requirements_Specification.slreqx:76206
   *  13. VCU_SW_Requirements_Specification.slreqx:76207
   */
  /* InitializeConditions for UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_hy5a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  CtAp_GearCal_ARID_DEF.DelayInput1_DSTATE_krvn = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S12>/GearMgmt_ManunlGearVaildSys' */
  /* End of SystemInitialize for SubSystem: '<S6>/GearCal_SWCdn_Sys' */

  /* Chart: '<S11>/ATOM_Chart'
   *
   * Block requirements for '<S11>/ATOM_Chart':
   *  1. VCU_SW_Requirements_Specification.slreqx:76224
   *  2. VCU_SW_Requirements_Specification.slreqx:76225
   */
  CtAp_GearCal_ARID_DEF.is_c1_CtAp_GearCal = CtAp_GearCal_IN_Init;
  CtAp_GearCal_ARID_DEF.GearCal_InvldGearSel_Enum = GearCal_False ? ((uint8_T)1)
    : ((uint8_T)0);

  /* SystemInitialize for Atomic SubSystem: '<S8>/DetectIncrease2' */
  CtAp_GearCa_DetectIncrease_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2_cxar);

  /* End of SystemInitialize for SubSystem: '<S8>/DetectIncrease2' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/DetectIncrease1' */
  CtAp_GearCa_DetectIncrease_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1_bhxx);

  /* End of SystemInitialize for SubSystem: '<S8>/DetectIncrease1' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger'
   *
   * Block requirements for '<S6>/UnCfmdActGearCfm_EPBTrigger':
   *  1. VCU_SW_Requirements_Specification.slreqx:76170
   *  2. VCU_SW_Requirements_Specification.slreqx:76171
   *  3. VCU_SW_Requirements_Specification.slreqx:76173
   *  4. VCU_SW_Requirements_Specification.slreqx:76179
   *  5. VCU_SW_Requirements_Specification.slreqx:76180
   *  6. VCU_SW_Requirements_Specification.slreqx:76181
   *  7. VCU_SW_Requirements_Specification.slreqx:76183
   *  8. VCU_SW_Requirements_Specification.slreqx:76184
   *  9. VCU_SW_Requirements_Specification.slreqx:76185
   *  10. VCU_SW_Requirements_Specification.slreqx:76186
   *  11. VCU_SW_Requirements_Specification.slreqx:76187
   *  12. VCU_SW_Requirements_Specification.slreqx:76188
   *  13. VCU_SW_Requirements_Specification.slreqx:76189
   *  14. VCU_SW_Requirements_Specification.slreqx:76190
   *  15. VCU_SW_Requirements_Specification.slreqx:76191
   *  16. VCU_SW_Requirements_Specification.slreqx:76192
   *  17. VCU_SW_Requirements_Specification.slreqx:76193
   *  18. VCU_SW_Requirements_Specification.slreqx:76194
   */
  /* SystemInitialize for Atomic SubSystem: '<S15>/ChangeNotZero' */
  CtAp_GearCa_ChangeNotZero1_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero);

  /* End of SystemInitialize for SubSystem: '<S15>/ChangeNotZero' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/DetectIncrease1' */
  CtAp_GearCa_DetectIncrease_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease1);

  /* End of SystemInitialize for SubSystem: '<S15>/DetectIncrease1' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChangeNotZero1' */
  CtAp_GearCa_ChangeNotZero1_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1);

  /* End of SystemInitialize for SubSystem: '<S15>/ChangeNotZero1' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChangeNotZero2' */
  CtAp_GearCa_ChangeNotZero1_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2);

  /* End of SystemInitialize for SubSystem: '<S15>/ChangeNotZero2' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/ChangeNotZero3' */
  CtAp_GearCa_ChangeNotZero1_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3);

  /* End of SystemInitialize for SubSystem: '<S15>/ChangeNotZero3' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/DetectIncrease2' */
  CtAp_GearCa_DetectIncrease_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease2);

  /* End of SystemInitialize for SubSystem: '<S15>/DetectIncrease2' */

  /* SystemInitialize for Atomic SubSystem: '<S15>/DetectIncrease' */
  CtAp_GearCa_DetectIncrease_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectIncrease);

  /* End of SystemInitialize for SubSystem: '<S15>/DetectIncrease' */
  /* End of SystemInitialize for SubSystem: '<S6>/UnCfmdActGearCfm_EPBTrigger' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/ADASVld'
   *
   * Block requirements for '<S6>/ADASVld':
   *  1. VCU_SW_Requirements_Specification.slreqx:76228
   *  2. VCU_SW_Requirements_Specification.slreqx:76170
   *  3. VCU_SW_Requirements_Specification.slreqx:76171
   *  4. VCU_SW_Requirements_Specification.slreqx:76173
   *  5. VCU_SW_Requirements_Specification.slreqx:76174
   *  6. VCU_SW_Requirements_Specification.slreqx:76175
   *  7. VCU_SW_Requirements_Specification.slreqx:76176
   *  8. VCU_SW_Requirements_Specification.slreqx:76179
   *  9. VCU_SW_Requirements_Specification.slreqx:76180
   *  10. VCU_SW_Requirements_Specification.slreqx:76181
   */
  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
  CtAp_GearCal_ARID_DEF.UnitDelay_DSTATE_hdye = false;

  /* SystemInitialize for Atomic SubSystem: '<S7>/ChangeNotZero1' */
  CtAp_GearCa_ChangeNotZero1_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero1_fqdq);

  /* End of SystemInitialize for SubSystem: '<S7>/ChangeNotZero1' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/ChangeNotZero3' */
  CtAp_GearCa_ChangeNotZero1_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero3_pbm3);

  /* End of SystemInitialize for SubSystem: '<S7>/ChangeNotZero3' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/ChangeNotZero2' */
  CtAp_GearCa_ChangeNotZero1_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero2_cv5h);

  /* End of SystemInitialize for SubSystem: '<S7>/ChangeNotZero2' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/ChangeNotZero4' */
  CtAp_GearCa_ChangeNotZero1_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_ChangeNotZero4);

  /* End of SystemInitialize for SubSystem: '<S7>/ChangeNotZero4' */
  /* End of SystemInitialize for SubSystem: '<S6>/ADASVld' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/GearCal_TragerGearSWSys'
   *
   * Block requirements for '<S6>/GearCal_TragerGearSWSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:76226
   *  2. VCU_SW_Requirements_Specification.slreqx:76227
   */
  /* InitializeConditions for Delay: '<S13>/Delay' */
  CtAp_GearCal_ARID_DEF.Delay_DSTATE = ((uint8_T)0U);

  /* SystemInitialize for Atomic SubSystem: '<S13>/ChangeNotZero' */
  /* SystemInitialize for Atomic SubSystem: '<S119>/DetectChange' */
  CtAp_GearCal_DetectChange_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_kkiq);

  /* End of SystemInitialize for SubSystem: '<S119>/DetectChange' */
  /* End of SystemInitialize for SubSystem: '<S13>/ChangeNotZero' */

  /* SystemInitialize for Atomic SubSystem: '<S13>/ChangeNotZero1' */
  /* SystemInitialize for Atomic SubSystem: '<S120>/DetectChange' */
  CtAp_GearCal_DetectChange_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_cl54);

  /* End of SystemInitialize for SubSystem: '<S120>/DetectChange' */
  /* End of SystemInitialize for SubSystem: '<S13>/ChangeNotZero1' */

  /* SystemInitialize for Atomic SubSystem: '<S13>/ChangeNotZero2' */
  /* SystemInitialize for Atomic SubSystem: '<S121>/DetectChange' */
  CtAp_GearCal_DetectChange_Init
    (&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange_mbvz);

  /* End of SystemInitialize for SubSystem: '<S121>/DetectChange' */
  /* End of SystemInitialize for SubSystem: '<S13>/ChangeNotZero2' */

  /* SystemInitialize for Atomic SubSystem: '<S13>/ChangeNotZero3' */
  /* SystemInitialize for Atomic SubSystem: '<S122>/DetectChange' */
  CtAp_GearCal_DetectChange_Init(&CtAp_GearCal_ARID_DEF.ARID_DEF_DetectChange);

  /* End of SystemInitialize for SubSystem: '<S122>/DetectChange' */
  /* End of SystemInitialize for SubSystem: '<S13>/ChangeNotZero3' */
  /* End of SystemInitialize for SubSystem: '<S6>/GearCal_TragerGearSWSys' */
  /* End of SystemInitialize for SubSystem: '<S2>/GearMgmt_ManSftGear' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_GearCal_Cyclic_20ms_sys' */
}

#define CtAp_GearCal_STOP_SEC_VAR_CONST_8
#include "CtAp_GearCal_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
