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
 *  Filename:           CtAp_OBCStsMgmt.h
 *  File Creation Date: 04-Aug-2025
 *  Model Name:         CtAp_OBCStsMgmt
 *  Model Version:      1.007
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Aug  4 09:30:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 10:46:19 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_OBCStsMgmt_h_
#define RTW_HEADER_CtAp_OBCStsMgmt_h_
#ifndef CtAp_OBCStsMgmt_COMMON_INCLUDES_
#define CtAp_OBCStsMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_OBCStsMgmt.h"
#endif                                 /* CtAp_OBCStsMgmt_COMMON_INCLUDES_ */

#include "CtAp_OBCStsMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_OBCStsMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define OBCStsMgmt_AcHeatAndChargePrepared 8U                    /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_Active              true                      /* Referenced by:
                                                                  * '<S21>/Define'
                                                                  * '<S33>/Define'
                                                                  * '<S46>/Define'
                                                                  * '<S59>/Define'
                                                                  */
#define OBCStsMgmt_ChargeCtrlMod       1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S16>/Define3'
                                                                  * '<S22>/Define3'
                                                                  * '<S54>/Define3'
                                                                  * '<S60>/Define3'
                                                                  */
#define OBCStsMgmt_ChargePreparing     1U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_ChargingMode        3U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S16>/Define2'
                                                                  * '<S22>/Define2'
                                                                  */
#define OBCStsMgmt_DischargeCtrlMod    2U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S28>/Define3'
                                                                  * '<S34>/Define3'
                                                                  */
#define OBCStsMgmt_DischargePreparing  2U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_EmLockLocked        2U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_Init                0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S15>/Define'
                                                                  * '<S20>/Define'
                                                                  * '<S27>/Define'
                                                                  * '<S32>/Define'
                                                                  * '<S53>/Define'
                                                                  * '<S58>/Define'
                                                                  */
#define OBCStsMgmt_KeepWarming         6U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_NoPreheat           0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S16>/Define1'
                                                                  * '<S22>/Define1'
                                                                  */
#define OBCStsMgmt_OBCACCharging       5U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCACPreheating     4U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCDisabed          9U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCDisable          3U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S40>/Define1'
                                                                  * '<S47>/Define1'
                                                                  */
#define OBCStsMgmt_OBCDisabling        8U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S15>/Define1'
                                                                  * '<S27>/Define1'
                                                                  * '<S53>/Define1'
                                                                  */
#define OBCStsMgmt_OBCDischarging      10U                       /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCEnable           2U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S16>/Define'
                                                                  * '<S22>/Define'
                                                                  * '<S28>/Define1'
                                                                  * '<S34>/Define1'
                                                                  * '<S54>/Define'
                                                                  * '<S60>/Define'
                                                                  */
#define OBCStsMgmt_OBCEnabled          3U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCKeepWarmReq      6U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OBCKeepWarming      7U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_OffPlug             1U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_Preheat2ChargingWait 11U                      /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_PreheatComplete     4U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_Preheating          3U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_PreheatingComplete  4U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_PreheatingDiOBC     10U                       /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_PreheatingMod       4U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S54>/Define2'
                                                                  * '<S60>/Define2'
                                                                  */
#define OBCStsMgmt_PreheatingPrepared  2U                        /* Referenced by:
                                                                  * '<S54>/Define1'
                                                                  * '<S60>/Define1'
                                                                  */
#define OBCStsMgmt_S2Closed            2U                        /* Referenced by: '<S2>/OBCMgmt_OBSSts_Flow' */
#define OBCStsMgmt_Standby             1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S39>/Define'
                                                                  * '<S40>/Define2'
                                                                  * '<S45>/Define'
                                                                  * '<S47>/Define2'
                                                                  */
#define OBCStsMgmt_V2LMode             5U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_OBSSts_Flow'
                                                                  * '<S28>/Define2'
                                                                  * '<S34>/Define2'
                                                                  */
#define OBCStsMgmt_dt50ms              50U                       /* Referenced by:
                                                                  * '<S6>/Define1'
                                                                  * '<S7>/Define1'
                                                                  * '<S8>/Define1'
                                                                  * '<S9>/Define1'
                                                                  * '<S10>/Define1'
                                                                  * '<S11>/Define1'
                                                                  * '<S12>/Define1'
                                                                  * '<S13>/Define1'
                                                                  * '<S21>/Define1'
                                                                  * '<S33>/Define1'
                                                                  * '<S46>/Define1'
                                                                  * '<S59>/Define1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S6>/NoDTAndEn' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S18>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S17>/Delay1' */
} ARID_DEF_NoDTAndEn_CtAp_OBCSt_T;

