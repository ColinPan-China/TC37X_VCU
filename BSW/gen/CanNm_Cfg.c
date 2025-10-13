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
 *            Module: CanNm
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanNm_Cfg.c
 *   Generation Time: 2025-10-13 13:53:07
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#define CANNM_CFG_SOURCE

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2_0779 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CanNm_Cfg.h"

#include "PduR_Cfg.h"

#include "CanIf_Cfg.h"

#include "Nm.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
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
  CanNm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_ChannelConfig
  \details
  Element                   Description
  ActiveWakeUpBitEnabled    Determines if Active WUP Bit Handling is active or not
  ComControlEnabled         Determines if Com Control is active or not
  NodeIdEnabled             Determines if Node Ids are enabled or not
  ChannelId                 Channel ID configured for the respective instance of the NM.
  MsgCycleTime              Period of a NM message [ms]. It determines the periodic rate in the periodic transmission mode.
  MsgTimeoutTime            Transmission Timeout [ms] of NM message. If there is no transmission confirmation by the CAN Interface within this timeout, the CAN NM module shall give an error notification.
  PduCbvPosition            Control Bit Vector Position in the PDU
  PduNidPosition            Node ID Position in the PDU
  RemoteSleepIndTime        Timeout for Remote Sleep Indication [ms].
  RepeatMessageTime         Timeout for Repeat Message State [ms].
  TimeoutTime               Timeout for the NM messages [ms].
  WaitBusSleepTime          Timeout for bus calm down phase [ms].
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanNm_ChannelConfigType, CANNM_CONST) CanNm_ChannelConfig[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ActiveWakeUpBitEnabled  ComControlEnabled  NodeIdEnabled  ChannelId                                                            MsgCycleTime  MsgTimeoutTime  PduCbvPosition    PduNidPosition    RemoteSleepIndTime  RepeatMessageTime  TimeoutTime  WaitBusSleepTime        Referable Keys */
  { /*     0 */                   TRUE,             FALSE,          TRUE, NmConf_NmChannelConfig_CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac,          50u,             6u, CANNM_PDU_BYTE_1, CANNM_PDU_BYTE_0,                 0u,              150u,        200u,             201u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  { /*     1 */                   TRUE,              TRUE,          TRUE, NmConf_NmChannelConfig_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d,          50u,             6u, CANNM_PDU_BYTE_1, CANNM_PDU_BYTE_0,                 0u,              150u,        200u,             201u },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  { /*     2 */                  FALSE,             FALSE,         FALSE,                  NmConf_NmChannelConfig_CN_TC37X_VCU_CAN01_70b1f95e,          50u,             6u, CANNM_PDU_BYTE_1, CANNM_PDU_BYTE_0,                 0u,              150u,        200u,             201u }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PbChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_PbChannelConfig
  \details
  Element                               Description
  PnEnabled                         
  MsgCycleOffset                    
  NodeId                            
  RxMessageDataEndIdx                   the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageDataLength                   the number of relations pointing to CanNm_RxMessageData
  RxMessageDataStartIdx                 the start index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_CBVIdx                  the index of the 0:1 relation pointing to CanNm_RxMessageData
  RxMessageData_NIDIdx                  the index of the 0:1 relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataEndIdx          the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataLength          the number of relations pointing to CanNm_RxMessageData
  RxMessageData_UserDataStartIdx        the start index of the 0:n relation pointing to CanNm_RxMessageData
  TxMessageDataEndIdx                   the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageDataLength                   the number of relations pointing to CanNm_TxMessageData
  TxMessageDataStartIdx                 the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_CBVIdx                  the index of the 0:1 relation pointing to CanNm_TxMessageData
  TxMessageData_NIDIdx                  the index of the 0:1 relation pointing to CanNm_TxMessageData
  TxMessageData_PnFilterMaskEndIdx      the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_PnFilterMaskStartIdx    the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataEndIdx          the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataLength          the number of relations pointing to CanNm_TxMessageData
  TxMessageData_UserDataStartIdx        the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxPduId                           
  TxUserDataPduId                   
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanNm_PbChannelConfigType, CANNM_CONST) CanNm_PbChannelConfig[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PnEnabled  MsgCycleOffset  NodeId  RxMessageDataEndIdx  RxMessageDataLength  RxMessageDataStartIdx  RxMessageData_CBVIdx  RxMessageData_NIDIdx  RxMessageData_UserDataEndIdx  RxMessageData_UserDataLength  RxMessageData_UserDataStartIdx  TxMessageDataEndIdx  TxMessageDataLength  TxMessageDataStartIdx  TxMessageData_CBVIdx  TxMessageData_NIDIdx  TxMessageData_PnFilterMaskEndIdx  TxMessageData_PnFilterMaskStartIdx  TxMessageData_UserDataEndIdx  TxMessageData_UserDataLength  TxMessageData_UserDataStartIdx  TxPduId                                                                       TxUserDataPduId                                                                              Referable Keys */
  { /*     0 */      TRUE,             0u,    28u,                  8u,                  8u,                    0u,                   1u,                   0u,                           8u,                           6u,                             2u,                  8u,                  8u,                    0u,                   1u,                   0u,                               8u,                                 2u,                           8u,                           6u,                             2u, CanIfConf_CanIfTxPduCfg_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx, PduRConf_PduRDestPdu_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_00753c97_Tx_90908bdc_Tx },  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095] */
  { /*     1 */      TRUE,             0u,    28u,                 16u,                  8u,                    8u,                   9u,                   8u,                          16u,                           6u,                            10u,                 16u,                  8u,                    8u,                   9u,                   8u,                              16u,                                10u,                          16u,                           6u,                            10u, CanIfConf_CanIfTxPduCfg_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_21d4212a_Tx, PduRConf_PduRDestPdu_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_3f284506_Tx_09413bc2_Tx },  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf] */
  { /*     2 */     FALSE,             0u,    28u,                 24u,                  8u,                   16u,                  17u,                  16u,                          24u,                           6u,                            18u,                 24u,                  8u,                   16u,                  17u,                  16u,                              24u,                                18u,                          24u,                           6u,                            18u,          CanIfConf_CanIfTxPduCfg_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx,          PduRConf_PduRDestPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_b1a53ae9_Tx_3e8314bc_Tx }   /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnFilterMask
