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
 *  Filename:           CtAp_SlopEst_Glb.h
 *  File Creation Date: 01-Aug-2025
 *  Model Name:         CtAp_SlopEst
 *  Model Version:      3.2.0Test
 *  Model Author:       JackyWang - Thu Jun 26 10:02:14 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  1 16:23:14 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Fri Aug 01 16:22:35 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_SlopEst_Glb_h_
#define RTW_HEADER_CtAp_SlopEst_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_SlopEst_START_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T SlopEst_Enable;

/* Enable the prerequisite for turning on ramp estimation */
extern uint8_T SlopEst_TestPath;

/* Confirm the jump status in the chart */
extern real32_T VehMot_SlopGrdLcl1_pct;
extern real32_T VehMot_SlopGrdLcl2_pct;
extern real32_T VehMot_YRSAxFltDly_mps2q;
extern real32_T VehMot_YRSAxFlt_mps2q;

#define CtAp_SlopEst_STOP_SEC_VAR_NOINIT_8
#include "CtAp_SlopEst_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_SlopEst_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
