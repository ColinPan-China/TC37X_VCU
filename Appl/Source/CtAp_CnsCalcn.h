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
 *  Filename:           CtAp_CnsCalcn.h
 *  File Creation Date: 03-Apr-2025
 *  Model Name:         CtAp_CnsCalcn
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 14:00:10 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr  3 14:30:20 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Apr 03 14:29:51 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CnsCalcn_h_
#define RTW_HEADER_CtAp_CnsCalcn_h_
#ifndef CtAp_CnsCalcn_COMMON_INCLUDES_
#define CtAp_CnsCalcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_CnsCalcn.h"
#endif                                 /* CtAp_CnsCalcn_COMMON_INCLUDES_ */

#include "CtAp_CnsCalcn_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_CnsCalcn_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define CnsCalcn_DrvReady              3U                        /* Referenced by:
                                                                  * '<S25>/Constant'
                                                                  * '<S26>/Constant'
                                                                  */
#define CnsCalcn_INIT                  0U                        /* Referenced by:
                                                                  * '<S14>/Constant'
                                                                  * '<S18>/Constant'
                                                                  * '<S29>/Constant'
                                                                  * '<S33>/Constant'
                                                                  */
#define CnsCalcn_MCUDftPwr             0.0F                      /* Referenced by:
                                                                  * '<S9>/Marco_MCUDftPwr'
                                                                  * '<S9>/Marco_MCUDftPwr1'
                                                                  */
#define CnsCalcn_Passed                false                     /* Referenced by:
                                                                  * '<S12>/Constant'
                                                                  * '<S16>/Constant'
                                                                  * '<S21>/Constant'
                                                                  * '<S22>/Constant'
                                                                  * '<S27>/Constant'
                                                                  * '<S31>/Constant'
                                                                  */
#define CnsCalcn_PwrCnsKwTran          1000.0F                   /* Referenced by:
                                                                  * '<S7>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S8>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S9>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S10>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  * '<S11>/Marco_EgyMgmt_PwrCnsKwTran'
                                                                  */
#define CnsCalcn_Sleep                 5U                        /* Referenced by:
                                                                  * '<S15>/Constant'
                                                                  * '<S19>/Constant'
                                                                  * '<S30>/Constant'
                                                                  * '<S34>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S9>/ATOM_AvgFilt' */
typedef struct {
  real32_T Delay2_DSTATE[10];          /* '<S20>/Delay2' */
  real32_T Delay3_DSTATE;              /* '<S20>/Delay3' */
  real32_T Delay1_DSTATE;              /* '<S20>/Delay1' */
} ARID_DEF_ATOM_AvgFilt_CtAp_Cn_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_AvgFilt_CtAp_Cn_T ARID_DEF_ATOM_AvgFilt;/* '<S9>/ATOM_AvgFilt' */
  real32_T Delay_DSTATE;               /* '<S7>/Delay' */
} ARID_DEF_CtAp_CnsCalcn_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_CnsCalcn_START_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"

extern ARID_DEF_CtAp_CnsCalcn_T CtAp_CnsCalcn_ARID_DEF;

