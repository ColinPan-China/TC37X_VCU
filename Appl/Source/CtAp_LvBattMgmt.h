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
 *  Filename:           CtAp_LvBattMgmt.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_LvBattMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:26 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:17:17 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Jun 26 18:08:33 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_LvBattMgmt_h_
#define RTW_HEADER_CtAp_LvBattMgmt_h_
#ifndef CtAp_LvBattMgmt_COMMON_INCLUDES_
#define CtAp_LvBattMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_LvBattMgmt.h"
#endif                                 /* CtAp_LvBattMgmt_COMMON_INCLUDES_ */

#include "CtAp_LvBattMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_LvBattMgmt_Glb.h"
#include "CtAp_LvBattMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define LvBattMgmt_Active              true                      /* Referenced by:
                                                                  * '<S8>/Marco_Active'
                                                                  * '<S9>/Marco_Active'
                                                                  * '<S10>/Marco_Active'
                                                                  * '<S10>/Marco_Active1'
                                                                  * '<S72>/Constant'
                                                                  * '<S75>/Constant'
                                                                  */
#define LvBattMgmt_IVILmtPop           2U                        /* Referenced by:
                                                                  * '<S116>/Constant'
                                                                  * '<S117>/Constant'
                                                                  */
#define LvBattMgmt_Inactive            false                     /* Referenced by:
                                                                  * '<S8>/Marco_Inactive'
                                                                  * '<S9>/Marco_Inactive'
                                                                  * '<S10>/Marco_Inactive'
                                                                  */
#define LvBattMgmt_LevelOne            1U                        /* Referenced by: '<S11>/Marco_LevelOne' */
#define LvBattMgmt_LevelThree          3U                        /* Referenced by: '<S11>/Marco_LevelThree' */
#define LvBattMgmt_LevelTwo            2U                        /* Referenced by: '<S11>/Marco_LevelTwo' */
#define LvBattMgmt_LevelZero           0U                        /* Referenced by: '<S11>/Marco_LevelZero' */
#define LvBattMgmt_LvMgmt_RunStep      20U                       /* Referenced by:
                                                                  * '<S10>/LvMgmt_RunStep'
                                                                  * '<S11>/LvMgmt_RunStep'
                                                                  * '<S12>/LvMgmt_RunStep'
                                                                  * '<S12>/LvMgmt_RunStep1'
                                                                  * '<S13>/LvMgmt_RunStep'
                                                                  * '<S13>/LvMgmt_RunStep1'
                                                                  * '<S14>/LvMgmt_RunStep'
                                                                  * '<S14>/LvMgmt_RunStep1'
                                                                  * '<S15>/LvMgmt_RunStep'
                                                                  * '<S15>/LvMgmt_RunStep1'
                                                                  * '<S16>/LvMgmt_RunStep'
                                                                  * '<S16>/LvMgmt_RunStep1'
                                                                  * '<S17>/LvMgmt_RunStep'
                                                                  * '<S17>/LvMgmt_RunStep1'
                                                                  * '<S18>/LvMgmt_RunStep'
                                                                  * '<S18>/LvMgmt_RunStep1'
                                                                  * '<S19>/LvMgmt_RunStep'
                                                                  * '<S20>/LvMgmt_RunStep'
                                                                  * '<S20>/LvMgmt_RunStep1'
                                                                  * '<S21>/LvMgmt_RunStep'
                                                                  * '<S21>/LvMgmt_RunStep1'
                                                                  */
#define LvBattMgmt_PEPSOff             1U                        /* Referenced by:
                                                                  * '<S102>/Constant'
                                                                  * '<S119>/Constant'
                                                                  */
#define LvBattMgmt_PEPSOn              2U                        /* Referenced by:
                                                                  * '<S100>/Constant'
                                                                  * '<S101>/Constant'
                                                                  * '<S118>/Constant'
                                                                  */
#define LvBattMgmt_WarnLvlInitTmr      700U                      /* Referenced by:
                                                                  * '<S10>/LvBattMgmt_WarnLvlInitTmr'
                                                                  * '<S11>/LvBattMgmt_WarnLvlInitTmr'
                                                                  *//* ault
                                                                     */
