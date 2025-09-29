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
 *  Filename:           CtAp_MCUMgmt.h
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
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_MCUMgmt_h_
#define RTW_HEADER_CtAp_MCUMgmt_h_
#ifndef CtAp_MCUMgmt_COMMON_INCLUDES_
#define CtAp_MCUMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_MCUMgmt.h"
#endif                                 /* CtAp_MCUMgmt_COMMON_INCLUDES_ */

#include "CtAp_MCUMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_MCUMgmt_Glb.h"
#include "CtAp_MCUMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define MCUMgmt_Active                 true                      /* Referenced by:
                                                                  * '<S8>/Marco_Active'
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S10>/Marco_Active4'
                                                                  * '<S11>/Marco_Active3'
                                                                  * '<S12>/Marco_Active2'
                                                                  * '<S13>/Marco_Active'
                                                                  * '<S14>/Marco_Active1'
                                                                  */
#define MCUMgmt_BMSActiveCmpl          1U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S44>/Constant'
                                                                  */
#define MCUMgmt_BMSInactiveFail        4U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_BMSInctiveCmpl         2U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Count_Zero             0U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_DrvReady               3U                        /* Referenced by: '<S23>/Constant' */
#define MCUMgmt_Gear_D                 4U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Gear_N                 2U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Gear_P                 1U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Gear_R                 3U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_HvMgmt_RunStep         20U                       /* Referenced by:
                                                                  * '<S8>/Marco_HvMgmt_RunStep'
                                                                  * '<S8>/Marco_HvMgmt_RunStep1'
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S10>/HvMgmt_RunStep8'
                                                                  * '<S10>/HvMgmt_RunStep9'
                                                                  * '<S11>/HvMgmt_RunStep6'
                                                                  * '<S11>/HvMgmt_RunStep7'
                                                                  * '<S12>/HvMgmt_RunStep4'
                                                                  * '<S13>/HvMgmt_RunStep'
                                                                  * '<S13>/HvMgmt_RunStep1'
                                                                  * '<S14>/HvMgmt_RunStep2'
                                                                  * '<S14>/HvMgmt_RunStep3'
                                                                  */
#define MCUMgmt_HvReady                2U                        /* Referenced by:
                                                                  * '<S71>/Constant'
                                                                  * '<S57>/Constant'
                                                                  */
#define MCUMgmt_INIT                   0U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Inactive               false                     /* Referenced by:
                                                                  * '<S8>/MCUMgmt_Inactive'
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S17>/Constant'
                                                                  * '<S28>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S41>/Constant'
                                                                  * '<S53>/Constant'
                                                                  */
#define MCUMgmt_Init                   0U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUEnaCmpl             8U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUExitEna             9U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCURdyGoing            2U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S68>/Constant'
                                                                  */
#define MCUMgmt_MCUReadyCmpl           3U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReqActDischrg       5U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReqDischrg          4U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReqPasDischrg       6U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReqRdy              10U                       /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReqTrq              7U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReq_Dischrg         3U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUReq_Ready           0U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S67>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S45>/Constant'
                                                                  * '<S56>/Constant'
                                                                  */
#define MCUMgmt_MCUReq_TrqCtrl         1U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S30>/Constant'
                                                                  */
#define MCUMgmt_MCUStandbyCmpl         1U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUStandbyUDC          60.0F                     /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_MCUSts_Fault           4U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S66>/Constant'
                                                                  * '<S18>/Constant'
                                                                  * '<S19>/Constant'
                                                                  * '<S43>/Constant'
                                                                  * '<S55>/Constant'
                                                                  */
#define MCUMgmt_MCUSts_Rdy             2U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S65>/Constant'
                                                                  * '<S20>/Constant'
                                                                  * '<S21>/Constant'
                                                                  * '<S42>/Constant'
                                                                  * '<S54>/Constant'
                                                                  */
