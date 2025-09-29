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
 *  Filename:           CtAp_TorqLmt.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.161
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:32:31 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:31:46 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqLmt_h_
#define RTW_HEADER_CtAp_TorqLmt_h_
#ifndef CtAp_TorqLmt_COMMON_INCLUDES_
#define CtAp_TorqLmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqLmt.h"
#endif                                 /* CtAp_TorqLmt_COMMON_INCLUDES_ */

#include "CtAp_TorqLmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TorqLmt_Glb.h"
#include "CtAp_TorqLmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqLmt_Dt                     0.01F                     /* Referenced by:
                                                                  * '<S12>/TorqLmt_Dt'
                                                                  * '<S15>/TorqLmt_Dt'
                                                                  * '<S15>/TorqLmt_Dt1'
                                                                  *//* CtAp_TorqLmt sample time */
#define TorqLmt_GEAR_D                 4U                        /* Referenced by:
                                                                  * '<S10>/TorqModMap_GEAR_D'
                                                                  * '<S10>/TorqModMap_GEAR_D1'
                                                                  *//* CtAp_TorqLmt define gear D */
#define TorqLmt_GEAR_R                 3U                        /* Referenced by:
                                                                  * '<S10>/TorqModMap_GEAR_R'
                                                                  * '<S10>/TorqModMap_GEAR_R1'
                                                                  * '<S25>/TorqLmt_GEAR_R'
                                                                  *//* CtAp_TorqLmt define gear R */
#define TorqLmt_Kw2W                   1000.0F                   /* Referenced by:
                                                                  * '<S27>/TorqLmt_Kw2W'
                                                                  * '<S27>/TorqLmt_Kw2W1'
                                                                  *//* KW convert w */
#define TorqLmt_MCU_ALLOW_TQ           8U                        /* Referenced by: '<S11>/TorqLmt_MCU_ALLOW_TQ' *//* CtAp_TorqLmt define MCU  allow torque status */
#define TorqLmt_POS2NEG                -1.0F                     /* Referenced by: '<S27>/TorqLmt_POS2NEG' *//* Fixed Calibration value -1 */
#define TorqLmt_SAMPLE_TIME            10U                       /* Referenced by: '<S10>/TorqLmt_SAMPLE_TIME' *//* CtAp_TorqLmt define MCU  allow torque status */
#define TorqLmt_ZERO_POWER             0.0F                      /* Referenced by: '<S9>/TorqLmt_ZERO_POWER' *//* CtAp_TorqLmt define zero power */
#define TorqLmt_ZERO_TORQUE            0.0F                      /* Referenced by:
                                                                  * '<S17>/TorqLmt_ZERO_TORQUE'
                                                                  * '<S27>/TorqLmt_ZERO_TORQUE'
                                                                  *//* CtAp_TorqLmt define zero torque */

/* PublicStructure Variables for Internal Data, for system '<S10>/TimerTOff' */
typedef struct {
  uint16_T Delay1_DSTATE;              /* '<S21>/Delay1' */
  boolean_T icLoad;                    /* '<S21>/Delay1' */
} ARID_DEF_TimerTOff_CtAp_TorqL_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_AvgFilt' */
typedef struct {
  real32_T Delay2_DSTATE[10];          /* '<S22>/Delay2' */
  real32_T Delay3_DSTATE;              /* '<S22>/Delay3' */
  real32_T Delay1_DSTATE;              /* '<S22>/Delay1' */
} ARID_DEF_ATOM_AvgFilt_CtAp_To_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/LowPassFilter' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S23>/Delay' */
} ARID_DEF_LowPassFilter_CtAp_T_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_LowPassFilter_CtAp_T_T ARID_DEF_LowPassFilter1;/* '<S12>/LowPassFilter1' */
  ARID_DEF_LowPassFilter_CtAp_T_T ARID_DEF_LowPassFilter;/* '<S12>/LowPassFilter' */
  ARID_DEF_ATOM_AvgFilt_CtAp_To_T ARID_DEF_ATOM_AvgFilt;/* '<S12>/ATOM_AvgFilt' */
  ARID_DEF_TimerTOff_CtAp_TorqL_T ARID_DEF_TimerTOff;/* '<S10>/TimerTOff' */
  uint8_T OneDelay1_DSTATE;            /* '<S10>/OneDelay1' */
  uint8_T OneDelay_DSTATE;             /* '<S10>/OneDelay' */
} ARID_DEF_CtAp_TorqLmt_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: TorqPahMgmt_MotEff_MAP
   * Referenced by: '<S26>/TorqPahMgmt_MotEff_MAP'
   */
  real32_T TorqPahMgmt_MotEff_MAP_tableDat[1360];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S13>/TorqPahMgmt_MaxMotExtChartcTq_MAP'
   *   '<S13>/TorqPahMgmt_MinMotExtChartcTq_MAP'
   */
  uint32_T pooled2[2];

  /* Computed Parameter: TorqPahMgmt_MotEff_MAP_maxIndex
   * Referenced by: '<S26>/TorqPahMgmt_MotEff_MAP'
   */
  uint32_T TorqPahMgmt_MotEff_MAP_maxIndex[3];

  /* Computed Parameter: TorqPahMgmt_MotEff_MAP_dimSizes
   * Referenced by: '<S26>/TorqPahMgmt_MotEff_MAP'
   */
  uint32_T TorqPahMgmt_MotEff_MAP_dimSizes[3];
} ConstP_CtAp_TorqLmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqLmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"

