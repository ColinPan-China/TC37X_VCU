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
 *  Filename:           CtAp_PdlAlys.h
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
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_PdlAlys_h_
#define RTW_HEADER_CtAp_PdlAlys_h_
#ifndef CtAp_PdlAlys_COMMON_INCLUDES_
#define CtAp_PdlAlys_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_PdlAlys.h"
#endif                                 /* CtAp_PdlAlys_COMMON_INCLUDES_ */

#include "CtAp_PdlAlys_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_PdlAlys_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_PdlAlys_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define PdlAly_BRAKE_INVALID           2U                        /* Referenced by:
                                                                  * '<S8>/PdlAly_BRAKE_INVALID'
                                                                  * '<S16>/PdlAly_BRAKE_INVALID'
                                                                  *//* CtAp_PdlAlys mode define sample time */
#define PdlAly_BRAKE_NOTPRESSED        0U                        /* Referenced by: '<S8>/PdlAly_BRAKE_NOTPRESSED' *//* PdlAly BRAKE NOTPRESSED */
#define PdlAly_BRAKE_PRESSED           1U                        /* Referenced by:
                                                                  * '<S8>/PdlAly_BRAKE_PRESSED'
                                                                  * '<S8>/PdlAly_BRAKE_PRESSED1'
                                                                  * '<S16>/PdlAly_BRAKE_PRESSED'
                                                                  *//* PdlAly BRAKE PRESSED */
#define PdlAly_CONSTANT_COEFFICIENT    2.0F                      /* Referenced by:
                                                                  * '<S148>/Define'
                                                                  * '<S85>/PdlAly_CONSTANT_COEFFICIENT'
                                                                  *//* The constant used to calculate the acceleration pedal difference fault */
#define PdlAly_JITTER_COEFFICIENT      2.0F                      /* Referenced by:
                                                                  * '<S11>/PdlAly_JITTER_COEFFICIENT'
                                                                  * '<S147>/PdlAly_JITTER_COEFFICIENT'
                                                                  *//* Acceleration pedal voltage under jitter coefficient */
#define PdlAly_MAX_PEDAL_VOLT          5500U                     /* Referenced by: '<S4>/Define' *//* CtAp_PdlAlys mode define pedal volt */
#define PdlAly_SAMPLE_TIME             10U                       /* Referenced by:
                                                                  * '<S30>/PdlAly_SAMPLE_TIME'
                                                                  * '<S30>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S31>/PdlAly_SAMPLE_TIME'
                                                                  * '<S33>/PdlAly_SAMPLE_TIME'
                                                                  * '<S33>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S34>/PdlAly_SAMPLE_TIME'
                                                                  * '<S56>/PdlAly_SAMPLE_TIME'
                                                                  * '<S56>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S57>/PdlAly_SAMPLE_TIME'
                                                                  * '<S58>/PdlAly_SAMPLE_TIME'
                                                                  * '<S58>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S59>/PdlAly_SAMPLE_TIME'
                                                                  * '<S80>/PdlAly_SAMPLE_TIME'
                                                                  * '<S80>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S82>/PdlAly_SAMPLE_TIME'
                                                                  * '<S98>/PdlAly_SAMPLE_TIME'
                                                                  * '<S98>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S99>/PdlAly_SAMPLE_TIME'
                                                                  * '<S101>/PdlAly_SAMPLE_TIME'
                                                                  * '<S103>/PdlAly_SAMPLE_TIME'
                                                                  * '<S103>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S124>/PdlAly_SAMPLE_TIME'
                                                                  * '<S124>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S125>/PdlAly_SAMPLE_TIME'
                                                                  * '<S126>/PdlAly_SAMPLE_TIME'
                                                                  * '<S126>/PdlAly_SAMPLE_TIME1'
                                                                  * '<S127>/PdlAly_SAMPLE_TIME'
                                                                  *//* CtAp_PdlAlys mode define sample time */
