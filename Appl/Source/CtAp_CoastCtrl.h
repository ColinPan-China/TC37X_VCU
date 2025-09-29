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
 *  Filename:           CtAp_CoastCtrl.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_CoastCtrl
 *  Model Version:      1.82
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 17:23:01 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 16:20:16 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CoastCtrl_h_
#define RTW_HEADER_CtAp_CoastCtrl_h_
#ifndef CtAp_CoastCtrl_COMMON_INCLUDES_
#define CtAp_CoastCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_CoastCtrl.h"
#endif                                 /* CtAp_CoastCtrl_COMMON_INCLUDES_ */

#include "CtAp_CoastCtrl_types.h"

/* Includes for objects with custom storage classes */
#include "CtAp_CoastCtrl_Glb.h"
#include "CtAp_CoastCtrl_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define CoastCtrl_100_PCT              100.0F                    /* Referenced by: '<S9>/CoastCtrl_100_PCT' *//* CtAp_CrpCtrl mode define 100 */
#define CoastCtrl_DRIVE_READY          3U                        /* Referenced by: '<S7>/CoastCtrl_DRIVE_READY' *//* CtAp_CoastCtrl mode define drive ready */
#define CoastCtrl_GEAR_D               4U                        /* Referenced by: '<S7>/CoastCtrl_GEAR_D' *//* CtAp_CoastCtrl mode define gear D */
#define CoastCtrl_HIGH                 4U                        /* Referenced by:
                                                                  * '<S8>/CoastCtrl_HIGH'
                                                                  * '<S9>/CoastCtrl_HIGH'
                                                                  *//* CtAp_TorqCrossZr model define ragen mode high */
#define CoastCtrl_LOW                  2U                        /* Referenced by:
                                                                  * '<S8>/CoastCtrl_LOW'
                                                                  * '<S9>/CoastCtrl_LOW'
                                                                  *//* CtAp_CrpCtrl mode define ragen mode low */
#define CoastCtrl_MIDDLE               3U                        /* Referenced by:
                                                                  * '<S8>/CoastCtrl_MIDDLE'
                                                                  * '<S9>/CoastCtrl_MIDDLE'
                                                                  *//* CtAp_CrpCtrl mode define ragen mode middle */
#define CoastCtrl_OFF                  0U                        /* Referenced by: '<S7>/CoastCtrl_OFF' *//* CtAp_CrpCtrl mode define  ragen mode off */
#define CoastCtrl_ONE_PEDAL_MODE       4U                        /* Referenced by: '<S8>/CoastCtrl_ONE_PEDAL_MODE' *//* CtAp_CoastCtrl mode define one pedal mode */
#define CoastCtrl_PCT2NUM              100.0F                    /* Referenced by: '<S9>/CoastCtrl_PCT2NUM' *//* CtAp_CrpCtrl mode define  ragen mode off */
#define CoastCtrl_STANDBY              1U                        /* Referenced by: '<S7>/CoastCtrl_STANDBY' *//* CtAp_CrpCtrl mode define IBS hdc status STANDBY */

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/ChassisMgmt_CoastCtrlHiLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlLoLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlMidLvlDesTq_MAP'
   *   '<S8>/ChassisMgmt_CoastCtrlOnePedlDesTq_MAP'
   */
  uint32_T pooled1[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S9>/ChassisMgmt_CoastCtrlHiLvlGainFac_MAP'
   *   '<S9>/ChassisMgmt_CoastCtrlLoLvlGainFac_MAP'
   *   '<S9>/ChassisMgmt_CoastCtrlMidLvlGainFac_MAP'
   */
  uint32_T pooled2[2];
} ConstP_CtAp_CoastCtrl_T;

/* Constant parameters (default storage) */
#define CtAp_CoastCtrl_START_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

extern const ConstP_CtAp_CoastCtrl_T CtAp_CoastCtrl_ConstP;

#define CtAp_CoastCtrl_STOP_SEC_VAR_CONST_8
#include "CtAp_CoastCtrl_MemMap.h"

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
 * '<Root>' : 'CtAp_CoastCtrl'
 * '<S1>'   : 'CtAp_CoastCtrl/DocBlock'
 * '<S2>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Init'
 * '<S4>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/Coast_Control_Function'
 * '<S5>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/CtAp_CoastCtrl_Input'
 * '<S6>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/CtAp_CoastCtrl_Output'
 * '<S7>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/Coast_Control_Function/Coast_Control_Status'
 * '<S8>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/Coast_Control_Function/Coast_Control_Torque_Calcution'
 * '<S9>'   : 'CtAp_CoastCtrl/R_CoastCtrl_Cyclic_10ms_sys/Coast_Control_Function/SteeringToCoastingTorqueGainFactor '
 */

/*-
 * Requirements for '<Root>': CtAp_CoastCtrl

 *
 * Inherited requirements for '<S2>/CtAp_CoastCtrl_Input':
 *  1. SWREQ_01609 The function of "Coast Control" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_CoastCtrl_Output':
 *  1. SWREQ_01611 The function of "Coast Control" has the following outputs:
 *
 * Inherited requirements for '<S4>/Coast_Control_Status':
 *  1. SWREQ_01615 Coast active
 *  2. SWREQ_01616 Coast Inactive
 *
 * Inherited requirements for '<S4>/Coast_Control_Torque_Calcution':
 *  1. SWREQ_01617 Coast One Pedal torque
 *  2. SWREQ_01618 Coast high torque
 *  3. SWREQ_01619 Coast middle torque
 *  4. SWREQ_01620 Coast low torque
 *  5. SWREQ_01621 Coast torque clear
 *  6. SWREQ_06051 Coast Desired Torque
 *
 * Inherited requirements for '<S4>/SteeringToCoastingTorqueGainFactor ':
 *  1. SWREQ_06047 Coast  Torque High Gain Factor
 *  2. SWREQ_06048 Coast Middle Torque Gain Factor
 *  3. SWREQ_06049 Coast low Torque Gain Factor
 *  4. SWREQ_06050 Coast Torque Gain Factor clear

 */
#endif                                 /* RTW_HEADER_CtAp_CoastCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
