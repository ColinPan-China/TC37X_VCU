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
 *             File:  Rte_CtAp_DCComM.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_DCComM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_DCCOMM_H
# define RTE_CTAP_DCCOMM_H

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

# include "Rte_CtAp_DCComM_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(CCS_OutputCurrent, RTE_VAR_INIT_NOCACHE) Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx;

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BCL_ChargeMode_BCL_ChargeMode (0U)
#  define Rte_InitValue_BCL_CurrentRequire_BCL_CurrentRequire (-400.0F)
#  define Rte_InitValue_BCL_VolltageRequire_BCL_VolltageRequire (0U)
#  define Rte_InitValue_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout (0U)
#  define Rte_InitValue_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout (0U)
#  define Rte_InitValue_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout (0U)
#  define Rte_InitValue_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout (0U)
#  define Rte_InitValue_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 (0U)
#  define Rte_InitValue_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 (0U)
#  define Rte_InitValue_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout (0U)
#  define Rte_InitValue_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax (0U)
#  define Rte_InitValue_BRO_BMSChargeReady_BRO_BMSChargeReady (0U)
#  define Rte_InitValue_BSD_AbortSOC_BSD_AbortSOC (0U)
#  define Rte_InitValue_BSD_BatteryTempMax_BSD_BatteryTempMax (0U)
#  define Rte_InitValue_BSD_BatteryTempMin_BSD_BatteryTempMin (0U)
#  define Rte_InitValue_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax (0U)
#  define Rte_InitValue_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin (0U)
#  define Rte_InitValue_BSM_BatteryCurrentState_BSM_BatteryCurrentState (0U)
#  define Rte_InitValue_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState (0U)
#  define Rte_InitValue_BSM_BatteryTempMax_BSM_BatteryTempMax (0U)
#  define Rte_InitValue_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo (0U)
#  define Rte_InitValue_BSM_BatteryTempMin_BSM_BatteryTempMin (0U)
#  define Rte_InitValue_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo (0U)
#  define Rte_InitValue_BSM_BatteryTempState_BSM_BatteryTempState (0U)
#  define Rte_InitValue_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo (0U)
#  define Rte_InitValue_BSM_BatteryVoltageState_BSM_BatteryVoltageState (0U)
#  define Rte_InitValue_BSM_ChargeEnable_BSM_ChargeEnable (0U)
#  define Rte_InitValue_BSM_InsulationState_BSM_InsulationState (0U)
#  define Rte_InitValue_BSM_SOC_BSM_SOC (0U)
#  define Rte_InitValue_BST_AbortAchiveSOC_BST_AbortAchiveSOC (0U)
#  define Rte_InitValue_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt (0U)
#  define Rte_InitValue_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt (0U)
#  define Rte_InitValue_BST_AbortChargparameter_BST_AbortChargparameter (0U)
#  define Rte_InitValue_BST_AbortErrorCurrent_BST_AbortErrorCurrent (0U)
#  define Rte_InitValue_BST_AbortErrorVoltage_BST_AbortErrorVoltage (0U)
#  define Rte_InitValue_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp (0U)
#  define Rte_InitValue_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp (0U)
#  define Rte_InitValue_BST_AbortFaultConnector_BST_AbortFaultConnector (0U)
#  define Rte_InitValue_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp (0U)
#  define Rte_InitValue_BST_AbortFaultInsulation_BST_AbortFaultInsulation (0U)
#  define Rte_InitValue_BST_AbortFaultOther_BST_AbortFaultOther (0U)
#  define Rte_InitValue_BST_AbortHVrelayfault_BST_AbortHVrelayfault (0U)
#  define Rte_InitValue_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception (0U)
#  define Rte_InitValue_BST_Abortmanoperate_BST_Abortmanoperate (0U)
#  define Rte_InitValue_CCS_OutputCurrent_CCS_OutputCurrent (0U)
#  define Rte_InitValue_CCS_OutputVoltage_CCS_OutputVoltage (0U)
#  define Rte_InitValue_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout (0U)
#  define Rte_InitValue_CHM_ProtocolVersion_CHM_ProtocolVersion (0U)
#  define Rte_InitValue_CML_OutpuVoltageMax_CML_OutpuVoltageMax (0U)
#  define Rte_InitValue_CML_OutputCurrentMax_CML_OutputCurrentMax (0U)
#  define Rte_InitValue_CML_OutputCurrentMin_CML_OutputCurrentMin (0U)
#  define Rte_InitValue_CML_OutputVoltageMin_CML_OutputVoltageMin (0U)
#  define Rte_InitValue_CRM_RecognitionResult_CRM_RecognitionResult (1U)
#  define Rte_InitValue_CRO_ChargerReady_CRO_ChargerReady (0U)
#  define Rte_InitValue_CSD_ChargerNo_CSD_ChargerNo (1U)
#  define Rte_InitValue_CST_AbortAchiveCondition_CST_AbortAchiveCondition (0U)
#  define Rte_InitValue_CTS_Year_CTS_Year (0U)
#  define Rte_InitValue_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage(P2VAR(CCS_OutputVoltage, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout(P2VAR(CEM_BatteryChargeRequireTimeout, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion(P2VAR(CHM_ProtocolVersion, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax(P2VAR(uint16, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult(P2VAR(CRM_RecognitionResult, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady(P2VAR(CRO_ChargerReady, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo(P2VAR(CSD_ChargerNo, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition(P2VAR(CST_AbortAchiveCondition, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CTS_Year_CTS_Year(P2VAR(CTS_Year, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCCSTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCMLTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCRMPrepdTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCRMTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCROPrepdTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCROTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCSDTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCSTTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(P2VAR(SG_BMS_BatInfor_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(P2VAR(SG_BMS_BatInfor_02_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(P2VAR(SG_BMS_CellTemp_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(P2VAR(SG_BMS_CellVoltage_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(P2VAR(SG_BMS_Charge_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(P2VAR(SG_BMS_Charge_03_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(P2VAR(SG_BMS_PRO_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(P2VAR(SG_BMS_TCU_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(P2VAR(SG_BMS_VersionInfor_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(P2VAR(SG_BMS_status_03_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(P2VAR(SG_POD_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax(BCP_AllowChargeVoltageMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax(BCP_AllowTempMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax(BCP_BatteryChargeVoltageMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy(BCP_BatteryNominalEnergy data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage(BCP_BatteryTotalVoltage data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax(BCP_ChargeCurrentMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_SOC_BCP_SOC(BCP_SOC data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax(BCS_BatteryVoltMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup(BCS_BatteryVoltMaxGroup data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure(BCS_ChargeCurrentMeasure data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure(BCS_ChargeVoltageMeasure data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining(BCS_EstimatedTimeRemaining data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_SOC_BCS_SOC(BCS_SOC data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes(BRM_BatteryChargeTimes data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay(BRM_BatteryProductDay data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth(BRM_BatteryProductMonth data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear(BRM_BatteryProductYear data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty(BRM_BatteryProperty data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN(BRM_BatterySN data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity(BRM_BatterySystemRatedCapacity data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage(BRM_BatterySystemRatedVoltage data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType(BRM_BatteryType data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer(BRM_Manufacturer data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion(BRM_ProtocolVersion data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17(BRM_VehicleIdByte17 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8(P2CONST(uint8, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16(P2CONST(uint8, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode(BCL_ChargeMode data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire(BCL_CurrentRequire data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire(BCL_VolltageRequire data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout(BEM_ChargeAbortTimeout data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout(BEM_ChargeFinishTimeout data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout(BEM_ChargeStateTimeout data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout(BEM_ChargeStatisticsTimeout data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0(BEM_ChargerIdTimeout0 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1(BEM_ChargerIdTimeout1 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout(BEM_TimesyncOrPowerTimeout data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax(BHM_AllowChargeVoltageMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady(BRO_BMSChargeReady data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC(BSD_AbortSOC data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax(BSD_BatteryTempMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin(BSD_BatteryTempMin data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax(BSD_BatteryVoltageMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin(BSD_BatteryVoltageMin data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState(BSM_BatteryCurrentState data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState(BSM_BatteryOutpuConnectorState data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax(BSM_BatteryTempMax data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo(BSM_BatteryTempMaxNo data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin(BSM_BatteryTempMin data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo(BSM_BatteryTempMinNo data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState(BSM_BatteryTempState data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo(BSM_BatteryVoltageMaxNo data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState(BSM_BatteryVoltageState data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable(BSM_ChargeEnable data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState(BSM_InsulationState data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_SOC_BSM_SOC(BSM_SOC data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC(BST_AbortAchiveSOC data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt(BST_AbortAchiveSingleVolt data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt(BST_AbortAchiveTotalVolt data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter(BST_AbortChargparameter data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent(BST_AbortErrorCurrent data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage(BST_AbortErrorVoltage data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp(BST_AbortFaultBMSTemp data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp(BST_AbortFaultBatteryTemp data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector(BST_AbortFaultConnector data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp(BST_AbortFaultConnectorTemp data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation(BST_AbortFaultInsulation data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther(BST_AbortFaultOther data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault(BST_AbortHVrelayfault data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception(BST_Abortdet2Voltexception data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate(BST_Abortmanoperate data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CCS_OutputCurrent_CCS_OutputCurrent Rte_Read_CtAp_DCComM_CCS_OutputCurrent_CCS_OutputCurrent
#  define Rte_Read_CtAp_DCComM_CCS_OutputCurrent_CCS_OutputCurrent(data) (*(data) = Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_CCS_OutputVoltage_CCS_OutputVoltage Rte_Read_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage
#  define Rte_Read_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout Rte_Read_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout
#  define Rte_Read_CHM_ProtocolVersion_CHM_ProtocolVersion Rte_Read_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion
#  define Rte_Read_CML_OutpuVoltageMax_CML_OutpuVoltageMax Rte_Read_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax
#  define Rte_Read_CML_OutputCurrentMax_CML_OutputCurrentMax Rte_Read_CtAp_DCComM_CML_OutputCurrentMax_CML_OutputCurrentMax
#  define Rte_Read_CtAp_DCComM_CML_OutputCurrentMax_CML_OutputCurrentMax(data) (*(data) = Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_CML_OutputCurrentMin_CML_OutputCurrentMin Rte_Read_CtAp_DCComM_CML_OutputCurrentMin_CML_OutputCurrentMin
#  define Rte_Read_CtAp_DCComM_CML_OutputCurrentMin_CML_OutputCurrentMin(data) (*(data) = Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_CML_OutputVoltageMin_CML_OutputVoltageMin Rte_Read_CtAp_DCComM_CML_OutputVoltageMin_CML_OutputVoltageMin
#  define Rte_Read_CtAp_DCComM_CML_OutputVoltageMin_CML_OutputVoltageMin(data) (*(data) = Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_CRM_RecognitionResult_CRM_RecognitionResult Rte_Read_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult
#  define Rte_Read_CRO_ChargerReady_CRO_ChargerReady Rte_Read_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady
#  define Rte_Read_CSD_ChargerNo_CSD_ChargerNo Rte_Read_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo
#  define Rte_Read_CST_AbortAchiveCondition_CST_AbortAchiveCondition Rte_Read_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition
#  define Rte_Read_CTS_Year_CTS_Year Rte_Read_CtAp_DCComM_CTS_Year_CTS_Year
#  define Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A Rte_Read_CtAp_DCComM_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
#  define Rte_Read_CtAp_DCComM_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(data) (*(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus
#  define Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V(data) (*(data) = Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A(data) (*(data) = Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum(data) (*(data) = Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
#  define Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup
#  define Rte_Read_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup
#  define Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup
#  define Rte_Read_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup
#  define Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup
#  define Rte_Read_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup
#  define Rte_Read_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup
#  define Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup
#  define Rte_Read_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup
#  define Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup Rte_Read_CtAp_DCComM_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup
#  define Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup Rte_Read_CtAp_DCComM_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_IsUpdated_CCS_OutputVoltage_CCS_OutputVoltage Rte_IsUpdated_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage
#  define Rte_IsUpdated_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage_Sender)
#  define Rte_IsUpdated_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout Rte_IsUpdated_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout
#  define Rte_IsUpdated_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout_Sender)
#  define Rte_IsUpdated_CHM_ProtocolVersion_CHM_ProtocolVersion Rte_IsUpdated_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion
#  define Rte_IsUpdated_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion_Sender)
#  define Rte_IsUpdated_CML_OutpuVoltageMax_CML_OutpuVoltageMax Rte_IsUpdated_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax
#  define Rte_IsUpdated_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax_Sender)
#  define Rte_IsUpdated_CRM_RecognitionResult_CRM_RecognitionResult Rte_IsUpdated_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult
#  define Rte_IsUpdated_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult_Sender)
#  define Rte_IsUpdated_CRO_ChargerReady_CRO_ChargerReady Rte_IsUpdated_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady
#  define Rte_IsUpdated_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady_Sender)
#  define Rte_IsUpdated_CSD_ChargerNo_CSD_ChargerNo Rte_IsUpdated_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo
#  define Rte_IsUpdated_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo_Sender)
#  define Rte_IsUpdated_CST_AbortAchiveCondition_CST_AbortAchiveCondition Rte_IsUpdated_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition
#  define Rte_IsUpdated_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition_Sender)
#  define Rte_IsUpdated_CTS_Year_CTS_Year Rte_IsUpdated_CtAp_DCComM_CTS_Year_CTS_Year
#  define Rte_IsUpdated_CtAp_DCComM_CTS_Year_CTS_Year() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year_Sender)
#  define Rte_IsUpdated_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup Rte_IsUpdated_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup
#  define Rte_IsUpdated_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender)
#  define Rte_IsUpdated_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup Rte_IsUpdated_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup
#  define Rte_IsUpdated_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup() (Rte_SystemApplication_OsCore2_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup != Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender)


