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
 *  Filename:           CtAp_DrvMod.h
 *  File Creation Date: 28-Jul-2025
 *  Model Name:         CtAp_DrvMod
 *  Model Version:      %<AutoIncrement:3.2.2>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul 28 15:57:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 28 15:56:21 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DrvMod_h_
#define RTW_HEADER_CtAp_DrvMod_h_
#ifndef CtAp_DrvMod_COMMON_INCLUDES_
#define CtAp_DrvMod_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DrvMod.h"
#endif                                 /* CtAp_DrvMod_COMMON_INCLUDES_ */

#include "CtAp_DrvMod_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_DrvMod_Glb.h"
#include "CtAp_DrvMod_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DrvMod_Avaliable               0U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S59>/Constant'
                                                                  */
#define DrvMod_ECO                     1U                        /* Referenced by:
                                                                  * '<S7>/Marco_ECO'
                                                                  * '<S16>/Constant'
                                                                  * '<S28>/Constant'
                                                                  * '<S64>/Constant'
                                                                  * '<S67>/Constant'
                                                                  */
#define DrvMod_Gear_P                  1U                        /* Referenced by:
                                                                  * '<S19>/Constant'
                                                                  * '<S69>/Constant'
                                                                  * '<S70>/Constant'
                                                                  */
#define DrvMod_INIT                    0U                        /* Referenced by:
                                                                  * '<S29>/Constant'
                                                                  * '<S31>/Constant'
                                                                  * '<S33>/Constant'
                                                                  * '<S35>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S77>/Constant'
                                                                  * '<S79>/Constant'
                                                                  * '<S81>/Constant'
                                                                  * '<S83>/Constant'
                                                                  * '<S85>/Constant'
                                                                  * '<S87>/Constant'
                                                                  */
#define DrvMod_Medium                  3U                        /* Referenced by:
                                                                  * '<S8>/Marco_Medium'
                                                                  * '<S8>/Marco_Medium1'
                                                                  * '<S42>/Constant'
                                                                  */
#define DrvMod_ModMgmt_RunStep         20U                       /* Referenced by:
                                                                  * '<S9>/ModMgmt_RunStep1'
                                                                  * '<S9>/ModMgmt_RunStep3'
                                                                  */
#define DrvMod_NORMAL                  2U                        /* Referenced by:
                                                                  * '<S7>/Marco_NORMAL'
                                                                  * '<S7>/Marco_NORMAL1'
                                                                  * '<S15>/Constant'
                                                                  * '<S63>/Constant'
                                                                  * '<S66>/Constant'
                                                                  */
#define DrvMod_NoWaring                0U                        /* Referenced by: '<S9>/Marco_No_Waring' */
#define DrvMod_Not_Avaliable           1U                        /* Referenced by:
                                                                  * '<S13>/Constant'
                                                                  * '<S58>/Constant'
                                                                  */
#define DrvMod_Off                     1U                        /* Referenced by:
                                                                  * '<S8>/Marco_Off'
                                                                  * '<S40>/Constant'
                                                                  * '<S51>/Constant'
                                                                  */
#define DrvMod_OnePedal                4U                        /* Referenced by:
                                                                  * '<S7>/Marco_OnePedal'
                                                                  * '<S18>/Constant'
                                                                  * '<S26>/Constant'
                                                                  * '<S27>/Constant'
                                                                  * '<S49>/Constant'
                                                                  * '<S60>/Constant'
                                                                  * '<S61>/Constant'
                                                                  * '<S62>/Constant'
                                                                  * '<S74>/Constant'
                                                                  */
#define DrvMod_Passed                  false                     /* Referenced by:
                                                                  * '<S11>/Constant'
                                                                  * '<S12>/Constant'
                                                                  * '<S56>/Constant'
                                                                  * '<S57>/Constant'
                                                                  */
