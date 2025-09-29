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
 *  Filename:           CtAp_WakeUpRsn.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_WakeUpRsn_h_
#define RTW_HEADER_CtAp_WakeUpRsn_h_
#ifndef CtAp_WakeUpRsn_COMMON_INCLUDES_
#define CtAp_WakeUpRsn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_WakeUpRsn.h"
#endif                                 /* CtAp_WakeUpRsn_COMMON_INCLUDES_ */

#include "CtAp_WakeUpRsn_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_WakeUpRsn_Glb.h"
#include "CtAp_WakeUpRsn_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define WakeUpRsn_1000Ohm              8U                        /* Referenced by:
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S84>/Constant'
                                                                  * '<S45>/Constant'
                                                                  * '<S48>/Constant'
                                                                  */
#define WakeUpRsn_100Ohm               5U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S82>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S40>/Constant'
                                                                  */
#define WakeUpRsn_1500Ohm              2U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S72>/Constant'
                                                                  * '<S33>/Constant'
                                                                  * '<S36>/Constant'
                                                                  */
#define WakeUpRsn_2000Ohm              6U                        /* Referenced by:
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S83>/Constant'
                                                                  * '<S43>/Constant'
                                                                  * '<S47>/Constant'
                                                                  */
#define WakeUpRsn_220Ohm               4U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S80>/Constant'
                                                                  * '<S35>/Constant'
                                                                  * '<S39>/Constant'
                                                                  */
#define WakeUpRsn_2700Ohm              7U                        /* Referenced by:
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S85>/Constant'
                                                                  * '<S44>/Constant'
                                                                  * '<S49>/Constant'
                                                                  */
#define WakeUpRsn_470Ohm               9U                        /* Referenced by:
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S86>/Constant'
                                                                  * '<S46>/Constant'
                                                                  * '<S50>/Constant'
                                                                  */
#define WakeUpRsn_680Ohm               3U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S73>/Constant'
                                                                  * '<S34>/Constant'
                                                                  * '<S38>/Constant'
                                                                  */
#define WakeUpRsn_ACPlug_detected      2U                        /* Referenced by: '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
#define WakeUpRsn_Active               true                      /* Referenced by:
                                                                  * '<S4>/ComM_BMSAWBFlow'
                                                                  * '<S4>/ComM_BMSPNC15Flow'
                                                                  * '<S4>/ComM_CGWAWBFlow'
                                                                  * '<S4>/ComM_CGWPNC15Flow'
                                                                  * '<S4>/Ecu_CHCANWakeStatusFlow'
                                                                  * '<S4>/Ecu_PTCANWakeStatusFlow'
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  * '<S18>/LvMgmt_AppNMReqKeywakeFlow'
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  * '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow'
                                                                  * '<S22>/Macro_Active'
                                                                  * '<S54>/WakeUpRsn_Active'
                                                                  * '<S61>/WakeUpRsn_Active'
                                                                  */
#define WakeUpRsn_CCUnconnect          0U                        /* Referenced by:
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  */
#define WakeUpRsn_ChrgComplete         8U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_ChrgFault            9U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_Count_Zero           0U                        /* Referenced by:
                                                                  * '<S4>/ComM_BMSAWBFlow'
                                                                  * '<S4>/ComM_BMSPNC15Flow'
                                                                  * '<S4>/ComM_CGWAWBFlow'
                                                                  * '<S4>/ComM_CGWPNC15Flow'
                                                                  * '<S4>/Ecu_CHCANWakeStatusFlow'
                                                                  * '<S4>/Ecu_PTCANWakeStatusFlow'
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  */
#define WakeUpRsn_DCPlug_detected      3U                        /* Referenced by: '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
#define WakeUpRsn_DrvReady             4U                        /* Referenced by: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
#define WakeUpRsn_HVReady              2U                        /* Referenced by: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
#define WakeUpRsn_INIT                 0U                        /* Referenced by:
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  * '<S58>/Constant'
                                                                  * '<S65>/Constant'
                                                                  */
