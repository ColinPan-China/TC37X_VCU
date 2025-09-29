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
 *  Filename:           CtAp_CoastCtrl_Cal.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_CoastCtrl
 *  Model Version:      1.82
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 17:23:01 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 16:20:16 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_CoastCtrl_Cal_h_
#define RTW_HEADER_CtAp_CoastCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_CoastCtrlDesTqX_MAP[9];

/* coast control desired  coast torque MAP X axis */
extern volatile const real32_T ChassisMgmt_CoastCtrlDesTqY_MAP[20];

/* coast control desired  coast torque MAP Y axis */
extern volatile const real32_T ChassisMgmt_CoastCtrlGainFacX_MAP[11];

/* coast control desired  coast torque scaling factor MAP X axis */
extern volatile const real32_T ChassisMgmt_CoastCtrlGainFacY_MAP[17];

/* coast control desired  coast torque scaling factor MAP Y axis */
extern volatile const real32_T ChassisMgmt_CoastCtrlHiLvlDesTq_MAP[180];

/* coast control desired  coast torque map in hign level regen model  */
extern volatile const real32_T ChassisMgmt_CoastCtrlHiLvlGainFac_MAP[187];

/* coast  High level mode ,control desired torque scaling factor MAP */
extern volatile const real32_T ChassisMgmt_CoastCtrlLoLvlDesTq_MAP[180];

/* coast control desired low level coast torque */
extern volatile const real32_T ChassisMgmt_CoastCtrlLoLvlGainFac_MAP[187];

/* coast  low level mode ,control desired torque scaling factor MAP */
extern volatile const real32_T ChassisMgmt_CoastCtrlMidLvlDesTq_MAP[180];

/* coast control desired middle level coast torque */
extern volatile const real32_T ChassisMgmt_CoastCtrlMidLvlGainFac_MAP[187];

/* coast  middle level mode ,control desired torque scaling factor MAP */
extern volatile const real32_T ChassisMgmt_CoastCtrlMinTq_CFG;

/* coast control desired min torque */
extern volatile const real32_T ChassisMgmt_CoastCtrlOnePedlDesTq_MAP[180];

/* coast control desired  coast torque map in onepedal model  */
extern volatile const real32_T ChassisMgmt_CoastCtrlZeroTq_CFG;

/* coast control desired zero torque */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_CoastCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
