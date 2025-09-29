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
 *  Filename:           CtAp_ChrgPreHeat_Cal.h
 *  File Creation Date: 19-May-2025
 *  Model Name:         CtAp_ChrgPreHeat
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Mon May 19 09:40:11 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Mon May 19 09:38:38 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ChrgPreHeat_Cal_h_
#define RTW_HEADER_CtAp_ChrgPreHeat_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChrMgmt_DCDCEnaUDcLmt_CFG;

/* DCDC Enable voltage lower limit */
extern volatile const uint16_T ChrMgmt_PODEnaDly_CFG;

/* POD enable time delay when preheat */
extern volatile const uint16_T ChrMgmt_PosRlyClsTimDly_CFG;

/* Pos relay control time delay */
extern volatile const real32_T ChrMgmt_PosRlyCtrlIDcDe_CFG;

/* Pos relay control current difference */
extern volatile const uint16_T ChrMgmt_PosRlyCtrlIRTimLmt_CFG;

/* Pos relay control insulation resistance fault time */
extern volatile const uint16_T ChrMgmt_PosRlyCtrlIRValLmt_CFG;

/* Pos relay control insulation resistance difference */
extern volatile const uint16_T ChrMgmt_PosRlyCtrlTimDly_CFG;

/* Pos relay control time delay */
extern volatile const uint16_T ChrMgmt_PosRlyCtrlUDcDeTim_CFG;

/* Pos relay control voltage fault time */
extern volatile const real32_T ChrMgmt_PosRlyCtrlUDcDe_CFG;

/* Pos relay control voltage difference */
extern volatile const uint16_T ChrMgmt_PreheatlDTCEnaTim_CFG;

/* Preheat DTC enable time */
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChrgPreHeat_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
