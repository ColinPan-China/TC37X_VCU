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
 *  Filename:           CtAp_FctSftyTorq_Cal.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.125
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:41:32 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Sep 12 10:41:04 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_FctSftyTorq_Cal_h_
#define RTW_HEADER_CtAp_FctSftyTorq_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T FctSftyMon_AccrPedlDesTqOverFltEnaTim_CFG;

/* function safety accelerator pedal torque fault enable Time */
extern volatile const uint16_T FctSftyMon_AccrPedlDesTqOverFltMatureTim_CFG;

/* function safety accelerator pedal torque fault Mature Time */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdMinTqX_LUT[11];

/* function safety accelerator pedal torque limit MAP x axis */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdMinTq_LUT[11];

/* function safety accelerator pedal torque limit  */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqEco_MAP[66];

/* function safety accelerator pedal forward torque limit MAP */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqNor_MAP[66];

/* function safety accelerator pedal forward torque limit MAP */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqOnePedl_MAP[66];

/* function safety accelerator pedal forward torque limit MAP */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqSpt_MAP[66];

/* function safety accelerator pedal forward torque limit MAP */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqX_MAP[11];

/* function safety accelerator pedal torque limit MAP x axis */
extern volatile const real32_T FctSftyMon_AccrPedlLmtFwdTqY_MAP[6];

/* function safety accelerator pedal torque Limit MAP Y axis */
extern volatile const real32_T FctSftyMon_AccrPedlLmtMaxTq_CFG;

/* function safety accelerator pedal torque Limit in gear N or P */
extern volatile const real32_T FctSftyMon_AccrPedlLmtMinTq_CFG;

/* function safety accelerator pedal torque Limit in gear N or P */
extern volatile const real32_T FctSftyMon_AccrPedlLmtRvsMaxTq_LUT[11];

/* function safety accelerator pedal Reverse torque limit MAX */
extern volatile const real32_T FctSftyMon_AccrPedlLmtRvsMinTq_MAP[33];

/* function safety accelerator pedal Reverse torque Limit min */
extern volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqX_LUT[11];

/* function safety accelerator pedal Reverse torque Limit MAP x axis */
extern volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqX_MAP[11];

/* function safety accelerator pedal Reverse torque Limit MAP x axis */
extern volatile const real32_T FctSftyMon_AccrPedlLmtRvsTqY_MAP[3];

/* function safety accelerator pedal Reverse torque Limit MAP Y axis */
extern volatile const real32_T FctSftyMon_CrpCtrlLmtFwdTqX_LUT[7];

/* function safety creep  forward torque limit LUT x axis */
extern volatile const real32_T FctSftyMon_CrpCtrlLmtFwdTq_LUT[7];

/* function safety creep  forward torque limit LUT */
extern volatile const real32_T FctSftyMon_CrpCtrlLmtRvsTqX_LUT[7];

/* function safety creep  Reverse torque limit LUT x axis */
extern volatile const real32_T FctSftyMon_CrpCtrlLmtRvsTq_LUT[7];

/* function safety creep  Reverse torque limit LUT */
extern volatile const real32_T FctSftyMon_CrpCtrlLmtTq_CFG;

/* function safety creep torque Limit in gear N or P */
extern volatile const uint16_T FctSftyMon_CrpDesTqOverFltEnaTim_CFG;

/* function safety creep torque fault enable Time */
extern volatile const uint16_T FctSftyMon_CrpDesTqOverFltMatureTim_CFG;

/* function safety creep torque fault Mature Time */
extern volatile const real32_T FctSftyMon_DesVehDecelSpdLmtTq_CFG;

/* function safety Deceleration Limit */
extern volatile const uint16_T FctSftyMon_DesVehDecelSpdOverFltEnaTim_CFG;

/* function safety Deceleration fault enable Time */
extern volatile const uint16_T FctSftyMon_DesVehDecelSpdOverFltMatureTim_CFG;

/* function safety Deceleration fault Mature Time */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_FctSftyTorq_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
