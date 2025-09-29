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
 *  Filename:           CtAp_ChrgSdl_Cal.h
 *  File Creation Date: 20-May-2025
 *  Model Name:         CtAp_ChrgSdl
 *  Model Version:      1.004
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue May 20 09:32:38 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Tue May 20 09:31:20 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_ChrgSdl_Cal_h_
#define RTW_HEADER_CtAp_ChrgSdl_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const real32_T ChrgSdl_CCEndSOC_CFG;
extern volatile const real32_T ChrgSdl_CcCurrMaxX_Map[5];
extern volatile const real32_T ChrgSdl_CcCurrMaxY_Map[5];
extern volatile const real32_T ChrgSdl_CcCurrMax_Map[25];
extern volatile const real32_T ChrgSdl_CcStrtTempSOCX_Map[6];
extern volatile const real32_T ChrgSdl_CcStrtTempSOCY_Map[6];
extern volatile const real32_T ChrgSdl_CcStrtTempSOC_Map[36];
extern volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSecX_Map[7];
extern volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSecY_Map[6];
extern volatile const real32_T ChrgSdl_CvDeltaCvCurrTimeSec_Map[42];
extern volatile const real32_T ChrgSdl_PreHeatTimX_Lut[7];
extern volatile const real32_T ChrgSdl_PreHeatTim_Lut[7];
extern volatile const real32_T ChrgSdl_facCvX_Lut[7];
extern volatile const real32_T ChrgSdl_facCv_Lut[7];

#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_ChrgSdl_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
