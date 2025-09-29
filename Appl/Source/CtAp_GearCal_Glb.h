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
 *  Filename:           CtAp_GearCal_Glb.h
 *  File Creation Date: 01-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Jul  1 15:01:25 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Tue Jul 01 14:57:51 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_GearCal_Glb_h_
#define RTW_HEADER_CtAp_GearCal_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_GearCal_START_SEC_VAR_NOINIT_8
#include "CtAp_GearCal_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T GearCalTest1;
extern boolean_T GearCalTest3;
extern boolean_T GearCalTest5;
extern boolean_T GearCalTest6;
extern boolean_T GearCalTest8;
extern boolean_T GearCalTest9;
extern uint8_T GearCal_ADASGearTar_Enum;
extern uint8_T GearCal_AutoNGearTar_Enum;
extern boolean_T GearCal_AutoPEPBPrkWait_Flg;
extern uint8_T GearCal_AutoPGearTar_Enum;
extern boolean_T GearCal_ManualGearTarTrig_Enum;
extern uint8_T GearCal_ManualGearTar_Enum;
extern boolean_T GearMgmt_AcclrTooLrg_Flg;
extern boolean_T GearMgmt_AutoP_Flg;
extern boolean_T GearMgmt_BrkNotPress_Flg;
extern boolean_T GearMgmt_ChrgInDetdErr_Flg;
extern boolean_T GearMgmt_FltDetd_Flg;
extern boolean_T GearMgmt_ImmoEnable_Flg;
extern boolean_T GearMgmt_PRNDFail_Flg;
extern boolean_T GearMgmt_SpdTooHigh2D_Flg;
extern boolean_T GearMgmt_SpdTooHigh2N_Flg;
extern boolean_T GearMgmt_SpdTooHigh2P_Flg;
extern boolean_T GearMgmt_SpdTooHigh2R_Flg;
extern boolean_T GearMgmt_VehNotRdy_Flg;

#define CtAp_GearCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_GearCal_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_GearCal_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
