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
 *  Filename:           CtAp_CrpCtrl.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_CrpCtrl
 *  Model Version:      1.226
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:47 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 15:14:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 13:07:50 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CrpCtrl_h_
#define RTW_HEADER_CtAp_CrpCtrl_h_
#ifndef CtAp_CrpCtrl_COMMON_INCLUDES_
#define CtAp_CrpCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_CrpCtrl.h"
#endif                                 /* CtAp_CrpCtrl_COMMON_INCLUDES_ */

#include "CtAp_CrpCtrl_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_CrpCtrl_Glb.h"
#include "CtAp_CrpCtrl_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define CrpCtrl_ACC_ACTIVE             1U                        /* Referenced by: '<S14>/CrpCtrl_ACC_ACTIVE' *//* CtAp_CrpCtrl mode define ACC ACYIVE */
#define CrpCtrl_DRIVE_READY            3U                        /* Referenced by: '<S16>/CrpCtrl_DRIVE_READY' *//* CtAp_CrpCtrl mode define drive ready */
#define CrpCtrl_Dt                     0.01F                     /* Referenced by:
                                                                  * '<S12>/CrpCtrl_Dt'
                                                                  * '<S36>/CrpCtrl_Dt'
                                                                  *//* CtAp_CrpCtrl mode define sample time */
#define CrpCtrl_GEAR_D                 4U                        /* Referenced by: '<S13>/CrpCtrl_GEAR_D1' *//* CtAp_CrpCtrl mode define gear D */
#define CrpCtrl_GEAR_R                 3U                        /* Referenced by:
                                                                  * '<S9>/CrpCtrl_GEAR_R'
                                                                  * '<S12>/CrpCtrl_GEAR_R'
                                                                  * '<S13>/CrpCtrl_GEAR_R1'
                                                                  * '<S29>/CrpCtrl_GEAR_R'
                                                                  *//* CtAp_CrpCtrl mode define gear R */
#define CrpCtrl_HDC_AVH_ACTIVE         2U                        /* Referenced by:
                                                                  * '<S14>/CrpCtrl_HDC_AVH_ACTIVE'
                                                                  * '<S14>/CrpCtrl_HDC_AVH_ACTIVE1'
                                                                  *//* CtAp_CrpCtrl mode define AVH HDC status Active */
#define CrpCtrl_INVALID                2U                        /* Referenced by: '<S10>/CrpCtrl_INVALID' *//* CtAp_CrpCtrl mode define pedal INVALID */
#define CrpCtrl_NO_PRESSED             0U                        /* Referenced by: '<S15>/CrpCtrl_NO_PRESSED' *//* CtAp_CrpCtrl mode define pedal NO pressed */
#define CrpCtrl_ONE_PEDAL              4U                        /* Referenced by: '<S16>/CrpCtrl_ONE_PEDAL' *//* CtAp_CrpCtrl mode define drive mode onepedal */
#define CrpCtrl_PARK_ACTIVE            4U                        /* Referenced by: '<S14>/CrpCtrl_PARK_ACTIVE' *//* CtAp_CrpCtrl mode define park Guidance active */
#define CrpCtrl_PARK_INTERRUPT         5U                        /* Referenced by: '<S14>/CrpCtrl_PARK_INTERRUPT' *//* CtAp_CrpCtrl mode define park Guidance Recovery interrupt" */
#define CrpCtrl_PRESSED                1U                        /* Referenced by: '<S10>/CrpCtrl_PRESSED' *//* CtAp_CrpCtrl mode define pedal pressed */
#define CrpCtrl_Pos2Neg                -1.0F                     /* Referenced by: '<S9>/Gain' *//* CtAp_CrpCtrl mode define positive to negative */
#define CrpCtrl_SAMPLE_TIME            10U                       /* Referenced by: '<S15>/CrpCtrl_SAMPLE_TIME' *//* CtAp_CrpCtrl mode define sample time */
#define CrpCtrl_ZERO_SPEED             0.0F                      /* Referenced by: '<S9>/CrpCtrl_ZERO_SPEED' *//* CtAp_CrpCtrl mode define zero veicle speed */
#define CrpCtrl_ZERO_TORQUE            0.0F                      /* Referenced by:
                                                                  * '<S28>/CrpCtrl_ZERO_TORQUE'
                                                                  * '<S31>/CrpCtrl_ZERO_TORQUE'
                                                                  * '<S35>/CrpCtrl_ZERO_TORQUE'
                                                                  * '<S36>/CrpCtrl_ZERO_TORQUE'
                                                                  *//* CtAp_CrpCtrl mode define zero torque */

