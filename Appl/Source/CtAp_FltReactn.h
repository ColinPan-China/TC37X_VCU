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
 *  Filename:           CtAp_FltReactn.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FltReactn
 *  Model Version:      3.2.2
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:58 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:22:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:20:16 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FltReactn_h_
#define RTW_HEADER_CtAp_FltReactn_h_
#ifndef CtAp_FltReactn_COMMON_INCLUDES_
#define CtAp_FltReactn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_FltReactn.h"
#endif                                 /* CtAp_FltReactn_COMMON_INCLUDES_ */

#include "CtAp_FltReactn_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_FltReactn_Glb.h"
#include "CtAp_FltReactn_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define FltReactn_ACCharging           5U                        /* Referenced by: '<S36>/Constant' */
#define FltReactn_ACPlugDetected       2U                        /* Referenced by:
                                                                  * '<S4>/Constant'
                                                                  * '<S7>/Constant'
                                                                  * '<S8>/Constant'
                                                                  */
#define FltReactn_ACPreheating         10U                       /* Referenced by: '<S12>/Constant' */
#define FltReactn_ChargingComplete     8U                        /* Referenced by:
                                                                  * '<S16>/Constant'
                                                                  * '<S25>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S39>/Constant'
                                                                  */
#define FltReactn_ChargingFault        9U                        /* Referenced by:
                                                                  * '<S11>/Constant'
                                                                  * '<S17>/Constant'
                                                                  * '<S28>/Constant'
                                                                  * '<S41>/Constant'
                                                                  */
#define FltReactn_Cycle                10U                       /* Referenced by:
                                                                  * '<S44>/CAL2'
                                                                  * '<S45>/Constant3'
                                                                  * '<S47>/Constant'
                                                                  * '<S47>/Constant5'
                                                                  * '<S50>/Constant'
                                                                  * '<S51>/Constant'
                                                                  * '<S51>/Constant4'
                                                                  * '<S52>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S80>/Constant'
                                                                  */
#define FltReactn_DCCharging           6U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S35>/Constant'
                                                                  */
#define FltReactn_DCPlugDetected       3U                        /* Referenced by:
                                                                  * '<S9>/Constant'
                                                                  * '<S13>/Constant'
                                                                  * '<S23>/Constant'
                                                                  * '<S33>/Constant'
                                                                  */
#define FltReactn_DCPreheating         11U                       /* Referenced by:
                                                                  * '<S18>/Constant'
                                                                  * '<S34>/Constant'
                                                                  */
#define FltReactn_DrvReady             3U                        /* Referenced by:
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S60>/Constant'
                                                                  * '<S76>/Constant'
                                                                  * '<S88>/Constant'
                                                                  */
#define FltReactn_False                false                     /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S47>/Constant7'
                                                                  * '<S47>/Constant8'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S51>/Constant6'
                                                                  * '<S51>/Constant7'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  */
#define FltReactn_HvReady              2U                        /* Referenced by:
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S59>/Constant'
                                                                  * '<S75>/Constant'
                                                                  * '<S87>/Constant'
                                                                  */
#define FltReactn_Init                 0U                        /* Referenced by:
                                                                  * '<S15>/Constant'
                                                                  * '<S29>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S62>/Constant'
                                                                  * '<S78>/Constant'
                                                                  * '<S90>/Constant'
                                                                  */
#define FltReactn_KeepWarning          13U                       /* Referenced by: '<S10>/Constant' */
#define FltReactn_MaxSpd               360.0F                    /* Referenced by: '<S44>/ErrMgmt_ReactionSel' */
#define FltReactn_OffPlug              1U                        /* Referenced by:
                                                                  * '<S26>/Constant'
                                                                  * '<S30>/Constant'
                                                                  * '<S32>/Constant'
                                                                  */
#define FltReactn_PreHeating           4U                        /* Referenced by:
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S61>/Constant'
                                                                  * '<S77>/Constant'
                                                                  * '<S89>/Constant'
                                                                  */
#define FltReactn_Standby              1U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S58>/Constant'
                                                                  * '<S74>/Constant'
                                                                  * '<S122>/Constant'
                                                                  * '<S86>/Constant'
                                                                  */
#define FltReactn_True                 true                      /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  */
#define FltReactn_U8LvlEight           8U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S127>/Constant'
                                                                  */
