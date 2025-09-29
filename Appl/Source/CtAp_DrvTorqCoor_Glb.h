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
 *  Filename:           CtAp_DrvTorqCoor_Glb.h
 *  File Creation Date: 07-Dec-2024
 *  Model Name:         CtAp_DrvTorqCoor
 *  Model Version:      1.54
 *  Model Author:       Mike Ni - Fri Aug 16 10:11:54 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Dec  7 13:52:39 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Sat Dec 07 13:52:06 2024
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_DrvTorqCoor_Glb_h_
#define RTW_HEADER_CtAp_DrvTorqCoor_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_DrvTorqCoor_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvTorqCoor_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ChassisMgmt_DrvCoorrDesTq_Nm;

/* Coordination torque of final output */
extern boolean_T ChassisMgmt_DrvDmdHiPrio_Flg;

/* High priority status:
   0:Off
   1:On
 */
extern real32_T ChassisMgmt_DrvTqCoorrDesFwdTq_Nm;

/* Coordination torque of final output in gear D
 */
extern real32_T ChassisMgmt_DrvTqCoorrDesRvsTq_Nm;

/* Coordination torque of final output in gear R
 */
extern real32_T ChassisMgmt_DrvTqCoorrDrvrFwdTq_Nm;

/* Diver Torque request */
extern real32_T ChassisMgmt_DrvTqCoorrFwdApsTq_Nm;

/* torque coordinated by drv torque and drive assistance torque in gear D
 */
extern real32_T ChassisMgmt_DrvTqCoorrFwdBrkTq_Nm;

/* torque coordinated by D2 torque and brake regeneration torque in gear D
 */
extern real32_T ChassisMgmt_DrvTqCoorrFwdVlcTq_Nm;

/* torque coordinated by drv torque and drive assistance torque in gear D
 */
extern real32_T ChassisMgmt_DrvTqCoorrPrpRvsTq_Nm;

/* torque coordinated by driver desired torque and creep torque in gear R
 */
extern real32_T ChassisMgmt_DrvTqCoorrRvsApsTq_Nm;

/* ChassisMgmt_DrvTqCoorrRvsApsTq_Nm */
#define CtAp_DrvTorqCoor_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvTorqCoor_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_DrvTorqCoor_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
