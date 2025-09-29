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
 *  Filename:           CtAp_AccrPedlDrv.c
 *  File Creation Date: 10-Sep-2025
 *  Model Name:         CtAp_AccrPedlDrv
 *  Model Version:      1.59
 *  Model Author:       Mike Ni - Fri Aug 16 09:57:59 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep 10 14:56:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 09:44:43 2025
 *
 *
 *******************************************************************************/
#include "CtAp_AccrPedlDrv.h"
#include "rtwtypes.h"
#include "CtAp_AccrPedlDrv_private.h"
#include <math.h>
#include "Rte_Type.h"
#include "CtAp_AccrPedlDrv_Glb.h"
#include "look2_iflf_binlca.h"
#include "look1_iflf_binlca.h"
#include "CtAp_AccrPedlDrv_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"

ARID_DEF_CtAp_AccrPedlDrv_T CtAp_AccrPedlDrv_ARID_DEF;

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S10>/ATOM_Limiter' */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

real32_T CtAp_AccrPedlDrv_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S15>/Switch' incorporates:
   *  RelationalOperator: '<S15>/RelationalOperator'
   *  RelationalOperator: '<S15>/RelationalOperator1'
   *  Switch: '<S15>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S15>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S15>/Switch' */
  return rty_Out_0;
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S11>/If'
 *    '<S9>/If1'
 */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

