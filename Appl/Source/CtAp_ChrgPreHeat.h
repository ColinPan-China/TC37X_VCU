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
 *  Filename:           CtAp_ChrgPreHeat.h
 *  File Creation Date: 27-May-2025
 *  Model Name:         CtAp_ChrgPreHeat
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue May 27 14:40:27 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 14:28:56 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgPreHeat_h_
#define RTW_HEADER_CtAp_ChrgPreHeat_h_
#ifndef CtAp_ChrgPreHeat_COMMON_INCLUDES_
#define CtAp_ChrgPreHeat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgPreHeat.h"
#endif                                 /* CtAp_ChrgPreHeat_COMMON_INCLUDES_ */

#include "CtAp_ChrgPreHeat_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_ChrgPreHeat_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgPreHeat_0xFFFF             65535U                    /* Referenced by:
                                                                  * '<S59>/Define2'
                                                                  * '<S67>/Define2'
                                                                  * '<S107>/Define3'
                                                                  * '<S123>/Constant'
                                                                  */
#define ChrgPreHeat_ACCharging         5U                        /* Referenced by: '<S89>/Constant' */
#define ChrgPreHeat_ACPreheatAndChargingPre 7U                   /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S87>/Constant'
                                                                  * '<S165>/Constant'
                                                                  */
#define ChrgPreHeat_ACPreheatAndChrgnPrepd 8U                    /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S195>/Constant'
                                                                  * '<S119>/Constant'
                                                                  * '<S90>/Constant'
                                                                  * '<S168>/Constant'
                                                                  */
#define ChrgPreHeat_ACPreheating       10U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S159>/Define'
                                                                  */
#define ChrgPreHeat_Active             true                      /* Referenced by:
                                                                  * '<S7>/Define2'
                                                                  * '<S9>/Define2'
                                                                  * '<S11>/Define2'
                                                                  * '<S22>/Define'
                                                                  * '<S44>/Define'
                                                                  * '<S65>/Define'
                                                                  * '<S78>/Define9'
                                                                  * '<S82>/Define9'
                                                                  * '<S160>/Define9'
                                                                  * '<S180>/Define9'
                                                                  */
#define ChrgPreHeat_CapacibilityError  2U                        /* Referenced by: '<S169>/Constant' */
#define ChrgPreHeat_ChargePreparing    1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S95>/Constant'
                                                                  * '<S175>/Constant'
                                                                  */
#define ChrgPreHeat_ChargingComplete   8U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S145>/Constant'
                                                                  */
#define ChrgPreHeat_ChargingPhase      3U                        /* Referenced by:
                                                                  * '<S59>/Define1'
                                                                  * '<S67>/Define1'
                                                                  * '<S38>/Constant'
                                                                  * '<S52>/Constant'
                                                                  * '<S130>/Constant'
                                                                  */
#define ChrgPreHeat_CharingFault       9U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S14>/Define1'
                                                                  * '<S32>/Define1'
                                                                  * '<S58>/Define1'
                                                                  * '<S146>/Constant'
                                                                  */
#define ChrgPreHeat_Close              2U                        /* Referenced by:
                                                                  * '<S107>/Define7'
                                                                  * '<S109>/Define1'
                                                                  * '<S143>/Constant'
                                                                  */
#define ChrgPreHeat_DCCharging         6U                        /* Referenced by: '<S144>/Constant' */
#define ChrgPreHeat_DCDCBuckCmpl       4U                        /* Referenced by: '<S2>/ChrMgmt_PreheatFlow' */
#define ChrgPreHeat_DCDCDisableCmpl    1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S112>/Constant'
                                                                  */
#define ChrgPreHeat_DCDuringCharging   5U                        /* Referenced by:
                                                                  * '<S37>/Constant'
                                                                  * '<S51>/Constant'
                                                                  */
#define ChrgPreHeat_DCDuringPreheat    4U                        /* Referenced by:
                                                                  * '<S39>/Constant'
                                                                  * '<S53>/Constant'
                                                                  */
#define ChrgPreHeat_DCPreheatAndChargingPre 9U                   /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S182>/Constant'
                                                                  */
#define ChrgPreHeat_DCPreheatAndChrgnPrepd 10U                   /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S132>/Constant'
                                                                  * '<S185>/Constant'
                                                                  */
#define ChrgPreHeat_DCPreheating       11U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S131>/Constant'
                                                                  * '<S179>/Define2'
                                                                  */
#define ChrgPreHeat_DiffVolPrheatOutp  5.0F                      /* Referenced by:
                                                                  * '<S80>/Define'
                                                                  * '<S157>/Define'
                                                                  */
