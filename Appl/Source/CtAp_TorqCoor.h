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
 *  Filename:           CtAp_TorqCoor.h
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqCoor_h_
#define RTW_HEADER_CtAp_TorqCoor_h_
#ifndef CtAp_TorqCoor_COMMON_INCLUDES_
#define CtAp_TorqCoor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqCoor.h"
#endif                                 /* CtAp_TorqCoor_COMMON_INCLUDES_ */

#include "CtAp_TorqCoor_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TorqCoor_Glb.h"
#include "CtAp_TorqCoor_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqCoor_Dt                    0.01F                     /* Referenced by: '<S9>/TorqCoor_Dt' *//* CtAp_TorqCoor model sample time */

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_EdgeDetectFall' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S13>/Delay' */
} ARID_DEF_ATOM_EdgeDetectFall__T;

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S14>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_Torq_T;

/* PublicStructure Variables for Internal Data, for system '<S9>/ATOM_RateRampLmt' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S16>/Delay' */
} ARID_DEF_ATOM_RateRampLmt_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_RateRampLmt_CtA_T ARID_DEF_ATOM_RateRampLmt;/* '<S9>/ATOM_RateRampLmt' */
  ARID_DEF_ATOM_RS_FF_CtAp_Torq_T ARID_DEF_ATOM_RS_FF;/* '<S11>/ATOM_RS_FF' */
  ARID_DEF_ATOM_EdgeDetectFall__T ARID_DEF_ATOM_EdgeDetectFall;/* '<S11>/ATOM_EdgeDetectFall' */
} ARID_DEF_CtAp_TorqCoor_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"

extern ARID_DEF_CtAp_TorqCoor_T CtAp_TorqCoor_ARID_DEF;

#define CtAp_TorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"

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
 * '<Root>' : 'CtAp_TorqCoor'
 * '<S1>'   : 'CtAp_TorqCoor/DocBlock'
 * '<S2>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqCoor/R_TorqCoor_Init'
 * '<S4>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/CtAp_TorqCoor_Input'
 * '<S5>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/CtAp_TorqCoor_Output'
 * '<S6>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor'
 * '<S7>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter'
 * '<S8>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/System_Limitations'
 * '<S9>'   : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/Torque_Coordination'
 * '<S10>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter/DesiredTorque '
 * '<S11>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter/SlopeValue'
 * '<S12>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter/Torque_Coordination_Delta_Tq'
 * '<S13>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter/SlopeValue/ATOM_EdgeDetectFall'
 * '<S14>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/ESP_Interventions_Filter/SlopeValue/ATOM_RS_FF'
 * '<S15>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/System_Limitations/ATOM_Limiter'
 * '<S16>'  : 'CtAp_TorqCoor/R_TorqCoor_Cyclic_10ms_sys/Function_TorqCoor/Torque_Coordination/ATOM_RateRampLmt'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqCoor

 *
 * Inherited requirements for '<S6>/Torque_Coordination':
 *  1. SWREQ_06451 TCS/VDCV/DTC Torque Filter
 *
 * Inherited requirements for '<S7>/SlopeValue':
 *  1. SWREQ_01864 TCS/VDCV/DTC  Exit Ramp Active
 *  2. SWREQ_01865 TCS/VDCV/DTC  Exit Ramp inctive
 *  3. SWREQ_01866 TCS/VDCV/DTC  Exit Ramp keep
 *  4. SWREQ_01867 TCS/VDCV/DTC  Exit Ramp inctive ramp value
 *  5. SWREQ_06449 TCS/VDCV/DTC  Active Ramp value
 *  6. SWREQ_06450 TCS/VDCV/DTC  Exit Ramp inctive ramp value
 *
 * Inherited requirements for '<S7>/Torque_Coordination_Delta_Tq':
 *  1. SWREQ_01865 TCS/VDCV/DTC  Exit Ramp inctive

 */
#endif                                 /* RTW_HEADER_CtAp_TorqCoor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
