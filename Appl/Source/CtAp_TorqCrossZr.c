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
 *  Filename:           CtAp_TorqCrossZr.c
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_TorqCrossZr
 *  Model Version:      1.91
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 09:25:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 09:22:59 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqCrossZr.h"
#include "rtwtypes.h"
#include "CtAp_TorqCrossZr_private.h"
#include <math.h>
#include "CtAp_TorqCrossZr_Glb.h"
#include "look1_iflf_binlca.h"
#include "look2_iflf_binlca.h"
#include "CtAp_TorqCrossZr_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_TorqCrossZr_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static real32_T TorqCrossZr_GrdtMaxZrCrssDasNegTq_Nm;
                             /* '<S16>/TorqPahMgmt_GrdtMaxZrCrssNegDasTq_MAP' */

/* TorqMgmt GrdtMaxZrCrssDasNegTq Nm */
static real32_T TorqCrossZr_PrevDesFildTq_Nm;/* '<S4>/Delay' */

/* The filtered desired torqueis calculated by a smoothing of prefiltered desired propulsion torque on primary axle in a way that the transition from overrun to pull (and vice versa) is performed as smooth as possible and the approximation of filtered desired primary axle torque to the target value of prefiltered desired propulsion torque on primary axle is made as smooth as possible. */
static real32_T TorqCrossZr_VehSpdAbs_kph;/* '<S9>/Abs' */

/* vehicle speed abs */
#define CtAp_TorqCrossZr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqCrossZr_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"

ARID_DEF_CtAp_TorqCrossZr_T CtAp_TorqCrossZr_ARID_DEF;

#define CtAp_TorqCrossZr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S13>/ATOM_Limiter' */
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

void CtAp_TorqCrossZr_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  /* Switch: '<S14>/Switch' incorporates:
   *  RelationalOperator: '<S14>/RelationalOperator'
   *  RelationalOperator: '<S14>/RelationalOperator1'
   *  Switch: '<S14>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    /* Switch: '<S14>/Switch' */
    TorqPahMgmt_DeltaZrCrssTq_Nm = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Switch: '<S14>/Switch'
     */
    TorqPahMgmt_DeltaZrCrssTq_Nm = rtu_In;
  } else {
    /* Switch: '<S14>/Switch' incorporates:
     *  Switch: '<S14>/Switch1'
     */
    TorqPahMgmt_DeltaZrCrssTq_Nm = rtu_MIN;
  }

  /* End of Switch: '<S14>/Switch' */
}

#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

/* Output and update for atomic system: '<S10>/ATOM_RateRampLmt' */
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

real32_T CtAp_TorqCross_ATOM_RateRampLmt(real32_T rtu_demand, real32_T
  rtu_rise_rate, real32_T rtu_fall_rate, real32_T rtu_dt,
  ARID_DEF_ATOM_RateRampLmt_CtA_T *CtAp_TorqCrossZr__ARID_DEF_arg)
{
  real32_T rty_output_0;

  /* Switch: '<S15>/Switch' incorporates:
   *  Delay: '<S15>/Delay'
   *  MinMax: '<S15>/MinMax'
   *  MinMax: '<S15>/MinMax1'
   *  Product: '<S15>/Product2'
   *  Product: '<S15>/Product3'
   *  RelationalOperator: '<S15>/Relational Operator1'
   *  Sum: '<S15>/Sum'
   *  Sum: '<S15>/Sum1'
   */
  if (rtu_demand > CtAp_TorqCrossZr__ARID_DEF_arg->Delay_DSTATE) {
    rty_output_0 = fminf(rtu_demand, (rtu_dt * rtu_rise_rate) +
                         CtAp_TorqCrossZr__ARID_DEF_arg->Delay_DSTATE);
  } else {
    rty_output_0 = fmaxf(rtu_demand,
                         CtAp_TorqCrossZr__ARID_DEF_arg->Delay_DSTATE - (rtu_dt *
      rtu_fall_rate));
  }

  /* End of Switch: '<S15>/Switch' */

  /* Update for Delay: '<S15>/Delay' */
  CtAp_TorqCrossZr__ARID_DEF_arg->Delay_DSTATE = rty_output_0;
  return rty_output_0;
}

#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

