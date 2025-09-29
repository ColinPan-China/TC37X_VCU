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
 *  Filename:           CtAp_GearCal.h
 *  File Creation Date: 04-Jul-2025
 *  Model Name:         CtAp_GearCal
 *  Model Version:      3.2.0
 *  Model Author:       JackyWang - Tue Mar 25 17:28:11 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jul  4 18:52:28 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jul 04 18:51:54 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_GearCal_h_
#define RTW_HEADER_CtAp_GearCal_h_
#ifndef CtAp_GearCal_COMMON_INCLUDES_
#define CtAp_GearCal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_GearCal.h"
#endif                                 /* CtAp_GearCal_COMMON_INCLUDES_ */

#include "CtAp_GearCal_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_GearCal_Glb.h"
#include "CtAp_GearCal_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define GearCal_ADASTar                3U                        /* Referenced by: '<S13>/Constant' */
#define GearCal_ADCUACCMod_ActiveState 1U                        /* Referenced by: '<S42>/Constant' */
#define GearCal_ADCUACCMod_OverrideState 2U                      /* Referenced by: '<S43>/Constant' */
#define GearCal_ADCUACCMod_ShutOffState 3U                       /* Referenced by: '<S44>/Constant' */
#define GearCal_ADCUAEBSt_Active       2U                        /* Referenced by: '<S41>/Constant' */
#define GearCal_ADCUDAMod_Active       3U                        /* Referenced by: '<S45>/Constant' */
#define GearCal_ADCUDAMod_OverrideLateral 5U                     /* Referenced by: '<S48>/Constant' */
#define GearCal_ADCUDAMod_OverrideLongitudinal 4U                /* Referenced by: '<S46>/Constant' */
#define GearCal_ADCUPrkMod_Failure     7U                        /* Referenced by: '<S39>/Constant' */
#define GearCal_ADCUPrkMod_GuidanceActive 4U                     /* Referenced by: '<S53>/Constant' */
#define GearCal_ADCUPrkMod_Terminated  8U                        /* Referenced by: '<S40>/Constant' */
#define GearCal_AcclrTooLrg            5U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_AutoNTar               2U                        /* Referenced by: '<S13>/Constant1' */
#define GearCal_AutoPTar               1U                        /* Referenced by: '<S13>/Constant2' */
#define GearCal_AutoPTrigger           14U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_BackWard               2U                        /* Referenced by: '<S114>/Constant' */
#define GearCal_BrkInvaild             2U                        /* Referenced by: '<S89>/Constant' */
#define GearCal_BrkNotPress            1U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_BrkPress               1U                        /* Referenced by: '<S88>/Constant' */
#define GearCal_Cycle                  20U                       /* Referenced by: '<S11>/ATOM_Chart' */
#define GearCal_DrvReady               3U                        /* Referenced by:
                                                                  * '<S135>/Constant'
                                                                  * '<S113>/Constant'
                                                                  */
#define GearCal_EPBPrkFail             9U                        /* Referenced by:
                                                                  * '<S11>/GearCal'
                                                                  * '<S67>/Constant'
                                                                  */
#define GearCal_EPBRelsFail            10U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_False                  false                     /* Referenced by:
                                                                  * '<S7>/Constant1'
                                                                  * '<S7>/Constant2'
                                                                  * '<S7>/Constant3'
                                                                  * '<S7>/Constant4'
                                                                  * '<S11>/ATOM_Chart'
                                                                  */
#define GearCal_FltDetd                12U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_ForWard                1U                        /* Referenced by: '<S115>/Constant' */
#define GearCal_GearD                  4U                        /* Referenced by:
                                                                  * '<S30>/Constant'
                                                                  * '<S37>/Constant'
                                                                  * '<S56>/Constant'
                                                                  * '<S60>/Constant'
                                                                  * '<S63>/Constant'
                                                                  * '<S69>/Constant'
                                                                  * '<S75>/Constant2'
                                                                  * '<S75>/Constant4'
                                                                  * '<S75>/Constant7'
                                                                  * '<S141>/Constant7'
                                                                  * '<S80>/Constant'
                                                                  * '<S92>/Constant'
                                                                  * '<S96>/Constant'
                                                                  * '<S98>/Constant'
                                                                  * '<S106>/Constant'
                                                                  * '<S109>/Constant'
                                                                  * '<S147>/Constant'
                                                                  * '<S152>/Constant'
                                                                  */