#define FltReactn_U8LvlEleven          11U                       /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S124>/Constant'
                                                                  */
#define FltReactn_U8LvlFifteen         15U                       /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S125>/Constant'
                                                                  */
#define FltReactn_U8LvlFive            5U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S116>/Constant'
                                                                  * '<S119>/Constant'
                                                                  */
#define FltReactn_U8LvlFour            4U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S112>/Constant'
                                                                  * '<S118>/Constant'
                                                                  */
#define FltReactn_U8LvlNine            9U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S121>/Constant'
                                                                  */
#define FltReactn_U8LvlOne             1U                        /* Referenced by:
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S106>/Constant1'
                                                                  * '<S109>/Constant1'
                                                                  * '<S110>/Constant2'
                                                                  */
#define FltReactn_U8LvlSeven           7U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S126>/Constant'
                                                                  */
#define FltReactn_U8LvlSix             6U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S117>/Constant'
                                                                  */
#define FltReactn_U8LvlTen             10U                       /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S123>/Constant'
                                                                  */
#define FltReactn_U8LvlThree           3U                        /* Referenced by:
                                                                  * '<S44>/ErrMgmt_ReactionSel'
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S110>/Constant'
                                                                  * '<S111>/Constant'
                                                                  * '<S114>/Constant'
                                                                  * '<S120>/Constant'
                                                                  */
#define FltReactn_U8LvlTwo             2U                        /* Referenced by:
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S106>/Constant'
                                                                  * '<S109>/Constant'
                                                                  * '<S110>/Constant1'
                                                                  * '<S69>/Constant'
                                                                  * '<S70>/Constant'
                                                                  * '<S97>/Constant'
                                                                  * '<S98>/Constant'
                                                                  * '<S113>/Constant'
                                                                  * '<S115>/Constant'
                                                                  */
#define FltReactn_U8LvlZero            0U                        /* Referenced by:
                                                                  * '<S45>/ErrMgmt_BMSErrorLevelSel'
                                                                  * '<S45>/Constant2'
                                                                  * '<S46>/ErrMgmt_CrashErrorLevelSel'
                                                                  * '<S47>/ErrMgmt_DCDCErrorLevelSel'
                                                                  * '<S47>/Constant2'
                                                                  * '<S48>/ErrMgmt_HVILErrorLevelSel'
                                                                  * '<S49>/ErrMgmt_InslaErrorLevelSel'
                                                                  * '<S50>/ErrMgmt_MCUErrorLevelSel'
                                                                  * '<S50>/Constant2'
                                                                  * '<S51>/ErrMgmt_OBCErrorLevelSel'
                                                                  * '<S51>/Constant5'
                                                                  * '<S52>/ErrMgmt_TCUErrorLevelSel'
                                                                  * '<S52>/Constant2'
                                                                  * '<S106>/Constant2'
                                                                  * '<S109>/Constant2'
                                                                  * '<S110>/Constant3'
                                                                  */
#define FltReactn_V2LComplete          12U                       /* Referenced by:
                                                                  * '<S21>/Constant'
                                                                  * '<S27>/Constant'
                                                                  * '<S40>/Constant'
                                                                  */
#define FltReactn_V2LDischarging       7U                        /* Referenced by: '<S20>/Constant' */
#define FltReactn_V2LFault             14U                       /* Referenced by:
                                                                  * '<S5>/Constant'
                                                                  * '<S6>/Constant'
                                                                  * '<S22>/Constant'
                                                                  */
#define FltReactn_V2LPlugDetected      4U                        /* Referenced by:
                                                                  * '<S19>/Constant'
                                                                  * '<S24>/Constant'
                                                                  * '<S38>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S45>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S53>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T;

/* PublicStructure Variables for Internal Data, for system '<S54>/DetectChange1' */
typedef struct {
  uint8_T Delay_DSTATE;                /* '<S56>/Delay' */
} ARID_DEF_DetectChange_CtAp_Fl_T;

/* PublicStructure Variables for Internal Data, for system '<S45>/ErrDlyCfm' */
typedef struct {
  ARID_DEF_DetectChange_CtAp_Fl_T ARID_DEF_DetectChange1;/* '<S54>/DetectChange1' */
} ARID_DEF_ErrDlyCfm_CtAp_FltRe_T;

