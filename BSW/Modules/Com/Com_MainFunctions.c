/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2021 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  Com_MainFunctions.c
 *        \brief  MICROSAR Communication source file
 *
 *      \details  This is the implementation of the MICROSAR Communication module.
 *                The basic software module is based on the AUTOSAR Communication specification.
 *
 *********************************************************************************************************************/

#define COM_MAINFUNCTIONS_SOURCE

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_MainFunctions.h"
#include "Com_TxModeHdlr.h"
#include "Com_Timer.h"
#include "Com_Notifications.h"
#include "Com_RxProcessing.h"
#include "Com_Gateway.h"
#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/
#if !defined (COM_LOCAL_INLINE)
# define COM_LOCAL_INLINE LOCAL_INLINE
#endif

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the gw signal routing exclusive area.
    \details  -
    \pre      -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \context  TASK
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_EnterExclusiveArea(void);
#endif

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the gw signal routing exclusive area.
    \details  -
    \pre      -
    \param[in]    idx    index of the indirection from the main function route signals to the ISRLock counter
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \context  TASK
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ExitExclusiveArea(Com_GatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStructType idx);
#endif

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \pre      -
    \param[in]    idx    index of the indirection from the main function route signals to the ISRLock counter
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \context  TASK
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ThresholdCheck(Com_GatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStructType idx);
#endif


/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_EnterExclusiveArea(void)
{
  /* #10 Enter the gw signal routing exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_BOTH();
}
#endif

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ExitExclusiveArea(Com_GatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStructType idx)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetGatewayProcessingISRLockCounter(idx, Com_GetGatewayProcessingISRLockThreshold());      /* SBSW_COM_CSL_VAR_ACCESS */
  /* #10 Exit the gw signal routing exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_BOTH();
}
#endif

#if (COM_GWINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
COM_LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ThresholdCheck(Com_GatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStructType idx)
{
  if(Com_GetGatewayProcessingISRLockCounter(idx) > 0u)  /* COV_COM_THRESHOLD_TX */
  {
    Com_DecGatewayProcessingISRLockCounter(idx);        /* SBSW_COM_CSL_VAR_ACCESS */
  }
  else
  {
    Com_SignalGw_ExitExclusiveArea(idx);
    Com_SignalGw_EnterExclusiveArea();
  }
}
#endif


