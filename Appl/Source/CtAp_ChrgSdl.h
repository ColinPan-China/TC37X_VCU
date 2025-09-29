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
 *  Filename:           CtAp_ChrgSdl.h
 *  File Creation Date: 22-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu May 22 10:04:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 10:03:15 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgSdl_h_
#define RTW_HEADER_CtAp_ChrgSdl_h_
#ifndef CtAp_ChrgSdl_COMMON_INCLUDES_
#define CtAp_ChrgSdl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgSdl.h"
#endif                                 /* CtAp_ChrgSdl_COMMON_INCLUDES_ */

#include "CtAp_ChrgSdl_types.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ChrgSdl_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgSdl_100Percent             100.0F                    /* Referenced by: '<S59>/Constant1' */
#define ChrgSdl_60000ms                60000U                    /* Referenced by:
                                                                  * '<S10>/Define1'
                                                                  * '<S19>/Define1'
                                                                  */
#define ChrgSdl_ACCharging             5U                        /* Referenced by:
                                                                  * '<S8>/Define'
                                                                  * '<S9>/Define'
                                                                  * '<S44>/Constant'
                                                                  * '<S53>/Constant'
                                                                  */
#define ChrgSdl_ACPlugDetected         2U                        /* Referenced by:
                                                                  * '<S33>/Constant'
                                                                  * '<S41>/Constant'
                                                                  */
#define ChrgSdl_ACPreheating           10U                       /* Referenced by:
                                                                  * '<S8>/Define2'
                                                                  * '<S9>/Define2'
                                                                  * '<S51>/Constant'
                                                                  */
#define ChrgSdl_CCMod                  2U                        /* Referenced by:
                                                                  * '<S43>/Define'
                                                                  * '<S64>/Constant'
                                                                  */
#define ChrgSdl_CVMod                  3U                        /* Referenced by:
                                                                  * '<S43>/Define1'
                                                                  * '<S60>/ATOM_Chart'
                                                                  */
#define ChrgSdl_ChargeComplete         8U                        /* Referenced by:
                                                                  * '<S9>/Define6'
                                                                  * '<S11>/Define6'
                                                                  * '<S20>/Define2'
                                                                  * '<S50>/Constant'
                                                                  */
#define ChrgSdl_ChargeFault            9U                        /* Referenced by:
                                                                  * '<S9>/Define5'
                                                                  * '<S11>/Define5'
                                                                  * '<S20>/Define1'
                                                                  * '<S54>/Constant'
                                                                  */
#define ChrgSdl_ChargeTimeDefault      4095U                     /* Referenced by:
                                                                  * '<S11>/Define10'
                                                                  * '<S11>/Define4'
                                                                  */
#define ChrgSdl_ChrgInfoDispTim        10000U                    /* Referenced by: '<S11>/Define3' */
#define ChrgSdl_ConstCurrent           2U                        /* Referenced by: '<S47>/Constant' */
#define ChrgSdl_ConstVoltage           1U                        /* Referenced by: '<S49>/Constant' */
#define ChrgSdl_Count0                 0U                        /* Referenced by:
                                                                  * '<S10>/Define3'
                                                                  * '<S10>/Define5'
                                                                  * '<S10>/Define7'
                                                                  * '<S19>/Define3'
                                                                  * '<S19>/Define5'
                                                                  */
#define ChrgSdl_Count1                 1U                        /* Referenced by:
                                                                  * '<S10>/Define2'
                                                                  * '<S19>/Define2'
                                                                  */
#define ChrgSdl_DCCharging             6U                        /* Referenced by:
                                                                  * '<S8>/Define1'
                                                                  * '<S9>/Define1'
                                                                  * '<S45>/Constant'
                                                                  * '<S48>/Constant'
                                                                  */
#define ChrgSdl_DCPlugDetected         3U                        /* Referenced by:
                                                                  * '<S36>/Constant'
                                                                  * '<S42>/Constant'
                                                                  */
#define ChrgSdl_DCPreheating           11U                       /* Referenced by:
                                                                  * '<S8>/Define3'
                                                                  * '<S9>/Define3'
                                                                  * '<S52>/Constant'
                                                                  */
#define ChrgSdl_Hour2SecFac            3600.0F                   /* Referenced by: '<S59>/Constant' */
#define ChrgSdl_Init                   0U                        /* Referenced by:
                                                                  * '<S26>/Define'
                                                                  * '<S11>/Define2'
                                                                  * '<S43>/Define4'
                                                                  * '<S59>/Define'
                                                                  * '<S59>/Define2'
                                                                  * '<S60>/ATOM_Chart'
                                                                  * '<S62>/Define'
                                                                  */
