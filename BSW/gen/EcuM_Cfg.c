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
 *            Module: EcuM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Cfg.c
 *   Generation Time: 2025-10-27 09:39:03
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/




/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* PRQA S 0310 EOF */ /* MD_CSL_0310 */
#include "EcuM_Cbk.h"

#define ECUM_PRIVATE_CFG_PARTLY_INCLUDE
#include "EcuM_PrivateCfg.h"
#undef ECUM_PRIVATE_CFG_PARTLY_INCLUDE /* PRQA S 0841 */ /* MD_EcuM_0841 */

#if((ECUM_CHANNELOFWAKEUPSOURCELIST == STD_ON) ||(ECUM_PNCOFCOMMPNCS == STD_ON) || (ECUM_SUPPORT_COMM == STD_ON))
#include "ComM.h"
#endif

#if !defined (ECUM_LOCAL) /* COV_ECUM_LOCAL */
# define ECUM_LOCAL static
#endif

#if !defined (ECUM_LOCAL_INLINE) /* COV_ECUM_LOCAL_INLINE */
# define ECUM_LOCAL_INLINE LOCAL_INLINE
#endif 

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
#define ECUM_START_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE0_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
ECUM_LOCAL VAR(EcuM_CoreStatusType, ECUM_VAR_NOINIT) EcuM_CoreStatus_SystemApplication_OsCore0;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define ECUM_STOP_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE0_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
#define ECUM_START_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE1_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
ECUM_LOCAL VAR(EcuM_CoreStatusType, ECUM_VAR_NOINIT) EcuM_CoreStatus_SystemApplication_OsCore1;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define ECUM_STOP_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE1_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
#define ECUM_START_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE2_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
ECUM_LOCAL VAR(EcuM_CoreStatusType, ECUM_VAR_NOINIT) EcuM_CoreStatus_SystemApplication_OsCore2;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define ECUM_STOP_SEC_VAR_PARTITION_SYSTEMAPPLICATION_OSCORE2_NOCACHE_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  EcuM_CoreStatus
**********************************************************************************************************************/
/** 
  \var    EcuM_CoreStatus
  \brief  Stores status of each core.
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(EcuM_CoreStatusArrayType, ECUM_CONST) EcuM_CoreStatus[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CoreStatus                                  */
  /*     0 */ &EcuM_CoreStatus_SystemApplication_OsCore0 ,
  /*     1 */ &EcuM_CoreStatus_SystemApplication_OsCore1 ,
  /*     2 */ &EcuM_CoreStatus_SystemApplication_OsCore2 
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_DriverInitOne
**********************************************************************************************************************/
/** 
  \var    EcuM_DriverInitOne
  \details
  Element     Description
  Function
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(EcuM_DriverInitOneType, ECUM_CONST) EcuM_DriverInitOne[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Function              */
  { /*     0 */ EcuM_AL_DriverInitOne }
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_PartitionData
**********************************************************************************************************************/
/** 
  \var    EcuM_PartitionData
  \brief  Contains all parameters configured for initialization of partitions.
  \details
  Element        Description
  Application    
  Resource   
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(EcuM_PartitionDataType, ECUM_CONST) EcuM_PartitionData[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Application                Resource         */
  { /*     0 */ SystemApplication_OsCore0, OsResource_Core0 },
  { /*     1 */ SystemApplication_OsCore1, OsResource_Core1 },
  { /*     2 */ SystemApplication_OsCore2, OsResource_Core2 }
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_WakeupSourceList
**********************************************************************************************************************/
/** 
  \var    EcuM_WakeupSourceList
  \brief  Contains all parameters configured for Wakeup Sources
  \details
  Element            Description
  Polling            Wakeup source will be polled in polling mode if value is TRUE
  Channel            Mapped ComM channel number - 255 if no ComM channel is assigned.
  CheckWakeupTime    Timeout for Check Wakeup Validation - if 0 no Validation is performed
  ValidationTime     Timeout for Wakeup Validation - if 0 no Validation is performed
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(EcuM_WakeupSourceListType, ECUM_CONST) EcuM_WakeupSourceList[13] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Polling  Channel                                                            CheckWakeupTime  ValidationTime        Comment                                                    Referable Keys */
  { /*     0 */   FALSE, 255                                                              ,              0u,             0u },  /* [ECUM_WKSOURCE_POWER]                          */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_POWER, ECUM_WKSOURCE_POWER] */
  { /*     1 */   FALSE, 255                                                              ,              0u,             0u },  /* [ECUM_WKSOURCE_RESET]                          */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_RESET, ECUM_WKSOURCE_RESET] */
  { /*     2 */   FALSE, 255                                                              ,              0u,             0u },  /* [ECUM_WKSOURCE_INTERNAL_RESET]                 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_RESET, ECUM_WKSOURCE_INTERNAL_RESET] */
  { /*     3 */   FALSE, 255                                                              ,              0u,             0u },  /* [ECUM_WKSOURCE_INTERNAL_WDG]                   */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_WDG, ECUM_WKSOURCE_INTERNAL_WDG] */
  { /*     4 */   FALSE, 255                                                              ,              0u,             0u },  /* [ECUM_WKSOURCE_EXTERNAL_WDG]                   */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_EXTERNAL_WDG, ECUM_WKSOURCE_EXTERNAL_WDG] */
  { /*     5 */    TRUE, ComMConf_ComMChannel_CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac,            200u,           200u },  /* [CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac, CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  { /*     6 */    TRUE, ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d,            200u,           200u },  /* [CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d, CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  { /*     7 */    TRUE, ComMConf_ComMChannel_CN_ATOM_CAN_XCP_f42a46d4                    ,              0u,             0u },  /* [CN_ATOM_CAN_XCP_f42a46d4]                     */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CAN_XCP_f42a46d4, CN_ATOM_CAN_XCP_f42a46d4] */
  { /*     8 */   FALSE, ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e                 ,              0u,             0u },  /* [CN_TC37X_VCU_CAN01_70b1f95e]                  */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_TC37X_VCU_CAN01_70b1f95e, CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*     9 */   FALSE, ComMConf_ComMChannel_CN_J1939_bms_dea99804                       ,              0u,             0u },  /* [CN_J1939_bms_dea99804]                        */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_J1939_bms_dea99804, CN_J1939_bms_dea99804] */
  { /*    10 */   FALSE, ComMConf_ComMChannel_CN_ATOM_HWLIN1_64cfd50f                     ,              0u,             0u },  /* [CN_ATOM_HWLIN1_64cfd50f]                      */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN1_64cfd50f, CN_ATOM_HWLIN1_64cfd50f] */
  { /*    11 */   FALSE, ComMConf_ComMChannel_CN_ATOM_HWLIN3_8ac1b423                     ,              0u,             0u },  /* [CN_ATOM_HWLIN3_8ac1b423]                      */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN3_8ac1b423, CN_ATOM_HWLIN3_8ac1b423] */
  { /*    12 */   FALSE, ComMConf_ComMChannel_CN_ATOM_HWLIN4_14a52180                     ,              0u,             0u }   /* [CN_ATOM_HWLIN4_14a52180]                      */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN4_14a52180, CN_ATOM_HWLIN4_14a52180] */
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_ModuleState
**********************************************************************************************************************/
#define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(EcuM_StateType, ECUM_VAR_NOINIT) EcuM_ModuleState;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_ValidationTimeoutTable
**********************************************************************************************************************/
/** 
  \var    EcuM_ValidationTimeoutTable
  \brief  Validation Timeout Table
*/ 
#define ECUM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(EcuM_ValidationTimeoutTableType, ECUM_VAR_NOINIT) EcuM_ValidationTimeoutTable[13];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_POWER, ECUM_WKSOURCE_POWER] */
  /*     1 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_RESET, ECUM_WKSOURCE_RESET] */
  /*     2 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_RESET, ECUM_WKSOURCE_INTERNAL_RESET] */
  /*     3 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_WDG, ECUM_WKSOURCE_INTERNAL_WDG] */
  /*     4 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_EXTERNAL_WDG, ECUM_WKSOURCE_EXTERNAL_WDG] */
  /*     5 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac, CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     6 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d, CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     7 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_CAN_XCP_f42a46d4, CN_ATOM_CAN_XCP_f42a46d4] */
  /*     8 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_TC37X_VCU_CAN01_70b1f95e, CN_TC37X_VCU_CAN01_70b1f95e] */
  /*     9 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_J1939_bms_dea99804, CN_J1939_bms_dea99804] */
  /*    10 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN1_64cfd50f, CN_ATOM_HWLIN1_64cfd50f] */
  /*    11 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN3_8ac1b423, CN_ATOM_HWLIN3_8ac1b423] */
  /*    12 */  /* [/ActiveEcuC/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_ATOM_HWLIN4_14a52180, CN_ATOM_HWLIN4_14a52180] */

#define ECUM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




