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
 *  Filename:           CtAp_AccCal.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:40:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:39:42 2025
 *
 *
 *******************************************************************************/
#include "CtAp_AccCal.h"
#include "rtwtypes.h"
#include "CtAp_AccCal_private.h"
#include <math.h>
#include "CtAp_AccCal_Glb.h"
#include "CtAp_AccCal_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_AccCal_START_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"

ARID_DEF_CtAp_AccCal_T CtAp_AccCal_ARID_DEF;

#define CtAp_AccCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * System initialize for atomic system:
 *    '<S4>/ATOM_SingleLPF'
 *    '<S5>/ATOM_SingleLPF'
 */
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

void CtAp_AccCal_ATOM_SingleLPF_Init(ARID_DEF_ATOM_SingleLPF_CtAp__T
  *CtAp_AccCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S7>/Delay' */
  CtAp_AccCal__ARID_DEF_arg->Delay_DSTATE = 0.0F;
}

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

/*
 * System reset for atomic system:
 *    '<S4>/ATOM_SingleLPF'
 *    '<S5>/ATOM_SingleLPF'
 */
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

void CtAp_AccCa_ATOM_SingleLPF_Reset(ARID_DEF_ATOM_SingleLPF_CtAp__T
  *CtAp_AccCal__ARID_DEF_arg)
{
  /* InitializeConditions for Delay: '<S7>/Delay' */
  CtAp_AccCal__ARID_DEF_arg->Delay_DSTATE = 0.0F;
}

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S4>/ATOM_SingleLPF'
 *    '<S5>/ATOM_SingleLPF'
 */
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

real32_T CtAp_AccCal_ATOM_SingleLPF(real32_T rtu_u, real32_T rtu_tc, real32_T
  rtu_dt, ARID_DEF_ATOM_SingleLPF_CtAp__T *CtAp_AccCal__ARID_DEF_arg)
{
  real32_T rty_y_0;

  /* Sum: '<S7>/Sum1' incorporates:
   *  Constant: '<S7>/Constant'
   *  Delay: '<S7>/Delay'
   *  MinMax: '<S7>/Max'
   *  MinMax: '<S7>/Max1'
   *  Product: '<S7>/DI'
   *  Product: '<S7>/Mu'
   *  Sum: '<S7>/Sum2'
   */
  rty_y_0 = CtAp_AccCal__ARID_DEF_arg->Delay_DSTATE + ((rtu_u -
    CtAp_AccCal__ARID_DEF_arg->Delay_DSTATE) * (rtu_dt / fmaxf(fmaxf(rtu_dt,
    rtu_tc), 1.0E-6F)));

  /* Update for Delay: '<S7>/Delay' */
  CtAp_AccCal__ARID_DEF_arg->Delay_DSTATE = rty_y_0;
  return rty_y_0;
}

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_AccCal_START_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

