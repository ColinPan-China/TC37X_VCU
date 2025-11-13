/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_CtAp_ChrgStat.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgStat>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGSTAT_H
# define RTE_CTAP_CHRGSTAT_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtAp_ChrgStat_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV;

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
#  define Rte_InitValue_UDS_PwrCutRequest_PwrCutRequest (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(P2VAR(dt_Nv_ChrgStatInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(P2VAR(dt_ChrMgmt_AcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(P2VAR(dt_ChrMgmt_DcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(P2VAR(dt_ChrMgmt_PreheatIRChkErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(P2VAR(dt_DCChrMgmt_DcPortTempErrLvl2, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(P2VAR(dt_DCChrMgmt_DcPortTempSnsrErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(P2VAR(dt_DCChrMgmt_IRMeasDiErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(P2VAR(dt_DCChrMgmt_IRMeasEnaErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus(P2VAR(dt_OBCMgmt_CPStsJmpErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(P2VAR(dt_OBCMgmt_OBCChrgStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(P2VAR(dt_OBCMgmt_OBCDchaStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(P2VAR(dt_OBCMgmt_OBCDiErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus(P2VAR(dt_OBCMgmt_OBCInpUDcLoErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(P2VAR(dt_OBCMgmt_OBCPreheatStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus(P2VAR(dt_OBCMgmt_S2SwtClsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(P2CONST(dt_Nv_ChrgStatInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo Rte_Read_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo
#  define Rte_Read_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus
#  define Rte_Read_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus
#  define Rte_Read_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min(data) (*(data) = Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus
#  define Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(data) (*(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_ChrgStat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts Rte_Read_CtAp_ChrgStat_RTE_R_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts

#  define Rte_Read_CtAp_ChrgStat_RTE_R_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts
#  define Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ChrgStat_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ChrgStat_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_ChrgStat_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(data) (*(data) = Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum(data) (*(data) = Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(data) (*(data) = Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV Rte_Read_CtAp_ChrgStat_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV
#  define Rte_Read_CtAp_ChrgStat_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV(data) (*(data) = Rte_IoHwAb_SWC_IF_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ChrgStat_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(data) (*(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum
#  define Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(data) (*(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus
#  define Rte_Read_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_ChrgStat_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_ChrgStat_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_ChrgStat_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_UDS_PwrCutRequest_PwrCutRequest Rte_Read_CtAp_ChrgStat_UDS_PwrCutRequest_PwrCutRequest

#  define Rte_Read_CtAp_ChrgStat_UDS_PwrCutRequest_PwrCutRequest(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg
#  define Rte_Write_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg(data) (Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo Rte_Write_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgStat_START_SEC_CODE
# include "CtAp_ChrgStat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgStat_Cyclic_50ms R_ChrgStat_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgStat_Init R_ChrgStat_Init
# endif

FUNC(void, CtAp_ChrgStat_CODE) R_ChrgStat_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgStat_CODE) R_ChrgStat_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgStat_STOP_SEC_CODE
# include "CtAp_ChrgStat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGSTAT_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