#define GearCal_GearDefault            0U                        /* Referenced by:
                                                                  * '<S8>/Constant3'
                                                                  * '<S8>/Constant5'
                                                                  * '<S10>/Constant'
                                                                  * '<S14>/Constant1'
                                                                  * '<S14>/Constant19'
                                                                  * '<S14>/Constant2'
                                                                  * '<S14>/Constant20'
                                                                  * '<S14>/Constant3'
                                                                  * '<S14>/Constant4'
                                                                  * '<S15>/Constant3'
                                                                  * '<S75>/Constant10'
                                                                  * '<S75>/Constant9'
                                                                  * '<S132>/Constant14'
                                                                  * '<S137>/Constant'
                                                                  * '<S139>/Constant14'
                                                                  * '<S140>/Constant13'
                                                                  * '<S140>/Constant22'
                                                                  * '<S141>/Constant12'
                                                                  * '<S141>/Constant8'
                                                                  * '<S141>/Constant9'
                                                                  * '<S143>/Constant'
                                                                  * '<S78>/Constant'
                                                                  * '<S84>/Constant'
                                                                  * '<S85>/Constant'
                                                                  */
#define GearCal_GearN                  2U                        /* Referenced by:
                                                                  * '<S8>/Constant4'
                                                                  * '<S15>/Constant1'
                                                                  * '<S36>/Constant'
                                                                  * '<S54>/Constant'
                                                                  * '<S58>/Constant'
                                                                  * '<S61>/Constant'
                                                                  * '<S75>/Constant'
                                                                  * '<S75>/Constant5'
                                                                  * '<S75>/Constant6'
                                                                  * '<S141>/Constant6'
                                                                  * '<S79>/Constant'
                                                                  * '<S91>/Constant'
                                                                  * '<S94>/Constant'
                                                                  * '<S101>/Constant'
                                                                  * '<S105>/Constant'
                                                                  * '<S108>/Constant'
                                                                  * '<S145>/Constant'
                                                                  * '<S150>/Constant'
                                                                  */
#define GearCal_GearP                  1U                        /* Referenced by:
                                                                  * '<S8>/Constant2'
                                                                  * '<S15>/Constant'
                                                                  * '<S15>/Constant2'
                                                                  * '<S20>/Constant'
                                                                  * '<S32>/Constant'
                                                                  * '<S38>/Constant'
                                                                  * '<S57>/Constant'
                                                                  * '<S66>/Constant'
                                                                  * '<S140>/Constant21'
                                                                  * '<S90>/Constant'
                                                                  * '<S95>/Constant'
                                                                  * '<S99>/Constant'
                                                                  * '<S104>/Constant'
                                                                  * '<S112>/Constant'
                                                                  * '<S144>/Constant'
                                                                  * '<S149>/Constant'
                                                                  */
#define GearCal_GearR                  3U                        /* Referenced by:
                                                                  * '<S29>/Constant'
                                                                  * '<S47>/Constant'
                                                                  * '<S55>/Constant'
                                                                  * '<S59>/Constant'
                                                                  * '<S62>/Constant'
                                                                  * '<S70>/Constant'
                                                                  * '<S75>/Constant1'
                                                                  * '<S75>/Constant3'
                                                                  * '<S75>/Constant8'
                                                                  * '<S141>/Constant5'
                                                                  * '<S81>/Constant'
                                                                  * '<S93>/Constant'
                                                                  * '<S97>/Constant'
                                                                  * '<S102>/Constant'
                                                                  * '<S103>/Constant'
                                                                  * '<S110>/Constant'
                                                                  * '<S146>/Constant'
                                                                  * '<S151>/Constant'
                                                                  */
#define GearCal_Held                   2U                        /* Referenced by:
                                                                  * '<S134>/Constant'
                                                                  * '<S83>/Constant'
                                                                  * '<S155>/Constant'
                                                                  */
#define GearCal_HvReady                2U                        /* Referenced by:
                                                                  * '<S136>/Constant'
                                                                  * '<S111>/Constant'
                                                                  */
#define GearCal_IVIBtn                 3U                        /* Referenced by: '<S14>/Constant18' */
#define GearCal_ImmoForbid             15U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_Init                   1U                        /* Referenced by: '<S4>/Constant' */
#define GearCal_ManualTar              4U                        /* Referenced by: '<S13>/Constant3' */
#define GearCal_Normal                 0U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_Off                    0U                        /* Referenced by: '<S5>/Constant' */
#define GearCal_PBtn                   1U                        /* Referenced by: '<S14>/Constant16' */
#define GearCal_PEPSOFF                1U                        /* Referenced by: '<S35>/Constant' */
#define GearCal_PRNDFail               7U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_PlugDetd               6U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_Pressed                1U                        /* Referenced by:
                                                                  * '<S133>/Constant'
                                                                  * '<S82>/Constant'
                                                                  * '<S154>/Constant'
                                                                  */
