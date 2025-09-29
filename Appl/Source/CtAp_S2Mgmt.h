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
 *  Filename:           CtAp_S2Mgmt.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_S2Mgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:52 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:46:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:45:06 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_S2Mgmt_h_
#define RTW_HEADER_CtAp_S2Mgmt_h_
#ifndef CtAp_S2Mgmt_COMMON_INCLUDES_
#define CtAp_S2Mgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_S2Mgmt.h"
#endif                                 /* CtAp_S2Mgmt_COMMON_INCLUDES_ */

#include "CtAp_S2Mgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_S2Mgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define S2Mgmt_Active                  true                      /* Referenced by:
                                                                  * '<S6>/Define'
                                                                  * '<S8>/Define'
                                                                  * '<S10>/Define'
                                                                  * '<S12>/Define'
                                                                  * '<S22>/Define'
                                                                  * '<S36>/Define'
                                                                  * '<S50>/Define'
                                                                  * '<S64>/Define'
                                                                  */
#define S2Mgmt_CP6VPWM                 4U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S16>/Define1'
                                                                  * '<S23>/Define1'
                                                                  */
#define S2Mgmt_ChargePreparing         1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S57>/Define1'
                                                                  */
#define S2Mgmt_CloseReq                0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S16>/Define'
                                                                  * '<S23>/Define'
                                                                  * '<S30>/Define'
                                                                  * '<S37>/Define'
                                                                  * '<S44>/Define'
                                                                  * '<S51>/Define'
                                                                  */
#define S2Mgmt_Closed                  0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S44>/Define1'
                                                                  * '<S51>/Define1'
                                                                  */
#define S2Mgmt_EmLockLockLocked        2U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_Init                    0U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S15>/Define'
                                                                  * '<S21>/Define'
                                                                  * '<S29>/Define'
                                                                  * '<S35>/Define'
                                                                  * '<S43>/Define'
                                                                  * '<S49>/Define'
                                                                  * '<S57>/Define'
                                                                  * '<S63>/Define'
                                                                  */
#define S2Mgmt_NoPreheat               0U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_OBCDisabed              9U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S15>/Define2'
                                                                  * '<S43>/Define2'
                                                                  */
#define S2Mgmt_OBCDisabling            8U                        /* Referenced by:
                                                                  * '<S15>/Define1'
                                                                  * '<S29>/Define1'
                                                                  * '<S43>/Define1'
                                                                  */
#define S2Mgmt_OBCDisaed               9U                        /* Referenced by: '<S29>/Define2' */
#define S2Mgmt_Opened                  1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S58>/Define1'
                                                                  * '<S65>/Define1'
                                                                  */
#define S2Mgmt_PreheatPrepared         2U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2CloseErr              5U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2Closed                2U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2Closing               1U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2OpenErr               6U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2OpenReq               1U                        /* Referenced by:
                                                                  * '<S2>/OBCMgmt_S2Ctrl_Flow'
                                                                  * '<S58>/Define'
                                                                  * '<S65>/Define'
                                                                  */
#define S2Mgmt_S2Opened                4U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_S2Opening               3U                        /* Referenced by: '<S2>/OBCMgmt_S2Ctrl_Flow' */
#define S2Mgmt_U8ValueZero             0U                        /* Referenced by:
                                                                  * '<S6>/Define1'
                                                                  * '<S7>/Define'
                                                                  * '<S8>/Define1'
                                                                  * '<S9>/Constant1'
                                                                  * '<S10>/Define1'
                                                                  * '<S11>/Define'
                                                                  * '<S12>/Define1'
                                                                  * '<S13>/Define'
                                                                  */
