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
 *             File:  Rte_CtAp_BMSMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_BMSMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_BMSMGMT_H
# define RTE_CTAP_BMSMGMT_H

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

# include "Rte_CtAp_BMSMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum (0U)
#  define Rte_InitValue_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum (0U)
#  define Rte_InitValue_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo (FALSE)
#  define Rte_InitValue_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum (0U)
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
#  define Rte_InitValue_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
#  define Rte_InitValue_UDS_PwrCutRequest_PwrCutRequest (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_BMSMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_BMSMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_BMSMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(data) (*(data) = Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg(data) (*(data) = Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(data) (*(data) = Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo Rte_Read_CtAp_BMSMgmt_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(data) (*(data) = Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_BMSMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_BMSMgmt_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_BMSMgmt_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_UDS_PwrCutRequest_PwrCutRequest Rte_Read_CtAp_BMSMgmt_UDS_PwrCutRequest_PwrCutRequest

#  define Rte_Read_CtAp_BMSMgmt_UDS_PwrCutRequest_PwrCutRequest(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTCOne_Bus_tec_HvMgmt_BMSRlyClsDTCOne_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTCTwo_Bus_tec_HvMgmt_BMSRlyClsDTCTwo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyClsDTC_Bus_tec_HvMgmt_BMSRlyClsDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSRlyOpenDTC_Bus_tec_HvMgmt_BMSRlyOpenDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_PreheatPosRlyClsDTC_Bus_tec_HvMgmt_PreheatPosRlyClsDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_PreheatPosRlyOpenDTC_Bus_tec_HvMgmt_PreheatPosRlyOpenDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum
#  define Rte_Write_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(data) (Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_BMSMgmt_START_SEC_CODE
# include "CtAp_BMSMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_BMSMgmt_Cyclic_20ms R_BMSMgmt_Cyclic_20ms
#  define RTE_RUNNABLE_R_BMSMgmt_Init R_BMSMgmt_Init
# endif

FUNC(void, CtAp_BMSMgmt_CODE) R_BMSMgmt_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_BMSMgmt_CODE) R_BMSMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_BMSMgmt_STOP_SEC_CODE
# include "CtAp_BMSMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_BMSMGMT_H */

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
