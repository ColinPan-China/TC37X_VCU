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
 *  Filename:           CtAp_ChrgEgyCal.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ChrgEgyCal
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:17 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 17:27:21 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 17:26:49 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgEgyCal_h_
#define RTW_HEADER_CtAp_ChrgEgyCal_h_
#ifndef CtAp_ChrgEgyCal_COMMON_INCLUDES_
#define CtAp_ChrgEgyCal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgEgyCal.h"
#endif                                 /* CtAp_ChrgEgyCal_COMMON_INCLUDES_ */

#include "CtAp_ChrgEgyCal_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgEgyCal_01Ah                0.1F                      /* Referenced by:
                                                                  * '<S9>/Define2'
                                                                  * '<S17>/Define2'
                                                                  */
#define ChrgEgyCal_360As               360000.0F                 /* Referenced by:
                                                                  * '<S9>/Define'
                                                                  * '<S17>/Define'
                                                                  */
#define ChrgEgyCal_ACCharging          5U                        /* Referenced by:
                                                                  * '<S16>/Define1'
                                                                  * '<S29>/Define'
                                                                  */
#define ChrgEgyCal_ACPlugDetected      2U                        /* Referenced by: '<S29>/Define8' */
#define ChrgEgyCal_ACPreheating        10U                       /* Referenced by:
                                                                  * '<S16>/Define5'
                                                                  * '<S29>/Define1'
                                                                  */
#define ChrgEgyCal_ChargeingComplete   8U                        /* Referenced by:
                                                                  * '<S16>/Define7'
                                                                  * '<S18>/Define7'
                                                                  * '<S29>/Define12'
                                                                  */
#define ChrgEgyCal_ChargingFault       9U                        /* Referenced by:
                                                                  * '<S16>/Define8'
                                                                  * '<S18>/Define8'
                                                                  * '<S29>/Define13'
                                                                  */
#define ChrgEgyCal_ChrgInfoDispTim     10000U                    /* Referenced by: '<S18>/Define2' */
#define ChrgEgyCal_DCCharging          6U                        /* Referenced by:
                                                                  * '<S16>/Define2'
                                                                  * '<S25>/Define'
                                                                  * '<S29>/Define3'
                                                                  */
#define ChrgEgyCal_DCPlugDetected      3U                        /* Referenced by:
                                                                  * '<S25>/Define2'
                                                                  * '<S29>/Define9'
                                                                  */
#define ChrgEgyCal_DCPreheating        11U                       /* Referenced by:
                                                                  * '<S16>/Define6'
                                                                  * '<S25>/Define1'
                                                                  * '<S29>/Define4'
                                                                  */
#define ChrgEgyCal_DchaEnergyinit      0.0F                      /* Referenced by: '<S11>/Define1' */
#define ChrgEgyCal_DispDefault         1023.0F                   /* Referenced by:
                                                                  * '<S30>/Define'
                                                                  * '<S32>/Define'
                                                                  */
#define ChrgEgyCal_DispPowerDefault    4095.0F                   /* Referenced by: '<S31>/Define' */
#define ChrgEgyCal_EgyInit             102.3F                    /* Referenced by:
                                                                  * '<S18>/Define4'
                                                                  * '<S18>/Define5'
                                                                  */
#define ChrgEgyCal_Init                0U                        /* Referenced by:
                                                                  * '<S18>/Define3'
                                                                  * '<S29>/Define6'
                                                                  */
#define ChrgEgyCal_KeepWarm            13U                       /* Referenced by:
                                                                  * '<S16>/Define'
                                                                  * '<S29>/Define2'
                                                                  */
#define ChrgEgyCal_OffPlug             1U                        /* Referenced by: '<S29>/Define7' */
#define ChrgEgyCal_ThreePhase          1U                        /* Referenced by: '<S30>/Define2' */
#define ChrgEgyCal_ThreePhaseCoefficient 3.0F                    /* Referenced by: '<S30>/Define3' */
#define ChrgEgyCal_U32Zero             13U                       /* Referenced by:
                                                                  * '<S8>/Define'
                                                                  * '<S8>/Define1'
                                                                  * '<S8>/Define2'
                                                                  * '<S8>/Define3'
                                                                  * '<S8>/Define4'
                                                                  * '<S8>/Define5'
                                                                  */
#define ChrgEgyCal_UnitConversionFactor 0.001F                   /* Referenced by:
                                                                  * '<S9>/Define5'
                                                                  * '<S17>/Define5'
                                                                  */
