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
 *  Filename:           CtAp_VehStat.h
 *  File Creation Date: 29-Oct-2024
 *  Model Name:         CtAp_VehStat
 *  Model Version:      1.27
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Oct 29 10:35:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Oct 24 12:27:13 2024
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_VehStat_h_
#define RTW_HEADER_CtAp_VehStat_h_
#ifndef CtAp_VehStat_COMMON_INCLUDES_
#define CtAp_VehStat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_VehStat.h"
#endif                                 /* CtAp_VehStat_COMMON_INCLUDES_ */

#include "CtAp_VehStat_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_VehStat_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define VehStat_Active                 true                      /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_BMSActiveCmpl          1U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_Count_Zero             0U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_DrvReady               3U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_HvReady                2U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_INIT                   0U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_Inactive               false                     /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_MCUEnaCmpl             8U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_MCUReadyCmpl           3U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_MCUStandbyCmpl         1U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_ModMgmt_RunStep        20U                       /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_NegRlyClsCmpl          4U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_PosRlyClsCmpl          4U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_PreheatPosRlyOpenCmpl  6U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_Preheating             4U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_Sleep                  5U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */
#define VehStat_Standby                1U                        /* Referenced by: '<S7>/ModMgmt_HvStatusFlow' */

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint16_T ModMgmt_HvStsCnt;           /* '<S7>/ModMgmt_HvStatusFlow' */
  uint8_T is_c2_CtAp_VehStat;          /* '<S7>/ModMgmt_HvStatusFlow' */
  uint8_T is_active_c2_CtAp_VehStat;   /* '<S7>/ModMgmt_HvStatusFlow' */
} ARID_DEF_CtAp_VehStat_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_VehStat_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"

extern ARID_DEF_CtAp_VehStat_T CtAp_VehStat_ARID_DEF;/* '<S7>/ModMgmt_HvStatusFlow' */

#define CtAp_VehStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"

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
 * '<Root>' : 'CtAp_VehStat'
 * '<S1>'   : 'CtAp_VehStat/DocBlock'
 * '<S2>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys'
 * '<S3>'   : 'CtAp_VehStat/R_VehStat_Init'
 * '<S4>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys/CtAp_VehStat_Function'
 * '<S5>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys/CtAp_VehStat_Input'
 * '<S6>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys/CtAp_VehStat_Output'
 * '<S7>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys/CtAp_VehStat_Function/ModMgmt_HvStatus'
 * '<S8>'   : 'CtAp_VehStat/R_VehStat_Cyclic_20ms_sys/CtAp_VehStat_Function/ModMgmt_HvStatus/ModMgmt_HvStatusFlow'
 */

/*-
 * Requirements for '<Root>': CtAp_VehStat

 */
#endif                                 /* RTW_HEADER_CtAp_VehStat_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