/* PublicStructure Variables for Internal Data, for system '<S7>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S24>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S23>/Delay1' */
} ARID_DEF_NoDT_CtAp_OBCStsMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<S21>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S25>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_OB_T;

/* PublicStructure Variables for Internal Data, for system '<S10>/NoEnable' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S43>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_i3lz;      /* '<S42>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S41>/Delay1' */
} ARID_DEF_NoEnable_CtAp_OBCSts_T;

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S50>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_gw1q;      /* '<S49>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S48>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_OB_T ARID_DEF_ATOM_TimeCnt;/* '<S59>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_OBCStsMgmt_T ARID_DEF_NoDT;/* '<S13>/NoDT' */
  ARID_DEF_NoDTAndEn_CtAp_OBCSt_T ARID_DEF_NoDTAndEn;/* '<S12>/NoDTAndEn' */
  ARID_DEF_ATOM_TimeCnt_CtAp_OB_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S46>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle;/* '<S11>/ATOM_U16ErrorHandle' */
  ARID_DEF_NoEnable_CtAp_OBCSts_T ARID_DEF_NoEnable;/* '<S10>/NoEnable' */
  ARID_DEF_ATOM_TimeCnt_CtAp_OB_T ARID_DEF_ATOM_TimeCnt_cl54;/* '<S33>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_OBCStsMgmt_T ARID_DEF_NoDT_kkiq;/* '<S9>/NoDT' */
  ARID_DEF_NoDTAndEn_CtAp_OBCSt_T ARID_DEF_NoDTAndEn_cxar;/* '<S8>/NoDTAndEn' */
  ARID_DEF_ATOM_TimeCnt_CtAp_OB_T ARID_DEF_ATOM_TimeCnt_bhxx;/* '<S21>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_OBCStsMgmt_T ARID_DEF_NoDT_pbm3;/* '<S7>/NoDT' */
  ARID_DEF_NoDTAndEn_CtAp_OBCSt_T ARID_DEF_NoDTAndEn_cv5h;/* '<S6>/NoDTAndEn' */
  dt_OBCMgmt_OBCChrgStsErr RTE_P_OBCMgmt_OBCChrgStsErr_Bus;
    /* '<Root>/RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus' */
  dt_OBCMgmt_OBCChrgStsErrDTC RTE_P_OBCMgmt_OBCChrgStsErrDTC_;
  /* '<Root>/RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus' */
  dt_OBCMgmt_OBCDchaStsErr RTE_P_OBCMgmt_OBCDchaStsErr_Bus;
    /* '<Root>/RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus' */
  dt_OBCMgmt_OBCDchaStsErrDTC RTE_P_OBCMgmt_OBCDchaStsErrDTC_;
  /* '<Root>/RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus' */
  dt_OBCMgmt_OBCDiErr RTE_P_OBCMgmt_OBCDiErr_Bus_tec_;
              /* '<Root>/RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus' */
  dt_OBCMgmt_OBCDiErrDTC RTE_P_OBCMgmt_OBCDiErrDTC_Bus_t;
        /* '<Root>/RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus' */
  dt_OBCMgmt_OBCPreheatStsErr RTE_P_OBCMgmt_OBCPreheatStsErr_;
  /* '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus' */
  dt_OBCMgmt_OBCPreheatStsErrDTC RTE_P_OBCMgmt_OBCPreheatStsErrD;
  /* '<Root>/RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus' */
  uint8_T OBCMgmt_OBCEnaCmd_Enum;      /* '<S2>/OBCMgmt_OBSSts_Flow' */
  uint8_T Switch1;                     /* '<S61>/Switch1' */
  uint8_T Switch8;                     /* '<S61>/Switch8' */
  uint8_T Switch1_pky0;                /* '<S48>/Switch1' */
  uint8_T Switch8_l03t;                /* '<S48>/Switch8' */
  uint8_T Switch1_m2xi;                /* '<S35>/Switch1' */
  uint8_T Switch8_lutl;                /* '<S35>/Switch8' */
  uint8_T Switch1_gngf;                /* '<S23>/Switch1' */
  uint8_T Switch8_ombj;                /* '<S23>/Switch8' */
  uint8_T is_c1_CtAp_OBCStsMgmt;       /* '<S2>/OBCMgmt_OBSSts_Flow' */
  uint8_T is_OBC_StartFlow;            /* '<S2>/OBCMgmt_OBSSts_Flow' */
  uint8_T is_OBC_OBCEndFlow;           /* '<S2>/OBCMgmt_OBSSts_Flow' */
  uint8_T is_active_c1_CtAp_OBCStsMgmt;/* '<S2>/OBCMgmt_OBSSts_Flow' */
  boolean_T Switch6;                   /* '<S61>/Switch6' */
  boolean_T Switch6_naqh;              /* '<S48>/Switch6' */
  boolean_T Switch6_jy1y;              /* '<S35>/Switch6' */
  boolean_T Switch6_i2yg;              /* '<S23>/Switch6' */
  boolean_T Delay_4_DSTATE;            /* '<S2>/Delay' */
  boolean_T OneDelay_DSTATE;           /* '<S21>/OneDelay' */
  boolean_T OneDelay_DSTATE_erk3;      /* '<S33>/OneDelay' */
  boolean_T OneDelay_DSTATE_kulb;      /* '<S46>/OneDelay' */
  boolean_T OneDelay_DSTATE_gh0p;      /* '<S59>/OneDelay' */
} ARID_DEF_CtAp_OBCStsMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_OBCStsMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"

