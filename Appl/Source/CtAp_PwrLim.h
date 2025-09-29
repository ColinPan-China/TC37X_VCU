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
 *  Filename:           CtAp_PwrLim.h
 *  File Creation Date: 23-Sep-2025
 *  Model Name:         CtAp_PwrLim
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:05 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Sep 23 14:37:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Tue Sep 23 14:36:08 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_PwrLim_h_
#define RTW_HEADER_CtAp_PwrLim_h_
#ifndef CtAp_PwrLim_COMMON_INCLUDES_
#define CtAp_PwrLim_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_PwrLim.h"
#endif                                 /* CtAp_PwrLim_COMMON_INCLUDES_ */

#include "CtAp_PwrLim_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_PwrLim_Glb.h"
#include "CtAp_PwrLim_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define PwrLim_AC_Charging             5U                        /* Referenced by:
                                                                  * '<S42>/Constant'
                                                                  * '<S68>/Constant'
                                                                  * '<S69>/Constant'
                                                                  * '<S115>/Constant'
                                                                  * '<S143>/Constant'
                                                                  * '<S192>/Constant'
                                                                  * '<S197>/Constant'
                                                                  * '<S226>/Constant'
                                                                  * '<S232>/Constant'
                                                                  */
#define PwrLim_AC_Plug_detected        2U                        /* Referenced by:
                                                                  * '<S40>/Constant'
                                                                  * '<S45>/Constant'
                                                                  * '<S103>/Constant'
                                                                  * '<S113>/Constant'
                                                                  * '<S132>/Constant'
                                                                  * '<S141>/Constant'
                                                                  * '<S213>/Constant'
                                                                  * '<S222>/Constant'
                                                                  * '<S245>/Constant'
                                                                  */
#define PwrLim_AC_Preheating           10U                       /* Referenced by:
                                                                  * '<S44>/Constant'
                                                                  * '<S112>/Constant'
                                                                  * '<S140>/Constant'
                                                                  * '<S220>/Constant'
                                                                  */
#define PwrLim_Active                  true                      /* Referenced by:
                                                                  * '<S14>/Marco_Active'
                                                                  * '<S105>/Constant'
                                                                  * '<S117>/Constant'
                                                                  */
#define PwrLim_BMSChrgReqFour          4U                        /* Referenced by:
                                                                  * '<S54>/Constant'
                                                                  * '<S110>/Constant'
                                                                  * '<S139>/Constant'
                                                                  * '<S217>/Constant'
                                                                  * '<S249>/Constant'
                                                                  */
#define PwrLim_BMSChrgReqOne           1U                        /* Referenced by:
                                                                  * '<S55>/Constant'
                                                                  * '<S118>/Constant'
                                                                  * '<S146>/Constant'
                                                                  * '<S189>/Constant'
                                                                  * '<S223>/Constant'
                                                                  */
#define PwrLim_BMSChrgReqThree         3U                        /* Referenced by:
                                                                  * '<S53>/Constant'
                                                                  * '<S109>/Constant'
                                                                  * '<S138>/Constant'
                                                                  * '<S216>/Constant'
                                                                  * '<S248>/Constant'
                                                                  */
#define PwrLim_BMSChrgReqTwo           2U                        /* Referenced by:
                                                                  * '<S52>/Constant'
                                                                  * '<S108>/Constant'
                                                                  * '<S137>/Constant'
                                                                  * '<S215>/Constant'
                                                                  * '<S247>/Constant'
                                                                  */
#define PwrLim_BMSChrgReqZero          0U                        /* Referenced by:
                                                                  * '<S51>/Constant'
                                                                  * '<S107>/Constant'
                                                                  * '<S136>/Constant'
                                                                  * '<S214>/Constant'
                                                                  * '<S246>/Constant'
                                                                  */
#define PwrLim_Charging_Complete       8U                        /* Referenced by:
                                                                  * '<S36>/Constant'
                                                                  * '<S122>/Constant'
                                                                  * '<S149>/Constant'
                                                                  * '<S208>/Constant'
                                                                  * '<S240>/Constant'
                                                                  */
#define PwrLim_Charging_Fault          9U                        /* Referenced by:
                                                                  * '<S37>/Constant'
                                                                  * '<S123>/Constant'
                                                                  * '<S150>/Constant'
                                                                  * '<S209>/Constant'
                                                                  * '<S241>/Constant'
                                                                  */
