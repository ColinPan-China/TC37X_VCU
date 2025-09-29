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
 *  Filename:           CtAp_ChrgSeqCtrl.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_ChrgSeqCtrl
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:03:55 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 11:02:45 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgSeqCtrl_h_
#define RTW_HEADER_CtAp_ChrgSeqCtrl_h_
#ifndef CtAp_ChrgSeqCtrl_COMMON_INCLUDES_
#define CtAp_ChrgSeqCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgSeqCtrl.h"
#endif                                 /* CtAp_ChrgSeqCtrl_COMMON_INCLUDES_ */

#include "CtAp_ChrgSeqCtrl_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ChrgSeqCtrl_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgSeqCtrl_Active             true                      /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S16>/Define'
                                                                  * '<S28>/Define'
                                                                  */
#define ChrgSeqCtrl_ChargingComplete   8U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S5>/Define1'
                                                                  */
#define ChrgSeqCtrl_ChargingPhase      3U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_CharingFault       9U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S5>/Define'
                                                                  */
#define ChrgSeqCtrl_DCChargeComplete   6U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S11>/Define1'
                                                                  * '<S25>/Define1'
                                                                  */
#define ChrgSeqCtrl_DCChargeError      7U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCDuringCharging   5U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCDuringPreheating 4U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCFCCls            false                     /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCFCClsCmpl        1U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCFCOpenCmpl       2U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCFCOpenFailed     4U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DCFCOpn            true                      /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_DuringPreheating   3U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_IRCheckReqOFF      0U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S12>/Define'
                                                                  * '<S18>/Define'
                                                                  */
#define ChrgSeqCtrl_IRCheckReqOn       1U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S24>/Define'
                                                                  * '<S30>/Define'
                                                                  */
#define ChrgSeqCtrl_IRCheckStart       1U                        /* Referenced by:
                                                                  * '<S24>/Define2'
                                                                  * '<S30>/Define2'
                                                                  */
#define ChrgSeqCtrl_IRCheckStop        0U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S12>/Define2'
                                                                  * '<S18>/Define2'
                                                                  */
#define ChrgSeqCtrl_Inactive           false                     /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_Init               0U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S11>/Define'
                                                                  * '<S25>/Define'
                                                                  */
#define ChrgSeqCtrl_Nopreheat          0U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_OffPlug            1U                        /* Referenced by:
                                                                  * '<S2>/DCChrMgmt_DCCharging_Flow'
                                                                  * '<S17>/Define'
                                                                  * '<S29>/Define'
                                                                  */
#define ChrgSeqCtrl_ParConfig          2U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_PreheatComplete    4U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_PreheatPrepared    2U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_ReconnectAllow     1U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_ReconnectDisAllow  2U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_Result0x00         0U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_Result0xAA         170U                      /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */
#define ChrgSeqCtrl_U16Zero            0U                        /* Referenced by: '<S5>/Define3' */
#define ChrgSeqCtrl_dt50ms             50U                       /* Referenced by:
                                                                  * '<S5>/Define2'
                                                                  * '<S7>/Define1'
                                                                  * '<S8>/Define1'
                                                                  * '<S9>/Define1'
                                                                  * '<S10>/Define1'
                                                                  * '<S16>/Define1'
                                                                  * '<S28>/Define1'
                                                                  */
#define ChrgSeqCtrl_handshake          1U                        /* Referenced by: '<S2>/DCChrMgmt_DCCharging_Flow' */

/* PublicStructure Variables for Internal Data, for system '<S7>/NoDTAndEn' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S15>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S14>/Delay1' */
} ARID_DEF_NoDTAndEn_CtAp_ChrgS_T;

/* PublicStructure Variables for Internal Data, for system '<S16>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S20>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S8>/DCChrMgmt_DCChrgnErrEnaCdn' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S16>/ATOM_TimeCnt' */
} ARID_DEF_DCChrMgmt_DCChr_o1k5_T;

/* PublicStructure Variables for Internal Data, for system '<S8>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S22>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S21>/Delay1' */
} ARID_DEF_NoDT_CtAp_ChrgSeqCtr_T;

