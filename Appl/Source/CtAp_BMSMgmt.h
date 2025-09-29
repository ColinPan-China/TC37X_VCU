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
 *  Filename:           CtAp_BMSMgmt.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_BMSMgmt
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 09:59:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:26:58 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:26:09 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_BMSMgmt_h_
#define RTW_HEADER_CtAp_BMSMgmt_h_
#ifndef CtAp_BMSMgmt_COMMON_INCLUDES_
#define CtAp_BMSMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_BMSMgmt.h"
#endif                                 /* CtAp_BMSMgmt_COMMON_INCLUDES_ */

#include "CtAp_BMSMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_BMSMgmt_Glb.h"
#include "VCU_TempGlobal.h"
#include "CtAp_BMSMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define BMSMgmt_AC_Charge              4U                        /* Referenced by:
                                                                  * '<S143>/Constant'
                                                                  * '<S38>/Constant'
                                                                  */
#define BMSMgmt_AC_Plug_Detected       2U                        /* Referenced by: '<S70>/Constant' */
#define BMSMgmt_Active                 true                      /* Referenced by:
                                                                  * '<S11>/Marco_Active'
                                                                  * '<S13>/Marco_Active'
                                                                  * '<S14>/Marco_Active'
                                                                  * '<S15>/Marco_Active'
                                                                  * '<S17>/Marco_Active'
                                                                  * '<S18>/Marco_Active'
                                                                  * '<S19>/Marco_Active'
                                                                  * '<S20>/Marco_Active'
                                                                  * '<S21>/Marco_Active'
                                                                  * '<S22>/Marco_Active'
                                                                  * '<S184>/Marco_Active'
                                                                  * '<S185>/Marco_Active'
                                                                  */
#define BMSMgmt_BMSActiveCmpl          1U                        /* Referenced by: '<S12>/Marco_BMSActiveCmpl' */
#define BMSMgmt_BMSActiveFail          3U                        /* Referenced by: '<S12>/Marco_BMSActiveFail' */
#define BMSMgmt_BMSInactiveFail        4U                        /* Referenced by: '<S12>/Marco_BMSInactiveFail' */
#define BMSMgmt_BMSInctiveCmpl         2U                        /* Referenced by: '<S12>/Marco_BMSInctiveCmpl' */
#define BMSMgmt_BMSWrkModInit          0U                        /* Referenced by: '<S12>/Marco_BMSWrkModInit' */
#define BMSMgmt_Buck                   2U                        /* Referenced by: '<S218>/Constant' */
#define BMSMgmt_ClearValue_Single      0.0F                      /* Referenced by:
                                                                  * '<S185>/BMSMgmt_ClearValue_Single'
                                                                  * '<S185>/BMSMgmt_ClearValue_Single1'
                                                                  */
#define BMSMgmt_Closed                 1U                        /* Referenced by:
                                                                  * '<S88>/Constant'
                                                                  * '<S89>/Constant'
                                                                  * '<S116>/Constant'
                                                                  * '<S117>/Constant'
                                                                  * '<S64>/Constant'
                                                                  * '<S65>/Constant'
                                                                  * '<S74>/Constant'
                                                                  * '<S223>/Constant'
                                                                  */
#define BMSMgmt_DCDCDisableCmpl        1U                        /* Referenced by: '<S236>/Constant' */
#define BMSMgmt_DCDCDisableFailed      2U                        /* Referenced by: '<S237>/Constant' */
#define BMSMgmt_DC_Charge              3U                        /* Referenced by:
                                                                  * '<S144>/Constant'
                                                                  * '<S39>/Constant'
                                                                  */
#define BMSMgmt_DC_Plug_Detected       3U                        /* Referenced by: '<S71>/Constant' */
#define BMSMgmt_DC_preheating          11U                       /* Referenced by: '<S61>/Constant' */
#define BMSMgmt_DisCharge              5U                        /* Referenced by:
                                                                  * '<S145>/Constant'
                                                                  * '<S40>/Constant'
                                                                  */
#define BMSMgmt_DrvReady               3U                        /* Referenced by:
                                                                  * '<S152>/Constant'
                                                                  * '<S44>/Constant'
                                                                  */
#define BMSMgmt_Falut_two              2U                        /* Referenced by:
                                                                  * '<S182>/Constant'
                                                                  * '<S183>/Constant'
                                                                  */
#define BMSMgmt_Gear_N                 2U                        /* Referenced by: '<S235>/Constant' */
#define BMSMgmt_Gear_P                 1U                        /* Referenced by: '<S234>/Constant' */
#define BMSMgmt_HvMgmt_RunStep         20U                       /* Referenced by:
                                                                  * '<S8>/HvMgmt_RunStep'
                                                                  * '<S8>/Marco_HvMgmt_RunStep1'
                                                                  * '<S8>/Marco_HvMgmt_RunStep2'
                                                                  * '<S8>/Marco_HvMgmt_RunStep3'
                                                                  * '<S8>/Marco_HvMgmt_RunStep4'
                                                                  * '<S8>/Marco_HvMgmt_RunStep5'
                                                                  * '<S9>/HvMgmt_RunStep'
                                                                  * '<S9>/HvMgmt_RunStep1'
                                                                  * '<S9>/HvMgmt_RunStep2'
                                                                  * '<S9>/Marco_HvMgmt_RunStep1'
                                                                  * '<S9>/Marco_HvMgmt_RunStep2'
                                                                  * '<S9>/Marco_HvMgmt_RunStep3'
                                                                  * '<S11>/Marco_HvMgmt_RunStep'
                                                                  * '<S11>/Marco_HvMgmt_RunStep1'
                                                                  * '<S12>/HvMgmt_RunStep'
                                                                  * '<S12>/HvMgmt_RunStep1'
                                                                  * '<S12>/HvMgmt_RunStep2'
                                                                  * '<S13>/Marco_HvMgmt_RunStep'
                                                                  * '<S17>/HvMgmt_RunStep'
                                                                  * '<S18>/HvMgmt_RunStep'
                                                                  * '<S18>/HvMgmt_RunStep1'
                                                                  * '<S19>/HvMgmt_RunStep'
                                                                  * '<S19>/HvMgmt_RunStep1'
                                                                  * '<S20>/HvMgmt_RunStep'
                                                                  * '<S20>/HvMgmt_RunStep1'
                                                                  * '<S21>/HvMgmt_RunStep1'
                                                                  * '<S21>/Marco_HvMgmt_RunStep2'
                                                                  * '<S22>/HvMgmt_RunStep'
                                                                  * '<S22>/HvMgmt_RunStep1'
                                                                  * '<S184>/HvMgmt_RunStep'
                                                                  * '<S184>/HvMgmt_RunStep1'
                                                                  */