#define PdlAly_TRUE                    true                      /* Referenced by:
                                                                  * '<S30>/PdlAly_TRUE'
                                                                  * '<S33>/PdlAly_TRUE'
                                                                  * '<S56>/PdlAly_TRUE'
                                                                  * '<S58>/PdlAly_TRUE'
                                                                  * '<S80>/PdlAly_TRUE'
                                                                  * '<S98>/PdlAly_TRUE'
                                                                  * '<S103>/PdlAly_TRUE'
                                                                  * '<S124>/PdlAly_TRUE'
                                                                  * '<S126>/PdlAly_TRUE'
                                                                  *//* CtAp_PdlAlys mode define TRUE */
#define PdlAly_ZERO_PEDL               0.0F                      /* Referenced by:
                                                                  * '<S9>/PdlAly_ZERO_PEDL'
                                                                  * '<S19>/PdlAly_ZERO_PEDL'
                                                                  *//* CtAp_PdlAlys mode define acceleration pedal 0 position */
#define PdlAly_ZERO_VOLTAGE            0.0F                      /* Referenced by:
                                                                  * '<S11>/Define1'
                                                                  * '<S147>/Define1'
                                                                  * '<S148>/Define1'
                                                                  *//* CtAp_PdlAlys mode define acceleration pedal 0 voltage */

/* PublicStructure Variables for Internal Data, for system '<S30>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S36>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T;

/* PublicStructure Variables for Internal Data, for system '<S30>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S39>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_ecza;      /* '<S40>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_PdlAlys_T;

/* PublicStructure Variables for Internal Data, for system '<S31>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S43>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_drj5;      /* '<S44>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtAp_Pdl_T;

/* PublicStructure Variables for Internal Data, for system '<S33>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S48>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_eso4;      /* '<S49>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S47>/Delay1' */
} ARID_DEF_AvoidMu_CtAp_Pd_gwae_T;

