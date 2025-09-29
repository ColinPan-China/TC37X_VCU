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
 *  Filename:           CtAp_EmMgmt.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_EmMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:03 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 09:47:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Fri Jun 27 09:46:22 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_EmMgmt_h_
#define RTW_HEADER_CtAp_EmMgmt_h_
#ifndef CtAp_EmMgmt_COMMON_INCLUDES_
#define CtAp_EmMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_EmMgmt.h"
#endif                                 /* CtAp_EmMgmt_COMMON_INCLUDES_ */

#include "CtAp_EmMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_EmMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define EmMgmt_100Ohm                  5U                        /* Referenced by: '<S8>/Define3' */
#define EmMgmt_1500Ohm                 2U                        /* Referenced by: '<S8>/Define' */
#define EmMgmt_2000Ohm                 6U                        /* Referenced by: '<S8>/Define4' */
#define EmMgmt_220Ohm                  4U                        /* Referenced by: '<S8>/Define2' */
#define EmMgmt_2700Ohm                 7U                        /* Referenced by: '<S8>/Define5' */
#define EmMgmt_680Ohm                  3U                        /* Referenced by: '<S8>/Define1' */
#define EmMgmt_ACPlugDetected          2U                        /* Referenced by: '<S10>/Define4' */
#define EmMgmt_ARMED                   1U                        /* Referenced by:
                                                                  * '<S11>/Define1'
                                                                  * '<S19>/Constant'
                                                                  */
#define EmMgmt_Active                  true                      /* Referenced by:
                                                                  * '<S31>/Define'
                                                                  * '<S43>/Define'
                                                                  */
#define EmMgmt_CCUnconnect             0U                        /* Referenced by: '<S7>/Define2' */
#define EmMgmt_CP6V                    3U                        /* Referenced by:
                                                                  * '<S11>/Define4'
                                                                  * '<S12>/Define2'
                                                                  */
#define EmMgmt_CP9V                    1U                        /* Referenced by:
                                                                  * '<S11>/Define7'
                                                                  * '<S12>/Define3'
                                                                  */
#define EmMgmt_CP9VPWM                 2U                        /* Referenced by: '<S9>/Define8' */
#define EmMgmt_CPFault                 5U                        /* Referenced by:
                                                                  * '<S11>/Define8'
                                                                  * '<S12>/Define8'
                                                                  */
#define EmMgmt_CPUnconnect             0U                        /* Referenced by:
                                                                  * '<S11>/Define6'
                                                                  * '<S12>/Define6'
                                                                  * '<S12>/Define7'
                                                                  */
#define EmMgmt_ChargePreparing         1U                        /* Referenced by: '<S9>/Define6' */
#define EmMgmt_ChargingComplete        8U                        /* Referenced by:
                                                                  * '<S9>/Define2'
                                                                  * '<S10>/Define'
                                                                  */
#define EmMgmt_ChargingFault           9U                        /* Referenced by:
                                                                  * '<S9>/Define3'
                                                                  * '<S10>/Define1'
                                                                  */
#define EmMgmt_DISARMED                0U                        /* Referenced by:
                                                                  * '<S9>/Define4'
                                                                  * '<S14>/Define4'
                                                                  * '<S18>/Constant'
                                                                  */
#define EmMgmt_DischargePreparing      2U                        /* Referenced by: '<S14>/Define6' */
#define EmMgmt_EmLockErr               2U                        /* Referenced by: '<S7>/Define' */
#define EmMgmt_EmLockLocUnLockFailed   6U                        /* Referenced by: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define EmMgmt_EmLockLocUnLocked       4U                        /* Referenced by: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define EmMgmt_EmLockLockFailed        5U                        /* Referenced by: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define EmMgmt_EmLockLocked            2U                        /* Referenced by: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define EmMgmt_EmLockReqLock           1U                        /* Referenced by: '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
#define EmMgmt_EmLockReqUnLock         3U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S26>/Define'
                                                                  */
#define EmMgmt_HalfConnecct            1U                        /* Referenced by: '<S9>/Define7' */
#define EmMgmt_IVILock                 2U                        /* Referenced by: '<S12>/Define4' */
#define EmMgmt_IVIUnLock               1U                        /* Referenced by: '<S12>/Define10' */
#define EmMgmt_Inactive                false                     /* Referenced by: '<S11>/Define5' */
#define EmMgmt_Init                    0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S38>/Define'
                                                                  */
#define EmMgmt_LockReq                 0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S27>/Define'
                                                                  * '<S33>/Define'
                                                                  */
