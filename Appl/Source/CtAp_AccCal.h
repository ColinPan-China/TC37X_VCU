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
 *  Filename:           CtAp_AccCal.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:40:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:39:42 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_AccCal_h_
#define RTW_HEADER_CtAp_AccCal_h_
#ifndef CtAp_AccCal_COMMON_INCLUDES_
#define CtAp_AccCal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_AccCal.h"
#endif                                 /* CtAp_AccCal_COMMON_INCLUDES_ */

#include "CtAp_AccCal_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_AccCal_Glb.h"
#include "CtAp_AccCal_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define AccCal_False                   false                     /* Referenced by:
                                                                  * '<S6>/Constant1'
                                                                  * '<S6>/Constant3'
                                                                  */
#define AccCal_GearD                   4U                        /* Referenced by:
                                                                  * '<S10>/Constant'
                                                                  * '<S13>/Constant'
                                                                  */
#define AccCal_SingleZero              0.0F                      /* Referenced by:
                                                                  * '<S11>/Constant'
                                                                  * '<S14>/Constant'
                                                                  * '<S16>/Constant'
                                                                  */
#define AccCal_True                    true                      /* Referenced by:
                                                                  * '<S6>/Constant'
                                                                  * '<S6>/Constant2'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S4>/ATOM_SingleLPF' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S7>/Delay' */
} ARID_DEF_ATOM_SingleLPF_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_SingleLPF_CtAp__T ARID_DEF_ATOM_SingleLPF;/* '<S5>/ATOM_SingleLPF' */
  ARID_DEF_ATOM_SingleLPF_CtAp__T ARID_DEF_ATOM_SingleLPF_mbvz;/* '<S4>/ATOM_SingleLPF' */
  real32_T Delay_DSTATE[5];            /* '<S4>/Delay' */
  boolean_T Delay_DSTATE_hn4n;         /* '<S6>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S6>/Delay1' */
  boolean_T AcclrCalculate_MODE;       /* '<S2>/AcclrCalculate' */
} ARID_DEF_CtAp_AccCal_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_AccCal_START_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"

extern ARID_DEF_CtAp_AccCal_T CtAp_AccCal_ARID_DEF;

#define CtAp_AccCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"

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
 * '<Root>' : 'CtAp_AccCal'
 * '<S1>'   : 'CtAp_AccCal/DocBlock'
 * '<S2>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_AccCal/R_AccCal_Init'
 * '<S4>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/AcclrCalculate'
 * '<S5>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/AcclrSwitch'
 * '<S6>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi'
 * '<S7>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/AcclrCalculate/ATOM_SingleLPF'
 * '<S8>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/AcclrSwitch/ATOM_SingleLPF'
 * '<S9>'   : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/AcclrSwitch/CompareToConstant'
 * '<S10>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant'
 * '<S11>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant1'
 * '<S12>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant2'
 * '<S13>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant3'
 * '<S14>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant4'
 * '<S15>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant5'
 * '<S16>'  : 'CtAp_AccCal/R_AccCal_Cyclic_10ms_sys/RegenBrkLi/CompareToConstant6'
 */

/*-
 * Requirements for '<Root>': CtAp_AccCal

 *
 * Inherited requirements for '<S2>/AcclrCalculate':
 *  1. SWREQ_03762 VehSpdAcclr calculate
 *
 * Inherited requirements for '<S2>/AcclrSwitch':
 *  1. SWREQ_03767 Acclr Switch
 *  2. SWREQ_03766 IBS Acclr Low Pass filter
 *
 * Inherited requirements for '<S2>/RegenBrkLi':
 *  1. SWREQ_03763 RegenBrakeLight On
 *  2. SWREQ_03764 RegenBrakeLight Off
 *  3. SWREQ_03765 RegenBrakeLight Keep
 *
 * Inherited requirements for '<S5>/ATOM_SingleLPF':
 *  1. SWREQ_03766 IBS Acclr Low Pass filter

 */
#endif                                 /* RTW_HEADER_CtAp_AccCal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