/* PublicStructure Variables for Internal Data, for system '<S5>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S35>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S5>/ATOM_OnDelay' */
  ARID_DEF_NoDT_CtAp_ChrgSeqCtr_T ARID_DEF_NoDT;/* '<S10>/NoDT' */
  ARID_DEF_DCChrMgmt_DCChr_o1k5_T ARID_DEF_DCChrMgmt_DCChrgnErrE;/* '<S10>/DCChrMgmt_DCChrgnErrEnaCdn' */
  ARID_DEF_NoDTAndEn_CtAp_ChrgS_T ARID_DEF_NoDTAndEn;/* '<S9>/NoDTAndEn' */
  ARID_DEF_NoDT_CtAp_ChrgSeqCtr_T ARID_DEF_NoDT_mbvz;/* '<S8>/NoDT' */
  ARID_DEF_DCChrMgmt_DCChr_o1k5_T ARID_DEF_DCChrMgmt_DCChrgn_cl54;/* '<S8>/DCChrMgmt_DCChrgnErrEnaCdn' */
  ARID_DEF_NoDTAndEn_CtAp_ChrgS_T ARID_DEF_NoDTAndEn_kkiq;/* '<S7>/NoDTAndEn' */
  dt_DCChrMgmt_IRMeasDiErr RTE_P_DCChrMgmt_IRMeasDiErr_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus' */
  dt_DCChrMgmt_IRMeasDiErrDTC RTE_P_DCChrMgmt_IRMeasDiErrDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus' */
  dt_DCChrMgmt_IRMeasEnaErr RTE_P_DCChrMgmt_IRMeasEnaErr_Bu;
  /* '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus' */
  dt_DCChrMgmt_IRMeasEnaErrDTC RTE_P_DCChrMgmt_IRMeasEnaErrDTC;
  /* '<Root>/RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus' */
  uint8_T TmpSignalConversionAtRTE_R_ChrM;
              /* '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  uint8_T TmpSignalConversionAtRTE_R_ComM;
          /* '<Root>/RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum' */
  uint8_T DCChrMgmt_BROPrepFinshd_Enum;/* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T DCChrMgmt_DcChrgnSts_Enum;   /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T DCChrMgmt_IRMeasSwtCtrl_Enum;/* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T Switch1;                     /* '<S33>/Switch1' */
  uint8_T Switch8;                     /* '<S33>/Switch8' */
  uint8_T Switch1_n441;                /* '<S21>/Switch1' */
  uint8_T Switch8_nyp5;                /* '<S21>/Switch8' */
  uint8_T is_c1_CtAp_ChrgSeqCtrl;      /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_Charge;                   /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_DCChr_ChargingPhase;      /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_DCChr_HandShake;          /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_DCChr_ParameterConfiguration;/* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_DCChr_StopProcess;        /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_DCChr_ChargeError;        /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  uint8_T is_active_c1_CtAp_ChrgSeqCtrl;/* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBHMSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBRMSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBCPSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBROSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBCLSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBSTSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBCSSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBSMSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBEMSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_TxBSDSts_Flg;    /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_DCFCClsReq_Flg;  /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T DCChrMgmt_DcChrgStrt_Flg;  /* '<S2>/DCChrMgmt_DCCharging_Flow' */
  boolean_T B_MiHold;                  /* '<S35>/B_MiHold' */
  boolean_T Switch6;                   /* '<S33>/Switch6' */
  boolean_T Switch6_mabn;              /* '<S21>/Switch6' */
} ARID_DEF_CtAp_ChrgSeqCtrl_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgSeqCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern ARID_DEF_CtAp_ChrgSeqCtrl_T CtAp_ChrgSeqCtrl_ARID_DEF;

#define CtAp_ChrgSeqCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"

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
 * '<Root>' : 'CtAp_ChrgSeqCtrl'
 * '<S1>'   : 'CtAp_ChrgSeqCtrl/DocBlock'
 * '<S2>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Init'
 * '<S4>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle'
 * '<S5>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgStopRlyCtrlAllow'
 * '<S6>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_DCCharging_Flow'
 * '<S7>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr'
 * '<S8>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC'
 * '<S9>'   : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr'
 * '<S10>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC'
 * '<S11>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr/DCChrMgmt_DCChrgnErrResetCdn'
 * '<S12>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr/DCChrMgmt_DCChrgnErrSetCdn'
 * '<S13>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr/NoDTAndEn'
 * '<S14>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S15>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S16>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/DCChrMgmt_DCChrgnErrEnaCdn'
 * '<S17>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/DCChrMgmt_DCChrgnErrResetCdn'
 * '<S18>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/DCChrMgmt_DCChrgnErrSetCdn'
 * '<S19>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/NoDT'
 * '<S20>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/DCChrMgmt_DCChrgnErrEnaCdn/ATOM_TimeCnt'
 * '<S21>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/NoDT/ErrorHandleSysU16'
 * '<S22>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasDiErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S23>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr/NoDTAndEn'
 * '<S24>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr/Subsystem1'
 * '<S25>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr/Subsystem2'
 * '<S26>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S27>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S28>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/DCChrMgmt_DCChrgnErrEnaCdn'
 * '<S29>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/DCChrMgmt_DCChrgnErrResetCdn'
 * '<S30>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/DCChrMgmt_DCChrgnErrSetCdn'
 * '<S31>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/NoDT'
 * '<S32>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/DCChrMgmt_DCChrgnErrEnaCdn/ATOM_TimeCnt'
 * '<S33>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/NoDT/ErrorHandleSysU16'
 * '<S34>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgSeqCtrlErrorhandle/DCChrMgmt_ErrResIRMeasEnaErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S35>'  : 'CtAp_ChrgSeqCtrl/R_ChrgSeqCtrl_Cyclic_50ms_sys/DCChrMgmt_ChrgStopRlyCtrlAllow/ATOM_OnDelay'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgSeqCtrl

 *
 * Inherited requirements for '<S7>/DCChrMgmt_DCChrgnErrResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3126
 *
 * Inherited requirements for '<S7>/DCChrMgmt_DCChrgnErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3124
 *
 * Inherited requirements for '<S8>/DCChrMgmt_DCChrgnErrEnaCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3094
 *
 * Inherited requirements for '<S8>/DCChrMgmt_DCChrgnErrResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3092
 *
 * Inherited requirements for '<S8>/DCChrMgmt_DCChrgnErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3090
 *
 * Inherited requirements for '<S9>/Subsystem1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3141
 *
 * Inherited requirements for '<S9>/Subsystem2':
 *  1. VCU_SW_Requirements_Specification.slreqx:3143
 *
 * Inherited requirements for '<S10>/DCChrMgmt_DCChrgnErrEnaCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3111
 *
 * Inherited requirements for '<S10>/DCChrMgmt_DCChrgnErrResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3109
 *
 * Inherited requirements for '<S10>/DCChrMgmt_DCChrgnErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3107

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgSeqCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