#define GearCal_RNDBtn                 2U                        /* Referenced by: '<S14>/Constant17' */
#define GearCal_RNDD                   3U                        /* Referenced by: '<S160>/Constant' */
#define GearCal_RNDN                   2U                        /* Referenced by: '<S159>/Constant' */
#define GearCal_RNDR                   1U                        /* Referenced by: '<S158>/Constant' */
#define GearCal_RemoteParkMod_Failure  7U                        /* Referenced by: '<S52>/Constant' */
#define GearCal_RemoteParkMod_Moving   3U                        /* Referenced by: '<S49>/Constant' */
#define GearCal_RemoteParkMod_PassiveExit 6U                     /* Referenced by: '<S51>/Constant' */
#define GearCal_RemoteParkMod_VoluntarilyExit 5U                 /* Referenced by: '<S50>/Constant' */
#define GearCal_SWPFail                11U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_StandBy                1U                        /* Referenced by: '<S31>/Constant' */
#define GearCal_True                   true                      /* Referenced by:
                                                                  * '<S7>/Constant'
                                                                  * '<S9>/Constant'
                                                                  */
#define GearCal_U16TimeCntZero         0U                        /* Referenced by: '<S11>/ATOM_Chart' */
#define GearCal_U8GearZero             0U                        /* Referenced by:
                                                                  * '<S11>/Constant'
                                                                  * '<S65>/Constant'
                                                                  * '<S68>/Constant'
                                                                  */
#define GearCal_U8TarGearZero          0U                        /* Referenced by:
                                                                  * '<S13>/Constant4'
                                                                  * '<S13>/Constant5'
                                                                  * '<S123>/Constant'
                                                                  * '<S125>/Constant'
                                                                  * '<S127>/Constant'
                                                                  * '<S129>/Constant'
                                                                  */
#define GearCal_VehNotReady            8U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_VehSpdHigh2D           2U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_VehSpdHigh2N           13U                       /* Referenced by: '<S11>/GearCal' */
#define GearCal_VehSpdHigh2P           4U                        /* Referenced by: '<S11>/GearCal' */
#define GearCal_VehSpdHigh2R           3U                        /* Referenced by: '<S11>/GearCal' */

/* PublicStructure Variables for Internal Data, for system '<S16>/DetectChange' */
typedef struct {
  uint8_T Delay_DSTATE;                /* '<S22>/Delay' */
} ARID_DEF_DetectChange_CtAp_Ge_T;

