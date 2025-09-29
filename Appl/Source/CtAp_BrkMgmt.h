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
 *  Filename:           CtAp_BrkMgmt.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_BrkMgmt
 *  Model Version:      1.144
 *  Model Author:       Mike Ni - Fri Aug 16 09:59:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 09:13:06 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Sep 10 14:51:20 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_BrkMgmt_h_
#define RTW_HEADER_CtAp_BrkMgmt_h_
#ifndef CtAp_BrkMgmt_COMMON_INCLUDES_
#define CtAp_BrkMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_BrkMgmt.h"
#endif                                 /* CtAp_BrkMgmt_COMMON_INCLUDES_ */

#include "CtAp_BrkMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_BrkMgmt_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_BrkMgmt_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define BrkMgmt_ACCUMULATE_TIME        10.0F                     /* Referenced by:
                                                                  * '<S15>/BrkMgmt_ACCUMULATE_TIME'
                                                                  * '<S16>/BrkMgmt_ACCUMULATE_TIME'
                                                                  *//* The constant used to calculate time accumulation */
#define BrkMgmt_ACTIVE                 1U                        /* Referenced by:
                                                                  * '<S22>/BrkMgmt_ACTIVE'
                                                                  * '<S30>/BrkMgmt_ACTIVE'
                                                                  *//* CtAp_BrkMgmt mode define active */
#define BrkMgmt_AVAILABLE              0U                        /* Referenced by: '<S13>/BrkMgmt_AVAILABLE' *//* CtAp_BrkMgmt mode define available */
#define BrkMgmt_DRIVEREADY             3U                        /* Referenced by:
                                                                  * '<S21>/BrkMgmt_DRIVEREADY'
                                                                  * '<S22>/Drive ready'
                                                                  *//* CtAp_BrkMgmt mode define drive ready */
#define BrkMgmt_FALSE                  false                     /* Referenced by: '<S12>/BrkMgmt_FALSE' *//* CtAp_BrkMgmt mode define False */
#define BrkMgmt_GEAR_D                 4U                        /* Referenced by:
                                                                  * '<S21>/BrkMgmt_GEAR_D'
                                                                  * '<S22>/BrkMgmt_GEAR_D'
                                                                  *//* CtAp_BrkMgmt mode define gear D */
#define BrkMgmt_IVI_BRK_CMP_OFF        1U                        /* Referenced by:
                                                                  * '<S12>/BrkMgmt_IVI_BRK_CMP_OFF'
                                                                  * '<S12>/BrkMgmt_IVI_BRK_CMP_OFF1'
                                                                  * '<S12>/BrkMgmt_IVI_BRK_CMP_OFF2'
                                                                  * '<S12>/ChassisMgmt_PrevBrkCmpSts_Enum'
                                                                  *//* CtAp_BrkMgmt mode define Off */
#define BrkMgmt_MAX_BYTE               255U                      /* Referenced by: '<S12>/BrkMgmt_MAX_BYTE' *//* CtAp_BrkMgmt mode define available */
#define BrkMgmt_NORMAL                 1U                        /* Referenced by: '<S22>/BrkMgmt_NORMAL' *//* CtAp_BrkMgmt mode define normal */
#define BrkMgmt_NOTAVAILABLE           1U                        /* Referenced by:
                                                                  * '<S12>/BrkMgmt_AVAILABLE'
                                                                  * '<S13>/BrkMgmt_NOTAVAILABLE'
                                                                  *//* CtAp_BrkMgmt mode define not available */
#define BrkMgmt_NO_DISPLAY             0U                        /* Referenced by: '<S13>/BrkMgmt_NO_DISPLAY' *//* CtAp_BrkMgmt mode define brake compensate warn 1 status No display */
#define BrkMgmt_ON                     2U                        /* Referenced by:
                                                                  * '<S12>/BrkMgmt_ON1'
                                                                  * '<S12>/BrkMgmt_ON2'
                                                                  * '<S13>/BrkMgmt_ON'
                                                                  * '<S15>/BrkMgmt_ON'
                                                                  * '<S16>/BrkMgmt_ON'
                                                                  *//* CtAp_BrkMgmt mode define On */
#define BrkMgmt_ONEPEDAL               4U                        /* Referenced by:
                                                                  * '<S21>/BrkMgmt_ONEPEDAL'
                                                                  * '<S23>/BrkMgmt_ONEPEDAL'
                                                                  *//* CtAp_BrkMgmt mode define onepedal status */