#define BMSMgmt_HvReady                2U                        /* Referenced by:
                                                                  * '<S150>/Constant'
                                                                  * '<S245>/Constant'
                                                                  * '<S43>/Constant'
                                                                  */
#define BMSMgmt_HvRunStep_Single       20.0F                     /* Referenced by:
                                                                  * '<S185>/HvRunStep_Single'
                                                                  * '<S185>/HvRunStep_Single1'
                                                                  */
#define BMSMgmt_INIT                   0U                        /* Referenced by:
                                                                  * '<S8>/Marco_INIT'
                                                                  * '<S9>/Marco_INIT'
                                                                  * '<S104>/Constant'
                                                                  * '<S137>/Constant'
                                                                  * '<S175>/Constant'
                                                                  * '<S180>/Constant'
                                                                  * '<S195>/Constant'
                                                                  * '<S198>/Constant'
                                                                  * '<S230>/Constant'
                                                                  * '<S232>/Constant'
                                                                  * '<S242>/Constant'
                                                                  */
#define BMSMgmt_Inactive               false                     /* Referenced by:
                                                                  * '<S11>/Marco_Inactive'
                                                                  * '<S12>/Marco_Inactive'
                                                                  * '<S13>/Marco_Inactive'
                                                                  * '<S14>/Marco_Inactive'
                                                                  * '<S15>/Marco_Inactive'
                                                                  * '<S24>/Constant'
                                                                  * '<S29>/Constant'
                                                                  * '<S41>/Constant'
                                                                  * '<S54>/Constant'
                                                                  * '<S66>/Constant'
                                                                  * '<S76>/Constant'
                                                                  */
#define BMSMgmt_NegRlyClsCmpl          4U                        /* Referenced by: '<S8>/Marco_NegRlyClsCmpl' */
#define BMSMgmt_NegRlyClsFail          3U                        /* Referenced by: '<S8>/Marco_NegRlyClsFail' */
#define BMSMgmt_NegRlyOpenCmpl         2U                        /* Referenced by: '<S8>/Marco_NegRlyOpenCmpl' */
#define BMSMgmt_NegRlyOpenFail         1U                        /* Referenced by: '<S8>/Marco_NegRlyOpenFail' */
#define BMSMgmt_Off_Plug               1U                        /* Referenced by:
                                                                  * '<S62>/Constant'
                                                                  * '<S72>/Constant'
                                                                  */
#define BMSMgmt_Opened                 2U                        /* Referenced by:
                                                                  * '<S86>/Constant'
                                                                  * '<S87>/Constant'
                                                                  * '<S112>/Constant'
                                                                  * '<S113>/Constant'
                                                                  * '<S114>/Constant'
                                                                  * '<S115>/Constant'
                                                                  * '<S75>/Constant'
                                                                  */
#define BMSMgmt_PosRlyClsCmpl          4U                        /* Referenced by: '<S9>/Marco_PosRlyClsCmpl' */
#define BMSMgmt_PosRlyClsFail          3U                        /* Referenced by: '<S9>/Marco_PosRlyClsFail' */
#define BMSMgmt_PosRlyOpenCmpl         2U                        /* Referenced by: '<S9>/Marco_PosRlyOpenCmpl1' */
#define BMSMgmt_PosRlyOpenFail         1U                        /* Referenced by: '<S9>/Marco_PosRlyOpenFail' */
#define BMSMgmt_PowerMode_Off          1U                        /* Referenced by: '<S222>/Constant' */
#define BMSMgmt_PowerMode_On           2U                        /* Referenced by:
                                                                  * '<S178>/Constant'
                                                                  * '<S205>/Constant'
                                                                  */
#define BMSMgmt_PreHeating             4U                        /* Referenced by:
                                                                  * '<S154>/Constant'
                                                                  * '<S246>/Constant'
                                                                  * '<S46>/Constant'
                                                                  * '<S224>/Constant'
                                                                  */
#define BMSMgmt_PreheatPosRlyOpenCmpl  6U                        /* Referenced by: '<S9>/Marco_PreheatPosRlyOpenCmpl' */
#define BMSMgmt_PreheatPosRlyOpenFail  5U                        /* Referenced by: '<S9>/Marco_PreheatPosRlyOpenFail' */
#define BMSMgmt_ReqClose               2U                        /* Referenced by: '<S63>/Constant' */
#define BMSMgmt_ReqOpen                1U                        /* Referenced by:
                                                                  * '<S90>/Constant'
                                                                  * '<S91>/Constant'
                                                                  * '<S92>/Constant'
                                                                  * '<S93>/Constant'
                                                                  * '<S118>/Constant'
                                                                  * '<S119>/Constant'
                                                                  * '<S120>/Constant'
                                                                  * '<S121>/Constant'
                                                                  * '<S122>/Constant'
                                                                  * '<S73>/Constant'
                                                                  */
