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
 *  Filename:           CtAp_DrvAsscCtrl.h
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DrvAsscCtrl_h_
#define RTW_HEADER_CtAp_DrvAsscCtrl_h_
#ifndef CtAp_DrvAsscCtrl_COMMON_INCLUDES_
#define CtAp_DrvAsscCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DrvAsscCtrl.h"
#endif                                 /* CtAp_DrvAsscCtrl_COMMON_INCLUDES_ */

#include "CtAp_DrvAsscCtrl_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_DrvAsscCtrl_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_DrvAsscCtrl_Cal.h"
#include "CtAp_ChassisMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DrvAsscCtl_ACTIVE              true                      /* Referenced by:
                                                                  * '<S29>/DrvAsscCtl_ACTIVE'
                                                                  * '<S32>/DrvAsscCtl_ACTIVE'
                                                                  *//* CtAp_DrvAsscCtl mode define active */
#define DrvAsscCtl_DRIVEREADY          3U                        /* Referenced by: '<S11>/DrvAsscCtl_DRIVEREADY ' *//* CtAp_DrvAsscCtl mode define drive ready */
#define DrvAsscCtl_GEAR_D              4U                        /* Referenced by:
                                                                  * '<S31>/DrvAsscCtl_GEAR_D'
                                                                  * '<S14>/DrvAsscCtl_GEAR_D'
                                                                  * '<S17>/DrvAsscCtl_GEAR_D'
                                                                  *//* CtAp_DrvAsscCtl mode define gear D */
#define DrvAsscCtl_GEAR_R              3U                        /* Referenced by:
                                                                  * '<S31>/DrvAsscCtl_GEAR_R'
                                                                  * '<S14>/DrvAsscCtl_GEAR_R'
                                                                  *//* CtAp_DrvAsscCtl mode define gear R */
#define DrvAsscCtl_INVALID             2U                        /* Referenced by: '<S11>/DrvAsscCtl_INVALID' *//* CtAp_DrvAsscCtl mode define invalid */
#define DrvAsscCtl_NUM2PERCENT         100.0F                    /* Referenced by: '<S20>/DrvAsscCtl_NUM2PERCENT' *//* CtAp_DrvAsscCtl mode define 100 */
#define DrvAsscCtl_SAMPLE_TIME         10U                       /* Referenced by:
                                                                  * '<S29>/DrvAsscCtl_SAMPLE_TIME'
                                                                  * '<S29>/DrvAsscCtl_SAMPLE_TIME1'
                                                                  * '<S30>/DrvAsscCtl_SAMPLE_TIME'
                                                                  * '<S32>/DrvAsscCtl_SAMPLE_TIME'
                                                                  * '<S32>/DrvAsscCtl_SAMPLE_TIME1'
                                                                  * '<S33>/DrvAsscCtl_SAMPLE_TIME'
                                                                  *//* CtAp_DrvAsscCtl mode define sample tim */
#define DrvAsscCtl_VALID               1U                        /* Referenced by: '<S15>/DrvAsscCtl_VALID' *//* CtAp_DrvAsscCtl mode define valid */
#define DrvAsscCtl_ZERO_TORQUE         0.0F                      /* Referenced by:
                                                                  * '<S15>/DrvAsscCtl_ZERO_TORQUE'
                                                                  * '<S24>/DrvAsscCtl_ZERO_TORQUE'
                                                                  *//* CtAp_DrvAsscCtl mode define 0 torque */

/* PublicStructure Variables for Internal Data, for system '<S21>/ATOM_RS_FF1' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S25>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T;

/* PublicStructure Variables for Internal Data, for system '<S29>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S35>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T;

/* PublicStructure Variables for Internal Data, for system '<S29>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S38>/UnitDelay' */
} ARID_DEF_NoReset_CtAp_DrvAssc_T;

/* PublicStructure Variables for Internal Data, for system '<S30>/NoEnableAndReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S41>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S40>/Delay1' */
} ARID_DEF_NoEnableAndReset_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<S32>/NoReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S45>/UnitDelay' */
} ARID_DEF_NoReset_CtAp_Dr_fn1j_T;

