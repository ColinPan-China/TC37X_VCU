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
 *  Filename:           CtAp_LINHandler.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_LINHandler
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Tue Aug 13 17:04:55 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 18:32:11 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Sep 11 18:31:24 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_LINHandler_h_
#define RTW_HEADER_CtAp_LINHandler_h_
#ifndef CtAp_LINHandler_COMMON_INCLUDES_
#define CtAp_LINHandler_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_LINHandler.h"
#endif                                 /* CtAp_LINHandler_COMMON_INCLUDES_ */

#include "CtAp_LINHandler_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_LINHandler_Cal.h"
#include "CtAp_LINHandler_Glb.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define LINHandler_Active              true                      /* Referenced by:
                                                                  * '<S7>/Marco_Active'
                                                                  * '<S8>/Marco_Active'
                                                                  * '<S19>/Marco_Active'
                                                                  * '<S20>/Marco_Active'
                                                                  * '<S27>/Constant'
                                                                  * '<S30>/Constant'
                                                                  */
#define LINHandler_BSBatCrntDftValue   0.0F                      /* Referenced by: '<S68>/LINHandler_BSBatCrntDftValue' */
#define LINHandler_BSBatVltHlResDftValue 0.0F                    /* Referenced by: '<S69>/LINHandler_BSBatVltHlResDftValue' */
#define LINHandler_BSBatVltHlResOffs   3.0F                      /* Referenced by: '<S69>/LINHandler_BSBatVltHlResOffs' */
#define LINHandler_BSBatVltHlResResl   0.0009765625F             /* Referenced by: '<S69>/LINHandler_BSBatVltHlResResl' */
#define LINHandler_BSBattSOCDftValue   80.0F                     /* Referenced by: '<S70>/LINHandler_BSBattSOCDftValue' */
#define LINHandler_BSBattSOCOffs       0.0F                      /* Referenced by:
                                                                  * '<S70>/LINHandler_BSBattSOCOffs'
                                                                  * '<S71>/LINHandler_BSBattSOCOffs'
                                                                  */
#define LINHandler_BSBattSOCResl       1.0F                      /* Referenced by:
                                                                  * '<S70>/LINHandler_BSBattSOCResl'
                                                                  * '<S71>/LINHandler_BSBattSOCResl'
                                                                  */
#define LINHandler_BSBattSOFVoltOffs   0.0F                      /* Referenced by:
                                                                  * '<S75>/LINHandler_BSBattSOFVoltOffs'
                                                                  * '<S76>/LINHandler_BSBattSOFVoltOffs'
                                                                  */
#define LINHandler_BSBattSOFVoltResl   0.0625F                   /* Referenced by:
                                                                  * '<S75>/LINHandler_BSBattSOFVoltResl'
                                                                  * '<S76>/LINHandler_BSBattSOFVoltResl'
                                                                  */
#define LINHandler_BSBattTempOffs      -40.0F                    /* Referenced by: '<S72>/LINHandler_BSBattTempOffs' */
#define LINHandler_BSBattTempResl      1.0F                      /* Referenced by: '<S72>/LINHandler_BSBattTempResl' */
#define LINHandler_BSHCrntDftValue     65535.0F                  /* Referenced by: '<S73>/LINHandler_BSHCrntDftValue' */
#define LINHandler_BSQuiescentCurrentDftValue 0.0F               /* Referenced by: '<S74>/LINHandler_BSQuiescentCurrentDftValue' */
#define LINHandler_BSQuiescentCurrentOffs 0.0F                   /* Referenced by: '<S74>/LINHandler_BSQuiescentCurrentOffs' */
#define LINHandler_BSQuiescentCurrentResl 0.00390625F            /* Referenced by: '<S74>/LINHandler_BSQuiescentCurrentResl' */
#define LINHandler_FRCDTCCheckTmr      400U                      /* Referenced by:
                                                                  * '<S19>/LINHandler_FRCDTCCheckTmr'
                                                                  * '<S20>/LINHandler_FRCDTCCheckTmr'
                                                                  */
#define LINHandler_FRCMsgLostTim       455U                      /* Referenced by:
                                                                  * '<S8>/LINHandler_FRCMsgLostTim'
                                                                  * '<S17>/LINHandler_FRCMsgLostTim'
                                                                  */
#define LINHandler_FRCUDcDTCEnaSetTim  1500U                     /* Referenced by:
                                                                  * '<S19>/LINHandler_FRCUDcDTCEnaSetTim'
                                                                  * '<S20>/LINHandler_FRCUDcDTCEnaSetTim'
                                                                  */