/* PublicStructure Variables for Internal Data, for system '<S34>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S52>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_g12q;      /* '<S53>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_faqo_T;

/* PublicStructure Variables for Internal Data, for system '<S57>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S68>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_ffd2;      /* '<S69>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_lme0_T;

/* PublicStructure Variables for Internal Data, for system '<S59>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S77>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_e051;      /* '<S78>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_mhvf_T;

/* PublicStructure Variables for Internal Data, for system '<S80>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S89>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_oxab;      /* '<S90>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_Pd_js3m_T;

/* PublicStructure Variables for Internal Data, for system '<S82>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S95>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_f2wu;      /* '<S96>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_l4di_T;

/* PublicStructure Variables for Internal Data, for system '<S99>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S111>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_dc21;      /* '<S112>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_o3eo_T;

/* PublicStructure Variables for Internal Data, for system '<S101>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S115>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_isez;      /* '<S116>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_hxaj_T;

/* PublicStructure Variables for Internal Data, for system '<S103>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S120>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_lcsw;      /* '<S121>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_Pd_ez4t_T;

/* PublicStructure Variables for Internal Data, for system '<S124>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S132>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_g52p;      /* '<S133>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_Pd_l1nc_T;

/* PublicStructure Variables for Internal Data, for system '<S125>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S136>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_atzc;      /* '<S137>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_ma4k_T;

/* PublicStructure Variables for Internal Data, for system '<S126>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S141>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_eme0;      /* '<S142>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_Pd_lw2e_T;

/* PublicStructure Variables for Internal Data, for system '<S127>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S145>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_mxzy;      /* '<S146>/UnitDelay' */
} ARID_DEF_NoEnAvoidMu_CtA_kev4_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnAvoidMu_CtA_kev4_T ARID_DEF_NoEnAvoidMu;/* '<S127>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_lw2e_T ARID_DEF_AvoidMu;/* '<S126>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt;/* '<S126>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_ma4k_T ARID_DEF_NoEnAvoidMu_mbvz;/* '<S125>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_l1nc_T ARID_DEF_AvoidMu_cl54;/* '<S124>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S124>/ATOM_TimeCnt' */
  ARID_DEF_AvoidMu_CtAp_Pd_ez4t_T ARID_DEF_AvoidMu_cxar;/* '<S103>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_bhxx;/* '<S103>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_hxaj_T ARID_DEF_NoEnAvoidMu_pbm3;/* '<S101>/NoEnAvoidMu' */
  ARID_DEF_NoEnAvoidMu_CtA_o3eo_T ARID_DEF_NoEnAvoidMu_cv5h;/* '<S99>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T ARID_DEF_AvoidMu_fqdq;/* '<S98>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_g2ml;/* '<S98>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_l4di_T ARID_DEF_NoEnAvoidMu_g1sm;/* '<S82>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_js3m_T ARID_DEF_AvoidMu_merl;/* '<S80>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_nz4o;/* '<S80>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_mhvf_T ARID_DEF_NoEnAvoidMu_ppxr;/* '<S59>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T ARID_DEF_AvoidMu_llw0;/* '<S58>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_jwzv;/* '<S58>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_lme0_T ARID_DEF_NoEnAvoidMu_dhmr;/* '<S57>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T ARID_DEF_AvoidMu_guug;/* '<S56>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_ldqo;/* '<S56>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtA_faqo_T ARID_DEF_NoEnAvoidMu_dham;/* '<S34>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T ARID_DEF_AvoidMu_dype;/* '<S33>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_lxo5;/* '<S33>/ATOM_TimeCnt' */
  ARID_DEF_NoEnAvoidMu_CtAp_Pdl_T ARID_DEF_NoEnAvoidMu_owjr;/* '<S31>/NoEnAvoidMu' */
  ARID_DEF_AvoidMu_CtAp_PdlAlys_T ARID_DEF_AvoidMu_bjbg;/* '<S30>/AvoidMu' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T ARID_DEF_ATOM_TimeCnt_nueb;/* '<S30>/ATOM_TimeCnt' */
  dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo RTE_P_ChassisMgmt_AccrPedlSplyV;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo' */
  dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo RTE_P_ChassisMgmt_AccrPedl_eme5;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo' */
  dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo RTE_P_ChassisMgmt_AccrPedl_dsbx;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo' */
  dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo RTE_P_ChassisMgmt_AccrPedl_fxr2;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo' */
  dt_ChassisMgmt_AccrPedlURaw1Hi RTE_P_ChassisMgmt_AccrPedlURaw1;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus' */
  dt_ChassisMgmt_AccrPedlURaw1Lo RTE_P_ChassisMgmt_AccrPedl_jkuh;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus' */
  dt_ChassisMgmt_AccrPedlURaw2Hi RTE_P_ChassisMgmt_AccrPedlURaw2;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus' */
  dt_ChassisMgmt_AccrPedlURaw2Lo RTE_P_ChassisMgmt_AccrPedl_gfso;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus' */
  dt_ChassisMgmt_AccrPedlURawDif RTE_P_ChassisMgmt_AccrPedlURawD;
  /* '<Root>/RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus' */
  uint8_T Switch1;                     /* '<S140>/Switch1' */
  uint8_T Switch2;                     /* '<S140>/Switch2' */
  uint8_T Switch1_eln3;                /* '<S131>/Switch1' */
  uint8_T Switch2_nmqk;                /* '<S131>/Switch2' */
  uint8_T Switch1_iurs;                /* '<S119>/Switch1' */
  uint8_T Switch2_mfdi;                /* '<S119>/Switch2' */
  uint8_T Switch1_erat;                /* '<S106>/Switch1' */
  uint8_T Switch2_gkgv;                /* '<S106>/Switch2' */
  uint8_T Switch1_gfwx;                /* '<S88>/Switch1' */
  uint8_T Switch2_drsw;                /* '<S88>/Switch2' */
  uint8_T Switch1_cjgt;                /* '<S72>/Switch1' */
  uint8_T Switch2_lhwt;                /* '<S72>/Switch2' */
  uint8_T Switch1_aqwi;                /* '<S63>/Switch1' */
  uint8_T Switch2_brxx;                /* '<S63>/Switch2' */
  uint8_T Switch1_ht30;                /* '<S47>/Switch1' */
  uint8_T Switch2_irrj;                /* '<S47>/Switch2' */
  uint8_T Switch1_chgj;                /* '<S38>/Switch1' */
  uint8_T Switch2_pryd;                /* '<S38>/Switch2' */
  boolean_T Switch6;                   /* '<S106>/Switch6' */
  boolean_T Switch6_om1p;              /* '<S72>/Switch6' */
  boolean_T Switch6_fgqj;              /* '<S63>/Switch6' */
  boolean_T Switch6_ogm1;              /* '<S47>/Switch6' */
  boolean_T OneDelay_DSTATE;           /* '<S126>/OneDelay' */
  boolean_T OneDelay_DSTATE_lxkn;      /* '<S124>/OneDelay' */
  boolean_T OneDelay_DSTATE_dpr5;      /* '<S103>/OneDelay' */
  boolean_T OneDelay_DSTATE_hexn;      /* '<S98>/OneDelay' */
  boolean_T OneDelay_DSTATE_jygq;      /* '<S80>/OneDelay' */
  boolean_T OneDelay_DSTATE_lifc;      /* '<S56>/OneDelay' */
  boolean_T OneDelay_DSTATE_k3hp;      /* '<S58>/OneDelay' */
  boolean_T OneDelay_DSTATE_aekl;      /* '<S30>/OneDelay' */
  boolean_T OneDelay_DSTATE_mxiy;      /* '<S33>/OneDelay' */
  boolean_T SetCondtion_MODE;          /* '<S81>/SetCondtion' */
} ARID_DEF_CtAp_PdlAlys_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"