extern ARID_DEF_CtAp_OBCStsMgmt_T CtAp_OBCStsMgmt_ARID_DEF;

#define CtAp_OBCStsMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_OBCStsMgmt'
 * '<S1>'   : 'CtAp_OBCStsMgmt/DocBlock'
 * '<S2>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Init'
 * '<S4>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler'
 * '<S5>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/OBCMgmt_OBSSts_Flow'
 * '<S6>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr'
 * '<S7>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC'
 * '<S8>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr'
 * '<S9>'   : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC'
 * '<S10>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr'
 * '<S11>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC'
 * '<S12>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr'
 * '<S13>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC'
 * '<S14>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr/NoDTAndEn'
 * '<S15>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr/OBCMgmt_OBCErResetCdn_Flg'
 * '<S16>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S17>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S18>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S19>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/NoDT'
 * '<S20>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/OBCMgmt_OBCErResetCdn_Flg'
 * '<S21>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg'
 * '<S22>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S23>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/NoDT/ErrorHandleSysU16'
 * '<S24>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S25>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCChrgStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S26>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr/NoDTAndEn'
 * '<S27>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr/OBCMgmt_OBCErResetCdn_Flg'
 * '<S28>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S29>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S30>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S31>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/NoDT'
 * '<S32>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/OBCMgmt_OBCErResetCdn_Flg'
 * '<S33>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg'
 * '<S34>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S35>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/NoDT/ErrorHandleSysU16'
 * '<S36>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S37>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDchaStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S38>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/NoEnable'
 * '<S39>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/OBCMgmt_OBCErResetCdn_Flg'
 * '<S40>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S41>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/NoEnable/ErrorHandleSysU16'
 * '<S42>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/NoEnable/ErrorHandleSysU16/OnDelay'
 * '<S43>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErr/NoEnable/ErrorHandleSysU16/OnDelay1'
 * '<S44>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/ATOM_U16ErrorHandle'
 * '<S45>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/OBCMgmt_OBCErResetCdn_Flg'
 * '<S46>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/OBCMgmt_OBCErrEnaCdn_Flg'
 * '<S47>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S48>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S49>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S50>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S51>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCDiErrDTC/OBCMgmt_OBCErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S52>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr/NoDTAndEn'
 * '<S53>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr/OBCMgmt_OBCErResetCdn_Flg'
 * '<S54>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S55>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S56>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S57>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/NoDT'
 * '<S58>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/OBCMgmt_OBCErResetCdn_Flg'
 * '<S59>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg'
 * '<S60>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/OBCMgmt_OBCErrSetCdn_Flg'
 * '<S61>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/NoDT/ErrorHandleSysU16'
 * '<S62>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S63>'  : 'CtAp_OBCStsMgmt/R_OBCStsMgmt_Cyclic_50ms_sys/ErrorHandler/OBCMgmt_OBCPreheatStsErrDTC/OBCMgmt_OBCErrEnaCdn_Flg/ATOM_TimeCnt'
 */

/*-
 * Requirements for '<Root>': CtAp_OBCStsMgmt

 */
#endif                                 /* RTW_HEADER_CtAp_OBCStsMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
