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
 *  Filename:           CtAp_FctSftyTorq.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FctSftyTorq_h_
#define RTW_HEADER_CtAp_FctSftyTorq_h_
#ifndef CtAp_FctSftyTorq_COMMON_INCLUDES_
#define CtAp_FctSftyTorq_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_FctSftyTorq.h"
#endif                                 /* CtAp_FctSftyTorq_COMMON_INCLUDES_ */

#include "CtAp_FctSftyTorq_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_FctSftyTorq_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_FctSftyTorq_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define FctSftyTorq_Dt                 10U                       /* Referenced by:
                                                                  * '<S12>/FctSftyTorq_Dt'
                                                                  * '<S12>/FctSftyTorq_Dt1'
                                                                  * '<S13>/FctSftyTorq_Dt'
                                                                  * '<S22>/FctSftyTorq_Dt'
                                                                  * '<S22>/FctSftyTorq_Dt1'
                                                                  * '<S23>/FctSftyTorq_Dt'
                                                                  * '<S31>/FctSftyTorq_Dt'
                                                                  * '<S31>/FctSftyTorq_Dt1'
                                                                  * '<S32>/FctSftyTorq_Dt'
                                                                  *//* functional safety torque monitoring sample time */
#define FctSftyTorq_ECO                1U                        /* Referenced by: '<S34>/FctSftyTorq_ECO' *//* functional safety torque monitoring define eco */
#define FctSftyTorq_GEAR_D             4U                        /* Referenced by:
                                                                  * '<S10>/FctSftyTorq_GEAR_D'
                                                                  * '<S34>/FctSftyTorq_GEAR_D'
                                                                  * '<S34>/FctSftyTorq_GEAR_D1'
                                                                  *//* functional safety torque monitoring define gear status */
#define FctSftyTorq_GEAR_R             3U                        /* Referenced by:
                                                                  * '<S10>/FctSftyTorq_GEAR_R'
                                                                  * '<S34>/FctSftyTorq_GEAR_R'
                                                                  * '<S34>/FctSftyTorq_GEAR_R1'
                                                                  *//* functional safety torque monitoring define gear status */
#define FctSftyTorq_NORMAL             2U                        /* Referenced by: '<S34>/FctSftyTorq_NORMAL' *//* functional safety torque monitoring define NORMAL */
#define FctSftyTorq_ONE_CNT            true                      /* Referenced by:
                                                                  * '<S12>/FctSftyTorq_ONE_CNT'
                                                                  * '<S22>/FctSftyTorq_ONE_CNT'
                                                                  * '<S31>/FctSftyTorq_ONE_CNT'
                                                                  *//* functional safety torque monitoring define one */
#define FctSftyTorq_SPORT              3U                        /* Referenced by: '<S34>/FctSftyTorq_SPORT' *//* functional safety torque monitoring define sport */

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S14>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S17>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S16>/Delay1' */
} ARID_DEF_NoReset_CtAp_FctSfty_T;

/* PublicStructure Variables for Internal Data, for system '<S13>/NoEnableAndReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S20>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S19>/Delay1' */
} ARID_DEF_NoEnableAndReset_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<S22>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S27>/UnitDelay' */
} ARID_DEF_NoReset_CtAp_Fc_nsaz_T;

