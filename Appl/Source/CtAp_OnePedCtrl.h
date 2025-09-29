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
 *  Filename:           CtAp_OnePedCtrl.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_OnePedCtrl
 *  Model Version:      1.70
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:33 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 17:57:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 17:57:11 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_OnePedCtrl_h_
#define RTW_HEADER_CtAp_OnePedCtrl_h_
#ifndef CtAp_OnePedCtrl_COMMON_INCLUDES_
#define CtAp_OnePedCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_OnePedCtrl.h"
#endif                                 /* CtAp_OnePedCtrl_COMMON_INCLUDES_ */

#include "CtAp_OnePedCtrl_types.h"
#include "Rte_Type.h"

/* Includes for objects with custom storage classes */
#include "CtAp_OnePedCtrl_Glb.h"
#include "CtAp_OnePedCtrl_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define OnePedCtrl_ACTIVE              1U                        /* Referenced by:
                                                                  * '<S8>/OnePedCtrl_ACTIVE'
                                                                  * '<S13>/OnePedCtrl_ACTIVE'
                                                                  *//* CtAp_OnePedCtrl mode define vehicle deceleration status active */
#define OnePedCtrl_DRIVE_READY         3U                        /* Referenced by: '<S14>/OnePedCtrl_DRIVE_READY' *//* Onepedal control define drive ready */
#define OnePedCtrl_ERROR               2U                        /* Referenced by: '<S13>/OnePedCtrl_ERROR' *//* CtAp_OnePedCtrl mode define vehicle deceleration status Error */
#define OnePedCtrl_GEAR_D              4U                        /* Referenced by:
                                                                  * '<S12>/OnePedCtrl_GEAR_D'
                                                                  * '<S13>/OnePedCtrl_GEAR_D'
                                                                  *//* Onepedal control define gear D */
#define OnePedCtrl_GEAR_R              3U                        /* Referenced by: '<S12>/OnePedCtrl_GEAR_R' *//* CtAp_OnePedCtrl define gear R */
#define OnePedCtrl_HDC_AVH_ACTIVE      2U                        /* Referenced by: '<S11>/OnePedCtrl_HDC_AVH_ACTIVE1' *//* CtAp_OnePedCtrl mode define IBS hdc status STANDBY */
#define OnePedCtrl_INVALID             2U                        /* Referenced by: '<S9>/OnePedCtrl_INVALID' *//* CtAp_OnePedCtrl mode define Invalid */
#define OnePedCtrl_MIN_DIVIDE          300.0F                    /* Referenced by: '<S8>/OnePedCtrl_MIN_DIVIDE' *//* CtAp_OnePedCtrl mode define min divide num */
#define OnePedCtrl_NO_ACTIVE           0U                        /* Referenced by: '<S13>/OnePedCtrl_NO_ACTIVE' *//* CtAp_OnePedCtrl mode define vehicle deceleration status no active */
#define OnePedCtrl_ONE_PEDAL           4U                        /* Referenced by:
                                                                  * '<S12>/OnePedCtrl_ONE_PEDAL'
                                                                  * '<S13>/OnePedCtrl_ONE_PEDAL'
                                                                  *//* Onepedal control define one pedal mode */

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
 * '<Root>' : 'CtAp_OnePedCtrl'
 * '<S1>'   : 'CtAp_OnePedCtrl/DocBlock'
 * '<S2>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Init'
 * '<S4>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/CtAp_OnePedCtrl_Input'
 * '<S5>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/CtAp_OnePedCtrl_Output'
 * '<S6>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control'
 * '<S7>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status'
 * '<S8>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/Vheicle_Deceleration_Calculation'
 * '<S9>'   : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/Brake_Allowed_Status'
 * '<S10>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/Common_Conditioning_Status'
 * '<S11>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/IBS_Allowed_Status'
 * '<S12>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/IBS_Standstill_Request'
 * '<S13>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/Vheicle_Deceleration_Status'
 * '<S14>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/OnePedal_Control_Mode_Status/Vheicle_Mode_Allowed_Status'
 * '<S15>'  : 'CtAp_OnePedCtrl/R_OnePedCtrl_Cyclic_10ms_sys/Function_OnePedal_Control/Vheicle_Deceleration_Calculation/ATOM_SafeDivide'
 */

/*-
 * Requirements for '<Root>': CtAp_OnePedCtrl

 *
 * Inherited requirements for '<S2>/CtAp_OnePedCtrl_Input':
 *  1. SWREQ_01682 The function of "One Pedal Control" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_OnePedCtrl_Output':
 *  1. SWREQ_01684 The function of "One Pedal Control" has the following outputs:
 *
 * Inherited requirements for '<S6>/Vheicle_Deceleration_Calculation':
 *  1. SWREQ_01691 Vehicle Deceleration Limit
 *  2. SWREQ_01692 Deceleration request Active
 *  3. SWREQ_01693 Deceleration request Inctive
 *  4. SWREQ_01689 Vehicle Deceleration Send to CAN
 *  5. SWREQ_01690 Vehicle Deceleration clear
 *  6. SWREQ_01688 Vehicle Deceleration calculate
 *
 * Inherited requirements for '<S7>/Brake_Allowed_Status':
 *  1. SWREQ_05910 Vehicle Deceleration common condition Active
 *
 * Inherited requirements for '<S7>/Common_Conditioning_Status':
 *  1. SWREQ_05910 Vehicle Deceleration common condition Active
 *  2. SWREQ_06015 Vehicle Deceleration common condition inActive
 *
 * Inherited requirements for '<S7>/IBS_Allowed_Status':
 *  1. SWREQ_05910 Vehicle Deceleration common condition Active
 *
 * Inherited requirements for '<S7>/IBS_Standstill_Request':
 *  1. SWREQ_01694 IBS Standstill Request
 *  2. SWREQ_01695 IBS Standstill Request clear
 *
 * Inherited requirements for '<S7>/Vheicle_Deceleration_Status':
 *  1. SWREQ_01688 Vehicle Deceleration calculate
 *  2. SWREQ_01689 Vehicle Deceleration Send to CAN
 *  3. SWREQ_01690 Vehicle Deceleration clear
 *
 * Inherited requirements for '<S7>/Vheicle_Mode_Allowed_Status':
 *  1. SWREQ_05910 Vehicle Deceleration common condition Active

 */
#endif                                 /* RTW_HEADER_CtAp_OnePedCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