#define LvMgmt_BSBattDTCEnaSetTim      1500U                     /* Referenced by:
                                                                  * '<S12>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S13>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S14>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S15>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S16>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S17>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S18>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  * '<S19>/LvMgmt_BSBattDTCEnaSetTim'
                                                                  */
#define LvMgmt_BSMsgFourCntTim         4U                        /* Referenced by: '<S73>/LvMgmt_BSMsgFourCntTim' */

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_U16ErrorHandle13' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S28>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_nwy1;      /* '<S27>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S26>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S12>/ActiveTimCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S23>/Delay' */
} ARID_DEF_ActiveTimCnt_CtAp_Lv_T;

/* PublicStructure Variables for Internal Data, for system '<S19>/NoTime' */
typedef struct {
  boolean_T Delay1_DSTATE;             /* '<S76>/Delay1' */
} ARID_DEF_NoTime_CtAp_LvBattMg_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt;/* '<S11>/ActiveTimCnt' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_mbvz;/* '<S10>/ActiveTimCnt' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_cl54;/* '<S21>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle14;/* '<S21>/ATOM_U16ErrorHandle14' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_kkiq;/* '<S20>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle13;/* '<S20>/ATOM_U16ErrorHandle13' */
  ARID_DEF_NoTime_CtAp_LvBattMg_T ARID_DEF_NoTime;/* '<S19>/NoTime' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_cxar;/* '<S19>/ActiveTimCnt' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_bhxx;/* '<S18>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_pbm3;/* '<S18>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_cv5h;/* '<S17>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_fqdq;/* '<S17>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_g2ml;/* '<S16>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_g1sm;/* '<S16>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_merl;/* '<S15>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_nz4o;/* '<S15>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_ppxr;/* '<S14>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_llw0;/* '<S14>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_jwzv;/* '<S13>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_dhmr;/* '<S13>/ATOM_U16ErrorHandle13' */
  ARID_DEF_ActiveTimCnt_CtAp_Lv_T ARID_DEF_ActiveTimCnt_guug;/* '<S12>/ActiveTimCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_ldqo;/* '<S12>/ATOM_U16ErrorHandle13' */
  dt_LvMgmt_BSBattChrgIDcHiDTC RTE_P_LvMgmt_BSBattChrgIDcHiDTC;
  /* '<Root>/RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus' */
  dt_LvMgmt_BSBattIDcHiDTC RTE_P_LvMgmt_BSBattIDcHiDTC_Bus;
    /* '<Root>/RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus' */
  dt_LvMgmt_BSBattSOCLoDTC RTE_P_LvMgmt_BSBattSOCLoDTC_Bus;
    /* '<Root>/RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus' */
  dt_LvMgmt_BSBattTempHiDTC RTE_P_LvMgmt_BSBattTempHiDTC_Bu;
  /* '<Root>/RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus' */
  dt_LvMgmt_BSBattTempLoDTC RTE_P_LvMgmt_BSBattTempLoDTC_Bu;
  /* '<Root>/RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus' */
  dt_LvMgmt_BSBattUDcHiDTC RTE_P_LvMgmt_BSBattUDcHiDTC_Bus;
    /* '<Root>/RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus' */
  dt_LvMgmt_BSBattUDcLoDTC RTE_P_LvMgmt_BSBattUDcLoDTC_Bus;
    /* '<Root>/RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus' */
  dt_LvMgmt_BSRespErrDTC RTE_P_LvMgmt_BSRespErrDTC_Bus_t;
        /* '<Root>/RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus' */
  dt_LvMgmt_LvSysLoUdcDTC RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_;
      /* '<Root>/RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus' */
  dt_LvMgmt_LvSysOvrUdcDTC RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus;
    /* '<Root>/RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus' */
  real32_T Delay7_DSTATE;              /* '<S11>/Delay7' */
  real32_T Delay5_DSTATE;              /* '<S11>/Delay5' */
  real32_T Delay3_DSTATE;              /* '<S11>/Delay3' */
  real32_T Delay4_DSTATE;              /* '<S11>/Delay4' */
  real32_T Delay5_DSTATE_ce3t;         /* '<S10>/Delay5' */
  real32_T Delay3_DSTATE_k0s5;         /* '<S10>/Delay3' */
  real32_T Delay4_DSTATE_m15p;         /* '<S10>/Delay4' */
  real32_T Delay2_DSTATE;              /* '<S10>/Delay2' */
  real32_T Delay1_DSTATE;              /* '<S10>/Delay1' */
  uint8_T Switch1;                     /* '<S88>/Switch1' */
  uint8_T Switch8;                     /* '<S88>/Switch8' */
  uint8_T Switch1_kkhd;                /* '<S81>/Switch1' */
  uint8_T Switch8_fypa;                /* '<S81>/Switch8' */
  uint8_T Switch1_awdy;                /* '<S76>/Switch1' */
  uint8_T Switch8_h2kh;                /* '<S76>/Switch8' */
  uint8_T Switch1_ifsh;                /* '<S68>/Switch1' */
  uint8_T Switch8_gpiu;                /* '<S68>/Switch8' */
  uint8_T Switch1_lido;                /* '<S61>/Switch1' */
  uint8_T Switch8_ahy1;                /* '<S61>/Switch8' */
  uint8_T Switch1_kj2h;                /* '<S54>/Switch1' */
  uint8_T Switch8_aolb;                /* '<S54>/Switch8' */
  uint8_T Switch1_oxxi;                /* '<S47>/Switch1' */
  uint8_T Switch8_ikcp;                /* '<S47>/Switch8' */
  uint8_T Switch1_lxve;                /* '<S40>/Switch1' */
  uint8_T Switch8_aghw;                /* '<S40>/Switch8' */
  uint8_T Switch1_cjak;                /* '<S33>/Switch1' */
  uint8_T Switch8_l4dy;                /* '<S33>/Switch8' */
  uint8_T Switch1_km3m;                /* '<S26>/Switch1' */
  uint8_T Switch8_kq0v;                /* '<S26>/Switch8' */
  uint8_T Delay_DSTATE;                /* '<S11>/Delay' */
  uint8_T Delay_DSTATE_kwrc;           /* '<S73>/Delay' */
  boolean_T Switch6;                   /* '<S88>/Switch6' */
  boolean_T Switch6_ce24;              /* '<S81>/Switch6' */
  boolean_T Switch6_eays;              /* '<S76>/Switch6' */
  boolean_T RelationalOperator;        /* '<S73>/Relational Operator' */
  boolean_T Switch6_l5x0;              /* '<S68>/Switch6' */
  boolean_T Switch6_lql5;              /* '<S61>/Switch6' */
  boolean_T Switch6_gemz;              /* '<S54>/Switch6' */
  boolean_T Switch6_hide;              /* '<S47>/Switch6' */
  boolean_T Switch6_ba3k;              /* '<S40>/Switch6' */
  boolean_T Switch6_kncm;              /* '<S33>/Switch6' */
  boolean_T Switch6_be5x;              /* '<S26>/Switch6' */
  boolean_T Delay_DSTATE_no4h;         /* '<S10>/Delay' */
  boolean_T Delay_DSTATE_dzgy;         /* '<S9>/Delay' */
  boolean_T LvMgmt_BSRespErrDTCCnt_MODE;/* '<S19>/LvMgmt_BSRespErrDTCCnt' */
} ARID_DEF_CtAp_LvBattMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_LvBattMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"