#define ChrgPreHeat_DuringPreheating   3U                        /* Referenced by: '<S2>/ChrMgmt_PreheatFlow' */
#define ChrgPreHeat_HandShake          1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S102>/Constant'
                                                                  * '<S190>/Constant'
                                                                  */
#define ChrgPreHeat_HeatAndCharge      2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S40>/Constant'
                                                                  * '<S54>/Constant'
                                                                  */
#define ChrgPreHeat_HeatAndDCCharge    2U                        /* Referenced by: '<S2>/ChrMgmt_PreheatFlow' */
#define ChrgPreHeat_HeatReqOnly        1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S19>/Constant'
                                                                  * '<S29>/Constant'
                                                                  * '<S41>/Constant'
                                                                  * '<S55>/Constant'
                                                                  */
#define ChrgPreHeat_HvReady            2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S20>/Constant'
                                                                  * '<S30>/Constant'
                                                                  * '<S42>/Constant'
                                                                  * '<S56>/Constant'
                                                                  */
#define ChrgPreHeat_HvStandby          1U                        /* Referenced by:
                                                                  * '<S194>/Constant'
                                                                  * '<S118>/Constant'
                                                                  */
#define ChrgPreHeat_Inactive           false                     /* Referenced by:
                                                                  * '<S78>/Define1'
                                                                  * '<S82>/Define1'
                                                                  * '<S160>/Define1'
                                                                  * '<S180>/Define1'
                                                                  */
#define ChrgPreHeat_Init               0U                        /* Referenced by: '<S138>/Constant' */
#define ChrgPreHeat_Invalid            0U                        /* Referenced by:
                                                                  * '<S105>/Define7'
                                                                  * '<S106>/Define7'
                                                                  * '<S107>/Define4'
                                                                  * '<S109>/Define'
                                                                  * '<S109>/Define3'
                                                                  */
#define ChrgPreHeat_KeepWarm           13U                       /* Referenced by: '<S159>/Define1' */
#define ChrgPreHeat_KeepWarming        6U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S86>/Constant'
                                                                  * '<S164>/Constant'
                                                                  */
#define ChrgPreHeat_KeepwarmPreparing  5U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S105>/Define3'
                                                                  * '<S84>/Constant'
                                                                  * '<S162>/Constant'
                                                                  */
#define ChrgPreHeat_Locked             0U                        /* Referenced by: '<S172>/Constant' */
#define ChrgPreHeat_Nopreheat          0U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S105>/Define8'
                                                                  * '<S99>/Constant'
                                                                  * '<S120>/Constant'
                                                                  * '<S133>/Constant'
                                                                  * '<S85>/Constant'
                                                                  * '<S88>/Constant'
                                                                  * '<S92>/Constant'
                                                                  * '<S163>/Constant'
                                                                  * '<S166>/Constant'
                                                                  * '<S171>/Constant'
                                                                  * '<S183>/Constant'
                                                                  * '<S187>/Constant'
                                                                  */
#define ChrgPreHeat_OBCEnabled         3U                        /* Referenced by: '<S122>/Constant' */
#define ChrgPreHeat_OBCKeepWarmReq     6U                        /* Referenced by: '<S2>/ChrMgmt_PreheatFlow' */
#define ChrgPreHeat_OBCPreheat2ChargingWait 11U                  /* Referenced by: '<S193>/Constant' */
#define ChrgPreHeat_OffPlug            1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S14>/Define'
                                                                  * '<S23>/Define'
                                                                  * '<S32>/Define'
                                                                  * '<S45>/Define'
                                                                  * '<S58>/Define'
                                                                  * '<S66>/Define'
                                                                  * '<S139>/Constant'
                                                                  */
#define ChrgPreHeat_Open               1U                        /* Referenced by:
                                                                  * '<S105>/Define'
                                                                  * '<S106>/Define'
                                                                  * '<S107>/Define'
                                                                  * '<S109>/Define2'
                                                                  * '<S140>/Constant'
                                                                  * '<S141>/Constant'
                                                                  * '<S142>/Constant'
                                                                  */
#define ChrgPreHeat_PTCRlyOpened       2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S113>/Constant'
                                                                  */
#define ChrgPreHeat_PreheatComplete    4U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S167>/Constant'
                                                                  * '<S184>/Constant'
                                                                  */
#define ChrgPreHeat_PreheatPreparing   1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S100>/Constant'
                                                                  * '<S94>/Constant'
                                                                  * '<S174>/Constant'
                                                                  * '<S188>/Constant'
                                                                  */
