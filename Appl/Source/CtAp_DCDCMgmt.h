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
 *  Filename:           CtAp_DCDCMgmt.h
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
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCDCMgmt_h_
#define RTW_HEADER_CtAp_DCDCMgmt_h_
#ifndef CtAp_DCDCMgmt_COMMON_INCLUDES_
#define CtAp_DCDCMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DCDCMgmt.h"
#endif                                 /* CtAp_DCDCMgmt_COMMON_INCLUDES_ */

#include "CtAp_DCDCMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_DCDCMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DCDCMgmt_Active                true                      /* Referenced by:
                                                                  * '<S60>/Marco_Active1'
                                                                  * '<S61>/Marco_Active'
                                                                  */
#define DCDCMgmt_BMSBattUDcFac         0.95F                     /* Referenced by: '<S9>/Marco_BMSBattUDcFac' */
#define DCDCMgmt_Buck                  2U                        /* Referenced by:
                                                                  * '<S34>/Constant'
                                                                  * '<S35>/Constant'
                                                                  * '<S36>/Constant'
                                                                  * '<S64>/Constant'
                                                                  * '<S65>/Constant'
                                                                  */
#define DCDCMgmt_DCDCBuckCmpl          4U                        /* Referenced by:
                                                                  * '<S11>/Marco_DCDCBuckCmpl'
                                                                  * '<S11>/Marco_DCDCBuckCmpl1'
                                                                  */
#define DCDCMgmt_DCDCBuckFailed        3U                        /* Referenced by: '<S11>/Marco_DCDCBuckFailed' */
#define DCDCMgmt_DCDCBuckUDc           14.125F                   /* Referenced by: '<S10>/Marco_DCDCBuckUDc' */
#define DCDCMgmt_DCDCDiUDc             0.0F                      /* Referenced by: '<S10>/Marco_DCDCDiUDc' */
#define DCDCMgmt_DCDCDisableCmpl       1U                        /* Referenced by:
                                                                  * '<S11>/Marco_DCDCDisableCmpl'
                                                                  * '<S11>/Marco_DCDCDisableCmpl1'
                                                                  */
#define DCDCMgmt_DCDCDisableFailed     2U                        /* Referenced by: '<S11>/Marco_DCDCDisableFailed' */
#define DCDCMgmt_DCDCReq_Buck          1U                        /* Referenced by:
                                                                  * '<S12>/Marco_DCDCReq_Buck'
                                                                  * '<S40>/Constant'
                                                                  * '<S41>/Constant'
                                                                  * '<S42>/Constant'
                                                                  * '<S67>/Constant'
                                                                  */
#define DCDCMgmt_DCDCReq_Disable       2U                        /* Referenced by:
                                                                  * '<S12>/Marco_DCDCReq_Disable'
                                                                  * '<S37>/Constant'
                                                                  * '<S38>/Constant'
                                                                  * '<S39>/Constant'
                                                                  * '<S76>/Constant'
                                                                  */
#define DCDCMgmt_DrvReady              3U                        /* Referenced by:
                                                                  * '<S24>/Constant'
                                                                  * '<S59>/Constant'
                                                                  */
#define DCDCMgmt_HvMgmt_RunStep        20U                       /* Referenced by:
                                                                  * '<S11>/HvMgmt_RunStep'
                                                                  * '<S11>/HvMgmt_RunStep1'
                                                                  * '<S11>/HvMgmt_RunStep2'
                                                                  * '<S11>/HvMgmt_RunStep3'
                                                                  * '<S11>/HvMgmt_RunStep4'
                                                                  * '<S11>/HvMgmt_RunStep5'
                                                                  * '<S60>/HvMgmt_RunStep2'
                                                                  * '<S60>/HvMgmt_RunStep3'
                                                                  * '<S61>/HvMgmt_RunStep'
                                                                  * '<S61>/HvMgmt_RunStep1'
                                                                  */
#define DCDCMgmt_HvReady               2U                        /* Referenced by:
                                                                  * '<S17>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S57>/Constant'
                                                                  */
