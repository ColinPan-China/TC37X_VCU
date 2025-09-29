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
 *  Filename:           CtAp_TCUMgmt.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_TCUMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:37 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 13:38:14 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 13:25:48 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TCUMgmt_h_
#define RTW_HEADER_CtAp_TCUMgmt_h_
#ifndef CtAp_TCUMgmt_COMMON_INCLUDES_
#define CtAp_TCUMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TCUMgmt.h"
#endif                                 /* CtAp_TCUMgmt_COMMON_INCLUDES_ */

#include "CtAp_TCUMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TCUMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TCUMgmt_Active                 true                      /* Referenced by:
                                                                  * '<S7>/Marco_Active'
                                                                  * '<S7>/Marco_Active1'
                                                                  */
#define TCUMgmt_BMSBattUDcFac          0.95F                     /* Referenced by: '<S27>/Marco_BMSBattUDcFac' */
#define TCUMgmt_DrvReady               3U                        /* Referenced by: '<S40>/Constant' */
#define TCUMgmt_HvMgmt_RunStep         20U                       /* Referenced by:
                                                                  * '<S7>/HvMgmt_RunStep'
                                                                  * '<S7>/HvMgmt_RunStep1'
                                                                  * '<S7>/HvMgmt_RunStep2'
                                                                  * '<S7>/HvMgmt_RunStep3'
                                                                  * '<S28>/HvMgmt_RunStep'
                                                                  * '<S28>/HvMgmt_RunStep1'
                                                                  * '<S28>/HvMgmt_RunStep2'
                                                                  * '<S28>/HvMgmt_RunStep3'
                                                                  * '<S28>/HvMgmt_RunStep4'
                                                                  * '<S28>/HvMgmt_RunStep5'
                                                                  */
#define TCUMgmt_HvReady                2U                        /* Referenced by:
                                                                  * '<S36>/Constant'
                                                                  * '<S38>/Constant'
                                                                  */
#define TCUMgmt_INIT                   0U                        /* Referenced by:
                                                                  * '<S28>/Marco_INIT'
                                                                  * '<S33>/Constant'
                                                                  * '<S66>/Constant'
                                                                  * '<S68>/Constant'
                                                                  */
#define TCUMgmt_Inactive               false                     /* Referenced by:
                                                                  * '<S13>/Constant'
                                                                  * '<S14>/Constant'
                                                                  */
#define TCUMgmt_Preheating             4U                        /* Referenced by:
                                                                  * '<S37>/Constant'
                                                                  * '<S39>/Constant'
                                                                  */
#define TCUMgmt_Sleep                  5U                        /* Referenced by:
                                                                  * '<S34>/Constant'
                                                                  * '<S67>/Constant'
                                                                  * '<S69>/Constant'
                                                                  */
#define TCUMgmt_Standby                1U                        /* Referenced by: '<S35>/Constant' */
#define TCUMgmt_TCUDisableCmpl         1U                        /* Referenced by:
                                                                  * '<S28>/Marco_TCUDisableCmpl'
                                                                  * '<S28>/Marco_TCUDisableCmpl1'
                                                                  */
#define TCUMgmt_TCUDisableFailed       2U                        /* Referenced by: '<S28>/Marco_TCUDisableFailed' */
#define TCUMgmt_TCUEnaCmpl             3U                        /* Referenced by:
                                                                  * '<S28>/Marco_TCUEnaCmpl'
                                                                  * '<S28>/Marco_TCUEnaCmpl1'
                                                                  */
#define TCUMgmt_TCUEnaFailed           4U                        /* Referenced by: '<S28>/Marco_TCUEnaFailed' */
#define TCUMgmt_TCUReq_Disable         2U                        /* Referenced by:
                                                                  * '<S19>/Constant'
                                                                  * '<S27>/Marco_TCUReq_Disable'
                                                                  * '<S53>/Constant'
                                                                  * '<S54>/Constant'
                                                                  * '<S55>/Constant'
                                                                  */
#define TCUMgmt_TCUReq_Ena             3U                        /* Referenced by:
                                                                  * '<S20>/Constant'
                                                                  * '<S27>/Marco_TCUReq_Ena'
                                                                  * '<S56>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S58>/Constant'
                                                                  */