#define EmMgmt_Locked                  0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S27>/Define1'
                                                                  * '<S33>/Define1'
                                                                  */
#define EmMgmt_OffPlug                 1U                        /* Referenced by:
                                                                  * '<S32>/Define'
                                                                  * '<S44>/Define'
                                                                  */
#define EmMgmt_Standby                 1U                        /* Referenced by:
                                                                  * '<S9>/Define5'
                                                                  * '<S14>/Define5'
                                                                  */
#define EmMgmt_U16Zero                 0U                        /* Referenced by:
                                                                  * '<S9>/Define12'
                                                                  * '<S11>/Define12'
                                                                  * '<S11>/Define3'
                                                                  * '<S12>/Define11'
                                                                  */
#define EmMgmt_UnLockReq               1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S39>/Define'
                                                                  * '<S45>/Define'
                                                                  */
#define EmMgmt_Unlocked                1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_ElectcLockCtrl_Flow'
                                                                  * '<S9>/Define1'
                                                                  * '<S11>/Define9'
                                                                  * '<S12>/Define1'
                                                                  * '<S14>/Define1'
                                                                  * '<S39>/Define1'
                                                                  * '<S45>/Define1'
                                                                  */
#define EmMgmt_V2LComplete             12U                       /* Referenced by:
                                                                  * '<S10>/Define2'
                                                                  * '<S14>/Define2'
                                                                  */
#define EmMgmt_V2LFault                14U                       /* Referenced by:
                                                                  * '<S10>/Define3'
                                                                  * '<S14>/Define3'
                                                                  */
#define EmMgmt_V2LPlugDetected         4U                        /* Referenced by: '<S10>/Define5' */
#define EmMgmt_dt50ms                  50U                       /* Referenced by:
                                                                  * '<S9>/Define11'
                                                                  * '<S11>/Define11'
                                                                  * '<S11>/Define2'
                                                                  * '<S12>/Define5'
                                                                  * '<S12>/Define9'
                                                                  * '<S21>/Define1'
                                                                  * '<S22>/Define1'
                                                                  * '<S23>/Define1'
                                                                  * '<S24>/Define1'
                                                                  * '<S31>/Define1'
                                                                  * '<S43>/Define1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S9>/ATOM_OnDelay1' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S15>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Em_T;

/* PublicStructure Variables for Internal Data, for system '<S12>/ATOM_OffDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S20>/UnitDelay' */
} ARID_DEF_ATOM_OffDelay_CtAp_E_T;

/* PublicStructure Variables for Internal Data, for system '<S21>/NoDTAndEn' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S29>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S28>/Delay1' */
} ARID_DEF_NoDTAndEn_CtAp_EmMgm_T;