/**********************************************************************************************************************
 * Rte_Send_<p>_<d> (explicit S/R communication with isQueued = true)
 *********************************************************************************************************************/
#  define Rte_Send_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax Rte_Send_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax
#  define Rte_Send_BCP_AllowTempMax_BCP_AllowTempMax Rte_Send_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax
#  define Rte_Send_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax Rte_Send_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax
#  define Rte_Send_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy Rte_Send_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy
#  define Rte_Send_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage Rte_Send_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage
#  define Rte_Send_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax Rte_Send_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax
#  define Rte_Send_BCP_SOC_BCP_SOC Rte_Send_CtAp_DCComM_BCP_SOC_BCP_SOC
#  define Rte_Send_BCS_BatteryVoltMax_BCS_BatteryVoltMax Rte_Send_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax
#  define Rte_Send_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup Rte_Send_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup
#  define Rte_Send_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure Rte_Send_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure
#  define Rte_Send_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure Rte_Send_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure
#  define Rte_Send_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining Rte_Send_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining
#  define Rte_Send_BCS_SOC_BCS_SOC Rte_Send_CtAp_DCComM_BCS_SOC_BCS_SOC
#  define Rte_Send_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes Rte_Send_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes
#  define Rte_Send_BRM_BatteryProductDay_BRM_BatteryProductDay Rte_Send_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay
#  define Rte_Send_BRM_BatteryProductMonth_BRM_BatteryProductMonth Rte_Send_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth
#  define Rte_Send_BRM_BatteryProductYear_BRM_BatteryProductYear Rte_Send_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear
#  define Rte_Send_BRM_BatteryProperty_BRM_BatteryProperty Rte_Send_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty
#  define Rte_Send_BRM_BatterySN_BRM_BatterySN Rte_Send_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN
#  define Rte_Send_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity
#  define Rte_Send_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage
#  define Rte_Send_BRM_BatteryType_BRM_BatteryType Rte_Send_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType
#  define Rte_Send_BRM_Manufacturer_BRM_Manufacturer Rte_Send_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer
#  define Rte_Send_BRM_ProtocolVersion_BRM_ProtocolVersion Rte_Send_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion
#  define Rte_Send_BRM_VehicleIdByte17_BRM_VehicleIdByte17 Rte_Send_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17
#  define Rte_Send_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 Rte_Send_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8
#  define Rte_Send_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 Rte_Send_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_BCL_ChargeMode_BCL_ChargeMode Rte_Write_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode
#  define Rte_Write_BCL_CurrentRequire_BCL_CurrentRequire Rte_Write_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire
#  define Rte_Write_BCL_VolltageRequire_BCL_VolltageRequire Rte_Write_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire
#  define Rte_Write_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout Rte_Write_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout
#  define Rte_Write_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout Rte_Write_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout
#  define Rte_Write_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout Rte_Write_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout
#  define Rte_Write_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout Rte_Write_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout
#  define Rte_Write_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0
#  define Rte_Write_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1
#  define Rte_Write_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout Rte_Write_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout
#  define Rte_Write_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax Rte_Write_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax
#  define Rte_Write_BRO_BMSChargeReady_BRO_BMSChargeReady Rte_Write_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady
#  define Rte_Write_BSD_AbortSOC_BSD_AbortSOC Rte_Write_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC
#  define Rte_Write_BSD_BatteryTempMax_BSD_BatteryTempMax Rte_Write_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax
#  define Rte_Write_BSD_BatteryTempMin_BSD_BatteryTempMin Rte_Write_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin
#  define Rte_Write_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax
#  define Rte_Write_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin
#  define Rte_Write_BSM_BatteryCurrentState_BSM_BatteryCurrentState Rte_Write_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState
#  define Rte_Write_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState Rte_Write_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState
#  define Rte_Write_BSM_BatteryTempMax_BSM_BatteryTempMax Rte_Write_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax
#  define Rte_Write_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo Rte_Write_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo
#  define Rte_Write_BSM_BatteryTempMin_BSM_BatteryTempMin Rte_Write_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin
#  define Rte_Write_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo Rte_Write_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo
#  define Rte_Write_BSM_BatteryTempState_BSM_BatteryTempState Rte_Write_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState
#  define Rte_Write_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo Rte_Write_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo
#  define Rte_Write_BSM_BatteryVoltageState_BSM_BatteryVoltageState Rte_Write_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState
#  define Rte_Write_BSM_ChargeEnable_BSM_ChargeEnable Rte_Write_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable
#  define Rte_Write_BSM_InsulationState_BSM_InsulationState Rte_Write_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState
#  define Rte_Write_BSM_SOC_BSM_SOC Rte_Write_CtAp_DCComM_BSM_SOC_BSM_SOC
#  define Rte_Write_BST_AbortAchiveSOC_BST_AbortAchiveSOC Rte_Write_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC
#  define Rte_Write_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt Rte_Write_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt
#  define Rte_Write_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt Rte_Write_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt
#  define Rte_Write_BST_AbortChargparameter_BST_AbortChargparameter Rte_Write_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter
#  define Rte_Write_BST_AbortErrorCurrent_BST_AbortErrorCurrent Rte_Write_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent
#  define Rte_Write_BST_AbortErrorVoltage_BST_AbortErrorVoltage Rte_Write_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage
#  define Rte_Write_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp Rte_Write_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp
#  define Rte_Write_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp Rte_Write_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp
#  define Rte_Write_BST_AbortFaultConnector_BST_AbortFaultConnector Rte_Write_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector
#  define Rte_Write_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp Rte_Write_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp
#  define Rte_Write_BST_AbortFaultInsulation_BST_AbortFaultInsulation Rte_Write_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation
#  define Rte_Write_BST_AbortFaultOther_BST_AbortFaultOther Rte_Write_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther
#  define Rte_Write_BST_AbortHVrelayfault_BST_AbortHVrelayfault Rte_Write_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault
#  define Rte_Write_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception Rte_Write_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception
#  define Rte_Write_BST_Abortmanoperate_BST_Abortmanoperate Rte_Write_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate
#  define Rte_Write_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A Rte_Write_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A(data) (Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V Rte_Write_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V(data) (Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(data) (Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V(data) (Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A(data) (Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V(data) (Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum Rte_Write_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum(data) (Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum Rte_Write_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum(data) (Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
#  define Rte_Write_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(data) (Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_DCComM_START_SEC_CODE
# include "CtAp_DCComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_DCComM_Cyclic_10ms R_DCComM_Cyclic_10ms
#  define RTE_RUNNABLE_R_DCComM_Init R_DCComM_Init
# endif

FUNC(void, CtAp_DCComM_CODE) R_DCComM_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_DCComM_CODE) R_DCComM_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_DCComM_STOP_SEC_CODE
# include "CtAp_DCComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_DCCOMM_H */

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