void R_TorqCrossZr_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T TorqCrossZr_DesLpFildTq_Nm;
  real32_T TorqCrossZr_VehSpd_kph;
  real32_T rtb_TorqPahMgmt_DeltaZrCrssTq_N;
  uint8_T TorqCrossZr_ActGear_Enum;
  uint8_T TorqCrossZr_ActDrvMod_Enum;
  uint8_T TorqCrossZr_ActRgnSts_Enum;
  boolean_T TorqCrossZr_DrvDmdHiPrio_Flg;
  real32_T rtb_TorqPahMgmt_DrvgModGrd_dwfq;
  boolean_T rtb_TorqCrossZr_IBSTorqActv_Flg;
  boolean_T rtb_TorqCrossZr_NotDrvMod_Flg;
  boolean_T tmpRead;

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
    (&rtb_TorqCrossZr_IBSTorqActv_Flg);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
    (&rtb_TorqCrossZr_NotDrvMod_Flg);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg
    (&tmpRead);

  /* SignalConversion: '<S5>/SignalCopy5' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
    (&TorqCrossZr_VehSpd_kph);

  /* SignalConversion: '<S5>/SignalCopy4' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm'
   */
  (void)Rte_Read_RTE_R_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm
    (&TorqCrossZr_DesLpFildTq_Nm);

  /* SignalConversion: '<S5>/SignalCopy3' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum
    (&TorqCrossZr_ActRgnSts_Enum);

  /* SignalConversion: '<S5>/SignalCopy2' incorporates:
   *  Inport: '<Root>/RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum'
   */
  (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
    (&TorqCrossZr_ActDrvMod_Enum);

  /* SignalConversion: '<S5>/SignalCopy1' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&TorqCrossZr_ActGear_Enum);

  /* SignalConversion: '<S5>/SignalCopy' incorporates:
   *  Inport: '<Root>/RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg'
   */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg
    (&TorqCrossZr_DrvDmdHiPrio_Flg);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqCrossZr_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_TorqueZeroCrossingFormer' */
  /* Logic: '<S7>/LogicalOperator' incorporates:
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  rtb_TorqCrossZr_IBSTorqActv_Flg = (tmpRead || rtb_TorqCrossZr_NotDrvMod_Flg ||
    rtb_TorqCrossZr_IBSTorqActv_Flg);

  /* Outputs for Atomic SubSystem: '<S4>/Reach_Target_Torque_Gradient' */
  /* Sum: '<S13>/Subtract' incorporates:
   *  UnitDelay: '<S4>/Delay'
   */
  rtb_TorqPahMgmt_DeltaZrCrssTq_N = TorqCrossZr_DesLpFildTq_Nm -
    TorqCrossZr_PrevDesFildTq_Nm;

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_Limiter' */
  /* Constant: '<S13>/TorqCrossZr_MAX_TORQUE' incorporates:
   *  Constant: '<S13>/TorqCrossZr_MIN_TORQUE'
   */
  CtAp_TorqCrossZr_ATOM_Limiter(TorqCrossZr_MAX_TORQUE,
    rtb_TorqPahMgmt_DeltaZrCrssTq_N, TorqCrossZr_MIN_TORQUE);

  /* End of Outputs for SubSystem: '<S13>/ATOM_Limiter' */

  /* Outputs for Atomic SubSystem: '<S8>/DrvgMod_ReaTar'
   *
   * Block requirements for '<S8>/DrvgMod_ReaTar':
   *  1. SWREQ_01822 Reach Target Torque Gradient ECO
   *  2. SWREQ_01823 Reach Target Torque Gradient Normal
   *  3. SWREQ_01824 Reach Target Torque Gradient Sport
   *  4. SWREQ_01825 Reach Target Torque Gradient One Pedal
   *  5. SWREQ_01826 Reach Target Torque Gradient GearR
   *  6. SWREQ_01827 Reach Target Torque Gradient Init
   *  7. SWREQ_01828 Reach Target Torque Gradient OFF
   *  8. SWREQ_01829 Reach Target Torque Gradient Low
   *  9. SWREQ_01830 Reach Target Torque Gradient Middle
   *  10. SWREQ_01831 Reach Target Torque Gradient High
   *  11. SWREQ_01832 Reach Target Torque Gradient GearR
   *  12. SWREQ_01833 Reach Target Torque Gradient Init
   *  13. SWREQ_06716 Reach Target Torque Gradient ADAS and Brake
   *  14. SWREQ_06717 Reach Target Torque Gradient ADAS and Brake
   */
  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/TorqCrossZr_GEAR_D'
   *  Constant: '<S12>/TorqCrossZr_GEAR_R'
   *  RelationalOperator: '<S12>/RelationalOperator'
   *  RelationalOperator: '<S12>/RelationalOperator10'
   *  Switch: '<S12>/Switch10'
   *  Switch: '<S12>/Switch12'
   *  Switch: '<S12>/Switch5'
   */
  if (rtb_TorqCrossZr_IBSTorqActv_Flg) {
    /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
     *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT1'
     *  Switch: '<S14>/Switch'
     */
    TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
      (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarTqDrvAsscX_LUT[0],
       &TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT[0], 8U);

    /* Switch: '<S12>/Switch5' */
    TorqPahMgmt_GrdtReaTarNegTq_Nm = TorqPahMgmt_GrdtReaTarPosTq_Nm;
  } else {
    if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_R)) {
      /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
       *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqGearRvs_LUT'
       *  Switch: '<S12>/Switch'
       *  Switch: '<S12>/Switch10'
       *  Switch: '<S14>/Switch'
       */
      TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
        (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarTqGearRvsX_LUT[0],
         &TorqPahMgmt_GrdtReaTarTqGearRvs_LUT[0], 8U);
    } else if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_D)) {
      /* Switch: '<S12>/Switch1' incorporates:
       *  Constant: '<S12>/TorqCrossZr_ECO'
       *  Constant: '<S12>/TorqCrossZr_NORMAL'
       *  Constant: '<S12>/TorqCrossZr_SPORT'
       *  RelationalOperator: '<S12>/RelationalOperator1'
       *  RelationalOperator: '<S12>/RelationalOperator2'
       *  RelationalOperator: '<S12>/RelationalOperator3'
       *  Switch: '<S12>/Switch10'
       *  Switch: '<S12>/Switch12'
       *  Switch: '<S12>/Switch2'
       *  Switch: '<S12>/Switch3'
       */
      if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_ECO)) {
        /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarPosTqEco_LUT'
         *  Switch: '<S12>/Switch'
         *  Switch: '<S12>/Switch1'
         *  Switch: '<S12>/Switch12'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarPosTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarPosTqEco_LUT[0], 8U);
      } else if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_NORMAL)) {
        /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtMaxZrCrssPosTqNor_LUT'
         *  Switch: '<S12>/Switch'
         *  Switch: '<S12>/Switch2'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarPosTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarPosTqNor_LUT[0], 8U);
      } else if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_SPORT)) {
        /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarPosTqSpt_LUT'
         *  Switch: '<S12>/Switch'
         *  Switch: '<S12>/Switch2'
         *  Switch: '<S12>/Switch3'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarPosTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarPosTqSpt_LUT[0], 8U);
      } else {
        /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarPosTqOnePedl_LUT'
         *  Switch: '<S12>/Switch'
         *  Switch: '<S12>/Switch2'
         *  Switch: '<S12>/Switch3'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarPosTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarPosTqOnePedl_LUT[0], 8U);
      }

      /* End of Switch: '<S12>/Switch1' */
    } else {
      /* Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqDrvAssc_LUT' incorporates:
       *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTq_LUT'
       *  Switch: '<S12>/Switch'
       *  Switch: '<S12>/Switch10'
       *  Switch: '<S12>/Switch12'
       *  Switch: '<S14>/Switch'
       */
      TorqPahMgmt_GrdtReaTarPosTq_Nm = look1_iflf_binlca
        (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarTqX_LUT[0],
         &TorqPahMgmt_GrdtReaTarTq_LUT[0], 8U);
    }

    /* Switch: '<S12>/Switch11' incorporates:
     *  Constant: '<S12>/TorqCrossZr_GEAR_D'
     *  Constant: '<S12>/TorqCrossZr_GEAR_D1'
     *  Constant: '<S12>/TorqCrossZr_GEAR_R1'
     *  RelationalOperator: '<S12>/RelationalOperator10'
     *  RelationalOperator: '<S12>/RelationalOperator5'
     *  RelationalOperator: '<S12>/RelationalOperator9'
     *  Switch: '<S12>/Switch10'
     *  Switch: '<S12>/Switch12'
     *  Switch: '<S12>/Switch9'
     */
    if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_R)) {
      /* Switch: '<S12>/Switch5' incorporates:
       *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTqGearRvs_LUT1'
       *  Switch: '<S12>/Switch11'
       *  Switch: '<S14>/Switch'
       */
      TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
        (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarTqGearRvsX_LUT[0],
         &TorqPahMgmt_GrdtReaTarTqGearRvs_LUT[0], 8U);
    } else if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_D)) {
      /* Switch: '<S12>/Switch6' incorporates:
       *  Constant: '<S12>/TorqCrossZr_HIGH'
       *  Constant: '<S12>/TorqCrossZr_LOW'
       *  Constant: '<S12>/TorqCrossZr_MIDDLE'
       *  RelationalOperator: '<S12>/RelationalOperator6'
       *  RelationalOperator: '<S12>/RelationalOperator7'
       *  RelationalOperator: '<S12>/RelationalOperator8'
       *  Switch: '<S12>/Switch7'
       *  Switch: '<S12>/Switch8'
       *  Switch: '<S12>/Switch9'
       */
      if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_HIGH)) {
        /* Switch: '<S12>/Switch5' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtMaxZrCrssNegTqHi_LUT'
         *  Switch: '<S12>/Switch6'
         *  Switch: '<S12>/Switch9'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarNegTqX_LUT[0],
           &TorqPahMgmt_GrdtMaxZrCrssNegTqHi_LUT[0], 8U);
      } else if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_LOW)) {
        /* Switch: '<S12>/Switch5' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarNegTqLow_LUT'
         *  Switch: '<S12>/Switch7'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarNegTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarNegTqLow_LUT[0], 8U);
      } else if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_MIDDLE)) {
        /* Switch: '<S12>/Switch5' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarNegTqMid_LUT'
         *  Switch: '<S12>/Switch7'
         *  Switch: '<S12>/Switch8'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarNegTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarNegTqMid_LUT[0], 8U);
      } else {
        /* Switch: '<S12>/Switch5' incorporates:
         *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarNegTqOff_LUT'
         *  Switch: '<S12>/Switch7'
         *  Switch: '<S12>/Switch8'
         *  Switch: '<S14>/Switch'
         */
        TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
          (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarNegTqX_LUT[0],
           &TorqPahMgmt_GrdtReaTarNegTqOff_LUT[0], 8U);
      }

      /* End of Switch: '<S12>/Switch6' */
    } else {
      /* Switch: '<S12>/Switch5' incorporates:
       *  Lookup_n-D: '<S12>/TorqPahMgmt_GrdtReaTarTq_LUT1'
       *  Switch: '<S12>/Switch9'
       *  Switch: '<S14>/Switch'
       */
      TorqPahMgmt_GrdtReaTarNegTq_Nm = look1_iflf_binlca
        (TorqPahMgmt_DeltaZrCrssTq_Nm, &TorqPahMgmt_GrdtReaTarTqX_LUT[0],
         &TorqPahMgmt_GrdtReaTarTq_LUT[0], 8U);
    }

    /* End of Switch: '<S12>/Switch11' */
  }

  /* End of Switch: '<S12>/Switch' */
  /* End of Outputs for SubSystem: '<S8>/DrvgMod_ReaTar' */
  /* End of Outputs for SubSystem: '<S4>/Reach_Target_Torque_Gradient' */

  /* Abs: '<S9>/Abs' incorporates:
   *  Constant: '<S9>/TorqCrossZr_MAX_VEHICLE_SPEED'
   *  Constant: '<S9>/TorqCrossZr_MIN_VEHICLE_SPEED'
   *  MinMax: '<S9>/MinMax'
   *  MinMax: '<S9>/MinMax1'
   */
  TorqCrossZr_VehSpdAbs_kph = fabsf(fminf(fmaxf(TorqCrossZr_VehSpd_kph,
    TorqCrossZr_MIN_VEHICLE_SPEED), TorqCrossZr_MAX_VEHICLE_SPEED));

  /* Outputs for Atomic SubSystem: '<S4>/ZeroCrossing_Torque_Gradient' */
  /* Lookup_n-D: '<S16>/TorqPahMgmt_GrdtMaxZrCrssNegDasTq_MAP' incorporates:
   *  Abs: '<S9>/Abs'
   *  UnitDelay: '<S4>/Delay'
   */
  TorqCrossZr_GrdtMaxZrCrssDasNegTq_Nm = look2_iflf_binlca
    (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
     &TorqPahMgmt_GrdtMaxZrCrssDasTqY_MAP[0],
     &TorqPahMgmt_GrdtMaxZrCrssDasTqX_MAP[0],
     &TorqPahMgmt_GrdtMaxZrCrssNegDasTq_MAP[0], CtAp_TorqCrossZr_ConstP.pooled7,
     19U);

  /* Switch: '<S18>/Switch5' incorporates:
   *  Constant: '<S18>/TorqCrossZr_GEAR_R1'
   *  Constant: '<S18>/TorqCrossZr_HIGH'
   *  Constant: '<S18>/TorqCrossZr_LOW'
   *  Constant: '<S18>/TorqCrossZr_MIDDLE'
   *  Constant: '<S18>/TorqCrossZr_ONEPEDAL1'
   *  RelationalOperator: '<S18>/RelationalOperator10'
   *  RelationalOperator: '<S18>/RelationalOperator5'
   *  RelationalOperator: '<S18>/RelationalOperator7'
   *  RelationalOperator: '<S18>/RelationalOperator8'
   *  RelationalOperator: '<S18>/RelationalOperator9'
   *  Switch: '<S18>/Switch10'
   *  Switch: '<S18>/Switch6'
   *  Switch: '<S18>/Switch7'
   *  Switch: '<S18>/Switch8'
   */
  if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_R)) {
    /* Switch: '<S18>/Switch5' incorporates:
     *  Abs: '<S9>/Abs'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP1'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP'
     *  Product: '<S18>/Product2'
     *  SignalConversion: '<S5>/SignalCopy4'
     *  UnitDelay: '<S4>/Delay'
     */
    TorqPahMgmt_DrvgModGrdtMaxZrCrssNegSlopTq_Nm = look2_iflf_binlca
      (TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled4, 7U) * look2_iflf_binlca
      (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvsY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvsX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled3, 19U);
  } else {
    if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_ONEPEDAL)) {
      /* Switch: '<S18>/Switch10' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOnePedl_MAP'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOnePedl_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled5, 19U);
    } else if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_HIGH)) {
      /* Switch: '<S18>/Switch10' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqHi_MAP'
       *  Switch: '<S18>/Switch6'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqHi_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_MIDDLE)) {
      /* Switch: '<S18>/Switch10' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqMid_MAP'
       *  Switch: '<S18>/Switch6'
       *  Switch: '<S18>/Switch7'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqMid_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else if (TorqCrossZr_ActRgnSts_Enum == ((uint8_T)TorqCrossZr_LOW)) {
      /* Switch: '<S18>/Switch10' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqLow_MAP'
       *  Switch: '<S18>/Switch6'
       *  Switch: '<S18>/Switch7'
       *  Switch: '<S18>/Switch8'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqLow_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else {
      /* Switch: '<S18>/Switch10' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOff_MAP'
       *  Switch: '<S18>/Switch6'
       *  Switch: '<S18>/Switch7'
       *  Switch: '<S18>/Switch8'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOff_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    }

    /* Switch: '<S18>/Switch5' incorporates:
     *  Abs: '<S9>/Abs'
     *  Constant: '<S18>/TorqCrossZr_HIGH'
     *  Constant: '<S18>/TorqCrossZr_LOW'
     *  Constant: '<S18>/TorqCrossZr_MIDDLE'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP1'
     *  Product: '<S18>/Product1'
     *  RelationalOperator: '<S18>/RelationalOperator7'
     *  RelationalOperator: '<S18>/RelationalOperator8'
     *  RelationalOperator: '<S18>/RelationalOperator9'
     *  SignalConversion: '<S5>/SignalCopy4'
     *  Switch: '<S18>/Switch10'
     *  Switch: '<S18>/Switch6'
     *  Switch: '<S18>/Switch7'
     *  Switch: '<S18>/Switch8'
     */
    TorqPahMgmt_DrvgModGrdtMaxZrCrssNegSlopTq_Nm = look2_iflf_binlca
      (TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled6, 14U) * rtb_TorqPahMgmt_DrvgModGrd_dwfq;
  }

  /* End of Switch: '<S18>/Switch5' */

  /* Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssTq_MAP' incorporates:
   *  Abs: '<S9>/Abs'
   *  UnitDelay: '<S4>/Delay'
   */
  TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm = look2_iflf_binlca
    (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
     &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqY_MAP[0],
     &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqX_MAP[0],
     &TorqPahMgmt_DrvgModGrdtMaxZrCrssTq_MAP[0], CtAp_TorqCrossZr_ConstP.pooled3,
     19U);

  /* Logic: '<S18>/LogicalOperator' incorporates:
   *  Constant: '<S18>/TorqCrossZr_GEAR_D1'
   *  Constant: '<S18>/TorqCrossZr_GEAR_R2'
   *  RelationalOperator: '<S18>/RelationalOperator4'
   *  RelationalOperator: '<S18>/RelationalOperator6'
   */
  rtb_TorqCrossZr_NotDrvMod_Flg = ((TorqCrossZr_ActGear_Enum != ((uint8_T)
    TorqCrossZr_GEAR_R)) && (TorqCrossZr_ActGear_Enum != ((uint8_T)
    TorqCrossZr_GEAR_D)));

  /* Lookup_n-D: '<S16>/TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegTq_MAP' incorporates:
   *  Abs: '<S9>/Abs'
   *  UnitDelay: '<S4>/Delay'
   */
  TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegSlopTq_Nm = look2_iflf_binlca
    (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqY_MAP[0],
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqX_MAP[0],
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegTq_MAP[0],
     CtAp_TorqCrossZr_ConstP.pooled3, 19U);

  /* Switch: '<S16>/Switch' incorporates:
   *  Switch: '<S16>/Switch1'
   *  Switch: '<S16>/Switch2'
   */
  if (rtb_TorqCrossZr_IBSTorqActv_Flg) {
    /* Switch: '<S16>/Switch' */
    TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm =
      TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegSlopTq_Nm;
  } else if (rtb_TorqCrossZr_NotDrvMod_Flg) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Switch: '<S16>/Switch2'
     */
    TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm = TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm;
  } else if (TorqCrossZr_DrvDmdHiPrio_Flg) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Switch: '<S16>/Switch1'
     *  Switch: '<S16>/Switch2'
     */
    TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm =
      TorqPahMgmt_DrvgModGrdtMaxZrCrssNegSlopTq_Nm;
  } else {
    /* Switch: '<S16>/Switch' incorporates:
     *  Abs: '<S9>/Abs'
     *  Lookup_n-D: '<S16>/TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP'
     *  Product: '<S16>/Product'
     *  SignalConversion: '<S5>/SignalCopy4'
     *  Switch: '<S16>/Switch1'
     *  Switch: '<S16>/Switch2'
     */
    TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm = TorqCrossZr_GrdtMaxZrCrssDasNegTq_Nm *
      look2_iflf_binlca(TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
                        &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffY_MAP[0],
                        &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffX_MAP[0],
                        &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP[0],
                        CtAp_TorqCrossZr_ConstP.pooled2, 13U);
  }

  /* End of Switch: '<S16>/Switch' */

  /* Lookup_n-D: '<S17>/TorqPahMgmt_GrdtMaxZrCrssPosDasTq_MAP' incorporates:
   *  Abs: '<S9>/Abs'
   *  UnitDelay: '<S4>/Delay'
   */
  TorqPahMgmt_GrdtMaxZrCrssDasPosTq_Nm = look2_iflf_binlca
    (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
     &TorqPahMgmt_GrdtMaxZrCrssDasTqY_MAP[0],
     &TorqPahMgmt_GrdtMaxZrCrssDasTqX_MAP[0],
     &TorqPahMgmt_GrdtMaxZrCrssPosDasTq_MAP[0], CtAp_TorqCrossZr_ConstP.pooled7,
     19U);

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/TorqCrossZr_ECO'
   *  Constant: '<S18>/TorqCrossZr_GEAR_R'
   *  Constant: '<S18>/TorqCrossZr_NORMAL'
   *  Constant: '<S18>/TorqCrossZr_SPORT'
   *  RelationalOperator: '<S18>/RelationalOperator'
   *  RelationalOperator: '<S18>/RelationalOperator1'
   *  RelationalOperator: '<S18>/RelationalOperator2'
   *  RelationalOperator: '<S18>/RelationalOperator3'
   *  Switch: '<S18>/Switch1'
   *  Switch: '<S18>/Switch2'
   *  Switch: '<S18>/Switch3'
   */
  if (TorqCrossZr_ActGear_Enum == ((uint8_T)TorqCrossZr_GEAR_R)) {
    /* Switch: '<S18>/Switch' incorporates:
     *  Abs: '<S9>/Abs'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP1'
     *  Product: '<S18>/Product3'
     *  SignalConversion: '<S5>/SignalCopy4'
     *  UnitDelay: '<S4>/Delay'
     */
    TorqPahMgmt_DrvgModGrdtMaxZrCrssPosSlopTq_Nm = look2_iflf_binlca
      (TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeffX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled4, 7U) * look2_iflf_binlca
      (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvsY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvsX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled3, 19U);
  } else {
    if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_ECO)) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqEco_MAP'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqEco_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_NORMAL)) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqNor_MAP'
       *  Switch: '<S18>/Switch2'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqNor_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else if (TorqCrossZr_ActDrvMod_Enum == ((uint8_T)TorqCrossZr_SPORT)) {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqSpt_MAP'
       *  Switch: '<S18>/Switch2'
       *  Switch: '<S18>/Switch3'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqSpt_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled3, 19U);
    } else {
      /* Switch: '<S18>/Switch1' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqOnePedl_MAP'
       *  Switch: '<S18>/Switch2'
       *  Switch: '<S18>/Switch3'
       *  UnitDelay: '<S4>/Delay'
       */
      rtb_TorqPahMgmt_DrvgModGrd_dwfq = look2_iflf_binlca
        (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlY_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssTqOnePedlX_MAP[0],
         &TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqOnePedl_MAP[0],
         CtAp_TorqCrossZr_ConstP.pooled5, 19U);
    }

    /* Switch: '<S18>/Switch' incorporates:
     *  Abs: '<S9>/Abs'
     *  Constant: '<S18>/TorqCrossZr_NORMAL'
     *  Constant: '<S18>/TorqCrossZr_SPORT'
     *  Lookup_n-D: '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP'
     *  Product: '<S18>/Product'
     *  RelationalOperator: '<S18>/RelationalOperator2'
     *  RelationalOperator: '<S18>/RelationalOperator3'
     *  SignalConversion: '<S5>/SignalCopy4'
     *  Switch: '<S18>/Switch1'
     *  Switch: '<S18>/Switch2'
     *  Switch: '<S18>/Switch3'
     */
    TorqPahMgmt_DrvgModGrdtMaxZrCrssPosSlopTq_Nm = look2_iflf_binlca
      (TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffY_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeffX_MAP[0],
       &TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP[0],
       CtAp_TorqCrossZr_ConstP.pooled6, 14U) * rtb_TorqPahMgmt_DrvgModGrd_dwfq;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Lookup_n-D: '<S17>/TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosTq_MAP' incorporates:
   *  Abs: '<S9>/Abs'
   *  UnitDelay: '<S4>/Delay'
   */
  TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosSlopTq_Nm = look2_iflf_binlca
    (TorqCrossZr_PrevDesFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqY_MAP[0],
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssTqX_MAP[0],
     &TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosTq_MAP[0],
     CtAp_TorqCrossZr_ConstP.pooled3, 19U);

  /* Switch: '<S17>/Switch' incorporates:
   *  Switch: '<S17>/Switch2'
   */
  if (rtb_TorqCrossZr_IBSTorqActv_Flg) {
    /* Switch: '<S17>/Switch' */
    TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm =
      TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosSlopTq_Nm;
  } else if (!rtb_TorqCrossZr_NotDrvMod_Flg) {
    /* Switch: '<S17>/Switch1' incorporates:
     *  Switch: '<S17>/Switch2'
     */
    if (TorqCrossZr_DrvDmdHiPrio_Flg) {
      /* Switch: '<S17>/Switch' incorporates:
       *  Switch: '<S17>/Switch1'
       */
      TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm =
        TorqPahMgmt_DrvgModGrdtMaxZrCrssPosSlopTq_Nm;
    } else {
      /* Switch: '<S17>/Switch' incorporates:
       *  Abs: '<S9>/Abs'
       *  Lookup_n-D: '<S17>/TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP'
       *  Product: '<S17>/Product'
       *  SignalConversion: '<S5>/SignalCopy4'
       *  Switch: '<S17>/Switch1'
       */
      TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm = TorqPahMgmt_GrdtMaxZrCrssDasPosTq_Nm *
        look2_iflf_binlca(TorqCrossZr_DesLpFildTq_Nm, TorqCrossZr_VehSpdAbs_kph,
                          &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffY_MAP[0],
                          &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeffX_MAP[0],
                          &TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP[0],
                          CtAp_TorqCrossZr_ConstP.pooled2, 13U);
    }

    /* End of Switch: '<S17>/Switch1' */
  } else {
    /* no actions */
  }

  /* End of Switch: '<S17>/Switch' */
  /* End of Outputs for SubSystem: '<S4>/ZeroCrossing_Torque_Gradient' */

  /* Outputs for Atomic SubSystem: '<S4>/Torque_Ramp'
   *
   * Block requirements for '<S4>/Torque_Ramp':
   *  1. SWREQ_01834 Zero Cross torque Filter
   */
  /* MinMax: '<S10>/MinMax2' */
  TorqPahMgmt_GrdtZrCrssLmtPosSlopTq_Nm = fminf
    (TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm, TorqPahMgmt_GrdtReaTarPosTq_Nm);

  /* MinMax: '<S10>/MinMax' */
  TorqPahMgmt_GrdtZrCrssLmtNegSlopTq_Nm = fminf
    (TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm, TorqPahMgmt_GrdtReaTarNegTq_Nm);

  /* Outputs for Atomic SubSystem: '<S10>/ATOM_RateRampLmt' */
  /* Constant: '<S10>/TorqCrossZr_Dt' */
  TorqPahMgmt_DesFildTq_Nm = CtAp_TorqCross_ATOM_RateRampLmt
    (TorqCrossZr_DesLpFildTq_Nm, TorqPahMgmt_GrdtZrCrssLmtPosSlopTq_Nm,
     TorqPahMgmt_GrdtZrCrssLmtNegSlopTq_Nm, TorqCrossZr_Dt,
     &CtAp_TorqCrossZr_ARID_DEF.ARID_DEF_ATOM_RateRampLmt);

  /* End of Outputs for SubSystem: '<S10>/ATOM_RateRampLmt' */
  /* End of Outputs for SubSystem: '<S4>/Torque_Ramp' */

  /* Update for UnitDelay: '<S4>/Delay' */
  TorqCrossZr_PrevDesFildTq_Nm = TorqPahMgmt_DesFildTq_Nm;

  /* End of Outputs for SubSystem: '<S2>/Function_TorqueZeroCrossingFormer' */

  /* Outputs for Atomic SubSystem: '<S2>/Out_Bypass'
   *
   * Block requirements for '<S2>/Out_Bypass':
   *  1. SWREQ_01801 The function of "Torque Cross Zero" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm
    (TorqPahMgmt_DesFildTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/Out_Bypass' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqCrossZr_Cyclic_10ms_sys' */
}