/* PublicStructure Variables for Internal Data, for system '<S10>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S17>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_EdgeDetectRise' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S19>/Delay' */
} ARID_DEF_ATOM_EdgeDetectRise__T;

/* PublicStructure Variables for Internal Data, for system '<S15>/ATOM_SR_FF' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S24>/Delay' */
} ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T;

/* PublicStructure Variables for Internal Data, for system '<S15>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S25>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Cr_T;

/* PublicStructure Variables for Internal Data, for system '<S36>/ATOM_RateRampLmt' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S39>/Delay' */
} ARID_DEF_ATOM_RateRampLmt_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_RateRampLmt_CtA_T ARID_DEF_ATOM_RateRampLmt;/* '<S36>/ATOM_RateRampLmt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Cr_T ARID_DEF_ATOM_TimeCnt;/* '<S15>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_SR_FF_CtAp_CrpC_T ARID_DEF_ATOM_SR_FF;/* '<S15>/ATOM_SR_FF' */
  ARID_DEF_ATOM_EdgeDetectRise__T ARID_DEF_ATOM_EdgeDetectRise1;/* '<S15>/ATOM_EdgeDetectRise1' */
  ARID_DEF_ATOM_EdgeDetectRise__T ARID_DEF_ATOM_EdgeDetectRise;/* '<S15>/ATOM_EdgeDetectRise' */
  ARID_DEF_ATOM_EdgeDetectRise__T ARID_DEF_ATOM_EdgeDetectRi_mbvz;/* '<S12>/ATOM_EdgeDetectRise' */
  ARID_DEF_ATOM_RS_FF_CtAp_CrpC_T ARID_DEF_ATOM_RS_FF;/* '<S10>/ATOM_RS_FF' */
  real32_T CrpCtrl_PrevCrpCtrlDesNoLmtPidK;
                             /* '<S30>/TorqPahMgmt_CrpCtrlNoLmtDesPidKiTq_Nm' */
  boolean_T Delay_DSTATE;              /* '<S21>/Delay' */
} ARID_DEF_CtAp_CrpCtrl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S28>/ChassisMgmt_CrpCtrlDesFbTq_MAP'
   *   '<S28>/ChassisMgmt_CrpCtrlDesRvsFbTq_MAP'
   */
  uint32_T pooled3[2];
} ConstP_CtAp_CrpCtrl_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_CrpCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"

extern ARID_DEF_CtAp_CrpCtrl_T CtAp_CrpCtrl_ARID_DEF;

#define CtAp_CrpCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CrpCtrl_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_CrpCtrl_START_SEC_VAR_CONST_8
#include "CtAp_CrpCtrl_MemMap.h"

extern const ConstP_CtAp_CrpCtrl_T CtAp_CrpCtrl_ConstP;

#define CtAp_CrpCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_CrpCtrl_MemMap.h"

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
 * '<Root>' : 'CtAp_CrpCtrl'
 * '<S1>'   : 'CtAp_CrpCtrl/DocBlock'
 * '<S2>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Init'
 * '<S4>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function'
 * '<S5>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/CtAp_CrpCtrl_Input'
 * '<S6>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/CtAp_CrpCtrl_Output'
 * '<S7>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status'
 * '<S8>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm '
 * '<S9>'   : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/VehicleSpeedConvertGear'
 * '<S10>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Brake_Allowed_Status'
 * '<S11>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Creep_Control_Active_Mgmt'
 * '<S12>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Creep_Control_Vehicle_Speed_Demand'
 * '<S13>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Gear_Speed_Allowed_Status'
 * '<S14>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/IBS_Allowed_Status'
 * '<S15>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/VehicleSpeedStandstiil'
 * '<S16>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Vheicle_Mode_Allowed_Status'
 * '<S17>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Brake_Allowed_Status/ATOM_RS_FF'
 * '<S18>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Creep_Control_Vehicle_Speed_Demand/ATOM_DlyRatRmpLmt'
 * '<S19>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Creep_Control_Vehicle_Speed_Demand/ATOM_EdgeDetectRise'
 * '<S20>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Creep_Control_Vehicle_Speed_Demand/If'
 * '<S21>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/Gear_Speed_Allowed_Status/ATOM_relay'
 * '<S22>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/VehicleSpeedStandstiil/ATOM_EdgeDetectRise'
 * '<S23>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/VehicleSpeedStandstiil/ATOM_EdgeDetectRise1'
 * '<S24>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/VehicleSpeedStandstiil/ATOM_SR_FF'
 * '<S25>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Control_Mode_Active_Status/VehicleSpeedStandstiil/ATOM_TimeCnt'
 * '<S26>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /Creep_Control_Demand_Speed_Bound_Error'
 * '<S27>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /Creep_Control_Sum_Torque'
 * '<S28>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /Feedback_Torque_Control'
 * '<S29>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /GearR'
 * '<S30>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control'
 * '<S31>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /SteeringGearAngle'
 * '<S32>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /Creep_Control_Sum_Torque/ATOM_Limiter'
 * '<S33>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /Creep_Control_Sum_Torque/If'
 * '<S34>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_Calculation'
 * '<S35>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_I_Calculation'
 * '<S36>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_P_Calculation'
 * '<S37>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_Calculation/ATOM_Limiter'
 * '<S38>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_I_Calculation/ATOM_Limiter'
 * '<S39>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_P_Calculation/ATOM_RateRampLmt'
 * '<S40>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/Creep_Controller_Algorithm /PID_Torque_Control/PID_P_Calculation/If'
 * '<S41>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/VehicleSpeedConvertGear/If'
 * '<S42>'  : 'CtAp_CrpCtrl/R_CrpCtrl_Cyclic_10ms_sys/Creep_Control_Function/VehicleSpeedConvertGear/If1'
 */

