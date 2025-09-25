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
 *             File:  Rte_SystemApplication_OsCore0.c
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
#include "Rte_CtAp_HWHandler.h"
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

#define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CCS_OutputCurrent, RTE_VAR_INIT_NOCACHE) Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CCS_OutputVoltage, RTE_VAR_INIT_NOCACHE) Rte_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CEM_BatteryChargeRequireTimeout, RTE_VAR_INIT_NOCACHE) Rte_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CHM_ProtocolVersion, RTE_VAR_INIT_NOCACHE) Rte_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ACU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx = {
  30000U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ACU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx = {
  4905U, 0U, 4905U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ACU_Info_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx = {
  1U, TRUE, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ADCU_ACC_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ADCU_AEB_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx = {
  0U, 0U, 0U, 0U, FALSE, -16, FALSE, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ADCU_APS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ADCU_APS_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_ADCU_DA_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_APTC_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BCM_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, 1U, TRUE, 0U, 5U, FALSE, 1U, 2U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BCM_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx = {
  0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_BatInfor_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_BatInfor_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx = {
  0ULL
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_BatInfor_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_CellTemp_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx = {
  215U, 215U, 0U, 215U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_CellVoltage_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_Charge_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_Charge_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_Charge_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_DIRelayState_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_ErrorInfo_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx = {
  0U, 0U, 0U, 0U, 0U, FALSE, 0U, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_PRO_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_TCU_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx = {
  255U, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_VersionInfor_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx = {
  FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx = {
  0U, 0U, 0U, FALSE, FALSE, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_status_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_BMS_status_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx = {
  -1000, -1000
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_CGW_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_CGW_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx = {
  FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, 
  FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_CGW_VIN1_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_CGW_VIN2_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_CGW_VIN3VER_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_DCM_FL_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx = {
  0U, FALSE, 0U, 0U, 254U, 254U, FALSE, FALSE, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_DCM_FR_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx = {
  70U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_DCM_FR_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_DCM_RL_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_DCM_RR_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_EPS_CONV_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx = {
  0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, 0U, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_EVCOM_State_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_ACC_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx = {
  0U, FALSE, 0U, FALSE, FALSE, -20000, 0U, 0U, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_APS_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx = {
  0U, -5, 0U, 0U, TRUE, -5, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx = {
  0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, 0U, 0U, FALSE, FALSE, FALSE, FALSE, 0U, 0U, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx = {
  0U, FALSE, FALSE, FALSE, FALSE, 0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx = {
  0U, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_05_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Status_06_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx = {
  0U, 0U, 0U, TRUE, 0U, FALSE, FALSE, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_Torque_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx = {
  0U, FALSE, 0U, 0U, 0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_VCU_MotorControl_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx = {
  0U, FALSE, 0U, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_WheelSpeed_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IBS_WheelSpeed_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx = {
  0U, 0U, 0U, FALSE, 0U, 0U, FALSE, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IVI_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IVI_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx = {
  0U, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_IVI_OdometerInfor_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx = {
  FALSE, 32767U, FALSE, 1023U, 1023U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx = {
  FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_DeratingStatus_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx = {
  1023U, 1023U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_FailureCode_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_Temperature_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_MCU_Temperature_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_DCDC_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_DCDC_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx = {
  0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_OBC_CHRGSTATION_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_OBC_STATUS_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_OBC_STATUS_03_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx = {
  0U, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_OBC_STATUS_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_Status_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_POD_Status_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx = {
  0U, 0U, 1U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_PRND_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx = {
  0U, 0U, 0U, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_04_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_16_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_17_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_FVSynchronization_01_SigGrou, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_IBS_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_PT_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_Time_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx = {
  1U, 0U, 0U, 1U, 0U, 0U, TRUE
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_SGW_VCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx = {
  0U, 0U, 0U, 254U, 254U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_TCU_01_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_TCU_02_SigGroup, RTE_VAR_INIT_NOCACHE) Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CRM_RecognitionResult, RTE_VAR_INIT_NOCACHE) Rte_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CRO_ChargerReady, RTE_VAR_INIT_NOCACHE) Rte_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CSD_ChargerNo, RTE_VAR_INIT_NOCACHE) Rte_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CST_AbortAchiveCondition, RTE_VAR_INIT_NOCACHE) Rte_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(CTS_Year, RTE_VAR_INIT_NOCACHE) Rte_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(FRC_ComFtonNet, RTE_VAR_INIT_NOCACHE) Rte_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(FRC_Vl_OV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(FRC_Vl_UV, RTE_VAR_INIT_NOCACHE) Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx = TRUE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(IBATT_QUIESCENT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx = 255U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(I_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx = 65535U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(I_RANGE_LIN01, RTE_VAR_INIT_NOCACHE) Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(Resp_Error_LIN01, RTE_VAR_INIT_NOCACHE) Rte_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOC_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOF_V1_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx = 255U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOF_V2_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx = 255U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SOH_LIN01, RTE_VAR_INIT_NOCACHE) Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx = 255U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(T_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx = 255U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(U_BATT_LIN01, RTE_VAR_INIT_NOCACHE) Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx = 16383U;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * TxUpdate Flags for each external Tx Signal over Rte_ComSendSignalProxy without IOCs
 *********************************************************************************************************************/
#define RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_SystemApplication_OsCore0_TxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore0_TxUpdateFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
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

#define RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_SystemApplication_OsCore0_TxUpdateFlagsInit() (Rte_MemClr(&Rte_SystemApplication_OsCore0_TxUpdateFlags, sizeof(Rte_SystemApplication_OsCore0_TxUpdateFlagsType)))

/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Update Flags for each Receiver with enableUpdate != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_SystemApplication_OsCore0_RxUpdateFlagsType, RTE_VAR_ZERO_INIT_NOCACHE) Rte_SystemApplication_OsCore0_RxUpdateFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
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

#define RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_SystemApplication_OsCore0_RxUpdateFlagsInit() (Rte_MemClr(&Rte_SystemApplication_OsCore0_RxUpdateFlags, sizeof(Rte_SystemApplication_OsCore0_RxUpdateFlagsType)))

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num);
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_BswM_ESH_Mode(BswM_ESH_Mode mode); /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
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
#define RTE_CONST_MSEC_SystemTimer_Core2_100 (100UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_200 (200UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_5 (5UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_50 (50UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_500 (500UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_500 (500UL)

#define RTE_CONST_SEC_SystemTimer_Core2_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_Core2_1 (1000UL)


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


FUNC(void, RTE_CODE) Rte_InitMemory_SystemApplication_OsCore0(void)
{
  /* reset Tx Update Flags */
  Rte_SystemApplication_OsCore0_TxUpdateFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* initialize flags for update handling */
  Rte_SystemApplication_OsCore0_RxUpdateFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* set default values for internal data */
  Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx = 0U;
  Rte_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx = 0U;
  Rte_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx = 0U;
  Rte_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx = 0U;
  Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx = Rte_C_SG_ACU_01_SigGroup_0;
  Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx = Rte_C_SG_ACU_02_SigGroup_0;
  Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx = Rte_C_SG_ACU_Info_SigGroup_0;
  Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx = Rte_C_SG_ADCU_ACC_02_SigGroup_0;
  Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx = Rte_C_SG_ADCU_AEB_01_SigGroup_0;
  Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx = Rte_C_SG_ADCU_APS_01_SigGroup_0;
  Rte_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx = Rte_C_SG_ADCU_APS_02_SigGroup_0;
  Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx = Rte_C_SG_ADCU_DA_SigGroup_0;
  Rte_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx = Rte_C_SG_APTC_TCU_SigGroup_0;
  Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx = Rte_C_SG_BCM_05_SigGroup_0;
  Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx = Rte_C_SG_BCM_06_SigGroup_0;
  Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx = Rte_C_SG_BMS_BatInfor_01_SigGroup_0;
  Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx = Rte_C_SG_BMS_BatInfor_02_SigGroup_0;
  Rte_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx = Rte_C_SG_BMS_BatInfor_03_SigGroup_0;
  Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx = Rte_C_SG_BMS_CellTemp_SigGroup_0;
  Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx = Rte_C_SG_BMS_CellVoltage_SigGroup_0;
  Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx = Rte_C_SG_BMS_Charge_01_SigGroup_0;
  Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx = Rte_C_SG_BMS_Charge_02_SigGroup_0;
  Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx = Rte_C_SG_BMS_Charge_03_SigGroup_0;
  Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx = Rte_C_SG_BMS_DIRelayState_SigGroup_0;
  Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx = Rte_C_SG_BMS_ErrorInfo_SigGroup_0;
  Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx = Rte_C_SG_BMS_PRO_SigGroup_0;
  Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx = Rte_C_SG_BMS_TCU_SigGroup_0;
  Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx = Rte_C_SG_BMS_VersionInfor_SigGroup_0;
  Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx = Rte_C_SG_BMS_status_01_SigGroup_0;
  Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx = Rte_C_SG_BMS_status_02_SigGroup_0;
  Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx = Rte_C_SG_BMS_status_03_SigGroup_0;
  Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx = Rte_C_SG_BMS_status_04_SigGroup_0;
  Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx = Rte_C_SG_CGW_01_SigGroup_0;
  Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx = Rte_C_SG_CGW_02_SigGroup_0;
  Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx = Rte_C_SG_CGW_VIN1_SigGroup_0;
  Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx = Rte_C_SG_CGW_VIN2_SigGroup_0;
  Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx = Rte_C_SG_CGW_VIN3VER_SigGroup_0;
  Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx = Rte_C_SG_DCM_FL_02_SigGroup_0;
  Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx = Rte_C_SG_DCM_FR_02_SigGroup_0;
  Rte_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx = Rte_C_SG_DCM_FR_SigGroup_0;
  Rte_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx = Rte_C_SG_DCM_RL_SigGroup_0;
  Rte_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx = Rte_C_SG_DCM_RR_SigGroup_0;
  Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx = Rte_C_SG_EPS_CONV_SigGroup_0;
  Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx = Rte_C_SG_EVCOM_State_01_SigGroup_0;
  Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx = Rte_C_SG_IBS_ACC_SigGroup_0;
  Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx = Rte_C_SG_IBS_APS_SigGroup_0;
  Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx = Rte_C_SG_IBS_Status_01_SigGroup_0;
  Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx = Rte_C_SG_IBS_Status_02_SigGroup_0;
  Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx = Rte_C_SG_IBS_Status_03_SigGroup_0;
  Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx = Rte_C_SG_IBS_Status_04_SigGroup_0;
  Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx = Rte_C_SG_IBS_Status_05_SigGroup_0;
  Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx = Rte_C_SG_IBS_Status_06_SigGroup_0;
  Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx = Rte_C_SG_IBS_Torque_SigGroup_0;
  Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx = Rte_C_SG_IBS_VCU_MotorControl_SigGroup_0;
  Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx = Rte_C_SG_IBS_WheelSpeed_01_SigGroup_0;
  Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx = Rte_C_SG_IBS_WheelSpeed_02_SigGroup_0;
  Rte_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx = Rte_C_SG_IVI_01_SigGroup_0;
  Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx = Rte_C_SG_IVI_03_SigGroup_0;
  Rte_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx = Rte_C_SG_IVI_OdometerInfor_SigGroup_0;
  Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx = Rte_C_SG_MCU_01_SigGroup_0;
  Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx = Rte_C_SG_MCU_02_SigGroup_0;
  Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx = Rte_C_SG_MCU_DeratingStatus_SigGroup_0;
  Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx = Rte_C_SG_MCU_FailureCode_SigGroup_0;
  Rte_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx = Rte_C_SG_MCU_Temperature_01_SigGroup_0;
  Rte_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx = Rte_C_SG_MCU_Temperature_02_SigGroup_0;
  Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx = Rte_C_SG_POD_DCDC_01_SigGroup_0;
  Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx = Rte_C_SG_POD_DCDC_02_SigGroup_0;
  Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx = Rte_C_SG_POD_OBC_CHRGSTATION_SigGroup_0;
  Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx = Rte_C_SG_POD_OBC_STATUS_02_SigGroup_0;
  Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx = Rte_C_SG_POD_OBC_STATUS_03_SigGroup_0;
  Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx = Rte_C_SG_POD_OBC_STATUS_04_SigGroup_0;
  Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx = Rte_C_SG_POD_Status_01_SigGroup_0;
  Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx = Rte_C_SG_POD_Status_02_SigGroup_0;
  Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx = Rte_C_SG_PRND_SigGroup_0;
  Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx = Rte_C_SG_SGW_01_SigGroup_0;
  Rte_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx = Rte_C_SG_SGW_04_SigGroup_0;
  Rte_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx = Rte_C_SG_SGW_16_SigGroup_0;
  Rte_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx = Rte_C_SG_SGW_17_SigGroup_0;
  Rte_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx = Rte_C_SG_SGW_FVSynchronization_01_SigGrou_0;
  Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx = Rte_C_SG_SGW_IBS_01_SigGroup_0;
  Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx = Rte_C_SG_SGW_PT_01_SigGroup_0;
  Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx = Rte_C_SG_SGW_Time_SigGroup_0;
  Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx = Rte_C_SG_SGW_VCU_01_SigGroup_0;
  Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx = Rte_C_SG_TCU_01_SigGroup_0;
  Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx = Rte_C_SG_TCU_02_SigGroup_0;
  Rte_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx = 0U;
  Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx = 0U;
  Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx = 0U;
  Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx = 0U;
  Rte_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx = 1U;
  Rte_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx = 0U;
  Rte_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx = 1U;
  Rte_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx = 0U;
  Rte_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx = 0U;
  Rte_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx = TRUE;
  Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx = TRUE;
  Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx = TRUE;
  Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx = 255U;
  Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx = 65535U;
  Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx = 3U;
  Rte_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx = FALSE;
  Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx = 1U;
  Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx = 255U;
  Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx = 255U;
  Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx = 255U;
  Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx = 255U;
  Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx = 16383U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

}


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Gear_Gear_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Gear_Gear_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SOC_SOC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SOC_SOC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckCodingState_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckCodingState_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckProgrammingDependencies_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckProgrammingPreCondition_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_programmingPreConditionList, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_programmingPreConditionList = Out_programmingPreConditionList;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Check_Memory_Start(Dcm_StartDataIn_Check_Memory_In_checksumType In_checksum, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Check_Memory_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_checksum = In_checksum;
  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Erase_Memory_Start(Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierType In_addressAndLengthFormatIdentifier, Dcm_StartDataIn_Erase_Memory_In_memoryAddressType In_memoryAddress, Dcm_StartDataIn_Erase_Memory_In_memorySizeType In_memorySize, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Erase_Memory_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_addressAndLengthFormatIdentifier = In_addressAndLengthFormatIdentifier;
  In_memoryAddress = In_memoryAddress;
  In_memorySize = In_memorySize;
  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
} /* PRQA S 6060 */ /* MD_MSR_STPAR */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Erase_Mileage_Provisional_Parameter_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_routineResult = Out_routineResult;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_1_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_2_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d01_VCU_AccelerationPedal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d01_VCU_VehicleSpeed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d05_POD_OBC_InputACVoltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeCurrent_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeVoltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d05_VCU_OBC_ChargeCurrentCommand_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d07_Electronic_lock_state_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d08_VCU_HVIL_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d09_New_Bit_Field_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d11_Mainrealy1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x1d11_Mainrelay2_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a0_Ignition_Switch_Signal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a1_Battery_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a2_Total_Odometer_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a3_Vehicle_speed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Day_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Hour_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Minute_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Month_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Second_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a4_Date_And_Time_Year_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a5_VCU_HVStatus_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a6_SOC_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xf1a7_Gear_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_ExtendedData_Fault_Aged_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_ExtendedData_Fault_Aging_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_ExtendedData_Fault_Ocurrence_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_1_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_2_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d01_VCU_AccelerationPedal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d01_VCU_VehicleSpeed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d05_POD_OBC_InputACVoltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeCurrent_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeVoltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d05_VCU_OBC_ChargeCurrentCommand_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d07_Electronic_lock_state_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d08_VCU_HVIL_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d09_New_Bit_Field_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d11_Mainrealy1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x1d11_Mainrelay2_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a0_Ignition_Switch_Signal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a1_Battery_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a2_Total_Odometer_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a3_Vehicle_speed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Day_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Hour_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Minute_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Month_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Second_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a4_Date_And_Time_Year_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a5_VCU_HVStatus_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a6_SOC_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0xf1a7_Gear_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_ExtendedData_Fault_Aged_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_ExtendedData_Fault_Aging_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_ExtendedData_Fault_Ocurrence_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_BswM_ESH_Mode(nextMode);
  uint8 internalIndexCurrentMode;
  BswM_ESH_Mode currentMode;
  SuspendOSInterrupts();
  currentMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_BswM_ESH_Mode(currentMode);
  if (internalIndexNextMode >= 5U)
  {
    ResumeOSInterrupts();
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 5U)
  {
    ResumeOSInterrupts();
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = nextMode;
    ResumeOSInterrupts();
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  BswM_ESH_Mode curMode;
  curMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  return curMode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void)
{

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Core0_AswTask
 * Priority: 64
 * Schedule: FULL
 * Alarm:    Cycle Time 0.5 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Core0_AswTask) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  IoHwAb_IoHwAbRunnable_500ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core0_Asw_Init
 * Priority: 63
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Core0_Asw_Init) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  IoHwAb_IoHwAbRunnable_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core0_Bsw_Task
 * Priority: 65
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Core0_Bsw_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms | Rte_Ev_Cyclic2_Core0_Bsw_Task_0_20ms | Rte_Ev_Cyclic2_Core0_Bsw_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Core0_Bsw_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms | Rte_Ev_Cyclic2_Core0_Bsw_Task_0_20ms | Rte_Ev_Cyclic2_Core0_Bsw_Task_0_5ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      EcuM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_0(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanNm_MainFunction();

      /* call schedulable entity */
      CanSM_MainFunction();

      /* call schedulable entity */
      Can_MainFunction_BusOff();

      /* call schedulable entity */
      Can_MainFunction_Mode();

      /* call schedulable entity */
      Can_MainFunction_Wakeup();

      /* call schedulable entity */
      Com_MainFunctionRx_ComMainFunctionRx();

      /* call schedulable entity */
      Com_MainFunctionTx_ComMainFunctionTx();

      /* call schedulable entity */
      Rte_ComSendSignalProxyPeriodic();

      /* call schedulable entity */
      Fee_MainFunction();

      /* call schedulable entity */
      Fls_17_Dmu_MainFunction();

      /* call runnable */
      NvM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanXcp_MainFunction();

      /* call schedulable entity */
      Xcp_MainFunction();

      /* call schedulable entity */
      CanTp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_MasterMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_SatelliteMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_1(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_2(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      LinIf_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      LinSM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Spi_MainFunction_Handling();
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_3(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_4(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_5(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_6(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_7(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Core0_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      J1939Tp_MainFunction();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_1514:  MISRA rule: Rule8.9
     Reason:     Because of external definition, misra does not see the call.
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

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