extern ARID_DEF_CtAp_TorqLmt_T CtAp_TorqLmt_ARID_DEF;

#define CtAp_TorqLmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqLmt_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_TorqLmt_START_SEC_VAR_CONST_8
#include "CtAp_TorqLmt_MemMap.h"

extern const ConstP_CtAp_TorqLmt_T CtAp_TorqLmt_ConstP;

#define CtAp_TorqLmt_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqLmt_MemMap.h"

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
 * '<Root>' : 'CtAp_TorqLmt'
 * '<S1>'   : 'CtAp_TorqLmt/DocBlock'
 * '<S2>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqLmt/R_TorqLmt_Init'
 * '<S4>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/CtAp_TorqLmt_Input'
 * '<S5>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/CtAp_TorqLmt_Output'
 * '<S6>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit'
 * '<S7>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Desired_Limit_Torque'
 * '<S8>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Fault_Handling_Ramp_Slope'
 * '<S9>'   : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/ForbidEnergyRecovery'
 * '<S10>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/GearChangeStatus'
 * '<S11>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/HvDownFlg'
 * '<S12>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/MotSpeedFilter'
 * '<S13>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Motor_External_Characteristic_Limit'
 * '<S14>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation'
 * '<S15>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/RampFunc'
 * '<S16>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Torque_Limits_Mgmt'
 * '<S17>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Torque_Limits_Normal'
 * '<S18>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Fault_Handling_Ramp_Slope/MaxTorqRampSlope'
 * '<S19>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Fault_Handling_Ramp_Slope/MinTorqRampSlope'
 * '<S20>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/GearChangeStatus/TimerTOff'
 * '<S21>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/GearChangeStatus/TimerTOff/Stopwatch'
 * '<S22>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/MotSpeedFilter/ATOM_AvgFilt'
 * '<S23>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/MotSpeedFilter/LowPassFilter'
 * '<S24>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/MotSpeedFilter/LowPassFilter1'
 * '<S25>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/GearR'
 * '<S26>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Motor_Efficiency_Calculation'
 * '<S27>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Quasi_Stationary_Max_Power_Limits'
 * '<S28>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Quasi_Stationary_Max_Power_Limits/ATOM_Limiter'
 * '<S29>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Quasi_Stationary_Max_Power_Limits/ATOM_Limiter1'
 * '<S30>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Quasi_Stationary_Max_Power_Limits/If'
 * '<S31>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/Power_Limits_Calculation/Quasi_Stationary_Max_Power_Limits/If1'
 * '<S32>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/RampFunc/ATOM_RateRampLmt'
 * '<S33>'  : 'CtAp_TorqLmt/R_TorqLmt_Cyclic_10ms_sys/Function_Torque_Limit/RampFunc/ATOM_RateRampLmt1'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqLmt

 *
 * Inherited requirements for '<S2>/CtAp_TorqLmt_Input':
 *  1. SWREQ_01972 The function of "Torque Limit" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_TorqLmt_Output':
 *  1. SWREQ_01974 The function of "Torque Limit" has the following outputs:
 *  2. SWREQ_01981 Battery  dynamic power limit torque
 *
 * Inherited requirements for '<S6>/Desired_Limit_Torque':
 *  1. SWREQ_06440 Fault Handling and Delay Shutdown Zero Torque
 *  2. SWREQ_06439 Fault Handling and Delay Shutdown Zero Torque
 *
 * Inherited requirements for '<S6>/Motor_External_Characteristic_Limit':
 *  1. SWREQ_01978 Motor external characteristic limit and Torque Limit
 *
 * Inherited requirements for '<S6>/Torque_Limits_Mgmt':
 *  1. SWREQ_06441 Torque Limit Managerment
 *
 * Inherited requirements for '<S6>/Torque_Limits_Normal':
 *  1. SWREQ_01982 Torque Limit in normal status
 *
 * Inherited requirements for '<S8>/MinTorqRampSlope':
 *  1. SWREQ_06444 Motor Differential Protection Torque Limit Gradient
 *  2. SWREQ_01986 Fault Handling and Shutdown Gradient Zero Torque
 *  3. SWREQ_01987 Fault Handling and Shutdown Delay Gradient Zero Torque
 *  4. SWREQ_06447 Gear  and HV down  Torque Limit Gradient
 *  5. SWREQ_06448 Torque Limit Normal  Gradient
 *
 * Inherited requirements for '<S10>/TimerTOff':
 *  1. SWREQ_06446 Gear Change Status Inactive
 *
 * Inherited requirements for '<S12>/LowPassFilter':
 *  1. SWREQ_05653 Motor Speed conversion
 *
 * Inherited requirements for '<S12>/LowPassFilter1':
 *  1. SWREQ_05653 Motor Speed conversion
 *
 * Inherited requirements for '<S14>/Motor_Efficiency_Calculation':
 *  1. SWREQ_01979 Batter power limit  use Motor Speed
 *
 * Inherited requirements for '<S14>/Quasi_Stationary_Max_Power_Limits':
 *  1. SWREQ_01980 Battery  Quasi Stationary power limit torque in gear R
 *  2. SWREQ_06437 Battery  Quasi Stationary power limit torque in gear D

 */
#endif                                 /* RTW_HEADER_CtAp_TorqLmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
