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
 *  Filename:           CtAp_DrvAsscCtrl_Cal.h
 *  File Creation Date: 22-Aug-2025
 *  Model Name:         CtAp_DrvAsscCtrl
 *  Model Version:      1.123
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:09 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug 22 11:08:02 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 22 11:07:25 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DrvAsscCtrl_Cal_h_
#define RTW_HEADER_CtAp_DrvAsscCtrl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_DrvAsscModMotMaxTq_CFG;

/* Drive assistance upper limit torque */
extern volatile const real32_T ChassisMgmt_IBSApsCtrlDesTqOverFltEnaTim_CFG;

/* APS torque over limit fault DTC enable time */
extern volatile const uint16_T ChassisMgmt_IBSApsCtrlDesTqOverFltMatureTim_CFG;

/* APS torque over limit fault mature time */
extern volatile const real32_T ChassisMgmt_IBSApsCtrlFwdMaxLmtTq_CFG;

/* APS upper limit torque */
extern volatile const real32_T ChassisMgmt_IBSApsCtrlFwdMinLmtTq_CFG;

/* APS lower limit torque */
extern volatile const real32_T ChassisMgmt_IBSApsCtrlRvsMaxLmtTq_CFG;

/* APS upper limit torque */
extern volatile const real32_T ChassisMgmt_IBSApsCtrlRvsMinLmtTq_CFG;

/* APS lower limit torque */
extern volatile const real32_T ChassisMgmt_IBSCddAccrPedlPosnOvrdOff_CFG;

/* CDD Accelerator Pedal position override InActive */
extern volatile const real32_T ChassisMgmt_IBSCddAccrPedlPosnOvrdOn_CFG;

/* CDD Accelerator Pedal position override Active */
extern volatile const real32_T ChassisMgmt_IBSCddAccrPedlTqOvrdOff_CFG;

/* CDD Accelerator Pedal torque override Threshold */
extern volatile const real32_T ChassisMgmt_IBSCddAccrPedlTqOvrdOn_CFG;

/* CDD Accelerator Pedal torque override Threshold */
extern volatile const real32_T ChassisMgmt_IBSVlcAccrPedlPosnOvrdOn_CFG;

/* VLC  Accelerator Pedal position override Active */
extern volatile const real32_T ChassisMgmt_IBSVlcAccrPedlTqOvrdOffThd_CFG;

/* VLC Accelerator Pedal torque override Threshold */
extern volatile const real32_T ChassisMgmt_IBSVlcAccrPedlTqOvrdOnThd_CFG;

/* VLC Accelerator Pedal torque override Threshold */
extern volatile const real32_T ChassisMgmt_IBSVlcCtrlDesTqOverFltEnaTim_CFG;

/* VLC torque over limit fault DTC enable time */
extern volatile const uint16_T ChassisMgmt_IBSVlcCtrlDesTqOverFltMatureTim_CFG;

/* VLC torque over limit fault mature time */
extern volatile const real32_T ChassisMgmt_IBSVlcCtrlMaxLmtTqX_LUT[4];

/* VLC limit torque */
extern volatile const real32_T ChassisMgmt_IBSVlcCtrlMaxLmtTq_LUT[4];

/* VLC limit torque */
extern volatile const real32_T ChassisMgmt_IBSVlcCtrlMinLmtTq_CFG;

/* VLC limit torque */
extern volatile const real32_T ChassisMgmt_MaxVirtAccrPedlPosn_CFG;

/* Max Virtual Pedal position */
extern volatile const real32_T ChassisMgmt_MinVirtAccrPedlPosn_CFG;

/* Min Virtual Pedal position */
extern volatile const boolean_T ChassisMgmt_VirtAccrPedlPosnSw_CFG;

/* Virtual Pedal position method switch */
extern volatile const real32_T ChassisMgmt_VirtAccrPedlPosnX_MAP[11];

/* Virtual Pedal position X axis */
extern volatile const real32_T ChassisMgmt_VirtAccrPedlPosnY_MAP[10];

/* Virtual Pedal position Y axis */
extern volatile const real32_T ChassisMgmt_VirtAccrPedlPosn_MAP[110];

/* Virtual Pedal position lookup MAP */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DrvAsscCtrl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