**********************************************************************************************************************/
#define CANNM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanNm_PnFilterMaskType, CANNM_CONST) CanNm_PnFilterMask[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PnFilterMask      Referable Keys */
  /*     0 */            0u,  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte0] */
  /*     1 */          133u,  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte1] */
  /*     2 */            0u,  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte2] */
  /*     3 */            0u,  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte3] */
  /*     4 */            0u,  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte4] */
  /*     5 */            0u   /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte5] */
};
#define CANNM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_SysToNmChInd
**********************************************************************************************************************/
/** 
  \var    CanNm_SysToNmChInd
  \brief  Channel indirection: System Channel handle to NM channel handle
*/ 
#define CANNM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanNm_SysToNmChIndType, CANNM_CONST) CanNm_SysToNmChInd[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SysToNmChInd           */
  /*     0 */                     0u,
  /*     1 */                     1u,
  /*     2 */  CANNM_NO_SYSTONMCHIND,
  /*     3 */                     2u,
  /*     4 */  CANNM_NO_SYSTONMCHIND,
  /*     5 */  CANNM_NO_SYSTONMCHIND,
  /*     6 */  CANNM_NO_SYSTONMCHIND,
  /*     7 */  CANNM_NO_SYSTONMCHIND
};
#define CANNM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CommState
**********************************************************************************************************************/
/** 
  \var    CanNm_CommState
  \brief  Internal state for the application's need for communication.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_CommStateUType, CANNM_VAR_NOINIT) CanNm_CommState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CoordReadyToSleepState
**********************************************************************************************************************/
/** 
  \var    CanNm_CoordReadyToSleepState
  \brief  State for Rx of Coordinator Sleep Ready Bit:
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_CoordReadyToSleepStateUType, CANNM_VAR_NOINIT) CanNm_CoordReadyToSleepState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_ModuleInitialized
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_ModuleInitializedType, CANNM_VAR_ZERO_INIT) CanNm_ModuleInitialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgConfirmationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgConfirmationFlag
  \brief  Message Confirmation Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_MsgConfirmationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgConfirmationFlag;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgIndicationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgIndicationFlag
  \brief  Message Indication Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_MsgIndicationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgIndicationFlag;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgRequest
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgRequest
  \brief  Internal Message Request Variable
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_MsgRequestUType, CANNM_VAR_NOINIT) CanNm_MsgRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimeoutTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_MsgTimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimeoutTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgTimer
  \brief  Timer for NM message transmission.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_MsgTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_NetworkRestartFlag
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_NetworkRestartFlagUType, CANNM_VAR_NOINIT) CanNm_NetworkRestartFlag;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_NmState
**********************************************************************************************************************/
/** 
  \var    CanNm_NmState
  \brief  Current state of the state machine
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_NmStateUType, CANNM_VAR_NOINIT) CanNm_NmState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnClusterReq
**********************************************************************************************************************/
/** 
  \var    CanNm_PnClusterReq
  \brief  Internal Cluster Request Buffer
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_PnClusterReqUType, CANNM_VAR_NOINIT) CanNm_PnClusterReq;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte0] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte1] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte2] */
  /*     3 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte3] */
  /*     4 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte4] */
  /*     5 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnClusterReqNew
**********************************************************************************************************************/
/** 
  \var    CanNm_PnClusterReqNew
  \brief  Internal Cluster Request Buffer
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_PnClusterReqNewUType, CANNM_VAR_NOINIT) CanNm_PnClusterReqNew;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte0] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte1] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte2] */
  /*     3 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte3] */
  /*     4 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte4] */
  /*     5 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnClusterResetTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_PnClusterResetTimerUType, CANNM_VAR_NOINIT) CanNm_PnClusterResetTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte0] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte1] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte2] */
  /*     3 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte3] */
  /*     4 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte4] */
  /*     5 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmPnInfo/CanNmPnFilterMaskByte5] */