#define DCDCMgmt_INIT                  0U                        /* Referenced by:
                                                                  * '<S11>/Marco_INIT'
                                                                  * '<S14>/Constant'
                                                                  * '<S50>/Constant'
                                                                  * '<S52>/Constant'
                                                                  */
#define DCDCMgmt_Inactive              false                     /* Referenced by:
                                                                  * '<S66>/Constant'
                                                                  * '<S75>/Constant'
                                                                  */
#define DCDCMgmt_Preheating            4U                        /* Referenced by:
                                                                  * '<S18>/Constant'
                                                                  * '<S23>/Constant'
                                                                  * '<S58>/Constant'
                                                                  */
#define DCDCMgmt_Sleep                 5U                        /* Referenced by:
                                                                  * '<S15>/Constant'
                                                                  * '<S51>/Constant'
                                                                  * '<S53>/Constant'
                                                                  */
#define DCDCMgmt_Standby               1U                        /* Referenced by:
                                                                  * '<S16>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S33>/Constant'
                                                                  * '<S73>/Constant'
                                                                  * '<S74>/Constant'
                                                                  */
#define DCDCMgmt_U8Active              1U                        /* Referenced by:
                                                                  * '<S19>/Constant'
                                                                  * '<S54>/Constant'
                                                                  */
#define DCDCMgmt_U8Inactive            0U                        /* Referenced by: '<S13>/Constant' */

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S25>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_DC_T;

/* PublicStructure Variables for Internal Data, for system '<S60>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S70>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_e2be;      /* '<S69>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S68>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle;/* '<S61>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt;/* '<S61>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_mbvz;/* '<S60>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt1;/* '<S60>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt5;/* '<S11>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt4;/* '<S11>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt3;/* '<S11>/ATOM_TimeCnt3' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt2;/* '<S11>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt1_cl54;/* '<S11>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S11>/ATOM_TimeCnt' */
  dt_HvMgmt_DCDCEnaFltDTC RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_;
      /* '<Root>/RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus' */
  dt_HvMgmt_DCDCStopFltDTC RTE_P_HvMgmt_DCDCStopFltDTC_Bus;
    /* '<Root>/RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus' */
  real32_T Delay1_DSTATE;              /* '<S10>/Delay1' */
  uint8_T Switch1;                     /* '<S77>/Switch1' */
  uint8_T Switch8;                     /* '<S77>/Switch8' */
  uint8_T Switch1_gea2;                /* '<S68>/Switch1' */
  uint8_T Switch8_fgnd;                /* '<S68>/Switch8' */
  uint8_T Delay2_DSTATE;               /* '<S12>/Delay2' */
  uint8_T Delay_DSTATE;                /* '<S11>/Delay' */
  boolean_T Switch6;                   /* '<S77>/Switch6' */
  boolean_T Switch6_o2xb;              /* '<S68>/Switch6' */
} ARID_DEF_CtAp_DCDCMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_DCDCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"

extern ARID_DEF_CtAp_DCDCMgmt_T CtAp_DCDCMgmt_ARID_DEF;

