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
 *  Filename:           CtAp_EmMgmt_Cal.c
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_EmMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:03 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 09:47:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Fri Jun 27 09:46:22 2025
 *
 *
 *******************************************************************************/
#include "CtAp_EmMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_EmMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T OBCMgmt_BCMAntithftStsCfmTim_CFG = 600U;
                                    /* Require emlock of the BCM status limit */
volatile const uint16_T OBCMgmt_CPInvldCfmTim_CFG = 300U;
                                     /* Require emlock of the CP status limit */
volatile const uint16_T OBCMgmt_ElectcLockDTCEnaTim_CFG = 1500U;/* Emlock DTC enable time */
volatile const uint16_T OBCMgmt_ElectcLockLockTmt_CFG = 12000U;/* Emlock lock time limit */
volatile const uint16_T OBCMgmt_ElectcLockUnlckTmt_CFG = 12000U;/* Emlock Unlock time limit */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