#define BMSMgmt_Running                2U                        /* Referenced by:
                                                                  * '<S141>/Constant'
                                                                  * '<S142>/Constant'
                                                                  * '<S158>/Constant'
                                                                  * '<S28>/Constant'
                                                                  * '<S37>/Constant'
                                                                  */
#define BMSMgmt_SGWHvOn                1U                        /* Referenced by:
                                                                  * '<S206>/Constant'
                                                                  * '<S225>/Constant'
                                                                  */
#define BMSMgmt_SOCPectOne             1.0F                      /* Referenced by: '<S185>/pect_One' */
#define BMSMgmt_Sleep                  5U                        /* Referenced by:
                                                                  * '<S105>/Constant'
                                                                  * '<S138>/Constant'
                                                                  * '<S153>/Constant'
                                                                  * '<S176>/Constant'
                                                                  * '<S196>/Constant'
                                                                  * '<S231>/Constant'
                                                                  * '<S233>/Constant'
                                                                  * '<S243>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S45>/Constant'
                                                                  * '<S213>/Constant'
                                                                  */
#define BMSMgmt_Standby                1U                        /* Referenced by:
                                                                  * '<S151>/Constant'
                                                                  * '<S159>/Constant'
                                                                  * '<S160>/Constant'
                                                                  * '<S161>/Constant'
                                                                  * '<S181>/Constant'
                                                                  * '<S197>/Constant'
                                                                  * '<S199>/Constant'
                                                                  * '<S228>/Constant'
                                                                  * '<S229>/Constant'
                                                                  * '<S244>/Constant'
                                                                  * '<S247>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S52>/Constant'
                                                                  * '<S53>/Constant'
                                                                  */
#define BMSMgmt_TCUDiableCmpl          1U                        /* Referenced by: '<S238>/Constant' */
#define BMSMgmt_TCUDisableFailed       2U                        /* Referenced by: '<S239>/Constant' */
#define BMSMgmt_U8Active               1U                        /* Referenced by:
                                                                  * '<S16>/Marco_Active'
                                                                  * '<S94>/Constant'
                                                                  * '<S95>/Constant'
                                                                  * '<S123>/Constant'
                                                                  * '<S126>/Constant'
                                                                  * '<S127>/Constant'
                                                                  * '<S128>/Constant'
                                                                  * '<S146>/Constant'
                                                                  * '<S147>/Constant'
                                                                  * '<S162>/Constant'
                                                                  * '<S167>/Constant'
                                                                  * '<S184>/Marco_U8Active'
                                                                  * '<S30>/Constant'
                                                                  * '<S42>/Constant'
                                                                  * '<S209>/Constant'
                                                                  */
#define BMSMgmt_U8AppNMTwo             2U                        /* Referenced by: '<S220>/Constant' */
#define BMSMgmt_U8Inactive             0U                        /* Referenced by:
                                                                  * '<S16>/Marco_Inactive'
                                                                  * '<S96>/Constant'
                                                                  * '<S97>/Constant'
                                                                  * '<S98>/Constant'
                                                                  * '<S124>/Constant'
                                                                  * '<S125>/Constant'
                                                                  * '<S129>/Constant'
                                                                  * '<S163>/Constant'
                                                                  * '<S164>/Constant'
                                                                  * '<S165>/Constant'
                                                                  * '<S166>/Constant'
                                                                  * '<S168>/Constant'
                                                                  * '<S184>/Marco_U8Inactive'
                                                                  * '<S55>/Constant'
                                                                  * '<S208>/Constant'
                                                                  */
#define BMSMgmt_U8Max                  255U                      /* Referenced by: '<S184>/Marco_U8Max' */
#define HvMgmt_BMSBattEnableSOCTmr     650U                      /* Referenced by: '<S184>/HvMgmt_BMSBattEnableSOCTmr' */
#define HvMgmt_BMSHvFaultCheckTim      100U                      /* Referenced by:
                                                                  * '<S11>/HvMgmt_BMSHvFaultCheckTim'
                                                                  * '<S19>/HvMgmt_BMSHvFaultCheckTim'
                                                                  */
#define HvMgmt_BMSHvOnCnt              1U                        /* Referenced by: '<S207>/Constant' */
#define HvMgmt_BMSRlyOpenDTCResetTim   1000U                     /* Referenced by: '<S20>/HvMgmt_BMSRlyOpenDTCResetTim' */
#define HvMgmt_BSBattReqChrgSOCTmr     500U                      /* Referenced by: '<S184>/HvMgmt_BSBattReqChrgSOCTmr' */
#define HvMgmt_DTCEnaSetTim            1500U                     /* Referenced by:
                                                                  * '<S17>/HvMgmt_DTCEnaSetTim'
                                                                  * '<S18>/HvMgmt_DTCEnaSetTim'
                                                                  * '<S19>/HvMgmt_DTCEnaSetTim'
                                                                  * '<S20>/HvMgmt_DTCEnaSetTim'
                                                                  * '<S21>/HvMgmt_DTCEnaSetTim'
                                                                  * '<S22>/HvMgmt_DTCEnaSetTim'
                                                                  */