#define LINHandler_LinMsgFourCntTim    4U                        /* Referenced by: '<S28>/LINHandler_LinMsgFourCntTim' */
#define LINHandler_MsgErrDTCEnaSetTim  3000U                     /* Referenced by:
                                                                  * '<S7>/LINHandler_MsgErrDTCEnaSetTim'
                                                                  * '<S8>/LINHandler_MsgErrDTCEnaSetTim'
                                                                  * '<S17>/LINHandler_MsgErrDTCEnaSetTim'
                                                                  * '<S18>/LINHandler_MsgErrDTCEnaSetTim'
                                                                  * '<S21>/LINHandler_MsgErrDTCEnaSetTim'
                                                                  */
#define LINHandler_RangeOneOffsCoef    -256.0F                   /* Referenced by: '<S73>/LINHandler_RangeOneOffsCoef' */
#define LINHandler_RangeOneReslCoef    0.0078125F                /* Referenced by: '<S73>/LINHandler_RangeOneReslCoef' */
#define LINHandler_RangeTwoOffsCoef    -2048.0F                  /* Referenced by:
                                                                  * '<S73>/LINHandler_RangeTwoOffsCoef'
                                                                  * '<S73>/LINHandler_RangeTwoOffsCoef1'
                                                                  */
#define LINHandler_RangeTwoReslCoef    0.0625F                   /* Referenced by:
                                                                  * '<S73>/LINHandler_RangeTwoReslCoef'
                                                                  * '<S73>/LINHandler_RangeTwoReslCoef1'
                                                                  */
#define LINHandler_RangeZeroOffsCoef   -32.0F                    /* Referenced by: '<S73>/LINHandler_RangeZeroOffsCoef' */
#define LINHandler_RangeZeroReslCoef   0.0009765625F             /* Referenced by: '<S73>/LINHandler_RangeZeroReslCoef' */
#define LINHandler_RunStep             10U                       /* Referenced by:
                                                                  * '<S7>/LINHandler_RunStep'
                                                                  * '<S7>/LINHandler_RunStep2'
                                                                  * '<S8>/LINHandler_RunStep'
                                                                  * '<S8>/LINHandler_RunStep2'
                                                                  * '<S17>/LINHandler_RunStep'
                                                                  * '<S17>/LINHandler_RunStep1'
                                                                  * '<S18>/LINHandler_RunStep'
                                                                  * '<S19>/LINHandler_RunStep'
                                                                  * '<S19>/LINHandler_RunStep1'
                                                                  * '<S20>/LINHandler_RunStep'
                                                                  * '<S20>/LINHandler_RunStep1'
                                                                  * '<S21>/LINHandler_RunStep'
                                                                  * '<S21>/LINHandler_RunStep1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_TimeCnt1' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S13>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_LI_T;

/* PublicStructure Variables for Internal Data, for system '<S17>/NoDTAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S25>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S24>/Delay1' */
} ARID_DEF_NoDTAvoidMu_CtAp_LIN_T;

