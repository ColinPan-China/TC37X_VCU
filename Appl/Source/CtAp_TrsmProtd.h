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
 *  Filename:           CtAp_TrsmProtd.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TrsmProtd
 *  Model Version:      1.45
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:53:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:52:53 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TrsmProtd_h_
#define RTW_HEADER_CtAp_TrsmProtd_h_
#ifndef CtAp_TrsmProtd_COMMON_INCLUDES_
#define CtAp_TrsmProtd_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TrsmProtd.h"
#endif                                 /* CtAp_TrsmProtd_COMMON_INCLUDES_ */

#include "CtAp_TrsmProtd_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TrsmProtd_Glb.h"
#include "CtAp_TrsmProtd_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TrsmProtd_ESC_OFF              0U                        /* Referenced by: '<S7>/TrsmProtd_ESC_OFF' *//* CtAp_TrsmProtd define ESC status */
#define TrsmProtd_GEAR_D               4U                        /* Referenced by: '<S8>/TrsmProtd_GEAR_D' *//* CtAp_TrsmProtd define GEAR status */
#define TrsmProtd_GEAR_R               3U                        /* Referenced by: '<S8>/TrsmProtd_GEAR_R' *//* CtAp_TrsmProtd define GEAR status */
#define TrsmProtd_ZERO_TORQUE          0.0F                      /* Referenced by: '<S8>/TrsmProtd_ZERO_TORQUE' *//* CtAp_TrsmProtd define 0 torque */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S9>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_RS_FF_CtAp_Trsm_T ARID_DEF_ATOM_RS_FF;/* '<S7>/ATOM_RS_FF' */
} ARID_DEF_CtAp_TrsmProtd_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TrsmProtd_START_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"

extern ARID_DEF_CtAp_TrsmProtd_T CtAp_TrsmProtd_ARID_DEF;

#define CtAp_TrsmProtd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TrsmProtd_MemMap.h"

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
 * '<Root>' : 'CtAp_TrsmProtd'
 * '<S1>'   : 'CtAp_TrsmProtd/DocBlock'
 * '<S2>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Init'
 * '<S4>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/CtAp_TrsmProtd_Input'
 * '<S5>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/CtAp_TrsmProtd_Output'
 * '<S6>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/Function_Transmission_Protection'
 * '<S7>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/Function_Transmission_Protection/Motor_Differential_Protection_Condition'
 * '<S8>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/Function_Transmission_Protection/Motor_Differential_Protection_Torque_Limit'
 * '<S9>'   : 'CtAp_TrsmProtd/R_TrsmProtd_Cyclic_10ms_sys/Function_Transmission_Protection/Motor_Differential_Protection_Condition/ATOM_RS_FF'
 */

/*-
 * Requirements for '<Root>': CtAp_TrsmProtd

 *
 * Inherited requirements for '<Root>/R_TrsmProtd_Cyclic_10ms_sys':
 *  1. SWREQ_01948 The function of "Torque Transition Protection" has the following parameters:
 *
 * Inherited requirements for '<S6>/Motor_Differential_Protection_Torque_Limit':
 *  1. SWREQ_01952 Torque Transition Protection Inctive Torque Set
 *  2. SWREQ_05651 Torque Transition Protection  Torque GearD
 *  3. SWREQ_05652 Torque Transition Protection  Torque GearR

 */
#endif                                 /* RTW_HEADER_CtAp_TrsmProtd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