/* PublicStructure Variables for Internal Data, for system '<S47>/ATOM_U32TimeCnt' */
typedef struct {
  uint32_T Delay_DSTATE;               /* '<S68>/Delay' */
} ARID_DEF_ATOM_U32TimeCnt_CtAp_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt;/* '<S44>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm;/* '<S52>/ErrDlyCfm' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S52>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_cl54;/* '<S51>/ErrDlyCfm' */
  ARID_DEF_ATOM_U32TimeCnt_CtAp_T ARID_DEF_ATOM_U32TimeCnt;/* '<S51>/ATOM_U32TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S51>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_cxar;/* '<S50>/ErrDlyCfm' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_bhxx;/* '<S50>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_pbm3;/* '<S80>/ErrDlyCfm' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_cv5h;/* '<S80>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_fqdq;/* '<S47>/ErrDlyCfm' */
  ARID_DEF_ATOM_U32TimeCnt_CtAp_T ARID_DEF_ATOM_U32TimeCnt_g2ml;/* '<S47>/ATOM_U32TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_g1sm;/* '<S47>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_merl;/* '<S57>/ErrDlyCfm' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_nz4o;/* '<S57>/ATOM_TimeCnt' */
  ARID_DEF_ErrDlyCfm_CtAp_FltRe_T ARID_DEF_ErrDlyCfm_ppxr;/* '<S45>/ErrDlyCfm' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fl_T ARID_DEF_ATOM_TimeCnt_llw0;/* '<S45>/ATOM_TimeCnt' */
  dt_ErrMgmt_TorqCtrlErr RTE_P_ErrMgmt_TorqCtrlErr_Bus_t;
        /* '<Root>/RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus' */
  uint8_T Switch;                      /* '<S80>/Switch' */
  uint8_T Switch_d24b;                 /* '<S57>/Switch' */
  uint8_T Delay_DSTATE;                /* '<S52>/Delay' */
  uint8_T Delay_DSTATE_ijaq;           /* '<S51>/Delay' */
  uint8_T Delay_DSTATE_days;           /* '<S50>/Delay' */
  uint8_T Delay1_DSTATE;               /* '<S49>/Delay1' */
  uint8_T Delay_DSTATE_cq5u;           /* '<S80>/Delay' */
  uint8_T Delay_DSTATE_mate;           /* '<S47>/Delay' */
  uint8_T Delay1_DSTATE_bwp5;          /* '<S46>/Delay1' */
  uint8_T Delay_DSTATE_arei;           /* '<S57>/Delay' */
  uint8_T Delay_DSTATE_otrr;           /* '<S45>/Delay' */
  boolean_T Delay1_DSTATE_piwk;        /* '<S51>/Delay1' */
  boolean_T Delay1_DSTATE_augr;        /* '<S47>/Delay1' */
  boolean_T BMSInslaErrLvlCfm_MODE;    /* '<S49>/BMSInslaErrLvlCfm' */
  boolean_T ACUCrashEnable_MODE;       /* '<S46>/ACUCrashEnable' */
} ARID_DEF_CtAp_FltReactn_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_FltReactn_START_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"

extern ARID_DEF_CtAp_FltReactn_T CtAp_FltReactn_ARID_DEF;