#define ChrgEgyCal_V2LComplete         12U                       /* Referenced by:
                                                                  * '<S10>/Define3'
                                                                  * '<S11>/Define3'
                                                                  * '<S29>/Define14'
                                                                  */
#define ChrgEgyCal_V2LDisCharging      7U                        /* Referenced by:
                                                                  * '<S10>/Define'
                                                                  * '<S11>/Define'
                                                                  * '<S29>/Define5'
                                                                  */
#define ChrgEgyCal_V2LFault            14U                       /* Referenced by:
                                                                  * '<S10>/Define4'
                                                                  * '<S11>/Define4'
                                                                  * '<S29>/Define15'
                                                                  */
#define ChrgEgyCal_V2LPlugDetected     4U                        /* Referenced by: '<S29>/Define10' */
#define ChrgEgyCal_dt                  50U                       /* Referenced by: '<S18>/Define1' */
#define ChrgEgyCal_dt_single           50.0F                     /* Referenced by:
                                                                  * '<S9>/Define4'
                                                                  * '<S17>/Define4'
                                                                  */
#define ChrgEgyCal_singleZero          0.0F                      /* Referenced by:
                                                                  * '<S4>/Define'
                                                                  * '<S4>/Define1'
                                                                  * '<S4>/Define2'
                                                                  * '<S4>/Define3'
                                                                  * '<S9>/Define1'
                                                                  * '<S9>/Define3'
                                                                  * '<S9>/Define6'
                                                                  * '<S9>/Define7'
                                                                  * '<S17>/Define1'
                                                                  * '<S17>/Define3'
                                                                  * '<S17>/Define6'
                                                                  * '<S17>/Define7'
                                                                  * '<S25>/Define3'
                                                                  * '<S30>/Define1'
                                                                  * '<S31>/Define1'
                                                                  * '<S32>/Define1'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S18>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S22>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S18>/ATOM_OnDelay' */
  dt_Nv_ChrgEgyCalInfo RTE_RP_ChrgEgyCalInfo_tec_ChrgE;
                   /* '<Root>/RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo_write' */
  real32_T Delay1_DSTATE;              /* '<S17>/Delay1' */
  real32_T Delay2_DSTATE;              /* '<S17>/Delay2' */
  real32_T Delay1_DSTATE_mo14;         /* '<S9>/Delay1' */
  real32_T Delay2_DSTATE_baro;         /* '<S9>/Delay2' */
} ARID_DEF_CtAp_ChrgEgyCal_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgEgyCal_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgEgyCal_MemMap.h"

extern ARID_DEF_CtAp_ChrgEgyCal_T CtAp_ChrgEgyCal_ARID_DEF;

#define CtAp_ChrgEgyCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgEgyCal_MemMap.h"

/*
 * Reusable Custom Storage Class
 *
 * Note: Reusable CSC signals are used for in-place optimization.
 * Code generation will declare the memory for these signals and
 * export their symbols.
 *
 */
