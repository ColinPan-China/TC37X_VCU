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
 *  Filename:           CtAp_TorqCrossZr.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_TorqCrossZr
 *  Model Version:      1.91
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 09:25:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Thu Sep 11 09:22:59 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_TorqCrossZr_h_
#define RTW_HEADER_CtAp_TorqCrossZr_h_
#ifndef CtAp_TorqCrossZr_COMMON_INCLUDES_
#define CtAp_TorqCrossZr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_TorqCrossZr.h"
#endif                                 /* CtAp_TorqCrossZr_COMMON_INCLUDES_ */

#include "CtAp_TorqCrossZr_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_TorqCrossZr_Glb.h"
#include "CtAp_TorqCrossZr_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define TorqCrossZr_Dt                 0.01F                     /* Referenced by: '<S10>/TorqCrossZr_Dt' *//* CtAp_TorqCrossZr model sample time */
#define TorqCrossZr_ECO                1U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_ECO'
                                                                  * '<S18>/TorqCrossZr_ECO'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_GEAR_D             4U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_GEAR_D'
                                                                  * '<S12>/TorqCrossZr_GEAR_D1'
                                                                  * '<S18>/TorqCrossZr_GEAR_D1'
                                                                  *//* CtAp_TorqCrossZr model define Gear 4 */
#define TorqCrossZr_GEAR_R             3U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_GEAR_R'
                                                                  * '<S12>/TorqCrossZr_GEAR_R1'
                                                                  * '<S18>/TorqCrossZr_GEAR_R'
                                                                  * '<S18>/TorqCrossZr_GEAR_R1'
                                                                  * '<S18>/TorqCrossZr_GEAR_R2'
                                                                  *//* CtAp_TorqCrossZr model define Gear R */
#define TorqCrossZr_HIGH               4U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_HIGH'
                                                                  * '<S18>/TorqCrossZr_HIGH'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_LOW                2U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_LOW'
                                                                  * '<S18>/TorqCrossZr_LOW'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_MAX_TORQUE         1023.0F                   /* Referenced by: '<S13>/TorqCrossZr_MAX_TORQUE' *//* CtAp_TorqCrossZr model sample time */
#define TorqCrossZr_MAX_VEHICLE_SPEED  300.0F                    /* Referenced by: '<S9>/TorqCrossZr_MAX_VEHICLE_SPEED' *//* CtAp_TorqCrossZr model sample time */
#define TorqCrossZr_MIDDLE             3U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_MIDDLE'
                                                                  * '<S18>/TorqCrossZr_MIDDLE'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_MIN_TORQUE         -1023.0F                  /* Referenced by: '<S13>/TorqCrossZr_MIN_TORQUE' *//* CtAp_TorqCrossZr model sample time */
#define TorqCrossZr_MIN_VEHICLE_SPEED  -300.0F                   /* Referenced by: '<S9>/TorqCrossZr_MIN_VEHICLE_SPEED' *//* CtAp_TorqCrossZr model sample time */
#define TorqCrossZr_NORMAL             2U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_NORMAL'
                                                                  * '<S18>/TorqCrossZr_NORMAL'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_ONEPEDAL           4U                        /* Referenced by: '<S18>/TorqCrossZr_ONEPEDAL1' *//* CtAp_TorqCrossZr model define Drive mode ECO */
#define TorqCrossZr_SPORT              3U                        /* Referenced by:
                                                                  * '<S12>/TorqCrossZr_SPORT'
                                                                  * '<S18>/TorqCrossZr_SPORT'
                                                                  *//* CtAp_TorqCrossZr model define Drive mode ECO */

