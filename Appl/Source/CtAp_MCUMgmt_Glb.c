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
 *  Filename:           CtAp_MCUMgmt_Glb.c
 *  File Creation Date: 21-Aug-2025
 *  Model Name:         CtAp_MCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:17:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug 21 10:52:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Aug 21 10:37:51 2025
 *
 *
 *******************************************************************************/
#include "CtAp_MCUMgmt_Glb.h"
#include "rtwtypes.h"
#include "CtAp_MCUMgmt_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_MCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint8_T HvMgmt_ErrStatMCURdyFltDTCOne;
/* In case one, the MCU enters the Ready fault DTC judgment result of Err Stat */
uint8_T HvMgmt_ErrStatMCURdyFltDTCTwo;
/* In case two, the MCU enters the Ready fault DTC judgment result of Err Stat */
uint8_T HvMgmt_MonResMCURdyFltDTCOne;
/* In case one, the MCU enters the Ready fault DTC judgment result of Mon Res */
uint8_T HvMgmt_MonResMCURdyFltDTCTwo;
/* In case two, the MCU enters the Ready fault DTC judgment result of Mon Res */
boolean_T HvMgmt_MonStatMCURdyFltDTCOne;
/* In case one, the MCU enters the Ready fault DTC judgment result of Mon Stat */
boolean_T HvMgmt_MonStatMCURdyFltDTCTwo;
/* In case two, the MCU enters the Ready fault DTC judgment result of Mon Stat */

#define CtAp_MCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