extern ARID_DEF_CtAp_PdlAlys_T CtAp_PdlAlys_ARID_DEF;

#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"

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
 * '<Root>' : 'CtAp_PdlAlys'
 * '<S1>'   : 'CtAp_PdlAlys/DocBlock'
 * '<S2>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_PdlAlys/R_PdlAlys_Init'
 * '<S4>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/CtAp_PdlAlys_Input'
 * '<S5>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/CtAp_PdlAlys_Output'
 * '<S6>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis'
 * '<S7>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis'
 * '<S8>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/BrakePedalAnalysis'
 * '<S9>'   : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AccelerationPedalPositionBrakePlausibility'
 * '<S10>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalArbitrion'
 * '<S11>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalFilterAndKickDown'
 * '<S12>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag'
 * '<S13>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_GerRawVoltValue'
 * '<S14>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Linearization'
 * '<S15>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_VoltUnJit'
 * '<S16>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/BrakePedalPriority'
 * '<S17>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/IBS_Priority'
 * '<S18>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalArbitrion/AcceleratorPedalLimpHome'
 * '<S19>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalArbitrion/AcceleratorPedalPositionSet'
 * '<S20>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalArbitrion/AcceleratorPedalValid'
 * '<S21>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedalFilterAndKickDown/PosHysteresis'
 * '<S22>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag'
 * '<S23>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag'
 * '<S24>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag'
 * '<S25>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AccrPedal1_Fault'
 * '<S26>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AccrPedal2_Fault'
 * '<S27>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag'
 * '<S28>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag'
 * '<S29>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_Condition'
 * '<S30>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC'
 * '<S31>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_FUSA'
 * '<S32>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_Condition'
 * '<S33>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC'
 * '<S34>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_FUSA'
 * '<S35>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AccrPedal1_SplyVoltFault'
 * '<S36>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC/ATOM_TimeCnt'
 * '<S37>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC/AvoidMu'
 * '<S38>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S39>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S40>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S41>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu'
 * '<S42>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S43>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S44>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S45>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC/ATOM_TimeCnt'
 * '<S46>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC/AvoidMu'
 * '<S47>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S48>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S49>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S50>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu'
 * '<S51>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S52>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S53>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal1PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S54>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_HiFault_Condition'
 * '<S55>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal1PowerSupplyVoltage_LoFault_Condition'
 * '<S56>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC'
 * '<S57>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_FUSA'
 * '<S58>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC'
 * '<S59>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_FUSA'
 * '<S60>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AccrPedal2_Fault'
 * '<S61>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC/ATOM_TimeCnt'
 * '<S62>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC/AvoidMu'
 * '<S63>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S64>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S65>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S66>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu'
 * '<S67>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S68>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S69>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S70>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC/ATOM_TimeCnt'
 * '<S71>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC/AvoidMu'
 * '<S72>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S73>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S74>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S75>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu'
 * '<S76>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S77>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S78>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedal2PowerSupplyVoltageDiag/AcceleratorPedal2PowerSupplyVoltage_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S79>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/AccrPedl_URaw_DifFault_Condition'
 * '<S80>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC'
 * '<S81>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault2_FUSA'
 * '<S82>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault_FUSA'
 * '<S83>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/AccrPedl_URaw_DifFault_Condition/AcceleratorPedalDifferentialDiagResetCondition'
 * '<S84>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/AccrPedl_URaw_DifFault_Condition/AcceleratorPedalDifferentialDiagSetCondition'
 * '<S85>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/AccrPedl_URaw_DifFault_Condition/CommonCondition'
 * '<S86>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC/ATOM_TimeCnt'
 * '<S87>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC/AvoidMu'
 * '<S88>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S89>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S90>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl1_URaw_DifFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S91>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault2_FUSA/Condition'
 * '<S92>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault2_FUSA/SetCondtion'
 * '<S93>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault_FUSA/NoEnAvoidMu'
 * '<S94>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S95>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S96>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/AcceleratorPedalDifferentialDiag/ChassisMgmt_AccrPedl_URaw_DifFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S97>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/AccrPedal1_VoltFault'
 * '<S98>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC'
 * '<S99>'  : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_FUSA'
 * '<S100>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_Condition'
 * '<S101>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_FUSA'
 * '<S102>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_HiFault_Condition'
 * '<S103>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC'
 * '<S104>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC/ATOM_TimeCnt'
 * '<S105>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC/AvoidMu'
 * '<S106>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S107>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S108>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S109>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_FUSA/NoEnAvoidMu'
 * '<S110>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S111>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S112>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S113>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_FUSA/NoEnAvoidMu'
 * '<S114>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S115>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S116>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S117>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC/ATOM_TimeCnt'
 * '<S118>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC/AvoidMu'
 * '<S119>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S120>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S121>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/MainAcceleratorPedalDiag/MainAcceleratorPedal_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S122>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/AccrPedal2_VoltFault'
 * '<S123>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/AccrPedl2_URaw_HiFault_Condition'
 * '<S124>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC'
 * '<S125>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_FUSA'
 * '<S126>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC'
 * '<S127>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_FUSA'
 * '<S128>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_SetCondition'
 * '<S129>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC/ATOM_TimeCnt'
 * '<S130>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC/AvoidMu'
 * '<S131>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S132>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S133>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S134>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_FUSA/NoEnAvoidMu'
 * '<S135>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S136>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S137>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_HiFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S138>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC/ATOM_TimeCnt'
 * '<S139>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC/AvoidMu'
 * '<S140>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16'
 * '<S141>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S142>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_DTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S143>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_FUSA/NoEnAvoidMu'
 * '<S144>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S145>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S146>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_Diag/RdnAcceleratorPedalDiag/ChassisMgmt_AccrPedl2_URaw_LoFault_FUSA/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S147>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_VoltUnJit/ChassisMgmt_AccrPedl_UnJit1Class'
 * '<S148>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_VoltUnJit/ChassisMgmt_AccrPedl_UnJit2Class'
 * '<S149>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_VoltUnJit/ChassisMgmt_AccrPedl_UnJit1Class/ATOM_Limiter'
 * '<S150>' : 'CtAp_PdlAlys/R_PdlAlys_Cyclic_10ms_sys/Function_PedalAnalysis/AcceleratorPedalAnalysis/AcceleratorPedal_VoltUnJit/ChassisMgmt_AccrPedl_UnJit2Class/ATOM_Limiter'
 */

