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
 *            Module: ComM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Lcfg.c
 *   Generation Time: 2025-09-12 17:00:34
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#define CCL_ASR_COMM_LCFG_MODULE

/**********************************************************************************************************************
   LOCAL MISRA / PCLINT JUSTIFICATION
**********************************************************************************************************************/
/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2_0779 */
/* PRQA S 0777 EOF */ /* MD_MSR_Rule5.1_0777 */
/* PRQA S 3453 EOF */ /* MD_MSR_FctLikeMacro */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Private_Cfg.h"
#include "CanSM_ComM.h"
#include "CanSM.h"
#include "LinSM.h"


#include "Det.h"
#include "Rte_ComM.h"

# include "ComM_Lcfg.h"


#if defined( COMM_LOCAL )
#else
# define COMM_LOCAL static
#endif

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
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
  ComM_Channel
**********************************************************************************************************************/
/** 
  \var    ComM_Channel
  \brief  Contains PreCompile configuration parameters of channels
  \details
  Element                   Description
  BusType                   The channel bus type
  NmSupport                 Decides if the channel has NmType FULL or PASSIVE
  SilentSupport             Decides if the channel supports Silent mode (TRUE if ETH or CAN without J1939NM and Nm or NmLightSilentDuration)
  MinFullComTime            Minimal full communication time for the channel, relevant for NmTypes LIGHT and FULL
  NmLightDuration           Nm Light Timeout
  NmType                    The Network Management type of the channel
  WakeupState               Target channel state after a Passive Wake-up
  GetCurrentBusSMModeApi    Query the current communication mode from the corresponding BusSM
  RequestBusSMModeApi       Request the communication mode from the corresponding BusSM
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_ChannelType, COMM_CONST) ComM_Channel[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BusType            NmSupport  SilentSupport  MinFullComTime  NmLightDuration  NmType                      WakeupState                      GetCurrentBusSMModeApi   RequestBusSMModeApi         Referable Keys */
  { /*     0 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_0] */
  { /*     1 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_1] */
  { /*     2 */ COMM_BUS_TYPE_CAN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_2] */
  { /*     3 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_3] */
  { /*     4 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_4] */
  { /*     5 */ COMM_BUS_TYPE_LIN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, LinSM_GetCurrentComMode, LinSM_RequestComMode },  /* [ComMChannel_5] */
  { /*     6 */ COMM_BUS_TYPE_LIN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, LinSM_GetCurrentComMode, LinSM_RequestComMode },  /* [ComMChannel_6] */
  { /*     7 */ COMM_BUS_TYPE_LIN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, LinSM_GetCurrentComMode, LinSM_RequestComMode }   /* [ComMChannel_7] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ChannelPb
**********************************************************************************************************************/
/** 
  \var    ComM_ChannelPb
  \brief  Contains PostBuild configuration parameters of channels
  \details
  Element                   Description
  UserReqFullComEndIdx      the end index of the 0:n relation pointing to ComM_UserReqFullCom
  UserReqFullComStartIdx    the start index of the 0:n relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_ChannelPbType, COMM_CONST) ComM_ChannelPb[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UserReqFullComEndIdx  UserReqFullComStartIdx */
  { /*     0 */                   1u,                     0u },
  { /*     1 */                   2u,                     1u },
  { /*     2 */                   3u,                     2u },
  { /*     3 */                   4u,                     3u },
  { /*     4 */                   5u,                     4u },
  { /*     5 */                   6u,                     5u },
  { /*     6 */                   7u,                     6u },
  { /*     7 */                   8u,                     7u }
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    ComM_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to ComM_PCPartitionConfig
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_PartitionIdentifiersType, COMM_CONST) ComM_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV          PCPartitionConfigIdx */
  { /*     0 */ COMM_SINGLEPARTITION,                   0u }
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_User
**********************************************************************************************************************/
/** 
  \var    ComM_User
  \brief  Information about ComM users
  \details
  Element                 Description
  PncUser                 decides if a user is a partial network user or a direct channel user
  UserByteMaskEndIdx      the end index of the 0:n relation pointing to ComM_UserByteMask
  UserByteMaskStartIdx    the start index of the 0:n relation pointing to ComM_UserByteMask
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_UserType, COMM_CONST) ComM_User[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PncUser  UserByteMaskEndIdx  UserByteMaskStartIdx        Comment */
  { /*     0 */   FALSE,                 1u,                   0u },  /* [CN_ATOM_CANFD_Matrix_CH_V600_202502_15d11ab0] */
  { /*     1 */   FALSE,                 2u,                   1u },  /* [CN_ATOM_CAN_Matrix_PT_V600_20250211_cc0efb79] */
  { /*     2 */   FALSE,                 3u,                   2u },  /* [CN_ATOM_CAN_XCP_ca35a39e] */
  { /*     3 */   FALSE,                 4u,                   3u },  /* [CN_TC37X_VCU_CAN01_5e76994c] */
  { /*     4 */   FALSE,                 5u,                   4u },  /* [CN_TC37X_VCU_CAN03_5a834971] */
  { /*     5 */   FALSE,                 6u,                   5u },  /* [CN_LIN00_984dfd9e] */
  { /*     6 */   FALSE,                 7u,                   6u },  /* [CN_LIN01_778f96a0] */
  { /*     7 */   FALSE,                 8u,                   7u }   /* [CN_LIN02_9cb82da3] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserByteMask
  \brief  Each user has N entries in this array (N = # channels attached to this user, directly or through PNC). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqFullCom
  \details
  Element              Description
  Channel              ID of the channel which is requested by this entry.
  UserReqFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Channel  UserReqFullComIdx        Referable Keys */
  { /*     0 */      0u,                0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_15d11ab0] */
  { /*     1 */      1u,                1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_cc0efb79] */
  { /*     2 */      2u,                2u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_XCP_ca35a39e] */
  { /*     3 */      3u,                3u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_5e76994c] */
  { /*     4 */      4u,                4u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN03_5a834971] */
  { /*     5 */      5u,                5u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN00_984dfd9e] */
  { /*     6 */      6u,                6u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN01_778f96a0] */
  { /*     7 */      7u,                7u }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN02_9cb82da3] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ActiveComMode
**********************************************************************************************************************/
/** 
  \var    ComM_ActiveComMode
  \brief  Current state of a channel
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_ActiveComModeUType, COMM_VAR_NOINIT) ComM_ActiveComMode;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_BusComModeReq
**********************************************************************************************************************/
/** 
  \var    ComM_BusComModeReq
  \brief  State requested externally (bus)
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_BusComModeReqUType, COMM_VAR_NOINIT) ComM_BusComModeReq;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_BusSmState
**********************************************************************************************************************/
/** 
  \var    ComM_BusSmState
  \brief  Communication state of a channel provided by BusSM
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_BusSmStateUType, COMM_VAR_NOINIT) ComM_BusSmState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ComAllowed
**********************************************************************************************************************/
/** 
  \var    ComM_ComAllowed
  \brief  Communication allowed status of a channel
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_ComAllowedUType, COMM_VAR_NOINIT) ComM_ComAllowed;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_DcmRequestActive
**********************************************************************************************************************/
/** 
  \var    ComM_DcmRequestActive
  \brief  Status of Dcm active diagnostic request, TRUE if requested, FALSE otherwise
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_DcmRequestActiveUType, COMM_VAR_NOINIT) ComM_DcmRequestActive;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_EcuMWakeUpIndicated
**********************************************************************************************************************/
/** 
  \var    ComM_EcuMWakeUpIndicated
  \brief  Passive Wakeup indicated by EcuM (ComM_EcuM_WakeUpIndication()). TRUE if indicated, FALSE otherwise.
*/ 
#define COMM_START_SEC_VAR_NOCACHE_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(ComM_EcuMWakeUpIndicatedType, COMM_VAR_NOINIT) ComM_EcuMWakeUpIndicated[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COMM_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_Inhibition
**********************************************************************************************************************/
/** 
  \var    ComM_Inhibition
  \brief  Status of mode limitation (inhibition)
*/ 
#define COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_InhibitionType, COMM_NVM_DATA_NOINIT) ComM_Inhibition;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_InitStatus
**********************************************************************************************************************/
/** 
  \var    ComM_InitStatus
  \brief  Initialization state of ComM
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_InitStatusType, COMM_VAR_NOINIT) ComM_InitStatus;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_MinFullComModeTimer
**********************************************************************************************************************/
/** 
  \var    ComM_MinFullComModeTimer
  \brief  The current value of Min Full Com Mode timer
*/ 
#define COMM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_MinFullComModeTimerUType, COMM_VAR_NOINIT) ComM_MinFullComModeTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_NmLightTimer
**********************************************************************************************************************/
/** 
  \var    ComM_NmLightTimer
  \brief  The current value of Nm Light or Nm Light Silent timer
*/ 
#define COMM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_NmLightTimerUType, COMM_VAR_NOINIT) ComM_NmLightTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */

#define COMM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_NmStartUpIndicated
**********************************************************************************************************************/
/** 
  \var    ComM_NmStartUpIndicated
  \brief  Passive Wakeup indicated by Nm (ComM_Nm_NetworkStartIndication() or ComM_Nm_RestartIndication()). TRUE if indicated, FALSE otherwise.
*/ 
#define COMM_START_SEC_VAR_NOCACHE_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
volatile VAR(ComM_NmStartUpIndicatedType, COMM_VAR_NOINIT) ComM_NmStartUpIndicated[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COMM_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PostInitialized
**********************************************************************************************************************/
/** 
  \var    ComM_PostInitialized
  \brief  Post-Initialized state
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_PostInitializedType, COMM_VAR_NOINIT) ComM_PostInitialized[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqFullCom
  \brief  RAM array used to store user requests for channels as bitmasks. Each channel 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_UserReqFullComType, COMM_VAR_NOINIT) ComM_UserReqFullCom[8];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0, Channel0_To_User0] */
  /*     1 */  /* [ComMChannel_1, Channel1_To_User1] */
  /*     2 */  /* [ComMChannel_2, Channel2_To_User2] */
  /*     3 */  /* [ComMChannel_3, Channel3_To_User3] */
  /*     4 */  /* [ComMChannel_4, Channel4_To_User4] */
  /*     5 */  /* [ComMChannel_5, Channel5_To_User5] */
  /*     6 */  /* [ComMChannel_6, Channel6_To_User6] */
  /*     7 */  /* [ComMChannel_7, Channel7_To_User7] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA ROM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_MemMap */ 
#include "ComM_vMemMap.h"

CONST(ComM_InhibitionStatusType, COMM_CONST) ComM_ECUGroupClassInit = 0x0; /* PRQA S 1533 */ /* MD_ComM_1533 */


#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_MemMap */ 
#include "ComM_vMemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ INTERNAL DATA RAM
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA RAM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "ComM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_0
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_0(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)0 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_1
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_1(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)1 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_2
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_2(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)2 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_3
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_3(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)3 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_4
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_4(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)4 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_5
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_5(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)5 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_6
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_6(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)6 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_7
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_7(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)7 );
}


#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "ComM_vMemMap.h"