void R_AccCal_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Switch;
  real32_T rtb_Sum1;
  real32_T rtb_Divide;
  real32_T rtb_Sum1_bepk;
  int32_T i;
  real32_T tmpRead;
  real32_T tmpRead_0;
  uint8_T rtb_TmpSignalConversionAtRTE_R_;
  uint8_T tmpRead_1;
  boolean_T rtb_TmpSignalConversionAtR_buwh;

  /* SignalConversion generated from: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_TmpSignalConversionAtRTE_R_);

  /* SignalConversion generated from: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' incorporates:
   *  Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg'
   */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
    (&rtb_TmpSignalConversionAtR_buwh);

  /* Outputs for Atomic SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
  /* Outputs for Enabled SubSystem: '<S2>/AcclrCalculate' incorporates:
   *  EnablePort: '<S4>/Enable'
   *
   * Block requirements for '<S2>/AcclrCalculate':
   *  1. SWREQ_03762 VehSpdAcclr calculate
   */
  if (rtb_TmpSignalConversionAtR_buwh) {
    if (!CtAp_AccCal_ARID_DEF.AcclrCalculate_MODE) {
      /* InitializeConditions for Delay: '<S4>/Delay' */
      for (i = 0; i < 5; i++) {
        CtAp_AccCal_ARID_DEF.Delay_DSTATE[i] = 0.0F;
      }

      /* End of InitializeConditions for Delay: '<S4>/Delay' */

      /* SystemReset for Atomic SubSystem: '<S4>/ATOM_SingleLPF' */
      CtAp_AccCa_ATOM_SingleLPF_Reset
        (&CtAp_AccCal_ARID_DEF.ARID_DEF_ATOM_SingleLPF_mbvz);

      /* End of SystemReset for SubSystem: '<S4>/ATOM_SingleLPF' */
      CtAp_AccCal_ARID_DEF.AcclrCalculate_MODE = true;
    }

    /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
    (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(&tmpRead_0);

    /* Product: '<S4>/Divide' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Divide = tmpRead_0 / 3.6F;

    /* Outputs for Atomic SubSystem: '<S4>/ATOM_SingleLPF' */
    /* Constant: '<S4>/CAL1' incorporates:
     *  Constant: '<S4>/CAL'
     */
    rtb_Sum1_bepk = CtAp_AccCal_ATOM_SingleLPF(rtb_Divide, AccCal_AcclrRadio_CFG,
      AccCal_CycleDt_CFG, &CtAp_AccCal_ARID_DEF.ARID_DEF_ATOM_SingleLPF_mbvz);

    /* End of Outputs for SubSystem: '<S4>/ATOM_SingleLPF' */

    /* SignalConversion generated from: '<S4>/ATOM_SingleLPF' */
    VehMot_VehSpdFlt_kph = rtb_Sum1_bepk;

    /* Delay: '<S4>/Delay' */
    VehMot_VehSpdFltDly_kph = CtAp_AccCal_ARID_DEF.Delay_DSTATE[0];

    /* Gain: '<S4>/Gain' incorporates:
     *  Sum: '<S4>/Add'
     */
    VehMot_UncfmVehSpdAcclr_mps2q = 20.0F * (VehMot_VehSpdFlt_kph -
      VehMot_VehSpdFltDly_kph);

    /* Update for Delay: '<S4>/Delay' */
    CtAp_AccCal_ARID_DEF.Delay_DSTATE[0] = CtAp_AccCal_ARID_DEF.Delay_DSTATE[1];
    CtAp_AccCal_ARID_DEF.Delay_DSTATE[1] = CtAp_AccCal_ARID_DEF.Delay_DSTATE[2];
    CtAp_AccCal_ARID_DEF.Delay_DSTATE[2] = CtAp_AccCal_ARID_DEF.Delay_DSTATE[3];
    CtAp_AccCal_ARID_DEF.Delay_DSTATE[3] = CtAp_AccCal_ARID_DEF.Delay_DSTATE[4];
    CtAp_AccCal_ARID_DEF.Delay_DSTATE[4] = VehMot_VehSpdFlt_kph;
  } else if (CtAp_AccCal_ARID_DEF.AcclrCalculate_MODE) {
    /* Disable for Gain: '<S4>/Gain' incorporates:
     *  Outport: '<S4>/VehMot_UncfmVehSpdAcclr_mps2q'
     */
    VehMot_UncfmVehSpdAcclr_mps2q = 0.0F;
    CtAp_AccCal_ARID_DEF.AcclrCalculate_MODE = false;
  } else {
    /* no actions */
  }

  /* End of Outputs for SubSystem: '<S2>/AcclrCalculate' */
  /* End of Outputs for SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts' */
  (void)Rte_Read_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts(&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q' */
  (void)Rte_Read_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/AcclrSwitch'
   *
   * Block requirements for '<S2>/AcclrSwitch':
   *  1. SWREQ_03767 Acclr Switch
   *  2. SWREQ_03766 IBS Acclr Low Pass filter
   */
  /* Outputs for Atomic SubSystem: '<S5>/ATOM_SingleLPF'
   *
   * Block requirements for '<S5>/ATOM_SingleLPF':
   *  1. SWREQ_03766 IBS Acclr Low Pass filter
   */
  /* Constant: '<S5>/CAL1' incorporates:
   *  Constant: '<S5>/CAL'
   */
  rtb_Sum1 = CtAp_AccCal_ATOM_SingleLPF(tmpRead, AccCal_AcclrRadio_CFG,
    AccCal_CycleDt_CFG, &CtAp_AccCal_ARID_DEF.ARID_DEF_ATOM_SingleLPF);

  /* End of Outputs for SubSystem: '<S5>/ATOM_SingleLPF' */

  /* SignalConversion generated from: '<S5>/ATOM_SingleLPF'
   *
   * Block requirements for SignalConversion generated from '<S5>/ATOM_SingleLPF':
   *  1. SWREQ_03766 IBS Acclr Low Pass filter
   */
  ComM_YRSAxFlt_mps2q = rtb_Sum1;

  /* Switch: '<S5>/Switch'
   *
   * Block requirements for '<S5>/Switch':
   *  1. SWREQ_03767 Acclr Switch
   */
  rtb_Switch = ComM_YRSAxFlt_mps2q;

  /* End of Outputs for SubSystem: '<S2>/AcclrSwitch' */

  /* Outputs for Atomic SubSystem: '<S2>/RegenBrkLi'
   *
   * Block requirements for '<S2>/RegenBrkLi':
   *  1. SWREQ_03763 RegenBrakeLight On
   *  2. SWREQ_03764 RegenBrakeLight Off
   *  3. SWREQ_03765 RegenBrakeLight Keep
   */
  /* Abs: '<S6>/Abs' incorporates:
   *  Abs: '<S6>/Abs1'
   *  Switch: '<S6>/Switch'
   *
   * Block requirements for '<S6>/Switch':
   *  1. SWREQ_03763 RegenBrakeLight On
   */
  tmpRead = fabsf(VehMot_UncfmVehSpdAcclr_mps2q);

  /* Switch: '<S6>/Switch' incorporates:
   *  Abs: '<S6>/Abs'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S6>/Constant'
   *  Delay: '<S6>/Delay'
   *  Logic: '<S6>/LogicalOperator'
   *  Logic: '<S6>/LogicalOperator1'
   *  Logic: '<S6>/LogicalOperator2'
   *  Logic: '<S6>/LogicalOperator4'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  Switch: '<S6>/Switch1'
   *
   * Block requirements for '<S6>/Switch':
   *  1. SWREQ_03763 RegenBrakeLight On
   *
   * Block requirements for '<S6>/Delay':
   *  1. SWREQ_03765 RegenBrakeLight Keep
   *
   * Block requirements for '<S6>/Switch1':
   *  1. SWREQ_03764 RegenBrakeLight Off
   */
  if ((VehMot_UncfmVehSpdAcclr_mps2q < AccCal_SingleZero) && (tmpRead >
       AccCal_EnterRgnAcclr_CFG) && (rtb_TmpSignalConversionAtRTE_R_ ==
       ((uint8_T)AccCal_GearD))) {
    CtAp_AccCal_ARID_DEF.Delay_DSTATE_hn4n = AccCal_True;
  } else if ((VehMot_UncfmVehSpdAcclr_mps2q >= AccCal_SingleZero) || (tmpRead <
              AccCal_ExitRgnAcclr_CFG) || (rtb_TmpSignalConversionAtRTE_R_ !=
              ((uint8_T)AccCal_GearD))) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Delay: '<S6>/Delay'
     *
     * Block requirements for '<S6>/Switch1':
     *  1. SWREQ_03764 RegenBrakeLight Off
     *
     * Block requirements for '<S6>/Delay':
     *  1. SWREQ_03765 RegenBrakeLight Keep
     */
    CtAp_AccCal_ARID_DEF.Delay_DSTATE_hn4n = AccCal_False;
  } else {
    /* no actions */
  }

  /* Switch: '<S6>/Switch2'
   *
   * Block requirements for '<S6>/Switch2':
   *  1. SWREQ_03763 RegenBrakeLight On
   */
  if (rtb_TmpSignalConversionAtR_buwh) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Delay: '<S6>/Delay'
     *
     * Block requirements for '<S6>/Switch2':
     *  1. SWREQ_03763 RegenBrakeLight On
     *
     * Block requirements for '<S6>/Delay':
     *  1. SWREQ_03765 RegenBrakeLight Keep
     */
    CtAp_AccCal_ARID_DEF.Delay1_DSTATE = CtAp_AccCal_ARID_DEF.Delay_DSTATE_hn4n;
  }

  /* End of Switch: '<S6>/Switch2' */
  /* End of Outputs for SubSystem: '<S2>/RegenBrkLi' */
  /* End of Outputs for SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg' */
  (void)Rte_Write_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg
    (CtAp_AccCal_ARID_DEF.Delay1_DSTATE);

  /* Outputs for Atomic SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/RegenBrkLi'
   *
   * Block requirements for '<S2>/RegenBrkLi':
   *  1. SWREQ_03763 RegenBrakeLight On
   *  2. SWREQ_03764 RegenBrakeLight Off
   *  3. SWREQ_03765 RegenBrakeLight Keep
   */
  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *
   * Block requirements for '<S6>/Switch3':
   *  1. SWREQ_03764 RegenBrakeLight Off
   *  2. SWREQ_03765 RegenBrakeLight Keep
   *
   * Block requirements for '<S6>/Constant2':
   *  1. SWREQ_03763 RegenBrakeLight On
   *  2. SWREQ_03764 RegenBrakeLight Off
   *  3. SWREQ_03765 RegenBrakeLight Keep
   *
   * Block requirements for '<S6>/Constant3':
   *  1. SWREQ_03763 RegenBrakeLight On
   *  2. SWREQ_03764 RegenBrakeLight Off
   *  3. SWREQ_03765 RegenBrakeLight Keep
   */
  if (rtb_TmpSignalConversionAtR_buwh) {
    rtb_TmpSignalConversionAtR_buwh = AccCal_True;
  } else {
    rtb_TmpSignalConversionAtR_buwh = AccCal_False;
  }

  /* Outport: '<Root>/RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg' incorporates:
   *  Switch: '<S6>/Switch3'
   *
   * Block requirements for '<S6>/Switch3':
   *  1. SWREQ_03764 RegenBrakeLight Off
   *  2. SWREQ_03765 RegenBrakeLight Keep
   */
  (void)Rte_Write_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg
    (rtb_TmpSignalConversionAtR_buwh);

  /* End of Outputs for SubSystem: '<S2>/RegenBrkLi' */

  /* Outputs for Atomic SubSystem: '<S2>/AcclrSwitch'
   *
   * Block requirements for '<S2>/AcclrSwitch':
   *  1. SWREQ_03767 Acclr Switch
   *  2. SWREQ_03766 IBS Acclr Low Pass filter
   */
  /* Outport: '<Root>/RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q' incorporates:
   *  SignalConversion generated from: '<S5>/VehMot_UncfmVehSpdAcclr_mps2q'
   */
  (void)Rte_Write_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q
    (VehMot_UncfmVehSpdAcclr_mps2q);

  /* End of Outputs for SubSystem: '<S2>/AcclrSwitch' */
  /* End of Outputs for SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
}

#define CtAp_AccCal_STOP_SEC_CODE
#include "CtAp_AccCal_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_AccCal_START_SEC_VAR_CONST_8
#include "CtAp_AccCal_MemMap.h"

void R_AccCal_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ComM_YRSAxFlt_mps2q = 0.0F;
  VehMot_VehSpdFlt_kph = 0.0F;
  VehMot_VehSpdFltDly_kph = 0.0F;
  VehMot_UncfmVehSpdAcclr_mps2q = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_AccCal_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_AccCal_T));

  {
    int32_T i;

    /* SystemInitialize for Atomic SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
    /* SystemInitialize for Enabled SubSystem: '<S2>/AcclrCalculate'
     *
     * Block requirements for '<S2>/AcclrCalculate':
     *  1. SWREQ_03762 VehSpdAcclr calculate
     */
    /* InitializeConditions for Delay: '<S4>/Delay' */
    for (i = 0; i < 5; i++) {
      CtAp_AccCal_ARID_DEF.Delay_DSTATE[i] = 0.0F;
    }

    /* End of InitializeConditions for Delay: '<S4>/Delay' */

    /* SystemInitialize for Atomic SubSystem: '<S4>/ATOM_SingleLPF' */
    CtAp_AccCal_ATOM_SingleLPF_Init
      (&CtAp_AccCal_ARID_DEF.ARID_DEF_ATOM_SingleLPF_mbvz);

    /* End of SystemInitialize for SubSystem: '<S4>/ATOM_SingleLPF' */
    /* End of SystemInitialize for SubSystem: '<S2>/AcclrCalculate' */

    /* SystemInitialize for Atomic SubSystem: '<S2>/AcclrSwitch'
     *
     * Block requirements for '<S2>/AcclrSwitch':
     *  1. SWREQ_03767 Acclr Switch
     *  2. SWREQ_03766 IBS Acclr Low Pass filter
     */
    /* SystemInitialize for Atomic SubSystem: '<S5>/ATOM_SingleLPF'
     *
     * Block requirements for '<S5>/ATOM_SingleLPF':
     *  1. SWREQ_03766 IBS Acclr Low Pass filter
     */
    CtAp_AccCal_ATOM_SingleLPF_Init
      (&CtAp_AccCal_ARID_DEF.ARID_DEF_ATOM_SingleLPF);

    /* End of SystemInitialize for SubSystem: '<S5>/ATOM_SingleLPF' */
    /* End of SystemInitialize for SubSystem: '<S2>/AcclrSwitch' */
    /* End of SystemInitialize for SubSystem: '<Root>/R_AccCal_Cyclic_10ms_sys' */
  }
}

#define CtAp_AccCal_STOP_SEC_VAR_CONST_8
#include "CtAp_AccCal_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
