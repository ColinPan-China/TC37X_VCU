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
 *  Filename:           CtAp_AccrPedlDrv.h
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
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_AccrPedlDrv_h_
#define RTW_HEADER_CtAp_AccrPedlDrv_h_
#ifndef CtAp_AccrPedlDrv_COMMON_INCLUDES_
#define CtAp_AccrPedlDrv_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_AccrPedlDrv.h"
#endif                                 /* CtAp_AccrPedlDrv_COMMON_INCLUDES_ */

#include "CtAp_AccrPedlDrv_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_AccrPedlDrv_Glb.h"
#include "CtAp_AccrPedlDrv_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define AccrPedlDrv_DRIVEREADY         3U                        /* Referenced by: '<S7>/AccrPedlDrv_DRIVEREADY' *//* CtAp_AccrPedlDrv mode define drive ready */
#define AccrPedlDrv_GEAR_D             4U                        /* Referenced by: '<S11>/Gear AccrPedlDrv_GEAR_D' *//* CtAp_AccrPedlDrv mode define gear D */
#define AccrPedlDrv_GEAR_R             3U                        /* Referenced by:
                                                                  * '<S9>/AccrPedlDrv_GEAR_R'
                                                                  * '<S11>/AccrPedlDrv_GEAR_R'
                                                                  *//* CtAp_AccrPedlDrv mode define gear R */
#define AccrPedlDrv_SAMPLE_TIME        0.01F                     /* Referenced by: '<S14>/AccrPedlDrv_SAMPLE_TIME' *//* CtAp_AccrPedlDrv mode define sample time */
#define AccrPedlDrv_SPEED_COEFFICENT   -1.0F                     /* Referenced by: '<S9>/AccrPedlDrv_SPEED_COEFFICENT' *//* CtAp_AccrPedlDrv mode define 0 vehicle speed */
#define AccrPedlDrv_ZERO_SPEED         0.0F                      /* Referenced by: '<S9>/AccrPedlDrv_ZERO_SPEED' *//* CtAp_AccrPedlDrv mode define 0 vehicle speed */
#define AccrPedlDrv_ZERO_TORQUE        0.0F                      /* Referenced by:
                                                                  * '<S10>/AccrPedlDrv_ZERO_TORQUE2'
                                                                  * '<S11>/AccrPedlDrv_ZERO_TORQUE'
                                                                  * '<S12>/AccrPedlDrv_ZERO_TORQUE'
                                                                  * '<S12>/AccrPedlDrv_ZERO_TORQUE1'
                                                                  * '<S13>/AccrPedlDrv_ZERO_TORQUE'
                                                                  *//* CtAp_AccrPedlDrv mode define 0 torque */

/* PublicStructure Variables for Internal Data, for system '<S14>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S17>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_Accr_T;

/* PublicStructure Variables for Internal Data, for system '<S14>/LowPassFilter' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S18>/Delay' */
} ARID_DEF_LowPassFilter_CtAp_A_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_LowPassFilter_CtAp_A_T ARID_DEF_LowPassFilter;/* '<S14>/LowPassFilter' */
  ARID_DEF_ATOM_RS_FF_CtAp_Accr_T ARID_DEF_ATOM_RS_FF;/* '<S14>/ATOM_RS_FF' */
  real32_T ChassisMgmt_PrevAccrPedlDrvModD;/* '<S8>/Delay1' */
  uint8_T Delay_DSTATE;                /* '<S14>/Delay' */
  uint8_T Delay2_DSTATE;               /* '<S14>/Delay2' */
} ARID_DEF_CtAp_AccrPedlDrv_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S12>/ChassisMgmt_AccrPedlDrvModEcoDesTq_MAP'
   *   '<S12>/ChassisMgmt_AccrPedlDrvModNormDesTq_MAP'
   *   '<S12>/ChassisMgmt_AccrPedlDrvModOPDesTq_MAP'
   *   '<S12>/ChassisMgmt_AccrPedlDrvModSptDesTq_MAP'
   *   '<S13>/ChassisMgmt_AccrPedlDrvModReqTqGearR_MAP'
   */
  uint32_T pooled2[2];
} ConstP_CtAp_AccrPedlDrv_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_AccrPedlDrv_START_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"

