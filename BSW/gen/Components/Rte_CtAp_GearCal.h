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
 *             File:  Rte_CtAp_GearCal.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_GearCal>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_GEARCAL_H
# define RTE_CTAP_GEARCAL_H

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

# include "Rte_CtAp_GearCal_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld (FALSE)
#  define Rte_InitValue_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk (FALSE)
#  define Rte_InitValue_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels (FALSE)
#  define Rte_InitValue_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum (0U)
#  define Rte_InitValue_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum (0U)
#  define Rte_InitValue_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod (0U)
#  define Rte_InitValue_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum (0U)
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
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2VAR(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2VAR(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2VAR(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo Rte_Read_CtAp_GearCal_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
#  define Rte_Read_CtAp_GearCal_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(data) (*(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_GearCal_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_GearCal_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUDAMod_tec_ComM_ADCUDAMod(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus Rte_Read_CtAp_GearCal_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Read_CtAp_GearCal_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish
#  define Rte_Read_CtAp_GearCal_RTE_R_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_GearCal_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum
#  define Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_GearCal_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum
#  define Rte_Write_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum(data) (Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_GearCal_START_SEC_CODE
# include "CtAp_GearCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_GearCal_Cyclic_20ms R_GearCal_Cyclic_20ms
#  define RTE_RUNNABLE_R_GearCal_Init R_GearCal_Init
# endif

FUNC(void, CtAp_GearCal_CODE) R_GearCal_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_GearCal_CODE) R_GearCal_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_GearCal_STOP_SEC_CODE
# include "CtAp_GearCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_GEARCAL_H */

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
