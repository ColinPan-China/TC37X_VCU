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
 *  Filename:           CtAp_ResEst.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ResEst
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Jun 26 10:04:51 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:46:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Thu Jul 03 10:45:41 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ResEst_h_
#define RTW_HEADER_CtAp_ResEst_h_
#ifndef CtAp_ResEst_COMMON_INCLUDES_
#define CtAp_ResEst_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ResEst.h"
#endif                                 /* CtAp_ResEst_COMMON_INCLUDES_ */

#include "CtAp_ResEst_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ResEst_Glb.h"
#include "CtAp_ResEst_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ResEst_PI                      3.1415F                   /* Referenced by: '<S4>/Constant2' */
#define ResEst_SingleZero              0.0F                      /* Referenced by: '<S9>/Constant1' */
#define ResEst_True                    true                      /* Referenced by: '<S4>/Constant1' */
#define SpdRatio                       10.418F                   /* Referenced by:
                                                                  * '<S1>/Gain'
                                                                  * '<S1>/Gain1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S10>/Delay' */
} ARID_DEF_CtAp_ResEst_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ResEst_START_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"

extern ARID_DEF_CtAp_ResEst_T CtAp_ResEst_ARID_DEF;/* '<S10>/Delay' */

#define CtAp_ResEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ResEst_MemMap.h"

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
 * '<Root>' : 'CtAp_ResEst'
 * '<S1>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys'
 * '<S2>'   : 'CtAp_ResEst/R_ResEst_Init'
 * '<S3>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/Computation_of_estimated_accelerations'
 * '<S4>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_CalcTrqDrag_Ini'
 * '<S5>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_calcTrqDrag'
 * '<S6>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/Computation_of_estimated_accelerations/ATOM_SafeDivide'
 * '<S7>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/Computation_of_estimated_accelerations/ATOM_SafeDivide1'
 * '<S8>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/Computation_of_estimated_accelerations/ATOM_SafeDivide2'
 * '<S9>'   : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_calcTrqDrag/ResEst_CalcTrqDragFilter'
 * '<S10>'  : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_calcTrqDrag/ResEst_CalcTrqDragFilter/Filtering'
 * '<S11>'  : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_calcTrqDrag/ResEst_CalcTrqDragFilter/If2'
 * '<S12>'  : 'CtAp_ResEst/R_ResEst_Cyclic_10ms_sys/ResEst_calcTrqDrag/ResEst_CalcTrqDragFilter/Filtering/Compare To Constant'
 */

/*-
 * Requirements for '<Root>': CtAp_ResEst

 */
#endif                                 /* RTW_HEADER_CtAp_ResEst_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
