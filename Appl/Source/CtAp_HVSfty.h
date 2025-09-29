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
 *  Filename:           CtAp_HVSfty.h
 *  File Creation Date: 12-Feb-2025
 *  Model Name:         CtAp_HVSfty
 *  Model Version:      2.1.4
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:53 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Feb 12 11:07:10 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed Feb 12 11:06:40 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_HVSfty_h_
#define RTW_HEADER_CtAp_HVSfty_h_
#ifndef CtAp_HVSfty_COMMON_INCLUDES_
#define CtAp_HVSfty_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_HVSfty.h"
#endif                                 /* CtAp_HVSfty_COMMON_INCLUDES_ */

#include "CtAp_HVSfty_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_HVSfty_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define HVSfty_Cycle                   10U                       /* Referenced by:
                                                                  * '<S4>/Constant'
                                                                  * '<S7>/Constant'
                                                                  * '<S8>/Constant'
                                                                  * '<S8>/Constant2'
                                                                  * '<S9>/Constant3'
                                                                  * '<S9>/Constant4'
                                                                  * '<S9>/Constant5'
                                                                  * '<S9>/Constant6'
                                                                  * '<S10>/Constant3'
                                                                  */
#define HVSfty_True                    true                      /* Referenced by:
                                                                  * '<S4>/Constant3'
                                                                  * '<S7>/Constant1'
                                                                  * '<S8>/Constant1'
                                                                  * '<S9>/Constant'
                                                                  * '<S9>/Constant1'
                                                                  * '<S10>/Constant'
                                                                  */
#define HVSfty_U16TimeCntZero          0U                        /* Referenced by:
                                                                  * '<S4>/Constant4'
                                                                  * '<S4>/Constant5'
                                                                  * '<S7>/Constant2'
                                                                  * '<S7>/Constant3'
                                                                  * '<S9>/Constant2'
                                                                  * '<S10>/Constant1'
                                                                  * '<S10>/Constant2'
                                                                  */
#define HVSfty_U8FaultOne              1U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S20>/Constant'
                                                                  * '<S40>/Constant'
                                                                  */
#define HVSfty_U8FaultThree            3U                        /* Referenced by:
                                                                  * '<S15>/Constant'
                                                                  * '<S23>/Constant'
                                                                  * '<S42>/Constant'
                                                                  */
#define HVSfty_U8FaultTwo              2U                        /* Referenced by:
                                                                  * '<S12>/Constant'
                                                                  * '<S21>/Constant'
                                                                  * '<S41>/Constant'
                                                                  */
#define HVSfty_U8FaultZero             0U                        /* Referenced by:
                                                                  * '<S13>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S43>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S4>/ATOM_U16ErrHnd' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S18>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_c331;      /* '<S17>/UnitDelay' */
  uint8_T Delay3_DSTATE;               /* '<S16>/Delay3' */
  boolean_T Delay1_DSTATE;             /* '<S16>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S8>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S27>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_HV_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd;/* '<S10>/ATOM_U16ErrHnd' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd_mbvz;/* '<S9>/ATOM_U16ErrHnd' */
  ARID_DEF_ATOM_TimeCnt_CtAp_HV_T ARID_DEF_ATOM_TimeCnt2;/* '<S9>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_HV_T ARID_DEF_ATOM_TimeCnt1;/* '<S9>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_HV_T ARID_DEF_ATOM_TimeCnt;/* '<S9>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd_cl54;/* '<S8>/ATOM_U16ErrHnd' */
  ARID_DEF_ATOM_TimeCnt_CtAp_HV_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S8>/ATOM_TimeCnt' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd_cxar;/* '<S7>/ATOM_U16ErrHnd' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrHnd_bhxx;/* '<S4>/ATOM_U16ErrHnd' */
  dt_ErrMgmt_DrvMotTempOvrLamp RTE_P_ErrMgmt_DrvMotTempOvrLamp;
  /* '<Root>/RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus' */
  dt_ErrMgmt_HvBattTempOvrLamp RTE_P_ErrMgmt_HvBattTempOvrLamp;
  /* '<Root>/RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus' */
  dt_ErrMgmt_InslaFlt RTE_P_ErrMgmt_InslaFlt_Bus_tec_;
              /* '<Root>/RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus' */
  dt_ErrMgmt_VCUHVILDTC RTE_P_ErrMgmt_VCUHVILDTC_Bus_te;
          /* '<Root>/RTE_P_ErrMgmt_VCUHVILDTC_Bus_tec_ErrMgmt_VCUHVILDTC_Bus' */
  dt_ErrMgmt_VehHVIL RTE_P_ErrMgmt_VehHVIL_Bus_tec_E;
                /* '<Root>/RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus' */
  uint8_T Switch;                      /* '<S44>/Switch' */
  uint8_T Switch8;                     /* '<S44>/Switch8' */
  uint8_T Switch_bwy2;                 /* '<S36>/Switch' */
  uint8_T Switch8_fo1w;                /* '<S36>/Switch8' */
  uint8_T Switch_myuc;                 /* '<S29>/Switch' */
  uint8_T Switch8_mle5;                /* '<S29>/Switch8' */
  uint8_T Switch_dneb;                 /* '<S24>/Switch' */
  uint8_T Switch8_owup;                /* '<S24>/Switch8' */
  uint8_T Switch_cl4f;                 /* '<S16>/Switch' */
  uint8_T Switch8_gb5s;                /* '<S16>/Switch8' */
  boolean_T Switch6;                   /* '<S44>/Switch6' */
  boolean_T Switch6_mfzw;              /* '<S36>/Switch6' */
  boolean_T Switch6_ddh5;              /* '<S29>/Switch6' */
  boolean_T Switch6_l0hy;              /* '<S24>/Switch6' */
  boolean_T Switch6_ac41;              /* '<S16>/Switch6' */
} ARID_DEF_CtAp_HVSfty_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_HVSfty_START_SEC_VAR_NOINIT_8
#include "CtAp_HVSfty_MemMap.h"