#define S2Mgmt_dt50ms                  50U                       /* Referenced by:
                                                                  * '<S6>/Define2'
                                                                  * '<S7>/Define1'
                                                                  * '<S8>/Define2'
                                                                  * '<S9>/Constant'
                                                                  * '<S10>/Define2'
                                                                  * '<S11>/Define1'
                                                                  * '<S12>/Define2'
                                                                  * '<S13>/Define1'
                                                                  * '<S22>/Define1'
                                                                  * '<S36>/Define1'
                                                                  * '<S50>/Define1'
                                                                  * '<S64>/Define1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S6>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S19>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_gt5v;      /* '<S18>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S17>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S26>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_nzrt;      /* '<S25>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_eg0u_T;

/* PublicStructure Variables for Internal Data, for system '<S22>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S27>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_S2_T;

/* PublicStructure Variables for Internal Data, for system '<S9>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S40>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_espr;      /* '<S39>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_dcso_T;

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S54>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_g230;      /* '<S53>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_hg5k_T;

/* PublicStructure Variables for Internal Data, for system '<S13>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S68>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_mpdb;      /* '<S67>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_inzr_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_S2_T ARID_DEF_ATOM_TimeCnt;/* '<S64>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_inzr_T ARID_DEF_ATOM_U16ErrorHandle;/* '<S13>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_mbvz;/* '<S12>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_S2_T ARID_DEF_ATOM_TimeCnt_cl54;/* '<S50>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_hg5k_T ARID_DEF_ATOM_U16ErrorHand_kkiq;/* '<S11>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_cxar;/* '<S10>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_S2_T ARID_DEF_ATOM_TimeCnt_bhxx;/* '<S36>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_dcso_T ARID_DEF_ATOM_U16ErrorHand_pbm3;/* '<S9>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_cv5h;/* '<S8>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_S2_T ARID_DEF_ATOM_TimeCnt_fqdq;/* '<S22>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_eg0u_T ARID_DEF_ATOM_U16ErrorHand_g2ml;/* '<S7>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_g1sm;/* '<S6>/ATOM_U16ErrorHandle' */
  dt_OBCMgmt_CPStsJmpErr RTE_P_OBCMgmt_CPStsJmpErr_Bus_t;
        /* '<Root>/RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus' */
  dt_OBCMgmt_CPStsJmpErrDTC RTE_P_OBCMgmt_CPStsJmpErrDTC_Bu;
  /* '<Root>/RTE_P_OBCMgmt_CPStsJmpErrDTC_Bus_tec_OBCMgmt_CPStsJmpErrDTC_Bus' */
  dt_OBCMgmt_OBCInpUDcLoErr RTE_P_OBCMgmt_OBCInpUDcLoErr_Bu;
  /* '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus' */
  dt_OBCMgmt_OBCInpUDcLoErrDTC RTE_P_OBCMgmt_OBCInpUDcLoErrDTC;
  /* '<Root>/RTE_P_OBCMgmt_OBCInpUDcLoErrDTC_Bus_tec_OBCMgmt_OBCInpUDcLoErrDTC_Bus' */
  dt_OBCMgmt_S2SwtClsErr RTE_P_OBCMgmt_S2SwtClsErr_Bus_t;
        /* '<Root>/RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus' */
  dt_OBCMgmt_S2SwtClsErrDTC RTE_P_OBCMgmt_S2SwtClsErrDTC_Bu;
  /* '<Root>/RTE_P_OBCMgmt_S2SwtClsErrDTC_Bus_tec_OBCMgmt_S2SwtClsErrDTC_Bus' */
  dt_OBCMgmt_S2SwtOpenErr RTE_P_OBCMgmt_S2SwtOpenErr_Bus_;
      /* '<Root>/RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus' */
  dt_OBCMgmt_S2SwtOpenErrDTC RTE_P_OBCMgmt_S2SwtOpenErrDTC_B;
  /* '<Root>/RTE_P_OBCMgmt_S2SwtOpenErrDTC_Bus_tec_OBCMgmt_S2SwtOpenErrDTC_Bus' */
  uint8_T OBCMgmt_S2SwtCtrlCmd_Enum;   /* '<S2>/OBCMgmt_S2Ctrl_Flow' */
  uint8_T Switch1;                     /* '<S66>/Switch1' */
  uint8_T Switch8;                     /* '<S66>/Switch8' */
  uint8_T Switch1_gcxj;                /* '<S52>/Switch1' */
  uint8_T Switch8_c22b;                /* '<S52>/Switch8' */
  uint8_T Switch1_hve5;                /* '<S38>/Switch1' */
  uint8_T Switch8_ml0q;                /* '<S38>/Switch8' */
  uint8_T Switch1_iwxc;                /* '<S31>/Switch1' */
  uint8_T Switch8_jasf;                /* '<S31>/Switch8' */
  uint8_T Switch1_himi;                /* '<S24>/Switch1' */
  uint8_T Switch8_nl40;                /* '<S24>/Switch8' */
  uint8_T Switch1_pfgz;                /* '<S17>/Switch1' */
  uint8_T Switch8_j4eq;                /* '<S17>/Switch8' */
  uint8_T Delay_2_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_3_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay1_2_DSTATE;             /* '<S2>/Delay1' */
  uint8_T Delay1_3_DSTATE;             /* '<S2>/Delay1' */
  uint8_T Delay2_DSTATE;               /* '<S2>/Delay2' */
  uint8_T is_c1_CtAp_S2Mgmt;           /* '<S2>/OBCMgmt_S2Ctrl_Flow' */
  uint8_T is_S2Cls;                    /* '<S2>/OBCMgmt_S2Ctrl_Flow' */
  uint8_T is_S2Opn;                    /* '<S2>/OBCMgmt_S2Ctrl_Flow' */
  uint8_T is_active_c1_CtAp_S2Mgmt;    /* '<S2>/OBCMgmt_S2Ctrl_Flow' */
  boolean_T Switch6_l2zd;              /* '<S31>/Switch6' */
  boolean_T Switch6_klig;              /* '<S17>/Switch6' */
  boolean_T Delay_4_DSTATE;            /* '<S2>/Delay' */
  boolean_T Delay1_4_DSTATE;           /* '<S2>/Delay1' */
} ARID_DEF_CtAp_S2Mgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_S2Mgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"