#define PwrLim_DCDCLimPwrZero          0.0F                      /* Referenced by: '<S8>/Marco_DCDCLimPwrZero' */
#define PwrLim_DC_Charging             6U                        /* Referenced by:
                                                                  * '<S34>/Constant'
                                                                  * '<S128>/Constant'
                                                                  * '<S155>/Constant'
                                                                  * '<S202>/Constant'
                                                                  */
#define PwrLim_DC_Plug_detected        3U                        /* Referenced by:
                                                                  * '<S47>/Constant'
                                                                  * '<S104>/Constant'
                                                                  * '<S114>/Constant'
                                                                  * '<S133>/Constant'
                                                                  * '<S142>/Constant'
                                                                  * '<S187>/Constant'
                                                                  * '<S206>/Constant'
                                                                  * '<S238>/Constant'
                                                                  */
#define PwrLim_DC_Preheating           11U                       /* Referenced by:
                                                                  * '<S41>/Constant'
                                                                  * '<S130>/Constant'
                                                                  * '<S157>/Constant'
                                                                  * '<S188>/Constant'
                                                                  */
#define PwrLim_DrvReady                3U                        /* Referenced by:
                                                                  * '<S86>/Constant'
                                                                  * '<S90>/Constant'
                                                                  * '<S91>/Constant'
                                                                  */
#define PwrLim_ECO                     1U                        /* Referenced by: '<S29>/Constant' */
#define PwrLim_EgyMgmt_RunStep         100U                      /* Referenced by:
                                                                  * '<S10>/EgyMgmt_RunStep'
                                                                  * '<S170>/EgyMgmt_RunStep'
                                                                  * '<S171>/EgyMgmt_RunStep'
                                                                  * '<S173>/EgyMgmt_RunStep'
                                                                  * '<S175>/EgyMgmt_RunStep'
                                                                  * '<S176>/EgyMgmt_RunStep'
                                                                  * '<S177>/EgyMgmt_RunStep'
                                                                  */
#define PwrLim_Fault_one               1U                        /* Referenced by: '<S9>/Marco_Fault_one' */
#define PwrLim_Fault_two               2U                        /* Referenced by: '<S9>/Marco_Fault_two' */
#define PwrLim_Fault_zero              0U                        /* Referenced by: '<S9>/Marco_Fault_zero' */
#define PwrLim_Gear_D                  4U                        /* Referenced by:
                                                                  * '<S21>/Constant'
                                                                  * '<S23>/Constant'
                                                                  * '<S25>/Constant'
                                                                  * '<S80>/Constant'
                                                                  * '<S82>/Constant'
                                                                  */
#define PwrLim_Gear_R                  3U                        /* Referenced by:
                                                                  * '<S20>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S24>/Constant'
                                                                  * '<S79>/Constant'
                                                                  * '<S81>/Constant'
                                                                  */
#define PwrLim_Inactive                false                     /* Referenced by:
                                                                  * '<S14>/Marco_Inactive'
                                                                  * '<S134>/Constant'
                                                                  * '<S145>/Constant'
                                                                  */
#define PwrLim_Init                    0U                        /* Referenced by:
                                                                  * '<S33>/Constant'
                                                                  * '<S92>/Constant'
                                                                  * '<S158>/Constant'
                                                                  */
#define PwrLim_Keep_Warning            13U                       /* Referenced by:
                                                                  * '<S43>/Constant'
                                                                  * '<S116>/Constant'
                                                                  * '<S144>/Constant'
                                                                  * '<S221>/Constant'
                                                                  */
#define PwrLim_LevelOne                0U                        /* Referenced by: '<S7>/Marco_LevelOne' */
#define PwrLim_LevelResreved           3U                        /* Referenced by: '<S7>/Marco_LevelResreved' */
#define PwrLim_LevelThree              2U                        /* Referenced by: '<S7>/Marco_LevelThree' */
#define PwrLim_LevelTwo                1U                        /* Referenced by: '<S7>/Marco_LevelTwo' */
#define PwrLim_MCUDftPwr               0.0F                      /* Referenced by:
                                                                  * '<S12>/Marco_MCUDftPwr'
                                                                  * '<S13>/Marco_MCUDftPwr'
                                                                  * '<S87>/Constant'
                                                                  */
