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
 *  Filename:           CtAp_FctSftyGear_Glb.h
 *  File Creation Date: 04-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul  4 18:07:00 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jul 04 11:32:57 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_FctSftyGear_Glb_h_
#define RTW_HEADER_CtAp_FctSftyGear_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern uint8_T FUSATarget;
extern boolean_T FctSftyMon_ActGearCfmFailDTC_Flg;
extern uint8_T FctSftyMon_ActualGearEPB;
extern boolean_T FctSftyMon_BrkPressChkPass;
extern uint8_T FctSftyMon_FUSATarGear_Enum;
extern boolean_T FctSftyMon_FusaTargetChkPass;
extern boolean_T FctSftyMon_N2DSuccess;
extern uint8_T GearMgmt_UnCfmdActGearDly_Enum;
extern uint8_T Nvm_MemGearCfm_Enum;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_FctSftyGear_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
