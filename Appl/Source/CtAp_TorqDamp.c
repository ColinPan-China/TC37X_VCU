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
 *  Filename:           CtAp_TorqDamp.c
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqDamp
 *  Model Version:      1.23
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:30 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:18:38 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:17:52 2025
 *
 *
 *******************************************************************************/
#include "CtAp_TorqDamp.h"
#include "rtwtypes.h"
#include "CtAp_TorqDamp_Glb.h"
#include "CtAp_TorqDamp_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_TorqDamp_START_SEC_CODE
#include "CtAp_TorqDamp_MemMap.h"

void R_TorqDamp_Cyclic_10ms(void)
{
  /* local block i/o variables */
  uint8_T rtb_FctSftyMon_ActGear_Enum;
  uint8_T tmpRead;
  boolean_T tmpRead_0;
  boolean_T tmpRead_1;
  boolean_T tmpRead_2;
  boolean_T tmpRead_3;

  /* Inport: '<Root>/RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv' */
  (void)
    Rte_Read_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv
    (&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg' */
  (void)Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg' */
  (void)Rte_Read_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead);

  /* SignalConversion: '<S4>/SignalCopy3' incorporates:
   *  Inport: '<Root>/RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum'
   */
  (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
    (&rtb_FctSftyMon_ActGear_Enum);

  /* Outputs for Atomic SubSystem: '<Root>/R_TorqDamp_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/Function'
   *
   * Block requirements for '<S2>/Function':
   *  1. SWREQ_01893 Motor Active Damping control Active
   *  2. SWREQ_01894 Motor Active Damping control Inactive
   *  3. SWREQ_06436 Motor Active Damping Torque
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqDamp_Input'
   *
   * Block requirements for '<S2>/CtAp_TorqDamp_Input':
   *  1. SWREQ_01887 The function of "Torque Dampling" has the following inputs:
   */
  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/TorqDamp_DRIVE_READY'
   *  Logic: '<S6>/LogicalOperator1'
   *  Logic: '<S6>/LogicalOperator2'
   *  Logic: '<S6>/LogicalOperator3'
   *  Logic: '<S6>/LogicalOperator4'
   *  Logic: '<S6>/LogicalOperator5'
   *  RelationalOperator: '<S6>/RelationalOperator2'
   *  SignalConversion: '<S4>/SignalCopy'
   *  SignalConversion: '<S4>/SignalCopy1'
   *  SignalConversion: '<S4>/SignalCopy2'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  if (!tmpRead_0 && !tmpRead_1 && !tmpRead_2 && (tmpRead == ((uint8_T)
        TorqDamp_DRIVE_READY)) && !tmpRead_3) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/TorqDamp_DstC_EXT'
     */
    TorqPahMgmt_ReqMotDampSts_Enum = ((uint8_T)TorqDamp_DstC_EXT);
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/TorqDamp_DstC_OFF'
     */
    TorqPahMgmt_ReqMotDampSts_Enum = ((uint8_T)TorqDamp_DstC_OFF);
  }

  /* End of Switch: '<S6>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqDamp_Input' */
  /* End of Outputs for SubSystem: '<S2>/Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_TorqDamp_Output'
   *
   * Block requirements for '<S2>/CtAp_TorqDamp_Output':
   *  1. SWREQ_01889 The function of "Torque Dampling" has the following outputs:
   */
  /* Outport: '<Root>/RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)
    Rte_Write_RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum
    (TorqPahMgmt_ReqMotDampSts_Enum);

  /* Outport: '<Root>/RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq' incorporates:
   *  Constant: '<S6>/TorqPahMgmt_MotDampLmtTq_CFG'
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq
    (TorqPahMgmt_MotDampLmtTq_CFG);

  /* End of Outputs for SubSystem: '<S2>/CtAp_TorqDamp_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_TorqDamp_Cyclic_10ms_sys' */
}

#define CtAp_TorqDamp_STOP_SEC_CODE
#include "CtAp_TorqDamp_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_TorqDamp_START_SEC_VAR_CONST_8
#include "CtAp_TorqDamp_MemMap.h"

void R_TorqDamp_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  TorqPahMgmt_ReqMotDampSts_Enum = ((uint8_T)3U);
}

#define CtAp_TorqDamp_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqDamp_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
