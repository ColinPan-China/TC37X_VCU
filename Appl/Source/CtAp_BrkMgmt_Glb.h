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
 *  Filename:           CtAp_BrkMgmt_Glb.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_BrkMgmt
 *  Model Version:      1.144
 *  Model Author:       Mike Ni - Fri Aug 16 09:59:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 09:13:06 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Sep 10 14:51:20 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_BrkMgmt_Glb_h_
#define RTW_HEADER_CtAp_BrkMgmt_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChassisMgmt_BrkCmpDecelReqActv_Flg;

/* Brake compensate deceleration request status: 0:Off 1:On */
extern boolean_T ChassisMgmt_BrkCmpDecelReqStsOff_Flg;

/* Brake compensate deceleration request off status: 0:Not active 1:Active */
extern boolean_T ChassisMgmt_BrkCmpDecelReqStsOn_Flg;

/* Brake compensate deceleration request on status: 0:Not active 1:Active */
extern uint8_T ChassisMgmt_BrkCmpSts_Enum;

/* Brake compensate on status: 0:Off 1:On */
extern boolean_T ChassisMgmt_BrkRgnActv_Flg;

/* Brake regeneration active status: 0:Inactive 1:Active */
extern real32_T ChassisMgmt_BrkRgnTq_Nm;

/* Brake regeneration torque */
extern boolean_T ChassisMgmt_ErrResIBSRbsDesTqOverFltInfo_Flg;

/* FUSA FAULT STATUS */
extern boolean_T ChassisMgmt_IBSRbsDesTqOverFltActv_Flg;

/* RBS desired torque over limit fault status: 0:Notactive 1:Active */
extern real32_T ChassisMgmt_RgnTqCapDiffWhlTq_Nm;

/* ChassisMgmt RgnTqCapDiffWhlTq Nm */
extern boolean_T ChassisMgmt_RgnTqCapVldEna2_Flg;

/* Brake valid  enable2 status:0:Not active1:Active */
extern boolean_T ChassisMgmt_RgnTqCapVldEna3_Flg;

/* Brake valid status:0:Not active1:Active */
extern boolean_T ChassisMgmt_RgnTqCapVldEna4_Flg;

/* Brake valid status:0:Not active1:Active */
extern boolean_T ChassisMgmt_RgnTqCapVldEna_Flg;

/* Brake valid  status:0:Not active1:Active */
extern boolean_T ChassisMgmt_RgnTqCapVld_Flg;

/* Regeneration torque cap valid status: 0:Invalid 1:Valid */
extern real32_T ChassisMgmt_RgnTqCap_Nm;

/* Brake regeneration cap torque */
#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_BrkMgmt_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
