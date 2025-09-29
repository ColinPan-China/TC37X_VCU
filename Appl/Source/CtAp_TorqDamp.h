/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CtAp_TorqDamp.h
 *
 * Code generated for Simulink model 'CtAp_TorqDamp'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Apr 14 18:18:38 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CtAp_TorqDamp_h_
#define RTW_HEADER_CtAp_TorqDamp_h_
#ifndef CtAp_TorqDamp_COMMON_INCLUDES_
#define CtAp_TorqDamp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqDamp.h"
#endif                                 /* CtAp_TorqDamp_COMMON_INCLUDES_ */

#include "CtAp_TorqDamp_types.h"

/* Includes for objects with custom storage classes */
#include "CtAp_TorqDamp_Glb.h"
#include "CtAp_TorqDamp_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqDamp_DRIVE_READY           3U                        /* Referenced by: '<S6>/TorqDamp_DRIVE_READY' *//* CtAp_TorqDamp model define DriveReady */
#define TorqDamp_DstC_EXT              1U                        /* Referenced by: '<S6>/TorqDamp_DstC_EXT' *//* CtAp_TorqDamp model define Gear R */
#define TorqDamp_DstC_OFF              0U                        /* Referenced by: '<S6>/TorqDamp_DstC_OFF' *//* CtAp_TorqDamp model define Gear R */

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
 * '<Root>' : 'CtAp_TorqDamp'
 * '<S1>'   : 'CtAp_TorqDamp/DocBlock'
 * '<S2>'   : 'CtAp_TorqDamp/R_TorqDamp_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqDamp/R_TorqDamp_Init'
 * '<S4>'   : 'CtAp_TorqDamp/R_TorqDamp_Cyclic_10ms_sys/CtAp_TorqDamp_Input'
 * '<S5>'   : 'CtAp_TorqDamp/R_TorqDamp_Cyclic_10ms_sys/CtAp_TorqDamp_Output'
 * '<S6>'   : 'CtAp_TorqDamp/R_TorqDamp_Cyclic_10ms_sys/Function'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqDamp

 *
 * Inherited requirements for '<S2>/CtAp_TorqDamp_Input':
 *  1. SWREQ_01887 The function of "Torque Dampling" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_TorqDamp_Output':
 *  1. SWREQ_01889 The function of "Torque Dampling" has the following outputs:
 *
 * Inherited requirements for '<S2>/Function':
 *  1. SWREQ_01893 Motor Active Damping control Active
 *  2. SWREQ_01894 Motor Active Damping control Inactive
 *  3. SWREQ_06436 Motor Active Damping Torque

 */
#endif                                 /* RTW_HEADER_CtAp_TorqDamp_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