extern ARID_DEF_CtAp_AccrPedlDrv_T CtAp_AccrPedlDrv_ARID_DEF;

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccrPedlDrv_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_AccrPedlDrv_START_SEC_VAR_CONST_8
#include "CtAp_AccrPedlDrv_MemMap.h"

extern const ConstP_CtAp_AccrPedlDrv_T CtAp_AccrPedlDrv_ConstP;

#define CtAp_AccrPedlDrv_STOP_SEC_VAR_CONST_8
#include "CtAp_AccrPedlDrv_MemMap.h"

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
 * '<Root>' : 'CtAp_AccrPedlDrv'
 * '<S1>'   : 'CtAp_AccrPedlDrv/DocBlock'
 * '<S2>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Init'
 * '<S4>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/CtAp_AccrPedlDrv_Input'
 * '<S5>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/CtAp_AccrPedlDrv_Output'
 * '<S6>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive'
 * '<S7>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Status'
 * '<S8>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate'
 * '<S9>'   : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Vehicle_Speed_Used'
 * '<S10>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Accelerate_Pedal_Drive_Torque_Limit'
 * '<S11>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Accelerate_Pedal_Drive_Torque_Management'
 * '<S12>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/DriveMode_GearD'
 * '<S13>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/DriveMode_GearR'
 * '<S14>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Vehicle_Drive_Mode_Switch_Torque_Filter'
 * '<S15>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Accelerate_Pedal_Drive_Torque_Limit/ATOM_Limiter'
 * '<S16>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Accelerate_Pedal_Drive_Torque_Management/If'
 * '<S17>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Vehicle_Drive_Mode_Switch_Torque_Filter/ATOM_RS_FF'
 * '<S18>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Accelerate_Pedal_Drive_Torque_Calculate/Vehicle_Drive_Mode_Switch_Torque_Filter/LowPassFilter'
 * '<S19>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Vehicle_Speed_Used/If'
 * '<S20>'  : 'CtAp_AccrPedlDrv/R_AccrPedlDrv_Cyclic_10ms_sys/Fun_AcceleratePedalDrive/Vehicle_Speed_Used/If1'
 */

/*-
 * Requirements for '<Root>': CtAp_AccrPedlDrv

 *
 * Inherited requirements for '<S2>/CtAp_AccrPedlDrv_Input':
 *  1. SWREQ_01416 The function of "Accelerate pedal Drive" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_AccrPedlDrv_Output':
 *  1. SWREQ_01418 The function of "Accelerate pedal Drive" has the following outputs:
 *
 * Inherited requirements for '<S6>/Accelerate_Pedal_Drive_Status':
 *  1. SWREQ_01422 Driver desired torque Mode Active
 *  2. SWREQ_01423 Driver desired  drive torque Mode InActive
 *
 * Inherited requirements for '<S6>/Vehicle_Speed_Used':
 *  1. SWREQ_01424 Vehicle speed use
 *  2. SWREQ_01425 Vehicle speed use Gear R
 *  3. SWREQ_01426 Vehicle speed use Gear D
 *
 * Inherited requirements for '<S8>/Accelerate_Pedal_Drive_Torque_Management':
 *  1. SWREQ_01433 driver mode torque request
 *
 * Inherited requirements for '<S8>/DriveMode_GearD':
 *  1. SWREQ_01427 AP  Gear D drive mode Sport torque request
 *  2. SWREQ_01428 AP  Gear D drive mode torque request
 *  3. SWREQ_01429 AP  Gear D drive mode torque request
 *  4. SWREQ_01430 AP  Gear D drive mode torque request
 *  5. SWREQ_01432 AP  drive mode torque request
 *  6. SWREQ_01433 driver mode torque request
 *
 * Inherited requirements for '<S8>/DriveMode_GearR':
 *  1. SWREQ_01431 AP  Gear R drive mode torque request
 *
 * Inherited requirements for '<S8>/Vehicle_Drive_Mode_Switch_Torque_Filter':
 *  1. SWREQ_01434 Torque filter and limit

 */
#endif                                 /* RTW_HEADER_CtAp_AccrPedlDrv_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
