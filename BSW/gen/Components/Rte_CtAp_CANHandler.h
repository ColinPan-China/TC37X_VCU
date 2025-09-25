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
 *             File:  Rte_CtAp_CANHandler.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_CANHandler>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CANHANDLER_H
# define RTE_CTAP_CANHANDLER_H

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

# include "Rte_CtAp_CANHandler_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_CtAp_CANHandler, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax (0U)
#  define Rte_InitValue_CCS_OutputCurrent_CCS_OutputCurrent (0U)
#  define Rte_InitValue_CCS_OutputVoltage_CCS_OutputVoltage (0U)
#  define Rte_InitValue_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout (0U)
#  define Rte_InitValue_CHM_ProtocolVersion_CHM_ProtocolVersion (0U)
#  define Rte_InitValue_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate (0.0F)
#  define Rte_InitValue_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt (0U)
#  define Rte_InitValue_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod (0U)
#  define Rte_InitValue_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod (0U)
#  define Rte_InitValue_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod (0U)
#  define Rte_InitValue_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw (0.0F)
#  define Rte_InitValue_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update (FALSE)
#  define Rte_InitValue_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C (0)
#  define Rte_InitValue_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C (0)
#  define Rte_InitValue_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp (0.0F)
#  define Rte_InitValue_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld (FALSE)
#  define Rte_InitValue_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo (0.0F)
#  define Rte_InitValue_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C (0)
#  define Rte_InitValue_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C (0)
#  define Rte_InitValue_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg (0.0F)
#  define Rte_InitValue_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld (FALSE)
#  define Rte_InitValue_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw (0.0F)
#  define Rte_InitValue_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_ErrResEPTCANBusOffInfo_tec_ComM_ErrResEPTCANBusOffInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo (0.0F)
#  define Rte_InitValue_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState (FALSE)
#  define Rte_InitValue_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate (FALSE)
#  define Rte_InitValue_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm (0)
#  define Rte_InitValue_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct (0U)
#  define Rte_InitValue_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo (FALSE)
#  define Rte_InitValue_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update (FALSE)
#  define Rte_InitValue_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update (FALSE)
#  define Rte_InitValue_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm (0U)
#  define Rte_InitValue_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update (FALSE)
#  define Rte_InitValue_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W (0.0F)
#  define Rte_InitValue_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo (0U)
#  define Rte_InitValue_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts (0U)
#  define Rte_InitValue_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q (0.0F)
#  define Rte_InitValue_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed (0U)
#  define Rte_InitValue_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum (0U)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V (0.0F)
#  define Rte_InitValue_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6 (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum (0U)
#  define Rte_InitValue_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg (FALSE)
#  define Rte_InitValue_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo (0.0F)
#  define Rte_InitValue_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp (0U)
#  define Rte_InitValue_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp (0U)
#  define Rte_InitValue_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum (0U)
#  define Rte_InitValue_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq (0U)
#  define Rte_InitValue_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum (0U)
#  define Rte_InitValue_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km (0U)
#  define Rte_InitValue_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn (FALSE)
#  define Rte_InitValue_RTE_R_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km (0U)
#  define Rte_InitValue_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF (0U)
#  define Rte_InitValue_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF (FALSE)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(P2VAR(dt_ComM_CHCANBusOffInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_DrvMotTempOvrLamp, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_HvBattTempOvrLamp, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(P2VAR(dt_ErrMgmt_InslaFlt, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(P2VAR(dt_ErrMgmt_VehHVIL, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(P2VAR(BCM_Authentication_YDF, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(P2VAR(SG_ACU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(P2VAR(SG_ACU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(P2VAR(SG_ACU_Info_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(P2VAR(SG_ADCU_ACC_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(P2VAR(SG_ADCU_AEB_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(P2VAR(SG_ADCU_APS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(P2VAR(SG_ADCU_APS_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(P2VAR(SG_ADCU_DA_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(P2VAR(SG_APTC_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(P2VAR(SG_BCM_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(P2VAR(SG_BCM_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(P2VAR(SG_BMS_BatInfor_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(P2VAR(SG_BMS_BatInfor_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(P2VAR(SG_BMS_BatInfor_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(P2VAR(SG_BMS_CellTemp_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(P2VAR(SG_BMS_CellVoltage_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(P2VAR(SG_BMS_Charge_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(P2VAR(SG_BMS_Charge_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(P2VAR(SG_BMS_Charge_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(P2VAR(SG_BMS_DIRelayState_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(P2VAR(SG_BMS_ErrorInfo_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(P2VAR(SG_BMS_PRO_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(P2VAR(SG_BMS_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(P2VAR(SG_BMS_VersionInfor_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(P2VAR(SG_BMS_status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(P2VAR(SG_BMS_status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(P2VAR(SG_BMS_status_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(P2VAR(SG_BMS_status_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(P2VAR(SG_CGW_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(P2VAR(SG_CGW_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(P2VAR(SG_CGW_VIN1_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(P2VAR(SG_CGW_VIN2_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(P2VAR(SG_CGW_VIN3VER_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(P2VAR(SG_DCM_FL_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(P2VAR(SG_DCM_FR_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(P2VAR(SG_DCM_FR_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(P2VAR(SG_DCM_RL_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(P2VAR(SG_DCM_RR_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(P2VAR(SG_EPS_CONV_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(P2VAR(SG_EVCOM_State_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(P2VAR(SG_IBS_ACC_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(P2VAR(SG_IBS_APS_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(P2VAR(SG_IBS_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(P2VAR(SG_IBS_Status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(P2VAR(SG_IBS_Status_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(P2VAR(SG_IBS_Status_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(P2VAR(SG_IBS_Status_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(P2VAR(SG_IBS_Status_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(P2VAR(SG_IBS_Torque_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(P2VAR(SG_IBS_VCU_MotorControl_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(P2VAR(SG_IBS_WheelSpeed_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(P2VAR(SG_IBS_WheelSpeed_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(P2VAR(SG_IVI_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup(P2VAR(SG_IVI_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(P2VAR(SG_IVI_OdometerInfor_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(P2VAR(SG_MCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(P2VAR(SG_MCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(P2VAR(SG_MCU_DeratingStatus_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(P2VAR(SG_MCU_FailureCode_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(P2VAR(SG_MCU_Temperature_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(P2VAR(SG_MCU_Temperature_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(P2VAR(SG_POD_DCDC_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(P2VAR(SG_POD_DCDC_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(P2VAR(SG_POD_OBC_CHRGSTATION_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(P2VAR(SG_POD_OBC_STATUS_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(P2VAR(SG_POD_OBC_STATUS_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(P2VAR(SG_POD_OBC_STATUS_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(P2VAR(SG_POD_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(P2VAR(SG_POD_Status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup(P2VAR(SG_PRND_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(P2VAR(SG_SGW_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(P2VAR(SG_SGW_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(P2VAR(SG_SGW_16_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(P2VAR(SG_SGW_17_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(P2VAR(SG_SGW_IBS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(P2VAR(SG_SGW_PT_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(P2VAR(SG_SGW_Time_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(P2VAR(SG_SGW_VCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(P2VAR(SG_TCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(P2VAR(SG_TCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(P2CONST(dt_ComM_ACU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(P2CONST(dt_ComM_ACU02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACU02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus(P2CONST(dt_ComM_ACU02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(P2CONST(dt_ComM_ACUInfoCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACUInfoTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(P2CONST(dt_ComM_ACUInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUACC02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUACC02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(P2CONST(dt_ComM_ADCUACC02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUAEB01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUAEB01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUAPS01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUAPS01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUBodyReqCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUBodyReqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUDACRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUDATimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(P2CONST(dt_ComM_APTCTCUTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(P2CONST(dt_ComM_APTCTCUTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(P2CONST(dt_ComM_BCM05CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BCM05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(P2CONST(dt_ComM_BCM06CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BCM06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(P2CONST(dt_ComM_BCM06TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2CONST(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(P2CONST(dt_ComM_BMSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(P2CONST(dt_ComM_BMSSts01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BMSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BMSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C(sint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C(sint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(P2CONST(dt_ComM_CGW01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_CGW01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(P2CONST(dt_ComM_CGW01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(P2CONST(dt_ComM_DCMFL02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMFL02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(P2CONST(dt_ComM_DCMFL02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMFRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(P2CONST(dt_ComM_DCMFRTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMRLTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(P2CONST(dt_ComM_DCMRLTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMRRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(P2CONST(dt_ComM_DCMRRTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C(sint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C(sint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_EVCOMSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(P2CONST(dt_ComM_EVCOMSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSACCCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(P2CONST(dt_ComM_IBSACCCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSACCE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSACCTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSAPSCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSAPSTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(P2CONST(dt_ComM_IBSSts01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2CONST(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts03CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(P2CONST(dt_ComM_IBSSts03CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts03E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts03TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts04CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(P2CONST(dt_ComM_IBSSts04CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts04E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts04TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts05CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus(P2CONST(dt_ComM_IBSSts05CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts05E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts05TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts06CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSTqCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2CONST(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSTqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2CONST(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(P2CONST(dt_ComM_MCU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2CONST(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_MCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(P2CONST(dt_ComM_MCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2CONST(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(sint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_PODDCDC01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(P2CONST(dt_ComM_PODDCDC01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(P2CONST(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(P2CONST(dt_ComM_PODOBCChrgStatTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2CONST(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(P2CONST(dt_ComM_PRNDCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2CONST(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2CONST(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(P2CONST(dt_ComM_PRNDTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(P2CONST(dt_ComM_PRNDTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGW16TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(P2CONST(dt_ComM_SGW16TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGW17TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(P2CONST(dt_ComM_SGW17TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGWPT01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(P2CONST(dt_ComM_SGWPT01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGWTimTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(P2CONST(dt_ComM_SGWTimTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_TCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(P2CONST(dt_ComM_TCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update(boolean data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts(uint8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(float32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed(VCU_VehicleSpeed data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid(VCU_VehicleSpeedValid data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup(P2CONST(SG_VCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup(P2CONST(SG_VCU_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup(P2CONST(SG_VCU_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup(P2CONST(SG_VCU_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup(P2CONST(SG_VCU_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup(P2CONST(SG_VCU_AccPedal_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup(P2CONST(SG_VCU_BMS_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup(P2CONST(SG_VCU_Chassis_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup(P2CONST(SG_VCU_DCDC_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup(P2CONST(SG_VCU_HMIsignals_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup(P2CONST(SG_VCU_HMIsignals_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup(P2CONST(SG_VCU_HMIsignals_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup(P2CONST(SG_VCU_IBS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup(P2CONST(SG_VCU_MCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup(P2CONST(SG_VCU_MCU_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup(P2CONST(SG_VCU_MCU_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup(P2CONST(SG_VCU_POD_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup(P2CONST(SG_VCU_PlugInChrgInfo_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup(P2CONST(SG_VCU_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum
#  define Rte_Read_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
#  define Rte_Read_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q
#  define Rte_Read_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv
#  define Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm
#  define Rte_Read_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg
#  define Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo
#  define Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo
#  define Rte_Read_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum
#  define Rte_Read_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg
#  define Rte_Read_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum
#  define Rte_Read_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct
#  define Rte_Read_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min
#  define Rte_Read_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min
#  define Rte_Read_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct
#  define Rte_Read_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh
#  define Rte_Read_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum
#  define Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum
#  define Rte_Read_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh
#  define Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
#  define Rte_Read_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A
#  define Rte_Read_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V
#  define Rte_Read_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum Rte_Read_CtAp_CANHandler_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum
#  define Rte_Read_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16 Rte_Read_CtAp_CANHandler_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16
#  define Rte_Read_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt
#  define Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo
#  define Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct
#  define Rte_Read_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt
#  define Rte_Read_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0
#  define Rte_Read_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1
#  define Rte_Read_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13
#  define Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14
#  define Rte_Read_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16
#  define Rte_Read_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17
#  define Rte_Read_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2
#  define Rte_Read_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21
#  define Rte_Read_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3
#  define Rte_Read_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4
#  define Rte_Read_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5
#  define Rte_Read_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6 Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6
#  define Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo Rte_Read_CtAp_CANHandler_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo
#  define Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0
#  define Rte_Read_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1
#  define Rte_Read_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13
#  define Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14
#  define Rte_Read_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16
#  define Rte_Read_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17
#  define Rte_Read_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2
#  define Rte_Read_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21
#  define Rte_Read_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3
#  define Rte_Read_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4
#  define Rte_Read_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5
#  define Rte_Read_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6 Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6
#  define Rte_Read_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg
#  define Rte_Read_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum
#  define Rte_Read_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A
#  define Rte_Read_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V
#  define Rte_Read_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A
#  define Rte_Read_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_CANHandler_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo
#  define Rte_Read_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw
#  define Rte_Read_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum
#  define Rte_Read_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw
#  define Rte_Read_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum
#  define Rte_Read_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg
#  define Rte_Read_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W
#  define Rte_Read_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo
#  define Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg
#  define Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus
#  define Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp
#  define Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus
#  define Rte_Read_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus
#  define Rte_Read_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg
#  define Rte_Read_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp
#  define Rte_Read_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum
#  define Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum
#  define Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus
#  define Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq
#  define Rte_Read_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum
#  define Rte_Read_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum
#  define Rte_Read_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V
#  define Rte_Read_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg
#  define Rte_Read_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum
#  define Rte_Read_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum
#  define Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum
#  define Rte_Read_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum
#  define Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo
#  define Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg
#  define Rte_Read_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg
#  define Rte_Read_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo
#  define Rte_Read_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo
#  define Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
#  define Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum
#  define Rte_Read_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum
#  define Rte_Read_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum
#  define Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum
#  define Rte_Read_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A
#  define Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum
#  define Rte_Read_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km
#  define Rte_Read_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn
#  define Rte_Read_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF
#  define Rte_Read_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF
#  define Rte_Read_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Read_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg
#  define Rte_Read_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum
#  define Rte_Read_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm
#  define Rte_Read_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg
#  define Rte_Read_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm
#  define Rte_Read_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq
#  define Rte_Read_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum
#  define Rte_Read_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg
#  define Rte_Read_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm
#  define Rte_Read_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg
#  define Rte_Read_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg
#  define Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup Rte_Read_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup
#  define Rte_Read_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup Rte_Read_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup
#  define Rte_Read_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup Rte_Read_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup
#  define Rte_Read_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup Rte_Read_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup
#  define Rte_Read_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup Rte_Read_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup
#  define Rte_Read_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup Rte_Read_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup
#  define Rte_Read_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup Rte_Read_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup
#  define Rte_Read_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup Rte_Read_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup
#  define Rte_Read_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup Rte_Read_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup
#  define Rte_Read_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup Rte_Read_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup
#  define Rte_Read_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup Rte_Read_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup
#  define Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup
#  define Rte_Read_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup
#  define Rte_Read_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup
#  define Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup
#  define Rte_Read_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup
#  define Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup
#  define Rte_Read_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup
#  define Rte_Read_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup
#  define Rte_Read_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup
#  define Rte_Read_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup
#  define Rte_Read_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup
#  define Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup
#  define Rte_Read_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup
#  define Rte_Read_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup
#  define Rte_Read_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup
#  define Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup
#  define Rte_Read_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup Rte_Read_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup
#  define Rte_Read_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup Rte_Read_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup
#  define Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup Rte_Read_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup
#  define Rte_Read_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup Rte_Read_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup
#  define Rte_Read_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup Rte_Read_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup
#  define Rte_Read_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup Rte_Read_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup
#  define Rte_Read_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup Rte_Read_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup
#  define Rte_Read_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup Rte_Read_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup
#  define Rte_Read_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup Rte_Read_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup
#  define Rte_Read_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup Rte_Read_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup
#  define Rte_Read_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup Rte_Read_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup
#  define Rte_Read_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup Rte_Read_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup
#  define Rte_Read_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup Rte_Read_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup
#  define Rte_Read_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup
#  define Rte_Read_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup
#  define Rte_Read_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup
#  define Rte_Read_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup
#  define Rte_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup
#  define Rte_Read_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup
#  define Rte_Read_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup
#  define Rte_Read_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup
#  define Rte_Read_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup
#  define Rte_Read_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup
#  define Rte_Read_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup
#  define Rte_Read_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup
#  define Rte_Read_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup Rte_Read_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup
#  define Rte_Read_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup Rte_Read_CtAp_CANHandler_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup
#  define Rte_Read_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup Rte_Read_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup
#  define Rte_Read_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup
#  define Rte_Read_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup
#  define Rte_Read_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup
#  define Rte_Read_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup
#  define Rte_Read_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup
#  define Rte_Read_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup
#  define Rte_Read_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup
#  define Rte_Read_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup
#  define Rte_Read_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup
#  define Rte_Read_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup
#  define Rte_Read_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup
#  define Rte_Read_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup
#  define Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup
#  define Rte_Read_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup Rte_Read_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup
#  define Rte_Read_SG_PRND_SigGroup_SG_PRND_SigGroup Rte_Read_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup
#  define Rte_Read_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup
#  define Rte_Read_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup
#  define Rte_Read_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup
#  define Rte_Read_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup
#  define Rte_Read_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup
#  define Rte_Read_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup
#  define Rte_Read_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup
#  define Rte_Read_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup Rte_Read_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup
#  define Rte_Read_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup Rte_Read_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup
#  define Rte_Read_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup Rte_Read_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_IsUpdated_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF
#  define Rte_IsUpdated_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF
#  define Rte_IsUpdated_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup
#  define Rte_IsUpdated_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup
#  define Rte_IsUpdated_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup
#  define Rte_IsUpdated_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup
#  define Rte_IsUpdated_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup
#  define Rte_IsUpdated_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup
#  define Rte_IsUpdated_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup
#  define Rte_IsUpdated_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup
#  define Rte_IsUpdated_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup
#  define Rte_IsUpdated_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup
#  define Rte_IsUpdated_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup
#  define Rte_IsUpdated_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup
#  define Rte_IsUpdated_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup
#  define Rte_IsUpdated_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup
#  define Rte_IsUpdated_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup
#  define Rte_IsUpdated_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup
#  define Rte_IsUpdated_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup
#  define Rte_IsUpdated_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup
#  define Rte_IsUpdated_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup
#  define Rte_IsUpdated_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup
#  define Rte_IsUpdated_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup
#  define Rte_IsUpdated_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup
#  define Rte_IsUpdated_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup
#  define Rte_IsUpdated_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup
#  define Rte_IsUpdated_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup
#  define Rte_IsUpdated_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup
#  define Rte_IsUpdated_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup
#  define Rte_IsUpdated_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup
#  define Rte_IsUpdated_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup
#  define Rte_IsUpdated_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup
#  define Rte_IsUpdated_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup
#  define Rte_IsUpdated_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup
#  define Rte_IsUpdated_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup
#  define Rte_IsUpdated_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup
#  define Rte_IsUpdated_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup
#  define Rte_IsUpdated_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup
#  define Rte_IsUpdated_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup
#  define Rte_IsUpdated_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup
#  define Rte_IsUpdated_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup
#  define Rte_IsUpdated_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup
#  define Rte_IsUpdated_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup
#  define Rte_IsUpdated_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup
#  define Rte_IsUpdated_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup
#  define Rte_IsUpdated_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup
#  define Rte_IsUpdated_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup
#  define Rte_IsUpdated_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup
#  define Rte_IsUpdated_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup
#  define Rte_IsUpdated_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup
#  define Rte_IsUpdated_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup
#  define Rte_IsUpdated_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup
#  define Rte_IsUpdated_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup
#  define Rte_IsUpdated_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup
#  define Rte_IsUpdated_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup
#  define Rte_IsUpdated_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup
#  define Rte_IsUpdated_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup
#  define Rte_IsUpdated_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup
#  define Rte_IsUpdated_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup
#  define Rte_IsUpdated_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup
#  define Rte_IsUpdated_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup
#  define Rte_IsUpdated_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup
#  define Rte_IsUpdated_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup
#  define Rte_IsUpdated_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup
#  define Rte_IsUpdated_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup
#  define Rte_IsUpdated_SG_PRND_SigGroup_SG_PRND_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup
#  define Rte_IsUpdated_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup
#  define Rte_IsUpdated_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup
#  define Rte_IsUpdated_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup
#  define Rte_IsUpdated_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup
#  define Rte_IsUpdated_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup
#  define Rte_IsUpdated_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup
#  define Rte_IsUpdated_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup
#  define Rte_IsUpdated_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup
#  define Rte_IsUpdated_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup
#  define Rte_IsUpdated_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup Rte_IsUpdated_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum
#  define Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate
#  define Rte_Write_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate
#  define Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt
#  define Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum
#  define Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod
#  define Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod
#  define Rte_Write_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod
#  define Rte_Write_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw
#  define Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum
#  define Rte_Write_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum
#  define Rte_Write_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum
#  define Rte_Write_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum
#  define Rte_Write_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum
#  define Rte_Write_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum
#  define Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum
#  define Rte_Write_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg
#  define Rte_Write_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
#  define Rte_Write_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A
#  define Rte_Write_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
#  define Rte_Write_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A
#  define Rte_Write_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A
#  define Rte_Write_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
#  define Rte_Write_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
#  define Rte_Write_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V
#  define Rte_Write_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V
#  define Rte_Write_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah
#  define Rte_Write_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah
#  define Rte_Write_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V
#  define Rte_Write_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum
#  define Rte_Write_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum
#  define Rte_Write_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg
#  define Rte_Write_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum
#  define Rte_Write_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum
#  define Rte_Write_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo
#  define Rte_Write_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V
#  define Rte_Write_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum
#  define Rte_Write_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg
#  define Rte_Write_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min
#  define Rte_Write_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum
#  define Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update
#  define Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum
#  define Rte_Write_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum
#  define Rte_Write_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C
#  define Rte_Write_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C
#  define Rte_Write_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo
#  define Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo
#  define Rte_Write_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum
#  define Rte_Write_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum
#  define Rte_Write_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum
#  define Rte_Write_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum
#  define Rte_Write_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A
#  define Rte_Write_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V
#  define Rte_Write_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg
#  define Rte_Write_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum
#  define Rte_Write_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp
#  define Rte_Write_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld
#  define Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo
#  define Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum
#  define Rte_Write_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C
#  define Rte_Write_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum
#  define Rte_Write_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C
#  define Rte_Write_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo
#  define Rte_Write_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo
#  define Rte_Write_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo
#  define Rte_Write_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo
#  define Rte_Write_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo
#  define Rte_Write_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo
#  define Rte_Write_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum
#  define Rte_Write_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg
#  define Rte_Write_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld
#  define Rte_Write_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw
#  define Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
#  define Rte_Write_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo
#  define Rte_Write_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo
#  define Rte_Write_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg
#  define Rte_Write_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum
#  define Rte_Write_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg
#  define Rte_Write_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum
#  define Rte_Write_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A
#  define Rte_Write_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V
#  define Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm
#  define Rte_Write_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum
#  define Rte_Write_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum
#  define Rte_Write_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo
#  define Rte_Write_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum
#  define Rte_Write_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts
#  define Rte_Write_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts
#  define Rte_Write_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum
#  define Rte_Write_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum
#  define Rte_Write_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum
#  define Rte_Write_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum
#  define Rte_Write_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar
#  define Rte_Write_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm
#  define Rte_Write_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum
#  define Rte_Write_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph
#  define Rte_Write_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum
#  define Rte_Write_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph
#  define Rte_Write_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum
#  define Rte_Write_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm
#  define Rte_Write_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum
#  define Rte_Write_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg
#  define Rte_Write_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm
#  define Rte_Write_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg
#  define Rte_Write_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm
#  define Rte_Write_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts
#  define Rte_Write_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts
#  define Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo
#  define Rte_Write_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum
#  define Rte_Write_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg
#  define Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph
#  define Rte_Write_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
#  define Rte_Write_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg
#  define Rte_Write_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm
#  define Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo
#  define Rte_Write_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum
#  define Rte_Write_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum
#  define Rte_Write_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum
#  define Rte_Write_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum
#  define Rte_Write_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum
#  define Rte_Write_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum
#  define Rte_Write_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum
#  define Rte_Write_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo
#  define Rte_Write_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct
#  define Rte_Write_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum
#  define Rte_Write_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo
#  define Rte_Write_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum
#  define Rte_Write_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum
#  define Rte_Write_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState
#  define Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate
#  define Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A
#  define Rte_Write_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum
#  define Rte_Write_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V
#  define Rte_Write_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum
#  define Rte_Write_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum
#  define Rte_Write_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum
#  define Rte_Write_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg
#  define Rte_Write_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm
#  define Rte_Write_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg
#  define Rte_Write_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Write_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm
#  define Rte_Write_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm
#  define Rte_Write_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A
#  define Rte_Write_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum
#  define Rte_Write_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A
#  define Rte_Write_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct
#  define Rte_Write_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
#  define Rte_Write_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw
#  define Rte_Write_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
#  define Rte_Write_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A
#  define Rte_Write_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V
#  define Rte_Write_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo
#  define Rte_Write_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A
#  define Rte_Write_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A
#  define Rte_Write_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V
#  define Rte_Write_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg
#  define Rte_Write_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg
#  define Rte_Write_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update
#  define Rte_Write_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V
#  define Rte_Write_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
#  define Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update
#  define Rte_Write_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
#  define Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo
#  define Rte_Write_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo
#  define Rte_Write_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo
#  define Rte_Write_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo
#  define Rte_Write_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo
#  define Rte_Write_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum
#  define Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum
#  define Rte_Write_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts
#  define Rte_Write_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum
#  define Rte_Write_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq
#  define Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo
#  define Rte_Write_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo
#  define Rte_Write_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo
#  define Rte_Write_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo
#  define Rte_Write_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo
#  define Rte_Write_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo
#  define Rte_Write_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm Rte_Write_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm
#  define Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus
#  define Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus
#  define Rte_Write_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update
#  define Rte_Write_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum
#  define Rte_Write_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum
#  define Rte_Write_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W Rte_Write_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W
#  define Rte_Write_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo Rte_Write_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo
#  define Rte_Write_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts
#  define Rte_Write_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q
#  define Rte_Write_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed
#  define Rte_Write_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid
#  define Rte_Write_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup
#  define Rte_Write_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup
#  define Rte_Write_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup
#  define Rte_Write_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup
#  define Rte_Write_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup
#  define Rte_Write_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup
#  define Rte_Write_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup
#  define Rte_Write_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup
#  define Rte_Write_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup
#  define Rte_Write_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup
#  define Rte_Write_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup
#  define Rte_Write_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup
#  define Rte_Write_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup
#  define Rte_Write_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup
#  define Rte_Write_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup
#  define Rte_Write_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup
#  define Rte_Write_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup
#  define Rte_Write_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup
#  define Rte_Write_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup Rte_Write_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup


# endif /* !defined(RTE_CORE) */


# define CtAp_CANHandler_START_SEC_CODE
# include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_1000ms R_CANHandlerInput_Cyclic_1000ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_100ms R_CANHandlerInput_Cyclic_100ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_10ms R_CANHandlerInput_Cyclic_10ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_200ms R_CANHandlerInput_Cyclic_200ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_20ms R_CANHandlerInput_Cyclic_20ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_500ms R_CANHandlerInput_Cyclic_500ms
#  define RTE_RUNNABLE_R_CANHandlerInput_Cyclic_50ms R_CANHandlerInput_Cyclic_50ms
#  define RTE_RUNNABLE_R_CANHandlerOutput_Cyclic_100ms R_CANHandlerOutput_Cyclic_100ms
#  define RTE_RUNNABLE_R_CANHandlerOutput_Cyclic_10ms R_CANHandlerOutput_Cyclic_10ms
#  define RTE_RUNNABLE_R_CANHandlerOutput_Cyclic_200ms R_CANHandlerOutput_Cyclic_200ms
#  define RTE_RUNNABLE_R_CANHandlerOutput_Cyclic_20ms R_CANHandlerOutput_Cyclic_20ms
#  define RTE_RUNNABLE_R_CANHandlerOutput_Cyclic_50ms R_CANHandlerOutput_Cyclic_50ms
#  define RTE_RUNNABLE_R_CANHandler_Init R_CANHandler_Init
# endif

FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_1000ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_100ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_200ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_500ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerInput_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_100ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_200ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandlerOutput_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CANHandler_CODE) R_CANHandler_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_CANHandler_STOP_SEC_CODE
# include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CANHANDLER_H */

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

   MD_Rte_1507:  MISRA rule: Rule5.6
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
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