/* PublicStructure Variables for Internal Data, for system '<S18>/NoTime' */
typedef struct {
  boolean_T Delay1_DSTATE;             /* '<S31>/Delay1' */
} ARID_DEF_NoTime_CtAp_LINHandl_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoDTAvoidMu_CtAp_LIN_T ARID_DEF_NoDTAvoidMu;/* '<S21>/NoDTAvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2;/* '<S21>/ATOM_TimeCnt2' */
  ARID_DEF_NoDTAvoidMu_CtAp_LIN_T ARID_DEF_NoDTAvoidMu_mbvz;/* '<S20>/NoDTAvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_cl54;/* '<S20>/ATOM_TimeCnt2' */
  ARID_DEF_NoDTAvoidMu_CtAp_LIN_T ARID_DEF_NoDTAvoidMu_kkiq;/* '<S19>/NoDTAvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_cxar;/* '<S19>/ATOM_TimeCnt2' */
  ARID_DEF_NoTime_CtAp_LINHandl_T ARID_DEF_NoTime;/* '<S18>/NoTime' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_bhxx;/* '<S18>/ATOM_TimeCnt2' */
  ARID_DEF_NoDTAvoidMu_CtAp_LIN_T ARID_DEF_NoDTAvoidMu_pbm3;/* '<S17>/NoDTAvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_cv5h;/* '<S17>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_fqdq;/* '<S8>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt1;/* '<S8>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt2_g2ml;/* '<S7>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_LI_T ARID_DEF_ATOM_TimeCnt1_g1sm;/* '<S7>/ATOM_TimeCnt1' */
  dt_ComM_FRCMsgErrDTC RTE_P_ComM_FRCMsgErrDTC_Bus_tec;
            /* '<Root>/RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus' */
  dt_ComM_FRCRespErrDTC RTE_P_ComM_FRCRespErrDTC_Bus_te;
          /* '<Root>/RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus' */
  dt_ComM_FRCSplyUDcHiDTC RTE_P_ComM_FRCSplyUDcHiDTC_Bus_;
      /* '<Root>/RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus' */
  dt_ComM_FRCSplyUDcLoDTC RTE_P_ComM_FRCSplyUDcLoDTC_Bus_;
      /* '<Root>/RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus' */
  dt_ComM_LinMsgErrInfo RTE_P_ComM_LinMsgErrInfo_Bus_te;
          /* '<Root>/RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus' */
  uint8_T Switch1;                     /* '<S42>/Switch1' */
  uint8_T Switch2;                     /* '<S42>/Switch2' */
  uint8_T Switch1_cay1;                /* '<S38>/Switch1' */
  uint8_T Switch2_lyet;                /* '<S38>/Switch2' */
  uint8_T Switch1_cm15;                /* '<S34>/Switch1' */
  uint8_T Switch2_arpb;                /* '<S34>/Switch2' */
  uint8_T Switch1_mnje;                /* '<S31>/Switch1' */
  uint8_T Switch8;                     /* '<S31>/Switch8' */
  uint8_T Switch1_kfg1;                /* '<S24>/Switch1' */
  uint8_T Switch2_bs0e;                /* '<S24>/Switch2' */
  uint8_T Delay_DSTATE;                /* '<S28>/Delay' */
  boolean_T Switch6;                   /* '<S42>/Switch6' */
  boolean_T Switch6_ae0w;              /* '<S38>/Switch6' */
  boolean_T Switch6_lxrb;              /* '<S34>/Switch6' */
  boolean_T Switch6_pjjm;              /* '<S31>/Switch6' */
  boolean_T RelationalOperator;        /* '<S28>/Relational Operator' */
  boolean_T Switch6_mosq;              /* '<S24>/Switch6' */
  boolean_T LINHandler_FRCRespCnt_MODE;/* '<S18>/LINHandler_FRCRespCnt' */
} ARID_DEF_CtAp_LINHandler_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_LINHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"

extern ARID_DEF_CtAp_LINHandler_T CtAp_LINHandler_ARID_DEF;

