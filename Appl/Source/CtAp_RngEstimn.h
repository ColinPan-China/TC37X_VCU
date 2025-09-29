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
 *  Filename:           CtAp_RngEstimn.h
 *  File Creation Date: 08-Aug-2025
 *  Model Name:         CtAp_RngEstimn
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:48 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  8 09:14:18 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 08 09:13:21 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_RngEstimn_h_
#define RTW_HEADER_CtAp_RngEstimn_h_
#ifndef CtAp_RngEstimn_COMMON_INCLUDES_
#define CtAp_RngEstimn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_RngEstimn.h"
#endif                                 /* CtAp_RngEstimn_COMMON_INCLUDES_ */

#include "CtAp_RngEstimn_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_RngEstimn_Glb.h"
#include "CtAp_RngEstimn_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define RngEstimn_2KM                  2000U                     /* Referenced by: '<S26>/Constant' *//* RngEstimn model define 1 */
#define RngEstimn_Ah2As                3600U                     /* Referenced by:
                                                                  * '<S13>/RngEstimn_Ah2As'
                                                                  * '<S25>/RngEstimn_Ah2As'
                                                                  *//* RngEstimn model define convert Ah to As */
#define RngEstimn_DrvReady             3U                        /* Referenced by: '<S23>/RngEstimn_DrvReady' *//* RngEstimn model define 1 */
#define RngEstimn_Dt                   0.1F                      /* Referenced by:
                                                                  * '<S16>/RngEstimn_Dt'
                                                                  * '<S16>/RngEstimn_Dt1'
                                                                  *//* RngEstimn model define sample time */
#define RngEstimn_HvReady              2U                        /* Referenced by: '<S23>/RngEstimn_HvReady' *//* RngEstimn model define 1 */
#define RngEstimn_INACTIVE             false                     /* Referenced by:
                                                                  * '<S11>/Define'
                                                                  * '<S11>/Define1'
                                                                  *//* RngEstimn model define inactive */
#define RngEstimn_OffPlug              1U                        /* Referenced by: '<S23>/RngEstimn_OffPlug' *//* RngEstimn model define 1 */
#define RngEstimn_U32_TWO              2U                        /* Referenced by:
                                                                  * '<S20>/Constant'
                                                                  * '<S21>/Constant'
                                                                  *//* RngEstimn model define 2 */
#define RngEstimn_U32_ZERO             0U                        /* Referenced by:
                                                                  * '<S11>/RngEstimn_U32_ZERO'
                                                                  * '<S11>/RngEstimn_U32_ZERO1'
                                                                  *//* RngEstimn model define 0 */
#define RngEstimn_ZERO                 0.0F                      /* Referenced by:
                                                                  * '<S10>/RngEstimn_ZERO'
                                                                  * '<S13>/RngEstimn_ZERO'
                                                                  * '<S16>/RngEstimn_PrevBMSBattIDcIttgl_As'
                                                                  * '<S18>/RngEstimn_ZERO'
                                                                  * '<S25>/RngEstimn_ZERO'
                                                                  *//* RngEstimn model define 0 */
#define RngEstimn_ZERO_MILEAGE         0.0F                      /* Referenced by: '<S16>/RngEstimn_PrevMilgIntgl_m' *//* RngEstimn model define 0 Mileage */
#define RngEstimn_kph2kps              0.27778F                  /* Referenced by:
                                                                  * '<S16>/RngEstimn_kph2kps'
                                                                  * '<S24>/RngEstimn_kph2kps'
                                                                  *//* RngEstimn model define convert km/h to km/s */
#define RngEstimn_m2km                 1000U                     /* Referenced by: '<S13>/Define' *//* RngEstimn model define convert Ah to As */
#define RngEstimn_m50km                50U                       /* Referenced by: '<S25>/RngEstimn_m50km' *//* RngEstimn model define 1 */
#define RngEstimn_pct2rat              100.0F                    /* Referenced by: '<S9>/RngEstimn_pct2rat' *//* RngEstimn model define pct 2 Num point */

/* PublicStructure Variables for Internal Data, for system '<S8>/ATOM_RS_FF' */
typedef struct {
  boolean_T UnitDelay1_DSTATE;         /* '<S32>/UnitDelay1' */
} ARID_DEF_ATOM_RS_FF_CtAp_RngE_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_RS_FF_CtAp_RngE_T ARID_DEF_ATOM_RS_FF;/* '<S8>/ATOM_RS_FF' */
  dt_Nv_RngEstimnInfo RTE_RP_RngEstimnInfo_tec_RngEst;
                     /* '<Root>/RTE_RP_RngEstimnInfo_tec_RngEstimnInfo_write' */
  real32_T RngEst_BattCurrIntegral2kmArray[25];/* '<S28>/Chart' */
  real32_T Delay2_DSTATE[25];          /* '<S22>/Delay2' */
  real32_T RngEstimn_BMSBattIDcIntglNoNvm_;/* '<S16>/Add' */
  real32_T RngEstimn_MilgIntglNoNvm_m; /* '<S16>/Add2' */
  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S24>/Discrete-Time Integrator' */
  real32_T RngEstimn_BattCurrIntegral_mbvz;
                         /* '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' */
  uint16_T RTE_RP_RngEstimnFormual2_tec_Rn[25];
             /* '<Root>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_write' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S24>/Discrete-Time Integrator' */
  int8_T RngEstimn_BattCurrIntegral_dyt0;
                         /* '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' */
  uint8_T is_active_c3_CtAp_RngEstimn; /* '<S28>/Chart' */
  boolean_T Delay3_DSTATE;             /* '<S24>/Delay3' */
  boolean_T Delay_DSTATE;              /* '<S24>/Delay' */
  boolean_T DelayInput1_DSTATE;        /* '<S27>/Delay Input1' */
  boolean_T OneDelay_DSTATE;           /* '<S11>/OneDelay' */
  boolean_T OneDelay1_DSTATE;          /* '<S11>/OneDelay1' */
  boolean_T icLoad;                    /* '<S22>/Delay2' */
} ARID_DEF_CtAp_RngEstimn_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_RngEstimn_START_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"