#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqCrossZr_START_SEC_VAR_CONST_8
#include "CtAp_TorqCrossZr_MemMap.h"

void R_TorqCrossZr_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_DrvgModGrdtMaxZrCrssNegSlopTq_Nm = 0.0F;
  TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegSlopTq_Nm = 0.0F;
  TorqPahMgmt_GrdtMaxZrCrssNegTq_Nm = 0.0F;
  TorqPahMgmt_GrdtMaxZrCrssDasPosTq_Nm = 0.0F;
  TorqPahMgmt_DrvgModGrdtMaxZrCrssPosSlopTq_Nm = 0.0F;
  TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosSlopTq_Nm = 0.0F;
  TorqPahMgmt_GrdtMaxZrCrssPosTq_Nm = 0.0F;
  TorqPahMgmt_GrdtZrCrssLmtPosSlopTq_Nm = 0.0F;
  TorqPahMgmt_GrdtZrCrssLmtNegSlopTq_Nm = 0.0F;
  TorqPahMgmt_DesFildTq_Nm = 0.0F;
  TorqPahMgmt_GrdtReaTarPosTq_Nm = 0.0F;
  TorqPahMgmt_GrdtReaTarNegTq_Nm = 0.0F;
  TorqPahMgmt_DeltaZrCrssTq_Nm = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TorqCrossZr_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TorqCrossZr_T));
}

#define CtAp_TorqCrossZr_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqCrossZr_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