/* PublicStructure Variables for Internal Data, for system '<S7>/ChangeNotZero1' */
typedef struct {
  ARID_DEF_DetectChange_CtAp_Ge_T ARID_DEF_DetectChange;/* '<S16>/DetectChange' */
} ARID_DEF_ChangeNotZero1_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S8>/DetectIncrease1' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S33>/Delay' */
} ARID_DEF_DetectIncrease_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease2;/* '<S15>/DetectIncrease2' */
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease1;/* '<S15>/DetectIncrease1' */
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease;/* '<S15>/DetectIncrease' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero3;/* '<S15>/ChangeNotZero3' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero2;/* '<S15>/ChangeNotZero2' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero1;/* '<S15>/ChangeNotZero1' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero;/* '<S15>/ChangeNotZero' */
  ARID_DEF_DetectChange_CtAp_Ge_T ARID_DEF_DetectChange;/* '<S122>/DetectChange' */
  ARID_DEF_DetectChange_CtAp_Ge_T ARID_DEF_DetectChange_mbvz;/* '<S121>/DetectChange' */
  ARID_DEF_DetectChange_CtAp_Ge_T ARID_DEF_DetectChange_cl54;/* '<S120>/DetectChange' */
  ARID_DEF_DetectChange_CtAp_Ge_T ARID_DEF_DetectChange_kkiq;/* '<S119>/DetectChange' */
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease2_cxar;/* '<S8>/DetectIncrease2' */
  ARID_DEF_DetectIncrease_CtAp__T ARID_DEF_DetectIncrease1_bhxx;/* '<S8>/DetectIncrease1' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero4;/* '<S7>/ChangeNotZero4' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero3_pbm3;/* '<S7>/ChangeNotZero3' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero2_cv5h;/* '<S7>/ChangeNotZero2' */
  ARID_DEF_ChangeNotZero1_CtAp__T ARID_DEF_ChangeNotZero1_fqdq;/* '<S7>/ChangeNotZero1' */
  uint16_T GearCal_InvldGearSelCnt;    /* '<S11>/ATOM_Chart' */
  uint8_T GearCal_InvldGearSel_Enum;   /* '<S11>/ATOM_Chart' */
  uint8_T DelayInput1_DSTATE;          /* '<S72>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_hmqb;     /* '<S73>/Delay Input1' */
  uint8_T OneDelay_DSTATE;             /* '<S11>/OneDelay' */
  uint8_T DelayInput1_DSTATE_gfsw;     /* '<S71>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_dnch;     /* '<S161>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_o1pd;     /* '<S157>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_li0g;     /* '<S156>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_f0r3;     /* '<S153>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_omis;     /* '<S148>/Delay Input1' */
  uint8_T Delay_DSTATE;                /* '<S13>/Delay' */
  uint8_T UnitDelay_DSTATE;            /* '<S77>/Unit Delay' */
  uint8_T DelayInput1_DSTATE_hy5a;     /* '<S86>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_krvn;     /* '<S87>/Delay Input1' */
  uint8_T is_c1_CtAp_GearCal;          /* '<S11>/ATOM_Chart' */
  boolean_T Switch_jykx;               /* '<S7>/Switch' */
  boolean_T Delay_DSTATE_hd5t;         /* '<S9>/Delay' */
  boolean_T UnitDelay_DSTATE_hdye;     /* '<S7>/Unit Delay' */
  boolean_T GearMgmt_ManSftGear_MODE;  /* '<S2>/GearMgmt_ManSftGear' */
} ARID_DEF_CtAp_GearCal_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_CtAp_GearCal_T CtAp_GearCal_ARID_DEF;

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
 * '<Root>' : 'CtAp_GearCal'
 * '<S1>'   : 'CtAp_GearCal/DocBlock'
 * '<S2>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_GearCal/R_GearCal_Init'
 * '<S4>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/CompareToConstant'
 * '<S5>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/CompareToConstant1'
 * '<S6>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear'
 * '<S7>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld'
 * '<S8>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN'
 * '<S9>'   : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPTrig'
 * '<S10>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys'
 * '<S11>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag'
 * '<S12>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys'
 * '<S13>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys'
 * '<S14>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys'
 * '<S15>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger'
 * '<S16>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero1'
 * '<S17>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero2'
 * '<S18>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero3'
 * '<S19>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero4'
 * '<S20>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/CompareToConstant'
 * '<S21>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero1/CompareToConstant'
 * '<S22>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero1/DetectChange'
 * '<S23>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero2/CompareToConstant'
 * '<S24>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero2/DetectChange'
 * '<S25>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero3/CompareToConstant'
 * '<S26>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero3/DetectChange'
 * '<S27>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero4/CompareToConstant'
 * '<S28>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/ADASVld/ChangeNotZero4/DetectChange'
 * '<S29>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/CompareToConstant'
 * '<S30>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/CompareToConstant1'
 * '<S31>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/CompareToConstant4'
 * '<S32>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/CompareToConstant5'
 * '<S33>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/DetectIncrease1'
 * '<S34>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPAutoN/DetectIncrease2'
 * '<S35>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/AutoPTrig/Compare To Constant'
 * '<S36>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant'
 * '<S37>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant1'
 * '<S38>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant10'
 * '<S39>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant12'
 * '<S40>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant13'
 * '<S41>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant14'
 * '<S42>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant15'
 * '<S43>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant16'
 * '<S44>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant17'
 * '<S45>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant18'
 * '<S46>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant19'
 * '<S47>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant2'
 * '<S48>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant20'
 * '<S49>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant21'
 * '<S50>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant22'
 * '<S51>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant23'
 * '<S52>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant24'
 * '<S53>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant25'
 * '<S54>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant27'
 * '<S55>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant28'
 * '<S56>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant29'
 * '<S57>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant3'
 * '<S58>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant4'
 * '<S59>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant5'
 * '<S60>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant6'
 * '<S61>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant7'
 * '<S62>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant8'
 * '<S63>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_ADASGearShiftSys/CompareToConstant9'
 * '<S64>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/ATOM_Chart'
 * '<S65>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant'
 * '<S66>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant1'
 * '<S67>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant2'
 * '<S68>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant3'
 * '<S69>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant4'
 * '<S70>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/CompareToConstant5'
 * '<S71>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/Detect Change'
 * '<S72>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/Detect Change1'
 * '<S73>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/Detect Change2'
 * '<S74>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_GearDiag/GearCal'
 * '<S75>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearShiftSys'
 * '<S76>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys'
 * '<S77>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys'
 * '<S78>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant'
 * '<S79>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant1'
 * '<S80>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant2'
 * '<S81>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant3'
 * '<S82>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant4'
 * '<S83>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant5'
 * '<S84>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant6'
 * '<S85>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/CompareToConstant7'
 * '<S86>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/Detect Change'
 * '<S87>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_ManunlGearVaildSys/Detect Change1'
 * '<S88>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant'
 * '<S89>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant1'
 * '<S90>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant10'
 * '<S91>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant11'
 * '<S92>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant12'
 * '<S93>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant13'
 * '<S94>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant14'
 * '<S95>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant15'
 * '<S96>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant16'
 * '<S97>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant17'
 * '<S98>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant18'
 * '<S99>'  : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant19'
 * '<S100>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant2'
 * '<S101>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant20'
 * '<S102>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant21'
 * '<S103>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant22'
 * '<S104>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant23'
 * '<S105>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant24'
 * '<S106>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant25'
 * '<S107>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant26'
 * '<S108>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant27'
 * '<S109>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant28'
 * '<S110>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant29'
 * '<S111>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant3'
 * '<S112>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant30'
 * '<S113>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant4'
 * '<S114>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant5'
 * '<S115>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant6'
 * '<S116>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant7'
 * '<S117>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant8'
 * '<S118>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_SWCdn_Sys/GearMgmt_SWCdn_Sys/CompareToConstant9'
 * '<S119>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero'
 * '<S120>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero1'
 * '<S121>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero2'
 * '<S122>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero3'
 * '<S123>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero/CompareToConstant'
 * '<S124>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero/DetectChange'
 * '<S125>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero1/CompareToConstant'
 * '<S126>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero1/DetectChange'
 * '<S127>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero2/CompareToConstant'
 * '<S128>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero2/DetectChange'
 * '<S129>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero3/CompareToConstant'
 * '<S130>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/GearCal_TragerGearSWSys/ChangeNotZero3/DetectChange'
 * '<S131>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASCfm'
 * '<S132>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASTargetCfm'
 * '<S133>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/CompareToConstant'
 * '<S134>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/CompareToConstant1'
 * '<S135>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/CompareToConstant5'
 * '<S136>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/CompareToConstant6'
 * '<S137>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/CompareToConstant7'
 * '<S138>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVICfm'
 * '<S139>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVITargetCfm'
 * '<S140>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/PButtonTargetCfm'
 * '<S141>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDButtonTargetCfm'
 * '<S142>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDCfm'
 * '<S143>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/Subsystem6'
 * '<S144>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASCfm/CompareToConstant'
 * '<S145>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASCfm/CompareToConstant1'
 * '<S146>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASCfm/CompareToConstant2'
 * '<S147>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASCfm/CompareToConstant3'
 * '<S148>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/ADASTargetCfm/Detect Change2'
 * '<S149>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVICfm/CompareToConstant'
 * '<S150>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVICfm/CompareToConstant1'
 * '<S151>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVICfm/CompareToConstant2'
 * '<S152>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVICfm/CompareToConstant3'
 * '<S153>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/IVITargetCfm/Detect Change2'
 * '<S154>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/PButtonTargetCfm/CompareToConstant2'
 * '<S155>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/PButtonTargetCfm/CompareToConstant3'
 * '<S156>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/PButtonTargetCfm/Detect Change'
 * '<S157>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDButtonTargetCfm/Detect Change1'
 * '<S158>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDCfm/CompareToConstant'
 * '<S159>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDCfm/CompareToConstant1'
 * '<S160>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/RNDCfm/CompareToConstant2'
 * '<S161>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/Gear_TarSys/Subsystem6/Detect Change'
 * '<S162>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero'
 * '<S163>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero1'
 * '<S164>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero2'
 * '<S165>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero3'
 * '<S166>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/DetectIncrease'
 * '<S167>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/DetectIncrease1'
 * '<S168>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/DetectIncrease2'
 * '<S169>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero/CompareToConstant'
 * '<S170>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero/DetectChange'
 * '<S171>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero1/CompareToConstant'
 * '<S172>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero1/DetectChange'
 * '<S173>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero2/CompareToConstant'
 * '<S174>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero2/DetectChange'
 * '<S175>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero3/CompareToConstant'
 * '<S176>' : 'CtAp_GearCal/R_GearCal_Cyclic_20ms_sys/GearMgmt_ManSftGear/UnCfmdActGearCfm_EPBTrigger/ChangeNotZero3/DetectChange'
 */