extern ARID_DEF_CtAp_LvBattMgmt_T CtAp_LvBattMgmt_ARID_DEF;

#define CtAp_LvBattMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_LvBattMgmt'
 * '<S1>'   : 'CtAp_LvBattMgmt/DocBlock'
 * '<S2>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Init'
 * '<S4>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function'
 * '<S5>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Input'
 * '<S6>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Output'
 * '<S7>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs'
 * '<S8>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattUDcNorm'
 * '<S9>'   : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_IndicatorLightSts'
 * '<S10>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd'
 * '<S11>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl'
 * '<S12>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC'
 * '<S13>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC'
 * '<S14>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC'
 * '<S15>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC'
 * '<S16>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC'
 * '<S17>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC'
 * '<S18>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC'
 * '<S19>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC'
 * '<S20>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC'
 * '<S21>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC'
 * '<S22>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/ATOM_U16ErrorHandle13'
 * '<S23>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/ActiveTimCnt'
 * '<S24>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/LvMgmt_BSIBatt_CP'
 * '<S25>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/LvMgmt_BSIBatt_CP1'
 * '<S26>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S27>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S28>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattChrgIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S29>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/ATOM_U16ErrorHandle13'
 * '<S30>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/ActiveTimCnt'
 * '<S31>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/LvMgmt_BSIBatt_CP'
 * '<S32>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/LvMgmt_BSIBatt_CP1'
 * '<S33>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S34>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S35>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattDSGIDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S36>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ATOM_U16ErrorHandle13'
 * '<S37>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ActiveTimCnt'
 * '<S38>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ComM_BSBattSOC_pct_CP'
 * '<S39>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ComM_BSBattSOC_pct_CP1'
 * '<S40>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S41>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S42>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattSOCLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S43>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/ATOM_U16ErrorHandle13'
 * '<S44>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/ActiveTimCnt'
 * '<S45>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/LvMgmt_BSTBatt_CP'
 * '<S46>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/LvMgmt_BSTBatt_CP1'
 * '<S47>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S48>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S49>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S50>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/ATOM_U16ErrorHandle13'
 * '<S51>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/ActiveTimCnt'
 * '<S52>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/LvMgmt_BSTBatt_CP'
 * '<S53>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/LvMgmt_BSTBatt_CP1'
 * '<S54>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S55>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S56>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattTempLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S57>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/ATOM_U16ErrorHandle13'
 * '<S58>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/ActiveTimCnt'
 * '<S59>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/LvMgmt_BSUBatt_CP'
 * '<S60>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/LvMgmt_BSUBatt_CP1'
 * '<S61>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S62>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S63>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcHiDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S64>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/ATOM_U16ErrorHandle13'
 * '<S65>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/ActiveTimCnt'
 * '<S66>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/LvMgmt_BSUBatt_CP'
 * '<S67>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/LvMgmt_BSUBatt_CP1'
 * '<S68>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S69>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S70>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSBattUDcLoDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S71>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/ActiveTimCnt'
 * '<S72>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/Compare To Constant'
 * '<S73>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/LvMgmt_BSRespErrDTCCnt'
 * '<S74>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/NoTime'
 * '<S75>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/LvMgmt_BSRespErrDTCCnt/Compare To Constant'
 * '<S76>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_BSRespErrDTC/NoTime/ErrorHandleSysU16'
 * '<S77>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/ATOM_U16ErrorHandle13'
 * '<S78>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/ActiveTimCnt'
 * '<S79>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/IOAbs_BSBattUDc_V_CP'
 * '<S80>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/IOAbs_BSBattUDc_V_CP1'
 * '<S81>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16'
 * '<S82>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay'
 * '<S83>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysLoUdcDTC/ATOM_U16ErrorHandle13/ErrorHandleSysU16/OnDelay1'
 * '<S84>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/ATOM_U16ErrorHandle14'
 * '<S85>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/ActiveTimCnt'
 * '<S86>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/IOAbs_BSBattUDc_V_CP2'
 * '<S87>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/IOAbs_BSBattUDc_V_CP3'
 * '<S88>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/ATOM_U16ErrorHandle14/ErrorHandleSysU16'
 * '<S89>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/ATOM_U16ErrorHandle14/ErrorHandleSysU16/OnDelay'
 * '<S90>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattDTCs/LvMgmt_LvSysOvrUdcDTC/ATOM_U16ErrorHandle14/ErrorHandleSysU16/OnDelay1'
 * '<S91>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_BSBattUDcNorm/If'
 * '<S92>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_IndicatorLightSts/If'
 * '<S93>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_IndicatorLightSts/If1'
 * '<S94>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ActiveTimCnt'
 * '<S95>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_BSBattSOC_pct_CP'
 * '<S96>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_BSBattSOC_pct_CP1'
 * '<S97>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_BSBattSOC_pct_CP2'
 * '<S98>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_BSBattSOC_pct_CP3'
 * '<S99>'  : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_BSBattSOC_pct_CP4'
 * '<S100>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_PEPSPwrMod_Enum_CP'
 * '<S101>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_PEPSPwrMod_Enum_CP1'
 * '<S102>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/ComM_PEPSPwrMod_Enum_CP2'
 * '<S103>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If'
 * '<S104>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If1'
 * '<S105>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If2'
 * '<S106>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If3'
 * '<S107>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If4'
 * '<S108>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_ReachLimStd/If5'
 * '<S109>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ActiveTimCnt'
 * '<S110>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP'
 * '<S111>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP1'
 * '<S112>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP2'
 * '<S113>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP3'
 * '<S114>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP4'
 * '<S115>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_BSBattSOC_pct_CP5'
 * '<S116>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_IVILVLimPopInfo_CP'
 * '<S117>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_IVILVLimPopInfo_CP1'
 * '<S118>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_PEPSPwrMod_Enum_CP2'
 * '<S119>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/ComM_PEPSPwrMod_Enum_CP3'
 * '<S120>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If'
 * '<S121>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If1'
 * '<S122>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If2'
 * '<S123>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If3'
 * '<S124>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If4'
 * '<S125>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If5'
 * '<S126>' : 'CtAp_LvBattMgmt/R_LvBattMgmt_Cyclic_20ms_sys/CtAp_LvBattMgmt_Function/LvMgmt_VCUlimLvl/If6'
 */