/* PublicStructure Variables for Internal Data, for system '<S10>/ATOM_RateRampLmt' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S15>/Delay' */
} ARID_DEF_ATOM_RateRampLmt_CtA_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_RateRampLmt_CtA_T ARID_DEF_ATOM_RateRampLmt;/* '<S10>/ATOM_RateRampLmt' */
} ARID_DEF_CtAp_TorqCrossZr_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S16>/TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP'
   *   '<S17>/TorqPahMgmt_GrdtMaxZrCrssDasTqCoeff_MAP'
   */
  uint32_T pooled2[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S16>/TorqPahMgmt_DrvAsscGrdtMaxZrCrssNegTq_MAP'
   *   '<S17>/TorqPahMgmt_DrvAsscGrdtMaxZrCrssPosTq_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqHi_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqLow_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqMid_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOff_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqEco_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqNor_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqSpt_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssTq_MAP'
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP'
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqGearRvs_MAP1'
   */
  uint32_T pooled3[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP'
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqRvsCoeff_MAP1'
   */
  uint32_T pooled4[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssNegTqOnePedl_MAP'
   *   '<S18>/TorqPahMgmt_DrvgModGrdtMaxZrCrssPosTqOnePedl_MAP'
   */
  uint32_T pooled5[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP'
   *   '<S18>/TorqPahMgmt_GrdtMaxZrCrssTqFwdCoeff_MAP1'
   */
  uint32_T pooled6[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S16>/TorqPahMgmt_GrdtMaxZrCrssNegDasTq_MAP'
   *   '<S17>/TorqPahMgmt_GrdtMaxZrCrssPosDasTq_MAP'
   */
  uint32_T pooled7[2];
} ConstP_CtAp_TorqCrossZr_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_TorqCrossZr_START_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"

extern ARID_DEF_CtAp_TorqCrossZr_T CtAp_TorqCrossZr_ARID_DEF;

#define CtAp_TorqCrossZr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_TorqCrossZr_START_SEC_VAR_CONST_8
#include "CtAp_TorqCrossZr_MemMap.h"

extern const ConstP_CtAp_TorqCrossZr_T CtAp_TorqCrossZr_ConstP;

#define CtAp_TorqCrossZr_STOP_SEC_VAR_CONST_8
#include "CtAp_TorqCrossZr_MemMap.h"

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
 * '<Root>' : 'CtAp_TorqCrossZr'
 * '<S1>'   : 'CtAp_TorqCrossZr/DocBlock'
 * '<S2>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Init'
 * '<S4>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer'
 * '<S5>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Input_Bypass'
 * '<S6>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Out_Bypass'
 * '<S7>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/IBS_TorqueActive'
 * '<S8>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Reach_Target_Torque_Gradient'
 * '<S9>'   : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/SpeedConvert'
 * '<S10>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Torque_Ramp'
 * '<S11>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/ZeroCrossing_Torque_Gradient'
 * '<S12>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Reach_Target_Torque_Gradient/DrvgMod_ReaTar'
 * '<S13>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Reach_Target_Torque_Gradient/FilZrCrssDeltaTq'
 * '<S14>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Reach_Target_Torque_Gradient/FilZrCrssDeltaTq/ATOM_Limiter'
 * '<S15>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/Torque_Ramp/ATOM_RateRampLmt'
 * '<S16>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/ZeroCrossing_Torque_Gradient/GrdtMaxZrCrssNegTq'
 * '<S17>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/ZeroCrossing_Torque_Gradient/GrdtMaxZrCrssPosTq'
 * '<S18>'  : 'CtAp_TorqCrossZr/R_TorqCrossZr_Cyclic_10ms_sys/Function_TorqueZeroCrossingFormer/ZeroCrossing_Torque_Gradient/GrdtMaxZrCrss_DrvgMod'
 */

/*-
 * Requirements for '<Root>': CtAp_TorqCrossZr

 *
 * Inherited requirements for '<S2>/Out_Bypass':
 *  1. SWREQ_01801 The function of "Torque Cross Zero" has the following outputs:
 *
 * Inherited requirements for '<S4>/Torque_Ramp':
 *  1. SWREQ_01834 Zero Cross torque Filter
 *
 * Inherited requirements for '<S8>/DrvgMod_ReaTar':
 *  1. SWREQ_01822 Reach Target Torque Gradient ECO
 *  2. SWREQ_01823 Reach Target Torque Gradient Normal
 *  3. SWREQ_01824 Reach Target Torque Gradient Sport
 *  4. SWREQ_01825 Reach Target Torque Gradient One Pedal
 *  5. SWREQ_01826 Reach Target Torque Gradient GearR
 *  6. SWREQ_01827 Reach Target Torque Gradient Init
 *  7. SWREQ_01828 Reach Target Torque Gradient OFF
 *  8. SWREQ_01829 Reach Target Torque Gradient Low
 *  9. SWREQ_01830 Reach Target Torque Gradient Middle
 *  10. SWREQ_01831 Reach Target Torque Gradient High
 *  11. SWREQ_01832 Reach Target Torque Gradient GearR
 *  12. SWREQ_01833 Reach Target Torque Gradient Init
 *  13. SWREQ_06716 Reach Target Torque Gradient ADAS and Brake
 *  14. SWREQ_06717 Reach Target Torque Gradient ADAS and Brake

 */
#endif                                 /* RTW_HEADER_CtAp_TorqCrossZr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