#define BrkMgmt_SAMPLE_TIME            10U                       /* Referenced by:
                                                                  * '<S31>/BrkMgmt_SAMPLE_TIME'
                                                                  * '<S31>/BrkMgmt_SAMPLE_TIME1'
                                                                  * '<S32>/BrkMgmt_SAMPLE_TIME'
                                                                  *//* CtAp_BrkMmt define sample time */
#define BrkMgmt_TRUE                   true                      /* Referenced by: '<S31>/BrkMgmt_TRUE' *//* CtAp_BrkMgmt mode define True */
#define BrkMgmt_WARNING                1U                        /* Referenced by: '<S13>/BrkMgmt_WARNING' *//* CtAp_BrkMgmt mode define brake compensate warn 2 status Vehicle failure, brake compensation failed to open */
#define BrkMgmt_ZERO_TORQUE            0.0F                      /* Referenced by:
                                                                  * '<S21>/BrkMgmt_OFF1'
                                                                  * '<S21>/BrkMgmt_OFF2'
                                                                  * '<S23>/BrkMgmt_ZERO_TORQUE'
                                                                  * '<S23>/BrkMgmt_ZERO_TORQUE1'
                                                                  * '<S24>/BrkMgmt_ZERO_TORQUE'
                                                                  * '<S24>/BrkMgmt_ZERO_TORQUE1'
                                                                  * '<S15>/BrkMgmt_ZERO_TORQUE'
                                                                  * '<S16>/BrkMgmt_ZERO_TORQUE'
                                                                  * '<S27>/Constant'
                                                                  *//* CtAp_BrkMgmt mode define 0 torque */

/* PublicStructure Variables for Internal Data, for system '<S14>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S17>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T;

/* PublicStructure Variables for Internal Data, for system '<S15>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S18>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Br_T;

/* PublicStructure Variables for Internal Data, for system '<S31>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S33>/Delay' */
} ARID_DEF_ATOM_TimeCnt_Ct_ihho_T;

/* PublicStructure Variables for Internal Data, for system '<S31>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S36>/UnitDelay' */
} ARID_DEF_NoReset_CtAp_BrkMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<S32>/NoEnableAndReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S39>/UnitDelay' */
} ARID_DEF_NoEnableAndReset_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnableAndReset_CtA_T ARID_DEF_NoEnableAndReset;/* '<S32>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_BrkMgmt_T ARID_DEF_NoReset;/* '<S31>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_Ct_ihho_T ARID_DEF_ATOM_TimeCnt;/* '<S31>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Br_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S16>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Br_T ARID_DEF_ATOM_TimeCnt_cl54;/* '<S15>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_RS_FF_CtAp_BrkM_T ARID_DEF_ATOM_RS_FF;/* '<S14>/ATOM_RS_FF' */
  dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo RTE_P_ChassisMgmt_IBSRbsDesTqOv;
  /* '<Root>/RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus' */
  dt_Nv_ChassisMgmtInfo RTE_RP_ChassisMgmtInfo_tec_Chas;
                 /* '<Root>/RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo_write' */
  uint8_T Switch;                      /* '<S35>/Switch' */
  uint8_T Switch8;                     /* '<S35>/Switch8' */
  uint8_T BrkMgmt_PrevBrkCmpSts_Enum;
                                    /* '<S12>/ChassisMgmt_PrevBrkCmpSts_Enum' */
  boolean_T OneDelay1_DSTATE;          /* '<S12>/OneDelay1' */
  boolean_T OneDelay_DSTATE;           /* '<S31>/OneDelay' */
} ARID_DEF_CtAp_BrkMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"

extern ARID_DEF_CtAp_BrkMgmt_T CtAp_BrkMgmt_ARID_DEF;

