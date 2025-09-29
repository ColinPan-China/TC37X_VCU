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
 *  Filename:           CtAp_ACParMgmt_Cal.h
 *  File Creation Date: 07-Apr-2025
 *  Model Name:         CtAp_ACParMgmt
 *  Model Version:      1.005
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:08 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Apr  7 17:06:08 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon Apr 07 17:04:44 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ACParMgmt_Cal_h_
#define RTW_HEADER_CtAp_ACParMgmt_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T OBCMgmt_OBCChrgCoeff_CFG;

/* OBC charging conversion coefficient */
extern volatile const real32_T OBCMgmt_OBCPreheatCmp_CFG;

/* AC preheating current compensation value */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ACParMgmt_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