/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
Com_MainFunctions_Init
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctions_Init(void)
{
#if (COM_RXPDUINFO == STD_ON)
  {
    Com_PartitionsRxStructIterType partitionsRxIdx = 0;
    for(; partitionsRxIdx < Com_GetSizeOfPartitionsRxStruct(); partitionsRxIdx++)
    {
      /* Initialize RxIPduGroup ISR lock counter */
      Com_SetRxIPduGroupISRLockCounter(partitionsRxIdx, Com_GetRxIPduGroupISRLockThreshold());    /* SBSW_COM_CSL_VAR_ACCESS */
    }
  }
#endif

#if (COM_TXPDUINFO == STD_ON)
  {
    Com_PartitionsTxStructIterType partitionsTxIdx = 0;
    for(; partitionsTxIdx < Com_GetSizeOfPartitionsTxStruct(); partitionsTxIdx++)
    {
      /* Initialize TxIPduGroup ISR lock counter */
      Com_SetTxIPduGroupISRLockCounter(partitionsTxIdx, Com_GetTxIPduGroupISRLockThreshold());    /* SBSW_COM_CSL_VAR_ACCESS */
    }
  }
#endif

#if (COM_TXMODEINFO == STD_ON)
  {
    Com_MainFunctionTxStructIterType mainFunctionTxIdx = 0;
    for(; mainFunctionTxIdx < Com_GetSizeOfMainFunctionTxStruct(); mainFunctionTxIdx++)
    {
      /* Initialize ISR lock counter Tx */
      Com_SetTxProcessingISRLockCounter(Com_GetTxProcessingISRLockCounterIdxOfMainFunctionTxStruct(mainFunctionTxIdx), Com_GetTxProcessingISRLockThreshold());    /* SBSW_COM_CSL_VAR_ACCESS */
    }
  }
#endif

#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON) || (COM_RXDEFERREDEVENTCACHE == STD_ON) || (COM_RXTOUTINFO == STD_ON))
  {
    Com_MainFunctionRxStructIterType mainFunctionRxIdx = 0;
    for(; mainFunctionRxIdx < Com_GetSizeOfMainFunctionRxStruct(); mainFunctionRxIdx++)
    {
# if (COM_RXDEFERREDEVENTCACHE == STD_ON)
      /* Initialize next event cache entry (if configured) */
      Com_SetRxNextEventCacheEntry(Com_GetRxNextEventCacheEntryIdxOfMainFunctionRxStruct(mainFunctionRxIdx), Com_GetRxDeferredEventCacheStartIdxOfMainFunctionRxStruct(mainFunctionRxIdx));       /* SBSW_COM_CSL_VAR_ACCESS */
# endif
      /* Initialize ISR lock counter Rx */
      Com_SetRxMainFunctionProcessingISRLockCounter(Com_GetRxMainFunctionProcessingISRLockCounterIdxOfMainFunctionRxStruct(mainFunctionRxIdx), Com_GetRxMainFunctionProcessingISRLockThreshold());        /* SBSW_COM_CSL_VAR_ACCESS */
    }
  }
#endif

#if (COM_MAIN_FUNCTION_ROUTE_SIGNALS_API == STD_ON)
  {
    Com_MainFunctionRouteSignalsStructIterType mainFunctionRouteSignalsIdx = 0;
    for(; mainFunctionRouteSignalsIdx < Com_GetSizeOfMainFunctionRouteSignalsStruct(); mainFunctionRouteSignalsIdx++)
    {
# if (COM_GWEVENTCACHE == STD_ON)
      /* Initialize gateway event cache index (if configured) */
      if(Com_IsGwEventCacheUsedOfMainFunctionRouteSignalsStruct(mainFunctionRouteSignalsIdx))     /* COV_COM_GWEVENTCACHE_OF_MAINFUNCROUTE_USED_TX */
      {
        Com_SetGwEventCacheIdxOfGwEventCacheIndex(Com_GetGwEventCacheIndexIdxOfMainFunctionRouteSignalsStruct(mainFunctionRouteSignalsIdx), Com_GetGwEventCacheStartIdxOfMainFunctionRouteSignalsStruct(mainFunctionRouteSignalsIdx));    /* SBSW_COM_CSL_VAR_ACCESS */
      }

      /* Initialize ISR lock counters Gateway */
      Com_SetGatewayDescriptionProcessingISRLockCounter(Com_GetGatewayDescriptionProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStruct(mainFunctionRouteSignalsIdx), Com_GetGatewayDescriptionProcessingISRLockThreshold());        /* SBSW_COM_CSL_VAR_ACCESS */
# endif
# if (COM_GWINFO == STD_ON)
      Com_SetGatewayProcessingISRLockCounter(Com_GetGatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStruct(mainFunctionRouteSignalsIdx), Com_GetGatewayProcessingISRLockThreshold()); /* SBSW_COM_CSL_VAR_ACCESS */
# endif
    }
  }
#endif
}

#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)||(COM_RXTOUTINFO == STD_ON))
/**********************************************************************************************************************
Com_MainFunctionRxInternal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRxInternal(Com_MainFunctionRxStructIterType mainFunctionId)
{
/* #10 Check if COM is initialized */
  if(Com_IsInitialized())
  {
    /* #20 Check that id is smaller then the size of the MainFunctionRxStruct */
    if(mainFunctionId < Com_GetSizeOfMainFunctionRxStruct())    /* COV_COM_SILENT_TX */
    {
# if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
      /* #30 Do deferred processing */
      Com_RxDeferredPduProcessing(mainFunctionId);
# endif

# if (COM_RXTOUTINFO == STD_ON)
      /* #40 Do Rx deadline monitoring */
      Com_RxDlMon_MainFunctionRx(mainFunctionId);
# endif
    }
  }
}
#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
Com_MainFunctionTxInternal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
***********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionTxInternal(Com_MainFunctionTxStructIterType mainFunctionId)
{
/* #10 Check if COM is initialized */
  if(Com_IsInitialized())
  {
    /* #20 check that id is smaller then the size of the MainFunctionTxStruct */
    if(mainFunctionId < Com_GetSizeOfMainFunctionTxStruct())    /* COV_COM_SILENT_TX */
    {
# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON))
      /* #30 Do TxMode processing */
      Com_TxModeHdlr_MainFunctionTx_CycleCounter(mainFunctionId);
# endif

# if (COM_TXTOUTINFO == STD_ON)
      /* #40 Do Tx deadline monitoring, if configured */
      Com_TxDlMon_MainFunctionTx(mainFunctionId);
# endif

# if (COM_GWTIMEOUTINFO == STD_ON)
      /* #50 Handle GwTimeout, if configured */
      Com_GwTout_HandleCounter(mainFunctionId);
# endif

      /* #60 Process transmit request and initiate transition */
      Com_TxModeHdlr_MainFunctionTx_Transmit(mainFunctionId);

# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      /* #70 Process deferred Tx Confirmations */
      Com_TxNHdlr_MainFunctionTx(mainFunctionId);
# endif
    }
  }
}
#endif

