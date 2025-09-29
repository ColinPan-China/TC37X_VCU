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
 *  Filename:           CtAp_TorqCoor_Glb.h
 *  File Creation Date: 14-Apr-2025
 *  Model Name:         CtAp_TorqCoor
 *  Model Version:      1.33
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr 14 18:07:40 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Mon Apr 14 18:07:01 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_TorqCoor_Glb_h_
#define RTW_HEADER_CtAp_TorqCoor_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_TorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T TorqPahMgmt_DesCoorrDeltaTq_Nm;

/* delta difference between filtered desired torque and prefiltered desired propulsion torque */
extern real32_T TorqPahMgmt_DesCoorrTq_Nm;

/* esp interventions desired torque value */
extern real32_T TorqPahMgmt_DesCoorrUnFilTq_Nm;

/* esp interventions filter desired torque value */
extern real32_T TorqPahMgmt_GrdTqCoorrNegTq_Nm;

/* esp interventions filter negative ramp value */
extern real32_T TorqPahMgmt_GrdTqCoorrPosTq_Nm;

/* esp interventions filter postive ramp value */
extern boolean_T TorqPahMgmt_IBSIntvRampShOffCdn_Flg;

/* ESP interventions Exit filter status */
extern boolean_T TorqPahMgmt_IBSIntvShOffCdn_Flg;

/* ESP interventions Exit filter status */
#define CtAp_TorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCoor_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_TorqCoor_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