#define WakeUpRsn_Inactive             false                     /* Referenced by:
                                                                  * '<S4>/ComM_BMSAWBFlow'
                                                                  * '<S4>/ComM_BMSPNC15Flow'
                                                                  * '<S4>/ComM_CGWAWBFlow'
                                                                  * '<S4>/ComM_CGWPNC15Flow'
                                                                  * '<S4>/Ecu_CHCANWakeStatusFlow'
                                                                  * '<S4>/Ecu_PTCANWakeStatusFlow'
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  * '<S18>/LvMgmt_AppNMReqKeywakeFlow'
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  * '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow'
                                                                  * '<S22>/Macro_Inactive'
                                                                  * '<S54>/WakeUpRsn_Inactive'
                                                                  * '<S61>/WakeUpRsn_Inactive'
                                                                  * '<S74>/Constant'
                                                                  * '<S75>/Constant'
                                                                  * '<S76>/Constant'
                                                                  * '<S77>/Constant'
                                                                  * '<S78>/Constant'
                                                                  * '<S79>/Constant'
                                                                  * '<S81>/Constant'
                                                                  */
#define WakeUpRsn_Init                 0U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_LvMgmt_RunStep       10U                       /* Referenced by:
                                                                  * '<S4>/ComM_BMSAWBFlow'
                                                                  * '<S4>/ComM_BMSPNC15Flow'
                                                                  * '<S4>/ComM_CGWAWBFlow'
                                                                  * '<S4>/ComM_CGWPNC15Flow'
                                                                  * '<S4>/Ecu_CHCANWakeStatusFlow'
                                                                  * '<S4>/Ecu_PTCANWakeStatusFlow'
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  * '<S54>/WakeUpRsn_LvMgmt_RunStep'
                                                                  * '<S61>/WakeUpRsn_LvMgmt_RunStep'
                                                                  */
#define WakeUpRsn_OffPlug              1U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_SGWHVOn              1U                        /* Referenced by: '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
#define WakeUpRsn_Sleep                5U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  * '<S18>/LvMgmt_AppNMReqKeywakeFlow'
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  */
#define WakeUpRsn_Standby              1U                        /* Referenced by:
                                                                  * '<S56>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S59>/Constant'
                                                                  * '<S63>/Constant'
                                                                  * '<S64>/Constant'
                                                                  * '<S66>/Constant'
                                                                  */
#define WakeUpRsn_U32Count_Zero        0U                        /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_U32RunStep           10U                       /* Referenced by:
                                                                  * '<S14>/LvMgmt_AppNMReqACChrgwakeFlow'
                                                                  * '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow'
                                                                  * '<S17>/LvMgmt_AppNMReqDCwakeFlow'
                                                                  */
#define WakeUpRsn_U8AppNMBitOne        1U                        /* Referenced by:
                                                                  * '<S22>/Macro_WakeUpRsn_U8AppNMBitOne'
                                                                  * '<S22>/Macro_WakeUpRsn_U8AppNMBitOne1'
                                                                  */
#define WakeUpRsn_U8AppNMBitSix        6U                        /* Referenced by:
                                                                  * '<S22>/Macro_WakeUpRsn_U8AppNMBitSix'
                                                                  * '<S22>/Macro_WakeUpRsn_U8AppNMBitSix1'
                                                                  */
#define WakeUpRsn_U8AppNMBitTwo        2U                        /* Referenced by: '<S20>/LvMgmt_AppNMReqLINwakeFlow' */
#define WakeUpRsn_U8AppNMBitZero       0U                        /* Referenced by:
                                                                  * '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow'
                                                                  * '<S20>/LvMgmt_AppNMReqLINwakeFlow'
                                                                  */
#define WakeUpRsn_U8AppNMSixFour       64U                       /* Referenced by: '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */
#define WakeUpRsn_V2LFault             14U                       /* Referenced by: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
#define WakeUpRsn_V2LPlug_Detected     4U                        /* Referenced by: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
#define WakeUpRsn_V2Lcompleted         12U                       /* Referenced by: '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */

/* PublicStructure Variables for Internal Data, for system '<S54>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S55>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Wa_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Wa_T ARID_DEF_ATOM_TimeCnt;/* '<S61>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Wa_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S54>/ATOM_TimeCnt' */
  uint32_T LvMgmt_DCTimeoutEndTmrCnt;  /* '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
  uint32_T LvMgmt_ACDisChgTimeoutEndTmrCnt;
                                  /* '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
  uint32_T LvMgmt_ACChgTimeoutEndTmrCnt;
                                     /* '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
  uint16_T LvMgmt_LINWakeMsgTmrCnt;    /* '<S20>/LvMgmt_AppNMReqLINwakeFlow' */
  uint16_T LvMgmt_LINUploadMsgTmrCnt;
                                  /* '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */
  uint16_T LvMgmt_DCOffPlugEndTmrCnt;  /* '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
  uint16_T LvMgmt_DCCompleteEndTmrCnt; /* '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
  uint16_T LvMgmt_ACDisChgOffPlugEndTmrCnt;
                                  /* '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
  uint16_T LvMgmt_ACDisChgCompleteEndTmrCn;
                                  /* '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
  uint16_T LvMgmt_ACChgOffPlugEndTmrCnt;
                                     /* '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
  uint16_T LvMgmt_ACChgCompleteEndTmrCnt;
                                     /* '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt;   /* '<S4>/Ecu_PTCANWakeStatusFlow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt_pqgt;/* '<S4>/Ecu_CHCANWakeStatusFlow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt_f34w;/* '<S4>/ComM_CGWPNC15Flow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt_aq4p;/* '<S4>/ComM_CGWAWBFlow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt_aq54;/* '<S4>/ComM_BMSPNC15Flow' */
  uint16_T LvMgmt_NMInterfaceTmrCnt_i3q2;/* '<S4>/ComM_BMSAWBFlow' */
  uint8_T Delay_DSTATE;                /* '<S4>/Delay' */
  uint8_T Delay_DSTATE_k2v1;           /* '<S21>/Delay' */
  uint8_T Delay_DSTATE_k1og;           /* '<S61>/Delay' */
  uint8_T Delay_DSTATE_p0at;           /* '<S54>/Delay' */
  uint8_T Delay_DSTATE_kplk;           /* '<S15>/Delay' */
  uint8_T Delay_DSTATE_ox4e;           /* '<S14>/Delay' */
  uint8_T is_c8_CtAp_WakeUpRsn;    /* '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
  uint8_T is_active_c8_CtAp_WakeUpRsn;
                                   /* '<S21>/LvMgmt_AppNMReqSGWRemHVwakeFlow' */
  uint8_T is_c3_CtAp_WakeUpRsn;        /* '<S20>/LvMgmt_AppNMReqLINwakeFlow' */
  uint8_T is_active_c3_CtAp_WakeUpRsn; /* '<S20>/LvMgmt_AppNMReqLINwakeFlow' */
  uint8_T is_c16_CtAp_WakeUpRsn;  /* '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */
  uint8_T is_active_c16_CtAp_WakeUpRsn;
                                  /* '<S19>/LvMgmt_AppNMReqLINUploadwakeFlow' */
  uint8_T is_c4_CtAp_WakeUpRsn;        /* '<S18>/LvMgmt_AppNMReqKeywakeFlow' */
  uint8_T is_active_c4_CtAp_WakeUpRsn; /* '<S18>/LvMgmt_AppNMReqKeywakeFlow' */
  uint8_T is_c5_CtAp_WakeUpRsn;        /* '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
  uint8_T is_active_c5_CtAp_WakeUpRsn; /* '<S17>/LvMgmt_AppNMReqDCwakeFlow' */
  uint8_T is_c7_CtAp_WakeUpRsn;   /* '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
  uint8_T is_active_c7_CtAp_WakeUpRsn;
                                  /* '<S15>/LvMgmt_AppNMReqACDisChrgwakeFlow' */
  uint8_T is_c6_CtAp_WakeUpRsn;      /* '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
  uint8_T is_active_c6_CtAp_WakeUpRsn;
                                     /* '<S14>/LvMgmt_AppNMReqACChrgwakeFlow' */
  uint8_T is_c25_CtAp_WakeUpRsn;       /* '<S4>/Ecu_PTCANWakeStatusFlow' */
  uint8_T is_active_c25_CtAp_WakeUpRsn;/* '<S4>/Ecu_PTCANWakeStatusFlow' */
  uint8_T is_c24_CtAp_WakeUpRsn;       /* '<S4>/Ecu_CHCANWakeStatusFlow' */
  uint8_T is_active_c24_CtAp_WakeUpRsn;/* '<S4>/Ecu_CHCANWakeStatusFlow' */
  uint8_T is_c15_CtAp_WakeUpRsn;       /* '<S4>/ComM_CGWPNC15Flow' */
  uint8_T is_active_c15_CtAp_WakeUpRsn;/* '<S4>/ComM_CGWPNC15Flow' */
  uint8_T is_c23_CtAp_WakeUpRsn;       /* '<S4>/ComM_CGWAWBFlow' */
  uint8_T is_active_c23_CtAp_WakeUpRsn;/* '<S4>/ComM_CGWAWBFlow' */
  uint8_T is_c13_CtAp_WakeUpRsn;       /* '<S4>/ComM_BMSPNC15Flow' */
  uint8_T is_active_c13_CtAp_WakeUpRsn;/* '<S4>/ComM_BMSPNC15Flow' */
  uint8_T is_c1_CtAp_WakeUpRsn;        /* '<S4>/ComM_BMSAWBFlow' */
  uint8_T is_active_c1_CtAp_WakeUpRsn; /* '<S4>/ComM_BMSAWBFlow' */
  boolean_T Delay_DSTATE_ieip;         /* '<S22>/Delay' */
  boolean_T Delay_DSTATE_migq;         /* '<S20>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S20>/Delay1' */
  boolean_T Delay1_DSTATE_nqae;        /* '<S61>/Delay1' */
  boolean_T Delay_DSTATE_enqt;         /* '<S19>/Delay' */
  boolean_T Delay1_DSTATE_mdts;        /* '<S19>/Delay1' */
  boolean_T Delay1_DSTATE_nvmp;        /* '<S54>/Delay1' */
  boolean_T Delay_DSTATE_fbj3;         /* '<S17>/Delay' */
} ARID_DEF_CtAp_WakeUpRsn_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_WakeUpRsn_START_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"