extern dt_Nv_ChrgEgyCalInfo RTE_RP_ChrgEgyCalInfo_tec_ChrgE;
                   /* '<Root>/RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo_write' */

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
 * '<Root>' : 'CtAp_ChrgEgyCal'
 * '<S1>'   : 'CtAp_ChrgEgyCal/DocBlock'
 * '<S2>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Init'
 * '<S4>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChargeInformation'
 * '<S5>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy'
 * '<S6>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy'
 * '<S7>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo'
 * '<S8>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrgEgyCalInfo'
 * '<S9>'   : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgy'
 * '<S10>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgyCal'
 * '<S11>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgyManage'
 * '<S12>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgy/If'
 * '<S13>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgy/If1'
 * '<S14>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgy/If2'
 * '<S15>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_OBCSideSngDchaEgy/ChrMgmt_OBCSideSngDchaEgyManage/If'
 * '<S16>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyCalFlg'
 * '<S17>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyIniCal'
 * '<S18>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyManage'
 * '<S19>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyIniCal/If'
 * '<S20>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyIniCal/If1'
 * '<S21>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyIniCal/If2'
 * '<S22>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyManage/ATOM_OnDelay'
 * '<S23>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyManage/If'
 * '<S24>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_SngChrgEgy/ChrMgmt_SngChrgEgyManage/If1'
 * '<S25>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUCalcdPODIDc'
 * '<S26>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUCalcdPODInitIDc'
 * '<S27>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr'
 * '<S28>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUCalcdPODIDc/If'
 * '<S29>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_ChrgSts'
 * '<S30>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI'
 * '<S31>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgPwr'
 * '<S32>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgU'
 * '<S33>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI/If'
 * '<S34>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI/If1'
 * '<S35>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI/If2'
 * '<S36>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI/If3'
 * '<S37>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgI/If4'
 * '<S38>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgPwr/If'
 * '<S39>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgPwr/If3'
 * '<S40>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgU/If'
 * '<S41>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgU/If1'
 * '<S42>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgU/If2'
 * '<S43>'  : 'CtAp_ChrgEgyCal/R_ChrgEgyCal_Cyclic_50ms_sys/ChrMgmt_VCUDispInfo/ChrMgmt_VCUDispChrgPwr/ChrMgmt_VCUDispChrgU/If3'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgEgyCal

 *
 * Inherited requirements for '<S2>/ChrMgmt_OBCSideSngDchaEgy':
 *  1. SWREQ_02334 V2L Energy caculate
 *  2. SWREQ_02335 V2L Energy caculate
 *  3. SWREQ_02336 V2L Energy clear
 *
 * Inherited requirements for '<S2>/ChrMgmt_SngChrgEgy':
 *  1. SWREQ_05908 charge Energy caculate
 *  2. SWREQ_05909 charge Energy caculate matain
 *
 * Inherited requirements for '<S5>/ChrMgmt_OBCSideSngDchaEgy':
 *  1. SWREQ_02334 V2L Energy caculate
 *
 * Inherited requirements for '<S7>/ChrMgmt_VCUCalcdPODIDc':
 *  1. SWREQ_02338 POD Current caculate
 *  2. SWREQ_02339 POD Current caculate
 *
 * Inherited requirements for '<S7>/ChrMgmt_VCUCalcdPODInitIDc':
 *  1. SWREQ_02337 POD Current caculate init
 *  2. SWREQ_02337 POD Current caculate init
 *
 * Inherited requirements for '<S18>/If':
 *  1. SWREQ_05908 charge Energy caculate
 *
 * Inherited requirements for '<S25>/If':
 *  1. SWREQ_02338 POD Current caculate
 *
 * Inherited requirements for '<S27>/ChrMgmt_VCUDispChrgI':
 *  1. SWREQ_02340 Charge display information AC three phase
 *  2. SWREQ_02341 Charge display information AC signle phase
 *  3. SWREQ_02342 Charge display information DC
 *  4. SWREQ_02343 Charge display information V2L
 *
 * Inherited requirements for '<S27>/ChrMgmt_VCUDispChrgPwr':
 *  1. SWREQ_02340 Charge display information AC three phase
 *  2. SWREQ_02341 Charge display information AC signle phase
 *  3. SWREQ_02342 Charge display information DC
 *  4. SWREQ_02343 Charge display information V2L
 *  5. SWREQ_02344 Charge display information default
 *  6. SWREQ_02345 Charge display information init
 *
 * Inherited requirements for '<S27>/ChrMgmt_VCUDispChrgU':
 *  1. SWREQ_02340 Charge display information AC three phase
 *  2. SWREQ_02341 Charge display information AC signle phase
 *  3. SWREQ_02342 Charge display information DC
 *  4. SWREQ_02343 Charge display information V2L
 *  5. SWREQ_02344 Charge display information default
 *
 * Inherited requirements for '<S30>/If':
 *  1. SWREQ_02340 Charge display information AC three phase
 *
 * Inherited requirements for '<S30>/If1':
 *  1. SWREQ_02342 Charge display information DC
 *
 * Inherited requirements for '<S30>/If2':
 *  1. SWREQ_02343 Charge display information V2L
 *
 * Inherited requirements for '<S30>/If3':
 *  1. SWREQ_02344 Charge display information default
 *  2. SWREQ_02344 Charge display information default
 *  3. SWREQ_02345 Charge display information init
 *
 * Inherited requirements for '<S30>/If4':
 *  1. SWREQ_02341 Charge display information AC signle phase
 *
 * Inherited requirements for '<S32>/If':
 *  1. SWREQ_02340 Charge display information AC three phase
 *
 * Inherited requirements for '<S32>/If1':
 *  1. SWREQ_02342 Charge display information DC
 *
 * Inherited requirements for '<S32>/If2':
 *  1. SWREQ_02343 Charge display information V2L
 *
 * Inherited requirements for '<S32>/If3':
 *  1. SWREQ_02344 Charge display information default
 *  2. SWREQ_02344 Charge display information default
 *  3. SWREQ_02345 Charge display information init

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgEgyCal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
