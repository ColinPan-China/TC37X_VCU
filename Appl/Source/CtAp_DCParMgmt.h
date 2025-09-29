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
 *  Filename:           CtAp_DCParMgmt.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_DCParMgmt
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:23 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:05:59 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue Jul 29 13:40:04 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCParMgmt_h_
#define RTW_HEADER_CtAp_DCParMgmt_h_
#ifndef CtAp_DCParMgmt_COMMON_INCLUDES_
#define CtAp_DCParMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DCParMgmt.h"
#endif                                 /* CtAp_DCParMgmt_COMMON_INCLUDES_ */

#include "CtAp_DCParMgmt_types.h"
#include "Rte_Type.h"

/* Includes for objects with custom storage classes */
#include "CtAp_DCParMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DCParMgmt_ConstantCurrent      2U                        /* Referenced by: '<S15>/Define' */
#define DCParMgmt_ConstantVoltage      1U                        /* Referenced by: '<S15>/Define1' */
#define DCParMgmt_DuringPreheating     3U                        /* Referenced by: '<S7>/Define5' */
#define DCParMgmt_HvReady              2U                        /* Referenced by: '<S7>/Define3' */
#define DCParMgmt_NoPreheat            0U                        /* Referenced by:
                                                                  * '<S6>/Define2'
                                                                  * '<S7>/Define1'
                                                                  * '<S16>/Constant'
                                                                  */
#define DCParMgmt_PreheatComplete      4U                        /* Referenced by:
                                                                  * '<S6>/Define1'
                                                                  * '<S7>/Define2'
                                                                  * '<S17>/Constant'
                                                                  */
#define DCParMgmt_Preheating           4U                        /* Referenced by: '<S7>/Define4' */
#define DCParMgmt_RlyClosed            1U                        /* Referenced by:
                                                                  * '<S18>/Constant'
                                                                  * '<S19>/Constant'
                                                                  * '<S21>/Constant'
                                                                  */
#define DCParMgmt_RlyOpened            2U                        /* Referenced by: '<S20>/Constant' */
#define DCParMgmt_SingleZero           0.0F                      /* Referenced by:
                                                                  * '<S7>/Define6'
                                                                  * '<S14>/Define2'
                                                                  * '<S15>/Define2'
                                                                  */

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
 * '<Root>' : 'CtAp_DCParMgmt'
 * '<S1>'   : 'CtAp_DCParMgmt/DocBlock'
 * '<S2>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Init'
 * '<S4>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq'
 * '<S5>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq'
 * '<S6>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_DcChrgIDcReqInit'
 * '<S7>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_DcChrgnIDcReq'
 * '<S8>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_VehIDcReq'
 * '<S9>'   : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_DcChrgIDcReqInit/If'
 * '<S10>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_DcChrgIDcReqInit/If1'
 * '<S11>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_DcChrgnIDcReq/If2'
 * '<S12>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnIDcReq/DCChrMgmt_VehIDcReq/ATOM_SafeDivide'
 * '<S13>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConCurrUDcReq'
 * '<S14>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq'
 * '<S15>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_DcChrgnUDcReq'
 * '<S16>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant'
 * '<S17>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant1'
 * '<S18>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant2'
 * '<S19>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant3'
 * '<S20>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant4'
 * '<S21>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/CompareToConstant5'
 * '<S22>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_ConVoltUDcReq/If'
 * '<S23>'  : 'CtAp_DCParMgmt/R_DCParMgmt_Cyclic_50ms_sys/DCChrMgmt_DcChrgnUDcReq/DCChrMgmt_DcChrgnUDcReq/If1'
 */

/*-
 * Requirements for '<Root>': CtAp_DCParMgmt

 *
 * Inherited requirements for '<S2>/DCChrMgmt_DcChrgnUDcReq':
 *  1. SWREQ_03080 DC Voltage require
 *
 * Inherited requirements for '<S4>/DCChrMgmt_DcChrgIDcReqInit':
 *  1. SWREQ_03082 POD Temp lmt charge current
 *  2. SWREQ_03083 no lmt charge current
 *  3. SWREQ_03084 preheatcurrent
 *
 * Inherited requirements for '<S4>/DCChrMgmt_DcChrgnIDcReq':
 *  1. SWREQ_03085 Init current
 *  2. SWREQ_03086 DC Pause current
 *  3. SWREQ_03087 wait prehenting current
 *  4. SWREQ_03088 current require
 *
 * Inherited requirements for '<S4>/DCChrMgmt_VehIDcReq':
 *  1. SWREQ_03081 Vehicle current Req
 *
 * Inherited requirements for '<S5>/DCChrMgmt_ConVoltUDcReq':
 *  1. SWREQ_03079 DC Voltage require No preheat Const Voltage
 *  2. SWREQ_06751 DC Voltage require Relay Open Const Voltage
 *
 * Inherited requirements for '<S5>/DCChrMgmt_DcChrgnUDcReq':
 *  1. SWREQ_03078 DC Voltage require
 *  2. SWREQ_03079 DC Voltage require No preheat Const Voltage
 *  3. SWREQ_06751 DC Voltage require Relay Open Const Voltage
 *  4. SWREQ_06752 DC Voltage require Relay Colse Const Voltage
 *
 * Inherited requirements for '<S6>/If':
 *  1. SWREQ_03082 POD Temp lmt charge current
 *
 * Inherited requirements for '<S6>/If1':
 *  1. SWREQ_03083 no lmt charge current

 */
#endif                                 /* RTW_HEADER_CtAp_DCParMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