#define ChrgPreHeat_Preheating         4U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S78>/Define6'
                                                                  * '<S82>/Define6'
                                                                  * '<S160>/Define6'
                                                                  * '<S180>/Define6'
                                                                  */
#define ChrgPreHeat_PreheatingMod      4U                        /* Referenced by:
                                                                  * '<S15>/Define'
                                                                  * '<S24>/Define'
                                                                  * '<S63>/Constant'
                                                                  * '<S72>/Constant'
                                                                  * '<S114>/Constant'
                                                                  * '<S125>/Constant'
                                                                  */
#define ChrgPreHeat_PreheatingPrepared 2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S59>/Define'
                                                                  * '<S67>/Define'
                                                                  * '<S101>/Constant'
                                                                  * '<S121>/Constant'
                                                                  * '<S134>/Constant'
                                                                  * '<S93>/Constant'
                                                                  * '<S173>/Constant'
                                                                  * '<S189>/Constant'
                                                                  */
#define ChrgPreHeat_TCUDisableCmpl     1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_PreheatFlow'
                                                                  * '<S111>/Constant'
                                                                  */
#define ChrgPreHeat_TCUEnaCmpl         3U                        /* Referenced by: '<S2>/ChrMgmt_PreheatFlow' */
#define ChrgPreHeat_U16Zero            0U                        /* Referenced by:
                                                                  * '<S7>/Define3'
                                                                  * '<S8>/Define2'
                                                                  * '<S9>/Define3'
                                                                  * '<S10>/Define2'
                                                                  * '<S11>/Define3'
                                                                  * '<S12>/Define2'
                                                                  * '<S105>/Define6'
                                                                  * '<S106>/Define6'
                                                                  * '<S107>/Define2'
                                                                  * '<S107>/Define6'
                                                                  */
#define ChrgPreHeat_V2LComplete        12U                       /* Referenced by: '<S149>/Constant' */
#define ChrgPreHeat_V2LDischarging     7U                        /* Referenced by: '<S148>/Constant' */
#define ChrgPreHeat_V2LFault           14U                       /* Referenced by: '<S150>/Constant' */
#define ChrgPreHeat_V2LPlugDetected    4U                        /* Referenced by: '<S147>/Constant' */
#define ChrgPreHeat_WarmPODStsCfmTim   3000U                     /* Referenced by: '<S105>/Define1' */
#define ChrgPreHeat_dt                 50U                       /* Referenced by:
                                                                  * '<S7>/Define1'
                                                                  * '<S8>/Define1'
                                                                  * '<S9>/Define1'
                                                                  * '<S10>/Define1'
                                                                  * '<S11>/Define1'
                                                                  * '<S12>/Define1'
                                                                  * '<S22>/Define1'
                                                                  * '<S44>/Define1'
                                                                  * '<S65>/Define1'
                                                                  * '<S78>/Define12'
                                                                  * '<S105>/Define5'
                                                                  * '<S106>/Define5'
                                                                  * '<S107>/Define1'
                                                                  * '<S107>/Define5'
                                                                  * '<S82>/Define12'
                                                                  * '<S160>/Define12'
                                                                  * '<S180>/Define12'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S18>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_guvf;      /* '<S17>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S16>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S8>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S27>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_g05m;      /* '<S26>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_nsaz_T;

/* PublicStructure Variables for Internal Data, for system '<S22>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S28>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S8>/ChrMgmt_PreheatErrEnaCdn' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S22>/ATOM_TimeCnt' */
} ARID_DEF_ChrMgmt_PreheatErrEn_T;