/* PublicStructure Variables for Internal Data, for system '<S33>/NoEnableAndReset' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S48>/UnitDelay' */
} ARID_DEF_NoEnableAndRese_plgt_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnableAndRese_plgt_T ARID_DEF_NoEnableAndReset;/* '<S33>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_Dr_fn1j_T ARID_DEF_NoReset;/* '<S32>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T ARID_DEF_ATOM_TimeCnt;/* '<S32>/ATOM_TimeCnt' */
  ARID_DEF_NoEnableAndReset_CtA_T ARID_DEF_NoEnableAndReset_mbvz;/* '<S30>/NoEnableAndReset' */
  ARID_DEF_NoReset_CtAp_DrvAssc_T ARID_DEF_NoReset_cl54;/* '<S29>/NoReset' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S29>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T ARID_DEF_ATOM_RS_FF;/* '<S23>/ATOM_RS_FF' */
  ARID_DEF_ATOM_RS_FF_CtAp_DrvA_T ARID_DEF_ATOM_RS_FF1;/* '<S21>/ATOM_RS_FF1' */
  dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo RTE_P_ChassisMgmt_IBSApsCtrlDes;
  /* '<Root>/RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus' */
  dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo RTE_P_ChassisMgmt_IBSVlcCtrlDes;
  /* '<Root>/RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus' */
  uint8_T Switch;                      /* '<S44>/Switch' */
  uint8_T Switch8;                     /* '<S44>/Switch8' */
  uint8_T Switch_bx3a;                 /* '<S37>/Switch' */
  uint8_T Switch8_h0jb;                /* '<S37>/Switch8' */
  boolean_T OneDelay_DSTATE;           /* '<S29>/OneDelay' */
  boolean_T OneDelay1_DSTATE;          /* '<S32>/OneDelay1' */
  boolean_T OneDelay_DSTATE_bk00;      /* '<S13>/OneDelay' */
} ARID_DEF_CtAp_DrvAsscCtrl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uD_LookupTable_maxIndex
   * Referenced by: '<S20>/2D_LookupTable'
   */
  uint32_T uD_LookupTable_maxIndex[2];
} ConstP_CtAp_DrvAsscCtrl_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern ARID_DEF_CtAp_DrvAsscCtrl_T CtAp_DrvAsscCtrl_ARID_DEF;

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_CONST_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

extern const ConstP_CtAp_DrvAsscCtrl_T CtAp_DrvAsscCtrl_ConstP;

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_DrvAsscCtrl_MemMap.h"

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
 * '<Root>' : 'CtAp_DrvAsscCtrl'
 * '<S1>'   : 'CtAp_DrvAsscCtrl/DocBlock'
 * '<S2>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Init'
 * '<S4>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/CtAp_DrvAsscCtrl_Input'
 * '<S5>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/CtAp_DrvAsscCtrl_Output'
 * '<S6>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl'
 * '<S7>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/APS_Req_Motor_Torque'
 * '<S8>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl'
 * '<S9>'   : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring'
 * '<S10>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/VLC_Req_Motor_Torque'
 * '<S11>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControlCommonConditionStatus'
 * '<S12>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_APS'
 * '<S13>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC'
 * '<S14>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_APS/DriveAssistanceControl_APS_Status'
 * '<S15>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_APS/DriveAssistanceControl_APS_Torque'
 * '<S16>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_APS/DriveAssistanceControl_APS_Torque/If'
 * '<S17>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Status'
 * '<S18>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque'
 * '<S19>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/VLC_CDD_Common_Condition'
 * '<S20>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/VirtualPedal '
 * '<S21>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/CDD_OverrideStatus'
 * '<S22>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/OverrideStatus'
 * '<S23>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/VLC_OverrideStatus '
 * '<S24>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/VLC_TorqueActiveStatus'
 * '<S25>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/CDD_OverrideStatus/ATOM_RS_FF1'
 * '<S26>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/VLC_OverrideStatus /ATOM_RS_FF'
 * '<S27>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/DriveAssistanceControl_VLC_Torque/VLC_TorqueActiveStatus/If'
 * '<S28>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl/DriveAssistanceControl_VLC/VirtualPedal /If'
 * '<S29>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_DTC'
 * '<S30>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_FUSA'
 * '<S31>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Overfault_condition'
 * '<S32>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_DTC'
 * '<S33>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_FUSA'
 * '<S34>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Overfault_condition'
 * '<S35>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_DTC/ATOM_TimeCnt'
 * '<S36>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_DTC/NoReset'
 * '<S37>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S38>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S39>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_FUSA/NoEnableAndReset'
 * '<S40>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S41>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/APS_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 * '<S42>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_DTC/ATOM_TimeCnt'
 * '<S43>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_DTC/NoReset'
 * '<S44>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_DTC/NoReset/ErrorHandleSysU16'
 * '<S45>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_DTC/NoReset/ErrorHandleSysU16/OnDelay'
 * '<S46>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_FUSA/NoEnableAndReset'
 * '<S47>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16'
 * '<S48>'  : 'CtAp_DrvAsscCtrl/R_DrvAsscCtrl_Cyclic_10ms_sys/Function_DriveAssistanceControl/DriveAssistanceControl_SafetyMonitoring/VLC_Torque_Fault_FUSA/NoEnableAndReset/ErrorHandleSysU16/OnDelay'
 */

