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
 *  Filename:           VCU_TempGlobal.c
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      1.25
 *  Model Author:       Mike Ni - Fri Aug 16 09:51:57 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 10:54:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed Sep 04 10:54:00 2024
 *
 *
 *******************************************************************************/
#include "VCU_TempGlobal.h"
#include "rtwtypes.h"
#include "CtAp_FctSftyGear_types.h"
#include "CtAp_ComMErr_types.h"
#include "CtAp_FctSftyTorq_types.h"
#include "CtAp_BMSMgmt_types.h"
#include "CtAp_DCFCMgmt_types.h"
#include "CtAp_MCUMgmt_types.h"
#include "CtAp_DCDCMgmt_types.h"
#include "CtAp_TCUMgmt_types.h"
#include "CtAp_ElSSDiag_types.h"
#include "CtAp_LvBattMgmt_types.h"
#include "CtAp_ChrgComM_types.h"
#include "CtAp_ChrgPreHeat_types.h"
#include "CtAp_ChrgSeqCtrl_types.h"
#include "CtAp_ChrgStat_types.h"
#include "CtAp_OBCStsMgmt_types.h"
#include "CtAp_S2Mgmt_types.h"
#include "CtAp_BrkMgmt_types.h"
#include "CtAp_DrvAsscCtrl_types.h"
#include "CtAp_PdlAlys_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T FctSftyMon_ErrResActGearCfmFail;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */



/*if not init use it */
#define CtAp_ComMErr_START_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ComM_ACUComDTCFailr_Flg;
boolean_T ComM_ADCUComDTCFailr_Flg;
boolean_T ComM_APTCComDTCFailr_Flg;
boolean_T ComM_BCMComDTCFailr_Flg;
boolean_T ComM_BMSComDTCFailr_Flg;
boolean_T ComM_CBMComDTCFailr_Flg;
boolean_T ComM_CGWComDTCFailr_Flg;
boolean_T ComM_CHIBSComDTCFailr_Flg;
boolean_T ComM_DCDCComDTCFailr_Flg;
boolean_T ComM_DCMComDTCFailr_Flg;
boolean_T ComM_EPTIBSComDTCFailr_Flg;
boolean_T ComM_EVCOMComDTCFailr_Flg;
boolean_T ComM_ErrResCHCANBusOffDTCInfo;
boolean_T ComM_ErrResEPTCANBusOffDTCInfo;
boolean_T ComM_IVIComDTCFailr_Flg;
boolean_T ComM_MCUComDTCFailr_Flg;
boolean_T ComM_OBCComDTCFailr_Flg;
boolean_T ComM_PRNDComDTCFailr_Flg;
boolean_T ComM_SGWComDTCFailr_Flg;
boolean_T ComM_TCUComDTCFailr_Flg;

#define CtAp_ComMErr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */


/*if not init use it */
#define CtAp_FctSftyTorq_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T FctSftyMon_ErrResAccrPedlTqOverFltInfo_Flg;/* DTC */
boolean_T FctSftyMon_ErrResCrpCtrlTqOverFltInfo_Flg;/* DTC */
boolean_T FctSftyMon_ErrResDesVehDecelSpdOverFltInfo_Flg;/* DTC */

#define CtAp_FctSftyTorq_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */


/*if not init use it */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T HvMgmt_ErrResBMSRlyClsDTC;
boolean_T HvMgmt_ErrResBMSRlyClsDTCOne;
boolean_T HvMgmt_ErrResBMSRlyClsDTCTwo;
boolean_T HvMgmt_ErrResBMSRlyOpenDTC;
boolean_T HvMgmt_ErrResPreheatPosRlyClsDTC;
boolean_T HvMgmt_ErrResPreheatPosRlyOpenDTC;

#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DCFCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T HvMgmt_ErrResDCFCRlyClsDTC;

#define CtAp_DCFCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_MCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T HvMgmt_ErrResMCUClsFltDTC;
boolean_T HvMgmt_ErrResMCUEnaFltDTC;
boolean_T HvMgmt_ErrResMCURdyFltDTC;
boolean_T HvMgmt_ErrResMCURdyFltDTCOne;
boolean_T HvMgmt_ErrResMCURdyFltDTCTwo;

#define CtAp_MCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DCDCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T HvMgmt_ErrResDCDCEnaFltDTC;
boolean_T HvMgmt_ErrResDCDCStopFltDTC;

#define CtAp_DCDCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_TCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T HvMgmt_ErrResTCUEnaFltDTC;
boolean_T HvMgmt_ErrResTCUStopFltDTC;

#define CtAp_TCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ElSSDiag_START_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T LvMgmt_ErrResECUsDiagDTC;
boolean_T LvMgmt_ErrResKL15eOffDTC;
boolean_T LvMgmt_ErrResKL15eOnDTC;

#define CtAp_ElSSDiag_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_LvBattMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T LvMgmt_ErrResBSBattIDcHiDTC;
boolean_T LvMgmt_ErrResBSBattUDcHiDTC;
boolean_T LvMgmt_ErrResBSBattUDcLoDTC;
boolean_T LvMgmt_ErrResLvSysLoUDcDTC;
boolean_T LvMgmt_ErrResLvSysOvrUDcDTC;

#define CtAp_LvBattMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgComM_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T DCChrMgmt_ErrResBEMRxCCSTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCMLTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCRMTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCROTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCSDTmtDTC;
boolean_T DCChrMgmt_ErrResBEMRxCSTTmtDTC;
boolean_T DCChrMgmt_ErrResDcPortTempErrLvl1DTC;
boolean_T DCChrMgmt_ErrResDcPortTempErrLvl2DTC;
boolean_T DCChrMgmt_ErrResDcPortTempSnsrErrDTC;

#define CtAp_ChrgComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgPreHeat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC;
boolean_T ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC;
boolean_T ChrMgmt_ErrResPreheatIRChkErrDTC;

#define CtAp_ChrgPreHeat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgSeqCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T DCChrMgmt_ErrResIRMeasDiErrDTC;
boolean_T DCChrMgmt_ErrResIRMeasEnaErrDTC;

#define CtAp_ChrgSeqCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChrMgmt_ErrResCC2UDcErrDTC;
boolean_T ChrMgmt_ErrResChrgStsJmpErrDTC;

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_OBCStsMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T OBCMgmt_ErrResOBCChrgStsErrDTC;
boolean_T OBCMgmt_ErrResOBCDchaStsErrDTC;
boolean_T OBCMgmt_ErrResOBCDiErrDTC;
boolean_T OBCMgmt_ErrResOBCPreheatStsErrDTC;
boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;
boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;
boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;

#define CtAp_OBCStsMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data definition */

/*if not init use it */
#define CtAp_S2Mgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T OBCMgmt_ErrResCPStsJmpErrDTC;
boolean_T OBCMgmt_ErrResOBCInpUDcLoErrDTC;
boolean_T OBCMgmt_ErrResS2SwtClsErrDTC;
boolean_T OBCMgmt_ErrResS2SwtOpenErrDTC;

#define CtAp_S2Mgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_ErrResIBSRbsDesTqOverFlt_Flg;
boolean_T ComM_ErrRestatLinMsgTimeoutDTCInfo;
boolean_T ErrMgmt_ErrResVCUHVILErrInfo;

#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo_Flg;
boolean_T ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo_Flg;

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
boolean_T ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg;
boolean_T ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg;
boolean_T ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg;
boolean_T ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg;
boolean_T ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg;

#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
