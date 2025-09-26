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
 *             File:  Rte_CtAp_FctSftyGear.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_FctSftyGear>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_FCTSFTYGEAR_H
# define RTE_CTAP_FCTSFTYGEAR_H

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

# include "Rte_CtAp_FctSftyGear_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
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

#  define Rte_InitValue_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail (FALSE)
#  define Rte_InitValue_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail (FALSE)
#  define Rte_InitValue_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq (0U)
#  define Rte_InitValue_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl (FALSE)
#  define Rte_InitValue_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts (0U)
#  define Rte_InitValue_RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum (0U)
#  define Rte_InitValue_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq (FALSE)
#  define Rte_InitValue_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld (FALSE)
#  define Rte_InitValue_RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk (FALSE)
#  define Rte_InitValue_RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels (FALSE)
#  define Rte_InitValue_RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo(P2VAR(dt_Nv_GearMgmtInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus(P2VAR(dt_ComM_IBSSts05CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts05E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2VAR(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2VAR(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2VAR(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo(P2CONST(dt_Nv_GearMgmtInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo Rte_Read_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_FctSftyGear_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_FctSftyGear_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld(data) (*(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk(data) (*(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels(data) (*(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum(data) (*(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_FctSftyGear_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_FctSftyGear_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGearCfmFail_Bus_tec_FctSftyMon_ActGearCfmFail_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_FUSATarGear_Enum_tec_FctSftyMon_FUSATarGear_Enum(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish
#  define Rte_Write_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish(data) (Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo Rte_Write_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo


# endif /* !defined(RTE_CORE) */


# define CtAp_FctSftyGear_START_SEC_CODE
# include "CtAp_FctSftyGear_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_FctSftyGear_Cyclic_20ms R_FctSftyGear_Cyclic_20ms
#  define RTE_RUNNABLE_R_FctSftyGear_Init R_FctSftyGear_Init
# endif

FUNC(void, CtAp_FctSftyGear_CODE) R_FctSftyGear_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_FctSftyGear_CODE) R_FctSftyGear_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_FctSftyGear_STOP_SEC_CODE
# include "CtAp_FctSftyGear_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_FCTSFTYGEAR_H */

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
