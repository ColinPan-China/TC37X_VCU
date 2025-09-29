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
 *  Filename:           CtAp_PdlAlys_Glb.c
 *  File Creation Date: 19-Aug-2025
 *  Model Name:         CtAp_PdlAlys
 *  Model Version:      1.260
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug 19 13:32:42 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 13:32:00 2025
 *
 *
 *******************************************************************************/
#include "CtAp_PdlAlys_Glb.h"
#include "rtwtypes.h"
#include "CtAp_PdlAlys_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
real32_T ChassisMgmt_AccrPedlPosn_pct; /* Acceleration pedal position value */
real32_T ChassisMgmt_AccrPedlRawPosn_pct;
                                     /* Acceleration pedal position raw value */
boolean_T ChassisMgmt_AccrPedlURaw1LoFltActv_Flg;
/* Acceleration pedal1 voltage lower than normal value fault status active: 0:Not active 1:Active */
boolean_T ChassisMgmt_AccrPedlURaw1LoFltReSetActv_Flg;
/* Acceleration pedal1 voltage lower than normal value fault reset status active: 0:Not active 1:Active */
real32_T ChassisMgmt_AccrPedlURaw1_mV; /* Acceleration pedal1 raw voltage */
boolean_T ChassisMgmt_AccrPedlURaw2HiFltActv_Flg;
/* Acceleration pedal2 voltage higher than normal value fault status active: 0:Not active 1:Active */
boolean_T ChassisMgmt_AccrPedlURaw2HiFltReSetActv_Flg;
/* Acceleration pedal2 voltage higher than normal value fault reset status active: 0:Not active 1:Active */
boolean_T ChassisMgmt_AccrPedlURaw2LoFltActv_Flg;
/* Acceleration pedal2 voltage lower than normal value fault status active: 0:Not active 1:Active */
boolean_T ChassisMgmt_AccrPedlURaw2LoFltReSetActv_Flg;
/* Acceleration pedal2 voltage lower than normal value fault reset status active: 0:Not active 1:Active */
real32_T ChassisMgmt_AccrPedlURaw2_mV; /* Acceleration pedal2 raw voltage */
real32_T ChassisMgmt_AccrPedlURawAbsDif_mV;
/* Absloute difference bwteen acceleration pedal1 raw voltage1 and double acceleration pedal2 raw voltage */
real32_T ChassisMgmt_AccrPedlUnJit1_mV;/* ChassisMgmt AccrPedlUnJit1 mV */
real32_T ChassisMgmt_AccrPedlUnJit2_mV;/* ChassisMgmt AccrPedlUnJit2 mV */
boolean_T ChassisMgmt_AccrPedlVld_Flg;
             /* Acceleration Pedal percentage valid status: 0:Invalid 1:Valid */
uint8_T ChassisMgmt_BrkSts_Enum;
                   /* Brake pedal status: 0:Not pressed  1:Pressed  2:Invalid */
boolean_T ChassisMgmt_ErrResAccrPedl1Flt_Flg;
                       /* Acceleration pedal1 fault status: 0:Passed 1:Failed */
boolean_T ChassisMgmt_ErrResAccrPedl2Flt_Flg;
                       /* Acceleration pedal2 fault status: 0:Passed 1:Failed */
boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt1Flt_Flg;
/* Accelerator Pedal Sensor1 Power supply voltage fault status:0:Passed 1:Failed */
boolean_T ChassisMgmt_ErrResAccrPedlSplyVolt2Flt_Flg;
/* Accelerator Pedal Sensor2 Power supply voltage fault status:0:Passed 1:Failed */
boolean_T ChassisMgmt_ErrResAccrPedlU1HiFltInfo_Flg;/* Accr pedal High FAULT FUSA */
boolean_T ChassisMgmt_ErrResAccrPedlU1LoFltInfo_Flg;/* FUSA accr pedal1 LOW FAULT */
boolean_T ChassisMgmt_ErrResAccrPedlU2HiFltInfo_Flg;/* FUSA accr pedal1 LOW FAULT */
boolean_T ChassisMgmt_ErrResAccrPedlU2LoFltInfo_Flg;/* FUSA accr pedal1 LOW FAULT */
boolean_T ChassisMgmt_ErrResAccrPedlURawDifFlt2Info_Flg;/* FUSA Accr Pedal Dif fault */
boolean_T ChassisMgmt_LimpHomeSts_Flg;
                                /* Vehicle limphome status: 0:Passed 1:Failed */

#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
