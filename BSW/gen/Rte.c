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
#include "Rte_DIAG_SWC.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
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
#include "SchM_EcuM.h"
#include "SchM_Fee.h"
#include "SchM_Fls_17_Dmu.h"
#include "SchM_McalLib.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
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
CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_DefaultValue = {
  0U, 0U, 0U, 0U
};
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

VAR(NvM_Arry4Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(NvM_Array10Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_SWC1_NvBlockNeed_UserData3_MirrorBlock; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Timeout Flags for each external Rx Signals with aliveTimeout != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_RxTimeoutFlagsType, RTE_VAR_ZERO_INIT) Rte_RxTimeoutFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_RxTimeoutFlagsInit() (Rte_MemClr(&Rte_RxTimeoutFlags, sizeof(Rte_RxTimeoutFlagsType)))


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

  /* reset Rx Timeout Flags */
  Rte_RxTimeoutFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0(VcuTxMsg1_Sig0 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1(VcuTxMsg1_Sig1 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2(VcuTxMsg1_Sig2 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3(VcuTxMsg1_Sig3 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0(VcuTxMsg2_Sig0 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1(VcuTxMsg2_Sig1 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2(VcuTxMsg2_Sig2 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3(VcuTxMsg2_Sig3 data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComSignal_VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx, (&data)); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_Rte_2986 */

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

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0(P2VAR(VcuRxMsg1_Sig0, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg1_Sig0 localVcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, &localVcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1(P2VAR(VcuRxMsg1_Sig1, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg1_Sig1 localVcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, &localVcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2(P2VAR(VcuRxMsg1_Sig2, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg1_Sig2 localVcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, &localVcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3(P2VAR(VcuRxMsg1_Sig3, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg1_Sig3 localVcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx, &localVcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0(P2VAR(VcuRxMsg2_Sig0, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg2_Sig0 localVcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, &localVcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1(P2VAR(VcuRxMsg2_Sig1, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg2_Sig1 localVcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, &localVcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2(P2VAR(VcuRxMsg2_Sig2, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg2_Sig2 localVcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, &localVcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3(P2VAR(VcuRxMsg2_Sig3, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    VcuRxMsg2_Sig3 localVcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx;
    ret = Com_ReceiveSignal(ComConf_ComSignal_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx, &localVcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    *((data)) = localVcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx;
  }
  if (Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
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

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_Boot_Software_Identification_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_Boot_Software_Identification_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_NumberOfModules_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_NumberOfModules_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Boot_Software_NumberOfModules_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DataDiagnosticIdentifier_DID_DataDiagnosticIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DataDiagnosticIdentifier_DID_DataDiagnosticIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DataDiagnosticIdentifier_DID_DataDiagnosticIdentifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_CanDriverVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_CanDriverVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_CanDriverVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_DiagnosticModuleVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_DiagnosticModuleVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_DiagnosticModuleVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_NmVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_NmVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_NmVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_OperatingSystemVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_OperatingSystemVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_OperatingSystemVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_TransportLayerVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_TransportLayerVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_TransportLayerVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Version_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Version_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Version_Hardware_Version_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_SerialNumber_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_SerialNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_SerialNumber_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Spare_Part_Number_Spare_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Spare_Part_Number_Spare_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Spare_Part_Number_Spare_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_VIN_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_VIN_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_SampleRoutineControl_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_SampleRoutineControl_Out_ResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Result, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_Result = Out_Result;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_SampleRoutineControl_Start(Dcm_StartDataIn_SampleRoutineControl_In_Option0Type In_Option0, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_SampleRoutineControl_Out_InitStateType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_InitState, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_Option0 = In_Option0;
  OpStatus = OpStatus;
  Out_InitState = Out_InitState;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_SampleRoutineControl_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_SampleRoutineControl_Out_StopStateType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_StopState, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_StopState = Out_StopState;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_SampleRoutineControl_StartOnly_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_SampleRoutineControl_StartOnly_Out_ResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Result, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_Result = Out_Result;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_SampleRoutineControl_StartOnly_Start(P2CONST(Dcm_StartDataIn_SampleRoutineControl_StartOnly_In_Option1ArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) In_Option1, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_Option1 = In_Option1;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Level_3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
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

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBInitEvt_DTC_0x000002_InitMonitorForEvent(Dem_InitMonitorReasonType InitMonitorReason) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  InitMonitorReason = InitMonitorReason;
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
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8_DcmCommunicationControl_ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
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


/**********************************************************************************************************************
 * COM-Callbacks for DataReceivedEvent triggered runnables, inter-ECU client/server communication, for queued com. and for Rx timeout / Rx inv. flag (reset)
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    /* scheduled trigger for runnables: Rte_Msg200h_Rx_Notification */
    (void)SetEvent(AswTask, Rte_Ev_Run_Com_SWC_Rte_Msg200h_Rx_Notification); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    /* scheduled trigger for runnables: Rte_Msg201h_Rx_Notification */
    (void)SetEvent(AswTask, Rte_Ev_Run_Com_SWC_Rte_Msg201h_Rx_Notification); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx(void)
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx = 0U;
    Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */


/**********************************************************************************************************************
 * COM Callbacks for Rx Timeout Notification
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx(void)
{

  Rte_DisableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  Rte_RxTimeoutFlags.Rte_RxTimeout_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx = 1U;
  Rte_EnableAllInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
}


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


  /* call runnable */
  IoHwAb_SWC_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_AswTask_0_10ms | Rte_Ev_Run_Com_SWC_Com_Runnable_2ms | Rte_Ev_Run_Com_SWC_Rte_Msg200h_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg201h_Rx_Notification | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable | Rte_Ev_Run_PowerMng_SWC_Led_Runnable1000ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(AswTask, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_AswTask_0_10ms | Rte_Ev_Run_Com_SWC_Com_Runnable_2ms | Rte_Ev_Run_Com_SWC_Rte_Msg200h_Rx_Notification | Rte_Ev_Run_Com_SWC_Rte_Msg201h_Rx_Notification | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData1_Runnable | Rte_Ev_Run_NvM_SWC_NvM_SWC_UserData2_Runnable | Rte_Ev_Run_PowerMng_SWC_Led_Runnable1000ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

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

    if ((ev & Rte_Ev_Run_Com_SWC_Rte_Msg200h_Rx_Notification) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Msg200h_Rx_Notification(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_Com_SWC_Rte_Msg201h_Rx_Notification) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Msg201h_Rx_Notification(); /* PRQA S 2987 */ /* MD_Rte_2987 */
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