extern ARID_DEF_CtAp_WakeUpRsn_T CtAp_WakeUpRsn_ARID_DEF;

#define CtAp_WakeUpRsn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"

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
 * '<Root>' : 'CtAp_WakeUpRsn'
 * '<S1>'   : 'CtAp_WakeUpRsn/DocBlock'
 * '<S2>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Init'
 * '<S4>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function'
 * '<S5>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Input'
 * '<S6>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Output'
 * '<S7>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet'
 * '<S8>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ComM_BMSAWBFlow'
 * '<S9>'   : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ComM_BMSPNC15Flow'
 * '<S10>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ComM_CGWAWBFlow'
 * '<S11>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ComM_CGWPNC15Flow'
 * '<S12>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/Ecu_CHCANWakeStatusFlow'
 * '<S13>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/Ecu_PTCANWakeStatusFlow'
 * '<S14>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake'
 * '<S15>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake'
 * '<S16>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqCGWOrBMSwake'
 * '<S17>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqDCwake'
 * '<S18>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqKeywake'
 * '<S19>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake'
 * '<S20>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake'
 * '<S21>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqSGWRemHVwake'
 * '<S22>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq'
 * '<S23>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit0'
 * '<S24>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit1'
 * '<S25>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit2'
 * '<S26>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit3'
 * '<S27>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit4'
 * '<S28>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit5'
 * '<S29>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit6'
 * '<S30>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/ATOM_U8BitSet/SetBit7'
 * '<S31>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset'
 * '<S32>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/LvMgmt_AppNMReqACChrgwakeFlow'
 * '<S33>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant'
 * '<S34>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant1'
 * '<S35>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant2'
 * '<S36>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant3'
 * '<S37>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant4'
 * '<S38>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant5'
 * '<S39>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant6'
 * '<S40>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant7'
 * '<S41>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset'
 * '<S42>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/LvMgmt_AppNMReqACDisChrgwakeFlow'
 * '<S43>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant'
 * '<S44>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant1'
 * '<S45>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant2'
 * '<S46>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant3'
 * '<S47>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant5'
 * '<S48>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant6'
 * '<S49>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant7'
 * '<S50>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqACDisChrgwake/ComM_OBCCCSts_CntReset/CompareToConstant8'
 * '<S51>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqDCwake/LvMgmt_AppNMReqDCwakeFlow'
 * '<S52>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqKeywake/LvMgmt_AppNMReqKeywakeFlow'
 * '<S53>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_AppNMReqLINUploadwakeFlow'
 * '<S54>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr'
 * '<S55>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr/ATOM_TimeCnt'
 * '<S56>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr/CompareToConstant'
 * '<S57>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr/CompareToConstant1'
 * '<S58>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr/CompareToConstant2'
 * '<S59>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINUploadwake/LvMgmt_StayLVExpiredTmr/CompareToConstant3'
 * '<S60>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_AppNMReqLINwakeFlow'
 * '<S61>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr'
 * '<S62>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr/ATOM_TimeCnt'
 * '<S63>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr/CompareToConstant'
 * '<S64>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr/CompareToConstant1'
 * '<S65>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr/CompareToConstant2'
 * '<S66>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqLINwake/LvMgmt_StayLVExpiredTmr/CompareToConstant3'
 * '<S67>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_AppNMReqSGWRemHVwake/LvMgmt_AppNMReqSGWRemHVwakeFlow'
 * '<S68>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/ATOM_U8BitDecode'
 * '<S69>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/ATOM_U8BitDecode1'
 * '<S70>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/ATOM_U8BitDecode2'
 * '<S71>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/ATOM_U8BitDecode3'
 * '<S72>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant'
 * '<S73>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant1'
 * '<S74>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant12'
 * '<S75>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant13'
 * '<S76>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant14'
 * '<S77>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant15'
 * '<S78>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant16'
 * '<S79>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant17'
 * '<S80>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant2'
 * '<S81>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant3'
 * '<S82>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant4'
 * '<S83>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant5'
 * '<S84>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant6'
 * '<S85>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant7'
 * '<S86>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/CompareToConstant8'
 * '<S87>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/If'
 * '<S88>'  : 'CtAp_WakeUpRsn/R_WakeUpRsn_Cyclic_10ms_sys/CtAp_WakeUpRsn_Function/LvMgmt_WakeUpReq/If1'
 */

