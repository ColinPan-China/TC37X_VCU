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
#include "Rte_Com_SWC.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_IoHwAb.h"
#include "Rte_IoHwAb_SWC.h"
#include "Rte_NvM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_PowerMng_SWC.h"
#include "Rte_SWC1.h"
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

#define RTE_START_SEC_VAR_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState = RTE_STATE_UNINIT; /* PRQA S 3408 */ /* MD_Rte_3408 */
volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_StartTiming_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408, 1514 */ /* MD_MSR_MacroArgumentEmpty, MD_Rte_3408, MD_Rte_1514 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(NvM_Array10Bytes, RTE_VAR_NOINIT) Rte_NvM_SWC_NVBlockDescriptor_UserData1;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(NvM_Array32Bytes, RTE_VAR_NOINIT) Rte_NvM_SWC_NVBlockDescriptor_UserData2;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(BswM_ESH_RunRequest, RTE_VAR_NOINIT) Rte_SWC1_Request_ESH_RunRequest_0_requestedMode;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(NvM_Array10Bytes, RTE_CONST) Rte_C_NvM_Array10Bytes_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 1514, 1533 L1 */ /* MD_Rte_1514, MD_Rte_1533 */
CONST(NvM_Array32Bytes, RTE_CONST) Rte_C_NvM_Array32Bytes_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Calibration Parameters (SW-C local and calibration component calibration parameters)
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1514, 1533 L1 */ /* MD_Rte_3408, MD_Rte_1514, MD_Rte_1533 */
CONST(uint16, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_CalibrationParameter = 7U;
/* PRQA L:L1 */
/* PRQA S 3408, 1514, 1533 L1 */ /* MD_Rte_3408, MD_Rte_1514, MD_Rte_1533 */
CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData1_ROM_NVBlockDescriptor_UserData1 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1514, 1533 L1 */ /* MD_Rte_3408, MD_Rte_1514, MD_Rte_1533 */
CONST(NvM_Array32Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData2_ROM_NVBlockDescriptor_UserData2 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1514, 1533 L1 */ /* MD_Rte_3408, MD_Rte_1514, MD_Rte_1533 */
CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_NvBlockNeed_UserData3_DefaultValue = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(NvM_Array10Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_SWC1_NvBlockNeed_UserData3_MirrorBlock; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Prototypes for Runnable Entities of Nv Block Components
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

RTE_LOCAL FUNC(void, RTE_CODE) Rte_NvM_SWC_NvM_SWC_UserData1_Runnable_NvM_SWC_UserData1_Runnable(void);
RTE_LOCAL FUNC(void, RTE_CODE) Rte_NvM_SWC_NvM_SWC_UserData2_Runnable_NvM_SWC_UserData2_Runnable(void);

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

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


#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

VAR(BswM_ESH_Mode, RTE_VAR_NOINIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode; /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer
# define RTE_USEC_SystemTimer OS_US2TICKS_SystemTimer
#else
# define RTE_USEC_SystemTimer(val) ((TickType)RTE_CONST_USEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer
# define RTE_MSEC_SystemTimer OS_MS2TICKS_SystemTimer
#else
# define RTE_MSEC_SystemTimer(val) ((TickType)RTE_CONST_MSEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer
# define RTE_SEC_SystemTimer OS_SEC2TICKS_SystemTimer
#else
# define RTE_SEC_SystemTimer(val)  ((TickType)RTE_CONST_SEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_2 (2UL)
#define RTE_CONST_MSEC_SystemTimer_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_5 (5UL)
#define RTE_CONST_MSEC_SystemTimer_500 (500UL)

#define RTE_CONST_SEC_SystemTimer_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_1 (1000UL)


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

FUNC(void, RTE_CODE) SchM_Start(void)
{
  /* initialize the NvBlock mirror buffers */
  Rte_MemCpy(Rte_NvM_SWC_NVBlockDescriptor_UserData1, Rte_C_NvM_Array10Bytes_0, sizeof(NvM_Array10Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_MemCpy32(Rte_NvM_SWC_NVBlockDescriptor_UserData2, Rte_C_NvM_Array32Bytes_0, sizeof(NvM_Array32Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */

  Rte_InitState = RTE_STATE_SCHM_START;
}

FUNC(void, RTE_CODE) SchM_Init(void)
{
  /* activate the tasks */
  (void)ActivateTask(Bsw_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;
}

FUNC(void, RTE_CODE) SchM_StartTiming(void)
{
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_Bsw_Task_0_10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Bsw_Task_0_20ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(20)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Bsw_Task_0_5ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(5)); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void)
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  /* set default values for internal data */
  Rte_SWC1_Request_ESH_RunRequest_0_requestedMode = 0U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

  /* activate the tasks */
  (void)ActivateTask(AswTask); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)ActivateTask(Asw_Init); /* PRQA S 3417 */ /* MD_Rte_Os */

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE_AswTask_0_10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Com_SWC_Com_Runnable_2ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(2)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Com_SWC_Com_Runnable_500ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(500)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms, RTE_SEC_SystemTimer(0) + (TickType)1, RTE_SEC_SystemTimer(1)); /* PRQA S 3417, 1840 */ /* MD_Rte_Os, MD_Rte_Os */

  Rte_StartTiming_InitState = RTE_STATE_INIT;
  Rte_InitState = RTE_STATE_INIT;

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void)
{
  Rte_StartTiming_InitState = RTE_STATE_UNINIT;
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE_AswTask_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Com_SWC_Com_Runnable_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Com_SWC_Com_Runnable_500ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE2_Bsw_Task_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Bsw_Task_0_20ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Bsw_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_UNINIT;
}

FUNC(void, RTE_CODE) Rte_InitMemory(void)
{
  Rte_InitState = RTE_STATE_UNINIT;
  Rte_StartTiming_InitState = RTE_STATE_UNINIT;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN0_AN0(AN0 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN0_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_66f10a00_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN1_AN1(AN1 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN1_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_42735b36_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN10_AN10(AN10 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN10_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_f71f00b1_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN11_AN11(AN11 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN11_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_d39d5187_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN12_AN12(AN12 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN12_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_5149143c_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN13_AN13(AN13 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN13_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_75cb450a_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN14_AN14(AN14 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN14_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_8a44f288_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN15_AN15(AN15 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN15_oVcuAdcTxG1Msg1_oTC37X_VCU_CAN01_aec6a3be_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN16_AN16(AN16 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN16_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_156a4b45_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN17_AN17(AN17 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN17_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_31e81a73_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN18_AN18(AN18 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN18_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_31042200_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN19_AN19(AN19 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN19_oVcuAdcTxG2Msg0_oTC37X_VCU_CAN01_15867336_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN2_AN2(AN2 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN2_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_2ff5a86c_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN20_AN20(AN20 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN20_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_aae62509_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN21_AN21(AN21 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN21_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_8e64743f_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN22_AN22(AN22 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN22_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_e3e28765_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN23_AN23(AN23 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN23_oVcuAdcTxG2Msg1_oTC37X_VCU_CAN01_c760d653_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN24_AN24(AN24 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN24_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_c095b3f0_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN25_AN25(AN25 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN25_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_e417e2c6_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN26_AN26(AN26 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN26_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_8991119c_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN27_AN27(AN27 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN27_oVcuAdcTxG3Msg0_oTC37X_VCU_CAN01_ad1340aa_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN28_AN28(AN28 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN28_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_42adce38_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN29_AN29(AN29 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN29_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_662f9f0e_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN3_AN3(AN3 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN3_oVcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0b77f95a_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN30_AN30(AN30 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN30_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_72505601_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN31_AN31(AN31 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN31_oVcuAdcTxG3Msg1_oTC37X_VCU_CAN01_56d20737_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN32_AN32(AN32 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN32_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_543dc9cc_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN33_AN33(AN33 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN33_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_70bf98fa_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN34_AN34(AN34 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN34_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_8f302f78_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN35_AN35(AN35 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN35_oVcuAdcTxG8Msg0_oTC37X_VCU_CAN01_abb27e4e_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN36_AN36(AN36 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN36_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_29663bf5_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN37_AN37(AN37 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN37_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_0de46ac3_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN38_AN38(AN38 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN38_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_0d0852b0_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN39_AN39(AN39 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN39_oVcuAdcTxG8Msg1_oTC37X_VCU_CAN01_298a0386_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN4_AN4(AN4 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN4_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_1baaf839_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN40_AN40(AN40 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN40_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_1ba46d98_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN41_AN41(AN41 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN41_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_3f263cae_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN42_AN42(AN42 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN42_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_52a0cff4_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN43_AN43(AN43 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN43_oVcuAdcTxG8Msg2_oTC37X_VCU_CAN01_76229ec2_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN44_AN44(AN44 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN44_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_66ff9fa1_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN45_AN45(AN45 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN45_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_427dce97_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN46_AN46(AN46 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN46_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_2ffb3dcd_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN47_AN47(AN47 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN47_oVcuAdcTxG8Msg3_oTC37X_VCU_CAN01_0b796cfb_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN5_AN5(AN5 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN5_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_3f28a90f_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN6_AN6(AN6 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN6_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_52ae5a55_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN7_AN7(AN7 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN7_oVcuAdcTxG0Msg1_oTC37X_VCU_CAN01_762c0b63_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN8_AN8(AN8 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN8_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_8ebae131_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN9_AN9(AN9 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_AN9_oVcuAdcTxG1Msg0_oTC37X_VCU_CAN01_aa38b007_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet(ECC_PMP2_SpdSet data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet(ECC_PMP3_SpdSet data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty(EXT_PWM_IN1_Duty data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_EXT_PWM_IN1_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_92760a96_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period(EXT_PWM_IN1_Period data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_EXT_PWM_IN1_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_c46a50e4_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty(EXT_PWM_IN2_Duty data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_EXT_PWM_IN2_Duty_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_5b42119b_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period(EXT_PWM_IN2_Period data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_EXT_PWM_IN2_Period_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_fba12e71_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_Ext_IN2_Ext_IN2(Ext_IN2 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_Ext_IN2_oVcuMeasurementMsg0_oTC37X_VCU_CAN01_a925e19e_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC1_NvM_Data_IF_UserData1_Send_Element_UserData1(P2CONST(uint8, AUTOMATIC, RTE_SWC1_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy(Rte_NvM_SWC_NVBlockDescriptor_UserData1, data, sizeof(NvM_Array10Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
  /* scheduled trigger for runnables: Rte_NvM_SWC_NvM_SWC_UserData1_Runnable_NvM_SWC_UserData1_Runnable */
  (void)SetEvent(AswTask, Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC1_NvM_Data_IF_UserData2_Send_Element_UserData2(P2CONST(uint8, AUTOMATIC, RTE_SWC1_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy32(Rte_NvM_SWC_NVBlockDescriptor_UserData2, data, sizeof(NvM_Array32Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
  /* scheduled trigger for runnables: Rte_NvM_SWC_NvM_SWC_UserData2_Runnable_NvM_SWC_UserData2_Runnable */
  (void)SetEvent(AswTask, Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


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
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_SWC1_Request_ESH_RunRequest_0_requestedMode; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC1_NvM_Data_IF_UserData1_Recv_Element_UserData1(P2VAR(uint8, AUTOMATIC, RTE_SWC1_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy(data, Rte_NvM_SWC_NVBlockDescriptor_UserData1, sizeof(NvM_Array10Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC1_NvM_Data_IF_UserData2_Recv_Element_UserData2(P2VAR(uint8, AUTOMATIC, RTE_SWC1_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_MemCpy32(data, Rte_NvM_SWC_NVBlockDescriptor_UserData2, sizeof(NvM_Array32Bytes)); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return ret;
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
 * COM-Callbacks for DataReceivedEvent triggered runnables, inter-ECU client/server communication, for queued com. and for Rx timeout / Rx inv. flag (reset)
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_Bts7xx_HS1_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_d0692a3c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Rte_Msg10Fh_Rx_Notification */
    (void)SetEvent(AswTask, Rte_Ev_Run_Com_SWC_Rte_Msg10Fh_Rx_Notification); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Tle888qk_Lout1_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_0e3571fa_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Rte_Msg110h_Rx_Notification */
    (void)SetEvent(AswTask, Rte_Ev_Run_Com_SWC_Rte_Msg110h_Rx_Notification); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Tle888qk_Out21_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_fce8b2a9_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Rte_Msg10Eh_Rx_Notification */
    (void)SetEvent(AswTask, Rte_Ev_Run_Com_SWC_Rte_Msg10Eh_Rx_Notification); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */


/**********************************************************************************************************************
 * NvM-Callback for synchronous copying of the mirror buffer from the NvM
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SetMirror_NvM_SWC_NVBlockDescriptor_UserData1(P2CONST(void, AUTOMATIC, RTE_APPL_DATA) NVMBuffer) /* PRQA S 3112 */ /* MD_Rte_3112 */
{
  Std_ReturnType ret = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  CONST(uint16_least, RTE_CONST) size = sizeof(NvM_Array10Bytes);

  if (size <= 10U) /* PRQA S 2991, 2995 */ /* MD_Rte_2991, MD_Rte_2995 */ /* COV_RTE_NVMBUFFER_SIZE */
  {
    Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_MemCpy(Rte_NvM_SWC_NVBlockDescriptor_UserData1, NVMBuffer, size); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
    Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
    ret = E_OK;
  }
  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_SetMirror_NvM_SWC_NVBlockDescriptor_UserData2(P2CONST(void, AUTOMATIC, RTE_APPL_DATA) NVMBuffer) /* PRQA S 3112 */ /* MD_Rte_3112 */
{
  Std_ReturnType ret = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  CONST(uint16_least, RTE_CONST) size = sizeof(NvM_Array32Bytes);

  if (size <= 32U) /* PRQA S 2991, 2995 */ /* MD_Rte_2991, MD_Rte_2995 */ /* COV_RTE_NVMBUFFER_SIZE */
  {
    Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_MemCpy32(Rte_NvM_SWC_NVBlockDescriptor_UserData2, NVMBuffer, size); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
    Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
    ret = E_OK;
  }
  return ret;
}


/**********************************************************************************************************************
 * NvM-Callback for synchronous copying of the mirror buffer to the NvM
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_GetMirror_NvM_SWC_NVBlockDescriptor_UserData1(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) NVMBuffer) /* PRQA S 3112 */ /* MD_Rte_3112 */
{
  Std_ReturnType ret = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  CONST(uint16_least, RTE_CONST) size = sizeof(NvM_Array10Bytes);

  if (size <= 10U) /* PRQA S 2991, 2995 */ /* MD_Rte_2991, MD_Rte_2995 */ /* COV_RTE_NVMBUFFER_SIZE */
  {
    Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_MemCpy(NVMBuffer, Rte_NvM_SWC_NVBlockDescriptor_UserData1, size); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
    Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
    ret = E_OK;
  }
  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_GetMirror_NvM_SWC_NVBlockDescriptor_UserData2(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) NVMBuffer) /* PRQA S 3112 */ /* MD_Rte_3112 */
{
  Std_ReturnType ret = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  CONST(uint16_least, RTE_CONST) size = sizeof(NvM_Array32Bytes);

  if (size <= 32U) /* PRQA S 2991, 2995 */ /* MD_Rte_2991, MD_Rte_2995 */ /* COV_RTE_NVMBUFFER_SIZE */
  {
    Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_MemCpy32(NVMBuffer, Rte_NvM_SWC_NVBlockDescriptor_UserData2, size); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
    Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
    ret = E_OK;
  }
  return ret;
}


/**********************************************************************************************************************
 * NvM-Callbacks for forwarding Job Finished notifications from the NvM to the SW-Cs
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_NvMNotifyJobFinished_NvM_SWC_NVBlockDescriptor_UserData1(uint8 ServiceId, NvM_RequestResultType JobResult)
{
  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)NvSWC_NvMNotifyJobFinished_UserData1_JobFinished(ServiceId, JobResult);
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_NvMNotifyJobFinished_NvM_SWC_NVBlockDescriptor_UserData2(uint8 ServiceId, NvM_RequestResultType JobResult)
{
  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)NvSWC_NvMNotifyJobFinished_UserData2_JobFinished(ServiceId, JobResult);
  }
  return E_OK;
}

/**********************************************************************************************************************
 * Runnable Entities for Nv Block Components
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvM_SWC_UserData1_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Element_UserData1> of PortPrototype <NvM_Data_IF_UserData1_Recv>
 *
 *********************************************************************************************************************/

RTE_LOCAL FUNC(void, RTE_CODE) Rte_NvM_SWC_NvM_SWC_UserData1_Runnable_NvM_SWC_UserData1_Runnable(void)
{
  /* dirty flag not configured */

}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvM_SWC_UserData2_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Element_UserData2> of PortPrototype <NvM_Data_IF_UserData2_Rcev>
 *
 *********************************************************************************************************************/

RTE_LOCAL FUNC(void, RTE_CODE) Rte_NvM_SWC_NvM_SWC_UserData2_Runnable_NvM_SWC_UserData2_Runnable(void)
{
  /* dirty flag not configured */

}



/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     AswTask
 * Priority: 64
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(AswTask) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;
  EventMaskType evRun;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_AswTask_0_10ms | Rte_Ev_Run_Com_SWC_Com_Runnable_2ms | Rte_Ev_Run_Com_SWC_Com_Runnable_500ms | Rte_Ev_Run_Com_SWC_Rte_Msg10Eh_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg10Fh_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg110h_Rx_Notification | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable | Rte_Ev_Run_PowerMng_SWC_Led_Runnable1000ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(AswTask, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_AswTask_0_10ms | Rte_Ev_Run_Com_SWC_Com_Runnable_2ms | Rte_Ev_Run_Com_SWC_Com_Runnable_500ms | Rte_Ev_Run_Com_SWC_Rte_Msg10Eh_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg10Fh_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg110h_Rx_Notification | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable | Rte_Ev_Run_PowerMng_SWC_Led_Runnable1000ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic_AswTask_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      SWC1_Runnable10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_PowerMng_SWC_Led_Runnable1000ms) != (EventMaskType)0)
    {
      /* call runnable */
      Led_Runnable1000ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Com_Runnable_2ms) != (EventMaskType)0)
    {
      /* call runnable */
      Com_Runnable_2ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    (void)GetEvent(AswTask, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if (((ev & Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable) != (EventMaskType)0) || ((evRun & Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable) != (EventMaskType)0))
    {
      (void)ClearEvent(Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Rte_NvM_SWC_NvM_SWC_UserData1_Runnable_NvM_SWC_UserData1_Runnable(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    (void)GetEvent(AswTask, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if (((ev & Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable) != (EventMaskType)0) || ((evRun & Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable) != (EventMaskType)0))
    {
      (void)ClearEvent(Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Rte_NvM_SWC_NvM_SWC_UserData2_Runnable_NvM_SWC_UserData2_Runnable(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_AswTask_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      IoHwAb_SWC_Runnable(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Com_Runnable_500ms) != (EventMaskType)0)
    {
      /* call runnable */
      Com_Runnable_500ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Rte_Msg10Eh_Rx_Notification) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Msg10Eh_Rx_Notification(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Rte_Msg10Fh_Rx_Notification) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Msg10Fh_Rx_Notification(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Rte_Msg110h_Rx_Notification) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Msg110h_Rx_Notification(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Asw_Init
 * Priority: 63
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Asw_Init) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  SWC1_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  PowerMng_SWC_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  IoHwAb_SWC_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Bsw_Task
 * Priority: 65
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Bsw_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_Bsw_Task_0_10ms | Rte_Ev_Cyclic2_Bsw_Task_0_20ms | Rte_Ev_Cyclic2_Bsw_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Bsw_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_Bsw_Task_0_10ms | Rte_Ev_Cyclic2_Bsw_Task_0_20ms | Rte_Ev_Cyclic2_Bsw_Task_0_5ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      EcuM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_0(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_10ms) != (EventMaskType)0)
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
      Fee_MainFunction();

      /* call schedulable entity */
      Fls_17_Dmu_MainFunction();

      /* call runnable */
      NvM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanXcp_MainFunction();

      /* call schedulable entity */
      Xcp_MainFunction();

      /* call schedulable entity */
      CanTp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_MasterMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_SatelliteMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_1(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_2(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      LinIf_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      LinSM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Spi_MainFunction_Handling();
    }

    if ((ev & Rte_Ev_Cyclic2_Bsw_Task_0_20ms) != (EventMaskType)0)
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
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

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

   MD_Rte_1340:  MISRA rule: Rule17.8
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

   MD_Rte_2986:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2991:  MISRA rule: Rule14.3
     Reason:     Used for type checking related with (boolean)
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_2995:  MISRA rule: Rule2.2
     Reason:     The result of the evaluation depends on the compiler specific alignment.
                 This control expression has been added for safety reasons.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3112:  MISRA rule: Rule2.2
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

/**********************************************************************************************************************
 Code coverage justifications
 *********************************************************************************************************************/

/* COV_JUSTIFICATION_BEGIN
   \ID COV_RTE_NVMBUFFER_SIZE
     \ACCEPT TX
     \REASON The condition checks that the NVMBuffer is large enough to store the data. The size of the NVMBuffer is
             generated as magic number and is compared to the result of the sizeof()-Expression. Additionally, RTE Analyzer
             verifies that the NVMBuffer is at least "size"-elements long.
             As the sizeof()-Expression returns the expected (calculated) size, the condition cannot be false unless a
             wrong configuration is used. In case of a wrong configuration RTE Analyzer would detect the difference between
             the expected value and the actual size of the NVMBuffer.

COV_JUSTIFICATION_END */
