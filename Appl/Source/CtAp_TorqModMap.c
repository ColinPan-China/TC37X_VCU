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
 *  Filename:           CtAp_TorqModMap.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqModMap.h"
#include "rtwtypes.h"
#include "CtAp_TorqModMap_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_TorqModMap_Glb.h"
#include "CtAp_TorqModMap_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqModMap_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"

ARID_DEF_CtAp_TorqModMap_T CtAp_TorqModMap_ARID_DEF;

#define CtAp_TorqModMap_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S7>/ATOM_TimeCnt' */
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

boolean_T CtAp_TorqModMap_ATOM_TimeCnt(boolean_T rtu_In, uint8_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_To_T
  *CtAp_TorqModMap__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S11>/Add1' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion'
   *  DataTypeConversion: '<S11>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S11>/Switch' */
  if (rtu_In) {
    /* Sum: '<S11>/Add' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  UnitDelay: '<S11>/Delay'
     */
    CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S11>/Min' */
    if (rtb_Add1 <= CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S11>/Add' */
      CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S11>/Min' */
  } else {
    /* Sum: '<S11>/Add' incorporates:
     *  Constant: '<S11>/Constant'
     *  UnitDelay: '<S11>/Delay'
     */
    CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S11>/Switch' */

  /* RelationalOperator: '<S11>/Relational Operator' incorporates:
   *  UnitDelay: '<S11>/Delay'
   */
  return CtAp_TorqModMap__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

/* Output and update for atomic system: '<S9>/ATOM_Limiter' */
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

real32_T CtAp_TorqModMap_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S12>/Switch' incorporates:
   *  RelationalOperator: '<S12>/RelationalOperator'
   *  RelationalOperator: '<S12>/RelationalOperator1'
   *  Switch: '<S12>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S12>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S12>/Switch' */
  return rty_Out_0;
}

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

/* Output and update for atomic system: '<S10>/ATOM_DlyRatRmpLmt' */
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

real32_T CtAp_TorqModM_ATOM_DlyRatRmpLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt, real32_T rtu_delay)
{
  real32_T rty_output_0;

  /* Switch: '<S13>/Switch' incorporates:
   *  MinMax: '<S13>/MinMax'
   *  MinMax: '<S13>/MinMax1'
   *  Product: '<S13>/Product2'
   *  Product: '<S13>/Product3'
   *  RelationalOperator: '<S13>/Relational Operator1'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S13>/Sum1'
   */
  if (rtu_demand > rtu_delay) {
    rty_output_0 = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) + rtu_delay);
  } else {
    rty_output_0 = fmaxf(rtu_demand, rtu_delay - (rtu_dt * rtu_fall_rate));
  }

  /* End of Switch: '<S13>/Switch' */
  return rty_output_0;
}

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqModMap_START_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

