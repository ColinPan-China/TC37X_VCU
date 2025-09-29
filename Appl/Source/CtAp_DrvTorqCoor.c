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
 *  Filename:           CtAp_DrvTorqCoor.c
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_DrvTorqCoor
 *  Model Version:      1.75
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 17:27:44 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 17:22:50 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DrvTorqCoor.h"
#include <math.h>
#include "rtwtypes.h"
#include "CtAp_DrvTorqCoor_Glb.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DrvTorqCoor_START_SEC_CODE
#include "CtAp_DrvTorqCoor_MemMap.h"

void R_DrvTorqCoor_Cyclic_10ms(void)
{
  real32_T rtb_Gain1;
  real32_T tmpRead;
  real32_T tmpRead_1;
  real32_T tmpRead_5;
  uint8_T tmpRead_4;
  boolean_T tmpRead_0;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;

  /* Inport: '<Root>/RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm' */
  (void)Rte_Read_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm
    (&ChassisMgmt_DrvTqCoorrFwdVlcTq_Nm);

  /* Inport: '<Root>/RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm' */
  (void)Rte_Read_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm
    (&ChassisMgmt_DrvTqCoorrRvsApsTq_Nm);

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm
    (&tmpRead_5);

  /* Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum' */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm
    (&ChassisMgmt_DrvTqCoorrFwdBrkTq_Nm);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg' */
  (void)Rte_Read_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_DrvTorqCoor_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S6>/DriveTorqueCoordinator_GearD'
   *
   * Block requirements for '<S6>/DriveTorqueCoordinator_GearD':
   *  1. SWREQ_01647 Gear D Driver Driver Torque Creep Torque Priority Judgment
   *  2. SWREQ_01648 Gear D Driver Driver Torque Creep Torque Priority Judgment
   *  3. SWREQ_01650 Gear D  VLC Torque  Active
   *  4. SWREQ_01651 Gear D VLC torque  Inctive
   *  5. SWREQ_01653 Gear D APS Torque Coordinate
   *  6. SWREQ_01655 Gear D Brake Torque Coordinate
   *  7. SWREQ_01652 Gear D APS Torque Coordinate
   *  8. SWREQ_01654 Gear D Brake Torque Coordinate
   *  9. SWREQ_01656 Gear D  Speed Limit Torque Coordinate
   *  10. SWREQ_01649 Gear D Driver Driver Torque Creep Torque Priority Judgment
   *  11. SWREQ_06434 Gear D Driver DriveTorque status Judgment
   *  12. SWREQ_06435 Gear D Driver DriveTorque status Judgment
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvTorqCoor_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvTorqCoor_Input':
   *  1. SWREQ_01641 The function of "Drive Torque Coordinator" has the following inputs:
   */
  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  Switch: '<S7>/Switch2'
   */
  if (tmpRead_1 < DrvTorqCoor_ZERO_TORQUE) {
    /* Switch: '<S7>/Switch' */
    ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm = tmpRead_1;
  } else if (tmpRead >= DrvTorqCoor_ZERO_TORQUE) {
    /* Switch: '<S7>/Switch2' incorporates:
     *  MinMax: '<S7>/MinMax'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S7>/Switch'
     */
    ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm = fmaxf(tmpRead_1, tmpRead);
  } else {
    /* Switch: '<S7>/Switch' incorporates:
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S7>/Switch2'
     */
    ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm = tmpRead;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Switch: '<S7>/Switch6' incorporates:
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  if (!tmpRead_3) {
    /* Switch: '<S7>/Switch6' incorporates:
     *  Inport: '<Root>/RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm'
     */
    ChassisMgmt_DrvTqCoorrFwdVlcTq_Nm = ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm;
  }

  /* End of Switch: '<S7>/Switch6' */

  /* Switch: '<S7>/Switch1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  if (tmpRead_2) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  SignalConversion: '<S4>/SignalCopy9'
     */
    ChassisMgmt_DrvTqCoorrFwdApsTq_Nm = ChassisMgmt_DrvTqCoorrRvsApsTq_Nm;
  } else {
    /* Switch: '<S7>/Switch1' */
    ChassisMgmt_DrvTqCoorrFwdApsTq_Nm = ChassisMgmt_DrvTqCoorrFwdVlcTq_Nm;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Switch: '<S7>/Switch5' incorporates:
   *  SignalConversion: '<S4>/SignalCopy1'
   */
  if (!tmpRead_0) {
    /* Switch: '<S7>/Switch5' incorporates:
     *  Inport: '<Root>/RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm'
     */
    ChassisMgmt_DrvTqCoorrFwdBrkTq_Nm = ChassisMgmt_DrvTqCoorrFwdApsTq_Nm;
  }

  /* End of Switch: '<S7>/Switch5' */

  /* MinMax: '<S7>/MinMax1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  ChassisMgmt_DrvTqCoorrDesFwdTq_Nm = fminf(tmpRead_5,
    ChassisMgmt_DrvTqCoorrFwdBrkTq_Nm);

  /* End of Outputs for SubSystem: '<S6>/DriveTorqueCoordinator_GearD' */

  /* Outputs for Atomic SubSystem: '<S6>/DriveTorqueCoordinator_GearR'
   *
   * Block requirements for '<S6>/DriveTorqueCoordinator_GearR':
   *  1. SWREQ_01657 Gear R APS Torque Coordinate
   *  2. SWREQ_01658 Gear R APS Torque Coordinate
   *  3. SWREQ_01659 Gear R  Driver Torque and Creep Torque Priority Judgment
   *  4. SWREQ_01661 Gear R Speed Limit Torque Coordinate
   *  5. SWREQ_01660 Gear R  Driver Torque and Creep Torque Priority Judgment
   *  6. SWREQ_06432 Gear R  Driver Drive Torque Status Priority Judgment
   *  7. SWREQ_06433 Gear R  Driver Drive Torque Status Priority Judgment
   */
  /* Gain: '<S8>/Gain1' incorporates:
   *  SignalConversion: '<S4>/SignalCopy3'
   */
  rtb_Gain1 = DrvTorqCoor_POS2NEG * tmpRead_1;

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvTorqCoor_Input' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S14>/Constant'
   *  RelationalOperator: '<S14>/Compare'
   */
  if (rtb_Gain1 > DrvTorqCoor_ZERO_TORQUE) {
    /* Switch: '<S8>/Switch1' */
    ChassisMgmt_DrvTqCoorrPrpRvsTq_Nm = rtb_Gain1;
  } else {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvTorqCoor_Input'
     *
     * Block requirements for '<S2>/CtAp_DrvTorqCoor_Input':
     *  1. SWREQ_01641 The function of "Drive Torque Coordinator" has the following inputs:
     */
    /* Switch: '<S8>/Switch1' incorporates:
     *  MinMax: '<S8>/MinMax'
     *  SignalConversion: '<S4>/SignalCopy'
     */
    ChassisMgmt_DrvTqCoorrPrpRvsTq_Nm = fminf(rtb_Gain1, tmpRead);

    /* End of Outputs for SubSystem: '<S2>/CtAp_DrvTorqCoor_Input' */
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvTorqCoor_Input'
   *
   * Block requirements for '<S2>/CtAp_DrvTorqCoor_Input':
   *  1. SWREQ_01641 The function of "Drive Torque Coordinator" has the following inputs:
   */
  /* Switch: '<S8>/Switch' incorporates:
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  if (!tmpRead_2) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Inport: '<Root>/RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm'
     */
    ChassisMgmt_DrvTqCoorrRvsApsTq_Nm = ChassisMgmt_DrvTqCoorrPrpRvsTq_Nm;
  }

  /* End of Switch: '<S8>/Switch' */

  /* MinMax: '<S8>/MinMax1' incorporates:
   *  Gain: '<S8>/Gain'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  ChassisMgmt_DrvTqCoorrDesRvsTq_Nm = fmaxf(DrvTorqCoor_POS2NEG * tmpRead_5,
    ChassisMgmt_DrvTqCoorrRvsApsTq_Nm);

  /* End of Outputs for SubSystem: '<S6>/DriveTorqueCoordinator_GearR' */

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  SignalConversion: '<S4>/SignalCopy7'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch2'
   *  Switch: '<S9>/Switch3'
   */
  if (tmpRead_4 == ((uint8_T)DrvTorqCoor_GEAR_D)) {
    /* Switch: '<S9>/Switch' */
    ChassisMgmt_DrvCoorrDesTq_Nm = ChassisMgmt_DrvTqCoorrDesFwdTq_Nm;

    /* Outputs for Atomic SubSystem: '<S6>/DriveTorqueCoordinator_GearD'
     *
     * Block requirements for '<S6>/DriveTorqueCoordinator_GearD':
     *  1. SWREQ_01647 Gear D Driver Driver Torque Creep Torque Priority Judgment
     *  2. SWREQ_01648 Gear D Driver Driver Torque Creep Torque Priority Judgment
     *  3. SWREQ_01650 Gear D  VLC Torque  Active
     *  4. SWREQ_01651 Gear D VLC torque  Inctive
     *  5. SWREQ_01653 Gear D APS Torque Coordinate
     *  6. SWREQ_01655 Gear D Brake Torque Coordinate
     *  7. SWREQ_01652 Gear D APS Torque Coordinate
     *  8. SWREQ_01654 Gear D Brake Torque Coordinate
     *  9. SWREQ_01656 Gear D  Speed Limit Torque Coordinate
     *  10. SWREQ_01649 Gear D Driver Driver Torque Creep Torque Priority Judgment
     *  11. SWREQ_06434 Gear D Driver DriveTorque status Judgment
     *  12. SWREQ_06435 Gear D Driver DriveTorque status Judgment
     */
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S12>/Constant'
     *  Constant: '<S13>/Constant'
     *  Logic: '<S7>/LogicalOperator'
     *  Logic: '<S7>/LogicalOperator1'
     *  RelationalOperator: '<S12>/Compare'
     *  RelationalOperator: '<S13>/Compare'
     *  RelationalOperator: '<S7>/RelationalOperator'
     *  SignalConversion: '<S4>/SignalCopy'
     *  SignalConversion: '<S4>/SignalCopy3'
     */
    ChassisMgmt_DrvDmdHiPrio_Flg = ((tmpRead < DrvTorqCoor_ZERO_TORQUE) ||
      ((tmpRead > tmpRead_1) && (tmpRead_1 >= DrvTorqCoor_ZERO_TORQUE)));

    /* End of Outputs for SubSystem: '<S6>/DriveTorqueCoordinator_GearD' */
  } else if (tmpRead_4 == ((uint8_T)DrvTorqCoor_GEAR_R)) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Switch: '<S9>/Switch'
     */
    ChassisMgmt_DrvCoorrDesTq_Nm = ChassisMgmt_DrvTqCoorrDesRvsTq_Nm;

    /* Outputs for Atomic SubSystem: '<S6>/DriveTorqueCoordinator_GearR'
     *
     * Block requirements for '<S6>/DriveTorqueCoordinator_GearR':
     *  1. SWREQ_01657 Gear R APS Torque Coordinate
     *  2. SWREQ_01658 Gear R APS Torque Coordinate
     *  3. SWREQ_01659 Gear R  Driver Torque and Creep Torque Priority Judgment
     *  4. SWREQ_01661 Gear R Speed Limit Torque Coordinate
     *  5. SWREQ_01660 Gear R  Driver Torque and Creep Torque Priority Judgment
     *  6. SWREQ_06432 Gear R  Driver Drive Torque Status Priority Judgment
     *  7. SWREQ_06433 Gear R  Driver Drive Torque Status Priority Judgment
     */
    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S15>/Constant'
     *  Logic: '<S8>/LogicalOperator'
     *  RelationalOperator: '<S15>/Compare'
     *  RelationalOperator: '<S8>/RelationalOperator'
     *  SignalConversion: '<S4>/SignalCopy'
     *  Switch: '<S9>/Switch2'
     */
    ChassisMgmt_DrvDmdHiPrio_Flg = ((tmpRead <= DrvTorqCoor_ZERO_TORQUE) &&
      (tmpRead < rtb_Gain1));

    /* End of Outputs for SubSystem: '<S6>/DriveTorqueCoordinator_GearR' */
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/DrvTorqCoor_ZERO_TORQUE'
     *  Switch: '<S9>/Switch1'
     */
    ChassisMgmt_DrvCoorrDesTq_Nm = DrvTorqCoor_ZERO_TORQUE;

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/DrvTorqCoor_OFF'
     *  Switch: '<S9>/Switch3'
     */
    ChassisMgmt_DrvDmdHiPrio_Flg = DrvTorqCoor_OFF;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvTorqCoor_Input' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_DrvTorqCoor_Output'
   *
   * Block requirements for '<S2>/CtAp_DrvTorqCoor_Output':
   *  1. SWREQ_01643 The function of "Drive Torque Coordinator" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm
    (ChassisMgmt_DrvCoorrDesTq_Nm);

  /* Outport: '<Root>/RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg
    (ChassisMgmt_DrvDmdHiPrio_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_DrvTorqCoor_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_DrvTorqCoor_Cyclic_10ms_sys' */
}

#define CtAp_DrvTorqCoor_STOP_SEC_CODE
#include "CtAp_DrvTorqCoor_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DrvTorqCoor_START_SEC_VAR_CONST_8
#include "CtAp_DrvTorqCoor_MemMap.h"

void R_DrvTorqCoor_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  ChassisMgmt_DrvCoorrDesTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrPrpRvsTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrRvsApsTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrDesRvsTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrFwdVlcTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrFwdApsTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrFwdBrkTq_Nm = 0.0F;
  ChassisMgmt_DrvTqCoorrDesFwdTq_Nm = 0.0F;
  ChassisMgmt_DrvDmdHiPrio_Flg = false;
}

#define CtAp_DrvTorqCoor_STOP_SEC_VAR_CONST_8
#include "CtAp_DrvTorqCoor_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