#define ChrgSdl_KeepWarm               13U                       /* Referenced by:
                                                                  * '<S9>/Define4'
                                                                  * '<S20>/Define'
                                                                  * '<S46>/Constant'
                                                                  */
#define ChrgSdl_OffPlug                1U                        /* Referenced by: '<S34>/Constant' */
#define ChrgSdl_PreMod                 1U                        /* Referenced by:
                                                                  * '<S43>/Define3'
                                                                  * '<S65>/Constant'
                                                                  * '<S68>/Constant'
                                                                  */
#define ChrgSdl_RemainTimeDefault      1022.0F                   /* Referenced by: '<S8>/Define4' */
#define ChrgSdl_SingleZero             0.0F                      /* Referenced by:
                                                                  * '<S26>/Define1'
                                                                  * '<S26>/Define3'
                                                                  * '<S35>/Constant'
                                                                  */
#define ChrgSdl_U16Zero                0U                        /* Referenced by:
                                                                  * '<S10>/Define4'
                                                                  * '<S19>/Define4'
                                                                  * '<S19>/Define6'
                                                                  */
#define ChrgSdl_dt                     50U                       /* Referenced by:
                                                                  * '<S10>/Define6'
                                                                  * '<S11>/Define1'
                                                                  * '<S19>/Define'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S11>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S16>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S11>/ATOM_OnDelay' */
  real32_T DataTypeConversion5;        /* '<S31>/DataTypeConversion5' */
  real32_T DataTypeConversion6;        /* '<S31>/DataTypeConversion6' */
  real32_T DataTypeConversion4;        /* '<S31>/DataTypeConversion4' */
  real32_T Delay1_DSTATE;              /* '<S27>/Delay1' */
  real32_T Delay_DSTATE;               /* '<S26>/Delay' */
  uint16_T Delay_DSTATE_g03k;          /* '<S19>/Delay' */
  uint16_T Delay1_DSTATE_eibr;         /* '<S19>/Delay1' */
  uint16_T Delay_DSTATE_d1ax;          /* '<S10>/Delay' */
  uint16_T Delay1_DSTATE_cgyo;         /* '<S10>/Delay1' */
  uint8_T ChrMgmt_ChrgTarSOC_pct;      /* '<S31>/ChrMgmt_ChrgTarSOC_pct' */
  uint8_T Delay_DSTATE_dmrr;           /* '<S43>/Delay' */
  uint8_T Delay_DSTATE_ks4o;           /* '<S27>/Delay' */
} ARID_DEF_CtAp_ChrgSdl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: ChrgSdl_CcCurrMax_Map_maxIndex
   * Referenced by: '<S59>/ChrgSdl_CcCurrMax_Map'
   */
  uint32_T ChrgSdl_CcCurrMax_Map_maxIndex[2];

  /* Computed Parameter: ChrgSdl_CvTimeSecMap_maxIndex
   * Referenced by: '<S60>/ChrgSdl_CvTimeSecMap'
   */
  uint32_T ChrgSdl_CvTimeSecMap_maxIndex[2];

  /* Computed Parameter: ChrgSdl_CcStrtTempSOCMap_maxInd
   * Referenced by: '<S31>/ChrgSdl_CcStrtTempSOCMap'
   */
  uint32_T ChrgSdl_CcStrtTempSOCMap_maxInd[2];
} ConstP_CtAp_ChrgSdl_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgSdl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"

extern ARID_DEF_CtAp_ChrgSdl_T CtAp_ChrgSdl_ARID_DEF;

#define CtAp_ChrgSdl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"

/* Constant parameters (default storage) */
#define CtAp_ChrgSdl_START_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

extern const ConstP_CtAp_ChrgSdl_T CtAp_ChrgSdl_ConstP;

#define CtAp_ChrgSdl_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgSdl_MemMap.h"

/* Exported data declaration */

/*if not init use it */
#define CtAp_ChrgSdl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ChrgSdl_CCTimRemain;   /* '<S59>/If' */
extern real32_T ChrgSdl_CVTimRemain;   /* '<S60>/Add' */
extern real32_T ChrgSdl_ChrgTimRemain; /* '<S61>/Add' */
extern real32_T ChrgSdl_PreTimRemain;  /* '<S62>/If' */

