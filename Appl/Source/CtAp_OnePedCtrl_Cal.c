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
 *  Filename:           CtAp_OnePedCtrl_Cal.c
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
#include "CtAp_OnePedCtrl_Cal.h"
#include "rtwtypes.h"
#include "CtAp_OnePedCtrl_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChassisMgmt_MaxVehDecelSpd_CFG = 7.75F;
                 /* One Pedal control Desired max vehicle deceleration to CAN */
volatile const real32_T ChassisMgmt_MinVehDecelSpd_CFG = -10.0F;
                        /* One Pedal control desired min vehicle deceleration */
volatile const real32_T ChassisMgmt_OnePedlCtrlReqStdlAccrPedl_CFG = 3.0F;
     /* One Pedal control requst IBS standstill status max acceleration pedal */
volatile const real32_T ChassisMgmt_VehDragTqDir_CFG = -1.0F;/* One Pedal control Drag direction */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
