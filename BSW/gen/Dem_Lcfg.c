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
 *   Generation Time: 2025-03-06 13:46:45
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
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  StorageKind                       Referable Keys */
  { /*     0 */  0x0000u,             0u, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x0001u,             2u,                                                                2u,                                                                  0u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrExtendedDataRecord0x01, Ext:ExtendedDataClass_4f5344cd, #ExtendedDataRecord] */
  { /*     2 */  0x0002u,             1u,                                                                3u,                                                                  2u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrExtendedDataRecord0x02, Ext:ExtendedDataClass_4f5344cd, #ExtendedDataRecord] */
  { /*     3 */  0xF1A0u,             2u,                                                                4u,                                                                  3u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_0xF1A0, Ffm:FreezeFrameClass_8de652ca] */
  { /*     4 */  0xF1A1u,             2u,                                                                5u,                                                                  4u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_0xF1A1, Ffm:FreezeFrameClass_8de652ca] */
  { /*     5 */  0xF1A2u,             2u,                                                                6u,                                                                  5u, DEM_CFG_EREC_TYPE_USER     }   /* [#DidDID_0xF1A2, Ffm:FreezeFrameClass_8de652ca] */
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
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ElementKind                          ElementSize  ReadDataFunc                                                                                                         Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID        ,          0u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                          },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_AGINGCTR         ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                          },  /* [#ExtendedDataRecord0x02_Fault_Aging_Counte_Up, EdrExtendedDataRecord0x02] */
  { /*     2 */ DEM_CFG_DATA_FROM_AGINGCTR_INVERTED,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                          },  /* [#ExtendedDataRecord0x01_Fault_Aging_Counter, EdrExtendedDataRecord0x01] */
  { /*     3 */ DEM_CFG_DATA_FROM_OCCCTR           ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                          },  /* [#ExtendedDataRecord0x01_Occurence_Counter, EdrExtendedDataRecord0x01] */
  { /*     4 */ DEM_CFG_DATA_FROM_CBK              ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a2_F1A2_Data_ReadData },  /* [#DID_0xf1a2_F1A2_Data, DidDID_0xF1A2] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK              ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a1_F1A1_Data_ReadData },  /* [#DID_0xf1a1_F1A1_Data, DidDID_0xF1A1] */
  { /*     6 */ DEM_CFG_DATA_FROM_CBK              ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a0_F1A0_Data_ReadData }   /* [#DID_0xf1a0_F1A0_Data, DidDID_0xF1A0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTableCol2ElmtInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTableCol2ElmtInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                           3u,  /* [EdrExtendedDataRecord0x01] */
  /*     1 */                           2u,  /* [EdrExtendedDataRecord0x01] */
  /*     2 */                           1u,  /* [EdrExtendedDataRecord0x02] */
  /*     3 */                           6u,  /* [DidDID_0xF1A0] */
  /*     4 */                           5u,  /* [DidDID_0xF1A1] */
  /*     5 */                           4u   /* [DidDID_0xF1A2] */
};
#define DEM_STOP_SEC_CONST_8BIT
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
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */               -32,              40,                32,             -40, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u },  /* [DTC_0X000003] */
  { /*     1 */                -1,              40,                 1,             -40, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x02u },  /* [DTC_0X000002, DTC_0X000004] */
  { /*     2 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u }   /* [#EVENT_INVALID] */
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
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UdsDtc       FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFu,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x00000202u,             0u },  /* [DTCClass_DTC_0X000002] */
  { /*     2 */ 0x00000303u,             0u },  /* [DTCClass_DTC_0X000003] */
  { /*     3 */ 0x00000004u,             0u }   /* [DTCClass_DTC_0X000004] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupTableInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_EnableConditionGroupTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionGroupTableIndType, DEM_CONST) Dem_Cfg_EnableConditionGroupTableInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*     0 */                            0u,  /* [__Internal_ControlDtcSetting] */
  /*     1 */                            2u,  /* [__Internal_ControlDtcSetting] */
  /*     2 */                            1u,  /* [__Internal_ControlDtcSetting] */
  /*     3 */                            2u,  /* [Example_EnableCondition1] */
  /*     4 */                            1u,  /* [Example_EnableCondition1] */
  /*     5 */                            1u   /* [Example_EnableCondition2] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionTable
  \brief  Map each EnableCondition(Id) to the referring EnableConditionGroups - this is reverse direction of the AUTOSAR configuration model.
  \details
  Element                                 Description
  EnableConditionGroupTableIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
  EnableConditionGroupTableIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*     0 */                                 3u,                                   0u },
  { /*     1 */                                 5u,                                   3u },
  { /*     2 */                                 6u,                                   5u }
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
  Element                         Description
  DebounceTableIdx                the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EnableConditionGroupTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionGroupTable
  EventPriority                   DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255].
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DebounceTableIdx  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority        Referable Keys */
  { /*     0 */               1u,          1u,                           1u,            1u },  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  { /*     1 */               1u,          1u,                           1u,            1u },  /* [DTC_0X000002, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  { /*     2 */               0u,          2u,                           2u,            2u },  /* [DTC_0X000003, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  { /*     3 */               1u,          3u,                           0u,            4u }   /* [DTC_0X000004, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
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
  MaxRecordSize                         
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                MaxRecordSize        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE,            0u },  /* [#NoExtendedDataRecordConfigured] */
  { /*     1 */                                                                 2u,                                                                   0u,            2u }   /* [#ExtendedDataClass_4f5344cd, #EVENT_INVALID, DTC_0X000002, DTC_0X000003, DTC_0X000004] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameNumTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameNumTable
  \details
  Element     Description
  FFUpdate
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameNumTableType, DEM_CONST) Dem_Cfg_FreezeFrameNumTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FFUpdate        Referable Keys */
  { /*     0 */    FALSE },  /* [calcFFRecNumClass_02, #EVENT_INVALID, DTC_0X000002, DTC_0X000003, DTC_0X000004] */
  { /*     1 */     TRUE }   /* [calcFFRecNumClass_02, #EVENT_INVALID, DTC_0X000002, DTC_0X000003, DTC_0X000004] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0u,            0u },  /* [#NoFreezeFrameConfigured] */
  { /*     1 */                                                                3u,                                                                  0u,         6u,           14u }   /* [#FreezeFrameClass_8de652ca, #EVENT_INVALID, DTC_0X000002, DTC_0X000003, DTC_0X000004] */
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
  \brief  The array contains these items: Admin, Status, 3 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockId                                                           Comment */
  /*     0 */ NvMConf_NvMBlockDescriptor_NvM_DEM_AdminData /*NvMBlockId=2*/      ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ NvMConf_NvMBlockDescriptor_NvM_DEM_StatusData /*NvMBlockId=6*/     ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_0 /*NvMBlockId=3*/ ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_1 /*NvMBlockId=5*/ ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_2 /*NvMBlockId=4*/    /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
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
  \brief  The array contains these items: Admin, Status, 3 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryEntryHandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ 0u                             ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ 1u                             ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ 2u                                /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
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
  \brief  The array contains these items: Admin, Status, 3 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
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
  \brief  The array contains these items: Admin, Status, 3 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2())    /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
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
  \brief  The array contains these items: 3 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS * DEM_CFG_NUMBER_OF_SUBEVENT_DATA_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryEntry                                                                                          Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     2 */ &Dem_Cfg_GetPrimaryEntry_2()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     3 */ &Dem_Cfg_GetReadoutBuffer(0).ReadOutBufferData[0].Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].ReadOutBufferData[0].Data] */
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
VAR(Dem_Cfg_EnableConditionFulfilledType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionFulfilled[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_2f9cc720, __Internal_ControlDtcSetting, Example_EnableCondition1, Example_EnableCondition2] */
  /*     2 */  /* [#EnableConditionGroup_Example_EnableCondition1, __Internal_ControlDtcSetting, Example_EnableCondition1] */

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
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_2f9cc720, __Internal_ControlDtcSetting, Example_EnableCondition1, Example_EnableCondition2] */
  /*     2 */  /* [#EnableConditionGroup_Example_EnableCondition1, __Internal_ControlDtcSetting, Example_EnableCondition1] */

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
volatile VAR(Dem_Cfg_EventDataCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_EventDataCommitNumber[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0X000002, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  /*     2 */  /* [DTC_0X000003, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  /*     3 */  /* [DTC_0X000004, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */

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
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0X000002, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  /*     2 */  /* [DTC_0X000003, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */
  /*     3 */  /* [DTC_0X000004, #EdrExtendedDataRecord0x01, #EdrExtendedDataRecord0x02, Satellite#0] */

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
  \brief  The array contains these items: Admin, Status, 3 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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

