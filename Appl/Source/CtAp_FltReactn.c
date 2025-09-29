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
 *  Filename:           CtAp_FltReactn.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.2.2
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:22:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:20:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_FltReactn.h"
#include "rtwtypes.h"
#include "CtAp_FltReactn_private.h"
#include "Rte_Type.h"
#include "CtAp_FltReactn_Glb.h"
#include "CtAp_FltReactn_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_FltReactn_START_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"

ARID_DEF_CtAp_FltReactn_T CtAp_FltReactn_ARID_DEF;

#define CtAp_FltReactn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * System initialize for atomic system:
 *    '<S45>/ATOM_TimeCnt'
 *    '<S57>/ATOM_TimeCnt'
 *    '<S47>/ATOM_TimeCnt'
 *    '<S80>/ATOM_TimeCnt'
 *    '<S50>/ATOM_TimeCnt'
 *    '<S51>/ATOM_TimeCnt'
 *    '<S52>/ATOM_TimeCnt'
 *    '<S44>/ATOM_TimeCnt'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReact_ATOM_TimeCnt_Init(ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S53>/Add' incorporates:
   *  UnitDelay: '<S53>/Delay'
   */
  CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * System reset for atomic system:
 *    '<S45>/ATOM_TimeCnt'
 *    '<S57>/ATOM_TimeCnt'
 *    '<S47>/ATOM_TimeCnt'
 *    '<S80>/ATOM_TimeCnt'
 *    '<S50>/ATOM_TimeCnt'
 *    '<S51>/ATOM_TimeCnt'
 *    '<S52>/ATOM_TimeCnt'
 *    '<S44>/ATOM_TimeCnt'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReac_ATOM_TimeCnt_Reset(ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S53>/Add' incorporates:
   *  UnitDelay: '<S53>/Delay'
   */
  CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S45>/ATOM_TimeCnt'
 *    '<S57>/ATOM_TimeCnt'
 *    '<S47>/ATOM_TimeCnt'
 *    '<S80>/ATOM_TimeCnt'
 *    '<S50>/ATOM_TimeCnt'
 *    '<S51>/ATOM_TimeCnt'
 *    '<S52>/ATOM_TimeCnt'
 *    '<S44>/ATOM_TimeCnt'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

boolean_T CtAp_FltReactn_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  uint16_T rtb_Add1_agop;

  /* Sum: '<S53>/Add1' incorporates:
   *  DataTypeConversion: '<S53>/Data Type Conversion'
   *  DataTypeConversion: '<S53>/Data Type Conversion1'
   */
  rtb_Add1_agop = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S53>/Switch' */
  if (rtu_In) {
    /* Sum: '<S53>/Add' incorporates:
     *  DataTypeConversion: '<S53>/Data Type Conversion'
     *  UnitDelay: '<S53>/Delay'
     */
    CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S53>/Min' */
    if (rtb_Add1_agop <= CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S53>/Add' */
      CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_agop;
    }

    /* End of MinMax: '<S53>/Min' */
  } else {
    /* Sum: '<S53>/Add' incorporates:
     *  Constant: '<S53>/Constant'
     *  UnitDelay: '<S53>/Delay'
     */
    CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S53>/Switch' */

  /* RelationalOperator: '<S53>/Relational Operator' incorporates:
   *  UnitDelay: '<S53>/Delay'
   */
  return CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_agop;
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S54>/DetectChange1'
 *    '<S65>/DetectChange1'
 *    '<S71>/DetectChange1'
 *    '<S84>/DetectChange1'
 *    '<S92>/DetectChange1'
 *    '<S99>/DetectChange1'
 *    '<S103>/DetectChange1'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReact_DetectChange_Init(ARID_DEF_DetectChange_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S56>/Delay' */
  CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = ((uint8_T)0U);
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * System reset for atomic system:
 *    '<S54>/DetectChange1'
 *    '<S65>/DetectChange1'
 *    '<S71>/DetectChange1'
 *    '<S84>/DetectChange1'
 *    '<S92>/DetectChange1'
 *    '<S99>/DetectChange1'
 *    '<S103>/DetectChange1'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReac_DetectChange_Reset(ARID_DEF_DetectChange_CtAp_Fl_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S56>/Delay' */
  CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = ((uint8_T)0U);
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S54>/DetectChange1'
 *    '<S65>/DetectChange1'
 *    '<S71>/DetectChange1'
 *    '<S84>/DetectChange1'
 *    '<S92>/DetectChange1'
 *    '<S99>/DetectChange1'
 *    '<S103>/DetectChange1'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

boolean_T CtAp_FltReactn_DetectChange(uint8_T rtu_U,
  ARID_DEF_DetectChange_CtAp_Fl_T *CtAp_FltReactn__ARID_DEF_arg)
{
  boolean_T rty_Y_0;

  /* RelationalOperator: '<S56>/FixPt Relational Operator' incorporates:
   *  Delay: '<S56>/Delay'
   */
  rty_Y_0 = (rtu_U != CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE);

  /* Update for Delay: '<S56>/Delay' */
  CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = rtu_U;
  return rty_Y_0;
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S45>/ErrDlyCfm'
 *    '<S57>/ErrDlyCfm'
 *    '<S47>/ErrDlyCfm'
 *    '<S80>/ErrDlyCfm'
 *    '<S50>/ErrDlyCfm'
 *    '<S51>/ErrDlyCfm'
 *    '<S52>/ErrDlyCfm'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReactn_ErrDlyCfm_Init(ARID_DEF_ErrDlyCfm_CtAp_FltRe_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* SystemInitialize for Atomic SubSystem: '<S54>/DetectChange1' */
  CtAp_FltReact_DetectChange_Init
    (&CtAp_FltReactn__ARID_DEF_arg->ARID_DEF_DetectChange1);

  /* End of SystemInitialize for SubSystem: '<S54>/DetectChange1' */
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * System reset for atomic system:
 *    '<S45>/ErrDlyCfm'
 *    '<S57>/ErrDlyCfm'
 *    '<S47>/ErrDlyCfm'
 *    '<S80>/ErrDlyCfm'
 *    '<S50>/ErrDlyCfm'
 *    '<S51>/ErrDlyCfm'
 *    '<S52>/ErrDlyCfm'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void CtAp_FltReactn_ErrDlyCfm_Reset(ARID_DEF_ErrDlyCfm_CtAp_FltRe_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  /* SystemReset for Atomic SubSystem: '<S54>/DetectChange1' */
  CtAp_FltReac_DetectChange_Reset
    (&CtAp_FltReactn__ARID_DEF_arg->ARID_DEF_DetectChange1);

  /* End of SystemReset for SubSystem: '<S54>/DetectChange1' */
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S45>/ErrDlyCfm'
 *    '<S57>/ErrDlyCfm'
 *    '<S47>/ErrDlyCfm'
 *    '<S80>/ErrDlyCfm'
 *    '<S50>/ErrDlyCfm'
 *    '<S51>/ErrDlyCfm'
 *    '<S52>/ErrDlyCfm'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

boolean_T CtAp_FltReactn_ErrDlyCfm(uint8_T rtu_In,
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T *CtAp_FltReactn__ARID_DEF_arg)
{
  /* local block i/o variables */
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rty_Out_0;

  /* Outputs for Atomic SubSystem: '<S54>/DetectChange1' */
  rtb_FixPtRelationalOperator = CtAp_FltReactn_DetectChange(rtu_In,
    &CtAp_FltReactn__ARID_DEF_arg->ARID_DEF_DetectChange1);

  /* End of Outputs for SubSystem: '<S54>/DetectChange1' */

  /* Logic: '<S54>/LogicalOperator' */
  rty_Out_0 = !rtb_FixPtRelationalOperator;
  return rty_Out_0;
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S47>/ATOM_U32TimeCnt'
 *    '<S51>/ATOM_U32TimeCnt'
 */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

boolean_T CtAp_FltReactn_ATOM_U32TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint32_T rtu_MaxTime_C, ARID_DEF_ATOM_U32TimeCnt_CtAp_T
  *CtAp_FltReactn__ARID_DEF_arg)
{
  uint32_T rtb_Add1_glr0;

  /* Sum: '<S68>/Add1' incorporates:
   *  DataTypeConversion: '<S68>/Data Type Conversion'
   *  DataTypeConversion: '<S68>/Data Type Conversion1'
   */
  rtb_Add1_glr0 = rtu_MaxTime_C + (uint32_T)rtu_RunStep_C;

  /* Switch: '<S68>/Switch' */
  if (rtu_In) {
    /* Sum: '<S68>/Add' incorporates:
     *  DataTypeConversion: '<S68>/Data Type Conversion'
     *  UnitDelay: '<S68>/Delay'
     */
    CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE += (uint32_T)rtu_RunStep_C;

    /* MinMax: '<S68>/Min' */
    if (rtb_Add1_glr0 <= CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S68>/Add' */
      CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = rtb_Add1_glr0;
    }

    /* End of MinMax: '<S68>/Min' */
  } else {
    /* Sum: '<S68>/Add' incorporates:
     *  Constant: '<S68>/Constant'
     *  UnitDelay: '<S68>/Delay'
     */
    CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE = 0U;
  }

  /* End of Switch: '<S68>/Switch' */

  /* RelationalOperator: '<S68>/Relational Operator' incorporates:
   *  UnitDelay: '<S68>/Delay'
   */
  return CtAp_FltReactn__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1_glr0;
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_FltReactn_START_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

void R_FltReactn_Cyclic_10ms(void)
{
  /* local block i/o variables */
  uint32_T rtb_Add;
  uint32_T rtb_Add1;
  uint16_T rtb_Add_otlv;
  uint16_T rtb_Add1_hdrw;
  uint16_T rtb_Add_dbee;
  uint16_T rtb_Add_hgji;
  uint16_T rtb_Add_myq2;
  uint16_T rtb_Add_fhlf;
  uint16_T rtb_Add_khdm;
  uint8_T rtb_TmpSignalConversionAtR_f5k5;
  uint8_T rtb_TmpSignalConversionAtR_if0s;
  uint8_T rtb_TmpSignalConversionAtR_msns;
  uint8_T rtb_TmpSignalConversionAtR_fb2t;
  uint8_T rtb_TmpSignalConversionAtR_hvuf;
  uint8_T rtb_TmpSignalConversionAtR_efkc;
  uint8_T rtb_TmpSignalConversionAtR_caoa;
  boolean_T rtb_ErrMgmt_DlyHvDwn_Flg;
  boolean_T rtb_LogicalOperator_jwbo;
  boolean_T rtb_LogicalOperator_du35;
  boolean_T rtb_LogicalOperator1_mdn4;
  boolean_T rtb_LogicalOperator_ea2i;
  boolean_T rtb_LogicalOperator_jynz;
  boolean_T rtb_LogicalOperator_auc4;
  boolean_T rtb_LogicalOperator1_msmw;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_LogicalOperator_dxl4;
  boolean_T rtb_LogicalOperator_mv0a;
  boolean_T rtb_RelationalOperator_fbsk;
  boolean_T rtb_RelationalOperator_pkgx;
  boolean_T rtb_RelationalOperator_oouu;
  dt_ComM_BMSSts01CRCInfo tmpRead;
  dt_ComM_BMSSts01E2ETimeoutInfo tmpRead_0;
  dt_ComM_MCUFailrCodCRCInfo tmpRead_1;
  dt_ComM_MCUFailrCodE2ETimeoutInfo tmpRead_2;
  dt_ErrMgmt_VehHVIL tmpRead_3;
  dt_FctSftyMon_AccrPedlTqOverFltInfo tmpRead_4;
  dt_FctSftyMon_CrpCtrlTqOverFltInfo tmpRead_5;
  dt_FctSftyMon_DesVehDecelSpdOverFltInfo tmpRead_9;
  real32_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_Switch1_knch;
  uint8_T rtb_Switch_pkap;
  uint8_T rtb_TmpSignalConversionAtR_ej1p;
  uint8_T rtb_TmpSignalConversionAtR_oixr;
  boolean_T rtb_ErrMgmt_ACCmpl_Flg;
  boolean_T rtb_ErrMgmt_ACStop_Flg;
  boolean_T rtb_ErrMgmt_DlyGrdtZeroTq_Flg;
  boolean_T rtb_ErrMgmt_EmgyHvDwn_Flg;
  boolean_T rtb_ErrMgmt_Fobd2Hv_Flg;
  boolean_T rtb_ErrMgmt_GrdtZeroTq_Flg;
  boolean_T rtb_ErrMgmt_HvNormDwn_Flg;
  boolean_T rtb_ErrMgmt_ImdtZeroTq_Flg;
  boolean_T rtb_ErrMgmt_V2LStop_Flg;
  boolean_T rtb_ErrMgmt_VehSpdLimErrLv5_Flg;
  boolean_T rtb_LogicalOperator6;
  boolean_T rtb_TmpSignalConversionAtR_clf0;
  boolean_T rtb_TmpSignalConversionAtR_e0nu;
  boolean_T rtb_TmpSignalConversionAtR_gcor;
  boolean_T rtb_TmpSignalConversionAtR_gnmx;
  boolean_T rtb_TmpSignalConversionAtR_hctp;
  boolean_T rtb_TmpSignalConversionAtR_kzzd;
  boolean_T tmpRead_6;
  boolean_T tmpRead_7;
  boolean_T tmpRead_8;
  boolean_T tmpRead_a;

  /* SignalConversion generated from: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
    (&rtb_TmpSignalConversionAtR_ej1p);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum
    (&rtb_TmpSignalConversionAtR_f5k5);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_if0s);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_msns);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_fb2t);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_hvuf);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_kzzd);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_gnmx);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
    (&rtb_TmpSignalConversionAtR_hctp);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_efkc);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum'
   */
  (void)Rte_Read_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum
    (&rtb_TmpSignalConversionAtR_caoa);

  /* SignalConversion generated from: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (&rtb_TmpSignalConversionAtR_oixr);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update'
   */
  (void)Rte_Read_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update
    (&rtb_TmpSignalConversionAtR_clf0);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update'
   */
  (void)Rte_Read_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update
    (&rtb_TmpSignalConversionAtR_gcor);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update'
   */
  (void)Rte_Read_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update
    (&rtb_TmpSignalConversionAtR_e0nu);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Logic: '<S2>/LogicalOperator' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S26>/Constant'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   */
  ErrMgmt_ChrgInPlug_Flg = ((rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_Init)) && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_OffPlug)));

  /* Logic: '<S2>/LogicalOperator6' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *
   * Block requirements for '<S2>/LogicalOperator6':
   *  1. VCU_SW_Requirements_Specification.slreqx:6308
   */
  rtb_LogicalOperator6 = ((rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_Init)) && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_OffPlug)) && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_DCPlugDetected)) && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_DCCharging)) && (rtb_TmpSignalConversionAtR_ej1p != ((uint8_T)
    FltReactn_DCPreheating)));

  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_BMSErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_BMSErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:710
   *  2. VCU_SW_Requirements_Specification.slreqx:705
   *  3. VCU_SW_Requirements_Specification.slreqx:706
   *  4. VCU_SW_Requirements_Specification.slreqx:707
   *  5. VCU_SW_Requirements_Specification.slreqx:708
   *  6. VCU_SW_Requirements_Specification.slreqx:709
   *  7. VCU_SW_Requirements_Specification.slreqx:710
   *  8. VCU_SW_Requirements_Specification.slreqx:116107
   *  9. VCU_SW_Requirements_Specification.slreqx:116113
   */
  /* Outputs for Atomic SubSystem: '<S45>/ErrDlyCfm'
   *
   * Block requirements for '<S45>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  rtb_RelationalOperator_fbsk = CtAp_FltReactn_ErrDlyCfm
    (rtb_TmpSignalConversionAtR_if0s,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_ppxr);

  /* End of Outputs for SubSystem: '<S45>/ErrDlyCfm' */

  /* Logic: '<S45>/LogicalOperator'
   *
   * Block requirements for '<S45>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:705
   *  2. VCU_SW_Requirements_Specification.slreqx:706
   *  3. VCU_SW_Requirements_Specification.slreqx:707
   *  4. VCU_SW_Requirements_Specification.slreqx:708
   *  5. VCU_SW_Requirements_Specification.slreqx:709
   *  6. VCU_SW_Requirements_Specification.slreqx:710
   */
  rtb_LogicalOperator_mv0a = (rtb_TmpSignalConversionAtR_clf0 &&
    rtb_RelationalOperator_fbsk);

  /* Sum: '<S45>/Add' incorporates:
   *  Constant: '<S45>/Constant3'
   *  Constant: '<S45>/Constant4'
   */
  rtb_Add_khdm = (uint16_T)(FltReactn_BMSErrCfm_CFG - ((uint16_T)FltReactn_Cycle));

  /* Outputs for Atomic SubSystem: '<S45>/ATOM_TimeCnt' */
  /* Constant: '<S45>/Constant3' */
  rtb_RelationalOperator_fbsk = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_LogicalOperator_mv0a, ((uint16_T)FltReactn_Cycle), rtb_Add_khdm,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_llw0);

  /* End of Outputs for SubSystem: '<S45>/ATOM_TimeCnt' */

  /* Switch: '<S45>/Switch' incorporates:
   *  Delay: '<S45>/Delay'
   */
  if (rtb_RelationalOperator_fbsk) {
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_otrr = rtb_TmpSignalConversionAtR_if0s;
  }

  /* End of Switch: '<S45>/Switch' */

  /* Switch: '<S45>/Switch1' incorporates:
   *  Constant: '<S45>/Constant2'
   *  Delay: '<S45>/Delay'
   *
   * Block requirements for '<S45>/Constant2':
   *  1. VCU_SW_Requirements_Specification.slreqx:710
   */
  if (rtb_TmpSignalConversionAtR_kzzd) {
    rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlZero);
  } else {
    rtb_Switch_pkap = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_otrr;
  }

  /* Chart: '<S45>/ErrMgmt_BMSErrorLevelSel' incorporates:
   *  Switch: '<S45>/Switch1'
   *
   * Block requirements for '<S45>/ErrMgmt_BMSErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   *  2. VCU_SW_Requirements_Specification.slreqx:705
   *  3. VCU_SW_Requirements_Specification.slreqx:706
   *  4. VCU_SW_Requirements_Specification.slreqx:707
   *  5. VCU_SW_Requirements_Specification.slreqx:708
   *  6. VCU_SW_Requirements_Specification.slreqx:709
   *  7. VCU_SW_Requirements_Specification.slreqx:116113
   *  8. VCU_SW_Requirements_Specification.slreqx:710
   */
  switch (rtb_Switch_pkap) {
   case ((uint8_T)FltReactn_U8LvlFour):
    ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFifteen);
    break;

   case ((uint8_T)FltReactn_U8LvlThree):
    ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
    break;

   case ((uint8_T)FltReactn_U8LvlTwo):
    if (ErrMgmt_ChrgInPlug_Flg) {
      ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
    } else {
      ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlSix);
    }
    break;

   case ((uint8_T)FltReactn_U8LvlOne):
    ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
    break;

   default:
    ErrMgmt_BMSErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
    break;
  }

  /* End of Chart: '<S45>/ErrMgmt_BMSErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_BMSErrorCheckSys' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_CrashErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:744
   *  2. VCU_SW_Requirements_Specification.slreqx:745
   *  3. VCU_SW_Requirements_Specification.slreqx:746
   *  4. VCU_SW_Requirements_Specification.slreqx:116161
   *  5. VCU_SW_Requirements_Specification.slreqx:116164
   */
  /* Logic: '<S46>/LogicalOperator' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  Constant: '<S60>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S59>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   */
  ErrMgmt_HvEnable = ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_Standby)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_HvReady)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_DrvReady)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_PreHeating)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_Init)));

  /* Outputs for Enabled SubSystem: '<S46>/ACUCrashEnable' incorporates:
   *  EnablePort: '<S57>/Enable'
   *
   * Block requirements for '<S46>/ACUCrashEnable':
   *  1. VCU_SW_Requirements_Specification.slreqx:744
   *  2. VCU_SW_Requirements_Specification.slreqx:745
   *  3. VCU_SW_Requirements_Specification.slreqx:746
   */
  if (ErrMgmt_HvEnable) {
    if (!CtAp_FltReactn_ARID_DEF.ACUCrashEnable_MODE) {
      /* InitializeConditions for Delay: '<S57>/Delay' */
      CtAp_FltReactn_ARID_DEF.Delay_DSTATE_arei = ((uint8_T)0U);

      /* SystemReset for Atomic SubSystem: '<S57>/ErrDlyCfm'
       *
       * Block requirements for '<S57>/ErrDlyCfm':
       *  1. VCU_SW_Requirements_Specification.slreqx:116161
       */
      CtAp_FltReactn_ErrDlyCfm_Reset
        (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_merl);

      /* End of SystemReset for SubSystem: '<S57>/ErrDlyCfm' */

      /* SystemReset for Atomic SubSystem: '<S57>/ATOM_TimeCnt' */
      CtAp_FltReac_ATOM_TimeCnt_Reset
        (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_nz4o);

      /* End of SystemReset for SubSystem: '<S57>/ATOM_TimeCnt' */
      CtAp_FltReactn_ARID_DEF.ACUCrashEnable_MODE = true;
    }

    /* Inport: '<Root>/RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate' */
    (void)Rte_Read_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate
      (&rtb_ErrMgmt_Fobd2Hv_Flg);

    /* Outputs for Atomic SubSystem: '<S57>/ErrDlyCfm'
     *
     * Block requirements for '<S57>/ErrDlyCfm':
     *  1. VCU_SW_Requirements_Specification.slreqx:116161
     */
    rtb_RelationalOperator_fbsk = CtAp_FltReactn_ErrDlyCfm
      (rtb_TmpSignalConversionAtR_f5k5,
       &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_merl);

    /* End of Outputs for SubSystem: '<S57>/ErrDlyCfm' */

    /* Logic: '<S57>/LogicalOperator' */
    rtb_LogicalOperator_dxl4 = (rtb_ErrMgmt_Fobd2Hv_Flg &&
      rtb_RelationalOperator_fbsk);

    /* Sum: '<S57>/Add' incorporates:
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     */
    rtb_Add_fhlf = (uint16_T)(FltReactn_CrashErrCfm_CFG - ((uint16_T)
      FltReactn_Cycle));

    /* Outputs for Atomic SubSystem: '<S57>/ATOM_TimeCnt' */
    /* Constant: '<S57>/Constant' */
    rtb_RelationalOperator_fbsk = CtAp_FltReactn_ATOM_TimeCnt
      (rtb_LogicalOperator_dxl4, ((uint16_T)FltReactn_Cycle), rtb_Add_fhlf,
       &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_nz4o);

    /* End of Outputs for SubSystem: '<S57>/ATOM_TimeCnt' */

    /* Switch: '<S57>/Switch' */
    if (rtb_RelationalOperator_fbsk) {
      /* Switch: '<S57>/Switch' */
      CtAp_FltReactn_ARID_DEF.Switch_d24b = rtb_TmpSignalConversionAtR_f5k5;
    } else {
      /* Switch: '<S57>/Switch' incorporates:
       *  Delay: '<S57>/Delay'
       */
      CtAp_FltReactn_ARID_DEF.Switch_d24b =
        CtAp_FltReactn_ARID_DEF.Delay_DSTATE_arei;
    }

    /* End of Switch: '<S57>/Switch' */

    /* Update for Delay: '<S57>/Delay' */
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_arei =
      CtAp_FltReactn_ARID_DEF.Switch_d24b;
  } else if (CtAp_FltReactn_ARID_DEF.ACUCrashEnable_MODE) {
    /* Disable for Switch: '<S57>/Switch' incorporates:
     *  Outport: '<S57>/ComM_ACUCrashOutpSts'
     */
    CtAp_FltReactn_ARID_DEF.Switch_d24b = ((uint8_T)0U);
    CtAp_FltReactn_ARID_DEF.ACUCrashEnable_MODE = false;
  } else {
    /* no actions */
  }

  /* End of Outputs for SubSystem: '<S46>/ACUCrashEnable' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
    (&rtb_ErrMgmt_V2LStop_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_CrashErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:744
   *  2. VCU_SW_Requirements_Specification.slreqx:745
   *  3. VCU_SW_Requirements_Specification.slreqx:746
   *  4. VCU_SW_Requirements_Specification.slreqx:116161
   *  5. VCU_SW_Requirements_Specification.slreqx:116164
   */
  /* Chart: '<S46>/ErrMgmt_CrashErrorLevelSel' incorporates:
   *  Delay: '<S46>/Delay1'
   *
   * Block requirements for '<S46>/ErrMgmt_CrashErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116161
   *  2. VCU_SW_Requirements_Specification.slreqx:744
   *  3. VCU_SW_Requirements_Specification.slreqx:745
   *  4. VCU_SW_Requirements_Specification.slreqx:116164
   *  5. VCU_SW_Requirements_Specification.slreqx:746
   */
  if (rtb_ErrMgmt_V2LStop_Flg) {
    ErrMgmt_CrashErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch_d24b != ((uint8_T)
               FltReactn_U8LvlZero)) && ((rtb_TmpSignalConversionAtR_oixr ==
               ((uint8_T)FltReactn_HvReady)) || (rtb_TmpSignalConversionAtR_oixr
    == ((uint8_T)FltReactn_DrvReady)) || (rtb_TmpSignalConversionAtR_oixr ==
               ((uint8_T)FltReactn_PreHeating)))) {
    ErrMgmt_CrashErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFifteen);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch_d24b != ((uint8_T)
               FltReactn_U8LvlZero)) && ((rtb_TmpSignalConversionAtR_oixr ==
               ((uint8_T)FltReactn_Standby)) || (rtb_TmpSignalConversionAtR_oixr
    == ((uint8_T)FltReactn_Init)))) {
    ErrMgmt_CrashErrLvl_Enum = ((uint8_T)FltReactn_U8LvlNine);
  } else {
    ErrMgmt_CrashErrLvl_Enum = CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_bwp5;
  }

  /* End of Chart: '<S46>/ErrMgmt_CrashErrorLevelSel' */

  /* Update for Delay: '<S46>/Delay1' */
  CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_bwp5 = ErrMgmt_CrashErrLvl_Enum;

  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_DCDCErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_DCDCErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:717
   *  2. VCU_SW_Requirements_Specification.slreqx:718
   *  3. VCU_SW_Requirements_Specification.slreqx:719
   *  4. VCU_SW_Requirements_Specification.slreqx:11820
   *  5. VCU_SW_Requirements_Specification.slreqx:720
   *  6. VCU_SW_Requirements_Specification.slreqx:721
   *  7. VCU_SW_Requirements_Specification.slreqx:722
   *  8. VCU_SW_Requirements_Specification.slreqx:116123
   *  9. VCU_SW_Requirements_Specification.slreqx:116130
   */
  /* Outputs for Atomic SubSystem: '<S47>/ErrDlyCfm'
   *
   * Block requirements for '<S47>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116123
   */
  rtb_RelationalOperator_oouu = CtAp_FltReactn_ErrDlyCfm
    (rtb_TmpSignalConversionAtR_fb2t,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_fqdq);

  /* End of Outputs for SubSystem: '<S47>/ErrDlyCfm' */

  /* Logic: '<S47>/LogicalOperator'
   *
   * Block requirements for '<S47>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:717
   *  2. VCU_SW_Requirements_Specification.slreqx:718
   *  3. VCU_SW_Requirements_Specification.slreqx:719
   *  4. VCU_SW_Requirements_Specification.slreqx:11820
   *  5. VCU_SW_Requirements_Specification.slreqx:720
   *  6. VCU_SW_Requirements_Specification.slreqx:721
   *  7. VCU_SW_Requirements_Specification.slreqx:722
   */
  rtb_LogicalOperator_auc4 = (rtb_TmpSignalConversionAtR_gcor &&
    rtb_RelationalOperator_oouu);

  /* Sum: '<S47>/Add' incorporates:
   *  Constant: '<S47>/Constant'
   *  Constant: '<S47>/Constant1'
   */
  rtb_Add_myq2 = (uint16_T)(FltReactn_DCDCErrCfm_CFG - ((uint16_T)
    FltReactn_Cycle));

  /* Outputs for Atomic SubSystem: '<S47>/ATOM_TimeCnt' */
  /* Constant: '<S47>/Constant' */
  rtb_RelationalOperator_fbsk = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_LogicalOperator_auc4, ((uint16_T)FltReactn_Cycle), rtb_Add_myq2,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_g1sm);

  /* End of Outputs for SubSystem: '<S47>/ATOM_TimeCnt' */

  /* Switch: '<S47>/Switch' incorporates:
   *  Delay: '<S47>/Delay'
   */
  if (rtb_RelationalOperator_fbsk) {
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_mate = rtb_TmpSignalConversionAtR_fb2t;
  }

  /* End of Switch: '<S47>/Switch' */

  /* Logic: '<S47>/LogicalOperator1' incorporates:
   *  Constant: '<S69>/Constant'
   *  RelationalOperator: '<S69>/Compare'
   *
   * Block requirements for '<S47>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:717
   *  2. VCU_SW_Requirements_Specification.slreqx:718
   *  3. VCU_SW_Requirements_Specification.slreqx:719
   *  4. VCU_SW_Requirements_Specification.slreqx:11820
   *  5. VCU_SW_Requirements_Specification.slreqx:720
   *  6. VCU_SW_Requirements_Specification.slreqx:721
   *  7. VCU_SW_Requirements_Specification.slreqx:722
   */
  rtb_LogicalOperator1_msmw = (rtb_TmpSignalConversionAtR_gcor &&
    (rtb_TmpSignalConversionAtR_fb2t == ((uint8_T)FltReactn_U8LvlTwo)));

  /* Sum: '<S47>/Add1' incorporates:
   *  Constant: '<S47>/Constant4'
   *  Constant: '<S47>/Constant6'
   */
  rtb_Add1 = (uint32_T)FltReactn_DCDCErrCfm_CFG + FltReactn_DCDCErrDlyCfm_CFG;

  /* Outputs for Atomic SubSystem: '<S47>/ATOM_U32TimeCnt' */
  /* Constant: '<S47>/Constant5' */
  rtb_RelationalOperator = CtAp_FltReactn_ATOM_U32TimeCnt
    (rtb_LogicalOperator1_msmw, ((uint16_T)FltReactn_Cycle), rtb_Add1,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_U32TimeCnt_g2ml);

  /* End of Outputs for SubSystem: '<S47>/ATOM_U32TimeCnt' */

  /* Switch: '<S47>/Switch3' incorporates:
   *  Constant: '<S47>/Constant8'
   *  Delay: '<S47>/Delay1'
   */
  if (rtb_TmpSignalConversionAtR_gnmx) {
    CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_augr = FltReactn_False;

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S47>/Constant2'
     *  Constant: '<S47>/Constant8'
     *  Delay: '<S47>/Delay1'
     *
     * Block requirements for '<S47>/Constant2':
     *  1. VCU_SW_Requirements_Specification.slreqx:722
     */
    rtb_Switch1_knch = ((uint8_T)FltReactn_U8LvlZero);
  } else {
    /* Switch: '<S47>/Switch2' */
    if (rtb_RelationalOperator) {
      /* Delay: '<S47>/Delay1' incorporates:
       *  Switch: '<S47>/Switch2'
       */
      CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_augr = rtb_RelationalOperator;
    } else if (CtAp_FltReactn_ARID_DEF.Delay_DSTATE_mate == ((uint8_T)
                FltReactn_U8LvlTwo)) {
    } else {
      /* Delay: '<S47>/Delay1' incorporates:
       *  Constant: '<S47>/Constant7'
       *  Switch: '<S47>/Switch2'
       *  Switch: '<S47>/Switch4'
       */
      CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_augr = FltReactn_False;
    }

    /* End of Switch: '<S47>/Switch2' */

    /* Switch: '<S47>/Switch1' incorporates:
     *  Delay: '<S47>/Delay'
     */
    rtb_Switch1_knch = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_mate;
  }

  /* End of Switch: '<S47>/Switch3' */

  /* Chart: '<S47>/ErrMgmt_DCDCErrorLevelSel' incorporates:
   *  Delay: '<S47>/Delay1'
   *
   * Block requirements for '<S47>/ErrMgmt_DCDCErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116123
   *  2. VCU_SW_Requirements_Specification.slreqx:717
   *  3. VCU_SW_Requirements_Specification.slreqx:718
   *  4. VCU_SW_Requirements_Specification.slreqx:719
   *  5. VCU_SW_Requirements_Specification.slreqx:11820
   *  6. VCU_SW_Requirements_Specification.slreqx:720
   *  7. VCU_SW_Requirements_Specification.slreqx:721
   *  8. VCU_SW_Requirements_Specification.slreqx:116130
   *  9. VCU_SW_Requirements_Specification.slreqx:722
   */
  if (rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlThree)) {
    if (ErrMgmt_ChrgInPlug_Flg) {
      ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
    } else {
      ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlSix);
    }
  } else if (CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_augr &&
             ErrMgmt_ChrgInPlug_Flg) {
    ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
  } else {
    switch (rtb_Switch1_knch) {
     case ((uint8_T)FltReactn_U8LvlTwo):
      if (ErrMgmt_ChrgInPlug_Flg) {
        ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
      } else {
        ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFive);
      }
      break;

     case ((uint8_T)FltReactn_U8LvlOne):
      ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
      break;

     default:
      ErrMgmt_DCDCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
      break;
    }
  }

  /* End of Chart: '<S47>/ErrMgmt_DCDCErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_DCDCErrorCheckSys' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus' */
  (void)Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(&tmpRead_3);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_HVILErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_HVILErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:747
   *  2. VCU_SW_Requirements_Specification.slreqx:748
   *  3. VCU_SW_Requirements_Specification.slreqx:749
   *  4. VCU_SW_Requirements_Specification.slreqx:750
   *  5. VCU_SW_Requirements_Specification.slreqx:751
   *  6. VCU_SW_Requirements_Specification.slreqx:116166
   *  7. VCU_SW_Requirements_Specification.slreqx:116171
   */
  /* RelationalOperator: '<S95>/Relational Operator' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  Constant: '<S76>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Logic: '<S48>/LogicalOperator'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   *
   * Block requirements for '<S48>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:747
   *  2. VCU_SW_Requirements_Specification.slreqx:748
   *  3. VCU_SW_Requirements_Specification.slreqx:749
   *  4. VCU_SW_Requirements_Specification.slreqx:750
   *  5. VCU_SW_Requirements_Specification.slreqx:751
   */
  rtb_RelationalOperator_oouu = ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_Standby)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_HvReady)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_DrvReady)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_PreHeating)) || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
    FltReactn_Init)));

  /* Switch: '<S48>/Switch' incorporates:
   *  Constant: '<S48>/Constant'
   */
  if (rtb_RelationalOperator_oouu) {
    rtb_TmpSignalConversionAtR_gcor = tmpRead_3.ErrMgmt_ErrResVehHVIL;
  } else {
    rtb_TmpSignalConversionAtR_gcor = false;
  }

  /* Chart: '<S48>/ErrMgmt_HVILErrorLevelSel' incorporates:
   *  Switch: '<S48>/Switch'
   *
   * Block requirements for '<S48>/ErrMgmt_HVILErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116166
   *  2. VCU_SW_Requirements_Specification.slreqx:747
   *  3. VCU_SW_Requirements_Specification.slreqx:748
   *  4. VCU_SW_Requirements_Specification.slreqx:749
   *  5. VCU_SW_Requirements_Specification.slreqx:750
   *  6. VCU_SW_Requirements_Specification.slreqx:116171
   *  7. VCU_SW_Requirements_Specification.slreqx:751
   */
  if (rtb_TmpSignalConversionAtR_gcor) {
    if ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_HvReady)) ||
        (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_PreHeating)) ||
        ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_DrvReady)) &&
         (rtb_TmpSignalConversionAtRTE_R_ <= FltReactn_HVILErrVehSpdCfm_CFG))) {
      ErrMgmt_HVILErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
    } else if (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_DrvReady))
    {
      ErrMgmt_HVILErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTen);
    } else {
      ErrMgmt_HVILErrLvl_Enum = ((uint8_T)FltReactn_U8LvlNine);
    }
  } else {
    ErrMgmt_HVILErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
  }

  /* End of Chart: '<S48>/ErrMgmt_HVILErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_HVILErrorCheckSys' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_InslaErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:734
   *  2. VCU_SW_Requirements_Specification.slreqx:735
   *  3. VCU_SW_Requirements_Specification.slreqx:736
   *  4. VCU_SW_Requirements_Specification.slreqx:737
   *  5. VCU_SW_Requirements_Specification.slreqx:738
   *  6. VCU_SW_Requirements_Specification.slreqx:739
   *  7. VCU_SW_Requirements_Specification.slreqx:740
   *  8. VCU_SW_Requirements_Specification.slreqx:741
   *  9. VCU_SW_Requirements_Specification.slreqx:742
   *  10. VCU_SW_Requirements_Specification.slreqx:743
   *  11. VCU_SW_Requirements_Specification.slreqx:116148
   *  12. VCU_SW_Requirements_Specification.slreqx:116154
   *  13. VCU_SW_Requirements_Specification.slreqx:116159
   */
  /* Outputs for Enabled SubSystem: '<S49>/BMSInslaErrLvlCfm' incorporates:
   *  EnablePort: '<S80>/Enable'
   *
   * Block requirements for '<S49>/BMSInslaErrLvlCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:734
   *  2. VCU_SW_Requirements_Specification.slreqx:735
   *  3. VCU_SW_Requirements_Specification.slreqx:736
   *  4. VCU_SW_Requirements_Specification.slreqx:737
   *  5. VCU_SW_Requirements_Specification.slreqx:738
   *  6. VCU_SW_Requirements_Specification.slreqx:739
   *  7. VCU_SW_Requirements_Specification.slreqx:740
   *  8. VCU_SW_Requirements_Specification.slreqx:741
   *  9. VCU_SW_Requirements_Specification.slreqx:742
   *  10. VCU_SW_Requirements_Specification.slreqx:743
   */
  /* Logic: '<S82>/LogicalOperator' incorporates:
   *  Constant: '<S80>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S90>/Constant'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   */
  if ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Standby)) ||
      (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_HvReady)) ||
      (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_DrvReady)) ||
      (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_PreHeating)) ||
      (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Init))) {
    if (!CtAp_FltReactn_ARID_DEF.BMSInslaErrLvlCfm_MODE) {
      /* InitializeConditions for Delay: '<S80>/Delay' */
      CtAp_FltReactn_ARID_DEF.Delay_DSTATE_cq5u = ((uint8_T)0U);

      /* SystemReset for Atomic SubSystem: '<S80>/ErrDlyCfm'
       *
       * Block requirements for '<S80>/ErrDlyCfm':
       *  1. VCU_SW_Requirements_Specification.slreqx:116107
       */
      CtAp_FltReactn_ErrDlyCfm_Reset
        (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_pbm3);

      /* End of SystemReset for SubSystem: '<S80>/ErrDlyCfm' */

      /* SystemReset for Atomic SubSystem: '<S80>/ATOM_TimeCnt' */
      CtAp_FltReac_ATOM_TimeCnt_Reset
        (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cv5h);

      /* End of SystemReset for SubSystem: '<S80>/ATOM_TimeCnt' */
      CtAp_FltReactn_ARID_DEF.BMSInslaErrLvlCfm_MODE = true;
    }

    /* Outputs for Atomic SubSystem: '<S80>/ErrDlyCfm'
     *
     * Block requirements for '<S80>/ErrDlyCfm':
     *  1. VCU_SW_Requirements_Specification.slreqx:116107
     */
    rtb_RelationalOperator_oouu = CtAp_FltReactn_ErrDlyCfm
      (rtb_TmpSignalConversionAtR_msns,
       &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_pbm3);

    /* End of Outputs for SubSystem: '<S80>/ErrDlyCfm' */

    /* Logic: '<S80>/LogicalOperator' */
    rtb_LogicalOperator_jynz = (rtb_TmpSignalConversionAtR_clf0 &&
      rtb_RelationalOperator_oouu);

    /* Sum: '<S80>/Add' incorporates:
     *  Constant: '<S80>/Constant'
     *  Constant: '<S80>/Constant1'
     */
    rtb_Add_hgji = (uint16_T)(FltReactn_BMSInslaErrCfm_CFG - ((uint16_T)
      FltReactn_Cycle));

    /* Outputs for Atomic SubSystem: '<S80>/ATOM_TimeCnt' */
    rtb_RelationalOperator_oouu = CtAp_FltReactn_ATOM_TimeCnt
      (rtb_LogicalOperator_jynz, ((uint16_T)FltReactn_Cycle), rtb_Add_hgji,
       &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cv5h);

    /* End of Outputs for SubSystem: '<S80>/ATOM_TimeCnt' */

    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S80>/Constant'
     */
    if (rtb_RelationalOperator_oouu) {
      /* Switch: '<S80>/Switch' */
      CtAp_FltReactn_ARID_DEF.Switch = rtb_TmpSignalConversionAtR_msns;
    } else {
      /* Switch: '<S80>/Switch' incorporates:
       *  Delay: '<S80>/Delay'
       */
      CtAp_FltReactn_ARID_DEF.Switch = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_cq5u;
    }

    /* End of Switch: '<S80>/Switch' */

    /* Update for Delay: '<S80>/Delay' */
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_cq5u = CtAp_FltReactn_ARID_DEF.Switch;
  } else if (CtAp_FltReactn_ARID_DEF.BMSInslaErrLvlCfm_MODE) {
    /* Disable for Switch: '<S80>/Switch' incorporates:
     *  Outport: '<S80>/ComM_BMSInslaErrLvl'
     */
    CtAp_FltReactn_ARID_DEF.Switch = ((uint8_T)0U);
    CtAp_FltReactn_ARID_DEF.BMSInslaErrLvlCfm_MODE = false;
  } else {
    /* no actions */
  }

  /* End of Logic: '<S82>/LogicalOperator' */
  /* End of Outputs for SubSystem: '<S49>/BMSInslaErrLvlCfm' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate' */
  (void)Rte_Read_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate
    (&rtb_ErrMgmt_ACStop_Flg);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
    (&rtb_ErrMgmt_VehSpdLimErrLv5_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_InslaErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:734
   *  2. VCU_SW_Requirements_Specification.slreqx:735
   *  3. VCU_SW_Requirements_Specification.slreqx:736
   *  4. VCU_SW_Requirements_Specification.slreqx:737
   *  5. VCU_SW_Requirements_Specification.slreqx:738
   *  6. VCU_SW_Requirements_Specification.slreqx:739
   *  7. VCU_SW_Requirements_Specification.slreqx:740
   *  8. VCU_SW_Requirements_Specification.slreqx:741
   *  9. VCU_SW_Requirements_Specification.slreqx:742
   *  10. VCU_SW_Requirements_Specification.slreqx:743
   *  11. VCU_SW_Requirements_Specification.slreqx:116148
   *  12. VCU_SW_Requirements_Specification.slreqx:116154
   *  13. VCU_SW_Requirements_Specification.slreqx:116159
   */
  /* Chart: '<S49>/ErrMgmt_InslaErrorLevelSel' incorporates:
   *  Delay: '<S49>/Delay1'
   *
   * Block requirements for '<S49>/ErrMgmt_InslaErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116148
   *  2. VCU_SW_Requirements_Specification.slreqx:734
   *  3. VCU_SW_Requirements_Specification.slreqx:735
   *  4. VCU_SW_Requirements_Specification.slreqx:736
   *  5. VCU_SW_Requirements_Specification.slreqx:737
   *  6. VCU_SW_Requirements_Specification.slreqx:738
   *  7. VCU_SW_Requirements_Specification.slreqx:116154
   *  8. VCU_SW_Requirements_Specification.slreqx:739
   *  9. VCU_SW_Requirements_Specification.slreqx:740
   *  10. VCU_SW_Requirements_Specification.slreqx:741
   *  11. VCU_SW_Requirements_Specification.slreqx:742
   *  12. VCU_SW_Requirements_Specification.slreqx:116159
   *  13. VCU_SW_Requirements_Specification.slreqx:743
   */
  if (rtb_TmpSignalConversionAtR_kzzd) {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlThree))
             && ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_HvReady))
                 || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
                FltReactn_PreHeating)) || ((rtb_TmpSignalConversionAtR_oixr ==
                ((uint8_T)FltReactn_DrvReady)) &&
               (rtb_TmpSignalConversionAtRTE_R_ <=
                FltReactn_BMSInslaErrVehSpdCfm_CFG)))) {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlThree))
             && (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_DrvReady)))
  {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTen);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlThree))
             && ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Standby))
                 || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Init))))
  {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlNine);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlTwo)) &&
             (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_DrvReady)))
  {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFive);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlTwo)) &&
             (((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_HvReady))
               && ErrMgmt_ChrgInPlug_Flg) || (rtb_TmpSignalConversionAtR_oixr ==
    ((uint8_T)FltReactn_PreHeating)))) {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
  } else if ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlOne)) ||
             ((CtAp_FltReactn_ARID_DEF.Switch == ((uint8_T)FltReactn_U8LvlTwo)) &&
              ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Init)) ||
               (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Standby))
               || (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)
      FltReactn_HvReady))))) {
    ErrMgmt_InslaErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
  } else {
    ErrMgmt_InslaErrLvl_Enum = CtAp_FltReactn_ARID_DEF.Delay1_DSTATE;
  }

  /* End of Chart: '<S49>/ErrMgmt_InslaErrorLevelSel' */

  /* Update for Delay: '<S49>/Delay1' */
  CtAp_FltReactn_ARID_DEF.Delay1_DSTATE = ErrMgmt_InslaErrLvl_Enum;

  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_MCUErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_MCUErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:723
   *  2. VCU_SW_Requirements_Specification.slreqx:724
   *  3. VCU_SW_Requirements_Specification.slreqx:725
   *  4. VCU_SW_Requirements_Specification.slreqx:726
   *  5. VCU_SW_Requirements_Specification.slreqx:727
   *  6. VCU_SW_Requirements_Specification.slreqx:728
   *  7. VCU_SW_Requirements_Specification.slreqx:116132
   *  8. VCU_SW_Requirements_Specification.slreqx:116138
   */
  /* Outputs for Atomic SubSystem: '<S50>/ErrDlyCfm'
   *
   * Block requirements for '<S50>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116132
   */
  rtb_RelationalOperator_oouu = CtAp_FltReactn_ErrDlyCfm
    (rtb_TmpSignalConversionAtR_hvuf,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_cxar);

  /* End of Outputs for SubSystem: '<S50>/ErrDlyCfm' */

  /* Logic: '<S50>/LogicalOperator'
   *
   * Block requirements for '<S50>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:723
   *  2. VCU_SW_Requirements_Specification.slreqx:724
   *  3. VCU_SW_Requirements_Specification.slreqx:725
   *  4. VCU_SW_Requirements_Specification.slreqx:726
   *  5. VCU_SW_Requirements_Specification.slreqx:727
   *  6. VCU_SW_Requirements_Specification.slreqx:728
   */
  rtb_LogicalOperator_ea2i = (rtb_ErrMgmt_ACStop_Flg &&
    rtb_RelationalOperator_oouu);

  /* Sum: '<S50>/Add' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S50>/Constant1'
   */
  rtb_Add_dbee = (uint16_T)(FltReactn_MCUErrCfm_CFG - ((uint16_T)FltReactn_Cycle));

  /* Outputs for Atomic SubSystem: '<S50>/ATOM_TimeCnt' */
  /* Constant: '<S50>/Constant' */
  rtb_RelationalOperator_oouu = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_LogicalOperator_ea2i, ((uint16_T)FltReactn_Cycle), rtb_Add_dbee,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of Outputs for SubSystem: '<S50>/ATOM_TimeCnt' */

  /* Switch: '<S50>/Switch' incorporates:
   *  Delay: '<S50>/Delay'
   */
  if (rtb_RelationalOperator_oouu) {
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_days = rtb_TmpSignalConversionAtR_hvuf;
  }

  /* End of Switch: '<S50>/Switch' */

  /* Chart: '<S50>/ErrMgmt_MCUErrorLevelSel' incorporates:
   *  Switch: '<S50>/Switch1'
   *
   * Block requirements for '<S50>/ErrMgmt_MCUErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116132
   *  2. VCU_SW_Requirements_Specification.slreqx:723
   *  3. VCU_SW_Requirements_Specification.slreqx:724
   *  4. VCU_SW_Requirements_Specification.slreqx:725
   *  5. VCU_SW_Requirements_Specification.slreqx:726
   *  6. VCU_SW_Requirements_Specification.slreqx:727
   *  7. VCU_SW_Requirements_Specification.slreqx:116138
   *  8. VCU_SW_Requirements_Specification.slreqx:728
   */
  if (ErrMgmt_ChrgInPlug_Flg == FltReactn_False) {
    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S50>/Constant2'
     *  Delay: '<S50>/Delay'
     *
     * Block requirements for '<S50>/Constant2':
     *  1. VCU_SW_Requirements_Specification.slreqx:728
     */
    if (rtb_ErrMgmt_VehSpdLimErrLv5_Flg) {
      rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlZero);
    } else {
      rtb_Switch_pkap = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_days;
    }

    switch (rtb_Switch_pkap) {
     case ((uint8_T)FltReactn_U8LvlFive):
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEight);
      break;

     case ((uint8_T)FltReactn_U8LvlFour):
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlSeven);
      break;

     case ((uint8_T)FltReactn_U8LvlThree):
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlSix);
      break;

     case ((uint8_T)FltReactn_U8LvlTwo):
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFive);
      break;

     case ((uint8_T)FltReactn_U8LvlOne):
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
      break;

     default:
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
      break;
    }
  } else {
    if (rtb_ErrMgmt_VehSpdLimErrLv5_Flg) {
      /* Switch: '<S50>/Switch1' incorporates:
       *  Constant: '<S50>/Constant2'
       *
       * Block requirements for '<S50>/Constant2':
       *  1. VCU_SW_Requirements_Specification.slreqx:728
       */
      rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlZero);
    } else {
      /* Switch: '<S50>/Switch1' incorporates:
       *  Delay: '<S50>/Delay'
       */
      rtb_Switch_pkap = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_days;
    }

    if (rtb_Switch_pkap != ((uint8_T)FltReactn_U8LvlZero)) {
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
    } else {
      ErrMgmt_MCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
    }
  }

  /* End of Chart: '<S50>/ErrMgmt_MCUErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_MCUErrorCheckSys' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_OBCErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:711
   *  2. VCU_SW_Requirements_Specification.slreqx:712
   *  3. VCU_SW_Requirements_Specification.slreqx:713
   *  4. VCU_SW_Requirements_Specification.slreqx:714
   *  5. VCU_SW_Requirements_Specification.slreqx:715
   *  6. VCU_SW_Requirements_Specification.slreqx:716
   *  7. VCU_SW_Requirements_Specification.slreqx:116115
   *  8. VCU_SW_Requirements_Specification.slreqx:116121
   */
  /* Outputs for Atomic SubSystem: '<S51>/ErrDlyCfm'
   *
   * Block requirements for '<S51>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116115
   */
  rtb_RelationalOperator_pkgx = CtAp_FltReactn_ErrDlyCfm
    (rtb_TmpSignalConversionAtR_efkc,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_cl54);

  /* End of Outputs for SubSystem: '<S51>/ErrDlyCfm' */

  /* Logic: '<S51>/LogicalOperator'
   *
   * Block requirements for '<S51>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:711
   *  2. VCU_SW_Requirements_Specification.slreqx:712
   *  3. VCU_SW_Requirements_Specification.slreqx:713
   *  4. VCU_SW_Requirements_Specification.slreqx:714
   *  5. VCU_SW_Requirements_Specification.slreqx:715
   *  6. VCU_SW_Requirements_Specification.slreqx:716
   */
  rtb_LogicalOperator_du35 = (rtb_TmpSignalConversionAtR_e0nu &&
    rtb_RelationalOperator_pkgx);

  /* Sum: '<S51>/Add1' incorporates:
   *  Constant: '<S51>/Constant'
   *  Constant: '<S51>/Constant1'
   */
  rtb_Add1_hdrw = (uint16_T)(FltReactn_OBCErrCfm_CFG - ((uint16_T)
    FltReactn_Cycle));

  /* Outputs for Atomic SubSystem: '<S51>/ATOM_TimeCnt' */
  /* Constant: '<S51>/Constant' */
  rtb_RelationalOperator_oouu = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_LogicalOperator_du35, ((uint16_T)FltReactn_Cycle), rtb_Add1_hdrw,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S51>/ATOM_TimeCnt' */

  /* Switch: '<S51>/Switch' incorporates:
   *  Delay: '<S51>/Delay'
   */
  if (rtb_RelationalOperator_oouu) {
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE_ijaq = rtb_TmpSignalConversionAtR_efkc;
  }

  /* End of Switch: '<S51>/Switch' */

  /* Logic: '<S51>/LogicalOperator1' incorporates:
   *  Constant: '<S97>/Constant'
   *  RelationalOperator: '<S97>/Compare'
   *
   * Block requirements for '<S51>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:711
   *  2. VCU_SW_Requirements_Specification.slreqx:712
   *  3. VCU_SW_Requirements_Specification.slreqx:713
   *  4. VCU_SW_Requirements_Specification.slreqx:714
   *  5. VCU_SW_Requirements_Specification.slreqx:715
   *  6. VCU_SW_Requirements_Specification.slreqx:716
   */
  rtb_LogicalOperator1_mdn4 = (rtb_TmpSignalConversionAtR_e0nu &&
    (rtb_TmpSignalConversionAtR_efkc == ((uint8_T)FltReactn_U8LvlTwo)));

  /* Sum: '<S51>/Add' incorporates:
   *  Constant: '<S51>/Constant2'
   *  Constant: '<S51>/Constant3'
   */
  rtb_Add = (uint32_T)FltReactn_OBCErrCfm_CFG + FltReactn_OBCErrDlyCfm_CFG;

  /* Outputs for Atomic SubSystem: '<S51>/ATOM_U32TimeCnt'
   *
   * Block requirements for '<S51>/ATOM_U32TimeCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:714
   */
  /* Constant: '<S51>/Constant4' */
  rtb_RelationalOperator_pkgx = CtAp_FltReactn_ATOM_U32TimeCnt
    (rtb_LogicalOperator1_mdn4, ((uint16_T)FltReactn_Cycle), rtb_Add,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_U32TimeCnt);

  /* End of Outputs for SubSystem: '<S51>/ATOM_U32TimeCnt' */

  /* Switch: '<S51>/Switch2' */
  if (rtb_TmpSignalConversionAtR_hctp) {
    /* RelationalOperator: '<S128>/Relational Operator' incorporates:
     *  Constant: '<S51>/Constant6'
     */
    rtb_RelationalOperator_pkgx = FltReactn_False;
  }

  /* End of Switch: '<S51>/Switch2' */

  /* Switch: '<S51>/Switch3' incorporates:
   *  Constant: '<S51>/Constant7'
   *  Constant: '<S98>/Constant'
   *  Delay: '<S51>/Delay'
   *  Delay: '<S51>/Delay1'
   *  RelationalOperator: '<S98>/Compare'
   *  Switch: '<S51>/Switch4'
   */
  if (rtb_RelationalOperator_pkgx) {
    CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_piwk = rtb_RelationalOperator_pkgx;
  } else if (CtAp_FltReactn_ARID_DEF.Delay_DSTATE_ijaq != ((uint8_T)
              FltReactn_U8LvlTwo)) {
    CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_piwk = FltReactn_False;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S51>/Switch3' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update' */
  (void)Rte_Read_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update
    (&rtb_ErrMgmt_ImdtZeroTq_Flg);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg
    (&rtb_ErrMgmt_ACCmpl_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_OBCErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:711
   *  2. VCU_SW_Requirements_Specification.slreqx:712
   *  3. VCU_SW_Requirements_Specification.slreqx:713
   *  4. VCU_SW_Requirements_Specification.slreqx:714
   *  5. VCU_SW_Requirements_Specification.slreqx:715
   *  6. VCU_SW_Requirements_Specification.slreqx:716
   *  7. VCU_SW_Requirements_Specification.slreqx:116115
   *  8. VCU_SW_Requirements_Specification.slreqx:116121
   */
  /* Switch: '<S51>/Switch1' */
  if (rtb_TmpSignalConversionAtR_hctp) {
    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S51>/Constant5'
     */
    rtb_Switch1_knch = ((uint8_T)FltReactn_U8LvlZero);
  } else {
    /* Switch: '<S51>/Switch1' incorporates:
     *  Delay: '<S51>/Delay'
     */
    rtb_Switch1_knch = CtAp_FltReactn_ARID_DEF.Delay_DSTATE_ijaq;
  }

  /* End of Switch: '<S51>/Switch1' */

  /* Chart: '<S51>/ErrMgmt_OBCErrorLevelSel' incorporates:
   *  Delay: '<S51>/Delay1'
   *
   * Block requirements for '<S51>/ErrMgmt_OBCErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116115
   *  2. VCU_SW_Requirements_Specification.slreqx:711
   *  3. VCU_SW_Requirements_Specification.slreqx:712
   *  4. VCU_SW_Requirements_Specification.slreqx:713
   *  5. VCU_SW_Requirements_Specification.slreqx:714
   *  6. VCU_SW_Requirements_Specification.slreqx:715
   *  7. VCU_SW_Requirements_Specification.slreqx:116121
   *  8. VCU_SW_Requirements_Specification.slreqx:716
   */
  if (((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlThree)) &&
       rtb_LogicalOperator6) || (CtAp_FltReactn_ARID_DEF.Delay1_DSTATE_piwk &&
       rtb_LogicalOperator6)) {
    ErrMgmt_OBCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFour);
  } else if ((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlTwo)) &&
             rtb_LogicalOperator6) {
    ErrMgmt_OBCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
  } else if ((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlOne)) &&
             rtb_LogicalOperator6) {
    ErrMgmt_OBCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
  } else if ((rtb_Switch1_knch != ((uint8_T)FltReactn_U8LvlZero)) &&
             (rtb_LogicalOperator6 == FltReactn_False)) {
    ErrMgmt_OBCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
  } else {
    ErrMgmt_OBCErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
  }

  /* End of Chart: '<S51>/ErrMgmt_OBCErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys' */

  /* MinMax: '<S42>/Max' incorporates:
   *  Constant: '<S42>/Constant'
   */
  if (ErrMgmt_BMSErrLvl_Enum >= ErrMgmt_OBCErrLvl_Enum) {
    rtb_Switch1_knch = ErrMgmt_BMSErrLvl_Enum;
  } else {
    rtb_Switch1_knch = ErrMgmt_OBCErrLvl_Enum;
  }

  if (rtb_Switch1_knch < ErrMgmt_DCDCErrLvl_Enum) {
    rtb_Switch1_knch = ErrMgmt_DCDCErrLvl_Enum;
  }

  if (rtb_Switch1_knch < ErrMgmt_MCUErrLvl_Enum) {
    rtb_Switch1_knch = ErrMgmt_MCUErrLvl_Enum;
  }

  if (rtb_Switch1_knch < ((uint8_T)0U)) {
    rtb_Switch1_knch = ((uint8_T)0U);
  }

  if (rtb_Switch1_knch < ErrMgmt_CrashErrLvl_Enum) {
    rtb_Switch1_knch = ErrMgmt_CrashErrLvl_Enum;
  }

  if (rtb_Switch1_knch < ErrMgmt_HVILErrLvl_Enum) {
    rtb_Switch1_knch = ErrMgmt_HVILErrLvl_Enum;
  }

  if (rtb_Switch1_knch < ErrMgmt_InslaErrLvl_Enum) {
    /* MinMax: '<S42>/Max' */
    rtb_Switch1_knch = ErrMgmt_InslaErrLvl_Enum;
  }

  /* End of MinMax: '<S42>/Max' */

  /* Outputs for Atomic SubSystem: '<S42>/ErrMgmt_TCUErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_TCUErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:729
   *  2. VCU_SW_Requirements_Specification.slreqx:730
   *  3. VCU_SW_Requirements_Specification.slreqx:731
   *  4. VCU_SW_Requirements_Specification.slreqx:732
   *  5. VCU_SW_Requirements_Specification.slreqx:733
   *  6. VCU_SW_Requirements_Specification.slreqx:116140
   *  7. VCU_SW_Requirements_Specification.slreqx:116145
   */
  /* Outputs for Atomic SubSystem: '<S52>/ErrDlyCfm'
   *
   * Block requirements for '<S52>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116140
   */
  rtb_RelationalOperator_pkgx = CtAp_FltReactn_ErrDlyCfm
    (rtb_TmpSignalConversionAtR_caoa,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm);

  /* End of Outputs for SubSystem: '<S52>/ErrDlyCfm' */

  /* Logic: '<S52>/LogicalOperator'
   *
   * Block requirements for '<S52>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:729
   *  2. VCU_SW_Requirements_Specification.slreqx:730
   *  3. VCU_SW_Requirements_Specification.slreqx:731
   *  4. VCU_SW_Requirements_Specification.slreqx:732
   *  5. VCU_SW_Requirements_Specification.slreqx:733
   */
  rtb_LogicalOperator_jwbo = (rtb_ErrMgmt_ImdtZeroTq_Flg &&
    rtb_RelationalOperator_pkgx);

  /* Sum: '<S52>/Add' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S52>/Constant1'
   */
  rtb_Add_otlv = (uint16_T)(FltReactn_TCUErrCfm_CFG - ((uint16_T)FltReactn_Cycle));

  /* Outputs for Atomic SubSystem: '<S52>/ATOM_TimeCnt' */
  /* Constant: '<S52>/Constant' */
  rtb_RelationalOperator_pkgx = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_LogicalOperator_jwbo, ((uint16_T)FltReactn_Cycle), rtb_Add_otlv,
     &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of Outputs for SubSystem: '<S52>/ATOM_TimeCnt' */

  /* Switch: '<S52>/Switch' */
  if (rtb_RelationalOperator_pkgx) {
    /* Switch: '<S52>/Switch' */
    CtAp_FltReactn_ARID_DEF.Delay_DSTATE = rtb_TmpSignalConversionAtR_caoa;
  }

  /* End of Switch: '<S52>/Switch' */

  /* Switch: '<S52>/Switch1' incorporates:
   *  Constant: '<S52>/Constant2'
   *
   * Block requirements for '<S52>/Constant2':
   *  1. VCU_SW_Requirements_Specification.slreqx:733
   */
  if (rtb_ErrMgmt_ACCmpl_Flg) {
    rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlZero);
  } else {
    rtb_Switch_pkap = CtAp_FltReactn_ARID_DEF.Delay_DSTATE;
  }

  /* Chart: '<S52>/ErrMgmt_TCUErrorLevelSel' incorporates:
   *  Switch: '<S52>/Switch1'
   *
   * Block requirements for '<S52>/ErrMgmt_TCUErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116140
   *  2. VCU_SW_Requirements_Specification.slreqx:729
   *  3. VCU_SW_Requirements_Specification.slreqx:730
   *  4. VCU_SW_Requirements_Specification.slreqx:731
   *  5. VCU_SW_Requirements_Specification.slreqx:732
   *  6. VCU_SW_Requirements_Specification.slreqx:116145
   *  7. VCU_SW_Requirements_Specification.slreqx:733
   */
  switch (rtb_Switch_pkap) {
   case ((uint8_T)FltReactn_U8LvlThree):
    ErrMgmt_TCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlEleven);
    break;

   case ((uint8_T)FltReactn_U8LvlTwo):
    if (ErrMgmt_ChrgInPlug_Flg) {
      ErrMgmt_TCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlTwo);
    } else {
      ErrMgmt_TCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlFive);
    }
    break;

   case ((uint8_T)FltReactn_U8LvlOne):
    ErrMgmt_TCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlOne);
    break;

   default:
    ErrMgmt_TCUErrLvl_Enum = ((uint8_T)FltReactn_U8LvlZero);
    break;
  }

  /* End of Chart: '<S52>/ErrMgmt_TCUErrorLevelSel' */
  /* End of Outputs for SubSystem: '<S42>/ErrMgmt_TCUErrorCheckSys' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */

  /* Logic: '<S2>/LogicalOperator2' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   */
  rtb_ErrMgmt_ACCmpl_Flg = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_ACPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_ACCharging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_ChargingComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_KeepWarning)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_ChargingFault)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_ACPreheating)));

  /* Logic: '<S2>/LogicalOperator3' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   */
  rtb_TmpSignalConversionAtR_hctp = ((rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_DCPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_DCCharging)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_ChargingComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_ChargingFault)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_DCPreheating)));

  /* Logic: '<S2>/LogicalOperator4' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   */
  rtb_LogicalOperator6 = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_V2LPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_V2LDischarging)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_V2LComplete)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_V2LFault)));

  /* Logic: '<S2>/LogicalOperator5' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *
   * Block requirements for '<S2>/LogicalOperator5':
   *  1. VCU_SW_Requirements_Specification.slreqx:6308
   */
  ErrMgmt_ChrgCmpl_Flg = ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_Init)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_OffPlug)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_ACPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_DCPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_V2LPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
    FltReactn_ChargingComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_V2LComplete)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_ChargingFault)) || (rtb_TmpSignalConversionAtR_ej1p ==
    ((uint8_T)FltReactn_V2LFault)));

  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ReactionSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ReactionSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:755
   *  2. VCU_SW_Requirements_Specification.slreqx:756
   *  3. VCU_SW_Requirements_Specification.slreqx:757
   *  4. VCU_SW_Requirements_Specification.slreqx:758
   *  5. VCU_SW_Requirements_Specification.slreqx:759
   *  6. VCU_SW_Requirements_Specification.slreqx:760
   *  7. VCU_SW_Requirements_Specification.slreqx:761
   *  8. VCU_SW_Requirements_Specification.slreqx:762
   *  9. VCU_SW_Requirements_Specification.slreqx:763
   *  10. VCU_SW_Requirements_Specification.slreqx:764
   *  11. VCU_SW_Requirements_Specification.slreqx:765
   *  12. VCU_SW_Requirements_Specification.slreqx:766
   *  13. VCU_SW_Requirements_Specification.slreqx:767
   *  14. VCU_SW_Requirements_Specification.slreqx:6308
   *  15. VCU_SW_Requirements_Specification.slreqx:769
   *  16. VCU_SW_Requirements_Specification.slreqx:770
   */
  /* Chart: '<S44>/ErrMgmt_ReactionSel'
   *
   * Block requirements for '<S44>/ErrMgmt_ReactionSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:753
   *  2. VCU_SW_Requirements_Specification.slreqx:754
   *  3. VCU_SW_Requirements_Specification.slreqx:755
   *  4. VCU_SW_Requirements_Specification.slreqx:756
   *  5. VCU_SW_Requirements_Specification.slreqx:757
   *  6. VCU_SW_Requirements_Specification.slreqx:758
   *  7. VCU_SW_Requirements_Specification.slreqx:759
   *  8. VCU_SW_Requirements_Specification.slreqx:760
   *  9. VCU_SW_Requirements_Specification.slreqx:761
   *  10. VCU_SW_Requirements_Specification.slreqx:762
   *  11. VCU_SW_Requirements_Specification.slreqx:763
   *  12. VCU_SW_Requirements_Specification.slreqx:764
   *  13. VCU_SW_Requirements_Specification.slreqx:765
   *  14. VCU_SW_Requirements_Specification.slreqx:766
   *  15. VCU_SW_Requirements_Specification.slreqx:767
   *  16. VCU_SW_Requirements_Specification.slreqx:6308
   *  17. VCU_SW_Requirements_Specification.slreqx:769
   *  18. VCU_SW_Requirements_Specification.slreqx:770
   *  19. VCU_SW_Requirements_Specification.slreqx:771
   */
  rtb_ErrMgmt_GrdtZeroTq_Flg = FltReactn_False;
  rtb_ErrMgmt_DlyGrdtZeroTq_Flg = FltReactn_False;
  rtb_ErrMgmt_ImdtZeroTq_Flg = FltReactn_False;
  rtb_TmpSignalConversionAtR_e0nu = FltReactn_False;
  rtb_ErrMgmt_VehSpdLimErrLv5_Flg = FltReactn_False;
  rtb_TmpSignalConversionAtR_kzzd = FltReactn_False;
  rtb_TmpSignalConversionAtR_clf0 = FltReactn_False;
  rtb_ErrMgmt_ACStop_Flg = FltReactn_False;
  rtb_TmpSignalConversionAtR_gcor = FltReactn_False;
  rtb_ErrMgmt_V2LStop_Flg = FltReactn_False;
  rtb_ErrMgmt_Fobd2Hv_Flg = FltReactn_False;
  rtb_ErrMgmt_EmgyHvDwn_Flg = FltReactn_False;
  rtb_ErrMgmt_HvNormDwn_Flg = FltReactn_False;
  rtb_ErrMgmt_DlyHvDwn_Flg = FltReactn_False;

  /* Outport: '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' incorporates:
   *  Chart: '<S44>/ErrMgmt_ReactionSel'
   *
   * Block requirements for '<S44>/ErrMgmt_ReactionSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:753
   *  2. VCU_SW_Requirements_Specification.slreqx:754
   *  3. VCU_SW_Requirements_Specification.slreqx:755
   *  4. VCU_SW_Requirements_Specification.slreqx:756
   *  5. VCU_SW_Requirements_Specification.slreqx:757
   *  6. VCU_SW_Requirements_Specification.slreqx:758
   *  7. VCU_SW_Requirements_Specification.slreqx:759
   *  8. VCU_SW_Requirements_Specification.slreqx:760
   *  9. VCU_SW_Requirements_Specification.slreqx:761
   *  10. VCU_SW_Requirements_Specification.slreqx:762
   *  11. VCU_SW_Requirements_Specification.slreqx:763
   *  12. VCU_SW_Requirements_Specification.slreqx:764
   *  13. VCU_SW_Requirements_Specification.slreqx:765
   *  14. VCU_SW_Requirements_Specification.slreqx:766
   *  15. VCU_SW_Requirements_Specification.slreqx:767
   *  16. VCU_SW_Requirements_Specification.slreqx:6308
   *  17. VCU_SW_Requirements_Specification.slreqx:769
   *  18. VCU_SW_Requirements_Specification.slreqx:770
   *  19. VCU_SW_Requirements_Specification.slreqx:771
   */
  CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLimEna_Flg
    = FltReactn_False;
  CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLim_kph =
    FltReactn_MaxSpd;

  /* Chart: '<S44>/ErrMgmt_ReactionSel' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S2>/LogicalOperator1'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  SignalConversion: '<S2>/Signal Copy'
   *
   * Block requirements for '<S44>/ErrMgmt_ReactionSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:753
   *  2. VCU_SW_Requirements_Specification.slreqx:754
   *  3. VCU_SW_Requirements_Specification.slreqx:755
   *  4. VCU_SW_Requirements_Specification.slreqx:756
   *  5. VCU_SW_Requirements_Specification.slreqx:757
   *  6. VCU_SW_Requirements_Specification.slreqx:758
   *  7. VCU_SW_Requirements_Specification.slreqx:759
   *  8. VCU_SW_Requirements_Specification.slreqx:760
   *  9. VCU_SW_Requirements_Specification.slreqx:761
   *  10. VCU_SW_Requirements_Specification.slreqx:762
   *  11. VCU_SW_Requirements_Specification.slreqx:763
   *  12. VCU_SW_Requirements_Specification.slreqx:764
   *  13. VCU_SW_Requirements_Specification.slreqx:765
   *  14. VCU_SW_Requirements_Specification.slreqx:766
   *  15. VCU_SW_Requirements_Specification.slreqx:767
   *  16. VCU_SW_Requirements_Specification.slreqx:6308
   *  17. VCU_SW_Requirements_Specification.slreqx:769
   *  18. VCU_SW_Requirements_Specification.slreqx:770
   *  19. VCU_SW_Requirements_Specification.slreqx:771
   *
   * Block requirements for '<S2>/LogicalOperator1':
   *  1. VCU_SW_Requirements_Specification.slreqx:6308
   */
  switch (rtb_Switch1_knch) {
   case ((uint8_T)FltReactn_U8LvlFifteen):
    rtb_ErrMgmt_ImdtZeroTq_Flg = FltReactn_True;
    rtb_ErrMgmt_Fobd2Hv_Flg = FltReactn_True;
    rtb_ErrMgmt_EmgyHvDwn_Flg = FltReactn_True;
    break;

   case ((uint8_T)FltReactn_U8LvlEleven):
    rtb_ErrMgmt_Fobd2Hv_Flg = FltReactn_True;
    if (ErrMgmt_ChrgCmpl_Flg) {
      rtb_ErrMgmt_HvNormDwn_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_LogicalOperator6) {
      rtb_ErrMgmt_V2LStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_ErrMgmt_ACCmpl_Flg) {
      rtb_ErrMgmt_ACStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_TmpSignalConversionAtR_hctp) {
      rtb_TmpSignalConversionAtR_gcor = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (!ErrMgmt_ChrgInPlug_Flg) {
      rtb_ErrMgmt_ImdtZeroTq_Flg = FltReactn_True;
    }
    break;

   case ((uint8_T)FltReactn_U8LvlTen):
    rtb_ErrMgmt_Fobd2Hv_Flg = FltReactn_True;
    if ((rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)FltReactn_ACPlugDetected))
        || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)
          FltReactn_DCPlugDetected)) || (rtb_TmpSignalConversionAtR_ej1p ==
         ((uint8_T)FltReactn_V2LPlugDetected)) ||
        (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)FltReactn_ChargingComplete))
        || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)FltReactn_V2LComplete))
        || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)FltReactn_ChargingFault))
        || (rtb_TmpSignalConversionAtR_ej1p == ((uint8_T)FltReactn_V2LFault))) {
      rtb_ErrMgmt_HvNormDwn_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_LogicalOperator6) {
      rtb_ErrMgmt_V2LStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_ErrMgmt_ACCmpl_Flg) {
      rtb_ErrMgmt_ACStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_TmpSignalConversionAtR_hctp) {
      rtb_TmpSignalConversionAtR_gcor = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (!ErrMgmt_ChrgInPlug_Flg) {
      rtb_ErrMgmt_DlyGrdtZeroTq_Flg = FltReactn_True;
      rtb_ErrMgmt_DlyHvDwn_Flg = FltReactn_True;
    }
    break;

   case ((uint8_T)FltReactn_U8LvlNine):
    if ((rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Standby)) ||
        (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Init))) {
      rtb_ErrMgmt_Fobd2Hv_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }
    break;

   case ((uint8_T)FltReactn_U8LvlEight):
    rtb_ErrMgmt_GrdtZeroTq_Flg = FltReactn_True;
    break;

   case ((uint8_T)FltReactn_U8LvlSeven):
    rtb_ErrMgmt_GrdtZeroTq_Flg = FltReactn_True;
    break;

   case ((uint8_T)FltReactn_U8LvlSix):
    rtb_TmpSignalConversionAtR_e0nu = FltReactn_True;

    /* Outport: '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' incorporates:
     *  Constant: '<S44>/CAL1'
     */
    CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLim_kph
      = FltReactn_ErrLvl6VehSpdLim_CFG;
    CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLimEna_Flg
      = FltReactn_True;
    break;

   case ((uint8_T)FltReactn_U8LvlFive):
    rtb_ErrMgmt_VehSpdLimErrLv5_Flg = FltReactn_True;

    /* Outport: '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' incorporates:
     *  Constant: '<S44>/CAL'
     */
    CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLim_kph
      = FltReactn_ErrLvl5VehSpdLim_CFG;
    CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_VehSpdLimEna_Flg
      = FltReactn_True;
    break;

   case ((uint8_T)FltReactn_U8LvlFour):
    if (rtb_ErrMgmt_ACCmpl_Flg) {
      rtb_ErrMgmt_ACStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_TmpSignalConversionAtR_hctp) {
      rtb_TmpSignalConversionAtR_gcor = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_LogicalOperator6) {
      rtb_ErrMgmt_V2LStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }
    break;

   case ((uint8_T)FltReactn_U8LvlThree):
    if (rtb_ErrMgmt_ACCmpl_Flg) {
      rtb_TmpSignalConversionAtR_kzzd = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_TmpSignalConversionAtR_hctp) {
      rtb_TmpSignalConversionAtR_clf0 = FltReactn_True;
    } else {
      /* No Reaction */
    }

    if (rtb_LogicalOperator6) {
      rtb_ErrMgmt_V2LStop_Flg = FltReactn_True;
    } else {
      /* No Reaction */
    }
    break;

   default:
    /* no actions */
    break;
  }

  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ReactionSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg
    (&tmpRead_7);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ReactionSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ReactionSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:755
   *  2. VCU_SW_Requirements_Specification.slreqx:756
   *  3. VCU_SW_Requirements_Specification.slreqx:757
   *  4. VCU_SW_Requirements_Specification.slreqx:758
   *  5. VCU_SW_Requirements_Specification.slreqx:759
   *  6. VCU_SW_Requirements_Specification.slreqx:760
   *  7. VCU_SW_Requirements_Specification.slreqx:761
   *  8. VCU_SW_Requirements_Specification.slreqx:762
   *  9. VCU_SW_Requirements_Specification.slreqx:763
   *  10. VCU_SW_Requirements_Specification.slreqx:764
   *  11. VCU_SW_Requirements_Specification.slreqx:765
   *  12. VCU_SW_Requirements_Specification.slreqx:766
   *  13. VCU_SW_Requirements_Specification.slreqx:767
   *  14. VCU_SW_Requirements_Specification.slreqx:6308
   *  15. VCU_SW_Requirements_Specification.slreqx:769
   *  16. VCU_SW_Requirements_Specification.slreqx:770
   */
  /* Outputs for Atomic SubSystem: '<S44>/ATOM_TimeCnt'
   *
   * Block requirements for '<S44>/ATOM_TimeCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:771
   */
  /* Constant: '<S44>/CAL2' incorporates:
   *  Constant: '<S44>/CAL3'
   */
  rtb_RelationalOperator_pkgx = CtAp_FltReactn_ATOM_TimeCnt
    (rtb_ErrMgmt_DlyHvDwn_Flg, ((uint16_T)FltReactn_Cycle),
     FltReactn_DlyHvDwn_CFG, &CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S44>/ATOM_TimeCnt' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ReactionSys' */

  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* Outputs for Atomic SubSystem: '<S43>/SysFail'
   *
   * Block requirements for '<S43>/SysFail':
   *  1. VCU_SW_Requirements_Specification.slreqx:772
   *  2. VCU_SW_Requirements_Specification.slreqx:773
   *  3. VCU_SW_Requirements_Specification.slreqx:774
   *  4. VCU_SW_Requirements_Specification.slreqx:775
   */
  /* Switch: '<S110>/Switch' incorporates:
   *  Constant: '<S123>/Constant'
   *  Constant: '<S124>/Constant'
   *  Constant: '<S125>/Constant'
   *  Constant: '<S126>/Constant'
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/BSW_FuSaHWErrorStatus_HWErrorStatus'
   *  Inport: '<Root>/RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg'
   *  Inport: '<Root>/RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus'
   *  Inport: '<Root>/RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus'
   *  Inport: '<Root>/RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus'
   *  Logic: '<S110>/LogicalOperator1'
   *  Logic: '<S110>/LogicalOperator2'
   *  RelationalOperator: '<S123>/Compare'
   *  RelationalOperator: '<S124>/Compare'
   *  RelationalOperator: '<S125>/Compare'
   *  RelationalOperator: '<S126>/Compare'
   *  RelationalOperator: '<S127>/Compare'
   *  Switch: '<S110>/Switch1'
   *
   * Block requirements for '<S110>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:772
   *
   * Block requirements for '<S110>/Switch1':
   *  1. VCU_SW_Requirements_Specification.slreqx:773
   */
  if ((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlTen)) || (rtb_Switch1_knch ==
       ((uint8_T)FltReactn_U8LvlEleven)) || (rtb_Switch1_knch == ((uint8_T)
        FltReactn_U8LvlFifteen))) {
    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant'
     *
     * Block requirements for '<S110>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:772
     */
    rtb_TmpSignalConversionAtR_ej1p = ((uint8_T)FltReactn_U8LvlThree);
  } else if ((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlSeven)) ||
             (rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlEight))) {
    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant1'
     *  Switch: '<S110>/Switch1'
     *
     * Block requirements for '<S110>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:772
     *
     * Block requirements for '<S110>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:773
     */
    rtb_TmpSignalConversionAtR_ej1p = ((uint8_T)FltReactn_U8LvlTwo);
  } else {
    (void)
      Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
      (&tmpRead_9);
    (void)Rte_Read_BSW_FuSaHWErrorStatus_HWErrorStatus(&tmpRead_8);
    (void)
      Rte_Read_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg
      (&tmpRead_6);
    (void)
      Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
      (&tmpRead_5);
    (void)
      Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus
      (&tmpRead_4);

    /* Switch: '<S110>/Switch2' incorporates:
     *  Constant: '<S121>/Constant'
     *  Constant: '<S122>/Constant'
     *  Inport: '<Root>/BSW_FuSaHWErrorStatus_HWErrorStatus'
     *  Inport: '<Root>/RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg'
     *  Inport: '<Root>/RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus'
     *  Inport: '<Root>/RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus'
     *  Inport: '<Root>/RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus'
     *  Logic: '<S110>/LogicalOperator'
     *  Logic: '<S110>/LogicalOperator3'
     *  RelationalOperator: '<S121>/Compare'
     *  RelationalOperator: '<S122>/Compare'
     *  Switch: '<S110>/Switch1'
     *
     * Block requirements for '<S110>/Switch2':
     *  1. VCU_SW_Requirements_Specification.slreqx:774
     *
     * Block requirements for '<S110>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:773
     */
    if (((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlNine)) &&
         (rtb_TmpSignalConversionAtR_oixr == ((uint8_T)FltReactn_Standby))) ||
        tmpRead_4.FctSftyMon_ErrResAccrPedlTqOverFltInfo ||
        tmpRead_5.FctSftyMon_ErrResCrpCtrlTqOverFltInfo || tmpRead_6 ||
        tmpRead_8 || tmpRead_9.FctSftyMon_ErrResDesVehDecelSpdOverFltInfo) {
      /* Switch: '<S110>/Switch' incorporates:
       *  Constant: '<S110>/Constant2'
       *  Switch: '<S110>/Switch1'
       *
       * Block requirements for '<S110>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:772
       *
       * Block requirements for '<S110>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:773
       */
      rtb_TmpSignalConversionAtR_ej1p = ((uint8_T)FltReactn_U8LvlOne);
    } else {
      /* Switch: '<S110>/Switch' incorporates:
       *  Constant: '<S110>/Constant3'
       *  Switch: '<S110>/Switch1'
       *
       * Block requirements for '<S110>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:772
       *
       * Block requirements for '<S110>/Constant3':
       *  1. VCU_SW_Requirements_Specification.slreqx:775
       *
       * Block requirements for '<S110>/Switch1':
       *  1. VCU_SW_Requirements_Specification.slreqx:773
       */
      rtb_TmpSignalConversionAtR_ej1p = ((uint8_T)FltReactn_U8LvlZero);
    }

    /* End of Switch: '<S110>/Switch2' */
  }

  /* End of Switch: '<S110>/Switch' */
  /* End of Outputs for SubSystem: '<S43>/SysFail' */

  /* Outputs for Atomic SubSystem: '<S43>/BMSFault'
   *
   * Block requirements for '<S43>/BMSFault':
   *  1. VCU_SW_Requirements_Specification.slreqx:776
   *  2. VCU_SW_Requirements_Specification.slreqx:777
   *  3. VCU_SW_Requirements_Specification.slreqx:778
   */
  /* Switch: '<S106>/Switch' incorporates:
   *  Constant: '<S111>/Constant'
   *  Constant: '<S112>/Constant'
   *  Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus'
   *  Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus'
   *  Logic: '<S106>/LogicalOperator'
   *  RelationalOperator: '<S111>/Compare'
   *  RelationalOperator: '<S112>/Compare'
   *
   * Block requirements for '<S106>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:776
   */
  if ((rtb_TmpSignalConversionAtR_if0s == ((uint8_T)FltReactn_U8LvlThree)) ||
      (rtb_TmpSignalConversionAtR_if0s == ((uint8_T)FltReactn_U8LvlFour))) {
    /* Switch: '<S106>/Switch' incorporates:
     *  Constant: '<S106>/Constant'
     *
     * Block requirements for '<S106>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:776
     */
    rtb_TmpSignalConversionAtR_oixr = ((uint8_T)FltReactn_U8LvlTwo);
  } else {
    (void)
      Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus
      (&tmpRead_0);
    (void)Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus
      (&tmpRead);

    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S113>/Constant'
     *  Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus'
     *  Inport: '<Root>/RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus'
     *  Logic: '<S106>/LogicalOperator1'
     *  RelationalOperator: '<S113>/Compare'
     *
     * Block requirements for '<S106>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:777
     */
    if ((rtb_TmpSignalConversionAtR_if0s == ((uint8_T)FltReactn_U8LvlTwo)) ||
        tmpRead_0.ComM_ErrResBMSSts01E2ETimeoutInfo ||
        tmpRead.ComM_ErrResBMSSts01CRCErrorInfo) {
      /* Switch: '<S106>/Switch' incorporates:
       *  Constant: '<S106>/Constant1'
       *
       * Block requirements for '<S106>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:776
       */
      rtb_TmpSignalConversionAtR_oixr = ((uint8_T)FltReactn_U8LvlOne);
    } else {
      /* Switch: '<S106>/Switch' incorporates:
       *  Constant: '<S106>/Constant2'
       *
       * Block requirements for '<S106>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:776
       *
       * Block requirements for '<S106>/Constant2':
       *  1. VCU_SW_Requirements_Specification.slreqx:778
       */
      rtb_TmpSignalConversionAtR_oixr = ((uint8_T)FltReactn_U8LvlZero);
    }

    /* End of Switch: '<S106>/Switch1' */
  }

  /* End of Switch: '<S106>/Switch' */
  /* End of Outputs for SubSystem: '<S43>/BMSFault' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq' */
  (void)Rte_Read_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq
    (&tmpRead_a);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* Outputs for Atomic SubSystem: '<S43>/MCUFault'
   *
   * Block requirements for '<S43>/MCUFault':
   *  1. VCU_SW_Requirements_Specification.slreqx:780
   *  2. VCU_SW_Requirements_Specification.slreqx:781
   *  3. VCU_SW_Requirements_Specification.slreqx:782
   */
  /* Switch: '<S109>/Switch' incorporates:
   *  Constant: '<S118>/Constant'
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus'
   *  Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus'
   *  Logic: '<S109>/LogicalOperator'
   *  RelationalOperator: '<S118>/Compare'
   *  RelationalOperator: '<S119>/Compare'
   *
   * Block requirements for '<S109>/Switch':
   *  1. VCU_SW_Requirements_Specification.slreqx:780
   */
  if (tmpRead_a || (rtb_TmpSignalConversionAtR_hvuf == ((uint8_T)
        FltReactn_U8LvlFour)) || (rtb_TmpSignalConversionAtR_hvuf == ((uint8_T)
        FltReactn_U8LvlFive))) {
    /* Switch: '<S109>/Switch' incorporates:
     *  Constant: '<S109>/Constant'
     *
     * Block requirements for '<S109>/Switch':
     *  1. VCU_SW_Requirements_Specification.slreqx:780
     */
    rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlTwo);
  } else {
    (void)
      Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus
      (&tmpRead_2);
    (void)
      Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus
      (&tmpRead_1);

    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S120>/Constant'
     *  Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus'
     *  Inport: '<Root>/RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus'
     *  Logic: '<S109>/LogicalOperator1'
     *  RelationalOperator: '<S120>/Compare'
     *
     * Block requirements for '<S109>/Switch1':
     *  1. VCU_SW_Requirements_Specification.slreqx:781
     */
    if ((rtb_TmpSignalConversionAtR_hvuf == ((uint8_T)FltReactn_U8LvlThree)) ||
        tmpRead_2.ComM_ErrResMCUFailrCodE2ETimeoutInfo ||
        tmpRead_1.ComM_ErrResMCUFailrCodCRCErrorInfo) {
      /* Switch: '<S109>/Switch' incorporates:
       *  Constant: '<S109>/Constant1'
       *
       * Block requirements for '<S109>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:780
       */
      rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlOne);
    } else {
      /* Switch: '<S109>/Switch' incorporates:
       *  Constant: '<S109>/Constant2'
       *
       * Block requirements for '<S109>/Switch':
       *  1. VCU_SW_Requirements_Specification.slreqx:780
       *
       * Block requirements for '<S109>/Constant2':
       *  1. VCU_SW_Requirements_Specification.slreqx:782
       */
      rtb_Switch_pkap = ((uint8_T)FltReactn_U8LvlZero);
    }

    /* End of Switch: '<S109>/Switch1' */
  }

  /* End of Switch: '<S109>/Switch' */
  /* End of Outputs for SubSystem: '<S43>/MCUFault' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
    (rtb_TmpSignalConversionAtR_kzzd);

  /* Outport: '<Root>/RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg
    (rtb_ErrMgmt_ACStop_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* Outputs for Atomic SubSystem: '<S43>/DCDCFault'
   *
   * Block requirements for '<S43>/DCDCFault':
   *  1. VCU_SW_Requirements_Specification.slreqx:779
   */
  /* Outport: '<Root>/RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S115>/Constant'
   *  Logic: '<S107>/LogicalOperator'
   *  Logic: '<S107>/LogicalOperator1'
   *  RelationalOperator: '<S114>/Compare'
   *  RelationalOperator: '<S115>/Compare'
   */
  (void)Rte_Write_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg
    ((rtb_TmpSignalConversionAtR_fb2t == ((uint8_T)FltReactn_U8LvlThree)) ||
     (rtb_TmpSignalConversionAtR_fb2t == ((uint8_T)FltReactn_U8LvlTwo)) ||
     rtb_TmpSignalConversionAtR_gnmx);

  /* End of Outputs for SubSystem: '<S43>/DCDCFault' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg
    (rtb_TmpSignalConversionAtR_clf0);

  /* Outport: '<Root>/RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg
    (rtb_TmpSignalConversionAtR_gcor);

  /* Outport: '<Root>/RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
    (rtb_ErrMgmt_DlyGrdtZeroTq_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg
    (rtb_ErrMgmt_DlyHvDwn_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
    (rtb_ErrMgmt_EmgyHvDwn_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg
    (rtb_ErrMgmt_Fobd2Hv_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
    (rtb_ErrMgmt_GrdtZeroTq_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
    (rtb_ErrMgmt_GrdtZeroTq_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ReactionSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ReactionSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:755
   *  2. VCU_SW_Requirements_Specification.slreqx:756
   *  3. VCU_SW_Requirements_Specification.slreqx:757
   *  4. VCU_SW_Requirements_Specification.slreqx:758
   *  5. VCU_SW_Requirements_Specification.slreqx:759
   *  6. VCU_SW_Requirements_Specification.slreqx:760
   *  7. VCU_SW_Requirements_Specification.slreqx:761
   *  8. VCU_SW_Requirements_Specification.slreqx:762
   *  9. VCU_SW_Requirements_Specification.slreqx:763
   *  10. VCU_SW_Requirements_Specification.slreqx:764
   *  11. VCU_SW_Requirements_Specification.slreqx:765
   *  12. VCU_SW_Requirements_Specification.slreqx:766
   *  13. VCU_SW_Requirements_Specification.slreqx:767
   *  14. VCU_SW_Requirements_Specification.slreqx:6308
   *  15. VCU_SW_Requirements_Specification.slreqx:769
   *  16. VCU_SW_Requirements_Specification.slreqx:770
   */
  /* Outport: '<Root>/RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg' incorporates:
   *  Logic: '<S44>/LogicalOperator'
   *
   * Block requirements for '<S44>/LogicalOperator':
   *  1. VCU_SW_Requirements_Specification.slreqx:771
   */
  (void)Rte_Write_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg
    (rtb_ErrMgmt_HvNormDwn_Flg || rtb_RelationalOperator_pkgx);

  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ReactionSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
    (rtb_ErrMgmt_ImdtZeroTq_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* Outputs for Atomic SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* Outputs for Atomic SubSystem: '<S43>/LimpHome'
   *
   * Block requirements for '<S43>/LimpHome':
   *  1. VCU_SW_Requirements_Specification.slreqx:764
   */
  /* Outport: '<Root>/RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg' incorporates:
   *  Constant: '<S116>/Constant'
   *  Constant: '<S117>/Constant'
   *  Logic: '<S108>/LogicalOperator'
   *  RelationalOperator: '<S116>/Compare'
   *  RelationalOperator: '<S117>/Compare'
   */
  (void)Rte_Write_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg
    ((rtb_Switch1_knch == ((uint8_T)FltReactn_U8LvlFive)) || (rtb_Switch1_knch ==
      ((uint8_T)FltReactn_U8LvlSix)) || tmpRead_7);

  /* End of Outputs for SubSystem: '<S43>/LimpHome' */
  /* End of Outputs for SubSystem: '<S2>/ErrMgmt_ErrLightCheckSys' */
  /* End of Outputs for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum' */
  (void)Rte_Write_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum
    (rtb_TmpSignalConversionAtR_ej1p);

  /* Outport: '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' incorporates:
   *  BusCreator generated from: '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus'
   */
  CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_DlyGrdtZeroTq_Flg
    = rtb_ErrMgmt_DlyGrdtZeroTq_Flg;
  CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_GrdtZeroTq_Flg
    = rtb_ErrMgmt_GrdtZeroTq_Flg;
  CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t.ErrMgmt_ImdtZeroTq_Flg
    = rtb_ErrMgmt_ImdtZeroTq_Flg;

  /* Outport: '<Root>/RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg
    (rtb_ErrMgmt_V2LStop_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum' */
  (void)Rte_Write_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum
    (rtb_Switch1_knch);

  /* Outport: '<Root>/RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg' */
  (void)
    Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg
    (rtb_ErrMgmt_VehSpdLimErrLv5_Flg);

  /* Outport: '<Root>/RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg' */
  (void)
    Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg
    (rtb_TmpSignalConversionAtR_e0nu);

  /* Outport: '<Root>/RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp' */
  (void)Rte_Write_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp
    (rtb_TmpSignalConversionAtR_oixr);

  /* Outport: '<Root>/RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp' */
  (void)Rte_Write_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp
    (rtb_Switch_pkap);

  /* Outport: '<Root>/RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg' */
  (void)Rte_Write_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg
    (rtb_ErrMgmt_HvNormDwn_Flg);
  (void)Rte_Write_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus
    (&CtAp_FltReactn_ARID_DEF.RTE_P_ErrMgmt_TorqCtrlErr_Bus_t);
}

