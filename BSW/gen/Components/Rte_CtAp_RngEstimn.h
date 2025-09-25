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
 *             File:  Rte_CtAp_RngEstimn.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_RngEstimn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_RNGESTIMN_H
# define RTE_CTAP_RNGESTIMN_H

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

# include "Rte_CtAp_RngEstimn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo (0U)
#  define Rte_InitValue_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km (0U)
#  define Rte_InitValue_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn (FALSE)
#  define Rte_InitValue_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah (0.0F)
#  define Rte_InitValue_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp (0.0F)
#  define Rte_InitValue_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld (FALSE)
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
#  define Rte_InitValue_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(P2VAR(Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(P2VAR(dt_Nv_RngEstimnInfo, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(P2CONST(Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(P2CONST(dt_Nv_RngEstimnInfo, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2 Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2
#  define Rte_Read_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_RngEstimn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg Rte_Read_CtAp_RngEstimn_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo Rte_Read_CtAp_RngEstimn_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo

#  define Rte_Read_CtAp_RngEstimn_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_RngEstimn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_RngEstimn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_RngEstimn_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo Rte_Write_CtAp_RngEstimn_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo
#  define Rte_Write_CtAp_RngEstimn_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km
#  define Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(data) (Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn
#  define Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(data) (Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km
#  define Rte_Write_CtAp_RngEstimn_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km(data) (RTE_E_OK)
#  define Rte_Write_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2 Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2
#  define Rte_Write_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo


# endif /* !defined(RTE_CORE) */


# define CtAp_RngEstimn_START_SEC_CODE
# include "CtAp_RngEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_RngEstimn_Cyclic_100ms R_RngEstimn_Cyclic_100ms
#  define RTE_RUNNABLE_R_RngEstimn_Init R_RngEstimn_Init
# endif

FUNC(void, CtAp_RngEstimn_CODE) R_RngEstimn_Cyclic_100ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_RngEstimn_CODE) R_RngEstimn_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_RngEstimn_STOP_SEC_CODE
# include "CtAp_RngEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_RNGESTIMN_H */

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
