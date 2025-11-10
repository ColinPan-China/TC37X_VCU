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
 *             File:  Rte_SystemApplication_OsCore1.c
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0857 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_Dir1.1, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_Core1App_SWC.h"
#include "Rte_Core2App_SWC.h"
#include "Rte_CtAp_ACParMgmt.h"
#include "Rte_CtAp_AccCal.h"
#include "Rte_CtAp_AccrPedlDrv.h"
#include "Rte_CtAp_BMSMgmt.h"
#include "Rte_CtAp_BrkMgmt.h"
#include "Rte_CtAp_CANHandler.h"
#include "Rte_CtAp_ChrgComM.h"
#include "Rte_CtAp_ChrgEgyCal.h"
#include "Rte_CtAp_ChrgMod.h"
#include "Rte_CtAp_ChrgPreHeat.h"
#include "Rte_CtAp_ChrgSdl.h"
#include "Rte_CtAp_ChrgSeqCtrl.h"
#include "Rte_CtAp_ChrgStat.h"
#include "Rte_CtAp_CnsCalcn.h"
#include "Rte_CtAp_CoastCtrl.h"
#include "Rte_CtAp_ComMErr.h"
#include "Rte_CtAp_CrpCtrl.h"
#include "Rte_CtAp_DCComM.h"
#include "Rte_CtAp_DCDCMgmt.h"
#include "Rte_CtAp_DCFCMgmt.h"
#include "Rte_CtAp_DCParMgmt.h"
#include "Rte_CtAp_DrvAsscCtrl.h"
#include "Rte_CtAp_DrvMod.h"
#include "Rte_CtAp_DrvTorqCoor.h"
#include "Rte_CtAp_ElSSDiag.h"
#include "Rte_CtAp_EmMgmt.h"
#include "Rte_CtAp_FctSftyGear.h"
#include "Rte_CtAp_FctSftyTorq.h"
#include "Rte_CtAp_FltReactn.h"
#include "Rte_CtAp_GearCal.h"
#include "Rte_CtAp_HVSfty.h"
#include "Rte_CtAp_LINHandler.h"
#include "Rte_CtAp_LvBattMgmt.h"
#include "Rte_CtAp_MCUMgmt.h"
#include "Rte_CtAp_OBCStsMgmt.h"
#include "Rte_CtAp_OnePedCtrl.h"
#include "Rte_CtAp_PdlAlys.h"
#include "Rte_CtAp_PwrLim.h"
#include "Rte_CtAp_ResEst.h"
#include "Rte_CtAp_RngEstimn.h"
#include "Rte_CtAp_S2Mgmt.h"
#include "Rte_CtAp_SlopEst.h"
#include "Rte_CtAp_SpdLmt.h"
#include "Rte_CtAp_TCUMgmt.h"
#include "Rte_CtAp_TorqCoor.h"
#include "Rte_CtAp_TorqCrossZr.h"
#include "Rte_CtAp_TorqDamp.h"
#include "Rte_CtAp_TorqFil.h"
#include "Rte_CtAp_TorqLmt.h"
#include "Rte_CtAp_TorqModMap.h"
#include "Rte_CtAp_TrsmProtd.h"
#include "Rte_CtAp_VehSpd.h"
#include "Rte_CtAp_VehStabyCtrl.h"
#include "Rte_CtAp_VehStat.h"
#include "Rte_CtAp_WakeUpRsn.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_HookCallout.h"
#include "Rte_IoHwAb.h"
#include "Rte_IoHwAb_SWC.h"
#include "Rte_NvM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_Os_OsCore1_swc.h"
#include "Rte_Os_OsCore2_swc.h"
#include "SchM_Adc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanNm.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_CanTrcv_30_Tja1040.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_Dma.h"
#include "SchM_EcuM.h"
#include "SchM_Fee.h"
#include "SchM_Fls_17_Dmu.h"
#include "SchM_Icu_17_TimerIp.h"
#include "SchM_IoHwAb.h"
#include "SchM_Irq.h"
#include "SchM_J1939Tp.h"
#include "SchM_LinIf.h"
#include "SchM_LinSM.h"
#include "SchM_LinTrcv_30_Tle7259.h"
#include "SchM_McalLib.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_Pwm_17_GtmCcu6.h"
#include "SchM_Spi.h"
#include "SchM_Xcp.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_ChassisMgmtInfo, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo = {
  2U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACU01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACU02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACU02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACU02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACUInfoCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACUInfoTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ACUInfoTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUACC02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUACC02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUACC02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUAEB01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUAEB01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUAPS01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUAPS01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUBodyReqCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUBodyReqTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUDACRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_ADCUDATimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_APTCTCUTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_APTCTCUTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BCM05CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BCM05TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BCM06CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BCM06TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BCM06TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSErrInfoTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_BMSSts02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C = 0;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C = 0;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_CGW01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_CGW01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_CGW01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMFL02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMFL02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMFL02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMFRTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMFRTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMRLTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMRLTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMRRTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCMRRTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C = 0;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C = 0;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_EVCOMSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_EVCOMSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSACCCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSACCCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSACCE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSACCTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSAPSCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSAPSTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts02CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts02E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts02TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts03CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts03CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts03E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts03TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts04CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts04CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts04E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts04TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts05CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts05CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts05E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts05TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts05TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts06CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSSts06TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSTqCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSTqCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSTqE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSTqTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSVCUMotCtrlCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSVCUMotCtrlTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSWhlSpd01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSWhlSpd01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSWhlSpd02CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IBSWhlSpd02TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IVI01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_IVI01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCU01CRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCU01CRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCU01E2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCU01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCUFailrCodCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCUFailrCodCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_MCUFailrCodTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(sint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm = 0;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PODDCDC01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PODDCDC01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PODOBCChrgStatTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PODSts01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PRNDCRCDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PRNDCRCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PRNDE2ETimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PRNDTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_PRNDTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGW16TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGW16TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGW17TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGW17TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGWPT01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGWPT01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGWTimTimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_SGWTimTimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_TCU01TimeoutDTCInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_TCU01TimeoutInfo, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCCSTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCMLTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCRMPrepdTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCRMTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCROPrepdTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCROTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCSDTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_BEMRxCSTTmt, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_DcPortTempErrLvl1, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_DcPortTempErrLvl2, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_DcPortTempSnsrErr, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_ChrgEgyCalInfo, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo = {
  0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ChrMgmt_AcPreheatUDcCtrlErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ChrMgmt_DcPreheatUDcCtrlErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ChrMgmt_PreheatIRChkErr, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_IRMeasDiErr, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_DCChrMgmt_IRMeasEnaErr, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_ChrgStatInfo, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CoastCtrl_RTE_P_ChassisMgmt_CoastCtrlDesTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_CHCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_DCCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ComM_EPTCANBusOffInfo, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_ModMgmtInfo, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo = {
  2U, 3U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_GearMgmtInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, RTE_VAR_INIT) Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ErrMgmt_TorqCtrlErr, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus = {
  FALSE, FALSE, FALSE, 0.0F, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ErrMgmt_DrvMotTempOvrLamp, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ErrMgmt_HvBattTempOvrLamp, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ErrMgmt_InslaFlt, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_ErrMgmt_VehHVIL, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_OBCChrgStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_OBCDchaStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_OBCDiErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_OBCPreheatStsErr, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_RngEstimn_BattCurrIntegral2kmArrayInfo, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2 = {
  3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 
  3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_Nv_RngEstimnInfo, RTE_VAR_INIT) Rte_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_CPStsJmpErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_OBCInpUDcLoErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(dt_OBCMgmt_S2SwtClsErr, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_SlopEst_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCrossZr_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqFil_RTE_P_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm = 0.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint8, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg = FALSE;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BHM_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_0 = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx = {
  80U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx = {
  0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx = {
  FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx = {
  0U, 0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_AccPedal_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx = {
  0U, 0U, 0U, FALSE, 0U, FALSE, 0U, 0U, FALSE, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_BMS_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, 0U, 0U, 0U, TRUE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_Chassis_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx = {
  0U, 0U, FALSE, FALSE, FALSE, 0U, 0U, FALSE, 0U, 0U, 0U, FALSE, 0U, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_DCDC_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_HMIsignals_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx = {
  0U, 0U, 0U, FALSE, FALSE, 0U, FALSE, FALSE, FALSE, 0U, FALSE, 0U, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_HMIsignals_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx = {
  0U, 0U, 50U, 0U, 0U, 0U, 255U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_HMIsignals_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx = {
  0U, 2048, 1U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_IBS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx = {
  0U, 0U, 0U, FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_MCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx = {
  32767U, 0U, 32767U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_MCU_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx = {
  0U, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_MCU_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_POD_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx = {
  TRUE, 0U, 0U, TRUE, TRUE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_PlugInChrgInfo_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx = {
  0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_SynReq_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx = {
  16777215U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_VCU_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCL_ChargeMode, RTE_VAR_INIT_NOCACHE) Rte_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCL_CurrentRequire, RTE_VAR_INIT_NOCACHE) Rte_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx = -400.0F;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCL_VolltageRequire, RTE_VAR_INIT_NOCACHE) Rte_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_AllowTempMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_BatteryChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_BatteryNominalEnergy, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_BatteryTotalVoltage, RTE_VAR_INIT_NOCACHE) Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_ChargeCurrentMax, RTE_VAR_INIT_NOCACHE) Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCP_SOC, RTE_VAR_INIT_NOCACHE) Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_BatteryVoltMax, RTE_VAR_INIT_NOCACHE) Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_BatteryVoltMaxGroup, RTE_VAR_INIT_NOCACHE) Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_ChargeCurrentMeasure, RTE_VAR_INIT_NOCACHE) Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_ChargeVoltageMeasure, RTE_VAR_INIT_NOCACHE) Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_EstimatedTimeRemaining, RTE_VAR_INIT_NOCACHE) Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BCS_SOC, RTE_VAR_INIT_NOCACHE) Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargeAbortTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargeFinishTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargeStateTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargeStatisticsTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargerIdTimeout0, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_ChargerIdTimeout1, RTE_VAR_INIT_NOCACHE) Rte_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BEM_TimesyncOrPowerTimeout, RTE_VAR_INIT_NOCACHE) Rte_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BHM_AllowChargeVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_1 = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryChargeTimes, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryProductDay, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryProductMonth, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryProductYear, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryProperty, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatterySN, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatterySystemRatedCapacity, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatterySystemRatedVoltage, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_BatteryType, RTE_VAR_INIT_NOCACHE) Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_Manufacturer, RTE_VAR_INIT_NOCACHE) Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_ProtocolVersion, RTE_VAR_INIT_NOCACHE) Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_VehicleIdByte17, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_VehicleIdByte1_8, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRM_VehicleIdByte9_16, RTE_VAR_INIT_NOCACHE) Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BRO_BMSChargeReady, RTE_VAR_INIT_NOCACHE) Rte_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSD_AbortSOC, RTE_VAR_INIT_NOCACHE) Rte_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSD_BatteryTempMax, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSD_BatteryTempMin, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSD_BatteryVoltageMax, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSD_BatteryVoltageMin, RTE_VAR_INIT_NOCACHE) Rte_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryCurrentState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryOutpuConnectorState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryTempMax, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryTempMaxNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryTempMin, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryTempMinNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryTempState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryVoltageMaxNo, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_BatteryVoltageState, RTE_VAR_INIT_NOCACHE) Rte_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_ChargeEnable, RTE_VAR_INIT_NOCACHE) Rte_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_InsulationState, RTE_VAR_INIT_NOCACHE) Rte_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BSM_SOC, RTE_VAR_INIT_NOCACHE) Rte_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortAchiveSOC, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortAchiveSingleVolt, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortAchiveTotalVolt, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortChargparameter, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortErrorCurrent, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortErrorVoltage, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultBMSTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultBatteryTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultConnector, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultConnectorTemp, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultInsulation, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortFaultOther, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_AbortHVrelayfault, RTE_VAR_INIT_NOCACHE) Rte_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_Abortdet2Voltexception, RTE_VAR_INIT_NOCACHE) Rte_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BST_Abortmanoperate, RTE_VAR_INIT_NOCACHE) Rte_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(boolean, RTE_VAR_INIT_NOCACHE) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(ChargeCurrWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(ChargeCurrWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx = 30U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DisChargeCurrWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DisChargeCurrWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx = 145U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOCWU_Ena_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOCWU_Treshold_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx = 70U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_ACU_DriverWarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_ACU_PassengerAirbagSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_ACU_PassengerWarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_ACU_WarningLampSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_BCM_FLSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_BCM_FRSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_BCM_RLSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_BCM_RRSeatBeltRemindReq_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_CGW_VehicleState_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DCDCFail_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DCM_FL_DoorFLSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DCM_FR_DoorFRSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DCM_RL_DoorRLSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DCM_RR_DoorRRSts_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_DriveMotOvrTemp_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_HVBatCriFail_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_HVBatOvrTemp_LIN_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IBS_BrakeFluidWarning_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IBS_EBDFault_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IBS_RollerbenchMode_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IBS_SystemStatus_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IVI_BulbCheckStsLIN01, RTE_VAR_INIT_NOCACHE) Rte_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(VCU_IVI_VrState_LIN, RTE_VAR_INIT_NOCACHE) Rte_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx = FALSE;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * TxUpdate Flags for each external Tx Signal over Rte_ComSendSignalProxy without IOCs
 *********************************************************************************************************************/
#define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_SystemApplication_OsCore1_TxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore1_TxUpdateFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_SystemApplication_OsCore1_TxUpdateFlagsInit() (Rte_MemClr(&Rte_SystemApplication_OsCore1_TxUpdateFlags, sizeof(Rte_SystemApplication_OsCore1_TxUpdateFlagsType)))

/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Update Flags for each Receiver with enableUpdate != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_SystemApplication_OsCore1_RxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore1_RxUpdateFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_SystemApplication_OsCore1_RxUpdateFlagsInit() (Rte_MemClr(&Rte_SystemApplication_OsCore1_RxUpdateFlags, sizeof(Rte_SystemApplication_OsCore1_RxUpdateFlagsType)))

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Component Data Structures
 *********************************************************************************************************************/

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
CONST(struct Rte_CDS_CtAp_CANHandler, RTE_CONST) Rte_Instance_CtAp_CANHandler =
{
  /* dummy entry */
  0U,
};
/* PRQA L:L1 */

CONSTP2CONST(struct Rte_CDS_CtAp_CANHandler, RTE_CONST, RTE_CONST) Rte_Inst_CtAp_CANHandler = &Rte_Instance_CtAp_CANHandler; /* PRQA S 1504, 1533, 1514 */ /* MD_MSR_Rule8.7, MD_Rte_1533, MD_Rte_1514 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num);
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_BswM_ESH_Mode(BswM_ESH_Mode mode); /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer_Core0
# define RTE_USEC_SystemTimer_Core0 OS_US2TICKS_SystemTimer_Core0
#else
# define RTE_USEC_SystemTimer_Core0(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core0
# define RTE_MSEC_SystemTimer_Core0 OS_MS2TICKS_SystemTimer_Core0
#else
# define RTE_MSEC_SystemTimer_Core0(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core0
# define RTE_SEC_SystemTimer_Core0 OS_SEC2TICKS_SystemTimer_Core0
#else
# define RTE_SEC_SystemTimer_Core0(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_US2TICKS_SystemTimer_Core1
# define RTE_USEC_SystemTimer_Core1 OS_US2TICKS_SystemTimer_Core1
#else
# define RTE_USEC_SystemTimer_Core1(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core1
# define RTE_MSEC_SystemTimer_Core1 OS_MS2TICKS_SystemTimer_Core1
#else
# define RTE_MSEC_SystemTimer_Core1(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core1
# define RTE_SEC_SystemTimer_Core1 OS_SEC2TICKS_SystemTimer_Core1
#else
# define RTE_SEC_SystemTimer_Core1(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_US2TICKS_SystemTimer_Core2
# define RTE_USEC_SystemTimer_Core2 OS_US2TICKS_SystemTimer_Core2
#else
# define RTE_USEC_SystemTimer_Core2(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core2
# define RTE_MSEC_SystemTimer_Core2 OS_MS2TICKS_SystemTimer_Core2
#else
# define RTE_MSEC_SystemTimer_Core2(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core2
# define RTE_SEC_SystemTimer_Core2 OS_SEC2TICKS_SystemTimer_Core2
#else
# define RTE_SEC_SystemTimer_Core2(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_Core0_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_100 (100UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_200 (200UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_5 (5UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_50 (50UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_50 (50UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_500 (500UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_500 (500UL)

#define RTE_CONST_SEC_SystemTimer_Core1_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_Core1_1 (1000UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


FUNC(void, RTE_CODE) Rte_InitMemory_SystemApplication_OsCore1(void)
{
  /* reset Tx Update Flags */
  Rte_SystemApplication_OsCore1_TxUpdateFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* initialize flags for update handling */
  Rte_SystemApplication_OsCore1_RxUpdateFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* set default values for internal data */
  Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A = 0.0F;
  Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A = 0.0F;
  Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg = FALSE;
  Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg = FALSE;
  Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q = 0.0F;
  Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm = 0.0F;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum = 0U;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum = 0U;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum = 0U;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg = FALSE;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg = FALSE;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg = FALSE;
  Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum = 0U;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg = FALSE;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum = 0U;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum = 0U;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg = FALSE;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm = 0.0F;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg = FALSE;
  Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus = Rte_C_dt_ComM_ACU01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_ACU01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus = Rte_C_dt_ComM_ACU02CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_ACU02TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus = Rte_C_dt_ComM_ACU02TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus = Rte_C_dt_ComM_ACUInfoCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus = Rte_C_dt_ComM_ACUInfoTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus = Rte_C_dt_ComM_ACUInfoTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus = Rte_C_dt_ComM_ADCUACC02CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_ADCUACC02TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus = Rte_C_dt_ComM_ADCUACC02TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus = Rte_C_dt_ComM_ADCUAEB01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_ADCUAEB01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus = Rte_C_dt_ComM_ADCUAPS01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_ADCUAPS01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus = Rte_C_dt_ComM_ADCUBodyReqCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus = Rte_C_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus = Rte_C_dt_ComM_ADCUDACRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus = Rte_C_dt_ComM_ADCUDATimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus = Rte_C_dt_ComM_APTCTCUTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus = Rte_C_dt_ComM_APTCTCUTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus = Rte_C_dt_ComM_BCM05CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus = Rte_C_dt_ComM_BCM05TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus = Rte_C_dt_ComM_BCM06CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus = Rte_C_dt_ComM_BCM06TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus = Rte_C_dt_ComM_BCM06TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus = Rte_C_dt_ComM_BMSErrInfoTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus = Rte_C_dt_ComM_BMSSts01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus = Rte_C_dt_ComM_BMSSts01CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus = Rte_C_dt_ComM_BMSSts01E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_BMSSts01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus = Rte_C_dt_ComM_BMSSts01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_BMSSts02TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus = Rte_C_dt_ComM_BMSSts02TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C = 0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C = 0;
  Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus = Rte_C_dt_ComM_CGW01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_CGW01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus = Rte_C_dt_ComM_CGW01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus = Rte_C_dt_ComM_DCMFL02CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_DCMFL02TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus = Rte_C_dt_ComM_DCMFL02TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus = Rte_C_dt_ComM_DCMFRTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus = Rte_C_dt_ComM_DCMFRTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus = Rte_C_dt_ComM_DCMRLTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus = Rte_C_dt_ComM_DCMRLTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus = Rte_C_dt_ComM_DCMRRTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus = Rte_C_dt_ComM_DCMRRTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C = 0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C = 0;
  Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_EVCOMSts01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus = Rte_C_dt_ComM_EVCOMSts01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus = Rte_C_dt_ComM_IBSACCCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus = Rte_C_dt_ComM_IBSACCCRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSACCE2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSACCTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus = Rte_C_dt_ComM_IBSAPSCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSAPSTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus = Rte_C_dt_ComM_IBSSts01CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts01E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts02CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus = Rte_C_dt_ComM_IBSSts02CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts02E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts02TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts03CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus = Rte_C_dt_ComM_IBSSts03CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts03E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts03TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts04CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus = Rte_C_dt_ComM_IBSSts04CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts04E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts04TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts05CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus = Rte_C_dt_ComM_IBSSts05CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts05E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts05TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus = Rte_C_dt_ComM_IBSSts05TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSSts06CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSSts06TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus = Rte_C_dt_ComM_IBSTqCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus = Rte_C_dt_ComM_IBSTqCRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSTqE2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSTqTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus = Rte_C_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus = Rte_C_dt_ComM_IBSVCUMotCtrlCRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus = Rte_C_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus = Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSWhlSpd01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSWhlSpd01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus = Rte_C_dt_ComM_IBSWhlSpd02CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus = Rte_C_dt_ComM_IBSWhlSpd02TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus = Rte_C_dt_ComM_IVI01CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus = Rte_C_dt_ComM_IVI01E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus = Rte_C_dt_ComM_MCU01CRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus = Rte_C_dt_ComM_MCU01CRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus = Rte_C_dt_ComM_MCU01E2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_MCU01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus = Rte_C_dt_ComM_MCU01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus = Rte_C_dt_ComM_MCUFailrCodCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus = Rte_C_dt_ComM_MCUFailrCodCRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus = Rte_C_dt_ComM_MCUFailrCodE2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus = Rte_C_dt_ComM_MCUFailrCodTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm = 0;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_PODDCDC01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus = Rte_C_dt_ComM_PODDCDC01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus = Rte_C_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus = Rte_C_dt_ComM_PODOBCChrgStatTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus = Rte_C_dt_ComM_PODSts01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus = Rte_C_dt_ComM_PRNDCRCDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus = Rte_C_dt_ComM_PRNDCRCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus = Rte_C_dt_ComM_PRNDE2ETimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus = Rte_C_dt_ComM_PRNDTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus = Rte_C_dt_ComM_PRNDTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus = Rte_C_dt_ComM_SGW16TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus = Rte_C_dt_ComM_SGW16TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus = Rte_C_dt_ComM_SGW17TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus = Rte_C_dt_ComM_SGW17TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_SGWPT01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus = Rte_C_dt_ComM_SGWPT01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus = Rte_C_dt_ComM_SGWTimTimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus = Rte_C_dt_ComM_SGWTimTimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus = Rte_C_dt_ComM_TCU01TimeoutDTCInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus = Rte_C_dt_ComM_TCU01TimeoutInfo_0;
  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update = FALSE;
  Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W = 0.0F;
  Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts = 0U;
  Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q = 0.0F;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCCSTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCMLTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCRMTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCROPrepdTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCROTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCSDTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus = Rte_C_dt_DCChrMgmt_BEMRxCSTTmt_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg = FALSE;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts = FALSE;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum = 0U;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg = FALSE;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus = Rte_C_dt_DCChrMgmt_DcPortTempErrLvl1_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus = Rte_C_dt_DCChrMgmt_DcPortTempErrLvl2_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus = Rte_C_dt_DCChrMgmt_DcPortTempSnsrErr_0;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A = 0.0F;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V = 0.0F;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A = 0.0F;
  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A = 0.0F;
  Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V = 0.0F;
  Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum = 0U;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus = Rte_C_dt_ChrMgmt_AcPreheatUDcCtrlErr_0;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus = Rte_C_dt_ChrMgmt_DcPreheatUDcCtrlErr_0;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg = FALSE;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum = 0U;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus = Rte_C_dt_ChrMgmt_PreheatIRChkErr_0;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg = FALSE;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff = FALSE;
  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum = 0U;
  Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min = 0U;
  Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min = 0U;
  Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min = 0U;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum = 0U;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum = 0U;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus = Rte_C_dt_DCChrMgmt_IRMeasDiErr_0;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus = Rte_C_dt_DCChrMgmt_IRMeasEnaErr_0;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum = 0U;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg = FALSE;
  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum = 0U;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg = FALSE;
  Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg = FALSE;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_MCUPwrCnsCalcn_Kw_tec_EgyMgmt_MCUPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_V2LPwrCnsCalcn_Kw_tec_EgyMgmt_V2LPwrCnsCalcn_Kw = 0.0F;
  Rte_CtAp_CoastCtrl_RTE_P_ChassisMgmt_CoastCtrlDesTq_Nm_tec_ChassisMgmt_CoastCtrlDesTq_Nm = 0.0F;
  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus = Rte_C_dt_ComM_CHCANBusOffInfo_0;
  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus = Rte_C_dt_ComM_DCCANBusOffInfo_0;
  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus = Rte_C_dt_ComM_EPTCANBusOffInfo_0;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg = FALSE;
  Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg = FALSE;
  Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm = 0.0F;
  Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V = 0.0F;
  Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum = 0U;
  Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum = 0U;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg = FALSE;
  Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg = FALSE;
  Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V = 0.0F;
  Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum = 0U;
  Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum = 0U;
  Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum = 0U;
  Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V = 0.0F;
  Rte_CtAp_DCParMgmt_RTE_P_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A = 0.0F;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg = FALSE;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm = 0.0F;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg = FALSE;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg = FALSE;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm = 0.0F;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg = FALSE;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg = FALSE;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo = 0.0F;
  Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo = FALSE;
  Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum = 0U;
  Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum = 0U;
  Rte_CtAp_DrvMod_RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum = 0U;
  Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm = 0.0F;
  Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg = FALSE;
  Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg = FALSE;
  Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg = FALSE;
  Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg = FALSE;
  Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg = FALSE;
  Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum = 0U;
  Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum = 0U;
  Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum = 0U;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum = 0U;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBPrkReqFail_tec_FctSftyMon_EPBPrkReqFail = FALSE;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBRelsReqFail_tec_FctSftyMon_EPBRelsReqFail = FALSE;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq = 0U;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReqCmpl_tec_FctSftyMon_EPBReqCmpl = FALSE;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBWrkSts_tec_FctSftyMon_EPBWrkSts = 0U;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq = FALSE;
  Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_WakeUpFinish_tec_FctSftyMon_WakeUpFinish = FALSE;
  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus = Rte_C_dt_FctSftyMon_AccrPedlTqOverFltInfo_0;
  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus = Rte_C_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0;
  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus = Rte_C_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp = 0U;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp = 0U;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum = 0U;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus = Rte_C_dt_ErrMgmt_TorqCtrlErr_0;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum = 0U;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg = FALSE;
  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg = FALSE;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_ADASReqVld_tec_GearMgmt_ADASReqVld = FALSE;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBPrk_tec_GearMgmt_GearCalEPBPrk = FALSE;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_GearCalEPBRels_tec_GearMgmt_GearCalEPBRels = FALSE;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum = 0U;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum = 0U;
  Rte_CtAp_GearCal_RTE_P_GearMgmt_UnCfmdActGear_Enum_tec_GearMgmt_UnCfmdActGear_Enum = 0U;
  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus = Rte_C_dt_ErrMgmt_DrvMotTempOvrLamp_0;
  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus = Rte_C_dt_ErrMgmt_HvBattTempOvrLamp_0;
  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus = Rte_C_dt_ErrMgmt_InslaFlt_0;
  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg = FALSE;
  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus = Rte_C_dt_ErrMgmt_VehHVIL_0;
  Rte_CtAp_LINHandler_RTE_P_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated = FALSE;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSComFtonNet_tec_ComM_BSComFtonNet = FALSE;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt = 0.0F;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo = FALSE;
  Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent = 0.0F;
  Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg = FALSE;
  Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo = FALSE;
  Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo = FALSE;
  Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo = 0U;
  Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg = FALSE;
  Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum = 0U;
  Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum = 0U;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum = 0U;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus = Rte_C_dt_OBCMgmt_OBCChrgStsErr_0;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus = Rte_C_dt_OBCMgmt_OBCDchaStsErr_0;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus = Rte_C_dt_OBCMgmt_OBCDiErr_0;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum = 0U;
  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus = Rte_C_dt_OBCMgmt_OBCPreheatStsErr_0;
  Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q = 0.0F;
  Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg = FALSE;
  Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg = FALSE;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo = FALSE;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct = 0.0F;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo = 0.0F;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg = FALSE;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg = FALSE;
  Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg = FALSE;
  Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum = 0U;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum = 0U;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw = 0.0F;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum = 0U;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw = 0.0F;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw = 0.0F;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg = FALSE;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W = 0.0F;
  Rte_CtAp_PwrLim_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo = 0.0F;
  Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm = 0.0F;
  Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm = 0.0F;
  Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km = 0U;
  Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn = FALSE;
  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus = Rte_C_dt_OBCMgmt_CPStsJmpErr_0;
  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus = Rte_C_dt_OBCMgmt_OBCInpUDcLoErr_0;
  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus = Rte_C_dt_OBCMgmt_S2SwtClsErr_0;
  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum = 0U;
  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum = 0U;
  Rte_CtAp_SlopEst_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct = 0.0F;
  Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg = FALSE;
  Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum = 0U;
  Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm = 0.0F;
  Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum = 0U;
  Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum = 0U;
  Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm = 0.0F;
  Rte_CtAp_TorqCrossZr_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm = 0.0F;
  Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq = 0.0F;
  Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum = 0U;
  Rte_CtAp_TorqFil_RTE_P_TorqPahMgmt_DesLpFildTq_Nm_tec_TorqPahMgmt_DesLpFildTq_Nm = 0.0F;
  Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm = 0.0F;
  Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm = 0.0F;
  Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm = 0.0F;
  Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm = 0.0F;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm = 0.0F;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg = FALSE;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm = 0.0F;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq = FALSE;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg = FALSE;
  Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm = 0.0F;
  Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv = FALSE;
  Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm = 0.0F;
  Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm = 0.0F;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg = FALSE;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum = 0U;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph = 0.0F;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg = FALSE;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph = 0.0F;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg = FALSE;
  Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo = 0.0F;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm = 0.0F;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm = 0.0F;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg = FALSE;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg = FALSE;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv = FALSE;
  Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg = FALSE;
  Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum = 0U;
  Rte_CtAp_VehStat_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg = FALSE;
  Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo = 0U;
  Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg = FALSE;
  Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_0 = 0U;
  Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx = Rte_C_SG_VCU_02_SigGroup_0;
  Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx = Rte_C_SG_VCU_03_SigGroup_0;
  Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx = Rte_C_SG_VCU_04_SigGroup_0;
  Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx = Rte_C_SG_VCU_05_SigGroup_0;
  Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx = Rte_C_SG_VCU_06_SigGroup_0;
  Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx = Rte_C_SG_VCU_AccPedal_SigGroup_0;
  Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx = Rte_C_SG_VCU_BMS_SigGroup_0;
  Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx = Rte_C_SG_VCU_Chassis_01_SigGroup_0;
  Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx = Rte_C_SG_VCU_DCDC_SigGroup_0;
  Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx = Rte_C_SG_VCU_HMIsignals_01_SigGroup_0;
  Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx = Rte_C_SG_VCU_HMIsignals_02_SigGroup_0;
  Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx = Rte_C_SG_VCU_HMIsignals_03_SigGroup_0;
  Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx = Rte_C_SG_VCU_IBS_01_SigGroup_0;
  Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx = Rte_C_SG_VCU_MCU_02_SigGroup_0;
  Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx = Rte_C_SG_VCU_MCU_03_SigGroup_0;
  Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx = Rte_C_SG_VCU_MCU_05_SigGroup_0;
  Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx = Rte_C_SG_VCU_POD_SigGroup_0;
  Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx = Rte_C_SG_VCU_PlugInChrgInfo_SigGroup_0;
  Rte_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx = Rte_C_SG_VCU_SynReq_01_SigGroup_0;
  Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx = Rte_C_SG_VCU_TCU_SigGroup_0;
  Rte_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx = 0U;
  Rte_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx = -400.0F;
  Rte_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx = 0U;
  Rte_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx = 0U;
  Rte_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx = 0U;
  Rte_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx = 0U;
  Rte_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx = 0U;
  Rte_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx = 0U;
  Rte_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx = 0U;
  Rte_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx = 0U;
  Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_1 = 0U;
  Rte_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx = 0U;
  Rte_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx = 0U;
  Rte_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx = 0U;
  Rte_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx = 0U;
  Rte_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx = 0U;
  Rte_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx = 0U;
  Rte_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx = 0U;
  Rte_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx = 0U;
  Rte_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx = 0U;
  Rte_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx = 0U;
  Rte_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx = 0U;
  Rte_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx = 0U;
  Rte_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx = 0U;
  Rte_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx = 0U;
  Rte_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx = 0U;
  Rte_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx = 0U;
  Rte_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx = 0U;
  Rte_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx = 0U;
  Rte_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx = 0U;
  Rte_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx = 0U;
  Rte_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx = 0U;
  Rte_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx = 0U;
  Rte_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx = 0U;
  Rte_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx = 0U;
  Rte_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx = 0U;
  Rte_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx = 0U;
  Rte_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx = 0U;
  Rte_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx = 0U;
  Rte_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx = 0U;
  Rte_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx = 0U;
  Rte_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx = 0U;
  Rte_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx = 0U;
  Rte_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx = 0U;
  Rte_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx = TRUE;
  Rte_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx = 30U;
  Rte_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx = TRUE;
  Rte_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx = 145U;
  Rte_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx = TRUE;
  Rte_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx = 70U;
  Rte_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx = 0U;
  Rte_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx = 0U;
  Rte_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx = 0U;
  Rte_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx = 0U;
  Rte_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx = 0U;
  Rte_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx = 0U;
  Rte_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx = 0U;
  Rte_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx = 0U;
  Rte_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx = 0U;
  Rte_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx = FALSE;
  Rte_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx = FALSE;
  Rte_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx = FALSE;
  Rte_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx = FALSE;
  Rte_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx = FALSE;
  Rte_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx = FALSE;
  Rte_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx = 0U;
  Rte_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx = FALSE;
  Rte_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx = 0U;
  Rte_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx = FALSE;
  Rte_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx = FALSE;
  Rte_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx = 0U;
  Rte_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx = FALSE;
  Rte_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx = FALSE;

  Rte_MemClr(&Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx, sizeof(Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx, sizeof(Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx, sizeof(Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx, sizeof(Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx, sizeof(Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx, sizeof(Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx, sizeof(Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx, sizeof(Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx, sizeof(Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx, sizeof(Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx, sizeof(Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx, sizeof(Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx, sizeof(Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx, sizeof(Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx, sizeof(Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx, sizeof(Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx, sizeof(Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx, sizeof(Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx, sizeof(Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx, sizeof(Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx, sizeof(Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx, sizeof(Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx, sizeof(Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx, sizeof(Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx, sizeof(Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx, sizeof(Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_MemClr(&Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx, sizeof(Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  /* initialize the NvBlock mirror buffers */
  Rte_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo = Rte_C_dt_Nv_ChassisMgmtInfo_0;
  Rte_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo = Rte_C_dt_Nv_ChrgEgyCalInfo_0;
  Rte_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo = Rte_C_dt_Nv_ChrgStatInfo_0;
  Rte_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo = Rte_C_dt_Nv_ModMgmtInfo_0;
  Rte_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo = Rte_C_dt_Nv_GearMgmtInfo_0;
  Rte_MemCpy32(Rte_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2, Rte_C_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0, sizeof(dt_RngEstimn_BattCurrIntegral2kmArrayInfo)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo = Rte_C_dt_Nv_RngEstimnInfo_0;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo(P2CONST(dt_Nv_ChassisMgmtInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(P2CONST(dt_ComM_ACU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(P2CONST(dt_ComM_ACU02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACU02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus(P2CONST(dt_ComM_ACU02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(P2CONST(dt_ComM_ACUInfoCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(P2CONST(dt_ComM_ACUInfoTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(P2CONST(dt_ComM_ACUInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUACC02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUACC02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(P2CONST(dt_ComM_ADCUACC02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUAEB01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUAEB01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUAPS01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUAPS01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUBodyReqCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUBodyReqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(P2CONST(dt_ComM_ADCUDACRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(P2CONST(dt_ComM_ADCUDATimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(P2CONST(dt_ComM_APTCTCUTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(P2CONST(dt_ComM_APTCTCUTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(P2CONST(dt_ComM_BCM05CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BCM05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(P2CONST(dt_ComM_BCM06CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BCM06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(P2CONST(dt_ComM_BCM06TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2CONST(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min(uint16 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(P2CONST(dt_ComM_BMSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(P2CONST(dt_ComM_BMSSts01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BMSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_BMSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(P2CONST(dt_ComM_BMSSts02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C(sint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C(sint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(P2CONST(dt_ComM_CGW01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_CGW01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(P2CONST(dt_ComM_CGW01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(P2CONST(dt_ComM_DCMFL02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMFL02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(P2CONST(dt_ComM_DCMFL02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMFRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(P2CONST(dt_ComM_DCMFRTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMRLTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(P2CONST(dt_ComM_DCMRLTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(P2CONST(dt_ComM_DCMRRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(P2CONST(dt_ComM_DCMRRTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C(sint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C(sint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_EVCOMSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(P2CONST(dt_ComM_EVCOMSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSACCCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(P2CONST(dt_ComM_IBSACCCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSACCE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSACCTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSAPSCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSAPSTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(P2CONST(dt_ComM_IBSSts01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2CONST(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts03CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(P2CONST(dt_ComM_IBSSts03CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts03E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts03TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts04CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(P2CONST(dt_ComM_IBSSts04CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts04E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts04TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts05CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus(P2CONST(dt_ComM_IBSSts05CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts05E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(P2CONST(dt_ComM_IBSSts05TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSSts06CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSSts06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSTqCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2CONST(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSTqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(P2CONST(dt_ComM_IBSVCUMotCtrlTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd02CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(P2CONST(dt_ComM_IBSWhlSpd02TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2CONST(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo(float32 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(P2CONST(dt_ComM_MCU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2CONST(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2CONST(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_MCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(P2CONST(dt_ComM_MCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2CONST(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(P2CONST(dt_ComM_MCUFailrCodTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(sint16 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_PODDCDC01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(P2CONST(dt_ComM_PODDCDC01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(P2CONST(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(P2CONST(dt_ComM_PODOBCChrgStatTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2CONST(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(P2CONST(dt_ComM_PRNDCRCDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2CONST(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2CONST(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(P2CONST(dt_ComM_PRNDTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(P2CONST(dt_ComM_PRNDTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGW16TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(P2CONST(dt_ComM_SGW16TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGW17TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(P2CONST(dt_ComM_SGW17TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGWPT01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(P2CONST(dt_ComM_SGWPT01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(P2CONST(dt_ComM_SGWTimTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(P2CONST(dt_ComM_SGWTimTimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm(uint16 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(P2CONST(dt_ComM_TCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(P2CONST(dt_ComM_TCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update(boolean data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts(uint8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(float32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeed_tec_MilCal_VCU_VehicleSpeed(VCU_VehicleSpeed data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_RTE_P_MilCal_VCU_VehicleSpeedValid_tec_MilCal_VCU_VehicleSpeedValid(VCU_VehicleSpeedValid data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup(P2CONST(SG_VCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx);
  Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup(P2CONST(SG_VCU_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx);
  Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup(P2CONST(SG_VCU_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx);
  Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup(P2CONST(SG_VCU_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx);
  Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup(P2CONST(SG_VCU_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx);
  Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup(P2CONST(SG_VCU_AccPedal_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx);
  Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup(P2CONST(SG_VCU_BMS_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx);
  Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup(P2CONST(SG_VCU_Chassis_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx);
  Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup(P2CONST(SG_VCU_DCDC_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx);
  Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup(P2CONST(SG_VCU_HMIsignals_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx);
  Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup(P2CONST(SG_VCU_HMIsignals_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx);
  Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup(P2CONST(SG_VCU_HMIsignals_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx);
  Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup(P2CONST(SG_VCU_IBS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx);
  Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup(P2CONST(SG_VCU_MCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx);
  Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup(P2CONST(SG_VCU_MCU_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx);
  Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup(P2CONST(SG_VCU_MCU_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx);
  Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup(P2CONST(SG_VCU_POD_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx);
  Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup(P2CONST(SG_VCU_PlugInChrgInfo_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx);
  Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup(P2CONST(SG_VCU_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx);
  Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCCSTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCMLTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCRMTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCROPrepdTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCROTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCSDTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCSTTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus(P2CONST(dt_DCChrMgmt_DcPortTempErrLvl1, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(P2CONST(dt_DCChrMgmt_DcPortTempErrLvl2, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(P2CONST(dt_DCChrMgmt_DcPortTempSnsrErr, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(P2CONST(dt_Nv_ChrgEgyCalInfo, AUTOMATIC, RTE_CTAP_CHRGEGYCAL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(P2CONST(dt_ChrMgmt_AcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(P2CONST(dt_ChrMgmt_DcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(P2CONST(dt_ChrMgmt_PreheatIRChkErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(P2CONST(dt_DCChrMgmt_IRMeasDiErr, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(P2CONST(dt_DCChrMgmt_IRMeasEnaErr, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(P2CONST(dt_Nv_ChrgStatInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(P2CONST(dt_ComM_CHCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(P2CONST(dt_ComM_DCCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2CONST(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax(BCP_AllowChargeVoltageMax data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx);
  Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax(BCP_AllowTempMax data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx);
  Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax(BCP_BatteryChargeVoltageMax data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx);
  Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy(BCP_BatteryNominalEnergy data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx);
  Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage(BCP_BatteryTotalVoltage data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx);
  Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax(BCP_ChargeCurrentMax data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx);
  Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCP_SOC_BCP_SOC(BCP_SOC data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx);
  Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_SOC_BCP_SOC = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax(BCS_BatteryVoltMax data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx);
  Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup(BCS_BatteryVoltMaxGroup data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx);
  Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure(BCS_ChargeCurrentMeasure data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx);
  Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure(BCS_ChargeVoltageMeasure data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx);
  Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining(BCS_EstimatedTimeRemaining data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx);
  Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BCS_SOC_BCS_SOC(BCS_SOC data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx);
  Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_SOC_BCS_SOC = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes(BRM_BatteryChargeTimes data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx);
  Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay(BRM_BatteryProductDay data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx);
  Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth(BRM_BatteryProductMonth data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx);
  Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear(BRM_BatteryProductYear data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx);
  Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty(BRM_BatteryProperty data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx);
  Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN(BRM_BatterySN data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx);
  Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity(BRM_BatterySystemRatedCapacity data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx);
  Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage(BRM_BatterySystemRatedVoltage data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx);
  Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType(BRM_BatteryType data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx);
  Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer(BRM_Manufacturer data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx);
  Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion(BRM_ProtocolVersion data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx);
  Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17(BRM_VehicleIdByte17 data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx);
  Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8(P2CONST(uint8, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_DATA) data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx);
  Rte_MemCpy(Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx, data, sizeof(BRM_VehicleIdByte1_8)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16(P2CONST(uint8, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_DATA) data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx);
  Rte_MemCpy(Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx, data, sizeof(BRM_VehicleIdByte9_16)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode(BCL_ChargeMode data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx);
  Rte_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire(BCL_CurrentRequire data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx);
  Rte_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire(BCL_VolltageRequire data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx);
  Rte_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout(BEM_ChargeAbortTimeout data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx);
  Rte_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout(BEM_ChargeFinishTimeout data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx);
  Rte_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout(BEM_ChargeStateTimeout data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx);
  Rte_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout(BEM_ChargeStatisticsTimeout data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx);
  Rte_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0(BEM_ChargerIdTimeout0 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx);
  Rte_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1(BEM_ChargerIdTimeout1 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx);
  Rte_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout(BEM_TimesyncOrPowerTimeout data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx);
  Rte_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax(BHM_AllowChargeVoltageMax data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);
  Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_1 = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady(BRO_BMSChargeReady data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx);
  Rte_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC(BSD_AbortSOC data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx);
  Rte_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax(BSD_BatteryTempMax data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx);
  Rte_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin(BSD_BatteryTempMin data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx);
  Rte_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax(BSD_BatteryVoltageMax data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx);
  Rte_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin(BSD_BatteryVoltageMin data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx);
  Rte_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState(BSM_BatteryCurrentState data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx);
  Rte_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState(BSM_BatteryOutpuConnectorState data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx);
  Rte_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax(BSM_BatteryTempMax data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx);
  Rte_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo(BSM_BatteryTempMaxNo data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx);
  Rte_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin(BSM_BatteryTempMin data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx);
  Rte_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo(BSM_BatteryTempMinNo data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx);
  Rte_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState(BSM_BatteryTempState data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx);
  Rte_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo(BSM_BatteryVoltageMaxNo data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx);
  Rte_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState(BSM_BatteryVoltageState data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx);
  Rte_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable(BSM_ChargeEnable data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx);
  Rte_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState(BSM_InsulationState data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx);
  Rte_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BSM_SOC_BSM_SOC(BSM_SOC data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx);
  Rte_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_SOC_BSM_SOC = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC(BST_AbortAchiveSOC data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx);
  Rte_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt(BST_AbortAchiveSingleVolt data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx);
  Rte_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt(BST_AbortAchiveTotalVolt data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx);
  Rte_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter(BST_AbortChargparameter data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx);
  Rte_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent(BST_AbortErrorCurrent data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx);
  Rte_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage(BST_AbortErrorVoltage data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx);
  Rte_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp(BST_AbortFaultBMSTemp data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx);
  Rte_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp(BST_AbortFaultBatteryTemp data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx);
  Rte_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector(BST_AbortFaultConnector data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx);
  Rte_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp(BST_AbortFaultConnectorTemp data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx);
  Rte_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation(BST_AbortFaultInsulation data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx);
  Rte_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther(BST_AbortFaultOther data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx);
  Rte_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault(BST_AbortHVrelayfault data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx);
  Rte_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception(BST_Abortdet2Voltexception data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx);
  Rte_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate(BST_Abortmanoperate data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx);
  Rte_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo(P2CONST(dt_Nv_ModMgmtInfo, AUTOMATIC, RTE_CTAP_DRVMOD_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo(P2CONST(dt_Nv_GearMgmtInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2CONST(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FCTSFTYTORQ_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2CONST(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FCTSFTYTORQ_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2CONST(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_FCTSFTYTORQ_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(P2CONST(dt_ErrMgmt_TorqCtrlErr, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(P2CONST(dt_ErrMgmt_DrvMotTempOvrLamp, AUTOMATIC, RTE_CTAP_HVSFTY_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(P2CONST(dt_ErrMgmt_HvBattTempOvrLamp, AUTOMATIC, RTE_CTAP_HVSFTY_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(P2CONST(dt_ErrMgmt_InslaFlt, AUTOMATIC, RTE_CTAP_HVSFTY_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(P2CONST(dt_ErrMgmt_VehHVIL, AUTOMATIC, RTE_CTAP_HVSFTY_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01(ChargeCurrWU_Ena_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx);
  Rte_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01(ChargeCurrWU_Treshold_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx);
  Rte_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01(DisChargeCurrWU_Ena_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx);
  Rte_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01(DisChargeCurrWU_Treshold_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx);
  Rte_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01(SOCWU_Ena_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx);
  Rte_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01(SOCWU_Treshold_LIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx);
  Rte_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN(VCU_ACU_DriverWarningLampSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx);
  Rte_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN(VCU_ACU_PassengerAirbagSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx);
  Rte_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN(VCU_ACU_PassengerWarningLampSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx);
  Rte_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN(VCU_ACU_WarningLampSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx);
  Rte_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN(VCU_BCM_FLSeatBeltRemindReq_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx);
  Rte_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN(VCU_BCM_FRSeatBeltRemindReq_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx);
  Rte_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN(VCU_BCM_RLSeatBeltRemindReq_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx);
  Rte_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN(VCU_BCM_RRSeatBeltRemindReq_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx);
  Rte_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN(VCU_CGW_VehicleState_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx);
  Rte_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN(VCU_DCDCFail_LIN_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx);
  Rte_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN(VCU_DCM_FL_DoorFLSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx);
  Rte_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN(VCU_DCM_FR_DoorFRSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx);
  Rte_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN(VCU_DCM_RL_DoorRLSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx);
  Rte_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN(VCU_DCM_RR_DoorRRSts_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx);
  Rte_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN(VCU_DriveMotOvrTemp_LIN_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx);
  Rte_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN(VCU_HVBatCriFail_LIN_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx);
  Rte_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN(VCU_HVBatOvrTemp_LIN_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx);
  Rte_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN(VCU_IBS_BrakeFluidWarning_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx);
  Rte_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN(VCU_IBS_EBDFault_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx);
  Rte_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN(VCU_IBS_RollerbenchMode_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx);
  Rte_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN(VCU_IBS_SystemStatus_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx);
  Rte_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01(VCU_IVI_BulbCheckStsLIN01 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx);
  Rte_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN(VCU_IVI_VrState_LIN data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx);
  Rte_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx = *(&data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN = !Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
  (void)ReleaseSpinlock(Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(P2CONST(dt_OBCMgmt_OBCChrgStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(P2CONST(dt_OBCMgmt_OBCDchaStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(P2CONST(dt_OBCMgmt_OBCDiErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(P2CONST(dt_OBCMgmt_OBCPreheatStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(P2CONST(Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy32(Rte_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2, data, sizeof(dt_RngEstimn_BattCurrIntegral2kmArrayInfo)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(P2CONST(dt_Nv_RngEstimnInfo, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus(P2CONST(dt_OBCMgmt_CPStsJmpErr, AUTOMATIC, RTE_CTAP_S2MGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus(P2CONST(dt_OBCMgmt_OBCInpUDcLoErr, AUTOMATIC, RTE_CTAP_S2MGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus(P2CONST(dt_OBCMgmt_S2SwtClsErr, AUTOMATIC, RTE_CTAP_S2MGMT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_AccrPedlDrv_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_ACCRPEDLDRV_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BMSMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_BMSMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo(P2VAR(dt_Nv_ChassisMgmtInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_BrkMgmt_RTE_RP_ChassisMgmtInfo_tec_ChassisMgmtInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_BrkMgmt_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_BRKMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgStat_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBatCrnt_tec_ComM_BSBatCrnt; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSHCrnt_tec_ComM_BSHCrnt; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LINHandler_RTE_P_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(P2VAR(dt_ComM_CHCANBusOffInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC2_tec_ComM_CGWPNC2(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC2_tec_ComM_VCUPNC2(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_DrvMotTempOvrLamp, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_HvBattTempOvrLamp, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(P2VAR(dt_ErrMgmt_InslaFlt, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(P2VAR(dt_ErrMgmt_VehHVIL, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_GearCal_RTE_P_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(P2VAR(uint16, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_RngEstimn_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_RngEstimn_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(P2VAR(BCM_Authentication_YDF, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = FALSE;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum(P2VAR(uint8, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqDamp_RTE_P_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(P2VAR(float32, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(P2VAR(boolean, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(P2VAR(SG_ACU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx);
  *(data) = Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(P2VAR(SG_ACU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx);
  *(data) = Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(P2VAR(SG_ACU_Info_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx);
  *(data) = Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(P2VAR(SG_ADCU_ACC_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx);
  *(data) = Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(P2VAR(SG_ADCU_AEB_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx);
  *(data) = Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(P2VAR(SG_ADCU_APS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx);
  *(data) = Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(P2VAR(SG_ADCU_APS_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx);
  *(data) = Rte_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(P2VAR(SG_ADCU_DA_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx);
  *(data) = Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(P2VAR(SG_APTC_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx);
  *(data) = Rte_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(P2VAR(SG_BCM_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx);
  *(data) = Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(P2VAR(SG_BCM_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx);
  *(data) = Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(P2VAR(SG_BMS_BatInfor_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);
  *(data) = Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(P2VAR(SG_BMS_BatInfor_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);
  *(data) = Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(P2VAR(SG_BMS_BatInfor_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx);
  *(data) = Rte_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(P2VAR(SG_BMS_CellTemp_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);
  *(data) = Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(P2VAR(SG_BMS_CellVoltage_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);
  *(data) = Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(P2VAR(SG_BMS_Charge_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);
  *(data) = Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(P2VAR(SG_BMS_Charge_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx);
  *(data) = Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(P2VAR(SG_BMS_Charge_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);
  *(data) = Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(P2VAR(SG_BMS_DIRelayState_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx);
  *(data) = Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(P2VAR(SG_BMS_ErrorInfo_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx);
  *(data) = Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(P2VAR(SG_BMS_PRO_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);
  *(data) = Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(P2VAR(SG_BMS_TCU_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);
  *(data) = Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(P2VAR(SG_BMS_VersionInfor_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);
  *(data) = Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(P2VAR(SG_BMS_status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx);
  *(data) = Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(P2VAR(SG_BMS_status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx);
  *(data) = Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(P2VAR(SG_BMS_status_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);
  *(data) = Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(P2VAR(SG_BMS_status_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx);
  *(data) = Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(P2VAR(SG_CGW_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx);
  *(data) = Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(P2VAR(SG_CGW_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx);
  *(data) = Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(P2VAR(SG_CGW_VIN1_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx);
  *(data) = Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(P2VAR(SG_CGW_VIN2_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx);
  *(data) = Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(P2VAR(SG_CGW_VIN3VER_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx);
  *(data) = Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(P2VAR(SG_DCM_FL_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx);
  *(data) = Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(P2VAR(SG_DCM_FR_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx);
  *(data) = Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(P2VAR(SG_DCM_FR_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx);
  *(data) = Rte_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(P2VAR(SG_DCM_RL_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx);
  *(data) = Rte_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(P2VAR(SG_DCM_RR_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx);
  *(data) = Rte_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(P2VAR(SG_EPS_CONV_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx);
  *(data) = Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(P2VAR(SG_EVCOM_State_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx);
  *(data) = Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(P2VAR(SG_IBS_ACC_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx);
  *(data) = Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(P2VAR(SG_IBS_APS_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx);
  *(data) = Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(P2VAR(SG_IBS_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx);
  *(data) = Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(P2VAR(SG_IBS_Status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx);
  *(data) = Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(P2VAR(SG_IBS_Status_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx);
  *(data) = Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(P2VAR(SG_IBS_Status_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx);
  *(data) = Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(P2VAR(SG_IBS_Status_05_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx);
  *(data) = Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(P2VAR(SG_IBS_Status_06_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx);
  *(data) = Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(P2VAR(SG_IBS_Torque_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx);
  *(data) = Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(P2VAR(SG_IBS_VCU_MotorControl_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx);
  *(data) = Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(P2VAR(SG_IBS_WheelSpeed_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx);
  *(data) = Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(P2VAR(SG_IBS_WheelSpeed_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx);
  *(data) = Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(P2VAR(SG_IVI_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx);
  *(data) = Rte_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup(P2VAR(SG_IVI_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx);
  *(data) = Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(P2VAR(SG_IVI_OdometerInfor_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx);
  *(data) = Rte_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(P2VAR(SG_MCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx);
  *(data) = Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(P2VAR(SG_MCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx);
  *(data) = Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(P2VAR(SG_MCU_DeratingStatus_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx);
  *(data) = Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(P2VAR(SG_MCU_FailureCode_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx);
  *(data) = Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(P2VAR(SG_MCU_Temperature_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx);
  *(data) = Rte_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(P2VAR(SG_MCU_Temperature_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx);
  *(data) = Rte_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(P2VAR(SG_POD_DCDC_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx);
  *(data) = Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(P2VAR(SG_POD_DCDC_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx);
  *(data) = Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(P2VAR(SG_POD_OBC_CHRGSTATION_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx);
  *(data) = Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(P2VAR(SG_POD_OBC_STATUS_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx);
  *(data) = Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(P2VAR(SG_POD_OBC_STATUS_03_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx);
  *(data) = Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(P2VAR(SG_POD_OBC_STATUS_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx);
  *(data) = Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(P2VAR(SG_POD_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);
  *(data) = Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(P2VAR(SG_POD_Status_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx);
  *(data) = Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup(P2VAR(SG_PRND_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx);
  *(data) = Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(P2VAR(SG_SGW_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx);
  *(data) = Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(P2VAR(SG_SGW_04_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx);
  *(data) = Rte_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(P2VAR(SG_SGW_16_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx);
  *(data) = Rte_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(P2VAR(SG_SGW_17_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx);
  *(data) = Rte_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(P2VAR(SG_SGW_IBS_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx);
  *(data) = Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(P2VAR(SG_SGW_PT_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx);
  *(data) = Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(P2VAR(SG_SGW_Time_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx);
  *(data) = Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(P2VAR(SG_SGW_VCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx);
  *(data) = Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(P2VAR(SG_TCU_01_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx);
  *(data) = Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(P2VAR(SG_TCU_02_SigGroup, AUTOMATIC, RTE_CTAP_CANHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx);
  *(data) = Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  return FALSE;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  return FALSE;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}


/**********************************************************************************************************************
 * IsUpdated handling functions
 *********************************************************************************************************************/

FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(void) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  boolean updated;
  if (Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup == Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup_Sender)
  {
    updated = FALSE;
  }
  else
  {
    updated = TRUE;
  }
  return updated;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2VAR(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(P2VAR(dt_ComM_DCCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2VAR(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(P2VAR(dt_Nv_ChrgEgyCalInfo, AUTOMATIC, RTE_CTAP_CHRGEGYCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(P2VAR(dt_Nv_ChrgStatInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ChrgStat_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(P2VAR(dt_ChrMgmt_AcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(P2VAR(dt_ChrMgmt_DcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(P2VAR(dt_ChrMgmt_PreheatIRChkErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(P2VAR(dt_DCChrMgmt_DcPortTempErrLvl2, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(P2VAR(dt_DCChrMgmt_DcPortTempSnsrErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(P2VAR(dt_DCChrMgmt_IRMeasDiErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(P2VAR(dt_DCChrMgmt_IRMeasEnaErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus(P2VAR(dt_OBCMgmt_CPStsJmpErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(P2VAR(dt_OBCMgmt_OBCChrgStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(P2VAR(dt_OBCMgmt_OBCDchaStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(P2VAR(dt_OBCMgmt_OBCDiErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus(P2VAR(dt_OBCMgmt_OBCInpUDcLoErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(P2VAR(dt_OBCMgmt_OBCPreheatStsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgStat_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus(P2VAR(dt_OBCMgmt_S2SwtClsErr, AUTOMATIC, RTE_CTAP_CHRGSTAT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(P2VAR(dt_ComM_ACU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(P2VAR(dt_ComM_ACU02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACU02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(P2VAR(dt_ComM_ACUInfoCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACUInfoTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(P2VAR(dt_ComM_ACUInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUACC02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUACC02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(P2VAR(dt_ComM_ADCUACC02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUAEB01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUAEB01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUAPS01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUAPS01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUBodyReqCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUBodyReqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUDACRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUDATimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(P2VAR(dt_ComM_APTCTCUTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(P2VAR(dt_ComM_APTCTCUTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(P2VAR(dt_ComM_BCM05CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BCM05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(P2VAR(dt_ComM_BCM06CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BCM06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(P2VAR(dt_ComM_BCM06TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2VAR(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(P2VAR(dt_ComM_BMSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BMSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(P2VAR(dt_ComM_CGW01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_CGW01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(P2VAR(dt_ComM_CGW01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(P2VAR(dt_ComM_DCMFL02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMFL02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(P2VAR(dt_ComM_DCMFL02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMFRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(P2VAR(dt_ComM_DCMFRTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMRLTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(P2VAR(dt_ComM_DCMRLTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMRRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(P2VAR(dt_ComM_DCMRRTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_EVCOMSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(P2VAR(dt_ComM_EVCOMSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSACCCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSACCTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSAPSCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSAPSTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts03CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts03TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts04CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts04TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts05CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts05TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts06CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSTqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(P2VAR(dt_ComM_MCU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_MCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(P2VAR(dt_ComM_MCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_PODDCDC01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(P2VAR(dt_ComM_PODDCDC01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(P2VAR(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(P2VAR(dt_ComM_PODOBCChrgStatTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2VAR(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(P2VAR(dt_ComM_PRNDCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(P2VAR(dt_ComM_PRNDTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(P2VAR(dt_ComM_PRNDTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGW16TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(P2VAR(dt_ComM_SGW16TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGW17TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(P2VAR(dt_ComM_SGW17TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGWPT01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(P2VAR(dt_ComM_SGWPT01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGWTimTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(P2VAR(dt_ComM_SGWTimTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_TCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(P2VAR(dt_ComM_TCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CrpCtrl_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CRPCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage(P2VAR(CCS_OutputVoltage, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx);
  *(data) = Rte_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout(P2VAR(CEM_BatteryChargeRequireTimeout, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx);
  *(data) = Rte_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion(P2VAR(CHM_ProtocolVersion, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx);
  *(data) = Rte_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax(P2VAR(uint16, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx);
  *(data) = Rte_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult(P2VAR(CRM_RecognitionResult, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx);
  *(data) = Rte_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady(P2VAR(CRO_ChargerReady, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx);
  *(data) = Rte_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo(P2VAR(CSD_ChargerNo, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx);
  *(data) = Rte_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition(P2VAR(CST_AbortAchiveCondition, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx);
  *(data) = Rte_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_CTS_Year_CTS_Year(P2VAR(CTS_Year, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx);
  *(data) = Rte_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCCSTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCMLTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCRMPrepdTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCRMTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCROPrepdTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCROTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCSDTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(P2VAR(dt_DCChrMgmt_BEMRxCSTTmt, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(P2VAR(SG_BMS_BatInfor_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);
  *(data) = Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(P2VAR(SG_BMS_BatInfor_02_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);
  *(data) = Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(P2VAR(SG_BMS_CellTemp_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);
  *(data) = Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(P2VAR(SG_BMS_CellVoltage_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);
  *(data) = Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(P2VAR(SG_BMS_Charge_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);
  *(data) = Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(P2VAR(SG_BMS_Charge_03_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);
  *(data) = Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(P2VAR(SG_BMS_PRO_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);
  *(data) = Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(P2VAR(SG_BMS_TCU_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);
  *(data) = Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(P2VAR(SG_BMS_VersionInfor_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);
  *(data) = Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(P2VAR(SG_BMS_status_03_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);
  *(data) = Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCComM_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(P2VAR(SG_POD_Status_01_SigGroup, AUTOMATIC, RTE_CTAP_DCCOMM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);
  *(data) = Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_DCDCMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCFCMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_DCFCMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCParMgmt_RTE_R_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus(P2VAR(dt_DCChrMgmt_DcPortTempErrLvl1, AUTOMATIC, RTE_CTAP_DCPARMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(P2VAR(dt_ComM_IBSACCCRCInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSACCE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo(P2VAR(dt_Nv_ModMgmtInfo, AUTOMATIC, RTE_CTAP_DRVMOD_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_DrvMod_RTE_RP_ModMgmtInfo_tec_ModMgmtInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_ELSSDIAG_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_EmMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_EMMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo(P2VAR(dt_Nv_GearMgmtInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_FctSftyGear_RTE_RP_GearMgmtInfo_tec_GearMgmtInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus(P2VAR(dt_ComM_IBSSts05CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts05E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2VAR(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2VAR(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FctSftyGear_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2VAR(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FCTSFTYGEAR_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(P2VAR(dt_ComM_BMSSts01CRCInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(P2VAR(dt_ErrMgmt_VehHVIL, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus(P2VAR(dt_ComM_IVI01CRCInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IVI01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus(P2VAR(dt_ComM_PRNDCRCInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_GearCal_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(P2VAR(dt_ComM_PRNDE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_GEARCAL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet(P2VAR(FRC_ComFtonNet, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx);
  *(data) = Rte_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_DrvMotTempOvrLamp, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(P2VAR(dt_ErrMgmt_HvBattTempOvrLamp, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01(P2VAR(Resp_Error_LIN01, AUTOMATIC, RTE_CTAP_LINHANDLER_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  (void)GetSpinlock(Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx);
  *(data) = Rte_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01 = Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01_Sender;
  (void)ReleaseSpinlock(Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx);

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_MCUMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_OnePedCtrl_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_ONEPEDCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FctSftyTorq_RTE_P_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(P2VAR(dt_ComM_IBSSts01CRCInfo, AUTOMATIC, RTE_CTAP_PDLALYS_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_PDLALYS_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2(P2VAR(Rte_DT_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy32(data, Rte_CtAp_RngEstimn_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2, sizeof(dt_RngEstimn_BattCurrIntegral2kmArrayInfo)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo(P2VAR(dt_Nv_RngEstimnInfo, AUTOMATIC, RTE_CTAP_RNGESTIMN_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  *(data) = Rte_CtAp_RngEstimn_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_S2Mgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_S2MGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_SlopEst_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus(P2VAR(dt_ComM_ACU02TimeoutInfo, AUTOMATIC, RTE_CTAP_SLOPEST_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_SpdLmt_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(P2VAR(dt_ErrMgmt_TorqCtrlErr, AUTOMATIC, RTE_CTAP_SPDLMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TCUMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_TCUMGMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqLmt_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(P2VAR(dt_ErrMgmt_TorqCtrlErr, AUTOMATIC, RTE_CTAP_TORQLMT_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2VAR(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_TORQMODMAP_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_TORQMODMAP_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(P2VAR(dt_ComM_IBSSts03CRCInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts03E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2VAR(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(P2VAR(dt_ComM_IBSSts04CRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts04E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlCRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Core1_Asw_Init
 * Priority: 40
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Core1_Asw_Init) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  Core1App_SWC_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  HookCallout_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ACParMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_AccCal_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_AccrPedlDrv_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_BMSMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_BrkMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_CANHandler_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgComM_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgEgyCal_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgMod_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgPreHeat_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgSdl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgSeqCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ChrgStat_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_CnsCalcn_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_CoastCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ComMErr_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_CrpCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DCComM_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DCDCMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DCFCMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DCParMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DrvAsscCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DrvMod_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_DrvTorqCoor_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ElSSDiag_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_EmMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_FctSftyGear_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_FctSftyTorq_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_FltReactn_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_GearCal_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_HVSfty_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_LINHandler_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_LvBattMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_MCUMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_OBCStsMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_OnePedCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_PdlAlys_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_PwrLim_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_ResEst_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_RngEstimn_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_S2Mgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_SlopEst_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_SpdLmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TCUMgmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqCoor_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqCrossZr_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqDamp_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqFil_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqLmt_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TorqModMap_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_TrsmProtd_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_VehSpd_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_VehStabyCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_VehStat_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  R_WakeUpRsn_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core1_Asw_Task_Qm
 * Priority: 41
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Core1_Asw_Task_Qm) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_100ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_200ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms | Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_1000ms | Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_500ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Core1_Asw_Task_Qm, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_100ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_200ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms | Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms | Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_1000ms | Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_500ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Core1App_SWC_Runnable_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_ACParMgmt_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_AccCal_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_AccrPedlDrv_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_BMSMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_BrkMgmt_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_1000ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_1000ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_100ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_200ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_200ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_CtAp_CANHandler_R_CANHandlerInput_Cyclic_500ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_500ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerInput_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerOutput_Cyclic_100ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerOutput_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_200ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerOutput_Cyclic_200ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerOutput_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CANHandlerOutput_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgComM_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgEgyCal_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgMod_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgPreHeat_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgSdl_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgSeqCtrl_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ChrgStat_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CnsCalcn_Cyclic_100ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_CoastCtrl_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_ComMErr_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_CrpCtrl_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_DCComM_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_DCDCMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_DCFCMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_DCParMgmt_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Asw_Task_Qm_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_DrvAsscCtrl_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core1_Bsw_Task
 * Priority: 42
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Core1_Bsw_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_Core1_Bsw_Task_0_100ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_50ms | Rte_Ev_RunS2_EcuM_EcuM_MainFunction); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Core1_Bsw_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_Core1_Bsw_Task_0_100ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms | Rte_Ev_Cyclic_Core1_Bsw_Task_0_50ms | Rte_Ev_RunS2_EcuM_EcuM_MainFunction)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_RunS2_EcuM_EcuM_MainFunction) != (EventMaskType)0)
    {
      /* call schedulable entity */
      EcuM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_DrvMod_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_DrvTorqCoor_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_ElSSDiag_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_EmMgmt_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_FctSftyGear_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_FctSftyTorq_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_FltReactn_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_GearCal_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_HVSfty_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_LINHandler_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_LvBattMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_MCUMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_OBCStsMgmt_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_OnePedCtrl_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_PdlAlys_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_PwrLim_Cyclic_100ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_ResEst_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_RngEstimn_Cyclic_100ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_50ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_S2Mgmt_Cyclic_50ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_SlopEst_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_SpdLmt_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_TCUMgmt_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_TorqCoor_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TorqCrossZr_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TorqDamp_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TorqFil_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TorqLmt_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TorqModMap_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_TrsmProtd_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_VehSpd_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      R_VehStabyCtrl_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_VehStat_Cyclic_20ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Core1_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      R_WakeUpRsn_Cyclic_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0314:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because a direct byte access is necessary.
     Risk:       No functional risk. Only a cast to void is performed.
     Prevention: Not required.

   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0316:  MISRA rule: Dir1.1
     Reason:     Pointer cast to uint8* because a direct byte access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_1339:  MISRA rule: Rule17.8
     Reason:     Passing elements by pointer is a well known concept.
     Risk:       No functional risk. Data flow is handled with care.
     Prevention: Not required.

   MD_Rte_1514:  MISRA rule: Rule8.9
     Reason:     Because of external definition, misra does not see the call.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_1533:  MISRA rule: Rule8.9
     Reason:     Object is referenced by more than one function in different configurations.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_2982:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2983:  MISRA rule: Rule2.2
     Reason:     For generated code it is difficult to check the usage of each object.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_4116:  MISRA rule: Rule12.6
     Reason:     Operand can only be 0 or 1 in special case of queue size equal to 1.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