#define MCUMgmt_MCUSts_TrqCtrl         3U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S29>/Constant'
                                                                  */
#define MCUMgmt_Off_Plug               1U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S64>/Constant'
                                                                  * '<S52>/Constant'
                                                                  */
#define MCUMgmt_PowerMode_Off          1U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_PowerMode_On           2U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */
#define MCUMgmt_Sleep                  5U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S72>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S47>/Constant'
                                                                  * '<S58>/Constant'
                                                                  */
#define MCUMgmt_Standby                1U                        /* Referenced by:
                                                                  * '<S9>/HvMgmt_MCUStsFlow'
                                                                  * '<S46>/Constant'
                                                                  */
#define MCUMgmt_U8Active               1U                        /* Referenced by: '<S9>/HvMgmt_MCUStsFlow' */

/* PublicStructure Variables for Internal Data, for system '<S10>/ATOM_TimeCnt5' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S15>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_MC_T;

/* PublicStructure Variables for Internal Data, for system '<S10>/ATOM_U16ErrorHandle5' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S26>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_akqt;      /* '<S25>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S24>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S11>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S35>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S34>/Delay1' */
} ARID_DEF_NoDT_CtAp_MCUMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<S13>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S50>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_MCUMg_kac5_T;

/* PublicStructure Variables for Internal Data, for system '<S14>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S61>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_MCUMg_awov_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt1;/* '<S8>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt;/* '<S8>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_MCUMg_awov_T ARID_DEF_NoDT;/* '<S14>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt1_mbvz;/* '<S14>/ATOM_TimeCnt1' */
  ARID_DEF_NoDT_CtAp_MCUMg_kac5_T ARID_DEF_NoDT_cl54;/* '<S13>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt2;/* '<S13>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt3;/* '<S12>/ATOM_TimeCnt3' */
  ARID_DEF_NoDT_CtAp_MCUMgmt_T ARID_DEF_NoDT_kkiq;/* '<S11>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt4;/* '<S11>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle5;/* '<S10>/ATOM_U16ErrorHandle5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_MC_T ARID_DEF_ATOM_TimeCnt5;/* '<S10>/ATOM_TimeCnt5' */
  dt_HvMgmt_MCUClsFltDTC RTE_P_HvMgmt_MCUClsFltDTC_Bus_t;
        /* '<Root>/RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus' */
  dt_HvMgmt_MCUEnaFltDTC RTE_P_HvMgmt_MCUEnaFltDTC_Bus_t;
        /* '<Root>/RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus' */
  dt_HvMgmt_MCURdyFltDTC RTE_P_HvMgmt_MCURdyFltDTC_Bus_t;
        /* '<Root>/RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus' */
  dt_HvMgmt_MCURdyFltDTCOne RTE_P_HvMgmt_MCURdyFltDTCOne_Bu;
  /* '<Root>/RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus' */
  dt_HvMgmt_MCURdyFltDTCTwo RTE_P_HvMgmt_MCURdyFltDTCTwo_Bu;
  /* '<Root>/RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus' */
  uint16_T HvMgmt_MCURdyFltCnt;        /* '<S9>/HvMgmt_MCUStsFlow' */
  uint16_T HvMgmt_MCUEnaFltCnt;        /* '<S9>/HvMgmt_MCUStsFlow' */
  uint16_T HvMgmt_MCUClsFltCnt;        /* '<S9>/HvMgmt_MCUStsFlow' */
  uint16_T HvMgmt_MotActTqFltCnt;      /* '<S9>/HvMgmt_MCUStsFlow' */
  uint8_T HvMgmt_MCUReqSts_Enum;       /* '<S9>/HvMgmt_MCUStsFlow' */
  uint8_T Switch1;                     /* '<S39>/Switch1' */
  uint8_T Switch3;                     /* '<S39>/Switch3' */
  uint8_T Switch1_iias;                /* '<S34>/Switch1' */
  uint8_T Switch8;                     /* '<S34>/Switch8' */
  uint8_T Switch1_psmu;                /* '<S24>/Switch1' */
  uint8_T Switch8_a2wu;                /* '<S24>/Switch8' */
  uint8_T Delay_DSTATE;                /* '<S9>/Delay' */
  uint8_T Delay_DSTATE_k1og;           /* '<S11>/Delay' */
  uint8_T is_c2_CtAp_MCUMgmt;          /* '<S9>/HvMgmt_MCUStsFlow' */
  uint8_T is_active_c2_CtAp_MCUMgmt;   /* '<S9>/HvMgmt_MCUStsFlow' */
  boolean_T Switch6;                   /* '<S39>/Switch6' */
  boolean_T Switch6_pv4q;              /* '<S34>/Switch6' */
  boolean_T Switch6_o5hj;              /* '<S24>/Switch6' */
  boolean_T Delay_DSTATE_c1yd;         /* '<S8>/Delay' */
} ARID_DEF_CtAp_MCUMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_MCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"

