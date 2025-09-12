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
 *   Generation Time: 2025-09-12 10:25:41
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
  OpCycleType    DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    OpCycleType                Comment */
  { /*     0 */ DEM_CFG_OPCYC_OTHER },  /* [DemConf_DemOperationCycle_No_known_corrective_action] */
  { /*     1 */ DEM_CFG_OPCYC_POWER }   /* [DemConf_DemOperationCycle_PowerCycle] */
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
  IdNumber                           
  Trigger                                Trigger for storage and update of extended data records
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IdNumber  Trigger                     CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  StorageKind                     Referable Keys */
  { /*     0 */  0x0000u, DEM_CFG_TRIGGER_NONE      ,             0u, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE, DEM_CFG_EREC_TYPE_GLOBAL },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x0001u, DEM_CFG_TRIGGER_TESTFAILED,             3u,                                                                3u,                                                                  0u, DEM_CFG_EREC_TYPE_USER   },  /* [#EdrExtendedData, Ext:ExtendedDataClass_83dcefb7, #ExtendedDataRecord] */
  { /*     2 */  0x1D05u, DEM_CFG_TRIGGER_NONE      ,             8u,                                                                7u,                                                                  3u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidAC_charging_parameter, Ffm:FreezeFrameClass_d96350db] */
  { /*     3 */  0xF1A1u, DEM_CFG_TRIGGER_NONE      ,             2u,                                                                8u,                                                                  7u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidBattery_Voltage, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*     4 */  0xF1A4u, DEM_CFG_TRIGGER_NONE      ,             6u,                                                               14u,                                                                  8u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidDate_And_Time, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*     5 */  0x1D07u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               15u,                                                                 14u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidElectronic_lock_state, Ffm:FreezeFrameClass_376d31f7] */
  { /*     6 */  0xF1A7u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               16u,                                                                 15u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidGear, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*     7 */  0xF1A6u, DEM_CFG_TRIGGER_NONE      ,             2u,                                                               17u,                                                                 16u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidSOC, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*     8 */  0xF1A2u, DEM_CFG_TRIGGER_NONE      ,             3u,                                                               18u,                                                                 17u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidTotal_Odometer, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*     9 */  0x1D01u, DEM_CFG_TRIGGER_NONE      ,             8u,                                                               22u,                                                                 18u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVCU_AccPealparameter, Ffm:FreezeFrameClass_de0e94c2] */
  { /*    10 */  0xF1A5u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               23u,                                                                 22u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVCU_HVStatus, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*    11 */  0x1D08u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               24u,                                                                 23u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVCU_HV_InterLock_PWM_pfrequency, Ffm:FreezeFrameClass_a7d22c66] */
  { /*    12 */  0x1D09u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               25u,                                                                 24u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVCU_control_S2_status, Ffm:FreezeFrameClass_d0d51cf0] */
  { /*    13 */  0x1D11u, DEM_CFG_TRIGGER_NONE      ,             2u,                                                               27u,                                                                 25u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVCU_control_main_relay, Ffm:FreezeFrameClass_c715a583] */
  { /*    14 */  0xF1A0u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               28u,                                                                 27u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidVehicle_State, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
  { /*    15 */  0xF1A3u, DEM_CFG_TRIGGER_NONE      ,             2u,                                                               29u,                                                                 28u, DEM_CFG_EREC_TYPE_USER   }   /* [#DidVehicle_speed, Ffm:FreezeFrameClass_376d31f7, Ffm:FreezeFrameClass_5f5b5001, Ffm:FreezeFrameClass_a7d22c66, Ffm:FreezeFrameClass_c715a583, Ffm:FreezeFrameClass_d0d51cf0, Ffm:FreezeFrameClass_d96350db, Ffm:FreezeFrameClass_de0e94c2] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[62] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                             14u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     1 */                              3u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     2 */                              8u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     3 */                             15u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     4 */                              4u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     5 */                             10u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     6 */                              7u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     7 */                              6u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     8 */                              5u,  /* [Ffm:FreezeFrameClass_376d31f7] */
  /*     9 */                             14u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    10 */                              3u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    11 */                              8u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    12 */                             15u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    13 */                              4u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    14 */                             10u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    15 */                              7u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    16 */                              6u,  /* [Ffm:FreezeFrameClass_5f5b5001] */
  /*    17 */                             14u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    18 */                              3u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    19 */                              8u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    20 */                             15u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    21 */                              4u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    22 */                             10u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    23 */                              7u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    24 */                              6u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    25 */                             11u,  /* [Ffm:FreezeFrameClass_a7d22c66] */
  /*    26 */                             14u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    27 */                              3u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    28 */                              8u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    29 */                             15u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    30 */                              4u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    31 */                             10u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    32 */                              7u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    33 */                              6u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    34 */                             13u,  /* [Ffm:FreezeFrameClass_c715a583] */
  /*    35 */                             14u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    36 */                              3u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    37 */                              8u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    38 */                             15u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    39 */                              4u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    40 */                             10u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    41 */                              7u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    42 */                              6u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    43 */                             12u,  /* [Ffm:FreezeFrameClass_d0d51cf0] */
  /*    44 */                             14u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    45 */                              3u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    46 */                              8u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    47 */                             15u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    48 */                              4u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    49 */                             10u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*    50 */                              7u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    51 */                              6u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    52 */                              2u,  /* [Ffm:FreezeFrameClass_d96350db] */
  /*    53 */                             14u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    54 */                              3u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    55 */                              8u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    56 */                             15u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    57 */                              4u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    58 */                             10u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    59 */                              7u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    60 */                              6u,  /* [Ffm:FreezeFrameClass_de0e94c2] */
  /*    61 */                              9u   /* [Ffm:FreezeFrameClass_de0e94c2] */
};
#define DEM_STOP_SEC_CONST_8BIT
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
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[30] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ElementKind                  ElementSize  ReadDataFunc                                                                                                                                  Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID,          0u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                   },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a5_VCU_HVStatus_ReadData                       },  /* [#DID_0xf1a5_VCU_HVStatus, DidVCU_HVStatus] */
  { /*     2 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a7_Gear_ReadData                               },  /* [#DID_0xf1a7_Gear, DidGear] */
  { /*     3 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_ExtendedData_Fault_Aging_Counter_ReadData              },  /* [#ExtendedData_Fault_Aging_Counter, EdrExtendedData] */
  { /*     4 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a1_Battery_Voltage_ReadData                    },  /* [#DID_0xf1a1_Battery_Voltage, DidBattery_Voltage] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Hour_ReadData                 },  /* [#DID_0xf1a4_Date_And_Time_Hour, DidDate_And_Time] */
  { /*     6 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Day_ReadData                  },  /* [#DID_0xf1a4_Date_And_Time_Day, DidDate_And_Time] */
  { /*     7 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Minute_ReadData               },  /* [#DID_0xf1a4_Date_And_Time_Minute, DidDate_And_Time] */
  { /*     8 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d01_VCU_AccelerationPedal_ReadData              },  /* [#DID_0x1d01_VCU_AccelerationPedal, DidVCU_AccPealparameter] */
  { /*     9 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeVoltage_ReadData      },  /* [#DID_0x1d05_POD_OBC_OutputDCChargeVoltage, DidAC_charging_parameter] */
  { /*    10 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a0_Ignition_Switch_Signal_ReadData             },  /* [#DID_0xf1a0_Ignition_Switch_Signal, DidVehicle_State] */
  { /*    11 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_ExtendedData_Fault_Ocurrence_Counter_ReadData          },  /* [#ExtendedData_Fault_Ocurrence_Counter, EdrExtendedData] */
  { /*    12 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_2_voltage_ReadData },  /* [#DID_0x1d01_Accelerator_pedal_sensor_2_voltage, DidVCU_AccPealparameter] */
  { /*    13 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d11_Mainrealy1_ReadData                         },  /* [#DID_0x1d11_Mainrealy1, DidVCU_control_main_relay] */
  { /*    14 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d05_POD_OBC_OutputDCChargeCurrent_ReadData      },  /* [#DID_0x1d05_POD_OBC_OutputDCChargeCurrent, DidAC_charging_parameter] */
  { /*    15 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d01_Accelerator_pedal_sensor_1_voltage_ReadData },  /* [#DID_0x1d01_Accelerator_pedal_sensor_1_voltage, DidVCU_AccPealparameter] */
  { /*    16 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d08_VCU_HVIL_ReadData                           },  /* [#DID_0x1d08_VCU_HVIL, DidVCU_HV_InterLock_PWM_pfrequency] */
  { /*    17 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Year_ReadData                 },  /* [#DID_0xf1a4_Date_And_Time_Year, DidDate_And_Time] */
  { /*    18 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Month_ReadData                },  /* [#DID_0xf1a4_Date_And_Time_Month, DidDate_And_Time] */
  { /*    19 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a4_Date_And_Time_Second_ReadData               },  /* [#DID_0xf1a4_Date_And_Time_Second, DidDate_And_Time] */
  { /*    20 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d07_Electronic_lock_state_ReadData              },  /* [#DID_0x1d07_Electronic_lock_state, DidElectronic_lock_state] */
  { /*    21 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d09_New_Bit_Field_ReadData                      },  /* [#DID_0x1d09_New_Bit_Field, DidVCU_control_S2_status] */
  { /*    22 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d01_VCU_VehicleSpeed_ReadData                   },  /* [#DID_0x1d01_VCU_VehicleSpeed, DidVCU_AccPealparameter] */
  { /*    23 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a3_Vehicle_speed_ReadData                      },  /* [#DID_0xf1a3_Vehicle_speed, DidVehicle_speed] */
  { /*    24 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d11_Mainrelay2_ReadData                         },  /* [#DID_0x1d11_Mainrelay2, DidVCU_control_main_relay] */
  { /*    25 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_ExtendedData_Fault_Aged_Counter_ReadData               },  /* [#ExtendedData_Fault_Aged_Counter, EdrExtendedData] */
  { /*    26 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d05_POD_OBC_InputACVoltage_ReadData             },  /* [#DID_0x1d05_POD_OBC_InputACVoltage, DidAC_charging_parameter] */
  { /*    27 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x1d05_VCU_OBC_ChargeCurrentCommand_ReadData       },  /* [#DID_0x1d05_VCU_OBC_ChargeCurrentCommand, DidAC_charging_parameter] */
  { /*    28 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a6_SOC_ReadData                                },  /* [#DID_0xf1a6_SOC, DidSOC] */
  { /*    29 */ DEM_CFG_DATA_FROM_CBK      ,          3u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0xf1a2_Total_Odometer_ReadData                     }   /* [#DID_0xf1a2_Total_Odometer, DidTotal_Odometer] */
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
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[29] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                          11u,  /* [EdrExtendedData] */
  /*     1 */                          25u,  /* [EdrExtendedData] */
  /*     2 */                           3u,  /* [EdrExtendedData] */
  /*     3 */                          26u,  /* [DidAC_charging_parameter] */
  /*     4 */                          27u,  /* [DidAC_charging_parameter] */
  /*     5 */                          14u,  /* [DidAC_charging_parameter] */
  /*     6 */                           9u,  /* [DidAC_charging_parameter] */
  /*     7 */                           4u,  /* [DidBattery_Voltage] */
  /*     8 */                          19u,  /* [DidDate_And_Time] */
  /*     9 */                           7u,  /* [DidDate_And_Time] */
  /*    10 */                           5u,  /* [DidDate_And_Time] */
  /*    11 */                           6u,  /* [DidDate_And_Time] */
  /*    12 */                          18u,  /* [DidDate_And_Time] */
  /*    13 */                          17u,  /* [DidDate_And_Time] */
  /*    14 */                          20u,  /* [DidElectronic_lock_state] */
  /*    15 */                           2u,  /* [DidGear] */
  /*    16 */                          28u,  /* [DidSOC] */
  /*    17 */                          29u,  /* [DidTotal_Odometer] */
  /*    18 */                          22u,  /* [DidVCU_AccPealparameter] */
  /*    19 */                          15u,  /* [DidVCU_AccPealparameter] */
  /*    20 */                          12u,  /* [DidVCU_AccPealparameter] */
  /*    21 */                           8u,  /* [DidVCU_AccPealparameter] */
  /*    22 */                           1u,  /* [DidVCU_HVStatus] */
  /*    23 */                          16u,  /* [DidVCU_HV_InterLock_PWM_pfrequency] */
  /*    24 */                          21u,  /* [DidVCU_control_S2_status] */
  /*    25 */                          13u,  /* [DidVCU_control_main_relay] */
  /*    26 */                          24u,  /* [DidVCU_control_main_relay] */
  /*    27 */                          10u,  /* [DidVehicle_State] */
  /*    28 */                          23u   /* [DidVehicle_speed] */
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
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x02u },  /* [DTC_0x110012, DTC_0x110112, DTC_0x110211, DTC_0x110311, DTC_0x111152, DTC_0x111252, DTC_0x111352, DTC_0x111e71, DTC_0x111f16, DTC_0x11281e, DTC_0x11291c, DTC_0x113197, DTC_0x113297, DTC_0x113397, DTC_0x113497, DTC_0x113597, DTC_0x113697, DTC_0x113797, DTC_0x113897, DTC_0x113997, DTC_0x114097, DTC_0x114197, DTC_0x114297, DTC_0x114397, DTC_0x114497, DTC_0x114571, DTC_0x114697, DTC_0x114792, DTC_0x114892, DTC_0x114992, DTC_0x115092, DTC_0x115192, DTC_0x115292, DTC_0x115392, DTC_0x115492, DTC_0x115592, DTC_0x115692, DTC_0x11571e, DTC_0x115816, DTC_0x115a92, DTC_0x115c4b, DTC_0x115d4b, DTC_0x115e1a, DTC_0x116097, DTC_0x11611c, DTC_0x116197, DTC_0x11621c, DTC_0x116397, DTC_0x116494, DTC_0x116594, DTC_0x116617, DTC_0x116716, DTC_0x116819, DTC_0x116996, DTC_0x116a96, DTC_0x116c05, DTC_0x116d05, DTC_0x116e05, DTC_0x116f05, DTC_0x117097, DTC_0x117197, DTC_0x117205, DTC_0x117305, DTC_0x117405, DTC_0x117511, DTC_0x117617, DTC_0x117716, DTC_0x117819, DTC_0x11794b, DTC_0x117a4c, DTC_0x117b94, DTC_0x117c08, DTC_0x117d08, DTC_0x117e52, DTC_0x117f08, DTC_0x908017, DTC_0x908116, DTC_0x908255, DTC_0x908356, DTC_0xc07388, DTC_0xc07488, DTC_0xc10387, DTC_0xc10f87, DTC_0xc11087, DTC_0xc11187, DTC_0xc12987, DTC_0xc14087, DTC_0xc14687, DTC_0xc14787, DTC_0xc14887, DTC_0xc16687, DTC_0xc16b87, DTC_0xc19687, DTC_0xc19987, DTC_0xc19b87, DTC_0xc20087, DTC_0xc20187, DTC_0xc20287, DTC_0xc20700, DTC_0xc20787, DTC_0xc29887, DTC_0xc29a00, DTC_0xc29a87, DTC_0xd10587, DTC_0xd11b87, DTC_0xd12688, DTC_0xd13787] */
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
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[108] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UdsDtc       FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFu,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x00111E71u,             0u },  /* [DTCClass_DTC_0x111e71] */
  { /*     2 */ 0x00111F16u,             0u },  /* [DTCClass_DTC_0x111f16] */
  { /*     3 */ 0x00115A92u,             0u },  /* [DTCClass_DTC_0x115a92] */
  { /*     4 */ 0x00115C4Bu,             0u },  /* [DTCClass_DTC_0x115c4b] */
  { /*     5 */ 0x00115D4Bu,             0u },  /* [DTCClass_DTC_0x115d4b] */
  { /*     6 */ 0x00115E1Au,             0u },  /* [DTCClass_DTC_0x115e1a] */
  { /*     7 */ 0x00116A96u,             0u },  /* [DTCClass_DTC_0x116a96] */
  { /*     8 */ 0x00116C05u,             0u },  /* [DTCClass_DTC_0x116c05] */
  { /*     9 */ 0x00116D05u,             0u },  /* [DTCClass_DTC_0x116d05] */
  { /*    10 */ 0x00116E05u,             0u },  /* [DTCClass_DTC_0x116e05] */
  { /*    11 */ 0x00116F05u,             0u },  /* [DTCClass_DTC_0x116f05] */
  { /*    12 */ 0x00117A4Cu,             0u },  /* [DTCClass_DTC_0x117a4c] */
  { /*    13 */ 0x00117B94u,             0u },  /* [DTCClass_DTC_0x117b94] */
  { /*    14 */ 0x00117C08u,             0u },  /* [DTCClass_DTC_0x117c08] */
  { /*    15 */ 0x00117D08u,             0u },  /* [DTCClass_DTC_0x117d08] */
  { /*    16 */ 0x00117E52u,             0u },  /* [DTCClass_DTC_0x117e52] */
  { /*    17 */ 0x00117F08u,             0u },  /* [DTCClass_DTC_0x117f08] */
  { /*    18 */ 0x0011281Eu,             0u },  /* [DTCClass_DTC_0x11281e] */
  { /*    19 */ 0x0011291Cu,             0u },  /* [DTCClass_DTC_0x11291c] */
  { /*    20 */ 0x0011571Eu,             0u },  /* [DTCClass_DTC_0x11571e] */
  { /*    21 */ 0x0011611Cu,             0u },  /* [DTCClass_DTC_0x11611c] */
  { /*    22 */ 0x0011621Cu,             0u },  /* [DTCClass_DTC_0x11621c] */
  { /*    23 */ 0x0011794Bu,             0u },  /* [DTCClass_DTC_0x11794b] */
  { /*    24 */ 0x00110012u,             0u },  /* [DTCClass_DTC_0x110012] */
  { /*    25 */ 0x00110112u,             0u },  /* [DTCClass_DTC_0x110112] */
  { /*    26 */ 0x00110211u,             0u },  /* [DTCClass_DTC_0x110211] */
  { /*    27 */ 0x00110311u,             0u },  /* [DTCClass_DTC_0x110311] */
  { /*    28 */ 0x00111152u,             0u },  /* [DTCClass_DTC_0x111152] */
  { /*    29 */ 0x00111252u,             0u },  /* [DTCClass_DTC_0x111252] */
  { /*    30 */ 0x00111352u,             0u },  /* [DTCClass_DTC_0x111352] */
  { /*    31 */ 0x00113197u,             0u },  /* [DTCClass_DTC_0x113197] */
  { /*    32 */ 0x00113297u,             0u },  /* [DTCClass_DTC_0x113297] */
  { /*    33 */ 0x00113397u,             0u },  /* [DTCClass_DTC_0x113397] */
  { /*    34 */ 0x00113497u,             0u },  /* [DTCClass_DTC_0x113497] */
  { /*    35 */ 0x00113597u,             0u },  /* [DTCClass_DTC_0x113597] */
  { /*    36 */ 0x00113697u,             0u },  /* [DTCClass_DTC_0x113697] */
  { /*    37 */ 0x00113797u,             0u },  /* [DTCClass_DTC_0x113797] */
  { /*    38 */ 0x00113897u,             0u },  /* [DTCClass_DTC_0x113897] */
  { /*    39 */ 0x00113997u,             0u },  /* [DTCClass_DTC_0x113997] */
  { /*    40 */ 0x00114097u,             0u },  /* [DTCClass_DTC_0x114097] */
  { /*    41 */ 0x00114197u,             0u },  /* [DTCClass_DTC_0x114197] */
  { /*    42 */ 0x00114297u,             0u },  /* [DTCClass_DTC_0x114297] */
  { /*    43 */ 0x00114397u,             0u },  /* [DTCClass_DTC_0x114397] */
  { /*    44 */ 0x00114497u,             0u },  /* [DTCClass_DTC_0x114497] */
  { /*    45 */ 0x00114571u,             0u },  /* [DTCClass_DTC_0x114571] */
  { /*    46 */ 0x00114697u,             0u },  /* [DTCClass_DTC_0x114697] */
  { /*    47 */ 0x00114792u,             0u },  /* [DTCClass_DTC_0x114792] */
  { /*    48 */ 0x00114892u,             0u },  /* [DTCClass_DTC_0x114892] */
  { /*    49 */ 0x00114992u,             0u },  /* [DTCClass_DTC_0x114992] */
    /* Index    UdsDtc       FunctionalUnit        Referable Keys */
  { /*    50 */ 0x00115092u,             0u },  /* [DTCClass_DTC_0x115092] */
  { /*    51 */ 0x00115192u,             0u },  /* [DTCClass_DTC_0x115192] */
  { /*    52 */ 0x00115292u,             0u },  /* [DTCClass_DTC_0x115292] */
  { /*    53 */ 0x00115392u,             0u },  /* [DTCClass_DTC_0x115392] */
  { /*    54 */ 0x00115492u,             0u },  /* [DTCClass_DTC_0x115492] */
  { /*    55 */ 0x00115592u,             0u },  /* [DTCClass_DTC_0x115592] */
  { /*    56 */ 0x00115692u,             0u },  /* [DTCClass_DTC_0x115692] */
  { /*    57 */ 0x00115816u,             0u },  /* [DTCClass_DTC_0x115816] */
  { /*    58 */ 0x00116097u,             0u },  /* [DTCClass_DTC_0x116097] */
  { /*    59 */ 0x00116197u,             0u },  /* [DTCClass_DTC_0x116197] */
  { /*    60 */ 0x00116397u,             0u },  /* [DTCClass_DTC_0x116397] */
  { /*    61 */ 0x00116494u,             0u },  /* [DTCClass_DTC_0x116494] */
  { /*    62 */ 0x00116594u,             0u },  /* [DTCClass_DTC_0x116594] */
  { /*    63 */ 0x00116617u,             0u },  /* [DTCClass_DTC_0x116617] */
  { /*    64 */ 0x00116716u,             0u },  /* [DTCClass_DTC_0x116716] */
  { /*    65 */ 0x00116819u,             0u },  /* [DTCClass_DTC_0x116819] */
  { /*    66 */ 0x00116996u,             0u },  /* [DTCClass_DTC_0x116996] */
  { /*    67 */ 0x00117097u,             0u },  /* [DTCClass_DTC_0x117097] */
  { /*    68 */ 0x00117197u,             0u },  /* [DTCClass_DTC_0x117197] */
  { /*    69 */ 0x00117205u,             0u },  /* [DTCClass_DTC_0x117205] */
  { /*    70 */ 0x00117305u,             0u },  /* [DTCClass_DTC_0x117305] */
  { /*    71 */ 0x00117405u,             0u },  /* [DTCClass_DTC_0x117405] */
  { /*    72 */ 0x00117511u,             0u },  /* [DTCClass_DTC_0x117511] */
  { /*    73 */ 0x00117617u,             0u },  /* [DTCClass_DTC_0x117617] */
  { /*    74 */ 0x00117716u,             0u },  /* [DTCClass_DTC_0x117716] */
  { /*    75 */ 0x00117819u,             0u },  /* [DTCClass_DTC_0x117819] */
  { /*    76 */ 0x00908017u,             0u },  /* [DTCClass_DTC_0x908017] */
  { /*    77 */ 0x00908116u,             0u },  /* [DTCClass_DTC_0x908116] */
  { /*    78 */ 0x00908255u,             0u },  /* [DTCClass_DTC_0x908255] */
  { /*    79 */ 0x00908356u,             0u },  /* [DTCClass_DTC_0x908356] */
  { /*    80 */ 0x00C10F87u,             0u },  /* [DTCClass_DTC_0xc10f87] */
  { /*    81 */ 0x00C16B87u,             0u },  /* [DTCClass_DTC_0xc16b87] */
  { /*    82 */ 0x00C19B87u,             0u },  /* [DTCClass_DTC_0xc19b87] */
  { /*    83 */ 0x00C29A00u,             0u },  /* [DTCClass_DTC_0xc29a00] */
  { /*    84 */ 0x00C29A87u,             0u },  /* [DTCClass_DTC_0xc29a87] */
  { /*    85 */ 0x00C07388u,             0u },  /* [DTCClass_DTC_0xc07388] */
  { /*    86 */ 0x00C07488u,             0u },  /* [DTCClass_DTC_0xc07488] */
  { /*    87 */ 0x00C10387u,             0u },  /* [DTCClass_DTC_0xc10387] */
  { /*    88 */ 0x00C11087u,             0u },  /* [DTCClass_DTC_0xc11087] */
  { /*    89 */ 0x00C11187u,             0u },  /* [DTCClass_DTC_0xc11187] */
  { /*    90 */ 0x00C12987u,             0u },  /* [DTCClass_DTC_0xc12987] */
  { /*    91 */ 0x00C14087u,             0u },  /* [DTCClass_DTC_0xc14087] */
  { /*    92 */ 0x00C14687u,             0u },  /* [DTCClass_DTC_0xc14687] */
  { /*    93 */ 0x00C14787u,             0u },  /* [DTCClass_DTC_0xc14787] */
  { /*    94 */ 0x00C14887u,             0u },  /* [DTCClass_DTC_0xc14887] */
  { /*    95 */ 0x00C16687u,             0u },  /* [DTCClass_DTC_0xc16687] */
  { /*    96 */ 0x00C19687u,             0u },  /* [DTCClass_DTC_0xc19687] */
  { /*    97 */ 0x00C19987u,             0u },  /* [DTCClass_DTC_0xc19987] */
  { /*    98 */ 0x00C20087u,             0u },  /* [DTCClass_DTC_0xc20087] */
  { /*    99 */ 0x00C20187u,             0u },  /* [DTCClass_DTC_0xc20187] */
    /* Index    UdsDtc       FunctionalUnit        Referable Keys */
  { /*   100 */ 0x00C20287u,             0u },  /* [DTCClass_DTC_0xc20287] */
  { /*   101 */ 0x00C20700u,             0u },  /* [DTCClass_DTC_0xc20700] */
  { /*   102 */ 0x00C20787u,             0u },  /* [DTCClass_DTC_0xc20787] */
  { /*   103 */ 0x00C29887u,             0u },  /* [DTCClass_DTC_0xc29887] */
  { /*   104 */ 0x00D11B87u,             0u },  /* [DTCClass_DTC_0xd11b87] */
  { /*   105 */ 0x00D10587u,             0u },  /* [DTCClass_DTC_0xd10587] */
  { /*   106 */ 0x00D12688u,             0u },  /* [DTCClass_DTC_0xd12688] */
  { /*   107 */ 0x00D13787u,             0u }   /* [DTCClass_DTC_0xd13787] */
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
CONST(Dem_Cfg_EnableConditionGroupTableIndType, DEM_CONST) Dem_Cfg_EnableConditionGroupTableInd[507] = {  /* PRQA S 1514, 1533, 0612, 0613 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_BigStructure, MD_CSL_BigStructure */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*     0 */                            0u,  /* [__Internal_ControlDtcSetting] */
  /*     1 */                            7u,  /* [__Internal_ControlDtcSetting] */
  /*     2 */                            3u,  /* [__Internal_ControlDtcSetting] */
  /*     3 */                            8u,  /* [__Internal_ControlDtcSetting] */
  /*     4 */                            1u,  /* [__Internal_ControlDtcSetting] */
  /*     5 */                            2u,  /* [__Internal_ControlDtcSetting] */
  /*     6 */                            6u,  /* [__Internal_ControlDtcSetting] */
  /*     7 */                            5u,  /* [__Internal_ControlDtcSetting] */
  /*     8 */                           10u,  /* [__Internal_ControlDtcSetting] */
  /*     9 */                           11u,  /* [__Internal_ControlDtcSetting] */
  /*    10 */                            4u,  /* [__Internal_ControlDtcSetting] */
  /*    11 */                            9u,  /* [__Internal_ControlDtcSetting] */
  /*    12 */                            7u,  /* [All_001] */
  /*    13 */                            8u,  /* [All_001] */
  /*    14 */                            1u,  /* [All_001] */
  /*    15 */                            2u,  /* [All_001] */
  /*    16 */                            7u,  /* [Being_001] */
  /*    17 */                            8u,  /* [Busoff] */
  /*    18 */                            1u,  /* [Busoff] */
  /*    19 */                           11u,  /* [Busoff] */
  /*    20 */                            3u,  /* [CAN] */
  /*    21 */                            8u,  /* [CAN] */
  /*    22 */                            1u,  /* [CAN] */
  /*    23 */                            5u,  /* [CAN] */
  /*    24 */                           11u,  /* [CAN] */
  /*    25 */                            1u,  /* [CH] */
  /*    26 */                            7u,  /* [Conditions_001] */
  /*    27 */                            8u,  /* [Conditions_001] */
  /*    28 */                            1u,  /* [Conditions_001] */
  /*    29 */                            2u,  /* [Conditions_001] */
  /*    30 */                            7u,  /* [Confirmed] */
  /*    31 */                            8u,  /* [Confirmed] */
  /*    32 */                            1u,  /* [Confirmed] */
  /*    33 */                            2u,  /* [Confirmed] */
  /*    34 */                            5u,  /* [DC] */
  /*    35 */                            7u,  /* [DTC] */
  /*    36 */                            8u,  /* [DTC] */
  /*    37 */                            1u,  /* [DTC] */
  /*    38 */                            2u,  /* [DTC] */
  /*    39 */                            7u,  /* [Enable_001] */
  /*    40 */                            8u,  /* [Enable_001] */
  /*    41 */                            1u,  /* [Enable_001] */
  /*    42 */                            2u,  /* [Enable_001] */
  /*    43 */                            7u,  /* [If] */
  /*    44 */                            3u,  /* [If] */
  /*    45 */                            8u,  /* [If] */
  /*    46 */                            1u,  /* [If] */
  /*    47 */                            2u,  /* [If] */
  /*    48 */                            6u,  /* [If] */
  /*    49 */                            5u,  /* [If] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*    50 */                           10u,  /* [If] */
  /*    51 */                           11u,  /* [If] */
  /*    52 */                            4u,  /* [If] */
  /*    53 */                            9u,  /* [If] */
  /*    54 */                            7u,  /* [In_001] */
  /*    55 */                            8u,  /* [In_001] */
  /*    56 */                            1u,  /* [In_001] */
  /*    57 */                            2u,  /* [In_001] */
  /*    58 */                            7u,  /* [No] */
  /*    59 */                            3u,  /* [No] */
  /*    60 */                            8u,  /* [No] */
  /*    61 */                            1u,  /* [No] */
  /*    62 */                            2u,  /* [No] */
  /*    63 */                            6u,  /* [No] */
  /*    64 */                            5u,  /* [No] */
  /*    65 */                           10u,  /* [No] */
  /*    66 */                           11u,  /* [No] */
  /*    67 */                            4u,  /* [No] */
  /*    68 */                            9u,  /* [No] */
  /*    69 */                            7u,  /* [Note] */
  /*    70 */                            3u,  /* [Note] */
  /*    71 */                            8u,  /* [Note] */
  /*    72 */                            1u,  /* [Note] */
  /*    73 */                            2u,  /* [Note] */
  /*    74 */                            6u,  /* [Note] */
  /*    75 */                            5u,  /* [Note] */
  /*    76 */                           10u,  /* [Note] */
  /*    77 */                           11u,  /* [Note] */
  /*    78 */                            4u,  /* [Note] */
  /*    79 */                            9u,  /* [Note] */
  /*    80 */                            3u,  /* [PT] */
  /*    81 */                            8u,  /* [PT] */
  /*    82 */                           11u,  /* [PT] */
  /*    83 */                            7u,  /* [Reset_001] */
  /*    84 */                            8u,  /* [Reset_001] */
  /*    85 */                            1u,  /* [Reset_001] */
  /*    86 */                            2u,  /* [Reset_001] */
  /*    87 */                            7u,  /* [T_Delay] */
  /*    88 */                            8u,  /* [T_Delay] */
  /*    89 */                            1u,  /* [T_Delay] */
  /*    90 */                            2u,  /* [T_Delay] */
  /*    91 */                            7u,  /* [The] */
  /*    92 */                            3u,  /* [The] */
  /*    93 */                            8u,  /* [The] */
  /*    94 */                            1u,  /* [The] */
  /*    95 */                            2u,  /* [The] */
  /*    96 */                            6u,  /* [The] */
  /*    97 */                            5u,  /* [The] */
  /*    98 */                           10u,  /* [The] */
  /*    99 */                           11u,  /* [The] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   100 */                            9u,  /* [The] */
  /*   101 */                            7u,  /* [V] */
  /*   102 */                            3u,  /* [V] */
  /*   103 */                            8u,  /* [V] */
  /*   104 */                            1u,  /* [V] */
  /*   105 */                            2u,  /* [V] */
  /*   106 */                            6u,  /* [V] */
  /*   107 */                            5u,  /* [V] */
  /*   108 */                           10u,  /* [V] */
  /*   109 */                           11u,  /* [V] */
  /*   110 */                            9u,  /* [V] */
  /*   111 */                            8u,  /* [VCU] */
  /*   112 */                            1u,  /* [VCU] */
  /*   113 */                            2u,  /* [VCU] */
  /*   114 */                            3u,  /* [When] */
  /*   115 */                            6u,  /* [When] */
  /*   116 */                            5u,  /* [When] */
  /*   117 */                           10u,  /* [When] */
  /*   118 */                           11u,  /* [When] */
  /*   119 */                            4u,  /* [When] */
  /*   120 */                            9u,  /* [When] */
  /*   121 */                            7u,  /* [active] */
  /*   122 */                            3u,  /* [active] */
  /*   123 */                            8u,  /* [active] */
  /*   124 */                            1u,  /* [active] */
  /*   125 */                            2u,  /* [active] */
  /*   126 */                            6u,  /* [active] */
  /*   127 */                            5u,  /* [active] */
  /*   128 */                           10u,  /* [active] */
  /*   129 */                           11u,  /* [active] */
  /*   130 */                            4u,  /* [active] */
  /*   131 */                            9u,  /* [active] */
  /*   132 */                            3u,  /* [after] */
  /*   133 */                            6u,  /* [after] */
  /*   134 */                            5u,  /* [after] */
  /*   135 */                           11u,  /* [after] */
  /*   136 */                            4u,  /* [after] */
  /*   137 */                            9u,  /* [after] */
  /*   138 */                            7u,  /* [again] */
  /*   139 */                            3u,  /* [again] */
  /*   140 */                            8u,  /* [again] */
  /*   141 */                            1u,  /* [again] */
  /*   142 */                            2u,  /* [again] */
  /*   143 */                            6u,  /* [again] */
  /*   144 */                            5u,  /* [again] */
  /*   145 */                           10u,  /* [again] */
  /*   146 */                           11u,  /* [again] */
  /*   147 */                            4u,  /* [again] */
  /*   148 */                            9u,  /* [again] */
  /*   149 */                            3u,  /* [all] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   150 */                            6u,  /* [all] */
  /*   151 */                            5u,  /* [all] */
  /*   152 */                           10u,  /* [all] */
  /*   153 */                           11u,  /* [all] */
  /*   154 */                            4u,  /* [all] */
  /*   155 */                            9u,  /* [all] */
  /*   156 */                            7u,  /* [and] */
  /*   157 */                            8u,  /* [and] */
  /*   158 */                            1u,  /* [and] */
  /*   159 */                            2u,  /* [and] */
  /*   160 */                            7u,  /* [any] */
  /*   161 */                            3u,  /* [any] */
  /*   162 */                            8u,  /* [any] */
  /*   163 */                            1u,  /* [any] */
  /*   164 */                            2u,  /* [any] */
  /*   165 */                            6u,  /* [any] */
  /*   166 */                            5u,  /* [any] */
  /*   167 */                           10u,  /* [any] */
  /*   168 */                           11u,  /* [any] */
  /*   169 */                            4u,  /* [any] */
  /*   170 */                            9u,  /* [any] */
  /*   171 */                            7u,  /* [are] */
  /*   172 */                            3u,  /* [are] */
  /*   173 */                            8u,  /* [are] */
  /*   174 */                            1u,  /* [are] */
  /*   175 */                            2u,  /* [are] */
  /*   176 */                            6u,  /* [are] */
  /*   177 */                            5u,  /* [are] */
  /*   178 */                           10u,  /* [are] */
  /*   179 */                           11u,  /* [are] */
  /*   180 */                            4u,  /* [are] */
  /*   181 */                            9u,  /* [are] */
  /*   182 */                            7u,  /* [battery] */
  /*   183 */                            3u,  /* [battery] */
  /*   184 */                            8u,  /* [battery] */
  /*   185 */                            1u,  /* [battery] */
  /*   186 */                            2u,  /* [battery] */
  /*   187 */                            6u,  /* [battery] */
  /*   188 */                            5u,  /* [battery] */
  /*   189 */                           10u,  /* [battery] */
  /*   190 */                           11u,  /* [battery] */
  /*   191 */                            9u,  /* [battery] */
  /*   192 */                            3u,  /* [be] */
  /*   193 */                            6u,  /* [be] */
  /*   194 */                            5u,  /* [be] */
  /*   195 */                           10u,  /* [be] */
  /*   196 */                           11u,  /* [be] */
  /*   197 */                            4u,  /* [be] */
  /*   198 */                            9u,  /* [be] */
  /*   199 */                            3u,  /* [being] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   200 */                            6u,  /* [being] */
  /*   201 */                            5u,  /* [being] */
  /*   202 */                           11u,  /* [being] */
  /*   203 */                            4u,  /* [being] */
  /*   204 */                            9u,  /* [being] */
  /*   205 */                            5u,  /* [busoff_001] */
  /*   206 */                            3u,  /* [bussoff] */
  /*   207 */                            3u,  /* [completed] */
  /*   208 */                            6u,  /* [completed] */
  /*   209 */                            5u,  /* [completed] */
  /*   210 */                           10u,  /* [completed] */
  /*   211 */                           11u,  /* [completed] */
  /*   212 */                            4u,  /* [completed] */
  /*   213 */                            9u,  /* [completed] */
  /*   214 */                            7u,  /* [condition] */
  /*   215 */                            8u,  /* [condition] */
  /*   216 */                            1u,  /* [condition] */
  /*   217 */                            2u,  /* [condition] */
  /*   218 */                            7u,  /* [conditions] */
  /*   219 */                            3u,  /* [conditions] */
  /*   220 */                            8u,  /* [conditions] */
  /*   221 */                            1u,  /* [conditions] */
  /*   222 */                            2u,  /* [conditions] */
  /*   223 */                            6u,  /* [conditions] */
  /*   224 */                            5u,  /* [conditions] */
  /*   225 */                           10u,  /* [conditions] */
  /*   226 */                           11u,  /* [conditions] */
  /*   227 */                            4u,  /* [conditions] */
  /*   228 */                            9u,  /* [conditions] */
  /*   229 */                            3u,  /* [confirmation] */
  /*   230 */                            6u,  /* [confirmation] */
  /*   231 */                            5u,  /* [confirmation] */
  /*   232 */                           10u,  /* [confirmation] */
  /*   233 */                           11u,  /* [confirmation] */
  /*   234 */                            4u,  /* [confirmation] */
  /*   235 */                            9u,  /* [confirmation] */
  /*   236 */                            7u,  /* [criteria] */
  /*   237 */                            8u,  /* [criteria] */
  /*   238 */                            1u,  /* [criteria] */
  /*   239 */                            2u,  /* [criteria] */
  /*   240 */                            3u,  /* [diagnosis] */
  /*   241 */                            6u,  /* [diagnosis] */
  /*   242 */                            5u,  /* [diagnosis] */
  /*   243 */                           10u,  /* [diagnosis] */
  /*   244 */                           11u,  /* [diagnosis] */
  /*   245 */                            4u,  /* [diagnosis] */
  /*   246 */                            9u,  /* [diagnosis] */
  /*   247 */                            7u,  /* [do] */
  /*   248 */                            8u,  /* [do] */
  /*   249 */                            1u,  /* [do] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   250 */                            2u,  /* [do] */
  /*   251 */                            7u,  /* [does] */
  /*   252 */                            8u,  /* [does] */
  /*   253 */                            1u,  /* [does] */
  /*   254 */                            2u,  /* [does] */
  /*   255 */                            3u,  /* [during] */
  /*   256 */                            6u,  /* [during] */
  /*   257 */                            5u,  /* [during] */
  /*   258 */                           10u,  /* [during] */
  /*   259 */                           11u,  /* [during] */
  /*   260 */                            4u,  /* [during] */
  /*   261 */                            9u,  /* [during] */
  /*   262 */                            3u,  /* [enable] */
  /*   263 */                            6u,  /* [enable] */
  /*   264 */                            5u,  /* [enable] */
  /*   265 */                           10u,  /* [enable] */
  /*   266 */                           11u,  /* [enable] */
  /*   267 */                            4u,  /* [enable] */
  /*   268 */                            9u,  /* [enable] */
  /*   269 */                            7u,  /* [fault] */
  /*   270 */                            3u,  /* [fault] */
  /*   271 */                            8u,  /* [fault] */
  /*   272 */                            1u,  /* [fault] */
  /*   273 */                            2u,  /* [fault] */
  /*   274 */                            6u,  /* [fault] */
  /*   275 */                            5u,  /* [fault] */
  /*   276 */                           10u,  /* [fault] */
  /*   277 */                           11u,  /* [fault] */
  /*   278 */                            4u,  /* [fault] */
  /*   279 */                            9u,  /* [fault] */
  /*   280 */                            7u,  /* [following] */
  /*   281 */                            8u,  /* [following] */
  /*   282 */                            1u,  /* [following] */
  /*   283 */                            2u,  /* [following] */
  /*   284 */                            7u,  /* [for] */
  /*   285 */                            8u,  /* [for] */
  /*   286 */                            1u,  /* [for] */
  /*   287 */                            2u,  /* [for] */
  /*   288 */                            9u,  /* [for] */
  /*   289 */                            7u,  /* [if_001] */
  /*   290 */                            8u,  /* [if_001] */
  /*   291 */                            1u,  /* [if_001] */
  /*   292 */                            2u,  /* [if_001] */
  /*   293 */                            7u,  /* [in] */
  /*   294 */                            8u,  /* [in] */
  /*   295 */                            1u,  /* [in] */
  /*   296 */                            2u,  /* [in] */
  /*   297 */                            7u,  /* [is] */
  /*   298 */                            3u,  /* [is] */
  /*   299 */                            8u,  /* [is] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   300 */                            1u,  /* [is] */
  /*   301 */                            2u,  /* [is] */
  /*   302 */                            6u,  /* [is] */
  /*   303 */                            5u,  /* [is] */
  /*   304 */                           10u,  /* [is] */
  /*   305 */                           11u,  /* [is] */
  /*   306 */                            4u,  /* [is] */
  /*   307 */                            9u,  /* [is] */
  /*   308 */                            7u,  /* [last] */
  /*   309 */                            8u,  /* [last] */
  /*   310 */                            1u,  /* [last] */
  /*   311 */                            2u,  /* [last] */
  /*   312 */                            7u,  /* [meet] */
  /*   313 */                            8u,  /* [meet] */
  /*   314 */                            1u,  /* [meet] */
  /*   315 */                            2u,  /* [meet] */
  /*   316 */                            7u,  /* [met] */
  /*   317 */                            3u,  /* [met] */
  /*   318 */                            8u,  /* [met] */
  /*   319 */                            1u,  /* [met] */
  /*   320 */                            2u,  /* [met] */
  /*   321 */                            6u,  /* [met] */
  /*   322 */                            5u,  /* [met] */
  /*   323 */                           10u,  /* [met] */
  /*   324 */                           11u,  /* [met] */
  /*   325 */                            4u,  /* [met] */
  /*   326 */                            9u,  /* [met] */
  /*   327 */                            7u,  /* [ms] */
  /*   328 */                            3u,  /* [ms] */
  /*   329 */                            8u,  /* [ms] */
  /*   330 */                            1u,  /* [ms] */
  /*   331 */                            2u,  /* [ms] */
  /*   332 */                            6u,  /* [ms] */
  /*   333 */                            5u,  /* [ms] */
  /*   334 */                           11u,  /* [ms] */
  /*   335 */                            4u,  /* [ms] */
  /*   336 */                            9u,  /* [ms] */
  /*   337 */                            7u,  /* [normal] */
  /*   338 */                            3u,  /* [normal] */
  /*   339 */                            8u,  /* [normal] */
  /*   340 */                            1u,  /* [normal] */
  /*   341 */                            2u,  /* [normal] */
  /*   342 */                            6u,  /* [normal] */
  /*   343 */                            5u,  /* [normal] */
  /*   344 */                           10u,  /* [normal] */
  /*   345 */                           11u,  /* [normal] */
  /*   346 */                            9u,  /* [normal] */
  /*   347 */                            7u,  /* [not] */
  /*   348 */                            3u,  /* [not] */
  /*   349 */                            8u,  /* [not] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   350 */                            1u,  /* [not] */
  /*   351 */                            2u,  /* [not] */
  /*   352 */                            6u,  /* [not] */
  /*   353 */                            5u,  /* [not] */
  /*   354 */                           10u,  /* [not] */
  /*   355 */                           11u,  /* [not] */
  /*   356 */                            4u,  /* [not] */
  /*   357 */                            9u,  /* [not] */
  /*   358 */                            7u,  /* [of] */
  /*   359 */                            3u,  /* [of] */
  /*   360 */                            8u,  /* [of] */
  /*   361 */                            1u,  /* [of] */
  /*   362 */                            2u,  /* [of] */
  /*   363 */                            6u,  /* [of] */
  /*   364 */                            5u,  /* [of] */
  /*   365 */                           10u,  /* [of] */
  /*   366 */                           11u,  /* [of] */
  /*   367 */                            4u,  /* [of] */
  /*   368 */                            9u,  /* [of] */
  /*   369 */                            7u,  /* [or] */
  /*   370 */                            3u,  /* [or] */
  /*   371 */                            8u,  /* [or] */
  /*   372 */                            1u,  /* [or] */
  /*   373 */                            2u,  /* [or] */
  /*   374 */                            6u,  /* [or] */
  /*   375 */                            5u,  /* [or] */
  /*   376 */                           10u,  /* [or] */
  /*   377 */                           11u,  /* [or] */
  /*   378 */                            4u,  /* [or] */
  /*   379 */                            9u,  /* [or] */
  /*   380 */                            3u,  /* [performed] */
  /*   381 */                            6u,  /* [performed] */
  /*   382 */                            5u,  /* [performed] */
  /*   383 */                           10u,  /* [performed] */
  /*   384 */                           11u,  /* [performed] */
  /*   385 */                            4u,  /* [performed] */
  /*   386 */                            9u,  /* [performed] */
  /*   387 */                            7u,  /* [process] */
  /*   388 */                            3u,  /* [process] */
  /*   389 */                            8u,  /* [process] */
  /*   390 */                            1u,  /* [process] */
  /*   391 */                            2u,  /* [process] */
  /*   392 */                            6u,  /* [process] */
  /*   393 */                            5u,  /* [process] */
  /*   394 */                           10u,  /* [process] */
  /*   395 */                           11u,  /* [process] */
  /*   396 */                            4u,  /* [process] */
  /*   397 */                            9u,  /* [process] */
  /*   398 */                            7u,  /* [recovered] */
  /*   399 */                            8u,  /* [recovered] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   400 */                            1u,  /* [recovered] */
  /*   401 */                            2u,  /* [recovered] */
  /*   402 */                            7u,  /* [requirements] */
  /*   403 */                            8u,  /* [requirements] */
  /*   404 */                            1u,  /* [requirements] */
  /*   405 */                            2u,  /* [requirements] */
  /*   406 */                            7u,  /* [reset] */
  /*   407 */                            8u,  /* [reset] */
  /*   408 */                            1u,  /* [reset] */
  /*   409 */                            2u,  /* [reset] */
  /*   410 */                            7u,  /* [service] */
  /*   411 */                            3u,  /* [service] */
  /*   412 */                            8u,  /* [service] */
  /*   413 */                            1u,  /* [service] */
  /*   414 */                            2u,  /* [service] */
  /*   415 */                            6u,  /* [service] */
  /*   416 */                            5u,  /* [service] */
  /*   417 */                           10u,  /* [service] */
  /*   418 */                           11u,  /* [service] */
  /*   419 */                            4u,  /* [service] */
  /*   420 */                            9u,  /* [service] */
  /*   421 */                            3u,  /* [shall] */
  /*   422 */                            6u,  /* [shall] */
  /*   423 */                            5u,  /* [shall] */
  /*   424 */                           10u,  /* [shall] */
  /*   425 */                           11u,  /* [shall] */
  /*   426 */                            4u,  /* [shall] */
  /*   427 */                            9u,  /* [shall] */
  /*   428 */                            7u,  /* [simultaneously] */
  /*   429 */                            8u,  /* [simultaneously] */
  /*   430 */                            1u,  /* [simultaneously] */
  /*   431 */                            2u,  /* [simultaneously] */
  /*   432 */                            7u,  /* [start] */
  /*   433 */                            8u,  /* [start] */
  /*   434 */                            1u,  /* [start] */
  /*   435 */                            2u,  /* [start] */
  /*   436 */                            8u,  /* [status] */
  /*   437 */                            1u,  /* [status] */
  /*   438 */                            2u,  /* [status] */
  /*   439 */                            5u,  /* [status] */
  /*   440 */                           11u,  /* [status] */
  /*   441 */                            7u,  /* [the_001] */
  /*   442 */                            3u,  /* [the_001] */
  /*   443 */                            8u,  /* [the_001] */
  /*   444 */                            1u,  /* [the_001] */
  /*   445 */                            2u,  /* [the_001] */
  /*   446 */                            6u,  /* [the_001] */
  /*   447 */                            5u,  /* [the_001] */
  /*   448 */                           10u,  /* [the_001] */
  /*   449 */                           11u,  /* [the_001] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   450 */                            4u,  /* [the_001] */
  /*   451 */                            9u,  /* [the_001] */
  /*   452 */                            7u,  /* [timer] */
  /*   453 */                            8u,  /* [timer] */
  /*   454 */                            1u,  /* [timer] */
  /*   455 */                            2u,  /* [timer] */
  /*   456 */                            7u,  /* [timing] */
  /*   457 */                            8u,  /* [timing] */
  /*   458 */                            1u,  /* [timing] */
  /*   459 */                            2u,  /* [timing] */
  /*   460 */                            7u,  /* [to] */
  /*   461 */                            3u,  /* [to] */
  /*   462 */                            8u,  /* [to] */
  /*   463 */                            1u,  /* [to] */
  /*   464 */                            2u,  /* [to] */
  /*   465 */                            6u,  /* [to] */
  /*   466 */                            5u,  /* [to] */
  /*   467 */                           10u,  /* [to] */
  /*   468 */                           11u,  /* [to] */
  /*   469 */                            9u,  /* [to] */
  /*   470 */                            3u,  /* [trigger] */
  /*   471 */                            6u,  /* [trigger] */
  /*   472 */                            5u,  /* [trigger] */
  /*   473 */                           10u,  /* [trigger] */
  /*   474 */                           11u,  /* [trigger] */
  /*   475 */                            4u,  /* [trigger] */
  /*   476 */                            9u,  /* [trigger] */
  /*   477 */                            7u,  /* [up] */
  /*   478 */                            3u,  /* [up] */
  /*   479 */                            8u,  /* [up] */
  /*   480 */                            1u,  /* [up] */
  /*   481 */                            2u,  /* [up] */
  /*   482 */                            6u,  /* [up] */
  /*   483 */                            5u,  /* [up] */
  /*   484 */                           11u,  /* [up] */
  /*   485 */                            4u,  /* [up] */
  /*   486 */                            9u,  /* [up] */
  /*   487 */                            7u,  /* [voltage] */
  /*   488 */                            3u,  /* [voltage] */
  /*   489 */                            8u,  /* [voltage] */
  /*   490 */                            1u,  /* [voltage] */
  /*   491 */                            2u,  /* [voltage] */
  /*   492 */                            6u,  /* [voltage] */
  /*   493 */                            5u,  /* [voltage] */
  /*   494 */                           10u,  /* [voltage] */
  /*   495 */                           11u,  /* [voltage] */
  /*   496 */                            9u,  /* [voltage] */
  /*   497 */                            8u,  /* [wake] */
  /*   498 */                            1u,  /* [wake] */
  /*   499 */                            2u,  /* [wake] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*   500 */                            7u,  /* [waked] */
  /*   501 */                            3u,  /* [waked] */
  /*   502 */                            6u,  /* [waked] */
  /*   503 */                            5u,  /* [waked] */
  /*   504 */                           11u,  /* [waked] */
  /*   505 */                            4u,  /* [waked] */
  /*   506 */                            9u   /* [waked] */
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
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[78] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    EnableConditionGroupTableIndEndIdx                                   EnableConditionGroupTableIndStartIdx                                  */
  { /*     0 */                                                                 12u,                                                                    0u },
  { /*     1 */                                                                 16u,                                                                   12u },
  { /*     2 */                                                                 17u,                                                                   16u },
  { /*     3 */                                                                 20u,                                                                   17u },
  { /*     4 */                                                                 25u,                                                                   20u },
  { /*     5 */                                                                 26u,                                                                   25u },
  { /*     6 */                                                                 30u,                                                                   26u },
  { /*     7 */                                                                 34u,                                                                   30u },
  { /*     8 */                                                                 35u,                                                                   34u },
  { /*     9 */                                                                 39u,                                                                   35u },
  { /*    10 */                                                                 43u,                                                                   39u },
  { /*    11 */                                                                 54u,                                                                   43u },
  { /*    12 */                                                                 58u,                                                                   54u },
  { /*    13 */                                                                 69u,                                                                   58u },
  { /*    14 */                                                                 80u,                                                                   69u },
  { /*    15 */                                                                 83u,                                                                   80u },
  { /*    16 */                                                                 87u,                                                                   83u },
  { /*    17 */                                                                 91u,                                                                   87u },
  { /*    18 */                                                                101u,                                                                   91u },
  { /*    19 */                                                                111u,                                                                  101u },
  { /*    20 */                                                                114u,                                                                  111u },
  { /*    21 */                                                                121u,                                                                  114u },
  { /*    22 */                                                                132u,                                                                  121u },
  { /*    23 */                                                                138u,                                                                  132u },
  { /*    24 */                                                                149u,                                                                  138u },
  { /*    25 */                                                                156u,                                                                  149u },
  { /*    26 */                                                                160u,                                                                  156u },
  { /*    27 */                                                                171u,                                                                  160u },
  { /*    28 */                                                                182u,                                                                  171u },
  { /*    29 */                                                                192u,                                                                  182u },
  { /*    30 */                                                                199u,                                                                  192u },
  { /*    31 */                                                                205u,                                                                  199u },
  { /*    32 */                                                                206u,                                                                  205u },
  { /*    33 */                                                                207u,                                                                  206u },
  { /*    34 */                                                                214u,                                                                  207u },
  { /*    35 */                                                                218u,                                                                  214u },
  { /*    36 */                                                                229u,                                                                  218u },
  { /*    37 */                                                                236u,                                                                  229u },
  { /*    38 */                                                                240u,                                                                  236u },
  { /*    39 */                                                                247u,                                                                  240u },
  { /*    40 */                                                                251u,                                                                  247u },
  { /*    41 */                                                                255u,                                                                  251u },
  { /*    42 */                                                                262u,                                                                  255u },
  { /*    43 */                                                                269u,                                                                  262u },
  { /*    44 */                                                                280u,                                                                  269u },
  { /*    45 */                                                                284u,                                                                  280u },
  { /*    46 */                                                                289u,                                                                  284u },
  { /*    47 */                                                                293u,                                                                  289u },
  { /*    48 */                                                                297u,                                                                  293u },
  { /*    49 */                                                                308u,                                                                  297u },
    /* Index    EnableConditionGroupTableIndEndIdx                                   EnableConditionGroupTableIndStartIdx                                  */
  { /*    50 */                                                                312u,                                                                  308u },
  { /*    51 */                                                                316u,                                                                  312u },
  { /*    52 */                                                                327u,                                                                  316u },
  { /*    53 */                                                                337u,                                                                  327u },
  { /*    54 */                                                                347u,                                                                  337u },
  { /*    55 */                                                                358u,                                                                  347u },
  { /*    56 */                                                                369u,                                                                  358u },
  { /*    57 */                                                                380u,                                                                  369u },
  { /*    58 */                                                                387u,                                                                  380u },
  { /*    59 */                                                                398u,                                                                  387u },
  { /*    60 */                                                                402u,                                                                  398u },
  { /*    61 */                                                                406u,                                                                  402u },
  { /*    62 */                                                                410u,                                                                  406u },
  { /*    63 */                                                                421u,                                                                  410u },
  { /*    64 */ DEM_CFG_NO_ENABLECONDITIONGROUPTABLEINDENDIDXOFENABLECONDITIONTABLE, DEM_CFG_NO_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE },
  { /*    65 */                                                                428u,                                                                  421u },
  { /*    66 */                                                                432u,                                                                  428u },
  { /*    67 */                                                                436u,                                                                  432u },
  { /*    68 */                                                                441u,                                                                  436u },
  { /*    69 */                                                                452u,                                                                  441u },
  { /*    70 */                                                                456u,                                                                  452u },
  { /*    71 */                                                                460u,                                                                  456u },
  { /*    72 */                                                                470u,                                                                  460u },
  { /*    73 */                                                                477u,                                                                  470u },
  { /*    74 */                                                                487u,                                                                  477u },
  { /*    75 */                                                                497u,                                                                  487u },
  { /*    76 */                                                                500u,                                                                  497u },
  { /*    77 */                                                                507u,                                                                  500u }
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
  AgingCycleCounterThreshold      DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass. If AgingAllowedOfEventTable==FALSE and DemAgingCycleCounterThreshold does not exist '255' is set. If AgingAllowedOfEventTable==TRUE and DemAgingCycleCounterThreshold does not exist '0' is set.
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EnableConditionGroupTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionGroupTable
  EventPriority                   DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255].
  FreezeFrameTableStdFFIdx        the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable
  MaskedBits                      contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_OBDVisibilityDelayedUntilDcyQualificationOfEventTable
  OperationCycleId                DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[108] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  MaskedBits  OperationCycleId                                            Referable Keys */
  { /*     0 */                        40u,          1u,                          11u,            2u,                       1u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  { /*     1 */                        40u,          1u,                          11u,            2u,                       1u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x111e71, #EdrExtendedData, Satellite#0] */
  { /*     2 */                        40u,          2u,                          11u,            1u,                       6u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x111f16, #EdrExtendedData, Satellite#0] */
  { /*     3 */                        40u,          3u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115a92, #EdrExtendedData, Satellite#0] */
  { /*     4 */                        40u,          4u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115c4b, #EdrExtendedData, Satellite#0] */
  { /*     5 */                        40u,          5u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115d4b, #EdrExtendedData, Satellite#0] */
  { /*     6 */                        40u,          6u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_No_known_corrective_action },  /* [DTC_0x115e1a, #EdrExtendedData, Satellite#0] */
  { /*     7 */                        40u,          7u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116a96, #EdrExtendedData, Satellite#0] */
  { /*     8 */                        40u,          8u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116c05, #EdrExtendedData, Satellite#0] */
  { /*     9 */                        40u,          9u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116d05, #EdrExtendedData, Satellite#0] */
  { /*    10 */                        40u,         10u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116e05, #EdrExtendedData, Satellite#0] */
  { /*    11 */                        40u,         11u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116f05, #EdrExtendedData, Satellite#0] */
  { /*    12 */                        40u,         12u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117a4c, #EdrExtendedData, Satellite#0] */
  { /*    13 */                        40u,         13u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117b94, #EdrExtendedData, Satellite#0] */
  { /*    14 */                        40u,         14u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117c08, #EdrExtendedData, Satellite#0] */
  { /*    15 */                        40u,         15u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117d08, #EdrExtendedData, Satellite#0] */
  { /*    16 */                        40u,         16u,                          10u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117e52, #EdrExtendedData, Satellite#0] */
  { /*    17 */                        40u,         17u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117f08, #EdrExtendedData, Satellite#0] */
  { /*    18 */                        40u,         18u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11281e, #EdrExtendedData, Satellite#0] */
  { /*    19 */                        40u,         19u,                           6u,            1u,                       3u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11291c, #EdrExtendedData, Satellite#0] */
  { /*    20 */                        40u,         20u,                           6u,            1u,                       7u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11571e, #EdrExtendedData, Satellite#0] */
  { /*    21 */                        40u,         21u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11611c, #EdrExtendedData, Satellite#0] */
  { /*    22 */                        40u,         22u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11621c, #EdrExtendedData, Satellite#0] */
  { /*    23 */                        40u,         23u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x11794b, #EdrExtendedData, Satellite#0] */
  { /*    24 */                        40u,         24u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x110012, #EdrExtendedData, Satellite#0] */
  { /*    25 */                        40u,         25u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x110112, #EdrExtendedData, Satellite#0] */
  { /*    26 */                        40u,         26u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x110211, #EdrExtendedData, Satellite#0] */
  { /*    27 */                        40u,         27u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x110311, #EdrExtendedData, Satellite#0] */
  { /*    28 */                        40u,         28u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x111152, #EdrExtendedData, Satellite#0] */
  { /*    29 */                        40u,         29u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x111252, #EdrExtendedData, Satellite#0] */
  { /*    30 */                        40u,         30u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x111352, #EdrExtendedData, Satellite#0] */
  { /*    31 */                        40u,         31u,                          11u,            1u,                       5u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113197, #EdrExtendedData, Satellite#0] */
  { /*    32 */                        40u,         32u,                           3u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113297, #EdrExtendedData, Satellite#0] */
  { /*    33 */                        40u,         33u,                          11u,            1u,                       6u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113397, #EdrExtendedData, Satellite#0] */
  { /*    34 */                        40u,         34u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113497, #EdrExtendedData, Satellite#0] */
  { /*    35 */                        40u,         35u,                          11u,            1u,                       4u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113597, #EdrExtendedData, Satellite#0] */
  { /*    36 */                        40u,         36u,                          11u,            1u,                       4u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113697, #EdrExtendedData, Satellite#0] */
  { /*    37 */                        40u,         37u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113797, #EdrExtendedData, Satellite#0] */
  { /*    38 */                        40u,         38u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113897, #EdrExtendedData, Satellite#0] */
  { /*    39 */                        40u,         39u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x113997, #EdrExtendedData, Satellite#0] */
  { /*    40 */                        40u,         40u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114097, #EdrExtendedData, Satellite#0] */
  { /*    41 */                        40u,         41u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114197, #EdrExtendedData, Satellite#0] */
  { /*    42 */                        40u,         42u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114297, #EdrExtendedData, Satellite#0] */
  { /*    43 */                        40u,         43u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114397, #EdrExtendedData, Satellite#0] */
  { /*    44 */                        40u,         44u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114497, #EdrExtendedData, Satellite#0] */
  { /*    45 */                        40u,         45u,                          11u,            2u,                       1u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114571, #EdrExtendedData, Satellite#0] */
  { /*    46 */                        40u,         46u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114697, #EdrExtendedData, Satellite#0] */
  { /*    47 */                        40u,         47u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114792, #EdrExtendedData, Satellite#0] */
  { /*    48 */                        40u,         48u,                          11u,            1u,                       4u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114892, #EdrExtendedData, Satellite#0] */
  { /*    49 */                        40u,         49u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x114992, #EdrExtendedData, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  MaskedBits  OperationCycleId                                            Referable Keys */
  { /*    50 */                        40u,         50u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115092, #EdrExtendedData, Satellite#0] */
  { /*    51 */                        40u,         51u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115192, #EdrExtendedData, Satellite#0] */
  { /*    52 */                        40u,         52u,                          11u,            1u,                       4u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115292, #EdrExtendedData, Satellite#0] */
  { /*    53 */                        40u,         53u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115392, #EdrExtendedData, Satellite#0] */
  { /*    54 */                        40u,         54u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115492, #EdrExtendedData, Satellite#0] */
  { /*    55 */                        40u,         55u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115592, #EdrExtendedData, Satellite#0] */
  { /*    56 */                        40u,         56u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115692, #EdrExtendedData, Satellite#0] */
  { /*    57 */                        40u,         57u,                           6u,            1u,                       6u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x115816, #EdrExtendedData, Satellite#0] */
  { /*    58 */                        40u,         58u,                           5u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_No_known_corrective_action },  /* [DTC_0x116097, #EdrExtendedData, Satellite#0] */
  { /*    59 */                        40u,         59u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116197, #EdrExtendedData, Satellite#0] */
  { /*    60 */                        40u,         60u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116397, #EdrExtendedData, Satellite#0] */
  { /*    61 */                        40u,         61u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116494, #EdrExtendedData, Satellite#0] */
  { /*    62 */                        40u,         62u,                          11u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116594, #EdrExtendedData, Satellite#0] */
  { /*    63 */                        40u,         63u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116617, #EdrExtendedData, Satellite#0] */
  { /*    64 */                        40u,         64u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116716, #EdrExtendedData, Satellite#0] */
  { /*    65 */                        40u,         65u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116819, #EdrExtendedData, Satellite#0] */
  { /*    66 */                        40u,         66u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x116996, #EdrExtendedData, Satellite#0] */
  { /*    67 */                        40u,         67u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117097, #EdrExtendedData, Satellite#0] */
  { /*    68 */                        40u,         68u,                          11u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117197, #EdrExtendedData, Satellite#0] */
  { /*    69 */                        40u,         69u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117205, #EdrExtendedData, Satellite#0] */
  { /*    70 */                        40u,         70u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117305, #EdrExtendedData, Satellite#0] */
  { /*    71 */                        40u,         71u,                           0u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117405, #EdrExtendedData, Satellite#0] */
  { /*    72 */                         0u,         72u,                           6u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117511, #EdrExtendedData, Satellite#0] */
  { /*    73 */                        40u,         73u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117617, #EdrExtendedData, Satellite#0] */
  { /*    74 */                        40u,         74u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117716, #EdrExtendedData, Satellite#0] */
  { /*    75 */                        40u,         75u,                           0u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x117819, #EdrExtendedData, Satellite#0] */
  { /*    76 */                        40u,         76u,                           4u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x908017, #EdrExtendedData, Satellite#0] */
  { /*    77 */                        40u,         77u,                           4u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x908116, #EdrExtendedData, Satellite#0] */
  { /*    78 */                        40u,         78u,                           9u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x908255, #EdrExtendedData, Satellite#0] */
  { /*    79 */                        40u,         79u,                           6u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0x908356, #EdrExtendedData, Satellite#0] */
  { /*    80 */                        40u,         80u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc10f87, #EdrExtendedData, Satellite#0] */
  { /*    81 */                        40u,         81u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc16b87, #EdrExtendedData, Satellite#0] */
  { /*    82 */                        40u,         82u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc19b87, #EdrExtendedData, Satellite#0] */
  { /*    83 */                        40u,         83u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc29a00, #EdrExtendedData, Satellite#0] */
  { /*    84 */                        40u,         84u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc29a87, #EdrExtendedData, Satellite#0] */
  { /*    85 */                        40u,         85u,                           7u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc07388, #EdrExtendedData, Satellite#0] */
  { /*    86 */                        40u,         86u,                           7u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc07488, #EdrExtendedData, Satellite#0] */
  { /*    87 */                        40u,         87u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc10387, #EdrExtendedData, Satellite#0] */
  { /*    88 */                        40u,         88u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc11087, #EdrExtendedData, Satellite#0] */
  { /*    89 */                        40u,         89u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc11187, #EdrExtendedData, Satellite#0] */
  { /*    90 */                        40u,         90u,                           1u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc12987, #EdrExtendedData, Satellite#0] */
  { /*    91 */                        40u,         91u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc14087, #EdrExtendedData, Satellite#0] */
  { /*    92 */                        40u,         92u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc14687, #EdrExtendedData, Satellite#0] */
  { /*    93 */                        40u,         93u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc14787, #EdrExtendedData, Satellite#0] */
  { /*    94 */                        40u,         94u,                           1u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc14887, #EdrExtendedData, Satellite#0] */
  { /*    95 */                        40u,         95u,                           8u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc16687, #EdrExtendedData, Satellite#0] */
  { /*    96 */                        40u,         96u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc19687, #EdrExtendedData, Satellite#0] */
  { /*    97 */                        40u,         97u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc19987, #EdrExtendedData, Satellite#0] */
  { /*    98 */                        40u,         98u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc20087, #EdrExtendedData, Satellite#0] */
  { /*    99 */                        40u,         99u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc20187, #EdrExtendedData, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  FreezeFrameTableStdFFIdx  MaskedBits  OperationCycleId                                            Referable Keys */
  { /*   100 */                        40u,        100u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc20287, #EdrExtendedData, Satellite#0] */
  { /*   101 */                        40u,        101u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc20700, #EdrExtendedData, Satellite#0] */
  { /*   102 */                        40u,        102u,                           2u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc20787, #EdrExtendedData, Satellite#0] */
  { /*   103 */                         0u,        103u,                           8u,            1u,                       2u,      0x00u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xc29887, #EdrExtendedData, Satellite#0] */
  { /*   104 */                        40u,        104u,                           1u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xd11b87, #EdrExtendedData, Satellite#0] */
  { /*   105 */                        40u,        105u,                           1u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xd10587, #EdrExtendedData, Satellite#0] */
  { /*   106 */                        40u,        106u,                           7u,            1u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 },  /* [DTC_0xd12688, #EdrExtendedData, Satellite#0] */
  { /*   107 */                        40u,        107u,                           8u,            2u,                       2u,      0x04u, DemConf_DemOperationCycle_PowerCycle                 }   /* [DTC_0xd13787, #EdrExtendedData, Satellite#0] */
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
  { /*     1 */                                                                 1u,                                                                   0u,            3u }   /* [#ExtendedDataClass_83dcefb7, #EVENT_INVALID, DTC_0x111e71, DTC_0x111f16, DTC_0x115a92, DTC_0x115c4b, DTC_0x115d4b, DTC_0x115e1a, DTC_0x116a96, DTC_0x116c05, DTC_0x116d05, DTC_0x116e05, DTC_0x116f05, DTC_0x117a4c, DTC_0x117b94, DTC_0x117c08, DTC_0x117d08, DTC_0x117e52, DTC_0x117f08, DTC_0x11281e, DTC_0x11291c, DTC_0x11571e, DTC_0x11611c, DTC_0x11621c, DTC_0x11794b, DTC_0x110012, DTC_0x110112, DTC_0x110211, DTC_0x110311, DTC_0x111152, DTC_0x111252, DTC_0x111352, DTC_0x113197, DTC_0x113297, DTC_0x113397, DTC_0x113497, DTC_0x113597, DTC_0x113697, DTC_0x113797, DTC_0x113897, DTC_0x113997, DTC_0x114097, DTC_0x114197, DTC_0x114297, DTC_0x114397, DTC_0x114497, DTC_0x114571, DTC_0x114697, DTC_0x114792, DTC_0x114892, DTC_0x114992, DTC_0x115092, DTC_0x115192, DTC_0x115292, DTC_0x115392, DTC_0x115492, DTC_0x115592, DTC_0x115692, DTC_0x115816, DTC_0x116097, DTC_0x116197, DTC_0x116397, DTC_0x116494, DTC_0x116594, DTC_0x116617, DTC_0x116716, DTC_0x116819, DTC_0x116996, DTC_0x117097, DTC_0x117197, DTC_0x117205, DTC_0x117305, DTC_0x117405, DTC_0x117511, DTC_0x117617, DTC_0x117716, DTC_0x117819, DTC_0x908017, DTC_0x908116, DTC_0x908255, DTC_0x908356, DTC_0xc10f87, DTC_0xc16b87, DTC_0xc19b87, DTC_0xc29a00, DTC_0xc29a87, DTC_0xc07388, DTC_0xc07488, DTC_0xc10387, DTC_0xc11087, DTC_0xc11187, DTC_0xc12987, DTC_0xc14087, DTC_0xc14687, DTC_0xc14787, DTC_0xc14887, DTC_0xc16687, DTC_0xc19687, DTC_0xc19987, DTC_0xc20087, DTC_0xc20187, DTC_0xc20287, DTC_0xc20700, DTC_0xc20787, DTC_0xc29887, DTC_0xd11b87, DTC_0xd10587, DTC_0xd12688, DTC_0xd13787] */
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
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0u,            0u },  /* [#NoFreezeFrameConfigured] */
  { /*     1 */                                                                9u,                                                                  0u,        19u,           39u },  /* [#FreezeFrameClass_376d31f7, #EVENT_INVALID, DTC_0x111e71, DTC_0x114571] */
  { /*     2 */                                                               17u,                                                                  9u,        18u,           36u },  /* [#FreezeFrameClass_5f5b5001, DTC_0x115a92, DTC_0x115c4b, DTC_0x115d4b, DTC_0x115e1a, DTC_0x116a96, DTC_0x116c05, DTC_0x116d05, DTC_0x116e05, DTC_0x116f05, DTC_0x117a4c, DTC_0x117b94, DTC_0x117c08, DTC_0x117d08, DTC_0x117e52, DTC_0x117f08, DTC_0x11281e, DTC_0x11611c, DTC_0x11621c, DTC_0x11794b, DTC_0x110012, DTC_0x110112, DTC_0x110211, DTC_0x110311, DTC_0x111152, DTC_0x111252, DTC_0x111352, DTC_0x113297, DTC_0x113497, DTC_0x113797, DTC_0x113897, DTC_0x113997, DTC_0x114097, DTC_0x114197, DTC_0x114297, DTC_0x114397, DTC_0x114497, DTC_0x114697, DTC_0x114792, DTC_0x114992, DTC_0x115092, DTC_0x115192, DTC_0x115392, DTC_0x115492, DTC_0x115592, DTC_0x115692, DTC_0x116097, DTC_0x116197, DTC_0x116397, DTC_0x116494, DTC_0x116594, DTC_0x116617, DTC_0x116716, DTC_0x116819, DTC_0x116996, DTC_0x117097, DTC_0x117197, DTC_0x117205, DTC_0x117305, DTC_0x117405, DTC_0x117511, DTC_0x117617, DTC_0x117716, DTC_0x117819, DTC_0x908017, DTC_0x908116, DTC_0x908255, DTC_0x908356, DTC_0xc10f87, DTC_0xc16b87, DTC_0xc19b87, DTC_0xc29a00, DTC_0xc29a87, DTC_0xc07388, DTC_0xc07488, DTC_0xc10387, DTC_0xc11087, DTC_0xc11187, DTC_0xc12987, DTC_0xc14087, DTC_0xc14687, DTC_0xc14787, DTC_0xc14887, DTC_0xc16687, DTC_0xc19687, DTC_0xc19987, DTC_0xc20087, DTC_0xc20187, DTC_0xc20287, DTC_0xc20700, DTC_0xc20787, DTC_0xc29887, DTC_0xd11b87, DTC_0xd10587, DTC_0xd12688, DTC_0xd13787] */
  { /*     3 */                                                               26u,                                                                 17u,        19u,           39u },  /* [#FreezeFrameClass_a7d22c66, DTC_0x11291c] */
  { /*     4 */                                                               35u,                                                                 26u,        20u,           40u },  /* [#FreezeFrameClass_c715a583, DTC_0x113597, DTC_0x113697, DTC_0x114892, DTC_0x115292] */
  { /*     5 */                                                               44u,                                                                 35u,        19u,           39u },  /* [#FreezeFrameClass_d0d51cf0, DTC_0x113197] */
  { /*     6 */                                                               53u,                                                                 44u,        26u,           46u },  /* [#FreezeFrameClass_d96350db, DTC_0x111f16, DTC_0x113397, DTC_0x115816] */
  { /*     7 */                                                               62u,                                                                 53u,        26u,           46u }   /* [#FreezeFrameClass_de0e94c2, DTC_0x11571e] */
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
  \brief  The array contains these items: Admin, Status, 4 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockId                                                           Comment */
  /*     0 */ NvMConf_NvMBlockDescriptor_NvM_DEM_AdminData /*NvMBlockId=2*/      ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ NvMConf_NvMBlockDescriptor_NvM_DEM_StatusData /*NvMBlockId=7*/     ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_0 /*NvMBlockId=3*/ ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_1 /*NvMBlockId=6*/ ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_2 /*NvMBlockId=4*/ ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     5 */ NvMConf_NvMBlockDescriptor_NvM_DEM_PrimaryEntry_3 /*NvMBlockId=5*/    /* [DemNvRamBlockId_DEM_PrimaryEntry_3] */
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
  \brief  The array contains these items: Admin, Status, 4 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryEntryHandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ 0u                             ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ 1u                             ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ 2u                             ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     5 */ 3u                                /* [DemNvRamBlockId_DEM_PrimaryEntry_3] */
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
  \brief  The array contains these items: Admin, Status, 4 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [DemNvRamBlockId_DEM_PrimaryEntry_3] */
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
  \brief  The array contains these items: Admin, Status, 4 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [DemNvRamBlockId_AdminData] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [DemNvRamBlockId_DEM_StatusData] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2()) ,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3())    /* [DemNvRamBlockId_DEM_PrimaryEntry_3] */
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
  \brief  The array contains these items: 4 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS * DEM_CFG_NUMBER_OF_SUBEVENT_DATA_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     MemoryEntry                                                                                          Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_0] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_1] */
  /*     2 */ &Dem_Cfg_GetPrimaryEntry_2()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_2] */
  /*     3 */ &Dem_Cfg_GetPrimaryEntry_3()                             /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [DemNvRamBlockId_DEM_PrimaryEntry_3] */
  /*     4 */ &Dem_Cfg_GetReadoutBuffer(0).ReadOutBufferData[0].Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].ReadOutBufferData[0].Data] */
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
VAR(Dem_Cfg_EnableConditionFulfilledType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionFulfilled[78];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[12];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_35324f44, __Internal_ControlDtcSetting, All_001, Busoff, CAN, CH, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     2 */  /* [#EnableConditionGroup_4ffb066f, __Internal_ControlDtcSetting, All_001, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     3 */  /* [#EnableConditionGroup_58c4940f, __Internal_ControlDtcSetting, CAN, If, No, Note, PT, The, V, When, active, after, again, all, any, are, battery, be, being, bussoff, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*     4 */  /* [#EnableConditionGroup_93df7d19, __Internal_ControlDtcSetting, If, No, Note, When, active, after, again, all, any, are, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, not, of, or, performed, process, service, shall, the_001, trigger, up, waked] */
  /*     5 */  /* [#EnableConditionGroup_983000c1, __Internal_ControlDtcSetting, CAN, DC, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, busoff_001, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, status, the_001, to, trigger, up, voltage, waked] */
  /*     6 */  /* [#EnableConditionGroup_bbe52cb7, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*     7 */  /* [#EnableConditionGroup_c81fc67e, __Internal_ControlDtcSetting, All_001, Being_001, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, the_001, timer, timing, to, up, voltage, waked] */
  /*     8 */  /* [#EnableConditionGroup_f3616881, __Internal_ControlDtcSetting, All_001, Busoff, CAN, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, PT, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     9 */  /* [#EnableConditionGroup_fb7bc2c5, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, for, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*    10 */  /* [#EnableConditionGroup_fd8a9b69, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, again, all, any, are, battery, be, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, voltage] */
  /*    11 */  /* [#EnableConditionGroup_fdfec498, __Internal_ControlDtcSetting, Busoff, CAN, If, No, Note, PT, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, status, the_001, to, trigger, up, voltage, waked] */

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
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[12];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_35324f44, __Internal_ControlDtcSetting, All_001, Busoff, CAN, CH, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     2 */  /* [#EnableConditionGroup_4ffb066f, __Internal_ControlDtcSetting, All_001, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     3 */  /* [#EnableConditionGroup_58c4940f, __Internal_ControlDtcSetting, CAN, If, No, Note, PT, The, V, When, active, after, again, all, any, are, battery, be, being, bussoff, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*     4 */  /* [#EnableConditionGroup_93df7d19, __Internal_ControlDtcSetting, If, No, Note, When, active, after, again, all, any, are, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, not, of, or, performed, process, service, shall, the_001, trigger, up, waked] */
  /*     5 */  /* [#EnableConditionGroup_983000c1, __Internal_ControlDtcSetting, CAN, DC, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, busoff_001, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, status, the_001, to, trigger, up, voltage, waked] */
  /*     6 */  /* [#EnableConditionGroup_bbe52cb7, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*     7 */  /* [#EnableConditionGroup_c81fc67e, __Internal_ControlDtcSetting, All_001, Being_001, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, Reset_001, T_Delay, The, V, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, the_001, timer, timing, to, up, voltage, waked] */
  /*     8 */  /* [#EnableConditionGroup_f3616881, __Internal_ControlDtcSetting, All_001, Busoff, CAN, Conditions_001, Confirmed, DTC, Enable_001, If, In_001, No, Note, PT, Reset_001, T_Delay, The, V, VCU, active, again, and, any, are, battery, condition, conditions, criteria, do, does, fault, following, for, if_001, in, is, last, meet, met, ms, normal, not, of, or, process, recovered, requirements, reset, service, simultaneously, start, status, the_001, timer, timing, to, up, voltage, wake] */
  /*     9 */  /* [#EnableConditionGroup_fb7bc2c5, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, for, is, met, ms, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, up, voltage, waked] */
  /*    10 */  /* [#EnableConditionGroup_fd8a9b69, __Internal_ControlDtcSetting, If, No, Note, The, V, When, active, again, all, any, are, battery, be, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, normal, not, of, or, performed, process, service, shall, the_001, to, trigger, voltage] */
  /*    11 */  /* [#EnableConditionGroup_fdfec498, __Internal_ControlDtcSetting, Busoff, CAN, If, No, Note, PT, The, V, When, active, after, again, all, any, are, battery, be, being, completed, conditions, confirmation, diagnosis, during, enable, fault, is, met, ms, normal, not, of, or, performed, process, service, shall, status, the_001, to, trigger, up, voltage, waked] */

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
volatile VAR(Dem_Cfg_EventDataCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_EventDataCommitNumber[108];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[108];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0x111e71, #EdrExtendedData, Satellite#0] */
  /*     2 */  /* [DTC_0x111f16, #EdrExtendedData, Satellite#0] */
  /*     3 */  /* [DTC_0x115a92, #EdrExtendedData, Satellite#0] */
  /*     4 */  /* [DTC_0x115c4b, #EdrExtendedData, Satellite#0] */
  /*     5 */  /* [DTC_0x115d4b, #EdrExtendedData, Satellite#0] */
  /*     6 */  /* [DTC_0x115e1a, #EdrExtendedData, Satellite#0] */
  /*     7 */  /* [DTC_0x116a96, #EdrExtendedData, Satellite#0] */
  /*     8 */  /* [DTC_0x116c05, #EdrExtendedData, Satellite#0] */
  /*     9 */  /* [DTC_0x116d05, #EdrExtendedData, Satellite#0] */
  /*    10 */  /* [DTC_0x116e05, #EdrExtendedData, Satellite#0] */
  /*    11 */  /* [DTC_0x116f05, #EdrExtendedData, Satellite#0] */
  /*    12 */  /* [DTC_0x117a4c, #EdrExtendedData, Satellite#0] */
  /*    13 */  /* [DTC_0x117b94, #EdrExtendedData, Satellite#0] */
  /*    14 */  /* [DTC_0x117c08, #EdrExtendedData, Satellite#0] */
  /*    15 */  /* [DTC_0x117d08, #EdrExtendedData, Satellite#0] */
  /*    16 */  /* [DTC_0x117e52, #EdrExtendedData, Satellite#0] */
  /*    17 */  /* [DTC_0x117f08, #EdrExtendedData, Satellite#0] */
  /*    18 */  /* [DTC_0x11281e, #EdrExtendedData, Satellite#0] */
  /*    19 */  /* [DTC_0x11291c, #EdrExtendedData, Satellite#0] */
  /*    20 */  /* [DTC_0x11571e, #EdrExtendedData, Satellite#0] */
  /*    21 */  /* [DTC_0x11611c, #EdrExtendedData, Satellite#0] */
  /*    22 */  /* [DTC_0x11621c, #EdrExtendedData, Satellite#0] */
  /*    23 */  /* [DTC_0x11794b, #EdrExtendedData, Satellite#0] */
  /*    24 */  /* [DTC_0x110012, #EdrExtendedData, Satellite#0] */
  /*    25 */  /* [DTC_0x110112, #EdrExtendedData, Satellite#0] */
  /*    26 */  /* [DTC_0x110211, #EdrExtendedData, Satellite#0] */
  /*    27 */  /* [DTC_0x110311, #EdrExtendedData, Satellite#0] */
  /*    28 */  /* [DTC_0x111152, #EdrExtendedData, Satellite#0] */
  /*    29 */  /* [DTC_0x111252, #EdrExtendedData, Satellite#0] */
  /*    30 */  /* [DTC_0x111352, #EdrExtendedData, Satellite#0] */
  /*    31 */  /* [DTC_0x113197, #EdrExtendedData, Satellite#0] */
  /*    32 */  /* [DTC_0x113297, #EdrExtendedData, Satellite#0] */
  /*    33 */  /* [DTC_0x113397, #EdrExtendedData, Satellite#0] */
  /*    34 */  /* [DTC_0x113497, #EdrExtendedData, Satellite#0] */
  /*    35 */  /* [DTC_0x113597, #EdrExtendedData, Satellite#0] */
  /*    36 */  /* [DTC_0x113697, #EdrExtendedData, Satellite#0] */
  /*    37 */  /* [DTC_0x113797, #EdrExtendedData, Satellite#0] */
  /*    38 */  /* [DTC_0x113897, #EdrExtendedData, Satellite#0] */
  /*    39 */  /* [DTC_0x113997, #EdrExtendedData, Satellite#0] */
  /*    40 */  /* [DTC_0x114097, #EdrExtendedData, Satellite#0] */
  /*    41 */  /* [DTC_0x114197, #EdrExtendedData, Satellite#0] */
  /*    42 */  /* [DTC_0x114297, #EdrExtendedData, Satellite#0] */
  /*    43 */  /* [DTC_0x114397, #EdrExtendedData, Satellite#0] */
  /*    44 */  /* [DTC_0x114497, #EdrExtendedData, Satellite#0] */
  /*    45 */  /* [DTC_0x114571, #EdrExtendedData, Satellite#0] */
  /*    46 */  /* [DTC_0x114697, #EdrExtendedData, Satellite#0] */
  /*    47 */  /* [DTC_0x114792, #EdrExtendedData, Satellite#0] */
  /*    48 */  /* [DTC_0x114892, #EdrExtendedData, Satellite#0] */
  /*    49 */  /* [DTC_0x114992, #EdrExtendedData, Satellite#0] */
  /* Index        Referable Keys */
  /*    50 */  /* [DTC_0x115092, #EdrExtendedData, Satellite#0] */
  /*    51 */  /* [DTC_0x115192, #EdrExtendedData, Satellite#0] */
  /*    52 */  /* [DTC_0x115292, #EdrExtendedData, Satellite#0] */
  /*    53 */  /* [DTC_0x115392, #EdrExtendedData, Satellite#0] */
  /*    54 */  /* [DTC_0x115492, #EdrExtendedData, Satellite#0] */
  /*    55 */  /* [DTC_0x115592, #EdrExtendedData, Satellite#0] */
  /*    56 */  /* [DTC_0x115692, #EdrExtendedData, Satellite#0] */
  /*    57 */  /* [DTC_0x115816, #EdrExtendedData, Satellite#0] */
  /*    58 */  /* [DTC_0x116097, #EdrExtendedData, Satellite#0] */
  /*    59 */  /* [DTC_0x116197, #EdrExtendedData, Satellite#0] */
  /*    60 */  /* [DTC_0x116397, #EdrExtendedData, Satellite#0] */
  /*    61 */  /* [DTC_0x116494, #EdrExtendedData, Satellite#0] */
  /*    62 */  /* [DTC_0x116594, #EdrExtendedData, Satellite#0] */
  /*    63 */  /* [DTC_0x116617, #EdrExtendedData, Satellite#0] */
  /*    64 */  /* [DTC_0x116716, #EdrExtendedData, Satellite#0] */
  /*    65 */  /* [DTC_0x116819, #EdrExtendedData, Satellite#0] */
  /*    66 */  /* [DTC_0x116996, #EdrExtendedData, Satellite#0] */
  /*    67 */  /* [DTC_0x117097, #EdrExtendedData, Satellite#0] */
  /*    68 */  /* [DTC_0x117197, #EdrExtendedData, Satellite#0] */
  /*    69 */  /* [DTC_0x117205, #EdrExtendedData, Satellite#0] */
  /*    70 */  /* [DTC_0x117305, #EdrExtendedData, Satellite#0] */
  /*    71 */  /* [DTC_0x117405, #EdrExtendedData, Satellite#0] */
  /*    72 */  /* [DTC_0x117511, #EdrExtendedData, Satellite#0] */
  /*    73 */  /* [DTC_0x117617, #EdrExtendedData, Satellite#0] */
  /*    74 */  /* [DTC_0x117716, #EdrExtendedData, Satellite#0] */
  /*    75 */  /* [DTC_0x117819, #EdrExtendedData, Satellite#0] */
  /*    76 */  /* [DTC_0x908017, #EdrExtendedData, Satellite#0] */
  /*    77 */  /* [DTC_0x908116, #EdrExtendedData, Satellite#0] */
  /*    78 */  /* [DTC_0x908255, #EdrExtendedData, Satellite#0] */
  /*    79 */  /* [DTC_0x908356, #EdrExtendedData, Satellite#0] */
  /*    80 */  /* [DTC_0xc10f87, #EdrExtendedData, Satellite#0] */
  /*    81 */  /* [DTC_0xc16b87, #EdrExtendedData, Satellite#0] */
  /*    82 */  /* [DTC_0xc19b87, #EdrExtendedData, Satellite#0] */
  /*    83 */  /* [DTC_0xc29a00, #EdrExtendedData, Satellite#0] */
  /*    84 */  /* [DTC_0xc29a87, #EdrExtendedData, Satellite#0] */
  /*    85 */  /* [DTC_0xc07388, #EdrExtendedData, Satellite#0] */
  /*    86 */  /* [DTC_0xc07488, #EdrExtendedData, Satellite#0] */
  /*    87 */  /* [DTC_0xc10387, #EdrExtendedData, Satellite#0] */
  /*    88 */  /* [DTC_0xc11087, #EdrExtendedData, Satellite#0] */
  /*    89 */  /* [DTC_0xc11187, #EdrExtendedData, Satellite#0] */
  /*    90 */  /* [DTC_0xc12987, #EdrExtendedData, Satellite#0] */
  /*    91 */  /* [DTC_0xc14087, #EdrExtendedData, Satellite#0] */
  /*    92 */  /* [DTC_0xc14687, #EdrExtendedData, Satellite#0] */
  /*    93 */  /* [DTC_0xc14787, #EdrExtendedData, Satellite#0] */
  /*    94 */  /* [DTC_0xc14887, #EdrExtendedData, Satellite#0] */
  /*    95 */  /* [DTC_0xc16687, #EdrExtendedData, Satellite#0] */
  /*    96 */  /* [DTC_0xc19687, #EdrExtendedData, Satellite#0] */
  /*    97 */  /* [DTC_0xc19987, #EdrExtendedData, Satellite#0] */
  /*    98 */  /* [DTC_0xc20087, #EdrExtendedData, Satellite#0] */
  /*    99 */  /* [DTC_0xc20187, #EdrExtendedData, Satellite#0] */
  /* Index        Referable Keys */
  /*   100 */  /* [DTC_0xc20287, #EdrExtendedData, Satellite#0] */
  /*   101 */  /* [DTC_0xc20700, #EdrExtendedData, Satellite#0] */
  /*   102 */  /* [DTC_0xc20787, #EdrExtendedData, Satellite#0] */
  /*   103 */  /* [DTC_0xc29887, #EdrExtendedData, Satellite#0] */
  /*   104 */  /* [DTC_0xd11b87, #EdrExtendedData, Satellite#0] */
  /*   105 */  /* [DTC_0xd10587, #EdrExtendedData, Satellite#0] */
  /*   106 */  /* [DTC_0xd12688, #EdrExtendedData, Satellite#0] */
  /*   107 */  /* [DTC_0xd13787, #EdrExtendedData, Satellite#0] */

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
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[108];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [#EVENT_INVALID, #NoExtendedDataRecordConfigured, Satellite#0] */
  /*     1 */  /* [DTC_0x111e71, #EdrExtendedData, Satellite#0] */
  /*     2 */  /* [DTC_0x111f16, #EdrExtendedData, Satellite#0] */
  /*     3 */  /* [DTC_0x115a92, #EdrExtendedData, Satellite#0] */
  /*     4 */  /* [DTC_0x115c4b, #EdrExtendedData, Satellite#0] */
  /*     5 */  /* [DTC_0x115d4b, #EdrExtendedData, Satellite#0] */
  /*     6 */  /* [DTC_0x115e1a, #EdrExtendedData, Satellite#0] */
  /*     7 */  /* [DTC_0x116a96, #EdrExtendedData, Satellite#0] */
  /*     8 */  /* [DTC_0x116c05, #EdrExtendedData, Satellite#0] */
  /*     9 */  /* [DTC_0x116d05, #EdrExtendedData, Satellite#0] */
  /*    10 */  /* [DTC_0x116e05, #EdrExtendedData, Satellite#0] */
  /*    11 */  /* [DTC_0x116f05, #EdrExtendedData, Satellite#0] */
  /*    12 */  /* [DTC_0x117a4c, #EdrExtendedData, Satellite#0] */
  /*    13 */  /* [DTC_0x117b94, #EdrExtendedData, Satellite#0] */
  /*    14 */  /* [DTC_0x117c08, #EdrExtendedData, Satellite#0] */
  /*    15 */  /* [DTC_0x117d08, #EdrExtendedData, Satellite#0] */
  /*    16 */  /* [DTC_0x117e52, #EdrExtendedData, Satellite#0] */
  /*    17 */  /* [DTC_0x117f08, #EdrExtendedData, Satellite#0] */
  /*    18 */  /* [DTC_0x11281e, #EdrExtendedData, Satellite#0] */
  /*    19 */  /* [DTC_0x11291c, #EdrExtendedData, Satellite#0] */
  /*    20 */  /* [DTC_0x11571e, #EdrExtendedData, Satellite#0] */
  /*    21 */  /* [DTC_0x11611c, #EdrExtendedData, Satellite#0] */
  /*    22 */  /* [DTC_0x11621c, #EdrExtendedData, Satellite#0] */
  /*    23 */  /* [DTC_0x11794b, #EdrExtendedData, Satellite#0] */
  /*    24 */  /* [DTC_0x110012, #EdrExtendedData, Satellite#0] */
  /*    25 */  /* [DTC_0x110112, #EdrExtendedData, Satellite#0] */
  /*    26 */  /* [DTC_0x110211, #EdrExtendedData, Satellite#0] */
  /*    27 */  /* [DTC_0x110311, #EdrExtendedData, Satellite#0] */
  /*    28 */  /* [DTC_0x111152, #EdrExtendedData, Satellite#0] */
  /*    29 */  /* [DTC_0x111252, #EdrExtendedData, Satellite#0] */
  /*    30 */  /* [DTC_0x111352, #EdrExtendedData, Satellite#0] */
  /*    31 */  /* [DTC_0x113197, #EdrExtendedData, Satellite#0] */
  /*    32 */  /* [DTC_0x113297, #EdrExtendedData, Satellite#0] */
  /*    33 */  /* [DTC_0x113397, #EdrExtendedData, Satellite#0] */
  /*    34 */  /* [DTC_0x113497, #EdrExtendedData, Satellite#0] */
  /*    35 */  /* [DTC_0x113597, #EdrExtendedData, Satellite#0] */
  /*    36 */  /* [DTC_0x113697, #EdrExtendedData, Satellite#0] */
  /*    37 */  /* [DTC_0x113797, #EdrExtendedData, Satellite#0] */
  /*    38 */  /* [DTC_0x113897, #EdrExtendedData, Satellite#0] */
  /*    39 */  /* [DTC_0x113997, #EdrExtendedData, Satellite#0] */
  /*    40 */  /* [DTC_0x114097, #EdrExtendedData, Satellite#0] */
  /*    41 */  /* [DTC_0x114197, #EdrExtendedData, Satellite#0] */
  /*    42 */  /* [DTC_0x114297, #EdrExtendedData, Satellite#0] */
  /*    43 */  /* [DTC_0x114397, #EdrExtendedData, Satellite#0] */
  /*    44 */  /* [DTC_0x114497, #EdrExtendedData, Satellite#0] */
  /*    45 */  /* [DTC_0x114571, #EdrExtendedData, Satellite#0] */
  /*    46 */  /* [DTC_0x114697, #EdrExtendedData, Satellite#0] */
  /*    47 */  /* [DTC_0x114792, #EdrExtendedData, Satellite#0] */
  /*    48 */  /* [DTC_0x114892, #EdrExtendedData, Satellite#0] */
  /*    49 */  /* [DTC_0x114992, #EdrExtendedData, Satellite#0] */
  /* Index        Referable Keys */
  /*    50 */  /* [DTC_0x115092, #EdrExtendedData, Satellite#0] */
  /*    51 */  /* [DTC_0x115192, #EdrExtendedData, Satellite#0] */
  /*    52 */  /* [DTC_0x115292, #EdrExtendedData, Satellite#0] */
  /*    53 */  /* [DTC_0x115392, #EdrExtendedData, Satellite#0] */
  /*    54 */  /* [DTC_0x115492, #EdrExtendedData, Satellite#0] */
  /*    55 */  /* [DTC_0x115592, #EdrExtendedData, Satellite#0] */
  /*    56 */  /* [DTC_0x115692, #EdrExtendedData, Satellite#0] */
  /*    57 */  /* [DTC_0x115816, #EdrExtendedData, Satellite#0] */
  /*    58 */  /* [DTC_0x116097, #EdrExtendedData, Satellite#0] */
  /*    59 */  /* [DTC_0x116197, #EdrExtendedData, Satellite#0] */
  /*    60 */  /* [DTC_0x116397, #EdrExtendedData, Satellite#0] */
  /*    61 */  /* [DTC_0x116494, #EdrExtendedData, Satellite#0] */
  /*    62 */  /* [DTC_0x116594, #EdrExtendedData, Satellite#0] */
  /*    63 */  /* [DTC_0x116617, #EdrExtendedData, Satellite#0] */
  /*    64 */  /* [DTC_0x116716, #EdrExtendedData, Satellite#0] */
  /*    65 */  /* [DTC_0x116819, #EdrExtendedData, Satellite#0] */
  /*    66 */  /* [DTC_0x116996, #EdrExtendedData, Satellite#0] */
  /*    67 */  /* [DTC_0x117097, #EdrExtendedData, Satellite#0] */
  /*    68 */  /* [DTC_0x117197, #EdrExtendedData, Satellite#0] */
  /*    69 */  /* [DTC_0x117205, #EdrExtendedData, Satellite#0] */
  /*    70 */  /* [DTC_0x117305, #EdrExtendedData, Satellite#0] */
  /*    71 */  /* [DTC_0x117405, #EdrExtendedData, Satellite#0] */
  /*    72 */  /* [DTC_0x117511, #EdrExtendedData, Satellite#0] */
  /*    73 */  /* [DTC_0x117617, #EdrExtendedData, Satellite#0] */
  /*    74 */  /* [DTC_0x117716, #EdrExtendedData, Satellite#0] */
  /*    75 */  /* [DTC_0x117819, #EdrExtendedData, Satellite#0] */
  /*    76 */  /* [DTC_0x908017, #EdrExtendedData, Satellite#0] */
  /*    77 */  /* [DTC_0x908116, #EdrExtendedData, Satellite#0] */
  /*    78 */  /* [DTC_0x908255, #EdrExtendedData, Satellite#0] */
  /*    79 */  /* [DTC_0x908356, #EdrExtendedData, Satellite#0] */
  /*    80 */  /* [DTC_0xc10f87, #EdrExtendedData, Satellite#0] */
  /*    81 */  /* [DTC_0xc16b87, #EdrExtendedData, Satellite#0] */
  /*    82 */  /* [DTC_0xc19b87, #EdrExtendedData, Satellite#0] */
  /*    83 */  /* [DTC_0xc29a00, #EdrExtendedData, Satellite#0] */
  /*    84 */  /* [DTC_0xc29a87, #EdrExtendedData, Satellite#0] */
  /*    85 */  /* [DTC_0xc07388, #EdrExtendedData, Satellite#0] */
  /*    86 */  /* [DTC_0xc07488, #EdrExtendedData, Satellite#0] */
  /*    87 */  /* [DTC_0xc10387, #EdrExtendedData, Satellite#0] */
  /*    88 */  /* [DTC_0xc11087, #EdrExtendedData, Satellite#0] */
  /*    89 */  /* [DTC_0xc11187, #EdrExtendedData, Satellite#0] */
  /*    90 */  /* [DTC_0xc12987, #EdrExtendedData, Satellite#0] */
  /*    91 */  /* [DTC_0xc14087, #EdrExtendedData, Satellite#0] */
  /*    92 */  /* [DTC_0xc14687, #EdrExtendedData, Satellite#0] */
  /*    93 */  /* [DTC_0xc14787, #EdrExtendedData, Satellite#0] */
  /*    94 */  /* [DTC_0xc14887, #EdrExtendedData, Satellite#0] */
  /*    95 */  /* [DTC_0xc16687, #EdrExtendedData, Satellite#0] */
  /*    96 */  /* [DTC_0xc19687, #EdrExtendedData, Satellite#0] */
  /*    97 */  /* [DTC_0xc19987, #EdrExtendedData, Satellite#0] */
  /*    98 */  /* [DTC_0xc20087, #EdrExtendedData, Satellite#0] */
  /*    99 */  /* [DTC_0xc20187, #EdrExtendedData, Satellite#0] */
  /* Index        Referable Keys */
  /*   100 */  /* [DTC_0xc20287, #EdrExtendedData, Satellite#0] */
  /*   101 */  /* [DTC_0xc20700, #EdrExtendedData, Satellite#0] */
  /*   102 */  /* [DTC_0xc20787, #EdrExtendedData, Satellite#0] */
  /*   103 */  /* [DTC_0xc29887, #EdrExtendedData, Satellite#0] */
  /*   104 */  /* [DTC_0xd11b87, #EdrExtendedData, Satellite#0] */
  /*   105 */  /* [DTC_0xd10587, #EdrExtendedData, Satellite#0] */
  /*   106 */  /* [DTC_0xd12688, #EdrExtendedData, Satellite#0] */
  /*   107 */  /* [DTC_0xd13787, #EdrExtendedData, Satellite#0] */

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
  \brief  The array contains these items: Admin, Status, 4 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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