extern ARID_DEF_CtAp_S2Mgmt_T CtAp_S2Mgmt_ARID_DEF;

#define CtAp_S2Mgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_S2Mgmt'
 * '<S1>'   : 'CtAp_S2Mgmt/DocBlock'
 * '<S2>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Init'
 * '<S4>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle'
 * '<S5>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2Ctrl_Flow'
 * '<S6>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr'
 * '<S7>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC'
 * '<S8>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr'
 * '<S9>'   : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC'
 * '<S10>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr'
 * '<S11>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC'
 * '<S12>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr'
 * '<S13>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC'
 * '<S14>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/ATOM_U16ErrorHandle'
 * '<S15>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/OBCMgmt_S2CtrlErResetCdn'
 * '<S16>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/OBCMgmt_S2CtrlErrSetCdn'
 * '<S17>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S18>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S19>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S20>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/ATOM_U16ErrorHandle'
 * '<S21>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/OBCMgmt_S2CtrlErResetCd'
 * '<S22>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/OBCMgmt_S2CtrlErrEnaCdn'
 * '<S23>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/OBCMgmt_S2CtrlErrSetCdn'
 * '<S24>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S25>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S26>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S27>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_CPStsJmpErrDTC/OBCMgmt_S2CtrlErrEnaCdn/ATOM_TimeCnt'
 * '<S28>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/ATOM_U16ErrorHandle'
 * '<S29>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/OBCMgmt_S2CrrlErResetCdn'
 * '<S30>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/OBCMgmt_S2CrrlErrSetCdn'
 * '<S31>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S32>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S33>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S34>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/ATOM_U16ErrorHandle'
 * '<S35>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/OBCMgmt_S2CtrlErResetCdn_Flg'
 * '<S36>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/OBCMgmt_S2CtrlErrEnaCdn'
 * '<S37>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/OBCMgmt_S2CtrlErrSetCdn'
 * '<S38>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S39>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S40>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S41>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_OBCInpUDcLoErrDTC/OBCMgmt_S2CtrlErrEnaCdn/ATOM_TimeCnt'
 * '<S42>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/ATOM_U16ErrorHandle'
 * '<S43>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/OBCMgmt_S2CtrlErResetCdn'
 * '<S44>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/OBCMgmt_S2CtrlErrSetCdn'
 * '<S45>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S46>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S47>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S48>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/ATOM_U16ErrorHandle'
 * '<S49>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/OBCMgmt_S2CtrlErResetCdn'
 * '<S50>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/OBCMgmt_S2CtrlErrEnaCdn'
 * '<S51>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/OBCMgmt_S2CtrlErrSetCdn'
 * '<S52>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S53>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S54>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S55>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtClsErrDTC/OBCMgmt_S2CtrlErrEnaCdn/ATOM_TimeCnt'
 * '<S56>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/ATOM_U16ErrorHandle'
 * '<S57>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/OBCMgmt_S2CtrlErResetCdn'
 * '<S58>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/OBCMgmt_S2CtrlErrSetCdn'
 * '<S59>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S60>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S61>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S62>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/ATOM_U16ErrorHandle'
 * '<S63>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/OBCMgmt_S2CtrlErResetCdn'
 * '<S64>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/OBCMgmt_S2CtrlErrEnaCdn'
 * '<S65>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/OBCMgmt_S2CtrlErrSetCdn'
 * '<S66>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S67>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S68>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S69>'  : 'CtAp_S2Mgmt/R_S2Mgmt_Cyclic_50ms_sys/OBCMgmt_S2CtrlErrHandle/OBCMgmt_S2SwtOpenErrDTC/OBCMgmt_S2CtrlErrEnaCdn/ATOM_TimeCnt'
 */

/*-
 * Requirements for '<Root>': CtAp_S2Mgmt

 *
 * Inherited requirements for '<S6>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03395 S2 Ctrl CP Status Error
 *
 * Inherited requirements for '<S7>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03331 S2 CP Status DTC
 *  2. SWREQ_03282 S2 Ctrl Vol DTC
 *
 * Inherited requirements for '<S8>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03347 S2 Ctrl Vol Error
 *
 * Inherited requirements for '<S10>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03362 S2 Ctrl Cls Error
 *
 * Inherited requirements for '<S11>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03298 S2 Cls DTC
 *
 * Inherited requirements for '<S12>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03378 S2 Ctrl Open Error
 *
 * Inherited requirements for '<S13>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03314 S2 Open DTC

 */
#endif                                 /* RTW_HEADER_CtAp_S2Mgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