#define DrvMod_SPORT                   3U                        /* Referenced by:
                                                                  * '<S7>/Marco_SPORT'
                                                                  * '<S17>/Constant'
                                                                  * '<S65>/Constant'
                                                                  * '<S68>/Constant'
                                                                  * '<S75>/Constant'
                                                                  * '<S76>/Constant'
                                                                  */
#define DrvMod_Sleep                   5U                        /* Referenced by:
                                                                  * '<S30>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S34>/Constant'
                                                                  * '<S36>/Constant'
                                                                  * '<S38>/Constant'
                                                                  * '<S78>/Constant'
                                                                  * '<S80>/Constant'
                                                                  * '<S82>/Constant'
                                                                  * '<S84>/Constant'
                                                                  * '<S86>/Constant'
                                                                  * '<S88>/Constant'
                                                                  */
#define DrvMod_Strong                  4U                        /* Referenced by:
                                                                  * '<S8>/Marco_Strong'
                                                                  * '<S39>/Constant'
                                                                  * '<S50>/Constant'
                                                                  */
#define DrvMod_WarningLvlOne           1U                        /* Referenced by: '<S9>/Marco_Warning_one' */
#define DrvMod_WarningLvlThree         3U                        /* Referenced by: '<S9>/Marco_Warning_three' */
#define DrvMod_WarningLvlTwo           2U                        /* Referenced by: '<S9>/Marco_Warning_two' */
#define DrvMod_Weak                    2U                        /* Referenced by:
                                                                  * '<S8>/Marco_Weak'
                                                                  * '<S41>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S9>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S52>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T;

/* PublicStructure Variables for Internal Data, for system '<S9>/NoEnableAndTime' */
typedef struct {
  boolean_T Delay1_DSTATE;             /* '<S92>/Delay1' */
} ARID_DEF_NoEnableAndTime_CtAp_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnableAndTime_CtAp_T ARID_DEF_NoEnableAndTime2;/* '<S9>/NoEnableAndTime2' */
  ARID_DEF_NoEnableAndTime_CtAp_T ARID_DEF_NoEnableAndTime1;/* '<S9>/NoEnableAndTime1' */
  ARID_DEF_NoEnableAndTime_CtAp_T ARID_DEF_NoEnableAndTime;/* '<S9>/NoEnableAndTime' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T ARID_DEF_ATOM_TimeCnt1;/* '<S9>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Dr_T ARID_DEF_ATOM_TimeCnt;/* '<S9>/ATOM_TimeCnt' */
  dt_ModMgmt_OnePedlWarnHiSpd RTE_P_ModMgmt_OnePedlWarnHiSpd_;
  /* '<Root>/RTE_P_ModMgmt_OnePedlWarnHiSpd_Bus_tec_ModMgmt_OnePedlWarnHiSpd_Bus' */
  dt_ModMgmt_OnePedlWarnVehFaild RTE_P_ModMgmt_OnePedlWarnVehFai;
  /* '<Root>/RTE_P_ModMgmt_OnePedlWarnVehFaild_Bus_tec_ModMgmt_OnePedlWarnVehFaild_Bus' */
  dt_ModMgmt_SptModWarnLoSOC RTE_P_ModMgmt_SptModWarnLoSOC_B;
  /* '<Root>/RTE_P_ModMgmt_SptModWarnLoSOC_Bus_tec_ModMgmt_SptModWarnLoSOC_Bus' */
  dt_Nv_ModMgmtInfo RTE_RP_ModMgmtInfo_tec_ModMgmtI;
                         /* '<Root>/RTE_RP_ModMgmtInfo_tec_ModMgmtInfo_write' */
  uint8_T Delay_DSTATE;                /* '<S8>/Delay' */
  uint8_T Delay_DSTATE_pcmp;           /* '<S7>/Delay' */
  boolean_T icLoad;                    /* '<S8>/Delay' */
  boolean_T icLoad_adij;               /* '<S7>/Delay' */
} ARID_DEF_CtAp_DrvMod_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_DrvMod_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"

