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
 *  Filename:           CtAp_BrkMgmt_Global.h
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_BrkMgmt
 *  Model Version:      1.29
 *  Model Author:       Mike Ni - Fri Aug 16 09:59:38 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 13:14:44 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  51913 - Wed Sep 04 10:54:01 2024
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_BrkMgmt_Global_h_
#define RTW_HEADER_CtAp_BrkMgmt_Global_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChassisMgmt_BrkCmpOffSts_Flg;

/* Brake compensate off status:
   0:Not active
   1:Active */
extern boolean_T ChassisMgmt_BrkCmpWarnSts2_Flg;

/* Brake compensate warn2 status:
   0:Not active
   1:Active
 */
#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_BrkMgmt_Global_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
