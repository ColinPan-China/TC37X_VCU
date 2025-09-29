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
 *  Filename:           CtAp_GearCal_Glb.c
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
 *******************************************************************************/
#include "CtAp_GearCal_Glb.h"
#include "rtwtypes.h"
#include "CtAp_GearCal_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_GearCal_START_SEC_VAR_NOINIT_8
#include "CtAp_GearCal_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T GearCalTest1;
boolean_T GearCalTest3;
boolean_T GearCalTest5;
boolean_T GearCalTest6;
boolean_T GearCalTest8;
boolean_T GearCalTest9;
uint8_T GearCal_ADASGearTar_Enum;
uint8_T GearCal_AutoNGearTar_Enum;
boolean_T GearCal_AutoPEPBPrkWait_Flg;
uint8_T GearCal_AutoPGearTar_Enum;
boolean_T GearCal_ManualGearTarTrig_Enum;
uint8_T GearCal_ManualGearTar_Enum;
boolean_T GearMgmt_AcclrTooLrg_Flg;
boolean_T GearMgmt_AutoP_Flg;
boolean_T GearMgmt_BrkNotPress_Flg;
boolean_T GearMgmt_ChrgInDetdErr_Flg;
boolean_T GearMgmt_FltDetd_Flg;
boolean_T GearMgmt_ImmoEnable_Flg;
boolean_T GearMgmt_PRNDFail_Flg;
boolean_T GearMgmt_SpdTooHigh2D_Flg;
boolean_T GearMgmt_SpdTooHigh2N_Flg;
boolean_T GearMgmt_SpdTooHigh2P_Flg;
boolean_T GearMgmt_SpdTooHigh2R_Flg;
boolean_T GearMgmt_VehNotRdy_Flg;

#define CtAp_GearCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_GearCal_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
