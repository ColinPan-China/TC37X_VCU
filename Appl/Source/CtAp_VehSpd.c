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
 *  Filename:           CtAp_VehSpd.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:28:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:27:16 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehSpd.h"
#include "rtwtypes.h"
#include "CtAp_VehSpd_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_VehSpd_Cal.h"
#include "CtAp_VehSpd_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_VehSpd_START_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"

ARID_DEF_CtAp_VehSpd_T CtAp_VehSpd_ARID_DEF;

#define CtAp_VehSpd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S6>/ATOM_SingleLPF' */
#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

real32_T CtAp_VehSpd_ATOM_SingleLPF(real32_T rtu_u, real32_T rtu_tc, real32_T
  rtu_dt, ARID_DEF_ATOM_SingleLPF_CtAp__T *CtAp_VehSpd__ARID_DEF_arg)
{
  real32_T rty_y_0;

  /* Sum: '<S18>/Sum1' incorporates:
   *  Constant: '<S18>/Constant'
   *  Delay: '<S18>/Delay'
   *  MinMax: '<S18>/Max'
   *  MinMax: '<S18>/Max1'
   *  Product: '<S18>/DI'
   *  Product: '<S18>/Mu'
   *  Sum: '<S18>/Sum2'
   */
  rty_y_0 = CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE + ((rtu_u -
    CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE) * (rtu_dt / fmaxf(fmaxf(rtu_dt,
    rtu_tc), 1.0E-6F)));

  /* Update for Delay: '<S18>/Delay' */
  CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE = rty_y_0;
  return rty_y_0;
}

#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S22>/ATOM_TimeCnt'
 *    '<S22>/ATOM_TimeCnt1'
 */
#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