#define TCUMgmt_TCU_OFF                1U                        /* Referenced by:
                                                                  * '<S15>/Constant'
                                                                  * '<S16>/Constant'
                                                                  * '<S47>/Constant'
                                                                  * '<S48>/Constant'
                                                                  * '<S49>/Constant'
                                                                  */
#define TCUMgmt_TCU_ON                 2U                        /* Referenced by:
                                                                  * '<S17>/Constant'
                                                                  * '<S18>/Constant'
                                                                  * '<S50>/Constant'
                                                                  * '<S51>/Constant'
                                                                  * '<S52>/Constant'
                                                                  */
#define TCUMgmt_U8Active               1U                        /* Referenced by: '<S30>/Constant' */
#define TCUMgmt_U8Inactive             0U                        /* Referenced by: '<S29>/Constant' */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S9>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_TC_T;

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_U16ErrorHandleT1' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S23>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_hpnf;      /* '<S22>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S21>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt5;/* '<S28>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt4;/* '<S28>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt3;/* '<S28>/ATOM_TimeCnt3' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt2;/* '<S28>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt1;/* '<S28>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt;/* '<S28>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandleT2;/* '<S7>/ATOM_U16ErrorHandleT2' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandleT1;/* '<S7>/ATOM_U16ErrorHandleT1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt1_mbvz;/* '<S7>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_TC_T ARID_DEF_ATOM_TimeCnt_cl54;/* '<S7>/ATOM_TimeCnt' */
  dt_HvMgmt_TCUEnaFltDTC RTE_P_HvMgmt_TCUEnaFltDTC_Bus_t;
        /* '<Root>/RTE_P_HvMgmt_TCUEnaFltDTC_Bus_tec_HvMgmt_TCUEnaFltDTC_Bus' */
  dt_HvMgmt_TCUStopFltDTC RTE_P_HvMgmt_TCUStopFltDTC_Bus_;
      /* '<Root>/RTE_P_HvMgmt_TCUStopFltDTC_Bus_tec_HvMgmt_TCUStopFltDTC_Bus' */
  uint8_T Switch1;                     /* '<S24>/Switch1' */
  uint8_T Switch8;                     /* '<S24>/Switch8' */
  uint8_T Switch1_mmnj;                /* '<S21>/Switch1' */
  uint8_T Switch8_ol2a;                /* '<S21>/Switch8' */
  uint8_T Delay2_DSTATE;               /* '<S27>/Delay2' */
  uint8_T Delay_DSTATE;                /* '<S28>/Delay' */
  boolean_T Switch6;                   /* '<S24>/Switch6' */
  boolean_T Switch6_edws;              /* '<S21>/Switch6' */
} ARID_DEF_CtAp_TCUMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"

extern ARID_DEF_CtAp_TCUMgmt_T CtAp_TCUMgmt_ARID_DEF;

