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
 *   Generation Time: 2025-03-25 11:22:05
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
CONST(ComM_ChannelType, COMM_CONST) ComM_Channel[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BusType            NmSupport  SilentSupport  MinFullComTime  NmLightDuration  NmType                      WakeupState                      GetCurrentBusSMModeApi   RequestBusSMModeApi         Referable Keys */
  { /*     0 */ COMM_BUS_TYPE_CAN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_0] */
  { /*     1 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_1] */
  { /*     2 */ COMM_BUS_TYPE_CAN,      TRUE,          TRUE,             0u,              0u,  COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP      , CanSM_GetCurrentComMode, CanSM_RequestComMode },  /* [ComMChannel_2] */
  { /*     3 */ COMM_BUS_TYPE_LIN,     FALSE,         FALSE,           250u,            100u, COMM_LIGHT_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED, LinSM_GetCurrentComMode, LinSM_RequestComMode }   /* [ComMChannel_3] */
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
  PncPbIndEndIdx            the end index of the 0:n relation pointing to ComM_PncPbInd
  PncPbIndStartIdx          the start index of the 0:n relation pointing to ComM_PncPbInd
  UserReqFullComEndIdx      the end index of the 0:n relation pointing to ComM_UserReqFullCom
  UserReqFullComStartIdx    the start index of the 0:n relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_ChannelPbType, COMM_CONST) ComM_ChannelPb[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PncPbIndEndIdx                     PncPbIndStartIdx                     UserReqFullComEndIdx  UserReqFullComStartIdx */
  { /*     0 */ COMM_NO_PNCPBINDENDIDXOFCHANNELPB, COMM_NO_PNCPBINDSTARTIDXOFCHANNELPB,                   1u,                     0u },
  { /*     1 */                                3u,                                  0u,                   2u,                     1u },
  { /*     2 */ COMM_NO_PNCPBINDENDIDXOFCHANNELPB, COMM_NO_PNCPBINDSTARTIDXOFCHANNELPB,                   3u,                     2u },
  { /*     3 */ COMM_NO_PNCPBINDENDIDXOFCHANNELPB, COMM_NO_PNCPBINDSTARTIDXOFCHANNELPB,                   4u,                     3u }
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
  ComM_Pnc
**********************************************************************************************************************/
/** 
  \var    ComM_Pnc
  \brief  Contains PreCompile configuration parameters of partial networks
  \details
  Element      Description
  ClearMask    Clear mask for the partial network related signals (EIRA, ERA)
  PncId        System ID of the partial network
  SetMask      Set mask for the partial network related signals (EIRA, ERA)
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_PncType, COMM_CONST) ComM_Pnc[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ClearMask  PncId  SetMask        Referable Keys */
  { /*     0 */     0xFEu,   24u,   0x01u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24] */
  { /*     1 */     0xFBu,   26u,   0x04u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26] */
  { /*     2 */     0x7Fu,   31u,   0x80u }   /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncPb
**********************************************************************************************************************/
/** 
  \var    ComM_PncPb
  \brief  Contains PostBuild configuration parameters of partial networks
  \details
  Element                      Description
  PncChannelMappingEndIdx      the end index of the 0:n relation pointing to ComM_PncChannelMapping
  PncChannelMappingStartIdx    the start index of the 0:n relation pointing to ComM_PncChannelMapping
  PncSignalIndEndIdx           the end index of the 0:n relation pointing to ComM_PncSignalInd
  PncSignalIndStartIdx         the start index of the 0:n relation pointing to ComM_PncSignalInd
  UserReqPncFullComEndIdx      the end index of the 1:n relation pointing to ComM_UserReqPncFullCom
  UserReqPncFullComStartIdx    the start index of the 1:n relation pointing to ComM_UserReqPncFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_PncPbType, COMM_CONST) ComM_PncPb[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PncChannelMappingEndIdx  PncChannelMappingStartIdx  PncSignalIndEndIdx  PncSignalIndStartIdx  UserReqPncFullComEndIdx  UserReqPncFullComStartIdx        Referable Keys */
  { /*     0 */                      1u,                        0u,                 1u,                   0u,                      1u,                        0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24, ComMChannel_1] */
  { /*     1 */                      2u,                        1u,                 2u,                   1u,                      2u,                        1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26, ComMChannel_1] */
  { /*     2 */                      3u,                        2u,                 3u,                   2u,                      3u,                        2u }   /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31, ComMChannel_1] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncPbInd
**********************************************************************************************************************/
/** 
  \var    ComM_PncPbInd
  \brief  the indexes of the 1:1 sorted relation pointing to ComM_PncPb
*/ 
#define COMM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_PncPbIndType, COMM_CONST) ComM_PncPbInd[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PncPbInd      Referable Keys */
  /*     0 */        0u,  /* [ComMChannel_1] */
  /*     1 */        1u,  /* [ComMChannel_1] */
  /*     2 */        2u   /* [ComMChannel_1] */
};
#define COMM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncSignal
**********************************************************************************************************************/
/** 
  \var    ComM_PncSignal
  \brief  Information about partial network signals (EIRA, ERA)
  \details
  Element                    Description
  ChannelIdx                 the index of the 0:1 relation pointing to ComM_Channel
  PncSignalValuesEndIdx      the end index of the 0:n relation pointing to ComM_PncSignalValues
  PncSignalValuesStartIdx    the start index of the 0:n relation pointing to ComM_PncSignalValues
  Type                       Partial network signal type
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_PncSignalType, COMM_CONST) ComM_PncSignal[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ChannelIdx                     PncSignalValuesEndIdx  PncSignalValuesStartIdx  Type                                Referable Keys */
  { /*     0 */ COMM_NO_CHANNELIDXOFPNCSIGNAL,                    6u,                      0u, COMM_EIRA_RX_TYPEOFPNCSIGNAL },  /* [ComM_ComConf_ComSignal_PNC_Can00_ComSignal_Rx] */
  { /*     1 */                            1u,                   12u,                      6u, COMM_EIRA_TX_TYPEOFPNCSIGNAL }   /* [ComM_ComConf_ComSignal_VCU_Tx_51Ch_NM_PNCData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c1eb5e4b_Tx, /ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24, /ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26, /ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31] */
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
  Element                    Description
  PncUser                    decides if a user is a partial network user or a direct channel user
  UserByteMaskEndIdx         the end index of the 0:n relation pointing to ComM_UserByteMask
  UserByteMaskStartIdx       the start index of the 0:n relation pointing to ComM_UserByteMask
  UserPncByteMaskEndIdx      the end index of the 0:n relation pointing to ComM_UserPncByteMask
  UserPncByteMaskLength      the number of relations pointing to ComM_UserPncByteMask
  UserPncByteMaskStartIdx    the start index of the 0:n relation pointing to ComM_UserPncByteMask
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_UserType, COMM_CONST) ComM_User[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PncUser  UserByteMaskEndIdx  UserByteMaskStartIdx  UserPncByteMaskEndIdx                UserPncByteMaskLength  UserPncByteMaskStartIdx                      Comment */
  { /*     0 */   FALSE,                 1u,                   0u, COMM_NO_USERPNCBYTEMASKENDIDXOFUSER,                    0u, COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER },  /* [CN_KAMA_FP_EPT_0303_b67fd6a6] */
  { /*     1 */   FALSE,                 2u,                   1u, COMM_NO_USERPNCBYTEMASKENDIDXOFUSER,                    0u, COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER },  /* [CN_TC37X_VCU_CAN00_b1b4f272] */
  { /*     2 */   FALSE,                 3u,                   2u, COMM_NO_USERPNCBYTEMASKENDIDXOFUSER,                    0u, COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER },  /* [CN_TC37X_VCU_CAN01_5e76994c] */
  { /*     3 */   FALSE,                 4u,                   3u, COMM_NO_USERPNCBYTEMASKENDIDXOFUSER,                    0u, COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER },  /* [CN_LIN00_984dfd9e] */
  { /*     4 */    TRUE,                 5u,                   4u,                                  1u,                    1u,                                    0u },  /* [ComMUser_PNC24] */
  { /*     5 */    TRUE,                 6u,                   5u,                                  2u,                    1u,                                    1u },  /* [ComMUser_PNC26] */
  { /*     6 */    TRUE,                 7u,                   6u,                                  3u,                    1u,                                    2u }   /* [ComMUser_PNC31] */
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
  ClearMask            Clear-mask for clearing the bit which corresponds to this user
  SetMask              Set-mask for setting the bit which corresponds to this user
  UserReqFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Channel  ClearMask  SetMask  UserReqFullComIdx        Referable Keys */
  { /*     0 */      0u,     0xFEu,   0x01u,                0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_KAMA_FP_EPT_0303_b67fd6a6] */
  { /*     1 */      1u,     0xFEu,   0x01u,                1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN00_b1b4f272] */
  { /*     2 */      2u,     0xFEu,   0x01u,                2u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_5e76994c] */
  { /*     3 */      3u,     0xFEu,   0x01u,                3u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN00_984dfd9e] */
  { /*     4 */      1u,     0xF7u,   0x08u,                1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC24] */
  { /*     5 */      1u,     0xFBu,   0x04u,                1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC26] */
  { /*     6 */      1u,     0xFDu,   0x02u,                1u }   /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC31] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserPncByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserPncByteMask
  \brief  Each partial network user has N entries in this array (N = # pncs attached to this user). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqPncFullCom
  \details
  Element                 Description
  PncID                   System Id of the partial network which is requested by this entry
  PncIdx                  the index of the 1:1 relation pointing to ComM_Pnc
  UserReqPncFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqPncFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComM_UserPncByteMaskType, COMM_CONST) ComM_UserPncByteMask[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PncID  PncIdx  UserReqPncFullComIdx        Referable Keys */
  { /*     0 */   24u,     0u,                   0u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC24] */
  { /*     1 */   26u,     1u,                   1u },  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC26] */
  { /*     2 */   31u,     2u,                   2u }   /* [/ActiveEcuC/ComM/ComMConfigSet/ComMUser_PNC31] */
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

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ActivePncComMode
**********************************************************************************************************************/
/** 
  \var    ComM_ActivePncComMode
  \brief  stores the current partial network state
*/ 
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_ActivePncComModeUType, COMM_VAR_NOINIT) ComM_ActivePncComMode;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31] */

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

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_BusPncComModeReq
**********************************************************************************************************************/
/** 
  \var    ComM_BusPncComModeReq
  \brief  Stores the partial network state requested by external requests
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_BusPncComModeReqUType, COMM_VAR_NOINIT) ComM_BusPncComModeReq;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
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
  ComM_PncPSleepTimer
**********************************************************************************************************************/
/** 
  \var    ComM_PncPSleepTimer
  \brief  partial network prepare sleep timer
*/ 
#define COMM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_PncPSleepTimerUType, COMM_VAR_NOINIT) ComM_PncPSleepTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31] */