/* PublicStructure Variables for Internal Data, for system '<S22>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S35>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_EmMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<S31>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S36>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Em_T;

/* PublicStructure Variables for Internal Data, for system '<S24>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S47>/UnitDelay' */
} ARID_DEF_NoDT_CtAp_EmMgm_kiod_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Em_T ARID_DEF_ATOM_TimeCnt;/* '<S43>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_EmMgm_kiod_T ARID_DEF_NoDT;/* '<S24>/NoDT' */
  ARID_DEF_NoDTAndEn_CtAp_EmMgm_T ARID_DEF_NoDTAndEn;/* '<S23>/NoDTAndEn' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Em_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S31>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_EmMgmt_T ARID_DEF_NoDT_cl54;/* '<S22>/NoDT' */
  ARID_DEF_NoDTAndEn_CtAp_EmMgm_T ARID_DEF_NoDTAndEn_kkiq;/* '<S21>/NoDTAndEn' */
  ARID_DEF_ATOM_OffDelay_CtAp_E_T ARID_DEF_ATOM_OffDelay;/* '<S12>/ATOM_OffDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Em_T ARID_DEF_ATOM_OnDelay1;/* '<S11>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Em_T ARID_DEF_ATOM_OnDelay;/* '<S11>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Em_T ARID_DEF_ATOM_OnDelay1_cxar;/* '<S9>/ATOM_OnDelay1' */
  dt_OBCMgmt_ElectcLockClsErr RTE_P_OBCMgmt_ElectcLockClsErr_;
  /* '<Root>/RTE_P_OBCMgmt_ElectcLockClsErr_Bus_tec_OBCMgmt_ElectcLockClsErr_Bus' */
  dt_OBCMgmt_ElectcLockClsErrDTC RTE_P_OBCMgmt_ElectcLockClsErrD;
  /* '<Root>/RTE_P_OBCMgmt_ElectcLockClsErrDTC_Bus_tec_OBCMgmt_ElectcLockClsErrDTC_Bus' */
  dt_OBCMgmt_ElectcLockOpenErr RTE_P_OBCMgmt_ElectcLockOpenErr;
  /* '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErr_Bus_tec_OBCMgmt_ElectcLockOpenErr_Bus' */
  dt_OBCMgmt_ElectcLockOpenErrDTC RTE_P_OBCMgmt_ElectcLockOp_djf3;
  /* '<Root>/RTE_P_OBCMgmt_ElectcLockOpenErrDTC_Bus_tec_OBCMgmt_ElectcLockOpenErrDTC_Bus' */
  uint8_T Switch1;                     /* '<S46>/Switch1' */
  uint8_T Switch8;                     /* '<S46>/Switch8' */
  uint8_T Switch1_apyq;                /* '<S34>/Switch1' */
  uint8_T Switch8_ewzj;                /* '<S34>/Switch8' */
  uint8_T OBCMgmt_ElectcLockCtrlCmd_Enum;/* '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
  uint8_T is_c1_CtAp_EmMgmt;           /* '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
  uint8_T is_EmlockUnlocking;          /* '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
  uint8_T is_EmlockLocking;            /* '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
  uint8_T is_active_c1_CtAp_EmMgmt;    /* '<S2>/OBCMgmt_ElectcLockCtrl_Flow' */
  boolean_T Delay1_4_DSTATE;           /* '<S2>/Delay1' */
  boolean_T Delay2_4_DSTATE;           /* '<S2>/Delay2' */
  boolean_T Delay_DSTATE;              /* '<S7>/Delay' */
  boolean_T UnitDelay_DSTATE;          /* '<S31>/Unit Delay' */
  boolean_T Delay_DSTATE_ksjy;         /* '<S11>/Delay' */
  boolean_T Delay2_DSTATE;             /* '<S11>/Delay2' */
  boolean_T Delay1_DSTATE;             /* '<S11>/Delay1' */
} ARID_DEF_CtAp_EmMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_EmMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"

extern ARID_DEF_CtAp_EmMgmt_T CtAp_EmMgmt_ARID_DEF;

#define CtAp_EmMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"

/* Exported data declaration */

/*if not init use it */
#define CtAp_EmMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T OBCMgmt_ErrResElectcLockClsErr_Flg;/* '<S21>/NoDTAndEn' */
extern boolean_T OBCMgmt_ErrResElectcLockOpenErr_Flg;/* '<S23>/NoDTAndEn' */

#define CtAp_EmMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_EmMgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

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
 * '<Root>' : 'CtAp_EmMgmt'
 * '<S1>'   : 'CtAp_EmMgmt/DocBlock'
 * '<S2>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_EmMgmt/R_EmMgmt_Init'
 * '<S4>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq'
 * '<S5>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrl_Flow'
 * '<S6>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler'
 * '<S7>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_MnyUnlckCtrl'
 * '<S8>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCChrgMgmt_ACPlug_Flg'
 * '<S9>'   : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_ACChrgnReqEmlock'
 * '<S10>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_AcChrgnSts'
 * '<S11>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_BCMReqEmlock'
 * '<S12>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_HMIReqEmlock'
 * '<S13>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_ReqEmlock'
 * '<S14>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_V2LReqEmlock'
 * '<S15>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_ACChrgnReqEmlock/ATOM_OnDelay1'
 * '<S16>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_BCMReqEmlock/ATOM_OnDelay'
 * '<S17>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_BCMReqEmlock/ATOM_OnDelay1'
 * '<S18>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_BCMReqEmlock/CompareToConstant'
 * '<S19>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_BCMReqEmlock/CompareToConstant1'
 * '<S20>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ElectcLockCtrlReq/OBCMgmt_HMIReqEmlock/ATOM_OffDelay'
 * '<S21>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr'
 * '<S22>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC'
 * '<S23>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr'
 * '<S24>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC'
 * '<S25>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr/NoDTAndEn'
 * '<S26>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr/OBCMgmt_ElectcLockErrResetCdn_Flg'
 * '<S27>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr/OBCMgmt_ElectcLockErrSetCdn_Flg'
 * '<S28>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S29>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S30>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/NoDT'
 * '<S31>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/OBCMgmt_ElectcLockErrEnaCdn_Flg'
 * '<S32>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/OBCMgmt_ElectcLockErrResetCdn_Flg'
 * '<S33>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/OBCMgmt_ElectcLockErrSetCdn_Flg'
 * '<S34>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/NoDT/ErrorHandleSysU16'
 * '<S35>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S36>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockClsErrDTC/OBCMgmt_ElectcLockErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S37>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr/NoDTAndEn'
 * '<S38>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr/OBCMgmt_ElectcLockErrResetCdn_Flg'
 * '<S39>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr/OBCMgmt_ElectcLockErrSetCdn_Flg'
 * '<S40>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S41>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S42>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/NoDT'
 * '<S43>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/OBCMgmt_ElectcLockErrEnaCdn_Flg'
 * '<S44>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/OBCMgmt_ElectcLockErrResetCdn_Flg'
 * '<S45>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/OBCMgmt_ElectcLockErrSetCdn_Flg'
 * '<S46>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/NoDT/ErrorHandleSysU16'
 * '<S47>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S48>'  : 'CtAp_EmMgmt/R_EmMgmt_Cyclic_50ms_sys/OBCMgmt_ErrResElectcLockErrHandler/OBCMgmt_ErrResElectcLockOpenErrDTC/OBCMgmt_ElectcLockErrEnaCdn_Flg/ATOM_TimeCnt'
 */