#define HvMgmt_PreheatPosRlyClsDTCSetTim 6000U                   /* Referenced by:
                                                                  * '<S8>/HvMgmt_PreheatPosRlyClsDTCSetTim'
                                                                  * '<S8>/HvMgmt_PreheatPosRlyClsDTCSetTim1'
                                                                  * '<S9>/HvMgmt_PreheatPosRlyClsDTCSetTim'
                                                                  * '<S9>/HvMgmt_PreheatPosRlyClsDTCSetTim1'
                                                                  * '<S21>/HvMgmt_PreheatPosRlyClsDTCSetTim1'
                                                                  */
#define HvMgmt_PreheatPosRlyOpenDTCSetTim 600U                   /* Referenced by:
                                                                  * '<S8>/HvMgmt_PreheatPosRlyOpenDTCSetTim'
                                                                  * '<S8>/HvMgmt_PreheatPosRlyOpenDTCSetTim1'
                                                                  * '<S9>/HvMgmt_PreheatPosRlyOpenDTCSetTim'
                                                                  * '<S9>/HvMgmt_PreheatPosRlyOpenDTCSetTim1'
                                                                  * '<S22>/HvMgmt_PreheatPosRlyOpenDTCSetTim'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S17>/ATOM_TimeCnt3' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S23>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_BM_T;

/* PublicStructure Variables for Internal Data, for system '<S18>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S35>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_BMSMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<S19>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S49>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_BMSMg_holk_T;

/* PublicStructure Variables for Internal Data, for system '<S20>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S58>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_lr4z;      /* '<S57>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S56>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S22>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S79>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S78>/Delay1' */
} ARID_DEF_NoDT_CtAp_BMSMg_b2ky_T;

/* PublicStructure Variables for Internal Data, for system '<S185>/ATOM_OnDelay' */
typedef struct {
  real32_T UnitDelay_DSTATE;           /* '<S214>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_BM_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_OnDelay_CtAp_BM_T ARID_DEF_ATOM_OnDelay1;/* '<S185>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_BM_T ARID_DEF_ATOM_OnDelay;/* '<S185>/ATOM_OnDelay' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt2;/* '<S184>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1;/* '<S184>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt;/* '<S13>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt4;/* '<S12>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt2_mbvz;/* '<S12>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1_cl54;/* '<S12>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1_kkiq;/* '<S11>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt_cxar;/* '<S11>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt6;/* '<S9>/ATOM_TimeCnt6' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt5;/* '<S9>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt4_bhxx;/* '<S9>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt3;/* '<S9>/ATOM_TimeCnt3' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt2_pbm3;/* '<S9>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1_cv5h;/* '<S9>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt7;/* '<S8>/ATOM_TimeCnt7' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt6_fqdq;/* '<S8>/ATOM_TimeCnt6' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt5_g2ml;/* '<S8>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt4_g1sm;/* '<S8>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt2_merl;/* '<S8>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1_nz4o;/* '<S8>/ATOM_TimeCnt1' */
  ARID_DEF_NoDT_CtAp_BMSMg_b2ky_T ARID_DEF_NoDT;/* '<S22>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt6_ppxr;/* '<S22>/ATOM_TimeCnt6' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt5_llw0;/* '<S21>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt4_jwzv;/* '<S21>/ATOM_TimeCnt4' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle;/* '<S20>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt4_dhmr;/* '<S20>/ATOM_TimeCnt4' */
  ARID_DEF_NoDT_CtAp_BMSMg_holk_T ARID_DEF_NoDT_guug;/* '<S19>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt1_ldqo;/* '<S19>/ATOM_TimeCnt1' */
  ARID_DEF_NoDT_CtAp_BMSMgmt_T ARID_DEF_NoDT_dham;/* '<S18>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt2_dype;/* '<S18>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_BM_T ARID_DEF_ATOM_TimeCnt3_lxo5;/* '<S17>/ATOM_TimeCnt3' */
  dt_HvMgmt_BMSRlyClsDTC RTE_P_HvMgmt_BMSRlyClsDTC_Bus_t;
        /* '<Root>/RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus' */
  dt_HvMgmt_BMSRlyClsDTCOne RTE_P_HvMgmt_BMSRlyClsDTCOne_Bu;
  /* '<Root>/RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus' */
  dt_HvMgmt_BMSRlyClsDTCTwo RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bu;
  /* '<Root>/RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus' */
  dt_HvMgmt_BMSRlyOpenDTC RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_;
      /* '<Root>/RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus' */
  dt_HvMgmt_PreheatPosRlyClsDTC RTE_P_HvMgmt_PreheatPosRlyClsDT;
  /* '<Root>/RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus' */
  dt_HvMgmt_PreheatPosRlyOpenDTC RTE_P_HvMgmt_PreheatPosRlyOpenD;
  /* '<Root>/RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus' */
  real32_T Delay3_DSTATE;              /* '<S14>/Delay3' */
  uint8_T Switch1;                     /* '<S78>/Switch1' */
  uint8_T Switch8;                     /* '<S78>/Switch8' */
  uint8_T Switch1_knqc;                /* '<S68>/Switch1' */
  uint8_T Switch3;                     /* '<S68>/Switch3' */
  uint8_T Switch1_capj;                /* '<S56>/Switch1' */
  uint8_T Switch8_cp0x;                /* '<S56>/Switch8' */
  uint8_T Switch1_bcyu;                /* '<S26>/Switch1' */
  uint8_T Switch3_jy1y;                /* '<S26>/Switch3' */
  uint8_T Delay_DSTATE;                /* '<S4>/Delay' */
  uint8_T Delay_DSTATE_pldv;           /* '<S16>/Delay' */
  uint8_T Delay2_DSTATE;               /* '<S14>/Delay2' */
  uint8_T Delay_DSTATE_ltmh;           /* '<S184>/Delay' */
  uint8_T Delay_DSTATE_lvnm;           /* '<S12>/Delay' */
  uint8_T Delay1_DSTATE_jilv;          /* '<S11>/Delay1' */
  uint8_T Delay2_DSTATE_dpzs;          /* '<S11>/Delay2' */
  uint8_T Delay_DSTATE_ampo;           /* '<S9>/Delay' */
  uint8_T Delay_DSTATE_pogi;           /* '<S8>/Delay' */
  uint8_T Delay2_DSTATE_bf2l;          /* '<S19>/Delay2' */
  boolean_T Switch6;                   /* '<S78>/Switch6' */
  boolean_T Switch6_lkhq;              /* '<S68>/Switch6' */
  boolean_T Switch6_a4q1;              /* '<S56>/Switch6' */
  boolean_T Switch6_bm43;              /* '<S26>/Switch6' */
  boolean_T Delay_DSTATE_iyx5;         /* '<S15>/Delay' */
} ARID_DEF_CtAp_BMSMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"

