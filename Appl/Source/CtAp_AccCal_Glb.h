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
 *  Filename:           CtAp_AccCal_Glb.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_AccCal
 *  Model Version:      3.2.0
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:07 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 10:35:04 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Jun 27 10:34:38 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_AccCal_Glb_h_
#define RTW_HEADER_CtAp_AccCal_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_AccCal_START_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern real32_T ComM_YRSAxFlt_mps2q;
extern real32_T VehMot_UncfmVehSpdAcclr_mps2q;
extern real32_T VehMot_VehSpdFltDly_kph;
extern real32_T VehMot_VehSpdFlt_kph;

#define CtAp_AccCal_STOP_SEC_VAR_NOINIT_8
#include "CtAp_AccCal_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_AccCal_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