#define CtAp_FltReactn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FltReactn_MemMap.h"

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
 * '<Root>' : 'CtAp_FltReactn'
 * '<S1>'   : 'CtAp_FltReactn/DocBlock'
 * '<S2>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_FltReactn/R_FltReactn_Init'
 * '<S4>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant1'
 * '<S5>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant10'
 * '<S6>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant11'
 * '<S7>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant12'
 * '<S8>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant13'
 * '<S9>'   : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant14'
 * '<S10>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant15'
 * '<S11>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant16'
 * '<S12>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant17'
 * '<S13>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant18'
 * '<S14>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant19'
 * '<S15>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant2'
 * '<S16>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant20'
 * '<S17>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant21'
 * '<S18>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant22'
 * '<S19>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant23'
 * '<S20>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant24'
 * '<S21>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant25'
 * '<S22>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant26'
 * '<S23>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant27'
 * '<S24>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant28'
 * '<S25>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant29'
 * '<S26>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant3'
 * '<S27>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant30'
 * '<S28>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant31'
 * '<S29>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant32'
 * '<S30>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant33'
 * '<S31>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant34'
 * '<S32>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant35'
 * '<S33>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant36'
 * '<S34>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant37'
 * '<S35>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant38'
 * '<S36>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant4'
 * '<S37>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant5'
 * '<S38>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant6'
 * '<S39>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant7'
 * '<S40>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant8'
 * '<S41>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/CompareToConstant9'
 * '<S42>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys'
 * '<S43>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys'
 * '<S44>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ReactionSys'
 * '<S45>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_BMSErrorCheckSys'
 * '<S46>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys'
 * '<S47>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys'
 * '<S48>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys'
 * '<S49>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys'
 * '<S50>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_MCUErrorCheckSys'
 * '<S51>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys'
 * '<S52>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_TCUErrorCheckSys'
 * '<S53>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_BMSErrorCheckSys/ATOM_TimeCnt'
 * '<S54>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_BMSErrorCheckSys/ErrDlyCfm'
 * '<S55>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_BMSErrorCheckSys/ErrMgmt_BMSErrorLevelSel'
 * '<S56>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_BMSErrorCheckSys/ErrDlyCfm/DetectChange1'
 * '<S57>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/ACUCrashEnable'
 * '<S58>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/CompareToConstant'
 * '<S59>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/CompareToConstant1'
 * '<S60>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/CompareToConstant2'
 * '<S61>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/CompareToConstant3'
 * '<S62>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/CompareToConstant4'
 * '<S63>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/ErrMgmt_CrashErrorLevelSel'
 * '<S64>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/ACUCrashEnable/ATOM_TimeCnt'
 * '<S65>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/ACUCrashEnable/ErrDlyCfm'
 * '<S66>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_CrashErrorCheckSys/ACUCrashEnable/ErrDlyCfm/DetectChange1'
 * '<S67>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/ATOM_TimeCnt'
 * '<S68>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/ATOM_U32TimeCnt'
 * '<S69>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/CompareToConstant'
 * '<S70>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/CompareToConstant1'
 * '<S71>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/ErrDlyCfm'
 * '<S72>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/ErrMgmt_DCDCErrorLevelSel'
 * '<S73>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_DCDCErrorCheckSys/ErrDlyCfm/DetectChange1'
 * '<S74>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/CompareToConstant1'
 * '<S75>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/CompareToConstant2'
 * '<S76>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/CompareToConstant3'
 * '<S77>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/CompareToConstant4'
 * '<S78>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/CompareToConstant5'
 * '<S79>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_HVILErrorCheckSys/ErrMgmt_HVILErrorLevelSel'
 * '<S80>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/BMSInslaErrLvlCfm'
 * '<S81>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/ErrMgmt_InslaErrorLevelSel'
 * '<S82>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm'
 * '<S83>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/BMSInslaErrLvlCfm/ATOM_TimeCnt'
 * '<S84>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/BMSInslaErrLvlCfm/ErrDlyCfm'
 * '<S85>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/BMSInslaErrLvlCfm/ErrDlyCfm/DetectChange1'
 * '<S86>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm/CompareToConstant1'
 * '<S87>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm/CompareToConstant2'
 * '<S88>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm/CompareToConstant3'
 * '<S89>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm/CompareToConstant4'
 * '<S90>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_InslaErrorCheckSys/Insla_HvstCfm/CompareToConstant5'
 * '<S91>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_MCUErrorCheckSys/ATOM_TimeCnt'
 * '<S92>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_MCUErrorCheckSys/ErrDlyCfm'
 * '<S93>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_MCUErrorCheckSys/ErrMgmt_MCUErrorLevelSel'
 * '<S94>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_MCUErrorCheckSys/ErrDlyCfm/DetectChange1'
 * '<S95>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/ATOM_TimeCnt'
 * '<S96>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/ATOM_U32TimeCnt'
 * '<S97>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/CompareToConstant'
 * '<S98>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/CompareToConstant1'
 * '<S99>'  : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/ErrDlyCfm'
 * '<S100>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/ErrMgmt_OBCErrorLevelSel'
 * '<S101>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_OBCErrorCheckSys/ErrDlyCfm/DetectChange1'
 * '<S102>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_TCUErrorCheckSys/ATOM_TimeCnt'
 * '<S103>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_TCUErrorCheckSys/ErrDlyCfm'
 * '<S104>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_TCUErrorCheckSys/ErrMgmt_TCUErrorLevelSel'
 * '<S105>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ECUErrCheckSys/ErrMgmt_TCUErrorCheckSys/ErrDlyCfm/DetectChange1'
 * '<S106>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/BMSFault'
 * '<S107>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/DCDCFault'
 * '<S108>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/LimpHome'
 * '<S109>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/MCUFault'
 * '<S110>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail'
 * '<S111>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/BMSFault/CompareToConstant'
 * '<S112>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/BMSFault/CompareToConstant1'
 * '<S113>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/BMSFault/CompareToConstant2'
 * '<S114>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/DCDCFault/CompareToConstant'
 * '<S115>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/DCDCFault/CompareToConstant1'
 * '<S116>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/LimpHome/CompareToConstant'
 * '<S117>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/LimpHome/CompareToConstant1'
 * '<S118>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/MCUFault/CompareToConstant'
 * '<S119>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/MCUFault/CompareToConstant1'
 * '<S120>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/MCUFault/CompareToConstant2'
 * '<S121>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant'
 * '<S122>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant1'
 * '<S123>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant2'
 * '<S124>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant3'
 * '<S125>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant4'
 * '<S126>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant5'
 * '<S127>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ErrLightCheckSys/SysFail/CompareToConstant6'
 * '<S128>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ReactionSys/ATOM_TimeCnt'
 * '<S129>' : 'CtAp_FltReactn/R_FltReactn_Cyclic_10ms_sys/ErrMgmt_ReactionSys/ErrMgmt_ReactionSel'
 */

