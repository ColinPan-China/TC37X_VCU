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
 *  Filename:           CtAp_DCFCMgmt.h
 *  File Creation Date: 07-Jul-2025
 *  Model Name:         CtAp_DCFCMgmt
 *  Model Version:      %<AutoIncrement:3.2.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:50 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon Jul  7 16:33:09 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Mon Jul 07 16:32:15 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCFCMgmt_h_
#define RTW_HEADER_CtAp_DCFCMgmt_h_
#ifndef CtAp_DCFCMgmt_COMMON_INCLUDES_
#define CtAp_DCFCMgmt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DCFCMgmt.h"
#endif                                 /* CtAp_DCFCMgmt_COMMON_INCLUDES_ */

#include "CtAp_DCFCMgmt_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_DCFCMgmt_Glb.h"
#include "CtAp_DCFCMgmt_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DCFCMgmt_Active                true                      /* Referenced by:
                                                                  * '<S7>/Marco_Active'
                                                                  * '<S8>/Marco_Active'
                                                                  */
#define DCFCMgmt_Closing               0U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S24>/Constant'
                                                                  */
#define DCFCMgmt_DCFCClsCmpl           1U                        /* Referenced by: '<S8>/Marco_DCFCClsCmpl' */
#define DCFCMgmt_DCFCClsFailed         3U                        /* Referenced by: '<S8>/Marco_DCFCClsFailed' */
#define DCFCMgmt_DCFCOpenCmpl          2U                        /* Referenced by: '<S8>/Marco_DCFCOpenCmpl' */
#define DCFCMgmt_DCFCOpenFailed        4U                        /* Referenced by: '<S8>/Marco_DCFCOpenFailed' */
#define DCFCMgmt_DC_Plug_Detected      3U                        /* Referenced by: '<S11>/Constant' */
#define DCFCMgmt_DC_charge             3U                        /* Referenced by: '<S12>/Constant' */
#define DCFCMgmt_HvMgmt_RunStep        20U                       /* Referenced by:
                                                                  * '<S7>/HvMgmt_RunStep'
                                                                  * '<S7>/HvMgmt_RunStep1'
                                                                  * '<S8>/HvMgmt_RunStep'
                                                                  * '<S8>/HvMgmt_RunStep1'
                                                                  * '<S8>/HvMgmt_RunStep2'
                                                                  * '<S8>/HvMgmt_RunStep3'
                                                                  */
#define DCFCMgmt_Inactive              false                     /* Referenced by:
                                                                  * '<S8>/Marco_Inactive'
                                                                  * '<S13>/Constant'
                                                                  */
#define DCFCMgmt_Off_Plug              1U                        /* Referenced by: '<S10>/Constant' */
#define DCFCMgmt_Opening               1U                        /* Referenced by:
                                                                  * '<S23>/Constant'
                                                                  * '<S25>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S7>/ATOM_TimeCnt1' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S9>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_DC_T;

/* PublicStructure Variables for Internal Data, for system '<S7>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S17>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S16>/Delay1' */
} ARID_DEF_NoDT_CtAp_DCFCMgmt_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt3;/* '<S8>/ATOM_TimeCnt3' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt2;/* '<S8>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt1;/* '<S8>/ATOM_TimeCnt1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt;/* '<S8>/ATOM_TimeCnt' */
  ARID_DEF_NoDT_CtAp_DCFCMgmt_T ARID_DEF_NoDT;/* '<S7>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_DC_T ARID_DEF_ATOM_TimeCnt1_mbvz;/* '<S7>/ATOM_TimeCnt1' */
  dt_HvMgmt_DCFCRlyClsDTC RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_;
      /* '<Root>/RTE_P_HvMgmt_DCFCRlyClsDTC_Bus_tec_HvMgmt_DCFCRlyClsDTC_Bus' */
  uint8_T Switch1;                     /* '<S16>/Switch1' */
  uint8_T Switch8;                     /* '<S16>/Switch8' */
  uint8_T Delay_DSTATE;                /* '<S8>/Delay' */
  boolean_T Switch6;                   /* '<S16>/Switch6' */
} ARID_DEF_CtAp_DCFCMgmt_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_DCFCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"

extern ARID_DEF_CtAp_DCFCMgmt_T CtAp_DCFCMgmt_ARID_DEF;

#define CtAp_DCFCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"

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
 * '<Root>' : 'CtAp_DCFCMgmt'
 * '<S1>'   : 'CtAp_DCFCMgmt/DocBlock'
 * '<S2>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Init'
 * '<S4>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function'
 * '<S5>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Input'
 * '<S6>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Output'
 * '<S7>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC'
 * '<S8>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts'
 * '<S9>'   : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ATOM_TimeCnt1'
 * '<S10>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ChrMgmt_ChrgSts_Enum_CP'
 * '<S11>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ChrMgmt_ChrgSts_Enum_CP1'
 * '<S12>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ComM_BMSWrkMod_Enum_CP'
 * '<S13>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ComM_ErrResEPTCANBusOff_Flg_CP'
 * '<S14>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/ComM_PODDcPosRlySts_Enum_CP'
 * '<S15>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/NoDT'
 * '<S16>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/NoDT/ErrorHandleSysU16'
 * '<S17>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S18>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ATOM_TimeCnt'
 * '<S19>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ATOM_TimeCnt1'
 * '<S20>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ATOM_TimeCnt2'
 * '<S21>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ATOM_TimeCnt3'
 * '<S22>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ComM_PODDcPosRlySts_Enum_CP'
 * '<S23>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ComM_PODDcPosRlySts_Enum_CP1'
 * '<S24>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ComM_PODDcPosRlySts_Enum_CP2'
 * '<S25>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/ComM_PODDcPosRlySts_Enum_CP3'
 * '<S26>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/If'
 * '<S27>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/If1'
 * '<S28>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/If2'
 * '<S29>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/If3'
 * '<S30>'  : 'CtAp_DCFCMgmt/R_DCFCMgmt_Cyclic_20ms_sys/CtAp_DCFCMgmt_Function/HvMgmt_DCFCSts/If4'
 */

/*-
 * Requirements for '<Root>': CtAp_DCFCMgmt

 *
 * Inherited requirements for '<S4>/HvMgmt_DCFCDTC':
 *  1. VCU_SW_Requirements_Specification.slreqx:372
 *  2. VCU_SW_Requirements_Specification.slreqx:373
 *  3. VCU_SW_Requirements_Specification.slreqx:374
 *  4. VCU_SW_Requirements_Specification.slreqx:378
 *  5. VCU_SW_Requirements_Specification.slreqx:379
 *  6. VCU_SW_Requirements_Specification.slreqx:380
 *
 * Inherited requirements for '<S4>/HvMgmt_DCFCSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:361
 *  2. VCU_SW_Requirements_Specification.slreqx:362
 *  3. VCU_SW_Requirements_Specification.slreqx:363
 *  4. VCU_SW_Requirements_Specification.slreqx:364
 *  5. VCU_SW_Requirements_Specification.slreqx:365
 *  6. VCU_SW_Requirements_Specification.slreqx:366
 *  7. VCU_SW_Requirements_Specification.slreqx:367
 *
 * Inherited requirements for '<S8>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:361
 *  2. VCU_SW_Requirements_Specification.slreqx:362
 *
 * Inherited requirements for '<S8>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:363
 *
 * Inherited requirements for '<S8>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:364
 *
 * Inherited requirements for '<S8>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:365
 *
 * Inherited requirements for '<S8>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:366

 */
#endif                                 /* RTW_HEADER_CtAp_DCFCMgmt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
