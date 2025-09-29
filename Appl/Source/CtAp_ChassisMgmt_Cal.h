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
 *  Filename:           CtAp_ChassisMgmt_Cal.h
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

#ifndef RTW_HEADER_CtAp_ChassisMgmt_Cal_h_
#define RTW_HEADER_CtAp_ChassisMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChassisMgmt_VehRednRat_CFG;

/* Vehicle deceleration ratio */
extern volatile const real32_T ChassisMgmt_VehTrsmEff_CFG;

/* Vehicle efficiency */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChassisMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