extern ARID_DEF_CtAp_RngEstimn_T CtAp_RngEstimn_ARID_DEF;

#define CtAp_RngEstimn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"

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
 * '<Root>' : 'CtAp_RngEstimn'
 * '<S1>'   : 'CtAp_RngEstimn/DocBlock'
 * '<S2>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys'
 * '<S3>'   : 'CtAp_RngEstimn/R_RngEstimn_Init'
 * '<S4>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/CtAp_RngEstimn_Input'
 * '<S5>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/CtAp_RngEstimn_Output'
 * '<S6>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn'
 * '<S7>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage'
 * '<S8>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/LowDriveRangeReminder'
 * '<S9>'   : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Standard_Mileage'
 * '<S10>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/BattValid'
 * '<S11>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/ClearNVM'
 * '<S12>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/ClearNVMSucess'
 * '<S13>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate'
 * '<S14>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2'
 * '<S15>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Valid'
 * '<S16>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Vehcile_Speed_And_BMS_Current_Integration'
 * '<S17>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Vehcile_Speed_And_BMS_Current_Integration_History_Calculate'
 * '<S18>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/VehicleSeedValid'
 * '<S19>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/BattValid/CompareToConstant'
 * '<S20>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/ClearNVMSucess/CompareToConstant'
 * '<S21>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/ClearNVMSucess/CompareToConstant1'
 * '<S22>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/Read'
 * '<S23>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEst_EnableIntegratorInfo_Subsystem'
 * '<S24>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem'
 * '<S25>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_DynDrvMilgFormal2Info_Subsystem'
 * '<S26>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/Compare To Constant'
 * '<S27>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/Detect Decrease'
 * '<S28>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem'
 * '<S29>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/Chart'
 * '<S30>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/Dynamic_Mileage_Calculate_Formual2/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem/SaturationDynamic'
 * '<S31>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/Dynamic_Mileage/VehicleSeedValid/CompareToConstant'
 * '<S32>'  : 'CtAp_RngEstimn/R_RngEstimn_Cyclic_100ms_sys/Function_RngEstimn/LowDriveRangeReminder/ATOM_RS_FF'
 */

/*-
 * Requirements for '<Root>': CtAp_RngEstimn

 *
 * Inherited requirements for '<S2>/CtAp_RngEstimn_Input':
 *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
 *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
 *
 * Inherited requirements for '<S6>/LowDriveRangeReminder':
 *  1. SWREQ_06454 Low drive range reminder
 *  2. SWREQ_06455 Low drive range reminder clear
 *  3. SWREQ_06456 Low drive range reminder keep
 *
 * Inherited requirements for '<S6>/Standard_Mileage':
 *  1. SWREQ_03940 Standard Mileage Display Temp Valid
 *  2. SWREQ_06452 Standard Mileage Display Temp Invalid
 *  3. SWREQ_06453 Standard Mileage Invalid Display
 *
 * Inherited requirements for '<S7>/BattValid':
 *  1. SWREQ_06042 batter Current   InValid
 *  2. SWREQ_06043 Battery Current   Valid
 *
 * Inherited requirements for '<S7>/ClearNVM':
 *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
 *  2. SWREQ_06046 Clear NVM
 *
 * Inherited requirements for '<S7>/ClearNVMSucess':
 *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
 *
 * Inherited requirements for '<S7>/Dynamic_Mileage_Calculate':
 *  1. SWREQ_03939 Dynamic Mileage invalid
 *  2. SWREQ_03938 Dynamic Mileage display
 *
 * Inherited requirements for '<S7>/Vehcile_Speed_And_BMS_Current_Integration':
 *  1. SWREQ_03936 Total mileage calculation
 *  2. SWREQ_03934 BMS Current Integration calculate
 *
 * Inherited requirements for '<S7>/Vehcile_Speed_And_BMS_Current_Integration_History_Calculate':
 *  1. SWREQ_03935 BMS Current Integration calculate remain unchanged
 *  2. SWREQ_03936 Total mileage calculation
 *  3. SWREQ_03937 Total mileage remain unchanged
 *
 * Inherited requirements for '<S7>/VehicleSeedValid':
 *  1. SWREQ_06044 Vehicle speed   InValid
 *  2. SWREQ_06045 Vehicle speed   Valid

 */
#endif                                 /* RTW_HEADER_CtAp_RngEstimn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