#define PwrLim_NORMAL                  2U                        /* Referenced by: '<S30>/Constant' */
#define PwrLim_Off_Plug                1U                        /* Referenced by:
                                                                  * '<S17>/Constant'
                                                                  * '<S18>/Constant'
                                                                  * '<S19>/Constant'
                                                                  * '<S46>/Constant'
                                                                  * '<S75>/Constant'
                                                                  * '<S76>/Constant'
                                                                  * '<S120>/Constant'
                                                                  * '<S147>/Constant'
                                                                  * '<S205>/Constant'
                                                                  * '<S237>/Constant'
                                                                  */
#define PwrLim_OnePedal                4U                        /* Referenced by: '<S32>/Constant' */
#define PwrLim_Passed                  false                     /* Referenced by:
                                                                  * '<S56>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S58>/Constant'
                                                                  * '<S59>/Constant'
                                                                  * '<S111>/Constant'
                                                                  * '<S119>/Constant'
                                                                  * '<S127>/Constant'
                                                                  * '<S131>/Constant'
                                                                  * '<S154>/Constant'
                                                                  * '<S190>/Constant'
                                                                  * '<S194>/Constant'
                                                                  * '<S199>/Constant'
                                                                  * '<S203>/Constant'
                                                                  * '<S218>/Constant'
                                                                  * '<S224>/Constant'
                                                                  * '<S228>/Constant'
                                                                  * '<S234>/Constant'
                                                                  * '<S250>/Constant'
                                                                  */
#define PwrLim_PwrCnsKwTran            1000.0F                   /* Referenced by:
                                                                  * '<S8>/Marco_EgyMgmt_PwrCnsKwTran '
                                                                  * '<S8>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S8>/Marco_EgyMgmt_PwrCnsKwTran4'
                                                                  * '<S8>/Marco_EgyMgmt_PwrCnsKwTran5'
                                                                  * '<S12>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S12>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S12>/Marco_EgyMgmt_PwrCnsKwTran2'
                                                                  * '<S13>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S13>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S13>/Marco_EgyMgmt_PwrCnsKwTran2'
                                                                  * '<S16>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S178>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S178>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S179>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S180>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S180>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S181>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S181>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  * '<S182>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S183>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S184>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S185>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S186>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S186>/Marco_EgyMgmt_PwrCnsKwTran1'
                                                                  */
#define PwrLim_SPORT                   3U                        /* Referenced by: '<S31>/Constant' */
#define PwrLim_Single_Zero             0.0F                      /* Referenced by:
                                                                  * '<S70>/Constant'
                                                                  * '<S71>/Constant'
                                                                  */
#define PwrLim_TCUInitPwr              0.0F                      /* Referenced by:
                                                                  * '<S15>/Marco_EgyMgmt_TCUInitPwr0'
                                                                  * '<S179>/Marco_PwrLim_TCUInitPwr'
                                                                  * '<S184>/Marco_PwrLim_TCUInitPwr'
                                                                  * '<S195>/Constant'
                                                                  * '<S200>/Constant'
                                                                  * '<S201>/Constant'
                                                                  * '<S219>/Constant'
                                                                  * '<S229>/Constant'
                                                                  * '<S230>/Constant'
                                                                  * '<S235>/Constant'
                                                                  * '<S251>/Constant'
                                                                  * '<S252>/Constant'
                                                                  */
#define PwrLim_V2L_Complete            12U                       /* Referenced by:
                                                                  * '<S38>/Constant'
                                                                  * '<S124>/Constant'
                                                                  * '<S151>/Constant'
                                                                  * '<S210>/Constant'
                                                                  * '<S242>/Constant'
                                                                  */
#define PwrLim_V2L_Discharging         7U                        /* Referenced by:
                                                                  * '<S35>/Constant'
                                                                  * '<S253>/Constant'
                                                                  * '<S129>/Constant'
                                                                  * '<S156>/Constant'
                                                                  * '<S212>/Constant'
                                                                  * '<S244>/Constant'
                                                                  */
#define PwrLim_V2L_Fault               14U                       /* Referenced by:
                                                                  * '<S39>/Constant'
                                                                  * '<S125>/Constant'
                                                                  * '<S152>/Constant'
                                                                  * '<S211>/Constant'
                                                                  * '<S243>/Constant'
                                                                  */