extern ARID_DEF_CtAp_BMSMgmt_T CtAp_BMSMgmt_ARID_DEF;

#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_BMSMgmt'
 * '<S1>'   : 'CtAp_BMSMgmt/DocBlock'
 * '<S2>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Init'
 * '<S4>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function'
 * '<S5>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Input'
 * '<S6>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Output'
 * '<S7>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC'
 * '<S8>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts'
 * '<S9>'   : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts'
 * '<S10>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyCtrlReq'
 * '<S11>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt'
 * '<S12>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts'
 * '<S13>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt'
 * '<S14>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest'
 * '<S15>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn'
 * '<S16>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS'
 * '<S17>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTC'
 * '<S18>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne'
 * '<S19>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo'
 * '<S20>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC'
 * '<S21>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC'
 * '<S22>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC'
 * '<S23>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTC/ATOM_TimeCnt3'
 * '<S24>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTC/ComM_ErrResEPTCANBusOff_Flg_CP2'
 * '<S25>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTC/NoTiAndMonR'
 * '<S26>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTC/NoTiAndMonR/ErrorHandleSysU16'
 * '<S27>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/ATOM_TimeCnt2'
 * '<S28>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/ComM_BMSWrkMod_Enum_CP'
 * '<S29>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/ComM_ErrResEPTCANBusOff_Flg_CP'
 * '<S30>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/HvMgmt_ReqModBMS_Enum_CP'
 * '<S31>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/ModMgmt_HvSts_Enum_CP'
 * '<S32>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/ModMgmt_HvSts_Enum_CP4'
 * '<S33>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/NoDT'
 * '<S34>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/NoDT/ErrorHandleSysU16'
 * '<S35>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCOne/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S36>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ATOM_TimeCnt1'
 * '<S37>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ComM_BMSWrkMod_Enum_CP1'
 * '<S38>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ComM_BMSWrkMod_Enum_CP5'
 * '<S39>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ComM_BMSWrkMod_Enum_CP6'
 * '<S40>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ComM_BMSWrkMod_Enum_CP7'
 * '<S41>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ComM_ErrResEPTCANBusOff_Flg_CP1'
 * '<S42>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S43>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ModMgmt_HvSts_Enum_CP1'
 * '<S44>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ModMgmt_HvSts_Enum_CP2'
 * '<S45>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ModMgmt_HvSts_Enum_CP4'
 * '<S46>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/ModMgmt_HvSts_Enum_CP5'
 * '<S47>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/NoDT'
 * '<S48>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/NoDT/ErrorHandleSysU16'
 * '<S49>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyClsDTCTwo/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S50>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ATOM_TimeCnt4'
 * '<S51>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ATOM_U16ErrorHandle'
 * '<S52>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ComM_BMSWrkMod_Enum_CP2'
 * '<S53>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ComM_BMSWrkMod_Enum_CP8'
 * '<S54>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ComM_ErrResEPTCANBusOff_Flg_CP3'
 * '<S55>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S56>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S57>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S58>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_BMSRlyOpenDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S59>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ATOM_TimeCnt4'
 * '<S60>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ATOM_TimeCnt5'
 * '<S61>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S62>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S63>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ComM_BMSNegRlySts_Enum_CP1'
 * '<S64>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ComM_BMSNegRlySts_Enum_CP2'
 * '<S65>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ComM_BMSPosRlySts_Enum_CP2'
 * '<S66>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/ComM_ErrResEPTCANBusOff_Flg_CP4'
 * '<S67>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/NoTiAndMonR'
 * '<S68>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyClsDTC/NoTiAndMonR/ErrorHandleSysU16'
 * '<S69>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ATOM_TimeCnt6'
 * '<S70>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S71>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S72>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S73>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ComM_BMSNegRlySts_Enum_CP1'
 * '<S74>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ComM_BMSNegRlySts_Enum_CP3'
 * '<S75>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ComM_BMSPosRlySts_Enum_CP3'
 * '<S76>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/ComM_ErrResEPTCANBusOff_Flg_CP5'
 * '<S77>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/NoDT'
 * '<S78>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/NoDT/ErrorHandleSysU16'
 * '<S79>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSDTC/HvMgmt_PreheatPosRlyOpenDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S80>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt1'
 * '<S81>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt2'
 * '<S82>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt4'
 * '<S83>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt5'
 * '<S84>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt6'
 * '<S85>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ATOM_TimeCnt7'
 * '<S86>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ComM_BMSNegRlySts_Enum_CP1'
 * '<S87>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ComM_BMSNegRlySts_Enum_CP2'
 * '<S88>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ComM_BMSNegRlySts_Enum_CP4'
 * '<S89>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ComM_BMSNegRlySts_Enum_CP5'
 * '<S90>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP1'
 * '<S91>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP2'
 * '<S92>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP3'
 * '<S93>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP4'
 * '<S94>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_ReqModBMS_Enum_CP'
 * '<S95>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S96>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_ReqModBMS_Enum_CP2'
 * '<S97>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_ReqModBMS_Enum_CP3'
 * '<S98>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/HvMgmt_ReqModBMS_Enum_CP5'
 * '<S99>'  : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/If'
 * '<S100>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/If1'
 * '<S101>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/If3'
 * '<S102>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/If4'
 * '<S103>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/If5'
 * '<S104>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ModMgmt_HvSts_Enum_CP3'
 * '<S105>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSNegRlyActSts/ModMgmt_HvSts_Enum_CP4'
 * '<S106>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt1'
 * '<S107>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt2'
 * '<S108>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt3'
 * '<S109>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt4'
 * '<S110>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt5'
 * '<S111>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ATOM_TimeCnt6'
 * '<S112>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP1'
 * '<S113>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP2'
 * '<S114>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP3'
 * '<S115>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP4'
 * '<S116>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP5'
 * '<S117>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ComM_BMSPosRlySts_Enum_CP6'
 * '<S118>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP'
 * '<S119>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP1'
 * '<S120>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP3'
 * '<S121>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP4'
 * '<S122>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_BMSPosRlyCtrlReq_Enum_CP5'
 * '<S123>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP'
 * '<S124>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP2'
 * '<S125>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP3'
 * '<S126>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP4'
 * '<S127>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP5'
 * '<S128>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP6'
 * '<S129>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/HvMgmt_ReqModBMS_Enum_CP7'
 * '<S130>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If'
 * '<S131>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If1'
 * '<S132>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If3'
 * '<S133>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If4'
 * '<S134>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If5'
 * '<S135>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If6'
 * '<S136>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/If7'
 * '<S137>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ModMgmt_HvSts_Enum_CP3'
 * '<S138>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSPosRlyActSts/ModMgmt_HvSts_Enum_CP4'
 * '<S139>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ATOM_TimeCnt'
 * '<S140>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ATOM_TimeCnt1'
 * '<S141>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ComM_BMSWrkMod_Enum_CP'
 * '<S142>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ComM_BMSWrkMod_Enum_CP1'
 * '<S143>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ComM_BMSWrkMod_Enum_CP5'
 * '<S144>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ComM_BMSWrkMod_Enum_CP6'
 * '<S145>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ComM_BMSWrkMod_Enum_CP7'
 * '<S146>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/HvMgmt_ReqModBMS_Enum_CP'
 * '<S147>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S148>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/If'
 * '<S149>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/If1'
 * '<S150>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ModMgmt_HvSts_Enum_CP1'
 * '<S151>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ModMgmt_HvSts_Enum_CP2'
 * '<S152>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ModMgmt_HvSts_Enum_CP3'
 * '<S153>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ModMgmt_HvSts_Enum_CP4'
 * '<S154>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSRlyClsFlt/ModMgmt_HvSts_Enum_CP5'
 * '<S155>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ATOM_TimeCnt1'
 * '<S156>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ATOM_TimeCnt2'
 * '<S157>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ATOM_TimeCnt4'
 * '<S158>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ComM_BMSWrkMod_Enum_CP'
 * '<S159>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ComM_BMSWrkMod_Enum_CP1'
 * '<S160>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ComM_BMSWrkMod_Enum_CP2'
 * '<S161>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ComM_BMSWrkMod_Enum_CP3'
 * '<S162>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP'
 * '<S163>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP1'
 * '<S164>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP2'
 * '<S165>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP3'
 * '<S166>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP4'
 * '<S167>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP5'
 * '<S168>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/HvMgmt_ReqModBMS_Enum_CP6'
 * '<S169>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If'
 * '<S170>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If1'
 * '<S171>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If2'
 * '<S172>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If4'
 * '<S173>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If6'
 * '<S174>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/If7'
 * '<S175>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ModMgmt_HvSts_Enum_CP3'
 * '<S176>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_BMSWrkModActSts/ModMgmt_HvSts_Enum_CP4'
 * '<S177>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt/ATOM_TimeCnt'
 * '<S178>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt/ComM_PEPSPwrMod_Enum_CP'
 * '<S179>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt/If'
 * '<S180>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt/ModMgmt_HvSts_Enum_CP'
 * '<S181>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVConnFlt/ModMgmt_HvSts_Enum_CP1'
 * '<S182>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ComM_PODDcPosRlySts_Enum_CP'
 * '<S183>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ComM_PODDcPosRlySts_Enum_CP1'
 * '<S184>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq'
 * '<S185>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive'
 * '<S186>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFour'
 * '<S187>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveOne'
 * '<S188>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveSeven'
 * '<S189>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveSix'
 * '<S190>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveThree'
 * '<S191>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveTwo'
 * '<S192>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/If'
 * '<S193>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/If1'
 * '<S194>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/If3'
 * '<S195>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ModMgmt_HvSts_Enum_CP'
 * '<S196>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ModMgmt_HvSts_Enum_CP1'
 * '<S197>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ModMgmt_HvSts_Enum_CP2'
 * '<S198>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ModMgmt_HvSts_Enum_CP3'
 * '<S199>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/ModMgmt_HvSts_Enum_CP5'
 * '<S200>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ATOM_TimeCnt1'
 * '<S201>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ATOM_TimeCnt2'
 * '<S202>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ComM_BMSBattDispSOC_pct_CP'
 * '<S203>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ComM_BMSBattDispSOC_pct_CP1'
 * '<S204>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ComM_BSBattSOC_pct_CP'
 * '<S205>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ComM_PEPSPwrMod_Enum_CP'
 * '<S206>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ComM_SGWRemHvCtrlReq_Enum_CP'
 * '<S207>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/HvMgmt_BMSHvOnCnt_Enum_CP'
 * '<S208>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/HvMgmt_ReqModBMS_Delay_CP'
 * '<S209>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/HvMgmt_ReqModBMS_Enum_CP'
 * '<S210>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/If1'
 * '<S211>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/If2'
 * '<S212>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/If3'
 * '<S213>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReq/ModMgmt_HvSts_Enum_CP1'
 * '<S214>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/ATOM_OnDelay'
 * '<S215>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/ATOM_OnDelay1'
 * '<S216>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/ComM_BMSBattDispSOC_pct_CP2'
 * '<S217>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/ComM_BSBattSOC_pct_CP'
 * '<S218>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/ComM_DCDCWrkMod_Enum_CP'
 * '<S219>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/If'
 * '<S220>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFive/LvMgmt_WakeUpSrc_Enum_CP'
 * '<S221>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveFour/ComM_BMSBattDispSOC_pct_CP'
 * '<S222>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveOne/ComM_PEPSPwrMod_Enum_CP'
 * '<S223>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveSeven/ComM_BMSPosRlySts_Enum_CP'
 * '<S224>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveSeven/ModMgmt_HvSts_Enum_CP1'
 * '<S225>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HVPowerRequest/HvPwrOnReqInactiveThree/ComM_SGWRemHvCtrlReq_Enum_CP'
 * '<S226>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/If'
 * '<S227>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/If1'
 * '<S228>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP'
 * '<S229>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP1'
 * '<S230>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP2'
 * '<S231>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP3'
 * '<S232>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP4'
 * '<S233>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_HvPwrOffReqChrgDwn/ModMgmt_HvSts_Enum_CP5'
 * '<S234>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/FctSftyMon_ActGear_Enum_CP'
 * '<S235>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/FctSftyMon_ActGear_Enum_CP1'
 * '<S236>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/HvMgmt_DCDCWrkModActSts_Enum_CP'
 * '<S237>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/HvMgmt_DCDCWrkModActSts_Enum_CP1'
 * '<S238>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/HvMgmt_TCUWrkModActSts_Enum_CP'
 * '<S239>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/HvMgmt_TCUWrkModActSts_Enum_CP1'
 * '<S240>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/If'
 * '<S241>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/If1'
 * '<S242>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP'
 * '<S243>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP1'
 * '<S244>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP2'
 * '<S245>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP3'
 * '<S246>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP4'
 * '<S247>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ModMgmt_HvSts_Enum_CP5'
 * '<S248>' : 'CtAp_BMSMgmt/R_BMSMgmt_Cyclic_20ms_sys/CtAp_BMSMgmt_Function/HvMgmt_ReqModBMS/ReqModBMSInactive'
 */