void R_TorqModMap_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Delay;
  real32_T rtb_TmpSignalConversionAtATOM_D;
  real32_T rtb_Switch;
  real32_T TorqModMap_DesCoorrLmtTq_Nm;
  real32_T rtb_Switch_jrof;
  real32_T rtb_TorqPahMgmt_DesCoorrTq_Nm;
  real32_T rtb_TorqPahMgmt_EmacDynMaxTq_Nm;
  real32_T rtb_TorqPahMgmt_EmacDynMinTq_Nm;
  uint8_T rtb_FctSftyMon_ActGear_Enum;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_RelationalOperator_dczq;
  dt_ComM_MCU01CRCInfo tmpRead_1;
  dt_ComM_MCU01E2ETimeoutInfo tmpRead_2;
  real32_T tmp;
  real32_T tmpRead;
  uint8_T tmpRead_0;
  boolean_T rtb_TorqModMap_MotActTqVld_Flg;
  boolean_T tmp_0;

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
    (&tmpRead_1);

  /* SignalConversion: '<S4>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm
    (&rtb_TorqPahMgmt_EmacDynMinTq_Nm);

  /* SignalConversion: '<S4>/SignalCopy7' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm
    (&rtb_TorqPahMgmt_EmacDynMaxTq_Nm);

  /* SignalConversion: '<S4>/SignalCopy6' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm'
   */
  (void)Rte_Read_RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm
    (&rtb_TorqPahMgmt_DesCoorrTq_Nm);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_0);

  /* SignalConversion: '<S4>/SignalCopy2' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_FctSftyMon_ActGear_Enum);

  /* Inport: '<Root>/RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg
    (&rtb_TorqModMap_MotActTqVld_Flg);

  /* Inport: '<Root>/RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm' */
  (void)Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqModMap_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_TorqModMap' */
  /* Delay: '<S6>/Delay' */
  rtb_Delay = TorqPahMgmt_DesMotTq_Nm;

  /* Outputs for Atomic SubSystem: '<S6>/TorqueSlope'
   *
   * Block requirements for '<S6>/TorqueSlope':
   *  1. SWREQ_01922 CAN require torque Limit
   */
  /* SignalConversion generated from: '<S10>/ATOM_DlyRatRmpLmt' incorporates:
   *  Constant: '<S10>/TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG'
   */
  rtb_TmpSignalConversionAtATOM_D = TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG;

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_DlyRatRmpLmt' */
  /* Constant: '<S10>/TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG' incorporates:
   *  Constant: '<S10>/TorqModMap_SAMPLE_TIME'
   */
  rtb_Switch = CtAp_TorqModM_ATOM_DlyRatRmpLmt(rtb_TorqPahMgmt_DesCoorrTq_Nm,
    rtb_TmpSignalConversionAtATOM_D, TorqPahMgmt_DesTqMaxGrdtSlopTq_CFG,
    TorqModMap_SAMPLE_TIME, rtb_Delay);

  /* End of Outputs for SubSystem: '<S10>/ATOM_DlyRatRmpLmt' */
  /* End of Outputs for SubSystem: '<S6>/TorqueSlope' */

  /* Outputs for Atomic SubSystem: '<S6>/System_Limitation_Status'
   *
   * Block requirements for '<S6>/System_Limitation_Status':
   *  1. SWREQ_01920 CAN require torque clear
   *  2. SWREQ_01921 CAN require torque Limit
   */
  /* Outputs for Atomic SubSystem: '<S9>/ATOM_Limiter' */
  rtb_Switch_jrof = CtAp_TorqModMap_ATOM_Limiter(rtb_TorqPahMgmt_EmacDynMaxTq_Nm,
    rtb_Switch, rtb_TorqPahMgmt_EmacDynMinTq_Nm);

  /* End of Outputs for SubSystem: '<S9>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S9>/ATOM_Limiter' */
  TorqModMap_DesCoorrLmtTq_Nm = rtb_Switch_jrof;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Input' */
  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/TorqModMap_DRIVE_READY'
   *  RelationalOperator: '<S9>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  if (tmpRead_0 != ((uint8_T)TorqModMap_DRIVE_READY)) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/TorqModMap_ZEAR_TORQUE'
     */
    TorqPahMgmt_DesMotTq_Nm = TorqModMap_ZEAR_TORQUE;
  } else {
    /* Switch: '<S9>/Switch' */
    TorqPahMgmt_DesMotTq_Nm = TorqModMap_DesCoorrLmtTq_Nm;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S6>/System_Limitation_Status' */

  /* Outputs for Atomic SubSystem: '<S6>/DesireTorqueAndMotorActualTorqueFault'
   *
   * Block requirements for '<S6>/DesireTorqueAndMotorActualTorqueFault':
   *  1. SWREQ_06728 Desired motor torque Over Motor Torque Fault
   *  2. SWREQ_06729 Desired motor torque Over Motor Torque Fault clear
   */
  /* RelationalOperator: '<S7>/RelationalOperator' incorporates:
   *  Abs: '<S7>/Abs'
   *  Constant: '<S7>/TorqPahMgmt_DifDesAndActTq_CFG'
   *  SignalConversion: '<S4>/SignalCopy'
   *  Sum: '<S7>/Subtract'
   */
  rtb_RelationalOperator = (fabsf(TorqPahMgmt_DesMotTq_Nm - tmpRead) >
    TorqPahMgmt_DifDesAndActTq_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Input' */

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_TimeCnt' */
  /* Constant: '<S7>/TorqModMap_TIME_STEP' incorporates:
   *  Constant: '<S7>/TorqPahMgmt_DifDesAndActTqTim_CFG'
   */
  rtb_RelationalOperator_dczq = CtAp_TorqModMap_ATOM_TimeCnt
    (rtb_RelationalOperator, ((uint8_T)TorqModMap_TIME_STEP),
     TorqPahMgmt_DifDesAndActTqTim_CFG,
     &CtAp_TorqModMap_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S7>/ATOM_TimeCnt' */
  /* End of Outputs for SubSystem: '<S6>/DesireTorqueAndMotorActualTorqueFault' */

  /* Outputs for Atomic SubSystem: '<S6>/Motor_Info'
   *
   * Block requirements for '<S6>/Motor_Info':
   *  1. SWREQ_01923 Forward motor info to CH can
   *  2. SWREQ_01924 Forward motor info to CH can
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Input' */
  /* Logic: '<S8>/LogicalOperator' incorporates:
   *  Logic: '<S8>/LogicalOperator1'
   *  Logic: '<S8>/LogicalOperator2'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy10'
   *  SignalConversion: '<S4>/SignalCopy9'
   */
  rtb_TorqModMap_MotActTqVld_Flg = (rtb_TorqModMap_MotActTqVld_Flg &&
    !tmpRead_1.ComM_ErrResMCU01CRCErrorInfo &&
    !tmpRead_2.ComM_ErrResMCU01E2ETimeoutInfo);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Input' */
  /* End of Outputs for SubSystem: '<S6>/Motor_Info' */
  /* End of Outputs for SubSystem: '<S2>/Function_TorqModMap' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Output' */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm
    (TorqPahMgmt_DesMotTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Output' */

  /* Outputs for Atomic SubSystem: '<S2>/Function_TorqModMap' */
  /* Outputs for Atomic SubSystem: '<S6>/Motor_Info'
   *
   * Block requirements for '<S6>/Motor_Info':
   *  1. SWREQ_01923 Forward motor info to CH can
   *  2. SWREQ_01924 Forward motor info to CH can
   */
  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/TorqPahMgmt_InvldMotActTq_CFG'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  if (rtb_TorqModMap_MotActTqVld_Flg) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Input' */
    tmp = tmpRead;

    /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Input' */
  } else {
    tmp = TorqPahMgmt_InvldMotActTq_CFG;
  }

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm' incorporates:
   *  Switch: '<S8>/Switch'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(tmp);

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/TorqModMap_INVALID'
   *  Constant: '<S8>/TorqModMap_VALID'
   */
  if (rtb_TorqModMap_MotActTqVld_Flg) {
    tmp_0 = TorqModMap_VALID;
  } else {
    tmp_0 = TorqModMap_INVALID;
  }

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg
    (tmp_0);

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/TorqPahMgmt_InvldWhlActTq_CFG'
   *  Constant: '<S8>/TorqPahMgmt_MotRednRat_CFG'
   *  Constant: '<S8>/TorqPahMgmt_MotTrsmEff_CFG'
   *  Product: '<S8>/Product'
   *  Product: '<S8>/Product1'
   *  SignalConversion: '<S4>/SignalCopy'
   */
  if (rtb_TorqModMap_MotActTqVld_Flg) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Input' */
    tmp = (TorqPahMgmt_MotRednRat_CFG * tmpRead) * TorqPahMgmt_MotTrsmEff_CFG;

    /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Input' */
  } else {
    tmp = TorqPahMgmt_InvldWhlActTq_CFG;
  }

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm' incorporates:
   *  Switch: '<S8>/Switch2'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(tmp);

  /* Switch: '<S8>/Switch3' incorporates:
   *  Constant: '<S8>/TorqModMap_INVALID1'
   *  Constant: '<S8>/TorqModMap_VALID1'
   */
  if (rtb_TorqModMap_MotActTqVld_Flg) {
    tmp_0 = TorqModMap_VALID;
  } else {
    tmp_0 = TorqModMap_INVALID;
  }

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg' incorporates:
   *  Switch: '<S8>/Switch3'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg
    (tmp_0);

  /* End of Outputs for SubSystem: '<S6>/Motor_Info' */
  /* End of Outputs for SubSystem: '<S2>/Function_TorqModMap' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqModMap_Output' */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq' incorporates:
   *  SignalConversion: '<S5>/SignalCopy5'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq
    (rtb_RelationalOperator_dczq);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqModMap_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqModMap_Cyclic_10ms_sys' */
}

#define CtAp_TorqModMap_STOP_SEC_CODE
#include "CtAp_TorqModMap_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqModMap_START_SEC_VAR_CONST_8
#include "CtAp_TorqModMap_MemMap.h"

void R_TorqModMap_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_DesMotTq_Nm = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TorqModMap_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TorqModMap_T));
}

#define CtAp_TorqModMap_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqModMap_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
