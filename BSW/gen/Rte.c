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
 *             File:  Rte.c
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
 * Rte Init State Variable
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState = RTE_STATE_UNINIT; /* PRQA S 3408 */ /* MD_Rte_3408 */
volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_StartTiming_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408, 1514 */ /* MD_MSR_MacroArgumentEmpty, MD_Rte_3408, MD_Rte_1514 */

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_1 = RTE_STATE_UNINIT; /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_2 = RTE_STATE_UNINIT; /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_RngEstimn_BattCurrIntegral2kmArrayInfo, RTE_CONST) Rte_C_dt_RngEstimn_BattCurrIntegral2kmArrayInfo_0 = {
  3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 
  3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U, 3197U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ACU_01_SigGroup, RTE_CONST) Rte_C_SG_ACU_01_SigGroup_0 = {
  30000U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ACU_02_SigGroup, RTE_CONST) Rte_C_SG_ACU_02_SigGroup_0 = {
  4905U, 0U, 4905U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ACU_Info_SigGroup, RTE_CONST) Rte_C_SG_ACU_Info_SigGroup_0 = {
  1U, TRUE, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ADCU_ACC_02_SigGroup, RTE_CONST) Rte_C_SG_ADCU_ACC_02_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ADCU_AEB_01_SigGroup, RTE_CONST) Rte_C_SG_ADCU_AEB_01_SigGroup_0 = {
  0U, 0U, 0U, 0U, FALSE, -16, FALSE, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ADCU_APS_01_SigGroup, RTE_CONST) Rte_C_SG_ADCU_APS_01_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ADCU_APS_02_SigGroup, RTE_CONST) Rte_C_SG_ADCU_APS_02_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_ADCU_DA_SigGroup, RTE_CONST) Rte_C_SG_ADCU_DA_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_APTC_TCU_SigGroup, RTE_CONST) Rte_C_SG_APTC_TCU_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BCM_05_SigGroup, RTE_CONST) Rte_C_SG_BCM_05_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, 1U, TRUE, 0U, 5U, FALSE, 1U, 2U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BCM_06_SigGroup, RTE_CONST) Rte_C_SG_BCM_06_SigGroup_0 = {
  0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_BatInfor_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_01_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_BatInfor_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_02_SigGroup_0 = {
  0ULL
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_BatInfor_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_BatInfor_03_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_CellTemp_SigGroup, RTE_CONST) Rte_C_SG_BMS_CellTemp_SigGroup_0 = {
  215U, 215U, 0U, 215U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_CellVoltage_SigGroup, RTE_CONST) Rte_C_SG_BMS_CellVoltage_SigGroup_0 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_Charge_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_01_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_Charge_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_02_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_Charge_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_Charge_03_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_DIRelayState_SigGroup, RTE_CONST) Rte_C_SG_BMS_DIRelayState_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_ErrorInfo_SigGroup, RTE_CONST) Rte_C_SG_BMS_ErrorInfo_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, FALSE, 0U, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_PRO_SigGroup, RTE_CONST) Rte_C_SG_BMS_PRO_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_TCU_SigGroup, RTE_CONST) Rte_C_SG_BMS_TCU_SigGroup_0 = {
  255U, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_VersionInfor_SigGroup, RTE_CONST) Rte_C_SG_BMS_VersionInfor_SigGroup_0 = {
  FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_status_01_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_01_SigGroup_0 = {
  0U, 0U, 0U, FALSE, FALSE, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_status_02_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_02_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_status_03_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_03_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_BMS_status_04_SigGroup, RTE_CONST) Rte_C_SG_BMS_status_04_SigGroup_0 = {
  -1000, -1000
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_CGW_01_SigGroup, RTE_CONST) Rte_C_SG_CGW_01_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_CGW_02_SigGroup, RTE_CONST) Rte_C_SG_CGW_02_SigGroup_0 = {
  FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, 
  FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_CGW_VIN1_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN1_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_CGW_VIN2_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN2_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_CGW_VIN3VER_SigGroup, RTE_CONST) Rte_C_SG_CGW_VIN3VER_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_DCM_FL_02_SigGroup, RTE_CONST) Rte_C_SG_DCM_FL_02_SigGroup_0 = {
  0U, FALSE, 0U, 0U, 254U, 254U, FALSE, FALSE, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_DCM_FR_02_SigGroup, RTE_CONST) Rte_C_SG_DCM_FR_02_SigGroup_0 = {
  70U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_DCM_FR_SigGroup, RTE_CONST) Rte_C_SG_DCM_FR_SigGroup_0 = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_DCM_RL_SigGroup, RTE_CONST) Rte_C_SG_DCM_RL_SigGroup_0 = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_DCM_RR_SigGroup, RTE_CONST) Rte_C_SG_DCM_RR_SigGroup_0 = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_EPS_CONV_SigGroup, RTE_CONST) Rte_C_SG_EPS_CONV_SigGroup_0 = {
  0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, 0U, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_EVCOM_State_01_SigGroup, RTE_CONST) Rte_C_SG_EVCOM_State_01_SigGroup_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_ACC_SigGroup, RTE_CONST) Rte_C_SG_IBS_ACC_SigGroup_0 = {
  0U, FALSE, 0U, FALSE, FALSE, -20000, 0U, 0U, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_APS_SigGroup, RTE_CONST) Rte_C_SG_IBS_APS_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_01_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_01_SigGroup_0 = {
  0U, -5, 0U, 0U, TRUE, -5, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_02_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_02_SigGroup_0 = {
  0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, 0U, 0U, FALSE, FALSE, FALSE, FALSE, 0U, 0U, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_03_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_03_SigGroup_0 = {
  0U, FALSE, FALSE, FALSE, FALSE, 0U, FALSE, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_04_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_04_SigGroup_0 = {
  0U, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_05_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_05_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Status_06_SigGroup, RTE_CONST) Rte_C_SG_IBS_Status_06_SigGroup_0 = {
  0U, 0U, 0U, TRUE, 0U, FALSE, FALSE, 0U, 0U, 0U, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_Torque_SigGroup, RTE_CONST) Rte_C_SG_IBS_Torque_SigGroup_0 = {
  0U, FALSE, 0U, 0U, 0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_VCU_MotorControl_SigGroup, RTE_CONST) Rte_C_SG_IBS_VCU_MotorControl_SigGroup_0 = {
  0U, FALSE, 0U, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_WheelSpeed_01_SigGroup, RTE_CONST) Rte_C_SG_IBS_WheelSpeed_01_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IBS_WheelSpeed_02_SigGroup, RTE_CONST) Rte_C_SG_IBS_WheelSpeed_02_SigGroup_0 = {
  0U, 0U, 0U, FALSE, 0U, 0U, FALSE, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IVI_01_SigGroup, RTE_CONST) Rte_C_SG_IVI_01_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IVI_03_SigGroup, RTE_CONST) Rte_C_SG_IVI_03_SigGroup_0 = {
  0U, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_IVI_OdometerInfor_SigGroup, RTE_CONST) Rte_C_SG_IVI_OdometerInfor_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_01_SigGroup, RTE_CONST) Rte_C_SG_MCU_01_SigGroup_0 = {
  FALSE, 32767U, FALSE, 1023U, 1023U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_02_SigGroup, RTE_CONST) Rte_C_SG_MCU_02_SigGroup_0 = {
  FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_DeratingStatus_SigGroup, RTE_CONST) Rte_C_SG_MCU_DeratingStatus_SigGroup_0 = {
  1023U, 1023U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_FailureCode_SigGroup, RTE_CONST) Rte_C_SG_MCU_FailureCode_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_Temperature_01_SigGroup, RTE_CONST) Rte_C_SG_MCU_Temperature_01_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_MCU_Temperature_02_SigGroup, RTE_CONST) Rte_C_SG_MCU_Temperature_02_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_DCDC_01_SigGroup, RTE_CONST) Rte_C_SG_POD_DCDC_01_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_DCDC_02_SigGroup, RTE_CONST) Rte_C_SG_POD_DCDC_02_SigGroup_0 = {
  0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_OBC_CHRGSTATION_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_CHRGSTATION_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_OBC_STATUS_02_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_02_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_OBC_STATUS_03_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_03_SigGroup_0 = {
  0U, FALSE, FALSE, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_OBC_STATUS_04_SigGroup, RTE_CONST) Rte_C_SG_POD_OBC_STATUS_04_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_Status_01_SigGroup, RTE_CONST) Rte_C_SG_POD_Status_01_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_POD_Status_02_SigGroup, RTE_CONST) Rte_C_SG_POD_Status_02_SigGroup_0 = {
  0U, 0U, 1U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_PRND_SigGroup, RTE_CONST) Rte_C_SG_PRND_SigGroup_0 = {
  0U, 0U, 0U, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_01_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_04_SigGroup, RTE_CONST) Rte_C_SG_SGW_04_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_16_SigGroup, RTE_CONST) Rte_C_SG_SGW_16_SigGroup_0 = {
  FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_17_SigGroup, RTE_CONST) Rte_C_SG_SGW_17_SigGroup_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_FVSynchronization_01_SigGrou, RTE_CONST) Rte_C_SG_SGW_FVSynchronization_01_SigGrou_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_IBS_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_IBS_01_SigGroup_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_PT_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_PT_01_SigGroup_0 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_Time_SigGroup, RTE_CONST) Rte_C_SG_SGW_Time_SigGroup_0 = {
  1U, 0U, 0U, 1U, 0U, 0U, TRUE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_SGW_VCU_01_SigGroup, RTE_CONST) Rte_C_SG_SGW_VCU_01_SigGroup_0 = {
  0U, 0U, 0U, 254U, 254U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_TCU_01_SigGroup, RTE_CONST) Rte_C_SG_TCU_01_SigGroup_0 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_TCU_02_SigGroup, RTE_CONST) Rte_C_SG_TCU_02_SigGroup_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_02_SigGroup_0 = {
  80U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_03_SigGroup_0 = {
  0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_04_SigGroup, RTE_CONST) Rte_C_SG_VCU_04_SigGroup_0 = {
  FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_05_SigGroup, RTE_CONST) Rte_C_SG_VCU_05_SigGroup_0 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_06_SigGroup, RTE_CONST) Rte_C_SG_VCU_06_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_AccPedal_SigGroup, RTE_CONST) Rte_C_SG_VCU_AccPedal_SigGroup_0 = {
  0U, 0U, 0U, FALSE, 0U, FALSE, 0U, 0U, FALSE, FALSE, FALSE, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_BMS_SigGroup, RTE_CONST) Rte_C_SG_VCU_BMS_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, FALSE, FALSE, 0U, 0U, 0U, TRUE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_Chassis_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_Chassis_01_SigGroup_0 = {
  0U, 0U, FALSE, FALSE, FALSE, 0U, 0U, FALSE, 0U, 0U, 0U, FALSE, 0U, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_DCDC_SigGroup, RTE_CONST) Rte_C_SG_VCU_DCDC_SigGroup_0 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_HMIsignals_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_01_SigGroup_0 = {
  0U, 0U, 0U, FALSE, FALSE, 0U, FALSE, FALSE, FALSE, 0U, FALSE, 0U, FALSE, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_HMIsignals_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_02_SigGroup_0 = {
  0U, 0U, 50U, 0U, 0U, 0U, 255U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_HMIsignals_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_HMIsignals_03_SigGroup_0 = {
  0U, 2048, 1U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_IBS_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_IBS_01_SigGroup_0 = {
  0U, 0U, 0U, FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_MCU_02_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_02_SigGroup_0 = {
  32767U, 0U, 32767U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_MCU_03_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_03_SigGroup_0 = {
  0U, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_MCU_05_SigGroup, RTE_CONST) Rte_C_SG_VCU_MCU_05_SigGroup_0 = {
  0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_POD_SigGroup, RTE_CONST) Rte_C_SG_VCU_POD_SigGroup_0 = {
  TRUE, 0U, 0U, TRUE, TRUE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_PlugInChrgInfo_SigGroup, RTE_CONST) Rte_C_SG_VCU_PlugInChrgInfo_SigGroup_0 = {
  0U, 0U, FALSE, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_SynReq_01_SigGroup, RTE_CONST) Rte_C_SG_VCU_SynReq_01_SigGroup_0 = {
  16777215U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(SG_VCU_TCU_SigGroup, RTE_CONST) Rte_C_SG_VCU_TCU_SigGroup_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlURaw1Hi, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw1Hi_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlURaw1Lo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw1Lo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlURaw2Hi, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw2Hi_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlURaw2Lo, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURaw2Lo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_AccrPedlURawDif, RTE_CONST) Rte_C_dt_ChassisMgmt_AccrPedlURawDif_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSRbsDesTqOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_AcPreheatUDcCtrlErr, RTE_CONST) Rte_C_dt_ChrMgmt_AcPreheatUDcCtrlErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_AcPreheatUDcCtrlErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_CC2UDcDTC, RTE_CONST) Rte_C_dt_ChrMgmt_CC2UDcDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_CC2UDcErr, RTE_CONST) Rte_C_dt_ChrMgmt_CC2UDcErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_ChrgStsJmpErr, RTE_CONST) Rte_C_dt_ChrMgmt_ChrgStsJmpErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_ChrgStsJmpErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_ChrgStsJmpErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_DcPreheatUDcCtrlErr, RTE_CONST) Rte_C_dt_ChrMgmt_DcPreheatUDcCtrlErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_DcPreheatUDcCtrlErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_PreheatIRChkErr, RTE_CONST) Rte_C_dt_ChrMgmt_PreheatIRChkErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ChrMgmt_PreheatIRChkErrDTC, RTE_CONST) Rte_C_dt_ChrMgmt_PreheatIRChkErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACU01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACU02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU02CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACU02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACU02TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACU02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ACU02TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACUInfoCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACUInfoTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ACUInfoTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ACUInfoTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUACC02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUACC02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUACC02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_ADCUACC02TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUAEB01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAEB01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUAEB01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAEB01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUAPS01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAPS01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUAPS01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUAPS01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUBodyReqCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUBodyReqCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUBodyReqTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUDACRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUDACRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_ADCUDATimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_ADCUDATimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_APTCTCUTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_APTCTCUTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_APTCTCUTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_APTCTCUTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BCM05CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM05CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BCM05TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM05TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BCM06CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM06CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BCM06TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BCM06TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BCM06TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BCM06TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSErrInfoTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSErrInfoTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts01CRCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts02TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_BMSSts02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_BMSSts02TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_CGW01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_CGW01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_CGW01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_CGW01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_CGW01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_CGW01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_CHCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_CHCANBusOffDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_CHCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_CHCANBusOffInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCCANBusOffDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_DCCANBusOffInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMFL02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMFL02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMFL02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMFL02TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMFRTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMFRTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMFRTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMFRTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMRLTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMRLTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMRLTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMRLTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMRRTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_DCMRRTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_DCMRRTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_DCMRRTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_EPTCANBusOffDTCInfo, RTE_CONST) Rte_C_dt_ComM_EPTCANBusOffDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_EPTCANBusOffInfo, RTE_CONST) Rte_C_dt_ComM_EPTCANBusOffInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_EVCOMSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_EVCOMSts01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_EVCOMSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_EVCOMSts01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_FRCRespErrDTC, RTE_CONST) Rte_C_dt_ComM_FRCRespErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_FRCSplyUDcHiDTC, RTE_CONST) Rte_C_dt_ComM_FRCSplyUDcHiDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_FRCSplyUDcLoDTC, RTE_CONST) Rte_C_dt_ComM_FRCSplyUDcLoDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSACCCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSACCCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCCRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSACCE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCE2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSACCTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSACCTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSAPSCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSAPSCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSAPSTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSAPSTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts01CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts02CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts02E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts02TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts02TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts03CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts03CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts03E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts03TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts03TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts04CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts04CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts04E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts04TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts04TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts05CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts05CRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts05E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts05TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts05TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts05TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts06CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts06CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSSts06TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSSts06TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSTqCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSTqCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqCRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSTqE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqE2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSTqTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSTqTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSVCUMotCtrlCRCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlCRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSVCUMotCtrlTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSWhlSpd01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSWhlSpd01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSWhlSpd02CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd02CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IBSWhlSpd02TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IBSWhlSpd02TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IVI01CRCInfo, RTE_CONST) Rte_C_dt_ComM_IVI01CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_IVI01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_IVI01E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_LinMsgErrInfo, RTE_CONST) Rte_C_dt_ComM_LinMsgErrInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCU01CRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01CRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCU01CRCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01CRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCU01E2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCU01E2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCU01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCU01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCU01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCUFailrCodCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCUFailrCodCRCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodCRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCUFailrCodE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodE2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_MCUFailrCodTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_MCUFailrCodTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PODDCDC01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PODDCDC01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PODDCDC01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODDCDC01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PODOBCChrgStatTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODOBCChrgStatTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PODSts01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PODSts01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PRNDCRCDTCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDCRCDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PRNDCRCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDCRCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PRNDE2ETimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PRNDE2ETimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PRNDTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_PRNDTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_PRNDTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_PRNDTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGW16TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGW16TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGW16TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGW16TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGW17TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGW17TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGW17TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGW17TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGWPT01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGWPT01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGWPT01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGWPT01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGWTimTimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_SGWTimTimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_SGWTimTimeoutInfo, RTE_CONST) Rte_C_dt_ComM_SGWTimTimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_TCU01TimeoutDTCInfo, RTE_CONST) Rte_C_dt_ComM_TCU01TimeoutDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ComM_TCU01TimeoutInfo, RTE_CONST) Rte_C_dt_ComM_TCU01TimeoutInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCCSTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCCSTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCCSTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCCSTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCMLTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCMLTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCMLTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCMLTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCRMTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCRMTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCRMTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCROPrepdTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROPrepdTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCROPrepdTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCROTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCROTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCROTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCSDTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSDTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCSDTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSDTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCSTTmt, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSTTmt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_BEMRxCSTTmtDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_BEMRxCSTTmtDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempErrLvl1, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl1_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempErrLvl1DTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempErrLvl2, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl2_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempErrLvl2DTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempSnsrErr, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempSnsrErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_DcPortTempSnsrErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_IRMeasDiErr, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasDiErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_IRMeasDiErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasDiErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_IRMeasEnaErr, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasEnaErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_DCChrMgmt_IRMeasEnaErrDTC, RTE_CONST) Rte_C_dt_DCChrMgmt_IRMeasEnaErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_EgyMgmt_EgyMgmtWarnOne, RTE_CONST) Rte_C_dt_EgyMgmt_EgyMgmtWarnOne_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_EgyMgmt_EgyMgmtWarnTwo, RTE_CONST) Rte_C_dt_EgyMgmt_EgyMgmtWarnTwo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_DrvMotTempOvrLamp, RTE_CONST) Rte_C_dt_ErrMgmt_DrvMotTempOvrLamp_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_HvBattTempOvrLamp, RTE_CONST) Rte_C_dt_ErrMgmt_HvBattTempOvrLamp_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_InslaFlt, RTE_CONST) Rte_C_dt_ErrMgmt_InslaFlt_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_TorqCtrlErr, RTE_CONST) Rte_C_dt_ErrMgmt_TorqCtrlErr_0 = {
  FALSE, FALSE, FALSE, 0.0F, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_VCUHVILDTC, RTE_CONST) Rte_C_dt_ErrMgmt_VCUHVILDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ErrMgmt_VehHVIL, RTE_CONST) Rte_C_dt_ErrMgmt_VehHVIL_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_AccrPedlTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_AccrPedlTqOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_AccrPedlTqOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_AccrPedlTqOverFltInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_ActGearCfmFail, RTE_CONST) Rte_C_dt_FctSftyMon_ActGearCfmFail_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_CrpCtrlTqOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_CrpCtrlTqOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_CrpCtrlTqOverFltInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo, RTE_CONST) Rte_C_dt_FctSftyMon_DesVehDecelSpdOverFltDTCInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, RTE_CONST) Rte_C_dt_FctSftyMon_DesVehDecelSpdOverFltInfo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_BMSRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_BMSRlyClsDTCOne, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTCOne_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_BMSRlyClsDTCTwo, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyClsDTCTwo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_BMSRlyOpenDTC, RTE_CONST) Rte_C_dt_HvMgmt_BMSRlyOpenDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_DCDCEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCDCEnaFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_DCDCStopFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCDCStopFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_DCFCRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_DCFCRlyClsDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_MCUClsFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCUClsFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_MCUEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCUEnaFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_MCURdyFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_MCURdyFltDTCOne, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTCOne_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_MCURdyFltDTCTwo, RTE_CONST) Rte_C_dt_HvMgmt_MCURdyFltDTCTwo_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_PreheatPosRlyClsDTC, RTE_CONST) Rte_C_dt_HvMgmt_PreheatPosRlyClsDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_PreheatPosRlyOpenDTC, RTE_CONST) Rte_C_dt_HvMgmt_PreheatPosRlyOpenDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_TCUEnaFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_TCUEnaFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_HvMgmt_TCUStopFltDTC, RTE_CONST) Rte_C_dt_HvMgmt_TCUStopFltDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattChrgIDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattChrgIDcHiDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattIDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattIDcHiDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattSOCLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattSOCLoDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattTempHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattTempHiDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattTempLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattTempLoDTC_0 = {
  0U, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattUDcHiDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattUDcHiDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSBattUDcLoDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSBattUDcLoDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_BSRespErrDTC, RTE_CONST) Rte_C_dt_LvMgmt_BSRespErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_ECUsDiagDTC, RTE_CONST) Rte_C_dt_LvMgmt_ECUsDiagDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_KL15eOffDTC, RTE_CONST) Rte_C_dt_LvMgmt_KL15eOffDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_KL15eOnDTC, RTE_CONST) Rte_C_dt_LvMgmt_KL15eOnDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_LvSysLoUdcDTC, RTE_CONST) Rte_C_dt_LvMgmt_LvSysLoUdcDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_LvMgmt_LvSysOvrUdcDTC, RTE_CONST) Rte_C_dt_LvMgmt_LvSysOvrUdcDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ModMgmt_OnePedlWarnHiSpd, RTE_CONST) Rte_C_dt_ModMgmt_OnePedlWarnHiSpd_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ModMgmt_OnePedlWarnVehFaild, RTE_CONST) Rte_C_dt_ModMgmt_OnePedlWarnVehFaild_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_ModMgmt_SptModWarnLoSOC, RTE_CONST) Rte_C_dt_ModMgmt_SptModWarnLoSOC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_ChassisMgmtInfo, RTE_CONST) Rte_C_dt_Nv_ChassisMgmtInfo_0 = {
  2U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_ChrgEgyCalInfo, RTE_CONST) Rte_C_dt_Nv_ChrgEgyCalInfo_0 = {
  0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_ChrgStatInfo, RTE_CONST) Rte_C_dt_Nv_ChrgStatInfo_0 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_GearMgmtInfo, RTE_CONST) Rte_C_dt_Nv_GearMgmtInfo_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_ModMgmtInfo, RTE_CONST) Rte_C_dt_Nv_ModMgmtInfo_0 = {
  2U, 3U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_Nv_RngEstimnInfo, RTE_CONST) Rte_C_dt_Nv_RngEstimnInfo_0 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_CPStsJmpErr, RTE_CONST) Rte_C_dt_OBCMgmt_CPStsJmpErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_CPStsJmpErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_CPStsJmpErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_ElectcLockClsErr, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockClsErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_ElectcLockClsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockClsErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_ElectcLockOpenErr, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockOpenErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_ElectcLockOpenErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_ElectcLockOpenErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCChrgStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCChrgStsErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCChrgStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCChrgStsErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCDchaStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDchaStsErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCDchaStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDchaStsErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCDiErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDiErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCDiErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCDiErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCInpUDcLoErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCInpUDcLoErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCInpUDcLoErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCInpUDcLoErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCPreheatStsErr, RTE_CONST) Rte_C_dt_OBCMgmt_OBCPreheatStsErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_OBCPreheatStsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_OBCPreheatStsErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_S2SwtClsErr, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtClsErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_S2SwtClsErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtClsErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_S2SwtOpenErr, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtOpenErr_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(dt_OBCMgmt_S2SwtOpenErrDTC, RTE_CONST) Rte_C_dt_OBCMgmt_S2SwtOpenErrDTC_0 = {
  FALSE, 0U, 0U, FALSE
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)


