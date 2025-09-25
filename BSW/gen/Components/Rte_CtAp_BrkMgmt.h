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
 *             File:  Rte_CtAp_BrkMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_BrkMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_BRKMGMT_H
# define RTE_CTAP_BRKMGMT_H

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

# include "Rte_CtAp_BrkMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum (0U)
#  define Rte_InitValue_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum (0U)
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
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo(P2VAR(dt_Nv_ChassisMgmtInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo(P2CONST(dt_Nv_ChassisMgmtInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo Rte_Read_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_BrkMgmt_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_BrkMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_BrkMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg Rte_Read_CtAp_BrkMgmt_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_BrkMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(data) (*(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_BrkMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Read_CtAp_BrkMgmt_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Read_CtAp_BrkMgmt_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm
#  define Rte_Write_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm(data) (Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo Rte_Write_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo


# endif /* !defined(RTE_CORE) */


# define CtAp_BrkMgmt_START_SEC_CODE
# include "CtAp_BrkMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_BrkMgmt_Cyclic_10ms R_BrkMgmt_Cyclic_10ms
#  define RTE_RUNNABLE_R_BrkMgmt_Init R_BrkMgmt_Init
# endif

FUNC(void, CtAp_BrkMgmt_CODE) R_BrkMgmt_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_BrkMgmt_CODE) R_BrkMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_BrkMgmt_STOP_SEC_CODE
# include "CtAp_BrkMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_BRKMGMT_H */

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
