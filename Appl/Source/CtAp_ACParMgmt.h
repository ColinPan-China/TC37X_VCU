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
 *  Filename:           CtAp_ACParMgmt.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ACParMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:08 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:55:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:54:25 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ACParMgmt_h_
#define RTW_HEADER_CtAp_ACParMgmt_h_
#ifndef CtAp_ACParMgmt_COMMON_INCLUDES_
#define CtAp_ACParMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ACParMgmt.h"
#endif                                 /* CtAp_ACParMgmt_COMMON_INCLUDES_ */

#include "CtAp_ACParMgmt_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ACParMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ACParMgmt_ACPreheatAndChrgnPrepd 8U                      /* Referenced by: '<S13>/Constant' */
#define ACParMgmt_ChargePreparing      1U                        /* Referenced by: '<S10>/Define1' */
#define ACParMgmt_CpbyErr              2U                        /* Referenced by: '<S16>/Constant' */
#define ACParMgmt_HeatOnly             1U                        /* Referenced by: '<S11>/Constant' */
#define ACParMgmt_HvReady              2U                        /* Referenced by: '<S12>/Constant' */
#define ACParMgmt_Nopreheat            0U                        /* Referenced by: '<S15>/Constant' */
#define ACParMgmt_OBCDisabling         8U                        /* Referenced by: '<S10>/Define2' */
#define ACParMgmt_OBCEnabled           3U                        /* Referenced by: '<S10>/Define' */
#define ACParMgmt_PreheatComplete      4U                        /* Referenced by: '<S14>/Constant' */
#define ACParMgmt_Preheating           4U                        /* Referenced by: '<S17>/Constant' */
#define ACParMgmt_SingleZero           0.0F                      /* Referenced by: '<S9>/Define3' */
#define ACParMgmt_ThreePhase           1U                        /* Referenced by: '<S4>/Define1' */
#define ACParMgmt_ThreePhaseCoefficient 3.0F                     /* Referenced by: '<S4>/Define2' */

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint8_T Delay_DSTATE;                /* '<S10>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S10>/Delay1' */
  boolean_T Delay_DSTATE_nuon;         /* '<S8>/Delay' */
} ARID_DEF_CtAp_ACParMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ACParMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_ACParMgmt_MemMap.h"

extern ARID_DEF_CtAp_ACParMgmt_T CtAp_ACParMgmt_ARID_DEF;/* '<S10>/Delay' */

#define CtAp_ACParMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ACParMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_ACParMgmt'
 * '<S1>'   : 'CtAp_ACParMgmt/DocBlock'
 * '<S2>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Init'
 * '<S4>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_OBCOutpCpbyIDc'
 * '<S5>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc'
 * '<S6>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_VehReqIDc'
 * '<S7>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_OBCOutpCpbyIDc/If'
 * '<S8>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable'
 * '<S9>'   : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCIDc'
 * '<S10>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCOutp'
 * '<S11>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable/CompareToConstant1'
 * '<S12>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable/CompareToConstant2'
 * '<S13>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable/CompareToConstant3'
 * '<S14>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable/CompareToConstant4'
 * '<S15>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_PreHeatReqOutpDiable/CompareToConstant5'
 * '<S16>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCIDc/CompareToConstant'
 * '<S17>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCIDc/CompareToConstant3'
 * '<S18>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCIDc/If'
 * '<S19>'  : 'CtAp_ACParMgmt/R_ACParMgmt_Cyclic_50ms_sys/OBCMgmt_ReqOBCIDc/OBCMgmt_ReqOBCIDc/If1'
 */

/*-
 * Requirements for '<Root>': CtAp_ACParMgmt

 *
 * Inherited requirements for '<S4>/If':
 *  1. SWREQ_03692 CC Current lmt three phase
 *  2. SWREQ_03693 CC Current lmt signle phase
 *
 * Inherited requirements for '<S5>/OBCMgmt_PreHeatReqOutpDiable':
 *  1. SWREQ_06490 Heat OnlyPreHeatReqZero
 *  2. SWREQ_06491 PreHeat to chatge ReqZero
 *  3. SWREQ_06492 No preheat req
 *  4. SWREQ_06493 preheat req matain
 *
 * Inherited requirements for '<S5>/OBCMgmt_ReqOBCIDc':
 *  1. SWREQ_03698 Current Req Zero
 *  2. SWREQ_03699 Current Req wait preheat
 *  3. SWREQ_03700 Current Req  preheating
 *  4. SWREQ_03701 Current Req  charging
 *
 * Inherited requirements for '<S5>/OBCMgmt_ReqOBCOutp':
 *  1. SWREQ_03695 Current Req Flag
 *  2. SWREQ_03696 Current Req Flag
 *  3. SWREQ_03697 Current Req Flag

 */
#endif                                 /* RTW_HEADER_CtAp_ACParMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