#define CtAp_LINHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LINHandler_MemMap.h"

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
 * '<Root>' : 'CtAp_LINHandler'
 * '<S1>'   : 'CtAp_LINHandler/DocBlock'
 * '<S2>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_LINHandler/R_LinHandler_Init'
 * '<S4>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function'
 * '<S5>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Input'
 * '<S6>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Output'
 * '<S7>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_BSNodComFailr'
 * '<S8>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_FRCNodComFailr'
 * '<S9>'   : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC'
 * '<S10>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin'
 * '<S11>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle'
 * '<S12>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/VCU_SysOutSignal'
 * '<S13>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_BSNodComFailr/ATOM_TimeCnt1'
 * '<S14>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_BSNodComFailr/ATOM_TimeCnt2'
 * '<S15>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_FRCNodComFailr/ATOM_TimeCnt1'
 * '<S16>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_FRCNodComFailr/ATOM_TimeCnt2'
 * '<S17>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCMsgErrDTC'
 * '<S18>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC'
 * '<S19>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcHiDTC'
 * '<S20>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcLoDTC'
 * '<S21>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_LinMsgErrInfo'
 * '<S22>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCMsgErrDTC/ATOM_TimeCnt2'
 * '<S23>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCMsgErrDTC/NoDTAvoidMu'
 * '<S24>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCMsgErrDTC/NoDTAvoidMu/ErrorHandleSysU16'
 * '<S25>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCMsgErrDTC/NoDTAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S26>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/ATOM_TimeCnt2'
 * '<S27>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/Compare To Constant4'
 * '<S28>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/LINHandler_FRCRespCnt'
 * '<S29>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/NoTime'
 * '<S30>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/LINHandler_FRCRespCnt/Compare To Constant'
 * '<S31>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCRespErrDTC/NoTime/ErrorHandleSysU16'
 * '<S32>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcHiDTC/ATOM_TimeCnt2'
 * '<S33>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcHiDTC/NoDTAvoidMu'
 * '<S34>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcHiDTC/NoDTAvoidMu/ErrorHandleSysU16'
 * '<S35>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcHiDTC/NoDTAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S36>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcLoDTC/ATOM_TimeCnt2'
 * '<S37>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcLoDTC/NoDTAvoidMu'
 * '<S38>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcLoDTC/NoDTAvoidMu/ErrorHandleSysU16'
 * '<S39>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_FRCSplyUDcLoDTC/NoDTAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S40>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_LinMsgErrInfo/ATOM_TimeCnt2'
 * '<S41>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_LinMsgErrInfo/NoDTAvoidMu'
 * '<S42>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_LinMsgErrInfo/NoDTAvoidMu/ErrorHandleSysU16'
 * '<S43>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_LinErrDTC/ComM_LinMsgErrInfo/NoDTAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S44>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/ACU_DriverWarningLampSts'
 * '<S45>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/ACU_PassengerAirbagSts'
 * '<S46>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/ACU_PassengerWarningLampSts'
 * '<S47>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/ACU_WarningLampSts'
 * '<S48>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/BCM_FLSeatBeltRemindReq'
 * '<S49>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/BCM_FRSeatBeltRemindReq'
 * '<S50>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/BCM_RLSeatBeltRemindReq'
 * '<S51>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/BCM_RRSeatBeltRemindReq'
 * '<S52>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/BS_IndicatorLightSts'
 * '<S53>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/CGW_VehicleState'
 * '<S54>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DCDCFail'
 * '<S55>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DCM_FL_DoorFLSts'
 * '<S56>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DCM_FR_DoorFRSts'
 * '<S57>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DCM_RL_DoorRLSts'
 * '<S58>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DCM_RR_DoorRRSts'
 * '<S59>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/DriveMotOvrTemp'
 * '<S60>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/HVBatCriFail'
 * '<S61>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/HVBatOvrTemp'
 * '<S62>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IBS_BrakeFluidWarning'
 * '<S63>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IBS_EBDFault'
 * '<S64>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IBS_RollerbenchMode'
 * '<S65>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IBS_SystemStatus'
 * '<S66>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IVI_BulbCheckSts'
 * '<S67>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalCAN2Lin/IVI_VrState'
 * '<S68>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBatCrntInfo'
 * '<S69>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBatVltHlRes'
 * '<S70>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattSOC'
 * '<S71>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattSOH'
 * '<S72>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattTemp'
 * '<S73>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo'
 * '<S74>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSQuiescentCurrentInfo'
 * '<S75>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSSOFV1'
 * '<S76>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSSOFV2'
 * '<S77>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBatVltHlRes/ATOM_SignalRead'
 * '<S78>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattSOC/ATOM_SignalRead'
 * '<S79>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattSOH/ATOM_SignalRead'
 * '<S80>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSBattTemp/ATOM_SignalRead'
 * '<S81>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/ATOM_SignalRead'
 * '<S82>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/ATOM_SignalRead1'
 * '<S83>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/ATOM_SignalRead2'
 * '<S84>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/ATOM_SignalRead3'
 * '<S85>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/CompareToConstant'
 * '<S86>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/CompareToConstant1'
 * '<S87>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSHCrntInfo/CompareToConstant2'
 * '<S88>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSQuiescentCurrentInfo/ATOM_SignalRead'
 * '<S89>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSSOFV1/ATOM_SignalRead'
 * '<S90>'  : 'CtAp_LINHandler/R_LINHandler_Cyclic_10ms_sys/CtAp_LINHandler_Function/LINHandler_SignalHandle/ComM_BSSOFV2/ATOM_SignalRead'
 */

/*-
 * Requirements for '<Root>': CtAp_LINHandler

 *
 * Inherited requirements for '<S4>/LINHandler_BSNodComFailr':
 *  1. VCU_SW_Requirements_Specification.slreqx:45992
 *
 * Inherited requirements for '<S4>/LINHandler_FRCNodComFailr':
 *  1. VCU_SW_Requirements_Specification.slreqx:76058
 *
 * Inherited requirements for '<S17>/ATOM_TimeCnt2':
 *  1. VCU_SW_Requirements_Specification.slreqx:76104
 *
 * Inherited requirements for '<S18>/ATOM_TimeCnt2':
 *  1. VCU_SW_Requirements_Specification.slreqx:76117
 *
 * Inherited requirements for '<S18>/LINHandler_FRCRespCnt':
 *  1. VCU_SW_Requirements_Specification.slreqx:76115
 *
 * Inherited requirements for '<S21>/ATOM_TimeCnt2':
 *  1. VCU_SW_Requirements_Specification.slreqx:46024

 */
#endif                                 /* RTW_HEADER_CtAp_LINHandler_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
