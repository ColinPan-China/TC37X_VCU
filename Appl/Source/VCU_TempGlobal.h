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
 *  Filename:           VCU_TempGlobal.h
 *  File Creation Date: 04-Sep-2024
 *  Model Name:         CtAp_FctSftyGear
 *  Model Version:      1.25
 *  Model Author:       Mike Ni - Fri Aug 16 09:51:57 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Sep  4 10:54:33 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed Sep 04 10:54:00 2024
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_VCU_TempGlobal_h_
#define RTW_HEADER_VCU_TempGlobal_h_
#include "rtwtypes.h"

/*if not init use it */
#define CtAp_FctSftyGear_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T FctSftyMon_ErrResActGearCfmFail;

#define CtAp_FctSftyGear_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyGear_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */



/*if not init use it */
#define CtAp_ComMErr_START_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ComM_ACUComDTCFailr_Flg;
extern boolean_T ComM_ADCUComDTCFailr_Flg;
extern boolean_T ComM_APTCComDTCFailr_Flg;
extern boolean_T ComM_BCMComDTCFailr_Flg;
extern boolean_T ComM_BMSComDTCFailr_Flg;
extern boolean_T ComM_CBMComDTCFailr_Flg;
extern boolean_T ComM_CGWComDTCFailr_Flg;
extern boolean_T ComM_CHIBSComDTCFailr_Flg;
extern boolean_T ComM_DCDCComDTCFailr_Flg;
extern boolean_T ComM_DCMComDTCFailr_Flg;
extern boolean_T ComM_EPTIBSComDTCFailr_Flg;
extern boolean_T ComM_EVCOMComDTCFailr_Flg;
extern boolean_T ComM_ErrResCHCANBusOffDTCInfo;
extern boolean_T ComM_ErrResEPTCANBusOffDTCInfo;
extern boolean_T ComM_IVIComDTCFailr_Flg;
extern boolean_T ComM_MCUComDTCFailr_Flg;
extern boolean_T ComM_OBCComDTCFailr_Flg;
extern boolean_T ComM_PRNDComDTCFailr_Flg;
extern boolean_T ComM_SGWComDTCFailr_Flg;
extern boolean_T ComM_TCUComDTCFailr_Flg;

#define CtAp_ComMErr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */


/*if not init use it */
#define CtAp_FctSftyTorq_START_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T FctSftyMon_ErrResAccrPedlTqOverFltInfo_Flg;

/* DTC */
extern boolean_T FctSftyMon_ErrResCrpCtrlTqOverFltInfo_Flg;

/* DTC */
extern boolean_T FctSftyMon_ErrResDesVehDecelSpdOverFltInfo_Flg;

/* DTC */
#define CtAp_FctSftyTorq_STOP_SEC_VAR_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_BMSMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T HvMgmt_ErrResBMSRlyClsDTC;
extern boolean_T HvMgmt_ErrResBMSRlyClsDTCOne;
extern boolean_T HvMgmt_ErrResBMSRlyClsDTCTwo;
extern boolean_T HvMgmt_ErrResBMSRlyOpenDTC;
extern boolean_T HvMgmt_ErrResPreheatPosRlyClsDTC;
extern boolean_T HvMgmt_ErrResPreheatPosRlyOpenDTC;

#define CtAp_BMSMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BMSMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DCFCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T HvMgmt_ErrResDCFCRlyClsDTC;

#define CtAp_DCFCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCFCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_MCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T HvMgmt_ErrResMCUClsFltDTC;
extern boolean_T HvMgmt_ErrResMCUEnaFltDTC;
extern boolean_T HvMgmt_ErrResMCURdyFltDTC;
extern boolean_T HvMgmt_ErrResMCURdyFltDTCOne;
extern boolean_T HvMgmt_ErrResMCURdyFltDTCTwo;

#define CtAp_MCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_MCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DCDCMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T HvMgmt_ErrResDCDCEnaFltDTC;
extern boolean_T HvMgmt_ErrResDCDCStopFltDTC;

#define CtAp_DCDCMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCDCMgmt_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_TCUMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T HvMgmt_ErrResTCUEnaFltDTC;
extern boolean_T HvMgmt_ErrResTCUStopFltDTC;

