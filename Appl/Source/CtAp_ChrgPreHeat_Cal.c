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
 *  Filename:           CtAp_ChrgPreHeat_Cal.c
 *  File Creation Date: 27-May-2025
 *  Model Name:         CtAp_ChrgPreHeat
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue May 27 14:40:27 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 14:28:56 2025
 *
 *
 *******************************************************************************/
#include "CtAp_ChrgPreHeat_Cal.h"
#include "rtwtypes.h"
#include "CtAp_ChrgPreHeat_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const real32_T ChrMgmt_DCDCEnaUDcLmt_CFG = 240.0F;/* DCDC Enable voltage lower limit */
volatile const uint16_T ChrMgmt_PODEnaDly_CFG = 3000U;/* POD enable time delay when preheat */
volatile const uint16_T ChrMgmt_PosRlyClsTimDly_CFG = 3000U;/* Pos relay control time delay */
volatile const real32_T ChrMgmt_PosRlyCtrlIDcDe_CFG = 5.0F;
                                      /* Pos relay control current difference */
volatile const uint16_T ChrMgmt_PosRlyCtrlIRTimLmt_CFG = 30000U;
                        /* Pos relay control insulation resistance fault time */
volatile const uint16_T ChrMgmt_PosRlyCtrlIRValLmt_CFG = 300U;
                        /* Pos relay control insulation resistance difference */
volatile const uint16_T ChrMgmt_PosRlyCtrlTimDly_CFG = 6000U;/* Pos relay control time delay */
volatile const uint16_T ChrMgmt_PosRlyCtrlUDcDeTim_CFG = 5000U;
                                      /* Pos relay control voltage fault time */
volatile const real32_T ChrMgmt_PosRlyCtrlUDcDe_CFG = 10.0F;
                                      /* Pos relay control voltage difference */
volatile const uint16_T ChrMgmt_PreheatlDTCEnaTim_CFG = 1500U;/* Preheat DTC enable time */

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
