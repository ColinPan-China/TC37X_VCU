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
 *  Filename:           CtAp_VehStabyCtrl.h
 *  File Creation Date: 05-Aug-2025
 *  Model Name:         CtAp_VehStabyCtrl
 *  Model Version:      1.55
 *  Model Author:       Mike Ni - Fri Aug 16 10:24:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug  5 14:22:46 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 05 14:14:29 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_VehStabyCtrl_h_
#define RTW_HEADER_CtAp_VehStabyCtrl_h_
#ifndef CtAp_VehStabyCtrl_COMMON_INCLUDES_
#define CtAp_VehStabyCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_VehStabyCtrl.h"
#endif                                 /* CtAp_VehStabyCtrl_COMMON_INCLUDES_ */

#include "CtAp_VehStabyCtrl_types.h"
#include "Rte_Type.h"

/* Includes for objects with custom storage classes */
#include "CtAp_VehStabyCtrl_Glb.h"
#include "CtAp_VehStabyCtrl_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define VehStabyCtrl_DRIVEREADY        3U                        /* Referenced by: '<S8>/VehStabyCtrl_DRIVEREADY' *//* CtAp_VehStabyCtrl mode define drive ready */
#define VehStabyCtrl_GEAR_D            4U                        /* Referenced by:
                                                                  * '<S8>/VehStabyCtrl_GEAR_D'
                                                                  * '<S9>/VehStabyCtrl_GEAR_D'
                                                                  *//* CtAp_VehStabyCtrl mode define gear D */
#define VehStabyCtrl_GEAR_R            3U                        /* Referenced by:
                                                                  * '<S8>/VehStabyCtrl_GEAR_R'
                                                                  * '<S9>/VehStabyCtrl_GEAR_D1'
                                                                  *//* CtAp_VehStabyCtrl mode define gear R */
#define VehStabyCtrl_ZERO_TORQUE       0U                        /* Referenced by:
                                                                  * '<S9>/VehStabyCtrl_ZERO_TORQUE'
                                                                  * '<S9>/VehStabyCtrl_ZERO_TORQUE1'
                                                                  * '<S11>/VehStabyCtrl_ZERO_TORQUE'
                                                                  * '<S12>/VehStabyCtrl_ZERO_TORQUE'
                                                                  *//* CtAp_VehStabyCtrl mode define 0 torque */

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
 * '<Root>' : 'CtAp_VehStabyCtrl'
 * '<S1>'   : 'CtAp_VehStabyCtrl/DocBlock'
 * '<S2>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Init'
 * '<S4>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/CtAp_VehStabyCtrl_Input'
 * '<S5>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/CtAp_VehStabyCtrl_Output'
 * '<S6>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl'
 * '<S7>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst'
 * '<S8>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst_Available_Satus'
 * '<S9>'   : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/Torque_Limit'
 * '<S10>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBSIntvTq_status'
 * '<S11>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_IncreaseTorqueIntervention'
 * '<S12>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_ReductionTorqueIntervention'
 * '<S13>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_IncreaseTorqueIntervention/ATOM_Limiter'
 * '<S14>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_IncreaseTorqueIntervention/If'
 * '<S15>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_ReductionTorqueIntervention/ATOM_Limiter'
 * '<S16>'  : 'CtAp_VehStabyCtrl/R_VehStabyCtrl_Cyclic_10ms_sys/Function_VehicleStabilityControl/ESC_Torque_Requst/IBS_ReductionTorqueIntervention/If'
 */

/*-
 * Requirements for '<Root>': CtAp_VehStabyCtrl

 *
 * Inherited requirements for '<S2>/CtAp_VehStabyCtrl_Input':
 *  1. SWREQ_01531 The function of "Vehicle Standby Control" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_VehStabyCtrl_Output':
 *  1. SWREQ_01533 The function of "Vehicle Standby Control" has the following outputs:
 *
 * Inherited requirements for '<S6>/Torque_Limit':
 *  1. SWREQ_06026 TCS/VDC torque requst limit
 *  2. SWREQ_01546 TCS/VDC torque requst limit
 *  3. SWREQ_01549 DTC torque requst limit
 *  4. SWREQ_06027 DTC torque requst limit

 */
#endif                                 /* RTW_HEADER_CtAp_VehStabyCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
