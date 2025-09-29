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
 *  Filename:           CtAp_TorqFil.h
 *  File Creation Date: 07-Nov-2024
 *  Model Name:         CtAp_TorqFil
 *  Model Version:      1.31
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:25 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Nov  7 09:45:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Nov 07 09:44:30 2024
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqFil_h_
#define RTW_HEADER_CtAp_TorqFil_h_
#ifndef CtAp_TorqFil_COMMON_INCLUDES_
#define CtAp_TorqFil_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqFil.h"
#endif                                 /* CtAp_TorqFil_COMMON_INCLUDES_ */

#include "CtAp_TorqFil_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TorqFil_Glb.h"
#include "CtAp_TorqFil_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqFil_Dt                     0.01F                     /* Referenced by:
                                                                  * '<S6>/TorqFil_Dt'
                                                                  * '<S6>/TorqFil_Dt1'
                                                                  *//* the CtAp_TorqFil model sample time */

/* PublicStructure Variables for Internal Data, for system '<S6>/LowPassFilter1' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S8>/Delay' */
} ARID_DEF_LowPassFilter_CtAp_T_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_LowPassFilter_CtAp_T_T ARID_DEF_LowPassFilter2;/* '<S6>/LowPassFilter2' */
  ARID_DEF_LowPassFilter_CtAp_T_T ARID_DEF_LowPassFilter1;/* '<S6>/LowPassFilter1' */
} ARID_DEF_CtAp_TorqFil_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqFil_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"

extern ARID_DEF_CtAp_TorqFil_T CtAp_TorqFil_ARID_DEF;

#define CtAp_TorqFil_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqFil_MemMap.h"

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
 * '<Root>' : 'CtAp_TorqFil'
 * '<S1>'   : 'CtAp_TorqFil/DocBlock'
 * '<S2>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqFil/R_TorqFil_Init'
 * '<S4>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/CtAp_TorqFil_Input'
 * '<S5>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/CtAp_TorqFil_Output'
 * '<S6>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/Function_TorqueReferenceFilter'
 * '<S7>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/Function_TorqueReferenceFilter/ATOM_Limiter'
 * '<S8>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/Function_TorqueReferenceFilter/LowPassFilter1'
 * '<S9>'   : 'CtAp_TorqFil/R_TorqFil_Cyclic_10ms_sys/Function_TorqueReferenceFilter/LowPassFilter2'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqFil

 *
 * Inherited requirements for '<S2>/CtAp_TorqFil_Input':
 *  1. SWREQ_01770 The function of "Torque Filter" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_TorqFil_Output':
 *  1. SWREQ_01772 The function of "Torque Filter" has the following outputs:
 *
 * Inherited requirements for '<S2>/Function_TorqueReferenceFilter':
 *  1. SWREQ_01776 The desired propolsion torque 'ChassisMgmt_DrvCoorrDesTq_Nm' is limited by 'TorqPahMgmt_EmacQstyMaxTq_Nm' and 'TorqPahMgmt_EmacQstyMinTq_Nm' and filtered by a second-order lowpass filter. The time constant for the filter is calibratable by two seperate parameters. Which parameters is selected depends on: The state of highest prior torque demand ChassisMgmt_DrvDmdHiPrio_Flg . If no driver request is present, the filters can be deactivated via TorqPahMgmt_TqRefFilDasTim_CFG
 *  2. SWREQ_01778 desired propolsion torque filtered
 *  3. SWREQ_01779 desired propolsion torque filtered coefficient set
 *  4. SWREQ_01777 desired propolsion torque Limit

 */
#endif                                 /* RTW_HEADER_CtAp_TorqFil_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