/*-
 * Requirements for '<Root>': CtAp_LvBattMgmt

 *
 * Inherited requirements for '<S4>/LvMgmt_BSBattUDcNorm':
 *  1. VCU_SW_Requirements_Specification.slreqx:144
 *  2. VCU_SW_Requirements_Specification.slreqx:145
 *
 * Inherited requirements for '<S4>/LvMgmt_IndicatorLightSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:11244
 *  2. VCU_SW_Requirements_Specification.slreqx:11245
 *
 * Inherited requirements for '<S4>/LvMgmt_ReachLimStd':
 *  1. VCU_SW_Requirements_Specification.slreqx:11237
 *  2. VCU_SW_Requirements_Specification.slreqx:11238
 *  3. VCU_SW_Requirements_Specification.slreqx:11239
 *
 * Inherited requirements for '<S4>/LvMgmt_VCUlimLvl':
 *  1. VCU_SW_Requirements_Specification.slreqx:11240
 *  2. VCU_SW_Requirements_Specification.slreqx:11241
 *  3. VCU_SW_Requirements_Specification.slreqx:11242
 *  4. VCU_SW_Requirements_Specification.slreqx:11243
 *
 * Inherited requirements for '<S8>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:144
 *  2. VCU_SW_Requirements_Specification.slreqx:145
 *
 * Inherited requirements for '<S9>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:11244
 *
 * Inherited requirements for '<S9>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:11245
 *
 * Inherited requirements for '<S10>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:11237
 *
 * Inherited requirements for '<S10>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:11238
 *
 * Inherited requirements for '<S10>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:11239
 *
 * Inherited requirements for '<S11>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:11240
 *
 * Inherited requirements for '<S11>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:11241
 *
 * Inherited requirements for '<S11>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:11243
 *
 * Inherited requirements for '<S11>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:11242
 *
 * Inherited requirements for '<S19>/LvMgmt_BSRespErrDTCCnt':
 *  1. VCU_SW_Requirements_Specification.slreqx:70012

 */
#endif                                 /* RTW_HEADER_CtAp_LvBattMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