/* PublicStructure Variables for Internal Data, for system '<S31>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S38>/UnitDelay' */
} ARID_DEF_NoReset_CtAp_Fc_a3io_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnableAndReset_CtA_T ARID_DEF_NoEnableAndReset;/* '<S32>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_Fc_a3io_T ARID_DEF_NoReset;/* '<S31>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T ARID_DEF_ATOM_TimeCnt;/* '<S31>/ATOM_TimeCnt' */
  ARID_DEF_NoEnableAndReset_CtA_T ARID_DEF_NoEnableAndReset_mbvz;/* '<S23>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_Fc_nsaz_T ARID_DEF_NoReset_cl54;/* '<S22>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S22>/ATOM_TimeCnt' */
  ARID_DEF_NoEnableAndReset_CtA_T ARID_DEF_NoEnableAndReset_cxar;/* '<S13>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_FctSfty_T ARID_DEF_NoReset_bhxx;/* '<S12>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T ARID_DEF_ATOM_TimeCnt_pbm3;/* '<S12>/ATOM_TimeCnt' */
  dt_FctSftyMon_AccrPedlTqOverFltDTCInfo RTE_P_FctSftyMon_AccrPedlTqOver;
  /* '<Root>/RTE_P_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltDTCInfo_Bus' */
  dt_FctSftyMon_AccrPedlTqOverFltInfo RTE_P_FctSftyMon_AccrPedlT_otmn;
  /* '<Root>/RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus' */
  dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo RTE_P_FctSftyMon_CrpCtrlTqOverF;
  /* '<Root>/RTE_P_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltDTCInfo_Bus' */
  dt_FctSftyMon_CrpCtrlTqOverFltInfo RTE_P_FctSftyMon_CrpCtrlTq_ex2t;
  /* '<Root>/RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus' */
  dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo RTE_P_FctSftyMon_DesVehDecelSpd;
  /* '<Root>/RTE_P_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_Bus' */
  dt_FctSftyMon_DesVehDecelSpdOverFltInfo RTE_P_FctSftyMon_DesVehDec_djf3;
  /* '<Root>/RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus' */
  uint8_T Switch;                      /* '<S37>/Switch' */
  uint8_T Switch8;                     /* '<S37>/Switch8' */
  uint8_T Switch_gjro;                 /* '<S26>/Switch' */
  uint8_T Switch8_g12k;                /* '<S26>/Switch8' */
  uint8_T Switch_kkba;                 /* '<S16>/Switch' */
  uint8_T Switch8_lwtu;                /* '<S16>/Switch8' */
  boolean_T Switch6;                   /* '<S16>/Switch6' */
  boolean_T OneDelay_DSTATE;           /* '<S31>/OneDelay' */
  boolean_T OneDelay_DSTATE_kulb;      /* '<S22>/OneDelay' */
  boolean_T OneDelay_DSTATE_pwrv;      /* '<S12>/OneDelay' */
} ARID_DEF_CtAp_FctSftyTorq_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: FctSftyMon_AccrPedlLmtRvsMinTq_
   * Referenced by: '<S34>/FctSftyMon_AccrPedlLmtRvsMinTq_LUT'
   */
  uint32_T FctSftyMon_AccrPedlLmtRvsMinTq_[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqEco_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqNor_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP'
   *   '<S34>/FctSftyMon_AccrPedlLmtFwdTqSpt_MAP'
   */
  uint32_T pooled1[2];
} ConstP_CtAp_FctSftyTorq_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_FctSftyTorq_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"

extern ARID_DEF_CtAp_FctSftyTorq_T CtAp_FctSftyTorq_ARID_DEF;

#define CtAp_FctSftyTorq_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_FctSftyTorq_START_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

extern const ConstP_CtAp_FctSftyTorq_T CtAp_FctSftyTorq_ConstP;

#define CtAp_FctSftyTorq_STOP_SEC_VAR_CONST_8
#include "CtAp_FctSftyTorq_MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CtAp_FctSftyTorq'
 * '<S1>'   : 'CtAp_FctSftyTorq/DocBlock'
 * '<S2>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Init'
 * '<S4>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/CtAp_FctSftyTorq_Input'
 * '<S5>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/CtAp_FctSftyTorq_Output'
 * '<S6>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring'
 * '<S7>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring'
 * '<S8>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring'
 * '<S9>'   : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring'
 * '<S10>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Monitoring_Limit'
 * '<S11>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_Condition'
 * '<S12>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_DTC'
 * '<S13>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_FUSA'
 * '<S14>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_DTC/ATOM_TimeCnt'
 * '<S15>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_DTC/NoReset'
 * '<S16>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S17>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S18>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_FUSA/NoEnableAndReset'
 * '<S19>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S20>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Creep_Torque_Monitoring/Creep_Torque_Over_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 * '<S21>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_Condition'
 * '<S22>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_DTC'
 * '<S23>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_FUSA'
 * '<S24>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_DTC/ATOM_TimeCnt'
 * '<S25>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_DTC/NoReset'
 * '<S26>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S27>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S28>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_FUSA/NoEnableAndReset'
 * '<S29>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S30>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Deceleration_Monitoring/Deceleration_Over_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 * '<S31>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_DTC'
 * '<S32>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_FUSA'
 * '<S33>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Over_Fault_Condition'
 * '<S34>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Driver_Torque_Monitoring_Limit'
 * '<S35>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_DTC/ATOM_TimeCnt'
 * '<S36>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_DTC/NoReset'
 * '<S37>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S38>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S39>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_FUSA/NoEnableAndReset'
 * '<S40>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S41>'  : 'CtAp_FctSftyTorq/R_FctSftyTorq_Cyclic_10ms_sys/Function_Torque_Monitoring/Driver_Torque_Monitoring/Acceleration_Pedal_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 */

