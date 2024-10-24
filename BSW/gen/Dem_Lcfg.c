/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dem
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2024-10-24 15:37:49
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configuration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element        Description
  MaskedBits     contains bitcoded the boolean data of Dem_Cfg_EndsOnInitOfCycleIdTable, Dem_Cfg_UsedForAgingOfCycleIdTable
  OpCycleType    DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  OpCycleType                   Comment */
  { /*     0 */      0x01u, DEM_CFG_OPCYC_IGNITION },  /* [DemConf_DemOperationCycle_IgnitionCycle] */
  { /*     1 */      0x00u, DEM_CFG_OPCYC_OBD_DCY  },  /* [DemConf_DemOperationCycle_OBDDrivingCycle] */
  { /*     2 */      0x00u, DEM_CFG_OPCYC_POWER    },  /* [DemConf_DemOperationCycle_PowerCycle] */
  { /*     3 */      0x01u, DEM_CFG_OPCYC_WARMUP   }   /* [DemConf_DemOperationCycle_WarmUpCycle] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  StorageKind                       Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#NoDataCollectionConfigured] */
  { /*     1 */                                                                1u,                                                                  0u, DEM_CFG_EREC_TYPE_INTERNAL }   /* [#EdrOccurrenceCounter, Ext:ExtendedDataClass_83dcefb7, #ExtendedDataRecord] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element             Description
  DataIsStoredInNV
  ElementKind         DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ReadDataFunc        C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataIsStoredInNV  ElementKind                  ReadDataFunc                                                                Referable Keys */
  { /*     0 */            FALSE, DEM_CFG_DATAELEMENT_INVALID,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR },  /* [#NoDataElementConfigured] */
  { /*     1 */             TRUE, DEM_CFG_DATA_FROM_OCCCTR   ,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR }   /* [#OccurrenceCounter_Occurrence_Counter, EdrOccurrenceCounter] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x02u },  /* [DTC_0x000002, DTC_0x000003] */
  { /*     1 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  UdsDtc        
  FunctionalUnit
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UdsDtc       FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFu,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x00000002u,             0u },  /* [DTCClass_DTC_0x000002] */
  { /*     2 */ 0x00000003u,             0u }   /* [DTCClass_DTC_0x000003] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                              Description
  AgingCycleCounterThreshold           DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass. If AgingAllowedOfEventTable==FALSE and DemAgingCycleCounterThreshold does not exist '255' is set. If AgingAllowedOfEventTable==TRUE and DemAgingCycleCounterThreshold does not exist '0' is set.
  AgingCycleId                         DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  DtcTableIdx                          the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EventFailureCycleCounterThreshold    DemEventFailureCycleCounterThreshold of the DemEventParameter/DemEventClass, '0': is also default for unset parameter
  InitMonitorForEventIdx               the index of the 0:1 relation pointing to Dem_Cfg_InitMonitorForEvent
  MaskedBits                           contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_OBDVisibilityDelayedUntilDcyQualificationOfEventTable
  OperationCycleId                     DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    AgingCycleCounterThreshold  AgingCycleId                             DtcTableIdx  EventFailureCycleCounterThreshold  InitMonitorForEventIdx  MaskedBits  OperationCycleId                                 Referable Keys */
  { /*     0 */                       100u, DemConf_DemOperationCycle_IgnitionCycle,          1u,                                0u,                     1u,      0x00u, DemConf_DemOperationCycle_PowerCycle      },  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  { /*     1 */                       100u, DemConf_DemOperationCycle_IgnitionCycle,          1u,                                0u,                     1u,      0x00u, DemConf_DemOperationCycle_PowerCycle      },  /* [DTC_0x000002, #EdrOccurrenceCounter, Satellite#0] */
  { /*     2 */                        40u, DemConf_DemOperationCycle_WarmUpCycle  ,          2u,                                2u,                     0u,      0x05u, DemConf_DemOperationCycle_OBDDrivingCycle }   /* [DTC_0x000003, #EdrOccurrenceCounter, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                      Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE },  /* [#NoExtendedDataRecordConfigured] */
  { /*     1 */                                                                 1u,                                                                   0u }   /* [#ExtendedDataClass_83dcefb7, #EVENT_INVALID, DTC_0x000002, DTC_0x000003] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_InitMonitorForEvent
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_InitMonitorForEventFPtrType, DEM_CONST) Dem_Cfg_InitMonitorForEvent[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitMonitorForEvent                                      Referable Keys */
  /*     0 */ NULL_PTR                                            ,  /* [#NoCallbackInitMonitorConfigured] */
  /*     1 */ Rte_Call_CBInitEvt_DTC_0x000002_InitMonitorForEvent    /* [DTC_0x000002] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 2 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockId                                                                     Comment */
  /*     0 */ NvMConf_NvMBlockDescriptor_NvMBlockDescriptor_UserData0 /*NvMBlockId=2*/     ,  /* [DemNvRamBlockId] */
  /*     1 */ NvMConf_NvMBlockDescriptor_NvMBlockDescriptor_UserData0_003 /*NvMBlockId=5*/ ,  /* [DemNvRamBlockId_003] */
  /*     2 */ NvMConf_NvMBlockDescriptor_NvMBlockDescriptor_UserData0_001 /*NvMBlockId=3*/ ,  /* [DemNvRamBlockId_001] */
  /*     3 */ NvMConf_NvMBlockDescriptor_NvMBlockDescriptor_UserData0_002 /*NvMBlockId=4*/    /* [DemNvRamBlockId_002] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockIdToMemoryEntryId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockIdToMemoryEntryId
  \brief  The array contains these items: Admin, Status, 2 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryEntryHandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId_003] */
  /*     2 */ 0u                             ,  /* [DemNvRamBlockId_001] */
  /*     3 */ 1u                                /* [DemNvRamBlockId_002] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 2 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_003] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_001] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [DemNvRamBlockId_002] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 2 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [DemNvRamBlockId] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [DemNvRamBlockId_003] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [DemNvRamBlockId_001] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1())    /* [DemNvRamBlockId_002] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 2 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS * DEM_CFG_NUMBER_OF_SUBEVENT_DATA_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryEntry                                                                                          Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_001] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_002] */
  /*     2 */ &Dem_Cfg_GetReadoutBuffer(0).ReadOutBufferData[0].Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].ReadOutBufferData[0].Data] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 1514, 1533, 0759 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_MSR_Union */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionFulfilled
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionFulfilled
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state 'FALSE' not fulfilled, 'TRUE' fulfilled.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionFulfilledType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionFulfilled[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDataCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDataCommitNumber
  \brief  Index = Index in Dem_Cfg_Eventtable
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDataCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_EventDataCommitNumber[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0x000002, #EdrOccurrenceCounter, Satellite#0] */
  /*     2 */  /* [DTC_0x000003, #EdrOccurrenceCounter, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0x000002, #EdrOccurrenceCounter, Satellite#0] */
  /*     2 */  /* [DTC_0x000003, #EdrOccurrenceCounter, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataRecordIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataRecordIteratorTable
  \brief  size = 1
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_ExtendedDataRecordIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_ExtendedDataRecordIteratorTable[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_GlobalIndicatorStates
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_GlobalIndicatorStates
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_GlobalIndicatorStatesType, DEM_VAR_NOINIT) Dem_Cfg_GlobalIndicatorStates[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorBlinking
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorBlinking
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_IndicatorBlinkingType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorBlinking[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_IndicatorContinuous
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_IndicatorContinuous
  \brief  size = DEM_CFG_GLOBAL_INDICATOR_COUNT, inner dimension size = DEM_G_MAX_NUMBER_J1939_NODES
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_IndicatorContinuousType, DEM_VAR_NOINIT) Dem_Cfg_IndicatorContinuous[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 2 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_ZERO_INIT) Dem_Cfg_SatelliteInfo0 = {0};  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [MICROSAR/Generic (Vector), VARIANT-PRE-COMPILE, 21.05.00.140150]
**********************************************************************************************************************/

