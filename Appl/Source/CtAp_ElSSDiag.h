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
 *  Filename:           CtAp_ElSSDiag.h
 *  File Creation Date: 16-Apr-2025
 *  Model Name:         CtAp_ElSSDiag
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Fri Aug 16 10:12:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Apr 16 17:57:25 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Wed Apr 02 14:34:06 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ElSSDiag_h_
#define RTW_HEADER_CtAp_ElSSDiag_h_
#ifndef CtAp_ElSSDiag_COMMON_INCLUDES_
#define CtAp_ElSSDiag_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ElSSDiag.h"
#endif                                 /* CtAp_ElSSDiag_COMMON_INCLUDES_ */

#include "CtAp_ElSSDiag_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ElSSDiag_Glb.h"
#include "CtAp_ElSSDiag_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ElSSDiag_Active                true                      /* Referenced by:
                                                                  * '<S8>/LvMgmt_EISSDiagFlow'
                                                                  * '<S11>/Marco_Active'
                                                                  * '<S12>/Marco_Active1'
                                                                  * '<S13>/Marco_Active'
                                                                  * '<S18>/Constant'
                                                                  */
#define ElSSDiag_INIT                  0U                        /* Referenced by: '<S16>/Constant' */
#define ElSSDiag_Inactive              false                     /* Referenced by:
                                                                  * '<S8>/LvMgmt_EISSDiagFlow'
                                                                  * '<S17>/Constant'
                                                                  * '<S24>/Constant'
                                                                  * '<S25>/Constant'
                                                                  * '<S26>/Constant'
                                                                  * '<S32>/Constant'
                                                                  */
#define ElSSDiag_LvMgmt_RunStep        20U                       /* Referenced by:
                                                                  * '<S11>/LvMgmt_RunStep'
                                                                  * '<S11>/LvMgmt_RunStep1'
                                                                  * '<S12>/LvMgmt_RunStep'
                                                                  * '<S12>/LvMgmt_RunStep1'
                                                                  * '<S13>/LvMgmt_RunStep'
                                                                  * '<S13>/LvMgmt_RunStep1'
                                                                  */
#define ElSSDiag_Sleep                 5U                        /* Referenced by: '<S8>/LvMgmt_EISSDiagFlow' */
#define ElSSDiag_U8AppNMSixFour        64U                       /* Referenced by: '<S8>/LvMgmt_EISSDiagFlow' */

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_TimeCnt2' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S14>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_El_T;

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_U16ErrorHandle2' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S21>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_hzzm;      /* '<S20>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S19>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle1;/* '<S13>/ATOM_U16ErrorHandle1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_El_T ARID_DEF_ATOM_TimeCnt;/* '<S13>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle;/* '<S12>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_TimeCnt_CtAp_El_T ARID_DEF_ATOM_TimeCnt_mbvz;/* '<S12>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHandle2;/* '<S11>/ATOM_U16ErrorHandle2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_El_T ARID_DEF_ATOM_TimeCnt2;/* '<S11>/ATOM_TimeCnt2' */
  dt_LvMgmt_ECUsDiagDTC RTE_P_LvMgmt_ECUsDiagDTC_Bus_te;
          /* '<Root>/RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus' */
  dt_LvMgmt_KL15eOffDTC RTE_P_LvMgmt_KL15eOffDTC_Bus_te;
          /* '<Root>/RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus' */
  dt_LvMgmt_KL15eOnDTC RTE_P_LvMgmt_KL15eOnDTC_Bus_tec;
            /* '<Root>/RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus' */
  uint8_T Switch1;                     /* '<S33>/Switch1' */
  uint8_T Switch8;                     /* '<S33>/Switch8' */
  uint8_T Switch1_pwus;                /* '<S27>/Switch1' */
  uint8_T Switch8_k1iu;                /* '<S27>/Switch8' */
  uint8_T Switch1_bhtm;                /* '<S19>/Switch1' */
  uint8_T Switch8_d5yc;                /* '<S19>/Switch8' */
  uint8_T is_c1_CtAp_ElSSDiag;         /* '<S8>/LvMgmt_EISSDiagFlow' */
  uint8_T is_active_c1_CtAp_ElSSDiag;  /* '<S8>/LvMgmt_EISSDiagFlow' */
  uint8_T is_c2_CtAp_ElSSDiag;         /* '<S7>/LvMgmt_EISSDiag' */
  uint8_T is_active_c2_CtAp_ElSSDiag;  /* '<S7>/LvMgmt_EISSDiag' */
  boolean_T Switch6;                   /* '<S33>/Switch6' */
  boolean_T Switch6_et5r;              /* '<S27>/Switch6' */
  boolean_T Switch6_d5bd;              /* '<S19>/Switch6' */
} ARID_DEF_CtAp_ElSSDiag_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ElSSDiag_START_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"

