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
 *  Filename:           CtAp_BMSMgmt_Glb.h
 *  File Creation Date: 25-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul 25 10:24:27 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Jul 08 11:09:17 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_BMSMgmt_Glb_h_
#define RTW_HEADER_CtAp_BMSMgmt_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern uint8_T HvMgmt_BMSHvOnCnt_Enum;

/* BMS request high voltage power on count */
extern boolean_T HvMgmt_BMSRlyClsFlt_Flg;

/* BMS relay close fault */
extern uint8_T HvMgmt_ErrStatBMSRlyClsDTCOne;

/* DTC Err Stat of BMS relay close failure 1 */
extern uint8_T HvMgmt_ErrStatBMSRlyClsDTCTwo;

/* DTC Err Stat of BMS relay close failure 2 */
extern boolean_T HvMgmt_HvFaultPwrOffReq;

/* High voltage fault power-off request */
extern boolean_T HvMgmt_HvNormalPwrOffReq;

/* High voltage normal power-off request */
extern boolean_T HvMgmt_HvPwrOnReq_Flg;

/* High voltage power-on request */
extern boolean_T HvMgmt_HvRelayFaultPwrOffReq;

/* High voltage BMS relay fault power-off request */
extern uint8_T HvMgmt_MonResBMSRlyClsDTCOne;

/* DTC Mon Res of BMS relay close failure 1 */
extern uint8_T HvMgmt_MonResBMSRlyClsDTCTwo;

/* DTC Mon Res of BMS relay close failure 2 */
extern boolean_T HvMgmt_MonStatBMSRlyClsDTCOne;

/* DTC Mon Stat of BMS relay close failure 1 */
extern boolean_T HvMgmt_MonStatBMSRlyClsDTCTwo;

/* DTC Mon Stat of BMS relay close failure 2 */
#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_BMSMgmt_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