extern ARID_DEF_CtAp_MCUMgmt_T CtAp_MCUMgmt_ARID_DEF;

#define CtAp_MCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_MCUMgmt'
 * '<S1>'   : 'CtAp_MCUMgmt/DocBlock'
 * '<S2>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Init'
 * '<S4>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function'
 * '<S5>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Input'
 * '<S6>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Output'
 * '<S7>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC'
 * '<S8>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt'
 * '<S9>'   : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUSts'
 * '<S10>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC'
 * '<S11>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC'
 * '<S12>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTC'
 * '<S13>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne'
 * '<S14>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo'
 * '<S15>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ATOM_TimeCnt5'
 * '<S16>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ATOM_U16ErrorHandle5'
 * '<S17>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ComM_ErrResEPTCANBusOff_Flg_CP4'
 * '<S18>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ComM_MCUWrkMod_Enum_CP1'
 * '<S19>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ComM_MCUWrkMod_Enum_CP2'
 * '<S20>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ComM_MCUWrkMod_Enum_CP3'
 * '<S21>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ComM_MCUWrkMod_Enum_CP4'
 * '<S22>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/HvMgmt_MCUReqSts_Enum_CP4'
 * '<S23>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ModMgmt_HvSts_Enum_CP3'
 * '<S24>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ATOM_U16ErrorHandle5/ErrorHandleSysU16'
 * '<S25>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ATOM_U16ErrorHandle5/ErrorHandleSysU16/OnDelay'
 * '<S26>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUClsFltDTC/ATOM_U16ErrorHandle5/ErrorHandleSysU16/OnDelay1'
 * '<S27>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/ATOM_TimeCnt4'
 * '<S28>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/ComM_ErrResEPTCANBusOff_Flg_CP3'
 * '<S29>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/ComM_MCUWrkMod_Enum_CP2'
 * '<S30>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/HvMgmt_MCUReqSts_Enum_CP2'
 * '<S31>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/HvMgmt_MCUReqSts_Enum_CP3'
 * '<S32>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/ModMgmt_HvSts_Enum_CP2'
 * '<S33>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/NoDT'
 * '<S34>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/NoDT/ErrorHandleSysU16'
 * '<S35>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCUEnaFltDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S36>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTC/ATOM_TimeCnt3'
 * '<S37>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTC/ComM_ErrResEPTCANBusOff_Flg_CP2'
 * '<S38>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTC/NoTiAndMonR'
 * '<S39>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTC/NoTiAndMonR/ErrorHandleSysU16'
 * '<S40>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ATOM_TimeCnt2'
 * '<S41>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ComM_ErrResEPTCANBusOff_Flg_CP'
 * '<S42>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ComM_MCUWrkMod_Enum_CP'
 * '<S43>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ComM_MCUWrkMod_Enum_CP1'
 * '<S44>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/HvMgmt_BMSWrkModActSts_Enum_CP'
 * '<S45>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/HvMgmt_MCUReqSts_Enum_CP'
 * '<S46>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ModMgmt_HvSts_Enum_CP'
 * '<S47>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/ModMgmt_HvSts_Enum_CP2'
 * '<S48>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/NoDT'
 * '<S49>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/NoDT/ErrorHandleSysU16'
 * '<S50>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCOne/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S51>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ATOM_TimeCnt1'
 * '<S52>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ChrMgmt_ChrgSts_Enum_CP'
 * '<S53>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ComM_ErrResEPTCANBusOff_Flg_CP1'
 * '<S54>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ComM_MCUWrkMod_Enum_CP1'
 * '<S55>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ComM_MCUWrkMod_Enum_CP2'
 * '<S56>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/HvMgmt_MCUReqSts_Enum_CP1'
 * '<S57>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ModMgmt_HvSts_Enum_CP1'
 * '<S58>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/ModMgmt_HvSts_Enum_CP3'
 * '<S59>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/NoDT'
 * '<S60>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/NoDT/ErrorHandleSysU16'
 * '<S61>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUDTC/HvMgmt_MCURdyFltDTCTwo/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S62>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ATOM_TimeCnt'
 * '<S63>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ATOM_TimeCnt1'
 * '<S64>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ChrMgmt_ChrgSts_Enum_CP'
 * '<S65>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ComM_MCUWrkMod_Enum_CP'
 * '<S66>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ComM_MCUWrkMod_Enum_CP1'
 * '<S67>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/HvMgmt_MCUReqSts_Enum_CP'
 * '<S68>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/HvMgmt_MCUWrkModActSts_Enum_CP'
 * '<S69>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/If'
 * '<S70>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/If1'
 * '<S71>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ModMgmt_HvSts_Enum_CP'
 * '<S72>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCURdyFlt/ModMgmt_HvSts_Enum_CP2'
 * '<S73>'  : 'CtAp_MCUMgmt/R_MCUMgmt_Cyclic_20ms_sys/CtAp_MCUMgmt_Function/HvMgmt_MCUSts/HvMgmt_MCUStsFlow'
 */