#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num);
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_BswM_ESH_Mode(BswM_ESH_Mode mode); /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Helper functions for mode management
 *********************************************************************************************************************/
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_BswM_ESH_Mode(BswM_ESH_Mode mode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  uint8 ret;

  if (mode == 0U)
  {
    ret = 3U;
  }
  else if (mode == 1U)
  {
    ret = 1U;
  }
  else if (mode == 2U)
  {
    ret = 0U;
  }
  else if (mode == 3U)
  {
    ret = 4U;
  }
  else if (mode == 4U)
  {
    ret = 2U;
  }
  else
  {
    ret = 5U;
  }

  return ret;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

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

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num) /* PRQA S 3408, 1505 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
{
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA)) source; /* PRQA S 0316 */ /* MD_Rte_0316 */
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = (P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR)) destination; /* PRQA S 0316 */ /* MD_Rte_0316 */
  uint32_least i;
  for (i = 0; i < num; i++)
  {
    dst[i] = src[i];
  }
}

#define RTE_MEMCPY32ALIGN (sizeof(uint32) - 1U)

FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num)
{
  P2CONST(uint32, AUTOMATIC, RTE_APPL_DATA) asrc = (P2CONST(uint32, AUTOMATIC, RTE_APPL_DATA)) source; /* PRQA S 0316 */ /* MD_Rte_0316 */
  P2VAR(uint32, AUTOMATIC, RTE_APPL_VAR) adst = (P2VAR(uint32, AUTOMATIC, RTE_APPL_VAR)) destination; /* PRQA S 0316 */ /* MD_Rte_0316 */
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = (P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA)) source; /* PRQA S 0316 */ /* MD_Rte_0316 */
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = (P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR)) destination; /* PRQA S 0316 */ /* MD_Rte_0316 */
  uint32_least i = 0;

  if (num >= 16U)
  {
    if (((((uint32)src) & RTE_MEMCPY32ALIGN) == 0U) && ((((uint32)dst) & RTE_MEMCPY32ALIGN) == 0U)) /* PRQA S 0306 */ /* MD_Rte_0306 */
    {
      uint32_least asize = num / sizeof(uint32);
      uint32_least rem = num & RTE_MEMCPY32ALIGN;
      for (i = 0; i < (asize - 3U); i += 4U)
      {
        adst[i] = asrc[i];
        adst[i+1U] = asrc[i+1U];
        adst[i+2U] = asrc[i+2U];
        adst[i+3U] = asrc[i+3U];
      }

      while (i < asize)
      {
        adst[i] = asrc[i];
        ++i;
      }
      i = num - rem;
    }
    else
    {
      for (i = 0; (i + 15U) < num; i += 16U)
      {
        dst[i] = src[i];
        dst[i+1U] = src[i+1U];
        dst[i+2U] = src[i+2U];
        dst[i+3U] = src[i+3U];
        dst[i+4U] = src[i+4U];
        dst[i+5U] = src[i+5U];
        dst[i+6U] = src[i+6U];
        dst[i+7U] = src[i+7U];
        dst[i+8U] = src[i+8U];
        dst[i+9U] = src[i+9U];
        dst[i+10U] = src[i+10U];
        dst[i+11U] = src[i+11U];
        dst[i+12U] = src[i+12U];
        dst[i+13U] = src[i+13U];
        dst[i+14U] = src[i+14U];
        dst[i+15U] = src[i+15U];
      }
    }

  }
  while (i < num)
  {
    dst[i] = src[i];
    ++i;
  }
}

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num)
{
  P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) dst = (P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT))ptr; /* PRQA S 0316 */ /* MD_Rte_0316 */
  uint32_least i;
  for (i = 0; i < num; i++)
  {
    dst[i] = 0;
  }
}

