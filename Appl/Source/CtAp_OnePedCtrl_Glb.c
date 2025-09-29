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
 *  Filename:           CtAp_OnePedCtrl_Glb.c
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_OnePedCtrl
 *  Model Version:      1.70
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:33 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 17:57:40 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 17:57:11 2025
 *
 *
 *******************************************************************************/
#include "CtAp_OnePedCtrl_Glb.h"
#include "rtwtypes.h"
#include "CtAp_OnePedCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_OnePedCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_OnePedCtrl_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_DesNoLmtVehDecelSpd_mps2q;
                                     /* ChassisMgmt DesNoLmtVehDecelSpd mps2q */
real32_T ChassisMgmt_DesVehDecelSpd_mps2q;
                     /* One Pedal control requst desired vehicle deceleration */
boolean_T ChassisMgmt_OnePedlCtrlBrkPedlAllwdSts_Flg;
                             /* One Pedal control  brake pedal status allowed */
boolean_T ChassisMgmt_OnePedlCtrlCmnCdng_Flg;
/* One Pedal control requst IBS standstill status and Desired_Vehicle_Deceleration_Status Conditioning */
uint8_T ChassisMgmt_OnePedlCtrlDesVehDecelSts_Enum;
/* One Pedal control  Desired vehicle deceleration status  0:No Ative 1:Active 2:Error */
boolean_T ChassisMgmt_OnePedlCtrlIBSAllwdSts_Flg;
                                     /* One Pedal control  Ibs status allowed */
boolean_T ChassisMgmt_OnePedlCtrlReqStdlSts_Flg;
      /* One Pedal control requst IBS standstill status  0:No DEMAND 1:DEMAND */
boolean_T ChassisMgmt_VehDecelSpdSts_Flg;
/* One Pedal control desired vehicle deceleration status  0:No active 1:active */

#define CtAp_OnePedCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_OnePedCtrl_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