#define PwrLim_V2L_Plug_Detected       4U                        /* Referenced by:
                                                                  * '<S48>/Constant'
                                                                  * '<S121>/Constant'
                                                                  * '<S148>/Constant'
                                                                  * '<S207>/Constant'
                                                                  * '<S239>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S10>/NoEnDTAvdMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S74>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S73>/Delay1' */
} ARID_DEF_NoEnDTAvdMu_CtAp_Pwr_T;

/* PublicStructure Variables for Internal Data, for system '<S170>/ATOM_TimeCnt2' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S191>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2;/* '<S177>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2_mbvz;/* '<S176>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2_cl54;/* '<S175>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2_kkiq;/* '<S173>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2_cxar;/* '<S171>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Pw_T ARID_DEF_ATOM_TimeCnt2_bhxx;/* '<S170>/ATOM_TimeCnt2' */
  ARID_DEF_NoEnDTAvdMu_CtAp_Pwr_T ARID_DEF_NoEnDTAvdMu;/* '<S10>/NoEnDTAvdMu' */
  dt_EgyMgmt_EgyMgmtWarnOne RTE_P_EgyMgmt_EgyMgmtWarnOne_Bu;
  /* '<Root>/RTE_P_EgyMgmt_EgyMgmtWarnOne_Bus_tec_EgyMgmt_EgyMgmtWarnOne_Bus' */
  dt_EgyMgmt_EgyMgmtWarnTwo RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bu;
  /* '<Root>/RTE_P_EgyMgmt_EgyMgmtWarnTwo_Bus_tec_EgyMgmt_EgyMgmtWarnTwo_Bus' */
  real32_T Delay_DSTATE;               /* '<S15>/Delay' */
  real32_T Delay_DSTATE_jrzd;          /* '<S8>/Delay' */
  boolean_T Delay_DSTATE_pwl4;         /* '<S14>/Delay' */
} ARID_DEF_CtAp_PwrLim_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_PwrLim_START_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"

extern ARID_DEF_CtAp_PwrLim_T CtAp_PwrLim_ARID_DEF;