/*-
 * Requirements for '<Root>': CtAp_EmMgmt

 *
 * Inherited requirements for '<S2>/OBCMgmt_MnyUnlckCtrl':
 *  1. SWREQ_03606 manual unlock
 *  2. SWREQ_03607 manual unlock
 *  3. SWREQ_03608 manual unlock
 *
 * Inherited requirements for '<S4>/OBCMgmt_ACChrgnReqEmlock':
 *  1. SWREQ_03578 charge  req Lock
 *  2. SWREQ_03584 charge  req Unlock
 *
 * Inherited requirements for '<S4>/OBCMgmt_AcChrgnSts':
 *  1. SWREQ_03582 charge status for no Charge complete
 *  2. SWREQ_03583 charge status for no Charge complete
 *  3. SWREQ_03580 charge status for no charging
 *  4. SWREQ_03581 charge status for no charging
 *
 * Inherited requirements for '<S4>/OBCMgmt_BCMReqEmlock':
 *  1. SWREQ_03576 BCM Req Lock
 *  2. SWREQ_03586 BCM Req Unlock
 *
 * Inherited requirements for '<S4>/OBCMgmt_HMIReqEmlock':
 *  1. SWREQ_03577 IVI Req Lock
 *  2. SWREQ_03585 IVI Req Unlock
 *
 * Inherited requirements for '<S4>/OBCMgmt_V2LReqEmlock':
 *  1. SWREQ_05915 discharge req Lock
 *  2. SWREQ_06494 V2L Req Unlock
 *
 * Inherited requirements for '<S21>/OBCMgmt_ElectcLockErrResetCdn_Flg':
 *  1. SWREQ_03650 em lock cls error
 *
 * Inherited requirements for '<S21>/OBCMgmt_ElectcLockErrSetCdn_Flg':
 *  1. SWREQ_03648 em lock cls error
 *
 * Inherited requirements for '<S22>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
 *  1. SWREQ_03618 em lock cls DTC
 *
 * Inherited requirements for '<S22>/OBCMgmt_ElectcLockErrResetCdn_Flg':
 *  1. SWREQ_03616 em lock cls DTC
 *
 * Inherited requirements for '<S22>/OBCMgmt_ElectcLockErrSetCdn_Flg':
 *  1. SWREQ_03614 em lock cls DTC
 *
 * Inherited requirements for '<S23>/OBCMgmt_ElectcLockErrResetCdn_Flg':
 *  1. SWREQ_03667 em lock open error
 *
 * Inherited requirements for '<S23>/OBCMgmt_ElectcLockErrSetCdn_Flg':
 *  1. SWREQ_03665 em lock open error
 *
 * Inherited requirements for '<S24>/OBCMgmt_ElectcLockErrEnaCdn_Flg':
 *  1. SWREQ_03635 em lock Open DTC
 *
 * Inherited requirements for '<S24>/OBCMgmt_ElectcLockErrResetCdn_Flg':
 *  1. SWREQ_03633 em lock Open DTC
 *
 * Inherited requirements for '<S24>/OBCMgmt_ElectcLockErrSetCdn_Flg':
 *  1. SWREQ_03631 em lock Open DTC

 */
#endif                                 /* RTW_HEADER_CtAp_EmMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