#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_BrkMgmt'
 * '<S1>'   : 'CtAp_BrkMgmt/DocBlock'
 * '<S2>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Init'
 * '<S4>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/CtAp_BrkMgmt_Input'
 * '<S5>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/CtAp_BrkMgmt_Output'
 * '<S6>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement'
 * '<S7>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation'
 * '<S8>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control'
 * '<S9>'   : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring'
 * '<S10>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Compensation_Status'
 * '<S11>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status'
 * '<S12>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Compensation_Status/Brake_Compensation_Setting'
 * '<S13>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Compensation_Status/Brake_Compensation_Warning'
 * '<S14>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqSts'
 * '<S15>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqStsOff'
 * '<S16>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqStsOn'
 * '<S17>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqSts/ATOM_RS_FF'
 * '<S18>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqStsOff/ATOM_TimeCnt'
 * '<S19>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Compensation/Brake_Regeneration_Compensation_Deceleration_Status/ChassisMgmt_BrkCmpDecelReqStsOn/ATOM_TimeCnt'
 * '<S20>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Capability_Valid'
 * '<S21>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Capability_Valid_Condition'
 * '<S22>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Status'
 * '<S23>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Torque'
 * '<S24>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Torque_Capability'
 * '<S25>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/FUSA_FAULT'
 * '<S26>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Wheel_Min_Torque'
 * '<S27>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Torque/CompareToConstant'
 * '<S28>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Torque/If'
 * '<S29>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Control/Brake_Regeneration_Control_Torque/If1'
 * '<S30>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_DesTorque_Overfault_condition'
 * '<S31>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_DTC'
 * '<S32>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_FUSA'
 * '<S33>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_DTC/ATOM_TimeCnt'
 * '<S34>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_DTC/NoReset'
 * '<S35>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S36>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S37>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_FUSA/NoEnableAndReset'
 * '<S38>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S39>'  : 'CtAp_BrkMgmt/R_BrkMgmt_Cyclic_10ms_sys/Function_BrakeMangement/Brake_Regeneration_Torque_Monitoring/RBS_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 */

/*-
 * Requirements for '<Root>': CtAp_BrkMgmt

 *
 * Inherited requirements for '<S2>/CtAp_BrkMgmt_Input':
 *  1. SWREQ_01360 The function of "Brake management" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_BrkMgmt_Output':
 *  1. SWREQ_01362 The function of "Brake management" has the following outputs:
 *
 * Inherited requirements for '<S8>/Brake_Regeneration_Control_Capability_Valid':
 *  1. SWREQ_06013 Brake Regeneration Control  Valid
 *  2. SWREQ_06014 Brake Regeneration Control  inValid
 *
 * Inherited requirements for '<S8>/Brake_Regeneration_Control_Capability_Valid_Condition':
 *  1. SWREQ_01376 Brake Regeneration Control  Common Condition
 *  2. SWREQ_01377 Brake Regeneration Control Capability  Condition3
 *  3. SWREQ_05656 Brake Regeneration Control   Common Condition
 *  4. SWREQ_05779 Brake Regeneration Control Capability  Condition2
 *  5. SWREQ_05657 Brake Regeneration Control Capability  Condition2
 *  6. SWREQ_05658 Brake Regeneration Control Capability Condition3
 *  7. SWREQ_06010 Brake Regeneration Control Capability  Condition4
 *  8. SWREQ_05659 Brake Regeneration Control Capability Condition4
 *
 * Inherited requirements for '<S8>/Brake_Regeneration_Control_Status':
 *  1. SWREQ_01381 Brake Regeneration Control Status ON
 *  2. SWREQ_01382 Brake Regeneration Control Status OFF
 *
 * Inherited requirements for '<S8>/Brake_Regeneration_Control_Torque':
 *  1. SWREQ_01383 Brake  Requst Torque Onepedal and Vlc
 *  2. SWREQ_01384 Brake  Requst Torque
 *  3. SWREQ_05780 Brake Torque Requst Torque
 *  4. SWREQ_06727 Brake Torque Requst Inactive Torque
 *
 * Inherited requirements for '<S8>/Brake_Regeneration_Control_Torque_Capability':
 *  1. SWREQ_01378 Brake Regeneration Control Capability
 *  2. SWREQ_01380 Brake Regeneration Control Capability
 *  3. SWREQ_01379 Brake Regeneration Control Capability
 *
 * Inherited requirements for '<S8>/Wheel_Min_Torque':
 *  1. SWREQ_01378 Brake Regeneration Control Capability
 *
 * Inherited requirements for '<S9>/RBS_DesTorque_Overfault_condition':
 *  1. SWREQ_01389 DTC P116E05 Set Conditon
 *  2. SWREQ_01402 RBS torque over limit Set Conditon
 *  3. SWREQ_01390 DTC P116E05 Reset Conditon
 *
 * Inherited requirements for '<S9>/RBS_Torque_Fault_DTC':
 *  1. SWREQ_01391 DTC P116E05 Enable Conditon
 *  2. SWREQ_01390 DTC P116E05 Reset Conditon
 *
 * Inherited requirements for '<S9>/RBS_Torque_Fault_FUSA':
 *  1. SWREQ_01403 RBS torque over limit Reset Conditon

 */
#endif                                 /* RTW_HEADER_CtAp_BrkMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