/*-
 * Requirements for '<Root>': CtAp_FltReactn

 *
 * Inherited requirements for '<Root>/R_FltReactn_Cyclic_10ms_sys':
 *  1. VCU_SW_Requirements_Specification.slreqx:116107
 *
 * Inherited requirements for '<Root>/R_FltReactn_Init':
 *  1. VCU_SW_Requirements_Specification.slreqx:116107
 *
 * Inherited requirements for '<S2>/ErrMgmt_ECUErrCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:752
 *  2. VCU_SW_Requirements_Specification.slreqx:116174
 *
 * Inherited requirements for '<S2>/ErrMgmt_ReactionSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:755
 *  2. VCU_SW_Requirements_Specification.slreqx:756
 *  3. VCU_SW_Requirements_Specification.slreqx:757
 *  4. VCU_SW_Requirements_Specification.slreqx:758
 *  5. VCU_SW_Requirements_Specification.slreqx:759
 *  6. VCU_SW_Requirements_Specification.slreqx:760
 *  7. VCU_SW_Requirements_Specification.slreqx:761
 *  8. VCU_SW_Requirements_Specification.slreqx:762
 *  9. VCU_SW_Requirements_Specification.slreqx:763
 *  10. VCU_SW_Requirements_Specification.slreqx:764
 *  11. VCU_SW_Requirements_Specification.slreqx:765
 *  12. VCU_SW_Requirements_Specification.slreqx:766
 *  13. VCU_SW_Requirements_Specification.slreqx:767
 *  14. VCU_SW_Requirements_Specification.slreqx:6308
 *  15. VCU_SW_Requirements_Specification.slreqx:769
 *  16. VCU_SW_Requirements_Specification.slreqx:770
 *
 * Inherited requirements for '<S42>/ErrMgmt_BMSErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:710
 *  2. VCU_SW_Requirements_Specification.slreqx:705
 *  3. VCU_SW_Requirements_Specification.slreqx:706
 *  4. VCU_SW_Requirements_Specification.slreqx:707
 *  5. VCU_SW_Requirements_Specification.slreqx:708
 *  6. VCU_SW_Requirements_Specification.slreqx:709
 *  7. VCU_SW_Requirements_Specification.slreqx:710
 *  8. VCU_SW_Requirements_Specification.slreqx:116107
 *  9. VCU_SW_Requirements_Specification.slreqx:116113
 *
 * Inherited requirements for '<S42>/ErrMgmt_CrashErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:744
 *  2. VCU_SW_Requirements_Specification.slreqx:745
 *  3. VCU_SW_Requirements_Specification.slreqx:746
 *  4. VCU_SW_Requirements_Specification.slreqx:116161
 *  5. VCU_SW_Requirements_Specification.slreqx:116164
 *
 * Inherited requirements for '<S42>/ErrMgmt_DCDCErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:717
 *  2. VCU_SW_Requirements_Specification.slreqx:718
 *  3. VCU_SW_Requirements_Specification.slreqx:719
 *  4. VCU_SW_Requirements_Specification.slreqx:11820
 *  5. VCU_SW_Requirements_Specification.slreqx:720
 *  6. VCU_SW_Requirements_Specification.slreqx:721
 *  7. VCU_SW_Requirements_Specification.slreqx:722
 *  8. VCU_SW_Requirements_Specification.slreqx:116123
 *  9. VCU_SW_Requirements_Specification.slreqx:116130
 *
 * Inherited requirements for '<S42>/ErrMgmt_HVILErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:747
 *  2. VCU_SW_Requirements_Specification.slreqx:748
 *  3. VCU_SW_Requirements_Specification.slreqx:749
 *  4. VCU_SW_Requirements_Specification.slreqx:750
 *  5. VCU_SW_Requirements_Specification.slreqx:751
 *  6. VCU_SW_Requirements_Specification.slreqx:116166
 *  7. VCU_SW_Requirements_Specification.slreqx:116171
 *
 * Inherited requirements for '<S42>/ErrMgmt_InslaErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:734
 *  2. VCU_SW_Requirements_Specification.slreqx:735
 *  3. VCU_SW_Requirements_Specification.slreqx:736
 *  4. VCU_SW_Requirements_Specification.slreqx:737
 *  5. VCU_SW_Requirements_Specification.slreqx:738
 *  6. VCU_SW_Requirements_Specification.slreqx:739
 *  7. VCU_SW_Requirements_Specification.slreqx:740
 *  8. VCU_SW_Requirements_Specification.slreqx:741
 *  9. VCU_SW_Requirements_Specification.slreqx:742
 *  10. VCU_SW_Requirements_Specification.slreqx:743
 *  11. VCU_SW_Requirements_Specification.slreqx:116148
 *  12. VCU_SW_Requirements_Specification.slreqx:116154
 *  13. VCU_SW_Requirements_Specification.slreqx:116159
 *
 * Inherited requirements for '<S42>/ErrMgmt_MCUErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:723
 *  2. VCU_SW_Requirements_Specification.slreqx:724
 *  3. VCU_SW_Requirements_Specification.slreqx:725
 *  4. VCU_SW_Requirements_Specification.slreqx:726
 *  5. VCU_SW_Requirements_Specification.slreqx:727
 *  6. VCU_SW_Requirements_Specification.slreqx:728
 *  7. VCU_SW_Requirements_Specification.slreqx:116132
 *  8. VCU_SW_Requirements_Specification.slreqx:116138
 *
 * Inherited requirements for '<S42>/ErrMgmt_OBCErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:711
 *  2. VCU_SW_Requirements_Specification.slreqx:712
 *  3. VCU_SW_Requirements_Specification.slreqx:713
 *  4. VCU_SW_Requirements_Specification.slreqx:714
 *  5. VCU_SW_Requirements_Specification.slreqx:715
 *  6. VCU_SW_Requirements_Specification.slreqx:716
 *  7. VCU_SW_Requirements_Specification.slreqx:116115
 *  8. VCU_SW_Requirements_Specification.slreqx:116121
 *
 * Inherited requirements for '<S42>/ErrMgmt_TCUErrorCheckSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:729
 *  2. VCU_SW_Requirements_Specification.slreqx:730
 *  3. VCU_SW_Requirements_Specification.slreqx:731
 *  4. VCU_SW_Requirements_Specification.slreqx:732
 *  5. VCU_SW_Requirements_Specification.slreqx:733
 *  6. VCU_SW_Requirements_Specification.slreqx:116140
 *  7. VCU_SW_Requirements_Specification.slreqx:116145
 *
 * Inherited requirements for '<S43>/BMSFault':
 *  1. VCU_SW_Requirements_Specification.slreqx:776
 *  2. VCU_SW_Requirements_Specification.slreqx:777
 *  3. VCU_SW_Requirements_Specification.slreqx:778
 *
 * Inherited requirements for '<S43>/DCDCFault':
 *  1. VCU_SW_Requirements_Specification.slreqx:779
 *
 * Inherited requirements for '<S43>/LimpHome':
 *  1. VCU_SW_Requirements_Specification.slreqx:764
 *
 * Inherited requirements for '<S43>/MCUFault':
 *  1. VCU_SW_Requirements_Specification.slreqx:780
 *  2. VCU_SW_Requirements_Specification.slreqx:781
 *  3. VCU_SW_Requirements_Specification.slreqx:782
 *
 * Inherited requirements for '<S43>/SysFail':
 *  1. VCU_SW_Requirements_Specification.slreqx:772
 *  2. VCU_SW_Requirements_Specification.slreqx:773
 *  3. VCU_SW_Requirements_Specification.slreqx:774
 *  4. VCU_SW_Requirements_Specification.slreqx:775
 *
 * Inherited requirements for '<S44>/ATOM_TimeCnt':
 *  1. VCU_SW_Requirements_Specification.slreqx:771
 *
 * Inherited requirements for '<S44>/ErrMgmt_ReactionSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:753
 *  2. VCU_SW_Requirements_Specification.slreqx:754
 *  3. VCU_SW_Requirements_Specification.slreqx:755
 *  4. VCU_SW_Requirements_Specification.slreqx:756
 *  5. VCU_SW_Requirements_Specification.slreqx:757
 *  6. VCU_SW_Requirements_Specification.slreqx:758
 *  7. VCU_SW_Requirements_Specification.slreqx:759
 *  8. VCU_SW_Requirements_Specification.slreqx:760
 *  9. VCU_SW_Requirements_Specification.slreqx:761
 *  10. VCU_SW_Requirements_Specification.slreqx:762
 *  11. VCU_SW_Requirements_Specification.slreqx:763
 *  12. VCU_SW_Requirements_Specification.slreqx:764
 *  13. VCU_SW_Requirements_Specification.slreqx:765
 *  14. VCU_SW_Requirements_Specification.slreqx:766
 *  15. VCU_SW_Requirements_Specification.slreqx:767
 *  16. VCU_SW_Requirements_Specification.slreqx:6308
 *  17. VCU_SW_Requirements_Specification.slreqx:769
 *  18. VCU_SW_Requirements_Specification.slreqx:770
 *  19. VCU_SW_Requirements_Specification.slreqx:771
 *
 * Inherited requirements for '<S45>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116107
 *
 * Inherited requirements for '<S45>/ErrMgmt_BMSErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116107
 *  2. VCU_SW_Requirements_Specification.slreqx:705
 *  3. VCU_SW_Requirements_Specification.slreqx:706
 *  4. VCU_SW_Requirements_Specification.slreqx:707
 *  5. VCU_SW_Requirements_Specification.slreqx:708
 *  6. VCU_SW_Requirements_Specification.slreqx:709
 *  7. VCU_SW_Requirements_Specification.slreqx:116113
 *  8. VCU_SW_Requirements_Specification.slreqx:710
 *
 * Inherited requirements for '<S46>/ACUCrashEnable':
 *  1. VCU_SW_Requirements_Specification.slreqx:744
 *  2. VCU_SW_Requirements_Specification.slreqx:745
 *  3. VCU_SW_Requirements_Specification.slreqx:746
 *
 * Inherited requirements for '<S46>/ErrMgmt_CrashErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116161
 *  2. VCU_SW_Requirements_Specification.slreqx:744
 *  3. VCU_SW_Requirements_Specification.slreqx:745
 *  4. VCU_SW_Requirements_Specification.slreqx:116164
 *  5. VCU_SW_Requirements_Specification.slreqx:746
 *
 * Inherited requirements for '<S47>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116123
 *
 * Inherited requirements for '<S47>/ErrMgmt_DCDCErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116123
 *  2. VCU_SW_Requirements_Specification.slreqx:717
 *  3. VCU_SW_Requirements_Specification.slreqx:718
 *  4. VCU_SW_Requirements_Specification.slreqx:719
 *  5. VCU_SW_Requirements_Specification.slreqx:11820
 *  6. VCU_SW_Requirements_Specification.slreqx:720
 *  7. VCU_SW_Requirements_Specification.slreqx:721
 *  8. VCU_SW_Requirements_Specification.slreqx:116130
 *  9. VCU_SW_Requirements_Specification.slreqx:722
 *
 * Inherited requirements for '<S48>/ErrMgmt_HVILErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116166
 *  2. VCU_SW_Requirements_Specification.slreqx:747
 *  3. VCU_SW_Requirements_Specification.slreqx:748
 *  4. VCU_SW_Requirements_Specification.slreqx:749
 *  5. VCU_SW_Requirements_Specification.slreqx:750
 *  6. VCU_SW_Requirements_Specification.slreqx:116171
 *  7. VCU_SW_Requirements_Specification.slreqx:751
 *
 * Inherited requirements for '<S49>/BMSInslaErrLvlCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:734
 *  2. VCU_SW_Requirements_Specification.slreqx:735
 *  3. VCU_SW_Requirements_Specification.slreqx:736
 *  4. VCU_SW_Requirements_Specification.slreqx:737
 *  5. VCU_SW_Requirements_Specification.slreqx:738
 *  6. VCU_SW_Requirements_Specification.slreqx:739
 *  7. VCU_SW_Requirements_Specification.slreqx:740
 *  8. VCU_SW_Requirements_Specification.slreqx:741
 *  9. VCU_SW_Requirements_Specification.slreqx:742
 *  10. VCU_SW_Requirements_Specification.slreqx:743
 *
 * Inherited requirements for '<S49>/ErrMgmt_InslaErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116148
 *  2. VCU_SW_Requirements_Specification.slreqx:734
 *  3. VCU_SW_Requirements_Specification.slreqx:735
 *  4. VCU_SW_Requirements_Specification.slreqx:736
 *  5. VCU_SW_Requirements_Specification.slreqx:737
 *  6. VCU_SW_Requirements_Specification.slreqx:738
 *  7. VCU_SW_Requirements_Specification.slreqx:116154
 *  8. VCU_SW_Requirements_Specification.slreqx:739
 *  9. VCU_SW_Requirements_Specification.slreqx:740
 *  10. VCU_SW_Requirements_Specification.slreqx:741
 *  11. VCU_SW_Requirements_Specification.slreqx:742
 *  12. VCU_SW_Requirements_Specification.slreqx:116159
 *  13. VCU_SW_Requirements_Specification.slreqx:743
 *
 * Inherited requirements for '<S50>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116132
 *
 * Inherited requirements for '<S50>/ErrMgmt_MCUErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116132
 *  2. VCU_SW_Requirements_Specification.slreqx:723
 *  3. VCU_SW_Requirements_Specification.slreqx:724
 *  4. VCU_SW_Requirements_Specification.slreqx:725
 *  5. VCU_SW_Requirements_Specification.slreqx:726
 *  6. VCU_SW_Requirements_Specification.slreqx:727
 *  7. VCU_SW_Requirements_Specification.slreqx:116138
 *  8. VCU_SW_Requirements_Specification.slreqx:728
 *
 * Inherited requirements for '<S51>/ATOM_U32TimeCnt':
 *  1. VCU_SW_Requirements_Specification.slreqx:714
 *
 * Inherited requirements for '<S51>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116115
 *
 * Inherited requirements for '<S51>/ErrMgmt_OBCErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116115
 *  2. VCU_SW_Requirements_Specification.slreqx:711
 *  3. VCU_SW_Requirements_Specification.slreqx:712
 *  4. VCU_SW_Requirements_Specification.slreqx:713
 *  5. VCU_SW_Requirements_Specification.slreqx:714
 *  6. VCU_SW_Requirements_Specification.slreqx:715
 *  7. VCU_SW_Requirements_Specification.slreqx:116121
 *  8. VCU_SW_Requirements_Specification.slreqx:716
 *
 * Inherited requirements for '<S52>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116140
 *
 * Inherited requirements for '<S52>/ErrMgmt_TCUErrorLevelSel':
 *  1. VCU_SW_Requirements_Specification.slreqx:116140
 *  2. VCU_SW_Requirements_Specification.slreqx:729
 *  3. VCU_SW_Requirements_Specification.slreqx:730
 *  4. VCU_SW_Requirements_Specification.slreqx:731
 *  5. VCU_SW_Requirements_Specification.slreqx:732
 *  6. VCU_SW_Requirements_Specification.slreqx:116145
 *  7. VCU_SW_Requirements_Specification.slreqx:733
 *
 * Inherited requirements for '<S57>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116161
 *
 * Inherited requirements for '<S80>/ErrDlyCfm':
 *  1. VCU_SW_Requirements_Specification.slreqx:116107

 */
#endif                                 /* RTW_HEADER_CtAp_FltReactn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