/*-
 * Requirements for '<Root>': CtAp_FctSftyTorq

 *
 * Inherited requirements for '<S2>/CtAp_FctSftyTorq_Input':
 *  1. SWREQ_05490 The function of "CAN Input" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_FctSftyTorq_Output':
 *  1. SWREQ_05492 The function of "CAN Input" has the following outputs:
 *
 * Inherited requirements for '<S7>/Creep_Torque_Monitoring_Limit':
 *  1. SWREQ_05498 FUSA creep torque Limit in Gear D
 *  2. SWREQ_05499 FUSA creep torque Limit in Gear R
 *  3. SWREQ_05500 FUSA creep torque Limit in Stop vehicle status
 *
 * Inherited requirements for '<S7>/Creep_Torque_Over_Fault_DTC':
 *  1. SWREQ_05558 P116D05 Set Conditon
 *  2. SWREQ_05559 P116D05 Reset Conditon
 *  3. SWREQ_05560 P116D05 Enable Conditon
 *  4. SWREQ_05561 P116D05
 *  5. SWREQ_05562 P116D05
 *  6. SWREQ_05563 P116D05
 *  7. SWREQ_05564 P116D05
 *
 * Inherited requirements for '<S7>/Creep_Torque_Over_Fault_FUSA':
 *  1. SWREQ_05519 FUSA Cpeep torque over fault Set Conditon
 *  2. SWREQ_05520 FUSA Cpeep torque over fault Reset Conditon
 *  3. SWREQ_05525 FUSA Cpeep torque over fault Error mature time
 *
 * Inherited requirements for '<S8>/Deceleration_Over_Fault_DTC':
 *  1. SWREQ_05571 P117205
 *  2. SWREQ_05572 P117205
 *  3. SWREQ_05573 P117205 Enable Conditon
 *  4. SWREQ_05574 P117205
 *  5. SWREQ_05575 P117205
 *  6. SWREQ_05576 P117205
 *  7. SWREQ_05577 P117205 Error mature time
 *
 * Inherited requirements for '<S8>/Deceleration_Over_Fault_FUSA':
 *  1. SWREQ_05538 FUSA Deceleration over fault Error mature time
 *  2. SWREQ_05532 FUSA Deceleration over fault Set Conditon
 *  3. SWREQ_05533 FUSA Deceleration over fault Reset Conditon
 *
 * Inherited requirements for '<S9>/Acceleration_Pedal_Torque_Fault_DTC':
 *  1. SWREQ_05545 P116C05 Set Conditon
 *  2. SWREQ_05546 P116C05 Reset Conditon
 *  3. SWREQ_05547 P116C05 Enable Conditon
 *  4. SWREQ_05548 P116C05
 *  5. SWREQ_05549 P116C05
 *  6. SWREQ_05550 P116C05
 *  7. SWREQ_05551 P116C05 Error mature time
 *  8. SWREQ_05552 P116C05
 *  9. SWREQ_05553 P116C05
 *
 * Inherited requirements for '<S9>/Acceleration_Pedal_Torque_Fault_FUSA':
 *  1. SWREQ_05506 FUSA Acceleration pedal torque over fault Set Conditon
 *  2. SWREQ_05507 FUSA Acceleration pedal torque over fault Reset Conditon
 *  3. SWREQ_05512 FUSA Acceleration pedal torque over fault Error mature time
 *
 * Inherited requirements for '<S9>/Driver_Torque_Monitoring_Limit':
 *  1. SWREQ_05496 FUSA  Accr Pedal torque Limit Gear D
 *  2. SWREQ_05497 FS  Accr Pedal torque Limit Gear R

 */
#endif                                 /* RTW_HEADER_CtAp_FctSftyTorq_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