#define CtAp_FltReactn_STOP_SEC_CODE
#include "CtAp_FltReactn_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_FltReactn_START_SEC_VAR_CONST_8
#include "CtAp_FltReactn_MemMap.h"

void R_FltReactn_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ErrMgmt_TCUErrLvl_Enum = 0U;
  ErrMgmt_OBCErrLvl_Enum = 0U;
  ErrMgmt_MCUErrLvl_Enum = 0U;
  ErrMgmt_InslaErrLvl_Enum = 0U;
  ErrMgmt_HVILErrLvl_Enum = 0U;
  ErrMgmt_DCDCErrLvl_Enum = 0U;
  ErrMgmt_CrashErrLvl_Enum = 0U;
  ErrMgmt_BMSErrLvl_Enum = 0U;
  ErrMgmt_ChrgInPlug_Flg = false;
  ErrMgmt_ChrgCmpl_Flg = false;
  ErrMgmt_HvEnable = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_FltReactn_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_FltReactn_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys'
   *
   * Block requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  /* SystemInitialize for Atomic SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:752
   *  2. VCU_SW_Requirements_Specification.slreqx:116174
   */
  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_BMSErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_BMSErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:710
   *  2. VCU_SW_Requirements_Specification.slreqx:705
   *  3. VCU_SW_Requirements_Specification.slreqx:706
   *  4. VCU_SW_Requirements_Specification.slreqx:707
   *  5. VCU_SW_Requirements_Specification.slreqx:708
   *  6. VCU_SW_Requirements_Specification.slreqx:709
   *  7. VCU_SW_Requirements_Specification.slreqx:710
   *  8. VCU_SW_Requirements_Specification.slreqx:116107
   *  9. VCU_SW_Requirements_Specification.slreqx:116113
   */
  /* SystemInitialize for Atomic SubSystem: '<S45>/ErrDlyCfm'
   *
   * Block requirements for '<S45>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_ppxr);

  /* End of SystemInitialize for SubSystem: '<S45>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S45>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_llw0);

  /* End of SystemInitialize for SubSystem: '<S45>/ATOM_TimeCnt' */

  /* SystemInitialize for Chart: '<S45>/ErrMgmt_BMSErrorLevelSel'
   *
   * Block requirements for '<S45>/ErrMgmt_BMSErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   *  2. VCU_SW_Requirements_Specification.slreqx:705
   *  3. VCU_SW_Requirements_Specification.slreqx:706
   *  4. VCU_SW_Requirements_Specification.slreqx:707
   *  5. VCU_SW_Requirements_Specification.slreqx:708
   *  6. VCU_SW_Requirements_Specification.slreqx:709
   *  7. VCU_SW_Requirements_Specification.slreqx:116113
   *  8. VCU_SW_Requirements_Specification.slreqx:710
   */
  ErrMgmt_BMSErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_BMSErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_CrashErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:744
   *  2. VCU_SW_Requirements_Specification.slreqx:745
   *  3. VCU_SW_Requirements_Specification.slreqx:746
   *  4. VCU_SW_Requirements_Specification.slreqx:116161
   *  5. VCU_SW_Requirements_Specification.slreqx:116164
   */
  /* SystemInitialize for Enabled SubSystem: '<S46>/ACUCrashEnable'
   *
   * Block requirements for '<S46>/ACUCrashEnable':
   *  1. VCU_SW_Requirements_Specification.slreqx:744
   *  2. VCU_SW_Requirements_Specification.slreqx:745
   *  3. VCU_SW_Requirements_Specification.slreqx:746
   */
  /* InitializeConditions for Delay: '<S57>/Delay' */
  CtAp_FltReactn_ARID_DEF.Delay_DSTATE_arei = ((uint8_T)0U);

  /* SystemInitialize for Atomic SubSystem: '<S57>/ErrDlyCfm'
   *
   * Block requirements for '<S57>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116161
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_merl);

  /* End of SystemInitialize for SubSystem: '<S57>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S57>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_nz4o);

  /* End of SystemInitialize for SubSystem: '<S57>/ATOM_TimeCnt' */
  /* End of SystemInitialize for SubSystem: '<S46>/ACUCrashEnable' */

  /* SystemInitialize for Chart: '<S46>/ErrMgmt_CrashErrorLevelSel'
   *
   * Block requirements for '<S46>/ErrMgmt_CrashErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116161
   *  2. VCU_SW_Requirements_Specification.slreqx:744
   *  3. VCU_SW_Requirements_Specification.slreqx:745
   *  4. VCU_SW_Requirements_Specification.slreqx:116164
   *  5. VCU_SW_Requirements_Specification.slreqx:746
   */
  ErrMgmt_CrashErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_CrashErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_DCDCErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_DCDCErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:717
   *  2. VCU_SW_Requirements_Specification.slreqx:718
   *  3. VCU_SW_Requirements_Specification.slreqx:719
   *  4. VCU_SW_Requirements_Specification.slreqx:11820
   *  5. VCU_SW_Requirements_Specification.slreqx:720
   *  6. VCU_SW_Requirements_Specification.slreqx:721
   *  7. VCU_SW_Requirements_Specification.slreqx:722
   *  8. VCU_SW_Requirements_Specification.slreqx:116123
   *  9. VCU_SW_Requirements_Specification.slreqx:116130
   */
  /* SystemInitialize for Atomic SubSystem: '<S47>/ErrDlyCfm'
   *
   * Block requirements for '<S47>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116123
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_fqdq);

  /* End of SystemInitialize for SubSystem: '<S47>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S47>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_g1sm);

  /* End of SystemInitialize for SubSystem: '<S47>/ATOM_TimeCnt' */

  /* SystemInitialize for Chart: '<S47>/ErrMgmt_DCDCErrorLevelSel'
   *
   * Block requirements for '<S47>/ErrMgmt_DCDCErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116123
   *  2. VCU_SW_Requirements_Specification.slreqx:717
   *  3. VCU_SW_Requirements_Specification.slreqx:718
   *  4. VCU_SW_Requirements_Specification.slreqx:719
   *  5. VCU_SW_Requirements_Specification.slreqx:11820
   *  6. VCU_SW_Requirements_Specification.slreqx:720
   *  7. VCU_SW_Requirements_Specification.slreqx:721
   *  8. VCU_SW_Requirements_Specification.slreqx:116130
   *  9. VCU_SW_Requirements_Specification.slreqx:722
   */
  ErrMgmt_DCDCErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_DCDCErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_HVILErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_HVILErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:747
   *  2. VCU_SW_Requirements_Specification.slreqx:748
   *  3. VCU_SW_Requirements_Specification.slreqx:749
   *  4. VCU_SW_Requirements_Specification.slreqx:750
   *  5. VCU_SW_Requirements_Specification.slreqx:751
   *  6. VCU_SW_Requirements_Specification.slreqx:116166
   *  7. VCU_SW_Requirements_Specification.slreqx:116171
   */
  /* SystemInitialize for Chart: '<S48>/ErrMgmt_HVILErrorLevelSel'
   *
   * Block requirements for '<S48>/ErrMgmt_HVILErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116166
   *  2. VCU_SW_Requirements_Specification.slreqx:747
   *  3. VCU_SW_Requirements_Specification.slreqx:748
   *  4. VCU_SW_Requirements_Specification.slreqx:749
   *  5. VCU_SW_Requirements_Specification.slreqx:750
   *  6. VCU_SW_Requirements_Specification.slreqx:116171
   *  7. VCU_SW_Requirements_Specification.slreqx:751
   */
  ErrMgmt_HVILErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_HVILErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_InslaErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:734
   *  2. VCU_SW_Requirements_Specification.slreqx:735
   *  3. VCU_SW_Requirements_Specification.slreqx:736
   *  4. VCU_SW_Requirements_Specification.slreqx:737
   *  5. VCU_SW_Requirements_Specification.slreqx:738
   *  6. VCU_SW_Requirements_Specification.slreqx:739
   *  7. VCU_SW_Requirements_Specification.slreqx:740
   *  8. VCU_SW_Requirements_Specification.slreqx:741
   *  9. VCU_SW_Requirements_Specification.slreqx:742
   *  10. VCU_SW_Requirements_Specification.slreqx:743
   *  11. VCU_SW_Requirements_Specification.slreqx:116148
   *  12. VCU_SW_Requirements_Specification.slreqx:116154
   *  13. VCU_SW_Requirements_Specification.slreqx:116159
   */
  /* SystemInitialize for Enabled SubSystem: '<S49>/BMSInslaErrLvlCfm'
   *
   * Block requirements for '<S49>/BMSInslaErrLvlCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:734
   *  2. VCU_SW_Requirements_Specification.slreqx:735
   *  3. VCU_SW_Requirements_Specification.slreqx:736
   *  4. VCU_SW_Requirements_Specification.slreqx:737
   *  5. VCU_SW_Requirements_Specification.slreqx:738
   *  6. VCU_SW_Requirements_Specification.slreqx:739
   *  7. VCU_SW_Requirements_Specification.slreqx:740
   *  8. VCU_SW_Requirements_Specification.slreqx:741
   *  9. VCU_SW_Requirements_Specification.slreqx:742
   *  10. VCU_SW_Requirements_Specification.slreqx:743
   */
  /* InitializeConditions for Delay: '<S80>/Delay' */
  CtAp_FltReactn_ARID_DEF.Delay_DSTATE_cq5u = ((uint8_T)0U);

  /* SystemInitialize for Atomic SubSystem: '<S80>/ErrDlyCfm'
   *
   * Block requirements for '<S80>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116107
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_pbm3);

  /* End of SystemInitialize for SubSystem: '<S80>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S80>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_cv5h);

  /* End of SystemInitialize for SubSystem: '<S80>/ATOM_TimeCnt' */
  /* End of SystemInitialize for SubSystem: '<S49>/BMSInslaErrLvlCfm' */

  /* SystemInitialize for Chart: '<S49>/ErrMgmt_InslaErrorLevelSel'
   *
   * Block requirements for '<S49>/ErrMgmt_InslaErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116148
   *  2. VCU_SW_Requirements_Specification.slreqx:734
   *  3. VCU_SW_Requirements_Specification.slreqx:735
   *  4. VCU_SW_Requirements_Specification.slreqx:736
   *  5. VCU_SW_Requirements_Specification.slreqx:737
   *  6. VCU_SW_Requirements_Specification.slreqx:738
   *  7. VCU_SW_Requirements_Specification.slreqx:116154
   *  8. VCU_SW_Requirements_Specification.slreqx:739
   *  9. VCU_SW_Requirements_Specification.slreqx:740
   *  10. VCU_SW_Requirements_Specification.slreqx:741
   *  11. VCU_SW_Requirements_Specification.slreqx:742
   *  12. VCU_SW_Requirements_Specification.slreqx:116159
   *  13. VCU_SW_Requirements_Specification.slreqx:743
   */
  ErrMgmt_InslaErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_InslaErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_MCUErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_MCUErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:723
   *  2. VCU_SW_Requirements_Specification.slreqx:724
   *  3. VCU_SW_Requirements_Specification.slreqx:725
   *  4. VCU_SW_Requirements_Specification.slreqx:726
   *  5. VCU_SW_Requirements_Specification.slreqx:727
   *  6. VCU_SW_Requirements_Specification.slreqx:728
   *  7. VCU_SW_Requirements_Specification.slreqx:116132
   *  8. VCU_SW_Requirements_Specification.slreqx:116138
   */
  /* SystemInitialize for Atomic SubSystem: '<S50>/ErrDlyCfm'
   *
   * Block requirements for '<S50>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116132
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_cxar);

  /* End of SystemInitialize for SubSystem: '<S50>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S50>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of SystemInitialize for SubSystem: '<S50>/ATOM_TimeCnt' */

  /* SystemInitialize for Chart: '<S50>/ErrMgmt_MCUErrorLevelSel'
   *
   * Block requirements for '<S50>/ErrMgmt_MCUErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116132
   *  2. VCU_SW_Requirements_Specification.slreqx:723
   *  3. VCU_SW_Requirements_Specification.slreqx:724
   *  4. VCU_SW_Requirements_Specification.slreqx:725
   *  5. VCU_SW_Requirements_Specification.slreqx:726
   *  6. VCU_SW_Requirements_Specification.slreqx:727
   *  7. VCU_SW_Requirements_Specification.slreqx:116138
   *  8. VCU_SW_Requirements_Specification.slreqx:728
   */
  ErrMgmt_MCUErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_MCUErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_OBCErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:711
   *  2. VCU_SW_Requirements_Specification.slreqx:712
   *  3. VCU_SW_Requirements_Specification.slreqx:713
   *  4. VCU_SW_Requirements_Specification.slreqx:714
   *  5. VCU_SW_Requirements_Specification.slreqx:715
   *  6. VCU_SW_Requirements_Specification.slreqx:716
   *  7. VCU_SW_Requirements_Specification.slreqx:116115
   *  8. VCU_SW_Requirements_Specification.slreqx:116121
   */
  /* SystemInitialize for Atomic SubSystem: '<S51>/ErrDlyCfm'
   *
   * Block requirements for '<S51>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116115
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm_cl54);

  /* End of SystemInitialize for SubSystem: '<S51>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S51>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of SystemInitialize for SubSystem: '<S51>/ATOM_TimeCnt' */

  /* SystemInitialize for Chart: '<S51>/ErrMgmt_OBCErrorLevelSel'
   *
   * Block requirements for '<S51>/ErrMgmt_OBCErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116115
   *  2. VCU_SW_Requirements_Specification.slreqx:711
   *  3. VCU_SW_Requirements_Specification.slreqx:712
   *  4. VCU_SW_Requirements_Specification.slreqx:713
   *  5. VCU_SW_Requirements_Specification.slreqx:714
   *  6. VCU_SW_Requirements_Specification.slreqx:715
   *  7. VCU_SW_Requirements_Specification.slreqx:116121
   *  8. VCU_SW_Requirements_Specification.slreqx:716
   */
  ErrMgmt_OBCErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_OBCErrorCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/ErrMgmt_TCUErrorCheckSys'
   *
   * Block requirements for '<S42>/ErrMgmt_TCUErrorCheckSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:729
   *  2. VCU_SW_Requirements_Specification.slreqx:730
   *  3. VCU_SW_Requirements_Specification.slreqx:731
   *  4. VCU_SW_Requirements_Specification.slreqx:732
   *  5. VCU_SW_Requirements_Specification.slreqx:733
   *  6. VCU_SW_Requirements_Specification.slreqx:116140
   *  7. VCU_SW_Requirements_Specification.slreqx:116145
   */
  /* SystemInitialize for Atomic SubSystem: '<S52>/ErrDlyCfm'
   *
   * Block requirements for '<S52>/ErrDlyCfm':
   *  1. VCU_SW_Requirements_Specification.slreqx:116140
   */
  CtAp_FltReactn_ErrDlyCfm_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ErrDlyCfm);

  /* End of SystemInitialize for SubSystem: '<S52>/ErrDlyCfm' */

  /* SystemInitialize for Atomic SubSystem: '<S52>/ATOM_TimeCnt' */
  CtAp_FltReact_ATOM_TimeCnt_Init
    (&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt_mbvz);

  /* End of SystemInitialize for SubSystem: '<S52>/ATOM_TimeCnt' */

  /* SystemInitialize for Chart: '<S52>/ErrMgmt_TCUErrorLevelSel'
   *
   * Block requirements for '<S52>/ErrMgmt_TCUErrorLevelSel':
   *  1. VCU_SW_Requirements_Specification.slreqx:116140
   *  2. VCU_SW_Requirements_Specification.slreqx:729
   *  3. VCU_SW_Requirements_Specification.slreqx:730
   *  4. VCU_SW_Requirements_Specification.slreqx:731
   *  5. VCU_SW_Requirements_Specification.slreqx:732
   *  6. VCU_SW_Requirements_Specification.slreqx:116145
   *  7. VCU_SW_Requirements_Specification.slreqx:733
   */
  ErrMgmt_TCUErrLvl_Enum = 0U;

  /* End of SystemInitialize for SubSystem: '<S42>/ErrMgmt_TCUErrorCheckSys' */
  /* End of SystemInitialize for SubSystem: '<S2>/ErrMgmt_ECUErrCheckSys' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/ErrMgmt_ReactionSys'
   *
   * Block requirements for '<S2>/ErrMgmt_ReactionSys':
   *  1. VCU_SW_Requirements_Specification.slreqx:755
   *  2. VCU_SW_Requirements_Specification.slreqx:756
   *  3. VCU_SW_Requirements_Specification.slreqx:757
   *  4. VCU_SW_Requirements_Specification.slreqx:758
   *  5. VCU_SW_Requirements_Specification.slreqx:759
   *  6. VCU_SW_Requirements_Specification.slreqx:760
   *  7. VCU_SW_Requirements_Specification.slreqx:761
   *  8. VCU_SW_Requirements_Specification.slreqx:762
   *  9. VCU_SW_Requirements_Specification.slreqx:763
   *  10. VCU_SW_Requirements_Specification.slreqx:764
   *  11. VCU_SW_Requirements_Specification.slreqx:765
   *  12. VCU_SW_Requirements_Specification.slreqx:766
   *  13. VCU_SW_Requirements_Specification.slreqx:767
   *  14. VCU_SW_Requirements_Specification.slreqx:6308
   *  15. VCU_SW_Requirements_Specification.slreqx:769
   *  16. VCU_SW_Requirements_Specification.slreqx:770
   */
  /* SystemInitialize for Atomic SubSystem: '<S44>/ATOM_TimeCnt'
   *
   * Block requirements for '<S44>/ATOM_TimeCnt':
   *  1. VCU_SW_Requirements_Specification.slreqx:771
   */
  CtAp_FltReact_ATOM_TimeCnt_Init(&CtAp_FltReactn_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of SystemInitialize for SubSystem: '<S44>/ATOM_TimeCnt' */
  /* End of SystemInitialize for SubSystem: '<S2>/ErrMgmt_ReactionSys' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_FltReactn_Cyclic_10ms_sys' */
}

#define CtAp_FltReactn_STOP_SEC_VAR_CONST_8
#include "CtAp_FltReactn_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