#define CtAp_PwrLim_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PwrLim_MemMap.h"

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
 * '<Root>' : 'CtAp_PwrLim'
 * '<S1>'   : 'CtAp_PwrLim/DocBlock'
 * '<S2>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys'
 * '<S3>'   : 'CtAp_PwrLim/R_PwrLim_Init'
 * '<S4>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function'
 * '<S5>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Input'
 * '<S6>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Output'
 * '<S7>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl'
 * '<S8>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt'
 * '<S9>'   : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarn'
 * '<S10>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne'
 * '<S11>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo'
 * '<S12>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUDrvPwrLmt'
 * '<S13>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt'
 * '<S14>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC'
 * '<S15>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd'
 * '<S16>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_V2LDisChgPwrLmt'
 * '<S17>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ChrMgmt_ChrgSts_Enum_CP'
 * '<S18>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S19>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S20>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP'
 * '<S21>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP1'
 * '<S22>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP2'
 * '<S23>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP3'
 * '<S24>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP4'
 * '<S25>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/FctSftyMon_ActGear_Enum_CP5'
 * '<S26>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/If'
 * '<S27>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/If1'
 * '<S28>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/If2'
 * '<S29>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ModMgmt_ActDrvMod_Enum_CP'
 * '<S30>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ModMgmt_ActDrvMod_Enum_CP1'
 * '<S31>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ModMgmt_ActDrvMod_Enum_CP2'
 * '<S32>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_BMSTarThermLvl/ModMgmt_ActDrvMod_Enum_CP3'
 * '<S33>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP'
 * '<S34>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S35>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP10'
 * '<S36>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP11'
 * '<S37>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP12'
 * '<S38>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP13'
 * '<S39>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP14'
 * '<S40>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP15'
 * '<S41>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S42>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S43>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S44>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S45>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP6'
 * '<S46>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP7'
 * '<S47>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP8'
 * '<S48>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ChrMgmt_ChrgSts_Enum_CP9'
 * '<S49>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSBattDispSOC_pct_CP'
 * '<S50>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSBattDispSOC_pct_CP1'
 * '<S51>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSChrgReqSts_Enum_CP'
 * '<S52>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSChrgReqSts_Enum_CP1'
 * '<S53>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSChrgReqSts_Enum_CP2'
 * '<S54>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSChrgReqSts_Enum_CP3'
 * '<S55>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_BMSChrgReqSts_Enum_CP4'
 * '<S56>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_DCDCNodComFailr_Flg_CP'
 * '<S57>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_DCDCNodComFailr_Flg_CP1'
 * '<S58>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_DCDCNodComFailr_Flg_CP2'
 * '<S59>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/ComM_DCDCNodComFailr_Flg_CP3'
 * '<S60>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If'
 * '<S61>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If1'
 * '<S62>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If2'
 * '<S63>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If3'
 * '<S64>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If4'
 * '<S65>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_DCDCPwrLmt/If5'
 * '<S66>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarn/If'
 * '<S67>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarn/If1'
 * '<S68>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/ChrMgmt_ChrgSts_Enum_CP'
 * '<S69>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S70>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/ComM_BMSBattIDc_A_CP'
 * '<S71>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/ComM_BMSBattIDc_A_CP1'
 * '<S72>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/NoEnDTAvdMu'
 * '<S73>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/NoEnDTAvdMu/ErrorHandleSysU16'
 * '<S74>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnOne/NoEnDTAvdMu/ErrorHandleSysU16/OnDelay'
 * '<S75>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/ChrMgmt_ChrgSts_Enum_CP'
 * '<S76>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S77>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/ComM_BMSBattDispSOC_pct_CP'
 * '<S78>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/ComM_BMSBattDispSOC_pct_CP1'
 * '<S79>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/FctSftyMon_ActGear_Enum_CP'
 * '<S80>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/FctSftyMon_ActGear_Enum_CP1'
 * '<S81>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/FctSftyMon_ActGear_Enum_CP2'
 * '<S82>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/FctSftyMon_ActGear_Enum_CP3'
 * '<S83>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/NoEnTimMonR'
 * '<S84>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_EgyMgmtWarnTwo/NoEnTimMonR/ErrorHandleSysU16'
 * '<S85>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUDrvPwrLmt/If'
 * '<S86>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUDrvPwrLmt/ModMgmt_HvSts_Enum_CP'
 * '<S87>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt/ComM_BMSBattIDc_A_CP'
 * '<S88>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt/If'
 * '<S89>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt/If1'
 * '<S90>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt/ModMgmt_HvSts_Enum_CP'
 * '<S91>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_MCUFbPwrLmt/ModMgmt_HvSts_Enum_CP1'
 * '<S92>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/ChrMgmt_ChrgSts_Enum_CP'
 * '<S93>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/If'
 * '<S94>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/If1'
 * '<S95>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive'
 * '<S96>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour'
 * '<S97>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne'
 * '<S98>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveTwo'
 * '<S99>'  : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive'
 * '<S100>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour'
 * '<S101>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne'
 * '<S102>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveTwo'
 * '<S103>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S104>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S105>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ChrMgmt_PckPTCAllwbl_Flg_CP'
 * '<S106>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSBattDispSOC_pct_CP'
 * '<S107>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSChrgReqSts_Enum_CP'
 * '<S108>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSChrgReqSts_Enum_CP1'
 * '<S109>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSChrgReqSts_Enum_CP2'
 * '<S110>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSChrgReqSts_Enum_CP3'
 * '<S111>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFive/ComM_BMSNodComFailr_Flg_CP'
 * '<S112>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_ChrgSts_Enum_CP'
 * '<S113>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S114>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S115>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S116>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S117>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ChrMgmt_PckPTCAllwbl_Flg_CP'
 * '<S118>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ComM_BMSChrgReqSts_Enum_CP'
 * '<S119>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveFour/ComM_BMSNodComFailr_Flg_CP'
 * '<S120>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP'
 * '<S121>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S122>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S123>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S124>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP6'
 * '<S125>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ChrMgmt_ChrgSts_Enum_CP7'
 * '<S126>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ComM_BMSBattDispSOC_pct_CP'
 * '<S127>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveOne/ComM_BMSNodComFailr_Flg_CP'
 * '<S128>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveTwo/ChrMgmt_ChrgSts_Enum_CP'
 * '<S129>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveTwo/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S130>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveTwo/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S131>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCActiveTwo/ComM_BMSNodComFailr_Flg_CP'
 * '<S132>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S133>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S134>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ChrMgmt_PckPTCAllwbl_Flg_CP'
 * '<S135>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ComM_BMSBattDispSOC_pct_CP'
 * '<S136>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ComM_BMSChrgReqSts_Enum_CP'
 * '<S137>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ComM_BMSChrgReqSts_Enum_CP1'
 * '<S138>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ComM_BMSChrgReqSts_Enum_CP2'
 * '<S139>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFive/ComM_BMSChrgReqSts_Enum_CP3'
 * '<S140>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_ChrgSts_Enum_CP'
 * '<S141>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S142>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S143>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S144>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S145>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ChrMgmt_PckPTCAllwbl_Flg_CP'
 * '<S146>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveFour/ComM_BMSChrgReqSts_Enum_CP'
 * '<S147>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP'
 * '<S148>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S149>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S150>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S151>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP6'
 * '<S152>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ChrMgmt_ChrgSts_Enum_CP7'
 * '<S153>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ComM_BMSBattDispSOC_pct_CP'
 * '<S154>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveOne/ComM_BMSNodComFailr_Flg_CP'
 * '<S155>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveTwo/ChrMgmt_ChrgSts_Enum_CP'
 * '<S156>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveTwo/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S157>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_PermtPckPTC/PermtPckPTCInactiveTwo/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S158>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/ChrMgmt_ChrgSts_Enum_CP'
 * '<S159>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If'
 * '<S160>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If1'
 * '<S161>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If2'
 * '<S162>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If3'
 * '<S163>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If4'
 * '<S164>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If5'
 * '<S165>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If6'
 * '<S166>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If7'
 * '<S167>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If8'
 * '<S168>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/If9'
 * '<S169>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondEight'
 * '<S170>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive'
 * '<S171>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour'
 * '<S172>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondNine'
 * '<S173>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne'
 * '<S174>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven'
 * '<S175>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix'
 * '<S176>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree'
 * '<S177>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo'
 * '<S178>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueEight'
 * '<S179>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueFive'
 * '<S180>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueFour'
 * '<S181>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueNine'
 * '<S182>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueOne'
 * '<S183>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueSeven'
 * '<S184>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueSix'
 * '<S185>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueThree'
 * '<S186>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdValueTwo'
 * '<S187>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondEight/ChrMgmt_ChrgSts_Enum_CP10'
 * '<S188>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondEight/ChrMgmt_ChrgSts_Enum_CP2'
 * '<S189>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondEight/ComM_BMSChrgReqSts_Enum_CP'
 * '<S190>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondEight/ComM_TCUNodComFailr_Flg_CP'
 * '<S191>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive/ATOM_TimeCnt2'
 * '<S192>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive/ChrMgmt_ChrgSts_Enum_CP'
 * '<S193>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive/ComM_BMSBattDispSOC_pct_CP'
 * '<S194>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive/ComM_TCUNodComFailr_Flg_CP'
 * '<S195>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFive/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S196>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/ATOM_TimeCnt2'
 * '<S197>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/ChrMgmt_ChrgSts_Enum_CP'
 * '<S198>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/ComM_BMSBattDispSOC_pct_CP'
 * '<S199>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/ComM_TCUNodComFailr_Flg_CP'
 * '<S200>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S201>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondFour/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP1'
 * '<S202>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondNine/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S203>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondNine/ComM_TCUNodComFailr_Flg_CP'
 * '<S204>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ATOM_TimeCnt2'
 * '<S205>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP'
 * '<S206>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP10'
 * '<S207>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S208>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S209>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S210>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP6'
 * '<S211>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP7'
 * '<S212>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP8'
 * '<S213>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ChrMgmt_ChrgSts_Enum_CP9'
 * '<S214>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ComM_BMSChrgReqSts_Enum_CP'
 * '<S215>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ComM_BMSChrgReqSts_Enum_CP1'
 * '<S216>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ComM_BMSChrgReqSts_Enum_CP2'
 * '<S217>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ComM_BMSChrgReqSts_Enum_CP3'
 * '<S218>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/ComM_TCUNodComFailr_Flg_CP'
 * '<S219>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondOne/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S220>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven/ChrMgmt_ChrgSts_Enum_CP'
 * '<S221>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S222>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S223>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven/ComM_BMSChrgReqSts_Enum_CP'
 * '<S224>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSeven/ComM_TCUNodComFailr_Flg_CP'
 * '<S225>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/ATOM_TimeCnt2'
 * '<S226>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/ChrMgmt_ChrgSts_Enum_CP'
 * '<S227>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/ComM_BMSBattDispSOC_pct_CP'
 * '<S228>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/ComM_TCUNodComFailr_Flg_CP'
 * '<S229>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S230>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondSix/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP1'
 * '<S231>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree/ATOM_TimeCnt2'
 * '<S232>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree/ChrMgmt_ChrgSts_Enum_CP'
 * '<S233>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree/ComM_BMSBattDispSOC_pct_CP'
 * '<S234>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree/ComM_TCUNodComFailr_Flg_CP'
 * '<S235>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondThree/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S236>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ATOM_TimeCnt2'
 * '<S237>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP'
 * '<S238>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP10'
 * '<S239>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP3'
 * '<S240>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP4'
 * '<S241>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP5'
 * '<S242>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP6'
 * '<S243>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP7'
 * '<S244>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP8'
 * '<S245>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ChrMgmt_ChrgSts_Enum_CP9'
 * '<S246>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ComM_BMSChrgReqSts_Enum_CP'
 * '<S247>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ComM_BMSChrgReqSts_Enum_CP1'
 * '<S248>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ComM_BMSChrgReqSts_Enum_CP2'
 * '<S249>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ComM_BMSChrgReqSts_Enum_CP3'
 * '<S250>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/ComM_TCUNodComFailr_Flg_CP'
 * '<S251>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP'
 * '<S252>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_TCUPwrAllwd/TCUPwrAllwdCondTwo/EgyMgmt_PackPTCPwrCnsCalcn_Kw_CP1'
 * '<S253>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_V2LDisChgPwrLmt/ChrMgmt_ChrgSts_Enum_CP'
 * '<S254>' : 'CtAp_PwrLim/R_PwrLim_Cyclic_100ms_sys/CtAp_PwrLim_Function/EgyMgmt_V2LDisChgPwrLmt/If'
 */