FUNC(void, RTE_CODE) SchM_Start(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState = RTE_STATE_SCHM_START;
  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState_1 = RTE_STATE_SCHM_START;
  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState_2 = RTE_STATE_SCHM_START;
  }
}

FUNC(void, RTE_CODE) SchM_Init(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* activate the tasks */
    (void)ActivateTask(Core0_Bsw_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState = RTE_STATE_SCHM_INIT;
  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* activate the tasks */
    (void)ActivateTask(Core1_Bsw_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState_1 = RTE_STATE_SCHM_INIT;
  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState_2 = RTE_STATE_SCHM_INIT;
  }
}

FUNC(void, RTE_CODE) SchM_StartTiming(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    SchM_StartTimingCore0(); /* PRQA S 2987 */ /* MD_Rte_2987 */
  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    SchM_StartTimingCore1(); /* PRQA S 2987 */ /* MD_Rte_2987 */
  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    SchM_StartTimingCore2(); /* PRQA S 2987 */ /* MD_Rte_2987 */
  }
}

FUNC(void, RTE_CODE) SchM_StartTimingCore0(void)
{
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_10ms, RTE_MSEC_SystemTimer_Core0(0) + (TickType)1, RTE_MSEC_SystemTimer_Core0(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_20ms, RTE_MSEC_SystemTimer_Core0(0) + (TickType)1, RTE_MSEC_SystemTimer_Core0(20)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_5ms, RTE_MSEC_SystemTimer_Core0(0) + (TickType)1, RTE_MSEC_SystemTimer_Core0(5)); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(void, RTE_CODE) SchM_StartTimingCore1(void)
{
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_EcuM_EcuM_MainFunction, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(10)); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(void, RTE_CODE) SchM_StartTimingCore2(void)
{
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE3_EcuM_EcuM_MainFunction, RTE_MSEC_SystemTimer_Core2(0) + (TickType)1, RTE_MSEC_SystemTimer_Core2(10)); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* activate the tasks */
    (void)ActivateTask(Core0_AswTask); /* PRQA S 3417 */ /* MD_Rte_Os */

    /* activate the alarms used for TimingEvents */
    (void)SetRelAlarm(Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_10ms, RTE_MSEC_SystemTimer_Core0(0) + (TickType)1, RTE_MSEC_SystemTimer_Core0(10)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_500ms, RTE_MSEC_SystemTimer_Core0(0) + (TickType)1, RTE_MSEC_SystemTimer_Core0(500)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_100ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(100)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_10ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(10)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_200ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(200)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_20ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(20)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_50ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(50)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_CtAp_CANHandler_R_CANHandlerInput_Cyclic_1000ms, RTE_SEC_SystemTimer_Core1(0) + (TickType)1, RTE_SEC_SystemTimer_Core1(1)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_CtAp_CANHandler_R_CANHandlerInput_Cyclic_500ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(500)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core1App_SWC_Core1App_SWC_Runnable_10ms, RTE_MSEC_SystemTimer_Core1(0) + (TickType)1, RTE_MSEC_SystemTimer_Core1(10)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
    (void)SetRelAlarm(Rte_Al_TE_Core2App_SWC_Core2App_SWC_Runnable_10ms, RTE_MSEC_SystemTimer_Core2(0) + (TickType)1, RTE_MSEC_SystemTimer_Core2(10)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */

    Rte_StartTiming_InitState = RTE_STATE_INIT;
    Rte_InitState = RTE_STATE_INIT;

  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* activate the tasks */
    (void)ActivateTask(Core1_Asw_Init); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState_1 = RTE_STATE_INIT;

  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* activate the tasks */
    (void)ActivateTask(Core2_Asw_Init); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState_2 = RTE_STATE_INIT;

  }
  return RTE_E_OK;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_StartTiming_InitState = RTE_STATE_UNINIT;
    /* deactivate alarms */
    (void)CancelAlarm(Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_500ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1App_SWC_Core1App_SWC_Runnable_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_100ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_200ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_20ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core1_Bsw_Task_0_50ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_CtAp_CANHandler_R_CANHandlerInput_Cyclic_1000ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_CtAp_CANHandler_R_CANHandlerInput_Cyclic_500ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE_Core2App_SWC_Core2App_SWC_Runnable_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState = RTE_STATE_SCHM_INIT;

  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState_1 = RTE_STATE_SCHM_INIT;

  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState_2 = RTE_STATE_SCHM_INIT;

  }
  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  uint32 id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* deactivate alarms */
    (void)CancelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_20ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)CancelAlarm(Rte_Al_TE2_Core0_Bsw_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState = RTE_STATE_UNINIT;
  }
  if (id == OS_CORE_ID_1) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* deactivate alarms */
    (void)CancelAlarm(Rte_Al_TE2_EcuM_EcuM_MainFunction); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState_1 = RTE_STATE_UNINIT;
  }
  if (id == OS_CORE_ID_2) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    /* deactivate alarms */
    (void)CancelAlarm(Rte_Al_TE3_EcuM_EcuM_MainFunction); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_InitState_2 = RTE_STATE_UNINIT;
  }
}

