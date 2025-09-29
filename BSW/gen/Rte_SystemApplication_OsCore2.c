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
 *             File:  Rte_SystemApplication_OsCore2.c
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


FUNC(void, RTE_CODE) Rte_InitMemory_SystemApplication_OsCore2(void)
{
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Core2_Asw_Init
 * Priority: 0
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Core2_Asw_Init) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  Core2App_SWC_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core2_Asw_Task
 * Priority: 0
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Core2_Asw_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  Core2App_SWC_Runnable_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Core2_Bsw_Task
 * Priority: 0
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Core2_Bsw_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call schedulable entity */
  EcuM_MainFunction();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
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

*/