extern ARID_DEF_CtAp_ElSSDiag_T CtAp_ElSSDiag_ARID_DEF;

#define CtAp_ElSSDiag_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"

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
 * '<Root>' : 'CtAp_ElSSDiag'
 * '<S1>'   : 'CtAp_ElSSDiag/DocBlock'
 * '<S2>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Init'
 * '<S4>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function'
 * '<S5>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Input'
 * '<S6>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Output'
 * '<S7>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts'
 * '<S8>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_StayInRun'
 * '<S9>'   : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSDiag'
 * '<S10>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC'
 * '<S11>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC'
 * '<S12>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC'
 * '<S13>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC'
 * '<S14>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ATOM_TimeCnt2'
 * '<S15>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ATOM_U16ErrorHandle2'
 * '<S16>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ModMgmt_HvSts_Enum_CP'
 * '<S17>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ModMgmt_HvSts_Enum_CP1'
 * '<S18>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ModMgmt_HvSts_Enum_CP2'
 * '<S19>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ATOM_U16ErrorHandle2/ErrorHandleSysU16'
 * '<S20>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ATOM_U16ErrorHandle2/ErrorHandleSysU16/OnDelay'
 * '<S21>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_ECUsDiagDTC/ATOM_U16ErrorHandle2/ErrorHandleSysU16/OnDelay1'
 * '<S22>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/ATOM_TimeCnt'
 * '<S23>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/ATOM_U16ErrorHandle'
 * '<S24>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/IOAbs_KL15eFb_Flg_CP1'
 * '<S25>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/LvMgmt_KL15CtrlReq_Flg_CP1'
 * '<S26>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/LvMgmt_KL15CtrlReq_Flg_CP2'
 * '<S27>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S28>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S29>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOffDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S30>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/ATOM_TimeCnt'
 * '<S31>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/ATOM_U16ErrorHandle1'
 * '<S32>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/IOAbs_KL15eFb_Flg_CP'
 * '<S33>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/ATOM_U16ErrorHandle1/ErrorHandleSysU16'
 * '<S34>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/ATOM_U16ErrorHandle1/ErrorHandleSysU16/OnDelay'
 * '<S35>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_KL15ActSts/LvMgmt_EISSErrHandleDTC/LvMgmt_KL15eOnDTC/ATOM_U16ErrorHandle1/ErrorHandleSysU16/OnDelay1'
 * '<S36>'  : 'CtAp_ElSSDiag/R_ElSSDiag_Cyclic_20ms_sys/CtAp_ElSSDiag_Function/LvMgmt_StayInRun/LvMgmt_EISSDiagFlow'
 */

/*-
 * Requirements for '<Root>': CtAp_ElSSDiag

 *
 * Inherited requirements for '<S4>/LvMgmt_KL15ActSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:86
 *  2. VCU_SW_Requirements_Specification.slreqx:87
 *  3. VCU_SW_Requirements_Specification.slreqx:88
 *  4. VCU_SW_Requirements_Specification.slreqx:89
 *  5. VCU_SW_Requirements_Specification.slreqx:90
 *  6. VCU_SW_Requirements_Specification.slreqx:91
 *
 * Inherited requirements for '<S4>/LvMgmt_StayInRun':
 *  1. VCU_SW_Requirements_Specification.slreqx:79
 *  2. VCU_SW_Requirements_Specification.slreqx:80
 *  3. VCU_SW_Requirements_Specification.slreqx:81
 *  4. VCU_SW_Requirements_Specification.slreqx:82
 *  5. VCU_SW_Requirements_Specification.slreqx:83
 *  6. VCU_SW_Requirements_Specification.slreqx:84
 *  7. VCU_SW_Requirements_Specification.slreqx:85

 */
#endif                                 /* RTW_HEADER_CtAp_ElSSDiag_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