extern ARID_DEF_CtAp_HVSfty_T CtAp_HVSfty_ARID_DEF;

#define CtAp_HVSfty_STOP_SEC_VAR_NOINIT_8
#include "CtAp_HVSfty_MemMap.h"

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
 * '<Root>' : 'CtAp_HVSfty'
 * '<S1>'   : 'CtAp_HVSfty/DocBlock'
 * '<S2>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_HVSfty/R_HVSfty_Init'
 * '<S4>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight'
 * '<S5>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/CompareToConstant'
 * '<S6>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/CompareToConstant1'
 * '<S7>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight'
 * '<S8>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC'
 * '<S9>'   : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL'
 * '<S10>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla'
 * '<S11>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/ATOM_U16ErrHnd'
 * '<S12>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/CompareToConstant1'
 * '<S13>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/CompareToConstant2'
 * '<S14>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/CompareToConstant4'
 * '<S15>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/CompareToConstant5'
 * '<S16>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S17>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S18>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/BMSTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 * '<S19>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/ATOM_U16ErrHnd'
 * '<S20>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/CompareToConstant'
 * '<S21>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/CompareToConstant1'
 * '<S22>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/CompareToConstant2'
 * '<S23>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/CompareToConstant3'
 * '<S24>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S25>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S26>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/MCUTempOvrLight/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 * '<S27>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC/ATOM_TimeCnt'
 * '<S28>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC/ATOM_U16ErrHnd'
 * '<S29>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S30>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S31>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VCUHVILDTC/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 * '<S32>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_TimeCnt'
 * '<S33>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_TimeCnt1'
 * '<S34>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_TimeCnt2'
 * '<S35>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_U16ErrHnd'
 * '<S36>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S37>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S38>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVIL/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 * '<S39>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/ATOM_U16ErrHnd'
 * '<S40>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/CompareToConstant'
 * '<S41>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/CompareToConstant1'
 * '<S42>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/CompareToConstant2'
 * '<S43>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/CompareToConstant3'
 * '<S44>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/ATOM_U16ErrHnd/ErrorHandleSysU16'
 * '<S45>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay'
 * '<S46>'  : 'CtAp_HVSfty/R_HVSfty_Cyclic_10ms_sys/VehHVInsla/ATOM_U16ErrHnd/ErrorHandleSysU16/OnDelay1'
 */

/*-
 * Requirements for '<Root>': CtAp_HVSfty

 *
 * Inherited requirements for '<S7>/ATOM_U16ErrHnd':
 *  1. VCU_SW_Requirements_Specification.slreqx:635
 *
 * Inherited requirements for '<S10>/ATOM_U16ErrHnd':
 *  1. VCU_SW_Requirements_Specification.slreqx:659

 */
#endif                                 /* RTW_HEADER_CtAp_HVSfty_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