/*-
 * Requirements for '<Root>': CtAp_WakeUpRsn

 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqACChrgwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:34
 *  2. VCU_SW_Requirements_Specification.slreqx:35
 *  3. VCU_SW_Requirements_Specification.slreqx:11121
 *  4. VCU_SW_Requirements_Specification.slreqx:11122
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqACDisChrgwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:11123
 *  2. VCU_SW_Requirements_Specification.slreqx:36
 *  3. VCU_SW_Requirements_Specification.slreqx:11125
 *  4. VCU_SW_Requirements_Specification.slreqx:37
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqDCwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:32
 *  2. VCU_SW_Requirements_Specification.slreqx:33
 *  3. VCU_SW_Requirements_Specification.slreqx:11117
 *  4. VCU_SW_Requirements_Specification.slreqx:11118
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqKeywake':
 *  1. VCU_SW_Requirements_Specification.slreqx:28
 *  2. VCU_SW_Requirements_Specification.slreqx:29
 *  3. VCU_SW_Requirements_Specification.slreqx:11110
 *  4. VCU_SW_Requirements_Specification.slreqx:11111
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqLINUploadwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:69772
 *  2. VCU_SW_Requirements_Specification.slreqx:69773
 *  3. VCU_SW_Requirements_Specification.slreqx:69774
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqLINwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:30
 *  2. VCU_SW_Requirements_Specification.slreqx:31
 *  3. VCU_SW_Requirements_Specification.slreqx:11114
 *
 * Inherited requirements for '<S4>/LvMgmt_AppNMReqSGWRemHVwake':
 *  1. VCU_SW_Requirements_Specification.slreqx:38
 *  2. VCU_SW_Requirements_Specification.slreqx:39
 *  3. VCU_SW_Requirements_Specification.slreqx:11129
 *  4. VCU_SW_Requirements_Specification.slreqx:11130
 *
 * Inherited requirements for '<S22>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:43
 *
 * Inherited requirements for '<S22>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:42

 */
#endif                                 /* RTW_HEADER_CtAp_WakeUpRsn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