/*-
 * Requirements for '<Root>': CtAp_MCUMgmt

 *
 * Inherited requirements for '<S4>/HvMgmt_MCURdyFlt':
 *  1. VCU_SW_Requirements_Specification.slreqx:394
 *  2. VCU_SW_Requirements_Specification.slreqx:395
 *  3. VCU_SW_Requirements_Specification.slreqx:396
 *
 * Inherited requirements for '<S4>/HvMgmt_MCUSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:397
 *  2. VCU_SW_Requirements_Specification.slreqx:398
 *  3. VCU_SW_Requirements_Specification.slreqx:399
 *  4. VCU_SW_Requirements_Specification.slreqx:400
 *  5. VCU_SW_Requirements_Specification.slreqx:401
 *  6. VCU_SW_Requirements_Specification.slreqx:402
 *  7. VCU_SW_Requirements_Specification.slreqx:403
 *  8. VCU_SW_Requirements_Specification.slreqx:404
 *  9. VCU_SW_Requirements_Specification.slreqx:405
 *  10. VCU_SW_Requirements_Specification.slreqx:406
 *  11. VCU_SW_Requirements_Specification.slreqx:407
 *  12. VCU_SW_Requirements_Specification.slreqx:408
 *  13. VCU_SW_Requirements_Specification.slreqx:409
 *  14. VCU_SW_Requirements_Specification.slreqx:410
 *  15. VCU_SW_Requirements_Specification.slreqx:411
 *  16. VCU_SW_Requirements_Specification.slreqx:412
 *
 * Inherited requirements for '<S8>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:394
 *  2. VCU_SW_Requirements_Specification.slreqx:395

 */
#endif                                 /* RTW_HEADER_CtAp_MCUMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
