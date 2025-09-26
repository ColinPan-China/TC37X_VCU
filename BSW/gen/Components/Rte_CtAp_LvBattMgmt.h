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
 *             File:  Rte_CtAp_LvBattMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_LvBattMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_LVBATTMGMT_H
# define RTE_CTAP_LVBATTMGMT_H

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

# include "Rte_CtAp_LvBattMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo (0U)
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
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct

#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(data) (*(data) = 0.0F, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(data) (*(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_LvBattMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V Rte_Read_CtAp_LvBattMgmt_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V
#  define Rte_Read_CtAp_LvBattMgmt_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V(data) (*(data) = Rte_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(data) (Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(data) (Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo
#  define Rte_Write_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(data) (Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_LvBattMgmt_START_SEC_CODE
# include "CtAp_LvBattMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_LvBattMgmt_Cyclic_20ms R_LvBattMgmt_Cyclic_20ms
#  define RTE_RUNNABLE_R_LvBattMgmt_Init R_LvBattMgmt_Init
# endif

FUNC(void, CtAp_LvBattMgmt_CODE) R_LvBattMgmt_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_LvBattMgmt_CODE) R_LvBattMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_LvBattMgmt_STOP_SEC_CODE
# include "CtAp_LvBattMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_LVBATTMGMT_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
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