boolean_T CtAp_VehSpd_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ve_T
  *CtAp_VehSpd__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S23>/Add1' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion'
   *  DataTypeConversion: '<S23>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S23>/Switch' */
  if (rtu_In) {
    /* Sum: '<S23>/Add' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  UnitDelay: '<S23>/Delay'
     */
    CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)rtu_RunStep_C
      + (uint32_T)CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S23>/Min' */
    if (rtb_Add1 <= CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S23>/Add' */
      CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S23>/Min' */
  } else {
    /* Sum: '<S23>/Add' incorporates:
     *  Constant: '<S23>/Constant'
     *  UnitDelay: '<S23>/Delay'
     */
    CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S23>/Switch' */

  /* RelationalOperator: '<S23>/Relational Operator' incorporates:
   *  UnitDelay: '<S23>/Delay'
   */
  return CtAp_VehSpd__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

void R_VehSpd_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Divide2;
  real32_T rtb_Sum1;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_RelationalOperator_apq0;
  dt_ComM_IBSSts03CRCInfo tmpRead;
  dt_ComM_IBSSts03E2ETimeoutInfo tmpRead_0;
  dt_ComM_MCU01CRCInfo tmpRead_1;
  dt_ComM_MCU01E2ETimeoutInfo tmpRead_2;
  real32_T rtb_Switch;
  real32_T tmp;
  int16_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T rtb_TmpSignalConversionAtR_hg4k;
  uint8_T tmpRead_4;
  boolean_T rtb_LogicalOperator_juzy;
  boolean_T rtb_TmpSignalConversionAtR_aca4;
  boolean_T tmpRead_3;

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm'
   */
  (void)Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg'
   */
  (void)Rte_Read_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg
    (&rtb_TmpSignalConversionAtR_aca4);

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_TmpSignalConversionAtR_hg4k);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_GearVehDirDif'
   *
   * Block requirements for '<S2>/VehMot_GearVehDirDif':
   *  1. SWREQ_03744 VehSpd Dif with Gear R
   *  2. SWREQ_03745 VehSpd Dif with Gear R Reset
   *  3. SWREQ_03746 VehSpd Dif with Gear D
   *  4. SWREQ_03747 VehSpd Dif with Gear D Reset
   *  5. SWREQ_03748 VehSpd Dif Confirm
   */
  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S4>/LogicalOperator'
   *  Logic: '<S4>/LogicalOperator1'
   *  Logic: '<S4>/LogicalOperator2'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Switch: '<S4>/Switch1'
   *
   * Block requirements for '<S4>/LogicalOperator':
   *  1. SWREQ_03744 VehSpd Dif with Gear R
   *
   * Block requirements for '<S4>/Switch1':
   *  1. SWREQ_03745 VehSpd Dif with Gear R Reset
   */
  if (rtb_TmpSignalConversionAtR_aca4 && ((real32_T)
       rtb_TmpSignalConversionAtRTE_R_ > VehSpd_SpdGearRDif_CFG) &&
      (rtb_TmpSignalConversionAtR_hg4k == ((uint8_T)VehSpd_GearR))) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant'
     */
    VehMot_VehDirDifGearR_Flg = VehSpd_True;
  } else if ((rtb_TmpSignalConversionAtR_aca4 && ((real32_T)
               rtb_TmpSignalConversionAtRTE_R_ < VehSpd_SpdGearRRcvr_CFG)) ||
             (rtb_TmpSignalConversionAtR_hg4k != ((uint8_T)VehSpd_GearR))) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Switch: '<S4>/Switch'
     *
     * Block requirements for '<S4>/Switch1':
     *  1. SWREQ_03745 VehSpd Dif with Gear R Reset
     */
    VehMot_VehDirDifGearR_Flg = VehSpd_False;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S4>/Switch' */

  /* Switch: '<S4>/Switch2' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S16>/Constant'
   *  Logic: '<S4>/LogicalOperator3'
   *  Logic: '<S4>/LogicalOperator4'
   *  Logic: '<S4>/LogicalOperator5'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  Switch: '<S4>/Switch3'
   *
   * Block requirements for '<S4>/Switch2':
   *  1. SWREQ_03746 VehSpd Dif with Gear D
   *
   * Block requirements for '<S4>/Switch3':
   *  1. SWREQ_03747 VehSpd Dif with Gear D Reset
   */
  if (rtb_TmpSignalConversionAtR_aca4 && ((real32_T)
       rtb_TmpSignalConversionAtRTE_R_ < VehSpd_SpdGearDDif_CFG) &&
      (rtb_TmpSignalConversionAtR_hg4k == ((uint8_T)VehSpd_GearD))) {
    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S4>/Constant2'
     *
     * Block requirements for '<S4>/Switch2':
     *  1. SWREQ_03746 VehSpd Dif with Gear D
     */
    VehMot_VehDirDifGearD_Flg = VehSpd_True;
  } else if ((rtb_TmpSignalConversionAtR_aca4 && ((real32_T)
               rtb_TmpSignalConversionAtRTE_R_ > VehSpd_SpdGearDRcvr_CFG)) ||
             (rtb_TmpSignalConversionAtR_hg4k != ((uint8_T)VehSpd_GearD))) {
    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Switch: '<S4>/Switch2'
     *
     * Block requirements for '<S4>/Switch3':
     *  1. SWREQ_03747 VehSpd Dif with Gear D Reset
     *
     * Block requirements for '<S4>/Switch2':
     *  1. SWREQ_03746 VehSpd Dif with Gear D
     */
    VehMot_VehDirDifGearD_Flg = VehSpd_False;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S4>/Switch2' */
  /* End of Outputs for SubSystem: '<S2>/VehMot_GearVehDirDif' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(&tmpRead_3);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_VehDrvDir'
   *
   * Block requirements for '<S2>/VehMot_VehDrvDir':
   *  1. SWREQ_03736 VehDrvDir Forward
   *  2. SWREQ_03737 VehDrvDir Backward
   *  3. SWREQ_03738 VehDrvDir False
   */
  /* Outputs for Atomic SubSystem: '<S8>/VehDrvDirCfmSys' */
  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  rtb_Compare = ((real32_T)rtb_TmpSignalConversionAtRTE_R_ >= VehSpd_SingleZero);

  /* Logic: '<S22>/LogicalOperator' */
  rtb_LogicalOperator = !rtb_Compare;

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt1' */
  /* Constant: '<S22>/Constant4' incorporates:
   *  Constant: '<S22>/CAL3'
   */
  rtb_RelationalOperator = CtAp_VehSpd_ATOM_TimeCnt(rtb_LogicalOperator,
    ((uint16_T)VehSpd_Cycle), VehSpd_VehDrvDirTimCfm_CFG,
    &CtAp_VehSpd_ARID_DEF.ARID_DEF_ATOM_TimeCnt1);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt1' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_TimeCnt' */
  /* Constant: '<S22>/Constant3' incorporates:
   *  Constant: '<S22>/CAL1'
   */
  rtb_RelationalOperator_apq0 = CtAp_VehSpd_ATOM_TimeCnt(rtb_Compare, ((uint16_T)
    VehSpd_Cycle), VehSpd_VehDrvDirTimCfm_CFG,
    &CtAp_VehSpd_ARID_DEF.ARID_DEF_ATOM_TimeCnt);

  /* End of Outputs for SubSystem: '<S22>/ATOM_TimeCnt' */

  /* Switch: '<S22>/Switch2' incorporates:
   *  Constant: '<S22>/Constant2'
   *  Delay: '<S22>/Delay'
   *  Logic: '<S22>/LogicalOperator1'
   *  Logic: '<S22>/LogicalOperator2'
   *  Switch: '<S22>/Switch'
   *  Switch: '<S22>/Switch1'
   *
   * Block requirements for '<S22>/Switch2':
   *  1. SWREQ_03738 VehDrvDir False
   *
   * Block requirements for '<S22>/Switch':
   *  1. SWREQ_03736 VehDrvDir Forward
   *
   * Block requirements for '<S22>/Switch1':
   *  1. SWREQ_03737 VehDrvDir Backward
   */
  if (tmpRead_3 || !rtb_TmpSignalConversionAtR_aca4) {
    CtAp_VehSpd_ARID_DEF.Delay_DSTATE_p4ih = ((uint8_T)VehSpd_VehDrvDirInvld);
  } else if (rtb_RelationalOperator_apq0) {
    /* Delay: '<S22>/Delay' incorporates:
     *  Constant: '<S22>/Constant'
     *  Switch: '<S22>/Switch'
     *
     * Block requirements for '<S22>/Switch':
     *  1. SWREQ_03736 VehDrvDir Forward
     */
    CtAp_VehSpd_ARID_DEF.Delay_DSTATE_p4ih = ((uint8_T)VehSpd_ForWard);
  } else if (rtb_RelationalOperator) {
    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/Constant1'
     *  Delay: '<S22>/Delay'
     *  Switch: '<S22>/Switch'
     *
     * Block requirements for '<S22>/Switch1':
     *  1. SWREQ_03737 VehDrvDir Backward
     *
     * Block requirements for '<S22>/Switch':
     *  1. SWREQ_03736 VehDrvDir Forward
     */
    CtAp_VehSpd_ARID_DEF.Delay_DSTATE_p4ih = ((uint8_T)VehSpd_BackWard);
  } else {
    /* no actions */
  }

  /* End of Switch: '<S22>/Switch2' */
  /* End of Outputs for SubSystem: '<S8>/VehDrvDirCfmSys' */
  /* End of Outputs for SubSystem: '<S2>/VehMot_VehDrvDir' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo' */
  (void)Rte_Read_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo
    (&tmpRead_4);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_MCUSpeed'
   *
   * Block requirements for '<S2>/VehMot_MCUSpeed':
   *  1. SWREQ_03732 Speed ABS with MCU
   *  2. SWREQ_03734 TirRd Select 0.33415
   *  3. SWREQ_03735 TirRd Select 0.3322
   */
  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  SignalConversion generated from: '<S6>/DiagApp_TireRadiusInfo'
   *  Switch: '<S6>/Switch1'
   *
   * Block requirements for '<S6>/Switch':
   *  1. SWREQ_03734 TirRd Select 0.33415
   *
   * Block requirements for '<S6>/Switch1':
   *  1. SWREQ_03735 TirRd Select 0.3322
   */
  if (tmpRead_4 == ((uint8_T)VehSpd_U8Zero)) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/CAL2'
     *
     * Block requirements for '<S6>/Switch':
     *  1. SWREQ_03734 TirRd Select 0.33415
     */
    VehMot_VehTirRd_cm = VehSpd_VehTirRd_CFG1;
  } else if (tmpRead_4 == ((uint8_T)VehSpd_U8One)) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/CAL3'
     *  Switch: '<S6>/Switch'
     *
     * Block requirements for '<S6>/Switch1':
     *  1. SWREQ_03735 TirRd Select 0.3322
     *
     * Block requirements for '<S6>/Switch':
     *  1. SWREQ_03734 TirRd Select 0.33415
     */
    VehMot_VehTirRd_cm = VehMot_VehTirRd_CFG2;
  } else {
    /* no actions */
  }

  /* End of Switch: '<S6>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/VehMot_MCUSpeed' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg
    (&rtb_LogicalOperator_juzy);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus' */
  (void)
    Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus' */
  (void)Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(
    &tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_MCUSpeed'
   *
   * Block requirements for '<S2>/VehMot_MCUSpeed':
   *  1. SWREQ_03732 Speed ABS with MCU
   *  2. SWREQ_03734 TirRd Select 0.33415
   *  3. SWREQ_03735 TirRd Select 0.3322
   */
  /* Abs: '<S6>/Abs' */
  if (rtb_TmpSignalConversionAtRTE_R_ < 0) {
    rtb_TmpSignalConversionAtRTE_R_ = (int16_T)(-rtb_TmpSignalConversionAtRTE_R_);
  }

  /* Product: '<S6>/Divide2' incorporates:
   *  Abs: '<S6>/Abs'
   *  Constant: '<S6>/CAL'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant5'
   *  Constant: '<S6>/Constant6'
   *  Product: '<S6>/Divide'
   *  Product: '<S6>/Divide1'
   *  Product: '<S6>/Divide3'
   *  Product: '<S6>/Product'
   *  Product: '<S6>/Product1'
   *  Product: '<S6>/Product3'
   */
  rtb_Divide2 = ((((((VehSpd_Rd2Diam * VehMot_VehTirRd_cm) * 3.14159274F) *
                    (real32_T)rtb_TmpSignalConversionAtRTE_R_) / VehSpd_rpm2s) /
                  VehSpd_cm2m) * VehSpd_2h2km) / VehSpd_MCUSpdRat_CFG;

  /* Outputs for Atomic SubSystem: '<S6>/ATOM_SingleLPF' */
  /* Constant: '<S6>/CAL5' incorporates:
   *  Constant: '<S6>/CAL4'
   */
  rtb_Sum1 = CtAp_VehSpd_ATOM_SingleLPF(rtb_Divide2, VehSpd_MCUVehSpdLPFTc_CFG,
    VehSpd_CycleDt_CFG, &CtAp_VehSpd_ARID_DEF.ARID_DEF_ATOM_SingleLPF);

  /* End of Outputs for SubSystem: '<S6>/ATOM_SingleLPF' */
  /* End of Outputs for SubSystem: '<S2>/VehMot_MCUSpeed' */

  /* Outputs for Atomic SubSystem: '<S2>/VehMot_SpdCfmSys'
   *
   * Block requirements for '<S2>/VehMot_SpdCfmSys':
   *  1. SWREQ_03731 Speed ABS with IBS
   *  2. SWREQ_03732 Speed ABS with MCU
   *  3. SWREQ_03733 Spd False
   *  4. SWREQ_03742 VehStandstill On
   *  5. SWREQ_03743 VehStandstill Off
   */
  /* Logic: '<S7>/LogicalOperator3' incorporates:
   *  Logic: '<S7>/LogicalOperator5'
   *  Logic: '<S7>/LogicalOperator6'
   */
  rtb_TmpSignalConversionAtR_aca4 = (!tmpRead_2.ComM_ErrResMCU01E2ETimeoutInfo &&
    !tmpRead_1.ComM_ErrResMCU01CRCErrorInfo && rtb_TmpSignalConversionAtR_aca4);

  /* Logic: '<S7>/LogicalOperator' incorporates:
   *  Logic: '<S7>/LogicalOperator1'
   *  Logic: '<S7>/LogicalOperator2'
   */
  rtb_LogicalOperator_juzy = (!tmpRead_0.ComM_ErrResIBSSts03E2ETimeoutInfo &&
    !tmpRead.ComM_ErrResIBSSts03CRCErrorInfo && rtb_LogicalOperator_juzy);

  /* Switch: '<S7>/Switch' incorporates:
   *  Switch: '<S7>/Switch1'
   *
   * Block requirements for '<S7>/Switch':
   *  1. SWREQ_03731 Speed ABS with IBS
   *
   * Block requirements for '<S7>/Switch1':
   *  1. SWREQ_03732 Speed ABS with MCU
   */
  if (rtb_LogicalOperator_juzy) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Inport: '<Root>/RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph'
     *
     * Block requirements for '<S7>/Switch':
     *  1. SWREQ_03731 Speed ABS with IBS
     */
    (void)Rte_Read_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(&rtb_Switch);
  } else if (rtb_TmpSignalConversionAtR_aca4) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Switch: '<S7>/Switch'
     *
     * Block requirements for '<S7>/Switch1':
     *  1. SWREQ_03732 Speed ABS with MCU
     *
     * Block requirements for '<S7>/Switch':
     *  1. SWREQ_03731 Speed ABS with IBS
     */
    rtb_Switch = rtb_Sum1;
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/CAL'
     *  Switch: '<S7>/Switch1'
     *
     * Block requirements for '<S7>/Switch':
     *  1. SWREQ_03731 Speed ABS with IBS
     *
     * Block requirements for '<S7>/CAL':
     *  1. SWREQ_03733 Spd False
     *
     * Block requirements for '<S7>/Switch1':
     *  1. SWREQ_03732 Speed ABS with MCU
     */
    rtb_Switch = VehSpd_InvalidSpd_CFG;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Logic: '<S7>/LogicalOperator4'
   *
   * Block requirements for '<S7>/LogicalOperator4':
   *  1. SWREQ_03733 Spd False
   */
  rtb_LogicalOperator_juzy = (rtb_LogicalOperator_juzy ||
    rtb_TmpSignalConversionAtR_aca4);

  /* End of Outputs for SubSystem: '<S2>/VehMot_SpdCfmSys' */

  /* Outputs for Atomic SubSystem: '<S2>/VehMot_GearVehDirDif'
   *
   * Block requirements for '<S2>/VehMot_GearVehDirDif':
   *  1. SWREQ_03744 VehSpd Dif with Gear R
   *  2. SWREQ_03745 VehSpd Dif with Gear R Reset
   *  3. SWREQ_03746 VehSpd Dif with Gear D
   *  4. SWREQ_03747 VehSpd Dif with Gear D Reset
   *  5. SWREQ_03748 VehSpd Dif Confirm
   */
  /* Outport: '<Root>/RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg' incorporates:
   *  Logic: '<S4>/LogicalOperator6'
   *
   * Block requirements for '<S4>/LogicalOperator6':
   *  1. SWREQ_03748 VehSpd Dif Confirm
   */
  (void)Rte_Write_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg
    (VehMot_VehDirDifGearR_Flg || VehMot_VehDirDifGearD_Flg);

  /* End of Outputs for SubSystem: '<S2>/VehMot_GearVehDirDif' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum' incorporates:
   *  Delay: '<S22>/Delay'
   */
  (void)Rte_Write_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum
    (CtAp_VehSpd_ARID_DEF.Delay_DSTATE_p4ih);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_InterSpd'
   *
   * Block requirements for '<S2>/VehMot_InterSpd':
   *  1. SWREQ_03739 Speed Forward withVehichle Drive Direction Vaild
   *  2. SWREQ_03740 Speed Backward withVehichle Drive Direction Vaild
   *  3. SWREQ_03741 Speed with Vehichle Drive Direction False
   *  4. SWREQ_05621 SpeedABS False and Vehichle Drive Direction False
   */
  /* Chart: '<S5>/VehMot_InterSpdCfm' incorporates:
   *  Delay: '<S22>/Delay'
   */
  if (rtb_LogicalOperator_juzy) {
    if (CtAp_VehSpd_ARID_DEF.Delay_DSTATE_p4ih == ((uint8_T)VehSpd_BackWard)) {
      tmp = -rtb_Switch;
    } else {
      tmp = rtb_Switch;
    }
  } else {
    tmp = VehSpd_SingleZero;
  }

  /* Outport: '<Root>/RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' incorporates:
   *  Chart: '<S5>/VehMot_InterSpdCfm'
   */
  (void)Rte_Write_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(tmp);

  /* End of Outputs for SubSystem: '<S2>/VehMot_InterSpd' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph' */
  (void)Rte_Write_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(rtb_Switch);

  /* Outport: '<Root>/RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Write_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (rtb_LogicalOperator_juzy);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/VehMot_SpdCfmSys'
   *
   * Block requirements for '<S2>/VehMot_SpdCfmSys':
   *  1. SWREQ_03731 Speed ABS with IBS
   *  2. SWREQ_03732 Speed ABS with MCU
   *  3. SWREQ_03733 Spd False
   *  4. SWREQ_03742 VehStandstill On
   *  5. SWREQ_03743 VehStandstill Off
   */
  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  RelationalOperator: '<S21>/Compare'
   *
   * Block requirements for '<S7>/Constant':
   *  1. SWREQ_03742 VehStandstill On
   *
   * Block requirements for '<S7>/Constant1':
   *  1. SWREQ_03743 VehStandstill Off
   */
  if (rtb_Switch <= VehSpd_VehStdl_CFG) {
    rtb_LogicalOperator_juzy = VehSpd_True;
  } else {
    rtb_LogicalOperator_juzy = VehSpd_False;
  }

  /* Outport: '<Root>/RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' incorporates:
   *  Switch: '<S7>/Switch2'
   */
  (void)Rte_Write_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
    (rtb_LogicalOperator_juzy);

  /* End of Outputs for SubSystem: '<S2>/VehMot_SpdCfmSys' */

  /* Outputs for Atomic SubSystem: '<S2>/VehMot_MCUSpeed'
   *
   * Block requirements for '<S2>/VehMot_MCUSpeed':
   *  1. SWREQ_03732 Speed ABS with MCU
   *  2. SWREQ_03734 TirRd Select 0.33415
   *  3. SWREQ_03735 TirRd Select 0.3322
   */
  /* Outport: '<Root>/RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo' incorporates:
   *  SignalConversion generated from: '<S6>/DiagApp_TireRadiusInfo'
   */
  (void)Rte_Write_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo
    (tmpRead_4);

  /* Outport: '<Root>/RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo' incorporates:
   *  DataTypeConversion: '<S6>/DataTypeConversion'
   */
  (void)Rte_Write_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo
    (VehMot_VehTirRd_cm);

  /* End of Outputs for SubSystem: '<S2>/VehMot_MCUSpeed' */
  /* End of Outputs for SubSystem: '<Root>/R_VehSpd_Cyclic_10ms_sys' */
}

#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_VehSpd_START_SEC_VAR_CONST_8
#include "CtAp_VehSpd_MemMap.h"

void R_VehSpd_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  VehMot_VehTirRd_cm = 0.0F;
  VehMot_VehDirDifGearR_Flg = false;
  VehMot_VehDirDifGearD_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_VehSpd_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_VehSpd_T));
}

#define CtAp_VehSpd_STOP_SEC_VAR_CONST_8
#include "CtAp_VehSpd_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