/*-
 * Requirements for '<Root>': CtAp_GearCal

 *
 * Inherited requirements for '<S6>/ADASVld':
 *  1. VCU_SW_Requirements_Specification.slreqx:76228
 *  2. VCU_SW_Requirements_Specification.slreqx:76170
 *  3. VCU_SW_Requirements_Specification.slreqx:76171
 *  4. VCU_SW_Requirements_Specification.slreqx:76173
 *  5. VCU_SW_Requirements_Specification.slreqx:76174
 *  6. VCU_SW_Requirements_Specification.slreqx:76175
 *  7. VCU_SW_Requirements_Specification.slreqx:76176
 *  8. VCU_SW_Requirements_Specification.slreqx:76179
 *  9. VCU_SW_Requirements_Specification.slreqx:76180
 *  10. VCU_SW_Requirements_Specification.slreqx:76181
 *
 * Inherited requirements for '<S6>/AutoPTrig':
 *  1. VCU_SW_Requirements_Specification.slreqx:76168
 *  2. VCU_SW_Requirements_Specification.slreqx:76169
 *
 * Inherited requirements for '<S6>/GearCal_ADASGearShiftSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76179
 *  2. VCU_SW_Requirements_Specification.slreqx:76180
 *  3. VCU_SW_Requirements_Specification.slreqx:76181
 *  4. VCU_SW_Requirements_Specification.slreqx:76182
 *
 * Inherited requirements for '<S6>/GearCal_TragerGearSWSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76226
 *  2. VCU_SW_Requirements_Specification.slreqx:76227
 *
 * Inherited requirements for '<S6>/Gear_TarSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76174
 *  2. VCU_SW_Requirements_Specification.slreqx:76175
 *  3. VCU_SW_Requirements_Specification.slreqx:76176
 *  4. VCU_SW_Requirements_Specification.slreqx:76177
 *  5. VCU_SW_Requirements_Specification.slreqx:76178
 *  6. VCU_SW_Requirements_Specification.slreqx:76179
 *  7. VCU_SW_Requirements_Specification.slreqx:76180
 *  8. VCU_SW_Requirements_Specification.slreqx:76181
 *  9. VCU_SW_Requirements_Specification.slreqx:76182
 *
 * Inherited requirements for '<S6>/UnCfmdActGearCfm_EPBTrigger':
 *  1. VCU_SW_Requirements_Specification.slreqx:76170
 *  2. VCU_SW_Requirements_Specification.slreqx:76171
 *  3. VCU_SW_Requirements_Specification.slreqx:76173
 *  4. VCU_SW_Requirements_Specification.slreqx:76179
 *  5. VCU_SW_Requirements_Specification.slreqx:76180
 *  6. VCU_SW_Requirements_Specification.slreqx:76181
 *  7. VCU_SW_Requirements_Specification.slreqx:76183
 *  8. VCU_SW_Requirements_Specification.slreqx:76184
 *  9. VCU_SW_Requirements_Specification.slreqx:76185
 *  10. VCU_SW_Requirements_Specification.slreqx:76186
 *  11. VCU_SW_Requirements_Specification.slreqx:76187
 *  12. VCU_SW_Requirements_Specification.slreqx:76188
 *  13. VCU_SW_Requirements_Specification.slreqx:76189
 *  14. VCU_SW_Requirements_Specification.slreqx:76190
 *  15. VCU_SW_Requirements_Specification.slreqx:76191
 *  16. VCU_SW_Requirements_Specification.slreqx:76192
 *  17. VCU_SW_Requirements_Specification.slreqx:76193
 *  18. VCU_SW_Requirements_Specification.slreqx:76194
 *
 * Inherited requirements for '<S11>/ATOM_Chart':
 *  1. VCU_SW_Requirements_Specification.slreqx:76224
 *  2. VCU_SW_Requirements_Specification.slreqx:76225
 *
 * Inherited requirements for '<S11>/GearCal':
 *  1. VCU_SW_Requirements_Specification.slreqx:76208
 *  2. VCU_SW_Requirements_Specification.slreqx:76209
 *  3. VCU_SW_Requirements_Specification.slreqx:76210
 *  4. VCU_SW_Requirements_Specification.slreqx:76211
 *  5. VCU_SW_Requirements_Specification.slreqx:76212
 *  6. VCU_SW_Requirements_Specification.slreqx:76213
 *  7. VCU_SW_Requirements_Specification.slreqx:76214
 *  8. VCU_SW_Requirements_Specification.slreqx:76215
 *  9. VCU_SW_Requirements_Specification.slreqx:76216
 *  10. VCU_SW_Requirements_Specification.slreqx:76217
 *  11. VCU_SW_Requirements_Specification.slreqx:76218
 *  12. VCU_SW_Requirements_Specification.slreqx:76219
 *  13. VCU_SW_Requirements_Specification.slreqx:76220
 *  14. VCU_SW_Requirements_Specification.slreqx:76221
 *  15. VCU_SW_Requirements_Specification.slreqx:76222
 *  16. VCU_SW_Requirements_Specification.slreqx:76223
 *
 * Inherited requirements for '<S12>/GearMgmt_ManunlGearShiftSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76183
 *  2. VCU_SW_Requirements_Specification.slreqx:76184
 *  3. VCU_SW_Requirements_Specification.slreqx:76185
 *  4. VCU_SW_Requirements_Specification.slreqx:76186
 *  5. VCU_SW_Requirements_Specification.slreqx:76187
 *  6. VCU_SW_Requirements_Specification.slreqx:76188
 *  7. VCU_SW_Requirements_Specification.slreqx:76189
 *  8. VCU_SW_Requirements_Specification.slreqx:76190
 *  9. VCU_SW_Requirements_Specification.slreqx:76191
 *  10. VCU_SW_Requirements_Specification.slreqx:76192
 *  11. VCU_SW_Requirements_Specification.slreqx:76193
 *  12. VCU_SW_Requirements_Specification.slreqx:76194
 *
 * Inherited requirements for '<S12>/GearMgmt_ManunlGearVaildSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76195
 *  2. VCU_SW_Requirements_Specification.slreqx:76196
 *  3. VCU_SW_Requirements_Specification.slreqx:76197
 *  4. VCU_SW_Requirements_Specification.slreqx:76198
 *  5. VCU_SW_Requirements_Specification.slreqx:76199
 *  6. VCU_SW_Requirements_Specification.slreqx:76200
 *  7. VCU_SW_Requirements_Specification.slreqx:76201
 *  8. VCU_SW_Requirements_Specification.slreqx:76202
 *  9. VCU_SW_Requirements_Specification.slreqx:76203
 *  10. VCU_SW_Requirements_Specification.slreqx:76204
 *  11. VCU_SW_Requirements_Specification.slreqx:76205
 *  12. VCU_SW_Requirements_Specification.slreqx:76206
 *  13. VCU_SW_Requirements_Specification.slreqx:76207
 *
 * Inherited requirements for '<S12>/GearMgmt_SWCdn_Sys':
 *  1. VCU_SW_Requirements_Specification.slreqx:76183
 *  2. VCU_SW_Requirements_Specification.slreqx:76184
 *  3. VCU_SW_Requirements_Specification.slreqx:76185
 *  4. VCU_SW_Requirements_Specification.slreqx:76186
 *  5. VCU_SW_Requirements_Specification.slreqx:76187
 *  6. VCU_SW_Requirements_Specification.slreqx:76188
 *  7. VCU_SW_Requirements_Specification.slreqx:76189
 *  8. VCU_SW_Requirements_Specification.slreqx:76190
 *  9. VCU_SW_Requirements_Specification.slreqx:76191
 *  10. VCU_SW_Requirements_Specification.slreqx:76192
 *  11. VCU_SW_Requirements_Specification.slreqx:76193
 *  12. VCU_SW_Requirements_Specification.slreqx:76194

 */
#endif                                 /* RTW_HEADER_CtAp_GearCal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
