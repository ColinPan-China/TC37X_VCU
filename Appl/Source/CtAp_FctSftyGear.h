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
 *  Filename:           CtAp_FctSftyGear.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      3.2.2
 *  Model Author:       JackyWang - Thu Apr 03 11:15:08 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 17:36:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Mon Jul 28 17:35:37 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_FctSftyGear_h_
#define RTW_HEADER_CtAp_FctSftyGear_h_
#ifndef CtAp_FctSftyGear_COMMON_INCLUDES_
#define CtAp_FctSftyGear_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_FctSftyGear.h"
#endif                                 /* CtAp_FctSftyGear_COMMON_INCLUDES_ */

#include "CtAp_FctSftyGear_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_FctSftyGear_Glb.h"
#include "CtAp_FctSftyGear_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define FctSftyMon_APPLIED             1U                        /* Referenced by:
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S9>/FctSftyMon_EPBPrk'
                                                                  * '<S14>/Constant'
                                                                  */
#define FctSftyMon_ApplyRequest        1U                        /* Referenced by:
                                                                  * '<S10>/EPBReqCnt'
                                                                  * '<S10>/Constant'
                                                                  */
#define FctSftyMon_BrkPress            1U                        /* Referenced by: '<S45>/Constant' */
#define FctSftyMon_COMPLETELYRELEASED  5U                        /* Referenced by: '<S13>/Constant' */
#define FctSftyMon_Cycle               20U                       /* Referenced by:
                                                                  * '<S5>/Constant1'
                                                                  * '<S5>/Constant2'
                                                                  * '<S8>/Constant1'
                                                                  * '<S9>/FctSftyMon_EPBPrk'
                                                                  * '<S9>/FctSftyMon_EPBRels'
                                                                  * '<S10>/EPBReqCnt'
                                                                  */
#define FctSftyMon_D                   4U                        /* Referenced by:
                                                                  * '<S6>/Constant6'
                                                                  * '<S7>/GearMgmt_GearShift'
                                                                  * '<S23>/Constant'
                                                                  * '<S25>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S35>/Constant'
                                                                  * '<S38>/Constant'
                                                                  * '<S41>/Constant'
                                                                  * '<S44>/Constant'
                                                                  * '<S54>/Constant'
                                                                  * '<S56>/Constant'
                                                                  * '<S58>/Constant'
                                                                  */
#define FctSftyMon_Default             0U                        /* Referenced by:
                                                                  * '<S6>/Constant'
                                                                  * '<S6>/Constant1'
                                                                  * '<S6>/Constant2'
                                                                  * '<S6>/Constant3'
                                                                  * '<S6>/Constant9'
                                                                  */
#define FctSftyMon_False               false                     /* Referenced by:
                                                                  * '<S4>/Constant'
                                                                  * '<S4>/Constant2'
                                                                  * '<S4>/Constant5'
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S9>/FctSftyMon_EPBPrk'
                                                                  * '<S9>/FctSftyMon_EPBRels'
                                                                  * '<S9>/GearMgmt_EPBReqCmpl'
                                                                  */
#define FctSftyMon_MasterMode          0U                        /* Referenced by: '<S19>/Constant' */
#define FctSftyMon_N                   2U                        /* Referenced by:
                                                                  * '<S6>/Constant5'
                                                                  * '<S7>/GearMgmt_GearShift'
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S8>/Constant4'
                                                                  * '<S9>/Constant1'
                                                                  * '<S9>/Constant3'
                                                                  * '<S27>/Constant'
                                                                  * '<S29>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S36>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S39>/Constant'
                                                                  * '<S47>/Constant'
                                                                  * '<S60>/Constant'
                                                                  * '<S61>/Constant'
                                                                  * '<S62>/Constant'
                                                                  */
#define FctSftyMon_NoRequest           0U                        /* Referenced by:
                                                                  * '<S10>/EPBReqCnt'
                                                                  * '<S10>/Constant2'
                                                                  */