/* PublicStructure Variables for Internal Data, for system '<S10>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S49>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_anqh;      /* '<S48>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_orqs_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S70>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_lki1;      /* '<S69>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_iqzv_T;

/* PublicStructure Variables for Internal Data, for system '<S105>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S110>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S180>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S160>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1;/* '<S107>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S107>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_cl54;/* '<S106>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_kkiq;/* '<S105>/ATOM_OnDelay' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt_cxar;/* '<S78>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt_bhxx;/* '<S82>/ATOM_TimeCnt' */
  ARID_DEF_ChrMgmt_PreheatErrEn_T ARID_DEF_ChrMgmt_PreheatErrEna;/* '<S12>/ChrMgmt_PreheatErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_iqzv_T ARID_DEF_ATOM_U16ErrorHandle;/* '<S12>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_pbm3;/* '<S11>/ATOM_U16ErrorHandle' */
  ARID_DEF_ChrMgmt_PreheatErrEn_T ARID_DEF_ChrMgmt_PreheatEr_cv5h;/* '<S10>/ChrMgmt_PreheatErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_orqs_T ARID_DEF_ATOM_U16ErrorHand_fqdq;/* '<S10>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_g2ml;/* '<S9>/ATOM_U16ErrorHandle' */
  ARID_DEF_ChrMgmt_PreheatErrEn_T ARID_DEF_ChrMgmt_PreheatEr_g1sm;/* '<S8>/ChrMgmt_PreheatErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_nsaz_T ARID_DEF_ATOM_U16ErrorHand_merl;/* '<S8>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_nz4o;/* '<S7>/ATOM_U16ErrorHandle' */
  dt_ChrMgmt_AcPreheatUDcCtrlErr RTE_P_ChrMgmt_AcPreheatUDcCtrlE;
  /* '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus' */
  dt_ChrMgmt_AcPreheatUDcCtrlErrDTC RTE_P_ChrMgmt_AcPreheatUDc_hxrd;
  /* '<Root>/RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus' */
  dt_ChrMgmt_DcPreheatUDcCtrlErr RTE_P_ChrMgmt_DcPreheatUDcCtrlE;
  /* '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus' */
  dt_ChrMgmt_DcPreheatUDcCtrlErrDTC RTE_P_ChrMgmt_DcPreheatUDc_eosp;
  /* '<Root>/RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus' */
  dt_ChrMgmt_PreheatIRChkErr RTE_P_ChrMgmt_PreheatIRChkErr_B;
  /* '<Root>/RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus' */
  dt_ChrMgmt_PreheatIRChkErrDTC RTE_P_ChrMgmt_PreheatIRChkErrDT;
  /* '<Root>/RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus' */
  uint8_T Switch1;                     /* '<S68>/Switch1' */
  uint8_T Switch8;                     /* '<S68>/Switch8' */
  uint8_T Switch1_b25x;                /* '<S60>/Switch1' */
  uint8_T Switch8_fvgz;                /* '<S60>/Switch8' */
  uint8_T Switch1_obqj;                /* '<S47>/Switch1' */
  uint8_T Switch8_dcta;                /* '<S47>/Switch8' */
  uint8_T Switch1_owxy;                /* '<S34>/Switch1' */
  uint8_T Switch8_gip4;                /* '<S34>/Switch8' */
  uint8_T Switch1_ph2d;                /* '<S25>/Switch1' */
  uint8_T Switch8_lw2i;                /* '<S25>/Switch8' */
  uint8_T Switch1_meg5;                /* '<S16>/Switch1' */
  uint8_T Switch8_lrht;                /* '<S16>/Switch8' */
  uint8_T Delay_DSTATE;                /* '<S107>/Delay' */
  uint8_T Delay_DSTATE_btov;           /* '<S106>/Delay' */
  uint8_T Delay_DSTATE_phvg;           /* '<S105>/Delay' */
  uint8_T is_c1_CtAp_ChrgPreHeat;      /* '<S2>/ChrMgmt_PreheatFlow' */
  uint8_T is_PreheatFlow;              /* '<S2>/ChrMgmt_PreheatFlow' */
  uint8_T is_KeepWarmFlow;             /* '<S2>/ChrMgmt_PreheatFlow' */
  uint8_T is_active_c1_CtAp_ChrgPreHeat;/* '<S2>/ChrMgmt_PreheatFlow' */
  boolean_T Switch6;                   /* '<S60>/Switch6' */
  boolean_T Switch6_daje;              /* '<S34>/Switch6' */
  boolean_T Switch6_mxll;              /* '<S16>/Switch6' */
  boolean_T Delay_DSTATE_nrxa;         /* '<S2>/Delay' */
  boolean_T Delay_DSTATE_ezdd;         /* '<S180>/Delay' */
  boolean_T Delay_DSTATE_b4bk;         /* '<S178>/Delay' */
  boolean_T Delay_DSTATE_iyx5;         /* '<S160>/Delay' */
  boolean_T Delay_DSTATE_k1ip;         /* '<S158>/Delay' */
  boolean_T Delay_DSTATE_cfbu;         /* '<S157>/Delay' */
  boolean_T Delay_DSTATE_ekva;         /* '<S78>/Delay' */
  boolean_T Delay_DSTATE_oqjg;         /* '<S82>/Delay' */
  boolean_T Delay_DSTATE_e04d;         /* '<S81>/Delay' */
  boolean_T Delay_DSTATE_apcg;         /* '<S80>/Delay' */
} ARID_DEF_CtAp_ChrgPreHeat_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgPreHeat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"

extern ARID_DEF_CtAp_ChrgPreHeat_T CtAp_ChrgPreHeat_ARID_DEF;

