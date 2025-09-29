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
 *  Filename:           CtAp_VehSpd.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_VehSpd
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:56:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:28:08 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:27:16 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_VehSpd_h_
#define RTW_HEADER_CtAp_VehSpd_h_
#ifndef CtAp_VehSpd_COMMON_INCLUDES_
#define CtAp_VehSpd_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_VehSpd.h"
#endif                                 /* CtAp_VehSpd_COMMON_INCLUDES_ */

#include "CtAp_VehSpd_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_VehSpd_Glb.h"
#include "CtAp_VehSpd_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define VehSpd_2h2km                   3.6F                      /* Referenced by: '<S6>/Constant1' */
#define VehSpd_BackWard                2U                        /* Referenced by:
                                                                  * '<S5>/VehMot_InterSpdCfm'
                                                                  * '<S22>/Constant1'
                                                                  */
#define VehSpd_Cycle                   10U                       /* Referenced by:
                                                                  * '<S22>/Constant3'
                                                                  * '<S22>/Constant4'
                                                                  */
#define VehSpd_False                   false                     /* Referenced by:
                                                                  * '<S4>/Constant1'
                                                                  * '<S4>/Constant3'
                                                                  * '<S7>/Constant1'
                                                                  */
#define VehSpd_ForWard                 1U                        /* Referenced by: '<S22>/Constant' */
#define VehSpd_GearD                   4U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S15>/Constant'
                                                                  */
#define VehSpd_GearR                   3U                        /* Referenced by:
                                                                  * '<S10>/Constant'
                                                                  * '<S11>/Constant'
                                                                  */
#define VehSpd_Rd2Diam                 2.0F                      /* Referenced by: '<S6>/Constant6' */
#define VehSpd_SingleZero              0.0F                      /* Referenced by:
                                                                  * '<S5>/VehMot_InterSpdCfm'
                                                                  * '<S25>/Constant'
                                                                  */
#define VehSpd_True                    true                      /* Referenced by:
                                                                  * '<S4>/Constant'
                                                                  * '<S4>/Constant2'
                                                                  * '<S7>/Constant'
                                                                  */
#define VehSpd_U8One                   1U                        /* Referenced by: '<S20>/Constant' */
#define VehSpd_U8Zero                  0U                        /* Referenced by: '<S19>/Constant' */
#define VehSpd_VehDrvDirInvld          3U                        /* Referenced by: '<S22>/Constant2' */
#define VehSpd_cm2m                    100.0F                    /* Referenced by: '<S6>/Constant2' */
#define VehSpd_rpm2s                   60.0F                     /* Referenced by: '<S6>/Constant3' */

/* PublicStructure Variables for Internal Data, for system '<S6>/ATOM_SingleLPF' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S18>/Delay' */
} ARID_DEF_ATOM_SingleLPF_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S22>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S23>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Ve_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ve_T ARID_DEF_ATOM_TimeCnt1;/* '<S22>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ve_T ARID_DEF_ATOM_TimeCnt;/* '<S22>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_SingleLPF_CtAp__T ARID_DEF_ATOM_SingleLPF;/* '<S6>/ATOM_SingleLPF' */
  uint8_T Delay_DSTATE_p4ih;           /* '<S22>/Delay' */
} ARID_DEF_CtAp_VehSpd_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_VehSpd_START_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"

extern ARID_DEF_CtAp_VehSpd_T CtAp_VehSpd_ARID_DEF;

#define CtAp_VehSpd_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehSpd_MemMap.h"

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
 * '<Root>' : 'CtAp_VehSpd'
 * '<S1>'   : 'CtAp_VehSpd/DocBlock'
 * '<S2>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_VehSpd/R_VehSpd_Init'
 * '<S4>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif'
 * '<S5>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_InterSpd'
 * '<S6>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_MCUSpeed'
 * '<S7>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_SpdCfmSys'
 * '<S8>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_VehDrvDir'
 * '<S9>'   : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant'
 * '<S10>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant1'
 * '<S11>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant2'
 * '<S12>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant3'
 * '<S13>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant4'
 * '<S14>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant5'
 * '<S15>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant6'
 * '<S16>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_GearVehDirDif/CompareToConstant7'
 * '<S17>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_InterSpd/VehMot_InterSpdCfm'
 * '<S18>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_MCUSpeed/ATOM_SingleLPF'
 * '<S19>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_MCUSpeed/CompareToConstant'
 * '<S20>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_MCUSpeed/CompareToConstant1'
 * '<S21>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_SpdCfmSys/CompareToConstant'
 * '<S22>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_VehDrvDir/VehDrvDirCfmSys'
 * '<S23>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_VehDrvDir/VehDrvDirCfmSys/ATOM_TimeCnt'
 * '<S24>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_VehDrvDir/VehDrvDirCfmSys/ATOM_TimeCnt1'
 * '<S25>'  : 'CtAp_VehSpd/R_VehSpd_Cyclic_10ms_sys/VehMot_VehDrvDir/VehDrvDirCfmSys/CompareToConstant'
 */

/*-
 * Requirements for '<Root>': CtAp_VehSpd

 *
 * Inherited requirements for '<S2>/VehMot_GearVehDirDif':
 *  1. SWREQ_03744 VehSpd Dif with Gear R
 *  2. SWREQ_03745 VehSpd Dif with Gear R Reset
 *  3. SWREQ_03746 VehSpd Dif with Gear D
 *  4. SWREQ_03747 VehSpd Dif with Gear D Reset
 *  5. SWREQ_03748 VehSpd Dif Confirm
 *
 * Inherited requirements for '<S2>/VehMot_InterSpd':
 *  1. SWREQ_03739 Speed Forward withVehichle Drive Direction Vaild
 *  2. SWREQ_03740 Speed Backward withVehichle Drive Direction Vaild
 *  3. SWREQ_03741 Speed with Vehichle Drive Direction False
 *  4. SWREQ_05621 SpeedABS False and Vehichle Drive Direction False
 *
 * Inherited requirements for '<S2>/VehMot_MCUSpeed':
 *  1. SWREQ_03732 Speed ABS with MCU
 *  2. SWREQ_03734 TirRd Select 0.33415
 *  3. SWREQ_03735 TirRd Select 0.3322
 *
 * Inherited requirements for '<S2>/VehMot_SpdCfmSys':
 *  1. SWREQ_03731 Speed ABS with IBS
 *  2. SWREQ_03732 Speed ABS with MCU
 *  3. SWREQ_03733 Spd False
 *  4. SWREQ_03742 VehStandstill On
 *  5. SWREQ_03743 VehStandstill Off
 *
 * Inherited requirements for '<S2>/VehMot_VehDrvDir':
 *  1. SWREQ_03736 VehDrvDir Forward
 *  2. SWREQ_03737 VehDrvDir Backward
 *  3. SWREQ_03738 VehDrvDir False

 */
#endif                                 /* RTW_HEADER_CtAp_VehSpd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