#define FctSftyMon_P                   1U                        /* Referenced by:
                                                                  * '<S7>/GearMgmt_GearShift'
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S8>/Constant3'
                                                                  * '<S9>/Constant'
                                                                  * '<S9>/Constant2'
                                                                  * '<S9>/Constant4'
                                                                  * '<S22>/Constant'
                                                                  * '<S28>/Constant'
                                                                  * '<S46>/Constant'
                                                                  * '<S66>/Constant'
                                                                  */
#define FctSftyMon_R                   3U                        /* Referenced by:
                                                                  * '<S6>/Constant4'
                                                                  * '<S7>/GearMgmt_GearShift'
                                                                  * '<S24>/Constant'
                                                                  * '<S26>/Constant'
                                                                  * '<S30>/Constant'
                                                                  * '<S34>/Constant'
                                                                  * '<S40>/Constant'
                                                                  * '<S42>/Constant'
                                                                  * '<S43>/Constant'
                                                                  * '<S55>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S59>/Constant'
                                                                  */
#define FctSftyMon_RELEASED            2U                        /* Referenced by:
                                                                  * '<S9>/FctSftyMon_EPBRels'
                                                                  * '<S12>/Constant'
                                                                  */
#define FctSftyMon_ReleaseRequest      2U                        /* Referenced by:
                                                                  * '<S10>/EPBReqCnt'
                                                                  * '<S10>/Constant1'
                                                                  */
#define FctSftyMon_SlaveMode           1U                        /* Referenced by:
                                                                  * '<S20>/Constant'
                                                                  * '<S21>/Constant'
                                                                  */
#define FctSftyMon_True                true                      /* Referenced by:
                                                                  * '<S4>/Constant1'
                                                                  * '<S4>/Constant3'
                                                                  * '<S4>/Constant4'
                                                                  * '<S4>/Constant6'
                                                                  * '<S4>/Constant7'
                                                                  * '<S5>/Constant'
                                                                  * '<S6>/Constant7'
                                                                  * '<S6>/Constant8'
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S8>/Constant'
                                                                  * '<S9>/FctSftyMon_EPBPrk'
                                                                  * '<S9>/FctSftyMon_EPBRels'
                                                                  * '<S9>/GearMgmt_EPBReqCmpl'
                                                                  */
#define FctSftyMon_U16Zero             0U                        /* Referenced by:
                                                                  * '<S9>/FctSftyMon_EPBPrk'
                                                                  * '<S9>/FctSftyMon_EPBRels'
                                                                  * '<S10>/EPBReqCnt'
                                                                  */
#define FctSftyMon_U8Zero              0U                        /* Referenced by: '<S1>/Constant' */
#define FctSftyMon_Unknown             0U                        /* Referenced by:
                                                                  * '<S8>/GearMgmt_WakeUp'
                                                                  * '<S11>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S5>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S49>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T;

