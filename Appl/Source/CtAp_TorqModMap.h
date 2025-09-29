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
 *  Filename:           CtAp_TorqModMap.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_TorqModMap
 *  Model Version:      1.111
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 18:56:13 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 18:55:43 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqModMap_h_
#define RTW_HEADER_CtAp_TorqModMap_h_
#ifndef CtAp_TorqModMap_COMMON_INCLUDES_
#define CtAp_TorqModMap_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqModMap.h"
#endif                                 /* CtAp_TorqModMap_COMMON_INCLUDES_ */

#include "CtAp_TorqModMap_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TorqModMap_Glb.h"
#include "CtAp_TorqModMap_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqModMap_DRIVE_READY         3U                        /* Referenced by: '<S9>/TorqModMap_DRIVE_READY' *//* CtAp_TorqModMap Mode define drive ready */
#define TorqModMap_INVALID             false                     /* Referenced by:
                                                                  * '<S8>/TorqModMap_INVALID'
                                                                  * '<S8>/TorqModMap_INVALID1'
                                                                  *//* CtAp_TorqModMap Mode define Invalid */
#define TorqModMap_SAMPLE_TIME         0.01F                     /* Referenced by: '<S10>/TorqModMap_SAMPLE_TIME' *//* CtAp_TorqModMap Mode define sample time */
#define TorqModMap_TIME_STEP           10U                       /* Referenced by: '<S7>/TorqModMap_TIME_STEP' *//* CtAp_TorqModMap Mode define sample time */
#define TorqModMap_VALID               true                      /* Referenced by:
                                                                  * '<S8>/TorqModMap_VALID'
                                                                  * '<S8>/TorqModMap_VALID1'
                                                                  *//* CtAp_TorqModMap Mode define valid */
#define TorqModMap_ZEAR_TORQUE         0.0F                      /* Referenced by: '<S9>/TorqModMap_ZEAR_TORQUE' *//* CtAp_TorqModMap Mode define 0Nm */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S11>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_To_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_To_T ARID_DEF_ATOM_TimeCnt;/* '<S7>/ATOM_TimeCnt' */
} ARID_DEF_CtAp_TorqModMap_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqModMap_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"

extern ARID_DEF_CtAp_TorqModMap_T CtAp_TorqModMap_ARID_DEF;

#define CtAp_TorqModMap_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqModMap_MemMap.h"

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
 * '<Root>' : 'CtAp_TorqModMap'
 * '<S1>'   : 'CtAp_TorqModMap/DocBlock'
 * '<S2>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqModMap/R_TorqModMap_Init'
 * '<S4>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/CtAp_TorqModMap_Input'
 * '<S5>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/CtAp_TorqModMap_Output'
 * '<S6>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap'
 * '<S7>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/DesireTorqueAndMotorActualTorqueFault'
 * '<S8>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/Motor_Info'
 * '<S9>'   : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/System_Limitation_Status'
 * '<S10>'  : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/TorqueSlope'
 * '<S11>'  : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/DesireTorqueAndMotorActualTorqueFault/ATOM_TimeCnt'
 * '<S12>'  : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/System_Limitation_Status/ATOM_Limiter'
 * '<S13>'  : 'CtAp_TorqModMap/R_TorqModMap_Cyclic_10ms_sys/Function_TorqModMap/TorqueSlope/ATOM_DlyRatRmpLmt'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqModMap

 *
 * Inherited requirements for '<S6>/DesireTorqueAndMotorActualTorqueFault':
 *  1. SWREQ_06728 Desired motor torque Over Motor Torque Fault
 *  2. SWREQ_06729 Desired motor torque Over Motor Torque Fault clear
 *
 * Inherited requirements for '<S6>/Motor_Info':
 *  1. SWREQ_01923 Forward motor info to CH can
 *  2. SWREQ_01924 Forward motor info to CH can
 *
 * Inherited requirements for '<S6>/System_Limitation_Status':
 *  1. SWREQ_01920 CAN require torque clear
 *  2. SWREQ_01921 CAN require torque Limit
 *
 * Inherited requirements for '<S6>/TorqueSlope':
 *  1. SWREQ_01922 CAN require torque Limit

 */
#endif                                 /* RTW_HEADER_CtAp_TorqModMap_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