#if (COM_MAIN_FUNCTION_ROUTE_SIGNALS_API == STD_ON)
/**********************************************************************************************************************
  Com_MainFunctionRouteSignalsInternal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRouteSignalsInternal(Com_MainFunctionRouteSignalsStructIterType mainFunctionId)
{
  if(Com_IsInitialized())
  {
    /* #10 Check that id is smaller then the size of the MainFunctionRouteSignalsStruct */
    if(mainFunctionId < Com_GetSizeOfMainFunctionRouteSignalsStruct())  /* COV_COM_SILENT_TX */
    {
      /* #20 Do description routing, if GENERATED_DESCRIPTION_ROUTING is on use the generated description routing function, otherwise use the static function */
# if (COM_GENERATED_DESCRIPTION_ROUTING == STD_ON)      /* COV_COM_VAR_ELISA_STD_OFF_XF */
      Com_RxGwMainFunctionRoute();
# elif (COM_GWEVENTCACHE == STD_ON)
      Com_MainFunction_GwDescription(mainFunctionId);
# endif

# if (COM_GWINFO == STD_ON)
      {
        if(Com_IsGwInfoIndUsedOfMainFunctionRouteSignalsStruct(mainFunctionId)) /* PRQA S 2991, 2995 */ /* MD_Com_2991, MD_Com_2995 */ /* COV_COM_MAINFUNCROUTE_NO_SIGGW_PARTITION_TX */
        {
          Com_GwInfoIterType gwInfoIdx;
          Com_GwInfoIndIterType gwInfoIndIdx = Com_GetGwInfoIndStartIdxOfMainFunctionRouteSignalsStruct(mainFunctionId);
          Com_GatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStructType gwProcessingISRlockCounterIdx =
            Com_GetGatewayProcessingISRLockCounterIdxOfMainFunctionRouteSignalsStruct(mainFunctionId);

          Com_SignalGw_EnterExclusiveArea();
          {
            /* #30 Iterate over all gateway event flags */
            for(; gwInfoIndIdx < Com_GetGwInfoIndEndIdxOfMainFunctionRouteSignalsStruct(mainFunctionId); gwInfoIndIdx++)
            {
              gwInfoIdx = Com_GetGwInfoInd(gwInfoIndIdx);
              /* #40 If a gateway event flag is set */
              if(Com_IsGwEvent(gwInfoIdx))
              {
                Com_SetGwEvent(gwInfoIdx, FALSE);       /* SBSW_COM_CSL02 */

#  if (COM_GWSIGMAPPINGENDIDXOFGWINFO == STD_ON)
                /* #50 Do normal signal routings */
                Com_MainFunction_SignalRoutings(gwInfoIdx);
#  endif

#  if (COM_GWSIGGRPMAPPINGENDIDXOFGWINFO == STD_ON)
                /* #60 Do normal signal group routings */
                Com_MainFunction_SignalGroupRoutings(gwInfoIdx);
#  endif
              }
              Com_SignalGw_ThresholdCheck(gwProcessingISRlockCounterIdx);
            }
          }
          Com_SignalGw_ExitExclusiveArea(gwProcessingISRlockCounterIdx);
        }
      }
# endif
    }
  }
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#define COM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */   /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  MISRA JUSTIFICATIONS
 **********************************************************************************************************************/
/* *INDENT-OFF* */
/* Justifications for module-specific MISRA deviations:

*/

/***********************************************************************************************************************
 *  SILENTBSW JUSTIFICATIONS
 **********************************************************************************************************************/
/* SBSW_JUSTIFICATION_BEGIN

SBSW_JUSTIFICATION_END */

/***********************************************************************************************************************
 *  COVERAGE JUSTIFICATIONS
 **********************************************************************************************************************/
/* START_COVERAGE_JUSTIFICATION

END_COVERAGE_JUSTIFICATION */
/* *INDENT-ON* */

/**********************************************************************************************************************
 *  END OF FILE: Com_MainFunctions.c
 *********************************************************************************************************************/