#define CtAp_TCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CtAp_TCUMgmt'
 * '<S1>'   : 'CtAp_TCUMgmt/DocBlock'
 * '<S2>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Init'
 * '<S4>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function'
 * '<S5>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Input'
 * '<S6>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Output'
 * '<S7>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC'
 * '<S8>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts'
 * '<S9>'   : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_TimeCnt'
 * '<S10>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_TimeCnt1'
 * '<S11>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT1'
 * '<S12>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT2'
 * '<S13>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_ErrResEPTCANBusOff_Flg_CP'
 * '<S14>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_ErrResEPTCANBusOff_Flg_CP1'
 * '<S15>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_TCUHvPwrSts_Enum_CP'
 * '<S16>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_TCUHvPwrSts_Enum_CP1'
 * '<S17>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_TCUHvPwrSts_Enum_CP2'
 * '<S18>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ComM_TCUHvPwrSts_Enum_CP3'
 * '<S19>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/HvMgmt_ReqTCUMod_Enum_CP'
 * '<S20>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/HvMgmt_ReqTCUMod_Enum_CP1'
 * '<S21>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT1/ErrorHandleSysU16'
 * '<S22>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT1/ErrorHandleSysU16/OnDelay'
 * '<S23>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT1/ErrorHandleSysU16/OnDelay1'
 * '<S24>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT2/ErrorHandleSysU16'
 * '<S25>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT2/ErrorHandleSysU16/OnDelay'
 * '<S26>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUDTC/ATOM_U16ErrorHandleT2/ErrorHandleSysU16/OnDelay1'
 * '<S27>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod'
 * '<S28>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts'
 * '<S29>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/HvMgmt_ReqModBMS_Enum_CP'
 * '<S30>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S31>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/If7'
 * '<S32>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/If8'
 * '<S33>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP'
 * '<S34>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP1'
 * '<S35>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP2'
 * '<S36>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP3'
 * '<S37>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP4'
 * '<S38>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP5'
 * '<S39>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP6'
 * '<S40>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_ReqTCUMod/ModMgmt_HvSts_Enum_CP7'
 * '<S41>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt'
 * '<S42>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt1'
 * '<S43>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt2'
 * '<S44>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt3'
 * '<S45>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt4'
 * '<S46>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ATOM_TimeCnt5'
 * '<S47>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP'
 * '<S48>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP1'
 * '<S49>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP2'
 * '<S50>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP3'
 * '<S51>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP4'
 * '<S52>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ComM_TCUHvPwrSts_Enum_CP5'
 * '<S53>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP'
 * '<S54>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP1'
 * '<S55>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP2'
 * '<S56>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP3'
 * '<S57>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP4'
 * '<S58>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/HvMgmt_ReqTCUMod_Enum_CP5'
 * '<S59>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If1'
 * '<S60>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If10'
 * '<S61>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If11'
 * '<S62>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If2'
 * '<S63>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If3'
 * '<S64>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If4'
 * '<S65>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/If9'
 * '<S66>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ModMgmt_HvSts_Enum_CP10'
 * '<S67>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ModMgmt_HvSts_Enum_CP11'
 * '<S68>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ModMgmt_HvSts_Enum_CP8'
 * '<S69>'  : 'CtAp_TCUMgmt/R_TCUMgmt_Cyclic_20ms_sys/CtAp_TCUMgmt_Function/HvMgmt_TCUSts/HvMgmt_TCUWrkModActSts/ModMgmt_HvSts_Enum_CP9'
 */

/*-
 * Requirements for '<Root>': CtAp_TCUMgmt

 *
 * Inherited requirements for '<S4>/HvMgmt_TCUDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:556
 *  2. VCU_SW_Requirements_Specification.slreqx:557
 *  3. VCU_SW_Requirements_Specification.slreqx:558
 *  4. VCU_SW_Requirements_Specification.slreqx:562
 *  5. VCU_SW_Requirements_Specification.slreqx:563
 *  6. VCU_SW_Requirements_Specification.slreqx:564
 *  7. VCU_SW_Requirements_Specification.slreqx:569
 *  8. VCU_SW_Requirements_Specification.slreqx:570
 *  9. VCU_SW_Requirements_Specification.slreqx:571
 *  10. VCU_SW_Requirements_Specification.slreqx:575
 *  11. VCU_SW_Requirements_Specification.slreqx:576
 *  12. VCU_SW_Requirements_Specification.slreqx:577
 *
 * Inherited requirements for '<S27>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:541
 *
 * Inherited requirements for '<S27>/If8':
 *  1. VCU_SW_Requirements_Specification.slreqx:542
 *
 * Inherited requirements for '<S28>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:547
 *
 * Inherited requirements for '<S28>/If10':
 *  1. VCU_SW_Requirements_Specification.slreqx:545
 *
 * Inherited requirements for '<S28>/If11':
 *  1. VCU_SW_Requirements_Specification.slreqx:548
 *
 * Inherited requirements for '<S28>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:550
 *  2. VCU_SW_Requirements_Specification.slreqx:551
 *
 * Inherited requirements for '<S28>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:546
 *
 * Inherited requirements for '<S28>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:549
 *
 * Inherited requirements for '<S28>/If9':
 *  1. VCU_SW_Requirements_Specification.slreqx:544

 */
#endif                                 /* RTW_HEADER_CtAp_TCUMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