/* PublicStructure Variables for Internal Data, for system '<S5>/ATOM_U16ErrHnd' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S53>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_liui;      /* '<S52>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S51>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S6>/DetectIncrease' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S63>/Delay' */
} ARID_DEF_DetectIncrease_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T ARID_DEF_ATOM_TimeCnt;/* '<S8>/ATOM_TimeCnt' */
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease;/* '<S6>/DetectIncrease' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd;/* '<S5>/ATOM_U16ErrHnd' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Fc_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S5>/ATOM_TimeCnt' */
  dt_FctSftyMon_ActGearCfmFail RTE_P_FctSftyMon_ActGearCfmFail;
  /* '<Root>/RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus' */
  dt_Nv_GearMgmtInfo RTE_RP_GearMgmtInfo_tec_GearMgm;
                       /* '<Root>/RTE_RP_GearMgmtInfo_tec_GearMgmtInfo_write' */
  uint16_T EPBCnt;                     /* '<S10>/EPBReqCnt' */
  uint16_T FctSftyMon_EPBWaitTimeCnt;  /* '<S9>/FctSftyMon_EPBRels' */
  uint16_T FctSftyMon_EPBWaitTimeCnt_npjn;/* '<S9>/FctSftyMon_EPBPrk' */
  uint8_T FctSftyMon_WakeupActGear_Enum;/* '<S8>/GearMgmt_WakeUp' */
  uint8_T FctSftyMon_ActGear_Enum;     /* '<S7>/GearMgmt_GearShift' */
  uint8_T Switch1;                     /* '<S51>/Switch1' */
  uint8_T Switch8;                     /* '<S51>/Switch8' */
  uint8_T FctSftyMon_EPBReq_Enum;      /* '<S10>/EPBReqCnt' */
  uint8_T DelayInput1_DSTATE;          /* '<S48>/Delay Input1' */
  uint8_T is_c3_CtAp_FctSftyGear;      /* '<S8>/GearMgmt_WakeUp' */
  uint8_T is_active_c3_CtAp_FctSftyGear;/* '<S8>/GearMgmt_WakeUp' */
  uint8_T is_c7_CtAp_FctSftyGear;      /* '<S7>/GearMgmt_GearShift' */
  uint8_T is_Normal;                   /* '<S7>/GearMgmt_GearShift' */
  uint8_T is_active_c7_CtAp_FctSftyGear;/* '<S7>/GearMgmt_GearShift' */
  uint8_T is_c6_CtAp_FctSftyGear;      /* '<S10>/EPBReqCnt' */
  uint8_T is_Count;                    /* '<S10>/EPBReqCnt' */
  uint8_T is_active_c6_CtAp_FctSftyGear;/* '<S10>/EPBReqCnt' */
  uint8_T is_c5_CtAp_FctSftyGear;      /* '<S9>/GearMgmt_EPBReqCmpl' */
  uint8_T is_active_c5_CtAp_FctSftyGear;/* '<S9>/GearMgmt_EPBReqCmpl' */
  uint8_T is_c4_CtAp_FctSftyGear;      /* '<S9>/FctSftyMon_EPBRels' */
  uint8_T is_active_c4_CtAp_FctSftyGear;/* '<S9>/FctSftyMon_EPBRels' */
  uint8_T is_c2_CtAp_FctSftyGear;      /* '<S9>/FctSftyMon_EPBPrk' */
  uint8_T is_active_c2_CtAp_FctSftyGear;/* '<S9>/FctSftyMon_EPBPrk' */
  boolean_T FctSftyMon_EPBPrk;         /* '<S8>/GearMgmt_WakeUp' */
  boolean_T FctSftyMon_WakeUpFinish_Flg;/* '<S8>/GearMgmt_WakeUp' */
  boolean_T Switch6;                   /* '<S51>/Switch6' */
  boolean_T FctSftyMon_AllowOutP_Flg;  /* '<S9>/FctSftyMon_EPBRels' */
  boolean_T FctSftyMon_EPBRelsReqFail_Flg;/* '<S9>/FctSftyMon_EPBRels' */
  boolean_T FctSftyMon_Allow2P_Flg;    /* '<S9>/FctSftyMon_EPBPrk' */
  boolean_T FctSftyMon_EPBPrkReqFail_Flg;/* '<S9>/FctSftyMon_EPBPrk' */
  boolean_T FctSftyMon_TarGearPInhbTq_Flg;/* '<S9>/FctSftyMon_EPBPrk' */
  boolean_T UnitDelay1_DSTATE;         /* '<S1>/Unit Delay1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S1>/Unit Delay3' */
  boolean_T UnitDelay2_DSTATE;         /* '<S1>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_ppmg;   /* '<S67>/Delay Input1' */
} ARID_DEF_CtAp_FctSftyGear_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"