#define CtAp_CnsCalcn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CnsCalcn_MemMap.h"

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
 * '<Root>' : 'CtAp_CnsCalcn'
 * '<S1>'   : 'CtAp_CnsCalcn/DocBlock'
 * '<S2>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys'
 * '<S3>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Init'
 * '<S4>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function'
 * '<S5>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Input'
 * '<S6>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Output'
 * '<S7>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_ACSysPwrCal'
 * '<S8>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_DCDCPwrCal'
 * '<S9>'   : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal'
 * '<S10>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_PackPTCPwrCal'
 * '<S11>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_V2LPwrCal'
 * '<S12>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_ACSysPwrCal/ComM_TCUNodComFailr_Flg_CP'
 * '<S13>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_ACSysPwrCal/If'
 * '<S14>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_ACSysPwrCal/ModMgmt_HvSts_Enum_CP'
 * '<S15>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_ACSysPwrCal/ModMgmt_HvSts_Enum_CP1'
 * '<S16>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_DCDCPwrCal/ComM_DCDCNodComFailr_Flg_CP'
 * '<S17>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_DCDCPwrCal/If'
 * '<S18>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_DCDCPwrCal/ModMgmt_HvSts_Enum_CP'
 * '<S19>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_DCDCPwrCal/ModMgmt_HvSts_Enum_CP1'
 * '<S20>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/ATOM_AvgFilt'
 * '<S21>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/ComM_MCUNodComFailr_Flg_CP'
 * '<S22>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/ComM_MCUNodComFailr_Flg_CP1'
 * '<S23>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/If'
 * '<S24>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/If1'
 * '<S25>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/ModMgmt_HvSts_Enum_CP1'
 * '<S26>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_MCUPwrCal/ModMgmt_HvSts_Enum_CP2'
 * '<S27>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_PackPTCPwrCal/ComM_BMSNodComFailr_Flg_CP'
 * '<S28>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_PackPTCPwrCal/If'
 * '<S29>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_PackPTCPwrCal/ModMgmt_HvSts_Enum_CP'
 * '<S30>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_PackPTCPwrCal/ModMgmt_HvSts_Enum_CP1'
 * '<S31>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_V2LPwrCal/ComM_OBCNodComFailr_Flg_CP'
 * '<S32>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_V2LPwrCal/If'
 * '<S33>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_V2LPwrCal/ModMgmt_HvSts_Enum_CP'
 * '<S34>'  : 'CtAp_CnsCalcn/R_CnsCalcn_Cyclic_100ms_sys/CtAp_CnsCalcn_Function/EgyMgmt_V2LPwrCal/ModMgmt_HvSts_Enum_CP1'
 */

/*-
 * Requirements for '<Root>': CtAp_CnsCalcn

 *
 * Inherited requirements for '<S4>/EgyMgmt_ACSysPwrCal':
 *  1. SWREQ_03829 TCU power caculate
 *  2. SWREQ_03830 TCU power caculate
 *
 * Inherited requirements for '<S4>/EgyMgmt_DCDCPwrCal':
 *  1. SWREQ_03819 DCDC power caculate
 *  2. SWREQ_03820 DCDC power caculate
 *
 * Inherited requirements for '<S4>/EgyMgmt_MCUPwrCal':
 *  1. SWREQ_03821 Motor power caculate
 *  2. SWREQ_03822 Motor power caculate
 *  3. SWREQ_03823 Moter power caculate
 *  4. SWREQ_03824 Moter power caculate
 *
 * Inherited requirements for '<S4>/EgyMgmt_PackPTCPwrCal':
 *  1. SWREQ_03827 PackPTC power caculate
 *  2. SWREQ_03828 PackPTC power caculate
 *
 * Inherited requirements for '<S4>/EgyMgmt_V2LPwrCal':
 *  1. SWREQ_03825 V2L power caculate
 *  2. SWREQ_03826 V2L power caculate
 *
 * Inherited requirements for '<S7>/If':
 *  1. SWREQ_03829 TCU power caculate
 *  2. SWREQ_03830 TCU power caculate
 *
 * Inherited requirements for '<S8>/If':
 *  1. SWREQ_03819 DCDC power caculate
 *  2. SWREQ_03820 DCDC power caculate
 *
 * Inherited requirements for '<S9>/If':
 *  1. SWREQ_03821 Motor power caculate
 *  2. SWREQ_03822 Motor power caculate
 *
 * Inherited requirements for '<S9>/If1':
 *  1. SWREQ_03823 Moter power caculate
 *  2. SWREQ_03824 Moter power caculate
 *
 * Inherited requirements for '<S10>/If':
 *  1. SWREQ_03827 PackPTC power caculate
 *  2. SWREQ_03828 PackPTC power caculate
 *
 * Inherited requirements for '<S11>/If':
 *  1. SWREQ_03825 V2L power caculate
 *  2. SWREQ_03826 V2L power caculate

 */
#endif                                 /* RTW_HEADER_CtAp_CnsCalcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