#define CtAp_ChrgSdl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSdl_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

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
 * '<Root>' : 'CtAp_ChrgSdl'
 * '<S1>'   : 'CtAp_ChrgSdl/DocBlock'
 * '<S2>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Init'
 * '<S4>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim'
 * '<S5>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf'
 * '<S6>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim'
 * '<S7>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim'
 * '<S8>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrgMgmt_ChrgnRemnTim'
 * '<S9>'   : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalFlag'
 * '<S10>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalInit'
 * '<S11>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimManage'
 * '<S12>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalInit/If'
 * '<S13>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalInit/If1'
 * '<S14>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalInit/If2'
 * '<S15>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimCalInit/If3'
 * '<S16>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimManage/ATOM_OnDelay'
 * '<S17>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimManage/If'
 * '<S18>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_ChrgTim/ChrMgmt_ChrgTimManage/If1'
 * '<S19>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCal'
 * '<S20>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCalFlg'
 * '<S21>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCal/If'
 * '<S22>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCal/If1'
 * '<S23>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCal/If2'
 * '<S24>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrMgmt_KeepWrmTim/ChrMgmt_KeepWrmTimCal/If3'
 * '<S25>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTim/ChrgMgmt_ChrgnRemnTim/If'
 * '<S26>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent'
 * '<S27>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_SOCEndCheck'
 * '<S28>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_BMSBattempCalcd'
 * '<S29>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod'
 * '<S30>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain'
 * '<S31>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_SOCSet'
 * '<S32>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/ATOM_SafeDivide'
 * '<S33>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/CompareToConstant'
 * '<S34>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/CompareToConstant1'
 * '<S35>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/CompareToConstant2'
 * '<S36>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/CompareToConstant7'
 * '<S37>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/If'
 * '<S38>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/If1'
 * '<S39>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/If2'
 * '<S40>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_ChrgCurrent/If3'
 * '<S41>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_SOCEndCheck/CompareToConstant'
 * '<S42>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrMgmt_SOCEndCheck/CompareToConstant7'
 * '<S43>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet'
 * '<S44>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant'
 * '<S45>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant1'
 * '<S46>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant10'
 * '<S47>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant2'
 * '<S48>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant3'
 * '<S49>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant4'
 * '<S50>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant5'
 * '<S51>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant6'
 * '<S52>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant7'
 * '<S53>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant8'
 * '<S54>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/CompareToConstant9'
 * '<S55>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/If'
 * '<S56>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/If1'
 * '<S57>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/If2'
 * '<S58>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChargeMod/ChrMgmt_ChrgModSet/If3'
 * '<S59>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CCPrdCalcn'
 * '<S60>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CVPrdCalcn'
 * '<S61>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_ChrgTimCalcn'
 * '<S62>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CurrPrdCalcn'
 * '<S63>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CCPrdCalcn/ATOM_SafeDivide'
 * '<S64>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CCPrdCalcn/CompareToConstant'
 * '<S65>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CCPrdCalcn/CompareToConstant1'
 * '<S66>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CCPrdCalcn/If'
 * '<S67>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CVPrdCalcn/ATOM_Chart'
 * '<S68>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CurrPrdCalcn/CompareToConstant1'
 * '<S69>'  : 'CtAp_ChrgSdl/R_ChrgSdl_Cyclic_50ms_sys/ChrMgmt_ChrgTimSelf/ChrgSdl_ChrgTimRemain/ChrgSdl_CurrPrdCalcn/If'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgSdl

 *
 * Inherited requirements for '<S4>/ChrMgmt_ChrgTim':
 *  1. SWREQ_02375 Charge Time Calculate
 *  2. SWREQ_02376 Charge Time Calculate
 *  3. SWREQ_02377 Charge Time Calculate
 *
 * Inherited requirements for '<S4>/ChrMgmt_KeepWrmTim':
 *  1. SWREQ_02373 Keep warm time time
 *  2. SWREQ_02374 Keep warm time time init
 *
 * Inherited requirements for '<S4>/ChrgMgmt_ChrgnRemnTim':
 *  1. SWREQ_02371 Charge remain time
 *  2. SWREQ_02372 Charge remain time init
 *
 * Inherited requirements for '<S8>/If':
 *  1. SWREQ_02371 Charge remain time
 *  2. SWREQ_02372 Charge remain time init

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgSdl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