extern ARID_DEF_CtAp_FctSftyGear_T CtAp_FctSftyGear_ARID_DEF;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"

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
 * '<Root>' : 'CtAp_FctSftyGear'
 * '<S1>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys'
 * '<S2>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Init'
 * '<S3>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm'
 * '<S4>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check'
 * '<S5>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC'
 * '<S6>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target'
 * '<S7>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/GearCoor'
 * '<S8>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/WakeUp'
 * '<S9>'   : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem'
 * '<S10>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBOutPutSystem'
 * '<S11>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/Subsystem'
 * '<S12>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/CompareToConstant1'
 * '<S13>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/CompareToConstant2'
 * '<S14>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/CompareToConstant3'
 * '<S15>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/FctSftyMon_EPBPrk'
 * '<S16>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/FctSftyMon_EPBRels'
 * '<S17>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBLinkerSystem/GearMgmt_EPBReqCmpl'
 * '<S18>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/EPBOutPutSystem/EPBReqCnt'
 * '<S19>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/Subsystem/CompareToConstant'
 * '<S20>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/Subsystem/CompareToConstant1'
 * '<S21>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/EPBStCfm/Subsystem/CompareToConstant2'
 * '<S22>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant1'
 * '<S23>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant10'
 * '<S24>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant11'
 * '<S25>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant12'
 * '<S26>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant13'
 * '<S27>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant14'
 * '<S28>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant15'
 * '<S29>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant16'
 * '<S30>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant17'
 * '<S31>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant18'
 * '<S32>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant19'
 * '<S33>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant2'
 * '<S34>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant20'
 * '<S35>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant21'
 * '<S36>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant22'
 * '<S37>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant23'
 * '<S38>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant24'
 * '<S39>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant25'
 * '<S40>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant26'
 * '<S41>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant3'
 * '<S42>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant4'
 * '<S43>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant5'
 * '<S44>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant6'
 * '<S45>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant7'
 * '<S46>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant8'
 * '<S47>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/CompareToConstant9'
 * '<S48>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Check/Detect Change'
 * '<S49>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC/ATOM_TimeCnt'
 * '<S50>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC/ATOM_U16ErrHnd'
 * '<S51>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S52>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S53>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_CheckDTC/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 * '<S54>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant'
 * '<S55>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant1'
 * '<S56>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant2'
 * '<S57>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant3'
 * '<S58>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant4'
 * '<S59>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant5'
 * '<S60>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant6'
 * '<S61>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant7'
 * '<S62>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/CompareToConstant8'
 * '<S63>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/Fusa_Target/DetectIncrease'
 * '<S64>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/GearCoor/GearMgmt_GearShift'
 * '<S65>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/WakeUp/ATOM_TimeCnt'
 * '<S66>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/WakeUp/CompareToConstant13'
 * '<S67>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/WakeUp/Detect Increase'
 * '<S68>'  : 'CtAp_FctSftyGear/R_FctSftyGear_Cyclic_20ms_sys/WakeUp/GearMgmt_WakeUp'
 */

