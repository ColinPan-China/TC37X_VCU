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
 *  Filename:           CtAp_S2Mgmt_Cal.c
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_S2Mgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:46:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:45:06 2025
 *
 *
 *******************************************************************************/
#include "CtAp_S2Mgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_S2Mgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T OBCMgmt_S2SwtCtrlCPStsChkTmt_CFG = 5000U;/* S2 Control CP status check limit */
volatile const uint16_T OBCMgmt_S2SwtCtrlChkUAcTmt_CFG = 5000U;
                                /* S2 Control S2 close check AC voltage limit */
volatile const uint16_T OBCMgmt_S2SwtCtrlChkUAc_CFG = 90U;/* S2 Control AC voltage check limit */
volatile const uint16_T OBCMgmt_S2SwtCtrlClsTmt_CFG = 5000U;/* S2 Control S2 close check limit */
volatile const uint16_T OBCMgmt_S2SwtCtrlDTCEnaTim_CFG = 1500U;/* S2 Control DTC enable time */
volatile const uint16_T OBCMgmt_S2SwtCtrlOpenTmt_CFG = 5000U;/* S2 Control open time limit */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
