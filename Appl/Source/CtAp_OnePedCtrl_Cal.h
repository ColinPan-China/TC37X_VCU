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
 *  Filename:           CtAp_OnePedCtrl_Cal.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_OnePedCtrl
 *  Model Version:      1.70
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:33 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 17:57:40 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Jul 03 17:57:11 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_OnePedCtrl_Cal_h_
#define RTW_HEADER_CtAp_OnePedCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_MaxVehDecelSpd_CFG;

/* One Pedal control Desired max vehicle deceleration to CAN */
extern volatile const real32_T ChassisMgmt_MinVehDecelSpd_CFG;

/* One Pedal control desired min vehicle deceleration */
extern volatile const real32_T ChassisMgmt_OnePedlCtrlReqStdlAccrPedl_CFG;

/* One Pedal control requst IBS standstill status max acceleration pedal */
extern volatile const real32_T ChassisMgmt_VehDragTqDir_CFG;

/* One Pedal control Drag direction */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_OnePedCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