/*-
 * Requirements for '<Root>': CtAp_FctSftyGear

 *
 * Inherited requirements for '<S1>/Fusa_Check':
 *  1. VCU_SW_Requirements_Specification.slreqx:76011
 *  2. VCU_SW_Requirements_Specification.slreqx:5521
 *  3. VCU_SW_Requirements_Specification.slreqx:76010
 *  4. VCU_SW_Requirements_Specification.slreqx:76012
 *  5. VCU_SW_Requirements_Specification.slreqx:76013
 *  6. VCU_SW_Requirements_Specification.slreqx:76014
 *  7. VCU_SW_Requirements_Specification.slreqx:76015
 *  8. VCU_SW_Requirements_Specification.slreqx:5522
 *  9. VCU_SW_Requirements_Specification.slreqx:5523
 *  10. VCU_SW_Requirements_Specification.slreqx:76025
 *  11. VCU_SW_Requirements_Specification.slreqx:5524
 *
 * Inherited requirements for '<S1>/Fusa_CheckDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:768
 *  2. VCU_SW_Requirements_Specification.slreqx:5531
 *  3. VCU_SW_Requirements_Specification.slreqx:5532
 *  4. VCU_SW_Requirements_Specification.slreqx:5536
 *  5. VCU_SW_Requirements_Specification.slreqx:5537
 *  6. VCU_SW_Requirements_Specification.slreqx:5538
 *
 * Inherited requirements for '<S1>/Fusa_Target':
 *  1. VCU_SW_Requirements_Specification.slreqx:11054
 *  2. VCU_SW_Requirements_Specification.slreqx:11055
 *  3. VCU_SW_Requirements_Specification.slreqx:11056
 *  4. VCU_SW_Requirements_Specification.slreqx:11057
 *
 * Inherited requirements for '<S3>/EPBLinkerSystem':
 *  1. VCU_SW_Requirements_Specification.slreqx:75987
 *  2. VCU_SW_Requirements_Specification.slreqx:75988
 *  3. VCU_SW_Requirements_Specification.slreqx:75989
 *  4. VCU_SW_Requirements_Specification.slreqx:75990
 *  5. VCU_SW_Requirements_Specification.slreqx:75991
 *  6. VCU_SW_Requirements_Specification.slreqx:75992
 *  7. VCU_SW_Requirements_Specification.slreqx:75993
 *  8. VCU_SW_Requirements_Specification.slreqx:75994
 *
 * Inherited requirements for '<S3>/EPBOutPutSystem':
 *  1. VCU_SW_Requirements_Specification.slreqx:75987
 *  2. VCU_SW_Requirements_Specification.slreqx:75988
 *  3. VCU_SW_Requirements_Specification.slreqx:75989
 *  4. VCU_SW_Requirements_Specification.slreqx:75990
 *  5. VCU_SW_Requirements_Specification.slreqx:75991
 *  6. VCU_SW_Requirements_Specification.slreqx:75992
 *
 * Inherited requirements for '<S7>/GearMgmt_GearShift':
 *  1. VCU_SW_Requirements_Specification.slreqx:76009
 *  2. VCU_SW_Requirements_Specification.slreqx:76010
 *  3. VCU_SW_Requirements_Specification.slreqx:76012
 *  4. VCU_SW_Requirements_Specification.slreqx:76013
 *  5. VCU_SW_Requirements_Specification.slreqx:76014
 *  6. VCU_SW_Requirements_Specification.slreqx:76015
 *
 * Inherited requirements for '<S8>/GearMgmt_WakeUp':
 *  1. VCU_SW_Requirements_Specification.slreqx:75996
 *  2. VCU_SW_Requirements_Specification.slreqx:75997
 *  3. VCU_SW_Requirements_Specification.slreqx:75998
 *  4. VCU_SW_Requirements_Specification.slreqx:75999
 *  5. VCU_SW_Requirements_Specification.slreqx:76000
 *  6. VCU_SW_Requirements_Specification.slreqx:76001
 *  7. VCU_SW_Requirements_Specification.slreqx:76002
 *
 * Inherited requirements for '<S9>/FctSftyMon_EPBPrk':
 *  1. VCU_SW_Requirements_Specification.slreqx:75987
 *  2. VCU_SW_Requirements_Specification.slreqx:75988
 *
 * Inherited requirements for '<S9>/FctSftyMon_EPBRels':
 *  1. VCU_SW_Requirements_Specification.slreqx:75990
 *  2. VCU_SW_Requirements_Specification.slreqx:75991
 *  3. VCU_SW_Requirements_Specification.slreqx:75992
 *
 * Inherited requirements for '<S9>/GearMgmt_EPBReqCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:75988
 *  2. VCU_SW_Requirements_Specification.slreqx:75990
 *  3. VCU_SW_Requirements_Specification.slreqx:75991
 *  4. VCU_SW_Requirements_Specification.slreqx:75992
 *
 * Inherited requirements for '<S10>/EPBReqCnt':
 *  1. VCU_SW_Requirements_Specification.slreqx:75987

 */
#endif                                 /* RTW_HEADER_CtAp_FctSftyGear_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
