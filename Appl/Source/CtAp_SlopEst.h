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
 *  Filename:           CtAp_SlopEst.h
 *  File Creation Date: 13-Sep-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.3.0
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Sat Sep 13 13:01:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Sat Sep 13 13:00:37 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_SlopEst_h_
#define RTW_HEADER_CtAp_SlopEst_h_
#ifndef CtAp_SlopEst_COMMON_INCLUDES_
#define CtAp_SlopEst_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_SlopEst.h"
#endif                                 /* CtAp_SlopEst_COMMON_INCLUDES_ */

#include "CtAp_SlopEst_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_SlopEst_Glb.h"
#include "CtAp_SlopEst_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define SlopEst_Vaild                  1U                        /* Referenced by: '<S5>/Constant' */
#define SlopRes_BrkPress               1U                        /* Referenced by:
                                                                  * '<S18>/Constant'
                                                                  * '<S30>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S6>/ATOM_AvgFilt' */
typedef struct {
  real32_T Delay2_DSTATE[10];          /* '<S7>/Delay2' */
  real32_T Delay3_DSTATE;              /* '<S7>/Delay3' */
  real32_T Delay1_DSTATE;              /* '<S7>/Delay1' */
} ARID_DEF_ATOM_AvgFilt_CtAp_Sl_T;

/* PublicStructure Variables for Internal Data, for system '<S6>/ATOM_TimeCnt2' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S9>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T;

/* PublicStructure Variables for Internal Data, for system '<S6>/LowPassFilter' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S33>/Delay' */
} ARID_DEF_LowPassFilter_CtAp_S_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_LowPassFilter_CtAp_S_T ARID_DEF_LowPassFilter1;/* '<S6>/LowPassFilter1' */
  ARID_DEF_LowPassFilter_CtAp_S_T ARID_DEF_LowPassFilter;/* '<S6>/LowPassFilter' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T ARID_DEF_ATOM_TimeCnt5;/* '<S6>/ATOM_TimeCnt5' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T ARID_DEF_ATOM_TimeCnt3;/* '<S6>/ATOM_TimeCnt3' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Sl_T ARID_DEF_ATOM_TimeCnt2;/* '<S6>/ATOM_TimeCnt2' */
  ARID_DEF_ATOM_AvgFilt_CtAp_Sl_T ARID_DEF_ATOM_AvgFilt;/* '<S6>/ATOM_AvgFilt' */
  real32_T Delay2_DSTATE[100];         /* '<S6>/Delay2' */
  real32_T VehMot_SlopGrd_pct;         /* '<S6>/ATOM_Chart' */
  real32_T Delay_DSTATE;               /* '<S35>/Delay' */
  real32_T Delay_DSTATE_dmmm;          /* '<S36>/Delay' */
  uint16_T RemainCnt;                  /* '<S6>/ATOM_Chart' */
  uint16_T RemainDlyCnt;               /* '<S6>/ATOM_Chart' */
  uint8_T UnitDelay_DSTATE;            /* '<S6>/Unit Delay' */
  uint8_T UnitDelay4_DSTATE;           /* '<S6>/Unit Delay4' */
  uint8_T UnitDelay5_DSTATE;           /* '<S6>/Unit Delay5' */
  uint8_T UnitDelay1_DSTATE;           /* '<S6>/Unit Delay1' */
  uint8_T UnitDelay6_DSTATE;           /* '<S6>/Unit Delay6' */
  uint8_T is_c4_CtAp_SlopEst;          /* '<S6>/ATOM_Chart' */
  uint8_T is_active_c4_CtAp_SlopEst;   /* '<S6>/ATOM_Chart' */
} ARID_DEF_CtAp_SlopEst_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_SlopEst_START_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"

extern ARID_DEF_CtAp_SlopEst_T CtAp_SlopEst_ARID_DEF;

#define CtAp_SlopEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"

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
 * '<Root>' : 'CtAp_SlopEst'
 * '<S1>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys'
 * '<S2>'   : 'CtAp_SlopEst/R_SlopEst_Init'
 * '<S3>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/CompareToConstant'
 * '<S4>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/CompareToConstant1'
 * '<S5>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/CompareToConstant2'
 * '<S6>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys'
 * '<S7>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/ATOM_AvgFilt'
 * '<S8>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/ATOM_Chart'
 * '<S9>'   : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/ATOM_TimeCnt2'
 * '<S10>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/ATOM_TimeCnt3'
 * '<S11>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/ATOM_TimeCnt5'
 * '<S12>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CalcnFormulaOne2'
 * '<S13>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/Compare To Constant2'
 * '<S14>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant'
 * '<S15>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant10'
 * '<S16>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant11'
 * '<S17>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant12'
 * '<S18>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant14'
 * '<S19>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant15'
 * '<S20>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant16'
 * '<S21>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant17'
 * '<S22>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant19'
 * '<S23>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant20'
 * '<S24>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant21'
 * '<S25>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant22'
 * '<S26>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant23'
 * '<S27>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant24'
 * '<S28>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant5'
 * '<S29>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant6'
 * '<S30>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant7'
 * '<S31>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant8'
 * '<S32>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CompareToConstant9'
 * '<S33>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/LowPassFilter'
 * '<S34>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/LowPassFilter1'
 * '<S35>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/NormalFlter1'
 * '<S36>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/NormalFlter2'
 * '<S37>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CalcnFormulaOne2/NormalFlter2'
 * '<S38>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/CalcnFormulaOne2/NormalFlter2/Compare To Constant'
 * '<S39>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/NormalFlter1/Compare To Constant'
 * '<S40>'  : 'CtAp_SlopEst/R_SlopEst_Cyclic_10ms_sys/StationaryVehicleSys/NormalFlter2/Compare To Constant'
 */

/*-
 * Requirements for '<Root>': CtAp_SlopEst

 */
#endif                                 /* RTW_HEADER_CtAp_SlopEst_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
