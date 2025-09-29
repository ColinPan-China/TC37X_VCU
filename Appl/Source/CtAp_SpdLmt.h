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
 *  Filename:           CtAp_SpdLmt.h
 *  File Creation Date: 03-Aug-2025
 *  Model Name:         CtAp_SpdLmt
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Tue Jul 30 15:29:15 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sun Aug  3 02:27:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sun Aug 03 02:26:43 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_SpdLmt_h_
#define RTW_HEADER_CtAp_SpdLmt_h_
#ifndef CtAp_SpdLmt_COMMON_INCLUDES_
#define CtAp_SpdLmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_SpdLmt.h"
#endif                                 /* CtAp_SpdLmt_COMMON_INCLUDES_ */

#include "CtAp_SpdLmt_types.h"
#include "Rte_Type.h"

/* Includes for objects with custom storage classes */
#include "CtAp_SpdLmt_Glb.h"
#include "CtAp_SpdLmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define SpdLmt_170_IVI                 170U                      /* Referenced by: '<S16>/SpdLmt_170_IVI' *//* Define IVI set Speed */
#define SpdLmt_ACTIVE                  true                      /* Referenced by: '<S17>/SpdLmt_ACTIVE' *//* Define active */
#define SpdLmt_Dt                      0.01F                     /* Referenced by:
                                                                  * '<S12>/SpdLmt_Dt'
                                                                  * '<S12>/SpdLmt_Dt1'
                                                                  *//* Define model sample time */
#define SpdLmt_GearD                   4U                        /* Referenced by:
                                                                  * '<S14>/SpdLmt_GearD'
                                                                  * '<S23>/SpdLmt_GearD'
                                                                  *//* Define Gear D */
#define SpdLmt_GearR                   3U                        /* Referenced by:
                                                                  * '<S12>/SpdLmt_GearR'
                                                                  * '<S14>/SpdLmt_GearR'
                                                                  * '<S23>/SpdLmt_GearR'
                                                                  *//* Define Gear R */
#define SpdLmt_INACTIVE                false                     /* Referenced by:
                                                                  * '<S17>/SpdLmt_INACTIVE'
                                                                  * '<S17>/TorqPahMgmt_PrevFwdMaxSpdSts_Flg'
                                                                  * '<S22>/TorqMgmt_MaxVehSpdPidKiStatnCdnPrev'
                                                                  *//* SpdLmt INACTIVE */
#define SpdLmt_MAX_SPEED               360.0F                    /* Referenced by: '<S12>/MaxLimit' *//* Define IVI set Speed */
#define SpdLmt_MIN_SPEED               -360.0F                   /* Referenced by: '<S12>/MaxLimit' *//* Define IVI set Speed */
#define SpdLmt_NO_REQUEST              0U                        /* Referenced by: '<S16>/SpdLmt_NO_REQUEST' *//* Define ON */
#define SpdLmt_OFF                     1U                        /* Referenced by: '<S17>/SpdLmt_OFF' *//* Define OFF Unit8 */
#define SpdLmt_ON                      2U                        /* Referenced by: '<S17>/SpdLmt_ON' *//* Define ON */
#define SpdLmt_VEHICLE_READY           3U                        /* Referenced by: '<S14>/SpdLmt_VEHICLE_READY' *//* VCU HV status */
#define SpdLmt_ZERO_SPEED              0.0F                      /* Referenced by:
                                                                  * '<S23>/SpdLmt_ZERO_SPEED'
                                                                  * '<S23>/SpdLmt_ZERO_SPEED1'
                                                                  *//* Define IVI set Speed */
#define SpdLmt_ZERO_TORQUE             0.0F                      /* Referenced by:
                                                                  * '<S22>/TorqMgmt_PrevMaxSpdPidKiTq_Nm'
                                                                  * '<S25>/SpdLmt_ZERO_TORQUE'
                                                                  * '<S25>/SpdLmt_ZERO_TORQUE1'
                                                                  *//* Define IVI set Speed */

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: TorqPahMgmt_MaxVehSpdLmtFbTq_MA
   * Referenced by: '<S21>/TorqPahMgmt_MaxVehSpdLmtFbTq_MAP'
   */
  uint32_T TorqPahMgmt_MaxVehSpdLmtFbTq_MA[2];
} ConstP_CtAp_SpdLmt_T;

/* Constant parameters (default storage) */
#define CtAp_SpdLmt_START_SEC_VAR_CONST_8
#include "CtAp_SpdLmt_MemMap.h"

