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
 *  Filename:           CtAp_WakeUpRsn_Glb.h
 *  File Creation Date: 12-Sep-2025
 *  Model Name:         CtAp_WakeUpRsn
 *  Model Version:      %<AutoIncrement:3.3.0>
 *  Model Author:       ATOM-HyacinthGe - Fri Feb 28 13:53:26 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Sep 12 10:10:23 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Fri Sep 12 10:09:25 2025
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_WakeUpRsn_Glb_h_
#define RTW_HEADER_CtAp_WakeUpRsn_Glb_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_WakeUpRsn_START_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ComM_BMSAWBDeal;

/* BMS_AWB signal processing */
extern boolean_T ComM_BMSPNC15Deal;

/* BMS_PNC15 signal processing */
extern boolean_T ComM_CGWAWBDeal;

/* CGW_AWB signal processing */
extern boolean_T ComM_CGWPNC15Deal;

/* CGW_PNC15 signal processing */
extern boolean_T Ecu_CHCANWakeStatusDeal;

/* Ecu_CHCANWakeStatus signal processing */
extern boolean_T Ecu_LinWakeStatus_CntReset;

/* Reason ofThe change of LIN wake */
extern boolean_T Ecu_PTCANWakeStatusDeal;

/* Ecu_PTCANWakeStatus signal processing */
extern boolean_T Ecu_SelfWakeStatus_CntReset;

/* Reason ofThe change of Self wake */
#define CtAp_WakeUpRsn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_WakeUpRsn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_WakeUpRsn_Glb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