extern ARID_DEF_CtAp_DrvMod_T CtAp_DrvMod_ARID_DEF;

#define CtAp_DrvMod_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvMod_MemMap.h"

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
 * '<Root>' : 'CtAp_DrvMod'
 * '<S1>'   : 'CtAp_DrvMod/DocBlock'
 * '<S2>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_DrvMod/R_DrvMod_Init'
 * '<S4>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function'
 * '<S5>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Input'
 * '<S6>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Output'
 * '<S7>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod'
 * '<S8>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts'
 * '<S9>'   : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn'
 * '<S10>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_NVM'
 * '<S11>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_CHIBSNodComFailr_Flg_CP'
 * '<S12>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_CHIBSNodComFailr_Flg_CP1'
 * '<S13>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IBSDecelReqAvl_Enum_CP'
 * '<S14>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IBSDecelReqAvl_Enum_CP1'
 * '<S15>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IVIDrvModSet_Enum_CP'
 * '<S16>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IVIDrvModSet_Enum_CP1'
 * '<S17>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IVIDrvModSet_Enum_CP2'
 * '<S18>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ComM_IVIDrvModSet_Enum_CP3'
 * '<S19>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/FctSftyMon_ActGear_Enum_CP'
 * '<S20>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If'
 * '<S21>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If1'
 * '<S22>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If2'
 * '<S23>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If3'
 * '<S24>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If4'
 * '<S25>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/If5'
 * '<S26>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_ActDrvMod_Delay_CP'
 * '<S27>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_DrvModMemInfo_Enum_CP'
 * '<S28>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_DrvModMemInfo_Enum_CP1'
 * '<S29>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP'
 * '<S30>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP1'
 * '<S31>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP2'
 * '<S32>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP3'
 * '<S33>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP4'
 * '<S34>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP5'
 * '<S35>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP6'
 * '<S36>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP7'
 * '<S37>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP8'
 * '<S38>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActDrvMod/ModMgmt_HvSts_Enum_CP9'
 * '<S39>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ComM_IVIRgnLvlSet_Enum_CP'
 * '<S40>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ComM_IVIRgnLvlSet_Enum_CP1'
 * '<S41>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ComM_IVIRgnLvlSet_Enum_CP2'
 * '<S42>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ComM_IVIRgnLvlSet_Enum_CP3'
 * '<S43>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If'
 * '<S44>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If1'
 * '<S45>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If2'
 * '<S46>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If3'
 * '<S47>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If4'
 * '<S48>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/If5'
 * '<S49>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ModMgmt_ActDrvMod_Enum_CP'
 * '<S50>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ModMgmt_ActRgnStsMemInfo_Enum_CP'
 * '<S51>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_ActRgnSts/ModMgmt_ActRgnStsMemInfo_Enum_CP1'
 * '<S52>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ATOM_TimeCnt'
 * '<S53>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ATOM_TimeCnt1'
 * '<S54>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_BMSBattDispSOC_pct_CP'
 * '<S55>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_BMSBattDispSOC_pct_CP1'
 * '<S56>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_BMSNodComFailr_Flg_CP'
 * '<S57>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_CHIBSNodComFailr_Flg_CP'
 * '<S58>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IBSDecelReqAvl_Enum_CP'
 * '<S59>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IBSDecelReqAvl_Enum_CP1'
 * '<S60>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP'
 * '<S61>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP1'
 * '<S62>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP2'
 * '<S63>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP3'
 * '<S64>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP4'
 * '<S65>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP5'
 * '<S66>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP6'
 * '<S67>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP7'
 * '<S68>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ComM_IVIDrvModSet_Enum_CP8'
 * '<S69>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/FctSftyMon_ActGear_Enum_CP'
 * '<S70>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/FctSftyMon_ActGear_Enum_CP1'
 * '<S71>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/If'
 * '<S72>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/If1'
 * '<S73>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/If2'
 * '<S74>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_ActDrvMod_Enum_CP'
 * '<S75>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_ActDrvMod_Enum_CP1'
 * '<S76>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_ActDrvMod_Enum_CP2'
 * '<S77>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP'
 * '<S78>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP1'
 * '<S79>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP10'
 * '<S80>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP11'
 * '<S81>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP2'
 * '<S82>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP3'
 * '<S83>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP4'
 * '<S84>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP5'
 * '<S85>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP6'
 * '<S86>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP7'
 * '<S87>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP8'
 * '<S88>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/ModMgmt_HvSts_Enum_CP9'
 * '<S89>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime'
 * '<S90>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime1'
 * '<S91>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime2'
 * '<S92>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime/ErrorHandleSysU16'
 * '<S93>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime1/ErrorHandleSysU16'
 * '<S94>'  : 'CtAp_DrvMod/R_DrvMod_Cyclic_20ms_sys/CtAp_DrvMod_Function/ModMgmt_DrvModSwtWarn/NoEnableAndTime2/ErrorHandleSysU16'
 */

