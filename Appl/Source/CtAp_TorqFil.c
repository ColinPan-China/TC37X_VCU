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
 *  Filename:           CtAp_TorqFil.c
 *  File Creation Date: 07-Nov-2024
 *  Model Name:         CtAp_TorqFil
 *  Model Version:      1.31
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:25 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Nov  7 09:45:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Nov 07 09:44:30 2024
 *
 *
 *******************************************************************************/
#include "CtAp_TorqFil.h"
#include "rtwtypes.h"
#include "CtAp_TorqFil_private.h"
#include "CtAp_TorqFil_Glb.h"
#include "CtAp_TorqFil_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqFil_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"

ARID_DEF_CtAp_TorqFil_T CtAp_TorqFil_ARID_DEF;

#define CtAp_TorqFil_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Output and update for atomic system: '<S6>/ATOM_Limiter' */
#define CtAp_TorqFil_START_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

real32_T CtAp_TorqFil_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In, real32_T
  rtu_MIN)
{
  real32_T rty_Out_0;

  /* Switch: '<S7>/Switch' incorporates:
   *  RelationalOperator: '<S7>/RelationalOperator'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  Switch: '<S7>/Switch1'
   */
  if (rtu_MAX < rtu_In) {
    rty_Out_0 = rtu_MAX;
  } else if (rtu_In >= rtu_MIN) {
    /* Switch: '<S7>/Switch1' */
    rty_Out_0 = rtu_In;
  } else {
    rty_Out_0 = rtu_MIN;
  }

  /* End of Switch: '<S7>/Switch' */
  return rty_Out_0;
}

#define CtAp_TorqFil_STOP_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S6>/LowPassFilter1'
 *    '<S6>/LowPassFilter2'
 */
#define CtAp_TorqFil_START_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

real32_T CtAp_TorqFil_LowPassFilter(real32_T rtu_DataInput, real32_T
  rtu_TimeCnst_C, real32_T rtu_TSample_C, ARID_DEF_LowPassFilter_CtAp_T_T
  *CtAp_TorqFil__ARID_DEF_arg)
{
  real32_T rty_DataOutput_0;

  /* Sum: '<S8>/Sum3' incorporates:
   *  Product: '<S8>/Prd3'
   *  Product: '<S8>/Prd4'
   *  Sum: '<S8>/Sum4'
   *  UnitDelay: '<S8>/Delay'
   */
  rty_DataOutput_0 = ((rtu_TSample_C / rtu_TimeCnst_C) * (rtu_DataInput -
    CtAp_TorqFil__ARID_DEF_arg->Delay_DSTATE)) +
    CtAp_TorqFil__ARID_DEF_arg->Delay_DSTATE;

  /* Update for UnitDelay: '<S8>/Delay' */
  CtAp_TorqFil__ARID_DEF_arg->Delay_DSTATE = rty_DataOutput_0;
  return rty_DataOutput_0;
}

#define CtAp_TorqFil_STOP_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqFil_START_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