/*-
 * Requirements for '<Root>': CtAp_PdlAlys

 *
 * Inherited requirements for '<S2>/CtAp_PdlAlys_Input':
 *  1. SWREQ_01180 The function of "Pedal analysis" has the following inputs:
 *
 * Inherited requirements for '<S2>/CtAp_PdlAlys_Output':
 *  1. SWREQ_01182 The function of "Pedal analysis" has the following outputs:
 *
 * Inherited requirements for '<S6>/BrakePedalAnalysis':
 *  1. SWREQ_01187 Brake pedal analysis Pressed
 *  2. SWREQ_01188 Brake pedal analysis Not Pressed
 *  3. SWREQ_01189 Brake pedal analysis Invalid
 *  4. SWREQ_01346 Brake pedal fault Set Conditon
 *  5. SWREQ_01347 Brake pedal fault Reset Conditon
 *  6. SWREQ_01352 Brake pedal fault Error mature time
 *  7. SWREQ_01353 Brake pedal fault Error demature time
 *
 * Inherited requirements for '<S7>/AccelerationPedalPositionBrakePlausibility':
 *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
 *
 * Inherited requirements for '<S7>/AcceleratorPedalFilterAndKickDown':
 *  1. SWREQ_01210 Accelerator  Pedal Analysis Position Filter
 *  2. SWREQ_05750 Accelerator  Pedal Analysis Position Kick Down
 *  3. SWREQ_05760 Accelerator  Pedal Analysis Position Kick Down
 *  4. SWREQ_05761 Accelerator  Pedal Analysis Position Kick Down
 *
 * Inherited requirements for '<S7>/AcceleratorPedal_GerRawVoltValue':
 *  1. SWREQ_05744 Accelerator Pedal 1 Raw Volt
 *  2. SWREQ_05745 Accelerator Pedal 1 Raw Volt
 *  3. SWREQ_05781 Accelerator Pedal2 Raw Volt
 *  4. SWREQ_05782 Accelerator Pedal2 Raw Volt
 *
 * Inherited requirements for '<S7>/AcceleratorPedal_Linearization':
 *  1. SWREQ_01201 Accelerator  Pedal1 Analysis Raw Position Value
 *  2. SWREQ_01202 Accelerator  Pedal2 Analysis Raw Position Value
 *  3. SWREQ_01203 Accelerator  Pedal2 Analysis Raw Position Value
 *  4. SWREQ_01200 Accelerator  Pedal1 Analysis Raw Position Value
 *
 * Inherited requirements for '<S7>/AcceleratorPedal_VoltUnJit':
 *  1. SWREQ_05746 Accelerator Pedal 1 Volt UnJit
 *  2. SWREQ_05783 Accelerator Pedal 2 Volt UnJit
 *
 * Inherited requirements for '<S7>/BrakePedalPriority':
 *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
 *
 * Inherited requirements for '<S7>/IBS_Priority':
 *  1. SWREQ_01211 Accelerator  Pedal Analysis Position Brake Pedal Priority
 *
 * Inherited requirements for '<S10>/AcceleratorPedalLimpHome':
 *  1. SWREQ_01206 Accelerator  Pedal Limphome
 *  2. SWREQ_01207 Accelerator  Pedal Limphome
 *
 * Inherited requirements for '<S10>/AcceleratorPedalPositionSet':
 *  1. SWREQ_01206 Accelerator  Pedal Limphome
 *  2. SWREQ_01208 Accelerator  Pedal Analysis Position Set Accelerator  Pedal 1
 *  3. SWREQ_01209 Accelerator  Pedal Analysis Position Set Accelerator  Pedal 2
 *  4. SWREQ_05912 Accelerator  Pedal Analysis Position Set Zero
 *  5. SWREQ_05911 Accelerator  Pedal Analysis Position Set Accelerator  Pedal min
 *  6. SWREQ_05749 Accelerator  Pedal Analysis Position Set Accelerator  Pedal1
 *
 * Inherited requirements for '<S10>/AcceleratorPedalValid':
 *  1. SWREQ_01205 Accelerator  Pedal Valid
 *  2. SWREQ_05747 Accelerator  Pedal Valid
 *
 * Inherited requirements for '<S12>/AccrPedal1_Fault':
 *  1. SWREQ_01192 Accelerator Pedal 1 Analysis Fault Diag
 *  2. SWREQ_01193 Accelerator Pedal 1 Analysis Fault Diag
 *
 * Inherited requirements for '<S12>/AccrPedal2_Fault':
 *  1. SWREQ_01194 Accelerator Pedal 2 Analysis Fault Diag
 *  2. SWREQ_01195 Accelerator Pedal 2 Analysis Fault Diag
 *
 * Inherited requirements for '<S22>/AccrPedal1_SplyVoltFault':
 *  1. SWREQ_05762 Accelerator Pedal Sensor1 Power supply voltage diag
 *  2. SWREQ_05763 Accelerator Pedal Sensor1 Power supply voltage diag
 *
 * Inherited requirements for '<S23>/AccrPedal2_Fault':
 *  1. SWREQ_05764 Accelerator Pedal Sensor2 Power supply voltage diag
 *  2. SWREQ_05765 Accelerator Pedal Sensor2 Power supply voltage diag
 *
 * Inherited requirements for '<S27>/AccrPedal1_VoltFault':
 *  1. SWREQ_01192 Accelerator Pedal 1 Analysis Fault Diag
 *  2. SWREQ_01193 Accelerator Pedal 1 Analysis Fault Diag
 *
 * Inherited requirements for '<S28>/AccrPedal2_VoltFault':
 *  1. SWREQ_01194 Accelerator Pedal 2 Analysis Fault Diag
 *  2. SWREQ_01195 Accelerator Pedal 2 Analysis Fault Diag
 *
 * Inherited requirements for '<S79>/AcceleratorPedalDifferentialDiagResetCondition':
 *  1. SWREQ_01269 DTC  P11571E Reset Conditon
 *  2. SWREQ_01334 Accelerator pedal difference fault Reset Conditon
 *
 * Inherited requirements for '<S79>/AcceleratorPedalDifferentialDiagSetCondition':
 *  1. SWREQ_01268 DTC  P11571E Set Conditon
 *  2. SWREQ_01333 Accelerator pedal difference fault Set Conditon
 *
 * Inherited requirements for '<S79>/CommonCondition':
 *  1. SWREQ_01196 Accelerator Pedal Difference Fault Diag
 *  2. SWREQ_01198 Accelerator Pedal Difference Fault 2 Diag
 *  3. SWREQ_01199 Accelerator Pedal Difference Fault 2 Diag
 *  4. SWREQ_01197 Accelerator Pedal Difference Fault  Diag
 *  5. SWREQ_05913 Accelerator Pedal Difference Value
 *
 * Inherited requirements for '<S81>/SetCondtion':
 *  1. SWREQ_05937 Accelerator pedal difference fault2 Reset Conditon

 */
#endif                                 /* RTW_HEADER_CtAp_PdlAlys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