/*-
 * Requirements for '<Root>': CtAp_PwrLim

 *
 * Inherited requirements for '<S4>/EgyMgmt_BMSTarThermLvl':
 *  1. VCU_SW_Requirements_Specification.slreqx:3804
 *  2. VCU_SW_Requirements_Specification.slreqx:3805
 *  3. VCU_SW_Requirements_Specification.slreqx:3806
 *  4. VCU_SW_Requirements_Specification.slreqx:3807
 *
 * Inherited requirements for '<S4>/EgyMgmt_DCDCPwrLmt':
 *  1. VCU_SW_Requirements_Specification.slreqx:3778
 *  2. VCU_SW_Requirements_Specification.slreqx:3779
 *  3. VCU_SW_Requirements_Specification.slreqx:3780
 *  4. VCU_SW_Requirements_Specification.slreqx:3781
 *  5. VCU_SW_Requirements_Specification.slreqx:3782
 *  6. VCU_SW_Requirements_Specification.slreqx:3783
 *  7. VCU_SW_Requirements_Specification.slreqx:3784
 *
 * Inherited requirements for '<S4>/EgyMgmt_EgyMgmtWarn':
 *  1. VCU_SW_Requirements_Specification.slreqx:3808
 *  2. VCU_SW_Requirements_Specification.slreqx:3809
 *  3. VCU_SW_Requirements_Specification.slreqx:3810
 *
 * Inherited requirements for '<S4>/EgyMgmt_EgyMgmtWarnOne':
 *  1. VCU_SW_Requirements_Specification.slreqx:3815
 *  2. VCU_SW_Requirements_Specification.slreqx:3816
 *  3. VCU_SW_Requirements_Specification.slreqx:3817
 *  4. VCU_SW_Requirements_Specification.slreqx:3823
 *  5. VCU_SW_Requirements_Specification.slreqx:3824
 *
 * Inherited requirements for '<S4>/EgyMgmt_EgyMgmtWarnTwo':
 *  1. VCU_SW_Requirements_Specification.slreqx:3828
 *  2. VCU_SW_Requirements_Specification.slreqx:3829
 *  3. VCU_SW_Requirements_Specification.slreqx:3830
 *  4. VCU_SW_Requirements_Specification.slreqx:3836
 *  5. VCU_SW_Requirements_Specification.slreqx:3837
 *
 * Inherited requirements for '<S4>/EgyMgmt_MCUDrvPwrLmt':
 *  1. VCU_SW_Requirements_Specification.slreqx:3786
 *  2. VCU_SW_Requirements_Specification.slreqx:3787
 *
 * Inherited requirements for '<S4>/EgyMgmt_MCUFbPwrLmt':
 *  1. VCU_SW_Requirements_Specification.slreqx:3788
 *  2. VCU_SW_Requirements_Specification.slreqx:3789
 *  3. VCU_SW_Requirements_Specification.slreqx:99941
 *
 * Inherited requirements for '<S4>/EgyMgmt_PermtPckPTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:3791
 *  2. VCU_SW_Requirements_Specification.slreqx:3792
 *  3. VCU_SW_Requirements_Specification.slreqx:3793
 *
 * Inherited requirements for '<S4>/EgyMgmt_TCUPwrAllwd':
 *  1. VCU_SW_Requirements_Specification.slreqx:3795
 *  2. VCU_SW_Requirements_Specification.slreqx:3797
 *  3. VCU_SW_Requirements_Specification.slreqx:3798
 *  4. VCU_SW_Requirements_Specification.slreqx:3799
 *  5. VCU_SW_Requirements_Specification.slreqx:15057
 *  6. VCU_SW_Requirements_Specification.slreqx:15058
 *  7. VCU_SW_Requirements_Specification.slreqx:3800
 *  8. VCU_SW_Requirements_Specification.slreqx:3801
 *  9. VCU_SW_Requirements_Specification.slreqx:3802
 *  10. VCU_SW_Requirements_Specification.slreqx:3796
 *  11. VCU_SW_Requirements_Specification.slreqx:132817
 *
 * Inherited requirements for '<S4>/EgyMgmt_V2LDisChgPwrLmt':
 *  1. VCU_SW_Requirements_Specification.slreqx:15070
 *  2. VCU_SW_Requirements_Specification.slreqx:15071
 *
 * Inherited requirements for '<S7>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3804
 *
 * Inherited requirements for '<S7>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3805
 *
 * Inherited requirements for '<S7>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:3806
 *  2. VCU_SW_Requirements_Specification.slreqx:3807
 *
 * Inherited requirements for '<S8>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3778
 *
 * Inherited requirements for '<S8>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3779
 *
 * Inherited requirements for '<S8>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:3780
 *
 * Inherited requirements for '<S8>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:3781
 *
 * Inherited requirements for '<S8>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:3782
 *
 * Inherited requirements for '<S8>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:3783
 *
 * Inherited requirements for '<S9>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3808
 *
 * Inherited requirements for '<S9>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3809
 *  2. VCU_SW_Requirements_Specification.slreqx:3810
 *
 * Inherited requirements for '<S12>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3786
 *
 * Inherited requirements for '<S13>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3788
 *  2. VCU_SW_Requirements_Specification.slreqx:3789
 *
 * Inherited requirements for '<S13>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:99941
 *
 * Inherited requirements for '<S14>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3791
 *
 * Inherited requirements for '<S14>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3792
 *
 * Inherited requirements for '<S15>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:3795
 *
 * Inherited requirements for '<S15>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:3796
 *
 * Inherited requirements for '<S15>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:3797
 *
 * Inherited requirements for '<S15>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:3798
 *
 * Inherited requirements for '<S15>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:3799
 *
 * Inherited requirements for '<S15>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:3800
 *
 * Inherited requirements for '<S15>/If6':
 *  1. VCU_SW_Requirements_Specification.slreqx:3801
 *
 * Inherited requirements for '<S15>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:15057
 *
 * Inherited requirements for '<S15>/If8':
 *  1. VCU_SW_Requirements_Specification.slreqx:15058
 *
 * Inherited requirements for '<S15>/If9':
 *  1. VCU_SW_Requirements_Specification.slreqx:132817
 *
 * Inherited requirements for '<S16>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:15070
 *  2. VCU_SW_Requirements_Specification.slreqx:15071

 */
#endif                                 /* RTW_HEADER_CtAp_PwrLim_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