#define COMM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncSignalValues
**********************************************************************************************************************/
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_PncSignalValuesUType, COMM_VAR_NOINIT) ComM_PncSignalValues;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComM_ComConf_ComSignal_PNC_Can00_ComSignal_Rx] */
  /*   ... */  /* [ComM_ComConf_ComSignal_PNC_Can00_ComSignal_Rx] */
  /*     5 */  /* [ComM_ComConf_ComSignal_PNC_Can00_ComSignal_Rx] */
  /*     6 */  /* [ComM_ComConf_ComSignal_VCU_Tx_51Ch_NM_PNCData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c1eb5e4b_Tx] */
  /*   ... */  /* [ComM_ComConf_ComSignal_VCU_Tx_51Ch_NM_PNCData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c1eb5e4b_Tx] */
  /*    11 */  /* [ComM_ComConf_ComSignal_VCU_Tx_51Ch_NM_PNCData_oVCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c1eb5e4b_Tx] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_PncToChannelRoutingState
**********************************************************************************************************************/
/** 
  \var    ComM_PncToChannelRoutingState
  \brief  Bit flags describing the current PNC Routing state per channel
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_PncToChannelRoutingStateUType, COMM_VAR_NOINIT) ComM_PncToChannelRoutingState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
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
VAR(ComM_UserReqFullComType, COMM_VAR_NOINIT) ComM_UserReqFullCom[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMChannel_0, Channel0_To_User0] */
  /*     1 */  /* [ComMChannel_1, Channel1_To_User1, Channel1_To_User6, Channel1_To_User5, Channel1_To_User4] */
  /*     2 */  /* [ComMChannel_2, Channel2_To_User2] */
  /*     3 */  /* [ComMChannel_3, Channel3_To_User3] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqPncFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqPncFullCom
  \brief  RAM array used to store user requests for PNCs as bitmasks. Each PNC 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "ComM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_UserReqPncFullComType, COMM_VAR_NOINIT) ComM_UserReqPncFullCom[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_24, Pnc24_To_User4] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_26, Pnc26_To_User5] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/ComMPnc_31, Pnc31_To_User6] */

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
  FUNCTION: ComM_ComCbk_PNC_Can00_ComSignal_Rx
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Notification that an EIRA_RX or ERA signal data has changed. 
 *       Receive the data of the corresponding signal and trigger signal data processing.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_ComCbk_PNC_Can00_ComSignal_Rx(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 EiraOrEraValuesRx[COMM_PNC_SIGNAL_LENGTH] = {0};

  /* ----- Implementation ----------------------------------------------- */
  /* - #10 Notification that an EIRA_RX or ERA signal data has changed. 
   *       Receive the data of the corresponding signal and trigger signal data processing. */
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_PNC_Can00_ComSignal_Rx, &EiraOrEraValuesRx[0]); /* SBSW_COMM_CALL_COM_RECEIVE_SIGNAL */ /* PRQA S 0315 */ /* MD_ComM_0315 */

    ComM_PncProcessRxSignalEira(0, &EiraOrEraValuesRx[0]); /* SBSW_COMM_CALL_WITH_PTR_TO_CONST */
  }

}
#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "ComM_vMemMap.h"