/*-
 * Requirements for '<Root>': CtAp_BMSMgmt

 *
 * Inherited requirements for '<S4>/HvMgmt_BMSNegRlyActSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:255
 *  2. VCU_SW_Requirements_Specification.slreqx:256
 *  3. VCU_SW_Requirements_Specification.slreqx:257
 *  4. VCU_SW_Requirements_Specification.slreqx:258
 *  5. VCU_SW_Requirements_Specification.slreqx:259
 *  6. VCU_SW_Requirements_Specification.slreqx:260
 *  7. VCU_SW_Requirements_Specification.slreqx:261
 *
 * Inherited requirements for '<S4>/HvMgmt_BMSPosRlyActSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:246
 *  2. VCU_SW_Requirements_Specification.slreqx:247
 *  3. VCU_SW_Requirements_Specification.slreqx:249
 *  4. VCU_SW_Requirements_Specification.slreqx:250
 *  5. VCU_SW_Requirements_Specification.slreqx:252
 *  6. VCU_SW_Requirements_Specification.slreqx:253
 *  7. VCU_SW_Requirements_Specification.slreqx:251
 *  8. VCU_SW_Requirements_Specification.slreqx:254
 *
 * Inherited requirements for '<S4>/HvMgmt_BMSRlyClsFlt':
 *  1. VCU_SW_Requirements_Specification.slreqx:228
 *  2. VCU_SW_Requirements_Specification.slreqx:229
 *  3. VCU_SW_Requirements_Specification.slreqx:230
 *
 * Inherited requirements for '<S4>/HvMgmt_BMSWrkModActSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:262
 *  2. VCU_SW_Requirements_Specification.slreqx:263
 *  3. VCU_SW_Requirements_Specification.slreqx:264
 *  4. VCU_SW_Requirements_Specification.slreqx:265
 *  5. VCU_SW_Requirements_Specification.slreqx:266
 *  6. VCU_SW_Requirements_Specification.slreqx:267
 *
 * Inherited requirements for '<S4>/HvMgmt_HVConnFlt':
 *  1. VCU_SW_Requirements_Specification.slreqx:268
 *  2. VCU_SW_Requirements_Specification.slreqx:269
 *
 * Inherited requirements for '<S4>/HvMgmt_HVPowerRequest':
 *  1. VCU_SW_Requirements_Specification.slreqx:231
 *  2. VCU_SW_Requirements_Specification.slreqx:232
 *  3. VCU_SW_Requirements_Specification.slreqx:233
 *
 * Inherited requirements for '<S4>/HvMgmt_HvPwrOffReqChrgDwn':
 *  1. VCU_SW_Requirements_Specification.slreqx:235
 *  2. VCU_SW_Requirements_Specification.slreqx:236
 *  3. VCU_SW_Requirements_Specification.slreqx:28759
 *
 * Inherited requirements for '<S4>/HvMgmt_ReqModBMS':
 *  1. VCU_SW_Requirements_Specification.slreqx:237
 *  2. VCU_SW_Requirements_Specification.slreqx:238
 *  3. VCU_SW_Requirements_Specification.slreqx:239
 *  4. VCU_SW_Requirements_Specification.slreqx:240
 *  5. VCU_SW_Requirements_Specification.slreqx:241
 *
 * Inherited requirements for '<S7>/HvMgmt_BMSRlyClsDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:300
 *  2. VCU_SW_Requirements_Specification.slreqx:301
 *  3. VCU_SW_Requirements_Specification.slreqx:302
 *  4. VCU_SW_Requirements_Specification.slreqx:306
 *  5. VCU_SW_Requirements_Specification.slreqx:307
 *  6. VCU_SW_Requirements_Specification.slreqx:308
 *  7. VCU_SW_Requirements_Specification.slreqx:309
 *
 * Inherited requirements for '<S7>/HvMgmt_BMSRlyClsDTCOne':
 *  1. VCU_SW_Requirements_Specification.slreqx:274
 *  2. VCU_SW_Requirements_Specification.slreqx:275
 *  3. VCU_SW_Requirements_Specification.slreqx:276
 *  4. VCU_SW_Requirements_Specification.slreqx:280
 *  5. VCU_SW_Requirements_Specification.slreqx:281
 *  6. VCU_SW_Requirements_Specification.slreqx:282
 *  7. VCU_SW_Requirements_Specification.slreqx:283
 *
 * Inherited requirements for '<S7>/HvMgmt_BMSRlyClsDTCTwo':
 *  1. VCU_SW_Requirements_Specification.slreqx:287
 *  2. VCU_SW_Requirements_Specification.slreqx:288
 *  3. VCU_SW_Requirements_Specification.slreqx:289
 *  4. VCU_SW_Requirements_Specification.slreqx:293
 *  5. VCU_SW_Requirements_Specification.slreqx:294
 *  6. VCU_SW_Requirements_Specification.slreqx:295
 *  7. VCU_SW_Requirements_Specification.slreqx:296
 *
 * Inherited requirements for '<S7>/HvMgmt_BMSRlyOpenDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:313
 *  2. VCU_SW_Requirements_Specification.slreqx:314
 *  3. VCU_SW_Requirements_Specification.slreqx:315
 *  4. VCU_SW_Requirements_Specification.slreqx:319
 *  5. VCU_SW_Requirements_Specification.slreqx:320
 *  6. VCU_SW_Requirements_Specification.slreqx:321
 *
 * Inherited requirements for '<S7>/HvMgmt_PreheatPosRlyClsDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:339
 *  2. VCU_SW_Requirements_Specification.slreqx:340
 *  3. VCU_SW_Requirements_Specification.slreqx:341
 *  4. VCU_SW_Requirements_Specification.slreqx:345
 *  5. VCU_SW_Requirements_Specification.slreqx:346
 *  6. VCU_SW_Requirements_Specification.slreqx:347
 *
 * Inherited requirements for '<S7>/HvMgmt_PreheatPosRlyOpenDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:326
 *  2. VCU_SW_Requirements_Specification.slreqx:327
 *  3. VCU_SW_Requirements_Specification.slreqx:328
 *  4. VCU_SW_Requirements_Specification.slreqx:332
 *  5. VCU_SW_Requirements_Specification.slreqx:333
 *  6. VCU_SW_Requirements_Specification.slreqx:334
 *
 * Inherited requirements for '<S8>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:255
 *
 * Inherited requirements for '<S8>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:256
 *
 * Inherited requirements for '<S8>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:258
 *
 * Inherited requirements for '<S8>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:259
 *
 * Inherited requirements for '<S8>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:260
 *
 * Inherited requirements for '<S9>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:246
 *
 * Inherited requirements for '<S9>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:247
 *
 * Inherited requirements for '<S9>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:249
 *
 * Inherited requirements for '<S9>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:250
 *
 * Inherited requirements for '<S9>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:251
 *
 * Inherited requirements for '<S9>/If6':
 *  1. VCU_SW_Requirements_Specification.slreqx:252
 *
 * Inherited requirements for '<S9>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:253
 *
 * Inherited requirements for '<S11>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:229
 *
 * Inherited requirements for '<S12>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:262
 *
 * Inherited requirements for '<S12>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:263
 *
 * Inherited requirements for '<S12>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:264
 *
 * Inherited requirements for '<S12>/If6':
 *  1. VCU_SW_Requirements_Specification.slreqx:265
 *
 * Inherited requirements for '<S12>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:266
 *
 * Inherited requirements for '<S13>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:268
 *  2. VCU_SW_Requirements_Specification.slreqx:269
 *
 * Inherited requirements for '<S14>/HvPwrOnReq':
 *  1. VCU_SW_Requirements_Specification.slreqx:234
 *
 * Inherited requirements for '<S14>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:231
 *
 * Inherited requirements for '<S14>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:232
 *
 * Inherited requirements for '<S15>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:235
 *  2. VCU_SW_Requirements_Specification.slreqx:236
 *
 * Inherited requirements for '<S16>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:237
 *  2. VCU_SW_Requirements_Specification.slreqx:238
 *  3. VCU_SW_Requirements_Specification.slreqx:239
 *
 * Inherited requirements for '<S16>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:240
 *
 * Inherited requirements for '<S184>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:234
 *
 * Inherited requirements for '<S184>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:234

 */
#endif                                 /* RTW_HEADER_CtAp_BMSMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