/*-
 * Requirements for '<Root>': CtAp_DrvAsscCtrl

 *
 * Inherited requirements for '<S2>/CtAp_DrvAsscCtrl_Input':
 *  1. SWREQ_01454 The function of "Drive assist Control" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_DrvAsscCtrl_Output':
 *  1. SWREQ_01456 The function of "Drive assist Control" has the following outputs:
 *
 * Inherited requirements for '<S6>/APS_Req_Motor_Torque':
 *  1. SWREQ_01468 APS Motor Torque
 *
 * Inherited requirements for '<S6>/VLC_Req_Motor_Torque':
 *  1. SWREQ_06018 VLC Motor Torque
 *
 * Inherited requirements for '<S8>/DriveAssistanceControlCommonConditionStatus':
 *  1. SWREQ_05660 Drive Assistance Control Common Condition Active Status
 *  2. SWREQ_05661 Drive Assistance Control Common Condition Inactive Status
 *
 * Inherited requirements for '<S9>/APS_Torque_Overfault_condition':
 *  1. SWREQ_01489 DTC P117405 Set Conditon
 *
 * Inherited requirements for '<S9>/VLC_Torque_Fault_DTC':
 *  1. SWREQ_01477 DTC P117305 Reset Conditon
 *  2. SWREQ_01478 DTC P117305 Enable Conditon
 *  3. SWREQ_01510 VLC torque over limit Limp-in action
 *
 * Inherited requirements for '<S9>/VLC_Torque_Fault_FUSA':
 *  1. SWREQ_01503 VLC torque over limit Reset Conditon
 *  2. SWREQ_01502 VLC torque over limit Set Conditon
 *
 * Inherited requirements for '<S9>/VLC_Torque_Overfault_condition':
 *  1. SWREQ_01476 DTC P117305 Set Conditon
 *  2. SWREQ_01502 VLC torque over limit Set Conditon
 *
 * Inherited requirements for '<S12>/DriveAssistanceControl_APS_Status':
 *  1. SWREQ_01464 APS available
 *  2. SWREQ_01465 APS available
 *
 * Inherited requirements for '<S12>/DriveAssistanceControl_APS_Torque':
 *  1. SWREQ_01466 APS active torque
 *  2. SWREQ_01467 APS  inactive toruqe
 *  3. SWREQ_01469 APS Motor Torque Limit
 *
 * Inherited requirements for '<S13>/DriveAssistanceControl_VLC_Status':
 *  1. SWREQ_01460 VLC Avaiable Active
 *  2. SWREQ_01461 VLC Avaiable Inactive
 *
 * Inherited requirements for '<S13>/VLC_CDD_Common_Condition':
 *  1. SWREQ_06016 VLC/CDD Common Conditon Active
 *  2. SWREQ_06017 VLC/CDD Common Conditon Inactive
 *
 * Inherited requirements for '<S13>/VirtualPedal ':
 *  1. SWREQ_05888 VLC Virtual Pedal
 *  2. SWREQ_05889 VLC Virtual Pedal
 *
 * Inherited requirements for '<S18>/OverrideStatus':
 *  1. SWREQ_06024 ADAS Torque Override On
 *  2. SWREQ_06025 ADAS Torque Override Off
 *
 * Inherited requirements for '<S18>/VLC_TorqueActiveStatus':
 *  1. SWREQ_01462 VLC torque request Active
 *  2. SWREQ_01463 VLC torque request InActive
 *  3. SWREQ_01470 VLC Motor Torque Limit

 */
#endif                                 /* RTW_HEADER_CtAp_DrvAsscCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