#define CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnMessageFilterDeactivationIndicated
**********************************************************************************************************************/
/** 
  \var    CanNm_PnMessageFilterDeactivationIndicated
  \brief  Partial Networking: Message Reception Filter shall be disabled.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_PnMessageFilterDeactivationIndicatedUType, CANNM_VAR_NOINIT) CanNm_PnMessageFilterDeactivationIndicated;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PnMessageFilterEnabled
**********************************************************************************************************************/
/** 
  \var    CanNm_PnMessageFilterEnabled
  \brief  Partial Networking: Message Reception Filter is enabled.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_PnMessageFilterEnabledUType, CANNM_VAR_NOINIT) CanNm_PnMessageFilterEnabled;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RepeatMsgTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_RepeatMsgTimerUType, CANNM_VAR_NOINIT) CanNm_RepeatMsgTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_RxMessageDataType, CANNM_VAR_NOINIT) CanNm_RxMessageData[24];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_CBV] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData] */
  /*     7 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData] */
  /*     8 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_NID] */
  /*     9 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_CBV] */
  /*    10 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData] */
  /*    15 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData] */
  /*    16 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_NID] */
  /*    17 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_CBV] */
  /*    18 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData] */
  /*    23 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TimeoutTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_TimeoutTimer
  \brief  Timer for NM Algorithm.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_TimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_TimeoutTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlState
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlState
  \brief  Message transmission control state.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_TxControlStateUType, CANNM_VAR_NOINIT) CanNm_TxControlState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlStateRequest
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlStateRequest
  \brief  Message transmission control state request.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_TxControlStateRequestUType, CANNM_VAR_NOINIT) CanNm_TxControlStateRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_TxMessageDataType, CANNM_VAR_NOINIT) CanNm_TxMessageData[24];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_CBV] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_PnFilterMask] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_PnFilterMask] */
  /*     7 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_PnFilterMask] */
  /*     8 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_NID] */
  /*     9 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_CBV] */
  /*    10 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_PnFilterMask] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_PnFilterMask] */
  /*    15 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_PnFilterMask] */
  /*    16 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_NID] */
  /*    17 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_CBV] */
  /*    18 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_PnFilterMask] */
  /*   ... */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_PnFilterMask] */
  /*    23 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_UserData, /ActiveEcuC/CanNm/CanNmGlobalConfig/TC37X_VCU_CAN01_CAN_f1ec184a_PnFilterMask] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_WaitBusSleepTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanNm_WaitBusSleepTimerUType, CANNM_VAR_NOINIT) CanNm_WaitBusSleepTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_TC37X_VCU_CAN01_70b1f95e] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: CanNm_Cfg.c
**********************************************************************************************************************/

