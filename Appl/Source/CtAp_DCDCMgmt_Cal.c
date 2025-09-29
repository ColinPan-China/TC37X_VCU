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
 *  Filename:           CtAp_DCDCMgmt_Cal.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DCDCMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       ATOM-HyacinthGe - Thu Aug 29 14:06:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:31:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:30:10 2025
 *
 *
 *******************************************************************************/
#include "CtAp_DCDCMgmt_Cal.h"
#include "rtwtypes.h"
#include "CtAp_DCDCMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T HvMgmt_DCDCDTCEnaSetTim_CFG = 1500U;
                         /* Time determination of DTC enable conditions for DCDC
                          */
volatile const uint16_T HvMgmt_DCDCEnaFltDTCResetTim_CFG = 1000U;
                 /* Time determination of DCDC enbale fault DTC reset conditions
                  */
volatile const uint16_T HvMgmt_DCDCEnaFltDTCSetTim_CFG = 500U;
                   /* Time determination of DCDC enable fault DTC set conditions

                    */
volatile const uint16_T HvMgmt_DCDCStopFltDTCResetTim_CFG = 1000U;
                   /* Time determination of DCDC stop fault DTC reset conditions
                    */
volatile const uint16_T HvMgmt_DCDCStopFltDTCSetTim_CFG = 500U;
                     /* Time determination of DCDC stop fault DTC set conditions
                      */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
