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
 *  Filename:           CtAp_GearCal_private.h
 *  File Creation Date: 04-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul  4 18:52:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jul 04 18:51:54 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_GearCal_private_h_
#define RTW_HEADER_CtAp_GearCal_private_h_
#include "rtwtypes.h"
#include "CtAp_GearCal.h"
#include "CtAp_GearCal_types.h"

extern void CtAp_GearCal_DetectChange_Init(ARID_DEF_DetectChange_CtAp_Ge_T
  *CtAp_GearCal__ARID_DEF_arg);
extern void CtAp_GearCal_DetectChange_Reset(ARID_DEF_DetectChange_CtAp_Ge_T
  *CtAp_GearCal__ARID_DEF_arg);
extern boolean_T CtAp_GearCal_DetectChange(uint8_T rtu_U,
  ARID_DEF_DetectChange_CtAp_Ge_T *CtAp_GearCal__ARID_DEF_arg);
extern void CtAp_GearCa_ChangeNotZero1_Init(ARID_DEF_ChangeNotZero1_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg);
extern void CtAp_GearC_ChangeNotZero1_Reset(ARID_DEF_ChangeNotZero1_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg);
extern boolean_T CtAp_GearCal_ChangeNotZero1(uint8_T rtu_In,
  ARID_DEF_ChangeNotZero1_CtAp__T *CtAp_GearCal__ARID_DEF_arg);
extern void CtAp_GearCa_DetectIncrease_Init(ARID_DEF_DetectIncrease_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg);
extern void CtAp_GearC_DetectIncrease_Reset(ARID_DEF_DetectIncrease_CtAp__T
  *CtAp_GearCal__ARID_DEF_arg);
extern boolean_T CtAp_GearCal_DetectIncrease(boolean_T rtu_U,
  ARID_DEF_DetectIncrease_CtAp__T *CtAp_GearCal__ARID_DEF_arg);
extern boolean_T CtAp_GearCal_ADASCfm(uint8_T rtu_In);

#endif                                 /* RTW_HEADER_CtAp_GearCal_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