FUNC(void, RTE_CODE) Rte_InitMemory(void)
{
  uint32 id;
  id = GetCoreID();
  if (id == OS_CORE_ID_0) /* PRQA S 1843 */ /* MD_Rte_Os */
  {
    Rte_InitState = RTE_STATE_UNINIT;
    Rte_StartTiming_InitState = RTE_STATE_UNINIT;
    Rte_InitMemory_SystemApplication_OsCore0();
  }
  else if (id == OS_CORE_ID_1) /* PRQA S 2004, 1843 */ /* MD_MSR_EmptyClause, MD_Rte_Os */
  {
    Rte_InitState_1 = RTE_STATE_UNINIT;
    Rte_InitMemory_SystemApplication_OsCore1();
  }
  else if (id == OS_CORE_ID_2) /* PRQA S 2004, 1843 */ /* MD_MSR_EmptyClause, MD_Rte_Os */
  {
    Rte_InitState_2 = RTE_STATE_UNINIT;
    Rte_InitMemory_SystemApplication_OsCore2();
  }
}


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) SchM_Enter_Adc_KernelData(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_KernelData(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_SrcRegAccess(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_SrcRegAccess(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChEventStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChEventStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelConfigUpdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelConfigUpdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelFreezeResume(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelFreezeResume(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelHWTrigger(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelHWTrigger(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelInitDeinit(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelInitDeinit(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelStartStop(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelStartStop(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_ChannelSwitchBuffer(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_ChannelSwitchBuffer(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_InterruptStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_InterruptStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Dma_MEErrorStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Dma_MEErrorStatus(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_Erase(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_Erase(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_Init(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_Init(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_Main(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_Main(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_ResumeErase(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_ResumeErase(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_UserContentCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_UserContentCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_17_Dmu_Write(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_17_Dmu_Write(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_CcuInterruptHandle(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_CcuInterruptHandle(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_CcuVariableupdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_CcuVariableupdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_EnableNotification(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_EnableNotification(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_EnableWakeup(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_EnableWakeup(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_GtmEnableEdgeCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_GtmEnableEdgeCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_GtmGetDutyCycle(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_GtmGetDutyCycle(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_ResetEdgeCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_ResetEdgeCount(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_17_TimerIp_SetActivationCondition(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_17_TimerIp_SetActivationCondition(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_AtomAgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_AtomAgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_TomTgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_TomTgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_17_GtmCcu6_HandleNotification(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_17_GtmCcu6_HandleNotification(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_17_GtmCcu6_PeriodAndDutyUpdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_17_GtmCcu6_PeriodAndDutyUpdate(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Buffer_Update(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Buffer_Update(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Cancel_Seq(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Cancel_Seq(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_ChannelLock(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_ChannelLock(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI0(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI0(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI1(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI1(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI2(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI2(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI3(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI3(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI4(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI4(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_Queue_Update_QSPI5(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_Queue_Update_QSPI5(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_SyncLock(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts();
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_SyncLock(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts();
}



/**********************************************************************************************************************
 * COM-Callbacks for DataReceivedEvent triggered runnables, inter-ECU client/server communication, for queued com. and for Rx timeout / Rx inv. flag (reset)
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      CCS_OutputCurrent localCCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx, &localCCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx)) = localCCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx, (&Rte_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CCS_OutputVoltage_CCS_OutputVoltage; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx, (&Rte_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx, (&Rte_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CHM_ProtocolVersion_CHM_ProtocolVersion; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx, (&Rte_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CML_OutpuVoltageMax_CML_OutpuVoltageMax; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      uint16 localCML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx, &localCML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx)) = localCML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      uint16 localCML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx, &localCML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx)) = localCML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      uint16 localCML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx, &localCML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx)) = localCML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx, (&Rte_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRM_RecognitionResult_CRM_RecognitionResult; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx, (&Rte_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CRO_ChargerReady_CRO_ChargerReady; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx, (&Rte_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CSD_ChargerNo_CSD_ChargerNo; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx, (&Rte_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CST_AbortAchiveCondition_CST_AbortAchiveCondition; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx, (&Rte_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_CTS_Year_CTS_Year; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx, (&Rte_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_FRC_ComFtonNet_FRC_ComFtonNet; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      FRC_Vl_OV localFRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx, &localFRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx)) = localFRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      FRC_Vl_UV localFRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx, &localFRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx)) = localFRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      IBATT_QUIESCENT_LIN01 localIBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx, &localIBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx)) = localIBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      I_BATT_LIN01 localI_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx, &localI_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx)) = localI_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      I_RANGE_LIN01 localI_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx, &localI_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx)) = localI_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx);
    {
      (void)Com_ReceiveSignal(ComConf_ComSignal_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx, (&Rte_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    }
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_LINHandler_Resp_Error_LIN01_Resp_Error_LIN01; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_YawRate_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_35ce62e9_Rx, &(*(&Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx)).ACU_YawRate); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_YawRateStatus_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a5dd4854_Rx, &(*(&Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx)).ACU_YawRateStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_21944b83_Rx, &(*(&Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx)).Checksum_0F5); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0F5_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_e1f37972_Rx, &(*(&Rte_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx)).MessageCounter_0F5); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_LatA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_0373507d_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).ACU_LatA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_LatAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_5faf7139_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).ACU_LatAStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_LgtA_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_7ce5ad57_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).ACU_LgtA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_LgtAStatus_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8eba5290_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).ACU_LgtAStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_63736e97_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).Checksum_0F6); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0F6_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_a3145c66_Rx, &(*(&Rte_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx)).MessageCounter_0F6); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_CrashOutputSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8aba12b9_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_CrashOutputSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_CrashOutputStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_01645954_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_CrashOutputStsValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_DriverSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a79a099_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_DriverSeatBeltSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_DriverSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2fcd0f16_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_DriverSeatBeltStsValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_DriverWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_53dfaac4_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_DriverWarningLampSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_PassengerAirbagSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4a4cb1e6_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_PassengerAirbagSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_PassengerSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_2c4c3734_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_PassengerSeatBeltSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_PassengerSeatBeltStsValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_96ea6676_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_PassengerSeatBeltStsValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_PassengerSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eb52bcb8_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_PassengerSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_PassengerWarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_eaccbc6f_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_PassengerWarningLampSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_RLSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_231d8b98_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_RLSeatBeltStatusValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_RRSeatBeltStatusValid_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_8ba1e757_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_RRSeatBeltStatusValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_SecondLeftSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_0c298557_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_SecondLeftSeatBeltSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_SecondLeftSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_4d0b3459_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_SecondLeftSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_SecondRightSeatBeltSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3170c946_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_SecondRightSeatBeltSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_SecondRightSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_19211d8e_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_SecondRightSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ACU_WarningLampSts_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c596fcb_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).ACU_WarningLampSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_591da21b_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).Checksum_097); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_097_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_9c6de300_Rx, &(*(&Rte_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx)).MessageCounter_097); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_ACCDA_HandsOFF_Warning_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_cdbbce90_Rx, &(*(&Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx)).ADCU_ACCDA_HandsOFF_Warning); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_ACCDA_SYS_Failure_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_0c0a67d0_Rx, &(*(&Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx)).ADCU_ACCDA_SYS_Failure); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_ACC_Mode_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_4b80afee_Rx, &(*(&Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx)).ADCU_ACC_Mode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_31389c92_Rx, &(*(&Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx)).Checksum_0E0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0E0_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_982cdfbe_Rx, &(*(&Rte_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx)).MessageCounter_0E0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEBReq_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_cfcc0419_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEBReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEBWarningSts_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_ce5fed0e_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEBWarningSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_AWB_Level_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_16b7390a_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_AWB_Level); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_AWB_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_52a850e5_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_AWB_Req); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_Decel_Cmd_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_e2026fd4_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_Decel_Cmd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_Prefill_CMD_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_935b0159_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_Prefill_CMD); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_040d6d85_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_State); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_AEB_Stop_Req_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_edd96c77_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_AEB_Stop_Req); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_FCW_State_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_858628ce_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).ADCU_FCW_State); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_3047b966_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).Checksum_0E2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0E2_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_9953fa4a_Rx, &(*(&Rte_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx)).MessageCounter_0E2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSComfBrkReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b25663d8_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSComfBrkReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSCrlModeReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_589f1c09_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSCrlModeReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSCrlReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_da787726_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSCrlReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSCrlTypReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_25dd00be_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSCrlTypReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSDistanceStop_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_5af9bfc0_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSDistanceStop); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APSMaxSpeedReq_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_afdb21bd_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APSMaxSpeedReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_APS_Stop_Req_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_cd03c7ef_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_APS_Stop_Req); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_Parking_CtrlSts_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c95774a6_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_Parking_CtrlSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_Parking_Mode_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c6e9f3f9_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_Parking_Mode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_TargetGear_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_dbe43087_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).ADCU_TargetGear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_19b3517b_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).Checksum_0E4); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0E4_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_b0a71257_Rx, &(*(&Rte_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx)).MessageCounter_0E4); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_RemoteParkingMode_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_262c752a_Rx, &(*(&Rte_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx)).ADCU_RemoteParkingMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_ADCU_DA_Mode_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_98abcb34_Rx, &(*(&Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx)).ADCU_DA_Mode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_6e918845_Rx, &(*(&Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx)).Checksum_0E6); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0E6_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_a4eb2dfd_Rx, &(*(&Rte_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx)).MessageCounter_0E6); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_APTC_PowerConsumption_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1649be11_Rx, &(*(&Rte_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx)).APTC_PowerConsumption); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_AutoCloseWinFunSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_721cde79_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_AutoCloseWinFunSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_ChrgFlapLockSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_178f84af_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_ChrgFlapLockSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_DomeLampAutoSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_d0321d9a_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_DomeLampAutoSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_DomeLampBrightSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_a496c206_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_DomeLampBrightSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_FLSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_65ab8c1e_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_FLSeatBeltRemindReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_FRSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_4ddb1af9_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_FRSeatBeltRemindReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_FrontWiperModeSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_bc45dbca_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_FrontWiperModeSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_GearTimesSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_f9cf4f13_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_GearTimesSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_KeyNotInCarRemind_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_26929e5b_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_KeyNotInCarRemind); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_PuddleLiReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_e2d97524_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_PuddleLiReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_RLSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_f8ff7457_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_RLSeatBeltRemindReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_RRSeatBeltRemindReq_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_d08fe2b0_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_RRSeatBeltRemindReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_WelLightshowOnOffSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5761d474_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_WelLightshowOnOffSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_WiperServiceSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_00dc1681_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_WiperServiceSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_WiperWorkingSts_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_2776ea8d_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).BCM_WiperWorkingSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_240d647b_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).Checksum_33A); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_33A_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_e46a568a_Rx, &(*(&Rte_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx)).MessageCounter_33A); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_PepsPowerMode_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_db922ead_Rx, &(*(&Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx)).BCM_PepsPowerMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BCM_PowerOffDisplayReq_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_9133ccdf_Rx, &(*(&Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx)).BCM_PowerOffDisplayReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_8423cb57_Rx, &(*(&Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx)).MessageCounter_271); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_checksum_271_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_70f1cf66_Rx, &(*(&Rte_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx)).checksum_271); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatType_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_379fb564_Rx, &(*(&Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx)).BMS_BatType); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_CellNumbers_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_c37ce81e_Rx, &(*(&Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx)).BMS_CellNumbers); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RatBatVoltage_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_f1943e5d_Rx, &(*(&Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx)).BMS_RatBatVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RatCapacity_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_a06c3dfc_Rx, &(*(&Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx)).BMS_RatCapacity); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RatEnergy_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_92d3972c_Rx, &(*(&Rte_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx)).BMS_RatEnergy); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatSupName_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_eaf2f758_Rx, &(*(&Rte_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx)).BMS_BatSupName); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RemainCapacity_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_0c2dc68f_Rx, &(*(&Rte_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx)).BMS_RemainCapacity); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AverageCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_8a0ff926_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_AverageCellTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_f2af76ab_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_MaxCellTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxCellTempNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_34228f51_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_MaxCellTempNO); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MinCellTemp_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_cb26cda9_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_MinCellTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MinCellTempModuleNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_5ad1b821_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_MinCellTempModuleNO); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MinCellTempNO_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_5aa7be5e_Rx, &(*(&Rte_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx)).BMS_MinCellTempNO); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxCellVoltage_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_44643af9_Rx, &(*(&Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx)).BMS_MaxCellVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxCellVoltageModuleNO_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_41af4f62_Rx, &(*(&Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx)).BMS_MaxCellVoltageModuleNO); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxCellVoltageNO_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f7be414b_Rx, &(*(&Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx)).BMS_MaxCellVoltageNO); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MinCellVoltage_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_d5508559_Rx, &(*(&Rte_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx)).BMS_MinCellVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_DCComM_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AllowChagCurrent_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_5bdeed04_Rx, &(*(&Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx)).BMS_AllowChagCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_MaxChagVoltage_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_6cebdb8e_Rx, &(*(&Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx)).BMS_MaxChagVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RemChagTime_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_27af82cf_Rx, &(*(&Rte_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx)).BMS_RemChagTime); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortAchiveSingleVolt_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_b1bd7374_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortAchiveSingleVolt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortAchiveTotalVolt_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_f53da614_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortAchiveTotalVolt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortAchivesetValue_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_efa8b96b_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortAchivesetValue); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortErrorCurrent_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_db5d5e67_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortErrorCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortErrorVoltage_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_445453cb_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortErrorVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortFaultBMSTemp_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_403794ce_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortFaultBMSTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AbortFaultBatteryTemp_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5b6b8a56_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_AbortFaultBatteryTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ChagComplete_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_ea7a6697_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_ChagComplete); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ChargeRequest_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_1918c4e0_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_ChargeRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_DCChgMode_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_6d869dd0_Rx, &(*(&Rte_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx)).BMS_DCChgMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatChagSum_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_acd539d3_Rx, &(*(&Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx)).BMS_BatChagSum); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_SingChgkwh_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_015ce54e_Rx, &(*(&Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx)).BMS_SingChgkwh); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_SumChgkwh_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_483ef743_Rx, &(*(&Rte_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx)).BMS_SumChgkwh); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_NegRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_cb3f998e_Rx, &(*(&Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx)).BMS_NegRelayStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PTCRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_51f2d2bd_Rx, &(*(&Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx)).BMS_PTCRelayStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PTC_VoltageValue_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_01e2b502_Rx, &(*(&Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx)).BMS_PTC_VoltageValue); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PosRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_0aa0be71_Rx, &(*(&Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx)).BMS_PosRelayStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PreRelayStatus_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_51af39b6_Rx, &(*(&Rte_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx)).BMS_PreRelayStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorCellHighTemp_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_99700c48_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorCellHighTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorCellLowTemp_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_c40cc4fe_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorCellLowTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorCellOverVolt_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_5db8e4a2_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorCellOverVolt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorCellUnderVolt_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_56775465_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorCellUnderVolt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorChaCurrentOver_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a2ef7503_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorChaCurrentOver); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorHighSoc_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_73bd0212_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorHighSoc); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorLowSoc_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_b96841e2_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorLowSoc); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorPreChaFailed_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_59a6a965_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorPreChaFailed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorRelay_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_117a9031_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ErrorRelay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ThermalRunawayFault_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_bc9ae26c_Rx, &(*(&Rte_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx)).BMS_ThermalRunawayFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatProDatDay_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_7f9a6bc2_Rx, &(*(&Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx)).BMS_BatProDatDay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatProDatMonth_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_a585932e_Rx, &(*(&Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx)).BMS_BatProDatMonth); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatProDatYear_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_329b6492_Rx, &(*(&Rte_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx)).BMS_BatProDatYear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_AllowCellTemperature_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_696be742_Rx, &(*(&Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx)).BMS_AllowCellTemperature); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_KeepWarmRequest_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1b8e0c34_Rx, &(*(&Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx)).BMS_KeepWarmRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_KeepWarmStatus_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_96e48497_Rx, &(*(&Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx)).BMS_KeepWarmStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RTC_Request_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_dbff15fc_Rx, &(*(&Rte_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx)).BMS_RTC_Request); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BatProRights_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_65b7c251_Rx, &(*(&Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx)).BMS_BatProRights); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ComVersion_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_a6b9c4fe_Rx, &(*(&Rte_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx)).BMS_ComVersion); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BalancingStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_282baecd_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_BalancingStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ChargeStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_79fec82c_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_ChargeStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorIsolationSingleLow_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_b188e9c7_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_ErrorIsolationSingleLow); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ErrorLevel_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_9a0a25e1_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_ErrorLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_HVinterlockState_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_83b45d03_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_HVinterlockState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_InsulationDetectionStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_27ab5dff_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_InsulationDetectionStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PreCharge_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_07564e5b_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_PreCharge); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_RunHeatStatus_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2fcb1018_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_RunHeatStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_SOH_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_1aab6bd4_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_SOH); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_SysRegInsulationValue_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_8d0ccb80_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_SysRegInsulationValue); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_ThrmlRunawayFault_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_72ef69bf_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_ThrmlRunawayFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_WorkMode_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_93c719c8_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).BMS_WorkMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2a2c563b_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).Checksum_0C1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0C1_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_fcc884ab_Rx, &(*(&Rte_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx)).MessageCounter_0C1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BattCurr_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_114279ae_Rx, &(*(&Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx)).BMS_BattCurr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_BattVolt_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_434721f0_Rx, &(*(&Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx)).BMS_BattVolt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_Heatcurrent_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_d7161a8d_Rx, &(*(&Rte_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx)).BMS_Heatcurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_DisplaySOC_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_58348b09_Rx, &(*(&Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx)).BMS_DisplaySOC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_LinkVoltage_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_57ffa044_Rx, &(*(&Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx)).BMS_LinkVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_PackVoltage_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_4cda4f33_Rx, &(*(&Rte_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx)).BMS_PackVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_DisChgCurr_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_9054a7c7_Rx, &(*(&Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx)).BMS_DisChgCurr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_BMS_FeedbackCurr_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_adfb81c2_Rx, &(*(&Rte_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx)).BMS_FeedbackCurr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VehicleState_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_1252b1db_Rx, &(*(&Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx)).CGW_VehicleState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_278_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_d9b09121_Rx, &(*(&Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx)).Checksum_278); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_278_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_19d7a3d0_Rx, &(*(&Rte_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx)).MessageCounter_278); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_ADCUSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_4e5b2421_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_ADCUSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_BCMSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_973cb2b1_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_BCMSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_BMSSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c446f701_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_BMSSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_CBMSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c3f45508_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_CBMSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_CGWSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_f27832b0_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_CGWSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_DCM_FLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_b0fddc0a_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_DCM_FLSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_DCM_FRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_b2caf30f_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_DCM_FRSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_DCM_RLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_ef4d5eca_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_DCM_RLSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_DCM_RRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_ed7a71cf_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_DCM_RRSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_HLLSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9d5cf1eb_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_HLLSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_HLRSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9f6bdeee_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_HLRSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_HOD_HeatingSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_d2f6c570_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_HOD_HeatingSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_IVISts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_f58e06dc_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_IVISts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_MFP_FCSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_6eb7e4ef_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_MFP_FCSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_MFP_RCSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_3107662f_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_MFP_RCSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_PRNDSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_bdb63078_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_PRNDSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_SCU_LSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9ba30c74_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_SCU_LSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_SCU_RSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_99942371_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_SCU_RSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_SGWSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_9f84f3f2_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_SGWSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_SWPSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_1aac9e5f_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_SWPSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_SwichesSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_c378d64a_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_SwichesSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VCUSts_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_d5f4b0ad_Rx, &(*(&Rte_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx)).CGW_VCUSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN0_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_460f82b6_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN1_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_e599aafa_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN2_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_da52d46f_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN3_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_79c4fc23_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN3); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN4_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_a5c42945_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN4); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN5_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_06520109_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN5); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN6_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_39997f9c_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN6); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN7_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_9a0f57d0_Rx, &(*(&Rte_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx)).CGW_VIN7); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN1_SigGroup_SG_CGW_VIN1_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN10_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_40e1447e_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN10); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN11_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_e3776c32_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN11); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN12_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_dcbc12a7_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN12); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN13_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_7f2a3aeb_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN13); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN14_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_a32aef8d_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN14); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN15_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_00bcc7c1_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN15); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN8_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_d13aed08_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN8); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN9_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_72acc544_Rx, &(*(&Rte_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx)).CGW_VIN9); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN2_SigGroup_SG_CGW_VIN2_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VERSION1_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_870615dc_Rx, &(*(&Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx)).CGW_VERSION1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VERSION2_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_c1d420b8_Rx, &(*(&Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx)).CGW_VERSION2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_CGW_VIN16_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_e72a7464_Rx, &(*(&Rte_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx)).CGW_VIN16); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_CGW_VIN3VER_SigGroup_SG_CGW_VIN3VER_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_cce2105d_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).Checksum_28A); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_DoorFLSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_2e6576e2_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_DoorFLSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_FRWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_a982c250_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_FRWndSwA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_LeftMirrorHorizontalPos_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_010d4778_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_LeftMirrorHorizontalPos); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_LeftMirrorVerticalPos_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_5ff4b001_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_LeftMirrorVerticalPos); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_MirrorAutoFoldUnfoldSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_6b867db1_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_MirrorAutoFoldUnfoldSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_MirrorAutoTurnDownSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_da51d0f7_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_MirrorAutoTurnDownSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_MirrorFold_UnfoldSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_fb31c620_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_MirrorFold_UnfoldSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_RLWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_74fa2511_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_RLWndSwA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_RRWndSwA_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_09de1801_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_RRWndSwA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FL_RearmirrorHeatingSts_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_aa058e71_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).DCM_FL_RearmirrorHeatingSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_28A_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_4642a9f0_Rx, &(*(&Rte_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx)).MessageCounter_28A); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FR_AmbientTemperature_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_cadd082e_Rx, &(*(&Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx)).DCM_FR_AmbientTemperature); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FR_AmbientTemperatureValid_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_e90c62bb_Rx, &(*(&Rte_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx)).DCM_FR_AmbientTemperatureValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_FR_DoorFRSts_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_525d6e8b_Rx, &(*(&Rte_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx)).DCM_FR_DoorFRSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_RL_DoorRLSts_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_9ea56f59_Rx, &(*(&Rte_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx)).DCM_RL_DoorRLSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_DCM_RR_DoorRRSts_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c830eb38_Rx, &(*(&Rte_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx)).DCM_RR_DoorRRSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0F0_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1363b82a_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).Checksum_0F0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_ModeChangeEnable_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_151dc1e3_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_ModeChangeEnable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_ModeFb_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_e801e79c_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_ModeFb); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_SteeringGearAngle_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_afb680bd_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_SteeringGearAngle); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_SteeringGearAngleSpd_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1b144f24_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_SteeringGearAngleSpd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_SteeringGearAngleSpdValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_d84ac20b_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_SteeringGearAngleSpdValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_SteeringGearAngleValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_70279b88_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_SteeringGearAngleValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_TorsionBarTorque_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_28eeb08e_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_TorsionBarTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_TorsionBarTorqueValid_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_70e0d0fb_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_TorsionBarTorqueValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EPS_WarningLamp_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_1f264a37_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).EPS_WarningLamp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0F0_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_d613f931_Rx, &(*(&Rte_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx)).MessageCounter_0F0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EVCOM_CompActlCnsmpCur_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_a627e94c_Rx, &(*(&Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx)).EVCOM_CompActlCnsmpCur); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_EVCOM_CompActlPwrCnsmp_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_d741f4fb_Rx, &(*(&Rte_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx)).EVCOM_CompActlPwrCnsmp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ea42d99c_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).Checksum_0B8); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_CddActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_cd634808_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_CddActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_CddAvailable_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_694f6a44_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_CddAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_CddError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_15ba1189_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_CddError); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VehicleStandstill_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5c3fb2c_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_VehicleStandstill); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VehicleStandstill_Valid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_8e482947_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_VehicleStandstill_Valid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VlcActive_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_3fa05f6d_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_VlcActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VlcAvalible_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_5ec40897_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_VlcAvalible); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VlcError_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_b4ad3ada_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_VlcError); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueVLCReq_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_e5232329_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_WLTorqueVLCReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueVLCReqValid_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_d640a38d_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).IBS_WLTorqueVLCReqValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B8_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_20387c24_Rx, &(*(&Rte_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx)).MessageCounter_0B8); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7cf1e80a_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).Checksum_0B7); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APSComfortAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_761e7ded_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APSComfortAvl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APSCrlReqEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_7e0dcab4_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APSCrlReqEcho); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APSEmergenyAvl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_98e19592_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APSEmergenyAvl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APSModeEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b13c14e1_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APSModeEcho); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APSTrqReqActive_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_95892cb5_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APSTrqReqActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_APS_Avl_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_912b9c67_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_APS_Avl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakeTypEcho_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_efa1b54d_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).IBS_BrakeTypEcho); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B7_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_b68b4db2_Rx, &(*(&Rte_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx)).MessageCounter_0B7); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ad2c5ce1_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).Checksum_0B2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakePedalStatus_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_c14952d9_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).IBS_BrakePedalStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakePedalStatusValid_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_ba3a564c_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).IBS_BrakePedalStatusValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakePushrodStroke_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b9911368_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).IBS_BrakePushrodStroke); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_MasterCylinderPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b339468a_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).IBS_MasterCylinderPressure); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_PlungerPressure_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_1a29f19b_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).IBS_PlungerPressure); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B2_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_7bc88e71_Rx, &(*(&Rte_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx)).MessageCounter_0B2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a2ce7b09_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).Checksum_0B3); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AEBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_27fddc4e_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_AEBActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AEBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_586c329d_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_AEBAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AVHAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_e9505f9e_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_AVHAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AWBActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_47745887_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_AWBActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AWBAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_0d99f9f9_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_AWBAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakeLightRequest_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a14297cf_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_BrakeLightRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBControllerSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_65ed44e8_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_EPBControllerSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBFailureLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_94ade1a4_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_EPBFailureLamp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBFunctionLamp_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_947116d4_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_EPBFunctionLamp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBworkingSts_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_fc06f35e_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_EPBworkingSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HDCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_deb691a6_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_HDCAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HHCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_f453be85_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_HHCActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HHCAvailable_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a333cc25_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_HHCAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HazWarnReq_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b191eb63_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_HazWarnReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TCSActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_a64ac2d8_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_TCSActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VDCActive_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_7ab0d9f3_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).IBS_VDCActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B3_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_742aa999_Rx, &(*(&Rte_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx)).MessageCounter_0B3); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_47252d94_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).Checksum_0B4); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ABPActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_9a3de825_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_ABPActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ABPAvailable_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_7eb6cd8c_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_ABPAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ABSActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_bc82dc5c_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_ABSActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ABSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1bd8c058_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_ABSFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_DTCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_632f33ac_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_DTCFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EBDActive_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_1e24a445_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_EBDActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EBDFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_dad1ab7b_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_EBDFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBTextdisplay_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_e8354645_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_EPBTextdisplay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_SystemStatus_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_306130d0_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_SystemStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TCSFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2d90687a_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_TCSFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VCU_DecelerationRequest_Available_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_227d55b1_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_VCU_DecelerationRequest_Available); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VDCFault_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_01868c54_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_VDCFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VehicleSpeed_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_5ce10c83_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_VehicleSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VehicleSpeedValid_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_317a0a26_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).IBS_VehicleSpeedValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B4_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_91c1ff04_Rx, &(*(&Rte_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx)).MessageCounter_0B4); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_77cd2b4a_Rx, &(*(&Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx)).Checksum_0BA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_CDPActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_5f0477e0_Rx, &(*(&Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx)).IBS_CDPActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_CDPAvailable_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_551f17a8_Rx, &(*(&Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx)).IBS_CDPAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_DTCActive_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_05637011_Rx, &(*(&Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx)).IBS_DTCActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0BA_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_a129f9da_Rx, &(*(&Rte_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx)).MessageCounter_0BA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_d02c6941_Rx, &(*(&Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx)).Checksum_0BB); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_SUBEPBControllerSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_4db2fa5a_Rx, &(*(&Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx)).IBS_SUBEPBControllerSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_SUBEPBFailureStatus_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_85549b8d_Rx, &(*(&Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx)).IBS_SUBEPBFailureStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_SUBEPBworkingSts_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_6b861b0d_Rx, &(*(&Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx)).IBS_SUBEPBworkingSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0BB_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_06c8bbd1_Rx, &(*(&Rte_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx)).MessageCounter_0BB); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e0933738_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).Checksum_0BC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_AVHSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e3018ac7_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_AVHSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_BrakeFluidWarning_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cf3bf9da_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_BrakeFluidWarning); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_EPBFailureStatus_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_2591769d_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_EPBFailureStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ESCOffSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_a7e250e7_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_ESCOffSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_ESClampdisplay_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_cffaf18c_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_ESClampdisplay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FactoryMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_1f4b8984_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_FactoryMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HBAActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3e0fd61_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_HBAActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_HDCSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d0313153_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_HDCSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_MaintenaceMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_e1932fbc_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_MaintenaceMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RWUActive_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_353ab732_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_RWUActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RWUAvailable_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_55a4e82d_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_RWUAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RollerbenchMode_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7e2deccc_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_RollerbenchMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TPMS_ResetSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ee7e0532_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TPMS_ResetSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TireMonSysSts_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_91ee3722_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TireMonSysSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TireWarnFrntLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7fea0ce4_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TireWarnFrntLe); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TireWarnFrntRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_dbb01a62_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TireWarnFrntRi); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TireWarnReLe_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_6e5db930_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TireWarnReLe); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TireWarnReRi_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_ca07afb6_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).IBS_TireWarnReRi); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0BC_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_3677e5a8_Rx, &(*(&Rte_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx)).MessageCounter_0BC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_c0d26283_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).Checksum_0B9); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RBSStatus_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dc8e16c0_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_RBSStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_TargetGearReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_35085f4b_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_TargetGearReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_VCU_DecelerationReqActive_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5138c66a_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_VCU_DecelerationReqActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueAPSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_1036d2a9_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_WLTorqueAPSReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueAPSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_406d9ee6_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_WLTorqueAPSReqValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueRBSReq_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_dae1e9b7_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_WLTorqueRBSReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueRBSReqValid_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_0144d4d4_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).IBS_WLTorqueRBSReqValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B9_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_683f1d6f_Rx, &(*(&Rte_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx)).MessageCounter_0B9); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_b5095e35_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).Checksum_090); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueIncrReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_6e9d7a41_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).IBS_WLTorqueIncrReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueIncrReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_f80f3ab5_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).IBS_WLTorqueIncrReqSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueRedReq_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_79bc7664_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).IBS_WLTorqueRedReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_WLTorqueRedReqSts_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_2655e1fb_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).IBS_WLTorqueRedReqSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_090_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_db5c1277_Rx, &(*(&Rte_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx)).MessageCounter_090); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_efb220b2_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).Checksum_0B0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FLMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_0e538d73_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FLMovingDirection); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FLWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_9718fa24_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FLWheelPulseCounter); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FLWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_d228a055_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FLWheelSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FLWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_19d76bef_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FLWheelSpeed_Fault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FRMovingDirection_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_be7c8b57_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FRMovingDirection); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FRWheelPulseCounter_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_8f930e98_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FRWheelPulseCounter); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FRWheelSpeed_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_7a94cc9a_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FRWheelSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_FRWheelSpeed_Fault_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_2564a038_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).IBS_FRWheelSpeed_Fault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B0_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_895d6141_Rx, &(*(&Rte_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx)).MessageCounter_0B0); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_65c4b71d_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).Checksum_0B1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RLMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_ad5dc1f0_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RLMovingDirection); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RLWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_296e9e60_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RLWheelPulseCounter); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RLWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_5459dc3a_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RLWheelSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RLWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_82f6f2de_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RLWheelSpeed_Fault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RRMovingDirection_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_1d72c7d4_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RRMovingDirection); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RRWheelPulseCounter_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_31e56adc_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RRWheelPulseCounter); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RRWheelSpeed_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_fce5b0f5_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RRWheelSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IBS_RRWheelSpeed_Fault_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_be453909_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).IBS_RRWheelSpeed_Fault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0B1_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_032bf6ee_Rx, &(*(&Rte_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx)).MessageCounter_0B1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_GearRequest_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_3ae0554e_Rx, &(*(&Rte_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx)).IVI_GearRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_77cc8260_Rx, &(*(&Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx)).Checksum_0F9); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_BulbCheckSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_ac8ee3d9_Rx, &(*(&Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx)).IVI_BulbCheckSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_SFIDippedBeamSet_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_23dcee29_Rx, &(*(&Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx)).IVI_SFIDippedBeamSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_SFIabnormalSts_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_fd225a73_Rx, &(*(&Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx)).IVI_SFIabnormalSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_0F9_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_b7abb091_Rx, &(*(&Rte_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx)).MessageCounter_0F9); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_OdometerInfor_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_e6e371ee_Rx, &(*(&Rte_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx)).IVI_OdometerInfor); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3d12a66a_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).Checksum_098); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_ActTrqValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_ac2cd648_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_ActTrqValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_ActualSpeed_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_528eb860_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_ActualSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_ActualSpeedValid_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_cc3b4560_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_ActualSpeedValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_ActualTorque_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_6a6087a3_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_ActualTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_IsCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3f405105_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_IsCurr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_UdcCurr_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_c9f788aa_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MCU_UdcCurr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_098_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_fd75949b_Rx, &(*(&Rte_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx)).MessageCounter_098); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_BDmpCActv_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c0586eb8_Rx, &(*(&Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx)).MCU_BDmpCActv); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_VCUWorkMode_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2a117a8b_Rx, &(*(&Rte_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx)).MCU_VCUWorkMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_TrqAbsMax_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_e9a1ec48_Rx, &(*(&Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx)).MCU_TrqAbsMax); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_TrqAbsMin_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_84a8e353_Rx, &(*(&Rte_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx)).MCU_TrqAbsMin); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_81801456_Rx, &(*(&Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx)).Checksum_253); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_FaultLevel_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf7f5830_Rx, &(*(&Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx)).MCU_FaultLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_253_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_981cfb50_Rx, &(*(&Rte_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx)).MessageCounter_253); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_IGBTTempMax_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_2c994d0d_Rx, &(*(&Rte_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx)).MCU_IGBTTempMax); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_01_SigGroup_SG_MCU_Temperature_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MCU_TempStatus_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_ccf76e7e_Rx, &(*(&Rte_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx)).MCU_TempStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCDC_HVInputCurrent_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_135e2f35_Rx, &(*(&Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx)).POD_DCDC_HVInputCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCDC_HVInputVoltage_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_9c7a540a_Rx, &(*(&Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx)).POD_DCDC_HVInputVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCDC_WorkMode_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_444a4f6b_Rx, &(*(&Rte_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx)).POD_DCDC_WorkMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCDC_FaultLevel_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_eefe3afb_Rx, &(*(&Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx)).POD_DCDC_FaultLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCDC_Side2Overtempfault_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_52f42506_Rx, &(*(&Rte_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx)).POD_DCDC_Side2Overtempfault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_CCCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_19f9b4da_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_CCCurrentLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_CCStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_6df4ee5e_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_CCStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_CPCurrentLimit_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_53d381d9_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_CPCurrentLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_CPDuty_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_602b732e_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_CPDuty); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_CPStatus_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d6c8ee40_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_CPStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_ChargCapacibility_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_1bd7c0f0_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_ChargCapacibility); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_EMLockState_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4eb1f977_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_EMLockState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_OBCMaxPermOutpCrrt_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_27da1158_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_OBCMaxPermOutpCrrt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_S2State_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_d46756d3_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_S2State); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_WorkMode_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_206572d6_Rx, &(*(&Rte_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx)).POD_OBC_WorkMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_ChrgOutpPwrAvl_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_a1981126_Rx, &(*(&Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx)).POD_OBC_ChrgOutpPwrAvl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_OutputDCChargeCurrent_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_9a885370_Rx, &(*(&Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx)).POD_OBC_OutputDCChargeCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_OutputDCChargeVoltage_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_249f5302_Rx, &(*(&Rte_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx)).POD_OBC_OutputDCChargeVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_FaultLevel_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_dfddb20c_Rx, &(*(&Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx)).POD_OBC_FaultLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_PrimarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_315b5171_Rx, &(*(&Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx)).POD_OBC_PrimarySideTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_SecondarySideTemp_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6ad0dc35_Rx, &(*(&Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx)).POD_OBC_SecondarySideTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_Side1Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_180c8c7c_Rx, &(*(&Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx)).POD_OBC_Side1Overtempfault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_Side2Overtempfault_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_54bfa6d5_Rx, &(*(&Rte_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx)).POD_OBC_Side2Overtempfault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACCurrent_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6a93fe10_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACCurrent_R); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACCurrent_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6b3657a6_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACCurrent_S); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACCurrent_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_6f4e0ba4_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACCurrent_T); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACVoltage_R_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_779a5b73_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACVoltage_R); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACVoltage_S_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_763ff2c5_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACVoltage_S); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_OBC_InputACVoltage_T_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_7247aec7_Rx, &(*(&Rte_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx)).POD_OBC_InputACVoltage_T); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCFCVoltage_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_b89acdd0_Rx, &(*(&Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx)).POD_DCFCVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCInletTempA_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3fbc48fa_Rx, &(*(&Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx)).POD_DCInletTempA); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCInletTempB_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_689e64a8_Rx, &(*(&Rte_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx)).POD_DCInletTempB); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCPortInletTempAValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_bbc9cc4c_Rx, &(*(&Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx)).POD_DCPortInletTempAValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCPortInletTempBValid_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_ddcd197c_Rx, &(*(&Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx)).POD_DCPortInletTempBValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_POD_DCPosRelayState_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_6f150a52_Rx, &(*(&Rte_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx)).POD_DCPosRelayState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_Checksum_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2169404d_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).Checksum_248); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_MessageCounter_248_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_7249f622_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).MessageCounter_248); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_PRND_Pbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_2bc3bb96_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).PRND_Pbutton); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_PRND_Pbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_748786ed_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).PRND_Pbutton_FaultSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_PRND_RNDbutton_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_400cef5e_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).PRND_RNDbutton); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_PRND_RNDbutton_FaultSts_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_fe92ca7a_Rx, &(*(&Rte_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx)).PRND_RNDbutton_FaultSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_PRND_SigGroup_SG_PRND_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_AppointChargeCmd_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_cf3a83f6_Rx, &(*(&Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx)).SGW_AppointChargeCmd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_ChargeFormSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3f92bd57_Rx, &(*(&Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx)).SGW_ChargeFormSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_DschrgOnOffSet_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_a0a977dd_Rx, &(*(&Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx)).SGW_DschrgOnOffSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_LockACPlug_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_5ade64ae_Rx, &(*(&Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx)).SGW_LockACPlug); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimingChargeSwitchStatus_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_83e61a6c_Rx, &(*(&Rte_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx)).SGW_TimingChargeSwitchStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_RemoteHVCtrlReq_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_17e2f736_Rx, &(*(&Rte_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx)).SGW_RemoteHVCtrlReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_VrState_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_518f75b6_Rx, &(*(&Rte_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx)).IVI_VrState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_BLESystemReadyReq_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_359ce2fd_Rx, &(*(&Rte_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx)).SGW_BLESystemReadyReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TripCounter_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1cad6227_Rx, &(*(&Rte_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx)).SGW_TripCounter); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_BrakeCompensateCmd_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_49b5a1e8_Rx, &(*(&Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx)).IVI_BrakeCompensateCmd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_CRLevelSet_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_8543222f_Rx, &(*(&Rte_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx)).IVI_CRLevelSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_AppointChargeCmd_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8c65f5f8_Rx, &(*(&Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx)).IVI_AppointChargeCmd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_ForwardVmaxlimitSw_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_8d0f6899_Rx, &(*(&Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx)).IVI_ForwardVmaxlimitSw); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_LV_LimitPop_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_1112ab7d_Rx, &(*(&Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx)).IVI_LV_LimitPop); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_LockACPlug_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_01b87dfd_Rx, &(*(&Rte_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx)).IVI_LockACPlug); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoDay_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_880a47df_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoDay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoHour_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_bc8cc791_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoHour); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoMinute_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_107045bf_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoMinute); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoMonth_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0acdad62_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoMonth); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoSecond_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_ed2116e5_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoSecond); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeInfoYear_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_76136356_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeInfoYear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_SGW_TimeValid_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_4cd83a01_Rx, &(*(&Rte_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx)).SGW_TimeValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_DriveModeSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e3273eed_Rx, &(*(&Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx)).IVI_DriveModeSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_DschrgOnOffSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_21f6b725_Rx, &(*(&Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx)).IVI_DschrgOnOffSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_ForwardVmaxAllowed_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_13b9eae3_Rx, &(*(&Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx)).IVI_ForwardVmaxAllowed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_MaxChrgSocSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_99c3e2a8_Rx, &(*(&Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx)).IVI_MaxChrgSocSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_IVI_V2LidisSet_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_25a8a73a_Rx, &(*(&Rte_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx)).IVI_V2LidisSet); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_HVPwrState_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_8d7d29e0_Rx, &(*(&Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx)).TCU_HVPwrState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_TMSFaultLevel_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_0e521934_Rx, &(*(&Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx)).TCU_TMSFaultLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_TMSTotalPwrCnsmp_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_9dde2d90_Rx, &(*(&Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx)).TCU_TMSTotalPwrCnsmp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_TMSTotoalPwrReq_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_247c22c3_Rx, &(*(&Rte_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx)).TCU_TMSTotoalPwrReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx);
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_HVCHHVDCCurrent_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_400bea9a_Rx, &(*(&Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx)).TCU_HVCHHVDCCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_TCU_HVCHHighVoltage_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3d196c75_Rx, &(*(&Rte_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx)).TCU_HVCHHighVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup_Sender = !Rte_SystemApplication_OsCore1_RxUpdateFlags.Rte_RxUpdate_CtAp_CANHandler_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup; /* PRQA S 4116, 4404, 4558 */ /* MD_Rte_4116, MD_MSR_AutosarBoolean, MD_MSR_AutosarBoolean */
    (void)ReleaseSpinlock(Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx);
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      SOC_LIN01 localSOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx, &localSOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx)) = localSOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      SOF_V1_LIN01 localSOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx, &localSOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx)) = localSOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      SOF_V2_LIN01 localSOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx, &localSOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx)) = localSOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      SOH_LIN01 localSOH_oBS_02_oATOM_HWLIN1_022d471e_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx, &localSOH_oBS_02_oATOM_HWLIN1_022d471e_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx)) = localSOH_oBS_02_oATOM_HWLIN1_022d471e_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      T_BATT_LIN01 localT_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx, &localT_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx)) = localT_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    {
      U_BATT_LIN01 localU_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx;
      (void)Com_ReceiveSignal(ComConf_ComSignal_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx, &localU_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx); /* PRQA S 0315 */ /* MD_Rte_0315 */
      *((&Rte_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx)) = localU_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx;
    }
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */


/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/
FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void)
{
  uint8 updateAction;
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx, (&Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_0)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_55d19f8e_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_Current); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_Current_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_6a8ce61f_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_Current); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_34765b89_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_IBSBatSOC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_IBSBatSOC_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0b2b2218_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_IBSBatSOC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_0d3265cb_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_IndicatorSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_IndicatorSts_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_326f1c5a_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_IndicatorSts); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_41d6d523_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_LV_Batt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_LV_Batt_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_7e8bacb2_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_BS_LV_Batt); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_091aaa11_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_WakeUpStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_WakeUpStatus_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_3647d380_Tx, &(*(&Rte_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx)).VCU_WakeUpStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_02_SigGroup_oVCU_02_oATOM_CAN_Matrix_PT_V600_20250211_109f7195_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BrakeCompensateStatus_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_aada4313_Tx, &(*(&Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx)).VCU_BrakeCompensateStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeProcessComment_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_b076f405_Tx, &(*(&Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx)).VCU_ChargeProcessComment); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DCFCCurrent_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_54508868_Tx, &(*(&Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx)).VCU_DCFCCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_EnergyV2L_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_5ef6f2f0_Tx, &(*(&Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx)).VCU_EnergyV2L); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MemoryChargeFault_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_cb765ea4_Tx, &(*(&Rte_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx)).VCU_MemoryChargeFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ForwardVmaxlimitStatus_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_beba9b73_Tx, &(*(&Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx)).VCU_ForwardVmaxlimitStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ManuallyUnlockComment_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_3223f100_Tx, &(*(&Rte_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx)).VCU_ManuallyUnlockComment); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MaximumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_fe0b8d7d_Tx, &(*(&Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx)).VCU_MaximumOutputCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MaximumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_9c0bf641_Tx, &(*(&Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx)).VCU_MaximumOutputVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MinimumOutputCurrent_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6eda15dd_Tx, &(*(&Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx)).VCU_MinimumOutputCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MinimumOutputVoltage_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_0cda6ee1_Tx, &(*(&Rte_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx)).VCU_MinimumOutputVoltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeEnergy_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aa509ad7_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_ChargeEnergy); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeTime_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_b03563a4_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_ChargeTime); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DisChgPowerLimit_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_aae83d58_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_DisChgPowerLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DisplayMileage_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_1f4b707e_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_DisplayMileage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUPower_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_5ed6e72f_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_MCUPower); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_PermitPackPTC_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_8f94a915_Tx, &(*(&Rte_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx)).VCU_PermitPackPTC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_51727e14_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).Checksum_0D2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_6e2f0785_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).Checksum_0D2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_630306b4_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).MessageCounter_0D2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_0D2_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_5c5e7f25_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).MessageCounter_0D2); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_f84e7cef_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_AccelerationPedal); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_AccelerationPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_c713057e_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_AccelerationPedal); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_365d9f08_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_AccelerationPedalValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_AccelerationPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0900e699_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_AccelerationPedalValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4a2bfea4_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_EPBReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_EPBReq_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_75768735_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_EPBReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_17d4134b_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_Kickdown); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Kickdown_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_28896ada_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_Kickdown); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d928d8b4_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_TargetGear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TargetGear_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e675a125_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_TargetGear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_a1329f5d_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VLCTorqueRequestActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VLCTorqueRequestActive_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_9e6fe6cc_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VLCTorqueRequestActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_d00cfa4f_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VLCTorqueRequestAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VLCTorqueRequestAvailable_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_ef5183de_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VLCTorqueRequestAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_da00c229_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VehicleSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VehicleSpeed_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_e55dbbb8_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VehicleSpeed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_70135d30_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VehicleSpeedValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VehicleSpeedValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_4f4e24a1_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VehicleSpeedValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_03ae7390_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VirtualACPedal); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VirtualACPedal_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_3cf30a01_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VirtualACPedal); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_4b161096_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VirtualACPedalValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VirtualACPedalValid_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_744b6907_Tx, &(*(&Rte_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx)).VCU_VirtualACPedalValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_950dd51c_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c848143c_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).Checksum_0D1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f7156dad_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).Checksum_0D1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_0232b184_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).MessageCounter_0D1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_0D1_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_3d6fc815_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).MessageCounter_0D1); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_c1c6ace2_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_ActDriveMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ActDriveMode_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_fe9bd573_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_ActDriveMode); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9ec34af1_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_BMSTargetThermLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BMSTargetThermLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_a19e3360_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_BMSTargetThermLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_cab9d256_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_BMS_Control_of_PosRelay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BMS_Control_of_PosRelay_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_f5e4abc7_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_BMS_Control_of_PosRelay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_17f7901d_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_ChargeStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_28aae98c_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_ChargeStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8a817be7_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_DrvModSwitchWarn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DrvModSwitchWarn_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_b5dc0276_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_DrvModSwitchWarn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_aebb67ba_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_HVStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVStatus_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_91e61e2b_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_HVStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d7a76412_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_IsoMeasurementSwitch); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_IsoMeasurementSwitch_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_e8fa1d83_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_IsoMeasurementSwitch); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_944086eb_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_LimitLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_LimitLevel_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_ab1dff7a_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_LimitLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_b28083e9_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RegenBrakeLightReqVld); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenBrakeLightReqVld_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_8dddfa78_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RegenBrakeLightReqVld); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_9537c5ed_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RegenBrakeLightRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenBrakeLightRequest_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_aa6abc7c_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RegenBrakeLightRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_a3197c92_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RequestedModeBMS); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeBMS_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_9c440503_Tx, &(*(&Rte_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx)).VCU_RequestedModeBMS); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_ed2292a1_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_090e4c9b_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).Checksum_0D3); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_0D3_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f9d73b0d_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).MessageCounter_0D3); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ADASOverride_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_0c002a43_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_ADASOverride); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_APSTorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_c8f21b10_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_APSTorqueRequestActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_APSTorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8298a57a_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_APSTorqueRequestAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BrakeCompensateWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_8427f667_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_BrakeCompensateWarn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DecelerationReq_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22f1bc0a_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_DecelerationReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DecelerationReqactive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_29147867_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_DecelerationReqactive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DriverTorqueRequest_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_f98385dc_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_DriverTorqueRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_EnergyManagementWarn_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_4b7de956_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_EnergyManagementWarn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegStatus_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_6d4e3983_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_RegStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenTorqueCap_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_a5a4bebf_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_RegenTorqueCap); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RegenTorqueCapValid_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_5eaff4d8_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_RegenTorqueCapValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TorqueRequestActive_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_24abcc5b_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_TorqueRequestActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TorqueRequestAvailable_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_22997d3f_Tx, &(*(&Rte_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx)).VCU_TorqueRequestAvailable); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DCDCPowerLimit_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_90ed45f3_Tx, &(*(&Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx)).VCU_DCDCPowerLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeDCDC_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c910d2b3_Tx, &(*(&Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx)).VCU_RequestedModeDCDC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_VoltageDemandLV_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_9951a04f_Tx, &(*(&Rte_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx)).VCU_VoltageDemandLV); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_7e8714d3_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).Checksum_317); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_317_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_18685520_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).MessageCounter_317); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_CriSysFailure_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_13fa69e3_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_CriSysFailure); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DCDCFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_8211651e_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_DCDCFail); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DriveMotOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_2b850699_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_DriveMotOvrTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVBatCriFail_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_05faf04f_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_HVBatCriFail); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVBatOvrTemp_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1ab841cc_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_HVBatOvrTemp); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVILError_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f1e2e871_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_HVILError); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVInsulResFault_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_e6836204_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_HVInsulResFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_InvldGearSel_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_773f11d0_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_InvldGearSel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_LimpHome_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_664ff33a_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_LimpHome); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MileagelowRemind_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_1b14b376_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_MileagelowRemind); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_PlugStatus_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_250fa71e_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_PlugStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ReachLimitStd_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_5cd2e319_Tx, &(*(&Rte_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx)).VCU_ReachLimitStd); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_fc013b78_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).Checksum_318); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_c35c42e9_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).Checksum_318); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_9aee7a8b_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).MessageCounter_318); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_318_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_a5b3031a_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).MessageCounter_318); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_a47f7a1f_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_DischargeEndSoc); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DischargeEndSoc_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_9b22038e_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_DischargeEndSoc); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_629aba80_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_Display_Cur); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Display_Cur_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5dc7c311_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_Display_Cur); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_1364d55f_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_Display_Power); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Display_Power_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_2c39acce_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_Display_Power); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_631e19bb_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_ForwardVmaxAllowed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ForwardVmaxAllowed_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_5c43602a_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_ForwardVmaxAllowed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b94ce354_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_MCU_FaultLampReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCU_FaultLampReq_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_86119ac5_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_MCU_FaultLampReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_3baa5f6f_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_SystemReady); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_SystemReady_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_04f726fe_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_SystemReady); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b7e91aff_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_maxChargeSOC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_maxChargeSOC_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_88b4636e_Tx, &(*(&Rte_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx)).VCU_maxChargeSOC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_86577563_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_HCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_6f1b1ed0_Tx, &(*(&Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx)).VCU_BS_HCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BS_QuiescentCurrent_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_2f6b45d6_Tx, &(*(&Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx)).VCU_BS_QuiescentCurrent); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Display_voltage_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_1f4e8320_Tx, &(*(&Rte_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx)).VCU_Display_voltage); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_28a707e9_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).Checksum_094); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_094_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_804a7805_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).MessageCounter_094); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MotorActualTorque_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_90c1c989_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).VCU_MotorActualTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MotorActualTorqueValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_2709c7ef_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).VCU_MotorActualTorqueValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_OPStandstillReq_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_af773c24_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).VCU_OPStandstillReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_WheelTrqACT_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_722027bb_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).VCU_WheelTrqACT); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_WheelTrqACTValid_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_0e2031fb_Tx, &(*(&Rte_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx)).VCU_WheelTrqACTValid); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUActHeatPwr_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_420c1833_Tx, &(*(&Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx)).VCU_MCUActHeatPwr); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MaxSpdLimit_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_1d67c298_Tx, &(*(&Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx)).VCU_MaxSpdLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MotorSpdReq_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_c5c80260_Tx, &(*(&Rte_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx)).VCU_MotorSpdReq); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_004b6de5_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).Checksum_095); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_Checksum_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_3f161474_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).Checksum_095); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a8a61209_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).MessageCounter_095); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_MessageCounter_095_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_97fb6b98_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).MessageCounter_095); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_adcf3745_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_ActualGear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ActualGear_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_92924ed4_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_ActualGear); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f285ec19_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_BrakepedalStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_BrakepedalStatus_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_cdd89588_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_BrakepedalStatus); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_2306d930_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_KL15eOn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_KL15eOn_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_1c5ba0a1_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_KL15eOn); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_a07350bb_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_MCUDesiredTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUDesiredTorque_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_9f2e292a_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_MCUDesiredTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4b3e55ae_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_MCUSurgeDamperState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MCUSurgeDamperState_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_74632c3f_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_MCUSurgeDamperState); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_4725a26e_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_PWTErrorLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_PWTErrorLevel_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_7878dbff_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_PWTErrorLevel); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_97cf52ed_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_RequestedModeMCU); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeMCU_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a8922b7c_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_RequestedModeMCU); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_f7e15433_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_TCSActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TCSActive_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_c8bc2da2_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_TCSActive); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_86f61526_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_TrqThresholdDampgCtl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TrqThresholdDampgCtl_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_b9ab6cb7_Tx, &(*(&Rte_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx)).VCU_TrqThresholdDampgCtl); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_ff58040a_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_CreepTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7425dee6_Tx, &(*(&Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx)).VCU_CreepTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MaxTorqueGradient_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_2927c5de_Tx, &(*(&Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx)).VCU_MaxTorqueGradient); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MaxTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_3a034e45_Tx, &(*(&Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx)).VCU_MaxTorqueLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_MinTorqueLimit_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d434a6d2_Tx, &(*(&Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx)).VCU_MinTorqueLimit); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_SpdLimitActTorque_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_6de9d8ce_Tx, &(*(&Rte_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx)).VCU_SpdLimitActTorque); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_EnableOBC_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_316adab0_Tx, &(*(&Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx)).VCU_EnableOBC); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_Enable_DC_Relay_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_187d15ec_Tx, &(*(&Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx)).VCU_Enable_DC_Relay); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_OBC_ChargeCurrentCommand_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_afae32a2_Tx, &(*(&Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx)).VCU_OBC_ChargeCurrentCommand); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_OBC_Control_of_S2_SW_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_2bbcc657_Tx, &(*(&Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx)).VCU_OBC_Control_of_S2_SW); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_OBC_Control_of_em_lock_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_476ced65_Tx, &(*(&Rte_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx)).VCU_OBC_Control_of_em_lock); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_ChargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_86604033_Tx, &(*(&Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx)).VCU_ChargeEndReason); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_DischargeEndReason_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_a9c41ef6_Tx, &(*(&Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx)).VCU_DischargeEndReason); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_HVConnectFault_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_ad3614da_Tx, &(*(&Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx)).VCU_HVConnectFault); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RemainChrgTime_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_deed3006_Tx, &(*(&Rte_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx)).VCU_RemainChrgTime); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_SynRequest_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_c64837e4_Tx, &(*(&Rte_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx)).VCU_SynRequest); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_SynReq_01_SigGroup_SG_VCU_SynReq_01_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx);
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_RequestedModeTCU_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_ea14d901_Tx, &(*(&Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx)).VCU_RequestedModeTCU); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_VCU_TCUPowerAllowed_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_0cf367b9_Tx, &(*(&Rte_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx)).VCU_TCUPowerAllowed); /* PRQA S 0315 */ /* MD_Rte_0315 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_CANHandler_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx, (&Rte_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_ChargeMode_BCL_ChargeMode;
    (void)ReleaseSpinlock(Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    uint16 dataSiguint16;
    (void)GetSpinlock(Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx);
    dataSiguint16 = (uint16)((*(&Rte_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx) * 10.0F) + (4000.0F)); /* RteAnalyzer(DataConversion) */ /* PRQA S 4395, 2983 */ /* MD_Rte_4395, MD_Rte_2983 */
    (void)Com_SendSignal(ComConf_ComSignal_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx, &(dataSiguint16)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_CurrentRequire_BCL_CurrentRequire;
    (void)ReleaseSpinlock(Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx, (&Rte_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCL_VolltageRequire_BCL_VolltageRequire;
    (void)ReleaseSpinlock(Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx, (&Rte_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx, (&Rte_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_AllowTempMax_BCP_AllowTempMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx, (&Rte_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx, (&Rte_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx, (&Rte_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx, (&Rte_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCP_SOC_BCP_SOC;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx, (&Rte_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCP_SOC_BCP_SOC;
    (void)ReleaseSpinlock(Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx, (&Rte_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMax_BCS_BatteryVoltMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx, (&Rte_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx, (&Rte_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx, (&Rte_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx, (&Rte_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BCS_SOC_BCS_SOC;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx, (&Rte_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BCS_SOC_BCS_SOC;
    (void)ReleaseSpinlock(Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx, (&Rte_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx, (&Rte_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx, (&Rte_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx, (&Rte_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx, (&Rte_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx, (&Rte_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx, (&Rte_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout;
    (void)ReleaseSpinlock(Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx, (&Rte_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx_1)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx, (&Rte_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx, (&Rte_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductDay_BRM_BatteryProductDay;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx, (&Rte_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductMonth_BRM_BatteryProductMonth;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx, (&Rte_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProductYear_BRM_BatteryProductYear;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx, (&Rte_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryProperty_BRM_BatteryProperty;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx, (&Rte_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySN_BRM_BatterySN;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx, (&Rte_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx, (&Rte_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx, (&Rte_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_BatteryType_BRM_BatteryType;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx, (&Rte_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_Manufacturer_BRM_Manufacturer;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx, (&Rte_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_ProtocolVersion_BRM_ProtocolVersion;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx, (&Rte_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte17_BRM_VehicleIdByte17;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx, *(&Rte_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx, *(&Rte_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16;
    (void)ReleaseSpinlock(Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx, (&Rte_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BRO_BMSChargeReady_BRO_BMSChargeReady;
    (void)ReleaseSpinlock(Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx, (&Rte_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_AbortSOC_BSD_AbortSOC;
    (void)ReleaseSpinlock(Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx, (&Rte_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMax_BSD_BatteryTempMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx, (&Rte_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryTempMin_BSD_BatteryTempMin;
    (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx, (&Rte_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx, (&Rte_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin;
    (void)ReleaseSpinlock(Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx, (&Rte_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryCurrentState_BSM_BatteryCurrentState;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx, (&Rte_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx, (&Rte_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMax_BSM_BatteryTempMax;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx, (&Rte_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx, (&Rte_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMin_BSM_BatteryTempMin;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx, (&Rte_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx, (&Rte_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryTempState_BSM_BatteryTempState;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx, (&Rte_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx, (&Rte_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_BatteryVoltageState_BSM_BatteryVoltageState;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx, (&Rte_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_ChargeEnable_BSM_ChargeEnable;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx, (&Rte_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_InsulationState_BSM_InsulationState;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BSM_SOC_BSM_SOC;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx, (&Rte_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BSM_SOC_BSM_SOC;
    (void)ReleaseSpinlock(Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx, (&Rte_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSOC_BST_AbortAchiveSOC;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx, (&Rte_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx, (&Rte_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx, (&Rte_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortChargparameter_BST_AbortChargparameter;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx, (&Rte_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorCurrent_BST_AbortErrorCurrent;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx, (&Rte_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortErrorVoltage_BST_AbortErrorVoltage;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx, (&Rte_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx, (&Rte_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx, (&Rte_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnector_BST_AbortFaultConnector;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx, (&Rte_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx, (&Rte_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultInsulation_BST_AbortFaultInsulation;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx, (&Rte_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortFaultOther_BST_AbortFaultOther;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx, (&Rte_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_AbortHVrelayfault_BST_AbortHVrelayfault;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx, (&Rte_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx, (&Rte_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_DCComM_BST_Abortmanoperate_BST_Abortmanoperate;
    (void)ReleaseSpinlock(Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx, (&Rte_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Ena_LIN01_ChargeCurrWU_Ena_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx, (&Rte_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_ChargeCurrWU_Treshold_LIN01_ChargeCurrWU_Treshold_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx, (&Rte_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Ena_LIN01_DisChargeCurrWU_Ena_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx, (&Rte_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_DisChargeCurrWU_Treshold_LIN01_DisChargeCurrWU_Treshold_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx, (&Rte_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Ena_LIN01_SOCWU_Ena_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx, (&Rte_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_SOCWU_Treshold_LIN01_SOCWU_Treshold_LIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx, (&Rte_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_DriverWarningLampSts_LIN00_VCU_ACU_DriverWarningLampSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx, (&Rte_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerAirbagSts_LIN00_VCU_ACU_PassengerAirbagSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx, (&Rte_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_PassengerWarningLampSts_LIN00_VCU_ACU_PassengerWarningLampSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx, (&Rte_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_ACU_WarningLampSts_LIN00_VCU_ACU_WarningLampSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx, (&Rte_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FLSeatBeltRemindReq_LIN00_VCU_BCM_FLSeatBeltRemindReq_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx, (&Rte_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_FRSeatBeltRemindReq_LIN00_VCU_BCM_FRSeatBeltRemindReq_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx, (&Rte_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RLSeatBeltRemindReq_LIN00_VCU_BCM_RLSeatBeltRemindReq_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx, (&Rte_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_BCM_RRSeatBeltRemindReq_LIN00_VCU_BCM_RRSeatBeltRemindReq_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx, (&Rte_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_CGW_VehicleState_LIN00_VCU_CGW_VehicleState_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx, (&Rte_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCDCFail_LIN_LIN00_VCU_DCDCFail_LIN_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx, (&Rte_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FL_DoorFLSts_LIN00_VCU_DCM_FL_DoorFLSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx, (&Rte_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_FR_DoorFRSts_LIN00_VCU_DCM_FR_DoorFRSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx, (&Rte_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RL_DoorRLSts_LIN00_VCU_DCM_RL_DoorRLSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx, (&Rte_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DCM_RR_DoorRRSts_LIN00_VCU_DCM_RR_DoorRRSts_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx, (&Rte_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_DriveMotOvrTemp_LIN_LIN00_VCU_DriveMotOvrTemp_LIN_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx, (&Rte_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatCriFail_LIN_LIN00_VCU_HVBatCriFail_LIN_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx, (&Rte_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_HVBatOvrTemp_LIN_LIN00_VCU_HVBatOvrTemp_LIN_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx, (&Rte_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_BrakeFluidWarning_LIN00_VCU_IBS_BrakeFluidWarning_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx, (&Rte_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_EBDFault_LIN00_VCU_IBS_EBDFault_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx, (&Rte_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_RollerbenchMode_LIN00_VCU_IBS_RollerbenchMode_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx, (&Rte_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IBS_SystemStatus_LIN00_VCU_IBS_SystemStatus_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx, (&Rte_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01 = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_BulbCheckStsLIN01_VCU_IVI_BulbCheckStsLIN01;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx);
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN != Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN)
  {
    updateAction = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdate_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    (void)GetSpinlock(Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx);
    (void)Com_SendSignal(ComConf_ComSignal_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx, (&Rte_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx)); /* PRQA S 0315 */ /* MD_Rte_0315 */
    Rte_SystemApplication_OsCore0_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN = Rte_SystemApplication_OsCore1_TxUpdateFlags.Rte_TxUpdateProxy_CtAp_LINHandler_VCU_IVI_VrState_LIN00_VCU_IVI_VrState_LIN;
    (void)ReleaseSpinlock(Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx);
  }
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0306:  MISRA rule: Rule11.4
     Reason:     An optimized copy algorithm can be used for aligned data. To check if pointers are aligned, pointers need to be casted to an integer type.
     Risk:       No functional risk. Only the lower 8 bits of the address are checked, therefore all integer types are sufficient.
     Prevention: Not required.

   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0316:  MISRA rule: Dir1.1
     Reason:     Pointer cast to uint8* because a direct byte access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_1514:  MISRA rule: Rule8.9
     Reason:     Because of external definition, misra does not see the call.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_1533:  MISRA rule: Rule8.9
     Reason:     Object is referenced by more than one function in different configurations.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_2983:  MISRA rule: Rule2.2
     Reason:     For generated code it is difficult to check the usage of each object.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
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

   MD_Rte_4395:  MISRA rule: Rule10.8
     Reason:     Type conversion is necessary
     Risk:       No functional risk. Expected behaviour
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