extern const ConstP_CtAp_SpdLmt_T CtAp_SpdLmt_ConstP;

#define CtAp_SpdLmt_STOP_SEC_VAR_CONST_8
#include "CtAp_SpdLmt_MemMap.h"

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
 * '<Root>' : 'CtAp_SpdLmt'
 * '<S1>'   : 'CtAp_SpdLmt/DocBlock'
 * '<S2>'   : 'CtAp_SpdLmt/ModelInfo'
 * '<S3>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys'
 * '<S4>'   : 'CtAp_SpdLmt/R_SpdLmt_Init'
 * '<S5>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function'
 * '<S6>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Input'
 * '<S7>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Output'
 * '<S8>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/DefaultMaximumVehicleSpeed'
 * '<S9>'   : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/IVI_VehicleSpeedLimitSet'
 * '<S10>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm'
 * '<S11>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedTorqueLimit'
 * '<S12>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/SpeedFilter'
 * '<S13>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/Subsystem'
 * '<S14>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/VehicleSpeedLimitSet'
 * '<S15>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/IVI_VehicleSpeedLimitSet/IVISetSpeedConvertSoftwareSpeed'
 * '<S16>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/IVI_VehicleSpeedLimitSet/IVI_VehicleSpeedAllowSet'
 * '<S17>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/IVI_VehicleSpeedLimitSet/IVI_VehicleSpeedLimitStatus'
 * '<S18>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/IVI_VehicleSpeedLimitSet/IVISetSpeedConvertSoftwareSpeed/If'
 * '<S19>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxLimitSpeedBoundError'
 * '<S20>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate'
 * '<S21>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_Feedback'
 * '<S22>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID'
 * '<S23>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxlimitSpeedStatus'
 * '<S24>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_Calculation'
 * '<S25>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_I_Calculation'
 * '<S26>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_P_Calculation'
 * '<S27>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_Calculation/ATOM_Limiter'
 * '<S28>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_I_Calculation/ATOM_Limiter'
 * '<S29>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedLimitControlAlgorithm/MaxSpeedTorqueCalculate_PID/PID_P_Calculation/ATOM_Limiter'
 * '<S30>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/MaxVehicleSpeedTorqueLimit/ATOM_Limiter'
 * '<S31>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/SpeedFilter/ATOM_RateRampLmt'
 * '<S32>'  : 'CtAp_SpdLmt/R_SpdLmt_Cyclic_10ms_sys/CtAp_SpdLmt_Function/SpeedFilter/LowPassFilter'
 */

/*-
 * Requirements for '<Root>': CtAp_SpdLmt

 *
 * Inherited requirements for '<S3>/CtAp_SpdLmt_Input':
 *  1. SWREQ_01719 The function of "Speed Limit" has the following inputs:
 *
 * Inherited requirements for '<S3>/CtAp_SpdLmt_Output':
 *  1. SWREQ_01721 The function of "Speed Limit" has the following outputs:
 *
 * Inherited requirements for '<S5>/DefaultMaximumVehicleSpeed':
 *  1. SWREQ_01725 Default maximum Vehicle Speed limit
 *  2. SWREQ_01726 Default maximum Vehicle Speed limit2
 *  3. SWREQ_01727 Default maximum Vehicle Speed limit3
 *  4. SWREQ_01728 Default maximum Vehicle Speed limit Keep
 *  5. SWREQ_05947 Default limit  Vehicle Speed  convert
 *
 * Inherited requirements for '<S5>/MaxVehicleSpeedTorqueLimit':
 *  1. SWREQ_01750 VCU limit Speed  control Torque Limit
 *
 * Inherited requirements for '<S5>/SpeedFilter':
 *  1. SWREQ_01742 VCU limit Vehicle Speed  Filter
 *  2. SWREQ_01743 vehicle Speed  Filter
 *
 * Inherited requirements for '<S9>/IVISetSpeedConvertSoftwareSpeed':
 *  1. SWREQ_01734 VCU limit Vehicle Speed  Kick down off
 *  2. SWREQ_05891 VCU limit Vehicle Speed  Kick down
 *
 * Inherited requirements for '<S10>/MaxLimitSpeedBoundError':
 *  1. SWREQ_01744 VCU limit Speed Bound Error
 *
 * Inherited requirements for '<S10>/MaxlimitSpeedStatus':
 *  1. SWREQ_01745 VCU limit Speed Status

 */
#endif                                 /* RTW_HEADER_CtAp_SpdLmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
