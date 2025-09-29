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
 *  Filename:           CtAp_DrvTorqCoor.h
 *  File Creation Date: 18-Mar-2025
 *  Model Name:         CtAp_DrvTorqCoor
 *  Model Version:      1.68
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Mar 18 10:24:57 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Mar 18 10:24:21 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DrvTorqCoor_h_
#define RTW_HEADER_CtAp_DrvTorqCoor_h_
#ifndef CtAp_DrvTorqCoor_COMMON_INCLUDES_
#define CtAp_DrvTorqCoor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DrvTorqCoor.h"
#endif                                 /* CtAp_DrvTorqCoor_COMMON_INCLUDES_ */

#include "CtAp_DrvTorqCoor_types.h"

/* Includes for objects with custom storage classes */
#include "CtAp_DrvTorqCoor_Glb.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DrvTorqCoor_GEAR_D             4U                        /* Referenced by: '<S14>/Constant' *//* CtAp_DrvTorqCoor mode define gear D */
#define DrvTorqCoor_GEAR_R             3U                        /* Referenced by: '<S15>/Constant' *//* CtAp_DrvTorqCoor mode define gear r */
#define DrvTorqCoor_OFF                false                     /* Referenced by: '<S9>/DrvTorqCoor_OFF' *//* CtAp_DrvTorqCoor mode define off
                                                                      */
#define DrvTorqCoor_POS2NEG            -1.0F                     /* Referenced by:
                                                                  * '<S8>/Gain'
                                                                  * '<S8>/Gain1'
                                                                  *//* CtAp_DrvTorqCoor mode define coefficent */
#define DrvTorqCoor_ZERO_TORQUE        0.0F                      /* Referenced by:
                                                                  * '<S9>/DrvTorqCoor_ZERO_TORQUE'
                                                                  * '<S10>/Constant'
                                                                  * '<S11>/Constant'
                                                                  * '<S12>/Constant'
                                                                  * '<S13>/Constant'
                                                                  *//* CtAp_DrvTorqCoor mode define 0 torque
                                                                     */

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
 * '<Root>' : 'CtAp_DrvTorqCoor'
 * '<S1>'   : 'CtAp_DrvTorqCoor/DocBlock'
 * '<S2>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Init'
 * '<S4>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/CtAp_DrvTorqCoor_Input'
 * '<S5>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/CtAp_DrvTorqCoor_Output'
 * '<S6>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator'
 * '<S7>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearD'
 * '<S8>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearR'
 * '<S9>'   : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DrvTqCoor'
 * '<S10>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearD/CompareToConstant'
 * '<S11>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearD/CompareToConstant1'
 * '<S12>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearD/CompareToConstant2'
 * '<S13>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DriveTorqueCoordinator_GearR/CompareToConstant'
 * '<S14>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DrvTqCoor/CompareToConstant'
 * '<S15>'  : 'CtAp_DrvTorqCoor/R_DrvTorqCoor_Cyclic_10ms_sys/Function_DriveTorqueCoordinator/DrvTqCoor/CompareToConstant1'
 */

/*-
 * Requirements for '<Root>': CtAp_DrvTorqCoor

 *
 * Inherited requirements for '<S2>/CtAp_DrvTorqCoor_Input':
 *  1. SWREQ_01641 The function of "Drive Torque Coordinator" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_DrvTorqCoor_Output':
 *  1. SWREQ_01643 The function of "Drive Torque Coordinator" has the following outputs:
 *
 * Inherited requirements for '<S6>/DriveTorqueCoordinator_GearD':
 *  1. SWREQ_01647 Gear D Driver DriveTorque Priority Judgment
 *  2. SWREQ_01648 Gear D Driver DriveTorque Priority Judgment
 *  3. SWREQ_01650 Gear D  VLC Torque  Active
 *  4. SWREQ_01651 Gear D VLC torque  Inctive
 *  5. SWREQ_01653 Gear D APS Torque Coordinate
 *  6. SWREQ_01655 Gear D Brake Torque Coordinate
 *  7. SWREQ_01652 Gear D APS Torque Coordinate
 *  8. SWREQ_01654 Gear D Brake Torque Coordinate
 *  9. SWREQ_01656 Gear D  Speed Limit Torque Coordinate
 *  10. SWREQ_01649 Gear D Driver DriveTorque Priority Judgment
 *
 * Inherited requirements for '<S6>/DriveTorqueCoordinator_GearR':
 *  1. SWREQ_01657 Gear R APS Torque Coordinate
 *  2. SWREQ_01658 Gear R APS Torque Coordinate
 *  3. SWREQ_01659 Gear R  Driver DriveTorque Priority Judgment
 *  4. SWREQ_01661 Gear R Speed Limit Torque Coordinate
 *  5. SWREQ_01660 Gear R  Driver DriveTorque Priority Judgment

 */
#endif                                 /* RTW_HEADER_CtAp_DrvTorqCoor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
