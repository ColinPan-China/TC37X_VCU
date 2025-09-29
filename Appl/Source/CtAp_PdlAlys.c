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
 *  Filename:           CtAp_PdlAlys.c
 *  File Creation Date: 19-Aug-2025
 *  Model Name:         CtAp_PdlAlys
 *  Model Version:      1.260
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug 19 13:32:42 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 13:32:00 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PdlAlys.h"
#include "rtwtypes.h"
#include "CtAp_PdlAlys_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "VCU_TempGlobal.h"
#include "CtAp_PdlAlys_Glb.h"
#include "look1_iflf_binlca.h"
#include "CtAp_PdlAlys_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static boolean_T ChassMgmt_AccrPedlURaw1PreUnJitterSts1_Flg;/* '<S147>/RelationalOperator1' */

/* Acceleration pedal raw voltage1 under prejitter status1 active: 0:Not active 1:Active */
static boolean_T ChassMgmt_AccrPedlURaw1PreUnJitterSts2_Flg;/* '<S147>/RelationalOperator2' */

/* Acceleration pedal raw voltage1 under prejitter status2 active:: 0:Not active 1:Active */
static boolean_T ChassMgmt_AccrPedlURaw1PreUnJitterSts3_Flg;/* '<S147>/RelationalOperator' */

/* Acceleration pedal raw voltage1 under prejitter status3 active: 0:Not active 1:Active */
static boolean_T ChassMgmt_AccrPedlURaw2PreUnJitterSts1_Flg;/* '<S148>/RelationalOperator1' */

/* Acceleration pedal raw voltage2 under prejitter status1 active: 0:Not active 1:Active */
static boolean_T ChassMgmt_AccrPedlURaw2PreUnJitterSts2_Flg;/* '<S148>/RelationalOperator2' */

/* Acceleration pedal raw voltage2 under prejitter status2 active: 0:Not active 1:Active */
static boolean_T ChassMgmt_AccrPedlURaw2PreUnJitterSts3_Flg;/* '<S148>/RelationalOperator' */

/* Acceleration pedal raw voltage2 under prejitter status3 active: 0:Not active 1:Active */
static real32_T ChassisMgmt_AccrPedl1unFilPosn_pct;
                                   /* '<S14>/ChassisMgmt_AccrPedl1RatLnr_LUT' */

/* Acceleration pedal2 nonefiltered position value */
static real32_T ChassisMgmt_AccrPedl2unFilPosn_pct;
                                   /* '<S14>/ChassisMgmt_AccrPedl2RatLnr_LUT' */

/* Acceleration pedal2 nonefiltered position value */
static boolean_T ChassisMgmt_AccrPedlAllPas_Flg;/* '<S19>/LogicalOperator' */

/* Acceleration pedal1 and 2 all in range status: 0:Failed 1:Passed */
static boolean_T ChassisMgmt_AccrPedlKdSts_Flg;/* '<S21>/Switch1' */

/* Accelerator Pedal kick down status */
static boolean_T ChassisMgmt_AccrPedlSplyVolt1HiFltActv_Flg;/* '<S29>/RelationalOperator' */

/* Accelerator Pedal Sensor1 Power supply voltage High fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt1HiFltReSetActv_Flg;/* '<S29>/RelationalOperator1' */

/* Accelerator Pedal Sensor1 Power supply voltage High fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt1LoFltActv_Flg;/* '<S32>/RelationalOperator' */

/* Accelerator Pedal Sensor1 Power supply voltage low fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt1LoFltEnaDTC_Flg;/* '<S33>/LogicalOperator1' */

/* Accelerator Pedal Sensor1 Power supply voltage High fault enable DTC satus */
static boolean_T ChassisMgmt_AccrPedlSplyVolt1LoFltReSetActv_Flg;/* '<S32>/RelationalOperator1' */

/* Accelerator Pedal Sensor1 Power supply voltage low fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt2HiFltActv_Flg;/* '<S54>/RelationalOperator' */

/* Accelerator Pedal Sensor2 Power supply voltage High fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt2HiFltReSetActv_Flg;/* '<S54>/RelationalOperator1' */

/* Accelerator Pedal Sensor2 Power supply voltage High fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt2LoFltActv_Flg;/* '<S55>/RelationalOperator' */

/* Accelerator Pedal Sensor2 Power supply voltage low fault reset satus ,1:Active 0:inactive: */
static boolean_T ChassisMgmt_AccrPedlSplyVolt2LoFltEnaDTC_Flg;/* '<S58>/LogicalOperator' */

/* Accelerator Pedal Sensor2 Power supply voltage High fault enable DTC satus */
static boolean_T ChassisMgmt_AccrPedlSplyVolt2LoFltReSetActv_Flg;/* '<S55>/RelationalOperator1' */

/* Accelerator Pedal Sensor2 Power supply voltage low fault reset satus ,1:Active 0:inactive: */
static real32_T ChassisMgmt_AccrPedlURaw1AbsDif_mV;/* '<S147>/Abs' */

/* Acceleration pedal1 raw voltage1 absloute difference */
static real32_T ChassisMgmt_AccrPedlURaw1Dif_mV;/* '<S147>/Subtract' */

/* Acceleration pedal1 raw voltage1 difference */
static boolean_T ChassisMgmt_AccrPedlURaw1HiFltActv_Flg;/* '<S102>/RelationalOperator' */

/* Acceleration pedal1 voltage higher to normal value fault status active: 0:Not active 1:Active */
static boolean_T ChassisMgmt_AccrPedlURaw1HiFltReSetActv_Flg;/* '<S102>/RelationalOperator1' */

/* Acceleration pedal1 voltage higher than normal value fault reset status active: 0:Not active 1:Active */
static real32_T ChassisMgmt_AccrPedlURaw2AbsDif_mV;/* '<S148>/Abs' */

/* Acceleration pedal2 raw voltage1 absloute difference */
static real32_T ChassisMgmt_AccrPedlURaw2Dif_mV;/* '<S148>/Subtract' */

/* Acceleration pedal2 raw voltage1 difference */
static boolean_T ChassisMgmt_AccrPedlURawDifFlt2Cmn_Flg;/* '<S91>/LogicalOperator7' */

/* Accr Pedal Fault common condition */
static boolean_T ChassisMgmt_AccrPedlURawDifFltCmn_Flg;/* '<S85>/LogicalOperator' */

/* Accr Pedal Dif fault common condition */
static boolean_T ChassisMgmt_AccrPedlURawDifFltResetActv_Flg;/* '<S83>/RelationalOperator' */

/* Acceleration pedal voltage difference fault reset status active: 0:Not active 1:Active */
static boolean_T ChassisMgmt_AccrPedlURawDifFltSetActv_Flg;/* '<S84>/LogicalOperator' */

/* Acceleration pedal two voltages difference fault status active:0:Not active 1:Active */
static real32_T ChassisMgmt_AccrPedlUnFilRawPosn_pct;/* '<S19>/Switch' */

/* Acceleration pedal position value filter */
static boolean_T ChassisMgmt_BrkPedlPrio_Flg;/* '<S16>/LogicalOperator1' */

/* IBS Brake require zero Accelerator pedal */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt1HiFltDTC_Flg;/* '<S30>/Data Type Conversion1' */

/* Accelerator Pedal Sensor1 Power supply voltage High fault DTC */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt1HiFlt_Flg;/* '<S42>/Switch6' */

/* Accelerator Pedal Sensor1 Power supply voltage High fault FUSA */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt1LoFltDTC_Flg;/* '<S33>/Data Type Conversion1' */

/* Accelerator Pedal Sensor1 Power supply voltage Lo fault DTC */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt1LoFlt_Flg;/* '<S51>/Switch6' */

/* Accelerator Pedal Sensor1 Power supply voltage low fault FUSA */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt2HiFltDTC_Flg;/* '<S56>/Data Type Conversion1' */

/* Accelerator Pedal Sensor2 Power supply voltage High fault DTC */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt2HiFlt_Flg;/* '<S67>/Switch6' */

/* Accelerator Pedal Sensor2 Power supply voltage High fault FUSA */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt2LoFltDTC_Flg;/* '<S58>/Data Type Conversion1' */

/* Accelerator Pedal Sensor1 Power supply voltage Lo fault DTC */
static boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt2LoFlt_Flg;/* '<S76>/Switch6' */

/* Accelerator Pedal Sensor2 Power supply voltage low fault FUSA */
static boolean_T ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg;/* '<S94>/Switch6' */

/* FUSA Accr Pedal Dif fault */
static boolean_T ChassisMgmt_ErrResAccrPedlVolt1Flt_Flg;/* '<S97>/LogicalOperator' */

/* Acceleration pedal 1 Flt status active: 0:Not fail 1:fail */
static boolean_T ChassisMgmt_IBSBReqZeroAccrPedl_Flg;/* '<S17>/LogicalOperator' */

/* IBS Brake require zero Accelerator pedal */
static real32_T IOAbs_AccrPedlMaiRaw_mV;/* '<S4>/DataTypeConversion' */

/* IO read volt */
static real32_T IOAbs_AccrPedlRdnRaw_mV;/* '<S4>/DataTypeConversion1' */

/* IO read volt */
#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"

ARID_DEF_CtAp_PdlAlys_T CtAp_PdlAlys_ARID_DEF;

#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S30>/ATOM_TimeCnt'
 *    '<S33>/ATOM_TimeCnt'
 *    '<S56>/ATOM_TimeCnt'
 *    '<S58>/ATOM_TimeCnt'
 *    '<S80>/ATOM_TimeCnt'
 *    '<S98>/ATOM_TimeCnt'
 *    '<S103>/ATOM_TimeCnt'
 *    '<S124>/ATOM_TimeCnt'
 *    '<S126>/ATOM_TimeCnt'
 */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