#define CtAp_DCDCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_DCDCMgmt'
 * '<S1>'   : 'CtAp_DCDCMgmt/DocBlock'
 * '<S2>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Init'
 * '<S4>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function'
 * '<S5>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Input'
 * '<S6>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Output'
 * '<S7>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts'
 * '<S8>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC'
 * '<S9>'   : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq'
 * '<S10>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc'
 * '<S11>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts'
 * '<S12>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod'
 * '<S13>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/HvMgmt_ReqModBMS_Enum_CP'
 * '<S14>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/ModMgmt_HvSts_Enum_CP'
 * '<S15>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/ModMgmt_HvSts_Enum_CP1'
 * '<S16>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/ModMgmt_HvSts_Enum_CP2'
 * '<S17>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/ModMgmt_HvSts_Enum_CP3'
 * '<S18>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDiReq/ModMgmt_HvSts_Enum_CP4'
 * '<S19>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/HvMgmt_ReqModBMS_Enum_CP'
 * '<S20>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/If5'
 * '<S21>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/If6'
 * '<S22>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/ModMgmt_HvSts_Enum_CP5'
 * '<S23>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/ModMgmt_HvSts_Enum_CP6'
 * '<S24>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCDmdLvUDc/ModMgmt_HvSts_Enum_CP7'
 * '<S25>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt'
 * '<S26>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt1'
 * '<S27>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt2'
 * '<S28>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt3'
 * '<S29>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt4'
 * '<S30>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ATOM_TimeCnt5'
 * '<S31>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP'
 * '<S32>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP1'
 * '<S33>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP2'
 * '<S34>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP3'
 * '<S35>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP4'
 * '<S36>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ComM_DCDCWrkMod_Enum_CP5'
 * '<S37>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP'
 * '<S38>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP1'
 * '<S39>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP2'
 * '<S40>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP3'
 * '<S41>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP4'
 * '<S42>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/HvMgmt_ReqDCDCMod_Enum_CP5'
 * '<S43>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If1'
 * '<S44>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If10'
 * '<S45>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If11'
 * '<S46>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If2'
 * '<S47>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If3'
 * '<S48>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If4'
 * '<S49>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/If9'
 * '<S50>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ModMgmt_HvSts_Enum_CP10'
 * '<S51>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ModMgmt_HvSts_Enum_CP11'
 * '<S52>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ModMgmt_HvSts_Enum_CP8'
 * '<S53>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_DCDCWrkModActSts/ModMgmt_HvSts_Enum_CP9'
 * '<S54>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/HvMgmt_ReqModBMS_Enum_CP'
 * '<S55>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/If7'
 * '<S56>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/If8'
 * '<S57>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/ModMgmt_HvSts_Enum_CP5'
 * '<S58>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/ModMgmt_HvSts_Enum_CP6'
 * '<S59>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCDCSts/HvMgmt_ReqDCDCMod/ModMgmt_HvSts_Enum_CP7'
 * '<S60>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC'
 * '<S61>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC'
 * '<S62>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ATOM_TimeCnt1'
 * '<S63>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ATOM_U16ErrorHandle'
 * '<S64>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ComM_DCDCWrkMod_Enum_CP2'
 * '<S65>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ComM_DCDCWrkMod_Enum_CP3'
 * '<S66>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ComM_ErrResEPTCANBusOff_Flg_CP1'
 * '<S67>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/HvMgmt_ReqDCDCMod_Enum_CP1'
 * '<S68>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S69>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S70>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCEnaFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S71>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ATOM_TimeCnt'
 * '<S72>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ATOM_U16ErrorHandle'
 * '<S73>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ComM_DCDCWrkMod_Enum_CP'
 * '<S74>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ComM_DCDCWrkMod_Enum_CP1'
 * '<S75>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ComM_ErrResEPTCANBusOff_Flg_CP'
 * '<S76>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/HvMgmt_ReqDCDCMod_Enum_CP'
 * '<S77>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S78>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S79>'  : 'CtAp_DCDCMgmt/R_DCDCMgmt_Cyclic_20ms_sys/CtAp_DCDCMgmt_Function/HvMgmt_DCFCDTC/HvMgmt_DCDCStopFltDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 */

/*-
 * Requirements for '<Root>': CtAp_DCDCMgmt

 *
 * Inherited requirements for '<S10>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:491
 *
 * Inherited requirements for '<S10>/If6':
 *  1. VCU_SW_Requirements_Specification.slreqx:492
 *
 * Inherited requirements for '<S11>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:497
 *
 * Inherited requirements for '<S11>/If10':
 *  1. VCU_SW_Requirements_Specification.slreqx:495
 *
 * Inherited requirements for '<S11>/If11':
 *  1. VCU_SW_Requirements_Specification.slreqx:498
 *
 * Inherited requirements for '<S11>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:500
 *  2. VCU_SW_Requirements_Specification.slreqx:501
 *
 * Inherited requirements for '<S11>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:496
 *
 * Inherited requirements for '<S11>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:499
 *
 * Inherited requirements for '<S11>/If9':
 *  1. VCU_SW_Requirements_Specification.slreqx:494
 *
 * Inherited requirements for '<S12>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:491
 *
 * Inherited requirements for '<S12>/If8':
 *  1. VCU_SW_Requirements_Specification.slreqx:492

 */
#endif                                 /* RTW_HEADER_CtAp_DCDCMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