#define CtAp_TCUMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_TCUMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ElSSDiag_START_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T LvMgmt_ErrResECUsDiagDTC;
extern boolean_T LvMgmt_ErrResKL15eOffDTC;
extern boolean_T LvMgmt_ErrResKL15eOnDTC;

#define CtAp_ElSSDiag_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ElSSDiag_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_LvBattMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T LvMgmt_ErrResBSBattIDcHiDTC;
extern boolean_T LvMgmt_ErrResBSBattUDcHiDTC;
extern boolean_T LvMgmt_ErrResBSBattUDcLoDTC;
extern boolean_T LvMgmt_ErrResLvSysLoUDcDTC;
extern boolean_T LvMgmt_ErrResLvSysOvrUDcDTC;

#define CtAp_LvBattMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_LvBattMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgComM_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T DCChrMgmt_ErrResBEMRxCCSTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCMLTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCRMTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCROTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCSDTmtDTC;
extern boolean_T DCChrMgmt_ErrResBEMRxCSTTmtDTC;
extern boolean_T DCChrMgmt_ErrResDcPortTempErrLvl1DTC;
extern boolean_T DCChrMgmt_ErrResDcPortTempErrLvl2DTC;
extern boolean_T DCChrMgmt_ErrResDcPortTempSnsrErrDTC;

#define CtAp_ChrgComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgPreHeat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC;
extern boolean_T ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC;
extern boolean_T ChrMgmt_ErrResPreheatIRChkErrDTC;

#define CtAp_ChrgPreHeat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgPreHeat_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgSeqCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T DCChrMgmt_ErrResIRMeasDiErrDTC;
extern boolean_T DCChrMgmt_ErrResIRMeasEnaErrDTC;

#define CtAp_ChrgSeqCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgSeqCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChrMgmt_ErrResCC2UDcErrDTC;
extern boolean_T ChrMgmt_ErrResChrgStsJmpErrDTC;

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_OBCStsMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T OBCMgmt_ErrResOBCChrgStsErrDTC;
extern boolean_T OBCMgmt_ErrResOBCDchaStsErrDTC;
extern boolean_T OBCMgmt_ErrResOBCDiErrDTC;
extern boolean_T OBCMgmt_ErrResOBCPreheatStsErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockOpenErrDTC;
extern boolean_T OBCMgmt_ErrResElectcLockClsErrDTC;

#define CtAp_OBCStsMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_OBCStsMgmt_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_S2Mgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T OBCMgmt_ErrResCPStsJmpErrDTC;
extern boolean_T OBCMgmt_ErrResOBCInpUDcLoErrDTC;
extern boolean_T OBCMgmt_ErrResS2SwtClsErrDTC;
extern boolean_T OBCMgmt_ErrResS2SwtOpenErrDTC;

#define CtAp_S2Mgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_S2Mgmt_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_BrkMgmt_START_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_ErrResIBSRbsDesTqOverFlt_Flg;
extern boolean_T ComM_ErrRestatLinMsgTimeoutDTCInfo;
extern boolean_T ErrMgmt_ErrResVCUHVILErrInfo;

#define CtAp_BrkMgmt_STOP_SEC_VAR_NOINIT_8
#include "CtAp_BrkMgmt_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_DrvAsscCtrl_START_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChassisMgmt_ErrResIBSApsCtrlDesTqOverFltDTCInfo_Flg;
extern boolean_T ChassisMgmt_ErrResIBSVlcCtrlDesTqOverFltDTCInfo_Flg;

#define CtAp_DrvAsscCtrl_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DrvAsscCtrl_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*if not init use it */
#define CtAp_PdlAlys_START_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChassisMgmt_ErrResAccrPedlURaw1HiDTCInfo_Flg;
extern boolean_T ChassisMgmt_ErrResAccrPedlURaw1LoDTCInfo_Flg;
extern boolean_T ChassisMgmt_ErrResAccrPedlURaw2HiDTCInfo_Flg;
extern boolean_T ChassisMgmt_ErrResAccrPedlURaw2LoDTCInfo_Flg;
extern boolean_T ChassisMgmt_ErrResAccrPedlURawDifDTCInfo_Flg;

#define CtAp_PdlAlys_STOP_SEC_VAR_NOINIT_8
#include "CtAp_PdlAlys_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

#endif                                 /* RTW_HEADER_VCU_TempGlobal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