/*-
 * Requirements for '<Root>': CtAp_DrvMod

 *
 * Inherited requirements for '<S4>/ModMgmt_ActDrvMod':
 *  1. VCU_SW_Requirements_Specification.slreqx:830
 *  2. VCU_SW_Requirements_Specification.slreqx:831
 *  3. VCU_SW_Requirements_Specification.slreqx:832
 *  4. VCU_SW_Requirements_Specification.slreqx:833
 *  5. VCU_SW_Requirements_Specification.slreqx:834
 *
 * Inherited requirements for '<S4>/ModMgmt_ActRgnSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:841
 *  2. VCU_SW_Requirements_Specification.slreqx:842
 *  3. VCU_SW_Requirements_Specification.slreqx:843
 *  4. VCU_SW_Requirements_Specification.slreqx:844
 *  5. VCU_SW_Requirements_Specification.slreqx:845
 *
 * Inherited requirements for '<S4>/ModMgmt_DrvModSwtWarn':
 *  1. VCU_SW_Requirements_Specification.slreqx:837
 *  2. VCU_SW_Requirements_Specification.slreqx:838
 *  3. VCU_SW_Requirements_Specification.slreqx:839
 *  4. VCU_SW_Requirements_Specification.slreqx:840
 *  5. VCU_SW_Requirements_Specification.slreqx:851
 *  6. VCU_SW_Requirements_Specification.slreqx:852
 *  7. VCU_SW_Requirements_Specification.slreqx:859
 *  8. VCU_SW_Requirements_Specification.slreqx:860
 *  9. VCU_SW_Requirements_Specification.slreqx:864
 *  10. VCU_SW_Requirements_Specification.slreqx:865
 *  11. VCU_SW_Requirements_Specification.slreqx:872
 *  12. VCU_SW_Requirements_Specification.slreqx:873
 *  13. VCU_SW_Requirements_Specification.slreqx:877
 *  14. VCU_SW_Requirements_Specification.slreqx:878
 *  15. VCU_SW_Requirements_Specification.slreqx:885
 *  16. VCU_SW_Requirements_Specification.slreqx:886
 *
 * Inherited requirements for '<S4>/ModMgmt_NVM':
 *  1. VCU_SW_Requirements_Specification.slreqx:835
 *  2. VCU_SW_Requirements_Specification.slreqx:846
 *
 * Inherited requirements for '<S8>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:846
 *
 * Inherited requirements for '<S9>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:837
 *
 * Inherited requirements for '<S9>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:838
 *
 * Inherited requirements for '<S9>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:839
 *  2. VCU_SW_Requirements_Specification.slreqx:840

 */
#endif                                 /* RTW_HEADER_CtAp_DrvMod_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