/*-
 * Requirements for '<Root>': CtAp_CrpCtrl

 *
 * Inherited requirements for '<S2>/CtAp_CrpCtrl_Input':
 *  1. SWREQ_01569 The function of "Creep Control" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_CrpCtrl_Output':
 *  1. SWREQ_01571 The function of "Creep Control" has the following outputs:
 *
 * Inherited requirements for '<S4>/VehicleSpeedConvertGear':
 *  1. SWREQ_01577 Vehicle Speed In Gear R
 *  2. SWREQ_01578 Vehicle Speed In Gear D
 *  3. SWREQ_06246 Vehicle Speed and Gear Different Directions
 *  4. SWREQ_06247 Vehicle Speed and Gear same Directions
 *
 * Inherited requirements for '<S7>/Brake_Allowed_Status':
 *  1. SWREQ_06035 Brake Allowed InActive
 *  2. SWREQ_06036 Brake Allowed Active
 *  3. SWREQ_06037 Brake Allowed Keep
 *
 * Inherited requirements for '<S7>/Creep_Control_Active_Mgmt':
 *  1. SWREQ_01576 Creep Control Mode Inactive
 *  2. SWREQ_01575 Creep Control Mode Active
 *
 * Inherited requirements for '<S7>/Creep_Control_Vehicle_Speed_Demand':
 *  1. SWREQ_01579 Creep Control Target Speed Set In GearR
 *  2. SWREQ_01580 Creep Control Target Speed Set In Gear other
 *  3. SWREQ_01581 Creep Control Target Speed Filter
 *
 * Inherited requirements for '<S7>/Gear_Speed_Allowed_Status':
 *  1. SWREQ_06032 Gear Speed Allowed Active
 *  2. SWREQ_06033 Gear Speed Allowed Inactive
 *  3. SWREQ_06034 Gear Speed Allowed Keep
 *  4. SWREQ_06249 Gear Speed Allowed Inactive
 *
 * Inherited requirements for '<S7>/IBS_Allowed_Status':
 *  1. SWREQ_06038 IBS Status Allowed  Active
 *  2. SWREQ_06039 IBS Status  Allowed Inactive
 *
 * Inherited requirements for '<S7>/VehicleSpeedStandstiil':
 *  1. SWREQ_06628 Vehicle Speed standstill Allowed Inactive
 *  2. SWREQ_06629 Vehicle Speed standstill Allowed Inactive
 *  3. SWREQ_06630 Vehicle Speed standstill Allowed keep
 *
 * Inherited requirements for '<S7>/Vheicle_Mode_Allowed_Status':
 *  1. SWREQ_06030 Vheicle Mode Allowed Active
 *  2. SWREQ_06031 Vheicle Mode Allowed Inactive
 *
 * Inherited requirements for '<S8>/Creep_Control_Sum_Torque':
 *  1. SWREQ_01588 Creep Control torque Total
 *  2. SWREQ_01587 Creep Control torque clear
 *  3. SWREQ_01589 Creep Control torque Limit
 *
 * Inherited requirements for '<S8>/Feedback_Torque_Control':
 *  1. SWREQ_01583 Creep Control FeedBack torque Set
 *  2. SWREQ_01584 Creep Control FeedBack torque
 *
 * Inherited requirements for '<S8>/PID_Torque_Control':
 *  1. SWREQ_01585 Creep Control Pid torque clear
 *
 * Inherited requirements for '<S30>/PID_P_Calculation':
 *  1. SWREQ_01586 Creep Control PID torque

 */
#endif                                 /* RTW_HEADER_CtAp_CrpCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