#define CtAp_ChrgPreHeat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"

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
 * '<Root>' : 'CtAp_ChrgPreHeat'
 * '<S1>'   : 'CtAp_ChrgPreHeat/DocBlock'
 * '<S2>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Init'
 * '<S4>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC'
 * '<S5>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatFlow'
 * '<S6>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl'
 * '<S7>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr'
 * '<S8>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC'
 * '<S9>'   : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr'
 * '<S10>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC'
 * '<S11>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr'
 * '<S12>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC'
 * '<S13>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ATOM_U16ErrorHandle'
 * '<S14>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ChrMgmt_PreheatErrResetCdn'
 * '<S15>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn'
 * '<S16>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S17>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S18>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S19>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S20>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant1'
 * '<S21>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle'
 * '<S22>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrEnaCdn'
 * '<S23>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrResetCdn'
 * '<S24>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn'
 * '<S25>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S26>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S27>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S28>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrEnaCdn/ATOM_TimeCnt'
 * '<S29>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S30>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_AcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant1'
 * '<S31>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ATOM_U16ErrorHandle'
 * '<S32>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrResetCdn'
 * '<S33>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn'
 * '<S34>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S35>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S36>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S37>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S38>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant1'
 * '<S39>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant2'
 * '<S40>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant3'
 * '<S41>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant4'
 * '<S42>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant5'
 * '<S43>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle'
 * '<S44>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrEnaCdn'
 * '<S45>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrResetCdn'
 * '<S46>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn'
 * '<S47>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S48>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S49>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S50>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrEnaCdn/ATOM_TimeCnt'
 * '<S51>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S52>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant1'
 * '<S53>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant2'
 * '<S54>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant3'
 * '<S55>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant4'
 * '<S56>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_DcPreheatUDcCtrlErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant5'
 * '<S57>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ATOM_U16ErrorHandle'
 * '<S58>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ChrMgmt_PreheatErrResetCdn'
 * '<S59>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ChrMgmt_PreheatErrSetCdn'
 * '<S60>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S61>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S62>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S63>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErr/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S64>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ATOM_U16ErrorHandle'
 * '<S65>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ChrMgmt_PreheatErrEnaCdn'
 * '<S66>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ChrMgmt_PreheatErrResetCdn'
 * '<S67>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ChrMgmt_PreheatErrSetCdn'
 * '<S68>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S69>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S70>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S71>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ChrMgmt_PreheatErrEnaCdn/ATOM_TimeCnt'
 * '<S72>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatDTC/ChrMgmt_PreheatIRChkErrDTC/ChrMgmt_PreheatErrSetCdn/CompareToConstant'
 * '<S73>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl'
 * '<S74>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq'
 * '<S75>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq'
 * '<S76>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatReqHv'
 * '<S77>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC'
 * '<S78>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD'
 * '<S79>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_PckPTCAllwbl'
 * '<S80>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcKeepWarmReqPckPTC'
 * '<S81>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheat2ChrgnReqPckPTC'
 * '<S82>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC'
 * '<S83>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcheatReqPckPTCMerge'
 * '<S84>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcKeepWarmReqPckPTC/CompareToConstant1'
 * '<S85>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcKeepWarmReqPckPTC/CompareToConstant2'
 * '<S86>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcKeepWarmReqPckPTC/CompareToConstant7'
 * '<S87>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheat2ChrgnReqPckPTC/CompareToConstant1'
 * '<S88>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheat2ChrgnReqPckPTC/CompareToConstant2'
 * '<S89>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheat2ChrgnReqPckPTC/CompareToConstant3'
 * '<S90>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheat2ChrgnReqPckPTC/CompareToConstant9'
 * '<S91>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/ATOM_TimeCnt'
 * '<S92>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/CompareToConstant1'
 * '<S93>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/CompareToConstant3'
 * '<S94>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/CompareToConstant5'
 * '<S95>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/CompareToConstant6'
 * '<S96>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/If'
 * '<S97>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_AcheatReqPckPTC/ChrMgmt_AcPreheatPreJumpReqPckPTC/If1'
 * '<S98>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/ATOM_TimeCnt'
 * '<S99>'  : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant1'
 * '<S100>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant2'
 * '<S101>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant3'
 * '<S102>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant7'
 * '<S103>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/If'
 * '<S104>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PackPTCCtrl/ChrMgmt_DcPreheatPreJumpReqPOD/If1'
 * '<S105>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq'
 * '<S106>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq'
 * '<S107>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq'
 * '<S108>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyCtrlUDcActv'
 * '<S109>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq'
 * '<S110>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/ATOM_OnDelay'
 * '<S111>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/CompareToConstant1'
 * '<S112>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/CompareToConstant2'
 * '<S113>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/CompareToConstant3'
 * '<S114>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/CompareToConstant9'
 * '<S115>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/If'
 * '<S116>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACKeepWrmPosRlyOpenReq/If1'
 * '<S117>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/ATOM_OnDelay'
 * '<S118>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant1'
 * '<S119>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant2'
 * '<S120>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant3'
 * '<S121>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant5'
 * '<S122>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant6'
 * '<S123>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant7'
 * '<S124>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant8'
 * '<S125>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/CompareToConstant9'
 * '<S126>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/If'
 * '<S127>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_ACPosRlyOpenReq/If1'
 * '<S128>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/ATOM_OnDelay'
 * '<S129>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/ATOM_OnDelay1'
 * '<S130>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/CompareToConstant'
 * '<S131>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/CompareToConstant1'
 * '<S132>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/CompareToConstant3'
 * '<S133>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/CompareToConstant4'
 * '<S134>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/CompareToConstant6'
 * '<S135>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/If'
 * '<S136>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/If1'
 * '<S137>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_DCPosRlyOpenReq/If2'
 * '<S138>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant'
 * '<S139>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant1'
 * '<S140>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant11'
 * '<S141>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant12'
 * '<S142>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant13'
 * '<S143>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant2'
 * '<S144>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant3'
 * '<S145>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant4'
 * '<S146>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant5'
 * '<S147>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant6'
 * '<S148>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant7'
 * '<S149>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant8'
 * '<S150>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/CompareToConstant9'
 * '<S151>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/If'
 * '<S152>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/If1'
 * '<S153>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PosRlyOpenReq/ChrMgmt_PosRlyOpenReq/If2'
 * '<S154>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD'
 * '<S155>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD'
 * '<S156>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_PreheatPODDiReq'
 * '<S157>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcKeepWarmReqPOD'
 * '<S158>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheat2ChrgnReqPOD'
 * '<S159>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPausePODDiReq'
 * '<S160>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD'
 * '<S161>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcheatReqPODMerge'
 * '<S162>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcKeepWarmReqPOD/CompareToConstant1'
 * '<S163>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcKeepWarmReqPOD/CompareToConstant2'
 * '<S164>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcKeepWarmReqPOD/CompareToConstant7'
 * '<S165>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheat2ChrgnReqPOD/CompareToConstant1'
 * '<S166>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheat2ChrgnReqPOD/CompareToConstant2'
 * '<S167>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheat2ChrgnReqPOD/CompareToConstant4'
 * '<S168>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheat2ChrgnReqPOD/CompareToConstant9'
 * '<S169>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPausePODDiReq/CompareToConstant'
 * '<S170>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/ATOM_TimeCnt'
 * '<S171>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/CompareToConstant1'
 * '<S172>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/CompareToConstant2'
 * '<S173>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/CompareToConstant3'
 * '<S174>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/CompareToConstant5'
 * '<S175>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/CompareToConstant6'
 * '<S176>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/If'
 * '<S177>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_AcheatReqPOD/ChrMgmt_AcPreheatPreJumpReqPOD/If1'
 * '<S178>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheat2ChrgnReqPOD'
 * '<S179>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPausePODDiReq'
 * '<S180>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD'
 * '<S181>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcheatReqPODMerge'
 * '<S182>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheat2ChrgnReqPOD/CompareToConstant1'
 * '<S183>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheat2ChrgnReqPOD/CompareToConstant2'
 * '<S184>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheat2ChrgnReqPOD/CompareToConstant4'
 * '<S185>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheat2ChrgnReqPOD/CompareToConstant9'
 * '<S186>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/ATOM_TimeCnt'
 * '<S187>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant1'
 * '<S188>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant2'
 * '<S189>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant3'
 * '<S190>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/CompareToConstant7'
 * '<S191>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/If'
 * '<S192>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatPODDiReq/ChrMgmt_DcheatReqPOD/ChrMgmt_DcPreheatPreJumpReqPOD/If1'
 * '<S193>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatReqHv/CompareToConstant'
 * '<S194>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatReqHv/CompareToConstant1'
 * '<S195>' : 'CtAp_ChrgPreHeat/R_ChrgPreHeat_Cyclic_50ms_sys/ChrMgmt_PreheatHvCtrl/ChrMgmt_PreheatReqHv/CompareToConstant2'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgPreHeat

 *
 * Inherited requirements for '<S6>/ChrMgmt_PackPTCCtrl':
 *  1. SWREQ_06005 Pack PTC Allow Init
 *  2. SWREQ_06006 Pack PTC Req Open
 *  3. SWREQ_06007 Pack PTC Req close
 *  4. SWREQ_06008 Pack PTC Req mantain
 *  5. SWREQ_06460 Pack PTC Req Open
 *
 * Inherited requirements for '<S6>/ChrMgmt_PreheatPODDiReq':
 *  1. SWREQ_02403 DCDC&TCU Ctrl disable due to AC Pause
 *  2. SWREQ_02404 DCDC&TCU Ctrl disable
   due to DC Pause
 *  3. SWREQ_02405 DCDC&TCU Ctrl disable recover
 *  4. SWREQ_02406 DCDC&TCU Ctrl disable due to preheat req
 *  5. SWREQ_02407 DCDC&TCU Ctrl no req
 *  6. SWREQ_02408 DCDC&TCU
 *  7. SWREQ_02409 DCDC&TCU Ctrl Active
 *  8. SWREQ_02410 DCDC&TCU Ctrl Inactive
 *  9. SWREQ_06003 Preheat Req POD Inactive
 *  10. SWREQ_06458 DCDC&TCU Ctrl disable due to ChargCapacibilityError
 *  11. SWREQ_06459 DCDC&TCU Ctrl disable due to jump to  Heat and chargereq
 *
 * Inherited requirements for '<S6>/ChrMgmt_PreheatReqHv':
 *  1. SWREQ_06462 Preheat Req HvOff
 *  2. SWREQ_06464 Preheat Req HvOn
 *
 * Inherited requirements for '<S7>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02523 AC Preheat Vol Error
 *
 * Inherited requirements for '<S7>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02514 AC Preheat Vol Error
 *
 * Inherited requirements for '<S7>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02512 AC Preheat Vol Error
 *
 * Inherited requirements for '<S8>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02472 AC Preheat Vol DTC
 *
 * Inherited requirements for '<S8>/ChrMgmt_PreheatErrEnaCdn':
 *  1. SWREQ_02465 AC Preheat Vol DTC
 *
 * Inherited requirements for '<S8>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02463 AC Preheat Vol DTC
 *
 * Inherited requirements for '<S8>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02461 AC Preheat Vol DTC
 *
 * Inherited requirements for '<S9>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02540 DC Preheat Vol Error
 *
 * Inherited requirements for '<S9>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02531 DC Preheat Vol Error
 *
 * Inherited requirements for '<S9>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02529 DC Preheat Vol Error
 *
 * Inherited requirements for '<S10>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02489 DC Preheat Vol DTC
 *
 * Inherited requirements for '<S10>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02480 DC Preheat Vol DTC
 *
 * Inherited requirements for '<S10>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02478 DC Preheat Vol DTC
 *
 * Inherited requirements for '<S11>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02506 Preheat IR Error
 *
 * Inherited requirements for '<S11>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02497 Preheat IR Error
 *
 * Inherited requirements for '<S11>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02495 Preheat IR Error
 *
 * Inherited requirements for '<S12>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02455 IR Check DTC
 *
 * Inherited requirements for '<S12>/ChrMgmt_PreheatErrEnaCdn':
 *  1. SWREQ_02448 IR Check DTC
 *
 * Inherited requirements for '<S12>/ChrMgmt_PreheatErrResetCdn':
 *  1. SWREQ_02446 IR Check DTC
 *
 * Inherited requirements for '<S12>/ChrMgmt_PreheatErrSetCdn':
 *  1. SWREQ_02444 IR Check DTC
 *
 * Inherited requirements for '<S73>/ChrMgmt_DcPreheatPreJumpReqPOD':
 *  1. SWREQ_06706 DC preheat pre req PackPTC Init
 *  2. SWREQ_06707 DC preheat pre req PackPTC Open
 *  3. SWREQ_06708 DC preheat pre req PackPTC Close
 *  4. SWREQ_06709 DC preheat pre req PackPTC Matian
 *
 * Inherited requirements for '<S74>/ChrMgmt_ACKeepWrmPosRlyOpenReq':
 *  1. SWREQ_02416 MainRelay Ctrl keep warm
 *
 * Inherited requirements for '<S74>/ChrMgmt_ACPosRlyOpenReq':
 *  1. SWREQ_02412 MainRelay Ctrl AC open
 *  2. SWREQ_02414 MainRelay Ctrl AC Close
 *  3. SWREQ_06461 AC Invlid
 *  4. SWREQ_06463 No preheat to Invalid
 *
 * Inherited requirements for '<S74>/ChrMgmt_DCPosRlyOpenReq':
 *  1. SWREQ_02413 MainRelay Ctrl DC Open
 *  2. SWREQ_02415 MainRelay Ctrl DC Close
 *
 * Inherited requirements for '<S77>/ChrMgmt_AcKeepWarmReqPckPTC':
 *  1. SWREQ_06702 AC keep warm req PackPTC Init
 *  2. SWREQ_06703 AC keep warm req PackPTC Open
 *  3. SWREQ_06704 AC keep warm req PackPTC Close
 *  4. SWREQ_06705 AC keep warm req PackPTC Matian
 *
 * Inherited requirements for '<S77>/ChrMgmt_AcPreheat2ChrgnReqPckPTC':
 *  1. SWREQ_06698 AC preheat 2 charge req PackPTC Init
 *  2. SWREQ_06699 AC preheat 2 charge req PackPTC Open
 *  3. SWREQ_06700 AC preheat 2 charge req PackPTC Close
 *  4. SWREQ_06701 AC preheat 2 charge req PackPTC Matian
 *
 * Inherited requirements for '<S77>/ChrMgmt_AcPreheatPreJumpReqPckPTC':
 *  1. SWREQ_06694 AC preheat pre req PackPTC Init
 *  2. SWREQ_06695 AC preheat pre req PackPTC Open
 *  3. SWREQ_06696 AC preheat pre req PackPTC Close
 *  4. SWREQ_06697 AC preheat pre req PackPTC Matian
 *
 * Inherited requirements for '<S105>/If':
 *  1. SWREQ_02417 MainRelay Ctrl maintain
 *
 * Inherited requirements for '<S105>/If1':
 *  1. SWREQ_02416 MainRelay Ctrl keep warm
 *
 * Inherited requirements for '<S106>/If':
 *  1. SWREQ_02414 MainRelay Ctrl AC Close
 *
 * Inherited requirements for '<S106>/If1':
 *  1. SWREQ_02412 MainRelay Ctrl AC open
 *
 * Inherited requirements for '<S154>/ChrMgmt_AcKeepWarmReqPOD':
 *  1. SWREQ_06680 KeepWarmReq POD Init
 *  2. SWREQ_06681 AC KeepWarmReq POD Disable
 *  3. SWREQ_06682 AC KeepWarmReq POD Enable
 *  4. SWREQ_06683 AC KeepWarmReq POD Matain
 *
 * Inherited requirements for '<S154>/ChrMgmt_AcPreheat2ChrgnReqPOD':
 *  1. SWREQ_06676 AC Preheat2ChargeReq POD Init
 *  2. SWREQ_06677 AC Preheat2ChargeReq POD Disable
 *  3. SWREQ_06678 AC Preheat2ChargeReq POD Enable
 *  4. SWREQ_06679 AC Preheat2ChargeReq POD Matain
 *
 * Inherited requirements for '<S154>/ChrMgmt_AcPreheatPausePODDiReq':
 *  1. SWREQ_06670 AC Error Req POD
 *  2. SWREQ_06671 AC Error Req POD
 *
 * Inherited requirements for '<S154>/ChrMgmt_AcPreheatPreJumpReqPOD':
 *  1. SWREQ_06672 AC preheat pre jump Req Init
 *  2. SWREQ_06673 AC preheat pre jump Req POD Disable
 *  3. SWREQ_06674 AC preheat pre jump Req POD Enable
 *  4. SWREQ_06675 AC preheat pre jump Req POD Matain
 *
 * Inherited requirements for '<S155>/ChrMgmt_DcPreheat2ChrgnReqPOD':
 *  1. SWREQ_06690 DC Preheat2ChargeReq POD Init
 *  2. SWREQ_06691 DC Preheat2ChargeReq POD Disable
 *  3. SWREQ_06692 DC Preheat2ChargeReq POD Enable
 *  4. SWREQ_06693 DC Preheat2ChargeReq POD Matain
 *
 * Inherited requirements for '<S155>/ChrMgmt_DcPreheatPausePODDiReq':
 *  1. SWREQ_06684 DC Pause Req POD
 *  2. SWREQ_06685 DC Pause Req POD
 *
 * Inherited requirements for '<S155>/ChrMgmt_DcPreheatPreJumpReqPOD':
 *  1. SWREQ_06686 DC preheat pre jump Req Init
 *  2. SWREQ_06687 DC preheat pre jump Req POD Disable
 *  3. SWREQ_06688 DC preheat pre jump Req POD Enable
 *  4. SWREQ_06689 DC preheat pre jump Req POD Matain

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgPreHeat_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
