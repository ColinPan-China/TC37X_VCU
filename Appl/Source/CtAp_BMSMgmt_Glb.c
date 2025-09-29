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
 *  Filename:           CtAp_BMSMgmt_Glb.c
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:26:58 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:26:09 2025
 *
 *
 *******************************************************************************/
#include "CtAp_BMSMgmt_Glb.h"
#include "rtwtypes.h"
#include "CtAp_BMSMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint8_T HvMgmt_BMSHvOnCnt_Enum;    /* BMS request high voltage power on count */
boolean_T HvMgmt_BMSRlyClsFlt_Flg;     /* BMS relay close fault */
uint8_T HvMgmt_ErrStatBMSRlyClsDTCOne;
                                 /* DTC Err Stat of BMS relay close failure 1 */
uint8_T HvMgmt_ErrStatBMSRlyClsDTCTwo;
                                 /* DTC Err Stat of BMS relay close failure 2 */
boolean_T HvMgmt_HvFaultPwrOffReq;    /* High voltage fault power-off request */
boolean_T HvMgmt_HvNormalPwrOffReq;  /* High voltage normal power-off request */
boolean_T HvMgmt_HvPwrOnReq_Flg;       /* High voltage power-on request */
boolean_T HvMgmt_HvRelayFaultPwrOffReq;
                            /* High voltage BMS relay fault power-off request */
uint8_T HvMgmt_MonResBMSRlyClsDTCOne;
                                  /* DTC Mon Res of BMS relay close failure 1 */
uint8_T HvMgmt_MonResBMSRlyClsDTCTwo;
                                  /* DTC Mon Res of BMS relay close failure 2 */
boolean_T HvMgmt_MonStatBMSRlyClsDTCOne;
                                 /* DTC Mon Stat of BMS relay close failure 1 */
boolean_T HvMgmt_MonStatBMSRlyClsDTCTwo;
                                 /* DTC Mon Stat of BMS relay close failure 2 */

#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