void R_TorqFil_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_Sum3;
  real32_T rtb_Sum3_b5ex;
  real32_T rtb_Switch;
  real32_T rtb_ChassisMgmt_DrvCoorrDesTq_N;
  real32_T rtb_TorqPahMgmt_EmacQstyMaxTq_N;
  real32_T rtb_TorqPahMgmt_EmacQstyMinTq_N;
  boolean_T tmpRead;

  /* SignalConversion: '<S4>/SignalCopy3' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPhMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPhMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(
    &rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* SignalConversion: '<S4>/SignalCopy2' incorporates:
   *  Inport: '<Root>/RTE_R_TorqPhMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_TorqPhMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(
    &rtb_TorqPahMgmt_EmacQstyMaxTq_N);

  /* Inport: '<Root>/RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg' */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg
    (&tmpRead);

  /* SignalConversion: '<S4>/SignalCopy' incorporates:
   *  Inport: '<Root>/RTE_R_ChassisMgmt_DrvCoorDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm'
   */
  (void)
    Rte_Read_RTE_R_ChassisMgmt_DrvCoorDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm(
    &rtb_ChassisMgmt_DrvCoorrDesTq_N);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqFil_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function_TorqueReferenceFilter'
   *
   * Block requirements for '<S2>/Function_TorqueReferenceFilter':
   *  1. SWREQ_01776 The desired propolsion torque 'ChassisMgmt_DrvCoorrDesTq_Nm' is limited by 'TorqPahMgmt_EmacQstyMaxTq_Nm' and 'TorqPahMgmt_EmacQstyMinTq_Nm' and filtered by a second-order lowpass filter. The time constant for the filter is calibratable by two seperate parameters. Which parameters is selected depends on: The state of highest prior torque demand ChassisMgmt_DrvDmdHiPrio_Flg . If no driver request is present, the filters can be deactivated via TorqPahMgmt_TqRefFilDasTim_CFG
   *  2. SWREQ_01778 desired propolsion torque filtered
   *  3. SWREQ_01779 desired propolsion torque filtered coefficient set
   *  4. SWREQ_01777 desired propolsion torque Limit
   */
  /* Outputs for Atomic SubSystem: '<S6>/ATOM_Limiter' */
  rtb_Switch = CtAp_TorqFil_ATOM_Limiter(rtb_TorqPahMgmt_EmacQstyMaxTq_N,
    rtb_ChassisMgmt_DrvCoorrDesTq_N, rtb_TorqPahMgmt_EmacQstyMinTq_N);

  /* End of Outputs for SubSystem: '<S6>/ATOM_Limiter' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqFil_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqFil_Input':
   *  1. SWREQ_01770 The function of "Torque Filter" has the following inputs:
   */
  /* Switch: '<S6>/Switch' incorporates:
   *  SignalConversion: '<S4>/SignalCopy1'
   */
  if (tmpRead) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/TorqPahMgmt_TqRefFilTim_CFG'
     */
    TorqPahMgmt_TqRefFilTim_s = TorqPahMgmt_TqRefFilTim_CFG;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/TorqPahMgmt_TqRefFilDasTim_CFG'
     */
    TorqPahMgmt_TqRefFilTim_s = TorqPahMgmt_TqRefFilDasTim_CFG;
  }

  /* End of Switch: '<S6>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqFil_Input' */

  /* Outputs for Atomic SubSystem: '<S6>/LowPassFilter2' */
  /* Constant: '<S6>/TorqFil_Dt' */
  rtb_Sum3 = CtAp_TorqFil_LowPassFilter(rtb_Switch, TorqPahMgmt_TqRefFilTim_s,
    TorqFil_Dt, &CtAp_TorqFil_ARID_DEF.ARID_DEF_LowPassFilter2);

  /* End of Outputs for SubSystem: '<S6>/LowPassFilter2' */

  /* Outputs for Atomic SubSystem: '<S6>/LowPassFilter1' */
  /* Constant: '<S6>/TorqFil_Dt1' */
  rtb_Sum3_b5ex = CtAp_TorqFil_LowPassFilter(rtb_Sum3, TorqPahMgmt_TqRefFilTim_s,
    TorqFil_Dt, &CtAp_TorqFil_ARID_DEF.ARID_DEF_LowPassFilter1);

  /* End of Outputs for SubSystem: '<S6>/LowPassFilter1' */

  /* SignalConversion generated from: '<S6>/LowPassFilter1' */
  TorqPahMgmt_DesLpFildTq_Nm = rtb_Sum3_b5ex;

  /* End of Outputs for SubSystem: '<S2>/Function_TorqueReferenceFilter' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqFil_Output'
   *
   * Block requirements for '<S2>/CtAp_TorqFil_Output':
   *  1. SWREQ_01772 The function of "Torque Filter" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm
    (TorqPahMgmt_DesLpFildTq_Nm);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqFil_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqFil_Cyclic_10ms_sys' */
}

#define CtAp_TorqFil_STOP_SEC_CODE
#include "CtAp_TorqFil_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqFil_START_SEC_VAR_CONST_8
#include "CtAp_TorqFil_MemMap.h"

void R_TorqFil_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_TqRefFilTim_s = 0.0F;
  TorqPahMgmt_DesLpFildTq_Nm = 0.0F;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_TorqFil_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_TorqFil_T));
}

#define CtAp_TorqFil_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqFil_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