boolean_T CtAp_PdlAlys_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S36>/Add1' incorporates:
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   *  DataTypeConversion: '<S36>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)((uint16_T)rtu_MaxTime_C) + (uint32_T)
                        rtu_RunStep_C);

  /* Switch: '<S36>/Switch' */
  if (rtu_In) {
    /* Sum: '<S36>/Add' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     *  UnitDelay: '<S36>/Delay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S36>/Min' */
    if (rtb_Add1 <= CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S36>/Add' */
      CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S36>/Min' */
  } else {
    /* Sum: '<S36>/Add' incorporates:
     *  Constant: '<S36>/Constant'
     *  UnitDelay: '<S36>/Delay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S36>/Switch' */

  /* RelationalOperator: '<S36>/Relational Operator' incorporates:
   *  UnitDelay: '<S36>/Delay'
   */
  return CtAp_PdlAlys__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* System initialize for atomic system: '<S30>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S37>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S38>/Switch6' incorporates:
   *  Outport: '<S38>/ErrorRes'
   */
  ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S37>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S30>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_PdlAlys_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S37>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S37>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/Constant2'
     *  DataTypeConversion: '<S38>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S38>/Switch1' */

    /* RelationalOperator: '<S38>/Equal2' incorporates:
     *  Constant: '<S38>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S39>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S39>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S39>/Sum' incorporates:
       *  UnitDelay: '<S39>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S39>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S39>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S39>/MinMax' */
    } else {
      /* Sum: '<S39>/Sum' incorporates:
       *  Constant: '<S38>/Constant37'
       *  UnitDelay: '<S39>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S38>/Constant3'
     *  RelationalOperator: '<S38>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S40>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S40>/Sum' incorporates:
       *  UnitDelay: '<S40>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza);

      /* MinMax: '<S40>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza) {
        /* Sum: '<S40>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza = u0;
      }

      /* End of MinMax: '<S40>/MinMax' */
    } else {
      /* Sum: '<S40>/Sum' incorporates:
       *  Constant: '<S38>/Constant23'
       *  UnitDelay: '<S40>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza = ((uint16_T)0U);
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Switch: '<S38>/Switch2' incorporates:
     *  Constant: '<S38>/FAILED'
     *  RelationalOperator: '<S39>/B_MiHold'
     *  RelationalOperator: '<S40>/B_MiHold'
     *  Switch: '<S38>/Switch3'
     *  Switch: '<S38>/Switch4'
     *  UnitDelay: '<S39>/UnitDelay'
     *  UnitDelay: '<S40>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S38>/Switch3' incorporates:
       *  Constant: '<S38>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ecza >
               rtu_Dematuretime) {
      /* Switch: '<S38>/Switch4' incorporates:
       *  Constant: '<S38>/PASSED'
       *  Switch: '<S38>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S38>/Switch3' incorporates:
       *  Constant: '<S38>/DEBOUNCING_P'
       *  Switch: '<S38>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S38>/Switch2' */

    /* Switch: '<S38>/Switch6' incorporates:
     *  Constant: '<S38>/Constant30'
     *  Constant: '<S38>/Constant31'
     *  RelationalOperator: '<S38>/Equal3'
     *  RelationalOperator: '<S38>/Equal4'
     *  Switch: '<S38>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S38>/Switch6' incorporates:
       *  Constant: '<S38>/Constant32'
       */
      ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S38>/Switch7' incorporates:
       *  Constant: '<S38>/Constant11'
       *  Switch: '<S38>/Switch6'
       */
      ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S38>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S37>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S31>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtAp_Pdl_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S41>/True' */
  *rty_MonStat = true;

  /* Switch: '<S42>/Switch1' incorporates:
   *  Constant: '<S42>/Constant2'
   *  DataTypeConversion: '<S42>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S42>/Switch1' */

  /* RelationalOperator: '<S42>/Equal2' incorporates:
   *  Constant: '<S42>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S43>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S43>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S43>/Sum' incorporates:
     *  UnitDelay: '<S43>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S43>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S43>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S43>/MinMax' */
  } else {
    /* Sum: '<S43>/Sum' incorporates:
     *  Constant: '<S42>/Constant37'
     *  UnitDelay: '<S43>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S43>/Switch1' */

  /* Switch: '<S44>/Switch1' incorporates:
   *  Constant: '<S42>/Constant3'
   *  RelationalOperator: '<S42>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S44>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S44>/Sum' incorporates:
     *  UnitDelay: '<S44>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5 = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5);

    /* MinMax: '<S44>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5) {
      /* Sum: '<S44>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5 = u0;
    }

    /* End of MinMax: '<S44>/MinMax' */
  } else {
    /* Sum: '<S44>/Sum' incorporates:
     *  Constant: '<S42>/Constant23'
     *  UnitDelay: '<S44>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5 = ((uint16_T)0U);
  }

  /* End of Switch: '<S44>/Switch1' */

  /* Switch: '<S42>/Switch2' incorporates:
   *  Constant: '<S42>/FAILED'
   *  RelationalOperator: '<S43>/B_MiHold'
   *  RelationalOperator: '<S44>/B_MiHold'
   *  Switch: '<S42>/Switch3'
   *  Switch: '<S42>/Switch4'
   *  UnitDelay: '<S43>/UnitDelay'
   *  UnitDelay: '<S44>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S42>/Switch3' incorporates:
     *  Constant: '<S42>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_drj5 >
             rtu_Dematuretime) {
    /* Switch: '<S42>/Switch4' incorporates:
     *  Constant: '<S42>/PASSED'
     *  Switch: '<S42>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S42>/Switch3' incorporates:
     *  Constant: '<S42>/DEBOUNCING_P'
     *  Switch: '<S42>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S42>/Switch2' */

  /* Switch: '<S42>/Switch6' incorporates:
   *  Constant: '<S42>/Constant30'
   *  Constant: '<S42>/Constant31'
   *  RelationalOperator: '<S42>/Equal3'
   *  RelationalOperator: '<S42>/Equal4'
   *  Switch: '<S42>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S42>/Switch6' incorporates:
     *  Constant: '<S42>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt1HiFlt_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S42>/Switch7' incorporates:
     *  Constant: '<S42>/Constant11'
     *  Switch: '<S42>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt1HiFlt_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S42>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S33>/AvoidMu'
 *    '<S56>/AvoidMu'
 *    '<S58>/AvoidMu'
 *    '<S98>/AvoidMu'
 */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_ces0(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S46>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S46>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S47>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S47>/Constant2'
     *  DataTypeConversion: '<S47>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S47>/Switch1' */

    /* RelationalOperator: '<S47>/Equal2' incorporates:
     *  Constant: '<S47>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S48>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S48>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S48>/Sum' incorporates:
       *  UnitDelay: '<S48>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S48>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S48>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S48>/MinMax' */
    } else {
      /* Sum: '<S48>/Sum' incorporates:
       *  Constant: '<S47>/Constant37'
       *  UnitDelay: '<S48>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S47>/Constant3'
     *  RelationalOperator: '<S47>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S49>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S49>/Sum' incorporates:
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4 = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4);

      /* MinMax: '<S49>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4) {
        /* Sum: '<S49>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4 = u0;
      }

      /* End of MinMax: '<S49>/MinMax' */
    } else {
      /* Sum: '<S49>/Sum' incorporates:
       *  Constant: '<S47>/Constant23'
       *  UnitDelay: '<S49>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4 = ((uint16_T)0U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S47>/Switch2' incorporates:
     *  Constant: '<S47>/FAILED'
     *  RelationalOperator: '<S48>/B_MiHold'
     *  RelationalOperator: '<S49>/B_MiHold'
     *  Switch: '<S47>/Switch3'
     *  Switch: '<S47>/Switch4'
     *  UnitDelay: '<S48>/UnitDelay'
     *  UnitDelay: '<S49>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S47>/Switch3' incorporates:
       *  Constant: '<S47>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eso4 >
               rtu_Dematuretime) {
      /* Switch: '<S47>/Switch4' incorporates:
       *  Constant: '<S47>/PASSED'
       *  Switch: '<S47>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S47>/Switch3' incorporates:
       *  Constant: '<S47>/DEBOUNCING_P'
       *  Switch: '<S47>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S47>/Switch2' */

    /* Switch: '<S47>/Switch6' incorporates:
     *  Constant: '<S47>/Constant30'
     *  Constant: '<S47>/Constant31'
     *  Constant: '<S47>/Constant32'
     *  Delay: '<S47>/Delay1'
     *  RelationalOperator: '<S47>/Equal3'
     *  RelationalOperator: '<S47>/Equal4'
     *  Switch: '<S47>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S47>/Switch7' incorporates:
       *  Constant: '<S47>/Constant11'
       */
      *rty_ErrorRes = false;
    } else {
      *rty_ErrorRes = CtAp_PdlAlys__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S47>/Switch6' */

    /* Update for Delay: '<S47>/Delay1' */
    CtAp_PdlAlys__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S46>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S34>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_lcyj(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_faqo_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S50>/True' */
  *rty_MonStat = true;

  /* Switch: '<S51>/Switch1' incorporates:
   *  Constant: '<S51>/Constant2'
   *  DataTypeConversion: '<S51>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S51>/Switch1' */

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
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S52>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S52>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S52>/MinMax' */
  } else {
    /* Sum: '<S52>/Sum' incorporates:
     *  Constant: '<S51>/Constant37'
     *  UnitDelay: '<S52>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S52>/Switch1' */

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
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q);

    /* MinMax: '<S53>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q) {
      /* Sum: '<S53>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q = u0;
    }

    /* End of MinMax: '<S53>/MinMax' */
  } else {
    /* Sum: '<S53>/Sum' incorporates:
     *  Constant: '<S51>/Constant23'
     *  UnitDelay: '<S53>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q = ((uint16_T)0U);
  }

  /* End of Switch: '<S53>/Switch1' */

  /* Switch: '<S51>/Switch2' incorporates:
   *  Constant: '<S51>/FAILED'
   *  RelationalOperator: '<S52>/B_MiHold'
   *  RelationalOperator: '<S53>/B_MiHold'
   *  Switch: '<S51>/Switch3'
   *  Switch: '<S51>/Switch4'
   *  UnitDelay: '<S52>/UnitDelay'
   *  UnitDelay: '<S53>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S51>/Switch3' incorporates:
     *  Constant: '<S51>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g12q >
             rtu_Dematuretime) {
    /* Switch: '<S51>/Switch4' incorporates:
     *  Constant: '<S51>/PASSED'
     *  Switch: '<S51>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S51>/Switch3' incorporates:
     *  Constant: '<S51>/DEBOUNCING_P'
     *  Switch: '<S51>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S51>/Switch2' */

  /* Switch: '<S51>/Switch6' incorporates:
   *  Constant: '<S51>/Constant30'
   *  Constant: '<S51>/Constant31'
   *  RelationalOperator: '<S51>/Equal3'
   *  RelationalOperator: '<S51>/Equal4'
   *  Switch: '<S51>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S51>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt1LoFlt_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S51>/Switch7' incorporates:
     *  Constant: '<S51>/Constant11'
     *  Switch: '<S51>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt1LoFlt_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S51>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S57>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_ml3a(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_lme0_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S66>/True' */
  *rty_MonStat = true;

  /* Switch: '<S67>/Switch1' incorporates:
   *  Constant: '<S67>/Constant2'
   *  DataTypeConversion: '<S67>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S67>/Switch1' */

  /* RelationalOperator: '<S67>/Equal2' incorporates:
   *  Constant: '<S67>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S68>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S68>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S68>/Sum' incorporates:
     *  UnitDelay: '<S68>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S68>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S68>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S68>/MinMax' */
  } else {
    /* Sum: '<S68>/Sum' incorporates:
     *  Constant: '<S67>/Constant37'
     *  UnitDelay: '<S68>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S68>/Switch1' */

  /* Switch: '<S69>/Switch1' incorporates:
   *  Constant: '<S67>/Constant3'
   *  RelationalOperator: '<S67>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S69>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S69>/Sum' incorporates:
     *  UnitDelay: '<S69>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2 = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2);

    /* MinMax: '<S69>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2) {
      /* Sum: '<S69>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2 = u0;
    }

    /* End of MinMax: '<S69>/MinMax' */
  } else {
    /* Sum: '<S69>/Sum' incorporates:
     *  Constant: '<S67>/Constant23'
     *  UnitDelay: '<S69>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2 = ((uint16_T)0U);
  }

  /* End of Switch: '<S69>/Switch1' */

  /* Switch: '<S67>/Switch2' incorporates:
   *  Constant: '<S67>/FAILED'
   *  RelationalOperator: '<S68>/B_MiHold'
   *  RelationalOperator: '<S69>/B_MiHold'
   *  Switch: '<S67>/Switch3'
   *  Switch: '<S67>/Switch4'
   *  UnitDelay: '<S68>/UnitDelay'
   *  UnitDelay: '<S69>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S67>/Switch3' incorporates:
     *  Constant: '<S67>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_ffd2 >
             rtu_Dematuretime) {
    /* Switch: '<S67>/Switch4' incorporates:
     *  Constant: '<S67>/PASSED'
     *  Switch: '<S67>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S67>/Switch3' incorporates:
     *  Constant: '<S67>/DEBOUNCING_P'
     *  Switch: '<S67>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S67>/Switch2' */

  /* Switch: '<S67>/Switch6' incorporates:
   *  Constant: '<S67>/Constant30'
   *  Constant: '<S67>/Constant31'
   *  RelationalOperator: '<S67>/Equal3'
   *  RelationalOperator: '<S67>/Equal4'
   *  Switch: '<S67>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S67>/Switch6' incorporates:
     *  Constant: '<S67>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt2HiFlt_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S67>/Switch7' incorporates:
     *  Constant: '<S67>/Constant11'
     *  Switch: '<S67>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt2HiFlt_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S67>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S59>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_ncum(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_mhvf_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S75>/True' */
  *rty_MonStat = true;

  /* Switch: '<S76>/Switch1' incorporates:
   *  Constant: '<S76>/Constant2'
   *  DataTypeConversion: '<S76>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S76>/Switch1' */

  /* RelationalOperator: '<S76>/Equal2' incorporates:
   *  Constant: '<S76>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S77>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S77>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S77>/Sum' incorporates:
     *  UnitDelay: '<S77>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S77>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S77>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S77>/MinMax' */
  } else {
    /* Sum: '<S77>/Sum' incorporates:
     *  Constant: '<S76>/Constant37'
     *  UnitDelay: '<S77>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S77>/Switch1' */

  /* Switch: '<S78>/Switch1' incorporates:
   *  Constant: '<S76>/Constant3'
   *  RelationalOperator: '<S76>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S78>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S78>/Sum' incorporates:
     *  UnitDelay: '<S78>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051 = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051);

    /* MinMax: '<S78>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051) {
      /* Sum: '<S78>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051 = u0;
    }

    /* End of MinMax: '<S78>/MinMax' */
  } else {
    /* Sum: '<S78>/Sum' incorporates:
     *  Constant: '<S76>/Constant23'
     *  UnitDelay: '<S78>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051 = ((uint16_T)0U);
  }

  /* End of Switch: '<S78>/Switch1' */

  /* Switch: '<S76>/Switch2' incorporates:
   *  Constant: '<S76>/FAILED'
   *  RelationalOperator: '<S77>/B_MiHold'
   *  RelationalOperator: '<S78>/B_MiHold'
   *  Switch: '<S76>/Switch3'
   *  Switch: '<S76>/Switch4'
   *  UnitDelay: '<S77>/UnitDelay'
   *  UnitDelay: '<S78>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S76>/Switch3' incorporates:
     *  Constant: '<S76>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_e051 >
             rtu_Dematuretime) {
    /* Switch: '<S76>/Switch4' incorporates:
     *  Constant: '<S76>/PASSED'
     *  Switch: '<S76>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S76>/Switch3' incorporates:
     *  Constant: '<S76>/DEBOUNCING_P'
     *  Switch: '<S76>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S76>/Switch2' */

  /* Switch: '<S76>/Switch6' incorporates:
   *  Constant: '<S76>/Constant30'
   *  Constant: '<S76>/Constant31'
   *  RelationalOperator: '<S76>/Equal3'
   *  RelationalOperator: '<S76>/Equal4'
   *  Switch: '<S76>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S76>/Switch6' incorporates:
     *  Constant: '<S76>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt2LoFlt_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S76>/Switch7' incorporates:
     *  Constant: '<S76>/Constant11'
     *  Switch: '<S76>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlSplyVolt2LoFlt_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S76>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* System initialize for atomic system: '<S80>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_omrp_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S87>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S88>/Switch6' incorporates:
   *  Outport: '<S88>/ErrorRes'
   */
  ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S87>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S80>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_muqh(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_js3m_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S87>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S87>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S88>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S88>/Constant2'
     *  DataTypeConversion: '<S88>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S88>/Switch1' */

    /* RelationalOperator: '<S88>/Equal2' incorporates:
     *  Constant: '<S88>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S89>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S89>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S89>/Sum' incorporates:
       *  UnitDelay: '<S89>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S89>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S89>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S89>/MinMax' */
    } else {
      /* Sum: '<S89>/Sum' incorporates:
       *  Constant: '<S88>/Constant37'
       *  UnitDelay: '<S89>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S88>/Constant3'
     *  RelationalOperator: '<S88>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S90>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S90>/Sum' incorporates:
       *  UnitDelay: '<S90>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab);

      /* MinMax: '<S90>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab) {
        /* Sum: '<S90>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab = u0;
      }

      /* End of MinMax: '<S90>/MinMax' */
    } else {
      /* Sum: '<S90>/Sum' incorporates:
       *  Constant: '<S88>/Constant23'
       *  UnitDelay: '<S90>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab = ((uint16_T)0U);
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S88>/Switch2' incorporates:
     *  Constant: '<S88>/FAILED'
     *  RelationalOperator: '<S89>/B_MiHold'
     *  RelationalOperator: '<S90>/B_MiHold'
     *  Switch: '<S88>/Switch3'
     *  Switch: '<S88>/Switch4'
     *  UnitDelay: '<S89>/UnitDelay'
     *  UnitDelay: '<S90>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S88>/Switch3' incorporates:
       *  Constant: '<S88>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_oxab >
               rtu_Dematuretime) {
      /* Switch: '<S88>/Switch4' incorporates:
       *  Constant: '<S88>/PASSED'
       *  Switch: '<S88>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S88>/Switch3' incorporates:
       *  Constant: '<S88>/DEBOUNCING_P'
       *  Switch: '<S88>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S88>/Switch2' */

    /* Switch: '<S88>/Switch6' incorporates:
     *  Constant: '<S88>/Constant30'
     *  Constant: '<S88>/Constant31'
     *  RelationalOperator: '<S88>/Equal3'
     *  RelationalOperator: '<S88>/Equal4'
     *  Switch: '<S88>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S88>/Switch6' incorporates:
       *  Constant: '<S88>/Constant32'
       */
      ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S88>/Switch7' incorporates:
       *  Constant: '<S88>/Constant11'
       *  Switch: '<S88>/Switch6'
       */
      ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S88>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S87>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S82>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_ceab(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_l4di_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal1_laxw;
  boolean_T rtb_Equal2;

  /* Constant: '<S93>/True' */
  *rty_MonStat = true;

  /* Switch: '<S94>/Switch1' incorporates:
   *  Constant: '<S94>/Constant2'
   *  DataTypeConversion: '<S94>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S94>/Switch1' */

  /* RelationalOperator: '<S94>/Equal2' incorporates:
   *  Constant: '<S94>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S95>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S95>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S95>/Sum' incorporates:
     *  UnitDelay: '<S95>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S95>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S95>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S95>/MinMax' */
  } else {
    /* Sum: '<S95>/Sum' incorporates:
     *  Constant: '<S94>/Constant37'
     *  UnitDelay: '<S95>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S95>/Switch1' */

  /* RelationalOperator: '<S94>/Equal1' incorporates:
   *  Constant: '<S94>/Constant3'
   */
  rtb_Equal1_laxw = (*rty_MonRes == ((uint8_T)0U));

  /* Switch: '<S96>/Switch1' */
  if (rtb_Equal1_laxw) {
    /* Sum: '<S96>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S96>/Sum' incorporates:
     *  UnitDelay: '<S96>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu);

    /* MinMax: '<S96>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu) {
      /* Sum: '<S96>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu = u0;
    }

    /* End of MinMax: '<S96>/MinMax' */
  } else {
    /* Sum: '<S96>/Sum' incorporates:
     *  Constant: '<S94>/Constant23'
     *  UnitDelay: '<S96>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu = ((uint16_T)0U);
  }

  /* End of Switch: '<S96>/Switch1' */

  /* Switch: '<S94>/Switch2' incorporates:
   *  Constant: '<S94>/DEBOUNCING_P'
   *  Constant: '<S94>/FAILED'
   *  RelationalOperator: '<S95>/B_MiHold'
   *  RelationalOperator: '<S96>/B_MiHold'
   *  Switch: '<S94>/Switch3'
   *  Switch: '<S94>/Switch4'
   *  UnitDelay: '<S95>/UnitDelay'
   *  UnitDelay: '<S96>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S94>/Switch3' incorporates:
     *  Constant: '<S94>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_f2wu >
             rtu_Dematuretime) {
    /* Switch: '<S94>/Switch4' incorporates:
     *  Constant: '<S94>/PASSED'
     *  Switch: '<S94>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S94>/Switch2' */

  /* RelationalOperator: '<S94>/Equal3' incorporates:
   *  Constant: '<S94>/Constant30'
   */
  rtb_Equal2 = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S94>/Switch6' */
  if (rtb_Equal2) {
    /* Switch: '<S94>/Switch6' incorporates:
     *  Constant: '<S94>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg = true;
  } else {
    /* RelationalOperator: '<S94>/Equal4' incorporates:
     *  Constant: '<S94>/Constant31'
     */
    rtb_Equal2 = (*rty_ErrStat == ((uint8_T)0U));

    /* Switch: '<S94>/Switch7' */
    if (rtb_Equal2) {
      /* Switch: '<S94>/Switch6' incorporates:
       *  Constant: '<S94>/Constant11'
       */
      ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg = false;
    }

    /* End of Switch: '<S94>/Switch7' */
  }

  /* End of Switch: '<S94>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S99>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_l5wf(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_o3eo_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S109>/True' */
  *rty_MonStat = true;

  /* Switch: '<S110>/Switch1' incorporates:
   *  Constant: '<S110>/Constant2'
   *  DataTypeConversion: '<S110>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S110>/Switch1' */

  /* RelationalOperator: '<S110>/Equal2' incorporates:
   *  Constant: '<S110>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S111>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S111>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S111>/Sum' incorporates:
     *  UnitDelay: '<S111>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S111>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S111>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S111>/MinMax' */
  } else {
    /* Sum: '<S111>/Sum' incorporates:
     *  Constant: '<S110>/Constant37'
     *  UnitDelay: '<S111>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S111>/Switch1' */

  /* Switch: '<S112>/Switch1' incorporates:
   *  Constant: '<S110>/Constant3'
   *  RelationalOperator: '<S110>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S112>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S112>/Sum' incorporates:
     *  UnitDelay: '<S112>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21 = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21);

    /* MinMax: '<S112>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21) {
      /* Sum: '<S112>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21 = u0;
    }

    /* End of MinMax: '<S112>/MinMax' */
  } else {
    /* Sum: '<S112>/Sum' incorporates:
     *  Constant: '<S110>/Constant23'
     *  UnitDelay: '<S112>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21 = ((uint16_T)0U);
  }

  /* End of Switch: '<S112>/Switch1' */

  /* Switch: '<S110>/Switch2' incorporates:
   *  Constant: '<S110>/FAILED'
   *  RelationalOperator: '<S111>/B_MiHold'
   *  RelationalOperator: '<S112>/B_MiHold'
   *  Switch: '<S110>/Switch3'
   *  Switch: '<S110>/Switch4'
   *  UnitDelay: '<S111>/UnitDelay'
   *  UnitDelay: '<S112>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S110>/Switch3' incorporates:
     *  Constant: '<S110>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_dc21 >
             rtu_Dematuretime) {
    /* Switch: '<S110>/Switch4' incorporates:
     *  Constant: '<S110>/PASSED'
     *  Switch: '<S110>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S110>/Switch3' incorporates:
     *  Constant: '<S110>/DEBOUNCING_P'
     *  Switch: '<S110>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S110>/Switch2' */

  /* Switch: '<S110>/Switch6' incorporates:
   *  Constant: '<S110>/Constant30'
   *  Constant: '<S110>/Constant31'
   *  RelationalOperator: '<S110>/Equal3'
   *  RelationalOperator: '<S110>/Equal4'
   *  Switch: '<S110>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S110>/Switch6' incorporates:
     *  Constant: '<S110>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlU1HiFltInfo_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S110>/Switch7' incorporates:
     *  Constant: '<S110>/Constant11'
     *  Switch: '<S110>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlU1HiFltInfo_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S110>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S101>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_ol5v(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_hxaj_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S113>/True' */
  *rty_MonStat = true;

  /* Switch: '<S114>/Switch1' incorporates:
   *  Constant: '<S114>/Constant2'
   *  DataTypeConversion: '<S114>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S114>/Switch1' */

  /* RelationalOperator: '<S114>/Equal2' incorporates:
   *  Constant: '<S114>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S115>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S115>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S115>/Sum' incorporates:
     *  UnitDelay: '<S115>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S115>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S115>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S115>/MinMax' */
  } else {
    /* Sum: '<S115>/Sum' incorporates:
     *  Constant: '<S114>/Constant37'
     *  UnitDelay: '<S115>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S115>/Switch1' */

  /* Switch: '<S116>/Switch1' incorporates:
   *  Constant: '<S114>/Constant3'
   *  RelationalOperator: '<S114>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S116>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S116>/Sum' incorporates:
     *  UnitDelay: '<S116>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez);

    /* MinMax: '<S116>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez) {
      /* Sum: '<S116>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez = u0;
    }

    /* End of MinMax: '<S116>/MinMax' */
  } else {
    /* Sum: '<S116>/Sum' incorporates:
     *  Constant: '<S114>/Constant23'
     *  UnitDelay: '<S116>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez = ((uint16_T)0U);
  }

  /* End of Switch: '<S116>/Switch1' */

  /* Switch: '<S114>/Switch2' incorporates:
   *  Constant: '<S114>/FAILED'
   *  RelationalOperator: '<S115>/B_MiHold'
   *  RelationalOperator: '<S116>/B_MiHold'
   *  Switch: '<S114>/Switch3'
   *  Switch: '<S114>/Switch4'
   *  UnitDelay: '<S115>/UnitDelay'
   *  UnitDelay: '<S116>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S114>/Switch3' incorporates:
     *  Constant: '<S114>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_isez >
             rtu_Dematuretime) {
    /* Switch: '<S114>/Switch4' incorporates:
     *  Constant: '<S114>/PASSED'
     *  Switch: '<S114>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S114>/Switch3' incorporates:
     *  Constant: '<S114>/DEBOUNCING_P'
     *  Switch: '<S114>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S114>/Switch2' */

  /* Switch: '<S114>/Switch6' incorporates:
   *  Constant: '<S114>/Constant30'
   *  Constant: '<S114>/Constant31'
   *  RelationalOperator: '<S114>/Equal3'
   *  RelationalOperator: '<S114>/Equal4'
   *  Switch: '<S114>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S114>/Switch6' incorporates:
     *  Constant: '<S114>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlU1LoFltInfo_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S114>/Switch7' incorporates:
     *  Constant: '<S114>/Constant11'
     *  Switch: '<S114>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlU1LoFltInfo_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S114>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* System initialize for atomic system: '<S103>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_hofa_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S118>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S119>/Switch6' incorporates:
   *  Outport: '<S119>/ErrorRes'
   */
  ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S118>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S103>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_npbs(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_ez4t_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S118>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S118>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S119>/Constant2'
     *  DataTypeConversion: '<S119>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S119>/Switch1' */

    /* RelationalOperator: '<S119>/Equal2' incorporates:
     *  Constant: '<S119>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S120>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S120>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S120>/Sum' incorporates:
       *  UnitDelay: '<S120>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S120>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S120>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S120>/MinMax' */
    } else {
      /* Sum: '<S120>/Sum' incorporates:
       *  Constant: '<S119>/Constant37'
       *  UnitDelay: '<S120>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S120>/Switch1' */

    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S119>/Constant3'
     *  RelationalOperator: '<S119>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S121>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S121>/Sum' incorporates:
       *  UnitDelay: '<S121>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw);

      /* MinMax: '<S121>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw) {
        /* Sum: '<S121>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw = u0;
      }

      /* End of MinMax: '<S121>/MinMax' */
    } else {
      /* Sum: '<S121>/Sum' incorporates:
       *  Constant: '<S119>/Constant23'
       *  UnitDelay: '<S121>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw = ((uint16_T)0U);
    }

    /* End of Switch: '<S121>/Switch1' */

    /* Switch: '<S119>/Switch2' incorporates:
     *  Constant: '<S119>/FAILED'
     *  RelationalOperator: '<S120>/B_MiHold'
     *  RelationalOperator: '<S121>/B_MiHold'
     *  Switch: '<S119>/Switch3'
     *  Switch: '<S119>/Switch4'
     *  UnitDelay: '<S120>/UnitDelay'
     *  UnitDelay: '<S121>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S119>/Switch3' incorporates:
       *  Constant: '<S119>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_lcsw >
               rtu_Dematuretime) {
      /* Switch: '<S119>/Switch4' incorporates:
       *  Constant: '<S119>/PASSED'
       *  Switch: '<S119>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S119>/Switch3' incorporates:
       *  Constant: '<S119>/DEBOUNCING_P'
       *  Switch: '<S119>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S119>/Switch2' */

    /* Switch: '<S119>/Switch6' incorporates:
     *  Constant: '<S119>/Constant30'
     *  Constant: '<S119>/Constant31'
     *  RelationalOperator: '<S119>/Equal3'
     *  RelationalOperator: '<S119>/Equal4'
     *  Switch: '<S119>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S119>/Switch6' incorporates:
       *  Constant: '<S119>/Constant32'
       */
      ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S119>/Switch7' incorporates:
       *  Constant: '<S119>/Constant11'
       *  Switch: '<S119>/Switch6'
       */
      ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S119>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S118>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* System initialize for atomic system: '<S124>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_ppxw_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S130>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S131>/Switch6' incorporates:
   *  Outport: '<S131>/ErrorRes'
   */
  ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S130>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S124>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_bqcr(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_l1nc_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S130>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S130>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S131>/Constant2'
     *  DataTypeConversion: '<S131>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S131>/Switch1' */

    /* RelationalOperator: '<S131>/Equal2' incorporates:
     *  Constant: '<S131>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S132>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S132>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S132>/Sum' incorporates:
       *  UnitDelay: '<S132>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S132>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S132>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S132>/MinMax' */
    } else {
      /* Sum: '<S132>/Sum' incorporates:
       *  Constant: '<S131>/Constant37'
       *  UnitDelay: '<S132>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S132>/Switch1' */

    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S131>/Constant3'
     *  RelationalOperator: '<S131>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S133>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S133>/Sum' incorporates:
       *  UnitDelay: '<S133>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p);

      /* MinMax: '<S133>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p) {
        /* Sum: '<S133>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p = u0;
      }

      /* End of MinMax: '<S133>/MinMax' */
    } else {
      /* Sum: '<S133>/Sum' incorporates:
       *  Constant: '<S131>/Constant23'
       *  UnitDelay: '<S133>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p = ((uint16_T)0U);
    }

    /* End of Switch: '<S133>/Switch1' */

    /* Switch: '<S131>/Switch2' incorporates:
     *  Constant: '<S131>/FAILED'
     *  RelationalOperator: '<S132>/B_MiHold'
     *  RelationalOperator: '<S133>/B_MiHold'
     *  Switch: '<S131>/Switch3'
     *  Switch: '<S131>/Switch4'
     *  UnitDelay: '<S132>/UnitDelay'
     *  UnitDelay: '<S133>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S131>/Switch3' incorporates:
       *  Constant: '<S131>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_g52p >
               rtu_Dematuretime) {
      /* Switch: '<S131>/Switch4' incorporates:
       *  Constant: '<S131>/PASSED'
       *  Switch: '<S131>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S131>/Switch3' incorporates:
       *  Constant: '<S131>/DEBOUNCING_P'
       *  Switch: '<S131>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S131>/Switch2' */

    /* Switch: '<S131>/Switch6' incorporates:
     *  Constant: '<S131>/Constant30'
     *  Constant: '<S131>/Constant31'
     *  RelationalOperator: '<S131>/Equal3'
     *  RelationalOperator: '<S131>/Equal4'
     *  Switch: '<S131>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S131>/Switch6' incorporates:
       *  Constant: '<S131>/Constant32'
       */
      ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S131>/Switch7' incorporates:
       *  Constant: '<S131>/Constant11'
       *  Switch: '<S131>/Switch6'
       */
      ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S131>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S130>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S125>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_cqpx(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_ma4k_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal2;

  /* Constant: '<S134>/True' */
  *rty_MonStat = true;

  /* Switch: '<S135>/Switch1' incorporates:
   *  Constant: '<S135>/Constant2'
   *  DataTypeConversion: '<S135>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S135>/Switch1' */

  /* RelationalOperator: '<S135>/Equal2' incorporates:
   *  Constant: '<S135>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S136>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S136>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S136>/Sum' incorporates:
     *  UnitDelay: '<S136>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S136>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S136>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S136>/MinMax' */
  } else {
    /* Sum: '<S136>/Sum' incorporates:
     *  Constant: '<S135>/Constant37'
     *  UnitDelay: '<S136>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S136>/Switch1' */

  /* Switch: '<S137>/Switch1' incorporates:
   *  Constant: '<S135>/Constant3'
   *  RelationalOperator: '<S135>/Equal1'
   */
  if (*rty_MonRes == ((uint8_T)0U)) {
    /* Sum: '<S137>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S137>/Sum' incorporates:
     *  UnitDelay: '<S137>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc);

    /* MinMax: '<S137>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc) {
      /* Sum: '<S137>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc = u0;
    }

    /* End of MinMax: '<S137>/MinMax' */
  } else {
    /* Sum: '<S137>/Sum' incorporates:
     *  Constant: '<S135>/Constant23'
     *  UnitDelay: '<S137>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc = ((uint16_T)0U);
  }

  /* End of Switch: '<S137>/Switch1' */

  /* Switch: '<S135>/Switch2' incorporates:
   *  Constant: '<S135>/FAILED'
   *  RelationalOperator: '<S136>/B_MiHold'
   *  RelationalOperator: '<S137>/B_MiHold'
   *  Switch: '<S135>/Switch3'
   *  Switch: '<S135>/Switch4'
   *  UnitDelay: '<S136>/UnitDelay'
   *  UnitDelay: '<S137>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S135>/Switch3' incorporates:
     *  Constant: '<S135>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_atzc >
             rtu_Dematuretime) {
    /* Switch: '<S135>/Switch4' incorporates:
     *  Constant: '<S135>/PASSED'
     *  Switch: '<S135>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    /* Switch: '<S135>/Switch3' incorporates:
     *  Constant: '<S135>/DEBOUNCING_P'
     *  Switch: '<S135>/Switch4'
     */
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S135>/Switch2' */

  /* Switch: '<S135>/Switch6' incorporates:
   *  Constant: '<S135>/Constant30'
   *  Constant: '<S135>/Constant31'
   *  RelationalOperator: '<S135>/Equal3'
   *  RelationalOperator: '<S135>/Equal4'
   *  Switch: '<S135>/Switch7'
   */
  if (*rty_ErrStat == ((uint8_T)2U)) {
    /* Switch: '<S135>/Switch6' incorporates:
     *  Constant: '<S135>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlU2HiFltInfo_Flg = true;
  } else if (*rty_ErrStat == ((uint8_T)0U)) {
    /* Switch: '<S135>/Switch7' incorporates:
     *  Constant: '<S135>/Constant11'
     *  Switch: '<S135>/Switch6'
     */
    ChassisMgmt_ErrResAccrPedlU2HiFltInfo_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S135>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* System initialize for atomic system: '<S126>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_od30_Init(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S139>/ErrorHandleSysU16' */
  /* SystemInitialize for Switch: '<S140>/Switch6' incorporates:
   *  Outport: '<S140>/ErrorRes'
   */
  ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S139>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S126>/AvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_AvoidMu_eyeh(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_lw2e_T
  *CtAp_PdlAlys__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S139>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S139>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S140>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2;

    /* Switch: '<S140>/Switch1' incorporates:
     *  Constant: '<S140>/Constant2'
     *  DataTypeConversion: '<S140>/DataTypeConversion'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else {
      *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
    }

    /* End of Switch: '<S140>/Switch1' */

    /* RelationalOperator: '<S140>/Equal2' incorporates:
     *  Constant: '<S140>/Constant5'
     */
    rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S141>/Switch1' */
    if (rtb_Equal2) {
      /* Sum: '<S141>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S141>/Sum' incorporates:
       *  UnitDelay: '<S141>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt
        + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S141>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S141>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }

      /* End of MinMax: '<S141>/MinMax' */
    } else {
      /* Sum: '<S141>/Sum' incorporates:
       *  Constant: '<S140>/Constant37'
       *  UnitDelay: '<S141>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S141>/Switch1' */

    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S140>/Constant3'
     *  RelationalOperator: '<S140>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S142>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S142>/Sum' incorporates:
       *  UnitDelay: '<S142>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0 = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0);

      /* MinMax: '<S142>/MinMax' */
      if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0) {
        /* Sum: '<S142>/Sum' */
        CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0 = u0;
      }

      /* End of MinMax: '<S142>/MinMax' */
    } else {
      /* Sum: '<S142>/Sum' incorporates:
       *  Constant: '<S140>/Constant23'
       *  UnitDelay: '<S142>/UnitDelay'
       */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0 = ((uint16_T)0U);
    }

    /* End of Switch: '<S142>/Switch1' */

    /* Switch: '<S140>/Switch2' incorporates:
     *  Constant: '<S140>/FAILED'
     *  RelationalOperator: '<S141>/B_MiHold'
     *  RelationalOperator: '<S142>/B_MiHold'
     *  Switch: '<S140>/Switch3'
     *  Switch: '<S140>/Switch4'
     *  UnitDelay: '<S141>/UnitDelay'
     *  UnitDelay: '<S142>/UnitDelay'
     */
    if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2) {
      /* Switch: '<S140>/Switch3' incorporates:
       *  Constant: '<S140>/DEBOUNCING_F'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_eme0 >
               rtu_Dematuretime) {
      /* Switch: '<S140>/Switch4' incorporates:
       *  Constant: '<S140>/PASSED'
       *  Switch: '<S140>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else {
      /* Switch: '<S140>/Switch3' incorporates:
       *  Constant: '<S140>/DEBOUNCING_P'
       *  Switch: '<S140>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    }

    /* End of Switch: '<S140>/Switch2' */

    /* Switch: '<S140>/Switch6' incorporates:
     *  Constant: '<S140>/Constant30'
     *  Constant: '<S140>/Constant31'
     *  RelationalOperator: '<S140>/Equal3'
     *  RelationalOperator: '<S140>/Equal4'
     *  Switch: '<S140>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      /* Switch: '<S140>/Switch6' incorporates:
       *  Constant: '<S140>/Constant32'
       */
      ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S140>/Switch7' incorporates:
       *  Constant: '<S140>/Constant11'
       *  Switch: '<S140>/Switch6'
       */
      ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg = false;
    } else {
      /* no actions */
    }

    /* End of Switch: '<S140>/Switch6' */
  }

  /* End of Outputs for SubSystem: '<S139>/ErrorHandleSysU16' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Output and update for atomic system: '<S127>/NoEnAvoidMu' */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void CtAp_PdlAlys_NoEnAvoidMu_b0c5(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_kev4_T *CtAp_PdlAlys__ARID_DEF_arg)
{
  uint16_T u0;
  boolean_T rtb_Equal1_aomo;
  boolean_T rtb_Equal2;

  /* Constant: '<S143>/True' */
  *rty_MonStat = true;

  /* Switch: '<S144>/Switch1' incorporates:
   *  Constant: '<S144>/Constant2'
   *  DataTypeConversion: '<S144>/DataTypeConversion'
   */
  if (rtu_ResetCondition) {
    *rty_MonRes = ((uint8_T)0U);
  } else {
    *rty_MonRes = rtu_SetCondition ? ((uint8_T)1) : ((uint8_T)0);
  }

  /* End of Switch: '<S144>/Switch1' */

  /* RelationalOperator: '<S144>/Equal2' incorporates:
   *  Constant: '<S144>/Constant5'
   */
  rtb_Equal2 = (*rty_MonRes == ((uint8_T)1U));

  /* Switch: '<S145>/Switch1' */
  if (rtb_Equal2) {
    /* Sum: '<S145>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

    /* Sum: '<S145>/Sum' incorporates:
     *  UnitDelay: '<S145>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)rtu_dt +
      (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE);

    /* MinMax: '<S145>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE) {
      /* Sum: '<S145>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = u0;
    }

    /* End of MinMax: '<S145>/MinMax' */
  } else {
    /* Sum: '<S145>/Sum' incorporates:
     *  Constant: '<S144>/Constant37'
     *  UnitDelay: '<S145>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S145>/Switch1' */

  /* RelationalOperator: '<S144>/Equal1' incorporates:
   *  Constant: '<S144>/Constant3'
   */
  rtb_Equal1_aomo = (*rty_MonRes == ((uint8_T)0U));

  /* Switch: '<S146>/Switch1' */
  if (rtb_Equal1_aomo) {
    /* Sum: '<S146>/Sum1' */
    u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

    /* Sum: '<S146>/Sum' incorporates:
     *  UnitDelay: '<S146>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy = (uint16_T)((uint32_T)
      rtu_dt + (uint32_T)CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy);

    /* MinMax: '<S146>/MinMax' */
    if (u0 <= CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy) {
      /* Sum: '<S146>/Sum' */
      CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy = u0;
    }

    /* End of MinMax: '<S146>/MinMax' */
  } else {
    /* Sum: '<S146>/Sum' incorporates:
     *  Constant: '<S144>/Constant23'
     *  UnitDelay: '<S146>/UnitDelay'
     */
    CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy = ((uint16_T)0U);
  }

  /* End of Switch: '<S146>/Switch1' */

  /* Switch: '<S144>/Switch2' incorporates:
   *  Constant: '<S144>/DEBOUNCING_P'
   *  Constant: '<S144>/FAILED'
   *  RelationalOperator: '<S145>/B_MiHold'
   *  RelationalOperator: '<S146>/B_MiHold'
   *  Switch: '<S144>/Switch3'
   *  Switch: '<S144>/Switch4'
   *  UnitDelay: '<S145>/UnitDelay'
   *  UnitDelay: '<S146>/UnitDelay'
   */
  if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE > rtu_MatureTime) {
    *rty_ErrStat = ((uint8_T)2U);
  } else if (rtb_Equal2) {
    /* Switch: '<S144>/Switch3' incorporates:
     *  Constant: '<S144>/DEBOUNCING_F'
     */
    *rty_ErrStat = ((uint8_T)3U);
  } else if (CtAp_PdlAlys__ARID_DEF_arg->UnitDelay_DSTATE_mxzy >
             rtu_Dematuretime) {
    /* Switch: '<S144>/Switch4' incorporates:
     *  Constant: '<S144>/PASSED'
     *  Switch: '<S144>/Switch3'
     */
    *rty_ErrStat = ((uint8_T)0U);
  } else {
    *rty_ErrStat = ((uint8_T)1U);
  }

  /* End of Switch: '<S144>/Switch2' */

  /* RelationalOperator: '<S144>/Equal3' incorporates:
   *  Constant: '<S144>/Constant30'
   */
  rtb_Equal2 = (*rty_ErrStat == ((uint8_T)2U));

  /* Switch: '<S144>/Switch6' */
  if (rtb_Equal2) {
    /* Switch: '<S144>/Switch6' incorporates:
     *  Constant: '<S144>/Constant32'
     */
    ChassisMgmt_ErrResAccrPedlU2LoFltInfo_Flg = true;
  } else {
    /* RelationalOperator: '<S144>/Equal4' incorporates:
     *  Constant: '<S144>/Constant31'
     */
    rtb_Equal2 = (*rty_ErrStat == ((uint8_T)0U));

    /* Switch: '<S144>/Switch7' */
    if (rtb_Equal2) {
      /* Switch: '<S144>/Switch6' incorporates:
       *  Constant: '<S144>/Constant11'
       */
      ChassisMgmt_ErrResAccrPedlU2LoFltInfo_Flg = false;
    }

    /* End of Switch: '<S144>/Switch7' */
  }

  /* End of Switch: '<S144>/Switch6' */
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S147>/ATOM_Limiter'
 *    '<S148>/ATOM_Limiter'
 */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

real32_T CtAp_PdlAlys_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S149>/Switch' incorporates:
   *  RelationalOperator: '<S149>/RelationalOperator'
   *  RelationalOperator: '<S149>/RelationalOperator1'
   *  Switch: '<S149>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S149>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S149>/Switch' */
  return rty_Out_0;
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

void R_PdlAlys_Cyclic_10ms(void)
{
  /* local block i/o variables */
  dt_ChassisMgmt_AccrPedlURawDif ChassisMgmt_AccrPedlURawDifDTC_Bus;
  dt_ChassisMgmt_AccrPedlURaw2Lo ChassisMgmt_AccrPedlURaw2LoDTC_Bus;
  dt_ChassisMgmt_AccrPedlURaw2Hi ChassisMgmt_AccrPedlURaw2HiDTC_Bus;
  dt_ChassisMgmt_AccrPedlURaw1Lo ChassisMgmt_AccrPedlURaw1LoDTC_Bus;
  dt_ChassisMgmt_AccrPedlURaw1Hi ChassisMgmt_AccrPedlURaw1HiDTC_Bus;
  dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo
    ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus;
  dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo
    ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus;
  dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo
    ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus;
  dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo
    ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus;
  real32_T ChassisMgmt_AccrPedlURaw1Prev_mV;
  real32_T rtb_ChassisMgmt_AccrPedlUnJitNo;
  real32_T ChassisMgmt_AccrPedlURaw2Prev_mV;
  real32_T rtb_ChassisMgmt_AccrPedlUn_hrko;
  uint16_T IOAbs_AccrPedl1SplyVolt_mV;
  uint16_T IOAbs_AccrPedl2SplyVolt_mV;
  uint8_T rtb_Switch2_fyol;
  uint8_T rtb_Switch2_pxqc;
  uint8_T rtb_Switch2_jnzw;
  uint8_T rtb_Switch2_bkj1;
  uint8_T rtb_Switch2_iuaf;
  uint8_T rtb_Switch2_hi4z;
  uint8_T rtb_Switch2_g40j;
  uint8_T rtb_Switch2_o4t5;
  uint8_T rtb_Switch2_ewjs;
  boolean_T ChassisMgmt_ErrResBrkPedlFlt_Flg;
  boolean_T rtb_ChassisMgmt_AccrPedlUR_amch;
  boolean_T rtb_ChassisMgmt_AccrPedlUR_oahf;
  boolean_T rtb_True;
  boolean_T rtb_True_irxv;
  boolean_T rtb_ChassisMgmt_ErrResAccrPedlU;
  boolean_T rtb_ChassisMgmt_ErrResAccr_nac4;
  boolean_T rtb_True_gubo;
  boolean_T rtb_True_jekg;
  boolean_T rtb_ChassisMgmt_AccrPedlUR_exvh;
  boolean_T rtb_True_hzdd;
  boolean_T rtb_ChassisMgmt_ErrResAccr_m0vx;
  boolean_T rtb_True_hgyd;
  boolean_T rtb_True_gug4;
  boolean_T rtb_ChassisMgmt_ErrResAccr_aews;
  boolean_T rtb_True_iute;
  boolean_T rtb_True_gmpm;
  boolean_T LvMgmt_BSBattUDcNorm_Flg;
  boolean_T rtb_DataTypeConversion;
  boolean_T rtb_DataTypeConversion_akeq;
  boolean_T rtb_DataTypeConversion_a0eg;
  boolean_T rtb_DataTypeConversion_hdeq;
  boolean_T rtb_DataTypeConversion_jlrv;
  boolean_T rtb_DataTypeConversion_jasj;
  boolean_T rtb_DataTypeConversion_dvrx;
  boolean_T rtb_DataTypeConversion_pcdk;
  boolean_T rtb_DataTypeConversion_nl4d;
  dt_ComM_IBSSts01CRCInfo tmpRead_5;
  dt_ComM_IBSSts01E2ETimeoutInfo tmpRead_6;
  real32_T rtb_ChassisMgmt_AccrPedlPo_otix;
  real32_T rtb_ChassisMgmt_AccrPedlPosnRaw;
  uint16_T tmpRead_8;
  uint16_T tmpRead_9;
  uint8_T tmpRead_1;
  boolean_T tmpRead;
  boolean_T tmpRead_0;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_7;
  boolean_T tmpRead_a;

  /* SignalConversion: '<S4>/SignalCopy11' incorporates:
   *  Inport: '<Root>/RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo'
   */
  (void)
    Rte_Read_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo
    (&IOAbs_AccrPedl2SplyVolt_mV);

  /* SignalConversion: '<S4>/SignalCopy10' incorporates:
   *  Inport: '<Root>/RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo'
   */
  (void)
    Rte_Read_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo
    (&IOAbs_AccrPedl1SplyVolt_mV);

  /* Inport: '<Root>/RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo' */
  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
    (&tmpRead_a);

  /* SignalConversion: '<S4>/SignalCopy13' incorporates:
   *  Inport: '<Root>/RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg'
   */
  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
    (&LvMgmt_BSBattUDcNorm_Flg);

  /* Inport: '<Root>/RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV' */
  (void)Rte_Read_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV
    (&tmpRead_9);

  /* Inport: '<Root>/RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV' */
  (void)Rte_Read_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV
    (&tmpRead_8);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(
    &tmpRead_5);

  /* Inport: '<Root>/RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum' */
  (void)Rte_Read_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_PdlAlys_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PdlAlys_Input'
   *
   * Block requirements for '<S2>/CtAp_PdlAlys_Input':
   *  1. SWREQ_01180 The function of "Pedal analysis" has the following inputs:
   */
  /* MinMax: '<S4>/MinMax' incorporates:
   *  Constant: '<S4>/Define'
   */
  if (tmpRead_8 <= ((uint16_T)PdlAly_MAX_PEDAL_VOLT)) {
    /* DataTypeConversion: '<S4>/DataTypeConversion' */
    IOAbs_AccrPedlMaiRaw_mV = (real32_T)tmpRead_8;
  } else {
    /* DataTypeConversion: '<S4>/DataTypeConversion' */
    IOAbs_AccrPedlMaiRaw_mV = (real32_T)((uint16_T)PdlAly_MAX_PEDAL_VOLT);
  }

  /* End of MinMax: '<S4>/MinMax' */

  /* MinMax: '<S4>/MinMax1' incorporates:
   *  Constant: '<S4>/Define'
   */
  if (((uint16_T)PdlAly_MAX_PEDAL_VOLT) <= tmpRead_9) {
    /* DataTypeConversion: '<S4>/DataTypeConversion1' */
    IOAbs_AccrPedlRdnRaw_mV = (real32_T)((uint16_T)PdlAly_MAX_PEDAL_VOLT);
  } else {
    /* DataTypeConversion: '<S4>/DataTypeConversion1' */
    IOAbs_AccrPedlRdnRaw_mV = (real32_T)tmpRead_9;
  }

  /* End of MinMax: '<S4>/MinMax1' */

  /* Outputs for Atomic SubSystem: '<S2>/Function_PedalAnalysis' */
  /* Outputs for Atomic SubSystem: '<S6>/BrakePedalAnalysis'
   *
   * Block requirements for '<S6>/BrakePedalAnalysis':
   *  1. SWREQ_01187 Brake pedal analysis Pressed
   *  2. SWREQ_01188 Brake pedal analysis Not Pressed
   *  3. SWREQ_01189 Brake pedal analysis Invalid
   *  4. SWREQ_01346 Brake pedal fault Set Conditon
   *  5. SWREQ_01347 Brake pedal fault Reset Conditon
   *  6. SWREQ_01352 Brake pedal fault Error mature time
   *  7. SWREQ_01353 Brake pedal fault Error demature time
   */
  /* Logic: '<S8>/LogicalOperator2' incorporates:
   *  Logic: '<S8>/LogicalOperator'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  ChassisMgmt_ErrResBrkPedlFlt_Flg = (!tmpRead_2 || tmpRead_7 ||
    tmpRead_5.ComM_ErrResIBSSts01CRCErrorInfo ||
    tmpRead_6.ComM_ErrResIBSSts01E2ETimeoutInfo);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PdlAlys_Input' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/PdlAly_BRAKE_PRESSED'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  Switch: '<S8>/Switch'
   */
  if (ChassisMgmt_ErrResBrkPedlFlt_Flg) {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/PdlAly_BRAKE_INVALID'
     */
    ChassisMgmt_BrkSts_Enum = ((uint8_T)PdlAly_BRAKE_INVALID);

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_PdlAlys_Input'
     *
     * Block requirements for '<S2>/CtAp_PdlAlys_Input':
     *  1. SWREQ_01180 The function of "Pedal analysis" has the following inputs:
     */
  } else if (tmpRead_1 == ((uint8_T)PdlAly_BRAKE_PRESSED)) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/PdlAly_BRAKE_PRESSED1'
     *  Switch: '<S8>/Switch2'
     */
    ChassisMgmt_BrkSts_Enum = ((uint8_T)PdlAly_BRAKE_PRESSED);
  } else {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/PdlAly_BRAKE_NOTPRESSED'
     *  Switch: '<S8>/Switch'
     */
    ChassisMgmt_BrkSts_Enum = ((uint8_T)PdlAly_BRAKE_NOTPRESSED);

    /* End of Outputs for SubSystem: '<S2>/CtAp_PdlAlys_Input' */
  }

  /* End of Switch: '<S8>/Switch2' */
  /* End of Outputs for SubSystem: '<S6>/BrakePedalAnalysis' */

  /* Outputs for Atomic SubSystem: '<S6>/AcceleratorPedalAnalysis' */
  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedal_Diag' */
  /* Outputs for Atomic SubSystem: '<S12>/AcceleratorPedal1PowerSupplyVoltageDiag' */
  /* RelationalOperator: '<S29>/RelationalOperator1' incorporates:
   *  Constant: '<S29>/ChassisMgmt_AccrPedlSplyVolt1HiThd_CFG'
   *  Constant: '<S29>/ChassisMgmt_AccrPedlSplyVolt1Hi_CFG'
   *  Sum: '<S29>/Subtract'
   */
  ChassisMgmt_AccrPedlSplyVolt1HiFltReSetActv_Flg = (IOAbs_AccrPedl1SplyVolt_mV <=
    (uint16_T)((uint32_T)ChassisMgmt_AccrPedlSplyVolt1Hi_CFG - (uint32_T)
               ChassisMgmt_AccrPedlSplyVolt1HiThd_CFG));

  /* RelationalOperator: '<S29>/RelationalOperator' incorporates:
   *  Constant: '<S29>/ChassisMgmt_AccrPedlSplyVolt1Hi_CFG1'
   */
  ChassisMgmt_AccrPedlSplyVolt1HiFltActv_Flg = (IOAbs_AccrPedl1SplyVolt_mV >
    ChassisMgmt_AccrPedlSplyVolt1Hi_CFG);

  /* Outputs for Atomic SubSystem: '<S30>/ATOM_TimeCnt' */
  /* UnitDelay: '<S30>/OneDelay' incorporates:
   *  Constant: '<S30>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S30>/PdlAly_SAMPLE_TIME'
   */
  rtb_DataTypeConversion_pcdk = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_aekl, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_nueb);

  /* End of Outputs for SubSystem: '<S30>/ATOM_TimeCnt' */

  /* Outputs for Atomic SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */
  /* Outputs for Atomic SubSystem: '<S12>/RdnAcceleratorPedalDiag' */
  /* Outputs for Atomic SubSystem: '<S12>/AcceleratorPedal2PowerSupplyVoltageDiag' */
  /* Outputs for Atomic SubSystem: '<S12>/MainAcceleratorPedalDiag' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PdlAlys_Input'
   *
   * Block requirements for '<S2>/CtAp_PdlAlys_Input':
   *  1. SWREQ_01180 The function of "Pedal analysis" has the following inputs:
   */
  /* Logic: '<S30>/LogicalOperator' incorporates:
   *  Logic: '<S103>/LogicalOperator1'
   *  Logic: '<S124>/LogicalOperator1'
   *  Logic: '<S126>/LogicalOperator1'
   *  Logic: '<S33>/LogicalOperator'
   *  Logic: '<S56>/LogicalOperator'
   *  Logic: '<S58>/LogicalOperator1'
   *  Logic: '<S80>/LogicalOperator1'
   *  Logic: '<S98>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy12'
   */
  tmpRead_2 = !tmpRead_a;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PdlAlys_Input' */
  /* End of Outputs for SubSystem: '<S12>/MainAcceleratorPedalDiag' */
  /* End of Outputs for SubSystem: '<S12>/AcceleratorPedal2PowerSupplyVoltageDiag' */
  /* End of Outputs for SubSystem: '<S12>/RdnAcceleratorPedalDiag' */
  /* End of Outputs for SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */

  /* Logic: '<S30>/LogicalOperator1' incorporates:
   *  Logic: '<S30>/LogicalOperator'
   */
  rtb_ChassisMgmt_ErrResAccr_aews = (rtb_DataTypeConversion_pcdk &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S30>/AvoidMu' */
  /* Constant: '<S30>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S30>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S30>/PdlAly_SAMPLE_TIME1'
   *
   * Block requirements for '<S30>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05793 Sensor Power Supply Voltage 1 High DTC  Error mature time
   *
   * Block requirements for '<S30>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05794 Sensor Power Supply Voltage 1 High DTC  Error demature time
   */
  CtAp_PdlAlys_AvoidMu(rtb_ChassisMgmt_ErrResAccr_aews,
                       ChassisMgmt_AccrPedlSplyVolt1HiFltActv_Flg,
                       ChassisMgmt_AccrPedlSplyVolt1HiFltReSetActv_Flg,
                       ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG,
                       ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG, ((uint16_T)
    PdlAly_SAMPLE_TIME), &rtb_DataTypeConversion_pcdk,
                       &CtAp_PdlAlys_ARID_DEF.Switch1_chgj,
                       &CtAp_PdlAlys_ARID_DEF.Switch2_pryd,
                       &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_bjbg);

  /* End of Outputs for SubSystem: '<S30>/AvoidMu' */

  /* DataTypeConversion: '<S30>/Data Type Conversion1' */
  ChassisMgmt_ErrResAccrPedlSplyVolt1HiFltDTC_Flg =
    ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg;

  /* BusCreator: '<S22>/BusCreator2' */
  ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus.ChassisMgmt_MonStatAccrPedlSplyVolt1HiInfo
    = rtb_DataTypeConversion_pcdk;
  ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus.ChassisMgmt_MonResAccrPedlSplyVolt1HiInfo
    = CtAp_PdlAlys_ARID_DEF.Switch1_chgj;
  ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus.ChassisMgmt_ErrStatAccrPedlSplyVolt1HiInfo
    = CtAp_PdlAlys_ARID_DEF.Switch2_pryd;
  ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus.ChassisMgmt_ErrResAccrPedlSplyVolt1HiInfo
    = ChassisMgmt_ErrResAccrPedlSplyVolt1HiFltDTC_Flg;

  /* Outputs for Atomic SubSystem: '<S31>/NoEnAvoidMu' */
  /* Constant: '<S31>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S31>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S31>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S31>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05845 Sensor Power Supply Voltage 1 High FUSA  Error mature time
   *
   * Block requirements for '<S31>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05846 Sensor Power Supply Voltage 1 High FUSA  Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu(ChassisMgmt_AccrPedlSplyVolt1HiFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_gmpm, &rtb_Switch2_g40j, &rtb_Switch2_pxqc,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_owjr);

  /* End of Outputs for SubSystem: '<S31>/NoEnAvoidMu' */

  /* RelationalOperator: '<S32>/RelationalOperator' incorporates:
   *  Constant: '<S32>/ChassisMgmt_AccrPedlSplyVolt1Lo_CFG'
   */
  ChassisMgmt_AccrPedlSplyVolt1LoFltActv_Flg = (IOAbs_AccrPedl1SplyVolt_mV <
    ChassisMgmt_AccrPedlSplyVolt1Lo_CFG);

  /* RelationalOperator: '<S32>/RelationalOperator1' incorporates:
   *  Constant: '<S32>/ChassisMgmt_AccrPedlSplyVolt1LoThd_CFG'
   *  Constant: '<S32>/ChassisMgmt_AccrPedlSplyVolt1Lo_CFG1'
   *  Sum: '<S32>/Add'
   */
  ChassisMgmt_AccrPedlSplyVolt1LoFltReSetActv_Flg = (IOAbs_AccrPedl1SplyVolt_mV >=
    (uint16_T)((uint32_T)ChassisMgmt_AccrPedlSplyVolt1Lo_CFG + (uint32_T)
               ChassisMgmt_AccrPedlSplyVolt1LoThd_CFG));

  /* Outputs for Atomic SubSystem: '<S34>/NoEnAvoidMu' */
  /* Constant: '<S34>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S34>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S34>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S34>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05858 Sensor Power Supply Voltage 1 Low FUSA  Error mature time
   *
   * Block requirements for '<S34>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05859 Sensor Power Supply Voltage 1 Low FUSA  Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_lcyj(ChassisMgmt_AccrPedlSplyVolt1LoFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_iute, &rtb_Switch2_hi4z, &rtb_Switch2_g40j,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_dham);

  /* End of Outputs for SubSystem: '<S34>/NoEnAvoidMu' */

  /* Outputs for Atomic SubSystem: '<S22>/AccrPedal1_SplyVoltFault'
   *
   * Block requirements for '<S22>/AccrPedal1_SplyVoltFault':
   *  1. SWREQ_05762 Accelerator Pedal Sensor1 Power supply voltage diag
   *  2. SWREQ_05763 Accelerator Pedal Sensor1 Power supply voltage diag
   */
  /* Logic: '<S35>/LogicalOperator' */
  ChassisMgmt_ErrResAccrPedlSplyVolt1Flt_Flg =
    (ChassisMgmt_ErrResAccrPedlSplyVolt1HiFlt_Flg ||
     ChassisMgmt_ErrResAccrPedlSplyVolt1LoFlt_Flg);

  /* End of Outputs for SubSystem: '<S22>/AccrPedal1_SplyVoltFault' */

  /* Outputs for Atomic SubSystem: '<S33>/ATOM_TimeCnt' */
  /* UnitDelay: '<S33>/OneDelay' incorporates:
   *  Constant: '<S33>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S33>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion_dvrx = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_mxiy, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_lxo5);

  /* End of Outputs for SubSystem: '<S33>/ATOM_TimeCnt' */

  /* Logic: '<S33>/LogicalOperator1' */
  ChassisMgmt_AccrPedlSplyVolt1LoFltEnaDTC_Flg = (rtb_DataTypeConversion_dvrx &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S33>/AvoidMu' */
  /* Constant: '<S33>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S33>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S33>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S33>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05806 Sensor Power Supply Voltage 1 Low DTC  Error mature time
   *
   * Block requirements for '<S33>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05807 Sensor Power Supply Voltage 1 Low DTC  Error demature time
   */
  CtAp_PdlAlys_AvoidMu_ces0(ChassisMgmt_AccrPedlSplyVolt1LoFltEnaDTC_Flg,
    ChassisMgmt_AccrPedlSplyVolt1LoFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_dvrx, &CtAp_PdlAlys_ARID_DEF.Switch1_ht30,
    &CtAp_PdlAlys_ARID_DEF.Switch2_irrj, &CtAp_PdlAlys_ARID_DEF.Switch6_ogm1,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_dype);

  /* End of Outputs for SubSystem: '<S33>/AvoidMu' */

  /* DataTypeConversion: '<S33>/Data Type Conversion1' */
  ChassisMgmt_ErrResAccrPedlSplyVolt1LoFltDTC_Flg =
    CtAp_PdlAlys_ARID_DEF.Switch6_ogm1;

  /* BusCreator: '<S22>/BusCreator4' */
  ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus.ChassisMgmt_MonStatAccrPedlSplyVolt1LoInfo
    = rtb_DataTypeConversion_dvrx;
  ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus.ChassisMgmt_MonResAccrPedlSplyVolt1LoInfo
    = CtAp_PdlAlys_ARID_DEF.Switch1_ht30;
  ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus.ChassisMgmt_ErrStatAccrPedlSplyVolt1LoInfo
    = CtAp_PdlAlys_ARID_DEF.Switch2_irrj;
  ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus.ChassisMgmt_ErrResAccrPedlSplyVolt1LoInfo
    = ChassisMgmt_ErrResAccrPedlSplyVolt1LoFltDTC_Flg;

  /* Update for UnitDelay: '<S30>/OneDelay' incorporates:
   *  Constant: '<S30>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_aekl = PdlAly_TRUE;

  /* Update for UnitDelay: '<S33>/OneDelay' incorporates:
   *  Constant: '<S33>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_mxiy = PdlAly_TRUE;

  /* End of Outputs for SubSystem: '<S12>/AcceleratorPedal1PowerSupplyVoltageDiag' */

  /* Outputs for Atomic SubSystem: '<S12>/MainAcceleratorPedalDiag' */
  /* RelationalOperator: '<S102>/RelationalOperator' incorporates:
   *  Constant: '<S102>/ChassisMgmt_AccrPedlURaw1Hi_CFG'
   */
  ChassisMgmt_AccrPedlURaw1HiFltActv_Flg = (IOAbs_AccrPedlMaiRaw_mV >
    ChassisMgmt_AccrPedlURaw1Hi_CFG);

  /* RelationalOperator: '<S102>/RelationalOperator1' incorporates:
   *  Constant: '<S102>/ChassisMgmt_AccrPedlURaw1HiThd_CFG'
   *  Constant: '<S102>/ChassisMgmt_AccrPedlURaw1Hi_CFG1'
   *  Sum: '<S102>/Subtract'
   */
  ChassisMgmt_AccrPedlURaw1HiFltReSetActv_Flg = (IOAbs_AccrPedlMaiRaw_mV <=
    (ChassisMgmt_AccrPedlURaw1Hi_CFG - ChassisMgmt_AccrPedlURaw1HiThd_CFG));

  /* Outputs for Atomic SubSystem: '<S99>/NoEnAvoidMu' */
  /* Constant: '<S99>/ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG' incorporates:
   *  Constant: '<S99>/ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG'
   *  Constant: '<S99>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S99>/ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG':
   *  1. SWREQ_01287 Accelerator pedal 1 votage high fault
   *
   * Block requirements for '<S99>/ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG':
   *  1. SWREQ_01288 Accelerator pedal 1 votage high fault Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_l5wf(ChassisMgmt_AccrPedlURaw1HiFltActv_Flg,
    ChassisMgmt_AccrPedlURaw1HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_jekg, &rtb_Switch2_bkj1, &rtb_Switch2_fyol,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_cv5h);

  /* End of Outputs for SubSystem: '<S99>/NoEnAvoidMu' */

  /* RelationalOperator: '<S100>/RelationalOperator' incorporates:
   *  Constant: '<S100>/ChassisMgmt_AccrPedlURaw1Lo_CFG'
   */
  ChassisMgmt_AccrPedlURaw1LoFltActv_Flg = (IOAbs_AccrPedlMaiRaw_mV <
    ChassisMgmt_AccrPedlURaw1Lo_CFG);

  /* RelationalOperator: '<S100>/RelationalOperator1' incorporates:
   *  Constant: '<S100>/ChassisMgmt_AccrPedlURaw1LoThd_CFG'
   *  Constant: '<S100>/ChassisMgmt_AccrPedlURaw1Lo_CFG1'
   *  Sum: '<S100>/Add'
   */
  ChassisMgmt_AccrPedlURaw1LoFltReSetActv_Flg = (IOAbs_AccrPedlMaiRaw_mV >=
    (ChassisMgmt_AccrPedlURaw1Lo_CFG + ChassisMgmt_AccrPedlURaw1LoThd_CFG));

  /* Outputs for Atomic SubSystem: '<S101>/NoEnAvoidMu' */
  /* Constant: '<S101>/ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG' incorporates:
   *  Constant: '<S101>/ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG'
   *  Constant: '<S101>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S101>/ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG':
   *  1. SWREQ_01300 Accelerator pedal 1 votage low fault Error mature time
   *
   * Block requirements for '<S101>/ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG':
   *  1. SWREQ_01301 Accelerator pedal 1 votage low fault Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_ol5v(ChassisMgmt_AccrPedlURaw1LoFltActv_Flg,
    ChassisMgmt_AccrPedlURaw1LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_gubo, &rtb_Switch2_jnzw, &rtb_Switch2_bkj1,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_pbm3);

  /* End of Outputs for SubSystem: '<S101>/NoEnAvoidMu' */

  /* Outputs for Atomic SubSystem: '<S27>/AccrPedal1_VoltFault'
   *
   * Block requirements for '<S27>/AccrPedal1_VoltFault':
   *  1. SWREQ_01192 Accelerator Pedal 1 Analysis Fault Diag
   *  2. SWREQ_01193 Accelerator Pedal 1 Analysis Fault Diag
   */
  /* Logic: '<S97>/LogicalOperator' */
  ChassisMgmt_ErrResAccrPedlVolt1Flt_Flg =
    (ChassisMgmt_ErrResAccrPedlU1HiFltInfo_Flg ||
     ChassisMgmt_ErrResAccrPedlU1LoFltInfo_Flg);

  /* End of Outputs for SubSystem: '<S27>/AccrPedal1_VoltFault' */

  /* Outputs for Atomic SubSystem: '<S103>/ATOM_TimeCnt' */
  /* UnitDelay: '<S103>/OneDelay' incorporates:
   *  Constant: '<S103>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S103>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion_akeq = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_dpr5, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_bhxx);

  /* End of Outputs for SubSystem: '<S103>/ATOM_TimeCnt' */

  /* Logic: '<S103>/LogicalOperator' */
  rtb_ChassisMgmt_ErrResAccrPedlU = (rtb_DataTypeConversion_akeq &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S103>/AvoidMu' */
  /* Constant: '<S103>/ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG' incorporates:
   *  Constant: '<S103>/ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG'
   *  Constant: '<S103>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S103>/ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG':
   *  1. SWREQ_01235 DTC  P110211 Error mature time
   *
   * Block requirements for '<S103>/ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG':
   *  1. SWREQ_01236 DTC  P110211 Error demature time
   */
  CtAp_PdlAlys_AvoidMu_npbs(rtb_ChassisMgmt_ErrResAccrPedlU,
    ChassisMgmt_AccrPedlURaw1LoFltActv_Flg,
    ChassisMgmt_AccrPedlURaw1LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw1LoDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw1LoDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_akeq, &CtAp_PdlAlys_ARID_DEF.Switch1_iurs,
    &CtAp_PdlAlys_ARID_DEF.Switch2_mfdi,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_cxar);

  /* End of Outputs for SubSystem: '<S103>/AvoidMu' */

  /* DataTypeConversion: '<S130>/Data Type Conversion' incorporates:
   *  DataTypeConversion: '<S103>/Data Type Conversion1'
   */
  rtb_DataTypeConversion_nl4d = ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg;

  /* BusCreator: '<S27>/BusCreator4' */
  ChassisMgmt_AccrPedlURaw1LoDTC_Bus.ChassisMgmt_MonStatAccrPedlURaw1Lo =
    rtb_DataTypeConversion_akeq;
  ChassisMgmt_AccrPedlURaw1LoDTC_Bus.ChassisMgmt_MonResAccrPedlURaw1Lo =
    CtAp_PdlAlys_ARID_DEF.Switch1_iurs;
  ChassisMgmt_AccrPedlURaw1LoDTC_Bus.ChassisMgmt_ErrStatAccrPedlURaw1Lo =
    CtAp_PdlAlys_ARID_DEF.Switch2_mfdi;
  ChassisMgmt_AccrPedlURaw1LoDTC_Bus.ChassisMgmt_ErrResAccrPedlURaw1Lo =
    rtb_DataTypeConversion_nl4d;

  /* Outputs for Atomic SubSystem: '<S98>/ATOM_TimeCnt' */
  /* UnitDelay: '<S98>/OneDelay' incorporates:
   *  Constant: '<S98>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S98>/PdlAly_SAMPLE_TIME'
   */
  rtb_DataTypeConversion_a0eg = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_hexn, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_g2ml);

  /* End of Outputs for SubSystem: '<S98>/ATOM_TimeCnt' */

  /* Logic: '<S98>/LogicalOperator' */
  rtb_ChassisMgmt_ErrResAccr_nac4 = (rtb_DataTypeConversion_a0eg &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S98>/AvoidMu' */
  /* Constant: '<S98>/ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG' incorporates:
   *  Constant: '<S98>/ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG'
   *  Constant: '<S98>/PdlAly_SAMPLE_TIME1'
   *
   * Block requirements for '<S98>/ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG':
   *  1. SWREQ_01222 DTC  P110012 Error mature time
   *
   * Block requirements for '<S98>/ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG':
   *  1. SWREQ_01223 DTC  P110012 Error demature time
   */
  CtAp_PdlAlys_AvoidMu_ces0(rtb_ChassisMgmt_ErrResAccr_nac4,
    ChassisMgmt_AccrPedlURaw1HiFltActv_Flg,
    ChassisMgmt_AccrPedlURaw1HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw1HiDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw1HiDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_a0eg, &CtAp_PdlAlys_ARID_DEF.Switch1_erat,
    &CtAp_PdlAlys_ARID_DEF.Switch2_gkgv, &CtAp_PdlAlys_ARID_DEF.Switch6,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_fqdq);

  /* End of Outputs for SubSystem: '<S98>/AvoidMu' */

  /* DataTypeConversion: '<S130>/Data Type Conversion' incorporates:
   *  DataTypeConversion: '<S98>/Data Type Conversion1'
   */
  rtb_DataTypeConversion_nl4d = CtAp_PdlAlys_ARID_DEF.Switch6;

  /* BusCreator: '<S27>/BusCreator2' */
  ChassisMgmt_AccrPedlURaw1HiDTC_Bus.ChassisMgmt_MonStatAccrPedlURaw1Hi =
    rtb_DataTypeConversion_a0eg;
  ChassisMgmt_AccrPedlURaw1HiDTC_Bus.ChassisMgmt_MonResAccrPedlURaw1Hi =
    CtAp_PdlAlys_ARID_DEF.Switch1_erat;
  ChassisMgmt_AccrPedlURaw1HiDTC_Bus.ChassisMgmt_ErrStatAccrPedlURaw1Hi =
    CtAp_PdlAlys_ARID_DEF.Switch2_gkgv;
  ChassisMgmt_AccrPedlURaw1HiDTC_Bus.ChassisMgmt_ErrResAccrPedlURaw1Hi =
    rtb_DataTypeConversion_nl4d;

  /* Update for UnitDelay: '<S103>/OneDelay' incorporates:
   *  Constant: '<S103>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_dpr5 = PdlAly_TRUE;

  /* Update for UnitDelay: '<S98>/OneDelay' incorporates:
   *  Constant: '<S98>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_hexn = PdlAly_TRUE;

  /* End of Outputs for SubSystem: '<S12>/MainAcceleratorPedalDiag' */

  /* Outputs for Atomic SubSystem: '<S12>/AccrPedal1_Fault'
   *
   * Block requirements for '<S12>/AccrPedal1_Fault':
   *  1. SWREQ_01192 Accelerator Pedal 1 Analysis Fault Diag
   *  2. SWREQ_01193 Accelerator Pedal 1 Analysis Fault Diag
   */
  /* Logic: '<S25>/LogicalOperator' */
  ChassisMgmt_ErrResAccrPedl1Flt_Flg =
    (ChassisMgmt_ErrResAccrPedlSplyVolt1Flt_Flg ||
     ChassisMgmt_ErrResAccrPedlVolt1Flt_Flg);

  /* End of Outputs for SubSystem: '<S12>/AccrPedal1_Fault' */

  /* Outputs for Atomic SubSystem: '<S12>/AcceleratorPedal2PowerSupplyVoltageDiag' */
  /* RelationalOperator: '<S54>/RelationalOperator1' incorporates:
   *  Constant: '<S54>/ChassisMgmt_AccrPedlSplyVolt2HiThd_CFG'
   *  Constant: '<S54>/ChassisMgmt_AccrPedlSplyVolt2Hi_CFG'
   *  Sum: '<S54>/Subtract'
   */
  ChassisMgmt_AccrPedlSplyVolt2HiFltReSetActv_Flg = (IOAbs_AccrPedl2SplyVolt_mV <=
    (uint16_T)((uint32_T)ChassisMgmt_AccrPedlSplyVolt2Hi_CFG - (uint32_T)
               ChassisMgmt_AccrPedlSplyVolt2HiThd_CFG));

  /* RelationalOperator: '<S54>/RelationalOperator' incorporates:
   *  Constant: '<S54>/ChassisMgmt_AccrPedlSplyVolt2Hi_CFG1'
   */
  ChassisMgmt_AccrPedlSplyVolt2HiFltActv_Flg = (IOAbs_AccrPedl2SplyVolt_mV >
    ChassisMgmt_AccrPedlSplyVolt2Hi_CFG);

  /* Outputs for Atomic SubSystem: '<S56>/ATOM_TimeCnt' */
  /* UnitDelay: '<S56>/OneDelay' incorporates:
   *  Constant: '<S56>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S56>/PdlAly_SAMPLE_TIME'
   */
  rtb_DataTypeConversion_jasj = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_lifc, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_ldqo);

  /* End of Outputs for SubSystem: '<S56>/ATOM_TimeCnt' */

  /* Logic: '<S56>/LogicalOperator1' */
  rtb_ChassisMgmt_ErrResAccr_m0vx = (rtb_DataTypeConversion_jasj &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S56>/AvoidMu' */
  /* Constant: '<S56>/ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S56>/ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG'
   *  Constant: '<S56>/PdlAly_SAMPLE_TIME1'
   *
   * Block requirements for '<S56>/ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG':
   *  1. SWREQ_05819 Sensor Power Supply Voltage 2 High DTC  Error mature time
   *
   * Block requirements for '<S56>/ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG':
   *  1. SWREQ_05820 Sensor Power Supply Voltage 2 High DTC  Error demature time
   */
  CtAp_PdlAlys_AvoidMu_ces0(rtb_ChassisMgmt_ErrResAccr_m0vx,
    ChassisMgmt_AccrPedlSplyVolt2HiFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_jasj, &CtAp_PdlAlys_ARID_DEF.Switch1_aqwi,
    &CtAp_PdlAlys_ARID_DEF.Switch2_brxx, &CtAp_PdlAlys_ARID_DEF.Switch6_fgqj,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_guug);

  /* End of Outputs for SubSystem: '<S56>/AvoidMu' */

  /* DataTypeConversion: '<S56>/Data Type Conversion1' */
  ChassisMgmt_ErrResAccrPedlSplyVolt2HiFltDTC_Flg =
    CtAp_PdlAlys_ARID_DEF.Switch6_fgqj;

  /* BusCreator: '<S23>/BusCreator2' */
  ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus.ChassisMgmt_MonStatAccrPedlSplyVolt2HiInfo
    = rtb_DataTypeConversion_jasj;
  ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus.ChassisMgmt_MonResAccrPedlSplyVolt2HiInfo
    = CtAp_PdlAlys_ARID_DEF.Switch1_aqwi;
  ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus.ChassisMgmt_ErrStatAccrPedlSplyVolt2HiInfo
    = CtAp_PdlAlys_ARID_DEF.Switch2_brxx;
  ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus.ChassisMgmt_ErrResAccrPedlSplyVolt2HiInfo
    = ChassisMgmt_ErrResAccrPedlSplyVolt2HiFltDTC_Flg;

  /* Outputs for Atomic SubSystem: '<S57>/NoEnAvoidMu' */
  /* Constant: '<S57>/ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S57>/ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG'
   *  Constant: '<S57>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S57>/ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG':
   *  1. SWREQ_05871 Sensor Power Supply Voltage 2 High FUSA  Error mature time
   *
   * Block requirements for '<S57>/ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG':
   *  1. SWREQ_05872 Sensor Power Supply Voltage 2 High FUSA  Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_ml3a(ChassisMgmt_AccrPedlSplyVolt2HiFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_gug4, &rtb_Switch2_iuaf, &rtb_Switch2_hi4z,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_dhmr);

  /* End of Outputs for SubSystem: '<S57>/NoEnAvoidMu' */

  /* RelationalOperator: '<S55>/RelationalOperator' incorporates:
   *  Constant: '<S55>/ChassisMgmt_AccrPedlSplyVolt2Lo_CFG'
   */
  ChassisMgmt_AccrPedlSplyVolt2LoFltActv_Flg = (IOAbs_AccrPedl2SplyVolt_mV <
    ChassisMgmt_AccrPedlSplyVolt2Lo_CFG);

  /* RelationalOperator: '<S55>/RelationalOperator1' incorporates:
   *  Constant: '<S55>/ChassisMgmt_AccrPedlSplyVolt1LoThd_CFG'
   *  Constant: '<S55>/ChassisMgmt_AccrPedlSplyVolt1Lo_CFG1'
   *  Sum: '<S55>/Add'
   */
  ChassisMgmt_AccrPedlSplyVolt2LoFltReSetActv_Flg = (IOAbs_AccrPedl2SplyVolt_mV >=
    (uint16_T)((uint32_T)ChassisMgmt_AccrPedlSplyVolt2Lo_CFG + (uint32_T)
               ChassisMgmt_AccrPedlSplyVolt2LoThd_CFG));

  /* Outputs for Atomic SubSystem: '<S59>/NoEnAvoidMu' */
  /* Constant: '<S59>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S59>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S59>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S59>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05884 Sensor Power Supply Voltage 2 Low FUSA  Error mature time
   *
   * Block requirements for '<S59>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05885 Sensor Power Supply Voltage 2 Low FUSA  Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_ncum(ChassisMgmt_AccrPedlSplyVolt2LoFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_hgyd, &rtb_Switch2_ewjs, &rtb_Switch2_iuaf,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_ppxr);

  /* End of Outputs for SubSystem: '<S59>/NoEnAvoidMu' */

  /* Outputs for Atomic SubSystem: '<S23>/AccrPedal2_Fault'
   *
   * Block requirements for '<S23>/AccrPedal2_Fault':
   *  1. SWREQ_05764 Accelerator Pedal Sensor2 Power supply voltage diag
   *  2. SWREQ_05765 Accelerator Pedal Sensor2 Power supply voltage diag
   */
  /* Logic: '<S60>/LogicalOperator' */
  ChassisMgmt_ErrResAccrPedlSplyVolt2Flt_Flg =
    (ChassisMgmt_ErrResAccrPedlSplyVolt2HiFlt_Flg ||
     ChassisMgmt_ErrResAccrPedlSplyVolt2LoFlt_Flg);

  /* End of Outputs for SubSystem: '<S23>/AccrPedal2_Fault' */

  /* Outputs for Atomic SubSystem: '<S58>/ATOM_TimeCnt' */
  /* UnitDelay: '<S58>/OneDelay' incorporates:
   *  Constant: '<S58>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S58>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion_jlrv = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_k3hp, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_jwzv);

  /* End of Outputs for SubSystem: '<S58>/ATOM_TimeCnt' */

  /* Logic: '<S58>/LogicalOperator' */
  ChassisMgmt_AccrPedlSplyVolt2LoFltEnaDTC_Flg = (rtb_DataTypeConversion_jlrv &&
    tmpRead_2 && LvMgmt_BSBattUDcNorm_Flg);

  /* Outputs for Atomic SubSystem: '<S58>/AvoidMu' */
  /* Constant: '<S58>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG' incorporates:
   *  Constant: '<S58>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG'
   *  Constant: '<S58>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S58>/ChassisMgmt_AccrPedlSplyVolt1FltDebDfctTim_CFG':
   *  1. SWREQ_05832 Sensor Power Supply Voltage 2 Low DTC  Error mature time
   *
   * Block requirements for '<S58>/ChassisMgmt_AccrPedlSplyVolt1FltDebOkTim_CFG':
   *  1. SWREQ_05833 Sensor Power Supply Voltage 2 Low DTC  Error demature time
   */
  CtAp_PdlAlys_AvoidMu_ces0(ChassisMgmt_AccrPedlSplyVolt2LoFltEnaDTC_Flg,
    ChassisMgmt_AccrPedlSplyVolt2LoFltActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlSplyVolt2FltDebDfctTim_CFG,
    ChassisMgmt_AccrPedlSplyVolt2FltDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_jlrv, &CtAp_PdlAlys_ARID_DEF.Switch1_cjgt,
    &CtAp_PdlAlys_ARID_DEF.Switch2_lhwt, &CtAp_PdlAlys_ARID_DEF.Switch6_om1p,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_llw0);

  /* End of Outputs for SubSystem: '<S58>/AvoidMu' */

  /* DataTypeConversion: '<S58>/Data Type Conversion1' */
  ChassisMgmt_ErrResAccrPedlSplyVolt2LoFltDTC_Flg =
    CtAp_PdlAlys_ARID_DEF.Switch6_om1p;

  /* BusCreator: '<S23>/BusCreator4' */
  ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus.ChassisMgmt_MonStatAccrPedlSplyVolt2LoInfo
    = rtb_DataTypeConversion_jlrv;
  ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus.ChassisMgmt_MonResAccrPedlSplyVolt2LoInfo
    = CtAp_PdlAlys_ARID_DEF.Switch1_cjgt;
  ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus.ChassisMgmt_ErrStatAccrPedlSplyVolt2LoInfo
    = CtAp_PdlAlys_ARID_DEF.Switch2_lhwt;
  ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus.ChassisMgmt_ErrResAccrPedlSplyVolt2LoInfo
    = ChassisMgmt_ErrResAccrPedlSplyVolt2LoFltDTC_Flg;

  /* Update for UnitDelay: '<S56>/OneDelay' incorporates:
   *  Constant: '<S56>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_lifc = PdlAly_TRUE;

  /* Update for UnitDelay: '<S58>/OneDelay' incorporates:
   *  Constant: '<S58>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_k3hp = PdlAly_TRUE;

  /* End of Outputs for SubSystem: '<S12>/AcceleratorPedal2PowerSupplyVoltageDiag' */

  /* Outputs for Atomic SubSystem: '<S12>/RdnAcceleratorPedalDiag' */
  /* RelationalOperator: '<S123>/RelationalOperator' incorporates:
   *  Constant: '<S123>/ChassisMgmt_AccrPedlURaw2Hi_CFG'
   */
  ChassisMgmt_AccrPedlURaw2HiFltActv_Flg = (IOAbs_AccrPedlRdnRaw_mV >
    ChassisMgmt_AccrPedlURaw2Hi_CFG);

  /* RelationalOperator: '<S123>/RelationalOperator1' incorporates:
   *  Constant: '<S123>/ChassisMgmt_AccrPedlURaw2Hi_CFG1'
   *  Constant: '<S123>/ChassisMgmt_AccrPedlURaw2Hi_CFG2'
   *  Sum: '<S123>/Subtract'
   */
  ChassisMgmt_AccrPedlURaw2HiFltReSetActv_Flg = (IOAbs_AccrPedlRdnRaw_mV <=
    (ChassisMgmt_AccrPedlURaw2Hi_CFG - ChassisMgmt_AccrPedlURaw2HiThd_CFG));

  /* Outputs for Atomic SubSystem: '<S125>/NoEnAvoidMu' */
  /* Constant: '<S125>/ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG' incorporates:
   *  Constant: '<S125>/ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG'
   *  Constant: '<S125>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S125>/ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG':
   *  1. SWREQ_01313 Accelerator pedal 2 votage high fault
   *
   * Block requirements for '<S125>/ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG':
   *  1. SWREQ_01314 Accelerator pedal 2 votage high fault
   */
  CtAp_PdlAlys_NoEnAvoidMu_cqpx(ChassisMgmt_AccrPedlURaw2HiFltActv_Flg,
    ChassisMgmt_AccrPedlURaw2HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_irxv, &rtb_Switch2_o4t5, &rtb_Switch2_jnzw,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_mbvz);

  /* End of Outputs for SubSystem: '<S125>/NoEnAvoidMu' */

  /* RelationalOperator: '<S128>/RelationalOperator' incorporates:
   *  Constant: '<S128>/ChassisMgmt_AccrPedlURaw2Lo_CFG'
   */
  ChassisMgmt_AccrPedlURaw2LoFltActv_Flg = (IOAbs_AccrPedlRdnRaw_mV <
    ChassisMgmt_AccrPedlURaw2Lo_CFG);

  /* RelationalOperator: '<S128>/RelationalOperator1' incorporates:
   *  Constant: '<S128>/ChassisMgmt_AccrPedlURaw2Lo_CFG1'
   *  Constant: '<S128>/ChassisMgmt_AccrPedlURaw2Lo_CFG2'
   *  Sum: '<S128>/Add'
   */
  ChassisMgmt_AccrPedlURaw2LoFltReSetActv_Flg = (IOAbs_AccrPedlRdnRaw_mV >=
    (ChassisMgmt_AccrPedlURaw2Lo_CFG + ChassisMgmt_AccrPedlURaw2LoThd_CFG));

  /* Outputs for Atomic SubSystem: '<S127>/NoEnAvoidMu' */
  /* Constant: '<S127>/ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG' incorporates:
   *  Constant: '<S127>/ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG'
   *  Constant: '<S127>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S127>/ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG':
   *  1. SWREQ_01326 Accelerator pedal 2 votage low fault
   *
   * Block requirements for '<S127>/ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG':
   *  1. SWREQ_01327 Accelerator pedal 2 votage low fault
   */
  CtAp_PdlAlys_NoEnAvoidMu_b0c5(ChassisMgmt_AccrPedlURaw2LoFltActv_Flg,
    ChassisMgmt_AccrPedlURaw2LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True, &rtb_Switch2_o4t5, &rtb_Switch2_o4t5,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu);

  /* End of Outputs for SubSystem: '<S127>/NoEnAvoidMu' */

  /* Outputs for Atomic SubSystem: '<S126>/ATOM_TimeCnt' */
  /* UnitDelay: '<S126>/OneDelay' incorporates:
   *  Constant: '<S126>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S126>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S126>/ATOM_TimeCnt' */

  /* Logic: '<S126>/LogicalOperator' */
  rtb_ChassisMgmt_AccrPedlUR_amch = (rtb_DataTypeConversion &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S126>/AvoidMu' */
  /* Constant: '<S126>/ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG' incorporates:
   *  Constant: '<S126>/ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG'
   *  Constant: '<S126>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S126>/ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG':
   *  1. SWREQ_01261 DTC  P110311 Error mature time
   *
   * Block requirements for '<S126>/ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG':
   *  1. SWREQ_01262 DTC  P110311 Error demature time
   */
  CtAp_PdlAlys_AvoidMu_eyeh(rtb_ChassisMgmt_AccrPedlUR_amch,
    ChassisMgmt_AccrPedlURaw2LoFltActv_Flg,
    ChassisMgmt_AccrPedlURaw2LoFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw2LoDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw2LoDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion, &CtAp_PdlAlys_ARID_DEF.Switch1,
    &CtAp_PdlAlys_ARID_DEF.Switch2, &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu);

  /* End of Outputs for SubSystem: '<S126>/AvoidMu' */

  /* BusCreator: '<S28>/BusCreator8' incorporates:
   *  DataTypeConversion: '<S126>/Data Type Conversion1'
   */
  ChassisMgmt_AccrPedlURaw2LoDTC_Bus.ChassisMgmt_MonStatAccrPedlURaw2Lo =
    rtb_DataTypeConversion;
  ChassisMgmt_AccrPedlURaw2LoDTC_Bus.ChassisMgmt_MonResAccrPedlURaw2Lo =
    CtAp_PdlAlys_ARID_DEF.Switch1;
  ChassisMgmt_AccrPedlURaw2LoDTC_Bus.ChassisMgmt_ErrStatAccrPedlURaw2Lo =
    CtAp_PdlAlys_ARID_DEF.Switch2;
  ChassisMgmt_AccrPedlURaw2LoDTC_Bus.ChassisMgmt_ErrResAccrPedlURaw2Lo =
    ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg;

  /* Outputs for Atomic SubSystem: '<S124>/ATOM_TimeCnt' */
  /* UnitDelay: '<S124>/OneDelay' incorporates:
   *  Constant: '<S124>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S124>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion_nl4d = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_lxkn, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_kkiq);

  /* End of Outputs for SubSystem: '<S124>/ATOM_TimeCnt' */

  /* Logic: '<S124>/LogicalOperator' */
  rtb_ChassisMgmt_AccrPedlUR_oahf = (rtb_DataTypeConversion_nl4d &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S124>/AvoidMu' */
  /* Constant: '<S124>/ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG' incorporates:
   *  Constant: '<S124>/ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG'
   *  Constant: '<S124>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S124>/ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG':
   *  1. SWREQ_01248 DTC  P110112 Error mature time
   *
   * Block requirements for '<S124>/ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG':
   *  1. SWREQ_01249 DTC  P110112 Error demature time
   */
  CtAp_PdlAlys_AvoidMu_bqcr(rtb_ChassisMgmt_AccrPedlUR_oahf,
    ChassisMgmt_AccrPedlURaw2HiFltActv_Flg,
    ChassisMgmt_AccrPedlURaw2HiFltReSetActv_Flg,
    ChassisMgmt_AccrPedlURaw2HiDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURaw2HiDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_nl4d, &CtAp_PdlAlys_ARID_DEF.Switch1_eln3,
    &CtAp_PdlAlys_ARID_DEF.Switch2_nmqk,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_cl54);

  /* End of Outputs for SubSystem: '<S124>/AvoidMu' */

  /* BusCreator: '<S28>/BusCreator6' incorporates:
   *  DataTypeConversion: '<S124>/Data Type Conversion1'
   */
  ChassisMgmt_AccrPedlURaw2HiDTC_Bus.ChassisMgmt_MonStatAccrPedlURaw2Hi =
    rtb_DataTypeConversion_nl4d;
  ChassisMgmt_AccrPedlURaw2HiDTC_Bus.ChassisMgmt_MonResAccrPedlURaw2Hi =
    CtAp_PdlAlys_ARID_DEF.Switch1_eln3;
  ChassisMgmt_AccrPedlURaw2HiDTC_Bus.ChassisMgmt_ErrStatAccrPedlURaw2Hi =
    CtAp_PdlAlys_ARID_DEF.Switch2_nmqk;
  ChassisMgmt_AccrPedlURaw2HiDTC_Bus.ChassisMgmt_ErrResAccrPedlURaw2Hi =
    ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg;

  /* Update for UnitDelay: '<S126>/OneDelay' incorporates:
   *  Constant: '<S126>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE = PdlAly_TRUE;

  /* Update for UnitDelay: '<S124>/OneDelay' incorporates:
   *  Constant: '<S124>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_lxkn = PdlAly_TRUE;

  /* Outputs for Atomic SubSystem: '<S12>/AccrPedal2_Fault'
   *
   * Block requirements for '<S12>/AccrPedal2_Fault':
   *  1. SWREQ_01194 Accelerator Pedal 2 Analysis Fault Diag
   *  2. SWREQ_01195 Accelerator Pedal 2 Analysis Fault Diag
   */
  /* Outputs for Atomic SubSystem: '<S28>/AccrPedal2_VoltFault'
   *
   * Block requirements for '<S28>/AccrPedal2_VoltFault':
   *  1. SWREQ_01194 Accelerator Pedal 2 Analysis Fault Diag
   *  2. SWREQ_01195 Accelerator Pedal 2 Analysis Fault Diag
   */
  /* Logic: '<S26>/LogicalOperator' incorporates:
   *  Logic: '<S122>/LogicalOperator'
   */
  ChassisMgmt_ErrResAccrPedl2Flt_Flg =
    (ChassisMgmt_ErrResAccrPedlU2HiFltInfo_Flg ||
     ChassisMgmt_ErrResAccrPedlU2LoFltInfo_Flg ||
     ChassisMgmt_ErrResAccrPedlSplyVolt2Flt_Flg);

  /* End of Outputs for SubSystem: '<S28>/AccrPedal2_VoltFault' */
  /* End of Outputs for SubSystem: '<S12>/AccrPedal2_Fault' */
  /* End of Outputs for SubSystem: '<S12>/RdnAcceleratorPedalDiag' */

  /* Outputs for Atomic SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */
  /* Outputs for Atomic SubSystem: '<S79>/CommonCondition'
   *
   * Block requirements for '<S79>/CommonCondition':
   *  1. SWREQ_01196 Accelerator Pedal Difference Fault Diag
   *  2. SWREQ_01198 Accelerator Pedal Difference Fault 2 Diag
   *  3. SWREQ_01199 Accelerator Pedal Difference Fault 2 Diag
   *  4. SWREQ_01197 Accelerator Pedal Difference Fault  Diag
   *  5. SWREQ_05913 Accelerator Pedal Difference Value
   */
  /* Abs: '<S85>/Abs' incorporates:
   *  Constant: '<S85>/PdlAly_CONSTANT_COEFFICIENT'
   *  Product: '<S85>/Product'
   *  Sum: '<S85>/Subtract'
   */
  ChassisMgmt_AccrPedlURawAbsDif_mV = fabsf(IOAbs_AccrPedlMaiRaw_mV -
    (IOAbs_AccrPedlRdnRaw_mV * PdlAly_CONSTANT_COEFFICIENT));

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedalArbitrion' */
  /* Outputs for Atomic SubSystem: '<S10>/AcceleratorPedalValid'
   *
   * Block requirements for '<S10>/AcceleratorPedalValid':
   *  1. SWREQ_01205 Accelerator  Pedal Valid
   *  2. SWREQ_05747 Accelerator  Pedal Valid
   */
  /* Logic: '<S85>/LogicalOperator1' incorporates:
   *  Logic: '<S20>/LogicalOperator'
   *  Logic: '<S91>/LogicalOperator3'
   */
  tmpRead_a = !ChassisMgmt_ErrResAccrPedl1Flt_Flg;

  /* Logic: '<S85>/LogicalOperator2' incorporates:
   *  Logic: '<S20>/LogicalOperator'
   *  Logic: '<S91>/LogicalOperator4'
   */
  tmpRead_7 = !ChassisMgmt_ErrResAccrPedl2Flt_Flg;

  /* End of Outputs for SubSystem: '<S10>/AcceleratorPedalValid' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedalArbitrion' */

  /* Logic: '<S85>/LogicalOperator' incorporates:
   *  Constant: '<S85>/ChassisMgmt_AccrPedlURaw1Hi_CFG'
   *  Constant: '<S85>/ChassisMgmt_AccrPedlURaw1Lo_CFG'
   *  Constant: '<S85>/ChassisMgmt_AccrPedlURaw2Hi_CFG'
   *  Constant: '<S85>/ChassisMgmt_AccrPedlURaw2Lo_CFG'
   *  Logic: '<S85>/LogicalOperator1'
   *  Logic: '<S85>/LogicalOperator2'
   *  Logic: '<S85>/LogicalOperator8'
   *  Logic: '<S85>/LogicalOperator9'
   *  RelationalOperator: '<S85>/RelationalOperator'
   *  RelationalOperator: '<S85>/RelationalOperator1'
   *  RelationalOperator: '<S85>/RelationalOperator2'
   *  RelationalOperator: '<S85>/RelationalOperator3'
   */
  ChassisMgmt_AccrPedlURawDifFltCmn_Flg = (tmpRead_a && tmpRead_7 &&
    ((IOAbs_AccrPedlMaiRaw_mV <= ChassisMgmt_AccrPedlURaw1Hi_CFG) &&
     (IOAbs_AccrPedlMaiRaw_mV >= ChassisMgmt_AccrPedlURaw1Lo_CFG)) &&
    ((IOAbs_AccrPedlRdnRaw_mV <= ChassisMgmt_AccrPedlURaw2Hi_CFG) &&
     (IOAbs_AccrPedlRdnRaw_mV >= ChassisMgmt_AccrPedlURaw2Lo_CFG)));

  /* End of Outputs for SubSystem: '<S79>/CommonCondition' */

  /* Outputs for Atomic SubSystem: '<S79>/AcceleratorPedalDifferentialDiagSetCondition'
   *
   * Block requirements for '<S79>/AcceleratorPedalDifferentialDiagSetCondition':
   *  1. SWREQ_01268 DTC  P11571E Set Conditon
   *  2. SWREQ_01333 Accelerator pedal difference fault Set Conditon
   */
  /* Logic: '<S84>/LogicalOperator' incorporates:
   *  Constant: '<S84>/ChassisMgmt_AccrPedlURawDif_CFG'
   *  RelationalOperator: '<S84>/RelationalOperator'
   */
  ChassisMgmt_AccrPedlURawDifFltSetActv_Flg =
    (ChassisMgmt_AccrPedlURawDifFltCmn_Flg && (ChassisMgmt_AccrPedlURawAbsDif_mV
      >= ChassisMgmt_AccrPedlURawDif_CFG));

  /* End of Outputs for SubSystem: '<S79>/AcceleratorPedalDifferentialDiagSetCondition' */

  /* Outputs for Atomic SubSystem: '<S79>/AcceleratorPedalDifferentialDiagResetCondition'
   *
   * Block requirements for '<S79>/AcceleratorPedalDifferentialDiagResetCondition':
   *  1. SWREQ_01269 DTC  P11571E Reset Conditon
   *  2. SWREQ_01334 Accelerator pedal difference fault Reset Conditon
   */
  /* RelationalOperator: '<S83>/RelationalOperator' incorporates:
   *  Constant: '<S83>/ChassisMgmt_AccrPedlURawDifThd_CFG'
   *  Constant: '<S83>/ChassisMgmt_AccrPedlURawDif_CFG'
   *  Sum: '<S83>/Subtract'
   */
  ChassisMgmt_AccrPedlURawDifFltResetActv_Flg =
    (ChassisMgmt_AccrPedlURawAbsDif_mV < (ChassisMgmt_AccrPedlURawDif_CFG -
      ChassisMgmt_AccrPedlURawDifThd_CFG));

  /* End of Outputs for SubSystem: '<S79>/AcceleratorPedalDifferentialDiagResetCondition' */

  /* Outputs for Atomic SubSystem: '<S82>/NoEnAvoidMu' */
  /* Constant: '<S82>/ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG' incorporates:
   *  Constant: '<S82>/ChassisMgmt_AccrPedlURawDifDebOkTim_CFG'
   *  Constant: '<S82>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S82>/ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG':
   *  1. SWREQ_01339 Accelerator pedal difference fault Error mature time
   *
   * Block requirements for '<S82>/ChassisMgmt_AccrPedlURawDifDebOkTim_CFG':
   *  1. SWREQ_01340 Accelerator pedal difference fault Error demature time
   */
  CtAp_PdlAlys_NoEnAvoidMu_ceab(ChassisMgmt_AccrPedlURawDifFltSetActv_Flg,
    ChassisMgmt_AccrPedlURawDifFltResetActv_Flg,
    ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURawDifDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_True_hzdd, &rtb_Switch2_ewjs, &rtb_Switch2_ewjs,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_NoEnAvoidMu_g1sm);

  /* End of Outputs for SubSystem: '<S82>/NoEnAvoidMu' */

  /* Logic: '<S91>/LogicalOperator7' incorporates:
   *  Logic: '<S91>/LogicalOperator5'
   *  Logic: '<S91>/LogicalOperator6'
   */
  ChassisMgmt_AccrPedlURawDifFlt2Cmn_Flg = ((tmpRead_a &&
    ChassisMgmt_ErrResAccrPedl2Flt_Flg) || (ChassisMgmt_ErrResAccrPedl1Flt_Flg &&
    tmpRead_7));

  /* Outputs for Enabled SubSystem: '<S81>/SetCondtion' incorporates:
   *  EnablePort: '<S92>/Enable'
   *
   * Block requirements for '<S81>/SetCondtion':
   *  1. SWREQ_05937 Accelerator pedal difference fault2 Reset Conditon
   */
  if (ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg) {
    CtAp_PdlAlys_ARID_DEF.SetCondtion_MODE = true;

    /* DataTypeConversion: '<S92>/Data Type Conversion' */
    ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg =
      ChassisMgmt_AccrPedlURawDifFlt2Cmn_Flg;
  } else if (CtAp_PdlAlys_ARID_DEF.SetCondtion_MODE) {
    /* Disable for DataTypeConversion: '<S92>/Data Type Conversion' incorporates:
     *  Outport: '<S92>/ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg'
     */
    ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg = false;
    CtAp_PdlAlys_ARID_DEF.SetCondtion_MODE = false;
  } else {
    /* no actions */
  }

  /* End of Outputs for SubSystem: '<S81>/SetCondtion' */

  /* Outputs for Atomic SubSystem: '<S80>/ATOM_TimeCnt' */
  /* UnitDelay: '<S80>/OneDelay' incorporates:
   *  Constant: '<S80>/ChassisMgmt_AccrPedlURawDTCEnaTim_CFG'
   *  Constant: '<S80>/PdlAly_SAMPLE_TIME1'
   */
  rtb_DataTypeConversion_hdeq = CtAp_PdlAlys_ATOM_TimeCnt
    (CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_jygq, ((uint16_T)PdlAly_SAMPLE_TIME),
     ChassisMgmt_AccrPedlURawDTCEnaTim_CFG,
     &CtAp_PdlAlys_ARID_DEF.ARID_DEF_ATOM_TimeCnt_nz4o);

  /* End of Outputs for SubSystem: '<S80>/ATOM_TimeCnt' */

  /* Logic: '<S80>/LogicalOperator' */
  rtb_ChassisMgmt_AccrPedlUR_exvh = (rtb_DataTypeConversion_hdeq &&
    LvMgmt_BSBattUDcNorm_Flg && tmpRead_2);

  /* Outputs for Atomic SubSystem: '<S80>/AvoidMu' */
  /* Constant: '<S80>/ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG' incorporates:
   *  Constant: '<S80>/ChassisMgmt_AccrPedlURawDifDebOkTim_CFG'
   *  Constant: '<S80>/PdlAly_SAMPLE_TIME'
   *
   * Block requirements for '<S80>/ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG':
   *  1. SWREQ_01274 DTC  P11571E Error mature time
   *
   * Block requirements for '<S80>/ChassisMgmt_AccrPedlURawDifDebOkTim_CFG':
   *  1. SWREQ_01275 DTC  P11571E Error demature time
   */
  CtAp_PdlAlys_AvoidMu_muqh(rtb_ChassisMgmt_AccrPedlUR_exvh,
    ChassisMgmt_AccrPedlURawDifFltSetActv_Flg,
    ChassisMgmt_AccrPedlURawDifFltResetActv_Flg,
    ChassisMgmt_AccrPedlURawDifDebDfctTim_CFG,
    ChassisMgmt_AccrPedlURawDifDebOkTim_CFG, ((uint16_T)PdlAly_SAMPLE_TIME),
    &rtb_DataTypeConversion_hdeq, &CtAp_PdlAlys_ARID_DEF.Switch1_gfwx,
    &CtAp_PdlAlys_ARID_DEF.Switch2_drsw,
    &CtAp_PdlAlys_ARID_DEF.ARID_DEF_AvoidMu_merl);

  /* End of Outputs for SubSystem: '<S80>/AvoidMu' */

  /* BusCreator: '<S24>/BusCreator10' incorporates:
   *  DataTypeConversion: '<S80>/Data Type Conversion1'
   */
  ChassisMgmt_AccrPedlURawDifDTC_Bus.ChassisMgmt_MonStatAccrPedlURawDif =
    rtb_DataTypeConversion_hdeq;
  ChassisMgmt_AccrPedlURawDifDTC_Bus.ChassisMgmt_MonResAccrPedlURawDif =
    CtAp_PdlAlys_ARID_DEF.Switch1_gfwx;
  ChassisMgmt_AccrPedlURawDifDTC_Bus.ChassisMgmt_ErrStatAccrPedlURawDif =
    CtAp_PdlAlys_ARID_DEF.Switch2_drsw;
  ChassisMgmt_AccrPedlURawDifDTC_Bus.ChassisMgmt_ErrResAccrPedlURawDif =
    ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg;

  /* Update for UnitDelay: '<S80>/OneDelay' incorporates:
   *  Constant: '<S80>/PdlAly_TRUE'
   */
  CtAp_PdlAlys_ARID_DEF.OneDelay_DSTATE_jygq = PdlAly_TRUE;

  /* End of Outputs for SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedal_Diag' */

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedal_GerRawVoltValue'
   *
   * Block requirements for '<S7>/AcceleratorPedal_GerRawVoltValue':
   *  1. SWREQ_05744 Accelerator Pedal 1 Raw Volt
   *  2. SWREQ_05745 Accelerator Pedal 1 Raw Volt
   *  3. SWREQ_05781 Accelerator Pedal2 Raw Volt
   *  4. SWREQ_05782 Accelerator Pedal2 Raw Volt
   */
  /* Switch: '<S13>/Switch' */
  if (ChassisMgmt_ErrResAccrPedl1Flt_Flg) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/ChassisMgmt_AccrPedl1Usub_CFG'
     */
    ChassisMgmt_AccrPedlURaw1_mV = ChassisMgmt_AccrPedl1Usub_CFG;
  } else {
    /* Switch: '<S13>/Switch' */
    ChassisMgmt_AccrPedlURaw1_mV = IOAbs_AccrPedlMaiRaw_mV;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Switch: '<S13>/Switch1' */
  if (ChassisMgmt_ErrResAccrPedl2Flt_Flg) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/ChassisMgmt_AccrPedl2Usub_CFG'
     */
    ChassisMgmt_AccrPedlURaw2_mV = ChassisMgmt_AccrPedl2Usub_CFG;
  } else {
    /* Switch: '<S13>/Switch1' */
    ChassisMgmt_AccrPedlURaw2_mV = IOAbs_AccrPedlRdnRaw_mV;
  }

  /* End of Switch: '<S13>/Switch1' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedal_GerRawVoltValue' */

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedal_VoltUnJit'
   *
   * Block requirements for '<S7>/AcceleratorPedal_VoltUnJit':
   *  1. SWREQ_05746 Accelerator Pedal 1 Volt UnJit
   *  2. SWREQ_05783 Accelerator Pedal 2 Volt UnJit
   */
  /* UnitDelay: '<S15>/Delay' */
  ChassisMgmt_AccrPedlURaw1Prev_mV = ChassisMgmt_AccrPedlUnJit1_mV;

  /* Sum: '<S147>/Subtract' */
  ChassisMgmt_AccrPedlURaw1Dif_mV = ChassisMgmt_AccrPedlURaw1_mV -
    ChassisMgmt_AccrPedlURaw1Prev_mV;

  /* Abs: '<S147>/Abs' */
  ChassisMgmt_AccrPedlURaw1AbsDif_mV = fabsf(ChassisMgmt_AccrPedlURaw1Dif_mV);

  /* RelationalOperator: '<S147>/RelationalOperator1' incorporates:
   *  Constant: '<S147>/ChassisMgmt_AccrPedlUPreUnJitter_CFG'
   *  Constant: '<S147>/PdlAly_JITTER_COEFFICIENT'
   *  Product: '<S147>/Product'
   */
  ChassMgmt_AccrPedlURaw1PreUnJitterSts1_Flg =
    (ChassisMgmt_AccrPedlURaw1AbsDif_mV > (ChassisMgmt_AccrPedlUPreUnJitter_CFG *
      PdlAly_JITTER_COEFFICIENT));

  /* RelationalOperator: '<S147>/RelationalOperator2' incorporates:
   *  Constant: '<S147>/Define1'
   */
  ChassMgmt_AccrPedlURaw1PreUnJitterSts2_Flg = (ChassisMgmt_AccrPedlURaw1Dif_mV >
    PdlAly_ZERO_VOLTAGE);

  /* RelationalOperator: '<S147>/RelationalOperator' incorporates:
   *  Constant: '<S147>/ChassisMgmt_AccrPedlUPreUnJitter_CFG3'
   */
  ChassMgmt_AccrPedlURaw1PreUnJitterSts3_Flg =
    (ChassisMgmt_AccrPedlURaw1AbsDif_mV > ChassisMgmt_AccrPedlUPreUnJitter_CFG);

  /* Switch: '<S147>/Switch' */
  if (ChassMgmt_AccrPedlURaw1PreUnJitterSts3_Flg) {
    /* Switch: '<S147>/Switch1' incorporates:
     *  Switch: '<S147>/Switch2'
     */
    if (ChassMgmt_AccrPedlURaw1PreUnJitterSts1_Flg) {
      /* Switch: '<S147>/Switch' incorporates:
       *  Switch: '<S147>/Switch1'
       */
      rtb_ChassisMgmt_AccrPedlUnJitNo = ChassisMgmt_AccrPedlURaw1_mV;
    } else if (ChassMgmt_AccrPedlURaw1PreUnJitterSts2_Flg) {
      /* Switch: '<S147>/Switch2' incorporates:
       *  Constant: '<S147>/ChassisMgmt_AccrPedlUPreUnJitter_CFG1'
       *  Sum: '<S147>/Add'
       *  Switch: '<S147>/Switch'
       */
      rtb_ChassisMgmt_AccrPedlUnJitNo = ChassisMgmt_AccrPedlURaw1Prev_mV +
        ChassisMgmt_AccrPedlUPreUnJitter_CFG;
    } else {
      /* Switch: '<S147>/Switch' incorporates:
       *  Constant: '<S147>/ChassisMgmt_AccrPedlUPreUnJitter_CFG2'
       *  Sum: '<S147>/Subtract1'
       *  Switch: '<S147>/Switch2'
       */
      rtb_ChassisMgmt_AccrPedlUnJitNo = ChassisMgmt_AccrPedlURaw1Prev_mV -
        ChassisMgmt_AccrPedlUPreUnJitter_CFG;
    }

    /* End of Switch: '<S147>/Switch1' */
  } else {
    /* Switch: '<S147>/Switch' */
    rtb_ChassisMgmt_AccrPedlUnJitNo = ChassisMgmt_AccrPedlURaw1_mV;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Outputs for Atomic SubSystem: '<S147>/ATOM_Limiter' */
  /* Constant: '<S147>/ChassisMgmt_AccrPedlURaw1Hi_CFG' incorporates:
   *  Constant: '<S147>/ChassisMgmt_AccrPedlURaw1Lo_CFG'
   */
  ChassisMgmt_AccrPedlUnJit1_mV = CtAp_PdlAlys_ATOM_Limiter
    (ChassisMgmt_AccrPedlURaw1Hi_CFG, rtb_ChassisMgmt_AccrPedlUnJitNo,
     ChassisMgmt_AccrPedlURaw1Lo_CFG);

  /* End of Outputs for SubSystem: '<S147>/ATOM_Limiter' */

  /* UnitDelay: '<S15>/Delay1' */
  ChassisMgmt_AccrPedlURaw2Prev_mV = ChassisMgmt_AccrPedlUnJit2_mV;

  /* Sum: '<S148>/Subtract' */
  ChassisMgmt_AccrPedlURaw2Dif_mV = ChassisMgmt_AccrPedlURaw2_mV -
    ChassisMgmt_AccrPedlURaw2Prev_mV;

  /* Abs: '<S148>/Abs' */
  ChassisMgmt_AccrPedlURaw2AbsDif_mV = fabsf(ChassisMgmt_AccrPedlURaw2Dif_mV);

  /* RelationalOperator: '<S148>/RelationalOperator1' incorporates:
   *  Constant: '<S148>/ChassisMgmt_AccrPedlUPreUnJitter_CFG'
   *  Constant: '<S148>/Define'
   *  Product: '<S148>/Product'
   */
  ChassMgmt_AccrPedlURaw2PreUnJitterSts1_Flg =
    (ChassisMgmt_AccrPedlURaw2AbsDif_mV > (ChassisMgmt_AccrPedlUPreUnJitter2_CFG
      * PdlAly_CONSTANT_COEFFICIENT));

  /* RelationalOperator: '<S148>/RelationalOperator2' incorporates:
   *  Constant: '<S148>/Define1'
   */
  ChassMgmt_AccrPedlURaw2PreUnJitterSts2_Flg = (ChassisMgmt_AccrPedlURaw2Dif_mV >
    PdlAly_ZERO_VOLTAGE);

  /* RelationalOperator: '<S148>/RelationalOperator' incorporates:
   *  Constant: '<S148>/ChassisMgmt_AccrPedlUPreUnJitter_CFG3'
   */
  ChassMgmt_AccrPedlURaw2PreUnJitterSts3_Flg =
    (ChassisMgmt_AccrPedlURaw2AbsDif_mV > ChassisMgmt_AccrPedlUPreUnJitter2_CFG);

  /* Switch: '<S148>/Switch' */
  if (ChassMgmt_AccrPedlURaw2PreUnJitterSts3_Flg) {
    /* Switch: '<S148>/Switch1' incorporates:
     *  Switch: '<S148>/Switch2'
     */
    if (ChassMgmt_AccrPedlURaw2PreUnJitterSts1_Flg) {
      /* Switch: '<S148>/Switch' incorporates:
       *  Switch: '<S148>/Switch1'
       */
      rtb_ChassisMgmt_AccrPedlUn_hrko = ChassisMgmt_AccrPedlURaw2_mV;
    } else if (ChassMgmt_AccrPedlURaw2PreUnJitterSts2_Flg) {
      /* Switch: '<S148>/Switch2' incorporates:
       *  Constant: '<S148>/ChassisMgmt_AccrPedlUPreUnJitter_CFG1'
       *  Sum: '<S148>/Add'
       *  Switch: '<S148>/Switch'
       */
      rtb_ChassisMgmt_AccrPedlUn_hrko = ChassisMgmt_AccrPedlURaw2Prev_mV +
        ChassisMgmt_AccrPedlUPreUnJitter2_CFG;
    } else {
      /* Switch: '<S148>/Switch' incorporates:
       *  Constant: '<S148>/ChassisMgmt_AccrPedlUPreUnJitter_CFG2'
       *  Sum: '<S148>/Subtract1'
       *  Switch: '<S148>/Switch2'
       */
      rtb_ChassisMgmt_AccrPedlUn_hrko = ChassisMgmt_AccrPedlURaw2Prev_mV -
        ChassisMgmt_AccrPedlUPreUnJitter2_CFG;
    }

    /* End of Switch: '<S148>/Switch1' */
  } else {
    /* Switch: '<S148>/Switch' */
    rtb_ChassisMgmt_AccrPedlUn_hrko = ChassisMgmt_AccrPedlURaw2_mV;
  }

  /* End of Switch: '<S148>/Switch' */

  /* Outputs for Atomic SubSystem: '<S148>/ATOM_Limiter' */
  /* Constant: '<S148>/ChassisMgmt_AccrPedlURaw2Hi_CFG' incorporates:
   *  Constant: '<S148>/ChassisMgmt_AccrPedlURaw2Hi_CFG1'
   */
  ChassisMgmt_AccrPedlUnJit2_mV = CtAp_PdlAlys_ATOM_Limiter
    (ChassisMgmt_AccrPedlURaw2Hi_CFG, rtb_ChassisMgmt_AccrPedlUn_hrko,
     ChassisMgmt_AccrPedlURaw2Lo_CFG);

  /* End of Outputs for SubSystem: '<S148>/ATOM_Limiter' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedal_VoltUnJit' */

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedal_Linearization'
   *
   * Block requirements for '<S7>/AcceleratorPedal_Linearization':
   *  1. SWREQ_01201 Accelerator  Pedal1 Analysis Raw Position Value
   *  2. SWREQ_01202 Accelerator  Pedal2 Analysis Raw Position Value
   *  3. SWREQ_01203 Accelerator  Pedal2 Analysis Raw Position Value
   *  4. SWREQ_01200 Accelerator  Pedal1 Analysis Raw Position Value
   */
  /* Lookup_n-D: '<S14>/ChassisMgmt_AccrPedl1RatLnr_LUT' incorporates:
   *  SignalConversion generated from: '<S147>/ATOM_Limiter'
   */
  ChassisMgmt_AccrPedl1unFilPosn_pct = look1_iflf_binlca
    (ChassisMgmt_AccrPedlUnJit1_mV, &ChassisMgmt_AccrPedl1RatLnrX_LUT[0],
     &ChassisMgmt_AccrPedl1RatLnr_LUT[0], 3U);

  /* Lookup_n-D: '<S14>/ChassisMgmt_AccrPedl2RatLnr_LUT' incorporates:
   *  SignalConversion generated from: '<S148>/ATOM_Limiter'
   */
  ChassisMgmt_AccrPedl2unFilPosn_pct = look1_iflf_binlca
    (ChassisMgmt_AccrPedlUnJit2_mV, &ChassisMgmt_AccrPedl2RatLnrX_LUT[0],
     &ChassisMgmt_AccrPedl2RatLnr_LUT[0], 3U);

  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedal_Linearization' */

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedalArbitrion' */
  /* Outputs for Atomic SubSystem: '<S10>/AcceleratorPedalLimpHome'
   *
   * Block requirements for '<S10>/AcceleratorPedalLimpHome':
   *  1. SWREQ_01206 Accelerator  Pedal Limphome
   *  2. SWREQ_01207 Accelerator  Pedal Limphome
   */
  /* Logic: '<S18>/LogicalOperator' */
  ChassisMgmt_LimpHomeSts_Flg = (ChassisMgmt_ErrResAccrPedl1Flt_Flg ||
    ChassisMgmt_ErrResAccrPedl2Flt_Flg ||
    ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg);

  /* End of Outputs for SubSystem: '<S10>/AcceleratorPedalLimpHome' */

  /* Outputs for Atomic SubSystem: '<S10>/AcceleratorPedalPositionSet'
   *
   * Block requirements for '<S10>/AcceleratorPedalPositionSet':
   *  1. SWREQ_01206 Accelerator  Pedal Limphome
   *  2. SWREQ_01208 Accelerator  Pedal Analysis Position Set Accelerator  Pedal 1
   *  3. SWREQ_01209 Accelerator  Pedal Analysis Position Set Accelerator  Pedal 2
   *  4. SWREQ_05912 Accelerator  Pedal Analysis Position Set Zero
   *  5. SWREQ_05911 Accelerator  Pedal Analysis Position Set Accelerator  Pedal min
   *  6. SWREQ_05749 Accelerator  Pedal Analysis Position Set Accelerator  Pedal1
   */
  /* Logic: '<S19>/LogicalOperator' */
  ChassisMgmt_AccrPedlAllPas_Flg = (ChassisMgmt_ErrResAccrPedl1Flt_Flg &&
    ChassisMgmt_ErrResAccrPedl2Flt_Flg);

  /* Switch: '<S19>/Switch' incorporates:
   *  Logic: '<S19>/LogicalOperator1'
   *  Switch: '<S19>/Switch1'
   *  Switch: '<S19>/Switch2'
   *  Switch: '<S19>/Switch3'
   */
  if (ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg ||
      ChassisMgmt_AccrPedlAllPas_Flg) {
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/PdlAly_ZERO_PEDL'
     */
    ChassisMgmt_AccrPedlUnFilRawPosn_pct = PdlAly_ZERO_PEDL;
  } else if (ChassisMgmt_ErrResAccrPedl2Flt_Flg) {
    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S19>/ChassisMgmt_AccrPedlPosnSubDft_CFG'
     *  MinMax: '<S19>/MinMax'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlUnFilRawPosn_pct = fminf
      (ChassisMgmt_AccrPedl1unFilPosn_pct, ChassisMgmt_AccrPedlPosnSubDft_CFG);
  } else if (ChassisMgmt_ErrResAccrPedl1Flt_Flg) {
    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/ChassisMgmt_AccrPedlPosnSubDft_CFG1'
     *  MinMax: '<S19>/MinMax1'
     *  Switch: '<S19>/Switch'
     *  Switch: '<S19>/Switch1'
     */
    ChassisMgmt_AccrPedlUnFilRawPosn_pct = fminf
      (ChassisMgmt_AccrPedl2unFilPosn_pct, ChassisMgmt_AccrPedlPosnSubDft_CFG);
  } else if (ChassisMgmt_ErrResAccrPedlURawDifFltInfo_Flg) {
    /* Switch: '<S19>/Switch3' incorporates:
     *  Constant: '<S19>/ChassisMgmt_AccrPedlPosnSubDft_CFG2'
     *  MinMax: '<S19>/MinMax2'
     *  MinMax: '<S19>/MinMax3'
     *  Switch: '<S19>/Switch'
     *  Switch: '<S19>/Switch1'
     *  Switch: '<S19>/Switch2'
     */
    ChassisMgmt_AccrPedlUnFilRawPosn_pct = fminf(fminf
      (ChassisMgmt_AccrPedl2unFilPosn_pct, ChassisMgmt_AccrPedl1unFilPosn_pct),
      ChassisMgmt_AccrPedlPosnSubDft_CFG);
  } else {
    /* Switch: '<S19>/Switch' incorporates:
     *  Switch: '<S19>/Switch1'
     *  Switch: '<S19>/Switch2'
     *  Switch: '<S19>/Switch3'
     */
    ChassisMgmt_AccrPedlUnFilRawPosn_pct = ChassisMgmt_AccrPedl1unFilPosn_pct;
  }

  /* End of Switch: '<S19>/Switch' */
  /* End of Outputs for SubSystem: '<S10>/AcceleratorPedalPositionSet' */

  /* Outputs for Atomic SubSystem: '<S10>/AcceleratorPedalValid'
   *
   * Block requirements for '<S10>/AcceleratorPedalValid':
   *  1. SWREQ_01205 Accelerator  Pedal Valid
   *  2. SWREQ_05747 Accelerator  Pedal Valid
   */
  /* Logic: '<S20>/LogicalOperator2' incorporates:
   *  Logic: '<S20>/LogicalOperator'
   *  Logic: '<S20>/LogicalOperator1'
   */
  ChassisMgmt_AccrPedlVld_Flg = ((tmpRead_a || tmpRead_7) &&
    !ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg);

  /* End of Outputs for SubSystem: '<S10>/AcceleratorPedalValid' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedalArbitrion' */

  /* Outputs for Atomic SubSystem: '<S7>/AcceleratorPedalFilterAndKickDown'
   *
   * Block requirements for '<S7>/AcceleratorPedalFilterAndKickDown':
   *  1. SWREQ_01210 Accelerator  Pedal Analysis Position Filter
   *  2. SWREQ_05750 Accelerator  Pedal Analysis Position Kick Down
   *  3. SWREQ_05760 Accelerator  Pedal Analysis Position Kick Down
   *  4. SWREQ_05761 Accelerator  Pedal Analysis Position Kick Down
   */
  /* Sum: '<S11>/Subtract' incorporates:
   *  UnitDelay: '<S11>/OneDelay1'
   */
  rtb_ChassisMgmt_AccrPedlPosnRaw = ChassisMgmt_AccrPedlUnFilRawPosn_pct -
    ChassisMgmt_AccrPedlRawPosn_pct;

  /* Abs: '<S11>/Abs' */
  rtb_ChassisMgmt_AccrPedlPo_otix = fabsf(rtb_ChassisMgmt_AccrPedlPosnRaw);

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/ChassisMgmt_AccrPedlPosnPreUnJitter_CFG'
   *  RelationalOperator: '<S11>/RelationalOperator'
   */
  if (rtb_ChassisMgmt_AccrPedlPo_otix > ChassisMgmt_AccrPedlPosnPreUnJitter_CFG)
  {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/ChassisMgmt_AccrPedlPosnPreUnJitter_CFG4'
     *  Constant: '<S11>/Define1'
     *  Constant: '<S11>/PdlAly_JITTER_COEFFICIENT'
     *  Product: '<S11>/Product'
     *  RelationalOperator: '<S11>/RelationalOperator1'
     *  RelationalOperator: '<S11>/RelationalOperator2'
     *  Switch: '<S11>/Switch2'
     */
    if (rtb_ChassisMgmt_AccrPedlPo_otix >
        (ChassisMgmt_AccrPedlPosnPreUnJitter_CFG * PdlAly_JITTER_COEFFICIENT)) {
      /* Switch: '<S11>/Switch' incorporates:
       *  Switch: '<S11>/Switch1'
       */
      ChassisMgmt_AccrPedlRawPosn_pct = ChassisMgmt_AccrPedlUnFilRawPosn_pct;
    } else if (rtb_ChassisMgmt_AccrPedlPosnRaw > PdlAly_ZERO_VOLTAGE) {
      /* Switch: '<S11>/Switch2' incorporates:
       *  Constant: '<S11>/ChassisMgmt_AccrPedlPosnPreUnJitter_CFG3'
       *  Sum: '<S11>/Add'
       *  Switch: '<S11>/Switch'
       *  Switch: '<S11>/Switch1'
       *  UnitDelay: '<S11>/OneDelay1'
       */
      ChassisMgmt_AccrPedlRawPosn_pct = ChassisMgmt_AccrPedlRawPosn_pct +
        ChassisMgmt_AccrPedlPosnPreUnJitter_CFG;
    } else {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/ChassisMgmt_AccrPedlPosnPreUnJitter_CFG2'
       *  Sum: '<S11>/Subtract1'
       *  Switch: '<S11>/Switch1'
       *  Switch: '<S11>/Switch2'
       *  UnitDelay: '<S11>/OneDelay1'
       */
      ChassisMgmt_AccrPedlRawPosn_pct = ChassisMgmt_AccrPedlRawPosn_pct -
        ChassisMgmt_AccrPedlPosnPreUnJitter_CFG;
    }

    /* End of Switch: '<S11>/Switch1' */
  } else {
    /* Switch: '<S11>/Switch' */
    ChassisMgmt_AccrPedlRawPosn_pct = ChassisMgmt_AccrPedlUnFilRawPosn_pct;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S11>/ChassisMgmt_AccrPedlKdOnPosn_CFG'
   *  Constant: '<S11>/ChassisMgmt_AccrPedlRatLnrFilTim_CFG2'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S21>/Relational Operator1'
   *  Switch: '<S21>/Switch'
   */
  if (ChassisMgmt_AccrPedlKdOnPosn_CFG <= ChassisMgmt_AccrPedlRawPosn_pct) {
    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/po'
     */
    ChassisMgmt_AccrPedlKdSts_Flg = true;
  } else if (ChassisMgmt_AccrPedlRawPosn_pct <=
             ChassisMgmt_AccrPedlKdOffPosn_CFG) {
    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/po1'
     *  Switch: '<S21>/Switch1'
     */
    ChassisMgmt_AccrPedlKdSts_Flg = false;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S21>/Switch1' */
  /* End of Outputs for SubSystem: '<S7>/AcceleratorPedalFilterAndKickDown' */

  /* Outputs for Atomic SubSystem: '<S7>/BrakePedalPriority'
   *
   * Block requirements for '<S7>/BrakePedalPriority':
   *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
   */
  /* Logic: '<S16>/LogicalOperator1' incorporates:
   *  Constant: '<S16>/PdlAly_BRAKE_INVALID'
   *  Constant: '<S16>/PdlAly_BRAKE_PRESSED'
   *  RelationalOperator: '<S16>/RelationalOperator'
   *  RelationalOperator: '<S16>/RelationalOperator1'
   */
  ChassisMgmt_BrkPedlPrio_Flg = ((ChassisMgmt_BrkSts_Enum == ((uint8_T)
    PdlAly_BRAKE_PRESSED)) || (ChassisMgmt_BrkSts_Enum == ((uint8_T)
    PdlAly_BRAKE_INVALID)));

  /* End of Outputs for SubSystem: '<S7>/BrakePedalPriority' */

  /* Outputs for Atomic SubSystem: '<S7>/IBS_Priority'
   *
   * Block requirements for '<S7>/IBS_Priority':
   *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PdlAlys_Input'
   *
   * Block requirements for '<S2>/CtAp_PdlAlys_Input':
   *  1. SWREQ_01180 The function of "Pedal analysis" has the following inputs:
   */
  /* Logic: '<S17>/LogicalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  ChassisMgmt_IBSBReqZeroAccrPedl_Flg = (tmpRead_3 || tmpRead_0 || tmpRead ||
    tmpRead_4);

  /* End of Outputs for SubSystem: '<S2>/CtAp_PdlAlys_Input' */
  /* End of Outputs for SubSystem: '<S7>/IBS_Priority' */

  /* Outputs for Atomic SubSystem: '<S7>/AccelerationPedalPositionBrakePlausibility'
   *
   * Block requirements for '<S7>/AccelerationPedalPositionBrakePlausibility':
   *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Logic: '<S9>/LogicalOperator'
   */
  if (ChassisMgmt_BrkPedlPrio_Flg || ChassisMgmt_IBSBReqZeroAccrPedl_Flg) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/PdlAly_ZERO_PEDL'
     */
    ChassisMgmt_AccrPedlPosn_pct = PdlAly_ZERO_PEDL;
  } else {
    /* Switch: '<S9>/Switch' */
    ChassisMgmt_AccrPedlPosn_pct = ChassisMgmt_AccrPedlRawPosn_pct;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/AccelerationPedalPositionBrakePlausibility' */
  /* End of Outputs for SubSystem: '<S6>/AcceleratorPedalAnalysis' */
  /* End of Outputs for SubSystem: '<S2>/Function_PedalAnalysis' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_PdlAlys_Output'
   *
   * Block requirements for '<S2>/CtAp_PdlAlys_Output':
   *  1. SWREQ_01182 The function of "Pedal analysis" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct
    (ChassisMgmt_AccrPedlPosn_pct);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURaw1 =
    ChassisMgmt_AccrPedlURaw1HiDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy2'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_jkuh =
    ChassisMgmt_AccrPedlURaw1LoDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy3'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURaw2 =
    ChassisMgmt_AccrPedlURaw2HiDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_gfso =
    ChassisMgmt_AccrPedlURaw2LoDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURawD =
    ChassisMgmt_AccrPedlURawDifDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy6'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg
    (ChassisMgmt_AccrPedlVld_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg
    (ChassisMgmt_ErrResBrkPedlFlt_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy9'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg
    (ChassisMgmt_LimpHomeSts_Flg);

  /* Outport: '<Root>/RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum' incorporates:
   *  SignalConversion: '<S5>/SignalCopy10'
   */
  (void)Rte_Write_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
    (ChassisMgmt_BrkSts_Enum);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy11'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo
    (ChassisMgmt_AccrPedlKdSts_Flg);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy12'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
    (ChassisMgmt_AccrPedlRawPosn_pct);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy13'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlSplyV =
    ChassisMgmt_AccrPedlSplyVolt1HiDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy14'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_eme5 =
    ChassisMgmt_AccrPedlSplyVolt1LoDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy15'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_dsbx =
    ChassisMgmt_AccrPedlSplyVolt2HiDTC_Bus;

  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo' incorporates:
   *  SignalConversion: '<S5>/SignalCopy16'
   */
  CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_fxr2 =
    ChassisMgmt_AccrPedlSplyVolt2LoDTC_Bus;

  /* End of Outputs for SubSystem: '<S2>/CtAp_PdlAlys_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_PdlAlys_Cyclic_10ms_sys' */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURaw1);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_jkuh);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURaw2);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_gfso);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlURawD);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedlSplyV);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_eme5);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_dsbx);
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo
    (&CtAp_PdlAlys_ARID_DEF.RTE_P_ChassisMgmt_AccrPedl_fxr2);
}

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_PdlAlys_START_SEC_VAR_CONST_8
#include "CtAp_PdlAlys_MemMap.h"

void R_PdlAlys_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_AccrPedlUnJit1_mV = 0.0F;
  ChassisMgmt_AccrPedlUnJit2_mV = 0.0F;
  ChassisMgmt_AccrPedlURaw1_mV = 0.0F;
  ChassisMgmt_AccrPedlURaw2_mV = 0.0F;
  ChassisMgmt_AccrPedlURawAbsDif_mV = 0.0F;
  ChassisMgmt_AccrPedlRawPosn_pct = 0.0F;
  ChassisMgmt_AccrPedlPosn_pct = 0.0F;
  ChassisMgmt_BrkSts_Enum = 0U;
  ChassisMgmt_AccrPedlURaw2HiFltActv_Flg = false;
  ChassisMgmt_AccrPedlURaw2HiFltReSetActv_Flg = false;
  ChassisMgmt_AccrPedlURaw2LoFltActv_Flg = false;
  ChassisMgmt_AccrPedlURaw2LoFltReSetActv_Flg = false;
  ChassisMgmt_AccrPedlURaw1LoFltActv_Flg = false;
  ChassisMgmt_AccrPedlURaw1LoFltReSetActv_Flg = false;
  ChassisMgmt_ErrResAccrPedl2Flt_Flg = false;
  ChassisMgmt_ErrResAccrPedl1Flt_Flg = false;
  ChassisMgmt_ErrResAccrPedlSplyVolt2Flt_Flg = false;
  ChassisMgmt_ErrResAccrPedlSplyVolt1Flt_Flg = false;
  ChassisMgmt_AccrPedlVld_Flg = false;
  ChassisMgmt_LimpHomeSts_Flg = false;
  ChassisMgmt_ErrResAccrPedlU2LoFltInfo_Flg = false;
  ChassisMgmt_ErrResAccrPedlU2HiFltInfo_Flg = false;
  ChassisMgmt_ErrResAccrPedlU1LoFltInfo_Flg = false;
  ChassisMgmt_ErrResAccrPedlU1HiFltInfo_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_PdlAlys_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_PdlAlys_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_PdlAlys_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Function_PedalAnalysis' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/AcceleratorPedalAnalysis' */
  /* SystemInitialize for Atomic SubSystem: '<S7>/AcceleratorPedal_Diag' */
  /* SystemInitialize for Atomic SubSystem: '<S12>/AcceleratorPedal1PowerSupplyVoltageDiag' */
  /* SystemInitialize for Atomic SubSystem: '<S30>/AvoidMu' */
  CtAp_PdlAlys_AvoidMu_Init();

  /* End of SystemInitialize for SubSystem: '<S30>/AvoidMu' */
  /* End of SystemInitialize for SubSystem: '<S12>/AcceleratorPedal1PowerSupplyVoltageDiag' */

  /* SystemInitialize for Atomic SubSystem: '<S12>/MainAcceleratorPedalDiag' */
  /* SystemInitialize for Atomic SubSystem: '<S103>/AvoidMu' */
  CtAp_PdlAlys_AvoidMu_hofa_Init();

  /* End of SystemInitialize for SubSystem: '<S103>/AvoidMu' */
  /* End of SystemInitialize for SubSystem: '<S12>/MainAcceleratorPedalDiag' */

  /* SystemInitialize for Atomic SubSystem: '<S12>/RdnAcceleratorPedalDiag' */
  /* SystemInitialize for Atomic SubSystem: '<S126>/AvoidMu' */
  CtAp_PdlAlys_AvoidMu_od30_Init();

  /* End of SystemInitialize for SubSystem: '<S126>/AvoidMu' */

  /* SystemInitialize for Atomic SubSystem: '<S124>/AvoidMu' */
  CtAp_PdlAlys_AvoidMu_ppxw_Init();

  /* End of SystemInitialize for SubSystem: '<S124>/AvoidMu' */
  /* End of SystemInitialize for SubSystem: '<S12>/RdnAcceleratorPedalDiag' */

  /* SystemInitialize for Atomic SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */
  /* SystemInitialize for Enabled SubSystem: '<S81>/SetCondtion'
   *
   * Block requirements for '<S81>/SetCondtion':
   *  1. SWREQ_05937 Accelerator pedal difference fault2 Reset Conditon
   */
  /* SystemInitialize for DataTypeConversion: '<S92>/Data Type Conversion' incorporates:
   *  Outport: '<S92>/ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg'
   */
  ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg = false;

  /* End of SystemInitialize for SubSystem: '<S81>/SetCondtion' */

  /* SystemInitialize for Atomic SubSystem: '<S80>/AvoidMu' */
  CtAp_PdlAlys_AvoidMu_omrp_Init();

  /* End of SystemInitialize for SubSystem: '<S80>/AvoidMu' */
  /* End of SystemInitialize for SubSystem: '<S12>/AcceleratorPedalDifferentialDiag' */
  /* End of SystemInitialize for SubSystem: '<S7>/AcceleratorPedal_Diag' */
  /* End of SystemInitialize for SubSystem: '<S6>/AcceleratorPedalAnalysis' */
  /* End of SystemInitialize for SubSystem: '<S2>/Function_PedalAnalysis' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_PdlAlys_Cyclic_10ms_sys' */
}

#define CtAp_PdlAlys_STOP_SEC_VAR_CONST_8
#include "CtAp_PdlAlys_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