real32_T CtAp_AccrPedlDrv_If(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  real32_T rty_Out1_0;

  /* Switch: '<S16>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S16>/Switch' */
  return rty_Out1_0;
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* System initialize for atomic system: '<S14>/ATOM_RS_FF' */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

void CtAp_AccrPedlDr_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_Accr_T *CtAp_AccrPedlDrv__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_AccrPedlDrv__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Output and update for atomic system: '<S14>/ATOM_RS_FF' */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

boolean_T CtAp_AccrPedlDrv_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_Accr_T *CtAp_AccrPedlDrv__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S17>/LogOp2' incorporates:
   *  Logic: '<S17>/LogOp'
   *  Logic: '<S17>/LogOp4'
   *  UnitDelay: '<S17>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S ||
                        CtAp_AccrPedlDrv__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S17>/UnitDelay1' */
  CtAp_AccrPedlDrv__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Output and update for atomic system: '<S14>/LowPassFilter' */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

real32_T CtAp_AccrPedlDrv_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_A_T
  *CtAp_AccrPedlDrv__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;

  /* Sum: '<S18>/Sum3' incorporates:
   *  Product: '<S18>/Prd3'
   *  Product: '<S18>/Prd4'
   *  Sum: '<S18>/Sum4'
   *  UnitDelay: '<S18>/Delay'
   */
  rty_DataOutput_0 = ((rtu_TSample_C / rtu_TimeCnst_C) * (rtu_DataInput -
    CtAp_AccrPedlDrv__ARID_DEF_arg->Delay_DSTATE)) +
    CtAp_AccrPedlDrv__ARID_DEF_arg->Delay_DSTATE;

  /* Update for UnitDelay: '<S18>/Delay' */
  CtAp_AccrPedlDrv__ARID_DEF_arg->Delay_DSTATE = rty_DataOutput_0;
  return rty_DataOutput_0;
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Output and update for atomic system: '<S9>/If' */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

void CtAp_AccrPedlDrv_If_mzvr(boolean_T rtu_if, real32_T rtu_then, real32_T
  rtu_else)
{
  /* Switch: '<S19>/Switch' */
  if (rtu_if) {
    /* Switch: '<S19>/Switch' */
    ChassisMgmt_AccrPedlVehSpd_kph = rtu_then;
  } else {
    /* Switch: '<S19>/Switch' */
    ChassisMgmt_AccrPedlVehSpd_kph = rtu_else;
  }

  /* End of Switch: '<S19>/Switch' */
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_AccrPedlDrv_START_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

void R_AccrPedlDrv_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Product;
  real32_T rtb_Switch;
  real32_T ChassisMgmt_PrevAccrPedlDrvModDesTq_Nm;
  real32_T ChassisMgmt_AccrPedlDrvDesLmtTq_Nm;
  real32_T ChassisMgmt_AccrPedlDrvModSwTqLpfTim_s;
  real32_T ChassisMgmt_AccrPedalDesLpfFilTq_Nm;
  real32_T rtb_Sum3;
  real32_T ChassisMgmt_AccrPedalDesNoFilTq_Nm;
  real32_T rtb_Switch_dwoe;
  real32_T rtb_Switch_dv0j;
  real32_T rtb_VehMot_VehSpd_kph;
  boolean_T rtb_RelationalOperator;
  boolean_T ChassisMgmt_AccrPedlDrvModSwtLpfTqExit_Flg;
  boolean_T ChassisMgmt_AccrPedlDrvModSwtLpfTqEnty_Flg;
  boolean_T ChassisMgmt_AccrPedlDrvModSwtLpfTqActv_Flg;
  boolean_T rtb_LogOp2;
  boolean_T rtb_RelationalOperator1_nnmh;
  boolean_T rtb_VehMot_VehDirDif_Flg;
  dt_FctSftyMon_AccrPedlTqOverFltInfo tmpRead_1;
  real32_T rtb_Abs;
  real32_T tmpRead_0;
  uint8_T tmpRead_2;
  uint8_T tmpRead_3;
  uint8_T tmpRead_4;
  uint8_T tmpRead_5;
  boolean_T rtb_RelationalOperator_a5n5;
  boolean_T tmpRead;

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (&rtb_RelationalOperator_a5n5);

  /* SignalConversion: '<S4>/SignalCopy9' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
    (&rtb_VehMot_VehSpd_kph);

  /* SignalConversion: '<S4>/SignalCopy8' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg
    (&rtb_VehMot_VehDirDif_Flg);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus' */
  (void)
    Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_CoastCtrlTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_CoastCtrlTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm(
    &tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg
    (&tmpRead);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct
    (&rtb_Abs);

  /* Outputs for Atomic SubSystem: '<Root>/R_AccrPedlDrv_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Fun_AcceleratePedalDrive' */
  /* Outputs for Atomic SubSystem: '<S6>/Accelerate_Pedal_Drive_Status'
   *
   * Block requirements for '<S6>/Accelerate_Pedal_Drive_Status':
   *  1. SWREQ_01422 Driver desired torque Mode Active
   *  2. SWREQ_01423 Driver desired  drive torque Mode InActive
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* Logic: '<S7>/LogicalOperator1' incorporates:
   *  Constant: '<S7>/AccrPedlDrv_DRIVEREADY'
   *  Logic: '<S7>/LogicalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy10'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  SignalConversion generated from: '<S4>/Bus Selector'
   */
  ChassisMgmt_AccrPedlDrvModActv_Flg = ((tmpRead_5 == ((uint8_T)
    AccrPedlDrv_DRIVEREADY)) &&
    !tmpRead_1.FctSftyMon_ErrResAccrPedlTqOverFltInfo &&
    rtb_RelationalOperator_a5n5 && tmpRead);

  /* End of Outputs for SubSystem: '<S6>/Accelerate_Pedal_Drive_Status' */

  /* Outputs for Atomic SubSystem: '<S6>/Vehicle_Speed_Used'
   *
   * Block requirements for '<S6>/Vehicle_Speed_Used':
   *  1. SWREQ_01424 Vehicle speed use
   *  2. SWREQ_01425 Vehicle speed use Gear R
   *  3. SWREQ_01426 Vehicle speed use Gear D
   */
  /* RelationalOperator: '<S9>/RelationalOperator' incorporates:
   *  Constant: '<S9>/AccrPedlDrv_GEAR_R'
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  rtb_RelationalOperator = (tmpRead_2 == ((uint8_T)AccrPedlDrv_GEAR_R));

  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/AccrPedlDrv_SPEED_COEFFICENT'
   */
  rtb_Product = rtb_VehMot_VehSpd_kph * AccrPedlDrv_SPEED_COEFFICENT;

  /* Outputs for Atomic SubSystem: '<S9>/If1' */
  rtb_Switch = CtAp_AccrPedlDrv_If(rtb_RelationalOperator, rtb_Product,
    rtb_VehMot_VehSpd_kph);

  /* End of Outputs for SubSystem: '<S9>/If1' */

  /* Outputs for Atomic SubSystem: '<S9>/If' */
  /* Constant: '<S9>/AccrPedlDrv_ZERO_SPEED' */
  CtAp_AccrPedlDrv_If_mzvr(rtb_VehMot_VehDirDif_Flg, AccrPedlDrv_ZERO_SPEED,
    rtb_Switch);

  /* End of Outputs for SubSystem: '<S9>/If' */
  /* End of Outputs for SubSystem: '<S6>/Vehicle_Speed_Used' */

  /* Outputs for Atomic SubSystem: '<S6>/Accelerate_Pedal_Drive_Torque_Calculate' */
  /* Outputs for Atomic SubSystem: '<S8>/DriveMode_GearD'
   *
   * Block requirements for '<S8>/DriveMode_GearD':
   *  1. SWREQ_01427 AP  Gear D drive mode Sport torque request
   *  2. SWREQ_01428 AP  Gear D drive mode torque request
   *  3. SWREQ_01429 AP  Gear D drive mode torque request
   *  4. SWREQ_01430 AP  Gear D drive mode torque request
   *  5. SWREQ_01432 AP  drive mode torque request
   *  6. SWREQ_01433 driver mode torque request
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  switch (tmpRead_3) {
   case 0:
    /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
     *  Constant: '<S12>/AccrPedlDrv_ZERO_TORQUE'
     */
    ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = AccrPedlDrv_ZERO_TORQUE;
    break;

   case 1:
    /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
     *  Lookup_n-D: '<S12>/ChassisMgmt_AccrPedlDrvModEcoDesTq_MAP'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = look2_iflf_binlca
      (ChassisMgmt_AccrPedlVehSpd_kph, rtb_Abs,
       &ChassisMgmt_AccrPedlDrvModReqTqGearDY_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearDX_MAP[0],
       &ChassisMgmt_AccrPedlDrvModEcoDesTq_MAP[0],
       CtAp_AccrPedlDrv_ConstP.pooled2, 20U);
    break;

   case 2:
    /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
     *  Lookup_n-D: '<S12>/ChassisMgmt_AccrPedlDrvModNormDesTq_MAP'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = look2_iflf_binlca
      (ChassisMgmt_AccrPedlVehSpd_kph, rtb_Abs,
       &ChassisMgmt_AccrPedlDrvModReqTqGearDY_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearDX_MAP[0],
       &ChassisMgmt_AccrPedlDrvModNormDesTq_MAP[0],
       CtAp_AccrPedlDrv_ConstP.pooled2, 20U);
    break;

   case 3:
    /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
     *  Lookup_n-D: '<S12>/ChassisMgmt_AccrPedlDrvModSptDesTq_MAP'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = look2_iflf_binlca
      (ChassisMgmt_AccrPedlVehSpd_kph, rtb_Abs,
       &ChassisMgmt_AccrPedlDrvModReqTqGearDY_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearDX_MAP[0],
       &ChassisMgmt_AccrPedlDrvModSptDesTq_MAP[0],
       CtAp_AccrPedlDrv_ConstP.pooled2, 20U);
    break;

   default:
    /* MultiPortSwitch: '<S12>/MultiportSwitch' incorporates:
     *  Lookup_n-D: '<S12>/ChassisMgmt_AccrPedlDrvModOPDesTq_MAP'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = look2_iflf_binlca
      (ChassisMgmt_AccrPedlVehSpd_kph, rtb_Abs,
       &ChassisMgmt_AccrPedlDrvModReqTqGearDY_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearDX_MAP[0],
       &ChassisMgmt_AccrPedlDrvModOPDesTq_MAP[0],
       CtAp_AccrPedlDrv_ConstP.pooled2, 20U);
    break;
  }

  /* End of MultiPortSwitch: '<S12>/MultiportSwitch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */

  /* Outputs for Atomic SubSystem: '<S8>/DriveMode_GearR'
   *
   * Block requirements for '<S8>/DriveMode_GearR':
   *  1. SWREQ_01431 AP  Gear R drive mode torque request
   */
  /* Switch: '<S12>/Switch' incorporates:
   *  Switch: '<S13>/Switch'
   */
  if (ChassisMgmt_AccrPedlDrvModActv_Flg) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
     *
     * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
     *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
     */
    /* Switch: '<S12>/Switch' incorporates:
     *  SignalConversion: '<S4>/SignalCopy2'
     *  Sum: '<S12>/Add'
     */
    ChassisMgmt_AccrPedlDrvDesFwdTq_Nm = ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm +
      tmpRead_0;

    /* Switch: '<S13>/Switch' incorporates:
     *  Lookup_n-D: '<S13>/ChassisMgmt_AccrPedlDrvModReqTqGearR_MAP'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S19>/Switch'
     */
    ChassisMgmt_AccrPedlDrvDesRvsTq_Nm = look2_iflf_binlca
      (ChassisMgmt_AccrPedlVehSpd_kph, rtb_Abs,
       &ChassisMgmt_AccrPedlDrvModReqTqGearRY_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearRX_MAP[0],
       &ChassisMgmt_AccrPedlDrvModReqTqGearR_MAP[0],
       CtAp_AccrPedlDrv_ConstP.pooled2, 20U);

    /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */
  } else {
    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/AccrPedlDrv_ZERO_TORQUE1'
     */
    ChassisMgmt_AccrPedlDrvDesFwdTq_Nm = AccrPedlDrv_ZERO_TORQUE;

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/AccrPedlDrv_ZERO_TORQUE'
     */
    ChassisMgmt_AccrPedlDrvDesRvsTq_Nm = AccrPedlDrv_ZERO_TORQUE;
  }

  /* End of Switch: '<S12>/Switch' */
  /* End of Outputs for SubSystem: '<S8>/DriveMode_GearR' */
  /* End of Outputs for SubSystem: '<S8>/DriveMode_GearD' */

  /* Outputs for Atomic SubSystem: '<S8>/Accelerate_Pedal_Drive_Torque_Management'
   *
   * Block requirements for '<S8>/Accelerate_Pedal_Drive_Torque_Management':
   *  1. SWREQ_01433 driver mode torque request
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/AccrPedlDrv_GEAR_R'
   *  Constant: '<S11>/AccrPedlDrv_ZERO_TORQUE'
   *  RelationalOperator: '<S11>/RelationalOperator'
   *  SignalConversion: '<S4>/SignalCopy4'
   */
  if (tmpRead_2 == ((uint8_T)AccrPedlDrv_GEAR_R)) {
    /* Switch: '<S11>/Switch' */
    ChassisMgmt_AccrPedalDesNoFilTq_Nm = ChassisMgmt_AccrPedlDrvDesRvsTq_Nm;
  } else {
    /* RelationalOperator: '<S11>/RelationalOperator1' incorporates:
     *  Constant: '<S11>/Gear AccrPedlDrv_GEAR_D'
     */
    rtb_RelationalOperator1_nnmh = (tmpRead_2 == ((uint8_T)AccrPedlDrv_GEAR_D));

    /* Outputs for Atomic SubSystem: '<S11>/If' */
    rtb_Switch_dwoe = CtAp_AccrPedlDrv_If(rtb_RelationalOperator1_nnmh,
      ChassisMgmt_AccrPedlDrvDesFwdTq_Nm, AccrPedlDrv_ZERO_TORQUE);

    /* End of Outputs for SubSystem: '<S11>/If' */

    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/AccrPedlDrv_ZERO_TORQUE'
     */
    ChassisMgmt_AccrPedalDesNoFilTq_Nm = rtb_Switch_dwoe;
  }

  /* End of Switch: '<S11>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */
  /* End of Outputs for SubSystem: '<S8>/Accelerate_Pedal_Drive_Torque_Management' */

  /* UnitDelay: '<S8>/Delay1' */
  ChassisMgmt_PrevAccrPedlDrvModDesTq_Nm =
    CtAp_AccrPedlDrv_ARID_DEF.ChassisMgmt_PrevAccrPedlDrvModD;

  /* Outputs for Atomic SubSystem: '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter'
   *
   * Block requirements for '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter':
   *  1. SWREQ_01434 Torque filter and limit
   */
  /* Sum: '<S14>/Subtract' */
  ChassisMgmt_AccrPedlDrvModDesDifTq_Nm = ChassisMgmt_AccrPedalDesNoFilTq_Nm -
    ChassisMgmt_PrevAccrPedlDrvModDesTq_Nm;

  /* Abs: '<S14>/Abs' */
  rtb_Abs = fabsf(ChassisMgmt_AccrPedlDrvModDesDifTq_Nm);

  /* RelationalOperator: '<S14>/Relational Operator3' incorporates:
   *  Constant: '<S14>/ChassisMgmt_AccrPedlDrvModSwtLpfActvDiffTq_CFG'
   */
  ChassisMgmt_AccrPedlDrvModSwtLpfTqExit_Flg = (rtb_Abs <=
    ChassisMgmt_AccrPedlDrvModSwtLpfActvDifTq_CFG);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* RelationalOperator: '<S14>/RelationalOperator' incorporates:
   *  SignalConversion: '<S4>/SignalCopy5'
   *  UnitDelay: '<S14>/Delay'
   */
  rtb_RelationalOperator_a5n5 = (tmpRead_3 !=
    CtAp_AccrPedlDrv_ARID_DEF.Delay_DSTATE);

  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */

  /* UnitDelay: '<S14>/Delay2' incorporates:
   *  UnitDelay: '<S14>/Delay'
   */
  CtAp_AccrPedlDrv_ARID_DEF.Delay_DSTATE =
    CtAp_AccrPedlDrv_ARID_DEF.Delay2_DSTATE;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* Logic: '<S14>/Logical Operator' incorporates:
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  SignalConversion: '<S4>/SignalCopy6'
   *  UnitDelay: '<S14>/Delay'
   */
  ChassisMgmt_AccrPedlDrvModSwtLpfTqEnty_Flg = (rtb_RelationalOperator_a5n5 ||
    (tmpRead_4 != CtAp_AccrPedlDrv_ARID_DEF.Delay_DSTATE));

  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */

  /* Outputs for Atomic SubSystem: '<S14>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_AccrPedlDrv_ATOM_RS_FF
    (ChassisMgmt_AccrPedlDrvModSwtLpfTqExit_Flg,
     ChassisMgmt_AccrPedlDrvModSwtLpfTqEnty_Flg,
     &CtAp_AccrPedlDrv_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S14>/ATOM_RS_FF' */

  /* SignalConversion generated from: '<S14>/ATOM_RS_FF' */
  ChassisMgmt_AccrPedlDrvModSwtLpfTqActv_Flg = rtb_LogOp2;

  /* Switch: '<S14>/Switch2' */
  if (ChassisMgmt_AccrPedlDrvModSwtLpfTqActv_Flg) {
    /* Switch: '<S14>/Switch2' incorporates:
     *  Abs: '<S14>/Abs'
     *  Lookup_n-D: '<S14>/ChassisMgmt_AccrPedlDrvModSwtTqLpfTim_LUT'
     */
    ChassisMgmt_AccrPedlDrvModSwTqLpfTim_s = look1_iflf_binlca(rtb_Abs,
      &ChassisMgmt_AccrPedlDrvModSwtDifTqX_LUT[0],
      &ChassisMgmt_AccrPedlDrvModSwtTqLpfTim_LUT[0], 6U);
  } else {
    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S14>/ChassisMgmt_AccrPedlDrvModTqLpfCoeff_CFG'
     */
    ChassisMgmt_AccrPedlDrvModSwTqLpfTim_s =
      ChassisMgmt_AccrPedlDrvModLpfTim_CFG;
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Outputs for Atomic SubSystem: '<S14>/LowPassFilter' */
  /* Constant: '<S14>/AccrPedlDrv_SAMPLE_TIME' */
  rtb_Sum3 = CtAp_AccrPedlDrv_LowPassFilter(ChassisMgmt_AccrPedalDesNoFilTq_Nm,
    ChassisMgmt_AccrPedlDrvModSwTqLpfTim_s, AccrPedlDrv_SAMPLE_TIME,
    &CtAp_AccrPedlDrv_ARID_DEF.ARID_DEF_LowPassFilter);

  /* End of Outputs for SubSystem: '<S14>/LowPassFilter' */

  /* SignalConversion generated from: '<S14>/LowPassFilter' */
  ChassisMgmt_AccrPedalDesLpfFilTq_Nm = rtb_Sum3;

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Input'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Input':
   *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
   */
  /* Update for UnitDelay: '<S14>/Delay' incorporates:
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  CtAp_AccrPedlDrv_ARID_DEF.Delay_DSTATE = tmpRead_3;

  /* Update for UnitDelay: '<S14>/Delay2' incorporates:
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  CtAp_AccrPedlDrv_ARID_DEF.Delay2_DSTATE = tmpRead_4;

  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Input' */
  /* End of Outputs for SubSystem: '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter' */

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_Limiter' */
  /* Constant: '<S10>/ChassisMgmt_AccrPedlDrvDesTqMax_CFG' incorporates:
   *  Constant: '<S10>/ChassisMgmt_AccrPedlDrvDesTqMin_CFG'
   */
  rtb_Switch_dv0j = CtAp_AccrPedlDrv_ATOM_Limiter
    (ChassisMgmt_AccrPedlDrvDesTqMax_CFG, ChassisMgmt_AccrPedalDesLpfFilTq_Nm,
     ChassisMgmt_AccrPedlDrvDesTqMin_CFG);

  /* End of Outputs for SubSystem: '<S10>/ATOM_Limiter' */

  /* SignalConversion generated from: '<S10>/ATOM_Limiter' */
  ChassisMgmt_AccrPedlDrvDesLmtTq_Nm = rtb_Switch_dv0j;

  /* Switch: '<S10>/Switch' */
  if (ChassisMgmt_AccrPedlDrvModActv_Flg) {
    /* Switch: '<S10>/Switch' */
    ChassisMgmt_AccrPedlDesTq_Nm = ChassisMgmt_AccrPedlDrvDesLmtTq_Nm;
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/AccrPedlDrv_ZERO_TORQUE2'
     */
    ChassisMgmt_AccrPedlDesTq_Nm = AccrPedlDrv_ZERO_TORQUE;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Update for UnitDelay: '<S8>/Delay1' */
  CtAp_AccrPedlDrv_ARID_DEF.ChassisMgmt_PrevAccrPedlDrvModD =
    ChassisMgmt_AccrPedalDesLpfFilTq_Nm;

  /* End of Outputs for SubSystem: '<S6>/Accelerate_Pedal_Drive_Torque_Calculate' */
  /* End of Outputs for SubSystem: '<S2>/Fun_AcceleratePedalDrive' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_AccrPedlDrv_Output'
   *
   * Block requirements for '<S2>/CtAp_AccrPedlDrv_Output':
   *  1. SWREQ_01418 The function of "Accelerate pedal Drive" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (ChassisMgmt_AccrPedlDesTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_AccrPedlDrv_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_AccrPedlDrv_Cyclic_10ms_sys' */
}

#define CtAp_AccrPedlDrv_STOP_SEC_CODE
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_AccrPedlDrv_START_SEC_VAR_CONST_8
#include "CtAp_AccrPedlDrv_MemMap.h"

void R_AccrPedlDrv_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_AccrPedlDesTq_Nm = 0.0F;
  ChassisMgmt_AccrPedlDrvModDesDifTq_Nm = 0.0F;
  ChassisMgmt_AccrPedlDrvDesRvsTq_Nm = 0.0F;
  ChassisMgmt_AccrPedlDrvDesFwdPrpTq_Nm = 0.0F;
  ChassisMgmt_AccrPedlDrvDesFwdTq_Nm = 0.0F;
  ChassisMgmt_AccrPedlDrvModActv_Flg = false;
  ChassisMgmt_AccrPedlVehSpd_kph = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_AccrPedlDrv_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_AccrPedlDrv_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_AccrPedlDrv_Cyclic_10ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S2>/Fun_AcceleratePedalDrive' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/Accelerate_Pedal_Drive_Torque_Calculate' */
  /* SystemInitialize for Atomic SubSystem: '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter'
   *
   * Block requirements for '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter':
   *  1. SWREQ_01434 Torque filter and limit
   */
  /* SystemInitialize for Atomic SubSystem: '<S14>/ATOM_RS_FF' */
  CtAp_AccrPedlDr_ATOM_RS_FF_Init(false,
    &CtAp_AccrPedlDrv_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S14>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter' */
  /* End of SystemInitialize for SubSystem: '<S6>/Accelerate_Pedal_Drive_Torque_Calculate' */
  /* End of SystemInitialize for SubSystem: '<S2>/Fun_AcceleratePedalDrive' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_AccrPedlDrv_Cyclic_10ms_sys' */
}

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_CONST_8
#include "CtAp_AccrPedlDrv_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
