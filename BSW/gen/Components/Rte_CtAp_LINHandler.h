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
 *             File:  Rte_CtAp_LINHandler.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_LINHandler>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_LINHANDLER_H
# define RTE_CTAP_LINHANDLER_H

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

# include "Rte_CtAp_LINHandler_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(FRC_Vl_OV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx;
extern VAR(FRC_Vl_UV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx;
extern VAR(IBATT_QUIESCENT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx;
extern VAR(I_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx;
extern VAR(I_RANGE_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx;
extern VAR(SOC_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx;
extern VAR(SOF_V1_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx;
extern VAR(SOF_V2_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx;
extern VAR(SOH_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx;
extern VAR(T_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx;
extern VAR(U_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx;

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 (TRUE)
#  define Rte_InitValue_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 (30U)
#  define Rte_InitValue_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 (TRUE)
#  define Rte_InitValue_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 (145U)
#  define Rte_InitValue_FRC_ComFtonNet_FRC_ComFtonNet (TRUE)
#  define Rte_InitValue_FRC_Vl_OV_FRC_Vl_OV (TRUE)
#  define Rte_InitValue_FRC_Vl_UV_FRC_Vl_UV (TRUE)
#  define Rte_InitValue_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01 (255U)
#  define Rte_InitValue_I_BATT_LIN01_I_BATT_LIN01 (65535U)
#  define Rte_InitValue_I_RANGE_LIN01_I_RANGE_LIN01 (3U)
#  define Rte_InitValue_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info (0.0F)
#  define Rte_InitValue_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet (FALSE)
#  define Rte_InitValue_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV (FALSE)
#  define Rte_InitValue_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState (FALSE)
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
#  define Rte_InitValue_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo (FALSE)
#  define Rte_InitValue_Resp_Error_LIN01_Resp_Error_LIN01 (FALSE)
#  define Rte_InitValue_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 (TRUE)
#  define Rte_InitValue_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 (70U)
#  define Rte_InitValue_SOC_LIN01_SOC_LIN01 (1U)
#  define Rte_InitValue_SOF_V1_LIN01_SOF_V1_LIN01 (255U)
#  define Rte_InitValue_SOF_V2_LIN01_SOF_V2_LIN01 (255U)
#  define Rte_InitValue_SOH_LIN01_SOH_LIN01 (255U)
#  define Rte_InitValue_T_BATT_LIN01_T_BATT_LIN01 (255U)
#  define Rte_InitValue_U_BATT_LIN01_U_BATT_LIN01 (16383U)
#  define Rte_InitValue_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN (0U)
#  define Rte_InitValue_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN (0U)
#  define Rte_InitValue_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN (0U)
#  define Rte_InitValue_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN (0U)
#  define Rte_InitValue_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN (0U)
#  define Rte_InitValue_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN (0U)
#  define Rte_InitValue_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN (0U)
#  define Rte_InitValue_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN (0U)
#  define Rte_InitValue_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN (FALSE)
#  define Rte_InitValue_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN (70U)
#  define Rte_InitValue_VCU_BattType_LIN00_VCU_BattType_LIN (0U)
#  define Rte_InitValue_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN (2U)
#  define Rte_InitValue_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN (2U)
#  define Rte_InitValue_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN (0U)
#  define Rte_InitValue_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN (FALSE)
#  define Rte_InitValue_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN (FALSE)
#  define Rte_InitValue_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN (FALSE)
#  define Rte_InitValue_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN (FALSE)
#  define Rte_InitValue_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN (FALSE)
#  define Rte_InitValue_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN (FALSE)
#  define Rte_InitValue_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN (0U)
#  define Rte_InitValue_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN (FALSE)
#  define Rte_InitValue_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN (FALSE)
#  define Rte_InitValue_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN (FALSE)
#  define Rte_InitValue_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN (0U)
#  define Rte_InitValue_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN (FALSE)
#  define Rte_InitValue_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN (FALSE)
#  define Rte_InitValue_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN (0U)
#  define Rte_InitValue_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 (FALSE)
#  define Rte_InitValue_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet(P2VAR(FRC_ComFtonNet, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_DrvMotTempOvrLamp, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_HvBattTempOvrLamp, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01(P2VAR(Resp_Error_LIN01, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01(ChargeCurrWU_Ena_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01(ChargeCurrWU_Treshold_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01(DisChargeCurrWU_Ena_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01(DisChargeCurrWU_Treshold_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01(SOCWU_Ena_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01(SOCWU_Treshold_LIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN(VCU_ACU_DriverWarningLampSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN(VCU_ACU_PassengerAirbagSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN(VCU_ACU_PassengerWarningLampSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN(VCU_ACU_WarningLampSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN(VCU_BCM_FLSeatBeltRemindReq_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN(VCU_BCM_FRSeatBeltRemindReq_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN(VCU_BCM_RLSeatBeltRemindReq_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN(VCU_BCM_RRSeatBeltRemindReq_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN(VCU_CGW_VehicleState_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN(VCU_DCDCFail_LIN_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN(VCU_DCM_FL_DoorFLSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN(VCU_DCM_FR_DoorFRSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN(VCU_DCM_RL_DoorRLSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN(VCU_DCM_RR_DoorRRSts_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN(VCU_DriveMotOvrTemp_LIN_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN(VCU_HVBatCriFail_LIN_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN(VCU_HVBatOvrTemp_LIN_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN(VCU_IBS_BrakeFluidWarning_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN(VCU_IBS_EBDFault_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN(VCU_IBS_RollerbenchMode_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN(VCU_IBS_SystemStatus_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01(VCU_IVI_BulbCheckStsLIN01 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN(VCU_IVI_VrState_LIN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FRC_ComFtonNet_FRC_ComFtonNet Rte_Read_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet
#  define Rte_Read_FRC_Vl_OV_FRC_Vl_OV Rte_Read_CtAp_LINHandler_FRC_Vl_OV_FRC_Vl_OV
#  define Rte_Read_CtAp_LINHandler_FRC_Vl_OV_FRC_Vl_OV(data) (*(data) = Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_FRC_Vl_UV_FRC_Vl_UV Rte_Read_CtAp_LINHandler_FRC_Vl_UV_FRC_Vl_UV
#  define Rte_Read_CtAp_LINHandler_FRC_Vl_UV_FRC_Vl_UV(data) (*(data) = Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01 Rte_Read_CtAp_LINHandler_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01
#  define Rte_Read_CtAp_LINHandler_IBATT_QUIESCENT_LIN01_IBATT_QUIESCENT_LIN01(data) (*(data) = Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_I_BATT_LIN01_I_BATT_LIN01 Rte_Read_CtAp_LINHandler_I_BATT_LIN01_I_BATT_LIN01
#  define Rte_Read_CtAp_LINHandler_I_BATT_LIN01_I_BATT_LIN01(data) (*(data) = Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_I_RANGE_LIN01_I_RANGE_LIN01 Rte_Read_CtAp_LINHandler_I_RANGE_LIN01_I_RANGE_LIN01
#  define Rte_Read_CtAp_LINHandler_I_RANGE_LIN01_I_RANGE_LIN01(data) (*(data) = Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState Rte_Read_CtAp_LINHandler_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_IVIVrState_tec_ComM_IVIVrState(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo Rte_Read_CtAp_LINHandler_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_LINHandler_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_LINHandler_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus
#  define Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp
#  define Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_LINHandler_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_LINHandler_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo Rte_Read_CtAp_LINHandler_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo
#  define Rte_Read_CtAp_LINHandler_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_Resp_Error_LIN01_Resp_Error_LIN01 Rte_Read_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01
#  define Rte_Read_SOC_LIN01_SOC_LIN01 Rte_Read_CtAp_LINHandler_SOC_LIN01_SOC_LIN01
#  define Rte_Read_CtAp_LINHandler_SOC_LIN01_SOC_LIN01(data) (*(data) = Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_SOF_V1_LIN01_SOF_V1_LIN01 Rte_Read_CtAp_LINHandler_SOF_V1_LIN01_SOF_V1_LIN01
#  define Rte_Read_CtAp_LINHandler_SOF_V1_LIN01_SOF_V1_LIN01(data) (*(data) = Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_SOF_V2_LIN01_SOF_V2_LIN01 Rte_Read_CtAp_LINHandler_SOF_V2_LIN01_SOF_V2_LIN01
#  define Rte_Read_CtAp_LINHandler_SOF_V2_LIN01_SOF_V2_LIN01(data) (*(data) = Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_SOH_LIN01_SOH_LIN01 Rte_Read_CtAp_LINHandler_SOH_LIN01_SOH_LIN01
#  define Rte_Read_CtAp_LINHandler_SOH_LIN01_SOH_LIN01(data) (*(data) = Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_T_BATT_LIN01_T_BATT_LIN01 Rte_Read_CtAp_LINHandler_T_BATT_LIN01_T_BATT_LIN01
#  define Rte_Read_CtAp_LINHandler_T_BATT_LIN01_T_BATT_LIN01(data) (*(data) = Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_U_BATT_LIN01_U_BATT_LIN01 Rte_Read_CtAp_LINHandler_U_BATT_LIN01_U_BATT_LIN01
#  define Rte_Read_CtAp_LINHandler_U_BATT_LIN01_U_BATT_LIN01(data) (*(data) = Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_IsUpdated_FRC_ComFtonNet_FRC_ComFtonNet Rte_IsUpdated_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet
#  define Rte_IsUpdated_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet() (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet_Sender)
#  define Rte_IsUpdated_Resp_Error_LIN01_Resp_Error_LIN01 Rte_IsUpdated_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01
#  define Rte_IsUpdated_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01() (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01 != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01_Sender)


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 Rte_Write_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01
#  define Rte_Write_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 Rte_Write_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01
#  define Rte_Write_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01
#  define Rte_Write_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01
#  define Rte_Write_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated Rte_Write_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(data) (Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSSOFV1Info_tec_ComM_BSSOFV1Info(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_BSSOFV2Info_tec_ComM_BSSOFV2Info(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCComFtonNet_tec_ComM_FRCComFtonNet(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCMsgErrDTC_Bus_tec_ComM_FRCMsgErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCNodComFailrInfo_tec_ComM_FRCNodComFailrInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCRespErrDTC_Bus_tec_ComM_FRCRespErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCSplyUDcHiDTC_Bus_tec_ComM_FRCSplyUDcHiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCSplyUDcLoDTC_Bus_tec_ComM_FRCSplyUDcLoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCVlOV_tec_ComM_FRCVlOV(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_FRCVlUV_tec_ComM_FRCVlUV(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus Rte_Write_CtAp_LINHandler_RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus
#  define Rte_Write_CtAp_LINHandler_RTE_P_ComM_LinMsgErrInfo_Bus_tec_ComM_LinMsgErrInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 Rte_Write_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01
#  define Rte_Write_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 Rte_Write_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01
#  define Rte_Write_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN Rte_Write_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN
#  define Rte_Write_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN
#  define Rte_Write_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN
#  define Rte_Write_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN Rte_Write_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN
#  define Rte_Write_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN Rte_Write_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN
#  define Rte_Write_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN Rte_Write_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN
#  define Rte_Write_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN Rte_Write_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN
#  define Rte_Write_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN Rte_Write_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN
#  define Rte_Write_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN Rte_Write_CtAp_LINHandler_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_BS_IndicatorLightSts_LIN00_VCU_BS_IndicatorLightSts_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN Rte_Write_CtAp_LINHandler_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_BattNomC20_LIN00_VCU_BattNomC20_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_BattType_LIN00_VCU_BattType_LIN Rte_Write_CtAp_LINHandler_VCU_BattType_LIN00_VCU_BattType_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_BattType_LIN00_VCU_BattType_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN Rte_Write_CtAp_LINHandler_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_Batt_U0_Max_LIN00_VCU_Batt_U0_Max_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN Rte_Write_CtAp_LINHandler_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_Batt_U0_Min_LIN00_VCU_Batt_U0_Min_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN Rte_Write_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN
#  define Rte_Write_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN Rte_Write_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN
#  define Rte_Write_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN Rte_Write_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN
#  define Rte_Write_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN Rte_Write_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN
#  define Rte_Write_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN Rte_Write_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN
#  define Rte_Write_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN Rte_Write_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN
#  define Rte_Write_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN Rte_Write_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN
#  define Rte_Write_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN Rte_Write_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN
#  define Rte_Write_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN Rte_Write_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN
#  define Rte_Write_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN Rte_Write_CtAp_LINHandler_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_HstTempDataRqTrg_LIN00_VCU_HstTempDataRqTrg_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN Rte_Write_CtAp_LINHandler_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN
#  define Rte_Write_CtAp_LINHandler_VCU_IBSClrDiagInf_LIN00_VCU_IBSClrDiagInf_LIN(data) (RTE_E_OK)
#  define Rte_Write_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN Rte_Write_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN
#  define Rte_Write_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN Rte_Write_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN
#  define Rte_Write_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN Rte_Write_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN
#  define Rte_Write_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN Rte_Write_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN
#  define Rte_Write_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 Rte_Write_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01
#  define Rte_Write_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN Rte_Write_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN


# endif /* !defined(RTE_CORE) */


# define CtAp_LINHandler_START_SEC_CODE
# include "CtAp_LINHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_LINHandler_Cyclic_10ms R_LINHandler_Cyclic_10ms
#  define RTE_RUNNABLE_R_LINHandler_Init R_LINHandler_Init
# endif

FUNC(void, CtAp_LINHandler_CODE) R_LINHandler_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_LINHandler_CODE) R_LINHandler_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_LINHandler_STOP_SEC_CODE
# include "CtAp_LINHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_LINHANDLER_H */

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
